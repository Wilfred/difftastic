#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 404
#define SYMBOL_COUNT 201
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
  anon_sym_foreign = 17,
  sym_foreign_export = 18,
  anon_sym_ccall = 19,
  anon_sym_stdcall = 20,
  anon_sym_cplusplus = 21,
  anon_sym_jvm = 22,
  anon_sym_dotnet = 23,
  anon_sym_unsafe = 24,
  anon_sym_safe = 25,
  anon_sym_default = 26,
  anon_sym_do = 27,
  anon_sym_class = 28,
  anon_sym_instance = 29,
  anon_sym_infixl = 30,
  anon_sym_infixr = 31,
  anon_sym_infix = 32,
  anon_sym_BQUOTE = 33,
  anon_sym_COLON = 34,
  anon_sym_COLON_COLON = 35,
  anon_sym_DASH_GT = 36,
  anon_sym_data = 37,
  anon_sym_EQ = 38,
  anon_sym_EQ_GT = 39,
  anon_sym_PIPE = 40,
  anon_sym_deriving = 41,
  anon_sym_newtype = 42,
  anon_sym_BANG = 43,
  anon_sym_type = 44,
  sym_variable_identifier = 45,
  sym_constructor_identifier = 46,
  sym_module_identifier = 47,
  sym_comment = 48,
  sym_float = 49,
  anon_sym_SQUOTE = 50,
  anon_sym_DQUOTE = 51,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 52,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 53,
  anon_sym__ = 54,
  sym__ascii_large = 55,
  anon_sym_POUND = 56,
  anon_sym_DOLLAR = 57,
  anon_sym_PERCENT = 58,
  anon_sym_AMP = 59,
  anon_sym_1 = 60,
  anon_sym_PLUS = 61,
  anon_sym_DOT = 62,
  anon_sym_SLASH = 63,
  anon_sym_LT = 64,
  anon_sym_GT = 65,
  anon_sym_QMARK = 66,
  anon_sym_AT = 67,
  anon_sym_CARET = 68,
  anon_sym_DASH = 69,
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
  sym__expression = 135,
  sym_foreign = 136,
  sym_foreign_import = 137,
  sym_calling_convention = 138,
  sym_safety = 139,
  sym_default = 140,
  sym_do_expression = 141,
  sym_statement_list = 142,
  sym__statement = 143,
  sym_type_class = 144,
  sym_general_declarations = 145,
  sym_type_class_instance = 146,
  sym__general_declaration = 147,
  sym_fixity = 148,
  sym__op = 149,
  sym_variable_symbol = 150,
  sym_constructor_symbol = 151,
  sym_type_signature = 152,
  sym__type = 153,
  sym_function_type = 154,
  sym_algebraic_datatype = 155,
  sym_context = 156,
  sym_class = 157,
  sym_constructors = 158,
  sym_constructor = 159,
  sym_deriving = 160,
  sym_newtype = 161,
  sym_new_constructor = 162,
  sym_field = 163,
  sym_strict = 164,
  sym_type_synonym = 165,
  sym__literal = 166,
  sym__identifier = 167,
  sym_simple_type = 168,
  sym_integer = 169,
  sym_char = 170,
  sym_string = 171,
  sym__gap = 172,
  sym__graphic = 173,
  sym__small = 174,
  sym__large = 175,
  sym__symbol = 176,
  sym__special = 177,
  sym__escape = 178,
  sym__char_escape = 179,
  sym__ascii = 180,
  sym__cntrl = 181,
  sym_fields = 182,
  aux_sym_module_repeat1 = 183,
  aux_sym_module_exports_repeat1 = 184,
  aux_sym_export_repeat1 = 185,
  aux_sym_import_specification_repeat1 = 186,
  aux_sym_statement_list_repeat1 = 187,
  aux_sym_type_class_repeat1 = 188,
  aux_sym_general_declarations_repeat1 = 189,
  aux_sym_fixity_repeat1 = 190,
  aux_sym_variable_symbol_repeat1 = 191,
  aux_sym_type_signature_repeat1 = 192,
  aux_sym_context_repeat1 = 193,
  aux_sym_constructors_repeat1 = 194,
  aux_sym_constructor_repeat1 = 195,
  aux_sym_field_repeat1 = 196,
  aux_sym_string_repeat1 = 197,
  aux_sym__escape_repeat1 = 198,
  aux_sym__escape_repeat2 = 199,
  aux_sym_fields_repeat1 = 200,
  alias_sym_type_constructor = 201,
  alias_sym_type_variable = 202,
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
        ADVANCE(252);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '0')
        ADVANCE(259);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(265);
      if (lookahead == 'c')
        ADVANCE(266);
      if (lookahead == 'd')
        ADVANCE(272);
      if (lookahead == 'f')
        ADVANCE(283);
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead == 'm')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(314);
      if (lookahead == 't')
        ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(169);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
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
      if (lookahead == 'f')
        ADVANCE(208);
      if (lookahead == 'i')
        ADVANCE(215);
      if (lookahead == 'm')
        ADVANCE(233);
      if (lookahead == 'n')
        ADVANCE(239);
      if (lookahead == 't')
        ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(170);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(250);
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
      if (lookahead == 'o')
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
      if (lookahead == 'r')
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
      if (lookahead == 'e')
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
      if (lookahead == 'i')
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
      if (lookahead == 'g')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
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
    case 214:
      ACCEPT_TOKEN(anon_sym_foreign);
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
    case 215:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(216);
      if (lookahead == 'n')
        ADVANCE(221);
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
      if (lookahead == 'p')
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
      if (lookahead == 'o')
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
    case 219:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 220:
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
    case 221:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(222);
      if (lookahead == 's')
        ADVANCE(227);
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
      if (lookahead == 'i')
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
      if (lookahead == 'x')
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
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'r')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 225:
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
    case 226:
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
    case 227:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
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
      if (lookahead == 'a')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'n')
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
      if (lookahead == 'c')
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
    case 233:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
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
      if (lookahead == 'd')
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
      if (lookahead == 'u')
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
      if (lookahead == 'l')
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
    case 239:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
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
      if (lookahead == 'w')
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
      if (lookahead == 't')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 245:
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
    case 246:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 249:
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
    case 250:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(250);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(250);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(251);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(251);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 252:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(170);
      if (lookahead == '\r')
        ADVANCE(252);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '0')
        ADVANCE(259);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(265);
      if (lookahead == 'c')
        ADVANCE(266);
      if (lookahead == 'd')
        ADVANCE(272);
      if (lookahead == 'f')
        ADVANCE(283);
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead == 'm')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(314);
      if (lookahead == 't')
        ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(169);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 253:
      if (lookahead == ')')
        ADVANCE(254);
      if (lookahead == ',')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_constructor_identifier);
      END_STATE();
    case 255:
      if (lookahead == ')')
        ADVANCE(254);
      if (lookahead == ',')
        ADVANCE(255);
      END_STATE();
    case 256:
      if (lookahead == '>')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == ')')
        ADVANCE(254);
      END_STATE();
    case 258:
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == 'E')
        ADVANCE(163);
      if (lookahead == 'O')
        ADVANCE(260);
      if (lookahead == 'X')
        ADVANCE(262);
      if (lookahead == 'e')
        ADVANCE(163);
      if (lookahead == 'o')
        ADVANCE(260);
      if (lookahead == 'x')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(261);
      END_STATE();
    case 262:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(263);
      END_STATE();
    case 264:
      if (lookahead == ':')
        ADVANCE(110);
      END_STATE();
    case 265:
      if (lookahead == 'n')
        SKIP(169);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'l')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'a')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 's')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 's')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'a')
        ADVANCE(273);
      if (lookahead == 'e')
        ADVANCE(276);
      if (lookahead == 'o')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 't')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'a')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'f')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'a')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'u')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'l')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 't')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'o')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'r')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'g')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'n')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'm')
        ADVANCE(291);
      if (lookahead == 'n')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'p')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'o')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'r')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 't')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'f')
        ADVANCE(297);
      if (lookahead == 's')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'x')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'l')
        ADVANCE(300);
      if (lookahead == 'r')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 't')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'a')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'n')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'c')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'o')
        ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'd')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'u')
        ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'l')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'w')
        ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 't')
        ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'y')
        ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'p')
        ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'y')
        ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'p')
        ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(325);
      if (lookahead == '.')
        ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(326);
      if (lookahead == '.')
        ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(326);
      END_STATE();
    case 327:
      if (lookahead == '\n')
        ADVANCE(328);
      if (lookahead == '\r')
        ADVANCE(330);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(331);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(327);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(326);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 328:
      if (lookahead == '\n')
        ADVANCE(328);
      if (lookahead == '\r')
        ADVANCE(328);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 329:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(328);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 330:
      if (lookahead == '\n')
        ADVANCE(328);
      if (lookahead == '\r')
        ADVANCE(330);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(331);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(327);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(326);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 331:
      if (lookahead == 'n')
        SKIP(327);
      END_STATE();
    case 332:
      if (lookahead == '\n')
        ADVANCE(333);
      if (lookahead == '\r')
        ADVANCE(344);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(345);
      if (lookahead == 'q')
        ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(332);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 333:
      if (lookahead == '\n')
        ADVANCE(333);
      if (lookahead == '\r')
        ADVANCE(333);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(334);
      if (lookahead == 'q')
        ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(250);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 334:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(333);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 343:
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
    case 344:
      if (lookahead == '\n')
        ADVANCE(333);
      if (lookahead == '\r')
        ADVANCE(344);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(345);
      if (lookahead == 'q')
        ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(332);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 345:
      if (lookahead == 'n')
        SKIP(332);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'u')
        ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'a')
        ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'l')
        ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'f')
        ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'd')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 355:
      if (lookahead == '\n')
        ADVANCE(356);
      if (lookahead == '\r')
        ADVANCE(406);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(407);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(408);
      if (lookahead == '\\')
        SKIP(409);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'c')
        ADVANCE(410);
      if (lookahead == 'd')
        ADVANCE(423);
      if (lookahead == 'e')
        ADVANCE(429);
      if (lookahead == 'i')
        ADVANCE(435);
      if (lookahead == 'j')
        ADVANCE(441);
      if (lookahead == 's')
        ADVANCE(444);
      if (lookahead == 'w')
        ADVANCE(451);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(355);
      END_STATE();
    case 356:
      if (lookahead == '\n')
        ADVANCE(356);
      if (lookahead == '\r')
        ADVANCE(356);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == ':')
        ADVANCE(182);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '\\')
        ADVANCE(359);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'c')
        ADVANCE(360);
      if (lookahead == 'd')
        ADVANCE(373);
      if (lookahead == 'e')
        ADVANCE(379);
      if (lookahead == 'i')
        ADVANCE(385);
      if (lookahead == 'j')
        ADVANCE(391);
      if (lookahead == 's')
        ADVANCE(394);
      if (lookahead == 'w')
        ADVANCE(401);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(356);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 357:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 358:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 359:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(356);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 360:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(361);
      if (lookahead == 'p')
        ADVANCE(365);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 361:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(362);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 362:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(363);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 363:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(364);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_ccall);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 365:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(366);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 366:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(367);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 367:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(368);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 368:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 369:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(370);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 370:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(371);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 371:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_cplusplus);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 373:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(374);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 374:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
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
      if (lookahead == 'e')
        ADVANCE(377);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 377:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_dotnet);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 379:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
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
      if (lookahead == 'o')
        ADVANCE(382);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 382:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(383);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 383:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(384);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_foreign_export);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 385:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(386);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 386:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(387);
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
      if (lookahead == 'r')
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
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 391:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(392);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 392:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(393);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_jvm);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 394:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(395);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 395:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(396);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 396:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(397);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 397:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(398);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 398:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 399:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(400);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_stdcall);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 401:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(402);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 402:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
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
      if (lookahead == 'e')
        ADVANCE(405);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 406:
      if (lookahead == '\n')
        ADVANCE(356);
      if (lookahead == '\r')
        ADVANCE(406);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(407);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(408);
      if (lookahead == '\\')
        SKIP(409);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'c')
        ADVANCE(410);
      if (lookahead == 'd')
        ADVANCE(423);
      if (lookahead == 'e')
        ADVANCE(429);
      if (lookahead == 'i')
        ADVANCE(435);
      if (lookahead == 'j')
        ADVANCE(441);
      if (lookahead == 's')
        ADVANCE(444);
      if (lookahead == 'w')
        ADVANCE(451);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(355);
      END_STATE();
    case 407:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(105);
      END_STATE();
    case 408:
      if (lookahead == '>')
        ADVANCE(114);
      END_STATE();
    case 409:
      if (lookahead == 'n')
        SKIP(355);
      END_STATE();
    case 410:
      if (lookahead == 'c')
        ADVANCE(411);
      if (lookahead == 'p')
        ADVANCE(415);
      END_STATE();
    case 411:
      if (lookahead == 'a')
        ADVANCE(412);
      END_STATE();
    case 412:
      if (lookahead == 'l')
        ADVANCE(413);
      END_STATE();
    case 413:
      if (lookahead == 'l')
        ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_ccall);
      END_STATE();
    case 415:
      if (lookahead == 'l')
        ADVANCE(416);
      END_STATE();
    case 416:
      if (lookahead == 'u')
        ADVANCE(417);
      END_STATE();
    case 417:
      if (lookahead == 's')
        ADVANCE(418);
      END_STATE();
    case 418:
      if (lookahead == 'p')
        ADVANCE(419);
      END_STATE();
    case 419:
      if (lookahead == 'l')
        ADVANCE(420);
      END_STATE();
    case 420:
      if (lookahead == 'u')
        ADVANCE(421);
      END_STATE();
    case 421:
      if (lookahead == 's')
        ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_cplusplus);
      END_STATE();
    case 423:
      if (lookahead == 'o')
        ADVANCE(424);
      END_STATE();
    case 424:
      if (lookahead == 't')
        ADVANCE(425);
      END_STATE();
    case 425:
      if (lookahead == 'n')
        ADVANCE(426);
      END_STATE();
    case 426:
      if (lookahead == 'e')
        ADVANCE(427);
      END_STATE();
    case 427:
      if (lookahead == 't')
        ADVANCE(428);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_dotnet);
      END_STATE();
    case 429:
      if (lookahead == 'x')
        ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == 'p')
        ADVANCE(431);
      END_STATE();
    case 431:
      if (lookahead == 'o')
        ADVANCE(432);
      END_STATE();
    case 432:
      if (lookahead == 'r')
        ADVANCE(433);
      END_STATE();
    case 433:
      if (lookahead == 't')
        ADVANCE(434);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_foreign_export);
      END_STATE();
    case 435:
      if (lookahead == 'm')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == 'p')
        ADVANCE(437);
      END_STATE();
    case 437:
      if (lookahead == 'o')
        ADVANCE(438);
      END_STATE();
    case 438:
      if (lookahead == 'r')
        ADVANCE(439);
      END_STATE();
    case 439:
      if (lookahead == 't')
        ADVANCE(440);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 441:
      if (lookahead == 'v')
        ADVANCE(442);
      END_STATE();
    case 442:
      if (lookahead == 'm')
        ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_jvm);
      END_STATE();
    case 444:
      if (lookahead == 't')
        ADVANCE(445);
      END_STATE();
    case 445:
      if (lookahead == 'd')
        ADVANCE(446);
      END_STATE();
    case 446:
      if (lookahead == 'c')
        ADVANCE(447);
      END_STATE();
    case 447:
      if (lookahead == 'a')
        ADVANCE(448);
      END_STATE();
    case 448:
      if (lookahead == 'l')
        ADVANCE(449);
      END_STATE();
    case 449:
      if (lookahead == 'l')
        ADVANCE(450);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_stdcall);
      END_STATE();
    case 451:
      if (lookahead == 'h')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'e')
        ADVANCE(453);
      END_STATE();
    case 453:
      if (lookahead == 'r')
        ADVANCE(454);
      END_STATE();
    case 454:
      if (lookahead == 'e')
        ADVANCE(455);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 456:
      if (lookahead == '\n')
        ADVANCE(457);
      if (lookahead == '\r')
        ADVANCE(459);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(460);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(456);
      END_STATE();
    case 457:
      if (lookahead == '\n')
        ADVANCE(457);
      if (lookahead == '\r')
        ADVANCE(457);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(458);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(457);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 458:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(457);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 459:
      if (lookahead == '\n')
        ADVANCE(457);
      if (lookahead == '\r')
        ADVANCE(459);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(460);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(456);
      END_STATE();
    case 460:
      if (lookahead == 'n')
        SKIP(456);
      END_STATE();
    case 461:
      if (lookahead == '\n')
        ADVANCE(462);
      if (lookahead == '\r')
        ADVANCE(475);
      if (lookahead == '(')
        ADVANCE(476);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(477);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(478);
      if (lookahead == 'd')
        ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(461);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(487);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 462:
      if (lookahead == '\n')
        ADVANCE(462);
      if (lookahead == '\r')
        ADVANCE(462);
      if (lookahead == '(')
        ADVANCE(463);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(464);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(465);
      if (lookahead == 'd')
        ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(462);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(474);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 463:
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
    case 464:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 465:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(462);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 473:
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
    case 474:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(474);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(474);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 475:
      if (lookahead == '\n')
        ADVANCE(462);
      if (lookahead == '\r')
        ADVANCE(475);
      if (lookahead == '(')
        ADVANCE(476);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(477);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(478);
      if (lookahead == 'd')
        ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(461);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(487);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(254);
      if (lookahead == ',')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 478:
      if (lookahead == 'n')
        SKIP(461);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'r')
        ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'v')
        ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'n')
        ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'g')
        ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(487);
      END_STATE();
    case 488:
      if (lookahead == '\n')
        ADVANCE(489);
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
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(497);
      if (lookahead == '.')
        ADVANCE(498);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(499);
      if (lookahead == ':')
        ADVANCE(501);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(477);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(502);
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
        SKIP(488);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(500);
      END_STATE();
    case 489:
      if (lookahead == '\n')
        ADVANCE(489);
      if (lookahead == '\r')
        ADVANCE(489);
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
        ADVANCE(490);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == '0')
        ADVANCE(492);
      if (lookahead == ':')
        ADVANCE(494);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(464);
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
        ADVANCE(489);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(493);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 492:
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
        ADVANCE(493);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(493);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(489);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 496:
      if (lookahead == '\n')
        ADVANCE(489);
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
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(497);
      if (lookahead == '.')
        ADVANCE(498);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(499);
      if (lookahead == ':')
        ADVANCE(501);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(477);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(502);
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
        SKIP(488);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(500);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'O')
        ADVANCE(260);
      if (lookahead == 'X')
        ADVANCE(262);
      if (lookahead == 'o')
        ADVANCE(260);
      if (lookahead == 'x')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(500);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(500);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 503:
      if (lookahead == '\n')
        ADVANCE(504);
      if (lookahead == '\r')
        ADVANCE(506);
      if (lookahead == '(')
        ADVANCE(476);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(507);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(503);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 504:
      if (lookahead == '\n')
        ADVANCE(504);
      if (lookahead == '\r')
        ADVANCE(504);
      if (lookahead == '(')
        ADVANCE(463);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(504);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(250);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 505:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(504);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 506:
      if (lookahead == '\n')
        ADVANCE(504);
      if (lookahead == '\r')
        ADVANCE(506);
      if (lookahead == '(')
        ADVANCE(476);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(507);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(503);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 507:
      if (lookahead == 'n')
        SKIP(503);
      END_STATE();
    case 508:
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == '\r')
        ADVANCE(512);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '0')
        ADVANCE(259);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(513);
      if (lookahead == 'd')
        ADVANCE(514);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(508);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(487);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 509:
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == '\r')
        ADVANCE(509);
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
        ADVANCE(510);
      if (lookahead == 'd')
        ADVANCE(511);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(509);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(474);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 510:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(509);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 511:
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
    case 512:
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == '\r')
        ADVANCE(512);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '0')
        ADVANCE(259);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(513);
      if (lookahead == 'd')
        ADVANCE(514);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(508);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(487);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 513:
      if (lookahead == 'n')
        SKIP(508);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'o')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 515:
      if (lookahead == '\n')
        ADVANCE(516);
      if (lookahead == '\r')
        ADVANCE(518);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(519);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(515);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 516:
      if (lookahead == '\n')
        ADVANCE(516);
      if (lookahead == '\r')
        ADVANCE(516);
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
        ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(250);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
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
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(519);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(515);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
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
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(407);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(524);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(520);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 521:
      if (lookahead == '\n')
        ADVANCE(521);
      if (lookahead == '\r')
        ADVANCE(521);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == ':')
        ADVANCE(182);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(522);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(521);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(250);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
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
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(407);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(524);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(520);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 524:
      if (lookahead == 'n')
        SKIP(520);
      END_STATE();
    case 525:
      if (lookahead == '\n')
        ADVANCE(526);
      if (lookahead == '\r')
        ADVANCE(528);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(529);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(525);
      END_STATE();
    case 526:
      if (lookahead == '\n')
        ADVANCE(526);
      if (lookahead == '\r')
        ADVANCE(526);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(527);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(526);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 527:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(526);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 528:
      if (lookahead == '\n')
        ADVANCE(526);
      if (lookahead == '\r')
        ADVANCE(528);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(529);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(525);
      END_STATE();
    case 529:
      if (lookahead == 'n')
        SKIP(525);
      END_STATE();
    case 530:
      if (lookahead == '\t')
        SKIP(530);
      if (lookahead == '\n')
        ADVANCE(531);
      if (lookahead == '\r')
        ADVANCE(535);
      if (lookahead == ' ')
        ADVANCE(536);
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
        ADVANCE(497);
      if (lookahead == '.')
        ADVANCE(498);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(501);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(477);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(502);
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
        ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 531:
      if (lookahead == '\t')
        ADVANCE(531);
      if (lookahead == '\n')
        ADVANCE(531);
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
        ADVANCE(490);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(494);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(464);
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
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(534);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(531);
      if (lookahead == '\n')
        ADVANCE(531);
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
        ADVANCE(490);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(494);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(464);
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
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(534);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 535:
      if (lookahead == '\t')
        SKIP(530);
      if (lookahead == '\n')
        ADVANCE(531);
      if (lookahead == '\r')
        ADVANCE(535);
      if (lookahead == ' ')
        ADVANCE(536);
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
        ADVANCE(497);
      if (lookahead == '.')
        ADVANCE(498);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(501);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(477);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(502);
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
        ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 538:
      if (lookahead == '\t')
        ADVANCE(539);
      if (lookahead == '\n')
        ADVANCE(540);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(545);
      if (lookahead == ' ')
        ADVANCE(536);
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
        ADVANCE(497);
      if (lookahead == '.')
        ADVANCE(498);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(501);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(477);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(502);
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
        ADVANCE(537);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(541);
      if (lookahead == '\n')
        ADVANCE(540);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(542);
      if (lookahead == ' ')
        ADVANCE(543);
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
        ADVANCE(490);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(494);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(464);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(544);
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
        ADVANCE(534);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(541);
      if (lookahead == '\n')
        ADVANCE(540);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(542);
      if (lookahead == ' ')
        ADVANCE(543);
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
        ADVANCE(490);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(494);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(464);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(544);
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
        ADVANCE(534);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 542:
      if (lookahead == '\t')
        ADVANCE(541);
      if (lookahead == '\n')
        ADVANCE(540);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(542);
      if (lookahead == ' ')
        ADVANCE(543);
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
        ADVANCE(490);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(494);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(464);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(544);
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
        ADVANCE(534);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(541);
      if (lookahead == '\n')
        ADVANCE(540);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(542);
      if (lookahead == ' ')
        ADVANCE(543);
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
        ADVANCE(490);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(494);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(464);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(544);
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
        ADVANCE(534);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(542);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 545:
      if (lookahead == '\t')
        ADVANCE(539);
      if (lookahead == '\n')
        ADVANCE(540);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(545);
      if (lookahead == ' ')
        ADVANCE(536);
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
        ADVANCE(497);
      if (lookahead == '.')
        ADVANCE(498);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(501);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(477);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(502);
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
        ADVANCE(537);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 546:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(547);
      if (lookahead == '\r')
        ADVANCE(549);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '0')
        ADVANCE(259);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(550);
      if (lookahead == 'c')
        ADVANCE(266);
      if (lookahead == 'd')
        ADVANCE(272);
      if (lookahead == 'f')
        ADVANCE(283);
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead == 'n')
        ADVANCE(314);
      if (lookahead == 't')
        ADVANCE(321);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(546);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 547:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(547);
      if (lookahead == '\r')
        ADVANCE(547);
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
        ADVANCE(548);
      if (lookahead == 'c')
        ADVANCE(191);
      if (lookahead == 'd')
        ADVANCE(197);
      if (lookahead == 'f')
        ADVANCE(208);
      if (lookahead == 'i')
        ADVANCE(215);
      if (lookahead == 'n')
        ADVANCE(239);
      if (lookahead == 't')
        ADVANCE(246);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(547);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(250);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(547);
      if (lookahead == '\r')
        ADVANCE(549);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '0')
        ADVANCE(259);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(550);
      if (lookahead == 'c')
        ADVANCE(266);
      if (lookahead == 'd')
        ADVANCE(272);
      if (lookahead == 'f')
        ADVANCE(283);
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead == 'n')
        ADVANCE(314);
      if (lookahead == 't')
        ADVANCE(321);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(546);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 550:
      if (lookahead == 'n')
        SKIP(546);
      END_STATE();
    case 551:
      if (lookahead == '\n')
        ADVANCE(552);
      if (lookahead == '\r')
        ADVANCE(570);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(407);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(571);
      if (lookahead == 'a')
        ADVANCE(572);
      if (lookahead == 'd')
        ADVANCE(574);
      if (lookahead == 'h')
        ADVANCE(582);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(551);
      END_STATE();
    case 552:
      if (lookahead == '\n')
        ADVANCE(552);
      if (lookahead == '\r')
        ADVANCE(552);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(553);
      if (lookahead == 'a')
        ADVANCE(554);
      if (lookahead == 'd')
        ADVANCE(556);
      if (lookahead == 'h')
        ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(552);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 553:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(552);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 554:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(555);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 556:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(557);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 557:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(558);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 558:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(559);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 559:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(560);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 560:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(561);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 561:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(562);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 562:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(563);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 564:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(565);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 565:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(566);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 566:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(567);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 567:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(568);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 568:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(569);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 570:
      if (lookahead == '\n')
        ADVANCE(552);
      if (lookahead == '\r')
        ADVANCE(570);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(407);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(571);
      if (lookahead == 'a')
        ADVANCE(572);
      if (lookahead == 'd')
        ADVANCE(574);
      if (lookahead == 'h')
        ADVANCE(582);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(551);
      END_STATE();
    case 571:
      if (lookahead == 'n')
        SKIP(551);
      END_STATE();
    case 572:
      if (lookahead == 's')
        ADVANCE(573);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 574:
      if (lookahead == 'e')
        ADVANCE(575);
      END_STATE();
    case 575:
      if (lookahead == 'r')
        ADVANCE(576);
      END_STATE();
    case 576:
      if (lookahead == 'i')
        ADVANCE(577);
      END_STATE();
    case 577:
      if (lookahead == 'v')
        ADVANCE(578);
      END_STATE();
    case 578:
      if (lookahead == 'i')
        ADVANCE(579);
      END_STATE();
    case 579:
      if (lookahead == 'n')
        ADVANCE(580);
      END_STATE();
    case 580:
      if (lookahead == 'g')
        ADVANCE(581);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 582:
      if (lookahead == 'i')
        ADVANCE(583);
      END_STATE();
    case 583:
      if (lookahead == 'd')
        ADVANCE(584);
      END_STATE();
    case 584:
      if (lookahead == 'i')
        ADVANCE(585);
      END_STATE();
    case 585:
      if (lookahead == 'n')
        ADVANCE(586);
      END_STATE();
    case 586:
      if (lookahead == 'g')
        ADVANCE(587);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 588:
      if (lookahead == '\n')
        ADVANCE(589);
      if (lookahead == '\r')
        ADVANCE(591);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(592);
      if (lookahead == 'a')
        ADVANCE(572);
      if (lookahead == 'h')
        ADVANCE(582);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(588);
      END_STATE();
    case 589:
      if (lookahead == '\n')
        ADVANCE(589);
      if (lookahead == '\r')
        ADVANCE(589);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(590);
      if (lookahead == 'a')
        ADVANCE(554);
      if (lookahead == 'h')
        ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(589);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 590:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(589);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 591:
      if (lookahead == '\n')
        ADVANCE(589);
      if (lookahead == '\r')
        ADVANCE(591);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(592);
      if (lookahead == 'a')
        ADVANCE(572);
      if (lookahead == 'h')
        ADVANCE(582);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(588);
      END_STATE();
    case 592:
      if (lookahead == 'n')
        SKIP(588);
      END_STATE();
    case 593:
      if (lookahead == '\n')
        ADVANCE(594);
      if (lookahead == '\r')
        ADVANCE(597);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '.')
        ADVANCE(598);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(599);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(593);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 594:
      if (lookahead == '\n')
        ADVANCE(594);
      if (lookahead == '\r')
        ADVANCE(594);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(595);
      if (lookahead == ':')
        ADVANCE(182);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(596);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(594);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(250);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 595:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 596:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(594);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 597:
      if (lookahead == '\n')
        ADVANCE(594);
      if (lookahead == '\r')
        ADVANCE(597);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '.')
        ADVANCE(598);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(599);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(593);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 598:
      if (lookahead == '.')
        ADVANCE(107);
      END_STATE();
    case 599:
      if (lookahead == 'n')
        SKIP(593);
      END_STATE();
    case 600:
      if (lookahead == '\n')
        ADVANCE(601);
      if (lookahead == '\r')
        ADVANCE(603);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '0')
        ADVANCE(259);
      if (lookahead == '\\')
        SKIP(604);
      if (lookahead == 'd')
        ADVANCE(514);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(600);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 601:
      if (lookahead == '\n')
        ADVANCE(601);
      if (lookahead == '\r')
        ADVANCE(601);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '0')
        ADVANCE(177);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == 'd')
        ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(601);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
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
      if (lookahead == '\n')
        ADVANCE(601);
      if (lookahead == '\r')
        ADVANCE(603);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '0')
        ADVANCE(259);
      if (lookahead == '\\')
        SKIP(604);
      if (lookahead == 'd')
        ADVANCE(514);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(600);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 604:
      if (lookahead == 'n')
        SKIP(600);
      END_STATE();
    case 605:
      if (lookahead == '\n')
        ADVANCE(606);
      if (lookahead == '\r')
        ADVANCE(613);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '=')
        ADVANCE(408);
      if (lookahead == '\\')
        SKIP(614);
      if (lookahead == 'w')
        ADVANCE(615);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(605);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 606:
      if (lookahead == '\n')
        ADVANCE(606);
      if (lookahead == '\r')
        ADVANCE(606);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '\\')
        ADVANCE(607);
      if (lookahead == 'w')
        ADVANCE(608);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(606);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 607:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(606);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 612:
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
    case 613:
      if (lookahead == '\n')
        ADVANCE(606);
      if (lookahead == '\r')
        ADVANCE(613);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '=')
        ADVANCE(408);
      if (lookahead == '\\')
        SKIP(614);
      if (lookahead == 'w')
        ADVANCE(615);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(605);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 614:
      if (lookahead == 'n')
        SKIP(605);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'h')
        ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'r')
        ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 620:
      if (lookahead == '\n')
        ADVANCE(621);
      if (lookahead == '\r')
        ADVANCE(623);
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
        ADVANCE(497);
      if (lookahead == '.')
        ADVANCE(498);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(501);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(477);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(502);
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
        SKIP(620);
      END_STATE();
    case 621:
      if (lookahead == '\n')
        ADVANCE(621);
      if (lookahead == '\r')
        ADVANCE(621);
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
        ADVANCE(490);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(494);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(464);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(622);
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
        ADVANCE(621);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_BSLASH);
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
        ADVANCE(497);
      if (lookahead == '.')
        ADVANCE(498);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(501);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(477);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(502);
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
        SKIP(620);
      END_STATE();
    case 624:
      if (lookahead == '\n')
        ADVANCE(625);
      if (lookahead == '\r')
        ADVANCE(627);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(628);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(624);
      END_STATE();
    case 625:
      if (lookahead == '\n')
        ADVANCE(625);
      if (lookahead == '\r')
        ADVANCE(625);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(625);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 626:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(625);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 627:
      if (lookahead == '\n')
        ADVANCE(625);
      if (lookahead == '\r')
        ADVANCE(627);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(628);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(624);
      END_STATE();
    case 628:
      if (lookahead == 'n')
        SKIP(624);
      END_STATE();
    case 629:
      if (lookahead == '\n')
        ADVANCE(630);
      if (lookahead == '\r')
        ADVANCE(632);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(407);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(633);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(629);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 630:
      if (lookahead == '\n')
        ADVANCE(630);
      if (lookahead == '\r')
        ADVANCE(630);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(630);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 631:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(630);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 632:
      if (lookahead == '\n')
        ADVANCE(630);
      if (lookahead == '\r')
        ADVANCE(632);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(407);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(633);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(629);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 633:
      if (lookahead == 'n')
        SKIP(629);
      END_STATE();
    case 634:
      if (lookahead == '\n')
        ADVANCE(635);
      if (lookahead == '\r')
        ADVANCE(637);
      if (lookahead == '-')
        ADVANCE(407);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(638);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(634);
      END_STATE();
    case 635:
      if (lookahead == '\n')
        ADVANCE(635);
      if (lookahead == '\r')
        ADVANCE(635);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(636);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(635);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 636:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(635);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 637:
      if (lookahead == '\n')
        ADVANCE(635);
      if (lookahead == '\r')
        ADVANCE(637);
      if (lookahead == '-')
        ADVANCE(407);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(638);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(634);
      END_STATE();
    case 638:
      if (lookahead == 'n')
        SKIP(634);
      END_STATE();
    case 639:
      if (lookahead == '\n')
        ADVANCE(640);
      if (lookahead == '\r')
        ADVANCE(642);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(477);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(643);
      if (lookahead == 'd')
        ADVANCE(574);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(639);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(487);
      END_STATE();
    case 640:
      if (lookahead == '\n')
        ADVANCE(640);
      if (lookahead == '\r')
        ADVANCE(640);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(464);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(641);
      if (lookahead == 'd')
        ADVANCE(556);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(640);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(474);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 641:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(640);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 642:
      if (lookahead == '\n')
        ADVANCE(640);
      if (lookahead == '\r')
        ADVANCE(642);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(477);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(643);
      if (lookahead == 'd')
        ADVANCE(574);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(639);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(487);
      END_STATE();
    case 643:
      if (lookahead == 'n')
        SKIP(639);
      END_STATE();
    case 644:
      if (lookahead == '\n')
        ADVANCE(645);
      if (lookahead == '\r')
        ADVANCE(647);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '=')
        ADVANCE(477);
      if (lookahead == '\\')
        SKIP(648);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(644);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 645:
      if (lookahead == '\n')
        ADVANCE(645);
      if (lookahead == '\r')
        ADVANCE(645);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '=')
        ADVANCE(464);
      if (lookahead == '\\')
        ADVANCE(646);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(645);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 646:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(645);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 647:
      if (lookahead == '\n')
        ADVANCE(645);
      if (lookahead == '\r')
        ADVANCE(647);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '=')
        ADVANCE(477);
      if (lookahead == '\\')
        SKIP(648);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(644);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 648:
      if (lookahead == 'n')
        SKIP(644);
      END_STATE();
    case 649:
      if (lookahead == '\n')
        ADVANCE(650);
      if (lookahead == '\r')
        ADVANCE(702);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == 'A')
        ADVANCE(703);
      if (lookahead == 'B')
        ADVANCE(706);
      if (lookahead == 'C')
        ADVANCE(710);
      if (lookahead == 'D')
        ADVANCE(714);
      if (lookahead == 'E')
        ADVANCE(724);
      if (lookahead == 'F')
        ADVANCE(735);
      if (lookahead == 'G')
        ADVANCE(738);
      if (lookahead == 'H')
        ADVANCE(739);
      if (lookahead == 'L')
        ADVANCE(740);
      if (lookahead == 'N')
        ADVANCE(741);
      if (lookahead == 'O')
        ADVANCE(742);
      if (lookahead == 'R')
        ADVANCE(743);
      if (lookahead == 'S')
        ADVANCE(744);
      if (lookahead == 'U')
        ADVANCE(745);
      if (lookahead == 'V')
        ADVANCE(746);
      if (lookahead == 'X')
        ADVANCE(747);
      if (lookahead == '\\')
        ADVANCE(502);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(748);
      if (lookahead == 'b')
        ADVANCE(749);
      if (lookahead == 'f')
        ADVANCE(750);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(751);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(752);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(649);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(537);
      END_STATE();
    case 650:
      if (lookahead == '\n')
        ADVANCE(650);
      if (lookahead == '\r')
        ADVANCE(650);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == 'A')
        ADVANCE(651);
      if (lookahead == 'B')
        ADVANCE(654);
      if (lookahead == 'C')
        ADVANCE(658);
      if (lookahead == 'D')
        ADVANCE(662);
      if (lookahead == 'E')
        ADVANCE(672);
      if (lookahead == 'F')
        ADVANCE(683);
      if (lookahead == 'G')
        ADVANCE(686);
      if (lookahead == 'H')
        ADVANCE(687);
      if (lookahead == 'L')
        ADVANCE(688);
      if (lookahead == 'N')
        ADVANCE(689);
      if (lookahead == 'O')
        ADVANCE(690);
      if (lookahead == 'R')
        ADVANCE(691);
      if (lookahead == 'S')
        ADVANCE(692);
      if (lookahead == 'U')
        ADVANCE(693);
      if (lookahead == 'V')
        ADVANCE(694);
      if (lookahead == 'X')
        ADVANCE(695);
      if (lookahead == '\\')
        ADVANCE(696);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(697);
      if (lookahead == 'b')
        ADVANCE(698);
      if (lookahead == 'f')
        ADVANCE(699);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(700);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(701);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(534);
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(653);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 654:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(655);
      if (lookahead == 'S')
        ADVANCE(657);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 655:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(656);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 658:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(659);
      if (lookahead == 'R')
        ADVANCE(661);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 659:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(660);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 662:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(663);
      if (lookahead == 'E')
        ADVANCE(668);
      if (lookahead == 'L')
        ADVANCE(670);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 663:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(664);
      if (lookahead == '2')
        ADVANCE(665);
      if (lookahead == '3')
        ADVANCE(666);
      if (lookahead == '4')
        ADVANCE(667);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(669);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 670:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(671);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 672:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(673);
      if (lookahead == 'N')
        ADVANCE(674);
      if (lookahead == 'O')
        ADVANCE(676);
      if (lookahead == 'S')
        ADVANCE(678);
      if (lookahead == 'T')
        ADVANCE(680);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(675);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 676:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(677);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 678:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(679);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 680:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(681);
      if (lookahead == 'X')
        ADVANCE(682);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 683:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(684);
      if (lookahead == 'S')
        ADVANCE(685);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 686:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 687:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 688:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 689:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(46);
      if (lookahead == 'U')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 691:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 692:
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
    case 693:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 694:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(650);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 702:
      if (lookahead == '\n')
        ADVANCE(650);
      if (lookahead == '\r')
        ADVANCE(702);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == 'A')
        ADVANCE(703);
      if (lookahead == 'B')
        ADVANCE(706);
      if (lookahead == 'C')
        ADVANCE(710);
      if (lookahead == 'D')
        ADVANCE(714);
      if (lookahead == 'E')
        ADVANCE(724);
      if (lookahead == 'F')
        ADVANCE(735);
      if (lookahead == 'G')
        ADVANCE(738);
      if (lookahead == 'H')
        ADVANCE(739);
      if (lookahead == 'L')
        ADVANCE(740);
      if (lookahead == 'N')
        ADVANCE(741);
      if (lookahead == 'O')
        ADVANCE(742);
      if (lookahead == 'R')
        ADVANCE(743);
      if (lookahead == 'S')
        ADVANCE(744);
      if (lookahead == 'U')
        ADVANCE(745);
      if (lookahead == 'V')
        ADVANCE(746);
      if (lookahead == 'X')
        ADVANCE(747);
      if (lookahead == '\\')
        ADVANCE(502);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(748);
      if (lookahead == 'b')
        ADVANCE(749);
      if (lookahead == 'f')
        ADVANCE(750);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(751);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(752);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(649);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(537);
      END_STATE();
    case 703:
      if (lookahead == 'C')
        ADVANCE(704);
      END_STATE();
    case 704:
      if (lookahead == 'K')
        ADVANCE(705);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 706:
      if (lookahead == 'E')
        ADVANCE(707);
      if (lookahead == 'S')
        ADVANCE(709);
      END_STATE();
    case 707:
      if (lookahead == 'L')
        ADVANCE(708);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 710:
      if (lookahead == 'A')
        ADVANCE(711);
      if (lookahead == 'R')
        ADVANCE(713);
      END_STATE();
    case 711:
      if (lookahead == 'N')
        ADVANCE(712);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 714:
      if (lookahead == 'C')
        ADVANCE(715);
      if (lookahead == 'E')
        ADVANCE(720);
      if (lookahead == 'L')
        ADVANCE(722);
      END_STATE();
    case 715:
      if (lookahead == '1')
        ADVANCE(716);
      if (lookahead == '2')
        ADVANCE(717);
      if (lookahead == '3')
        ADVANCE(718);
      if (lookahead == '4')
        ADVANCE(719);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 720:
      if (lookahead == 'L')
        ADVANCE(721);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 722:
      if (lookahead == 'E')
        ADVANCE(723);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 724:
      if (lookahead == 'M')
        ADVANCE(725);
      if (lookahead == 'N')
        ADVANCE(726);
      if (lookahead == 'O')
        ADVANCE(728);
      if (lookahead == 'S')
        ADVANCE(730);
      if (lookahead == 'T')
        ADVANCE(732);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 726:
      if (lookahead == 'Q')
        ADVANCE(727);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 728:
      if (lookahead == 'T')
        ADVANCE(729);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 730:
      if (lookahead == 'C')
        ADVANCE(731);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 732:
      if (lookahead == 'B')
        ADVANCE(733);
      if (lookahead == 'X')
        ADVANCE(734);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 735:
      if (lookahead == 'F')
        ADVANCE(736);
      if (lookahead == 'S')
        ADVANCE(737);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 738:
      if (lookahead == 'S')
        ADVANCE(119);
      END_STATE();
    case 739:
      if (lookahead == 'T')
        ADVANCE(121);
      END_STATE();
    case 740:
      if (lookahead == 'F')
        ADVANCE(123);
      END_STATE();
    case 741:
      if (lookahead == 'A')
        ADVANCE(125);
      if (lookahead == 'U')
        ADVANCE(127);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 743:
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 744:
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
    case 745:
      if (lookahead == 'S')
        ADVANCE(143);
      END_STATE();
    case 746:
      if (lookahead == 'T')
        ADVANCE(145);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 753:
      if (lookahead == '\t')
        ADVANCE(539);
      if (lookahead == '\n')
        ADVANCE(754);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(765);
      if (lookahead == ' ')
        ADVANCE(536);
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
        ADVANCE(497);
      if (lookahead == '.')
        ADVANCE(498);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(501);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(477);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == 'A')
        ADVANCE(766);
      if (lookahead == 'B')
        ADVANCE(767);
      if (lookahead == 'C')
        ADVANCE(768);
      if (lookahead == 'D')
        ADVANCE(769);
      if (lookahead == 'E')
        ADVANCE(770);
      if (lookahead == 'F')
        ADVANCE(771);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(742);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(747);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(502);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(748);
      if (lookahead == 'b')
        ADVANCE(749);
      if (lookahead == 'f')
        ADVANCE(750);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(751);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(752);
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
        ADVANCE(537);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(755);
      if (lookahead == '\n')
        ADVANCE(754);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(756);
      if (lookahead == ' ')
        ADVANCE(757);
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
        ADVANCE(490);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(494);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(464);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(758);
      if (lookahead == 'B')
        ADVANCE(759);
      if (lookahead == 'C')
        ADVANCE(760);
      if (lookahead == 'D')
        ADVANCE(761);
      if (lookahead == 'E')
        ADVANCE(762);
      if (lookahead == 'F')
        ADVANCE(763);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(690);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(695);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(764);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(697);
      if (lookahead == 'b')
        ADVANCE(698);
      if (lookahead == 'f')
        ADVANCE(699);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(700);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(701);
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
        ADVANCE(534);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(755);
      if (lookahead == '\n')
        ADVANCE(754);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(756);
      if (lookahead == ' ')
        ADVANCE(757);
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
        ADVANCE(490);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(494);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(464);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(758);
      if (lookahead == 'B')
        ADVANCE(759);
      if (lookahead == 'C')
        ADVANCE(760);
      if (lookahead == 'D')
        ADVANCE(761);
      if (lookahead == 'E')
        ADVANCE(762);
      if (lookahead == 'F')
        ADVANCE(763);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(690);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(695);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(764);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(697);
      if (lookahead == 'b')
        ADVANCE(698);
      if (lookahead == 'f')
        ADVANCE(699);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(700);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(701);
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
        ADVANCE(534);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 756:
      if (lookahead == '\t')
        ADVANCE(755);
      if (lookahead == '\n')
        ADVANCE(754);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(756);
      if (lookahead == ' ')
        ADVANCE(757);
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
        ADVANCE(490);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(494);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(464);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(758);
      if (lookahead == 'B')
        ADVANCE(759);
      if (lookahead == 'C')
        ADVANCE(760);
      if (lookahead == 'D')
        ADVANCE(761);
      if (lookahead == 'E')
        ADVANCE(762);
      if (lookahead == 'F')
        ADVANCE(763);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(690);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(695);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(764);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(697);
      if (lookahead == 'b')
        ADVANCE(698);
      if (lookahead == 'f')
        ADVANCE(699);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(700);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(701);
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
        ADVANCE(534);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(755);
      if (lookahead == '\n')
        ADVANCE(754);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(756);
      if (lookahead == ' ')
        ADVANCE(757);
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
        ADVANCE(490);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(494);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(464);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(758);
      if (lookahead == 'B')
        ADVANCE(759);
      if (lookahead == 'C')
        ADVANCE(760);
      if (lookahead == 'D')
        ADVANCE(761);
      if (lookahead == 'E')
        ADVANCE(762);
      if (lookahead == 'F')
        ADVANCE(763);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(690);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(695);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(764);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(697);
      if (lookahead == 'b')
        ADVANCE(698);
      if (lookahead == 'f')
        ADVANCE(699);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(700);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(701);
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
        ADVANCE(534);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(652);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(655);
      if (lookahead == 'S')
        ADVANCE(657);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(659);
      if (lookahead == 'R')
        ADVANCE(661);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(663);
      if (lookahead == 'E')
        ADVANCE(668);
      if (lookahead == 'L')
        ADVANCE(670);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(673);
      if (lookahead == 'N')
        ADVANCE(674);
      if (lookahead == 'O')
        ADVANCE(676);
      if (lookahead == 'S')
        ADVANCE(678);
      if (lookahead == 'T')
        ADVANCE(680);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(684);
      if (lookahead == 'S')
        ADVANCE(685);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(756);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 765:
      if (lookahead == '\t')
        ADVANCE(539);
      if (lookahead == '\n')
        ADVANCE(754);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(765);
      if (lookahead == ' ')
        ADVANCE(536);
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
        ADVANCE(497);
      if (lookahead == '.')
        ADVANCE(498);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(501);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(477);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == 'A')
        ADVANCE(766);
      if (lookahead == 'B')
        ADVANCE(767);
      if (lookahead == 'C')
        ADVANCE(768);
      if (lookahead == 'D')
        ADVANCE(769);
      if (lookahead == 'E')
        ADVANCE(770);
      if (lookahead == 'F')
        ADVANCE(771);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(742);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(747);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(502);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(748);
      if (lookahead == 'b')
        ADVANCE(749);
      if (lookahead == 'f')
        ADVANCE(750);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(751);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(752);
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
        ADVANCE(537);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(704);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(707);
      if (lookahead == 'S')
        ADVANCE(709);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(711);
      if (lookahead == 'R')
        ADVANCE(713);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(715);
      if (lookahead == 'E')
        ADVANCE(720);
      if (lookahead == 'L')
        ADVANCE(722);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(725);
      if (lookahead == 'N')
        ADVANCE(726);
      if (lookahead == 'O')
        ADVANCE(728);
      if (lookahead == 'S')
        ADVANCE(730);
      if (lookahead == 'T')
        ADVANCE(732);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(736);
      if (lookahead == 'S')
        ADVANCE(737);
      END_STATE();
    case 772:
      if (lookahead == '\n')
        ADVANCE(773);
      if (lookahead == '\r')
        ADVANCE(785);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(786);
      if (lookahead == 's')
        ADVANCE(787);
      if (lookahead == 'u')
        ADVANCE(791);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(772);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 773:
      if (lookahead == '\n')
        ADVANCE(773);
      if (lookahead == '\r')
        ADVANCE(773);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ':')
        ADVANCE(182);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(774);
      if (lookahead == 's')
        ADVANCE(775);
      if (lookahead == 'u')
        ADVANCE(779);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(773);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(250);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 774:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(773);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_safe);
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
    case 779:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_unsafe);
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
    case 785:
      if (lookahead == '\n')
        ADVANCE(773);
      if (lookahead == '\r')
        ADVANCE(785);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(786);
      if (lookahead == 's')
        ADVANCE(787);
      if (lookahead == 'u')
        ADVANCE(791);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(772);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 786:
      if (lookahead == 'n')
        SKIP(772);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'a')
        ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'f')
        ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'n')
        ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 's')
        ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'a')
        ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'f')
        ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 797:
      if (lookahead == '\n')
        ADVANCE(798);
      if (lookahead == '\r')
        ADVANCE(800);
      if (lookahead == '-')
        ADVANCE(407);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(408);
      if (lookahead == '\\')
        SKIP(801);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(797);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 798:
      if (lookahead == '\n')
        ADVANCE(798);
      if (lookahead == '\r')
        ADVANCE(798);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(358);
      if (lookahead == '\\')
        ADVANCE(799);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(798);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
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
      if (lookahead == '-')
        ADVANCE(407);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(408);
      if (lookahead == '\\')
        SKIP(801);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(797);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
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
      if (lookahead == '-')
        ADVANCE(407);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(806);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(802);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 803:
      if (lookahead == '\n')
        ADVANCE(803);
      if (lookahead == '\r')
        ADVANCE(803);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(804);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(803);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
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
      if (lookahead == '-')
        ADVANCE(407);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(806);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(802);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
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
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(811);
      if (lookahead == 'd')
        ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(807);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(487);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 808:
      if (lookahead == '\n')
        ADVANCE(808);
      if (lookahead == '\r')
        ADVANCE(808);
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
        ADVANCE(809);
      if (lookahead == 'd')
        ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(808);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(474);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
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
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(811);
      if (lookahead == 'd')
        ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(807);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(487);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
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
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(477);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(816);
      if (lookahead == 'd')
        ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(812);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(487);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 813:
      if (lookahead == '\n')
        ADVANCE(813);
      if (lookahead == '\r')
        ADVANCE(813);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(464);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(814);
      if (lookahead == 'd')
        ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(813);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(474);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
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
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(477);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(816);
      if (lookahead == 'd')
        ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(812);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(487);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
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
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(821);
      if (lookahead == 'd')
        ADVANCE(574);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(817);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(487);
      END_STATE();
    case 818:
      if (lookahead == '\n')
        ADVANCE(818);
      if (lookahead == '\r')
        ADVANCE(818);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(819);
      if (lookahead == 'd')
        ADVANCE(556);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(818);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(474);
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
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(821);
      if (lookahead == 'd')
        ADVANCE(574);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(817);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(487);
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
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(826);
      if (lookahead == 'd')
        ADVANCE(479);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(822);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 823:
      if (lookahead == '\n')
        ADVANCE(823);
      if (lookahead == '\r')
        ADVANCE(823);
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
        ADVANCE(824);
      if (lookahead == 'd')
        ADVANCE(466);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(823);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(250);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 824:
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
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(826);
      if (lookahead == 'd')
        ADVANCE(479);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(822);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 826:
      if (lookahead == 'n')
        SKIP(822);
      END_STATE();
    case 827:
      if (lookahead == '\n')
        ADVANCE(828);
      if (lookahead == '\r')
        ADVANCE(830);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(831);
      if (lookahead == 'd')
        ADVANCE(574);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(827);
      END_STATE();
    case 828:
      if (lookahead == '\n')
        ADVANCE(828);
      if (lookahead == '\r')
        ADVANCE(828);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(829);
      if (lookahead == 'd')
        ADVANCE(556);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(828);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 829:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(828);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 830:
      if (lookahead == '\n')
        ADVANCE(828);
      if (lookahead == '\r')
        ADVANCE(830);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(831);
      if (lookahead == 'd')
        ADVANCE(574);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(827);
      END_STATE();
    case 831:
      if (lookahead == 'n')
        SKIP(827);
      END_STATE();
    case 832:
      if (lookahead == '\n')
        ADVANCE(833);
      if (lookahead == '\r')
        ADVANCE(835);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(836);
      if (lookahead == 'd')
        ADVANCE(574);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(832);
      END_STATE();
    case 833:
      if (lookahead == '\n')
        ADVANCE(833);
      if (lookahead == '\r')
        ADVANCE(833);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(834);
      if (lookahead == 'd')
        ADVANCE(556);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(833);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 834:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(833);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 835:
      if (lookahead == '\n')
        ADVANCE(833);
      if (lookahead == '\r')
        ADVANCE(835);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(836);
      if (lookahead == 'd')
        ADVANCE(574);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(832);
      END_STATE();
    case 836:
      if (lookahead == 'n')
        SKIP(832);
      END_STATE();
    case 837:
      if (lookahead == '\n')
        ADVANCE(838);
      if (lookahead == '\r')
        ADVANCE(840);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '\\')
        SKIP(841);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(837);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 838:
      if (lookahead == '\n')
        ADVANCE(838);
      if (lookahead == '\r')
        ADVANCE(838);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '\\')
        ADVANCE(839);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(838);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
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
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '\\')
        SKIP(841);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(837);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
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
        ADVANCE(258);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(502);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(842);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 843:
      if (lookahead == '\n')
        ADVANCE(843);
      if (lookahead == '\r')
        ADVANCE(843);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(844);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(843);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_BSLASH);
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
        ADVANCE(258);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(502);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(842);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 846:
      if (lookahead == '\n')
        ADVANCE(847);
      if (lookahead == '\r')
        ADVANCE(850);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(851);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(852);
      END_STATE();
    case 847:
      if (lookahead == '\n')
        ADVANCE(847);
      if (lookahead == '\r')
        ADVANCE(847);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(848);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(849);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 848:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(847);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 850:
      if (lookahead == '\n')
        ADVANCE(847);
      if (lookahead == '\r')
        ADVANCE(850);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(851);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(852);
      END_STATE();
    case 851:
      if (lookahead == 'n')
        SKIP(846);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 853:
      if (lookahead == '\n')
        ADVANCE(854);
      if (lookahead == '\r')
        ADVANCE(857);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(858);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(853);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(859);
      END_STATE();
    case 854:
      if (lookahead == '\n')
        ADVANCE(854);
      if (lookahead == '\r')
        ADVANCE(854);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(855);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(856);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 855:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(854);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 857:
      if (lookahead == '\n')
        ADVANCE(854);
      if (lookahead == '\r')
        ADVANCE(857);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(858);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(853);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(859);
      END_STATE();
    case 858:
      if (lookahead == 'n')
        SKIP(853);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 860:
      if (lookahead == '\n')
        ADVANCE(861);
      if (lookahead == '\r')
        ADVANCE(863);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '0')
        ADVANCE(259);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(864);
      if (lookahead == 'c')
        ADVANCE(266);
      if (lookahead == 'd')
        ADVANCE(272);
      if (lookahead == 'f')
        ADVANCE(283);
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead == 'n')
        ADVANCE(314);
      if (lookahead == 't')
        ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(860);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 861:
      if (lookahead == '\n')
        ADVANCE(861);
      if (lookahead == '\r')
        ADVANCE(861);
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
        ADVANCE(862);
      if (lookahead == 'c')
        ADVANCE(191);
      if (lookahead == 'd')
        ADVANCE(197);
      if (lookahead == 'f')
        ADVANCE(208);
      if (lookahead == 'i')
        ADVANCE(215);
      if (lookahead == 'n')
        ADVANCE(239);
      if (lookahead == 't')
        ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(861);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(250);
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
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == '0')
        ADVANCE(259);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(864);
      if (lookahead == 'c')
        ADVANCE(266);
      if (lookahead == 'd')
        ADVANCE(272);
      if (lookahead == 'f')
        ADVANCE(283);
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead == 'n')
        ADVANCE(314);
      if (lookahead == 't')
        ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(860);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 864:
      if (lookahead == 'n')
        SKIP(860);
      END_STATE();
    case 865:
      if (lookahead == '\n')
        ADVANCE(866);
      if (lookahead == '\r')
        ADVANCE(868);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(869);
      if (lookahead == 'h')
        ADVANCE(582);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(865);
      END_STATE();
    case 866:
      if (lookahead == '\n')
        ADVANCE(866);
      if (lookahead == '\r')
        ADVANCE(866);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(867);
      if (lookahead == 'h')
        ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(866);
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
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(869);
      if (lookahead == 'h')
        ADVANCE(582);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(865);
      END_STATE();
    case 869:
      if (lookahead == 'n')
        SKIP(865);
      END_STATE();
    case 870:
      if (lookahead == '\n')
        ADVANCE(871);
      if (lookahead == '\r')
        ADVANCE(875);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(876);
      if (lookahead == 'i')
        ADVANCE(877);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(870);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 871:
      if (lookahead == '\n')
        ADVANCE(871);
      if (lookahead == '\r')
        ADVANCE(871);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ':')
        ADVANCE(182);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(872);
      if (lookahead == 'i')
        ADVANCE(873);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(871);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(250);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 875:
      if (lookahead == '\n')
        ADVANCE(871);
      if (lookahead == '\r')
        ADVANCE(875);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(876);
      if (lookahead == 'i')
        ADVANCE(877);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(870);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 876:
      if (lookahead == 'n')
        SKIP(870);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'n')
        ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'f')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 879:
      if (lookahead == '\n')
        ADVANCE(880);
      if (lookahead == '\r')
        ADVANCE(882);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(883);
      if (lookahead == 'i')
        ADVANCE(877);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(879);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 880:
      if (lookahead == '\n')
        ADVANCE(880);
      if (lookahead == '\r')
        ADVANCE(880);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ':')
        ADVANCE(182);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(881);
      if (lookahead == 'i')
        ADVANCE(873);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(880);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(250);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 881:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(880);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 882:
      if (lookahead == '\n')
        ADVANCE(880);
      if (lookahead == '\r')
        ADVANCE(882);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(883);
      if (lookahead == 'i')
        ADVANCE(877);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(879);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 883:
      if (lookahead == 'n')
        SKIP(879);
      END_STATE();
    case 884:
      if (lookahead == '\n')
        ADVANCE(885);
      if (lookahead == '\r')
        ADVANCE(887);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(888);
      if (lookahead == 'd')
        ADVANCE(479);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(884);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 885:
      if (lookahead == '\n')
        ADVANCE(885);
      if (lookahead == '\r')
        ADVANCE(885);
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
        ADVANCE(886);
      if (lookahead == 'd')
        ADVANCE(466);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(885);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(250);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 886:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(885);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 887:
      if (lookahead == '\n')
        ADVANCE(885);
      if (lookahead == '\r')
        ADVANCE(887);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(888);
      if (lookahead == 'd')
        ADVANCE(479);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(884);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 888:
      if (lookahead == 'n')
        SKIP(884);
      END_STATE();
    case 889:
      if (lookahead == '\t')
        ADVANCE(539);
      if (lookahead == '\n')
        ADVANCE(890);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(895);
      if (lookahead == ' ')
        ADVANCE(536);
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
        ADVANCE(497);
      if (lookahead == '.')
        ADVANCE(498);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(501);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(477);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(502);
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
        ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(891);
      if (lookahead == '\n')
        ADVANCE(890);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(892);
      if (lookahead == ' ')
        ADVANCE(893);
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
        ADVANCE(490);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(494);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(464);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(894);
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
        ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(534);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(891);
      if (lookahead == '\n')
        ADVANCE(890);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(892);
      if (lookahead == ' ')
        ADVANCE(893);
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
        ADVANCE(490);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(494);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(464);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(894);
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
        ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(534);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 892:
      if (lookahead == '\t')
        ADVANCE(891);
      if (lookahead == '\n')
        ADVANCE(890);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(892);
      if (lookahead == ' ')
        ADVANCE(893);
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
        ADVANCE(490);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(494);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(464);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(894);
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
        ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(534);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(891);
      if (lookahead == '\n')
        ADVANCE(890);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(892);
      if (lookahead == ' ')
        ADVANCE(893);
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
        ADVANCE(490);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(494);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(464);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(894);
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
        ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(534);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(892);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 895:
      if (lookahead == '\t')
        ADVANCE(539);
      if (lookahead == '\n')
        ADVANCE(890);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(895);
      if (lookahead == ' ')
        ADVANCE(536);
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
        ADVANCE(497);
      if (lookahead == '.')
        ADVANCE(498);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(501);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(477);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(502);
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
        ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(537);
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
  [2] = {.lex_state = 327},
  [3] = {.lex_state = 332},
  [4] = {.lex_state = 355},
  [5] = {.lex_state = 327},
  [6] = {.lex_state = 456, .external_lex_state = 2},
  [7] = {.lex_state = 461},
  [8] = {.lex_state = 461},
  [9] = {.lex_state = 488},
  [10] = {.lex_state = 503},
  [11] = {.lex_state = 461},
  [12] = {.lex_state = 461},
  [13] = {.lex_state = 508},
  [14] = {.lex_state = 515, .external_lex_state = 3},
  [15] = {.lex_state = 520},
  [16] = {.lex_state = 525, .external_lex_state = 3},
  [17] = {.lex_state = 530},
  [18] = {.lex_state = 538},
  [19] = {.lex_state = 525, .external_lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 525, .external_lex_state = 3},
  [22] = {.lex_state = 525, .external_lex_state = 3},
  [23] = {.lex_state = 525, .external_lex_state = 3},
  [24] = {.lex_state = 515},
  [25] = {.lex_state = 546},
  [26] = {.lex_state = 515},
  [27] = {.lex_state = 355},
  [28] = {.lex_state = 515},
  [29] = {.lex_state = 551, .external_lex_state = 3},
  [30] = {.lex_state = 588, .external_lex_state = 3},
  [31] = {.lex_state = 355},
  [32] = {.lex_state = 355},
  [33] = {.lex_state = 593},
  [34] = {.lex_state = 600, .external_lex_state = 4},
  [35] = {.lex_state = 508},
  [36] = {.lex_state = 525, .external_lex_state = 3},
  [37] = {.lex_state = 508},
  [38] = {.lex_state = 605},
  [39] = {.lex_state = 508},
  [40] = {.lex_state = 355},
  [41] = {.lex_state = 605},
  [42] = {.lex_state = 508},
  [43] = {.lex_state = 488},
  [44] = {.lex_state = 515},
  [45] = {.lex_state = 620, .external_lex_state = 3},
  [46] = {.lex_state = 620, .external_lex_state = 3},
  [47] = {.lex_state = 488},
  [48] = {.lex_state = 624, .external_lex_state = 3},
  [49] = {.lex_state = 624, .external_lex_state = 3},
  [50] = {.lex_state = 488},
  [51] = {.lex_state = 620, .external_lex_state = 3},
  [52] = {.lex_state = 620, .external_lex_state = 3},
  [53] = {.lex_state = 508},
  [54] = {.lex_state = 629, .external_lex_state = 3},
  [55] = {.lex_state = 525, .external_lex_state = 3},
  [56] = {.lex_state = 525, .external_lex_state = 3},
  [57] = {.lex_state = 515},
  [58] = {.lex_state = 355},
  [59] = {.lex_state = 355},
  [60] = {.lex_state = 634, .external_lex_state = 3},
  [61] = {.lex_state = 461, .external_lex_state = 3},
  [62] = {.lex_state = 508},
  [63] = {.lex_state = 639, .external_lex_state = 3},
  [64] = {.lex_state = 644},
  [65] = {.lex_state = 508},
  [66] = {.lex_state = 461},
  [67] = {.lex_state = 644},
  [68] = {.lex_state = 461},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 649},
  [76] = {.lex_state = 538},
  [77] = {.lex_state = 538},
  [78] = {.lex_state = 538},
  [79] = {.lex_state = 525, .external_lex_state = 3},
  [80] = {.lex_state = 538},
  [81] = {.lex_state = 538},
  [82] = {.lex_state = 538},
  [83] = {.lex_state = 753},
  [84] = {.lex_state = 538},
  [85] = {.lex_state = 538},
  [86] = {.lex_state = 546},
  [87] = {.lex_state = 525, .external_lex_state = 3},
  [88] = {.lex_state = 503},
  [89] = {.lex_state = 515},
  [90] = {.lex_state = 456, .external_lex_state = 2},
  [91] = {.lex_state = 593},
  [92] = {.lex_state = 355},
  [93] = {.lex_state = 588, .external_lex_state = 3},
  [94] = {.lex_state = 593},
  [95] = {.lex_state = 515},
  [96] = {.lex_state = 327},
  [97] = {.lex_state = 525, .external_lex_state = 3},
  [98] = {.lex_state = 772},
  [99] = {.lex_state = 772},
  [100] = {.lex_state = 525, .external_lex_state = 3},
  [101] = {.lex_state = 355},
  [102] = {.lex_state = 525, .external_lex_state = 3},
  [103] = {.lex_state = 525, .external_lex_state = 3},
  [104] = {.lex_state = 600, .external_lex_state = 4},
  [105] = {.lex_state = 600, .external_lex_state = 4},
  [106] = {.lex_state = 525, .external_lex_state = 3},
  [107] = {.lex_state = 508},
  [108] = {.lex_state = 508},
  [109] = {.lex_state = 327},
  [110] = {.lex_state = 355},
  [111] = {.lex_state = 456, .external_lex_state = 2},
  [112] = {.lex_state = 327},
  [113] = {.lex_state = 605},
  [114] = {.lex_state = 605},
  [115] = {.lex_state = 605},
  [116] = {.lex_state = 508},
  [117] = {.lex_state = 456, .external_lex_state = 2},
  [118] = {.lex_state = 605},
  [119] = {.lex_state = 605},
  [120] = {.lex_state = 620, .external_lex_state = 3},
  [121] = {.lex_state = 620, .external_lex_state = 3},
  [122] = {.lex_state = 355},
  [123] = {.lex_state = 624, .external_lex_state = 3},
  [124] = {.lex_state = 620, .external_lex_state = 3},
  [125] = {.lex_state = 488},
  [126] = {.lex_state = 624, .external_lex_state = 3},
  [127] = {.lex_state = 624, .external_lex_state = 3},
  [128] = {.lex_state = 624, .external_lex_state = 3},
  [129] = {.lex_state = 620, .external_lex_state = 3},
  [130] = {.lex_state = 355},
  [131] = {.lex_state = 797, .external_lex_state = 3},
  [132] = {.lex_state = 802, .external_lex_state = 3},
  [133] = {.lex_state = 802, .external_lex_state = 3},
  [134] = {.lex_state = 525, .external_lex_state = 3},
  [135] = {.lex_state = 515},
  [136] = {.lex_state = 515},
  [137] = {.lex_state = 807, .external_lex_state = 3},
  [138] = {.lex_state = 812, .external_lex_state = 3},
  [139] = {.lex_state = 812, .external_lex_state = 3},
  [140] = {.lex_state = 639, .external_lex_state = 3},
  [141] = {.lex_state = 817, .external_lex_state = 3},
  [142] = {.lex_state = 503},
  [143] = {.lex_state = 822, .external_lex_state = 3},
  [144] = {.lex_state = 827, .external_lex_state = 3},
  [145] = {.lex_state = 832, .external_lex_state = 3},
  [146] = {.lex_state = 525, .external_lex_state = 3},
  [147] = {.lex_state = 837},
  [148] = {.lex_state = 644},
  [149] = {.lex_state = 461},
  [150] = {.lex_state = 508},
  [151] = {.lex_state = 644},
  [152] = {.lex_state = 515},
  [153] = {.lex_state = 525, .external_lex_state = 3},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 842},
  [157] = {.lex_state = 846},
  [158] = {.lex_state = 853},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 538},
  [161] = {.lex_state = 538},
  [162] = {.lex_state = 842},
  [163] = {.lex_state = 846},
  [164] = {.lex_state = 853},
  [165] = {.lex_state = 538},
  [166] = {.lex_state = 538},
  [167] = {.lex_state = 525, .external_lex_state = 3},
  [168] = {.lex_state = 546},
  [169] = {.lex_state = 515},
  [170] = {.lex_state = 860, .external_lex_state = 4},
  [171] = {.lex_state = 546},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 355},
  [174] = {.lex_state = 355},
  [175] = {.lex_state = 355},
  [176] = {.lex_state = 355},
  [177] = {.lex_state = 456, .external_lex_state = 2},
  [178] = {.lex_state = 515},
  [179] = {.lex_state = 525, .external_lex_state = 3},
  [180] = {.lex_state = 525, .external_lex_state = 3},
  [181] = {.lex_state = 355},
  [182] = {.lex_state = 865, .external_lex_state = 3},
  [183] = {.lex_state = 593},
  [184] = {.lex_state = 593},
  [185] = {.lex_state = 538},
  [186] = {.lex_state = 593},
  [187] = {.lex_state = 525, .external_lex_state = 3},
  [188] = {.lex_state = 515},
  [189] = {.lex_state = 515},
  [190] = {.lex_state = 525, .external_lex_state = 3},
  [191] = {.lex_state = 355},
  [192] = {.lex_state = 600, .external_lex_state = 4},
  [193] = {.lex_state = 525, .external_lex_state = 3},
  [194] = {.lex_state = 600, .external_lex_state = 4},
  [195] = {.lex_state = 508},
  [196] = {.lex_state = 508},
  [197] = {.lex_state = 355},
  [198] = {.lex_state = 508},
  [199] = {.lex_state = 355},
  [200] = {.lex_state = 355},
  [201] = {.lex_state = 870, .external_lex_state = 4},
  [202] = {.lex_state = 879},
  [203] = {.lex_state = 525, .external_lex_state = 3},
  [204] = {.lex_state = 327},
  [205] = {.lex_state = 456, .external_lex_state = 2},
  [206] = {.lex_state = 605},
  [207] = {.lex_state = 605},
  [208] = {.lex_state = 605},
  [209] = {.lex_state = 525, .external_lex_state = 3},
  [210] = {.lex_state = 456, .external_lex_state = 2},
  [211] = {.lex_state = 605},
  [212] = {.lex_state = 624, .external_lex_state = 3},
  [213] = {.lex_state = 620, .external_lex_state = 3},
  [214] = {.lex_state = 624, .external_lex_state = 3},
  [215] = {.lex_state = 624, .external_lex_state = 3},
  [216] = {.lex_state = 624, .external_lex_state = 3},
  [217] = {.lex_state = 488},
  [218] = {.lex_state = 624, .external_lex_state = 3},
  [219] = {.lex_state = 355},
  [220] = {.lex_state = 355},
  [221] = {.lex_state = 802, .external_lex_state = 3},
  [222] = {.lex_state = 802, .external_lex_state = 3},
  [223] = {.lex_state = 802, .external_lex_state = 3},
  [224] = {.lex_state = 525, .external_lex_state = 3},
  [225] = {.lex_state = 634, .external_lex_state = 3},
  [226] = {.lex_state = 812, .external_lex_state = 3},
  [227] = {.lex_state = 812, .external_lex_state = 3},
  [228] = {.lex_state = 817, .external_lex_state = 3},
  [229] = {.lex_state = 827, .external_lex_state = 3},
  [230] = {.lex_state = 525, .external_lex_state = 3},
  [231] = {.lex_state = 515},
  [232] = {.lex_state = 525, .external_lex_state = 3},
  [233] = {.lex_state = 327},
  [234] = {.lex_state = 515},
  [235] = {.lex_state = 884, .external_lex_state = 3},
  [236] = {.lex_state = 884, .external_lex_state = 3},
  [237] = {.lex_state = 832, .external_lex_state = 3},
  [238] = {.lex_state = 884, .external_lex_state = 3},
  [239] = {.lex_state = 508},
  [240] = {.lex_state = 832, .external_lex_state = 3},
  [241] = {.lex_state = 644},
  [242] = {.lex_state = 508},
  [243] = {.lex_state = 593},
  [244] = {.lex_state = 827, .external_lex_state = 3},
  [245] = {.lex_state = 525, .external_lex_state = 3},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 846},
  [249] = {.lex_state = 846},
  [250] = {.lex_state = 853},
  [251] = {.lex_state = 853},
  [252] = {.lex_state = 538},
  [253] = {.lex_state = 538},
  [254] = {.lex_state = 538},
  [255] = {.lex_state = 538},
  [256] = {.lex_state = 889},
  [257] = {.lex_state = 889},
  [258] = {.lex_state = 525, .external_lex_state = 3},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 525, .external_lex_state = 3},
  [261] = {.lex_state = 860, .external_lex_state = 4},
  [262] = {.lex_state = 546},
  [263] = {.lex_state = 515},
  [264] = {.lex_state = 355},
  [265] = {.lex_state = 355},
  [266] = {.lex_state = 593},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 865, .external_lex_state = 3},
  [269] = {.lex_state = 593},
  [270] = {.lex_state = 515},
  [271] = {.lex_state = 525, .external_lex_state = 3},
  [272] = {.lex_state = 355},
  [273] = {.lex_state = 525, .external_lex_state = 3},
  [274] = {.lex_state = 355},
  [275] = {.lex_state = 515},
  [276] = {.lex_state = 538},
  [277] = {.lex_state = 525, .external_lex_state = 3},
  [278] = {.lex_state = 515},
  [279] = {.lex_state = 355},
  [280] = {.lex_state = 515},
  [281] = {.lex_state = 525, .external_lex_state = 3},
  [282] = {.lex_state = 355},
  [283] = {.lex_state = 508},
  [284] = {.lex_state = 508},
  [285] = {.lex_state = 355},
  [286] = {.lex_state = 525, .external_lex_state = 3},
  [287] = {.lex_state = 525, .external_lex_state = 3},
  [288] = {.lex_state = 525, .external_lex_state = 3},
  [289] = {.lex_state = 870, .external_lex_state = 4},
  [290] = {.lex_state = 525, .external_lex_state = 3},
  [291] = {.lex_state = 879},
  [292] = {.lex_state = 355},
  [293] = {.lex_state = 525, .external_lex_state = 3},
  [294] = {.lex_state = 456, .external_lex_state = 2},
  [295] = {.lex_state = 525, .external_lex_state = 3},
  [296] = {.lex_state = 456, .external_lex_state = 2},
  [297] = {.lex_state = 624, .external_lex_state = 3},
  [298] = {.lex_state = 624, .external_lex_state = 3},
  [299] = {.lex_state = 515},
  [300] = {.lex_state = 355},
  [301] = {.lex_state = 827, .external_lex_state = 3},
  [302] = {.lex_state = 525, .external_lex_state = 3},
  [303] = {.lex_state = 355},
  [304] = {.lex_state = 355},
  [305] = {.lex_state = 355},
  [306] = {.lex_state = 884, .external_lex_state = 3},
  [307] = {.lex_state = 884, .external_lex_state = 3},
  [308] = {.lex_state = 832, .external_lex_state = 3},
  [309] = {.lex_state = 508},
  [310] = {.lex_state = 827, .external_lex_state = 3},
  [311] = {.lex_state = 827, .external_lex_state = 3},
  [312] = {.lex_state = 525, .external_lex_state = 3},
  [313] = {.lex_state = 846},
  [314] = {.lex_state = 853},
  [315] = {.lex_state = 538},
  [316] = {.lex_state = 889},
  [317] = {.lex_state = 860, .external_lex_state = 4},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 525, .external_lex_state = 3},
  [320] = {.lex_state = 355},
  [321] = {.lex_state = 515},
  [322] = {.lex_state = 355},
  [323] = {.lex_state = 327},
  [324] = {.lex_state = 355},
  [325] = {.lex_state = 525, .external_lex_state = 3},
  [326] = {.lex_state = 327},
  [327] = {.lex_state = 355},
  [328] = {.lex_state = 355},
  [329] = {.lex_state = 515},
  [330] = {.lex_state = 525, .external_lex_state = 3},
  [331] = {.lex_state = 593},
  [332] = {.lex_state = 355},
  [333] = {.lex_state = 515},
  [334] = {.lex_state = 525, .external_lex_state = 3},
  [335] = {.lex_state = 355},
  [336] = {.lex_state = 355},
  [337] = {.lex_state = 508},
  [338] = {.lex_state = 870, .external_lex_state = 4},
  [339] = {.lex_state = 525, .external_lex_state = 3},
  [340] = {.lex_state = 525, .external_lex_state = 3},
  [341] = {.lex_state = 879},
  [342] = {.lex_state = 525, .external_lex_state = 3},
  [343] = {.lex_state = 525, .external_lex_state = 3},
  [344] = {.lex_state = 525, .external_lex_state = 3},
  [345] = {.lex_state = 515},
  [346] = {.lex_state = 525, .external_lex_state = 3},
  [347] = {.lex_state = 525, .external_lex_state = 3},
  [348] = {.lex_state = 355},
  [349] = {.lex_state = 327},
  [350] = {.lex_state = 593},
  [351] = {.lex_state = 355},
  [352] = {.lex_state = 832, .external_lex_state = 3},
  [353] = {.lex_state = 327},
  [354] = {.lex_state = 355},
  [355] = {.lex_state = 832, .external_lex_state = 3},
  [356] = {.lex_state = 525, .external_lex_state = 3},
  [357] = {.lex_state = 860, .external_lex_state = 4},
  [358] = {.lex_state = 355},
  [359] = {.lex_state = 355},
  [360] = {.lex_state = 355},
  [361] = {.lex_state = 355},
  [362] = {.lex_state = 355},
  [363] = {.lex_state = 593},
  [364] = {.lex_state = 355},
  [365] = {.lex_state = 327},
  [366] = {.lex_state = 355},
  [367] = {.lex_state = 525, .external_lex_state = 3},
  [368] = {.lex_state = 870, .external_lex_state = 4},
  [369] = {.lex_state = 879},
  [370] = {.lex_state = 525, .external_lex_state = 3},
  [371] = {.lex_state = 355},
  [372] = {.lex_state = 515},
  [373] = {.lex_state = 355},
  [374] = {.lex_state = 327},
  [375] = {.lex_state = 593},
  [376] = {.lex_state = 355},
  [377] = {.lex_state = 832, .external_lex_state = 3},
  [378] = {.lex_state = 327},
  [379] = {.lex_state = 355},
  [380] = {.lex_state = 525, .external_lex_state = 3},
  [381] = {.lex_state = 355},
  [382] = {.lex_state = 355},
  [383] = {.lex_state = 327},
  [384] = {.lex_state = 355},
  [385] = {.lex_state = 593},
  [386] = {.lex_state = 355},
  [387] = {.lex_state = 355},
  [388] = {.lex_state = 355},
  [389] = {.lex_state = 355},
  [390] = {.lex_state = 355},
  [391] = {.lex_state = 525, .external_lex_state = 3},
  [392] = {.lex_state = 355},
  [393] = {.lex_state = 355},
  [394] = {.lex_state = 355},
  [395] = {.lex_state = 327},
  [396] = {.lex_state = 355},
  [397] = {.lex_state = 355},
  [398] = {.lex_state = 525, .external_lex_state = 3},
  [399] = {.lex_state = 355},
  [400] = {.lex_state = 355},
  [401] = {.lex_state = 355},
  [402] = {.lex_state = 355},
  [403] = {.lex_state = 525, .external_lex_state = 3},
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
    [sym_module] = STATE(20),
    [sym_import] = STATE(21),
    [sym__declaration] = STATE(22),
    [sym__expression] = STATE(21),
    [sym_foreign] = STATE(21),
    [sym_default] = STATE(21),
    [sym_do_expression] = STATE(23),
    [sym_type_class] = STATE(21),
    [sym_type_class_instance] = STATE(21),
    [sym_fixity] = STATE(21),
    [sym_type_signature] = STATE(21),
    [sym_algebraic_datatype] = STATE(21),
    [sym_newtype] = STATE(21),
    [sym_type_synonym] = STATE(21),
    [sym__literal] = STATE(23),
    [sym__identifier] = STATE(24),
    [sym_integer] = STATE(16),
    [sym_char] = STATE(16),
    [sym_string] = STATE(16),
    [aux_sym_module_repeat1] = STATE(25),
    [aux_sym_type_signature_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(16),
    [anon_sym_default] = ACTIONS(18),
    [anon_sym_do] = ACTIONS(20),
    [anon_sym_class] = ACTIONS(22),
    [anon_sym_instance] = ACTIONS(24),
    [anon_sym_infixl] = ACTIONS(26),
    [anon_sym_infixr] = ACTIONS(26),
    [anon_sym_infix] = ACTIONS(26),
    [anon_sym_COLON_COLON] = ACTIONS(28),
    [anon_sym_data] = ACTIONS(30),
    [anon_sym_newtype] = ACTIONS(32),
    [anon_sym_type] = ACTIONS(34),
    [sym_variable_identifier] = ACTIONS(36),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__integer_literal] = ACTIONS(48),
    [sym__octal_literal] = ACTIONS(48),
    [sym__hexidecimal_literal] = ACTIONS(48),
  },
  [2] = {
    [sym_module_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(40),
  },
  [3] = {
    [sym__identifier] = STATE(30),
    [anon_sym_qualified] = ACTIONS(52),
    [sym_variable_identifier] = ACTIONS(54),
    [sym_constructor_identifier] = ACTIONS(54),
    [sym_module_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(40),
  },
  [4] = {
    [sym_foreign_import] = STATE(32),
    [anon_sym_import] = ACTIONS(56),
    [sym_foreign_export] = ACTIONS(58),
    [sym_comment] = ACTIONS(40),
  },
  [5] = {
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym_comment] = ACTIONS(40),
  },
  [6] = {
    [sym_statement_list] = STATE(36),
    [sym__layout_open_brace] = ACTIONS(62),
    [anon_sym_LBRACE] = ACTIONS(64),
    [sym_comment] = ACTIONS(40),
  },
  [7] = {
    [sym_context] = STATE(39),
    [sym_class] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym_constructor_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(40),
  },
  [8] = {
    [sym_context] = STATE(42),
    [sym_class] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym_constructor_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(40),
  },
  [9] = {
    [sym__op] = STATE(48),
    [sym_variable_symbol] = STATE(49),
    [sym_constructor_symbol] = STATE(49),
    [sym_integer] = STATE(50),
    [sym__symbol] = STATE(51),
    [aux_sym_variable_symbol_repeat1] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_BQUOTE] = ACTIONS(74),
    [anon_sym_COLON] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(80),
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
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
    [sym__integer_literal] = ACTIONS(82),
    [sym__octal_literal] = ACTIONS(82),
    [sym__hexidecimal_literal] = ACTIONS(82),
  },
  [10] = {
    [sym__type] = STATE(55),
    [sym_function_type] = STATE(56),
    [sym_context] = STATE(57),
    [sym_class] = STATE(58),
    [sym__identifier] = STATE(59),
    [sym_simple_type] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(84),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(88),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [11] = {
    [sym_context] = STATE(62),
    [sym_class] = STATE(40),
    [sym_simple_type] = STATE(63),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym_constructor_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(40),
  },
  [12] = {
    [sym_context] = STATE(65),
    [sym_class] = STATE(40),
    [sym_simple_type] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym_constructor_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(40),
  },
  [13] = {
    [sym_simple_type] = STATE(68),
    [sym_constructor_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(40),
  },
  [14] = {
    [sym__layout_semicolon] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(98),
    [anon_sym_COLON_COLON] = ACTIONS(100),
    [sym_variable_identifier] = ACTIONS(100),
    [sym_constructor_identifier] = ACTIONS(102),
    [sym_module_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(40),
  },
  [15] = {
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_BQUOTE] = ACTIONS(100),
    [anon_sym_COLON_COLON] = ACTIONS(100),
    [anon_sym_DASH_GT] = ACTIONS(100),
    [sym_variable_identifier] = ACTIONS(100),
    [sym_constructor_identifier] = ACTIONS(102),
    [sym_module_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(40),
  },
  [16] = {
    [sym__layout_semicolon] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(106),
    [sym_comment] = ACTIONS(40),
  },
  [17] = {
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
    [anon_sym_BQUOTE] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(110),
    [anon_sym_EQ] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_BANG] = ACTIONS(110),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
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
    [anon_sym_AT] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_TILDE] = ACTIONS(110),
    [anon_sym_BSLASH] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_RBRACK] = ACTIONS(108),
    [sym__space] = ACTIONS(112),
  },
  [18] = {
    [sym__gap] = STATE(78),
    [sym__graphic] = STATE(78),
    [sym__small] = STATE(80),
    [sym__large] = STATE(80),
    [sym__symbol] = STATE(80),
    [sym__special] = STATE(80),
    [sym__escape] = STATE(78),
    [aux_sym_string_repeat1] = STATE(85),
    [anon_sym_SEMI] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(124),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_PIPE] = ACTIONS(124),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(132),
    [anon_sym__] = ACTIONS(132),
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
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym_CARET] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_TILDE] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(122),
    [sym__space] = ACTIONS(138),
    [sym__newline] = ACTIONS(138),
    [sym__tab] = ACTIONS(138),
    [sym__vertical_tab] = ACTIONS(138),
  },
  [19] = {
    [sym__layout_semicolon] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(142),
    [sym_comment] = ACTIONS(40),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_comment] = ACTIONS(40),
  },
  [21] = {
    [sym__layout_semicolon] = ACTIONS(146),
    [anon_sym_SEMI] = ACTIONS(148),
    [sym_comment] = ACTIONS(40),
  },
  [22] = {
    [sym__layout_semicolon] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(152),
    [sym_comment] = ACTIONS(40),
  },
  [23] = {
    [sym__layout_semicolon] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(98),
    [sym_comment] = ACTIONS(40),
  },
  [24] = {
    [anon_sym_COLON_COLON] = ACTIONS(154),
    [sym_variable_identifier] = ACTIONS(154),
    [sym_constructor_identifier] = ACTIONS(156),
    [sym_module_identifier] = ACTIONS(156),
    [sym_comment] = ACTIONS(40),
  },
  [25] = {
    [sym_import] = STATE(21),
    [sym__declaration] = STATE(87),
    [sym__expression] = STATE(21),
    [sym_foreign] = STATE(21),
    [sym_default] = STATE(21),
    [sym_do_expression] = STATE(23),
    [sym_type_class] = STATE(21),
    [sym_type_class_instance] = STATE(21),
    [sym_fixity] = STATE(21),
    [sym_type_signature] = STATE(21),
    [sym_algebraic_datatype] = STATE(21),
    [sym_newtype] = STATE(21),
    [sym_type_synonym] = STATE(21),
    [sym__literal] = STATE(23),
    [sym__identifier] = STATE(24),
    [sym_integer] = STATE(16),
    [sym_char] = STATE(16),
    [sym_string] = STATE(16),
    [aux_sym_type_signature_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(16),
    [anon_sym_default] = ACTIONS(18),
    [anon_sym_do] = ACTIONS(20),
    [anon_sym_class] = ACTIONS(22),
    [anon_sym_instance] = ACTIONS(24),
    [anon_sym_infixl] = ACTIONS(26),
    [anon_sym_infixr] = ACTIONS(26),
    [anon_sym_infix] = ACTIONS(26),
    [anon_sym_COLON_COLON] = ACTIONS(28),
    [anon_sym_data] = ACTIONS(30),
    [anon_sym_newtype] = ACTIONS(32),
    [anon_sym_type] = ACTIONS(34),
    [sym_variable_identifier] = ACTIONS(36),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__integer_literal] = ACTIONS(48),
    [sym__octal_literal] = ACTIONS(48),
    [sym__hexidecimal_literal] = ACTIONS(48),
  },
  [26] = {
    [sym__identifier] = STATE(89),
    [anon_sym_COLON_COLON] = ACTIONS(160),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [27] = {
    [sym_module_exports] = STATE(92),
    [anon_sym_where] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(164),
    [sym_comment] = ACTIONS(40),
  },
  [28] = {
    [sym__identifier] = STATE(93),
    [sym_variable_identifier] = ACTIONS(166),
    [sym_constructor_identifier] = ACTIONS(54),
    [sym_module_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(40),
  },
  [29] = {
    [sym__layout_semicolon] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_as] = ACTIONS(100),
    [anon_sym_hiding] = ACTIONS(100),
    [anon_sym_DASH_GT] = ACTIONS(100),
    [anon_sym_deriving] = ACTIONS(100),
    [sym_comment] = ACTIONS(40),
  },
  [30] = {
    [sym_import_specification] = STATE(97),
    [sym__layout_semicolon] = ACTIONS(170),
    [anon_sym_SEMI] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_as] = ACTIONS(176),
    [anon_sym_hiding] = ACTIONS(178),
    [sym_comment] = ACTIONS(40),
  },
  [31] = {
    [anon_sym_ccall] = ACTIONS(180),
    [anon_sym_stdcall] = ACTIONS(180),
    [anon_sym_cplusplus] = ACTIONS(180),
    [anon_sym_jvm] = ACTIONS(180),
    [anon_sym_dotnet] = ACTIONS(180),
    [sym_comment] = ACTIONS(40),
  },
  [32] = {
    [sym_calling_convention] = STATE(99),
    [anon_sym_ccall] = ACTIONS(182),
    [anon_sym_stdcall] = ACTIONS(182),
    [anon_sym_cplusplus] = ACTIONS(182),
    [anon_sym_jvm] = ACTIONS(182),
    [anon_sym_dotnet] = ACTIONS(182),
    [sym_comment] = ACTIONS(40),
  },
  [33] = {
    [sym__identifier] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(184),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [34] = {
    [sym__expression] = STATE(103),
    [sym_do_expression] = STATE(23),
    [sym__statement] = STATE(104),
    [sym__literal] = STATE(23),
    [sym_integer] = STATE(16),
    [sym_char] = STATE(16),
    [sym_string] = STATE(16),
    [aux_sym_statement_list_repeat1] = STATE(105),
    [sym__layout_close_brace] = ACTIONS(186),
    [anon_sym_do] = ACTIONS(20),
    [sym_variable_identifier] = ACTIONS(188),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__integer_literal] = ACTIONS(48),
    [sym__octal_literal] = ACTIONS(48),
    [sym__hexidecimal_literal] = ACTIONS(48),
  },
  [35] = {
    [sym__expression] = STATE(106),
    [sym_do_expression] = STATE(23),
    [sym__statement] = STATE(107),
    [sym__literal] = STATE(23),
    [sym_integer] = STATE(16),
    [sym_char] = STATE(16),
    [sym_string] = STATE(16),
    [aux_sym_statement_list_repeat1] = STATE(108),
    [anon_sym_RBRACE] = ACTIONS(190),
    [anon_sym_do] = ACTIONS(20),
    [sym_variable_identifier] = ACTIONS(188),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__integer_literal] = ACTIONS(48),
    [sym__octal_literal] = ACTIONS(48),
    [sym__hexidecimal_literal] = ACTIONS(48),
  },
  [36] = {
    [sym__layout_semicolon] = ACTIONS(192),
    [anon_sym_SEMI] = ACTIONS(194),
    [sym_comment] = ACTIONS(40),
  },
  [37] = {
    [sym_class] = STATE(110),
    [sym_constructor_identifier] = ACTIONS(196),
    [sym_comment] = ACTIONS(40),
  },
  [38] = {
    [aux_sym_type_class_repeat1] = STATE(114),
    [anon_sym_where] = ACTIONS(198),
    [anon_sym_LPAREN] = ACTIONS(200),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_comment] = ACTIONS(40),
  },
  [39] = {
    [sym_constructor_identifier] = ACTIONS(204),
    [sym_comment] = ACTIONS(40),
  },
  [40] = {
    [anon_sym_EQ_GT] = ACTIONS(206),
    [sym_comment] = ACTIONS(40),
  },
  [41] = {
    [aux_sym_type_class_repeat1] = STATE(118),
    [anon_sym_where] = ACTIONS(208),
    [anon_sym_LPAREN] = ACTIONS(200),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_comment] = ACTIONS(40),
  },
  [42] = {
    [sym_constructor_identifier] = ACTIONS(210),
    [sym_comment] = ACTIONS(40),
  },
  [43] = {
    [sym__symbol] = STATE(51),
    [aux_sym_variable_symbol_repeat1] = STATE(121),
    [anon_sym_COLON] = ACTIONS(212),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(80),
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
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
  },
  [44] = {
    [sym__identifier] = STATE(122),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [45] = {
    [sym__symbol] = STATE(51),
    [aux_sym_variable_symbol_repeat1] = STATE(124),
    [sym__layout_semicolon] = ACTIONS(214),
    [anon_sym_SEMI] = ACTIONS(216),
    [anon_sym_COMMA] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(80),
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
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
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
    [sym_comment] = ACTIONS(80),
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
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_BQUOTE] = ACTIONS(224),
    [anon_sym_COLON] = ACTIONS(224),
    [anon_sym_EQ] = ACTIONS(224),
    [anon_sym_PIPE] = ACTIONS(224),
    [anon_sym_BANG] = ACTIONS(224),
    [sym_comment] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(224),
    [anon_sym_DOLLAR] = ACTIONS(224),
    [anon_sym_PERCENT] = ACTIONS(224),
    [anon_sym_AMP] = ACTIONS(224),
    [anon_sym_1] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DOT] = ACTIONS(224),
    [anon_sym_SLASH] = ACTIONS(224),
    [anon_sym_LT] = ACTIONS(224),
    [anon_sym_GT] = ACTIONS(224),
    [anon_sym_QMARK] = ACTIONS(224),
    [anon_sym_AT] = ACTIONS(224),
    [anon_sym_CARET] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(224),
    [anon_sym_TILDE] = ACTIONS(224),
    [anon_sym_BSLASH] = ACTIONS(224),
  },
  [48] = {
    [aux_sym_fixity_repeat1] = STATE(126),
    [sym__layout_semicolon] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(230),
    [sym_comment] = ACTIONS(40),
  },
  [49] = {
    [sym__layout_semicolon] = ACTIONS(232),
    [anon_sym_SEMI] = ACTIONS(234),
    [anon_sym_COMMA] = ACTIONS(234),
    [sym_comment] = ACTIONS(40),
  },
  [50] = {
    [sym__op] = STATE(127),
    [sym_variable_symbol] = STATE(49),
    [sym_constructor_symbol] = STATE(49),
    [sym__symbol] = STATE(51),
    [aux_sym_variable_symbol_repeat1] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_BQUOTE] = ACTIONS(74),
    [anon_sym_COLON] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(80),
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
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
  },
  [51] = {
    [sym__layout_semicolon] = ACTIONS(236),
    [anon_sym_SEMI] = ACTIONS(238),
    [anon_sym_COMMA] = ACTIONS(238),
    [anon_sym_RPAREN] = ACTIONS(238),
    [anon_sym_COLON] = ACTIONS(238),
    [anon_sym_EQ] = ACTIONS(238),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_BANG] = ACTIONS(238),
    [sym_comment] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(238),
    [anon_sym_DOLLAR] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(238),
    [anon_sym_AMP] = ACTIONS(238),
    [anon_sym_1] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_DOT] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(238),
    [anon_sym_GT] = ACTIONS(238),
    [anon_sym_QMARK] = ACTIONS(238),
    [anon_sym_AT] = ACTIONS(238),
    [anon_sym_CARET] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(238),
    [anon_sym_TILDE] = ACTIONS(238),
    [anon_sym_BSLASH] = ACTIONS(238),
  },
  [52] = {
    [sym__symbol] = STATE(129),
    [sym__layout_semicolon] = ACTIONS(240),
    [anon_sym_SEMI] = ACTIONS(242),
    [anon_sym_COMMA] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(80),
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
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
  },
  [53] = {
    [sym_class] = STATE(130),
    [sym_constructor_identifier] = ACTIONS(196),
    [sym_comment] = ACTIONS(40),
  },
  [54] = {
    [aux_sym_type_class_repeat1] = STATE(132),
    [sym__layout_semicolon] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(200),
    [anon_sym_DASH_GT] = ACTIONS(100),
    [sym_variable_identifier] = ACTIONS(250),
    [sym_comment] = ACTIONS(40),
  },
  [55] = {
    [sym__layout_semicolon] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(254),
    [sym_comment] = ACTIONS(40),
  },
  [56] = {
    [sym__layout_semicolon] = ACTIONS(256),
    [anon_sym_SEMI] = ACTIONS(258),
    [sym_comment] = ACTIONS(40),
  },
  [57] = {
    [sym__type] = STATE(134),
    [sym_function_type] = STATE(56),
    [sym__identifier] = STATE(59),
    [sym_simple_type] = STATE(60),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(260),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [58] = {
    [anon_sym_EQ_GT] = ACTIONS(262),
    [sym_comment] = ACTIONS(40),
  },
  [59] = {
    [anon_sym_DASH_GT] = ACTIONS(264),
    [sym_comment] = ACTIONS(40),
  },
  [60] = {
    [sym__layout_semicolon] = ACTIONS(256),
    [anon_sym_SEMI] = ACTIONS(258),
    [anon_sym_DASH_GT] = ACTIONS(264),
    [sym_comment] = ACTIONS(40),
  },
  [61] = {
    [aux_sym_type_class_repeat1] = STATE(138),
    [sym__layout_semicolon] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(200),
    [anon_sym_EQ] = ACTIONS(248),
    [anon_sym_deriving] = ACTIONS(248),
    [sym_variable_identifier] = ACTIONS(266),
    [sym_constructor_identifier] = ACTIONS(268),
    [sym_comment] = ACTIONS(40),
  },
  [62] = {
    [sym_simple_type] = STATE(140),
    [sym_constructor_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(40),
  },
  [63] = {
    [sym_constructors] = STATE(144),
    [sym_constructor] = STATE(145),
    [sym_deriving] = STATE(146),
    [sym__layout_semicolon] = ACTIONS(272),
    [anon_sym_SEMI] = ACTIONS(274),
    [anon_sym_EQ] = ACTIONS(276),
    [anon_sym_deriving] = ACTIONS(278),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(40),
  },
  [64] = {
    [aux_sym_type_class_repeat1] = STATE(148),
    [anon_sym_LPAREN] = ACTIONS(200),
    [anon_sym_EQ] = ACTIONS(248),
    [sym_variable_identifier] = ACTIONS(282),
    [sym_comment] = ACTIONS(40),
  },
  [65] = {
    [sym_simple_type] = STATE(149),
    [sym_constructor_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(40),
  },
  [66] = {
    [anon_sym_EQ] = ACTIONS(284),
    [sym_comment] = ACTIONS(40),
  },
  [67] = {
    [aux_sym_type_class_repeat1] = STATE(148),
    [anon_sym_EQ] = ACTIONS(248),
    [sym_variable_identifier] = ACTIONS(286),
    [sym_comment] = ACTIONS(40),
  },
  [68] = {
    [anon_sym_EQ] = ACTIONS(288),
    [sym_comment] = ACTIONS(40),
  },
  [69] = {
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(290),
  },
  [70] = {
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(292),
  },
  [71] = {
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(294),
  },
  [72] = {
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(296),
  },
  [73] = {
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(298),
  },
  [74] = {
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(300),
  },
  [75] = {
    [sym__char_escape] = STATE(155),
    [sym__ascii] = STATE(155),
    [sym_comment] = ACTIONS(80),
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
  [76] = {
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
    [sym_comment] = ACTIONS(80),
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
  [77] = {
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_BQUOTE] = ACTIONS(222),
    [anon_sym_COLON] = ACTIONS(222),
    [anon_sym_EQ] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_BANG] = ACTIONS(222),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(222),
    [anon_sym__] = ACTIONS(222),
    [sym__ascii_large] = ACTIONS(222),
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
    [anon_sym_LBRACK] = ACTIONS(222),
    [anon_sym_RBRACK] = ACTIONS(222),
    [sym__space] = ACTIONS(222),
    [sym__newline] = ACTIONS(222),
    [sym__tab] = ACTIONS(222),
    [sym__vertical_tab] = ACTIONS(222),
  },
  [78] = {
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
    [sym_comment] = ACTIONS(80),
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
  [79] = {
    [sym__layout_semicolon] = ACTIONS(318),
    [anon_sym_SEMI] = ACTIONS(320),
    [sym_comment] = ACTIONS(40),
  },
  [80] = {
    [anon_sym_SEMI] = ACTIONS(322),
    [anon_sym_LBRACE] = ACTIONS(322),
    [anon_sym_RBRACE] = ACTIONS(322),
    [anon_sym_LPAREN] = ACTIONS(322),
    [anon_sym_RPAREN] = ACTIONS(322),
    [anon_sym_BQUOTE] = ACTIONS(322),
    [anon_sym_COLON] = ACTIONS(322),
    [anon_sym_EQ] = ACTIONS(322),
    [anon_sym_PIPE] = ACTIONS(322),
    [anon_sym_BANG] = ACTIONS(322),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(322),
    [anon_sym_DQUOTE] = ACTIONS(322),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(322),
    [anon_sym__] = ACTIONS(322),
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
    [anon_sym_AT] = ACTIONS(322),
    [anon_sym_CARET] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_TILDE] = ACTIONS(322),
    [anon_sym_BSLASH] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(322),
    [anon_sym_RBRACK] = ACTIONS(322),
    [sym__space] = ACTIONS(322),
    [sym__newline] = ACTIONS(322),
    [sym__tab] = ACTIONS(322),
    [sym__vertical_tab] = ACTIONS(322),
  },
  [81] = {
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
    [sym_comment] = ACTIONS(80),
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
  [82] = {
    [anon_sym_SEMI] = ACTIONS(326),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_RBRACE] = ACTIONS(326),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_RPAREN] = ACTIONS(326),
    [anon_sym_BQUOTE] = ACTIONS(326),
    [anon_sym_COLON] = ACTIONS(326),
    [anon_sym_EQ] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(326),
    [anon_sym_BANG] = ACTIONS(326),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(326),
    [anon_sym_DQUOTE] = ACTIONS(326),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(326),
    [anon_sym__] = ACTIONS(326),
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
    [anon_sym_AT] = ACTIONS(326),
    [anon_sym_CARET] = ACTIONS(326),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_TILDE] = ACTIONS(326),
    [anon_sym_BSLASH] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(326),
    [anon_sym_RBRACK] = ACTIONS(326),
    [sym__space] = ACTIONS(326),
    [sym__newline] = ACTIONS(326),
    [sym__tab] = ACTIONS(326),
    [sym__vertical_tab] = ACTIONS(326),
  },
  [83] = {
    [sym__char_escape] = STATE(161),
    [sym__ascii] = STATE(161),
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_BQUOTE] = ACTIONS(222),
    [anon_sym_COLON] = ACTIONS(222),
    [anon_sym_EQ] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_BANG] = ACTIONS(222),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(328),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(222),
    [anon_sym__] = ACTIONS(222),
    [sym__ascii_large] = ACTIONS(222),
    [anon_sym_POUND] = ACTIONS(222),
    [anon_sym_DOLLAR] = ACTIONS(222),
    [anon_sym_PERCENT] = ACTIONS(222),
    [anon_sym_AMP] = ACTIONS(328),
    [anon_sym_1] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DOT] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_LT] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(222),
    [anon_sym_QMARK] = ACTIONS(222),
    [anon_sym_AT] = ACTIONS(222),
    [anon_sym_CARET] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_TILDE] = ACTIONS(222),
    [anon_sym_BSLASH] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(222),
    [anon_sym_RBRACK] = ACTIONS(222),
    [sym__space] = ACTIONS(222),
    [sym__newline] = ACTIONS(222),
    [sym__tab] = ACTIONS(222),
    [sym__vertical_tab] = ACTIONS(222),
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
  [84] = {
    [anon_sym_SEMI] = ACTIONS(340),
    [anon_sym_LBRACE] = ACTIONS(340),
    [anon_sym_RBRACE] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(340),
    [anon_sym_RPAREN] = ACTIONS(340),
    [anon_sym_BQUOTE] = ACTIONS(340),
    [anon_sym_COLON] = ACTIONS(340),
    [anon_sym_EQ] = ACTIONS(340),
    [anon_sym_PIPE] = ACTIONS(340),
    [anon_sym_BANG] = ACTIONS(340),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(340),
    [anon_sym_DQUOTE] = ACTIONS(340),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(340),
    [anon_sym__] = ACTIONS(340),
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
    [anon_sym_AT] = ACTIONS(340),
    [anon_sym_CARET] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_TILDE] = ACTIONS(340),
    [anon_sym_BSLASH] = ACTIONS(340),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(340),
    [sym__space] = ACTIONS(340),
    [sym__newline] = ACTIONS(340),
    [sym__tab] = ACTIONS(340),
    [sym__vertical_tab] = ACTIONS(340),
  },
  [85] = {
    [sym__gap] = STATE(166),
    [sym__graphic] = STATE(166),
    [sym__small] = STATE(80),
    [sym__large] = STATE(80),
    [sym__symbol] = STATE(80),
    [sym__special] = STATE(80),
    [sym__escape] = STATE(166),
    [anon_sym_SEMI] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(124),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_PIPE] = ACTIONS(124),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(342),
    [anon_sym_DQUOTE] = ACTIONS(344),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(132),
    [anon_sym__] = ACTIONS(132),
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
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym_CARET] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_TILDE] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(122),
    [sym__space] = ACTIONS(138),
    [sym__newline] = ACTIONS(138),
    [sym__tab] = ACTIONS(138),
    [sym__vertical_tab] = ACTIONS(138),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(346),
    [anon_sym_RBRACE] = ACTIONS(348),
    [anon_sym_import] = ACTIONS(348),
    [anon_sym_foreign] = ACTIONS(348),
    [anon_sym_default] = ACTIONS(348),
    [anon_sym_do] = ACTIONS(348),
    [anon_sym_class] = ACTIONS(348),
    [anon_sym_instance] = ACTIONS(348),
    [anon_sym_infixl] = ACTIONS(348),
    [anon_sym_infixr] = ACTIONS(348),
    [anon_sym_infix] = ACTIONS(348),
    [anon_sym_COLON_COLON] = ACTIONS(348),
    [anon_sym_data] = ACTIONS(348),
    [anon_sym_newtype] = ACTIONS(348),
    [anon_sym_type] = ACTIONS(348),
    [sym_variable_identifier] = ACTIONS(350),
    [sym_constructor_identifier] = ACTIONS(350),
    [sym_module_identifier] = ACTIONS(350),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(350),
    [anon_sym_SQUOTE] = ACTIONS(348),
    [anon_sym_DQUOTE] = ACTIONS(348),
    [sym__integer_literal] = ACTIONS(348),
    [sym__octal_literal] = ACTIONS(348),
    [sym__hexidecimal_literal] = ACTIONS(348),
  },
  [87] = {
    [sym__layout_semicolon] = ACTIONS(352),
    [anon_sym_SEMI] = ACTIONS(354),
    [sym_comment] = ACTIONS(40),
  },
  [88] = {
    [sym__type] = STATE(134),
    [sym_function_type] = STATE(56),
    [sym_context] = STATE(169),
    [sym_class] = STATE(58),
    [sym__identifier] = STATE(59),
    [sym_simple_type] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(84),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(88),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [89] = {
    [anon_sym_COLON_COLON] = ACTIONS(356),
    [sym_variable_identifier] = ACTIONS(356),
    [sym_constructor_identifier] = ACTIONS(358),
    [sym_module_identifier] = ACTIONS(358),
    [sym_comment] = ACTIONS(40),
  },
  [90] = {
    [sym_declarations] = STATE(172),
    [sym__layout_open_brace] = ACTIONS(360),
    [anon_sym_LBRACE] = ACTIONS(362),
    [sym_comment] = ACTIONS(40),
  },
  [91] = {
    [sym_export] = STATE(175),
    [sym__identifier] = STATE(176),
    [anon_sym_RPAREN] = ACTIONS(364),
    [sym_variable_identifier] = ACTIONS(366),
    [sym_constructor_identifier] = ACTIONS(368),
    [sym_module_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(40),
  },
  [92] = {
    [anon_sym_where] = ACTIONS(370),
    [sym_comment] = ACTIONS(40),
  },
  [93] = {
    [sym_import_specification] = STATE(179),
    [sym__layout_semicolon] = ACTIONS(372),
    [anon_sym_SEMI] = ACTIONS(374),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_as] = ACTIONS(376),
    [anon_sym_hiding] = ACTIONS(178),
    [sym_comment] = ACTIONS(40),
  },
  [94] = {
    [sym__identifier] = STATE(181),
    [anon_sym_RPAREN] = ACTIONS(378),
    [sym_variable_identifier] = ACTIONS(366),
    [sym_constructor_identifier] = ACTIONS(368),
    [sym_module_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(40),
  },
  [95] = {
    [sym__identifier] = STATE(182),
    [sym_variable_identifier] = ACTIONS(166),
    [sym_constructor_identifier] = ACTIONS(54),
    [sym_module_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(40),
  },
  [96] = {
    [anon_sym_LPAREN] = ACTIONS(380),
    [sym_comment] = ACTIONS(40),
  },
  [97] = {
    [sym__layout_semicolon] = ACTIONS(372),
    [anon_sym_SEMI] = ACTIONS(374),
    [sym_comment] = ACTIONS(40),
  },
  [98] = {
    [anon_sym_unsafe] = ACTIONS(382),
    [anon_sym_safe] = ACTIONS(382),
    [anon_sym_COLON_COLON] = ACTIONS(382),
    [sym_variable_identifier] = ACTIONS(384),
    [sym_constructor_identifier] = ACTIONS(384),
    [sym_module_identifier] = ACTIONS(384),
    [sym_comment] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(382),
  },
  [99] = {
    [sym_safety] = STATE(186),
    [sym_type_signature] = STATE(187),
    [sym__identifier] = STATE(24),
    [sym_string] = STATE(188),
    [aux_sym_type_signature_repeat1] = STATE(26),
    [anon_sym_unsafe] = ACTIONS(386),
    [anon_sym_safe] = ACTIONS(386),
    [anon_sym_COLON_COLON] = ACTIONS(28),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(388),
  },
  [100] = {
    [sym__layout_semicolon] = ACTIONS(390),
    [anon_sym_SEMI] = ACTIONS(392),
    [sym_comment] = ACTIONS(40),
  },
  [101] = {
    [aux_sym_export_repeat1] = STATE(191),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_RPAREN] = ACTIONS(396),
    [sym_comment] = ACTIONS(40),
  },
  [102] = {
    [sym__layout_semicolon] = ACTIONS(398),
    [anon_sym_SEMI] = ACTIONS(400),
    [sym_comment] = ACTIONS(40),
  },
  [103] = {
    [sym__layout_semicolon] = ACTIONS(402),
    [anon_sym_SEMI] = ACTIONS(404),
    [sym_comment] = ACTIONS(40),
  },
  [104] = {
    [sym__layout_close_brace] = ACTIONS(406),
    [anon_sym_do] = ACTIONS(408),
    [sym_variable_identifier] = ACTIONS(410),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(410),
    [anon_sym_SQUOTE] = ACTIONS(408),
    [anon_sym_DQUOTE] = ACTIONS(408),
    [sym__integer_literal] = ACTIONS(408),
    [sym__octal_literal] = ACTIONS(408),
    [sym__hexidecimal_literal] = ACTIONS(408),
  },
  [105] = {
    [sym__expression] = STATE(103),
    [sym_do_expression] = STATE(23),
    [sym__statement] = STATE(194),
    [sym__literal] = STATE(23),
    [sym_integer] = STATE(16),
    [sym_char] = STATE(16),
    [sym_string] = STATE(16),
    [sym__layout_close_brace] = ACTIONS(412),
    [anon_sym_do] = ACTIONS(20),
    [sym_variable_identifier] = ACTIONS(188),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__integer_literal] = ACTIONS(48),
    [sym__octal_literal] = ACTIONS(48),
    [sym__hexidecimal_literal] = ACTIONS(48),
  },
  [106] = {
    [sym__layout_semicolon] = ACTIONS(414),
    [anon_sym_SEMI] = ACTIONS(416),
    [sym_comment] = ACTIONS(40),
  },
  [107] = {
    [anon_sym_RBRACE] = ACTIONS(408),
    [anon_sym_do] = ACTIONS(408),
    [sym_variable_identifier] = ACTIONS(410),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(410),
    [anon_sym_SQUOTE] = ACTIONS(408),
    [anon_sym_DQUOTE] = ACTIONS(408),
    [sym__integer_literal] = ACTIONS(408),
    [sym__octal_literal] = ACTIONS(408),
    [sym__hexidecimal_literal] = ACTIONS(408),
  },
  [108] = {
    [sym__expression] = STATE(106),
    [sym_do_expression] = STATE(23),
    [sym__statement] = STATE(196),
    [sym__literal] = STATE(23),
    [sym_integer] = STATE(16),
    [sym_char] = STATE(16),
    [sym_string] = STATE(16),
    [anon_sym_RBRACE] = ACTIONS(418),
    [anon_sym_do] = ACTIONS(20),
    [sym_variable_identifier] = ACTIONS(188),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__integer_literal] = ACTIONS(48),
    [sym__octal_literal] = ACTIONS(48),
    [sym__hexidecimal_literal] = ACTIONS(48),
  },
  [109] = {
    [anon_sym_LPAREN] = ACTIONS(200),
    [sym_variable_identifier] = ACTIONS(420),
    [sym_comment] = ACTIONS(40),
  },
  [110] = {
    [aux_sym_context_repeat1] = STATE(200),
    [anon_sym_COMMA] = ACTIONS(422),
    [anon_sym_RPAREN] = ACTIONS(424),
    [sym_comment] = ACTIONS(40),
  },
  [111] = {
    [sym_general_declarations] = STATE(203),
    [sym__layout_open_brace] = ACTIONS(426),
    [anon_sym_LBRACE] = ACTIONS(428),
    [sym_comment] = ACTIONS(40),
  },
  [112] = {
    [aux_sym_type_class_repeat1] = STATE(204),
    [sym_variable_identifier] = ACTIONS(286),
    [sym_comment] = ACTIONS(40),
  },
  [113] = {
    [anon_sym_where] = ACTIONS(430),
    [anon_sym_EQ_GT] = ACTIONS(432),
    [sym_variable_identifier] = ACTIONS(434),
    [sym_comment] = ACTIONS(40),
  },
  [114] = {
    [anon_sym_where] = ACTIONS(436),
    [sym_variable_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(40),
  },
  [115] = {
    [aux_sym_type_class_repeat1] = STATE(208),
    [anon_sym_where] = ACTIONS(436),
    [sym_variable_identifier] = ACTIONS(440),
    [sym_comment] = ACTIONS(40),
  },
  [116] = {
    [sym_constructor_identifier] = ACTIONS(442),
    [sym_comment] = ACTIONS(40),
  },
  [117] = {
    [sym_general_declarations] = STATE(209),
    [sym__layout_open_brace] = ACTIONS(426),
    [anon_sym_LBRACE] = ACTIONS(428),
    [sym_comment] = ACTIONS(40),
  },
  [118] = {
    [anon_sym_where] = ACTIONS(444),
    [sym_variable_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(40),
  },
  [119] = {
    [aux_sym_type_class_repeat1] = STATE(211),
    [anon_sym_where] = ACTIONS(444),
    [sym_variable_identifier] = ACTIONS(440),
    [sym_comment] = ACTIONS(40),
  },
  [120] = {
    [sym__symbol] = STATE(51),
    [aux_sym_variable_symbol_repeat1] = STATE(213),
    [sym__layout_semicolon] = ACTIONS(446),
    [anon_sym_SEMI] = ACTIONS(448),
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(450),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(80),
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
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
  },
  [121] = {
    [sym__symbol] = STATE(129),
    [sym__layout_semicolon] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(454),
    [anon_sym_COMMA] = ACTIONS(454),
    [anon_sym_RPAREN] = ACTIONS(456),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(80),
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
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
  },
  [122] = {
    [anon_sym_BQUOTE] = ACTIONS(458),
    [sym_comment] = ACTIONS(40),
  },
  [123] = {
    [sym__layout_semicolon] = ACTIONS(446),
    [anon_sym_SEMI] = ACTIONS(460),
    [anon_sym_COMMA] = ACTIONS(460),
    [sym_comment] = ACTIONS(40),
  },
  [124] = {
    [sym__symbol] = STATE(129),
    [sym__layout_semicolon] = ACTIONS(446),
    [anon_sym_SEMI] = ACTIONS(448),
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(450),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(80),
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
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
  },
  [125] = {
    [sym__op] = STATE(216),
    [sym_variable_symbol] = STATE(49),
    [sym_constructor_symbol] = STATE(49),
    [sym__symbol] = STATE(51),
    [aux_sym_variable_symbol_repeat1] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_BQUOTE] = ACTIONS(74),
    [anon_sym_COLON] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(80),
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
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
  },
  [126] = {
    [sym__layout_semicolon] = ACTIONS(462),
    [anon_sym_SEMI] = ACTIONS(464),
    [anon_sym_COMMA] = ACTIONS(466),
    [sym_comment] = ACTIONS(40),
  },
  [127] = {
    [aux_sym_fixity_repeat1] = STATE(218),
    [sym__layout_semicolon] = ACTIONS(462),
    [anon_sym_SEMI] = ACTIONS(464),
    [anon_sym_COMMA] = ACTIONS(230),
    [sym_comment] = ACTIONS(40),
  },
  [128] = {
    [sym__layout_semicolon] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(468),
    [anon_sym_COMMA] = ACTIONS(468),
    [sym_comment] = ACTIONS(40),
  },
  [129] = {
    [sym__layout_semicolon] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(472),
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_RPAREN] = ACTIONS(472),
    [anon_sym_COLON] = ACTIONS(472),
    [anon_sym_EQ] = ACTIONS(472),
    [anon_sym_PIPE] = ACTIONS(472),
    [anon_sym_BANG] = ACTIONS(472),
    [sym_comment] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(472),
    [anon_sym_DOLLAR] = ACTIONS(472),
    [anon_sym_PERCENT] = ACTIONS(472),
    [anon_sym_AMP] = ACTIONS(472),
    [anon_sym_1] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DOT] = ACTIONS(472),
    [anon_sym_SLASH] = ACTIONS(472),
    [anon_sym_LT] = ACTIONS(472),
    [anon_sym_GT] = ACTIONS(472),
    [anon_sym_QMARK] = ACTIONS(472),
    [anon_sym_AT] = ACTIONS(472),
    [anon_sym_CARET] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_TILDE] = ACTIONS(472),
    [anon_sym_BSLASH] = ACTIONS(472),
  },
  [130] = {
    [aux_sym_context_repeat1] = STATE(220),
    [anon_sym_COMMA] = ACTIONS(422),
    [anon_sym_RPAREN] = ACTIONS(474),
    [sym_comment] = ACTIONS(40),
  },
  [131] = {
    [sym__layout_semicolon] = ACTIONS(476),
    [anon_sym_SEMI] = ACTIONS(430),
    [anon_sym_DASH_GT] = ACTIONS(430),
    [anon_sym_EQ_GT] = ACTIONS(432),
    [sym_variable_identifier] = ACTIONS(430),
    [sym_comment] = ACTIONS(40),
  },
  [132] = {
    [sym__layout_semicolon] = ACTIONS(478),
    [anon_sym_SEMI] = ACTIONS(480),
    [anon_sym_DASH_GT] = ACTIONS(480),
    [sym_variable_identifier] = ACTIONS(482),
    [sym_comment] = ACTIONS(40),
  },
  [133] = {
    [aux_sym_type_class_repeat1] = STATE(132),
    [sym__layout_semicolon] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(248),
    [anon_sym_DASH_GT] = ACTIONS(100),
    [sym_variable_identifier] = ACTIONS(484),
    [sym_comment] = ACTIONS(40),
  },
  [134] = {
    [sym__layout_semicolon] = ACTIONS(486),
    [anon_sym_SEMI] = ACTIONS(488),
    [sym_comment] = ACTIONS(40),
  },
  [135] = {
    [sym_variable_identifier] = ACTIONS(490),
    [sym_constructor_identifier] = ACTIONS(442),
    [sym_module_identifier] = ACTIONS(442),
    [sym_comment] = ACTIONS(40),
  },
  [136] = {
    [sym__type] = STATE(224),
    [sym_function_type] = STATE(56),
    [sym__identifier] = STATE(225),
    [sym_simple_type] = STATE(60),
    [sym_variable_identifier] = ACTIONS(166),
    [sym_constructor_identifier] = ACTIONS(492),
    [sym_module_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(40),
  },
  [137] = {
    [sym__layout_semicolon] = ACTIONS(476),
    [anon_sym_SEMI] = ACTIONS(430),
    [anon_sym_EQ] = ACTIONS(430),
    [anon_sym_EQ_GT] = ACTIONS(432),
    [anon_sym_deriving] = ACTIONS(430),
    [sym_variable_identifier] = ACTIONS(434),
    [sym_constructor_identifier] = ACTIONS(434),
    [sym_comment] = ACTIONS(40),
  },
  [138] = {
    [sym__layout_semicolon] = ACTIONS(478),
    [anon_sym_SEMI] = ACTIONS(480),
    [anon_sym_EQ] = ACTIONS(480),
    [anon_sym_deriving] = ACTIONS(480),
    [sym_variable_identifier] = ACTIONS(494),
    [sym_constructor_identifier] = ACTIONS(496),
    [sym_comment] = ACTIONS(40),
  },
  [139] = {
    [aux_sym_type_class_repeat1] = STATE(138),
    [sym__layout_semicolon] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(248),
    [anon_sym_EQ] = ACTIONS(248),
    [anon_sym_deriving] = ACTIONS(248),
    [sym_variable_identifier] = ACTIONS(498),
    [sym_constructor_identifier] = ACTIONS(268),
    [sym_comment] = ACTIONS(40),
  },
  [140] = {
    [sym_constructors] = STATE(229),
    [sym_constructor] = STATE(145),
    [sym_deriving] = STATE(230),
    [sym__layout_semicolon] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(502),
    [anon_sym_EQ] = ACTIONS(504),
    [anon_sym_deriving] = ACTIONS(278),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(40),
  },
  [141] = {
    [sym_constructors] = STATE(229),
    [sym_constructor] = STATE(145),
    [sym_deriving] = STATE(230),
    [sym__layout_semicolon] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(502),
    [anon_sym_deriving] = ACTIONS(278),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(40),
  },
  [142] = {
    [sym__identifier] = STATE(232),
    [anon_sym_LPAREN] = ACTIONS(506),
    [sym_variable_identifier] = ACTIONS(166),
    [sym_constructor_identifier] = ACTIONS(54),
    [sym_module_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(40),
  },
  [143] = {
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
    [sym_comment] = ACTIONS(40),
  },
  [144] = {
    [sym_deriving] = STATE(230),
    [sym__layout_semicolon] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(502),
    [anon_sym_deriving] = ACTIONS(278),
    [sym_comment] = ACTIONS(40),
  },
  [145] = {
    [aux_sym_constructors_repeat1] = STATE(240),
    [sym__layout_semicolon] = ACTIONS(518),
    [anon_sym_SEMI] = ACTIONS(520),
    [anon_sym_PIPE] = ACTIONS(522),
    [anon_sym_deriving] = ACTIONS(520),
    [sym_comment] = ACTIONS(40),
  },
  [146] = {
    [sym__layout_semicolon] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(502),
    [sym_comment] = ACTIONS(40),
  },
  [147] = {
    [anon_sym_EQ] = ACTIONS(430),
    [anon_sym_EQ_GT] = ACTIONS(432),
    [sym_variable_identifier] = ACTIONS(430),
    [sym_comment] = ACTIONS(40),
  },
  [148] = {
    [anon_sym_EQ] = ACTIONS(480),
    [sym_variable_identifier] = ACTIONS(524),
    [sym_comment] = ACTIONS(40),
  },
  [149] = {
    [anon_sym_EQ] = ACTIONS(526),
    [sym_comment] = ACTIONS(40),
  },
  [150] = {
    [sym_new_constructor] = STATE(244),
    [sym_constructor_identifier] = ACTIONS(528),
    [sym_comment] = ACTIONS(40),
  },
  [151] = {
    [anon_sym_RPAREN] = ACTIONS(430),
    [anon_sym_EQ] = ACTIONS(430),
    [sym_variable_identifier] = ACTIONS(430),
    [sym_comment] = ACTIONS(40),
  },
  [152] = {
    [sym__type] = STATE(245),
    [sym_function_type] = STATE(56),
    [sym__identifier] = STATE(59),
    [sym_simple_type] = STATE(60),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(260),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [153] = {
    [sym__layout_semicolon] = ACTIONS(530),
    [anon_sym_SEMI] = ACTIONS(532),
    [sym_comment] = ACTIONS(40),
  },
  [154] = {
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(534),
  },
  [155] = {
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(536),
  },
  [156] = {
    [sym__cntrl] = STATE(247),
    [sym_comment] = ACTIONS(80),
    [anon_sym__] = ACTIONS(538),
    [sym__ascii_large] = ACTIONS(538),
    [anon_sym_AT] = ACTIONS(538),
    [anon_sym_CARET] = ACTIONS(538),
    [anon_sym_BSLASH] = ACTIONS(538),
    [anon_sym_LBRACK] = ACTIONS(538),
    [anon_sym_RBRACK] = ACTIONS(538),
  },
  [157] = {
    [aux_sym__escape_repeat1] = STATE(249),
    [sym_comment] = ACTIONS(40),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(540),
  },
  [158] = {
    [aux_sym__escape_repeat2] = STATE(251),
    [sym_comment] = ACTIONS(40),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(542),
  },
  [159] = {
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(544),
  },
  [160] = {
    [anon_sym_SEMI] = ACTIONS(546),
    [anon_sym_LBRACE] = ACTIONS(546),
    [anon_sym_RBRACE] = ACTIONS(546),
    [anon_sym_LPAREN] = ACTIONS(546),
    [anon_sym_RPAREN] = ACTIONS(546),
    [anon_sym_BQUOTE] = ACTIONS(546),
    [anon_sym_COLON] = ACTIONS(546),
    [anon_sym_EQ] = ACTIONS(546),
    [anon_sym_PIPE] = ACTIONS(546),
    [anon_sym_BANG] = ACTIONS(546),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(546),
    [anon_sym_DQUOTE] = ACTIONS(546),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(546),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(546),
    [anon_sym__] = ACTIONS(546),
    [sym__ascii_large] = ACTIONS(546),
    [anon_sym_POUND] = ACTIONS(546),
    [anon_sym_DOLLAR] = ACTIONS(546),
    [anon_sym_PERCENT] = ACTIONS(546),
    [anon_sym_AMP] = ACTIONS(546),
    [anon_sym_1] = ACTIONS(546),
    [anon_sym_PLUS] = ACTIONS(546),
    [anon_sym_DOT] = ACTIONS(546),
    [anon_sym_SLASH] = ACTIONS(546),
    [anon_sym_LT] = ACTIONS(546),
    [anon_sym_GT] = ACTIONS(546),
    [anon_sym_QMARK] = ACTIONS(546),
    [anon_sym_AT] = ACTIONS(546),
    [anon_sym_CARET] = ACTIONS(546),
    [anon_sym_DASH] = ACTIONS(546),
    [anon_sym_TILDE] = ACTIONS(546),
    [anon_sym_BSLASH] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(546),
    [anon_sym_RBRACK] = ACTIONS(546),
    [sym__space] = ACTIONS(546),
    [sym__newline] = ACTIONS(546),
    [sym__tab] = ACTIONS(546),
    [sym__vertical_tab] = ACTIONS(546),
  },
  [161] = {
    [anon_sym_SEMI] = ACTIONS(548),
    [anon_sym_LBRACE] = ACTIONS(548),
    [anon_sym_RBRACE] = ACTIONS(548),
    [anon_sym_LPAREN] = ACTIONS(548),
    [anon_sym_RPAREN] = ACTIONS(548),
    [anon_sym_BQUOTE] = ACTIONS(548),
    [anon_sym_COLON] = ACTIONS(548),
    [anon_sym_EQ] = ACTIONS(548),
    [anon_sym_PIPE] = ACTIONS(548),
    [anon_sym_BANG] = ACTIONS(548),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(548),
    [anon_sym_DQUOTE] = ACTIONS(548),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(548),
    [anon_sym__] = ACTIONS(548),
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
    [anon_sym_AT] = ACTIONS(548),
    [anon_sym_CARET] = ACTIONS(548),
    [anon_sym_DASH] = ACTIONS(548),
    [anon_sym_TILDE] = ACTIONS(548),
    [anon_sym_BSLASH] = ACTIONS(548),
    [anon_sym_LBRACK] = ACTIONS(548),
    [anon_sym_RBRACK] = ACTIONS(548),
    [sym__space] = ACTIONS(548),
    [sym__newline] = ACTIONS(548),
    [sym__tab] = ACTIONS(548),
    [sym__vertical_tab] = ACTIONS(548),
  },
  [162] = {
    [sym__cntrl] = STATE(253),
    [sym_comment] = ACTIONS(80),
    [anon_sym__] = ACTIONS(550),
    [sym__ascii_large] = ACTIONS(550),
    [anon_sym_AT] = ACTIONS(550),
    [anon_sym_CARET] = ACTIONS(550),
    [anon_sym_BSLASH] = ACTIONS(550),
    [anon_sym_LBRACK] = ACTIONS(550),
    [anon_sym_RBRACK] = ACTIONS(550),
  },
  [163] = {
    [aux_sym__escape_repeat1] = STATE(255),
    [sym_comment] = ACTIONS(40),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(552),
  },
  [164] = {
    [aux_sym__escape_repeat2] = STATE(257),
    [sym_comment] = ACTIONS(40),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(554),
  },
  [165] = {
    [anon_sym_SEMI] = ACTIONS(556),
    [anon_sym_LBRACE] = ACTIONS(556),
    [anon_sym_RBRACE] = ACTIONS(556),
    [anon_sym_LPAREN] = ACTIONS(556),
    [anon_sym_RPAREN] = ACTIONS(556),
    [anon_sym_BQUOTE] = ACTIONS(556),
    [anon_sym_COLON] = ACTIONS(556),
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_BANG] = ACTIONS(556),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(556),
    [anon_sym_DQUOTE] = ACTIONS(556),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(556),
    [anon_sym__] = ACTIONS(556),
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
    [anon_sym_AT] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
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
    [anon_sym_SEMI] = ACTIONS(558),
    [anon_sym_LBRACE] = ACTIONS(558),
    [anon_sym_RBRACE] = ACTIONS(558),
    [anon_sym_LPAREN] = ACTIONS(558),
    [anon_sym_RPAREN] = ACTIONS(558),
    [anon_sym_BQUOTE] = ACTIONS(558),
    [anon_sym_COLON] = ACTIONS(558),
    [anon_sym_EQ] = ACTIONS(558),
    [anon_sym_PIPE] = ACTIONS(558),
    [anon_sym_BANG] = ACTIONS(558),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(558),
    [anon_sym_DQUOTE] = ACTIONS(558),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(558),
    [anon_sym__] = ACTIONS(558),
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
    [anon_sym_AT] = ACTIONS(558),
    [anon_sym_CARET] = ACTIONS(558),
    [anon_sym_DASH] = ACTIONS(558),
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
    [sym__layout_semicolon] = ACTIONS(560),
    [anon_sym_SEMI] = ACTIONS(562),
    [sym_comment] = ACTIONS(40),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(564),
    [anon_sym_RBRACE] = ACTIONS(566),
    [anon_sym_import] = ACTIONS(566),
    [anon_sym_foreign] = ACTIONS(566),
    [anon_sym_default] = ACTIONS(566),
    [anon_sym_do] = ACTIONS(566),
    [anon_sym_class] = ACTIONS(566),
    [anon_sym_instance] = ACTIONS(566),
    [anon_sym_infixl] = ACTIONS(566),
    [anon_sym_infixr] = ACTIONS(566),
    [anon_sym_infix] = ACTIONS(566),
    [anon_sym_COLON_COLON] = ACTIONS(566),
    [anon_sym_data] = ACTIONS(566),
    [anon_sym_newtype] = ACTIONS(566),
    [anon_sym_type] = ACTIONS(566),
    [sym_variable_identifier] = ACTIONS(568),
    [sym_constructor_identifier] = ACTIONS(568),
    [sym_module_identifier] = ACTIONS(568),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [sym__integer_literal] = ACTIONS(566),
    [sym__octal_literal] = ACTIONS(566),
    [sym__hexidecimal_literal] = ACTIONS(566),
  },
  [169] = {
    [sym__type] = STATE(258),
    [sym_function_type] = STATE(56),
    [sym__identifier] = STATE(59),
    [sym_simple_type] = STATE(60),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(260),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [170] = {
    [sym_import] = STATE(21),
    [sym__declaration] = STATE(260),
    [sym__expression] = STATE(21),
    [sym_foreign] = STATE(21),
    [sym_default] = STATE(21),
    [sym_do_expression] = STATE(23),
    [sym_type_class] = STATE(21),
    [sym_type_class_instance] = STATE(21),
    [sym_fixity] = STATE(21),
    [sym_type_signature] = STATE(21),
    [sym_algebraic_datatype] = STATE(21),
    [sym_newtype] = STATE(21),
    [sym_type_synonym] = STATE(21),
    [sym__literal] = STATE(23),
    [sym__identifier] = STATE(24),
    [sym_integer] = STATE(16),
    [sym_char] = STATE(16),
    [sym_string] = STATE(16),
    [aux_sym_module_repeat1] = STATE(261),
    [aux_sym_type_signature_repeat1] = STATE(26),
    [sym__layout_close_brace] = ACTIONS(570),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(16),
    [anon_sym_default] = ACTIONS(18),
    [anon_sym_do] = ACTIONS(20),
    [anon_sym_class] = ACTIONS(22),
    [anon_sym_instance] = ACTIONS(24),
    [anon_sym_infixl] = ACTIONS(26),
    [anon_sym_infixr] = ACTIONS(26),
    [anon_sym_infix] = ACTIONS(26),
    [anon_sym_COLON_COLON] = ACTIONS(28),
    [anon_sym_data] = ACTIONS(30),
    [anon_sym_newtype] = ACTIONS(32),
    [anon_sym_type] = ACTIONS(34),
    [sym_variable_identifier] = ACTIONS(36),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__integer_literal] = ACTIONS(48),
    [sym__octal_literal] = ACTIONS(48),
    [sym__hexidecimal_literal] = ACTIONS(48),
  },
  [171] = {
    [sym_import] = STATE(21),
    [sym__declaration] = STATE(22),
    [sym__expression] = STATE(21),
    [sym_foreign] = STATE(21),
    [sym_default] = STATE(21),
    [sym_do_expression] = STATE(23),
    [sym_type_class] = STATE(21),
    [sym_type_class_instance] = STATE(21),
    [sym_fixity] = STATE(21),
    [sym_type_signature] = STATE(21),
    [sym_algebraic_datatype] = STATE(21),
    [sym_newtype] = STATE(21),
    [sym_type_synonym] = STATE(21),
    [sym__literal] = STATE(23),
    [sym__identifier] = STATE(24),
    [sym_integer] = STATE(16),
    [sym_char] = STATE(16),
    [sym_string] = STATE(16),
    [aux_sym_module_repeat1] = STATE(262),
    [aux_sym_type_signature_repeat1] = STATE(26),
    [anon_sym_RBRACE] = ACTIONS(572),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(16),
    [anon_sym_default] = ACTIONS(18),
    [anon_sym_do] = ACTIONS(20),
    [anon_sym_class] = ACTIONS(22),
    [anon_sym_instance] = ACTIONS(24),
    [anon_sym_infixl] = ACTIONS(26),
    [anon_sym_infixr] = ACTIONS(26),
    [anon_sym_infix] = ACTIONS(26),
    [anon_sym_COLON_COLON] = ACTIONS(28),
    [anon_sym_data] = ACTIONS(30),
    [anon_sym_newtype] = ACTIONS(32),
    [anon_sym_type] = ACTIONS(34),
    [sym_variable_identifier] = ACTIONS(36),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__integer_literal] = ACTIONS(48),
    [sym__octal_literal] = ACTIONS(48),
    [sym__hexidecimal_literal] = ACTIONS(48),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(574),
    [sym_comment] = ACTIONS(40),
  },
  [173] = {
    [anon_sym_where] = ACTIONS(576),
    [sym_comment] = ACTIONS(40),
  },
  [174] = {
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(100),
    [sym_comment] = ACTIONS(40),
  },
  [175] = {
    [aux_sym_module_exports_repeat1] = STATE(265),
    [anon_sym_COMMA] = ACTIONS(578),
    [anon_sym_RPAREN] = ACTIONS(580),
    [sym_comment] = ACTIONS(40),
  },
  [176] = {
    [anon_sym_LPAREN] = ACTIONS(582),
    [anon_sym_COMMA] = ACTIONS(584),
    [anon_sym_RPAREN] = ACTIONS(584),
    [sym_comment] = ACTIONS(40),
  },
  [177] = {
    [sym_declarations] = STATE(267),
    [sym__layout_open_brace] = ACTIONS(360),
    [anon_sym_LBRACE] = ACTIONS(362),
    [sym_comment] = ACTIONS(40),
  },
  [178] = {
    [sym__identifier] = STATE(268),
    [sym_variable_identifier] = ACTIONS(166),
    [sym_constructor_identifier] = ACTIONS(54),
    [sym_module_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(40),
  },
  [179] = {
    [sym__layout_semicolon] = ACTIONS(586),
    [anon_sym_SEMI] = ACTIONS(588),
    [sym_comment] = ACTIONS(40),
  },
  [180] = {
    [sym__layout_semicolon] = ACTIONS(590),
    [anon_sym_SEMI] = ACTIONS(592),
    [sym_comment] = ACTIONS(40),
  },
  [181] = {
    [aux_sym_import_specification_repeat1] = STATE(272),
    [anon_sym_LPAREN] = ACTIONS(594),
    [anon_sym_COMMA] = ACTIONS(596),
    [anon_sym_RPAREN] = ACTIONS(598),
    [sym_comment] = ACTIONS(40),
  },
  [182] = {
    [sym_import_specification] = STATE(273),
    [sym__layout_semicolon] = ACTIONS(586),
    [anon_sym_SEMI] = ACTIONS(588),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_hiding] = ACTIONS(178),
    [sym_comment] = ACTIONS(40),
  },
  [183] = {
    [sym__identifier] = STATE(274),
    [anon_sym_RPAREN] = ACTIONS(598),
    [sym_variable_identifier] = ACTIONS(366),
    [sym_constructor_identifier] = ACTIONS(368),
    [sym_module_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(40),
  },
  [184] = {
    [anon_sym_COLON_COLON] = ACTIONS(600),
    [sym_variable_identifier] = ACTIONS(600),
    [sym_constructor_identifier] = ACTIONS(602),
    [sym_module_identifier] = ACTIONS(602),
    [sym_comment] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(600),
  },
  [185] = {
    [sym__gap] = STATE(78),
    [sym__graphic] = STATE(78),
    [sym__small] = STATE(80),
    [sym__large] = STATE(80),
    [sym__symbol] = STATE(80),
    [sym__special] = STATE(80),
    [sym__escape] = STATE(78),
    [aux_sym_string_repeat1] = STATE(276),
    [anon_sym_SEMI] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(124),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_PIPE] = ACTIONS(124),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(604),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(132),
    [anon_sym__] = ACTIONS(132),
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
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym_CARET] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_TILDE] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(122),
    [sym__space] = ACTIONS(138),
    [sym__newline] = ACTIONS(138),
    [sym__tab] = ACTIONS(138),
    [sym__vertical_tab] = ACTIONS(138),
  },
  [186] = {
    [sym_type_signature] = STATE(277),
    [sym__identifier] = STATE(24),
    [sym_string] = STATE(278),
    [aux_sym_type_signature_repeat1] = STATE(26),
    [anon_sym_COLON_COLON] = ACTIONS(28),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(388),
  },
  [187] = {
    [sym__layout_semicolon] = ACTIONS(606),
    [anon_sym_SEMI] = ACTIONS(608),
    [sym_comment] = ACTIONS(40),
  },
  [188] = {
    [sym_type_signature] = STATE(277),
    [sym__identifier] = STATE(24),
    [aux_sym_type_signature_repeat1] = STATE(26),
    [anon_sym_COLON_COLON] = ACTIONS(28),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [189] = {
    [sym__identifier] = STATE(279),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [190] = {
    [sym__layout_semicolon] = ACTIONS(610),
    [anon_sym_SEMI] = ACTIONS(612),
    [sym_comment] = ACTIONS(40),
  },
  [191] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(616),
    [sym_comment] = ACTIONS(40),
  },
  [192] = {
    [sym__layout_close_brace] = ACTIONS(618),
    [anon_sym_do] = ACTIONS(620),
    [sym_variable_identifier] = ACTIONS(622),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(622),
    [anon_sym_SQUOTE] = ACTIONS(620),
    [anon_sym_DQUOTE] = ACTIONS(620),
    [sym__integer_literal] = ACTIONS(620),
    [sym__octal_literal] = ACTIONS(620),
    [sym__hexidecimal_literal] = ACTIONS(620),
  },
  [193] = {
    [sym__layout_semicolon] = ACTIONS(624),
    [anon_sym_SEMI] = ACTIONS(626),
    [sym_comment] = ACTIONS(40),
  },
  [194] = {
    [sym__layout_close_brace] = ACTIONS(628),
    [anon_sym_do] = ACTIONS(630),
    [sym_variable_identifier] = ACTIONS(632),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(632),
    [anon_sym_SQUOTE] = ACTIONS(630),
    [anon_sym_DQUOTE] = ACTIONS(630),
    [sym__integer_literal] = ACTIONS(630),
    [sym__octal_literal] = ACTIONS(630),
    [sym__hexidecimal_literal] = ACTIONS(630),
  },
  [195] = {
    [anon_sym_RBRACE] = ACTIONS(620),
    [anon_sym_do] = ACTIONS(620),
    [sym_variable_identifier] = ACTIONS(622),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(622),
    [anon_sym_SQUOTE] = ACTIONS(620),
    [anon_sym_DQUOTE] = ACTIONS(620),
    [sym__integer_literal] = ACTIONS(620),
    [sym__octal_literal] = ACTIONS(620),
    [sym__hexidecimal_literal] = ACTIONS(620),
  },
  [196] = {
    [anon_sym_RBRACE] = ACTIONS(630),
    [anon_sym_do] = ACTIONS(630),
    [sym_variable_identifier] = ACTIONS(632),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(632),
    [anon_sym_SQUOTE] = ACTIONS(630),
    [anon_sym_DQUOTE] = ACTIONS(630),
    [sym__integer_literal] = ACTIONS(630),
    [sym__octal_literal] = ACTIONS(630),
    [sym__hexidecimal_literal] = ACTIONS(630),
  },
  [197] = {
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(432),
    [sym_comment] = ACTIONS(40),
  },
  [198] = {
    [sym_class] = STATE(282),
    [sym_constructor_identifier] = ACTIONS(196),
    [sym_comment] = ACTIONS(40),
  },
  [199] = {
    [anon_sym_EQ_GT] = ACTIONS(634),
    [sym_comment] = ACTIONS(40),
  },
  [200] = {
    [anon_sym_COMMA] = ACTIONS(636),
    [anon_sym_RPAREN] = ACTIONS(638),
    [sym_comment] = ACTIONS(40),
  },
  [201] = {
    [sym__general_declaration] = STATE(287),
    [sym_fixity] = STATE(288),
    [sym_type_signature] = STATE(288),
    [sym__identifier] = STATE(24),
    [aux_sym_general_declarations_repeat1] = STATE(289),
    [aux_sym_type_signature_repeat1] = STATE(26),
    [sym__layout_close_brace] = ACTIONS(640),
    [anon_sym_infixl] = ACTIONS(26),
    [anon_sym_infixr] = ACTIONS(26),
    [anon_sym_infix] = ACTIONS(26),
    [anon_sym_COLON_COLON] = ACTIONS(28),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [202] = {
    [sym__general_declaration] = STATE(290),
    [sym_fixity] = STATE(288),
    [sym_type_signature] = STATE(288),
    [sym__identifier] = STATE(24),
    [aux_sym_general_declarations_repeat1] = STATE(291),
    [aux_sym_type_signature_repeat1] = STATE(26),
    [anon_sym_RBRACE] = ACTIONS(642),
    [anon_sym_infixl] = ACTIONS(26),
    [anon_sym_infixr] = ACTIONS(26),
    [anon_sym_infix] = ACTIONS(26),
    [anon_sym_COLON_COLON] = ACTIONS(28),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [203] = {
    [sym__layout_semicolon] = ACTIONS(644),
    [anon_sym_SEMI] = ACTIONS(646),
    [sym_comment] = ACTIONS(40),
  },
  [204] = {
    [anon_sym_RPAREN] = ACTIONS(648),
    [sym_variable_identifier] = ACTIONS(524),
    [sym_comment] = ACTIONS(40),
  },
  [205] = {
    [sym_general_declarations] = STATE(293),
    [sym__layout_open_brace] = ACTIONS(426),
    [anon_sym_LBRACE] = ACTIONS(428),
    [sym_comment] = ACTIONS(40),
  },
  [206] = {
    [anon_sym_where] = ACTIONS(650),
    [sym_variable_identifier] = ACTIONS(652),
    [sym_comment] = ACTIONS(40),
  },
  [207] = {
    [anon_sym_where] = ACTIONS(430),
    [sym_variable_identifier] = ACTIONS(434),
    [sym_comment] = ACTIONS(40),
  },
  [208] = {
    [anon_sym_where] = ACTIONS(654),
    [sym_variable_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(40),
  },
  [209] = {
    [sym__layout_semicolon] = ACTIONS(656),
    [anon_sym_SEMI] = ACTIONS(658),
    [sym_comment] = ACTIONS(40),
  },
  [210] = {
    [sym_general_declarations] = STATE(295),
    [sym__layout_open_brace] = ACTIONS(426),
    [anon_sym_LBRACE] = ACTIONS(428),
    [sym_comment] = ACTIONS(40),
  },
  [211] = {
    [anon_sym_where] = ACTIONS(660),
    [sym_variable_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(40),
  },
  [212] = {
    [sym__layout_semicolon] = ACTIONS(662),
    [anon_sym_SEMI] = ACTIONS(664),
    [anon_sym_COMMA] = ACTIONS(664),
    [sym_comment] = ACTIONS(40),
  },
  [213] = {
    [sym__symbol] = STATE(129),
    [sym__layout_semicolon] = ACTIONS(662),
    [anon_sym_SEMI] = ACTIONS(666),
    [anon_sym_COMMA] = ACTIONS(666),
    [anon_sym_RPAREN] = ACTIONS(668),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(80),
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
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
  },
  [214] = {
    [sym__layout_semicolon] = ACTIONS(670),
    [anon_sym_SEMI] = ACTIONS(672),
    [anon_sym_COMMA] = ACTIONS(672),
    [sym_comment] = ACTIONS(40),
  },
  [215] = {
    [sym__layout_semicolon] = ACTIONS(674),
    [anon_sym_SEMI] = ACTIONS(676),
    [anon_sym_COMMA] = ACTIONS(676),
    [sym_comment] = ACTIONS(40),
  },
  [216] = {
    [sym__layout_semicolon] = ACTIONS(678),
    [anon_sym_SEMI] = ACTIONS(680),
    [anon_sym_COMMA] = ACTIONS(680),
    [sym_comment] = ACTIONS(40),
  },
  [217] = {
    [sym__op] = STATE(298),
    [sym_variable_symbol] = STATE(49),
    [sym_constructor_symbol] = STATE(49),
    [sym__symbol] = STATE(51),
    [aux_sym_variable_symbol_repeat1] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_BQUOTE] = ACTIONS(74),
    [anon_sym_COLON] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(80),
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
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
  },
  [218] = {
    [sym__layout_semicolon] = ACTIONS(682),
    [anon_sym_SEMI] = ACTIONS(684),
    [anon_sym_COMMA] = ACTIONS(466),
    [sym_comment] = ACTIONS(40),
  },
  [219] = {
    [anon_sym_EQ_GT] = ACTIONS(686),
    [sym_comment] = ACTIONS(40),
  },
  [220] = {
    [anon_sym_COMMA] = ACTIONS(636),
    [anon_sym_RPAREN] = ACTIONS(688),
    [sym_comment] = ACTIONS(40),
  },
  [221] = {
    [sym__layout_semicolon] = ACTIONS(690),
    [anon_sym_SEMI] = ACTIONS(650),
    [anon_sym_DASH_GT] = ACTIONS(650),
    [sym_variable_identifier] = ACTIONS(650),
    [sym_comment] = ACTIONS(40),
  },
  [222] = {
    [sym__layout_semicolon] = ACTIONS(476),
    [anon_sym_SEMI] = ACTIONS(430),
    [anon_sym_DASH_GT] = ACTIONS(430),
    [sym_variable_identifier] = ACTIONS(430),
    [sym_comment] = ACTIONS(40),
  },
  [223] = {
    [aux_sym_type_class_repeat1] = STATE(132),
    [sym__layout_semicolon] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_DASH_GT] = ACTIONS(100),
    [sym_variable_identifier] = ACTIONS(484),
    [sym_comment] = ACTIONS(40),
  },
  [224] = {
    [sym__layout_semicolon] = ACTIONS(692),
    [anon_sym_SEMI] = ACTIONS(694),
    [sym_comment] = ACTIONS(40),
  },
  [225] = {
    [sym__layout_semicolon] = ACTIONS(692),
    [anon_sym_SEMI] = ACTIONS(694),
    [anon_sym_DASH_GT] = ACTIONS(264),
    [sym_comment] = ACTIONS(40),
  },
  [226] = {
    [sym__layout_semicolon] = ACTIONS(690),
    [anon_sym_SEMI] = ACTIONS(650),
    [anon_sym_EQ] = ACTIONS(650),
    [anon_sym_deriving] = ACTIONS(650),
    [sym_variable_identifier] = ACTIONS(652),
    [sym_constructor_identifier] = ACTIONS(652),
    [sym_comment] = ACTIONS(40),
  },
  [227] = {
    [sym__layout_semicolon] = ACTIONS(476),
    [anon_sym_SEMI] = ACTIONS(430),
    [anon_sym_EQ] = ACTIONS(430),
    [anon_sym_deriving] = ACTIONS(430),
    [sym_variable_identifier] = ACTIONS(434),
    [sym_constructor_identifier] = ACTIONS(434),
    [sym_comment] = ACTIONS(40),
  },
  [228] = {
    [sym_constructors] = STATE(301),
    [sym_constructor] = STATE(145),
    [sym_deriving] = STATE(302),
    [sym__layout_semicolon] = ACTIONS(696),
    [anon_sym_SEMI] = ACTIONS(698),
    [anon_sym_deriving] = ACTIONS(278),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(40),
  },
  [229] = {
    [sym_deriving] = STATE(302),
    [sym__layout_semicolon] = ACTIONS(696),
    [anon_sym_SEMI] = ACTIONS(698),
    [anon_sym_deriving] = ACTIONS(278),
    [sym_comment] = ACTIONS(40),
  },
  [230] = {
    [sym__layout_semicolon] = ACTIONS(696),
    [anon_sym_SEMI] = ACTIONS(698),
    [sym_comment] = ACTIONS(40),
  },
  [231] = {
    [sym__identifier] = STATE(303),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [232] = {
    [sym__layout_semicolon] = ACTIONS(700),
    [anon_sym_SEMI] = ACTIONS(702),
    [sym_comment] = ACTIONS(40),
  },
  [233] = {
    [sym_field] = STATE(305),
    [sym_variable_identifier] = ACTIONS(704),
    [sym_comment] = ACTIONS(40),
  },
  [234] = {
    [sym__identifier] = STATE(306),
    [sym_variable_identifier] = ACTIONS(706),
    [sym_constructor_identifier] = ACTIONS(516),
    [sym_module_identifier] = ACTIONS(516),
    [sym_comment] = ACTIONS(40),
  },
  [235] = {
    [sym__layout_semicolon] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(100),
    [anon_sym_deriving] = ACTIONS(100),
    [anon_sym_BANG] = ACTIONS(100),
    [sym_variable_identifier] = ACTIONS(102),
    [sym_constructor_identifier] = ACTIONS(102),
    [sym_module_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(40),
  },
  [236] = {
    [sym__layout_semicolon] = ACTIONS(708),
    [anon_sym_SEMI] = ACTIONS(710),
    [anon_sym_PIPE] = ACTIONS(710),
    [anon_sym_deriving] = ACTIONS(710),
    [anon_sym_BANG] = ACTIONS(710),
    [sym_variable_identifier] = ACTIONS(712),
    [sym_constructor_identifier] = ACTIONS(712),
    [sym_module_identifier] = ACTIONS(712),
    [sym_comment] = ACTIONS(40),
  },
  [237] = {
    [sym__layout_semicolon] = ACTIONS(714),
    [anon_sym_SEMI] = ACTIONS(716),
    [anon_sym_PIPE] = ACTIONS(716),
    [anon_sym_deriving] = ACTIONS(716),
    [sym_comment] = ACTIONS(40),
  },
  [238] = {
    [sym_strict] = STATE(307),
    [sym__identifier] = STATE(307),
    [sym__layout_semicolon] = ACTIONS(714),
    [anon_sym_SEMI] = ACTIONS(716),
    [anon_sym_PIPE] = ACTIONS(716),
    [anon_sym_deriving] = ACTIONS(716),
    [anon_sym_BANG] = ACTIONS(514),
    [sym_variable_identifier] = ACTIONS(516),
    [sym_constructor_identifier] = ACTIONS(516),
    [sym_module_identifier] = ACTIONS(516),
    [sym_comment] = ACTIONS(40),
  },
  [239] = {
    [sym_constructor] = STATE(308),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(40),
  },
  [240] = {
    [sym__layout_semicolon] = ACTIONS(718),
    [anon_sym_SEMI] = ACTIONS(720),
    [anon_sym_PIPE] = ACTIONS(722),
    [anon_sym_deriving] = ACTIONS(720),
    [sym_comment] = ACTIONS(40),
  },
  [241] = {
    [anon_sym_RPAREN] = ACTIONS(650),
    [anon_sym_EQ] = ACTIONS(650),
    [sym_variable_identifier] = ACTIONS(650),
    [sym_comment] = ACTIONS(40),
  },
  [242] = {
    [sym_new_constructor] = STATE(310),
    [sym_constructor_identifier] = ACTIONS(528),
    [sym_comment] = ACTIONS(40),
  },
  [243] = {
    [sym__identifier] = STATE(311),
    [sym_fields] = STATE(311),
    [anon_sym_LBRACE] = ACTIONS(512),
    [sym_variable_identifier] = ACTIONS(166),
    [sym_constructor_identifier] = ACTIONS(54),
    [sym_module_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(40),
  },
  [244] = {
    [sym_deriving] = STATE(312),
    [sym__layout_semicolon] = ACTIONS(724),
    [anon_sym_SEMI] = ACTIONS(726),
    [anon_sym_deriving] = ACTIONS(278),
    [sym_comment] = ACTIONS(40),
  },
  [245] = {
    [sym__layout_semicolon] = ACTIONS(728),
    [anon_sym_SEMI] = ACTIONS(730),
    [sym_comment] = ACTIONS(40),
  },
  [246] = {
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(732),
  },
  [247] = {
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(734),
  },
  [248] = {
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(736),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(736),
  },
  [249] = {
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(738),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(740),
  },
  [250] = {
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(742),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(742),
  },
  [251] = {
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(738),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(744),
  },
  [252] = {
    [anon_sym_SEMI] = ACTIONS(746),
    [anon_sym_LBRACE] = ACTIONS(746),
    [anon_sym_RBRACE] = ACTIONS(746),
    [anon_sym_LPAREN] = ACTIONS(746),
    [anon_sym_RPAREN] = ACTIONS(746),
    [anon_sym_BQUOTE] = ACTIONS(746),
    [anon_sym_COLON] = ACTIONS(746),
    [anon_sym_EQ] = ACTIONS(746),
    [anon_sym_PIPE] = ACTIONS(746),
    [anon_sym_BANG] = ACTIONS(746),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(746),
    [anon_sym_DQUOTE] = ACTIONS(746),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(746),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(746),
    [anon_sym__] = ACTIONS(746),
    [sym__ascii_large] = ACTIONS(746),
    [anon_sym_POUND] = ACTIONS(746),
    [anon_sym_DOLLAR] = ACTIONS(746),
    [anon_sym_PERCENT] = ACTIONS(746),
    [anon_sym_AMP] = ACTIONS(746),
    [anon_sym_1] = ACTIONS(746),
    [anon_sym_PLUS] = ACTIONS(746),
    [anon_sym_DOT] = ACTIONS(746),
    [anon_sym_SLASH] = ACTIONS(746),
    [anon_sym_LT] = ACTIONS(746),
    [anon_sym_GT] = ACTIONS(746),
    [anon_sym_QMARK] = ACTIONS(746),
    [anon_sym_AT] = ACTIONS(746),
    [anon_sym_CARET] = ACTIONS(746),
    [anon_sym_DASH] = ACTIONS(746),
    [anon_sym_TILDE] = ACTIONS(746),
    [anon_sym_BSLASH] = ACTIONS(746),
    [anon_sym_LBRACK] = ACTIONS(746),
    [anon_sym_RBRACK] = ACTIONS(746),
    [sym__space] = ACTIONS(746),
    [sym__newline] = ACTIONS(746),
    [sym__tab] = ACTIONS(746),
    [sym__vertical_tab] = ACTIONS(746),
  },
  [253] = {
    [anon_sym_SEMI] = ACTIONS(748),
    [anon_sym_LBRACE] = ACTIONS(748),
    [anon_sym_RBRACE] = ACTIONS(748),
    [anon_sym_LPAREN] = ACTIONS(748),
    [anon_sym_RPAREN] = ACTIONS(748),
    [anon_sym_BQUOTE] = ACTIONS(748),
    [anon_sym_COLON] = ACTIONS(748),
    [anon_sym_EQ] = ACTIONS(748),
    [anon_sym_PIPE] = ACTIONS(748),
    [anon_sym_BANG] = ACTIONS(748),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(748),
    [anon_sym_DQUOTE] = ACTIONS(748),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(748),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(748),
    [anon_sym__] = ACTIONS(748),
    [sym__ascii_large] = ACTIONS(748),
    [anon_sym_POUND] = ACTIONS(748),
    [anon_sym_DOLLAR] = ACTIONS(748),
    [anon_sym_PERCENT] = ACTIONS(748),
    [anon_sym_AMP] = ACTIONS(748),
    [anon_sym_1] = ACTIONS(748),
    [anon_sym_PLUS] = ACTIONS(748),
    [anon_sym_DOT] = ACTIONS(748),
    [anon_sym_SLASH] = ACTIONS(748),
    [anon_sym_LT] = ACTIONS(748),
    [anon_sym_GT] = ACTIONS(748),
    [anon_sym_QMARK] = ACTIONS(748),
    [anon_sym_AT] = ACTIONS(748),
    [anon_sym_CARET] = ACTIONS(748),
    [anon_sym_DASH] = ACTIONS(748),
    [anon_sym_TILDE] = ACTIONS(748),
    [anon_sym_BSLASH] = ACTIONS(748),
    [anon_sym_LBRACK] = ACTIONS(748),
    [anon_sym_RBRACK] = ACTIONS(748),
    [sym__space] = ACTIONS(748),
    [sym__newline] = ACTIONS(748),
    [sym__tab] = ACTIONS(748),
    [sym__vertical_tab] = ACTIONS(748),
  },
  [254] = {
    [anon_sym_SEMI] = ACTIONS(750),
    [anon_sym_LBRACE] = ACTIONS(750),
    [anon_sym_RBRACE] = ACTIONS(750),
    [anon_sym_LPAREN] = ACTIONS(750),
    [anon_sym_RPAREN] = ACTIONS(750),
    [anon_sym_BQUOTE] = ACTIONS(750),
    [anon_sym_COLON] = ACTIONS(750),
    [anon_sym_EQ] = ACTIONS(750),
    [anon_sym_PIPE] = ACTIONS(750),
    [anon_sym_BANG] = ACTIONS(750),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(750),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(750),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(750),
    [anon_sym__] = ACTIONS(750),
    [sym__ascii_large] = ACTIONS(750),
    [anon_sym_POUND] = ACTIONS(750),
    [anon_sym_DOLLAR] = ACTIONS(750),
    [anon_sym_PERCENT] = ACTIONS(750),
    [anon_sym_AMP] = ACTIONS(750),
    [anon_sym_1] = ACTIONS(750),
    [anon_sym_PLUS] = ACTIONS(750),
    [anon_sym_DOT] = ACTIONS(750),
    [anon_sym_SLASH] = ACTIONS(750),
    [anon_sym_LT] = ACTIONS(750),
    [anon_sym_GT] = ACTIONS(750),
    [anon_sym_QMARK] = ACTIONS(750),
    [anon_sym_AT] = ACTIONS(750),
    [anon_sym_CARET] = ACTIONS(750),
    [anon_sym_DASH] = ACTIONS(750),
    [anon_sym_TILDE] = ACTIONS(750),
    [anon_sym_BSLASH] = ACTIONS(750),
    [anon_sym_LBRACK] = ACTIONS(750),
    [anon_sym_RBRACK] = ACTIONS(750),
    [sym__space] = ACTIONS(750),
    [sym__newline] = ACTIONS(750),
    [sym__tab] = ACTIONS(750),
    [sym__vertical_tab] = ACTIONS(750),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(750),
  },
  [255] = {
    [anon_sym_SEMI] = ACTIONS(752),
    [anon_sym_LBRACE] = ACTIONS(752),
    [anon_sym_RBRACE] = ACTIONS(752),
    [anon_sym_LPAREN] = ACTIONS(752),
    [anon_sym_RPAREN] = ACTIONS(752),
    [anon_sym_BQUOTE] = ACTIONS(752),
    [anon_sym_COLON] = ACTIONS(752),
    [anon_sym_EQ] = ACTIONS(752),
    [anon_sym_PIPE] = ACTIONS(752),
    [anon_sym_BANG] = ACTIONS(752),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(752),
    [anon_sym_DQUOTE] = ACTIONS(752),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(752),
    [anon_sym__] = ACTIONS(752),
    [sym__ascii_large] = ACTIONS(752),
    [anon_sym_POUND] = ACTIONS(752),
    [anon_sym_DOLLAR] = ACTIONS(752),
    [anon_sym_PERCENT] = ACTIONS(752),
    [anon_sym_AMP] = ACTIONS(752),
    [anon_sym_1] = ACTIONS(752),
    [anon_sym_PLUS] = ACTIONS(752),
    [anon_sym_DOT] = ACTIONS(752),
    [anon_sym_SLASH] = ACTIONS(752),
    [anon_sym_LT] = ACTIONS(752),
    [anon_sym_GT] = ACTIONS(752),
    [anon_sym_QMARK] = ACTIONS(752),
    [anon_sym_AT] = ACTIONS(752),
    [anon_sym_CARET] = ACTIONS(752),
    [anon_sym_DASH] = ACTIONS(752),
    [anon_sym_TILDE] = ACTIONS(752),
    [anon_sym_BSLASH] = ACTIONS(752),
    [anon_sym_LBRACK] = ACTIONS(752),
    [anon_sym_RBRACK] = ACTIONS(752),
    [sym__space] = ACTIONS(752),
    [sym__newline] = ACTIONS(752),
    [sym__tab] = ACTIONS(752),
    [sym__vertical_tab] = ACTIONS(752),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(754),
  },
  [256] = {
    [anon_sym_SEMI] = ACTIONS(756),
    [anon_sym_LBRACE] = ACTIONS(756),
    [anon_sym_RBRACE] = ACTIONS(756),
    [anon_sym_LPAREN] = ACTIONS(756),
    [anon_sym_RPAREN] = ACTIONS(756),
    [anon_sym_BQUOTE] = ACTIONS(756),
    [anon_sym_COLON] = ACTIONS(756),
    [anon_sym_EQ] = ACTIONS(756),
    [anon_sym_PIPE] = ACTIONS(756),
    [anon_sym_BANG] = ACTIONS(756),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(756),
    [anon_sym_DQUOTE] = ACTIONS(756),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(756),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(756),
    [anon_sym__] = ACTIONS(756),
    [sym__ascii_large] = ACTIONS(756),
    [anon_sym_POUND] = ACTIONS(756),
    [anon_sym_DOLLAR] = ACTIONS(756),
    [anon_sym_PERCENT] = ACTIONS(756),
    [anon_sym_AMP] = ACTIONS(756),
    [anon_sym_1] = ACTIONS(756),
    [anon_sym_PLUS] = ACTIONS(756),
    [anon_sym_DOT] = ACTIONS(756),
    [anon_sym_SLASH] = ACTIONS(756),
    [anon_sym_LT] = ACTIONS(756),
    [anon_sym_GT] = ACTIONS(756),
    [anon_sym_QMARK] = ACTIONS(756),
    [anon_sym_AT] = ACTIONS(756),
    [anon_sym_CARET] = ACTIONS(756),
    [anon_sym_DASH] = ACTIONS(756),
    [anon_sym_TILDE] = ACTIONS(756),
    [anon_sym_BSLASH] = ACTIONS(756),
    [anon_sym_LBRACK] = ACTIONS(756),
    [anon_sym_RBRACK] = ACTIONS(756),
    [sym__space] = ACTIONS(756),
    [sym__newline] = ACTIONS(756),
    [sym__tab] = ACTIONS(756),
    [sym__vertical_tab] = ACTIONS(756),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(756),
  },
  [257] = {
    [anon_sym_SEMI] = ACTIONS(752),
    [anon_sym_LBRACE] = ACTIONS(752),
    [anon_sym_RBRACE] = ACTIONS(752),
    [anon_sym_LPAREN] = ACTIONS(752),
    [anon_sym_RPAREN] = ACTIONS(752),
    [anon_sym_BQUOTE] = ACTIONS(752),
    [anon_sym_COLON] = ACTIONS(752),
    [anon_sym_EQ] = ACTIONS(752),
    [anon_sym_PIPE] = ACTIONS(752),
    [anon_sym_BANG] = ACTIONS(752),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(752),
    [anon_sym_DQUOTE] = ACTIONS(752),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(752),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(752),
    [anon_sym__] = ACTIONS(752),
    [sym__ascii_large] = ACTIONS(752),
    [anon_sym_POUND] = ACTIONS(752),
    [anon_sym_DOLLAR] = ACTIONS(752),
    [anon_sym_PERCENT] = ACTIONS(752),
    [anon_sym_AMP] = ACTIONS(752),
    [anon_sym_1] = ACTIONS(752),
    [anon_sym_PLUS] = ACTIONS(752),
    [anon_sym_DOT] = ACTIONS(752),
    [anon_sym_SLASH] = ACTIONS(752),
    [anon_sym_LT] = ACTIONS(752),
    [anon_sym_GT] = ACTIONS(752),
    [anon_sym_QMARK] = ACTIONS(752),
    [anon_sym_AT] = ACTIONS(752),
    [anon_sym_CARET] = ACTIONS(752),
    [anon_sym_DASH] = ACTIONS(752),
    [anon_sym_TILDE] = ACTIONS(752),
    [anon_sym_BSLASH] = ACTIONS(752),
    [anon_sym_LBRACK] = ACTIONS(752),
    [anon_sym_RBRACK] = ACTIONS(752),
    [sym__space] = ACTIONS(752),
    [sym__newline] = ACTIONS(752),
    [sym__tab] = ACTIONS(752),
    [sym__vertical_tab] = ACTIONS(752),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(758),
  },
  [258] = {
    [sym__layout_semicolon] = ACTIONS(760),
    [anon_sym_SEMI] = ACTIONS(762),
    [sym_comment] = ACTIONS(40),
  },
  [259] = {
    [ts_builtin_sym_end] = ACTIONS(764),
    [sym_comment] = ACTIONS(40),
  },
  [260] = {
    [sym__layout_semicolon] = ACTIONS(766),
    [anon_sym_SEMI] = ACTIONS(768),
    [sym_comment] = ACTIONS(40),
  },
  [261] = {
    [sym_import] = STATE(21),
    [sym__declaration] = STATE(319),
    [sym__expression] = STATE(21),
    [sym_foreign] = STATE(21),
    [sym_default] = STATE(21),
    [sym_do_expression] = STATE(23),
    [sym_type_class] = STATE(21),
    [sym_type_class_instance] = STATE(21),
    [sym_fixity] = STATE(21),
    [sym_type_signature] = STATE(21),
    [sym_algebraic_datatype] = STATE(21),
    [sym_newtype] = STATE(21),
    [sym_type_synonym] = STATE(21),
    [sym__literal] = STATE(23),
    [sym__identifier] = STATE(24),
    [sym_integer] = STATE(16),
    [sym_char] = STATE(16),
    [sym_string] = STATE(16),
    [aux_sym_type_signature_repeat1] = STATE(26),
    [sym__layout_close_brace] = ACTIONS(770),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(16),
    [anon_sym_default] = ACTIONS(18),
    [anon_sym_do] = ACTIONS(20),
    [anon_sym_class] = ACTIONS(22),
    [anon_sym_instance] = ACTIONS(24),
    [anon_sym_infixl] = ACTIONS(26),
    [anon_sym_infixr] = ACTIONS(26),
    [anon_sym_infix] = ACTIONS(26),
    [anon_sym_COLON_COLON] = ACTIONS(28),
    [anon_sym_data] = ACTIONS(30),
    [anon_sym_newtype] = ACTIONS(32),
    [anon_sym_type] = ACTIONS(34),
    [sym_variable_identifier] = ACTIONS(36),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__integer_literal] = ACTIONS(48),
    [sym__octal_literal] = ACTIONS(48),
    [sym__hexidecimal_literal] = ACTIONS(48),
  },
  [262] = {
    [sym_import] = STATE(21),
    [sym__declaration] = STATE(87),
    [sym__expression] = STATE(21),
    [sym_foreign] = STATE(21),
    [sym_default] = STATE(21),
    [sym_do_expression] = STATE(23),
    [sym_type_class] = STATE(21),
    [sym_type_class_instance] = STATE(21),
    [sym_fixity] = STATE(21),
    [sym_type_signature] = STATE(21),
    [sym_algebraic_datatype] = STATE(21),
    [sym_newtype] = STATE(21),
    [sym_type_synonym] = STATE(21),
    [sym__literal] = STATE(23),
    [sym__identifier] = STATE(24),
    [sym_integer] = STATE(16),
    [sym_char] = STATE(16),
    [sym_string] = STATE(16),
    [aux_sym_type_signature_repeat1] = STATE(26),
    [anon_sym_RBRACE] = ACTIONS(772),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(16),
    [anon_sym_default] = ACTIONS(18),
    [anon_sym_do] = ACTIONS(20),
    [anon_sym_class] = ACTIONS(22),
    [anon_sym_instance] = ACTIONS(24),
    [anon_sym_infixl] = ACTIONS(26),
    [anon_sym_infixr] = ACTIONS(26),
    [anon_sym_infix] = ACTIONS(26),
    [anon_sym_COLON_COLON] = ACTIONS(28),
    [anon_sym_data] = ACTIONS(30),
    [anon_sym_newtype] = ACTIONS(32),
    [anon_sym_type] = ACTIONS(34),
    [sym_variable_identifier] = ACTIONS(36),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__integer_literal] = ACTIONS(48),
    [sym__octal_literal] = ACTIONS(48),
    [sym__hexidecimal_literal] = ACTIONS(48),
  },
  [263] = {
    [sym_export] = STATE(320),
    [sym__identifier] = STATE(176),
    [sym_variable_identifier] = ACTIONS(366),
    [sym_constructor_identifier] = ACTIONS(368),
    [sym_module_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(40),
  },
  [264] = {
    [anon_sym_where] = ACTIONS(774),
    [sym_comment] = ACTIONS(40),
  },
  [265] = {
    [anon_sym_COMMA] = ACTIONS(776),
    [anon_sym_RPAREN] = ACTIONS(778),
    [sym_comment] = ACTIONS(40),
  },
  [266] = {
    [sym__identifier] = STATE(324),
    [anon_sym_DOT_DOT] = ACTIONS(780),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [267] = {
    [ts_builtin_sym_end] = ACTIONS(782),
    [sym_comment] = ACTIONS(40),
  },
  [268] = {
    [sym_import_specification] = STATE(325),
    [sym__layout_semicolon] = ACTIONS(784),
    [anon_sym_SEMI] = ACTIONS(786),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_hiding] = ACTIONS(178),
    [sym_comment] = ACTIONS(40),
  },
  [269] = {
    [sym__identifier] = STATE(327),
    [anon_sym_DOT_DOT] = ACTIONS(788),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [270] = {
    [sym__identifier] = STATE(328),
    [sym_variable_identifier] = ACTIONS(366),
    [sym_constructor_identifier] = ACTIONS(368),
    [sym_module_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(40),
  },
  [271] = {
    [sym__layout_semicolon] = ACTIONS(790),
    [anon_sym_SEMI] = ACTIONS(792),
    [sym_comment] = ACTIONS(40),
  },
  [272] = {
    [anon_sym_COMMA] = ACTIONS(794),
    [anon_sym_RPAREN] = ACTIONS(796),
    [sym_comment] = ACTIONS(40),
  },
  [273] = {
    [sym__layout_semicolon] = ACTIONS(784),
    [anon_sym_SEMI] = ACTIONS(786),
    [sym_comment] = ACTIONS(40),
  },
  [274] = {
    [aux_sym_import_specification_repeat1] = STATE(332),
    [anon_sym_LPAREN] = ACTIONS(798),
    [anon_sym_COMMA] = ACTIONS(596),
    [anon_sym_RPAREN] = ACTIONS(796),
    [sym_comment] = ACTIONS(40),
  },
  [275] = {
    [anon_sym_COLON_COLON] = ACTIONS(320),
    [sym_variable_identifier] = ACTIONS(320),
    [sym_constructor_identifier] = ACTIONS(800),
    [sym_module_identifier] = ACTIONS(800),
    [sym_comment] = ACTIONS(40),
  },
  [276] = {
    [sym__gap] = STATE(166),
    [sym__graphic] = STATE(166),
    [sym__small] = STATE(80),
    [sym__large] = STATE(80),
    [sym__symbol] = STATE(80),
    [sym__special] = STATE(80),
    [sym__escape] = STATE(166),
    [anon_sym_SEMI] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(124),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_PIPE] = ACTIONS(124),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(342),
    [anon_sym_DQUOTE] = ACTIONS(802),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(132),
    [anon_sym__] = ACTIONS(132),
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
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym_CARET] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_TILDE] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(122),
    [sym__space] = ACTIONS(138),
    [sym__newline] = ACTIONS(138),
    [sym__tab] = ACTIONS(138),
    [sym__vertical_tab] = ACTIONS(138),
  },
  [277] = {
    [sym__layout_semicolon] = ACTIONS(804),
    [anon_sym_SEMI] = ACTIONS(806),
    [sym_comment] = ACTIONS(40),
  },
  [278] = {
    [sym_type_signature] = STATE(334),
    [sym__identifier] = STATE(24),
    [aux_sym_type_signature_repeat1] = STATE(26),
    [anon_sym_COLON_COLON] = ACTIONS(28),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [279] = {
    [anon_sym_COMMA] = ACTIONS(808),
    [anon_sym_RPAREN] = ACTIONS(808),
    [sym_comment] = ACTIONS(40),
  },
  [280] = {
    [sym__identifier] = STATE(335),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [281] = {
    [sym__layout_semicolon] = ACTIONS(810),
    [anon_sym_SEMI] = ACTIONS(812),
    [sym_comment] = ACTIONS(40),
  },
  [282] = {
    [anon_sym_COMMA] = ACTIONS(814),
    [anon_sym_RPAREN] = ACTIONS(814),
    [sym_comment] = ACTIONS(40),
  },
  [283] = {
    [sym_constructor_identifier] = ACTIONS(816),
    [sym_comment] = ACTIONS(40),
  },
  [284] = {
    [sym_class] = STATE(336),
    [sym_constructor_identifier] = ACTIONS(196),
    [sym_comment] = ACTIONS(40),
  },
  [285] = {
    [anon_sym_EQ_GT] = ACTIONS(818),
    [sym_comment] = ACTIONS(40),
  },
  [286] = {
    [sym__layout_semicolon] = ACTIONS(820),
    [anon_sym_SEMI] = ACTIONS(822),
    [sym_comment] = ACTIONS(40),
  },
  [287] = {
    [sym__layout_semicolon] = ACTIONS(824),
    [anon_sym_SEMI] = ACTIONS(826),
    [sym_comment] = ACTIONS(40),
  },
  [288] = {
    [sym__layout_semicolon] = ACTIONS(828),
    [anon_sym_SEMI] = ACTIONS(830),
    [sym_comment] = ACTIONS(40),
  },
  [289] = {
    [sym__general_declaration] = STATE(340),
    [sym_fixity] = STATE(288),
    [sym_type_signature] = STATE(288),
    [sym__identifier] = STATE(24),
    [aux_sym_type_signature_repeat1] = STATE(26),
    [sym__layout_close_brace] = ACTIONS(832),
    [anon_sym_infixl] = ACTIONS(26),
    [anon_sym_infixr] = ACTIONS(26),
    [anon_sym_infix] = ACTIONS(26),
    [anon_sym_COLON_COLON] = ACTIONS(28),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [290] = {
    [sym__layout_semicolon] = ACTIONS(834),
    [anon_sym_SEMI] = ACTIONS(836),
    [sym_comment] = ACTIONS(40),
  },
  [291] = {
    [sym__general_declaration] = STATE(342),
    [sym_fixity] = STATE(288),
    [sym_type_signature] = STATE(288),
    [sym__identifier] = STATE(24),
    [aux_sym_type_signature_repeat1] = STATE(26),
    [anon_sym_RBRACE] = ACTIONS(838),
    [anon_sym_infixl] = ACTIONS(26),
    [anon_sym_infixr] = ACTIONS(26),
    [anon_sym_infix] = ACTIONS(26),
    [anon_sym_COLON_COLON] = ACTIONS(28),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [292] = {
    [anon_sym_COMMA] = ACTIONS(840),
    [anon_sym_RPAREN] = ACTIONS(840),
    [anon_sym_EQ_GT] = ACTIONS(840),
    [sym_comment] = ACTIONS(40),
  },
  [293] = {
    [sym__layout_semicolon] = ACTIONS(842),
    [anon_sym_SEMI] = ACTIONS(844),
    [sym_comment] = ACTIONS(40),
  },
  [294] = {
    [sym_general_declarations] = STATE(343),
    [sym__layout_open_brace] = ACTIONS(426),
    [anon_sym_LBRACE] = ACTIONS(428),
    [sym_comment] = ACTIONS(40),
  },
  [295] = {
    [sym__layout_semicolon] = ACTIONS(846),
    [anon_sym_SEMI] = ACTIONS(848),
    [sym_comment] = ACTIONS(40),
  },
  [296] = {
    [sym_general_declarations] = STATE(344),
    [sym__layout_open_brace] = ACTIONS(426),
    [anon_sym_LBRACE] = ACTIONS(428),
    [sym_comment] = ACTIONS(40),
  },
  [297] = {
    [sym__layout_semicolon] = ACTIONS(850),
    [anon_sym_SEMI] = ACTIONS(852),
    [anon_sym_COMMA] = ACTIONS(852),
    [sym_comment] = ACTIONS(40),
  },
  [298] = {
    [sym__layout_semicolon] = ACTIONS(854),
    [anon_sym_SEMI] = ACTIONS(856),
    [anon_sym_COMMA] = ACTIONS(856),
    [sym_comment] = ACTIONS(40),
  },
  [299] = {
    [sym_variable_identifier] = ACTIONS(858),
    [sym_constructor_identifier] = ACTIONS(816),
    [sym_module_identifier] = ACTIONS(816),
    [sym_comment] = ACTIONS(40),
  },
  [300] = {
    [anon_sym_EQ_GT] = ACTIONS(860),
    [sym_comment] = ACTIONS(40),
  },
  [301] = {
    [sym_deriving] = STATE(346),
    [sym__layout_semicolon] = ACTIONS(862),
    [anon_sym_SEMI] = ACTIONS(864),
    [anon_sym_deriving] = ACTIONS(278),
    [sym_comment] = ACTIONS(40),
  },
  [302] = {
    [sym__layout_semicolon] = ACTIONS(862),
    [anon_sym_SEMI] = ACTIONS(864),
    [sym_comment] = ACTIONS(40),
  },
  [303] = {
    [aux_sym_export_repeat1] = STATE(348),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_RPAREN] = ACTIONS(866),
    [sym_comment] = ACTIONS(40),
  },
  [304] = {
    [aux_sym_field_repeat1] = STATE(351),
    [anon_sym_COMMA] = ACTIONS(868),
    [anon_sym_COLON_COLON] = ACTIONS(870),
    [sym_comment] = ACTIONS(40),
  },
  [305] = {
    [aux_sym_fields_repeat1] = STATE(354),
    [anon_sym_RBRACE] = ACTIONS(872),
    [anon_sym_COMMA] = ACTIONS(874),
    [sym_comment] = ACTIONS(40),
  },
  [306] = {
    [sym__layout_semicolon] = ACTIONS(876),
    [anon_sym_SEMI] = ACTIONS(878),
    [anon_sym_PIPE] = ACTIONS(878),
    [anon_sym_deriving] = ACTIONS(878),
    [anon_sym_BANG] = ACTIONS(878),
    [sym_variable_identifier] = ACTIONS(880),
    [sym_constructor_identifier] = ACTIONS(880),
    [sym_module_identifier] = ACTIONS(880),
    [sym_comment] = ACTIONS(40),
  },
  [307] = {
    [sym__layout_semicolon] = ACTIONS(882),
    [anon_sym_SEMI] = ACTIONS(884),
    [anon_sym_PIPE] = ACTIONS(884),
    [anon_sym_deriving] = ACTIONS(884),
    [anon_sym_BANG] = ACTIONS(884),
    [sym_variable_identifier] = ACTIONS(886),
    [sym_constructor_identifier] = ACTIONS(886),
    [sym_module_identifier] = ACTIONS(886),
    [sym_comment] = ACTIONS(40),
  },
  [308] = {
    [sym__layout_semicolon] = ACTIONS(888),
    [anon_sym_SEMI] = ACTIONS(890),
    [anon_sym_PIPE] = ACTIONS(890),
    [anon_sym_deriving] = ACTIONS(890),
    [sym_comment] = ACTIONS(40),
  },
  [309] = {
    [sym_constructor] = STATE(355),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(40),
  },
  [310] = {
    [sym_deriving] = STATE(356),
    [sym__layout_semicolon] = ACTIONS(892),
    [anon_sym_SEMI] = ACTIONS(894),
    [anon_sym_deriving] = ACTIONS(278),
    [sym_comment] = ACTIONS(40),
  },
  [311] = {
    [sym__layout_semicolon] = ACTIONS(896),
    [anon_sym_SEMI] = ACTIONS(898),
    [anon_sym_deriving] = ACTIONS(898),
    [sym_comment] = ACTIONS(40),
  },
  [312] = {
    [sym__layout_semicolon] = ACTIONS(892),
    [anon_sym_SEMI] = ACTIONS(894),
    [sym_comment] = ACTIONS(40),
  },
  [313] = {
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(900),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(900),
  },
  [314] = {
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(902),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(902),
  },
  [315] = {
    [anon_sym_SEMI] = ACTIONS(904),
    [anon_sym_LBRACE] = ACTIONS(904),
    [anon_sym_RBRACE] = ACTIONS(904),
    [anon_sym_LPAREN] = ACTIONS(904),
    [anon_sym_RPAREN] = ACTIONS(904),
    [anon_sym_BQUOTE] = ACTIONS(904),
    [anon_sym_COLON] = ACTIONS(904),
    [anon_sym_EQ] = ACTIONS(904),
    [anon_sym_PIPE] = ACTIONS(904),
    [anon_sym_BANG] = ACTIONS(904),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(904),
    [anon_sym_DQUOTE] = ACTIONS(904),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(904),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(904),
    [anon_sym__] = ACTIONS(904),
    [sym__ascii_large] = ACTIONS(904),
    [anon_sym_POUND] = ACTIONS(904),
    [anon_sym_DOLLAR] = ACTIONS(904),
    [anon_sym_PERCENT] = ACTIONS(904),
    [anon_sym_AMP] = ACTIONS(904),
    [anon_sym_1] = ACTIONS(904),
    [anon_sym_PLUS] = ACTIONS(904),
    [anon_sym_DOT] = ACTIONS(904),
    [anon_sym_SLASH] = ACTIONS(904),
    [anon_sym_LT] = ACTIONS(904),
    [anon_sym_GT] = ACTIONS(904),
    [anon_sym_QMARK] = ACTIONS(904),
    [anon_sym_AT] = ACTIONS(904),
    [anon_sym_CARET] = ACTIONS(904),
    [anon_sym_DASH] = ACTIONS(904),
    [anon_sym_TILDE] = ACTIONS(904),
    [anon_sym_BSLASH] = ACTIONS(904),
    [anon_sym_LBRACK] = ACTIONS(904),
    [anon_sym_RBRACK] = ACTIONS(904),
    [sym__space] = ACTIONS(904),
    [sym__newline] = ACTIONS(904),
    [sym__tab] = ACTIONS(904),
    [sym__vertical_tab] = ACTIONS(904),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(904),
  },
  [316] = {
    [anon_sym_SEMI] = ACTIONS(906),
    [anon_sym_LBRACE] = ACTIONS(906),
    [anon_sym_RBRACE] = ACTIONS(906),
    [anon_sym_LPAREN] = ACTIONS(906),
    [anon_sym_RPAREN] = ACTIONS(906),
    [anon_sym_BQUOTE] = ACTIONS(906),
    [anon_sym_COLON] = ACTIONS(906),
    [anon_sym_EQ] = ACTIONS(906),
    [anon_sym_PIPE] = ACTIONS(906),
    [anon_sym_BANG] = ACTIONS(906),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(906),
    [anon_sym_DQUOTE] = ACTIONS(906),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(906),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(906),
    [anon_sym__] = ACTIONS(906),
    [sym__ascii_large] = ACTIONS(906),
    [anon_sym_POUND] = ACTIONS(906),
    [anon_sym_DOLLAR] = ACTIONS(906),
    [anon_sym_PERCENT] = ACTIONS(906),
    [anon_sym_AMP] = ACTIONS(906),
    [anon_sym_1] = ACTIONS(906),
    [anon_sym_PLUS] = ACTIONS(906),
    [anon_sym_DOT] = ACTIONS(906),
    [anon_sym_SLASH] = ACTIONS(906),
    [anon_sym_LT] = ACTIONS(906),
    [anon_sym_GT] = ACTIONS(906),
    [anon_sym_QMARK] = ACTIONS(906),
    [anon_sym_AT] = ACTIONS(906),
    [anon_sym_CARET] = ACTIONS(906),
    [anon_sym_DASH] = ACTIONS(906),
    [anon_sym_TILDE] = ACTIONS(906),
    [anon_sym_BSLASH] = ACTIONS(906),
    [anon_sym_LBRACK] = ACTIONS(906),
    [anon_sym_RBRACK] = ACTIONS(906),
    [sym__space] = ACTIONS(906),
    [sym__newline] = ACTIONS(906),
    [sym__tab] = ACTIONS(906),
    [sym__vertical_tab] = ACTIONS(906),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(906),
  },
  [317] = {
    [sym__layout_close_brace] = ACTIONS(346),
    [anon_sym_import] = ACTIONS(348),
    [anon_sym_foreign] = ACTIONS(348),
    [anon_sym_default] = ACTIONS(348),
    [anon_sym_do] = ACTIONS(348),
    [anon_sym_class] = ACTIONS(348),
    [anon_sym_instance] = ACTIONS(348),
    [anon_sym_infixl] = ACTIONS(348),
    [anon_sym_infixr] = ACTIONS(348),
    [anon_sym_infix] = ACTIONS(348),
    [anon_sym_COLON_COLON] = ACTIONS(348),
    [anon_sym_data] = ACTIONS(348),
    [anon_sym_newtype] = ACTIONS(348),
    [anon_sym_type] = ACTIONS(348),
    [sym_variable_identifier] = ACTIONS(350),
    [sym_constructor_identifier] = ACTIONS(350),
    [sym_module_identifier] = ACTIONS(350),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(350),
    [anon_sym_SQUOTE] = ACTIONS(348),
    [anon_sym_DQUOTE] = ACTIONS(348),
    [sym__integer_literal] = ACTIONS(348),
    [sym__octal_literal] = ACTIONS(348),
    [sym__hexidecimal_literal] = ACTIONS(348),
  },
  [318] = {
    [ts_builtin_sym_end] = ACTIONS(908),
    [sym_comment] = ACTIONS(40),
  },
  [319] = {
    [sym__layout_semicolon] = ACTIONS(910),
    [anon_sym_SEMI] = ACTIONS(912),
    [sym_comment] = ACTIONS(40),
  },
  [320] = {
    [anon_sym_COMMA] = ACTIONS(914),
    [anon_sym_RPAREN] = ACTIONS(914),
    [sym_comment] = ACTIONS(40),
  },
  [321] = {
    [sym_export] = STATE(358),
    [sym__identifier] = STATE(176),
    [sym_variable_identifier] = ACTIONS(366),
    [sym_constructor_identifier] = ACTIONS(368),
    [sym_module_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(40),
  },
  [322] = {
    [anon_sym_where] = ACTIONS(916),
    [sym_comment] = ACTIONS(40),
  },
  [323] = {
    [anon_sym_RPAREN] = ACTIONS(918),
    [sym_comment] = ACTIONS(40),
  },
  [324] = {
    [aux_sym_export_repeat1] = STATE(360),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_RPAREN] = ACTIONS(918),
    [sym_comment] = ACTIONS(40),
  },
  [325] = {
    [sym__layout_semicolon] = ACTIONS(920),
    [anon_sym_SEMI] = ACTIONS(922),
    [sym_comment] = ACTIONS(40),
  },
  [326] = {
    [anon_sym_RPAREN] = ACTIONS(924),
    [sym_comment] = ACTIONS(40),
  },
  [327] = {
    [aux_sym_export_repeat1] = STATE(362),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_RPAREN] = ACTIONS(924),
    [sym_comment] = ACTIONS(40),
  },
  [328] = {
    [anon_sym_LPAREN] = ACTIONS(926),
    [anon_sym_COMMA] = ACTIONS(928),
    [anon_sym_RPAREN] = ACTIONS(928),
    [sym_comment] = ACTIONS(40),
  },
  [329] = {
    [sym__identifier] = STATE(364),
    [sym_variable_identifier] = ACTIONS(366),
    [sym_constructor_identifier] = ACTIONS(368),
    [sym_module_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(40),
  },
  [330] = {
    [sym__layout_semicolon] = ACTIONS(930),
    [anon_sym_SEMI] = ACTIONS(932),
    [sym_comment] = ACTIONS(40),
  },
  [331] = {
    [sym__identifier] = STATE(366),
    [anon_sym_DOT_DOT] = ACTIONS(934),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [332] = {
    [anon_sym_COMMA] = ACTIONS(794),
    [anon_sym_RPAREN] = ACTIONS(936),
    [sym_comment] = ACTIONS(40),
  },
  [333] = {
    [anon_sym_COLON_COLON] = ACTIONS(562),
    [sym_variable_identifier] = ACTIONS(562),
    [sym_constructor_identifier] = ACTIONS(938),
    [sym_module_identifier] = ACTIONS(938),
    [sym_comment] = ACTIONS(40),
  },
  [334] = {
    [sym__layout_semicolon] = ACTIONS(940),
    [anon_sym_SEMI] = ACTIONS(942),
    [sym_comment] = ACTIONS(40),
  },
  [335] = {
    [anon_sym_COMMA] = ACTIONS(944),
    [anon_sym_RPAREN] = ACTIONS(944),
    [sym_comment] = ACTIONS(40),
  },
  [336] = {
    [anon_sym_COMMA] = ACTIONS(946),
    [anon_sym_RPAREN] = ACTIONS(946),
    [sym_comment] = ACTIONS(40),
  },
  [337] = {
    [sym_constructor_identifier] = ACTIONS(948),
    [sym_comment] = ACTIONS(40),
  },
  [338] = {
    [sym__layout_close_brace] = ACTIONS(950),
    [anon_sym_infixl] = ACTIONS(952),
    [anon_sym_infixr] = ACTIONS(952),
    [anon_sym_infix] = ACTIONS(952),
    [anon_sym_COLON_COLON] = ACTIONS(952),
    [sym_variable_identifier] = ACTIONS(954),
    [sym_constructor_identifier] = ACTIONS(954),
    [sym_module_identifier] = ACTIONS(954),
    [sym_comment] = ACTIONS(40),
  },
  [339] = {
    [sym__layout_semicolon] = ACTIONS(956),
    [anon_sym_SEMI] = ACTIONS(958),
    [sym_comment] = ACTIONS(40),
  },
  [340] = {
    [sym__layout_semicolon] = ACTIONS(960),
    [anon_sym_SEMI] = ACTIONS(962),
    [sym_comment] = ACTIONS(40),
  },
  [341] = {
    [anon_sym_RBRACE] = ACTIONS(952),
    [anon_sym_infixl] = ACTIONS(952),
    [anon_sym_infixr] = ACTIONS(952),
    [anon_sym_infix] = ACTIONS(952),
    [anon_sym_COLON_COLON] = ACTIONS(952),
    [sym_variable_identifier] = ACTIONS(954),
    [sym_constructor_identifier] = ACTIONS(954),
    [sym_module_identifier] = ACTIONS(954),
    [sym_comment] = ACTIONS(40),
  },
  [342] = {
    [sym__layout_semicolon] = ACTIONS(964),
    [anon_sym_SEMI] = ACTIONS(966),
    [sym_comment] = ACTIONS(40),
  },
  [343] = {
    [sym__layout_semicolon] = ACTIONS(968),
    [anon_sym_SEMI] = ACTIONS(970),
    [sym_comment] = ACTIONS(40),
  },
  [344] = {
    [sym__layout_semicolon] = ACTIONS(972),
    [anon_sym_SEMI] = ACTIONS(974),
    [sym_comment] = ACTIONS(40),
  },
  [345] = {
    [sym_variable_identifier] = ACTIONS(976),
    [sym_constructor_identifier] = ACTIONS(948),
    [sym_module_identifier] = ACTIONS(948),
    [sym_comment] = ACTIONS(40),
  },
  [346] = {
    [sym__layout_semicolon] = ACTIONS(978),
    [anon_sym_SEMI] = ACTIONS(980),
    [sym_comment] = ACTIONS(40),
  },
  [347] = {
    [sym__layout_semicolon] = ACTIONS(982),
    [anon_sym_SEMI] = ACTIONS(984),
    [sym_comment] = ACTIONS(40),
  },
  [348] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(986),
    [sym_comment] = ACTIONS(40),
  },
  [349] = {
    [sym_variable_identifier] = ACTIONS(988),
    [sym_comment] = ACTIONS(40),
  },
  [350] = {
    [sym_strict] = STATE(373),
    [sym__identifier] = STATE(373),
    [anon_sym_BANG] = ACTIONS(990),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [351] = {
    [anon_sym_COMMA] = ACTIONS(992),
    [anon_sym_COLON_COLON] = ACTIONS(994),
    [sym_comment] = ACTIONS(40),
  },
  [352] = {
    [sym__layout_semicolon] = ACTIONS(996),
    [anon_sym_SEMI] = ACTIONS(998),
    [anon_sym_PIPE] = ACTIONS(998),
    [anon_sym_deriving] = ACTIONS(998),
    [sym_comment] = ACTIONS(40),
  },
  [353] = {
    [sym_field] = STATE(376),
    [sym_variable_identifier] = ACTIONS(704),
    [sym_comment] = ACTIONS(40),
  },
  [354] = {
    [anon_sym_RBRACE] = ACTIONS(1000),
    [anon_sym_COMMA] = ACTIONS(1002),
    [sym_comment] = ACTIONS(40),
  },
  [355] = {
    [sym__layout_semicolon] = ACTIONS(1004),
    [anon_sym_SEMI] = ACTIONS(1006),
    [anon_sym_PIPE] = ACTIONS(1006),
    [anon_sym_deriving] = ACTIONS(1006),
    [sym_comment] = ACTIONS(40),
  },
  [356] = {
    [sym__layout_semicolon] = ACTIONS(1008),
    [anon_sym_SEMI] = ACTIONS(1010),
    [sym_comment] = ACTIONS(40),
  },
  [357] = {
    [sym__layout_close_brace] = ACTIONS(564),
    [anon_sym_import] = ACTIONS(566),
    [anon_sym_foreign] = ACTIONS(566),
    [anon_sym_default] = ACTIONS(566),
    [anon_sym_do] = ACTIONS(566),
    [anon_sym_class] = ACTIONS(566),
    [anon_sym_instance] = ACTIONS(566),
    [anon_sym_infixl] = ACTIONS(566),
    [anon_sym_infixr] = ACTIONS(566),
    [anon_sym_infix] = ACTIONS(566),
    [anon_sym_COLON_COLON] = ACTIONS(566),
    [anon_sym_data] = ACTIONS(566),
    [anon_sym_newtype] = ACTIONS(566),
    [anon_sym_type] = ACTIONS(566),
    [sym_variable_identifier] = ACTIONS(568),
    [sym_constructor_identifier] = ACTIONS(568),
    [sym_module_identifier] = ACTIONS(568),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [sym__integer_literal] = ACTIONS(566),
    [sym__octal_literal] = ACTIONS(566),
    [sym__hexidecimal_literal] = ACTIONS(566),
  },
  [358] = {
    [anon_sym_COMMA] = ACTIONS(1012),
    [anon_sym_RPAREN] = ACTIONS(1012),
    [sym_comment] = ACTIONS(40),
  },
  [359] = {
    [anon_sym_COMMA] = ACTIONS(1014),
    [anon_sym_RPAREN] = ACTIONS(1014),
    [sym_comment] = ACTIONS(40),
  },
  [360] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(1016),
    [sym_comment] = ACTIONS(40),
  },
  [361] = {
    [aux_sym_import_specification_repeat1] = STATE(381),
    [anon_sym_COMMA] = ACTIONS(596),
    [anon_sym_RPAREN] = ACTIONS(1018),
    [sym_comment] = ACTIONS(40),
  },
  [362] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(1020),
    [sym_comment] = ACTIONS(40),
  },
  [363] = {
    [sym__identifier] = STATE(384),
    [anon_sym_DOT_DOT] = ACTIONS(1022),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [364] = {
    [anon_sym_LPAREN] = ACTIONS(1024),
    [anon_sym_COMMA] = ACTIONS(1026),
    [anon_sym_RPAREN] = ACTIONS(1026),
    [sym_comment] = ACTIONS(40),
  },
  [365] = {
    [anon_sym_RPAREN] = ACTIONS(1020),
    [sym_comment] = ACTIONS(40),
  },
  [366] = {
    [aux_sym_export_repeat1] = STATE(386),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_RPAREN] = ACTIONS(1020),
    [sym_comment] = ACTIONS(40),
  },
  [367] = {
    [sym__layout_semicolon] = ACTIONS(1028),
    [anon_sym_SEMI] = ACTIONS(1030),
    [sym_comment] = ACTIONS(40),
  },
  [368] = {
    [sym__layout_close_brace] = ACTIONS(1032),
    [anon_sym_infixl] = ACTIONS(1034),
    [anon_sym_infixr] = ACTIONS(1034),
    [anon_sym_infix] = ACTIONS(1034),
    [anon_sym_COLON_COLON] = ACTIONS(1034),
    [sym_variable_identifier] = ACTIONS(1036),
    [sym_constructor_identifier] = ACTIONS(1036),
    [sym_module_identifier] = ACTIONS(1036),
    [sym_comment] = ACTIONS(40),
  },
  [369] = {
    [anon_sym_RBRACE] = ACTIONS(1034),
    [anon_sym_infixl] = ACTIONS(1034),
    [anon_sym_infixr] = ACTIONS(1034),
    [anon_sym_infix] = ACTIONS(1034),
    [anon_sym_COLON_COLON] = ACTIONS(1034),
    [sym_variable_identifier] = ACTIONS(1036),
    [sym_constructor_identifier] = ACTIONS(1036),
    [sym_module_identifier] = ACTIONS(1036),
    [sym_comment] = ACTIONS(40),
  },
  [370] = {
    [sym__layout_semicolon] = ACTIONS(1038),
    [anon_sym_SEMI] = ACTIONS(1040),
    [sym_comment] = ACTIONS(40),
  },
  [371] = {
    [anon_sym_COMMA] = ACTIONS(1042),
    [anon_sym_COLON_COLON] = ACTIONS(1042),
    [sym_comment] = ACTIONS(40),
  },
  [372] = {
    [sym__identifier] = STATE(387),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [373] = {
    [anon_sym_RBRACE] = ACTIONS(1044),
    [anon_sym_COMMA] = ACTIONS(1044),
    [sym_comment] = ACTIONS(40),
  },
  [374] = {
    [sym_variable_identifier] = ACTIONS(1046),
    [sym_comment] = ACTIONS(40),
  },
  [375] = {
    [sym_strict] = STATE(389),
    [sym__identifier] = STATE(389),
    [anon_sym_BANG] = ACTIONS(990),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [376] = {
    [anon_sym_RBRACE] = ACTIONS(1048),
    [anon_sym_COMMA] = ACTIONS(1048),
    [sym_comment] = ACTIONS(40),
  },
  [377] = {
    [sym__layout_semicolon] = ACTIONS(1050),
    [anon_sym_SEMI] = ACTIONS(1052),
    [anon_sym_PIPE] = ACTIONS(1052),
    [anon_sym_deriving] = ACTIONS(1052),
    [sym_comment] = ACTIONS(40),
  },
  [378] = {
    [sym_field] = STATE(390),
    [sym_variable_identifier] = ACTIONS(704),
    [sym_comment] = ACTIONS(40),
  },
  [379] = {
    [anon_sym_COMMA] = ACTIONS(1054),
    [anon_sym_RPAREN] = ACTIONS(1054),
    [sym_comment] = ACTIONS(40),
  },
  [380] = {
    [sym__layout_semicolon] = ACTIONS(1056),
    [anon_sym_SEMI] = ACTIONS(1058),
    [sym_comment] = ACTIONS(40),
  },
  [381] = {
    [anon_sym_COMMA] = ACTIONS(794),
    [anon_sym_RPAREN] = ACTIONS(1060),
    [sym_comment] = ACTIONS(40),
  },
  [382] = {
    [aux_sym_import_specification_repeat1] = STATE(392),
    [anon_sym_COMMA] = ACTIONS(596),
    [anon_sym_RPAREN] = ACTIONS(1060),
    [sym_comment] = ACTIONS(40),
  },
  [383] = {
    [anon_sym_RPAREN] = ACTIONS(1062),
    [sym_comment] = ACTIONS(40),
  },
  [384] = {
    [aux_sym_export_repeat1] = STATE(394),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_RPAREN] = ACTIONS(1062),
    [sym_comment] = ACTIONS(40),
  },
  [385] = {
    [sym__identifier] = STATE(396),
    [anon_sym_DOT_DOT] = ACTIONS(1064),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [386] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(1066),
    [sym_comment] = ACTIONS(40),
  },
  [387] = {
    [anon_sym_RBRACE] = ACTIONS(878),
    [anon_sym_COMMA] = ACTIONS(878),
    [sym_comment] = ACTIONS(40),
  },
  [388] = {
    [anon_sym_COMMA] = ACTIONS(1068),
    [anon_sym_COLON_COLON] = ACTIONS(1068),
    [sym_comment] = ACTIONS(40),
  },
  [389] = {
    [anon_sym_RBRACE] = ACTIONS(1070),
    [anon_sym_COMMA] = ACTIONS(1070),
    [sym_comment] = ACTIONS(40),
  },
  [390] = {
    [anon_sym_RBRACE] = ACTIONS(1072),
    [anon_sym_COMMA] = ACTIONS(1072),
    [sym_comment] = ACTIONS(40),
  },
  [391] = {
    [sym__layout_semicolon] = ACTIONS(1074),
    [anon_sym_SEMI] = ACTIONS(1076),
    [sym_comment] = ACTIONS(40),
  },
  [392] = {
    [anon_sym_COMMA] = ACTIONS(794),
    [anon_sym_RPAREN] = ACTIONS(1078),
    [sym_comment] = ACTIONS(40),
  },
  [393] = {
    [anon_sym_COMMA] = ACTIONS(1080),
    [anon_sym_RPAREN] = ACTIONS(1080),
    [sym_comment] = ACTIONS(40),
  },
  [394] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(1082),
    [sym_comment] = ACTIONS(40),
  },
  [395] = {
    [anon_sym_RPAREN] = ACTIONS(1082),
    [sym_comment] = ACTIONS(40),
  },
  [396] = {
    [aux_sym_export_repeat1] = STATE(400),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_RPAREN] = ACTIONS(1082),
    [sym_comment] = ACTIONS(40),
  },
  [397] = {
    [aux_sym_import_specification_repeat1] = STATE(401),
    [anon_sym_COMMA] = ACTIONS(596),
    [anon_sym_RPAREN] = ACTIONS(1078),
    [sym_comment] = ACTIONS(40),
  },
  [398] = {
    [sym__layout_semicolon] = ACTIONS(1084),
    [anon_sym_SEMI] = ACTIONS(1086),
    [sym_comment] = ACTIONS(40),
  },
  [399] = {
    [anon_sym_COMMA] = ACTIONS(1088),
    [anon_sym_RPAREN] = ACTIONS(1088),
    [sym_comment] = ACTIONS(40),
  },
  [400] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(1090),
    [sym_comment] = ACTIONS(40),
  },
  [401] = {
    [anon_sym_COMMA] = ACTIONS(794),
    [anon_sym_RPAREN] = ACTIONS(1092),
    [sym_comment] = ACTIONS(40),
  },
  [402] = {
    [anon_sym_COMMA] = ACTIONS(1094),
    [anon_sym_RPAREN] = ACTIONS(1094),
    [sym_comment] = ACTIONS(40),
  },
  [403] = {
    [sym__layout_semicolon] = ACTIONS(1096),
    [anon_sym_SEMI] = ACTIONS(1098),
    [sym_comment] = ACTIONS(40),
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
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [36] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
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
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(84),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_signature_repeat1, 1),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_signature_repeat1, 1),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(29),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign_import, 1),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(102),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(109),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [202] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(113),
  [204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(115),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [210] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(119),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(120),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(123),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [224] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [238] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1),
  [242] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(128),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 2),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 2),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
  [260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(133),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(135),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [266] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(137),
  [268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [270] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(139),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(143),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(152),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1, .fragile = true),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [302] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(154),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(155),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(156),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(157),
  [310] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(158),
  [312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(159),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [324] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(160),
  [330] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [332] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(162),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(163),
  [336] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(165),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [342] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [344] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
  [350] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_signature_repeat1, 2),
  [358] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_signature_repeat1, 2),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [368] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(174),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_calling_convention, 1),
  [384] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_calling_convention, 1),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 3),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 3),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [410] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [434] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [438] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(206),
  [440] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(207),
  [442] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [448] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [450] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(212),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2),
  [454] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2),
  [456] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(214),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [472] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [492] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(223),
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
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [538] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(246),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [546] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [548] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [550] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(252),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
  [556] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [558] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 3),
  [568] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(263),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(271),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_safety, 1),
  [602] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_safety, 1),
  [604] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(275),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 4),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 4),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 4),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 4),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [622] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [632] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(283),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(284),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(286),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [652] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 4),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 4),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 3),
  [666] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [668] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(297),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 3),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 3),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(300),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 3),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_type, 3),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [712] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(314),
  [746] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [748] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [750] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [752] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [754] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(315),
  [756] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [758] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(316),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [762] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [764] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 2),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
  [768] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(317),
  [770] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
  [772] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(318),
  [774] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [776] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(321),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
  [780] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(323),
  [782] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5),
  [784] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [788] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(329),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(330),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(331),
  [800] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [802] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(333),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 5),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 5),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 5),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 5),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [816] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 2),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 2),
  [824] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(338),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__general_declaration, 1),
  [830] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__general_declaration, 1),
  [832] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
  [836] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(341),
  [838] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(339),
  [840] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [842] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [844] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 5),
  [848] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 5),
  [850] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 4),
  [852] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 4),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(345),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(347),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(349),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(350),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(352),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(353),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [880] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [884] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [886] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [894] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [900] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [902] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [904] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [906] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(357),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(361),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(363),
  [928] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(365),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(367),
  [938] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 6),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 6),
  [944] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [948] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [950] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [952] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [954] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [956] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 3),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 3),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(368),
  [964] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(369),
  [966] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(369),
  [968] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 6),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 6),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [978] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [982] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [984] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(370),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
  [990] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(372),
  [992] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(374),
  [994] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(375),
  [996] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [998] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
  [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(378),
  [1004] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1006] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [1016] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(379),
  [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(380),
  [1020] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(382),
  [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(383),
  [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(385),
  [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [1032] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1036] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1038] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [1042] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [1044] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(388),
  [1048] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [1050] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1052] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [1056] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [1058] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [1060] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(391),
  [1062] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(393),
  [1064] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(395),
  [1066] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(397),
  [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [1070] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [1072] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [1074] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [1076] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [1078] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(398),
  [1080] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(399),
  [1084] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [1086] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [1088] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [1090] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(402),
  [1092] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(403),
  [1094] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1098] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
