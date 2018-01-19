#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 535
#define SYMBOL_COUNT 228
#define ALIAS_COUNT 2
#define TOKEN_COUNT 131
#define EXTERNAL_TOKEN_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3

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
  anon_sym_BANG = 22,
  anon_sym_POUND = 23,
  anon_sym_DOLLAR = 24,
  anon_sym_PERCENT = 25,
  anon_sym_AMP = 26,
  anon_sym_1 = 27,
  anon_sym_PLUS = 28,
  anon_sym_DOT = 29,
  anon_sym_SLASH = 30,
  anon_sym_LT = 31,
  anon_sym_GT = 32,
  anon_sym_QMARK = 33,
  anon_sym_CARET = 34,
  anon_sym_PIPE = 35,
  anon_sym_TILDE = 36,
  anon_sym_COLON = 37,
  anon_sym_BSLASH = 38,
  anon_sym_foreign = 39,
  sym_foreign_export = 40,
  anon_sym_ccall = 41,
  anon_sym_stdcall = 42,
  anon_sym_cplusplus = 43,
  anon_sym_jvm = 44,
  anon_sym_dotnet = 45,
  anon_sym_unsafe = 46,
  anon_sym_safe = 47,
  anon_sym_default = 48,
  anon_sym_do = 49,
  anon_sym_class = 50,
  anon_sym_instance = 51,
  anon_sym_infixl = 52,
  anon_sym_infixr = 53,
  anon_sym_infix = 54,
  anon_sym_COLON_COLON = 55,
  anon_sym_DASH_GT = 56,
  sym_unit_type = 57,
  sym_list_constructor = 58,
  sym_function_constructor = 59,
  anon_sym_LBRACK = 60,
  anon_sym_RBRACK = 61,
  anon_sym_data = 62,
  anon_sym_EQ_GT = 63,
  anon_sym_deriving = 64,
  anon_sym_newtype = 65,
  anon_sym_type = 66,
  sym__variable_pattern = 67,
  sym__constructor_pattern = 68,
  sym_module_identifier = 69,
  sym_comment = 70,
  sym_float = 71,
  anon_sym_SQUOTE = 72,
  anon_sym_DQUOTE = 73,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 74,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 75,
  sym__ascii_large = 76,
  sym__space = 77,
  sym__newline = 78,
  sym__tab = 79,
  sym__vertical_tab = 80,
  anon_sym_x = 81,
  anon_sym_X = 82,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 83,
  anon_sym_o = 84,
  anon_sym_O = 85,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 86,
  anon_sym_a = 87,
  anon_sym_b = 88,
  anon_sym_f = 89,
  anon_sym_n = 90,
  anon_sym_r = 91,
  anon_sym_t = 92,
  anon_sym_v = 93,
  anon_sym_NUL = 94,
  anon_sym_SOH = 95,
  anon_sym_STX = 96,
  anon_sym_ETX = 97,
  anon_sym_EOT = 98,
  anon_sym_ENQ = 99,
  anon_sym_ACK = 100,
  anon_sym_BEL = 101,
  anon_sym_BS = 102,
  anon_sym_HT = 103,
  anon_sym_LF = 104,
  anon_sym_VT = 105,
  anon_sym_FF = 106,
  anon_sym_CR = 107,
  anon_sym_SO = 108,
  anon_sym_SI = 109,
  anon_sym_DLE = 110,
  anon_sym_DC1 = 111,
  anon_sym_DC2 = 112,
  anon_sym_DC3 = 113,
  anon_sym_DC4 = 114,
  anon_sym_NAK = 115,
  anon_sym_SYN = 116,
  anon_sym_ETB = 117,
  anon_sym_CAN = 118,
  anon_sym_EM = 119,
  anon_sym_SUB = 120,
  anon_sym_ESC = 121,
  anon_sym_FS = 122,
  anon_sym_GS = 123,
  anon_sym_RS = 124,
  anon_sym_US = 125,
  anon_sym_SP = 126,
  anon_sym_DEL = 127,
  sym__integer_literal = 128,
  sym__octal_literal = 129,
  sym__hexidecimal_literal = 130,
  sym_module = 131,
  sym_declarations = 132,
  sym_module_exports = 133,
  sym_export = 134,
  sym_import = 135,
  sym_import_specification = 136,
  sym__declaration = 137,
  sym_function_declaration = 138,
  sym_function_head = 139,
  sym_function_body = 140,
  sym__function_pattern = 141,
  sym_as_pattern = 142,
  sym_labels = 143,
  sym_label = 144,
  sym_wildcard = 145,
  sym__variable = 146,
  sym__symbol = 147,
  sym_qualified_variable_identifier = 148,
  sym__expression = 149,
  sym_foreign = 150,
  sym_foreign_import = 151,
  sym_calling_convention = 152,
  sym_safety = 153,
  sym_default = 154,
  sym_do_expression = 155,
  sym_statement_list = 156,
  sym__statement = 157,
  sym_type_class = 158,
  sym_general_declarations = 159,
  sym_type_class_instance = 160,
  sym__general_declaration = 161,
  sym_fixity = 162,
  sym__op = 163,
  sym_variable_symbol = 164,
  sym_constructor_symbol = 165,
  sym_type_signature = 166,
  sym_type = 167,
  sym__generic_type_constructor = 168,
  sym_tupling_constructor = 169,
  sym_tuple = 170,
  sym_list = 171,
  sym_parenthesized_constructor = 172,
  sym_algebraic_datatype = 173,
  sym_context = 174,
  sym_class = 175,
  sym_constructors = 176,
  sym_constructor = 177,
  sym_deriving = 178,
  sym_newtype = 179,
  sym_new_constructor = 180,
  sym_field = 181,
  sym_strict = 182,
  sym_type_synonym = 183,
  sym__literal = 184,
  sym__identifier = 185,
  sym_simple_type = 186,
  sym_variable_identifier = 187,
  sym_constructor_identifier = 188,
  sym__type_constructors = 189,
  sym_qualified_type_constructor = 190,
  sym_integer = 191,
  sym_char = 192,
  sym_string = 193,
  sym__gap = 194,
  sym__graphic = 195,
  sym__small = 196,
  sym__large = 197,
  sym__special = 198,
  sym__escape = 199,
  sym__char_escape = 200,
  sym__ascii = 201,
  sym__cntrl = 202,
  sym_fields = 203,
  aux_sym_module_repeat1 = 204,
  aux_sym_module_exports_repeat1 = 205,
  aux_sym_export_repeat1 = 206,
  aux_sym_import_specification_repeat1 = 207,
  aux_sym_function_head_repeat1 = 208,
  aux_sym_function_body_repeat1 = 209,
  aux_sym_labels_repeat1 = 210,
  aux_sym_statement_list_repeat1 = 211,
  aux_sym_type_class_repeat1 = 212,
  aux_sym_general_declarations_repeat1 = 213,
  aux_sym_fixity_repeat1 = 214,
  aux_sym_variable_symbol_repeat1 = 215,
  aux_sym_tupling_constructor_repeat1 = 216,
  aux_sym_tuple_repeat1 = 217,
  aux_sym_list_repeat1 = 218,
  aux_sym_context_repeat1 = 219,
  aux_sym_constructors_repeat1 = 220,
  aux_sym_constructor_repeat1 = 221,
  aux_sym_field_repeat1 = 222,
  aux_sym_qualified_type_constructor_repeat1 = 223,
  aux_sym_string_repeat1 = 224,
  aux_sym__escape_repeat1 = 225,
  aux_sym__escape_repeat2 = 226,
  aux_sym_fields_repeat1 = 227,
  alias_sym_type_constructor = 228,
  alias_sym_type_variable = 229,
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
  [anon_sym_BANG] = "!",
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
  [anon_sym_PIPE] = "|",
  [anon_sym_TILDE] = "~",
  [anon_sym_COLON] = ":",
  [anon_sym_BSLASH] = "\\",
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
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DASH_GT] = "->",
  [sym_unit_type] = "unit_type",
  [sym_list_constructor] = "list_constructor",
  [sym_function_constructor] = "function_constructor",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_data] = "data",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_deriving] = "deriving",
  [anon_sym_newtype] = "newtype",
  [anon_sym_type] = "type",
  [sym__variable_pattern] = "_variable_pattern",
  [sym__constructor_pattern] = "_constructor_pattern",
  [sym_module_identifier] = "module_identifier",
  [sym_comment] = "comment",
  [sym_float] = "float",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = "/[0-9]/",
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = "/[a-z]/",
  [sym__ascii_large] = "_ascii_large",
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
  [sym_function_declaration] = "function_declaration",
  [sym_function_head] = "function_head",
  [sym_function_body] = "function_body",
  [sym__function_pattern] = "_function_pattern",
  [sym_as_pattern] = "as_pattern",
  [sym_labels] = "labels",
  [sym_label] = "label",
  [sym_wildcard] = "wildcard",
  [sym__variable] = "_variable",
  [sym__symbol] = "_symbol",
  [sym_qualified_variable_identifier] = "qualified_variable_identifier",
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
  [sym_type] = "type",
  [sym__generic_type_constructor] = "_generic_type_constructor",
  [sym_tupling_constructor] = "tupling_constructor",
  [sym_tuple] = "tuple",
  [sym_list] = "list",
  [sym_parenthesized_constructor] = "parenthesized_constructor",
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
  [sym_variable_identifier] = "variable_identifier",
  [sym_constructor_identifier] = "constructor_identifier",
  [sym__type_constructors] = "_type_constructors",
  [sym_qualified_type_constructor] = "qualified_type_constructor",
  [sym_integer] = "integer",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym__gap] = "_gap",
  [sym__graphic] = "_graphic",
  [sym__small] = "_small",
  [sym__large] = "_large",
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
  [aux_sym_function_head_repeat1] = "function_head_repeat1",
  [aux_sym_function_body_repeat1] = "function_body_repeat1",
  [aux_sym_labels_repeat1] = "labels_repeat1",
  [aux_sym_statement_list_repeat1] = "statement_list_repeat1",
  [aux_sym_type_class_repeat1] = "type_class_repeat1",
  [aux_sym_general_declarations_repeat1] = "general_declarations_repeat1",
  [aux_sym_fixity_repeat1] = "fixity_repeat1",
  [aux_sym_variable_symbol_repeat1] = "variable_symbol_repeat1",
  [aux_sym_tupling_constructor_repeat1] = "tupling_constructor_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_context_repeat1] = "context_repeat1",
  [aux_sym_constructors_repeat1] = "constructors_repeat1",
  [aux_sym_constructor_repeat1] = "constructor_repeat1",
  [aux_sym_field_repeat1] = "field_repeat1",
  [aux_sym_qualified_type_constructor_repeat1] = "qualified_type_constructor_repeat1",
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
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
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_unit_type] = {
    .visible = true,
    .named = true,
  },
  [sym_list_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_function_constructor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_deriving] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_newtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [sym__variable_pattern] = {
    .visible = false,
    .named = true,
  },
  [sym__constructor_pattern] = {
    .visible = false,
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
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_head] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym__function_pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_as_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_labels] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard] = {
    .visible = true,
    .named = true,
  },
  [sym__variable] = {
    .visible = false,
    .named = true,
  },
  [sym__symbol] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_variable_identifier] = {
    .visible = true,
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
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__generic_type_constructor] = {
    .visible = false,
    .named = true,
  },
  [sym_tupling_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_constructor] = {
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
  [sym_variable_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__type_constructors] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_type_constructor] = {
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
  [aux_sym_function_head_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_labels_repeat1] = {
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
  [aux_sym_tupling_constructor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
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
  [aux_sym_qualified_type_constructor_repeat1] = {
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

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
        ADVANCE(96);
      if (lookahead == '\r')
        ADVANCE(97);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(100);
      if (lookahead == '$')
        ADVANCE(101);
      if (lookahead == '%')
        ADVANCE(102);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(113);
      if (lookahead == '.')
        ADVANCE(115);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(118);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(122);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == 'G')
        ADVANCE(127);
      if (lookahead == 'H')
        ADVANCE(129);
      if (lookahead == 'L')
        ADVANCE(131);
      if (lookahead == 'N')
        ADVANCE(133);
      if (lookahead == 'R')
        ADVANCE(138);
      if (lookahead == 'S')
        ADVANCE(140);
      if (lookahead == 'U')
        ADVANCE(151);
      if (lookahead == 'V')
        ADVANCE(153);
      if (lookahead == '[')
        ADVANCE(155);
      if (lookahead == '\\')
        SKIP(157);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(160);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == 'n')
        ADVANCE(162);
      if (lookahead == 'r')
        ADVANCE(163);
      if (lookahead == 't')
        ADVANCE(164);
      if (lookahead == 'v')
        ADVANCE(165);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
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
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(24);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(38);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'G')
        ADVANCE(43);
      if (lookahead == 'H')
        ADVANCE(45);
      if (lookahead == 'L')
        ADVANCE(47);
      if (lookahead == 'N')
        ADVANCE(49);
      if (lookahead == 'R')
        ADVANCE(54);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'U')
        ADVANCE(67);
      if (lookahead == 'V')
        ADVANCE(69);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == '\\')
        ADVANCE(73);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == 'n')
        ADVANCE(78);
      if (lookahead == 'r')
        ADVANCE(79);
      if (lookahead == 't')
        ADVANCE(80);
      if (lookahead == 'v')
        ADVANCE(81);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
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
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_unit_type);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 19:
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_function_constructor);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(26);
      if (lookahead != 0)
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\r')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead != 0)
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(39);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_GS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_HT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(52);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 50:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(51);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_NAK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 52:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_NUL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(55);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'I')
        ADVANCE(57);
      if (lookahead == 'O')
        ADVANCE(58);
      if (lookahead == 'P')
        ADVANCE(60);
      if (lookahead == 'T')
        ADVANCE(61);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'Y')
        ADVANCE(65);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SI);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'H')
        ADVANCE(59);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SOH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SP);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 61:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'X')
        ADVANCE(62);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_STX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 63:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 65:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SYN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(68);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_US);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(70);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_VT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ']')
        ADVANCE(72);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_list_constructor);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 73:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(88);
      if (lookahead == 'E')
        ADVANCE(89);
      if (lookahead == 'e')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(89);
      if (lookahead == 'e')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 89:
      if (lookahead == '+')
        ADVANCE(90);
      if (lookahead == '-')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(91);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 90:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(91);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(91);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 92:
      if (lookahead == '}')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(91);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(88);
      if (lookahead == 'E')
        ADVANCE(89);
      if (lookahead == 'e')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__vertical_tab);
      END_STATE();
    case 97:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == 11)
        ADVANCE(96);
      if (lookahead == '\r')
        ADVANCE(97);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(100);
      if (lookahead == '$')
        ADVANCE(101);
      if (lookahead == '%')
        ADVANCE(102);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(113);
      if (lookahead == '.')
        ADVANCE(115);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(118);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(122);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == 'G')
        ADVANCE(127);
      if (lookahead == 'H')
        ADVANCE(129);
      if (lookahead == 'L')
        ADVANCE(131);
      if (lookahead == 'N')
        ADVANCE(133);
      if (lookahead == 'R')
        ADVANCE(138);
      if (lookahead == 'S')
        ADVANCE(140);
      if (lookahead == 'U')
        ADVANCE(151);
      if (lookahead == 'V')
        ADVANCE(153);
      if (lookahead == '[')
        ADVANCE(155);
      if (lookahead == '\\')
        SKIP(157);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(160);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == 'n')
        ADVANCE(162);
      if (lookahead == 'r')
        ADVANCE(163);
      if (lookahead == 't')
        ADVANCE(164);
      if (lookahead == 'v')
        ADVANCE(165);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(106);
      if (lookahead == '-')
        ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_unit_type);
      END_STATE();
    case 107:
      if (lookahead == '>')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == ')')
        ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_function_constructor);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>')
        ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(134);
      if (lookahead == 'U')
        ADVANCE(136);
      END_STATE();
    case 134:
      if (lookahead == 'K')
        ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 136:
      if (lookahead == 'L')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'I')
        ADVANCE(141);
      if (lookahead == 'O')
        ADVANCE(142);
      if (lookahead == 'P')
        ADVANCE(144);
      if (lookahead == 'T')
        ADVANCE(145);
      if (lookahead == 'U')
        ADVANCE(147);
      if (lookahead == 'Y')
        ADVANCE(149);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 145:
      if (lookahead == 'X')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 147:
      if (lookahead == 'B')
        ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 149:
      if (lookahead == 'N')
        ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']')
        ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_list_constructor);
      END_STATE();
    case 157:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(172);
      if (lookahead == 'E')
        ADVANCE(173);
      if (lookahead == 'e')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E')
        ADVANCE(173);
      if (lookahead == 'e')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(172);
      END_STATE();
    case 173:
      if (lookahead == '+')
        ADVANCE(174);
      if (lookahead == '-')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(175);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(172);
      if (lookahead == 'E')
        ADVANCE(173);
      if (lookahead == 'e')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__ascii_large);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      END_STATE();
    case 179:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(180);
      if (lookahead == '\r')
        ADVANCE(250);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(259);
      if (lookahead == 'c')
        ADVANCE(260);
      if (lookahead == 'd')
        ADVANCE(266);
      if (lookahead == 'f')
        ADVANCE(277);
      if (lookahead == 'i')
        ADVANCE(284);
      if (lookahead == 'm')
        ADVANCE(302);
      if (lookahead == 'n')
        ADVANCE(308);
      if (lookahead == 't')
        ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(179);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      END_STATE();
    case 180:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(180);
      if (lookahead == '\r')
        ADVANCE(180);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '0')
        ADVANCE(182);
      if (lookahead == ':')
        ADVANCE(187);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '\\')
        ADVANCE(189);
      if (lookahead == 'c')
        ADVANCE(190);
      if (lookahead == 'd')
        ADVANCE(196);
      if (lookahead == 'f')
        ADVANCE(207);
      if (lookahead == 'i')
        ADVANCE(214);
      if (lookahead == 'm')
        ADVANCE(232);
      if (lookahead == 'n')
        ADVANCE(238);
      if (lookahead == 't')
        ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(180);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      ADVANCE(8);
      END_STATE();
    case 181:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(88);
      if (lookahead == 'E')
        ADVANCE(89);
      if (lookahead == 'O')
        ADVANCE(183);
      if (lookahead == 'X')
        ADVANCE(185);
      if (lookahead == 'e')
        ADVANCE(89);
      if (lookahead == 'o')
        ADVANCE(183);
      if (lookahead == 'x')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 183:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(184);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(184);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 185:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(186);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(186);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 187:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 189:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(180);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'e')
        ADVANCE(200);
      if (lookahead == 'o')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(215);
      if (lookahead == 'n')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 's')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(249);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(249);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 250:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(180);
      if (lookahead == '\r')
        ADVANCE(250);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(259);
      if (lookahead == 'c')
        ADVANCE(260);
      if (lookahead == 'd')
        ADVANCE(266);
      if (lookahead == 'f')
        ADVANCE(277);
      if (lookahead == 'i')
        ADVANCE(284);
      if (lookahead == 'm')
        ADVANCE(302);
      if (lookahead == 'n')
        ADVANCE(308);
      if (lookahead == 't')
        ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(179);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      END_STATE();
    case 251:
      if (lookahead == '-')
        ADVANCE(29);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(172);
      if (lookahead == 'E')
        ADVANCE(173);
      if (lookahead == 'O')
        ADVANCE(253);
      if (lookahead == 'X')
        ADVANCE(255);
      if (lookahead == 'e')
        ADVANCE(173);
      if (lookahead == 'o')
        ADVANCE(253);
      if (lookahead == 'x')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
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
        ADVANCE(119);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 259:
      if (lookahead == 'n')
        SKIP(179);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'l')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'a')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 's')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 's')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'a')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(270);
      if (lookahead == 'o')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 't')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'a')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'f')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'a')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'u')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'l')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 't')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'o')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'r')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'e')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'i')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'g')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'n')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'm')
        ADVANCE(285);
      if (lookahead == 'n')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'p')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'o')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'r')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 't')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'f')
        ADVANCE(291);
      if (lookahead == 's')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'i')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'x')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'l')
        ADVANCE(294);
      if (lookahead == 'r')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 't')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'a')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'n')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'c')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'e')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'o')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'd')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'u')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'l')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'e')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'e')
        ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'w')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 't')
        ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'y')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'p')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'e')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'y')
        ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'p')
        ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'e')
        ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(319);
      END_STATE();
    case 320:
      if (lookahead == '\n')
        ADVANCE(321);
      if (lookahead == '\r')
        ADVANCE(334);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(336);
      if (lookahead == 'q')
        ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(320);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(346);
      END_STATE();
    case 321:
      if (lookahead == '\n')
        ADVANCE(321);
      if (lookahead == '\r')
        ADVANCE(321);
      if (lookahead == '(')
        ADVANCE(322);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(323);
      if (lookahead == 'q')
        ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(333);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 323:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(321);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 324:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(325);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 325:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(326);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 326:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(327);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 327:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(328);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 328:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(329);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 329:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(330);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 330:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(331);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 331:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(332);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(333);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(333);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 334:
      if (lookahead == '\n')
        ADVANCE(321);
      if (lookahead == '\r')
        ADVANCE(334);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(336);
      if (lookahead == 'q')
        ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(320);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(346);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 336:
      if (lookahead == 'n')
        SKIP(320);
      END_STATE();
    case 337:
      if (lookahead == 'u')
        ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == 'a')
        ADVANCE(339);
      END_STATE();
    case 339:
      if (lookahead == 'l')
        ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == 'i')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 'f')
        ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == 'i')
        ADVANCE(343);
      END_STATE();
    case 343:
      if (lookahead == 'e')
        ADVANCE(344);
      END_STATE();
    case 344:
      if (lookahead == 'd')
        ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_qualified);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(346);
      if (lookahead == '.')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(346);
      END_STATE();
    case 347:
      if (lookahead == '\n')
        ADVANCE(348);
      if (lookahead == '\r')
        ADVANCE(398);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(400);
      if (lookahead == '\\')
        SKIP(401);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == 'c')
        ADVANCE(402);
      if (lookahead == 'd')
        ADVANCE(415);
      if (lookahead == 'e')
        ADVANCE(421);
      if (lookahead == 'i')
        ADVANCE(427);
      if (lookahead == 'j')
        ADVANCE(433);
      if (lookahead == 's')
        ADVANCE(436);
      if (lookahead == 'w')
        ADVANCE(443);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(347);
      END_STATE();
    case 348:
      if (lookahead == '\n')
        ADVANCE(348);
      if (lookahead == '\r')
        ADVANCE(348);
      if (lookahead == '(')
        ADVANCE(322);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(349);
      if (lookahead == ':')
        ADVANCE(187);
      if (lookahead == '=')
        ADVANCE(350);
      if (lookahead == '\\')
        ADVANCE(351);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == 'c')
        ADVANCE(352);
      if (lookahead == 'd')
        ADVANCE(365);
      if (lookahead == 'e')
        ADVANCE(371);
      if (lookahead == 'i')
        ADVANCE(377);
      if (lookahead == 'j')
        ADVANCE(383);
      if (lookahead == 's')
        ADVANCE(386);
      if (lookahead == 'w')
        ADVANCE(393);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(348);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 349:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 350:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(39);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 351:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(348);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 352:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(353);
      if (lookahead == 'p')
        ADVANCE(357);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 353:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(354);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 354:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(355);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 355:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(356);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_ccall);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 357:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(358);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 358:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(359);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 359:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(360);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 360:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 361:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(362);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 362:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(363);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 363:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(364);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_cplusplus);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 365:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(366);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 366:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(367);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 367:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(368);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 368:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 369:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(370);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_dotnet);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 371:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 372:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(373);
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
      if (lookahead == 'r')
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 375:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(376);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_foreign_export);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 377:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 378:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(379);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 379:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(380);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 380:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(381);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 381:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(382);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 383:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(384);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 384:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(385);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_jvm);
      if (lookahead == '-')
        ADVANCE(4);
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
      if (lookahead == 'd')
        ADVANCE(388);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 388:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(389);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 389:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(390);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 390:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(391);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 391:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(392);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_stdcall);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 393:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(394);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 394:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(395);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 395:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(396);
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
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 398:
      if (lookahead == '\n')
        ADVANCE(348);
      if (lookahead == '\r')
        ADVANCE(398);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(400);
      if (lookahead == '\\')
        SKIP(401);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == 'c')
        ADVANCE(402);
      if (lookahead == 'd')
        ADVANCE(415);
      if (lookahead == 'e')
        ADVANCE(421);
      if (lookahead == 'i')
        ADVANCE(427);
      if (lookahead == 'j')
        ADVANCE(433);
      if (lookahead == 's')
        ADVANCE(436);
      if (lookahead == 'w')
        ADVANCE(443);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(347);
      END_STATE();
    case 399:
      if (lookahead == '-')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(114);
      END_STATE();
    case 400:
      if (lookahead == '>')
        ADVANCE(123);
      END_STATE();
    case 401:
      if (lookahead == 'n')
        SKIP(347);
      END_STATE();
    case 402:
      if (lookahead == 'c')
        ADVANCE(403);
      if (lookahead == 'p')
        ADVANCE(407);
      END_STATE();
    case 403:
      if (lookahead == 'a')
        ADVANCE(404);
      END_STATE();
    case 404:
      if (lookahead == 'l')
        ADVANCE(405);
      END_STATE();
    case 405:
      if (lookahead == 'l')
        ADVANCE(406);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_ccall);
      END_STATE();
    case 407:
      if (lookahead == 'l')
        ADVANCE(408);
      END_STATE();
    case 408:
      if (lookahead == 'u')
        ADVANCE(409);
      END_STATE();
    case 409:
      if (lookahead == 's')
        ADVANCE(410);
      END_STATE();
    case 410:
      if (lookahead == 'p')
        ADVANCE(411);
      END_STATE();
    case 411:
      if (lookahead == 'l')
        ADVANCE(412);
      END_STATE();
    case 412:
      if (lookahead == 'u')
        ADVANCE(413);
      END_STATE();
    case 413:
      if (lookahead == 's')
        ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_cplusplus);
      END_STATE();
    case 415:
      if (lookahead == 'o')
        ADVANCE(416);
      END_STATE();
    case 416:
      if (lookahead == 't')
        ADVANCE(417);
      END_STATE();
    case 417:
      if (lookahead == 'n')
        ADVANCE(418);
      END_STATE();
    case 418:
      if (lookahead == 'e')
        ADVANCE(419);
      END_STATE();
    case 419:
      if (lookahead == 't')
        ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_dotnet);
      END_STATE();
    case 421:
      if (lookahead == 'x')
        ADVANCE(422);
      END_STATE();
    case 422:
      if (lookahead == 'p')
        ADVANCE(423);
      END_STATE();
    case 423:
      if (lookahead == 'o')
        ADVANCE(424);
      END_STATE();
    case 424:
      if (lookahead == 'r')
        ADVANCE(425);
      END_STATE();
    case 425:
      if (lookahead == 't')
        ADVANCE(426);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_foreign_export);
      END_STATE();
    case 427:
      if (lookahead == 'm')
        ADVANCE(428);
      END_STATE();
    case 428:
      if (lookahead == 'p')
        ADVANCE(429);
      END_STATE();
    case 429:
      if (lookahead == 'o')
        ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == 'r')
        ADVANCE(431);
      END_STATE();
    case 431:
      if (lookahead == 't')
        ADVANCE(432);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 433:
      if (lookahead == 'v')
        ADVANCE(434);
      END_STATE();
    case 434:
      if (lookahead == 'm')
        ADVANCE(435);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_jvm);
      END_STATE();
    case 436:
      if (lookahead == 't')
        ADVANCE(437);
      END_STATE();
    case 437:
      if (lookahead == 'd')
        ADVANCE(438);
      END_STATE();
    case 438:
      if (lookahead == 'c')
        ADVANCE(439);
      END_STATE();
    case 439:
      if (lookahead == 'a')
        ADVANCE(440);
      END_STATE();
    case 440:
      if (lookahead == 'l')
        ADVANCE(441);
      END_STATE();
    case 441:
      if (lookahead == 'l')
        ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_stdcall);
      END_STATE();
    case 443:
      if (lookahead == 'h')
        ADVANCE(444);
      END_STATE();
    case 444:
      if (lookahead == 'e')
        ADVANCE(445);
      END_STATE();
    case 445:
      if (lookahead == 'r')
        ADVANCE(446);
      END_STATE();
    case 446:
      if (lookahead == 'e')
        ADVANCE(447);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 448:
      if (lookahead == '\n')
        ADVANCE(449);
      if (lookahead == '\r')
        ADVANCE(451);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(452);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(448);
      END_STATE();
    case 449:
      if (lookahead == '\n')
        ADVANCE(449);
      if (lookahead == '\r')
        ADVANCE(449);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(450);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(449);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 450:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(449);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 451:
      if (lookahead == '\n')
        ADVANCE(449);
      if (lookahead == '\r')
        ADVANCE(451);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(452);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(448);
      END_STATE();
    case 452:
      if (lookahead == 'n')
        SKIP(448);
      END_STATE();
    case 453:
      if (lookahead == '\n')
        ADVANCE(454);
      if (lookahead == '\r')
        ADVANCE(457);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == '.')
        ADVANCE(458);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(459);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(453);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 454:
      if (lookahead == '\n')
        ADVANCE(454);
      if (lookahead == '\r')
        ADVANCE(454);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(322);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(349);
      if (lookahead == '.')
        ADVANCE(455);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '\\')
        ADVANCE(456);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 455:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 456:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(454);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 457:
      if (lookahead == '\n')
        ADVANCE(454);
      if (lookahead == '\r')
        ADVANCE(457);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == '.')
        ADVANCE(458);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(459);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(453);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 458:
      if (lookahead == '.')
        ADVANCE(116);
      END_STATE();
    case 459:
      if (lookahead == 'n')
        SKIP(453);
      END_STATE();
    case 460:
      if (lookahead == '\n')
        ADVANCE(461);
      if (lookahead == '\r')
        ADVANCE(468);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '#')
        ADVANCE(100);
      if (lookahead == '$')
        ADVANCE(101);
      if (lookahead == '%')
        ADVANCE(102);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '.')
        ADVANCE(470);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(471);
      if (lookahead == ':')
        ADVANCE(473);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(474);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(460);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(472);
      END_STATE();
    case 461:
      if (lookahead == '\n')
        ADVANCE(461);
      if (lookahead == '\r')
        ADVANCE(461);
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
        ADVANCE(322);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(462);
      if (lookahead == '.')
        ADVANCE(463);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(464);
      if (lookahead == ':')
        ADVANCE(466);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(467);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(461);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(465);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'O')
        ADVANCE(183);
      if (lookahead == 'X')
        ADVANCE(185);
      if (lookahead == 'o')
        ADVANCE(183);
      if (lookahead == 'x')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(465);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(465);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(461);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 468:
      if (lookahead == '\n')
        ADVANCE(461);
      if (lookahead == '\r')
        ADVANCE(468);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '#')
        ADVANCE(100);
      if (lookahead == '$')
        ADVANCE(101);
      if (lookahead == '%')
        ADVANCE(102);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '.')
        ADVANCE(470);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(471);
      if (lookahead == ':')
        ADVANCE(473);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(474);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(460);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(472);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(29);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 471:
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
        ADVANCE(472);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 475:
      if (lookahead == '\n')
        ADVANCE(476);
      if (lookahead == '\r')
        ADVANCE(479);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(480);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(475);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 476:
      if (lookahead == '\n')
        ADVANCE(476);
      if (lookahead == '\r')
        ADVANCE(476);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(349);
      if (lookahead == '0')
        ADVANCE(182);
      if (lookahead == ':')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(477);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(476);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 477:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(476);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 479:
      if (lookahead == '\n')
        ADVANCE(476);
      if (lookahead == '\r')
        ADVANCE(479);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(480);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(475);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 480:
      if (lookahead == 'n')
        SKIP(475);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 482:
      if (lookahead == '\n')
        ADVANCE(483);
      if (lookahead == '\r')
        ADVANCE(485);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(486);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(482);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 483:
      if (lookahead == '\n')
        ADVANCE(483);
      if (lookahead == '\r')
        ADVANCE(483);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == ':')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(483);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 484:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(483);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 485:
      if (lookahead == '\n')
        ADVANCE(483);
      if (lookahead == '\r')
        ADVANCE(485);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(486);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(482);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 486:
      if (lookahead == 'n')
        SKIP(482);
      END_STATE();
    case 487:
      if (lookahead == '\n')
        ADVANCE(488);
      if (lookahead == '\r')
        ADVANCE(490);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(491);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(487);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 488:
      if (lookahead == '\n')
        ADVANCE(488);
      if (lookahead == '\r')
        ADVANCE(488);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '0')
        ADVANCE(182);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(488);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 489:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(488);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 490:
      if (lookahead == '\n')
        ADVANCE(488);
      if (lookahead == '\r')
        ADVANCE(490);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(491);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(487);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 491:
      if (lookahead == 'n')
        SKIP(487);
      END_STATE();
    case 492:
      if (lookahead == '\t')
        SKIP(492);
      if (lookahead == '\n')
        ADVANCE(493);
      if (lookahead == '\r')
        ADVANCE(498);
      if (lookahead == ' ')
        ADVANCE(499);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(100);
      if (lookahead == '$')
        ADVANCE(101);
      if (lookahead == '%')
        ADVANCE(102);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '.')
        ADVANCE(470);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(473);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '[')
        ADVANCE(500);
      if (lookahead == '\\')
        ADVANCE(474);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(160);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 493:
      if (lookahead == '\t')
        ADVANCE(493);
      if (lookahead == '\n')
        ADVANCE(493);
      if (lookahead == '\r')
        ADVANCE(493);
      if (lookahead == ' ')
        ADVANCE(494);
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
        ADVANCE(322);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(462);
      if (lookahead == '.')
        ADVANCE(463);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(466);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(495);
      if (lookahead == '\\')
        ADVANCE(496);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(493);
      if (lookahead == '\n')
        ADVANCE(493);
      if (lookahead == '\r')
        ADVANCE(493);
      if (lookahead == ' ')
        ADVANCE(494);
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
        ADVANCE(322);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(462);
      if (lookahead == '.')
        ADVANCE(463);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(466);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(495);
      if (lookahead == '\\')
        ADVANCE(496);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(493);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 498:
      if (lookahead == '\t')
        SKIP(492);
      if (lookahead == '\n')
        ADVANCE(493);
      if (lookahead == '\r')
        ADVANCE(498);
      if (lookahead == ' ')
        ADVANCE(499);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(100);
      if (lookahead == '$')
        ADVANCE(101);
      if (lookahead == '%')
        ADVANCE(102);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '.')
        ADVANCE(470);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(473);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '[')
        ADVANCE(500);
      if (lookahead == '\\')
        ADVANCE(474);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(160);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 502:
      if (lookahead == '\t')
        ADVANCE(503);
      if (lookahead == '\n')
        ADVANCE(504);
      if (lookahead == 11)
        ADVANCE(96);
      if (lookahead == '\r')
        ADVANCE(509);
      if (lookahead == ' ')
        ADVANCE(499);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(100);
      if (lookahead == '$')
        ADVANCE(101);
      if (lookahead == '%')
        ADVANCE(102);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '.')
        ADVANCE(470);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(473);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '[')
        ADVANCE(500);
      if (lookahead == '\\')
        ADVANCE(474);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(160);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(501);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(505);
      if (lookahead == '\n')
        ADVANCE(504);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(506);
      if (lookahead == ' ')
        ADVANCE(507);
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
        ADVANCE(322);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(462);
      if (lookahead == '.')
        ADVANCE(463);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(466);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(495);
      if (lookahead == '\\')
        ADVANCE(508);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(497);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(505);
      if (lookahead == '\n')
        ADVANCE(504);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(506);
      if (lookahead == ' ')
        ADVANCE(507);
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
        ADVANCE(322);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(462);
      if (lookahead == '.')
        ADVANCE(463);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(466);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(495);
      if (lookahead == '\\')
        ADVANCE(508);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(497);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 506:
      if (lookahead == '\t')
        ADVANCE(505);
      if (lookahead == '\n')
        ADVANCE(504);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(506);
      if (lookahead == ' ')
        ADVANCE(507);
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
        ADVANCE(322);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(462);
      if (lookahead == '.')
        ADVANCE(463);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(466);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(495);
      if (lookahead == '\\')
        ADVANCE(508);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(497);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(505);
      if (lookahead == '\n')
        ADVANCE(504);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(506);
      if (lookahead == ' ')
        ADVANCE(507);
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
        ADVANCE(322);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(462);
      if (lookahead == '.')
        ADVANCE(463);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(466);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(495);
      if (lookahead == '\\')
        ADVANCE(508);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(497);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(506);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 509:
      if (lookahead == '\t')
        ADVANCE(503);
      if (lookahead == '\n')
        ADVANCE(504);
      if (lookahead == 11)
        ADVANCE(96);
      if (lookahead == '\r')
        ADVANCE(509);
      if (lookahead == ' ')
        ADVANCE(499);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(100);
      if (lookahead == '$')
        ADVANCE(101);
      if (lookahead == '%')
        ADVANCE(102);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '.')
        ADVANCE(470);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(473);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '[')
        ADVANCE(500);
      if (lookahead == '\\')
        ADVANCE(474);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(160);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(501);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 510:
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == '\r')
        ADVANCE(513);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(514);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(510);
      END_STATE();
    case 511:
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == '\r')
        ADVANCE(511);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(512);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(511);
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
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(514);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(510);
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
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(519);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(515);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 516:
      if (lookahead == '\n')
        ADVANCE(516);
      if (lookahead == '\r')
        ADVANCE(516);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '0')
        ADVANCE(182);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(517);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(516);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
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
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(519);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(515);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
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
        ADVANCE(251);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(120);
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
        ADVANCE(181);
      if (lookahead == ':')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(36);
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
        ADVANCE(251);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(120);
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
      if (lookahead == '\n')
        ADVANCE(526);
      if (lookahead == '\r')
        ADVANCE(528);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(529);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(525);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 526:
      if (lookahead == '\n')
        ADVANCE(526);
      if (lookahead == '\r')
        ADVANCE(526);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '0')
        ADVANCE(182);
      if (lookahead == ':')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(527);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(526);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
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
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(529);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(525);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 529:
      if (lookahead == 'n')
        SKIP(525);
      END_STATE();
    case 530:
      if (lookahead == '\n')
        ADVANCE(531);
      if (lookahead == '\r')
        ADVANCE(533);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(534);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(530);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 531:
      if (lookahead == '\n')
        ADVANCE(531);
      if (lookahead == '\r')
        ADVANCE(531);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '0')
        ADVANCE(182);
      if (lookahead == ':')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(531);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 532:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(531);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 533:
      if (lookahead == '\n')
        ADVANCE(531);
      if (lookahead == '\r')
        ADVANCE(533);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(534);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(530);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 534:
      if (lookahead == 'n')
        SKIP(530);
      END_STATE();
    case 535:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(536);
      if (lookahead == '\r')
        ADVANCE(538);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == '\\')
        SKIP(539);
      if (lookahead == 'c')
        ADVANCE(260);
      if (lookahead == 'd')
        ADVANCE(266);
      if (lookahead == 'f')
        ADVANCE(277);
      if (lookahead == 'i')
        ADVANCE(284);
      if (lookahead == 'n')
        ADVANCE(308);
      if (lookahead == 't')
        ADVANCE(315);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(535);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      END_STATE();
    case 536:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(536);
      if (lookahead == '\r')
        ADVANCE(536);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '0')
        ADVANCE(182);
      if (lookahead == '\\')
        ADVANCE(537);
      if (lookahead == 'c')
        ADVANCE(190);
      if (lookahead == 'd')
        ADVANCE(196);
      if (lookahead == 'f')
        ADVANCE(207);
      if (lookahead == 'i')
        ADVANCE(214);
      if (lookahead == 'n')
        ADVANCE(238);
      if (lookahead == 't')
        ADVANCE(245);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(536);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      ADVANCE(8);
      END_STATE();
    case 537:
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
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == '\\')
        SKIP(539);
      if (lookahead == 'c')
        ADVANCE(260);
      if (lookahead == 'd')
        ADVANCE(266);
      if (lookahead == 'f')
        ADVANCE(277);
      if (lookahead == 'i')
        ADVANCE(284);
      if (lookahead == 'n')
        ADVANCE(308);
      if (lookahead == 't')
        ADVANCE(315);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(535);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      END_STATE();
    case 539:
      if (lookahead == 'n')
        SKIP(535);
      END_STATE();
    case 540:
      if (lookahead == '\n')
        ADVANCE(541);
      if (lookahead == '\r')
        ADVANCE(551);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(552);
      if (lookahead == 'a')
        ADVANCE(553);
      if (lookahead == 'h')
        ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(540);
      END_STATE();
    case 541:
      if (lookahead == '\n')
        ADVANCE(541);
      if (lookahead == '\r')
        ADVANCE(541);
      if (lookahead == '(')
        ADVANCE(322);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(542);
      if (lookahead == 'a')
        ADVANCE(543);
      if (lookahead == 'h')
        ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(541);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 542:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(541);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 543:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(544);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 545:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(546);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 546:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(547);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 547:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(548);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 548:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(549);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 549:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(550);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 551:
      if (lookahead == '\n')
        ADVANCE(541);
      if (lookahead == '\r')
        ADVANCE(551);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(552);
      if (lookahead == 'a')
        ADVANCE(553);
      if (lookahead == 'h')
        ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(540);
      END_STATE();
    case 552:
      if (lookahead == 'n')
        SKIP(540);
      END_STATE();
    case 553:
      if (lookahead == 's')
        ADVANCE(554);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 555:
      if (lookahead == 'i')
        ADVANCE(556);
      END_STATE();
    case 556:
      if (lookahead == 'd')
        ADVANCE(557);
      END_STATE();
    case 557:
      if (lookahead == 'i')
        ADVANCE(558);
      END_STATE();
    case 558:
      if (lookahead == 'n')
        ADVANCE(559);
      END_STATE();
    case 559:
      if (lookahead == 'g')
        ADVANCE(560);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 561:
      if (lookahead == '\n')
        ADVANCE(562);
      if (lookahead == '\r')
        ADVANCE(565);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == '\\')
        SKIP(566);
      if (lookahead == 'd')
        ADVANCE(567);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(561);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 562:
      if (lookahead == '\n')
        ADVANCE(562);
      if (lookahead == '\r')
        ADVANCE(562);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '0')
        ADVANCE(182);
      if (lookahead == '\\')
        ADVANCE(563);
      if (lookahead == 'd')
        ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(562);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 563:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(562);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 565:
      if (lookahead == '\n')
        ADVANCE(562);
      if (lookahead == '\r')
        ADVANCE(565);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == '\\')
        SKIP(566);
      if (lookahead == 'd')
        ADVANCE(567);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(561);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 566:
      if (lookahead == 'n')
        SKIP(561);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'o')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 568:
      if (lookahead == '\n')
        ADVANCE(569);
      if (lookahead == '\r')
        ADVANCE(571);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == '\\')
        SKIP(572);
      if (lookahead == 'd')
        ADVANCE(567);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(568);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 569:
      if (lookahead == '\n')
        ADVANCE(569);
      if (lookahead == '\r')
        ADVANCE(569);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '0')
        ADVANCE(182);
      if (lookahead == '\\')
        ADVANCE(570);
      if (lookahead == 'd')
        ADVANCE(564);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(569);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 570:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(569);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 571:
      if (lookahead == '\n')
        ADVANCE(569);
      if (lookahead == '\r')
        ADVANCE(571);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == '\\')
        SKIP(572);
      if (lookahead == 'd')
        ADVANCE(567);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(568);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 572:
      if (lookahead == 'n')
        SKIP(568);
      END_STATE();
    case 573:
      if (lookahead == '\n')
        ADVANCE(574);
      if (lookahead == '\r')
        ADVANCE(581);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(582);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == 'w')
        ADVANCE(583);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(573);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 574:
      if (lookahead == '\n')
        ADVANCE(574);
      if (lookahead == '\r')
        ADVANCE(574);
      if (lookahead == '(')
        ADVANCE(322);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == ':')
        ADVANCE(187);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '\\')
        ADVANCE(575);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == 'w')
        ADVANCE(576);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(574);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 575:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(574);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 581:
      if (lookahead == '\n')
        ADVANCE(574);
      if (lookahead == '\r')
        ADVANCE(581);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(582);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == 'w')
        ADVANCE(583);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(573);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 582:
      if (lookahead == 'n')
        SKIP(573);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'h')
        ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'e')
        ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'r')
        ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'e')
        ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 588:
      if (lookahead == '\n')
        ADVANCE(589);
      if (lookahead == '\r')
        ADVANCE(591);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '=')
        ADVANCE(400);
      if (lookahead == '\\')
        SKIP(592);
      if (lookahead == 'w')
        ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(588);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 589:
      if (lookahead == '\n')
        ADVANCE(589);
      if (lookahead == '\r')
        ADVANCE(589);
      if (lookahead == '(')
        ADVANCE(322);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '=')
        ADVANCE(350);
      if (lookahead == '\\')
        ADVANCE(590);
      if (lookahead == 'w')
        ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(589);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
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
        ADVANCE(335);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '=')
        ADVANCE(400);
      if (lookahead == '\\')
        SKIP(592);
      if (lookahead == 'w')
        ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(588);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 592:
      if (lookahead == 'n')
        SKIP(588);
      END_STATE();
    case 593:
      if (lookahead == '\n')
        ADVANCE(594);
      if (lookahead == '\r')
        ADVANCE(596);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '#')
        ADVANCE(100);
      if (lookahead == '$')
        ADVANCE(101);
      if (lookahead == '%')
        ADVANCE(102);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '.')
        ADVANCE(470);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(473);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(474);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(593);
      END_STATE();
    case 594:
      if (lookahead == '\n')
        ADVANCE(594);
      if (lookahead == '\r')
        ADVANCE(594);
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
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(462);
      if (lookahead == '.')
        ADVANCE(463);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(466);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(595);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(594);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(594);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 596:
      if (lookahead == '\n')
        ADVANCE(594);
      if (lookahead == '\r')
        ADVANCE(596);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '#')
        ADVANCE(100);
      if (lookahead == '$')
        ADVANCE(101);
      if (lookahead == '%')
        ADVANCE(102);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '.')
        ADVANCE(470);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(473);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(474);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(593);
      END_STATE();
    case 597:
      if (lookahead == '\n')
        ADVANCE(598);
      if (lookahead == '\r')
        ADVANCE(600);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(601);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(597);
      END_STATE();
    case 598:
      if (lookahead == '\n')
        ADVANCE(598);
      if (lookahead == '\r')
        ADVANCE(598);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(599);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(598);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 599:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(598);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 600:
      if (lookahead == '\n')
        ADVANCE(598);
      if (lookahead == '\r')
        ADVANCE(600);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(601);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(597);
      END_STATE();
    case 601:
      if (lookahead == 'n')
        SKIP(597);
      END_STATE();
    case 602:
      if (lookahead == '\n')
        ADVANCE(603);
      if (lookahead == '\r')
        ADVANCE(613);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(614);
      if (lookahead == 'd')
        ADVANCE(615);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(602);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 603:
      if (lookahead == '\n')
        ADVANCE(603);
      if (lookahead == '\r')
        ADVANCE(603);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(322);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '\\')
        ADVANCE(604);
      if (lookahead == 'd')
        ADVANCE(605);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 613:
      if (lookahead == '\n')
        ADVANCE(603);
      if (lookahead == '\r')
        ADVANCE(613);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(614);
      if (lookahead == 'd')
        ADVANCE(615);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(602);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 614:
      if (lookahead == 'n')
        SKIP(602);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'e')
        ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'r')
        ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'i')
        ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'v')
        ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'i')
        ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'n')
        ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'g')
        ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 623:
      if (lookahead == '\n')
        ADVANCE(624);
      if (lookahead == '\r')
        ADVANCE(634);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(635);
      if (lookahead == 'd')
        ADVANCE(636);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(623);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      END_STATE();
    case 624:
      if (lookahead == '\n')
        ADVANCE(624);
      if (lookahead == '\r')
        ADVANCE(624);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '\\')
        ADVANCE(625);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(624);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 625:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(624);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 626:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(627);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 627:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(628);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 628:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(629);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 629:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(630);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 630:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(631);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 631:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(632);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 632:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(633);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 634:
      if (lookahead == '\n')
        ADVANCE(624);
      if (lookahead == '\r')
        ADVANCE(634);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(635);
      if (lookahead == 'd')
        ADVANCE(636);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(623);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      END_STATE();
    case 635:
      if (lookahead == 'n')
        SKIP(623);
      END_STATE();
    case 636:
      if (lookahead == 'e')
        ADVANCE(637);
      END_STATE();
    case 637:
      if (lookahead == 'r')
        ADVANCE(638);
      END_STATE();
    case 638:
      if (lookahead == 'i')
        ADVANCE(639);
      END_STATE();
    case 639:
      if (lookahead == 'v')
        ADVANCE(640);
      END_STATE();
    case 640:
      if (lookahead == 'i')
        ADVANCE(641);
      END_STATE();
    case 641:
      if (lookahead == 'n')
        ADVANCE(642);
      END_STATE();
    case 642:
      if (lookahead == 'g')
        ADVANCE(643);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 644:
      if (lookahead == '\n')
        ADVANCE(645);
      if (lookahead == '\r')
        ADVANCE(647);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(648);
      if (lookahead == 'd')
        ADVANCE(615);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(644);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 645:
      if (lookahead == '\n')
        ADVANCE(645);
      if (lookahead == '\r')
        ADVANCE(645);
      if (lookahead == '(')
        ADVANCE(322);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '\\')
        ADVANCE(646);
      if (lookahead == 'd')
        ADVANCE(605);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(645);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
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
        ADVANCE(335);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(648);
      if (lookahead == 'd')
        ADVANCE(615);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(644);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
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
        ADVANCE(99);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
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
        ADVANCE(474);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == 'a')
        ADVANCE(748);
      if (lookahead == 'b')
        ADVANCE(749);
      if (lookahead == 'f')
        ADVANCE(750);
      if (lookahead == 'n')
        ADVANCE(162);
      if (lookahead == 'o')
        ADVANCE(751);
      if (lookahead == 'r')
        ADVANCE(163);
      if (lookahead == 't')
        ADVANCE(164);
      if (lookahead == 'v')
        ADVANCE(165);
      if (lookahead == 'x')
        ADVANCE(752);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(649);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(501);
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
        ADVANCE(181);
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
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(697);
      if (lookahead == 'b')
        ADVANCE(698);
      if (lookahead == 'f')
        ADVANCE(699);
      if (lookahead == 'n')
        ADVANCE(78);
      if (lookahead == 'o')
        ADVANCE(700);
      if (lookahead == 'r')
        ADVANCE(79);
      if (lookahead == 't')
        ADVANCE(80);
      if (lookahead == 'v')
        ADVANCE(81);
      if (lookahead == 'x')
        ADVANCE(701);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(497);
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
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 687:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 688:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 689:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(52);
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
        ADVANCE(55);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 692:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'I')
        ADVANCE(57);
      if (lookahead == 'O')
        ADVANCE(58);
      if (lookahead == 'P')
        ADVANCE(60);
      if (lookahead == 'T')
        ADVANCE(61);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'Y')
        ADVANCE(65);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 693:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(68);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 694:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(70);
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
        ADVANCE(99);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
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
        ADVANCE(474);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == 'a')
        ADVANCE(748);
      if (lookahead == 'b')
        ADVANCE(749);
      if (lookahead == 'f')
        ADVANCE(750);
      if (lookahead == 'n')
        ADVANCE(162);
      if (lookahead == 'o')
        ADVANCE(751);
      if (lookahead == 'r')
        ADVANCE(163);
      if (lookahead == 't')
        ADVANCE(164);
      if (lookahead == 'v')
        ADVANCE(165);
      if (lookahead == 'x')
        ADVANCE(752);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(649);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(501);
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
        ADVANCE(128);
      END_STATE();
    case 739:
      if (lookahead == 'T')
        ADVANCE(130);
      END_STATE();
    case 740:
      if (lookahead == 'F')
        ADVANCE(132);
      END_STATE();
    case 741:
      if (lookahead == 'A')
        ADVANCE(134);
      if (lookahead == 'U')
        ADVANCE(136);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 743:
      if (lookahead == 'S')
        ADVANCE(139);
      END_STATE();
    case 744:
      if (lookahead == 'I')
        ADVANCE(141);
      if (lookahead == 'O')
        ADVANCE(142);
      if (lookahead == 'P')
        ADVANCE(144);
      if (lookahead == 'T')
        ADVANCE(145);
      if (lookahead == 'U')
        ADVANCE(147);
      if (lookahead == 'Y')
        ADVANCE(149);
      END_STATE();
    case 745:
      if (lookahead == 'S')
        ADVANCE(152);
      END_STATE();
    case 746:
      if (lookahead == 'T')
        ADVANCE(154);
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
        ADVANCE(503);
      if (lookahead == '\n')
        ADVANCE(754);
      if (lookahead == 11)
        ADVANCE(96);
      if (lookahead == '\r')
        ADVANCE(765);
      if (lookahead == ' ')
        ADVANCE(499);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(100);
      if (lookahead == '$')
        ADVANCE(101);
      if (lookahead == '%')
        ADVANCE(102);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '.')
        ADVANCE(470);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(473);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
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
        ADVANCE(127);
      if (lookahead == 'H')
        ADVANCE(129);
      if (lookahead == 'L')
        ADVANCE(131);
      if (lookahead == 'N')
        ADVANCE(133);
      if (lookahead == 'O')
        ADVANCE(742);
      if (lookahead == 'R')
        ADVANCE(138);
      if (lookahead == 'S')
        ADVANCE(140);
      if (lookahead == 'U')
        ADVANCE(151);
      if (lookahead == 'V')
        ADVANCE(153);
      if (lookahead == 'X')
        ADVANCE(747);
      if (lookahead == '[')
        ADVANCE(500);
      if (lookahead == '\\')
        ADVANCE(474);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(160);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == 'a')
        ADVANCE(748);
      if (lookahead == 'b')
        ADVANCE(749);
      if (lookahead == 'f')
        ADVANCE(750);
      if (lookahead == 'n')
        ADVANCE(162);
      if (lookahead == 'o')
        ADVANCE(751);
      if (lookahead == 'r')
        ADVANCE(163);
      if (lookahead == 't')
        ADVANCE(164);
      if (lookahead == 'v')
        ADVANCE(165);
      if (lookahead == 'x')
        ADVANCE(752);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(501);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
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
        ADVANCE(322);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(462);
      if (lookahead == '.')
        ADVANCE(463);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(466);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
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
        ADVANCE(43);
      if (lookahead == 'H')
        ADVANCE(45);
      if (lookahead == 'L')
        ADVANCE(47);
      if (lookahead == 'N')
        ADVANCE(49);
      if (lookahead == 'O')
        ADVANCE(690);
      if (lookahead == 'R')
        ADVANCE(54);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'U')
        ADVANCE(67);
      if (lookahead == 'V')
        ADVANCE(69);
      if (lookahead == 'X')
        ADVANCE(695);
      if (lookahead == '[')
        ADVANCE(495);
      if (lookahead == '\\')
        ADVANCE(764);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == 'a')
        ADVANCE(697);
      if (lookahead == 'b')
        ADVANCE(698);
      if (lookahead == 'f')
        ADVANCE(699);
      if (lookahead == 'n')
        ADVANCE(78);
      if (lookahead == 'o')
        ADVANCE(700);
      if (lookahead == 'r')
        ADVANCE(79);
      if (lookahead == 't')
        ADVANCE(80);
      if (lookahead == 'v')
        ADVANCE(81);
      if (lookahead == 'x')
        ADVANCE(701);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(497);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
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
        ADVANCE(322);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(462);
      if (lookahead == '.')
        ADVANCE(463);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(466);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
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
        ADVANCE(43);
      if (lookahead == 'H')
        ADVANCE(45);
      if (lookahead == 'L')
        ADVANCE(47);
      if (lookahead == 'N')
        ADVANCE(49);
      if (lookahead == 'O')
        ADVANCE(690);
      if (lookahead == 'R')
        ADVANCE(54);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'U')
        ADVANCE(67);
      if (lookahead == 'V')
        ADVANCE(69);
      if (lookahead == 'X')
        ADVANCE(695);
      if (lookahead == '[')
        ADVANCE(495);
      if (lookahead == '\\')
        ADVANCE(764);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == 'a')
        ADVANCE(697);
      if (lookahead == 'b')
        ADVANCE(698);
      if (lookahead == 'f')
        ADVANCE(699);
      if (lookahead == 'n')
        ADVANCE(78);
      if (lookahead == 'o')
        ADVANCE(700);
      if (lookahead == 'r')
        ADVANCE(79);
      if (lookahead == 't')
        ADVANCE(80);
      if (lookahead == 'v')
        ADVANCE(81);
      if (lookahead == 'x')
        ADVANCE(701);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(497);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
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
        ADVANCE(322);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(462);
      if (lookahead == '.')
        ADVANCE(463);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(466);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
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
        ADVANCE(43);
      if (lookahead == 'H')
        ADVANCE(45);
      if (lookahead == 'L')
        ADVANCE(47);
      if (lookahead == 'N')
        ADVANCE(49);
      if (lookahead == 'O')
        ADVANCE(690);
      if (lookahead == 'R')
        ADVANCE(54);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'U')
        ADVANCE(67);
      if (lookahead == 'V')
        ADVANCE(69);
      if (lookahead == 'X')
        ADVANCE(695);
      if (lookahead == '[')
        ADVANCE(495);
      if (lookahead == '\\')
        ADVANCE(764);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == 'a')
        ADVANCE(697);
      if (lookahead == 'b')
        ADVANCE(698);
      if (lookahead == 'f')
        ADVANCE(699);
      if (lookahead == 'n')
        ADVANCE(78);
      if (lookahead == 'o')
        ADVANCE(700);
      if (lookahead == 'r')
        ADVANCE(79);
      if (lookahead == 't')
        ADVANCE(80);
      if (lookahead == 'v')
        ADVANCE(81);
      if (lookahead == 'x')
        ADVANCE(701);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(497);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
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
        ADVANCE(322);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(462);
      if (lookahead == '.')
        ADVANCE(463);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(466);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
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
        ADVANCE(43);
      if (lookahead == 'H')
        ADVANCE(45);
      if (lookahead == 'L')
        ADVANCE(47);
      if (lookahead == 'N')
        ADVANCE(49);
      if (lookahead == 'O')
        ADVANCE(690);
      if (lookahead == 'R')
        ADVANCE(54);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'U')
        ADVANCE(67);
      if (lookahead == 'V')
        ADVANCE(69);
      if (lookahead == 'X')
        ADVANCE(695);
      if (lookahead == '[')
        ADVANCE(495);
      if (lookahead == '\\')
        ADVANCE(764);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == 'a')
        ADVANCE(697);
      if (lookahead == 'b')
        ADVANCE(698);
      if (lookahead == 'f')
        ADVANCE(699);
      if (lookahead == 'n')
        ADVANCE(78);
      if (lookahead == 'o')
        ADVANCE(700);
      if (lookahead == 'r')
        ADVANCE(79);
      if (lookahead == 't')
        ADVANCE(80);
      if (lookahead == 'v')
        ADVANCE(81);
      if (lookahead == 'x')
        ADVANCE(701);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(497);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
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
        ADVANCE(503);
      if (lookahead == '\n')
        ADVANCE(754);
      if (lookahead == 11)
        ADVANCE(96);
      if (lookahead == '\r')
        ADVANCE(765);
      if (lookahead == ' ')
        ADVANCE(499);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(100);
      if (lookahead == '$')
        ADVANCE(101);
      if (lookahead == '%')
        ADVANCE(102);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '.')
        ADVANCE(470);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(473);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
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
        ADVANCE(127);
      if (lookahead == 'H')
        ADVANCE(129);
      if (lookahead == 'L')
        ADVANCE(131);
      if (lookahead == 'N')
        ADVANCE(133);
      if (lookahead == 'O')
        ADVANCE(742);
      if (lookahead == 'R')
        ADVANCE(138);
      if (lookahead == 'S')
        ADVANCE(140);
      if (lookahead == 'U')
        ADVANCE(151);
      if (lookahead == 'V')
        ADVANCE(153);
      if (lookahead == 'X')
        ADVANCE(747);
      if (lookahead == '[')
        ADVANCE(500);
      if (lookahead == '\\')
        ADVANCE(474);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(160);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == 'a')
        ADVANCE(748);
      if (lookahead == 'b')
        ADVANCE(749);
      if (lookahead == 'f')
        ADVANCE(750);
      if (lookahead == 'n')
        ADVANCE(162);
      if (lookahead == 'o')
        ADVANCE(751);
      if (lookahead == 'r')
        ADVANCE(163);
      if (lookahead == 't')
        ADVANCE(164);
      if (lookahead == 'v')
        ADVANCE(165);
      if (lookahead == 'x')
        ADVANCE(752);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(501);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
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
        ADVANCE(775);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        SKIP(776);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(772);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 773:
      if (lookahead == '\n')
        ADVANCE(773);
      if (lookahead == '\r')
        ADVANCE(773);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '0')
        ADVANCE(182);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(774);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(773);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
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
      if (lookahead == '\n')
        ADVANCE(773);
      if (lookahead == '\r')
        ADVANCE(775);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        SKIP(776);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(772);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 776:
      if (lookahead == 'n')
        SKIP(772);
      END_STATE();
    case 777:
      if (lookahead == '\n')
        ADVANCE(778);
      if (lookahead == '\r')
        ADVANCE(780);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        SKIP(781);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(777);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 778:
      if (lookahead == '\n')
        ADVANCE(778);
      if (lookahead == '\r')
        ADVANCE(778);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(322);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(349);
      if (lookahead == '0')
        ADVANCE(182);
      if (lookahead == ':')
        ADVANCE(187);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(779);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(778);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 779:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(778);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 780:
      if (lookahead == '\n')
        ADVANCE(778);
      if (lookahead == '\r')
        ADVANCE(780);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        SKIP(781);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(777);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 781:
      if (lookahead == 'n')
        SKIP(777);
      END_STATE();
    case 782:
      if (lookahead == '\n')
        ADVANCE(783);
      if (lookahead == '\r')
        ADVANCE(785);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(786);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(782);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 783:
      if (lookahead == '\n')
        ADVANCE(783);
      if (lookahead == '\r')
        ADVANCE(783);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '0')
        ADVANCE(182);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '\\')
        ADVANCE(784);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(783);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
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
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(786);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(782);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 786:
      if (lookahead == 'n')
        SKIP(782);
      END_STATE();
    case 787:
      if (lookahead == '\n')
        ADVANCE(788);
      if (lookahead == '\r')
        ADVANCE(791);
      if (lookahead == '(')
        ADVANCE(105);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == '[')
        ADVANCE(155);
      if (lookahead == '\\')
        SKIP(792);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(787);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(793);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 788:
      if (lookahead == '\n')
        ADVANCE(788);
      if (lookahead == '\r')
        ADVANCE(788);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(349);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == '\\')
        ADVANCE(789);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(788);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(790);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
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
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(790);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(790);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 791:
      if (lookahead == '\n')
        ADVANCE(788);
      if (lookahead == '\r')
        ADVANCE(791);
      if (lookahead == '(')
        ADVANCE(105);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == '[')
        ADVANCE(155);
      if (lookahead == '\\')
        SKIP(792);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(787);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(793);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 792:
      if (lookahead == 'n')
        SKIP(787);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(793);
      if (lookahead == '.')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(793);
      END_STATE();
    case 794:
      if (lookahead == '\n')
        ADVANCE(795);
      if (lookahead == '\r')
        ADVANCE(807);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(808);
      if (lookahead == 's')
        ADVANCE(809);
      if (lookahead == 'u')
        ADVANCE(813);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(794);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      END_STATE();
    case 795:
      if (lookahead == '\n')
        ADVANCE(795);
      if (lookahead == '\r')
        ADVANCE(795);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(796);
      if (lookahead == 's')
        ADVANCE(797);
      if (lookahead == 'u')
        ADVANCE(801);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(795);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 807:
      if (lookahead == '\n')
        ADVANCE(795);
      if (lookahead == '\r')
        ADVANCE(807);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(808);
      if (lookahead == 's')
        ADVANCE(809);
      if (lookahead == 'u')
        ADVANCE(813);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(794);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      END_STATE();
    case 808:
      if (lookahead == 'n')
        SKIP(794);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'a')
        ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'f')
        ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'e')
        ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'n')
        ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 's')
        ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'a')
        ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'f')
        ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'e')
        ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 819:
      if (lookahead == '\n')
        ADVANCE(820);
      if (lookahead == '\r')
        ADVANCE(822);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(823);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(819);
      END_STATE();
    case 820:
      if (lookahead == '\n')
        ADVANCE(820);
      if (lookahead == '\r')
        ADVANCE(820);
      if (lookahead == '(')
        ADVANCE(322);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == ':')
        ADVANCE(187);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '\\')
        ADVANCE(821);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(84);
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
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(823);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == '}')
        ADVANCE(168);
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
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(828);
      if (lookahead == 'd')
        ADVANCE(615);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(824);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 825:
      if (lookahead == '\n')
        ADVANCE(825);
      if (lookahead == '\r')
        ADVANCE(825);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '\\')
        ADVANCE(826);
      if (lookahead == 'd')
        ADVANCE(605);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(825);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
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
      if (lookahead == '\n')
        ADVANCE(825);
      if (lookahead == '\r')
        ADVANCE(827);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(828);
      if (lookahead == 'd')
        ADVANCE(615);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(824);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 828:
      if (lookahead == 'n')
        SKIP(824);
      END_STATE();
    case 829:
      if (lookahead == '\n')
        ADVANCE(830);
      if (lookahead == '\r')
        ADVANCE(832);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(833);
      if (lookahead == 'd')
        ADVANCE(636);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(829);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      END_STATE();
    case 830:
      if (lookahead == '\n')
        ADVANCE(830);
      if (lookahead == '\r')
        ADVANCE(830);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(831);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(830);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 831:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(830);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 832:
      if (lookahead == '\n')
        ADVANCE(830);
      if (lookahead == '\r')
        ADVANCE(832);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(833);
      if (lookahead == 'd')
        ADVANCE(636);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(829);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      END_STATE();
    case 833:
      if (lookahead == 'n')
        SKIP(829);
      END_STATE();
    case 834:
      if (lookahead == '\n')
        ADVANCE(835);
      if (lookahead == '\r')
        ADVANCE(837);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(838);
      if (lookahead == 'd')
        ADVANCE(636);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(834);
      END_STATE();
    case 835:
      if (lookahead == '\n')
        ADVANCE(835);
      if (lookahead == '\r')
        ADVANCE(835);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(836);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(835);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 836:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(835);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 837:
      if (lookahead == '\n')
        ADVANCE(835);
      if (lookahead == '\r')
        ADVANCE(837);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(838);
      if (lookahead == 'd')
        ADVANCE(636);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(834);
      END_STATE();
    case 838:
      if (lookahead == 'n')
        SKIP(834);
      END_STATE();
    case 839:
      if (lookahead == '\n')
        ADVANCE(840);
      if (lookahead == '\r')
        ADVANCE(842);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(843);
      if (lookahead == 'd')
        ADVANCE(636);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(839);
      END_STATE();
    case 840:
      if (lookahead == '\n')
        ADVANCE(840);
      if (lookahead == '\r')
        ADVANCE(840);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(841);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(840);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 841:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(840);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 842:
      if (lookahead == '\n')
        ADVANCE(840);
      if (lookahead == '\r')
        ADVANCE(842);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(843);
      if (lookahead == 'd')
        ADVANCE(636);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(839);
      END_STATE();
    case 843:
      if (lookahead == 'n')
        SKIP(839);
      END_STATE();
    case 844:
      if (lookahead == '\n')
        ADVANCE(845);
      if (lookahead == '\r')
        ADVANCE(847);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(848);
      if (lookahead == 'd')
        ADVANCE(615);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(844);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 845:
      if (lookahead == '\n')
        ADVANCE(845);
      if (lookahead == '\r')
        ADVANCE(845);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(846);
      if (lookahead == 'd')
        ADVANCE(605);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(845);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 846:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(845);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 847:
      if (lookahead == '\n')
        ADVANCE(845);
      if (lookahead == '\r')
        ADVANCE(847);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(848);
      if (lookahead == 'd')
        ADVANCE(615);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(844);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 848:
      if (lookahead == 'n')
        SKIP(844);
      END_STATE();
    case 849:
      if (lookahead == '\n')
        ADVANCE(850);
      if (lookahead == '\r')
        ADVANCE(852);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(122);
      if (lookahead == '\\')
        SKIP(853);
      if (lookahead == 'd')
        ADVANCE(615);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(849);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 850:
      if (lookahead == '\n')
        ADVANCE(850);
      if (lookahead == '\r')
        ADVANCE(850);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(851);
      if (lookahead == 'd')
        ADVANCE(605);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(850);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 851:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(850);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 852:
      if (lookahead == '\n')
        ADVANCE(850);
      if (lookahead == '\r')
        ADVANCE(852);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(122);
      if (lookahead == '\\')
        SKIP(853);
      if (lookahead == 'd')
        ADVANCE(615);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(849);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 853:
      if (lookahead == 'n')
        SKIP(849);
      END_STATE();
    case 854:
      if (lookahead == '\n')
        ADVANCE(855);
      if (lookahead == '\r')
        ADVANCE(857);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(122);
      if (lookahead == '\\')
        SKIP(858);
      if (lookahead == 'd')
        ADVANCE(615);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(854);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 855:
      if (lookahead == '\n')
        ADVANCE(855);
      if (lookahead == '\r')
        ADVANCE(855);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(856);
      if (lookahead == 'd')
        ADVANCE(605);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(855);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
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
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(122);
      if (lookahead == '\\')
        SKIP(858);
      if (lookahead == 'd')
        ADVANCE(615);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(854);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 858:
      if (lookahead == 'n')
        SKIP(854);
      END_STATE();
    case 859:
      if (lookahead == '\n')
        ADVANCE(860);
      if (lookahead == '\r')
        ADVANCE(862);
      if (lookahead == '(')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == '=')
        ADVANCE(122);
      if (lookahead == '[')
        ADVANCE(155);
      if (lookahead == '\\')
        SKIP(863);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(859);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(793);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 860:
      if (lookahead == '\n')
        ADVANCE(860);
      if (lookahead == '\r')
        ADVANCE(860);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(349);
      if (lookahead == '=')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == '\\')
        ADVANCE(861);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(860);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(790);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 861:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(860);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 862:
      if (lookahead == '\n')
        ADVANCE(860);
      if (lookahead == '\r')
        ADVANCE(862);
      if (lookahead == '(')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == '=')
        ADVANCE(122);
      if (lookahead == '[')
        ADVANCE(155);
      if (lookahead == '\\')
        SKIP(863);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(859);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(793);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 863:
      if (lookahead == 'n')
        SKIP(859);
      END_STATE();
    case 864:
      if (lookahead == '\n')
        ADVANCE(865);
      if (lookahead == '\r')
        ADVANCE(867);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '=')
        ADVANCE(122);
      if (lookahead == '\\')
        SKIP(868);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(864);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 865:
      if (lookahead == '\n')
        ADVANCE(865);
      if (lookahead == '\r')
        ADVANCE(865);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '=')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(866);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(865);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 866:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(865);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 867:
      if (lookahead == '\n')
        ADVANCE(865);
      if (lookahead == '\r')
        ADVANCE(867);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '=')
        ADVANCE(122);
      if (lookahead == '\\')
        SKIP(868);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(864);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 868:
      if (lookahead == 'n')
        SKIP(864);
      END_STATE();
    case 869:
      if (lookahead == '\n')
        ADVANCE(870);
      if (lookahead == '\r')
        ADVANCE(872);
      if (lookahead == '(')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '[')
        ADVANCE(155);
      if (lookahead == '\\')
        SKIP(873);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(869);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(793);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 870:
      if (lookahead == '\n')
        ADVANCE(870);
      if (lookahead == '\r')
        ADVANCE(870);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(349);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == '\\')
        ADVANCE(871);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(870);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(790);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 871:
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
      if (lookahead == '(')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '[')
        ADVANCE(155);
      if (lookahead == '\\')
        SKIP(873);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(869);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(793);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 873:
      if (lookahead == 'n')
        SKIP(869);
      END_STATE();
    case 874:
      if (lookahead == '\n')
        ADVANCE(875);
      if (lookahead == '\r')
        ADVANCE(877);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '[')
        ADVANCE(500);
      if (lookahead == '\\')
        ADVANCE(474);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(874);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      END_STATE();
    case 875:
      if (lookahead == '\n')
        ADVANCE(875);
      if (lookahead == '\r')
        ADVANCE(875);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(495);
      if (lookahead == '\\')
        ADVANCE(876);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(875);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(875);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 877:
      if (lookahead == '\n')
        ADVANCE(875);
      if (lookahead == '\r')
        ADVANCE(877);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '[')
        ADVANCE(500);
      if (lookahead == '\\')
        ADVANCE(474);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(874);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      END_STATE();
    case 878:
      if (lookahead == '\n')
        ADVANCE(879);
      if (lookahead == '\r')
        ADVANCE(882);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(883);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(884);
      END_STATE();
    case 879:
      if (lookahead == '\n')
        ADVANCE(879);
      if (lookahead == '\r')
        ADVANCE(879);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(880);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(881);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 882:
      if (lookahead == '\n')
        ADVANCE(879);
      if (lookahead == '\r')
        ADVANCE(882);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(883);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(884);
      END_STATE();
    case 883:
      if (lookahead == 'n')
        SKIP(878);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 885:
      if (lookahead == '\n')
        ADVANCE(886);
      if (lookahead == '\r')
        ADVANCE(889);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(890);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(885);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(891);
      END_STATE();
    case 886:
      if (lookahead == '\n')
        ADVANCE(886);
      if (lookahead == '\r')
        ADVANCE(886);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(887);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(888);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 887:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(886);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 889:
      if (lookahead == '\n')
        ADVANCE(886);
      if (lookahead == '\r')
        ADVANCE(889);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(890);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(885);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(891);
      END_STATE();
    case 890:
      if (lookahead == 'n')
        SKIP(885);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 892:
      if (lookahead == '\n')
        ADVANCE(893);
      if (lookahead == '\r')
        ADVANCE(895);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(896);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(892);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 893:
      if (lookahead == '\n')
        ADVANCE(893);
      if (lookahead == '\r')
        ADVANCE(893);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(349);
      if (lookahead == '0')
        ADVANCE(182);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(893);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
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
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(896);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(892);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 896:
      if (lookahead == 'n')
        SKIP(892);
      END_STATE();
    case 897:
      if (lookahead == '\n')
        ADVANCE(898);
      if (lookahead == '\r')
        ADVANCE(900);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(901);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(897);
      END_STATE();
    case 898:
      if (lookahead == '\n')
        ADVANCE(898);
      if (lookahead == '\r')
        ADVANCE(898);
      if (lookahead == '-')
        ADVANCE(349);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(899);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(898);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 899:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(898);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 900:
      if (lookahead == '\n')
        ADVANCE(898);
      if (lookahead == '\r')
        ADVANCE(900);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(901);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(897);
      END_STATE();
    case 901:
      if (lookahead == 'n')
        SKIP(897);
      END_STATE();
    case 902:
      if (lookahead == '\n')
        ADVANCE(903);
      if (lookahead == '\r')
        ADVANCE(905);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(906);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(902);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 903:
      if (lookahead == '\n')
        ADVANCE(903);
      if (lookahead == '\r')
        ADVANCE(903);
      if (lookahead == '(')
        ADVANCE(322);
      if (lookahead == '-')
        ADVANCE(349);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(904);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(903);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 904:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(903);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 905:
      if (lookahead == '\n')
        ADVANCE(903);
      if (lookahead == '\r')
        ADVANCE(905);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(906);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(902);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 906:
      if (lookahead == 'n')
        SKIP(902);
      END_STATE();
    case 907:
      if (lookahead == '\n')
        ADVANCE(908);
      if (lookahead == '\r')
        ADVANCE(910);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '.')
        ADVANCE(470);
      if (lookahead == '\\')
        SKIP(911);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(907);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      END_STATE();
    case 908:
      if (lookahead == '\n')
        ADVANCE(908);
      if (lookahead == '\r')
        ADVANCE(908);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '.')
        ADVANCE(463);
      if (lookahead == '\\')
        ADVANCE(909);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(908);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 909:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(908);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 910:
      if (lookahead == '\n')
        ADVANCE(908);
      if (lookahead == '\r')
        ADVANCE(910);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '.')
        ADVANCE(470);
      if (lookahead == '\\')
        SKIP(911);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(907);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      END_STATE();
    case 911:
      if (lookahead == 'n')
        SKIP(907);
      END_STATE();
    case 912:
      if (lookahead == '\n')
        ADVANCE(913);
      if (lookahead == '\r')
        ADVANCE(915);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == '\\')
        SKIP(916);
      if (lookahead == 'c')
        ADVANCE(260);
      if (lookahead == 'd')
        ADVANCE(266);
      if (lookahead == 'f')
        ADVANCE(277);
      if (lookahead == 'i')
        ADVANCE(284);
      if (lookahead == 'n')
        ADVANCE(308);
      if (lookahead == 't')
        ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(912);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      END_STATE();
    case 913:
      if (lookahead == '\n')
        ADVANCE(913);
      if (lookahead == '\r')
        ADVANCE(913);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '0')
        ADVANCE(182);
      if (lookahead == '\\')
        ADVANCE(914);
      if (lookahead == 'c')
        ADVANCE(190);
      if (lookahead == 'd')
        ADVANCE(196);
      if (lookahead == 'f')
        ADVANCE(207);
      if (lookahead == 'i')
        ADVANCE(214);
      if (lookahead == 'n')
        ADVANCE(238);
      if (lookahead == 't')
        ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(913);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 914:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(913);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 915:
      if (lookahead == '\n')
        ADVANCE(913);
      if (lookahead == '\r')
        ADVANCE(915);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == '\\')
        SKIP(916);
      if (lookahead == 'c')
        ADVANCE(260);
      if (lookahead == 'd')
        ADVANCE(266);
      if (lookahead == 'f')
        ADVANCE(277);
      if (lookahead == 'i')
        ADVANCE(284);
      if (lookahead == 'n')
        ADVANCE(308);
      if (lookahead == 't')
        ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(912);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      END_STATE();
    case 916:
      if (lookahead == 'n')
        SKIP(912);
      END_STATE();
    case 917:
      if (lookahead == '\n')
        ADVANCE(918);
      if (lookahead == '\r')
        ADVANCE(920);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(921);
      if (lookahead == 'h')
        ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(917);
      END_STATE();
    case 918:
      if (lookahead == '\n')
        ADVANCE(918);
      if (lookahead == '\r')
        ADVANCE(918);
      if (lookahead == '(')
        ADVANCE(322);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(919);
      if (lookahead == 'h')
        ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(918);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 919:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(918);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 920:
      if (lookahead == '\n')
        ADVANCE(918);
      if (lookahead == '\r')
        ADVANCE(920);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(921);
      if (lookahead == 'h')
        ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(917);
      END_STATE();
    case 921:
      if (lookahead == 'n')
        SKIP(917);
      END_STATE();
    case 922:
      if (lookahead == '\n')
        ADVANCE(923);
      if (lookahead == '\r')
        ADVANCE(927);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(928);
      if (lookahead == 'i')
        ADVANCE(929);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(922);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 923:
      if (lookahead == '\n')
        ADVANCE(923);
      if (lookahead == '\r')
        ADVANCE(923);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(924);
      if (lookahead == 'i')
        ADVANCE(925);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(923);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 924:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(923);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 927:
      if (lookahead == '\n')
        ADVANCE(923);
      if (lookahead == '\r')
        ADVANCE(927);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(928);
      if (lookahead == 'i')
        ADVANCE(929);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(922);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 928:
      if (lookahead == 'n')
        SKIP(922);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'n')
        ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(261);
      if (lookahead == 'f')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 931:
      if (lookahead == '\n')
        ADVANCE(932);
      if (lookahead == '\r')
        ADVANCE(934);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(935);
      if (lookahead == 'i')
        ADVANCE(929);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(931);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 932:
      if (lookahead == '\n')
        ADVANCE(932);
      if (lookahead == '\r')
        ADVANCE(932);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(933);
      if (lookahead == 'i')
        ADVANCE(925);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(932);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 933:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(932);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 934:
      if (lookahead == '\n')
        ADVANCE(932);
      if (lookahead == '\r')
        ADVANCE(934);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(935);
      if (lookahead == 'i')
        ADVANCE(929);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(931);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 935:
      if (lookahead == 'n')
        SKIP(931);
      END_STATE();
    case 936:
      if (lookahead == '\n')
        ADVANCE(937);
      if (lookahead == '\r')
        ADVANCE(939);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(940);
      if (lookahead == 'd')
        ADVANCE(615);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(936);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 937:
      if (lookahead == '\n')
        ADVANCE(937);
      if (lookahead == '\r')
        ADVANCE(937);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(938);
      if (lookahead == 'd')
        ADVANCE(605);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(937);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(249);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 938:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(937);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 939:
      if (lookahead == '\n')
        ADVANCE(937);
      if (lookahead == '\r')
        ADVANCE(939);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(940);
      if (lookahead == 'd')
        ADVANCE(615);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(936);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(319);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 940:
      if (lookahead == 'n')
        SKIP(936);
      END_STATE();
    case 941:
      if (lookahead == '\n')
        ADVANCE(942);
      if (lookahead == '\r')
        ADVANCE(944);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(945);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(941);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 942:
      if (lookahead == '\n')
        ADVANCE(942);
      if (lookahead == '\r')
        ADVANCE(942);
      if (lookahead == '-')
        ADVANCE(349);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(943);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(942);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 943:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(942);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 944:
      if (lookahead == '\n')
        ADVANCE(942);
      if (lookahead == '\r')
        ADVANCE(944);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(945);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(941);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 945:
      if (lookahead == 'n')
        SKIP(941);
      END_STATE();
    case 946:
      if (lookahead == '\t')
        ADVANCE(503);
      if (lookahead == '\n')
        ADVANCE(947);
      if (lookahead == 11)
        ADVANCE(96);
      if (lookahead == '\r')
        ADVANCE(952);
      if (lookahead == ' ')
        ADVANCE(499);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(100);
      if (lookahead == '$')
        ADVANCE(101);
      if (lookahead == '%')
        ADVANCE(102);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '.')
        ADVANCE(470);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(473);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '[')
        ADVANCE(500);
      if (lookahead == '\\')
        ADVANCE(474);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(160);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(948);
      if (lookahead == '\n')
        ADVANCE(947);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(949);
      if (lookahead == ' ')
        ADVANCE(950);
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
        ADVANCE(322);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(462);
      if (lookahead == '.')
        ADVANCE(463);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(466);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(495);
      if (lookahead == '\\')
        ADVANCE(951);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(948);
      if (lookahead == '\n')
        ADVANCE(947);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(949);
      if (lookahead == ' ')
        ADVANCE(950);
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
        ADVANCE(322);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(462);
      if (lookahead == '.')
        ADVANCE(463);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(466);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(495);
      if (lookahead == '\\')
        ADVANCE(951);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 949:
      if (lookahead == '\t')
        ADVANCE(948);
      if (lookahead == '\n')
        ADVANCE(947);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(949);
      if (lookahead == ' ')
        ADVANCE(950);
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
        ADVANCE(322);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(462);
      if (lookahead == '.')
        ADVANCE(463);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(466);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(495);
      if (lookahead == '\\')
        ADVANCE(951);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(948);
      if (lookahead == '\n')
        ADVANCE(947);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(949);
      if (lookahead == ' ')
        ADVANCE(950);
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
        ADVANCE(322);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(462);
      if (lookahead == '.')
        ADVANCE(463);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(466);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(188);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(495);
      if (lookahead == '\\')
        ADVANCE(951);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(949);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 952:
      if (lookahead == '\t')
        ADVANCE(503);
      if (lookahead == '\n')
        ADVANCE(947);
      if (lookahead == 11)
        ADVANCE(96);
      if (lookahead == '\r')
        ADVANCE(952);
      if (lookahead == ' ')
        ADVANCE(499);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(100);
      if (lookahead == '$')
        ADVANCE(101);
      if (lookahead == '%')
        ADVANCE(102);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(335);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '.')
        ADVANCE(470);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(473);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(258);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '[')
        ADVANCE(500);
      if (lookahead == '\\')
        ADVANCE(474);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(160);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 953:
      if (lookahead == '\n')
        ADVANCE(954);
      if (lookahead == '\r')
        ADVANCE(956);
      if (lookahead == '(')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == '[')
        ADVANCE(155);
      if (lookahead == '\\')
        SKIP(957);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(953);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(793);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 954:
      if (lookahead == '\n')
        ADVANCE(954);
      if (lookahead == '\r')
        ADVANCE(954);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(349);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == '\\')
        ADVANCE(955);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(954);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(790);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 955:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(954);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 956:
      if (lookahead == '\n')
        ADVANCE(954);
      if (lookahead == '\r')
        ADVANCE(956);
      if (lookahead == '(')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead == '[')
        ADVANCE(155);
      if (lookahead == '\\')
        SKIP(957);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(953);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(793);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(261);
      END_STATE();
    case 957:
      if (lookahead == 'n')
        SKIP(953);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 179},
  [2] = {.lex_state = 320},
  [3] = {.lex_state = 320},
  [4] = {.lex_state = 347},
  [5] = {.lex_state = 320},
  [6] = {.lex_state = 448, .external_lex_state = 2},
  [7] = {.lex_state = 453},
  [8] = {.lex_state = 453},
  [9] = {.lex_state = 460},
  [10] = {.lex_state = 453},
  [11] = {.lex_state = 453},
  [12] = {.lex_state = 179},
  [13] = {.lex_state = 475, .external_lex_state = 3},
  [14] = {.lex_state = 482, .external_lex_state = 3},
  [15] = {.lex_state = 487, .external_lex_state = 3},
  [16] = {.lex_state = 492},
  [17] = {.lex_state = 502},
  [18] = {.lex_state = 487, .external_lex_state = 3},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 510, .external_lex_state = 3},
  [21] = {.lex_state = 510, .external_lex_state = 3},
  [22] = {.lex_state = 179},
  [23] = {.lex_state = 515, .external_lex_state = 3},
  [24] = {.lex_state = 515, .external_lex_state = 3},
  [25] = {.lex_state = 510, .external_lex_state = 3},
  [26] = {.lex_state = 510, .external_lex_state = 3},
  [27] = {.lex_state = 520, .external_lex_state = 3},
  [28] = {.lex_state = 525, .external_lex_state = 3},
  [29] = {.lex_state = 530, .external_lex_state = 3},
  [30] = {.lex_state = 535},
  [31] = {.lex_state = 347},
  [32] = {.lex_state = 320},
  [33] = {.lex_state = 540, .external_lex_state = 3},
  [34] = {.lex_state = 347},
  [35] = {.lex_state = 347},
  [36] = {.lex_state = 453},
  [37] = {.lex_state = 561, .external_lex_state = 4},
  [38] = {.lex_state = 568},
  [39] = {.lex_state = 510, .external_lex_state = 3},
  [40] = {.lex_state = 179},
  [41] = {.lex_state = 573},
  [42] = {.lex_state = 179},
  [43] = {.lex_state = 347},
  [44] = {.lex_state = 588},
  [45] = {.lex_state = 179},
  [46] = {.lex_state = 588},
  [47] = {.lex_state = 460},
  [48] = {.lex_state = 593, .external_lex_state = 3},
  [49] = {.lex_state = 453},
  [50] = {.lex_state = 593, .external_lex_state = 3},
  [51] = {.lex_state = 460},
  [52] = {.lex_state = 593, .external_lex_state = 3},
  [53] = {.lex_state = 597, .external_lex_state = 3},
  [54] = {.lex_state = 597, .external_lex_state = 3},
  [55] = {.lex_state = 460},
  [56] = {.lex_state = 593, .external_lex_state = 3},
  [57] = {.lex_state = 602, .external_lex_state = 3},
  [58] = {.lex_state = 179},
  [59] = {.lex_state = 623, .external_lex_state = 3},
  [60] = {.lex_state = 644, .external_lex_state = 3},
  [61] = {.lex_state = 453},
  [62] = {.lex_state = 179},
  [63] = {.lex_state = 179},
  [64] = {.lex_state = 453},
  [65] = {.lex_state = 179},
  [66] = {.lex_state = 453},
  [67] = {.lex_state = 515, .external_lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 649},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 502},
  [76] = {.lex_state = 502},
  [77] = {.lex_state = 502},
  [78] = {.lex_state = 753},
  [79] = {.lex_state = 502},
  [80] = {.lex_state = 487, .external_lex_state = 3},
  [81] = {.lex_state = 502},
  [82] = {.lex_state = 502},
  [83] = {.lex_state = 502},
  [84] = {.lex_state = 502},
  [85] = {.lex_state = 535},
  [86] = {.lex_state = 487, .external_lex_state = 3},
  [87] = {.lex_state = 510, .external_lex_state = 3},
  [88] = {.lex_state = 772},
  [89] = {.lex_state = 777},
  [90] = {.lex_state = 772},
  [91] = {.lex_state = 782},
  [92] = {.lex_state = 492},
  [93] = {.lex_state = 502},
  [94] = {.lex_state = 782},
  [95] = {.lex_state = 772},
  [96] = {.lex_state = 772},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 772},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 772},
  [102] = {.lex_state = 772},
  [103] = {.lex_state = 772},
  [104] = {.lex_state = 787},
  [105] = {.lex_state = 510, .external_lex_state = 3},
  [106] = {.lex_state = 448, .external_lex_state = 2},
  [107] = {.lex_state = 453},
  [108] = {.lex_state = 347},
  [109] = {.lex_state = 540, .external_lex_state = 3},
  [110] = {.lex_state = 453},
  [111] = {.lex_state = 320},
  [112] = {.lex_state = 320},
  [113] = {.lex_state = 510, .external_lex_state = 3},
  [114] = {.lex_state = 794},
  [115] = {.lex_state = 794},
  [116] = {.lex_state = 510, .external_lex_state = 3},
  [117] = {.lex_state = 347},
  [118] = {.lex_state = 819},
  [119] = {.lex_state = 510, .external_lex_state = 3},
  [120] = {.lex_state = 453},
  [121] = {.lex_state = 510, .external_lex_state = 3},
  [122] = {.lex_state = 561, .external_lex_state = 4},
  [123] = {.lex_state = 561, .external_lex_state = 4},
  [124] = {.lex_state = 510, .external_lex_state = 3},
  [125] = {.lex_state = 568},
  [126] = {.lex_state = 568},
  [127] = {.lex_state = 347},
  [128] = {.lex_state = 453},
  [129] = {.lex_state = 588},
  [130] = {.lex_state = 179},
  [131] = {.lex_state = 448, .external_lex_state = 2},
  [132] = {.lex_state = 453},
  [133] = {.lex_state = 588},
  [134] = {.lex_state = 588},
  [135] = {.lex_state = 588},
  [136] = {.lex_state = 588},
  [137] = {.lex_state = 448, .external_lex_state = 2},
  [138] = {.lex_state = 588},
  [139] = {.lex_state = 593, .external_lex_state = 3},
  [140] = {.lex_state = 593, .external_lex_state = 3},
  [141] = {.lex_state = 347},
  [142] = {.lex_state = 597, .external_lex_state = 3},
  [143] = {.lex_state = 593, .external_lex_state = 3},
  [144] = {.lex_state = 460},
  [145] = {.lex_state = 597, .external_lex_state = 3},
  [146] = {.lex_state = 597, .external_lex_state = 3},
  [147] = {.lex_state = 597, .external_lex_state = 3},
  [148] = {.lex_state = 593, .external_lex_state = 3},
  [149] = {.lex_state = 623, .external_lex_state = 3},
  [150] = {.lex_state = 824, .external_lex_state = 3},
  [151] = {.lex_state = 829, .external_lex_state = 3},
  [152] = {.lex_state = 453},
  [153] = {.lex_state = 834, .external_lex_state = 3},
  [154] = {.lex_state = 839, .external_lex_state = 3},
  [155] = {.lex_state = 510, .external_lex_state = 3},
  [156] = {.lex_state = 844, .external_lex_state = 3},
  [157] = {.lex_state = 849, .external_lex_state = 3},
  [158] = {.lex_state = 854, .external_lex_state = 3},
  [159] = {.lex_state = 824, .external_lex_state = 3},
  [160] = {.lex_state = 179},
  [161] = {.lex_state = 179},
  [162] = {.lex_state = 859},
  [163] = {.lex_state = 864},
  [164] = {.lex_state = 453},
  [165] = {.lex_state = 787},
  [166] = {.lex_state = 453},
  [167] = {.lex_state = 869},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 874},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 878},
  [172] = {.lex_state = 885},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 487, .external_lex_state = 3},
  [175] = {.lex_state = 502},
  [176] = {.lex_state = 874},
  [177] = {.lex_state = 502},
  [178] = {.lex_state = 878},
  [179] = {.lex_state = 885},
  [180] = {.lex_state = 502},
  [181] = {.lex_state = 502},
  [182] = {.lex_state = 487, .external_lex_state = 3},
  [183] = {.lex_state = 892, .external_lex_state = 3},
  [184] = {.lex_state = 892, .external_lex_state = 3},
  [185] = {.lex_state = 487, .external_lex_state = 3},
  [186] = {.lex_state = 487, .external_lex_state = 3},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 782},
  [190] = {.lex_state = 502},
  [191] = {.lex_state = 515},
  [192] = {.lex_state = 453},
  [193] = {.lex_state = 453},
  [194] = {.lex_state = 772},
  [195] = {.lex_state = 787},
  [196] = {.lex_state = 897, .external_lex_state = 3},
  [197] = {.lex_state = 787},
  [198] = {.lex_state = 902, .external_lex_state = 3},
  [199] = {.lex_state = 907},
  [200] = {.lex_state = 510, .external_lex_state = 3},
  [201] = {.lex_state = 897, .external_lex_state = 3},
  [202] = {.lex_state = 787},
  [203] = {.lex_state = 347},
  [204] = {.lex_state = 897, .external_lex_state = 3},
  [205] = {.lex_state = 453},
  [206] = {.lex_state = 897, .external_lex_state = 3},
  [207] = {.lex_state = 535},
  [208] = {.lex_state = 912, .external_lex_state = 4},
  [209] = {.lex_state = 535},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 347},
  [212] = {.lex_state = 347},
  [213] = {.lex_state = 347},
  [214] = {.lex_state = 448, .external_lex_state = 2},
  [215] = {.lex_state = 320},
  [216] = {.lex_state = 510, .external_lex_state = 3},
  [217] = {.lex_state = 510, .external_lex_state = 3},
  [218] = {.lex_state = 347},
  [219] = {.lex_state = 917, .external_lex_state = 3},
  [220] = {.lex_state = 453},
  [221] = {.lex_state = 453},
  [222] = {.lex_state = 502},
  [223] = {.lex_state = 453},
  [224] = {.lex_state = 510, .external_lex_state = 3},
  [225] = {.lex_state = 179},
  [226] = {.lex_state = 453},
  [227] = {.lex_state = 453},
  [228] = {.lex_state = 510, .external_lex_state = 3},
  [229] = {.lex_state = 347},
  [230] = {.lex_state = 561, .external_lex_state = 4},
  [231] = {.lex_state = 510, .external_lex_state = 3},
  [232] = {.lex_state = 561, .external_lex_state = 4},
  [233] = {.lex_state = 568},
  [234] = {.lex_state = 568},
  [235] = {.lex_state = 179},
  [236] = {.lex_state = 347},
  [237] = {.lex_state = 347},
  [238] = {.lex_state = 347},
  [239] = {.lex_state = 448, .external_lex_state = 2},
  [240] = {.lex_state = 588},
  [241] = {.lex_state = 588},
  [242] = {.lex_state = 922, .external_lex_state = 4},
  [243] = {.lex_state = 931},
  [244] = {.lex_state = 510, .external_lex_state = 3},
  [245] = {.lex_state = 453},
  [246] = {.lex_state = 588},
  [247] = {.lex_state = 448, .external_lex_state = 2},
  [248] = {.lex_state = 588},
  [249] = {.lex_state = 510, .external_lex_state = 3},
  [250] = {.lex_state = 597, .external_lex_state = 3},
  [251] = {.lex_state = 593, .external_lex_state = 3},
  [252] = {.lex_state = 597, .external_lex_state = 3},
  [253] = {.lex_state = 597, .external_lex_state = 3},
  [254] = {.lex_state = 597, .external_lex_state = 3},
  [255] = {.lex_state = 460},
  [256] = {.lex_state = 597, .external_lex_state = 3},
  [257] = {.lex_state = 829, .external_lex_state = 3},
  [258] = {.lex_state = 834, .external_lex_state = 3},
  [259] = {.lex_state = 510, .external_lex_state = 3},
  [260] = {.lex_state = 824, .external_lex_state = 3},
  [261] = {.lex_state = 824, .external_lex_state = 3},
  [262] = {.lex_state = 453},
  [263] = {.lex_state = 510, .external_lex_state = 3},
  [264] = {.lex_state = 179},
  [265] = {.lex_state = 839, .external_lex_state = 3},
  [266] = {.lex_state = 453},
  [267] = {.lex_state = 453},
  [268] = {.lex_state = 936, .external_lex_state = 3},
  [269] = {.lex_state = 936, .external_lex_state = 3},
  [270] = {.lex_state = 839, .external_lex_state = 3},
  [271] = {.lex_state = 936, .external_lex_state = 3},
  [272] = {.lex_state = 824, .external_lex_state = 3},
  [273] = {.lex_state = 179},
  [274] = {.lex_state = 834, .external_lex_state = 3},
  [275] = {.lex_state = 453},
  [276] = {.lex_state = 869},
  [277] = {.lex_state = 787},
  [278] = {.lex_state = 941, .external_lex_state = 3},
  [279] = {.lex_state = 510, .external_lex_state = 3},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 878},
  [283] = {.lex_state = 878},
  [284] = {.lex_state = 885},
  [285] = {.lex_state = 885},
  [286] = {.lex_state = 502},
  [287] = {.lex_state = 502},
  [288] = {.lex_state = 502},
  [289] = {.lex_state = 502},
  [290] = {.lex_state = 946},
  [291] = {.lex_state = 946},
  [292] = {.lex_state = 487, .external_lex_state = 3},
  [293] = {.lex_state = 782},
  [294] = {.lex_state = 782},
  [295] = {.lex_state = 772},
  [296] = {.lex_state = 772},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 347},
  [299] = {.lex_state = 179},
  [300] = {.lex_state = 787},
  [301] = {.lex_state = 347},
  [302] = {.lex_state = 953},
  [303] = {.lex_state = 787},
  [304] = {.lex_state = 453},
  [305] = {.lex_state = 907},
  [306] = {.lex_state = 347},
  [307] = {.lex_state = 347},
  [308] = {.lex_state = 347},
  [309] = {.lex_state = 347},
  [310] = {.lex_state = 953},
  [311] = {.lex_state = 953},
  [312] = {.lex_state = 907},
  [313] = {.lex_state = 787},
  [314] = {.lex_state = 787},
  [315] = {.lex_state = 787},
  [316] = {.lex_state = 787},
  [317] = {.lex_state = 941, .external_lex_state = 3},
  [318] = {.lex_state = 941, .external_lex_state = 3},
  [319] = {.lex_state = 787},
  [320] = {.lex_state = 941, .external_lex_state = 3},
  [321] = {.lex_state = 907},
  [322] = {.lex_state = 787},
  [323] = {.lex_state = 510, .external_lex_state = 3},
  [324] = {.lex_state = 787},
  [325] = {.lex_state = 787},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 510, .external_lex_state = 3},
  [328] = {.lex_state = 912, .external_lex_state = 4},
  [329] = {.lex_state = 535},
  [330] = {.lex_state = 453},
  [331] = {.lex_state = 347},
  [332] = {.lex_state = 347},
  [333] = {.lex_state = 453},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 917, .external_lex_state = 3},
  [336] = {.lex_state = 453},
  [337] = {.lex_state = 453},
  [338] = {.lex_state = 510, .external_lex_state = 3},
  [339] = {.lex_state = 347},
  [340] = {.lex_state = 510, .external_lex_state = 3},
  [341] = {.lex_state = 347},
  [342] = {.lex_state = 453},
  [343] = {.lex_state = 502},
  [344] = {.lex_state = 510, .external_lex_state = 3},
  [345] = {.lex_state = 453},
  [346] = {.lex_state = 347},
  [347] = {.lex_state = 453},
  [348] = {.lex_state = 510, .external_lex_state = 3},
  [349] = {.lex_state = 347},
  [350] = {.lex_state = 179},
  [351] = {.lex_state = 179},
  [352] = {.lex_state = 347},
  [353] = {.lex_state = 510, .external_lex_state = 3},
  [354] = {.lex_state = 448, .external_lex_state = 2},
  [355] = {.lex_state = 510, .external_lex_state = 3},
  [356] = {.lex_state = 510, .external_lex_state = 3},
  [357] = {.lex_state = 922, .external_lex_state = 4},
  [358] = {.lex_state = 510, .external_lex_state = 3},
  [359] = {.lex_state = 931},
  [360] = {.lex_state = 347},
  [361] = {.lex_state = 510, .external_lex_state = 3},
  [362] = {.lex_state = 448, .external_lex_state = 2},
  [363] = {.lex_state = 597, .external_lex_state = 3},
  [364] = {.lex_state = 597, .external_lex_state = 3},
  [365] = {.lex_state = 834, .external_lex_state = 3},
  [366] = {.lex_state = 510, .external_lex_state = 3},
  [367] = {.lex_state = 347},
  [368] = {.lex_state = 839, .external_lex_state = 3},
  [369] = {.lex_state = 179},
  [370] = {.lex_state = 347},
  [371] = {.lex_state = 347},
  [372] = {.lex_state = 936, .external_lex_state = 3},
  [373] = {.lex_state = 936, .external_lex_state = 3},
  [374] = {.lex_state = 834, .external_lex_state = 3},
  [375] = {.lex_state = 510, .external_lex_state = 3},
  [376] = {.lex_state = 834, .external_lex_state = 3},
  [377] = {.lex_state = 878},
  [378] = {.lex_state = 885},
  [379] = {.lex_state = 502},
  [380] = {.lex_state = 946},
  [381] = {.lex_state = 772},
  [382] = {.lex_state = 453},
  [383] = {.lex_state = 347},
  [384] = {.lex_state = 179},
  [385] = {.lex_state = 347},
  [386] = {.lex_state = 347},
  [387] = {.lex_state = 347},
  [388] = {.lex_state = 897, .external_lex_state = 3},
  [389] = {.lex_state = 347},
  [390] = {.lex_state = 787},
  [391] = {.lex_state = 953},
  [392] = {.lex_state = 787},
  [393] = {.lex_state = 953},
  [394] = {.lex_state = 907},
  [395] = {.lex_state = 787},
  [396] = {.lex_state = 897, .external_lex_state = 3},
  [397] = {.lex_state = 347},
  [398] = {.lex_state = 787},
  [399] = {.lex_state = 347},
  [400] = {.lex_state = 347},
  [401] = {.lex_state = 787},
  [402] = {.lex_state = 787},
  [403] = {.lex_state = 787},
  [404] = {.lex_state = 907},
  [405] = {.lex_state = 787},
  [406] = {.lex_state = 787},
  [407] = {.lex_state = 897, .external_lex_state = 3},
  [408] = {.lex_state = 787},
  [409] = {.lex_state = 941, .external_lex_state = 3},
  [410] = {.lex_state = 907},
  [411] = {.lex_state = 941, .external_lex_state = 3},
  [412] = {.lex_state = 941, .external_lex_state = 3},
  [413] = {.lex_state = 787},
  [414] = {.lex_state = 510, .external_lex_state = 3},
  [415] = {.lex_state = 510, .external_lex_state = 3},
  [416] = {.lex_state = 912, .external_lex_state = 4},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 510, .external_lex_state = 3},
  [419] = {.lex_state = 347},
  [420] = {.lex_state = 453},
  [421] = {.lex_state = 347},
  [422] = {.lex_state = 347},
  [423] = {.lex_state = 347},
  [424] = {.lex_state = 510, .external_lex_state = 3},
  [425] = {.lex_state = 347},
  [426] = {.lex_state = 347},
  [427] = {.lex_state = 347},
  [428] = {.lex_state = 453},
  [429] = {.lex_state = 510, .external_lex_state = 3},
  [430] = {.lex_state = 453},
  [431] = {.lex_state = 347},
  [432] = {.lex_state = 453},
  [433] = {.lex_state = 510, .external_lex_state = 3},
  [434] = {.lex_state = 347},
  [435] = {.lex_state = 347},
  [436] = {.lex_state = 179},
  [437] = {.lex_state = 510, .external_lex_state = 3},
  [438] = {.lex_state = 922, .external_lex_state = 4},
  [439] = {.lex_state = 510, .external_lex_state = 3},
  [440] = {.lex_state = 510, .external_lex_state = 3},
  [441] = {.lex_state = 931},
  [442] = {.lex_state = 510, .external_lex_state = 3},
  [443] = {.lex_state = 510, .external_lex_state = 3},
  [444] = {.lex_state = 510, .external_lex_state = 3},
  [445] = {.lex_state = 510, .external_lex_state = 3},
  [446] = {.lex_state = 347},
  [447] = {.lex_state = 839, .external_lex_state = 3},
  [448] = {.lex_state = 839, .external_lex_state = 3},
  [449] = {.lex_state = 453},
  [450] = {.lex_state = 347},
  [451] = {.lex_state = 453},
  [452] = {.lex_state = 453},
  [453] = {.lex_state = 347},
  [454] = {.lex_state = 510, .external_lex_state = 3},
  [455] = {.lex_state = 347},
  [456] = {.lex_state = 453},
  [457] = {.lex_state = 347},
  [458] = {.lex_state = 953},
  [459] = {.lex_state = 347},
  [460] = {.lex_state = 953},
  [461] = {.lex_state = 347},
  [462] = {.lex_state = 347},
  [463] = {.lex_state = 897, .external_lex_state = 3},
  [464] = {.lex_state = 953},
  [465] = {.lex_state = 953},
  [466] = {.lex_state = 953},
  [467] = {.lex_state = 787},
  [468] = {.lex_state = 347},
  [469] = {.lex_state = 787},
  [470] = {.lex_state = 897, .external_lex_state = 3},
  [471] = {.lex_state = 953},
  [472] = {.lex_state = 787},
  [473] = {.lex_state = 347},
  [474] = {.lex_state = 953},
  [475] = {.lex_state = 787},
  [476] = {.lex_state = 941, .external_lex_state = 3},
  [477] = {.lex_state = 907},
  [478] = {.lex_state = 941, .external_lex_state = 3},
  [479] = {.lex_state = 912, .external_lex_state = 4},
  [480] = {.lex_state = 347},
  [481] = {.lex_state = 347},
  [482] = {.lex_state = 347},
  [483] = {.lex_state = 347},
  [484] = {.lex_state = 347},
  [485] = {.lex_state = 453},
  [486] = {.lex_state = 347},
  [487] = {.lex_state = 347},
  [488] = {.lex_state = 347},
  [489] = {.lex_state = 510, .external_lex_state = 3},
  [490] = {.lex_state = 922, .external_lex_state = 4},
  [491] = {.lex_state = 931},
  [492] = {.lex_state = 510, .external_lex_state = 3},
  [493] = {.lex_state = 347},
  [494] = {.lex_state = 839, .external_lex_state = 3},
  [495] = {.lex_state = 453},
  [496] = {.lex_state = 347},
  [497] = {.lex_state = 453},
  [498] = {.lex_state = 347},
  [499] = {.lex_state = 453},
  [500] = {.lex_state = 453},
  [501] = {.lex_state = 347},
  [502] = {.lex_state = 953},
  [503] = {.lex_state = 953},
  [504] = {.lex_state = 953},
  [505] = {.lex_state = 953},
  [506] = {.lex_state = 347},
  [507] = {.lex_state = 787},
  [508] = {.lex_state = 941, .external_lex_state = 3},
  [509] = {.lex_state = 347},
  [510] = {.lex_state = 510, .external_lex_state = 3},
  [511] = {.lex_state = 347},
  [512] = {.lex_state = 347},
  [513] = {.lex_state = 347},
  [514] = {.lex_state = 347},
  [515] = {.lex_state = 453},
  [516] = {.lex_state = 347},
  [517] = {.lex_state = 347},
  [518] = {.lex_state = 347},
  [519] = {.lex_state = 347},
  [520] = {.lex_state = 347},
  [521] = {.lex_state = 953},
  [522] = {.lex_state = 510, .external_lex_state = 3},
  [523] = {.lex_state = 347},
  [524] = {.lex_state = 347},
  [525] = {.lex_state = 347},
  [526] = {.lex_state = 347},
  [527] = {.lex_state = 347},
  [528] = {.lex_state = 347},
  [529] = {.lex_state = 510, .external_lex_state = 3},
  [530] = {.lex_state = 347},
  [531] = {.lex_state = 347},
  [532] = {.lex_state = 347},
  [533] = {.lex_state = 347},
  [534] = {.lex_state = 510, .external_lex_state = 3},
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
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym__] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(3),
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
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(3),
    [anon_sym_DASH_GT] = ACTIONS(3),
    [sym_unit_type] = ACTIONS(3),
    [sym_list_constructor] = ACTIONS(3),
    [sym_function_constructor] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(3),
    [anon_sym_EQ_GT] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(8),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(8),
    [sym__ascii_large] = ACTIONS(3),
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
    [sym_function_declaration] = STATE(20),
    [sym_function_head] = STATE(22),
    [sym__variable] = STATE(23),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(20),
    [sym_foreign] = STATE(20),
    [sym_default] = STATE(20),
    [sym_do_expression] = STATE(25),
    [sym_type_class] = STATE(20),
    [sym_type_class_instance] = STATE(20),
    [sym__general_declaration] = STATE(20),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym_algebraic_datatype] = STATE(20),
    [sym_newtype] = STATE(20),
    [sym_type_synonym] = STATE(20),
    [sym__literal] = STATE(25),
    [sym__identifier] = STATE(27),
    [sym_variable_identifier] = STATE(28),
    [sym_constructor_identifier] = STATE(29),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_module_repeat1] = STATE(30),
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
    [anon_sym_data] = ACTIONS(28),
    [anon_sym_newtype] = ACTIONS(30),
    [anon_sym_type] = ACTIONS(32),
    [sym__variable_pattern] = ACTIONS(34),
    [sym__constructor_pattern] = ACTIONS(36),
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
    [anon_sym_qualified] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(38),
  },
  [4] = {
    [sym_foreign_import] = STATE(35),
    [anon_sym_import] = ACTIONS(54),
    [sym_foreign_export] = ACTIONS(56),
    [sym_comment] = ACTIONS(38),
  },
  [5] = {
    [anon_sym_LPAREN] = ACTIONS(58),
    [sym_comment] = ACTIONS(38),
  },
  [6] = {
    [sym_statement_list] = STATE(39),
    [sym__layout_open_brace] = ACTIONS(60),
    [anon_sym_LBRACE] = ACTIONS(62),
    [sym_comment] = ACTIONS(38),
  },
  [7] = {
    [sym_context] = STATE(42),
    [sym_class] = STATE(43),
    [sym_constructor_identifier] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(64),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [8] = {
    [sym_context] = STATE(45),
    [sym_class] = STATE(43),
    [sym_constructor_identifier] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(64),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [9] = {
    [sym__symbol] = STATE(52),
    [sym__op] = STATE(53),
    [sym_variable_symbol] = STATE(54),
    [sym_constructor_symbol] = STATE(54),
    [sym_integer] = STATE(55),
    [aux_sym_variable_symbol_repeat1] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_EQ] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_BQUOTE] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_BANG] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(70),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(70),
    [anon_sym_1] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(70),
    [anon_sym_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(70),
    [anon_sym_CARET] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(70),
    [anon_sym_TILDE] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(74),
    [anon_sym_BSLASH] = ACTIONS(70),
    [sym_comment] = ACTIONS(76),
    [sym__integer_literal] = ACTIONS(78),
    [sym__octal_literal] = ACTIONS(78),
    [sym__hexidecimal_literal] = ACTIONS(78),
  },
  [10] = {
    [sym_context] = STATE(58),
    [sym_class] = STATE(43),
    [sym_simple_type] = STATE(59),
    [sym_constructor_identifier] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(64),
    [sym__constructor_pattern] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [11] = {
    [sym_context] = STATE(62),
    [sym_class] = STATE(43),
    [sym_simple_type] = STATE(63),
    [sym_constructor_identifier] = STATE(64),
    [anon_sym_LPAREN] = ACTIONS(64),
    [sym__constructor_pattern] = ACTIONS(82),
    [sym_comment] = ACTIONS(38),
  },
  [12] = {
    [sym_simple_type] = STATE(65),
    [sym_constructor_identifier] = STATE(66),
    [sym__constructor_pattern] = ACTIONS(82),
    [sym_comment] = ACTIONS(38),
  },
  [13] = {
    [sym__layout_semicolon] = ACTIONS(84),
    [anon_sym_SEMI] = ACTIONS(86),
    [anon_sym__] = ACTIONS(86),
    [anon_sym_COLON_COLON] = ACTIONS(86),
    [anon_sym_DASH_GT] = ACTIONS(86),
    [sym__variable_pattern] = ACTIONS(88),
    [sym__constructor_pattern] = ACTIONS(88),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(88),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_DQUOTE] = ACTIONS(86),
    [sym__integer_literal] = ACTIONS(86),
    [sym__octal_literal] = ACTIONS(86),
    [sym__hexidecimal_literal] = ACTIONS(86),
  },
  [14] = {
    [sym__layout_semicolon] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(92),
    [anon_sym_COLON_COLON] = ACTIONS(92),
    [sym__variable_pattern] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [15] = {
    [sym__layout_semicolon] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(98),
    [sym__variable_pattern] = ACTIONS(98),
    [sym__constructor_pattern] = ACTIONS(100),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(100),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [sym__integer_literal] = ACTIONS(98),
    [sym__octal_literal] = ACTIONS(98),
    [sym__hexidecimal_literal] = ACTIONS(98),
  },
  [16] = {
    [sym__symbol] = STATE(73),
    [sym__graphic] = STATE(72),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__special] = STATE(73),
    [sym__escape] = STATE(72),
    [anon_sym_SEMI] = ACTIONS(102),
    [anon_sym_LBRACE] = ACTIONS(102),
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_AT] = ACTIONS(104),
    [anon_sym_BQUOTE] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym__] = ACTIONS(106),
    [anon_sym_BANG] = ACTIONS(104),
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
    [anon_sym_CARET] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(104),
    [anon_sym_TILDE] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(104),
    [anon_sym_BSLASH] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_RBRACK] = ACTIONS(102),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(112),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(106),
    [sym__ascii_large] = ACTIONS(114),
    [sym__space] = ACTIONS(110),
  },
  [17] = {
    [sym__symbol] = STATE(81),
    [sym__gap] = STATE(79),
    [sym__graphic] = STATE(79),
    [sym__small] = STATE(81),
    [sym__large] = STATE(81),
    [sym__special] = STATE(81),
    [sym__escape] = STATE(79),
    [aux_sym_string_repeat1] = STATE(84),
    [anon_sym_SEMI] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_AT] = ACTIONS(118),
    [anon_sym_BQUOTE] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym__] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(118),
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
    [anon_sym_CARET] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_TILDE] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(118),
    [anon_sym_BSLASH] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(120),
    [sym__ascii_large] = ACTIONS(130),
    [sym__space] = ACTIONS(132),
    [sym__newline] = ACTIONS(132),
    [sym__tab] = ACTIONS(132),
    [sym__vertical_tab] = ACTIONS(132),
  },
  [18] = {
    [sym__layout_semicolon] = ACTIONS(134),
    [anon_sym_SEMI] = ACTIONS(136),
    [sym__variable_pattern] = ACTIONS(136),
    [sym__constructor_pattern] = ACTIONS(138),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(138),
    [anon_sym_SQUOTE] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [sym__integer_literal] = ACTIONS(136),
    [sym__octal_literal] = ACTIONS(136),
    [sym__hexidecimal_literal] = ACTIONS(136),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [sym_comment] = ACTIONS(38),
  },
  [20] = {
    [sym__layout_semicolon] = ACTIONS(142),
    [anon_sym_SEMI] = ACTIONS(144),
    [sym_comment] = ACTIONS(38),
  },
  [21] = {
    [sym__layout_semicolon] = ACTIONS(146),
    [anon_sym_SEMI] = ACTIONS(148),
    [sym_comment] = ACTIONS(38),
  },
  [22] = {
    [sym_function_body] = STATE(87),
    [anon_sym_EQ] = ACTIONS(150),
    [sym_comment] = ACTIONS(38),
  },
  [23] = {
    [sym__function_pattern] = STATE(95),
    [sym_as_pattern] = STATE(96),
    [sym_wildcard] = STATE(96),
    [sym__variable] = STATE(97),
    [sym_qualified_variable_identifier] = STATE(98),
    [sym__literal] = STATE(96),
    [sym__identifier] = STATE(99),
    [sym_simple_type] = STATE(100),
    [sym_variable_identifier] = STATE(101),
    [sym_constructor_identifier] = STATE(102),
    [sym_integer] = STATE(91),
    [sym_char] = STATE(91),
    [sym_string] = STATE(91),
    [aux_sym_function_head_repeat1] = STATE(103),
    [sym__layout_semicolon] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(154),
    [anon_sym__] = ACTIONS(156),
    [sym__variable_pattern] = ACTIONS(158),
    [sym__constructor_pattern] = ACTIONS(160),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [sym__integer_literal] = ACTIONS(168),
    [sym__octal_literal] = ACTIONS(168),
    [sym__hexidecimal_literal] = ACTIONS(168),
  },
  [24] = {
    [sym__layout_semicolon] = ACTIONS(170),
    [anon_sym_SEMI] = ACTIONS(172),
    [anon_sym__] = ACTIONS(172),
    [sym__variable_pattern] = ACTIONS(174),
    [sym__constructor_pattern] = ACTIONS(174),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [sym__integer_literal] = ACTIONS(172),
    [sym__octal_literal] = ACTIONS(172),
    [sym__hexidecimal_literal] = ACTIONS(172),
  },
  [25] = {
    [sym__layout_semicolon] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(154),
    [sym_comment] = ACTIONS(38),
  },
  [26] = {
    [sym__layout_semicolon] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(178),
    [sym_comment] = ACTIONS(38),
  },
  [27] = {
    [sym__layout_semicolon] = ACTIONS(142),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_COLON_COLON] = ACTIONS(180),
    [sym_comment] = ACTIONS(38),
  },
  [28] = {
    [sym__layout_semicolon] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(184),
    [anon_sym__] = ACTIONS(172),
    [anon_sym_COLON_COLON] = ACTIONS(184),
    [sym__variable_pattern] = ACTIONS(174),
    [sym__constructor_pattern] = ACTIONS(174),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [sym__integer_literal] = ACTIONS(172),
    [sym__octal_literal] = ACTIONS(172),
    [sym__hexidecimal_literal] = ACTIONS(172),
  },
  [29] = {
    [sym__layout_semicolon] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(184),
    [anon_sym_COLON_COLON] = ACTIONS(184),
    [sym__variable_pattern] = ACTIONS(184),
    [sym__constructor_pattern] = ACTIONS(186),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(186),
    [anon_sym_SQUOTE] = ACTIONS(184),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [sym__integer_literal] = ACTIONS(184),
    [sym__octal_literal] = ACTIONS(184),
    [sym__hexidecimal_literal] = ACTIONS(184),
  },
  [30] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(105),
    [sym_function_declaration] = STATE(20),
    [sym_function_head] = STATE(22),
    [sym__variable] = STATE(23),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(20),
    [sym_foreign] = STATE(20),
    [sym_default] = STATE(20),
    [sym_do_expression] = STATE(25),
    [sym_type_class] = STATE(20),
    [sym_type_class_instance] = STATE(20),
    [sym__general_declaration] = STATE(20),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym_algebraic_datatype] = STATE(20),
    [sym_newtype] = STATE(20),
    [sym_type_synonym] = STATE(20),
    [sym__literal] = STATE(25),
    [sym__identifier] = STATE(27),
    [sym_variable_identifier] = STATE(28),
    [sym_constructor_identifier] = STATE(29),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(188),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(16),
    [anon_sym_default] = ACTIONS(18),
    [anon_sym_do] = ACTIONS(20),
    [anon_sym_class] = ACTIONS(22),
    [anon_sym_instance] = ACTIONS(24),
    [anon_sym_infixl] = ACTIONS(26),
    [anon_sym_infixr] = ACTIONS(26),
    [anon_sym_infix] = ACTIONS(26),
    [anon_sym_data] = ACTIONS(28),
    [anon_sym_newtype] = ACTIONS(30),
    [anon_sym_type] = ACTIONS(32),
    [sym__variable_pattern] = ACTIONS(34),
    [sym__constructor_pattern] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [31] = {
    [sym_module_exports] = STATE(108),
    [anon_sym_where] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(192),
    [sym_comment] = ACTIONS(38),
  },
  [32] = {
    [sym_module_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(38),
  },
  [33] = {
    [sym_import_specification] = STATE(113),
    [sym__layout_semicolon] = ACTIONS(196),
    [anon_sym_SEMI] = ACTIONS(198),
    [anon_sym_LPAREN] = ACTIONS(200),
    [anon_sym_as] = ACTIONS(202),
    [anon_sym_hiding] = ACTIONS(204),
    [sym_comment] = ACTIONS(38),
  },
  [34] = {
    [anon_sym_ccall] = ACTIONS(206),
    [anon_sym_stdcall] = ACTIONS(206),
    [anon_sym_cplusplus] = ACTIONS(206),
    [anon_sym_jvm] = ACTIONS(206),
    [anon_sym_dotnet] = ACTIONS(206),
    [sym_comment] = ACTIONS(38),
  },
  [35] = {
    [sym_calling_convention] = STATE(115),
    [anon_sym_ccall] = ACTIONS(208),
    [anon_sym_stdcall] = ACTIONS(208),
    [anon_sym_cplusplus] = ACTIONS(208),
    [anon_sym_jvm] = ACTIONS(208),
    [anon_sym_dotnet] = ACTIONS(208),
    [sym_comment] = ACTIONS(38),
  },
  [36] = {
    [sym__identifier] = STATE(117),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_RPAREN] = ACTIONS(210),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [37] = {
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(121),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(122),
    [sym__literal] = STATE(25),
    [sym_variable_identifier] = STATE(24),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_statement_list_repeat1] = STATE(123),
    [sym__layout_close_brace] = ACTIONS(214),
    [anon_sym_do] = ACTIONS(20),
    [sym__variable_pattern] = ACTIONS(34),
    [sym__constructor_pattern] = ACTIONS(216),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [38] = {
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(124),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(125),
    [sym__literal] = STATE(25),
    [sym_variable_identifier] = STATE(24),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_statement_list_repeat1] = STATE(126),
    [anon_sym_RBRACE] = ACTIONS(218),
    [anon_sym_do] = ACTIONS(20),
    [sym__variable_pattern] = ACTIONS(34),
    [sym__constructor_pattern] = ACTIONS(216),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [39] = {
    [sym__layout_semicolon] = ACTIONS(220),
    [anon_sym_SEMI] = ACTIONS(222),
    [sym_comment] = ACTIONS(38),
  },
  [40] = {
    [sym_class] = STATE(127),
    [sym_constructor_identifier] = STATE(128),
    [sym__constructor_pattern] = ACTIONS(82),
    [sym_comment] = ACTIONS(38),
  },
  [41] = {
    [anon_sym_where] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_COMMA] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_BQUOTE] = ACTIONS(92),
    [anon_sym_COLON_COLON] = ACTIONS(92),
    [sym__variable_pattern] = ACTIONS(224),
    [sym_comment] = ACTIONS(38),
  },
  [42] = {
    [sym_constructor_identifier] = STATE(129),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [43] = {
    [anon_sym_EQ_GT] = ACTIONS(226),
    [sym_comment] = ACTIONS(38),
  },
  [44] = {
    [sym_variable_identifier] = STATE(134),
    [aux_sym_type_class_repeat1] = STATE(135),
    [anon_sym_where] = ACTIONS(228),
    [anon_sym_LPAREN] = ACTIONS(230),
    [sym__variable_pattern] = ACTIONS(232),
    [sym_comment] = ACTIONS(38),
  },
  [45] = {
    [sym_constructor_identifier] = STATE(136),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [46] = {
    [sym_variable_identifier] = STATE(134),
    [aux_sym_type_class_repeat1] = STATE(138),
    [anon_sym_where] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(230),
    [sym__variable_pattern] = ACTIONS(232),
    [sym_comment] = ACTIONS(38),
  },
  [47] = {
    [sym__symbol] = STATE(52),
    [aux_sym_variable_symbol_repeat1] = STATE(140),
    [anon_sym_EQ] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_BANG] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(70),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(70),
    [anon_sym_1] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(70),
    [anon_sym_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(70),
    [anon_sym_CARET] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(70),
    [anon_sym_TILDE] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(70),
    [sym_comment] = ACTIONS(76),
  },
  [48] = {
    [sym__layout_semicolon] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(240),
    [anon_sym_COMMA] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_EQ] = ACTIONS(240),
    [anon_sym_AT] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_BANG] = ACTIONS(240),
    [anon_sym_POUND] = ACTIONS(240),
    [anon_sym_DOLLAR] = ACTIONS(240),
    [anon_sym_PERCENT] = ACTIONS(240),
    [anon_sym_AMP] = ACTIONS(240),
    [anon_sym_1] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DOT] = ACTIONS(240),
    [anon_sym_SLASH] = ACTIONS(240),
    [anon_sym_LT] = ACTIONS(240),
    [anon_sym_GT] = ACTIONS(240),
    [anon_sym_QMARK] = ACTIONS(240),
    [anon_sym_CARET] = ACTIONS(240),
    [anon_sym_PIPE] = ACTIONS(240),
    [anon_sym_TILDE] = ACTIONS(240),
    [anon_sym_COLON] = ACTIONS(240),
    [anon_sym_BSLASH] = ACTIONS(240),
    [sym_comment] = ACTIONS(76),
  },
  [49] = {
    [sym__identifier] = STATE(141),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [50] = {
    [sym__symbol] = STATE(52),
    [aux_sym_variable_symbol_repeat1] = STATE(143),
    [sym__layout_semicolon] = ACTIONS(242),
    [anon_sym_SEMI] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(244),
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_EQ] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_BANG] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(70),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(70),
    [anon_sym_1] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(70),
    [anon_sym_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(70),
    [anon_sym_CARET] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(70),
    [anon_sym_TILDE] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(70),
    [anon_sym_BSLASH] = ACTIONS(70),
    [sym_comment] = ACTIONS(76),
  },
  [51] = {
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_AT] = ACTIONS(138),
    [anon_sym_BQUOTE] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(138),
    [anon_sym_POUND] = ACTIONS(138),
    [anon_sym_DOLLAR] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(138),
    [anon_sym_1] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DOT] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [anon_sym_QMARK] = ACTIONS(138),
    [anon_sym_CARET] = ACTIONS(138),
    [anon_sym_PIPE] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_COLON] = ACTIONS(138),
    [anon_sym_BSLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(76),
  },
  [52] = {
    [sym__layout_semicolon] = ACTIONS(248),
    [anon_sym_SEMI] = ACTIONS(250),
    [anon_sym_COMMA] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_EQ] = ACTIONS(250),
    [anon_sym_AT] = ACTIONS(250),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_BANG] = ACTIONS(250),
    [anon_sym_POUND] = ACTIONS(250),
    [anon_sym_DOLLAR] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(250),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_1] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_DOT] = ACTIONS(250),
    [anon_sym_SLASH] = ACTIONS(250),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_QMARK] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_TILDE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(250),
    [anon_sym_BSLASH] = ACTIONS(250),
    [sym_comment] = ACTIONS(76),
  },
  [53] = {
    [aux_sym_fixity_repeat1] = STATE(145),
    [sym__layout_semicolon] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(254),
    [anon_sym_COMMA] = ACTIONS(256),
    [sym_comment] = ACTIONS(38),
  },
  [54] = {
    [sym__layout_semicolon] = ACTIONS(258),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(260),
    [sym_comment] = ACTIONS(38),
  },
  [55] = {
    [sym__symbol] = STATE(52),
    [sym__op] = STATE(146),
    [sym_variable_symbol] = STATE(54),
    [sym_constructor_symbol] = STATE(54),
    [aux_sym_variable_symbol_repeat1] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_EQ] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_BQUOTE] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_BANG] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(70),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(70),
    [anon_sym_1] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(70),
    [anon_sym_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(70),
    [anon_sym_CARET] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(70),
    [anon_sym_TILDE] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(74),
    [anon_sym_BSLASH] = ACTIONS(70),
    [sym_comment] = ACTIONS(76),
  },
  [56] = {
    [sym__symbol] = STATE(148),
    [sym__layout_semicolon] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(264),
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_EQ] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_BANG] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(70),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(70),
    [anon_sym_1] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(70),
    [anon_sym_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(70),
    [anon_sym_CARET] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(70),
    [anon_sym_TILDE] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(70),
    [anon_sym_BSLASH] = ACTIONS(70),
    [sym_comment] = ACTIONS(76),
  },
  [57] = {
    [sym__layout_semicolon] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_BANG] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(92),
    [anon_sym_deriving] = ACTIONS(92),
    [sym__variable_pattern] = ACTIONS(224),
    [sym__constructor_pattern] = ACTIONS(224),
    [sym_comment] = ACTIONS(38),
  },
  [58] = {
    [sym_simple_type] = STATE(149),
    [sym_constructor_identifier] = STATE(150),
    [sym__constructor_pattern] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [59] = {
    [sym_constructors] = STATE(153),
    [sym_constructor] = STATE(154),
    [sym_deriving] = STATE(155),
    [sym_constructor_identifier] = STATE(156),
    [sym__layout_semicolon] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(270),
    [anon_sym_EQ] = ACTIONS(272),
    [anon_sym_deriving] = ACTIONS(274),
    [sym__constructor_pattern] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [60] = {
    [sym_variable_identifier] = STATE(158),
    [aux_sym_type_class_repeat1] = STATE(159),
    [sym__layout_semicolon] = ACTIONS(276),
    [anon_sym_SEMI] = ACTIONS(278),
    [anon_sym_LPAREN] = ACTIONS(230),
    [anon_sym_EQ] = ACTIONS(278),
    [anon_sym_deriving] = ACTIONS(278),
    [sym__variable_pattern] = ACTIONS(280),
    [sym__constructor_pattern] = ACTIONS(282),
    [sym_comment] = ACTIONS(38),
  },
  [61] = {
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_COMMA] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_DASH_GT] = ACTIONS(92),
    [sym__variable_pattern] = ACTIONS(92),
    [sym__constructor_pattern] = ACTIONS(224),
    [sym_comment] = ACTIONS(38),
  },
  [62] = {
    [sym_simple_type] = STATE(160),
    [sym_constructor_identifier] = STATE(66),
    [sym__constructor_pattern] = ACTIONS(82),
    [sym_comment] = ACTIONS(38),
  },
  [63] = {
    [anon_sym_EQ] = ACTIONS(284),
    [sym_comment] = ACTIONS(38),
  },
  [64] = {
    [sym_variable_identifier] = STATE(163),
    [aux_sym_type_class_repeat1] = STATE(164),
    [anon_sym_LPAREN] = ACTIONS(230),
    [anon_sym_EQ] = ACTIONS(278),
    [sym__variable_pattern] = ACTIONS(286),
    [sym_comment] = ACTIONS(38),
  },
  [65] = {
    [anon_sym_EQ] = ACTIONS(288),
    [sym_comment] = ACTIONS(38),
  },
  [66] = {
    [sym_variable_identifier] = STATE(167),
    [aux_sym_type_class_repeat1] = STATE(164),
    [anon_sym_EQ] = ACTIONS(278),
    [sym__variable_pattern] = ACTIONS(290),
    [sym_comment] = ACTIONS(38),
  },
  [67] = {
    [sym__layout_semicolon] = ACTIONS(292),
    [anon_sym_SEMI] = ACTIONS(294),
    [anon_sym__] = ACTIONS(294),
    [sym__variable_pattern] = ACTIONS(296),
    [sym__constructor_pattern] = ACTIONS(296),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(296),
    [anon_sym_SQUOTE] = ACTIONS(294),
    [anon_sym_DQUOTE] = ACTIONS(294),
    [sym__integer_literal] = ACTIONS(294),
    [sym__octal_literal] = ACTIONS(294),
    [sym__hexidecimal_literal] = ACTIONS(294),
  },
  [68] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(298),
  },
  [69] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(300),
  },
  [70] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(302),
  },
  [71] = {
    [sym__char_escape] = STATE(170),
    [sym__ascii] = STATE(170),
    [anon_sym_AMP] = ACTIONS(304),
    [anon_sym_CARET] = ACTIONS(306),
    [anon_sym_BSLASH] = ACTIONS(304),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(304),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(308),
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
  [72] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(316),
  },
  [73] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(318),
  },
  [74] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(320),
  },
  [75] = {
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
    [anon_sym_BANG] = ACTIONS(322),
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
    [anon_sym_PIPE] = ACTIONS(322),
    [anon_sym_TILDE] = ACTIONS(322),
    [anon_sym_COLON] = ACTIONS(322),
    [anon_sym_BSLASH] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(322),
    [anon_sym_RBRACK] = ACTIONS(322),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(322),
    [anon_sym_DQUOTE] = ACTIONS(322),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(322),
    [sym__ascii_large] = ACTIONS(322),
    [sym__space] = ACTIONS(322),
    [sym__newline] = ACTIONS(322),
    [sym__tab] = ACTIONS(322),
    [sym__vertical_tab] = ACTIONS(322),
  },
  [76] = {
    [anon_sym_SEMI] = ACTIONS(240),
    [anon_sym_LBRACE] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(240),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_EQ] = ACTIONS(240),
    [anon_sym_AT] = ACTIONS(240),
    [anon_sym_BQUOTE] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym__] = ACTIONS(240),
    [anon_sym_BANG] = ACTIONS(240),
    [anon_sym_POUND] = ACTIONS(240),
    [anon_sym_DOLLAR] = ACTIONS(240),
    [anon_sym_PERCENT] = ACTIONS(240),
    [anon_sym_AMP] = ACTIONS(240),
    [anon_sym_1] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DOT] = ACTIONS(240),
    [anon_sym_SLASH] = ACTIONS(240),
    [anon_sym_LT] = ACTIONS(240),
    [anon_sym_GT] = ACTIONS(240),
    [anon_sym_QMARK] = ACTIONS(240),
    [anon_sym_CARET] = ACTIONS(240),
    [anon_sym_PIPE] = ACTIONS(240),
    [anon_sym_TILDE] = ACTIONS(240),
    [anon_sym_COLON] = ACTIONS(240),
    [anon_sym_BSLASH] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(240),
    [anon_sym_RBRACK] = ACTIONS(240),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(240),
    [sym__ascii_large] = ACTIONS(240),
    [sym__space] = ACTIONS(240),
    [sym__newline] = ACTIONS(240),
    [sym__tab] = ACTIONS(240),
    [sym__vertical_tab] = ACTIONS(240),
  },
  [77] = {
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
    [anon_sym_BANG] = ACTIONS(324),
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
    [anon_sym_PIPE] = ACTIONS(324),
    [anon_sym_TILDE] = ACTIONS(324),
    [anon_sym_COLON] = ACTIONS(324),
    [anon_sym_BSLASH] = ACTIONS(324),
    [anon_sym_LBRACK] = ACTIONS(324),
    [anon_sym_RBRACK] = ACTIONS(324),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(324),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(324),
    [sym__ascii_large] = ACTIONS(324),
    [sym__space] = ACTIONS(324),
    [sym__newline] = ACTIONS(324),
    [sym__tab] = ACTIONS(324),
    [sym__vertical_tab] = ACTIONS(324),
  },
  [78] = {
    [sym__char_escape] = STATE(177),
    [sym__ascii] = STATE(177),
    [anon_sym_SEMI] = ACTIONS(240),
    [anon_sym_LBRACE] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(240),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_EQ] = ACTIONS(240),
    [anon_sym_AT] = ACTIONS(240),
    [anon_sym_BQUOTE] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym__] = ACTIONS(240),
    [anon_sym_BANG] = ACTIONS(240),
    [anon_sym_POUND] = ACTIONS(240),
    [anon_sym_DOLLAR] = ACTIONS(240),
    [anon_sym_PERCENT] = ACTIONS(240),
    [anon_sym_AMP] = ACTIONS(326),
    [anon_sym_1] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DOT] = ACTIONS(240),
    [anon_sym_SLASH] = ACTIONS(240),
    [anon_sym_LT] = ACTIONS(240),
    [anon_sym_GT] = ACTIONS(240),
    [anon_sym_QMARK] = ACTIONS(240),
    [anon_sym_CARET] = ACTIONS(328),
    [anon_sym_PIPE] = ACTIONS(240),
    [anon_sym_TILDE] = ACTIONS(240),
    [anon_sym_COLON] = ACTIONS(240),
    [anon_sym_BSLASH] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(240),
    [anon_sym_RBRACK] = ACTIONS(240),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(326),
    [anon_sym_DQUOTE] = ACTIONS(326),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(240),
    [sym__ascii_large] = ACTIONS(240),
    [sym__space] = ACTIONS(240),
    [sym__newline] = ACTIONS(240),
    [sym__tab] = ACTIONS(240),
    [sym__vertical_tab] = ACTIONS(240),
    [anon_sym_x] = ACTIONS(332),
    [anon_sym_X] = ACTIONS(332),
    [anon_sym_o] = ACTIONS(334),
    [anon_sym_O] = ACTIONS(334),
    [anon_sym_a] = ACTIONS(326),
    [anon_sym_b] = ACTIONS(326),
    [anon_sym_f] = ACTIONS(326),
    [anon_sym_n] = ACTIONS(326),
    [anon_sym_r] = ACTIONS(326),
    [anon_sym_t] = ACTIONS(326),
    [anon_sym_v] = ACTIONS(326),
    [anon_sym_NUL] = ACTIONS(336),
    [anon_sym_SOH] = ACTIONS(336),
    [anon_sym_STX] = ACTIONS(336),
    [anon_sym_ETX] = ACTIONS(336),
    [anon_sym_EOT] = ACTIONS(336),
    [anon_sym_ENQ] = ACTIONS(336),
    [anon_sym_ACK] = ACTIONS(336),
    [anon_sym_BEL] = ACTIONS(336),
    [anon_sym_BS] = ACTIONS(336),
    [anon_sym_HT] = ACTIONS(336),
    [anon_sym_LF] = ACTIONS(336),
    [anon_sym_VT] = ACTIONS(336),
    [anon_sym_FF] = ACTIONS(336),
    [anon_sym_CR] = ACTIONS(336),
    [anon_sym_SO] = ACTIONS(336),
    [anon_sym_SI] = ACTIONS(336),
    [anon_sym_DLE] = ACTIONS(336),
    [anon_sym_DC1] = ACTIONS(336),
    [anon_sym_DC2] = ACTIONS(336),
    [anon_sym_DC3] = ACTIONS(336),
    [anon_sym_DC4] = ACTIONS(336),
    [anon_sym_NAK] = ACTIONS(336),
    [anon_sym_SYN] = ACTIONS(336),
    [anon_sym_ETB] = ACTIONS(336),
    [anon_sym_CAN] = ACTIONS(336),
    [anon_sym_EM] = ACTIONS(336),
    [anon_sym_SUB] = ACTIONS(336),
    [anon_sym_ESC] = ACTIONS(336),
    [anon_sym_FS] = ACTIONS(336),
    [anon_sym_GS] = ACTIONS(336),
    [anon_sym_RS] = ACTIONS(336),
    [anon_sym_US] = ACTIONS(336),
    [anon_sym_SP] = ACTIONS(336),
    [anon_sym_DEL] = ACTIONS(336),
  },
  [79] = {
    [anon_sym_SEMI] = ACTIONS(338),
    [anon_sym_LBRACE] = ACTIONS(338),
    [anon_sym_RBRACE] = ACTIONS(338),
    [anon_sym_LPAREN] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_EQ] = ACTIONS(338),
    [anon_sym_AT] = ACTIONS(338),
    [anon_sym_BQUOTE] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym__] = ACTIONS(338),
    [anon_sym_BANG] = ACTIONS(338),
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
    [anon_sym_PIPE] = ACTIONS(338),
    [anon_sym_TILDE] = ACTIONS(338),
    [anon_sym_COLON] = ACTIONS(338),
    [anon_sym_BSLASH] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(338),
    [anon_sym_RBRACK] = ACTIONS(338),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(338),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(338),
    [sym__ascii_large] = ACTIONS(338),
    [sym__space] = ACTIONS(338),
    [sym__newline] = ACTIONS(338),
    [sym__tab] = ACTIONS(338),
    [sym__vertical_tab] = ACTIONS(338),
  },
  [80] = {
    [sym__layout_semicolon] = ACTIONS(340),
    [anon_sym_SEMI] = ACTIONS(342),
    [sym__variable_pattern] = ACTIONS(342),
    [sym__constructor_pattern] = ACTIONS(344),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(344),
    [anon_sym_SQUOTE] = ACTIONS(342),
    [anon_sym_DQUOTE] = ACTIONS(342),
    [sym__integer_literal] = ACTIONS(342),
    [sym__octal_literal] = ACTIONS(342),
    [sym__hexidecimal_literal] = ACTIONS(342),
  },
  [81] = {
    [anon_sym_SEMI] = ACTIONS(346),
    [anon_sym_LBRACE] = ACTIONS(346),
    [anon_sym_RBRACE] = ACTIONS(346),
    [anon_sym_LPAREN] = ACTIONS(346),
    [anon_sym_RPAREN] = ACTIONS(346),
    [anon_sym_EQ] = ACTIONS(346),
    [anon_sym_AT] = ACTIONS(346),
    [anon_sym_BQUOTE] = ACTIONS(346),
    [anon_sym_DASH] = ACTIONS(346),
    [anon_sym__] = ACTIONS(346),
    [anon_sym_BANG] = ACTIONS(346),
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
    [anon_sym_PIPE] = ACTIONS(346),
    [anon_sym_TILDE] = ACTIONS(346),
    [anon_sym_COLON] = ACTIONS(346),
    [anon_sym_BSLASH] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(346),
    [anon_sym_RBRACK] = ACTIONS(346),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(346),
    [anon_sym_DQUOTE] = ACTIONS(346),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(346),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(346),
    [sym__ascii_large] = ACTIONS(346),
    [sym__space] = ACTIONS(346),
    [sym__newline] = ACTIONS(346),
    [sym__tab] = ACTIONS(346),
    [sym__vertical_tab] = ACTIONS(346),
  },
  [82] = {
    [anon_sym_SEMI] = ACTIONS(348),
    [anon_sym_LBRACE] = ACTIONS(348),
    [anon_sym_RBRACE] = ACTIONS(348),
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_RPAREN] = ACTIONS(348),
    [anon_sym_EQ] = ACTIONS(348),
    [anon_sym_AT] = ACTIONS(348),
    [anon_sym_BQUOTE] = ACTIONS(348),
    [anon_sym_DASH] = ACTIONS(348),
    [anon_sym__] = ACTIONS(348),
    [anon_sym_BANG] = ACTIONS(348),
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
    [anon_sym_PIPE] = ACTIONS(348),
    [anon_sym_TILDE] = ACTIONS(348),
    [anon_sym_COLON] = ACTIONS(348),
    [anon_sym_BSLASH] = ACTIONS(348),
    [anon_sym_LBRACK] = ACTIONS(348),
    [anon_sym_RBRACK] = ACTIONS(348),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(348),
    [anon_sym_DQUOTE] = ACTIONS(348),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(348),
    [sym__ascii_large] = ACTIONS(348),
    [sym__space] = ACTIONS(348),
    [sym__newline] = ACTIONS(348),
    [sym__tab] = ACTIONS(348),
    [sym__vertical_tab] = ACTIONS(348),
  },
  [83] = {
    [anon_sym_SEMI] = ACTIONS(350),
    [anon_sym_LBRACE] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(350),
    [anon_sym_LPAREN] = ACTIONS(350),
    [anon_sym_RPAREN] = ACTIONS(350),
    [anon_sym_EQ] = ACTIONS(350),
    [anon_sym_AT] = ACTIONS(350),
    [anon_sym_BQUOTE] = ACTIONS(350),
    [anon_sym_DASH] = ACTIONS(350),
    [anon_sym__] = ACTIONS(350),
    [anon_sym_BANG] = ACTIONS(350),
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
    [anon_sym_PIPE] = ACTIONS(350),
    [anon_sym_TILDE] = ACTIONS(350),
    [anon_sym_COLON] = ACTIONS(350),
    [anon_sym_BSLASH] = ACTIONS(350),
    [anon_sym_LBRACK] = ACTIONS(350),
    [anon_sym_RBRACK] = ACTIONS(350),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(350),
    [anon_sym_DQUOTE] = ACTIONS(350),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(350),
    [sym__ascii_large] = ACTIONS(350),
    [sym__space] = ACTIONS(350),
    [sym__newline] = ACTIONS(350),
    [sym__tab] = ACTIONS(350),
    [sym__vertical_tab] = ACTIONS(350),
  },
  [84] = {
    [sym__symbol] = STATE(81),
    [sym__gap] = STATE(181),
    [sym__graphic] = STATE(181),
    [sym__small] = STATE(81),
    [sym__large] = STATE(81),
    [sym__special] = STATE(81),
    [sym__escape] = STATE(181),
    [anon_sym_SEMI] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_AT] = ACTIONS(118),
    [anon_sym_BQUOTE] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym__] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(118),
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
    [anon_sym_CARET] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_TILDE] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(118),
    [anon_sym_BSLASH] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(352),
    [anon_sym_DQUOTE] = ACTIONS(354),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(120),
    [sym__ascii_large] = ACTIONS(130),
    [sym__space] = ACTIONS(132),
    [sym__newline] = ACTIONS(132),
    [sym__tab] = ACTIONS(132),
    [sym__vertical_tab] = ACTIONS(132),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(356),
    [anon_sym_RBRACE] = ACTIONS(358),
    [anon_sym_import] = ACTIONS(358),
    [anon_sym_foreign] = ACTIONS(358),
    [anon_sym_default] = ACTIONS(358),
    [anon_sym_do] = ACTIONS(358),
    [anon_sym_class] = ACTIONS(358),
    [anon_sym_instance] = ACTIONS(358),
    [anon_sym_infixl] = ACTIONS(358),
    [anon_sym_infixr] = ACTIONS(358),
    [anon_sym_infix] = ACTIONS(358),
    [anon_sym_data] = ACTIONS(358),
    [anon_sym_newtype] = ACTIONS(358),
    [anon_sym_type] = ACTIONS(358),
    [sym__variable_pattern] = ACTIONS(360),
    [sym__constructor_pattern] = ACTIONS(360),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(360),
    [anon_sym_SQUOTE] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(358),
    [sym__integer_literal] = ACTIONS(358),
    [sym__octal_literal] = ACTIONS(358),
    [sym__hexidecimal_literal] = ACTIONS(358),
  },
  [86] = {
    [sym__literal] = STATE(185),
    [sym__identifier] = STATE(185),
    [sym_variable_identifier] = STATE(29),
    [sym_constructor_identifier] = STATE(29),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_function_body_repeat1] = STATE(186),
    [sym__layout_semicolon] = ACTIONS(362),
    [anon_sym_SEMI] = ACTIONS(364),
    [sym__variable_pattern] = ACTIONS(366),
    [sym__constructor_pattern] = ACTIONS(368),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [87] = {
    [sym__layout_semicolon] = ACTIONS(370),
    [anon_sym_SEMI] = ACTIONS(372),
    [sym_comment] = ACTIONS(38),
  },
  [88] = {
    [anon_sym_EQ] = ACTIONS(374),
    [anon_sym__] = ACTIONS(374),
    [sym__variable_pattern] = ACTIONS(376),
    [sym__constructor_pattern] = ACTIONS(376),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(376),
    [anon_sym_SQUOTE] = ACTIONS(374),
    [anon_sym_DQUOTE] = ACTIONS(374),
    [sym__integer_literal] = ACTIONS(374),
    [sym__octal_literal] = ACTIONS(374),
    [sym__hexidecimal_literal] = ACTIONS(374),
  },
  [89] = {
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(86),
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_EQ] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_BQUOTE] = ACTIONS(86),
    [anon_sym__] = ACTIONS(86),
    [anon_sym_COLON_COLON] = ACTIONS(86),
    [anon_sym_DASH_GT] = ACTIONS(86),
    [sym__variable_pattern] = ACTIONS(88),
    [sym__constructor_pattern] = ACTIONS(88),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(88),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_DQUOTE] = ACTIONS(86),
    [sym__integer_literal] = ACTIONS(86),
    [sym__octal_literal] = ACTIONS(86),
    [sym__hexidecimal_literal] = ACTIONS(86),
  },
  [90] = {
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym__] = ACTIONS(92),
    [sym__variable_pattern] = ACTIONS(224),
    [sym__constructor_pattern] = ACTIONS(224),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(224),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [sym__integer_literal] = ACTIONS(92),
    [sym__octal_literal] = ACTIONS(92),
    [sym__hexidecimal_literal] = ACTIONS(92),
  },
  [91] = {
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_COMMA] = ACTIONS(98),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [sym__variable_pattern] = ACTIONS(100),
    [sym__constructor_pattern] = ACTIONS(100),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(100),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [sym__integer_literal] = ACTIONS(98),
    [sym__octal_literal] = ACTIONS(98),
    [sym__hexidecimal_literal] = ACTIONS(98),
  },
  [92] = {
    [sym__symbol] = STATE(73),
    [sym__graphic] = STATE(188),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__special] = STATE(73),
    [sym__escape] = STATE(188),
    [anon_sym_SEMI] = ACTIONS(102),
    [anon_sym_LBRACE] = ACTIONS(102),
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_AT] = ACTIONS(104),
    [anon_sym_BQUOTE] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym__] = ACTIONS(106),
    [anon_sym_BANG] = ACTIONS(104),
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
    [anon_sym_CARET] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(104),
    [anon_sym_TILDE] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(104),
    [anon_sym_BSLASH] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_RBRACK] = ACTIONS(102),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(378),
    [anon_sym_DQUOTE] = ACTIONS(378),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(112),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(106),
    [sym__ascii_large] = ACTIONS(114),
    [sym__space] = ACTIONS(378),
  },
  [93] = {
    [sym__symbol] = STATE(81),
    [sym__gap] = STATE(79),
    [sym__graphic] = STATE(79),
    [sym__small] = STATE(81),
    [sym__large] = STATE(81),
    [sym__special] = STATE(81),
    [sym__escape] = STATE(79),
    [aux_sym_string_repeat1] = STATE(190),
    [anon_sym_SEMI] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_AT] = ACTIONS(118),
    [anon_sym_BQUOTE] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym__] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(118),
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
    [anon_sym_CARET] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_TILDE] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(118),
    [anon_sym_BSLASH] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(380),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(120),
    [sym__ascii_large] = ACTIONS(130),
    [sym__space] = ACTIONS(132),
    [sym__newline] = ACTIONS(132),
    [sym__tab] = ACTIONS(132),
    [sym__vertical_tab] = ACTIONS(132),
  },
  [94] = {
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [sym__variable_pattern] = ACTIONS(138),
    [sym__constructor_pattern] = ACTIONS(138),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(138),
    [anon_sym_SQUOTE] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [sym__integer_literal] = ACTIONS(136),
    [sym__octal_literal] = ACTIONS(136),
    [sym__hexidecimal_literal] = ACTIONS(136),
  },
  [95] = {
    [anon_sym_EQ] = ACTIONS(382),
    [anon_sym__] = ACTIONS(382),
    [sym__variable_pattern] = ACTIONS(384),
    [sym__constructor_pattern] = ACTIONS(384),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(384),
    [anon_sym_SQUOTE] = ACTIONS(382),
    [anon_sym_DQUOTE] = ACTIONS(382),
    [sym__integer_literal] = ACTIONS(382),
    [sym__octal_literal] = ACTIONS(382),
    [sym__hexidecimal_literal] = ACTIONS(382),
  },
  [96] = {
    [anon_sym_EQ] = ACTIONS(386),
    [anon_sym__] = ACTIONS(386),
    [sym__variable_pattern] = ACTIONS(388),
    [sym__constructor_pattern] = ACTIONS(388),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(388),
    [anon_sym_SQUOTE] = ACTIONS(386),
    [anon_sym_DQUOTE] = ACTIONS(386),
    [sym__integer_literal] = ACTIONS(386),
    [sym__octal_literal] = ACTIONS(386),
    [sym__hexidecimal_literal] = ACTIONS(386),
  },
  [97] = {
    [anon_sym_AT] = ACTIONS(390),
    [sym_comment] = ACTIONS(38),
  },
  [98] = {
    [anon_sym_AT] = ACTIONS(172),
    [sym_comment] = ACTIONS(38),
  },
  [99] = {
    [anon_sym_LBRACE] = ACTIONS(392),
    [anon_sym_EQ] = ACTIONS(386),
    [anon_sym__] = ACTIONS(386),
    [sym__variable_pattern] = ACTIONS(388),
    [sym__constructor_pattern] = ACTIONS(388),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(388),
    [anon_sym_SQUOTE] = ACTIONS(386),
    [anon_sym_DQUOTE] = ACTIONS(386),
    [sym__integer_literal] = ACTIONS(386),
    [sym__octal_literal] = ACTIONS(386),
    [sym__hexidecimal_literal] = ACTIONS(386),
  },
  [100] = {
    [anon_sym_LBRACE] = ACTIONS(392),
    [sym_comment] = ACTIONS(38),
  },
  [101] = {
    [anon_sym_LBRACE] = ACTIONS(184),
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym_AT] = ACTIONS(172),
    [anon_sym__] = ACTIONS(184),
    [sym__variable_pattern] = ACTIONS(186),
    [sym__constructor_pattern] = ACTIONS(186),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(186),
    [anon_sym_SQUOTE] = ACTIONS(184),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [sym__integer_literal] = ACTIONS(184),
    [sym__octal_literal] = ACTIONS(184),
    [sym__hexidecimal_literal] = ACTIONS(184),
  },
  [102] = {
    [sym_variable_identifier] = STATE(167),
    [aux_sym_type_class_repeat1] = STATE(193),
    [anon_sym_LBRACE] = ACTIONS(184),
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym__] = ACTIONS(184),
    [sym__variable_pattern] = ACTIONS(186),
    [sym__constructor_pattern] = ACTIONS(186),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(186),
    [anon_sym_SQUOTE] = ACTIONS(184),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [sym__integer_literal] = ACTIONS(184),
    [sym__octal_literal] = ACTIONS(184),
    [sym__hexidecimal_literal] = ACTIONS(184),
  },
  [103] = {
    [sym__function_pattern] = STATE(194),
    [sym_as_pattern] = STATE(96),
    [sym_wildcard] = STATE(96),
    [sym__variable] = STATE(97),
    [sym_qualified_variable_identifier] = STATE(98),
    [sym__literal] = STATE(96),
    [sym__identifier] = STATE(99),
    [sym_simple_type] = STATE(100),
    [sym_variable_identifier] = STATE(101),
    [sym_constructor_identifier] = STATE(102),
    [sym_integer] = STATE(91),
    [sym_char] = STATE(91),
    [sym_string] = STATE(91),
    [anon_sym_EQ] = ACTIONS(394),
    [anon_sym__] = ACTIONS(156),
    [sym__variable_pattern] = ACTIONS(158),
    [sym__constructor_pattern] = ACTIONS(160),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [sym__integer_literal] = ACTIONS(168),
    [sym__octal_literal] = ACTIONS(168),
    [sym__hexidecimal_literal] = ACTIONS(168),
  },
  [104] = {
    [sym_type] = STATE(200),
    [sym__generic_type_constructor] = STATE(201),
    [sym_tupling_constructor] = STATE(196),
    [sym_tuple] = STATE(201),
    [sym_list] = STATE(201),
    [sym_parenthesized_constructor] = STATE(201),
    [sym_context] = STATE(202),
    [sym_class] = STATE(203),
    [sym_variable_identifier] = STATE(204),
    [sym_constructor_identifier] = STATE(205),
    [sym__type_constructors] = STATE(196),
    [sym_qualified_type_constructor] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(396),
    [sym_unit_type] = ACTIONS(398),
    [sym_list_constructor] = ACTIONS(398),
    [sym_function_constructor] = ACTIONS(398),
    [anon_sym_LBRACK] = ACTIONS(400),
    [sym__variable_pattern] = ACTIONS(402),
    [sym__constructor_pattern] = ACTIONS(404),
    [sym_module_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(38),
  },
  [105] = {
    [sym__layout_semicolon] = ACTIONS(408),
    [anon_sym_SEMI] = ACTIONS(410),
    [sym_comment] = ACTIONS(38),
  },
  [106] = {
    [sym_declarations] = STATE(210),
    [sym__layout_open_brace] = ACTIONS(412),
    [anon_sym_LBRACE] = ACTIONS(414),
    [sym_comment] = ACTIONS(38),
  },
  [107] = {
    [sym_export] = STATE(212),
    [sym__identifier] = STATE(213),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_RPAREN] = ACTIONS(416),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [108] = {
    [anon_sym_where] = ACTIONS(418),
    [sym_comment] = ACTIONS(38),
  },
  [109] = {
    [sym_import_specification] = STATE(216),
    [sym__layout_semicolon] = ACTIONS(420),
    [anon_sym_SEMI] = ACTIONS(422),
    [anon_sym_LPAREN] = ACTIONS(200),
    [anon_sym_as] = ACTIONS(424),
    [anon_sym_hiding] = ACTIONS(204),
    [sym_comment] = ACTIONS(38),
  },
  [110] = {
    [sym__identifier] = STATE(218),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_RPAREN] = ACTIONS(426),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [111] = {
    [sym_module_identifier] = ACTIONS(428),
    [sym_comment] = ACTIONS(38),
  },
  [112] = {
    [anon_sym_LPAREN] = ACTIONS(430),
    [sym_comment] = ACTIONS(38),
  },
  [113] = {
    [sym__layout_semicolon] = ACTIONS(420),
    [anon_sym_SEMI] = ACTIONS(422),
    [sym_comment] = ACTIONS(38),
  },
  [114] = {
    [anon_sym_unsafe] = ACTIONS(432),
    [anon_sym_safe] = ACTIONS(432),
    [sym__variable_pattern] = ACTIONS(434),
    [sym__constructor_pattern] = ACTIONS(434),
    [sym_comment] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(432),
  },
  [115] = {
    [sym_safety] = STATE(223),
    [sym_type_signature] = STATE(224),
    [sym__identifier] = STATE(225),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym_string] = STATE(226),
    [anon_sym_unsafe] = ACTIONS(436),
    [anon_sym_safe] = ACTIONS(436),
    [sym__variable_pattern] = ACTIONS(158),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(438),
  },
  [116] = {
    [sym__layout_semicolon] = ACTIONS(440),
    [anon_sym_SEMI] = ACTIONS(442),
    [sym_comment] = ACTIONS(38),
  },
  [117] = {
    [aux_sym_export_repeat1] = STATE(229),
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(446),
    [sym_comment] = ACTIONS(38),
  },
  [118] = {
    [anon_sym_RBRACE] = ACTIONS(184),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym_BQUOTE] = ACTIONS(184),
    [anon_sym_COLON_COLON] = ACTIONS(184),
    [sym_comment] = ACTIONS(38),
  },
  [119] = {
    [sym__layout_semicolon] = ACTIONS(448),
    [anon_sym_SEMI] = ACTIONS(450),
    [sym_comment] = ACTIONS(38),
  },
  [120] = {
    [sym__variable_pattern] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [121] = {
    [sym__layout_semicolon] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(454),
    [sym_comment] = ACTIONS(38),
  },
  [122] = {
    [sym__layout_close_brace] = ACTIONS(456),
    [anon_sym_do] = ACTIONS(458),
    [sym__variable_pattern] = ACTIONS(460),
    [sym__constructor_pattern] = ACTIONS(460),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(460),
    [anon_sym_SQUOTE] = ACTIONS(458),
    [anon_sym_DQUOTE] = ACTIONS(458),
    [sym__integer_literal] = ACTIONS(458),
    [sym__octal_literal] = ACTIONS(458),
    [sym__hexidecimal_literal] = ACTIONS(458),
  },
  [123] = {
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(121),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(232),
    [sym__literal] = STATE(25),
    [sym_variable_identifier] = STATE(24),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [sym__layout_close_brace] = ACTIONS(462),
    [anon_sym_do] = ACTIONS(20),
    [sym__variable_pattern] = ACTIONS(34),
    [sym__constructor_pattern] = ACTIONS(216),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [124] = {
    [sym__layout_semicolon] = ACTIONS(464),
    [anon_sym_SEMI] = ACTIONS(466),
    [sym_comment] = ACTIONS(38),
  },
  [125] = {
    [anon_sym_RBRACE] = ACTIONS(458),
    [anon_sym_do] = ACTIONS(458),
    [sym__variable_pattern] = ACTIONS(460),
    [sym__constructor_pattern] = ACTIONS(460),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(460),
    [anon_sym_SQUOTE] = ACTIONS(458),
    [anon_sym_DQUOTE] = ACTIONS(458),
    [sym__integer_literal] = ACTIONS(458),
    [sym__octal_literal] = ACTIONS(458),
    [sym__hexidecimal_literal] = ACTIONS(458),
  },
  [126] = {
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(124),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(234),
    [sym__literal] = STATE(25),
    [sym_variable_identifier] = STATE(24),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [anon_sym_RBRACE] = ACTIONS(468),
    [anon_sym_do] = ACTIONS(20),
    [sym__variable_pattern] = ACTIONS(34),
    [sym__constructor_pattern] = ACTIONS(216),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [127] = {
    [aux_sym_context_repeat1] = STATE(237),
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(472),
    [sym_comment] = ACTIONS(38),
  },
  [128] = {
    [sym_variable_identifier] = STATE(238),
    [anon_sym_LPAREN] = ACTIONS(230),
    [sym__variable_pattern] = ACTIONS(212),
    [sym_comment] = ACTIONS(38),
  },
  [129] = {
    [sym_variable_identifier] = STATE(240),
    [aux_sym_type_class_repeat1] = STATE(241),
    [anon_sym_where] = ACTIONS(474),
    [sym__variable_pattern] = ACTIONS(232),
    [sym_comment] = ACTIONS(38),
  },
  [130] = {
    [sym__constructor_pattern] = ACTIONS(476),
    [sym_comment] = ACTIONS(38),
  },
  [131] = {
    [sym_general_declarations] = STATE(244),
    [sym__layout_open_brace] = ACTIONS(478),
    [anon_sym_LBRACE] = ACTIONS(480),
    [sym_comment] = ACTIONS(38),
  },
  [132] = {
    [sym_variable_identifier] = STATE(167),
    [aux_sym_type_class_repeat1] = STATE(245),
    [sym__variable_pattern] = ACTIONS(286),
    [sym_comment] = ACTIONS(38),
  },
  [133] = {
    [anon_sym_where] = ACTIONS(86),
    [anon_sym_EQ_GT] = ACTIONS(86),
    [sym__variable_pattern] = ACTIONS(88),
    [sym_comment] = ACTIONS(38),
  },
  [134] = {
    [anon_sym_where] = ACTIONS(482),
    [anon_sym_EQ_GT] = ACTIONS(484),
    [sym__variable_pattern] = ACTIONS(486),
    [sym_comment] = ACTIONS(38),
  },
  [135] = {
    [sym_variable_identifier] = STATE(246),
    [anon_sym_where] = ACTIONS(474),
    [sym__variable_pattern] = ACTIONS(232),
    [sym_comment] = ACTIONS(38),
  },
  [136] = {
    [sym_variable_identifier] = STATE(240),
    [aux_sym_type_class_repeat1] = STATE(248),
    [anon_sym_where] = ACTIONS(488),
    [sym__variable_pattern] = ACTIONS(232),
    [sym_comment] = ACTIONS(38),
  },
  [137] = {
    [sym_general_declarations] = STATE(249),
    [sym__layout_open_brace] = ACTIONS(478),
    [anon_sym_LBRACE] = ACTIONS(480),
    [sym_comment] = ACTIONS(38),
  },
  [138] = {
    [sym_variable_identifier] = STATE(246),
    [anon_sym_where] = ACTIONS(488),
    [sym__variable_pattern] = ACTIONS(232),
    [sym_comment] = ACTIONS(38),
  },
  [139] = {
    [sym__symbol] = STATE(52),
    [aux_sym_variable_symbol_repeat1] = STATE(251),
    [sym__layout_semicolon] = ACTIONS(490),
    [anon_sym_SEMI] = ACTIONS(492),
    [anon_sym_COMMA] = ACTIONS(492),
    [anon_sym_RPAREN] = ACTIONS(494),
    [anon_sym_EQ] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_BANG] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(70),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(70),
    [anon_sym_1] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(70),
    [anon_sym_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(70),
    [anon_sym_CARET] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(70),
    [anon_sym_TILDE] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(70),
    [anon_sym_BSLASH] = ACTIONS(70),
    [sym_comment] = ACTIONS(76),
  },
  [140] = {
    [sym__symbol] = STATE(148),
    [sym__layout_semicolon] = ACTIONS(496),
    [anon_sym_SEMI] = ACTIONS(498),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_RPAREN] = ACTIONS(500),
    [anon_sym_EQ] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_BANG] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(70),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(70),
    [anon_sym_1] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(70),
    [anon_sym_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(70),
    [anon_sym_CARET] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(70),
    [anon_sym_TILDE] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(70),
    [anon_sym_BSLASH] = ACTIONS(70),
    [sym_comment] = ACTIONS(76),
  },
  [141] = {
    [anon_sym_BQUOTE] = ACTIONS(502),
    [sym_comment] = ACTIONS(38),
  },
  [142] = {
    [sym__layout_semicolon] = ACTIONS(490),
    [anon_sym_SEMI] = ACTIONS(504),
    [anon_sym_COMMA] = ACTIONS(504),
    [sym_comment] = ACTIONS(38),
  },
  [143] = {
    [sym__symbol] = STATE(148),
    [sym__layout_semicolon] = ACTIONS(490),
    [anon_sym_SEMI] = ACTIONS(492),
    [anon_sym_COMMA] = ACTIONS(492),
    [anon_sym_RPAREN] = ACTIONS(494),
    [anon_sym_EQ] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_BANG] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(70),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(70),
    [anon_sym_1] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(70),
    [anon_sym_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(70),
    [anon_sym_CARET] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(70),
    [anon_sym_TILDE] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(70),
    [anon_sym_BSLASH] = ACTIONS(70),
    [sym_comment] = ACTIONS(76),
  },
  [144] = {
    [sym__symbol] = STATE(52),
    [sym__op] = STATE(254),
    [sym_variable_symbol] = STATE(54),
    [sym_constructor_symbol] = STATE(54),
    [aux_sym_variable_symbol_repeat1] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_EQ] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_BQUOTE] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_BANG] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(70),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(70),
    [anon_sym_1] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(70),
    [anon_sym_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(70),
    [anon_sym_CARET] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(70),
    [anon_sym_TILDE] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(74),
    [anon_sym_BSLASH] = ACTIONS(70),
    [sym_comment] = ACTIONS(76),
  },
  [145] = {
    [sym__layout_semicolon] = ACTIONS(506),
    [anon_sym_SEMI] = ACTIONS(508),
    [anon_sym_COMMA] = ACTIONS(510),
    [sym_comment] = ACTIONS(38),
  },
  [146] = {
    [aux_sym_fixity_repeat1] = STATE(256),
    [sym__layout_semicolon] = ACTIONS(506),
    [anon_sym_SEMI] = ACTIONS(508),
    [anon_sym_COMMA] = ACTIONS(256),
    [sym_comment] = ACTIONS(38),
  },
  [147] = {
    [sym__layout_semicolon] = ACTIONS(496),
    [anon_sym_SEMI] = ACTIONS(512),
    [anon_sym_COMMA] = ACTIONS(512),
    [sym_comment] = ACTIONS(38),
  },
  [148] = {
    [sym__layout_semicolon] = ACTIONS(514),
    [anon_sym_SEMI] = ACTIONS(516),
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(516),
    [anon_sym_EQ] = ACTIONS(516),
    [anon_sym_AT] = ACTIONS(516),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_BANG] = ACTIONS(516),
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
    [anon_sym_CARET] = ACTIONS(516),
    [anon_sym_PIPE] = ACTIONS(516),
    [anon_sym_TILDE] = ACTIONS(516),
    [anon_sym_COLON] = ACTIONS(516),
    [anon_sym_BSLASH] = ACTIONS(516),
    [sym_comment] = ACTIONS(76),
  },
  [149] = {
    [sym_constructors] = STATE(258),
    [sym_constructor] = STATE(154),
    [sym_deriving] = STATE(259),
    [sym_constructor_identifier] = STATE(156),
    [sym__layout_semicolon] = ACTIONS(518),
    [anon_sym_SEMI] = ACTIONS(520),
    [anon_sym_EQ] = ACTIONS(522),
    [anon_sym_deriving] = ACTIONS(274),
    [sym__constructor_pattern] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [150] = {
    [sym_variable_identifier] = STATE(261),
    [aux_sym_type_class_repeat1] = STATE(159),
    [sym__layout_semicolon] = ACTIONS(276),
    [anon_sym_SEMI] = ACTIONS(278),
    [anon_sym_EQ] = ACTIONS(278),
    [anon_sym_deriving] = ACTIONS(278),
    [sym__variable_pattern] = ACTIONS(524),
    [sym__constructor_pattern] = ACTIONS(282),
    [sym_comment] = ACTIONS(38),
  },
  [151] = {
    [sym_constructors] = STATE(258),
    [sym_constructor] = STATE(154),
    [sym_deriving] = STATE(259),
    [sym_constructor_identifier] = STATE(156),
    [sym__layout_semicolon] = ACTIONS(518),
    [anon_sym_SEMI] = ACTIONS(520),
    [anon_sym_deriving] = ACTIONS(274),
    [sym__constructor_pattern] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [152] = {
    [sym__identifier] = STATE(263),
    [sym_variable_identifier] = STATE(29),
    [sym_constructor_identifier] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(526),
    [sym__variable_pattern] = ACTIONS(402),
    [sym__constructor_pattern] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [153] = {
    [sym_deriving] = STATE(259),
    [sym__layout_semicolon] = ACTIONS(518),
    [anon_sym_SEMI] = ACTIONS(520),
    [anon_sym_deriving] = ACTIONS(274),
    [sym_comment] = ACTIONS(38),
  },
  [154] = {
    [aux_sym_constructors_repeat1] = STATE(265),
    [sym__layout_semicolon] = ACTIONS(528),
    [anon_sym_SEMI] = ACTIONS(530),
    [anon_sym_PIPE] = ACTIONS(532),
    [anon_sym_deriving] = ACTIONS(530),
    [sym_comment] = ACTIONS(38),
  },
  [155] = {
    [sym__layout_semicolon] = ACTIONS(518),
    [anon_sym_SEMI] = ACTIONS(520),
    [sym_comment] = ACTIONS(38),
  },
  [156] = {
    [sym_strict] = STATE(268),
    [sym__identifier] = STATE(268),
    [sym_variable_identifier] = STATE(269),
    [sym_constructor_identifier] = STATE(269),
    [sym_fields] = STATE(270),
    [aux_sym_constructor_repeat1] = STATE(271),
    [sym__layout_semicolon] = ACTIONS(534),
    [anon_sym_SEMI] = ACTIONS(536),
    [anon_sym_LBRACE] = ACTIONS(538),
    [anon_sym_BANG] = ACTIONS(540),
    [anon_sym_PIPE] = ACTIONS(536),
    [anon_sym_deriving] = ACTIONS(536),
    [sym__variable_pattern] = ACTIONS(280),
    [sym__constructor_pattern] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [157] = {
    [sym__layout_semicolon] = ACTIONS(84),
    [anon_sym_SEMI] = ACTIONS(86),
    [anon_sym_EQ] = ACTIONS(86),
    [anon_sym_BANG] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(86),
    [anon_sym_EQ_GT] = ACTIONS(86),
    [anon_sym_deriving] = ACTIONS(86),
    [sym__variable_pattern] = ACTIONS(88),
    [sym__constructor_pattern] = ACTIONS(88),
    [sym_comment] = ACTIONS(38),
  },
  [158] = {
    [sym__layout_semicolon] = ACTIONS(542),
    [anon_sym_SEMI] = ACTIONS(482),
    [anon_sym_EQ] = ACTIONS(482),
    [anon_sym_EQ_GT] = ACTIONS(484),
    [anon_sym_deriving] = ACTIONS(482),
    [sym__variable_pattern] = ACTIONS(486),
    [sym__constructor_pattern] = ACTIONS(486),
    [sym_comment] = ACTIONS(38),
  },
  [159] = {
    [sym_variable_identifier] = STATE(272),
    [sym__layout_semicolon] = ACTIONS(544),
    [anon_sym_SEMI] = ACTIONS(546),
    [anon_sym_EQ] = ACTIONS(546),
    [anon_sym_deriving] = ACTIONS(546),
    [sym__variable_pattern] = ACTIONS(524),
    [sym__constructor_pattern] = ACTIONS(548),
    [sym_comment] = ACTIONS(38),
  },
  [160] = {
    [anon_sym_EQ] = ACTIONS(550),
    [sym_comment] = ACTIONS(38),
  },
  [161] = {
    [sym_new_constructor] = STATE(274),
    [sym_constructor_identifier] = STATE(275),
    [sym__constructor_pattern] = ACTIONS(82),
    [sym_comment] = ACTIONS(38),
  },
  [162] = {
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(86),
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_EQ] = ACTIONS(86),
    [anon_sym_DASH_GT] = ACTIONS(86),
    [sym_unit_type] = ACTIONS(86),
    [sym_list_constructor] = ACTIONS(86),
    [sym_function_constructor] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_RBRACK] = ACTIONS(86),
    [anon_sym_EQ_GT] = ACTIONS(86),
    [sym__variable_pattern] = ACTIONS(86),
    [sym__constructor_pattern] = ACTIONS(88),
    [sym_module_identifier] = ACTIONS(88),
    [sym_comment] = ACTIONS(38),
  },
  [163] = {
    [anon_sym_EQ] = ACTIONS(482),
    [anon_sym_EQ_GT] = ACTIONS(484),
    [sym__variable_pattern] = ACTIONS(482),
    [sym_comment] = ACTIONS(38),
  },
  [164] = {
    [sym_variable_identifier] = STATE(276),
    [anon_sym_EQ] = ACTIONS(546),
    [sym__variable_pattern] = ACTIONS(290),
    [sym_comment] = ACTIONS(38),
  },
  [165] = {
    [sym_type] = STATE(279),
    [sym__generic_type_constructor] = STATE(201),
    [sym_tupling_constructor] = STATE(196),
    [sym_tuple] = STATE(201),
    [sym_list] = STATE(201),
    [sym_parenthesized_constructor] = STATE(201),
    [sym_variable_identifier] = STATE(204),
    [sym__type_constructors] = STATE(196),
    [sym_qualified_type_constructor] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(552),
    [sym_unit_type] = ACTIONS(398),
    [sym_list_constructor] = ACTIONS(398),
    [sym_function_constructor] = ACTIONS(398),
    [anon_sym_LBRACK] = ACTIONS(400),
    [sym__variable_pattern] = ACTIONS(402),
    [sym__constructor_pattern] = ACTIONS(554),
    [sym_module_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(38),
  },
  [166] = {
    [anon_sym_EQ] = ACTIONS(86),
    [sym__variable_pattern] = ACTIONS(86),
    [sym_comment] = ACTIONS(38),
  },
  [167] = {
    [anon_sym_LBRACE] = ACTIONS(482),
    [anon_sym_LPAREN] = ACTIONS(482),
    [anon_sym_COMMA] = ACTIONS(482),
    [anon_sym_RPAREN] = ACTIONS(482),
    [anon_sym_EQ] = ACTIONS(482),
    [anon_sym_DASH_GT] = ACTIONS(482),
    [sym_unit_type] = ACTIONS(482),
    [sym_list_constructor] = ACTIONS(482),
    [sym_function_constructor] = ACTIONS(482),
    [anon_sym_LBRACK] = ACTIONS(482),
    [anon_sym_RBRACK] = ACTIONS(482),
    [sym__variable_pattern] = ACTIONS(482),
    [sym__constructor_pattern] = ACTIONS(486),
    [sym_module_identifier] = ACTIONS(486),
    [sym_comment] = ACTIONS(38),
  },
  [168] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(556),
  },
  [169] = {
    [sym__cntrl] = STATE(281),
    [anon_sym_AT] = ACTIONS(558),
    [anon_sym__] = ACTIONS(558),
    [anon_sym_CARET] = ACTIONS(558),
    [anon_sym_BSLASH] = ACTIONS(558),
    [anon_sym_LBRACK] = ACTIONS(558),
    [anon_sym_RBRACK] = ACTIONS(558),
    [sym_comment] = ACTIONS(76),
    [sym__ascii_large] = ACTIONS(558),
  },
  [170] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(560),
  },
  [171] = {
    [aux_sym__escape_repeat1] = STATE(283),
    [sym_comment] = ACTIONS(38),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(562),
  },
  [172] = {
    [aux_sym__escape_repeat2] = STATE(285),
    [sym_comment] = ACTIONS(38),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(564),
  },
  [173] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(566),
  },
  [174] = {
    [sym__layout_semicolon] = ACTIONS(568),
    [anon_sym_SEMI] = ACTIONS(570),
    [sym__variable_pattern] = ACTIONS(570),
    [sym__constructor_pattern] = ACTIONS(572),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(572),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DQUOTE] = ACTIONS(570),
    [sym__integer_literal] = ACTIONS(570),
    [sym__octal_literal] = ACTIONS(570),
    [sym__hexidecimal_literal] = ACTIONS(570),
  },
  [175] = {
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
    [anon_sym_BANG] = ACTIONS(574),
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
    [anon_sym_PIPE] = ACTIONS(574),
    [anon_sym_TILDE] = ACTIONS(574),
    [anon_sym_COLON] = ACTIONS(574),
    [anon_sym_BSLASH] = ACTIONS(574),
    [anon_sym_LBRACK] = ACTIONS(574),
    [anon_sym_RBRACK] = ACTIONS(574),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(574),
    [anon_sym_DQUOTE] = ACTIONS(574),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(574),
    [sym__ascii_large] = ACTIONS(574),
    [sym__space] = ACTIONS(574),
    [sym__newline] = ACTIONS(574),
    [sym__tab] = ACTIONS(574),
    [sym__vertical_tab] = ACTIONS(574),
  },
  [176] = {
    [sym__cntrl] = STATE(287),
    [anon_sym_AT] = ACTIONS(576),
    [anon_sym__] = ACTIONS(576),
    [anon_sym_CARET] = ACTIONS(576),
    [anon_sym_BSLASH] = ACTIONS(576),
    [anon_sym_LBRACK] = ACTIONS(576),
    [anon_sym_RBRACK] = ACTIONS(576),
    [sym_comment] = ACTIONS(76),
    [sym__ascii_large] = ACTIONS(576),
  },
  [177] = {
    [anon_sym_SEMI] = ACTIONS(578),
    [anon_sym_LBRACE] = ACTIONS(578),
    [anon_sym_RBRACE] = ACTIONS(578),
    [anon_sym_LPAREN] = ACTIONS(578),
    [anon_sym_RPAREN] = ACTIONS(578),
    [anon_sym_EQ] = ACTIONS(578),
    [anon_sym_AT] = ACTIONS(578),
    [anon_sym_BQUOTE] = ACTIONS(578),
    [anon_sym_DASH] = ACTIONS(578),
    [anon_sym__] = ACTIONS(578),
    [anon_sym_BANG] = ACTIONS(578),
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
    [anon_sym_PIPE] = ACTIONS(578),
    [anon_sym_TILDE] = ACTIONS(578),
    [anon_sym_COLON] = ACTIONS(578),
    [anon_sym_BSLASH] = ACTIONS(578),
    [anon_sym_LBRACK] = ACTIONS(578),
    [anon_sym_RBRACK] = ACTIONS(578),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(578),
    [anon_sym_DQUOTE] = ACTIONS(578),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(578),
    [sym__ascii_large] = ACTIONS(578),
    [sym__space] = ACTIONS(578),
    [sym__newline] = ACTIONS(578),
    [sym__tab] = ACTIONS(578),
    [sym__vertical_tab] = ACTIONS(578),
  },
  [178] = {
    [aux_sym__escape_repeat1] = STATE(289),
    [sym_comment] = ACTIONS(38),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(580),
  },
  [179] = {
    [aux_sym__escape_repeat2] = STATE(291),
    [sym_comment] = ACTIONS(38),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(582),
  },
  [180] = {
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
    [anon_sym_BANG] = ACTIONS(584),
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
    [anon_sym_PIPE] = ACTIONS(584),
    [anon_sym_TILDE] = ACTIONS(584),
    [anon_sym_COLON] = ACTIONS(584),
    [anon_sym_BSLASH] = ACTIONS(584),
    [anon_sym_LBRACK] = ACTIONS(584),
    [anon_sym_RBRACK] = ACTIONS(584),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(584),
    [anon_sym_DQUOTE] = ACTIONS(584),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(584),
    [sym__ascii_large] = ACTIONS(584),
    [sym__space] = ACTIONS(584),
    [sym__newline] = ACTIONS(584),
    [sym__tab] = ACTIONS(584),
    [sym__vertical_tab] = ACTIONS(584),
  },
  [181] = {
    [anon_sym_SEMI] = ACTIONS(586),
    [anon_sym_LBRACE] = ACTIONS(586),
    [anon_sym_RBRACE] = ACTIONS(586),
    [anon_sym_LPAREN] = ACTIONS(586),
    [anon_sym_RPAREN] = ACTIONS(586),
    [anon_sym_EQ] = ACTIONS(586),
    [anon_sym_AT] = ACTIONS(586),
    [anon_sym_BQUOTE] = ACTIONS(586),
    [anon_sym_DASH] = ACTIONS(586),
    [anon_sym__] = ACTIONS(586),
    [anon_sym_BANG] = ACTIONS(586),
    [anon_sym_POUND] = ACTIONS(586),
    [anon_sym_DOLLAR] = ACTIONS(586),
    [anon_sym_PERCENT] = ACTIONS(586),
    [anon_sym_AMP] = ACTIONS(586),
    [anon_sym_1] = ACTIONS(586),
    [anon_sym_PLUS] = ACTIONS(586),
    [anon_sym_DOT] = ACTIONS(586),
    [anon_sym_SLASH] = ACTIONS(586),
    [anon_sym_LT] = ACTIONS(586),
    [anon_sym_GT] = ACTIONS(586),
    [anon_sym_QMARK] = ACTIONS(586),
    [anon_sym_CARET] = ACTIONS(586),
    [anon_sym_PIPE] = ACTIONS(586),
    [anon_sym_TILDE] = ACTIONS(586),
    [anon_sym_COLON] = ACTIONS(586),
    [anon_sym_BSLASH] = ACTIONS(586),
    [anon_sym_LBRACK] = ACTIONS(586),
    [anon_sym_RBRACK] = ACTIONS(586),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(586),
    [anon_sym_DQUOTE] = ACTIONS(586),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(586),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(586),
    [sym__ascii_large] = ACTIONS(586),
    [sym__space] = ACTIONS(586),
    [sym__newline] = ACTIONS(586),
    [sym__tab] = ACTIONS(586),
    [sym__vertical_tab] = ACTIONS(586),
  },
  [182] = {
    [sym__layout_semicolon] = ACTIONS(588),
    [anon_sym_SEMI] = ACTIONS(590),
    [sym__variable_pattern] = ACTIONS(590),
    [sym__constructor_pattern] = ACTIONS(592),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(590),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [sym__integer_literal] = ACTIONS(590),
    [sym__octal_literal] = ACTIONS(590),
    [sym__hexidecimal_literal] = ACTIONS(590),
  },
  [183] = {
    [sym__layout_semicolon] = ACTIONS(84),
    [anon_sym_SEMI] = ACTIONS(86),
    [anon_sym_DASH_GT] = ACTIONS(86),
    [sym__variable_pattern] = ACTIONS(86),
    [sym__constructor_pattern] = ACTIONS(88),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(88),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_DQUOTE] = ACTIONS(86),
    [sym__integer_literal] = ACTIONS(86),
    [sym__octal_literal] = ACTIONS(86),
    [sym__hexidecimal_literal] = ACTIONS(86),
  },
  [184] = {
    [sym__layout_semicolon] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(92),
    [anon_sym_DASH_GT] = ACTIONS(92),
    [sym__variable_pattern] = ACTIONS(92),
    [sym__constructor_pattern] = ACTIONS(224),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(224),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [sym__integer_literal] = ACTIONS(92),
    [sym__octal_literal] = ACTIONS(92),
    [sym__hexidecimal_literal] = ACTIONS(92),
  },
  [185] = {
    [sym__layout_semicolon] = ACTIONS(594),
    [anon_sym_SEMI] = ACTIONS(596),
    [sym__variable_pattern] = ACTIONS(596),
    [sym__constructor_pattern] = ACTIONS(598),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(598),
    [anon_sym_SQUOTE] = ACTIONS(596),
    [anon_sym_DQUOTE] = ACTIONS(596),
    [sym__integer_literal] = ACTIONS(596),
    [sym__octal_literal] = ACTIONS(596),
    [sym__hexidecimal_literal] = ACTIONS(596),
  },
  [186] = {
    [sym__literal] = STATE(292),
    [sym__identifier] = STATE(292),
    [sym_variable_identifier] = STATE(29),
    [sym_constructor_identifier] = STATE(29),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [sym__layout_semicolon] = ACTIONS(600),
    [anon_sym_SEMI] = ACTIONS(602),
    [sym__variable_pattern] = ACTIONS(366),
    [sym__constructor_pattern] = ACTIONS(368),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [187] = {
    [anon_sym_AT] = ACTIONS(294),
    [sym_comment] = ACTIONS(38),
  },
  [188] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(604),
  },
  [189] = {
    [anon_sym_RBRACE] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_EQ] = ACTIONS(342),
    [anon_sym__] = ACTIONS(342),
    [sym__variable_pattern] = ACTIONS(344),
    [sym__constructor_pattern] = ACTIONS(344),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(344),
    [anon_sym_SQUOTE] = ACTIONS(342),
    [anon_sym_DQUOTE] = ACTIONS(342),
    [sym__integer_literal] = ACTIONS(342),
    [sym__octal_literal] = ACTIONS(342),
    [sym__hexidecimal_literal] = ACTIONS(342),
  },
  [190] = {
    [sym__symbol] = STATE(81),
    [sym__gap] = STATE(181),
    [sym__graphic] = STATE(181),
    [sym__small] = STATE(81),
    [sym__large] = STATE(81),
    [sym__special] = STATE(81),
    [sym__escape] = STATE(181),
    [anon_sym_SEMI] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_AT] = ACTIONS(118),
    [anon_sym_BQUOTE] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym__] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(118),
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
    [anon_sym_CARET] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_TILDE] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(118),
    [anon_sym_BSLASH] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(352),
    [anon_sym_DQUOTE] = ACTIONS(606),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(120),
    [sym__ascii_large] = ACTIONS(130),
    [sym__space] = ACTIONS(132),
    [sym__newline] = ACTIONS(132),
    [sym__tab] = ACTIONS(132),
    [sym__vertical_tab] = ACTIONS(132),
  },
  [191] = {
    [sym__function_pattern] = STATE(295),
    [sym_as_pattern] = STATE(96),
    [sym_wildcard] = STATE(96),
    [sym__variable] = STATE(97),
    [sym_qualified_variable_identifier] = STATE(98),
    [sym__literal] = STATE(96),
    [sym__identifier] = STATE(99),
    [sym_simple_type] = STATE(100),
    [sym_variable_identifier] = STATE(101),
    [sym_constructor_identifier] = STATE(102),
    [sym_integer] = STATE(91),
    [sym_char] = STATE(91),
    [sym_string] = STATE(91),
    [anon_sym__] = ACTIONS(156),
    [sym__variable_pattern] = ACTIONS(158),
    [sym__constructor_pattern] = ACTIONS(160),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [sym__integer_literal] = ACTIONS(168),
    [sym__octal_literal] = ACTIONS(168),
    [sym__hexidecimal_literal] = ACTIONS(168),
  },
  [192] = {
    [sym_labels] = STATE(297),
    [sym_label] = STATE(298),
    [sym__identifier] = STATE(299),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_RBRACE] = ACTIONS(608),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [193] = {
    [sym_variable_identifier] = STATE(276),
    [anon_sym_LBRACE] = ACTIONS(546),
    [sym__variable_pattern] = ACTIONS(286),
    [sym_comment] = ACTIONS(38),
  },
  [194] = {
    [anon_sym_EQ] = ACTIONS(610),
    [anon_sym__] = ACTIONS(610),
    [sym__variable_pattern] = ACTIONS(612),
    [sym__constructor_pattern] = ACTIONS(612),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(612),
    [anon_sym_SQUOTE] = ACTIONS(610),
    [anon_sym_DQUOTE] = ACTIONS(610),
    [sym__integer_literal] = ACTIONS(610),
    [sym__octal_literal] = ACTIONS(610),
    [sym__hexidecimal_literal] = ACTIONS(610),
  },
  [195] = {
    [sym_type] = STATE(306),
    [sym__generic_type_constructor] = STATE(307),
    [sym_tupling_constructor] = STATE(302),
    [sym_tuple] = STATE(307),
    [sym_list] = STATE(307),
    [sym_parenthesized_constructor] = STATE(307),
    [sym_class] = STATE(308),
    [sym_variable_identifier] = STATE(309),
    [sym_constructor_identifier] = STATE(128),
    [sym__type_constructors] = STATE(302),
    [sym_qualified_type_constructor] = STATE(310),
    [anon_sym_LPAREN] = ACTIONS(614),
    [anon_sym_COMMA] = ACTIONS(616),
    [sym_unit_type] = ACTIONS(618),
    [sym_list_constructor] = ACTIONS(618),
    [sym_function_constructor] = ACTIONS(618),
    [anon_sym_LBRACK] = ACTIONS(620),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(622),
    [sym_module_identifier] = ACTIONS(624),
    [sym_comment] = ACTIONS(38),
  },
  [196] = {
    [sym__layout_semicolon] = ACTIONS(626),
    [anon_sym_SEMI] = ACTIONS(628),
    [anon_sym_DASH_GT] = ACTIONS(628),
    [sym_comment] = ACTIONS(38),
  },
  [197] = {
    [sym_type] = STATE(313),
    [sym__generic_type_constructor] = STATE(314),
    [sym_tupling_constructor] = STATE(302),
    [sym_tuple] = STATE(314),
    [sym_list] = STATE(314),
    [sym_parenthesized_constructor] = STATE(314),
    [sym_variable_identifier] = STATE(315),
    [sym__type_constructors] = STATE(302),
    [sym_qualified_type_constructor] = STATE(310),
    [aux_sym_list_repeat1] = STATE(316),
    [anon_sym_LPAREN] = ACTIONS(614),
    [sym_unit_type] = ACTIONS(618),
    [sym_list_constructor] = ACTIONS(618),
    [sym_function_constructor] = ACTIONS(618),
    [anon_sym_LBRACK] = ACTIONS(620),
    [sym__variable_pattern] = ACTIONS(286),
    [sym__constructor_pattern] = ACTIONS(630),
    [sym_module_identifier] = ACTIONS(632),
    [sym_comment] = ACTIONS(38),
  },
  [198] = {
    [sym_variable_identifier] = STATE(317),
    [aux_sym_type_class_repeat1] = STATE(318),
    [sym__layout_semicolon] = ACTIONS(634),
    [anon_sym_SEMI] = ACTIONS(636),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_DASH_GT] = ACTIONS(636),
    [sym__variable_pattern] = ACTIONS(92),
    [sym_comment] = ACTIONS(38),
  },
  [199] = {
    [sym_constructor_identifier] = STATE(320),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(321),
    [anon_sym_DOT] = ACTIONS(638),
    [sym__constructor_pattern] = ACTIONS(368),
    [sym_comment] = ACTIONS(38),
  },
  [200] = {
    [sym__layout_semicolon] = ACTIONS(640),
    [anon_sym_SEMI] = ACTIONS(642),
    [sym_comment] = ACTIONS(38),
  },
  [201] = {
    [sym__layout_semicolon] = ACTIONS(644),
    [anon_sym_SEMI] = ACTIONS(646),
    [anon_sym_DASH_GT] = ACTIONS(648),
    [sym_comment] = ACTIONS(38),
  },
  [202] = {
    [sym_type] = STATE(323),
    [sym__generic_type_constructor] = STATE(201),
    [sym_tupling_constructor] = STATE(196),
    [sym_tuple] = STATE(201),
    [sym_list] = STATE(201),
    [sym_parenthesized_constructor] = STATE(201),
    [sym_variable_identifier] = STATE(204),
    [sym__type_constructors] = STATE(196),
    [sym_qualified_type_constructor] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(552),
    [sym_unit_type] = ACTIONS(398),
    [sym_list_constructor] = ACTIONS(398),
    [sym_function_constructor] = ACTIONS(398),
    [anon_sym_LBRACK] = ACTIONS(400),
    [sym__variable_pattern] = ACTIONS(402),
    [sym__constructor_pattern] = ACTIONS(554),
    [sym_module_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(38),
  },
  [203] = {
    [anon_sym_EQ_GT] = ACTIONS(650),
    [sym_comment] = ACTIONS(38),
  },
  [204] = {
    [sym__layout_semicolon] = ACTIONS(652),
    [anon_sym_SEMI] = ACTIONS(654),
    [anon_sym_DASH_GT] = ACTIONS(656),
    [sym_comment] = ACTIONS(38),
  },
  [205] = {
    [sym_variable_identifier] = STATE(238),
    [anon_sym_LPAREN] = ACTIONS(230),
    [sym__variable_pattern] = ACTIONS(658),
    [sym_comment] = ACTIONS(38),
  },
  [206] = {
    [sym__layout_semicolon] = ACTIONS(660),
    [anon_sym_SEMI] = ACTIONS(662),
    [anon_sym_DASH_GT] = ACTIONS(662),
    [sym_comment] = ACTIONS(38),
  },
  [207] = {
    [ts_builtin_sym_end] = ACTIONS(664),
    [anon_sym_RBRACE] = ACTIONS(666),
    [anon_sym_import] = ACTIONS(666),
    [anon_sym_foreign] = ACTIONS(666),
    [anon_sym_default] = ACTIONS(666),
    [anon_sym_do] = ACTIONS(666),
    [anon_sym_class] = ACTIONS(666),
    [anon_sym_instance] = ACTIONS(666),
    [anon_sym_infixl] = ACTIONS(666),
    [anon_sym_infixr] = ACTIONS(666),
    [anon_sym_infix] = ACTIONS(666),
    [anon_sym_data] = ACTIONS(666),
    [anon_sym_newtype] = ACTIONS(666),
    [anon_sym_type] = ACTIONS(666),
    [sym__variable_pattern] = ACTIONS(668),
    [sym__constructor_pattern] = ACTIONS(668),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(668),
    [anon_sym_SQUOTE] = ACTIONS(666),
    [anon_sym_DQUOTE] = ACTIONS(666),
    [sym__integer_literal] = ACTIONS(666),
    [sym__octal_literal] = ACTIONS(666),
    [sym__hexidecimal_literal] = ACTIONS(666),
  },
  [208] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(327),
    [sym_function_declaration] = STATE(20),
    [sym_function_head] = STATE(22),
    [sym__variable] = STATE(23),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(20),
    [sym_foreign] = STATE(20),
    [sym_default] = STATE(20),
    [sym_do_expression] = STATE(25),
    [sym_type_class] = STATE(20),
    [sym_type_class_instance] = STATE(20),
    [sym__general_declaration] = STATE(20),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym_algebraic_datatype] = STATE(20),
    [sym_newtype] = STATE(20),
    [sym_type_synonym] = STATE(20),
    [sym__literal] = STATE(25),
    [sym__identifier] = STATE(27),
    [sym_variable_identifier] = STATE(28),
    [sym_constructor_identifier] = STATE(29),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_module_repeat1] = STATE(328),
    [sym__layout_close_brace] = ACTIONS(670),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(16),
    [anon_sym_default] = ACTIONS(18),
    [anon_sym_do] = ACTIONS(20),
    [anon_sym_class] = ACTIONS(22),
    [anon_sym_instance] = ACTIONS(24),
    [anon_sym_infixl] = ACTIONS(26),
    [anon_sym_infixr] = ACTIONS(26),
    [anon_sym_infix] = ACTIONS(26),
    [anon_sym_data] = ACTIONS(28),
    [anon_sym_newtype] = ACTIONS(30),
    [anon_sym_type] = ACTIONS(32),
    [sym__variable_pattern] = ACTIONS(34),
    [sym__constructor_pattern] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [209] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(21),
    [sym_function_declaration] = STATE(20),
    [sym_function_head] = STATE(22),
    [sym__variable] = STATE(23),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(20),
    [sym_foreign] = STATE(20),
    [sym_default] = STATE(20),
    [sym_do_expression] = STATE(25),
    [sym_type_class] = STATE(20),
    [sym_type_class_instance] = STATE(20),
    [sym__general_declaration] = STATE(20),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym_algebraic_datatype] = STATE(20),
    [sym_newtype] = STATE(20),
    [sym_type_synonym] = STATE(20),
    [sym__literal] = STATE(25),
    [sym__identifier] = STATE(27),
    [sym_variable_identifier] = STATE(28),
    [sym_constructor_identifier] = STATE(29),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_module_repeat1] = STATE(329),
    [anon_sym_RBRACE] = ACTIONS(672),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(16),
    [anon_sym_default] = ACTIONS(18),
    [anon_sym_do] = ACTIONS(20),
    [anon_sym_class] = ACTIONS(22),
    [anon_sym_instance] = ACTIONS(24),
    [anon_sym_infixl] = ACTIONS(26),
    [anon_sym_infixr] = ACTIONS(26),
    [anon_sym_infix] = ACTIONS(26),
    [anon_sym_data] = ACTIONS(28),
    [anon_sym_newtype] = ACTIONS(30),
    [anon_sym_type] = ACTIONS(32),
    [sym__variable_pattern] = ACTIONS(34),
    [sym__constructor_pattern] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [210] = {
    [ts_builtin_sym_end] = ACTIONS(674),
    [sym_comment] = ACTIONS(38),
  },
  [211] = {
    [anon_sym_where] = ACTIONS(676),
    [sym_comment] = ACTIONS(38),
  },
  [212] = {
    [aux_sym_module_exports_repeat1] = STATE(332),
    [anon_sym_COMMA] = ACTIONS(678),
    [anon_sym_RPAREN] = ACTIONS(680),
    [sym_comment] = ACTIONS(38),
  },
  [213] = {
    [anon_sym_LPAREN] = ACTIONS(682),
    [anon_sym_COMMA] = ACTIONS(684),
    [anon_sym_RPAREN] = ACTIONS(684),
    [sym_comment] = ACTIONS(38),
  },
  [214] = {
    [sym_declarations] = STATE(334),
    [sym__layout_open_brace] = ACTIONS(412),
    [anon_sym_LBRACE] = ACTIONS(414),
    [sym_comment] = ACTIONS(38),
  },
  [215] = {
    [sym_module_identifier] = ACTIONS(686),
    [sym_comment] = ACTIONS(38),
  },
  [216] = {
    [sym__layout_semicolon] = ACTIONS(688),
    [anon_sym_SEMI] = ACTIONS(690),
    [sym_comment] = ACTIONS(38),
  },
  [217] = {
    [sym__layout_semicolon] = ACTIONS(692),
    [anon_sym_SEMI] = ACTIONS(694),
    [sym_comment] = ACTIONS(38),
  },
  [218] = {
    [aux_sym_import_specification_repeat1] = STATE(339),
    [anon_sym_LPAREN] = ACTIONS(696),
    [anon_sym_COMMA] = ACTIONS(698),
    [anon_sym_RPAREN] = ACTIONS(700),
    [sym_comment] = ACTIONS(38),
  },
  [219] = {
    [sym_import_specification] = STATE(340),
    [sym__layout_semicolon] = ACTIONS(688),
    [anon_sym_SEMI] = ACTIONS(690),
    [anon_sym_LPAREN] = ACTIONS(200),
    [anon_sym_hiding] = ACTIONS(204),
    [sym_comment] = ACTIONS(38),
  },
  [220] = {
    [sym__identifier] = STATE(341),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_RPAREN] = ACTIONS(700),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [221] = {
    [sym__variable_pattern] = ACTIONS(702),
    [sym__constructor_pattern] = ACTIONS(704),
    [sym_comment] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(702),
  },
  [222] = {
    [sym__symbol] = STATE(81),
    [sym__gap] = STATE(79),
    [sym__graphic] = STATE(79),
    [sym__small] = STATE(81),
    [sym__large] = STATE(81),
    [sym__special] = STATE(81),
    [sym__escape] = STATE(79),
    [aux_sym_string_repeat1] = STATE(343),
    [anon_sym_SEMI] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_AT] = ACTIONS(118),
    [anon_sym_BQUOTE] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym__] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(118),
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
    [anon_sym_CARET] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_TILDE] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(118),
    [anon_sym_BSLASH] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(706),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(120),
    [sym__ascii_large] = ACTIONS(130),
    [sym__space] = ACTIONS(132),
    [sym__newline] = ACTIONS(132),
    [sym__tab] = ACTIONS(132),
    [sym__vertical_tab] = ACTIONS(132),
  },
  [223] = {
    [sym_type_signature] = STATE(344),
    [sym__identifier] = STATE(225),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym_string] = STATE(345),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(438),
  },
  [224] = {
    [sym__layout_semicolon] = ACTIONS(708),
    [anon_sym_SEMI] = ACTIONS(710),
    [sym_comment] = ACTIONS(38),
  },
  [225] = {
    [anon_sym_COLON_COLON] = ACTIONS(180),
    [sym_comment] = ACTIONS(38),
  },
  [226] = {
    [sym_type_signature] = STATE(344),
    [sym__identifier] = STATE(225),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [227] = {
    [sym__identifier] = STATE(346),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [228] = {
    [sym__layout_semicolon] = ACTIONS(712),
    [anon_sym_SEMI] = ACTIONS(714),
    [sym_comment] = ACTIONS(38),
  },
  [229] = {
    [anon_sym_COMMA] = ACTIONS(716),
    [anon_sym_RPAREN] = ACTIONS(718),
    [sym_comment] = ACTIONS(38),
  },
  [230] = {
    [sym__layout_close_brace] = ACTIONS(720),
    [anon_sym_do] = ACTIONS(722),
    [sym__variable_pattern] = ACTIONS(724),
    [sym__constructor_pattern] = ACTIONS(724),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(724),
    [anon_sym_SQUOTE] = ACTIONS(722),
    [anon_sym_DQUOTE] = ACTIONS(722),
    [sym__integer_literal] = ACTIONS(722),
    [sym__octal_literal] = ACTIONS(722),
    [sym__hexidecimal_literal] = ACTIONS(722),
  },
  [231] = {
    [sym__layout_semicolon] = ACTIONS(726),
    [anon_sym_SEMI] = ACTIONS(728),
    [sym_comment] = ACTIONS(38),
  },
  [232] = {
    [sym__layout_close_brace] = ACTIONS(730),
    [anon_sym_do] = ACTIONS(732),
    [sym__variable_pattern] = ACTIONS(734),
    [sym__constructor_pattern] = ACTIONS(734),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(734),
    [anon_sym_SQUOTE] = ACTIONS(732),
    [anon_sym_DQUOTE] = ACTIONS(732),
    [sym__integer_literal] = ACTIONS(732),
    [sym__octal_literal] = ACTIONS(732),
    [sym__hexidecimal_literal] = ACTIONS(732),
  },
  [233] = {
    [anon_sym_RBRACE] = ACTIONS(722),
    [anon_sym_do] = ACTIONS(722),
    [sym__variable_pattern] = ACTIONS(724),
    [sym__constructor_pattern] = ACTIONS(724),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(724),
    [anon_sym_SQUOTE] = ACTIONS(722),
    [anon_sym_DQUOTE] = ACTIONS(722),
    [sym__integer_literal] = ACTIONS(722),
    [sym__octal_literal] = ACTIONS(722),
    [sym__hexidecimal_literal] = ACTIONS(722),
  },
  [234] = {
    [anon_sym_RBRACE] = ACTIONS(732),
    [anon_sym_do] = ACTIONS(732),
    [sym__variable_pattern] = ACTIONS(734),
    [sym__constructor_pattern] = ACTIONS(734),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(734),
    [anon_sym_SQUOTE] = ACTIONS(732),
    [anon_sym_DQUOTE] = ACTIONS(732),
    [sym__integer_literal] = ACTIONS(732),
    [sym__octal_literal] = ACTIONS(732),
    [sym__hexidecimal_literal] = ACTIONS(732),
  },
  [235] = {
    [sym_class] = STATE(349),
    [sym_constructor_identifier] = STATE(128),
    [sym__constructor_pattern] = ACTIONS(82),
    [sym_comment] = ACTIONS(38),
  },
  [236] = {
    [anon_sym_EQ_GT] = ACTIONS(736),
    [sym_comment] = ACTIONS(38),
  },
  [237] = {
    [anon_sym_COMMA] = ACTIONS(738),
    [anon_sym_RPAREN] = ACTIONS(740),
    [sym_comment] = ACTIONS(38),
  },
  [238] = {
    [anon_sym_COMMA] = ACTIONS(484),
    [anon_sym_RPAREN] = ACTIONS(484),
    [anon_sym_EQ_GT] = ACTIONS(484),
    [sym_comment] = ACTIONS(38),
  },
  [239] = {
    [sym_general_declarations] = STATE(353),
    [sym__layout_open_brace] = ACTIONS(478),
    [anon_sym_LBRACE] = ACTIONS(480),
    [sym_comment] = ACTIONS(38),
  },
  [240] = {
    [anon_sym_where] = ACTIONS(482),
    [sym__variable_pattern] = ACTIONS(486),
    [sym_comment] = ACTIONS(38),
  },
  [241] = {
    [sym_variable_identifier] = STATE(246),
    [anon_sym_where] = ACTIONS(742),
    [sym__variable_pattern] = ACTIONS(232),
    [sym_comment] = ACTIONS(38),
  },
  [242] = {
    [sym__general_declaration] = STATE(356),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(225),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [aux_sym_general_declarations_repeat1] = STATE(357),
    [sym__layout_close_brace] = ACTIONS(744),
    [anon_sym_infixl] = ACTIONS(26),
    [anon_sym_infixr] = ACTIONS(26),
    [anon_sym_infix] = ACTIONS(26),
    [sym__variable_pattern] = ACTIONS(158),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [243] = {
    [sym__general_declaration] = STATE(358),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(225),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [aux_sym_general_declarations_repeat1] = STATE(359),
    [anon_sym_RBRACE] = ACTIONS(746),
    [anon_sym_infixl] = ACTIONS(26),
    [anon_sym_infixr] = ACTIONS(26),
    [anon_sym_infix] = ACTIONS(26),
    [sym__variable_pattern] = ACTIONS(158),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [244] = {
    [sym__layout_semicolon] = ACTIONS(748),
    [anon_sym_SEMI] = ACTIONS(750),
    [sym_comment] = ACTIONS(38),
  },
  [245] = {
    [sym_variable_identifier] = STATE(276),
    [anon_sym_RPAREN] = ACTIONS(752),
    [sym__variable_pattern] = ACTIONS(286),
    [sym_comment] = ACTIONS(38),
  },
  [246] = {
    [anon_sym_where] = ACTIONS(754),
    [sym__variable_pattern] = ACTIONS(756),
    [sym_comment] = ACTIONS(38),
  },
  [247] = {
    [sym_general_declarations] = STATE(361),
    [sym__layout_open_brace] = ACTIONS(478),
    [anon_sym_LBRACE] = ACTIONS(480),
    [sym_comment] = ACTIONS(38),
  },
  [248] = {
    [sym_variable_identifier] = STATE(246),
    [anon_sym_where] = ACTIONS(758),
    [sym__variable_pattern] = ACTIONS(232),
    [sym_comment] = ACTIONS(38),
  },
  [249] = {
    [sym__layout_semicolon] = ACTIONS(760),
    [anon_sym_SEMI] = ACTIONS(762),
    [sym_comment] = ACTIONS(38),
  },
  [250] = {
    [sym__layout_semicolon] = ACTIONS(764),
    [anon_sym_SEMI] = ACTIONS(766),
    [anon_sym_COMMA] = ACTIONS(766),
    [sym_comment] = ACTIONS(38),
  },
  [251] = {
    [sym__symbol] = STATE(148),
    [sym__layout_semicolon] = ACTIONS(764),
    [anon_sym_SEMI] = ACTIONS(768),
    [anon_sym_COMMA] = ACTIONS(768),
    [anon_sym_RPAREN] = ACTIONS(770),
    [anon_sym_EQ] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_BANG] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(70),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(70),
    [anon_sym_1] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(70),
    [anon_sym_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(70),
    [anon_sym_CARET] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(70),
    [anon_sym_TILDE] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(70),
    [anon_sym_BSLASH] = ACTIONS(70),
    [sym_comment] = ACTIONS(76),
  },
  [252] = {
    [sym__layout_semicolon] = ACTIONS(772),
    [anon_sym_SEMI] = ACTIONS(774),
    [anon_sym_COMMA] = ACTIONS(774),
    [sym_comment] = ACTIONS(38),
  },
  [253] = {
    [sym__layout_semicolon] = ACTIONS(776),
    [anon_sym_SEMI] = ACTIONS(778),
    [anon_sym_COMMA] = ACTIONS(778),
    [sym_comment] = ACTIONS(38),
  },
  [254] = {
    [sym__layout_semicolon] = ACTIONS(780),
    [anon_sym_SEMI] = ACTIONS(782),
    [anon_sym_COMMA] = ACTIONS(782),
    [sym_comment] = ACTIONS(38),
  },
  [255] = {
    [sym__symbol] = STATE(52),
    [sym__op] = STATE(364),
    [sym_variable_symbol] = STATE(54),
    [sym_constructor_symbol] = STATE(54),
    [aux_sym_variable_symbol_repeat1] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_EQ] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_BQUOTE] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_BANG] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(70),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(70),
    [anon_sym_1] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(70),
    [anon_sym_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(70),
    [anon_sym_CARET] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(70),
    [anon_sym_TILDE] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(74),
    [anon_sym_BSLASH] = ACTIONS(70),
    [sym_comment] = ACTIONS(76),
  },
  [256] = {
    [sym__layout_semicolon] = ACTIONS(784),
    [anon_sym_SEMI] = ACTIONS(786),
    [anon_sym_COMMA] = ACTIONS(510),
    [sym_comment] = ACTIONS(38),
  },
  [257] = {
    [sym_constructors] = STATE(365),
    [sym_constructor] = STATE(154),
    [sym_deriving] = STATE(366),
    [sym_constructor_identifier] = STATE(156),
    [sym__layout_semicolon] = ACTIONS(788),
    [anon_sym_SEMI] = ACTIONS(790),
    [anon_sym_deriving] = ACTIONS(274),
    [sym__constructor_pattern] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [258] = {
    [sym_deriving] = STATE(366),
    [sym__layout_semicolon] = ACTIONS(788),
    [anon_sym_SEMI] = ACTIONS(790),
    [anon_sym_deriving] = ACTIONS(274),
    [sym_comment] = ACTIONS(38),
  },
  [259] = {
    [sym__layout_semicolon] = ACTIONS(788),
    [anon_sym_SEMI] = ACTIONS(790),
    [sym_comment] = ACTIONS(38),
  },
  [260] = {
    [sym__layout_semicolon] = ACTIONS(84),
    [anon_sym_SEMI] = ACTIONS(86),
    [anon_sym_EQ] = ACTIONS(86),
    [anon_sym_deriving] = ACTIONS(86),
    [sym__variable_pattern] = ACTIONS(88),
    [sym__constructor_pattern] = ACTIONS(88),
    [sym_comment] = ACTIONS(38),
  },
  [261] = {
    [sym__layout_semicolon] = ACTIONS(542),
    [anon_sym_SEMI] = ACTIONS(482),
    [anon_sym_EQ] = ACTIONS(482),
    [anon_sym_deriving] = ACTIONS(482),
    [sym__variable_pattern] = ACTIONS(486),
    [sym__constructor_pattern] = ACTIONS(486),
    [sym_comment] = ACTIONS(38),
  },
  [262] = {
    [sym__identifier] = STATE(367),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [263] = {
    [sym__layout_semicolon] = ACTIONS(792),
    [anon_sym_SEMI] = ACTIONS(794),
    [sym_comment] = ACTIONS(38),
  },
  [264] = {
    [sym_constructor] = STATE(368),
    [sym_constructor_identifier] = STATE(156),
    [sym__constructor_pattern] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [265] = {
    [sym__layout_semicolon] = ACTIONS(796),
    [anon_sym_SEMI] = ACTIONS(798),
    [anon_sym_PIPE] = ACTIONS(800),
    [anon_sym_deriving] = ACTIONS(798),
    [sym_comment] = ACTIONS(38),
  },
  [266] = {
    [sym_field] = STATE(370),
    [sym_variable_identifier] = STATE(371),
    [sym__variable_pattern] = ACTIONS(212),
    [sym_comment] = ACTIONS(38),
  },
  [267] = {
    [sym__identifier] = STATE(372),
    [sym_variable_identifier] = STATE(269),
    [sym_constructor_identifier] = STATE(269),
    [sym__variable_pattern] = ACTIONS(802),
    [sym__constructor_pattern] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [268] = {
    [sym__layout_semicolon] = ACTIONS(804),
    [anon_sym_SEMI] = ACTIONS(806),
    [anon_sym_BANG] = ACTIONS(806),
    [anon_sym_PIPE] = ACTIONS(806),
    [anon_sym_deriving] = ACTIONS(806),
    [sym__variable_pattern] = ACTIONS(808),
    [sym__constructor_pattern] = ACTIONS(808),
    [sym_comment] = ACTIONS(38),
  },
  [269] = {
    [sym__layout_semicolon] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(184),
    [anon_sym_BANG] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(184),
    [anon_sym_deriving] = ACTIONS(184),
    [sym__variable_pattern] = ACTIONS(186),
    [sym__constructor_pattern] = ACTIONS(186),
    [sym_comment] = ACTIONS(38),
  },
  [270] = {
    [sym__layout_semicolon] = ACTIONS(810),
    [anon_sym_SEMI] = ACTIONS(812),
    [anon_sym_PIPE] = ACTIONS(812),
    [anon_sym_deriving] = ACTIONS(812),
    [sym_comment] = ACTIONS(38),
  },
  [271] = {
    [sym_strict] = STATE(373),
    [sym__identifier] = STATE(373),
    [sym_variable_identifier] = STATE(269),
    [sym_constructor_identifier] = STATE(269),
    [sym__layout_semicolon] = ACTIONS(810),
    [anon_sym_SEMI] = ACTIONS(812),
    [anon_sym_BANG] = ACTIONS(540),
    [anon_sym_PIPE] = ACTIONS(812),
    [anon_sym_deriving] = ACTIONS(812),
    [sym__variable_pattern] = ACTIONS(280),
    [sym__constructor_pattern] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [272] = {
    [sym__layout_semicolon] = ACTIONS(814),
    [anon_sym_SEMI] = ACTIONS(754),
    [anon_sym_EQ] = ACTIONS(754),
    [anon_sym_deriving] = ACTIONS(754),
    [sym__variable_pattern] = ACTIONS(756),
    [sym__constructor_pattern] = ACTIONS(756),
    [sym_comment] = ACTIONS(38),
  },
  [273] = {
    [sym_new_constructor] = STATE(374),
    [sym_constructor_identifier] = STATE(275),
    [sym__constructor_pattern] = ACTIONS(82),
    [sym_comment] = ACTIONS(38),
  },
  [274] = {
    [sym_deriving] = STATE(375),
    [sym__layout_semicolon] = ACTIONS(816),
    [anon_sym_SEMI] = ACTIONS(818),
    [anon_sym_deriving] = ACTIONS(274),
    [sym_comment] = ACTIONS(38),
  },
  [275] = {
    [sym__identifier] = STATE(376),
    [sym_variable_identifier] = STATE(269),
    [sym_constructor_identifier] = STATE(269),
    [sym_fields] = STATE(376),
    [anon_sym_LBRACE] = ACTIONS(538),
    [sym__variable_pattern] = ACTIONS(802),
    [sym__constructor_pattern] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [276] = {
    [anon_sym_LBRACE] = ACTIONS(754),
    [anon_sym_LPAREN] = ACTIONS(754),
    [anon_sym_COMMA] = ACTIONS(754),
    [anon_sym_RPAREN] = ACTIONS(754),
    [anon_sym_EQ] = ACTIONS(754),
    [anon_sym_DASH_GT] = ACTIONS(754),
    [sym_unit_type] = ACTIONS(754),
    [sym_list_constructor] = ACTIONS(754),
    [sym_function_constructor] = ACTIONS(754),
    [anon_sym_LBRACK] = ACTIONS(754),
    [anon_sym_RBRACK] = ACTIONS(754),
    [sym__variable_pattern] = ACTIONS(754),
    [sym__constructor_pattern] = ACTIONS(756),
    [sym_module_identifier] = ACTIONS(756),
    [sym_comment] = ACTIONS(38),
  },
  [277] = {
    [sym_type] = STATE(306),
    [sym__generic_type_constructor] = STATE(307),
    [sym_tupling_constructor] = STATE(302),
    [sym_tuple] = STATE(307),
    [sym_list] = STATE(307),
    [sym_parenthesized_constructor] = STATE(307),
    [sym_variable_identifier] = STATE(309),
    [sym__type_constructors] = STATE(302),
    [sym_qualified_type_constructor] = STATE(310),
    [anon_sym_LPAREN] = ACTIONS(614),
    [anon_sym_COMMA] = ACTIONS(616),
    [sym_unit_type] = ACTIONS(618),
    [sym_list_constructor] = ACTIONS(618),
    [sym_function_constructor] = ACTIONS(618),
    [anon_sym_LBRACK] = ACTIONS(620),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(630),
    [sym_module_identifier] = ACTIONS(624),
    [sym_comment] = ACTIONS(38),
  },
  [278] = {
    [sym_variable_identifier] = STATE(317),
    [aux_sym_type_class_repeat1] = STATE(318),
    [sym__layout_semicolon] = ACTIONS(634),
    [anon_sym_SEMI] = ACTIONS(636),
    [anon_sym_DASH_GT] = ACTIONS(636),
    [sym__variable_pattern] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [279] = {
    [sym__layout_semicolon] = ACTIONS(820),
    [anon_sym_SEMI] = ACTIONS(822),
    [sym_comment] = ACTIONS(38),
  },
  [280] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(824),
  },
  [281] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(826),
  },
  [282] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(828),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(828),
  },
  [283] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(830),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(832),
  },
  [284] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(834),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(834),
  },
  [285] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(830),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(836),
  },
  [286] = {
    [anon_sym_SEMI] = ACTIONS(838),
    [anon_sym_LBRACE] = ACTIONS(838),
    [anon_sym_RBRACE] = ACTIONS(838),
    [anon_sym_LPAREN] = ACTIONS(838),
    [anon_sym_RPAREN] = ACTIONS(838),
    [anon_sym_EQ] = ACTIONS(838),
    [anon_sym_AT] = ACTIONS(838),
    [anon_sym_BQUOTE] = ACTIONS(838),
    [anon_sym_DASH] = ACTIONS(838),
    [anon_sym__] = ACTIONS(838),
    [anon_sym_BANG] = ACTIONS(838),
    [anon_sym_POUND] = ACTIONS(838),
    [anon_sym_DOLLAR] = ACTIONS(838),
    [anon_sym_PERCENT] = ACTIONS(838),
    [anon_sym_AMP] = ACTIONS(838),
    [anon_sym_1] = ACTIONS(838),
    [anon_sym_PLUS] = ACTIONS(838),
    [anon_sym_DOT] = ACTIONS(838),
    [anon_sym_SLASH] = ACTIONS(838),
    [anon_sym_LT] = ACTIONS(838),
    [anon_sym_GT] = ACTIONS(838),
    [anon_sym_QMARK] = ACTIONS(838),
    [anon_sym_CARET] = ACTIONS(838),
    [anon_sym_PIPE] = ACTIONS(838),
    [anon_sym_TILDE] = ACTIONS(838),
    [anon_sym_COLON] = ACTIONS(838),
    [anon_sym_BSLASH] = ACTIONS(838),
    [anon_sym_LBRACK] = ACTIONS(838),
    [anon_sym_RBRACK] = ACTIONS(838),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(838),
    [anon_sym_DQUOTE] = ACTIONS(838),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(838),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(838),
    [sym__ascii_large] = ACTIONS(838),
    [sym__space] = ACTIONS(838),
    [sym__newline] = ACTIONS(838),
    [sym__tab] = ACTIONS(838),
    [sym__vertical_tab] = ACTIONS(838),
  },
  [287] = {
    [anon_sym_SEMI] = ACTIONS(840),
    [anon_sym_LBRACE] = ACTIONS(840),
    [anon_sym_RBRACE] = ACTIONS(840),
    [anon_sym_LPAREN] = ACTIONS(840),
    [anon_sym_RPAREN] = ACTIONS(840),
    [anon_sym_EQ] = ACTIONS(840),
    [anon_sym_AT] = ACTIONS(840),
    [anon_sym_BQUOTE] = ACTIONS(840),
    [anon_sym_DASH] = ACTIONS(840),
    [anon_sym__] = ACTIONS(840),
    [anon_sym_BANG] = ACTIONS(840),
    [anon_sym_POUND] = ACTIONS(840),
    [anon_sym_DOLLAR] = ACTIONS(840),
    [anon_sym_PERCENT] = ACTIONS(840),
    [anon_sym_AMP] = ACTIONS(840),
    [anon_sym_1] = ACTIONS(840),
    [anon_sym_PLUS] = ACTIONS(840),
    [anon_sym_DOT] = ACTIONS(840),
    [anon_sym_SLASH] = ACTIONS(840),
    [anon_sym_LT] = ACTIONS(840),
    [anon_sym_GT] = ACTIONS(840),
    [anon_sym_QMARK] = ACTIONS(840),
    [anon_sym_CARET] = ACTIONS(840),
    [anon_sym_PIPE] = ACTIONS(840),
    [anon_sym_TILDE] = ACTIONS(840),
    [anon_sym_COLON] = ACTIONS(840),
    [anon_sym_BSLASH] = ACTIONS(840),
    [anon_sym_LBRACK] = ACTIONS(840),
    [anon_sym_RBRACK] = ACTIONS(840),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(840),
    [anon_sym_DQUOTE] = ACTIONS(840),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(840),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(840),
    [sym__ascii_large] = ACTIONS(840),
    [sym__space] = ACTIONS(840),
    [sym__newline] = ACTIONS(840),
    [sym__tab] = ACTIONS(840),
    [sym__vertical_tab] = ACTIONS(840),
  },
  [288] = {
    [anon_sym_SEMI] = ACTIONS(842),
    [anon_sym_LBRACE] = ACTIONS(842),
    [anon_sym_RBRACE] = ACTIONS(842),
    [anon_sym_LPAREN] = ACTIONS(842),
    [anon_sym_RPAREN] = ACTIONS(842),
    [anon_sym_EQ] = ACTIONS(842),
    [anon_sym_AT] = ACTIONS(842),
    [anon_sym_BQUOTE] = ACTIONS(842),
    [anon_sym_DASH] = ACTIONS(842),
    [anon_sym__] = ACTIONS(842),
    [anon_sym_BANG] = ACTIONS(842),
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
    [anon_sym_CARET] = ACTIONS(842),
    [anon_sym_PIPE] = ACTIONS(842),
    [anon_sym_TILDE] = ACTIONS(842),
    [anon_sym_COLON] = ACTIONS(842),
    [anon_sym_BSLASH] = ACTIONS(842),
    [anon_sym_LBRACK] = ACTIONS(842),
    [anon_sym_RBRACK] = ACTIONS(842),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(842),
    [anon_sym_DQUOTE] = ACTIONS(842),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(842),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(842),
    [sym__ascii_large] = ACTIONS(842),
    [sym__space] = ACTIONS(842),
    [sym__newline] = ACTIONS(842),
    [sym__tab] = ACTIONS(842),
    [sym__vertical_tab] = ACTIONS(842),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(842),
  },
  [289] = {
    [anon_sym_SEMI] = ACTIONS(844),
    [anon_sym_LBRACE] = ACTIONS(844),
    [anon_sym_RBRACE] = ACTIONS(844),
    [anon_sym_LPAREN] = ACTIONS(844),
    [anon_sym_RPAREN] = ACTIONS(844),
    [anon_sym_EQ] = ACTIONS(844),
    [anon_sym_AT] = ACTIONS(844),
    [anon_sym_BQUOTE] = ACTIONS(844),
    [anon_sym_DASH] = ACTIONS(844),
    [anon_sym__] = ACTIONS(844),
    [anon_sym_BANG] = ACTIONS(844),
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
    [anon_sym_CARET] = ACTIONS(844),
    [anon_sym_PIPE] = ACTIONS(844),
    [anon_sym_TILDE] = ACTIONS(844),
    [anon_sym_COLON] = ACTIONS(844),
    [anon_sym_BSLASH] = ACTIONS(844),
    [anon_sym_LBRACK] = ACTIONS(844),
    [anon_sym_RBRACK] = ACTIONS(844),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(844),
    [anon_sym_DQUOTE] = ACTIONS(844),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(844),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(844),
    [sym__ascii_large] = ACTIONS(844),
    [sym__space] = ACTIONS(844),
    [sym__newline] = ACTIONS(844),
    [sym__tab] = ACTIONS(844),
    [sym__vertical_tab] = ACTIONS(844),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(846),
  },
  [290] = {
    [anon_sym_SEMI] = ACTIONS(848),
    [anon_sym_LBRACE] = ACTIONS(848),
    [anon_sym_RBRACE] = ACTIONS(848),
    [anon_sym_LPAREN] = ACTIONS(848),
    [anon_sym_RPAREN] = ACTIONS(848),
    [anon_sym_EQ] = ACTIONS(848),
    [anon_sym_AT] = ACTIONS(848),
    [anon_sym_BQUOTE] = ACTIONS(848),
    [anon_sym_DASH] = ACTIONS(848),
    [anon_sym__] = ACTIONS(848),
    [anon_sym_BANG] = ACTIONS(848),
    [anon_sym_POUND] = ACTIONS(848),
    [anon_sym_DOLLAR] = ACTIONS(848),
    [anon_sym_PERCENT] = ACTIONS(848),
    [anon_sym_AMP] = ACTIONS(848),
    [anon_sym_1] = ACTIONS(848),
    [anon_sym_PLUS] = ACTIONS(848),
    [anon_sym_DOT] = ACTIONS(848),
    [anon_sym_SLASH] = ACTIONS(848),
    [anon_sym_LT] = ACTIONS(848),
    [anon_sym_GT] = ACTIONS(848),
    [anon_sym_QMARK] = ACTIONS(848),
    [anon_sym_CARET] = ACTIONS(848),
    [anon_sym_PIPE] = ACTIONS(848),
    [anon_sym_TILDE] = ACTIONS(848),
    [anon_sym_COLON] = ACTIONS(848),
    [anon_sym_BSLASH] = ACTIONS(848),
    [anon_sym_LBRACK] = ACTIONS(848),
    [anon_sym_RBRACK] = ACTIONS(848),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(848),
    [anon_sym_DQUOTE] = ACTIONS(848),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(848),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(848),
    [sym__ascii_large] = ACTIONS(848),
    [sym__space] = ACTIONS(848),
    [sym__newline] = ACTIONS(848),
    [sym__tab] = ACTIONS(848),
    [sym__vertical_tab] = ACTIONS(848),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(848),
  },
  [291] = {
    [anon_sym_SEMI] = ACTIONS(844),
    [anon_sym_LBRACE] = ACTIONS(844),
    [anon_sym_RBRACE] = ACTIONS(844),
    [anon_sym_LPAREN] = ACTIONS(844),
    [anon_sym_RPAREN] = ACTIONS(844),
    [anon_sym_EQ] = ACTIONS(844),
    [anon_sym_AT] = ACTIONS(844),
    [anon_sym_BQUOTE] = ACTIONS(844),
    [anon_sym_DASH] = ACTIONS(844),
    [anon_sym__] = ACTIONS(844),
    [anon_sym_BANG] = ACTIONS(844),
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
    [anon_sym_CARET] = ACTIONS(844),
    [anon_sym_PIPE] = ACTIONS(844),
    [anon_sym_TILDE] = ACTIONS(844),
    [anon_sym_COLON] = ACTIONS(844),
    [anon_sym_BSLASH] = ACTIONS(844),
    [anon_sym_LBRACK] = ACTIONS(844),
    [anon_sym_RBRACK] = ACTIONS(844),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(844),
    [anon_sym_DQUOTE] = ACTIONS(844),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(844),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(844),
    [sym__ascii_large] = ACTIONS(844),
    [sym__space] = ACTIONS(844),
    [sym__newline] = ACTIONS(844),
    [sym__tab] = ACTIONS(844),
    [sym__vertical_tab] = ACTIONS(844),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(850),
  },
  [292] = {
    [sym__layout_semicolon] = ACTIONS(852),
    [anon_sym_SEMI] = ACTIONS(854),
    [sym__variable_pattern] = ACTIONS(854),
    [sym__constructor_pattern] = ACTIONS(856),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(856),
    [anon_sym_SQUOTE] = ACTIONS(854),
    [anon_sym_DQUOTE] = ACTIONS(854),
    [sym__integer_literal] = ACTIONS(854),
    [sym__octal_literal] = ACTIONS(854),
    [sym__hexidecimal_literal] = ACTIONS(854),
  },
  [293] = {
    [anon_sym_RBRACE] = ACTIONS(570),
    [anon_sym_COMMA] = ACTIONS(570),
    [anon_sym_EQ] = ACTIONS(570),
    [anon_sym__] = ACTIONS(570),
    [sym__variable_pattern] = ACTIONS(572),
    [sym__constructor_pattern] = ACTIONS(572),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(572),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DQUOTE] = ACTIONS(570),
    [sym__integer_literal] = ACTIONS(570),
    [sym__octal_literal] = ACTIONS(570),
    [sym__hexidecimal_literal] = ACTIONS(570),
  },
  [294] = {
    [anon_sym_RBRACE] = ACTIONS(590),
    [anon_sym_COMMA] = ACTIONS(590),
    [anon_sym_EQ] = ACTIONS(590),
    [anon_sym__] = ACTIONS(590),
    [sym__variable_pattern] = ACTIONS(592),
    [sym__constructor_pattern] = ACTIONS(592),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(590),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [sym__integer_literal] = ACTIONS(590),
    [sym__octal_literal] = ACTIONS(590),
    [sym__hexidecimal_literal] = ACTIONS(590),
  },
  [295] = {
    [anon_sym_EQ] = ACTIONS(858),
    [anon_sym__] = ACTIONS(858),
    [sym__variable_pattern] = ACTIONS(860),
    [sym__constructor_pattern] = ACTIONS(860),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(860),
    [anon_sym_SQUOTE] = ACTIONS(858),
    [anon_sym_DQUOTE] = ACTIONS(858),
    [sym__integer_literal] = ACTIONS(858),
    [sym__octal_literal] = ACTIONS(858),
    [sym__hexidecimal_literal] = ACTIONS(858),
  },
  [296] = {
    [anon_sym_EQ] = ACTIONS(862),
    [anon_sym__] = ACTIONS(862),
    [sym__variable_pattern] = ACTIONS(864),
    [sym__constructor_pattern] = ACTIONS(864),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(864),
    [anon_sym_SQUOTE] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(862),
    [sym__integer_literal] = ACTIONS(862),
    [sym__octal_literal] = ACTIONS(862),
    [sym__hexidecimal_literal] = ACTIONS(862),
  },
  [297] = {
    [anon_sym_RBRACE] = ACTIONS(866),
    [sym_comment] = ACTIONS(38),
  },
  [298] = {
    [aux_sym_labels_repeat1] = STATE(383),
    [anon_sym_RBRACE] = ACTIONS(868),
    [anon_sym_COMMA] = ACTIONS(870),
    [sym_comment] = ACTIONS(38),
  },
  [299] = {
    [anon_sym_EQ] = ACTIONS(872),
    [sym_comment] = ACTIONS(38),
  },
  [300] = {
    [sym_type] = STATE(386),
    [sym__generic_type_constructor] = STATE(307),
    [sym_tupling_constructor] = STATE(302),
    [sym_tuple] = STATE(307),
    [sym_list] = STATE(307),
    [sym_parenthesized_constructor] = STATE(307),
    [sym_variable_identifier] = STATE(309),
    [sym__type_constructors] = STATE(302),
    [sym_qualified_type_constructor] = STATE(310),
    [anon_sym_LPAREN] = ACTIONS(614),
    [anon_sym_COMMA] = ACTIONS(874),
    [sym_unit_type] = ACTIONS(618),
    [sym_list_constructor] = ACTIONS(618),
    [sym_function_constructor] = ACTIONS(618),
    [anon_sym_LBRACK] = ACTIONS(620),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(630),
    [sym_module_identifier] = ACTIONS(624),
    [sym_comment] = ACTIONS(38),
  },
  [301] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(389),
    [anon_sym_COMMA] = ACTIONS(876),
    [anon_sym_RPAREN] = ACTIONS(878),
    [sym_comment] = ACTIONS(38),
  },
  [302] = {
    [anon_sym_LPAREN] = ACTIONS(628),
    [anon_sym_COMMA] = ACTIONS(628),
    [anon_sym_RPAREN] = ACTIONS(628),
    [anon_sym_DASH_GT] = ACTIONS(628),
    [sym_unit_type] = ACTIONS(628),
    [sym_list_constructor] = ACTIONS(628),
    [sym_function_constructor] = ACTIONS(628),
    [anon_sym_LBRACK] = ACTIONS(628),
    [anon_sym_RBRACK] = ACTIONS(628),
    [sym__variable_pattern] = ACTIONS(628),
    [sym__constructor_pattern] = ACTIONS(880),
    [sym_module_identifier] = ACTIONS(880),
    [sym_comment] = ACTIONS(38),
  },
  [303] = {
    [sym_type] = STATE(313),
    [sym__generic_type_constructor] = STATE(314),
    [sym_tupling_constructor] = STATE(302),
    [sym_tuple] = STATE(314),
    [sym_list] = STATE(314),
    [sym_parenthesized_constructor] = STATE(314),
    [sym_variable_identifier] = STATE(315),
    [sym__type_constructors] = STATE(302),
    [sym_qualified_type_constructor] = STATE(310),
    [aux_sym_list_repeat1] = STATE(390),
    [anon_sym_LPAREN] = ACTIONS(614),
    [sym_unit_type] = ACTIONS(618),
    [sym_list_constructor] = ACTIONS(618),
    [sym_function_constructor] = ACTIONS(618),
    [anon_sym_LBRACK] = ACTIONS(620),
    [sym__variable_pattern] = ACTIONS(286),
    [sym__constructor_pattern] = ACTIONS(630),
    [sym_module_identifier] = ACTIONS(632),
    [sym_comment] = ACTIONS(38),
  },
  [304] = {
    [sym_variable_identifier] = STATE(167),
    [aux_sym_type_class_repeat1] = STATE(391),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_COMMA] = ACTIONS(636),
    [anon_sym_RPAREN] = ACTIONS(636),
    [anon_sym_DASH_GT] = ACTIONS(636),
    [sym__variable_pattern] = ACTIONS(92),
    [sym_comment] = ACTIONS(38),
  },
  [305] = {
    [sym_constructor_identifier] = STATE(393),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(394),
    [anon_sym_DOT] = ACTIONS(882),
    [sym__constructor_pattern] = ACTIONS(82),
    [sym_comment] = ACTIONS(38),
  },
  [306] = {
    [aux_sym_tuple_repeat1] = STATE(397),
    [anon_sym_COMMA] = ACTIONS(884),
    [anon_sym_RPAREN] = ACTIONS(886),
    [sym_comment] = ACTIONS(38),
  },
  [307] = {
    [anon_sym_COMMA] = ACTIONS(646),
    [anon_sym_RPAREN] = ACTIONS(646),
    [anon_sym_DASH_GT] = ACTIONS(888),
    [sym_comment] = ACTIONS(38),
  },
  [308] = {
    [aux_sym_context_repeat1] = STATE(400),
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(890),
    [sym_comment] = ACTIONS(38),
  },
  [309] = {
    [anon_sym_COMMA] = ACTIONS(654),
    [anon_sym_RPAREN] = ACTIONS(654),
    [anon_sym_DASH_GT] = ACTIONS(892),
    [sym_comment] = ACTIONS(38),
  },
  [310] = {
    [anon_sym_LPAREN] = ACTIONS(662),
    [anon_sym_COMMA] = ACTIONS(662),
    [anon_sym_RPAREN] = ACTIONS(662),
    [anon_sym_DASH_GT] = ACTIONS(662),
    [sym_unit_type] = ACTIONS(662),
    [sym_list_constructor] = ACTIONS(662),
    [sym_function_constructor] = ACTIONS(662),
    [anon_sym_LBRACK] = ACTIONS(662),
    [anon_sym_RBRACK] = ACTIONS(662),
    [sym__variable_pattern] = ACTIONS(662),
    [sym__constructor_pattern] = ACTIONS(894),
    [sym_module_identifier] = ACTIONS(894),
    [sym_comment] = ACTIONS(38),
  },
  [311] = {
    [sym_variable_identifier] = STATE(167),
    [aux_sym_type_class_repeat1] = STATE(391),
    [anon_sym_LPAREN] = ACTIONS(636),
    [anon_sym_COMMA] = ACTIONS(636),
    [anon_sym_RPAREN] = ACTIONS(636),
    [anon_sym_DASH_GT] = ACTIONS(636),
    [sym_unit_type] = ACTIONS(636),
    [sym_list_constructor] = ACTIONS(636),
    [sym_function_constructor] = ACTIONS(636),
    [anon_sym_LBRACK] = ACTIONS(636),
    [anon_sym_RBRACK] = ACTIONS(636),
    [sym__variable_pattern] = ACTIONS(286),
    [sym__constructor_pattern] = ACTIONS(896),
    [sym_module_identifier] = ACTIONS(896),
    [sym_comment] = ACTIONS(38),
  },
  [312] = {
    [sym_constructor_identifier] = STATE(393),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(404),
    [anon_sym_DOT] = ACTIONS(898),
    [sym__constructor_pattern] = ACTIONS(900),
    [sym_comment] = ACTIONS(38),
  },
  [313] = {
    [anon_sym_LPAREN] = ACTIONS(902),
    [sym_unit_type] = ACTIONS(902),
    [sym_list_constructor] = ACTIONS(902),
    [sym_function_constructor] = ACTIONS(902),
    [anon_sym_LBRACK] = ACTIONS(902),
    [anon_sym_RBRACK] = ACTIONS(902),
    [sym__variable_pattern] = ACTIONS(902),
    [sym__constructor_pattern] = ACTIONS(904),
    [sym_module_identifier] = ACTIONS(904),
    [sym_comment] = ACTIONS(38),
  },
  [314] = {
    [anon_sym_LPAREN] = ACTIONS(646),
    [anon_sym_DASH_GT] = ACTIONS(906),
    [sym_unit_type] = ACTIONS(646),
    [sym_list_constructor] = ACTIONS(646),
    [sym_function_constructor] = ACTIONS(646),
    [anon_sym_LBRACK] = ACTIONS(646),
    [anon_sym_RBRACK] = ACTIONS(646),
    [sym__variable_pattern] = ACTIONS(646),
    [sym__constructor_pattern] = ACTIONS(908),
    [sym_module_identifier] = ACTIONS(908),
    [sym_comment] = ACTIONS(38),
  },
  [315] = {
    [anon_sym_LPAREN] = ACTIONS(654),
    [anon_sym_DASH_GT] = ACTIONS(910),
    [sym_unit_type] = ACTIONS(654),
    [sym_list_constructor] = ACTIONS(654),
    [sym_function_constructor] = ACTIONS(654),
    [anon_sym_LBRACK] = ACTIONS(654),
    [anon_sym_RBRACK] = ACTIONS(654),
    [sym__variable_pattern] = ACTIONS(654),
    [sym__constructor_pattern] = ACTIONS(912),
    [sym_module_identifier] = ACTIONS(912),
    [sym_comment] = ACTIONS(38),
  },
  [316] = {
    [sym_type] = STATE(408),
    [sym__generic_type_constructor] = STATE(314),
    [sym_tupling_constructor] = STATE(302),
    [sym_tuple] = STATE(314),
    [sym_list] = STATE(314),
    [sym_parenthesized_constructor] = STATE(314),
    [sym_variable_identifier] = STATE(315),
    [sym__type_constructors] = STATE(302),
    [sym_qualified_type_constructor] = STATE(310),
    [anon_sym_LPAREN] = ACTIONS(614),
    [sym_unit_type] = ACTIONS(618),
    [sym_list_constructor] = ACTIONS(618),
    [sym_function_constructor] = ACTIONS(618),
    [anon_sym_LBRACK] = ACTIONS(620),
    [anon_sym_RBRACK] = ACTIONS(914),
    [sym__variable_pattern] = ACTIONS(286),
    [sym__constructor_pattern] = ACTIONS(630),
    [sym_module_identifier] = ACTIONS(632),
    [sym_comment] = ACTIONS(38),
  },
  [317] = {
    [sym__layout_semicolon] = ACTIONS(542),
    [anon_sym_SEMI] = ACTIONS(482),
    [anon_sym_DASH_GT] = ACTIONS(482),
    [sym__variable_pattern] = ACTIONS(482),
    [sym_comment] = ACTIONS(38),
  },
  [318] = {
    [sym_variable_identifier] = STATE(409),
    [sym__layout_semicolon] = ACTIONS(916),
    [anon_sym_SEMI] = ACTIONS(918),
    [anon_sym_DASH_GT] = ACTIONS(918),
    [sym__variable_pattern] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [319] = {
    [sym_constructor_identifier] = STATE(411),
    [sym__constructor_pattern] = ACTIONS(368),
    [sym_module_identifier] = ACTIONS(920),
    [sym_comment] = ACTIONS(38),
  },
  [320] = {
    [sym_variable_identifier] = STATE(317),
    [aux_sym_type_class_repeat1] = STATE(412),
    [sym__layout_semicolon] = ACTIONS(922),
    [anon_sym_SEMI] = ACTIONS(924),
    [anon_sym_DASH_GT] = ACTIONS(924),
    [sym__variable_pattern] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [321] = {
    [sym_constructor_identifier] = STATE(411),
    [anon_sym_DOT] = ACTIONS(926),
    [sym__constructor_pattern] = ACTIONS(368),
    [sym_comment] = ACTIONS(38),
  },
  [322] = {
    [sym_type] = STATE(414),
    [sym__generic_type_constructor] = STATE(201),
    [sym_tupling_constructor] = STATE(196),
    [sym_tuple] = STATE(201),
    [sym_list] = STATE(201),
    [sym_parenthesized_constructor] = STATE(201),
    [sym_variable_identifier] = STATE(204),
    [sym__type_constructors] = STATE(196),
    [sym_qualified_type_constructor] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(552),
    [sym_unit_type] = ACTIONS(398),
    [sym_list_constructor] = ACTIONS(398),
    [sym_function_constructor] = ACTIONS(398),
    [anon_sym_LBRACK] = ACTIONS(400),
    [sym__variable_pattern] = ACTIONS(402),
    [sym__constructor_pattern] = ACTIONS(554),
    [sym_module_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(38),
  },
  [323] = {
    [sym__layout_semicolon] = ACTIONS(928),
    [anon_sym_SEMI] = ACTIONS(930),
    [sym_comment] = ACTIONS(38),
  },
  [324] = {
    [anon_sym_LPAREN] = ACTIONS(932),
    [sym_unit_type] = ACTIONS(932),
    [sym_list_constructor] = ACTIONS(932),
    [sym_function_constructor] = ACTIONS(932),
    [anon_sym_LBRACK] = ACTIONS(932),
    [sym__variable_pattern] = ACTIONS(932),
    [sym__constructor_pattern] = ACTIONS(476),
    [sym_module_identifier] = ACTIONS(476),
    [sym_comment] = ACTIONS(38),
  },
  [325] = {
    [sym_type] = STATE(415),
    [sym__generic_type_constructor] = STATE(201),
    [sym_tupling_constructor] = STATE(196),
    [sym_tuple] = STATE(201),
    [sym_list] = STATE(201),
    [sym_parenthesized_constructor] = STATE(201),
    [sym_variable_identifier] = STATE(204),
    [sym__type_constructors] = STATE(196),
    [sym_qualified_type_constructor] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(552),
    [sym_unit_type] = ACTIONS(398),
    [sym_list_constructor] = ACTIONS(398),
    [sym_function_constructor] = ACTIONS(398),
    [anon_sym_LBRACK] = ACTIONS(400),
    [sym__variable_pattern] = ACTIONS(402),
    [sym__constructor_pattern] = ACTIONS(554),
    [sym_module_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(38),
  },
  [326] = {
    [ts_builtin_sym_end] = ACTIONS(934),
    [sym_comment] = ACTIONS(38),
  },
  [327] = {
    [sym__layout_semicolon] = ACTIONS(936),
    [anon_sym_SEMI] = ACTIONS(938),
    [sym_comment] = ACTIONS(38),
  },
  [328] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(418),
    [sym_function_declaration] = STATE(20),
    [sym_function_head] = STATE(22),
    [sym__variable] = STATE(23),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(20),
    [sym_foreign] = STATE(20),
    [sym_default] = STATE(20),
    [sym_do_expression] = STATE(25),
    [sym_type_class] = STATE(20),
    [sym_type_class_instance] = STATE(20),
    [sym__general_declaration] = STATE(20),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym_algebraic_datatype] = STATE(20),
    [sym_newtype] = STATE(20),
    [sym_type_synonym] = STATE(20),
    [sym__literal] = STATE(25),
    [sym__identifier] = STATE(27),
    [sym_variable_identifier] = STATE(28),
    [sym_constructor_identifier] = STATE(29),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [sym__layout_close_brace] = ACTIONS(940),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(16),
    [anon_sym_default] = ACTIONS(18),
    [anon_sym_do] = ACTIONS(20),
    [anon_sym_class] = ACTIONS(22),
    [anon_sym_instance] = ACTIONS(24),
    [anon_sym_infixl] = ACTIONS(26),
    [anon_sym_infixr] = ACTIONS(26),
    [anon_sym_infix] = ACTIONS(26),
    [anon_sym_data] = ACTIONS(28),
    [anon_sym_newtype] = ACTIONS(30),
    [anon_sym_type] = ACTIONS(32),
    [sym__variable_pattern] = ACTIONS(34),
    [sym__constructor_pattern] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [329] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(105),
    [sym_function_declaration] = STATE(20),
    [sym_function_head] = STATE(22),
    [sym__variable] = STATE(23),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(20),
    [sym_foreign] = STATE(20),
    [sym_default] = STATE(20),
    [sym_do_expression] = STATE(25),
    [sym_type_class] = STATE(20),
    [sym_type_class_instance] = STATE(20),
    [sym__general_declaration] = STATE(20),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym_algebraic_datatype] = STATE(20),
    [sym_newtype] = STATE(20),
    [sym_type_synonym] = STATE(20),
    [sym__literal] = STATE(25),
    [sym__identifier] = STATE(27),
    [sym_variable_identifier] = STATE(28),
    [sym_constructor_identifier] = STATE(29),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [anon_sym_RBRACE] = ACTIONS(942),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(16),
    [anon_sym_default] = ACTIONS(18),
    [anon_sym_do] = ACTIONS(20),
    [anon_sym_class] = ACTIONS(22),
    [anon_sym_instance] = ACTIONS(24),
    [anon_sym_infixl] = ACTIONS(26),
    [anon_sym_infixr] = ACTIONS(26),
    [anon_sym_infix] = ACTIONS(26),
    [anon_sym_data] = ACTIONS(28),
    [anon_sym_newtype] = ACTIONS(30),
    [anon_sym_type] = ACTIONS(32),
    [sym__variable_pattern] = ACTIONS(34),
    [sym__constructor_pattern] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [330] = {
    [sym_export] = STATE(419),
    [sym__identifier] = STATE(213),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [331] = {
    [anon_sym_where] = ACTIONS(944),
    [sym_comment] = ACTIONS(38),
  },
  [332] = {
    [anon_sym_COMMA] = ACTIONS(946),
    [anon_sym_RPAREN] = ACTIONS(948),
    [sym_comment] = ACTIONS(38),
  },
  [333] = {
    [sym__identifier] = STATE(423),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_DOT_DOT] = ACTIONS(950),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [334] = {
    [ts_builtin_sym_end] = ACTIONS(952),
    [sym_comment] = ACTIONS(38),
  },
  [335] = {
    [sym_import_specification] = STATE(424),
    [sym__layout_semicolon] = ACTIONS(954),
    [anon_sym_SEMI] = ACTIONS(956),
    [anon_sym_LPAREN] = ACTIONS(200),
    [anon_sym_hiding] = ACTIONS(204),
    [sym_comment] = ACTIONS(38),
  },
  [336] = {
    [sym__identifier] = STATE(426),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_DOT_DOT] = ACTIONS(958),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [337] = {
    [sym__identifier] = STATE(427),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [338] = {
    [sym__layout_semicolon] = ACTIONS(960),
    [anon_sym_SEMI] = ACTIONS(962),
    [sym_comment] = ACTIONS(38),
  },
  [339] = {
    [anon_sym_COMMA] = ACTIONS(964),
    [anon_sym_RPAREN] = ACTIONS(966),
    [sym_comment] = ACTIONS(38),
  },
  [340] = {
    [sym__layout_semicolon] = ACTIONS(954),
    [anon_sym_SEMI] = ACTIONS(956),
    [sym_comment] = ACTIONS(38),
  },
  [341] = {
    [aux_sym_import_specification_repeat1] = STATE(431),
    [anon_sym_LPAREN] = ACTIONS(968),
    [anon_sym_COMMA] = ACTIONS(698),
    [anon_sym_RPAREN] = ACTIONS(966),
    [sym_comment] = ACTIONS(38),
  },
  [342] = {
    [sym__variable_pattern] = ACTIONS(342),
    [sym__constructor_pattern] = ACTIONS(344),
    [sym_comment] = ACTIONS(38),
  },
  [343] = {
    [sym__symbol] = STATE(81),
    [sym__gap] = STATE(181),
    [sym__graphic] = STATE(181),
    [sym__small] = STATE(81),
    [sym__large] = STATE(81),
    [sym__special] = STATE(81),
    [sym__escape] = STATE(181),
    [anon_sym_SEMI] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_AT] = ACTIONS(118),
    [anon_sym_BQUOTE] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym__] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(118),
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
    [anon_sym_CARET] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_TILDE] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(118),
    [anon_sym_BSLASH] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(352),
    [anon_sym_DQUOTE] = ACTIONS(970),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(120),
    [sym__ascii_large] = ACTIONS(130),
    [sym__space] = ACTIONS(132),
    [sym__newline] = ACTIONS(132),
    [sym__tab] = ACTIONS(132),
    [sym__vertical_tab] = ACTIONS(132),
  },
  [344] = {
    [sym__layout_semicolon] = ACTIONS(972),
    [anon_sym_SEMI] = ACTIONS(974),
    [sym_comment] = ACTIONS(38),
  },
  [345] = {
    [sym_type_signature] = STATE(433),
    [sym__identifier] = STATE(225),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [346] = {
    [anon_sym_COMMA] = ACTIONS(976),
    [anon_sym_RPAREN] = ACTIONS(976),
    [sym_comment] = ACTIONS(38),
  },
  [347] = {
    [sym__identifier] = STATE(434),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [348] = {
    [sym__layout_semicolon] = ACTIONS(978),
    [anon_sym_SEMI] = ACTIONS(980),
    [sym_comment] = ACTIONS(38),
  },
  [349] = {
    [anon_sym_COMMA] = ACTIONS(982),
    [anon_sym_RPAREN] = ACTIONS(982),
    [sym_comment] = ACTIONS(38),
  },
  [350] = {
    [sym__constructor_pattern] = ACTIONS(984),
    [sym_comment] = ACTIONS(38),
  },
  [351] = {
    [sym_class] = STATE(435),
    [sym_constructor_identifier] = STATE(128),
    [sym__constructor_pattern] = ACTIONS(82),
    [sym_comment] = ACTIONS(38),
  },
  [352] = {
    [anon_sym_EQ_GT] = ACTIONS(986),
    [sym_comment] = ACTIONS(38),
  },
  [353] = {
    [sym__layout_semicolon] = ACTIONS(988),
    [anon_sym_SEMI] = ACTIONS(990),
    [sym_comment] = ACTIONS(38),
  },
  [354] = {
    [sym_general_declarations] = STATE(437),
    [sym__layout_open_brace] = ACTIONS(478),
    [anon_sym_LBRACE] = ACTIONS(480),
    [sym_comment] = ACTIONS(38),
  },
  [355] = {
    [sym__layout_semicolon] = ACTIONS(992),
    [anon_sym_SEMI] = ACTIONS(994),
    [sym_comment] = ACTIONS(38),
  },
  [356] = {
    [sym__layout_semicolon] = ACTIONS(996),
    [anon_sym_SEMI] = ACTIONS(998),
    [sym_comment] = ACTIONS(38),
  },
  [357] = {
    [sym__general_declaration] = STATE(440),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(225),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__layout_close_brace] = ACTIONS(1000),
    [anon_sym_infixl] = ACTIONS(26),
    [anon_sym_infixr] = ACTIONS(26),
    [anon_sym_infix] = ACTIONS(26),
    [sym__variable_pattern] = ACTIONS(158),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [358] = {
    [sym__layout_semicolon] = ACTIONS(1002),
    [anon_sym_SEMI] = ACTIONS(1004),
    [sym_comment] = ACTIONS(38),
  },
  [359] = {
    [sym__general_declaration] = STATE(442),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(225),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_RBRACE] = ACTIONS(1006),
    [anon_sym_infixl] = ACTIONS(26),
    [anon_sym_infixr] = ACTIONS(26),
    [anon_sym_infix] = ACTIONS(26),
    [sym__variable_pattern] = ACTIONS(158),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [360] = {
    [anon_sym_COMMA] = ACTIONS(1008),
    [anon_sym_RPAREN] = ACTIONS(1008),
    [anon_sym_EQ_GT] = ACTIONS(1008),
    [sym_comment] = ACTIONS(38),
  },
  [361] = {
    [sym__layout_semicolon] = ACTIONS(1010),
    [anon_sym_SEMI] = ACTIONS(1012),
    [sym_comment] = ACTIONS(38),
  },
  [362] = {
    [sym_general_declarations] = STATE(443),
    [sym__layout_open_brace] = ACTIONS(478),
    [anon_sym_LBRACE] = ACTIONS(480),
    [sym_comment] = ACTIONS(38),
  },
  [363] = {
    [sym__layout_semicolon] = ACTIONS(1014),
    [anon_sym_SEMI] = ACTIONS(1016),
    [anon_sym_COMMA] = ACTIONS(1016),
    [sym_comment] = ACTIONS(38),
  },
  [364] = {
    [sym__layout_semicolon] = ACTIONS(1018),
    [anon_sym_SEMI] = ACTIONS(1020),
    [anon_sym_COMMA] = ACTIONS(1020),
    [sym_comment] = ACTIONS(38),
  },
  [365] = {
    [sym_deriving] = STATE(444),
    [sym__layout_semicolon] = ACTIONS(1022),
    [anon_sym_SEMI] = ACTIONS(1024),
    [anon_sym_deriving] = ACTIONS(274),
    [sym_comment] = ACTIONS(38),
  },
  [366] = {
    [sym__layout_semicolon] = ACTIONS(1022),
    [anon_sym_SEMI] = ACTIONS(1024),
    [sym_comment] = ACTIONS(38),
  },
  [367] = {
    [aux_sym_export_repeat1] = STATE(446),
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(1026),
    [sym_comment] = ACTIONS(38),
  },
  [368] = {
    [sym__layout_semicolon] = ACTIONS(1028),
    [anon_sym_SEMI] = ACTIONS(1030),
    [anon_sym_PIPE] = ACTIONS(1030),
    [anon_sym_deriving] = ACTIONS(1030),
    [sym_comment] = ACTIONS(38),
  },
  [369] = {
    [sym_constructor] = STATE(447),
    [sym_constructor_identifier] = STATE(156),
    [sym__constructor_pattern] = ACTIONS(80),
    [sym_comment] = ACTIONS(38),
  },
  [370] = {
    [aux_sym_fields_repeat1] = STATE(450),
    [anon_sym_RBRACE] = ACTIONS(1032),
    [anon_sym_COMMA] = ACTIONS(1034),
    [sym_comment] = ACTIONS(38),
  },
  [371] = {
    [aux_sym_field_repeat1] = STATE(453),
    [anon_sym_COMMA] = ACTIONS(1036),
    [anon_sym_COLON_COLON] = ACTIONS(1038),
    [sym_comment] = ACTIONS(38),
  },
  [372] = {
    [sym__layout_semicolon] = ACTIONS(1040),
    [anon_sym_SEMI] = ACTIONS(1042),
    [anon_sym_BANG] = ACTIONS(1042),
    [anon_sym_PIPE] = ACTIONS(1042),
    [anon_sym_deriving] = ACTIONS(1042),
    [sym__variable_pattern] = ACTIONS(1044),
    [sym__constructor_pattern] = ACTIONS(1044),
    [sym_comment] = ACTIONS(38),
  },
  [373] = {
    [sym__layout_semicolon] = ACTIONS(1046),
    [anon_sym_SEMI] = ACTIONS(1048),
    [anon_sym_BANG] = ACTIONS(1048),
    [anon_sym_PIPE] = ACTIONS(1048),
    [anon_sym_deriving] = ACTIONS(1048),
    [sym__variable_pattern] = ACTIONS(1050),
    [sym__constructor_pattern] = ACTIONS(1050),
    [sym_comment] = ACTIONS(38),
  },
  [374] = {
    [sym_deriving] = STATE(454),
    [sym__layout_semicolon] = ACTIONS(1052),
    [anon_sym_SEMI] = ACTIONS(1054),
    [anon_sym_deriving] = ACTIONS(274),
    [sym_comment] = ACTIONS(38),
  },
  [375] = {
    [sym__layout_semicolon] = ACTIONS(1052),
    [anon_sym_SEMI] = ACTIONS(1054),
    [sym_comment] = ACTIONS(38),
  },
  [376] = {
    [sym__layout_semicolon] = ACTIONS(1056),
    [anon_sym_SEMI] = ACTIONS(1058),
    [anon_sym_deriving] = ACTIONS(1058),
    [sym_comment] = ACTIONS(38),
  },
  [377] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(1060),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1060),
  },
  [378] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(1062),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1062),
  },
  [379] = {
    [anon_sym_SEMI] = ACTIONS(1064),
    [anon_sym_LBRACE] = ACTIONS(1064),
    [anon_sym_RBRACE] = ACTIONS(1064),
    [anon_sym_LPAREN] = ACTIONS(1064),
    [anon_sym_RPAREN] = ACTIONS(1064),
    [anon_sym_EQ] = ACTIONS(1064),
    [anon_sym_AT] = ACTIONS(1064),
    [anon_sym_BQUOTE] = ACTIONS(1064),
    [anon_sym_DASH] = ACTIONS(1064),
    [anon_sym__] = ACTIONS(1064),
    [anon_sym_BANG] = ACTIONS(1064),
    [anon_sym_POUND] = ACTIONS(1064),
    [anon_sym_DOLLAR] = ACTIONS(1064),
    [anon_sym_PERCENT] = ACTIONS(1064),
    [anon_sym_AMP] = ACTIONS(1064),
    [anon_sym_1] = ACTIONS(1064),
    [anon_sym_PLUS] = ACTIONS(1064),
    [anon_sym_DOT] = ACTIONS(1064),
    [anon_sym_SLASH] = ACTIONS(1064),
    [anon_sym_LT] = ACTIONS(1064),
    [anon_sym_GT] = ACTIONS(1064),
    [anon_sym_QMARK] = ACTIONS(1064),
    [anon_sym_CARET] = ACTIONS(1064),
    [anon_sym_PIPE] = ACTIONS(1064),
    [anon_sym_TILDE] = ACTIONS(1064),
    [anon_sym_COLON] = ACTIONS(1064),
    [anon_sym_BSLASH] = ACTIONS(1064),
    [anon_sym_LBRACK] = ACTIONS(1064),
    [anon_sym_RBRACK] = ACTIONS(1064),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(1064),
    [anon_sym_DQUOTE] = ACTIONS(1064),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1064),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1064),
    [sym__ascii_large] = ACTIONS(1064),
    [sym__space] = ACTIONS(1064),
    [sym__newline] = ACTIONS(1064),
    [sym__tab] = ACTIONS(1064),
    [sym__vertical_tab] = ACTIONS(1064),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1064),
  },
  [380] = {
    [anon_sym_SEMI] = ACTIONS(1066),
    [anon_sym_LBRACE] = ACTIONS(1066),
    [anon_sym_RBRACE] = ACTIONS(1066),
    [anon_sym_LPAREN] = ACTIONS(1066),
    [anon_sym_RPAREN] = ACTIONS(1066),
    [anon_sym_EQ] = ACTIONS(1066),
    [anon_sym_AT] = ACTIONS(1066),
    [anon_sym_BQUOTE] = ACTIONS(1066),
    [anon_sym_DASH] = ACTIONS(1066),
    [anon_sym__] = ACTIONS(1066),
    [anon_sym_BANG] = ACTIONS(1066),
    [anon_sym_POUND] = ACTIONS(1066),
    [anon_sym_DOLLAR] = ACTIONS(1066),
    [anon_sym_PERCENT] = ACTIONS(1066),
    [anon_sym_AMP] = ACTIONS(1066),
    [anon_sym_1] = ACTIONS(1066),
    [anon_sym_PLUS] = ACTIONS(1066),
    [anon_sym_DOT] = ACTIONS(1066),
    [anon_sym_SLASH] = ACTIONS(1066),
    [anon_sym_LT] = ACTIONS(1066),
    [anon_sym_GT] = ACTIONS(1066),
    [anon_sym_QMARK] = ACTIONS(1066),
    [anon_sym_CARET] = ACTIONS(1066),
    [anon_sym_PIPE] = ACTIONS(1066),
    [anon_sym_TILDE] = ACTIONS(1066),
    [anon_sym_COLON] = ACTIONS(1066),
    [anon_sym_BSLASH] = ACTIONS(1066),
    [anon_sym_LBRACK] = ACTIONS(1066),
    [anon_sym_RBRACK] = ACTIONS(1066),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(1066),
    [anon_sym_DQUOTE] = ACTIONS(1066),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1066),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1066),
    [sym__ascii_large] = ACTIONS(1066),
    [sym__space] = ACTIONS(1066),
    [sym__newline] = ACTIONS(1066),
    [sym__tab] = ACTIONS(1066),
    [sym__vertical_tab] = ACTIONS(1066),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1066),
  },
  [381] = {
    [anon_sym_EQ] = ACTIONS(1068),
    [anon_sym__] = ACTIONS(1068),
    [sym__variable_pattern] = ACTIONS(1070),
    [sym__constructor_pattern] = ACTIONS(1070),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(1070),
    [anon_sym_SQUOTE] = ACTIONS(1068),
    [anon_sym_DQUOTE] = ACTIONS(1068),
    [sym__integer_literal] = ACTIONS(1068),
    [sym__octal_literal] = ACTIONS(1068),
    [sym__hexidecimal_literal] = ACTIONS(1068),
  },
  [382] = {
    [sym_label] = STATE(455),
    [sym__identifier] = STATE(299),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [383] = {
    [anon_sym_RBRACE] = ACTIONS(1072),
    [anon_sym_COMMA] = ACTIONS(1074),
    [sym_comment] = ACTIONS(38),
  },
  [384] = {
    [sym__literal] = STATE(457),
    [sym_integer] = STATE(91),
    [sym_char] = STATE(91),
    [sym_string] = STATE(91),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [sym__integer_literal] = ACTIONS(168),
    [sym__octal_literal] = ACTIONS(168),
    [sym__hexidecimal_literal] = ACTIONS(168),
  },
  [385] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(459),
    [anon_sym_COMMA] = ACTIONS(876),
    [anon_sym_RPAREN] = ACTIONS(1076),
    [sym_comment] = ACTIONS(38),
  },
  [386] = {
    [aux_sym_tuple_repeat1] = STATE(461),
    [anon_sym_COMMA] = ACTIONS(884),
    [anon_sym_RPAREN] = ACTIONS(1078),
    [sym_comment] = ACTIONS(38),
  },
  [387] = {
    [anon_sym_COMMA] = ACTIONS(1080),
    [anon_sym_RPAREN] = ACTIONS(1080),
    [sym_comment] = ACTIONS(38),
  },
  [388] = {
    [sym__layout_semicolon] = ACTIONS(1082),
    [anon_sym_SEMI] = ACTIONS(1084),
    [anon_sym_DASH_GT] = ACTIONS(1084),
    [sym_comment] = ACTIONS(38),
  },
  [389] = {
    [anon_sym_COMMA] = ACTIONS(1086),
    [anon_sym_RPAREN] = ACTIONS(1088),
    [sym_comment] = ACTIONS(38),
  },
  [390] = {
    [sym_type] = STATE(408),
    [sym__generic_type_constructor] = STATE(314),
    [sym_tupling_constructor] = STATE(302),
    [sym_tuple] = STATE(314),
    [sym_list] = STATE(314),
    [sym_parenthesized_constructor] = STATE(314),
    [sym_variable_identifier] = STATE(315),
    [sym__type_constructors] = STATE(302),
    [sym_qualified_type_constructor] = STATE(310),
    [anon_sym_LPAREN] = ACTIONS(614),
    [sym_unit_type] = ACTIONS(618),
    [sym_list_constructor] = ACTIONS(618),
    [sym_function_constructor] = ACTIONS(618),
    [anon_sym_LBRACK] = ACTIONS(620),
    [anon_sym_RBRACK] = ACTIONS(1090),
    [sym__variable_pattern] = ACTIONS(286),
    [sym__constructor_pattern] = ACTIONS(630),
    [sym_module_identifier] = ACTIONS(632),
    [sym_comment] = ACTIONS(38),
  },
  [391] = {
    [sym_variable_identifier] = STATE(276),
    [anon_sym_LPAREN] = ACTIONS(918),
    [anon_sym_COMMA] = ACTIONS(918),
    [anon_sym_RPAREN] = ACTIONS(918),
    [anon_sym_DASH_GT] = ACTIONS(918),
    [sym_unit_type] = ACTIONS(918),
    [sym_list_constructor] = ACTIONS(918),
    [sym_function_constructor] = ACTIONS(918),
    [anon_sym_LBRACK] = ACTIONS(918),
    [anon_sym_RBRACK] = ACTIONS(918),
    [sym__variable_pattern] = ACTIONS(286),
    [sym__constructor_pattern] = ACTIONS(1092),
    [sym_module_identifier] = ACTIONS(1092),
    [sym_comment] = ACTIONS(38),
  },
  [392] = {
    [sym_constructor_identifier] = STATE(465),
    [sym__constructor_pattern] = ACTIONS(82),
    [sym_module_identifier] = ACTIONS(920),
    [sym_comment] = ACTIONS(38),
  },
  [393] = {
    [sym_variable_identifier] = STATE(167),
    [aux_sym_type_class_repeat1] = STATE(466),
    [anon_sym_LPAREN] = ACTIONS(924),
    [anon_sym_COMMA] = ACTIONS(924),
    [anon_sym_RPAREN] = ACTIONS(924),
    [anon_sym_DASH_GT] = ACTIONS(924),
    [sym_unit_type] = ACTIONS(924),
    [sym_list_constructor] = ACTIONS(924),
    [sym_function_constructor] = ACTIONS(924),
    [anon_sym_LBRACK] = ACTIONS(924),
    [anon_sym_RBRACK] = ACTIONS(924),
    [sym__variable_pattern] = ACTIONS(286),
    [sym__constructor_pattern] = ACTIONS(1094),
    [sym_module_identifier] = ACTIONS(1094),
    [sym_comment] = ACTIONS(38),
  },
  [394] = {
    [sym_constructor_identifier] = STATE(465),
    [anon_sym_DOT] = ACTIONS(1096),
    [sym__constructor_pattern] = ACTIONS(82),
    [sym_comment] = ACTIONS(38),
  },
  [395] = {
    [sym_type] = STATE(468),
    [sym__generic_type_constructor] = STATE(307),
    [sym_tupling_constructor] = STATE(302),
    [sym_tuple] = STATE(307),
    [sym_list] = STATE(307),
    [sym_parenthesized_constructor] = STATE(307),
    [sym_variable_identifier] = STATE(309),
    [sym__type_constructors] = STATE(302),
    [sym_qualified_type_constructor] = STATE(310),
    [anon_sym_LPAREN] = ACTIONS(614),
    [sym_unit_type] = ACTIONS(618),
    [sym_list_constructor] = ACTIONS(618),
    [sym_function_constructor] = ACTIONS(618),
    [anon_sym_LBRACK] = ACTIONS(620),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(630),
    [sym_module_identifier] = ACTIONS(624),
    [sym_comment] = ACTIONS(38),
  },
  [396] = {
    [sym__layout_semicolon] = ACTIONS(1098),
    [anon_sym_SEMI] = ACTIONS(1101),
    [anon_sym_DASH_GT] = ACTIONS(1101),
    [sym_comment] = ACTIONS(38),
  },
  [397] = {
    [anon_sym_COMMA] = ACTIONS(1104),
    [anon_sym_RPAREN] = ACTIONS(1106),
    [sym_comment] = ACTIONS(38),
  },
  [398] = {
    [sym_type] = STATE(471),
    [sym__generic_type_constructor] = STATE(307),
    [sym_tupling_constructor] = STATE(302),
    [sym_tuple] = STATE(307),
    [sym_list] = STATE(307),
    [sym_parenthesized_constructor] = STATE(307),
    [sym_variable_identifier] = STATE(309),
    [sym__type_constructors] = STATE(302),
    [sym_qualified_type_constructor] = STATE(310),
    [anon_sym_LPAREN] = ACTIONS(614),
    [sym_unit_type] = ACTIONS(618),
    [sym_list_constructor] = ACTIONS(618),
    [sym_function_constructor] = ACTIONS(618),
    [anon_sym_LBRACK] = ACTIONS(620),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(630),
    [sym_module_identifier] = ACTIONS(624),
    [sym_comment] = ACTIONS(38),
  },
  [399] = {
    [anon_sym_EQ_GT] = ACTIONS(1108),
    [sym_comment] = ACTIONS(38),
  },
  [400] = {
    [anon_sym_COMMA] = ACTIONS(738),
    [anon_sym_RPAREN] = ACTIONS(1110),
    [sym_comment] = ACTIONS(38),
  },
  [401] = {
    [sym_type] = STATE(474),
    [sym__generic_type_constructor] = STATE(307),
    [sym_tupling_constructor] = STATE(302),
    [sym_tuple] = STATE(307),
    [sym_list] = STATE(307),
    [sym_parenthesized_constructor] = STATE(307),
    [sym_variable_identifier] = STATE(309),
    [sym__type_constructors] = STATE(302),
    [sym_qualified_type_constructor] = STATE(310),
    [anon_sym_LPAREN] = ACTIONS(614),
    [sym_unit_type] = ACTIONS(618),
    [sym_list_constructor] = ACTIONS(618),
    [sym_function_constructor] = ACTIONS(618),
    [anon_sym_LBRACK] = ACTIONS(620),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(630),
    [sym_module_identifier] = ACTIONS(624),
    [sym_comment] = ACTIONS(38),
  },
  [402] = {
    [sym_constructor_identifier] = STATE(465),
    [sym__constructor_pattern] = ACTIONS(900),
    [sym_module_identifier] = ACTIONS(920),
    [sym_comment] = ACTIONS(38),
  },
  [403] = {
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_DASH_GT] = ACTIONS(92),
    [sym_unit_type] = ACTIONS(92),
    [sym_list_constructor] = ACTIONS(92),
    [sym_function_constructor] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_RBRACK] = ACTIONS(92),
    [sym__variable_pattern] = ACTIONS(92),
    [sym__constructor_pattern] = ACTIONS(224),
    [sym_module_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(38),
  },
  [404] = {
    [sym_constructor_identifier] = STATE(465),
    [anon_sym_DOT] = ACTIONS(1112),
    [sym__constructor_pattern] = ACTIONS(900),
    [sym_comment] = ACTIONS(38),
  },
  [405] = {
    [sym_type] = STATE(471),
    [sym__generic_type_constructor] = STATE(314),
    [sym_tupling_constructor] = STATE(302),
    [sym_tuple] = STATE(314),
    [sym_list] = STATE(314),
    [sym_parenthesized_constructor] = STATE(314),
    [sym_variable_identifier] = STATE(315),
    [sym__type_constructors] = STATE(302),
    [sym_qualified_type_constructor] = STATE(310),
    [anon_sym_LPAREN] = ACTIONS(614),
    [sym_unit_type] = ACTIONS(618),
    [sym_list_constructor] = ACTIONS(618),
    [sym_function_constructor] = ACTIONS(618),
    [anon_sym_LBRACK] = ACTIONS(620),
    [sym__variable_pattern] = ACTIONS(286),
    [sym__constructor_pattern] = ACTIONS(630),
    [sym_module_identifier] = ACTIONS(632),
    [sym_comment] = ACTIONS(38),
  },
  [406] = {
    [sym_type] = STATE(474),
    [sym__generic_type_constructor] = STATE(314),
    [sym_tupling_constructor] = STATE(302),
    [sym_tuple] = STATE(314),
    [sym_list] = STATE(314),
    [sym_parenthesized_constructor] = STATE(314),
    [sym_variable_identifier] = STATE(315),
    [sym__type_constructors] = STATE(302),
    [sym_qualified_type_constructor] = STATE(310),
    [anon_sym_LPAREN] = ACTIONS(614),
    [sym_unit_type] = ACTIONS(618),
    [sym_list_constructor] = ACTIONS(618),
    [sym_function_constructor] = ACTIONS(618),
    [anon_sym_LBRACK] = ACTIONS(620),
    [sym__variable_pattern] = ACTIONS(286),
    [sym__constructor_pattern] = ACTIONS(630),
    [sym_module_identifier] = ACTIONS(632),
    [sym_comment] = ACTIONS(38),
  },
  [407] = {
    [sym__layout_semicolon] = ACTIONS(1114),
    [anon_sym_SEMI] = ACTIONS(1116),
    [anon_sym_DASH_GT] = ACTIONS(1116),
    [sym_comment] = ACTIONS(38),
  },
  [408] = {
    [anon_sym_LPAREN] = ACTIONS(1118),
    [sym_unit_type] = ACTIONS(1118),
    [sym_list_constructor] = ACTIONS(1118),
    [sym_function_constructor] = ACTIONS(1118),
    [anon_sym_LBRACK] = ACTIONS(1118),
    [anon_sym_RBRACK] = ACTIONS(1118),
    [sym__variable_pattern] = ACTIONS(1118),
    [sym__constructor_pattern] = ACTIONS(1120),
    [sym_module_identifier] = ACTIONS(1120),
    [sym_comment] = ACTIONS(38),
  },
  [409] = {
    [sym__layout_semicolon] = ACTIONS(814),
    [anon_sym_SEMI] = ACTIONS(754),
    [anon_sym_DASH_GT] = ACTIONS(754),
    [sym__variable_pattern] = ACTIONS(754),
    [sym_comment] = ACTIONS(38),
  },
  [410] = {
    [anon_sym_DOT] = ACTIONS(1122),
    [sym__constructor_pattern] = ACTIONS(1124),
    [sym_comment] = ACTIONS(38),
  },
  [411] = {
    [sym_variable_identifier] = STATE(317),
    [aux_sym_type_class_repeat1] = STATE(476),
    [sym__layout_semicolon] = ACTIONS(1126),
    [anon_sym_SEMI] = ACTIONS(1128),
    [anon_sym_DASH_GT] = ACTIONS(1128),
    [sym__variable_pattern] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [412] = {
    [sym_variable_identifier] = STATE(409),
    [sym__layout_semicolon] = ACTIONS(1126),
    [anon_sym_SEMI] = ACTIONS(1128),
    [anon_sym_DASH_GT] = ACTIONS(1128),
    [sym__variable_pattern] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [413] = {
    [sym_constructor_identifier] = STATE(478),
    [sym__constructor_pattern] = ACTIONS(368),
    [sym_module_identifier] = ACTIONS(1130),
    [sym_comment] = ACTIONS(38),
  },
  [414] = {
    [sym__layout_semicolon] = ACTIONS(1132),
    [anon_sym_SEMI] = ACTIONS(1134),
    [sym_comment] = ACTIONS(38),
  },
  [415] = {
    [sym__layout_semicolon] = ACTIONS(1136),
    [anon_sym_SEMI] = ACTIONS(1138),
    [sym_comment] = ACTIONS(38),
  },
  [416] = {
    [sym__layout_close_brace] = ACTIONS(356),
    [anon_sym_import] = ACTIONS(358),
    [anon_sym_foreign] = ACTIONS(358),
    [anon_sym_default] = ACTIONS(358),
    [anon_sym_do] = ACTIONS(358),
    [anon_sym_class] = ACTIONS(358),
    [anon_sym_instance] = ACTIONS(358),
    [anon_sym_infixl] = ACTIONS(358),
    [anon_sym_infixr] = ACTIONS(358),
    [anon_sym_infix] = ACTIONS(358),
    [anon_sym_data] = ACTIONS(358),
    [anon_sym_newtype] = ACTIONS(358),
    [anon_sym_type] = ACTIONS(358),
    [sym__variable_pattern] = ACTIONS(360),
    [sym__constructor_pattern] = ACTIONS(360),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(360),
    [anon_sym_SQUOTE] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(358),
    [sym__integer_literal] = ACTIONS(358),
    [sym__octal_literal] = ACTIONS(358),
    [sym__hexidecimal_literal] = ACTIONS(358),
  },
  [417] = {
    [ts_builtin_sym_end] = ACTIONS(1140),
    [sym_comment] = ACTIONS(38),
  },
  [418] = {
    [sym__layout_semicolon] = ACTIONS(1142),
    [anon_sym_SEMI] = ACTIONS(1144),
    [sym_comment] = ACTIONS(38),
  },
  [419] = {
    [anon_sym_COMMA] = ACTIONS(1146),
    [anon_sym_RPAREN] = ACTIONS(1146),
    [sym_comment] = ACTIONS(38),
  },
  [420] = {
    [sym_export] = STATE(480),
    [sym__identifier] = STATE(213),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [421] = {
    [anon_sym_where] = ACTIONS(1148),
    [sym_comment] = ACTIONS(38),
  },
  [422] = {
    [anon_sym_RPAREN] = ACTIONS(1150),
    [sym_comment] = ACTIONS(38),
  },
  [423] = {
    [aux_sym_export_repeat1] = STATE(482),
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(1150),
    [sym_comment] = ACTIONS(38),
  },
  [424] = {
    [sym__layout_semicolon] = ACTIONS(1152),
    [anon_sym_SEMI] = ACTIONS(1154),
    [sym_comment] = ACTIONS(38),
  },
  [425] = {
    [anon_sym_RPAREN] = ACTIONS(1156),
    [sym_comment] = ACTIONS(38),
  },
  [426] = {
    [aux_sym_export_repeat1] = STATE(484),
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(1156),
    [sym_comment] = ACTIONS(38),
  },
  [427] = {
    [anon_sym_LPAREN] = ACTIONS(1158),
    [anon_sym_COMMA] = ACTIONS(1160),
    [anon_sym_RPAREN] = ACTIONS(1160),
    [sym_comment] = ACTIONS(38),
  },
  [428] = {
    [sym__identifier] = STATE(486),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [429] = {
    [sym__layout_semicolon] = ACTIONS(1162),
    [anon_sym_SEMI] = ACTIONS(1164),
    [sym_comment] = ACTIONS(38),
  },
  [430] = {
    [sym__identifier] = STATE(488),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_DOT_DOT] = ACTIONS(1166),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [431] = {
    [anon_sym_COMMA] = ACTIONS(964),
    [anon_sym_RPAREN] = ACTIONS(1168),
    [sym_comment] = ACTIONS(38),
  },
  [432] = {
    [sym__variable_pattern] = ACTIONS(590),
    [sym__constructor_pattern] = ACTIONS(592),
    [sym_comment] = ACTIONS(38),
  },
  [433] = {
    [sym__layout_semicolon] = ACTIONS(1170),
    [anon_sym_SEMI] = ACTIONS(1172),
    [sym_comment] = ACTIONS(38),
  },
  [434] = {
    [anon_sym_COMMA] = ACTIONS(1174),
    [anon_sym_RPAREN] = ACTIONS(1174),
    [sym_comment] = ACTIONS(38),
  },
  [435] = {
    [anon_sym_COMMA] = ACTIONS(1176),
    [anon_sym_RPAREN] = ACTIONS(1176),
    [sym_comment] = ACTIONS(38),
  },
  [436] = {
    [sym__constructor_pattern] = ACTIONS(1178),
    [sym_comment] = ACTIONS(38),
  },
  [437] = {
    [sym__layout_semicolon] = ACTIONS(1180),
    [anon_sym_SEMI] = ACTIONS(1182),
    [sym_comment] = ACTIONS(38),
  },
  [438] = {
    [sym__layout_close_brace] = ACTIONS(1184),
    [anon_sym_infixl] = ACTIONS(1186),
    [anon_sym_infixr] = ACTIONS(1186),
    [anon_sym_infix] = ACTIONS(1186),
    [sym__variable_pattern] = ACTIONS(1188),
    [sym__constructor_pattern] = ACTIONS(1188),
    [sym_comment] = ACTIONS(38),
  },
  [439] = {
    [sym__layout_semicolon] = ACTIONS(1190),
    [anon_sym_SEMI] = ACTIONS(1192),
    [sym_comment] = ACTIONS(38),
  },
  [440] = {
    [sym__layout_semicolon] = ACTIONS(1194),
    [anon_sym_SEMI] = ACTIONS(1196),
    [sym_comment] = ACTIONS(38),
  },
  [441] = {
    [anon_sym_RBRACE] = ACTIONS(1186),
    [anon_sym_infixl] = ACTIONS(1186),
    [anon_sym_infixr] = ACTIONS(1186),
    [anon_sym_infix] = ACTIONS(1186),
    [sym__variable_pattern] = ACTIONS(1188),
    [sym__constructor_pattern] = ACTIONS(1188),
    [sym_comment] = ACTIONS(38),
  },
  [442] = {
    [sym__layout_semicolon] = ACTIONS(1198),
    [anon_sym_SEMI] = ACTIONS(1200),
    [sym_comment] = ACTIONS(38),
  },
  [443] = {
    [sym__layout_semicolon] = ACTIONS(1202),
    [anon_sym_SEMI] = ACTIONS(1204),
    [sym_comment] = ACTIONS(38),
  },
  [444] = {
    [sym__layout_semicolon] = ACTIONS(1206),
    [anon_sym_SEMI] = ACTIONS(1208),
    [sym_comment] = ACTIONS(38),
  },
  [445] = {
    [sym__layout_semicolon] = ACTIONS(1210),
    [anon_sym_SEMI] = ACTIONS(1212),
    [sym_comment] = ACTIONS(38),
  },
  [446] = {
    [anon_sym_COMMA] = ACTIONS(716),
    [anon_sym_RPAREN] = ACTIONS(1214),
    [sym_comment] = ACTIONS(38),
  },
  [447] = {
    [sym__layout_semicolon] = ACTIONS(1216),
    [anon_sym_SEMI] = ACTIONS(1218),
    [anon_sym_PIPE] = ACTIONS(1218),
    [anon_sym_deriving] = ACTIONS(1218),
    [sym_comment] = ACTIONS(38),
  },
  [448] = {
    [sym__layout_semicolon] = ACTIONS(1220),
    [anon_sym_SEMI] = ACTIONS(1222),
    [anon_sym_PIPE] = ACTIONS(1222),
    [anon_sym_deriving] = ACTIONS(1222),
    [sym_comment] = ACTIONS(38),
  },
  [449] = {
    [sym_field] = STATE(493),
    [sym_variable_identifier] = STATE(371),
    [sym__variable_pattern] = ACTIONS(212),
    [sym_comment] = ACTIONS(38),
  },
  [450] = {
    [anon_sym_RBRACE] = ACTIONS(1224),
    [anon_sym_COMMA] = ACTIONS(1226),
    [sym_comment] = ACTIONS(38),
  },
  [451] = {
    [sym_variable_identifier] = STATE(496),
    [sym__variable_pattern] = ACTIONS(212),
    [sym_comment] = ACTIONS(38),
  },
  [452] = {
    [sym_strict] = STATE(498),
    [sym__identifier] = STATE(498),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_BANG] = ACTIONS(1228),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [453] = {
    [anon_sym_COMMA] = ACTIONS(1230),
    [anon_sym_COLON_COLON] = ACTIONS(1232),
    [sym_comment] = ACTIONS(38),
  },
  [454] = {
    [sym__layout_semicolon] = ACTIONS(1234),
    [anon_sym_SEMI] = ACTIONS(1236),
    [sym_comment] = ACTIONS(38),
  },
  [455] = {
    [anon_sym_RBRACE] = ACTIONS(1238),
    [anon_sym_COMMA] = ACTIONS(1238),
    [sym_comment] = ACTIONS(38),
  },
  [456] = {
    [sym_label] = STATE(501),
    [sym__identifier] = STATE(299),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [457] = {
    [anon_sym_RBRACE] = ACTIONS(1240),
    [anon_sym_COMMA] = ACTIONS(1240),
    [sym_comment] = ACTIONS(38),
  },
  [458] = {
    [anon_sym_LPAREN] = ACTIONS(1084),
    [anon_sym_COMMA] = ACTIONS(1084),
    [anon_sym_RPAREN] = ACTIONS(1084),
    [anon_sym_DASH_GT] = ACTIONS(1084),
    [sym_unit_type] = ACTIONS(1084),
    [sym_list_constructor] = ACTIONS(1084),
    [sym_function_constructor] = ACTIONS(1084),
    [anon_sym_LBRACK] = ACTIONS(1084),
    [anon_sym_RBRACK] = ACTIONS(1084),
    [sym__variable_pattern] = ACTIONS(1084),
    [sym__constructor_pattern] = ACTIONS(1242),
    [sym_module_identifier] = ACTIONS(1242),
    [sym_comment] = ACTIONS(38),
  },
  [459] = {
    [anon_sym_COMMA] = ACTIONS(1086),
    [anon_sym_RPAREN] = ACTIONS(1244),
    [sym_comment] = ACTIONS(38),
  },
  [460] = {
    [anon_sym_LPAREN] = ACTIONS(1101),
    [anon_sym_COMMA] = ACTIONS(1101),
    [anon_sym_RPAREN] = ACTIONS(1101),
    [anon_sym_DASH_GT] = ACTIONS(1101),
    [sym_unit_type] = ACTIONS(1101),
    [sym_list_constructor] = ACTIONS(1101),
    [sym_function_constructor] = ACTIONS(1101),
    [anon_sym_LBRACK] = ACTIONS(1101),
    [anon_sym_RBRACK] = ACTIONS(1101),
    [sym__variable_pattern] = ACTIONS(1101),
    [sym__constructor_pattern] = ACTIONS(1246),
    [sym_module_identifier] = ACTIONS(1246),
    [sym_comment] = ACTIONS(38),
  },
  [461] = {
    [anon_sym_COMMA] = ACTIONS(1104),
    [anon_sym_RPAREN] = ACTIONS(1249),
    [sym_comment] = ACTIONS(38),
  },
  [462] = {
    [anon_sym_COMMA] = ACTIONS(1251),
    [anon_sym_RPAREN] = ACTIONS(1251),
    [sym_comment] = ACTIONS(38),
  },
  [463] = {
    [sym__layout_semicolon] = ACTIONS(1253),
    [anon_sym_SEMI] = ACTIONS(1255),
    [anon_sym_DASH_GT] = ACTIONS(1255),
    [sym_comment] = ACTIONS(38),
  },
  [464] = {
    [anon_sym_LPAREN] = ACTIONS(1116),
    [anon_sym_COMMA] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(1116),
    [anon_sym_DASH_GT] = ACTIONS(1116),
    [sym_unit_type] = ACTIONS(1116),
    [sym_list_constructor] = ACTIONS(1116),
    [sym_function_constructor] = ACTIONS(1116),
    [anon_sym_LBRACK] = ACTIONS(1116),
    [anon_sym_RBRACK] = ACTIONS(1116),
    [sym__variable_pattern] = ACTIONS(1116),
    [sym__constructor_pattern] = ACTIONS(1257),
    [sym_module_identifier] = ACTIONS(1257),
    [sym_comment] = ACTIONS(38),
  },
  [465] = {
    [sym_variable_identifier] = STATE(167),
    [aux_sym_type_class_repeat1] = STATE(504),
    [anon_sym_LPAREN] = ACTIONS(1128),
    [anon_sym_COMMA] = ACTIONS(1128),
    [anon_sym_RPAREN] = ACTIONS(1128),
    [anon_sym_DASH_GT] = ACTIONS(1128),
    [sym_unit_type] = ACTIONS(1128),
    [sym_list_constructor] = ACTIONS(1128),
    [sym_function_constructor] = ACTIONS(1128),
    [anon_sym_LBRACK] = ACTIONS(1128),
    [anon_sym_RBRACK] = ACTIONS(1128),
    [sym__variable_pattern] = ACTIONS(286),
    [sym__constructor_pattern] = ACTIONS(1259),
    [sym_module_identifier] = ACTIONS(1259),
    [sym_comment] = ACTIONS(38),
  },
  [466] = {
    [sym_variable_identifier] = STATE(276),
    [anon_sym_LPAREN] = ACTIONS(1128),
    [anon_sym_COMMA] = ACTIONS(1128),
    [anon_sym_RPAREN] = ACTIONS(1128),
    [anon_sym_DASH_GT] = ACTIONS(1128),
    [sym_unit_type] = ACTIONS(1128),
    [sym_list_constructor] = ACTIONS(1128),
    [sym_function_constructor] = ACTIONS(1128),
    [anon_sym_LBRACK] = ACTIONS(1128),
    [anon_sym_RBRACK] = ACTIONS(1128),
    [sym__variable_pattern] = ACTIONS(286),
    [sym__constructor_pattern] = ACTIONS(1259),
    [sym_module_identifier] = ACTIONS(1259),
    [sym_comment] = ACTIONS(38),
  },
  [467] = {
    [sym_constructor_identifier] = STATE(505),
    [sym__constructor_pattern] = ACTIONS(82),
    [sym_module_identifier] = ACTIONS(1130),
    [sym_comment] = ACTIONS(38),
  },
  [468] = {
    [anon_sym_COMMA] = ACTIONS(1261),
    [anon_sym_RPAREN] = ACTIONS(1261),
    [sym_comment] = ACTIONS(38),
  },
  [469] = {
    [sym_type] = STATE(506),
    [sym__generic_type_constructor] = STATE(307),
    [sym_tupling_constructor] = STATE(302),
    [sym_tuple] = STATE(307),
    [sym_list] = STATE(307),
    [sym_parenthesized_constructor] = STATE(307),
    [sym_variable_identifier] = STATE(309),
    [sym__type_constructors] = STATE(302),
    [sym_qualified_type_constructor] = STATE(310),
    [anon_sym_LPAREN] = ACTIONS(614),
    [sym_unit_type] = ACTIONS(618),
    [sym_list_constructor] = ACTIONS(618),
    [sym_function_constructor] = ACTIONS(618),
    [anon_sym_LBRACK] = ACTIONS(620),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(630),
    [sym_module_identifier] = ACTIONS(624),
    [sym_comment] = ACTIONS(38),
  },
  [470] = {
    [sym__layout_semicolon] = ACTIONS(1263),
    [anon_sym_SEMI] = ACTIONS(1265),
    [anon_sym_DASH_GT] = ACTIONS(1265),
    [sym_comment] = ACTIONS(38),
  },
  [471] = {
    [anon_sym_LPAREN] = ACTIONS(1134),
    [anon_sym_COMMA] = ACTIONS(1134),
    [anon_sym_RPAREN] = ACTIONS(1134),
    [sym_unit_type] = ACTIONS(1134),
    [sym_list_constructor] = ACTIONS(1134),
    [sym_function_constructor] = ACTIONS(1134),
    [anon_sym_LBRACK] = ACTIONS(1134),
    [anon_sym_RBRACK] = ACTIONS(1134),
    [sym__variable_pattern] = ACTIONS(1134),
    [sym__constructor_pattern] = ACTIONS(1267),
    [sym_module_identifier] = ACTIONS(1267),
    [sym_comment] = ACTIONS(38),
  },
  [472] = {
    [anon_sym_LPAREN] = ACTIONS(1269),
    [sym_unit_type] = ACTIONS(1269),
    [sym_list_constructor] = ACTIONS(1269),
    [sym_function_constructor] = ACTIONS(1269),
    [anon_sym_LBRACK] = ACTIONS(1269),
    [sym__variable_pattern] = ACTIONS(1269),
    [sym__constructor_pattern] = ACTIONS(984),
    [sym_module_identifier] = ACTIONS(984),
    [sym_comment] = ACTIONS(38),
  },
  [473] = {
    [anon_sym_EQ_GT] = ACTIONS(1271),
    [sym_comment] = ACTIONS(38),
  },
  [474] = {
    [anon_sym_LPAREN] = ACTIONS(1138),
    [anon_sym_COMMA] = ACTIONS(1138),
    [anon_sym_RPAREN] = ACTIONS(1138),
    [sym_unit_type] = ACTIONS(1138),
    [sym_list_constructor] = ACTIONS(1138),
    [sym_function_constructor] = ACTIONS(1138),
    [anon_sym_LBRACK] = ACTIONS(1138),
    [anon_sym_RBRACK] = ACTIONS(1138),
    [sym__variable_pattern] = ACTIONS(1138),
    [sym__constructor_pattern] = ACTIONS(1273),
    [sym_module_identifier] = ACTIONS(1273),
    [sym_comment] = ACTIONS(38),
  },
  [475] = {
    [sym_constructor_identifier] = STATE(505),
    [sym__constructor_pattern] = ACTIONS(900),
    [sym_module_identifier] = ACTIONS(1130),
    [sym_comment] = ACTIONS(38),
  },
  [476] = {
    [sym_variable_identifier] = STATE(409),
    [sym__layout_semicolon] = ACTIONS(1275),
    [anon_sym_SEMI] = ACTIONS(1277),
    [anon_sym_DASH_GT] = ACTIONS(1277),
    [sym__variable_pattern] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [477] = {
    [anon_sym_DOT] = ACTIONS(1279),
    [sym__constructor_pattern] = ACTIONS(1281),
    [sym_comment] = ACTIONS(38),
  },
  [478] = {
    [sym_variable_identifier] = STATE(317),
    [aux_sym_type_class_repeat1] = STATE(508),
    [sym__layout_semicolon] = ACTIONS(1275),
    [anon_sym_SEMI] = ACTIONS(1277),
    [anon_sym_DASH_GT] = ACTIONS(1277),
    [sym__variable_pattern] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [479] = {
    [sym__layout_close_brace] = ACTIONS(664),
    [anon_sym_import] = ACTIONS(666),
    [anon_sym_foreign] = ACTIONS(666),
    [anon_sym_default] = ACTIONS(666),
    [anon_sym_do] = ACTIONS(666),
    [anon_sym_class] = ACTIONS(666),
    [anon_sym_instance] = ACTIONS(666),
    [anon_sym_infixl] = ACTIONS(666),
    [anon_sym_infixr] = ACTIONS(666),
    [anon_sym_infix] = ACTIONS(666),
    [anon_sym_data] = ACTIONS(666),
    [anon_sym_newtype] = ACTIONS(666),
    [anon_sym_type] = ACTIONS(666),
    [sym__variable_pattern] = ACTIONS(668),
    [sym__constructor_pattern] = ACTIONS(668),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(668),
    [anon_sym_SQUOTE] = ACTIONS(666),
    [anon_sym_DQUOTE] = ACTIONS(666),
    [sym__integer_literal] = ACTIONS(666),
    [sym__octal_literal] = ACTIONS(666),
    [sym__hexidecimal_literal] = ACTIONS(666),
  },
  [480] = {
    [anon_sym_COMMA] = ACTIONS(1283),
    [anon_sym_RPAREN] = ACTIONS(1283),
    [sym_comment] = ACTIONS(38),
  },
  [481] = {
    [anon_sym_COMMA] = ACTIONS(1285),
    [anon_sym_RPAREN] = ACTIONS(1285),
    [sym_comment] = ACTIONS(38),
  },
  [482] = {
    [anon_sym_COMMA] = ACTIONS(716),
    [anon_sym_RPAREN] = ACTIONS(1287),
    [sym_comment] = ACTIONS(38),
  },
  [483] = {
    [aux_sym_import_specification_repeat1] = STATE(511),
    [anon_sym_COMMA] = ACTIONS(698),
    [anon_sym_RPAREN] = ACTIONS(1289),
    [sym_comment] = ACTIONS(38),
  },
  [484] = {
    [anon_sym_COMMA] = ACTIONS(716),
    [anon_sym_RPAREN] = ACTIONS(1291),
    [sym_comment] = ACTIONS(38),
  },
  [485] = {
    [sym__identifier] = STATE(514),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_DOT_DOT] = ACTIONS(1293),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [486] = {
    [anon_sym_LPAREN] = ACTIONS(1295),
    [anon_sym_COMMA] = ACTIONS(1297),
    [anon_sym_RPAREN] = ACTIONS(1297),
    [sym_comment] = ACTIONS(38),
  },
  [487] = {
    [anon_sym_RPAREN] = ACTIONS(1291),
    [sym_comment] = ACTIONS(38),
  },
  [488] = {
    [aux_sym_export_repeat1] = STATE(516),
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(1291),
    [sym_comment] = ACTIONS(38),
  },
  [489] = {
    [sym__layout_semicolon] = ACTIONS(1299),
    [anon_sym_SEMI] = ACTIONS(1301),
    [sym_comment] = ACTIONS(38),
  },
  [490] = {
    [sym__layout_close_brace] = ACTIONS(1303),
    [anon_sym_infixl] = ACTIONS(1305),
    [anon_sym_infixr] = ACTIONS(1305),
    [anon_sym_infix] = ACTIONS(1305),
    [sym__variable_pattern] = ACTIONS(1307),
    [sym__constructor_pattern] = ACTIONS(1307),
    [sym_comment] = ACTIONS(38),
  },
  [491] = {
    [anon_sym_RBRACE] = ACTIONS(1305),
    [anon_sym_infixl] = ACTIONS(1305),
    [anon_sym_infixr] = ACTIONS(1305),
    [anon_sym_infix] = ACTIONS(1305),
    [sym__variable_pattern] = ACTIONS(1307),
    [sym__constructor_pattern] = ACTIONS(1307),
    [sym_comment] = ACTIONS(38),
  },
  [492] = {
    [sym__layout_semicolon] = ACTIONS(1309),
    [anon_sym_SEMI] = ACTIONS(1311),
    [sym_comment] = ACTIONS(38),
  },
  [493] = {
    [anon_sym_RBRACE] = ACTIONS(1313),
    [anon_sym_COMMA] = ACTIONS(1313),
    [sym_comment] = ACTIONS(38),
  },
  [494] = {
    [sym__layout_semicolon] = ACTIONS(1315),
    [anon_sym_SEMI] = ACTIONS(1317),
    [anon_sym_PIPE] = ACTIONS(1317),
    [anon_sym_deriving] = ACTIONS(1317),
    [sym_comment] = ACTIONS(38),
  },
  [495] = {
    [sym_field] = STATE(517),
    [sym_variable_identifier] = STATE(371),
    [sym__variable_pattern] = ACTIONS(212),
    [sym_comment] = ACTIONS(38),
  },
  [496] = {
    [anon_sym_COMMA] = ACTIONS(1319),
    [anon_sym_COLON_COLON] = ACTIONS(1319),
    [sym_comment] = ACTIONS(38),
  },
  [497] = {
    [sym__identifier] = STATE(518),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [498] = {
    [anon_sym_RBRACE] = ACTIONS(1321),
    [anon_sym_COMMA] = ACTIONS(1321),
    [sym_comment] = ACTIONS(38),
  },
  [499] = {
    [sym_variable_identifier] = STATE(519),
    [sym__variable_pattern] = ACTIONS(212),
    [sym_comment] = ACTIONS(38),
  },
  [500] = {
    [sym_strict] = STATE(520),
    [sym__identifier] = STATE(520),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_BANG] = ACTIONS(1228),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [501] = {
    [anon_sym_RBRACE] = ACTIONS(1323),
    [anon_sym_COMMA] = ACTIONS(1323),
    [sym_comment] = ACTIONS(38),
  },
  [502] = {
    [anon_sym_LPAREN] = ACTIONS(1255),
    [anon_sym_COMMA] = ACTIONS(1255),
    [anon_sym_RPAREN] = ACTIONS(1255),
    [anon_sym_DASH_GT] = ACTIONS(1255),
    [sym_unit_type] = ACTIONS(1255),
    [sym_list_constructor] = ACTIONS(1255),
    [sym_function_constructor] = ACTIONS(1255),
    [anon_sym_LBRACK] = ACTIONS(1255),
    [anon_sym_RBRACK] = ACTIONS(1255),
    [sym__variable_pattern] = ACTIONS(1255),
    [sym__constructor_pattern] = ACTIONS(1325),
    [sym_module_identifier] = ACTIONS(1325),
    [sym_comment] = ACTIONS(38),
  },
  [503] = {
    [anon_sym_LPAREN] = ACTIONS(1265),
    [anon_sym_COMMA] = ACTIONS(1265),
    [anon_sym_RPAREN] = ACTIONS(1265),
    [anon_sym_DASH_GT] = ACTIONS(1265),
    [sym_unit_type] = ACTIONS(1265),
    [sym_list_constructor] = ACTIONS(1265),
    [sym_function_constructor] = ACTIONS(1265),
    [anon_sym_LBRACK] = ACTIONS(1265),
    [anon_sym_RBRACK] = ACTIONS(1265),
    [sym__variable_pattern] = ACTIONS(1265),
    [sym__constructor_pattern] = ACTIONS(1327),
    [sym_module_identifier] = ACTIONS(1327),
    [sym_comment] = ACTIONS(38),
  },
  [504] = {
    [sym_variable_identifier] = STATE(276),
    [anon_sym_LPAREN] = ACTIONS(1277),
    [anon_sym_COMMA] = ACTIONS(1277),
    [anon_sym_RPAREN] = ACTIONS(1277),
    [anon_sym_DASH_GT] = ACTIONS(1277),
    [sym_unit_type] = ACTIONS(1277),
    [sym_list_constructor] = ACTIONS(1277),
    [sym_function_constructor] = ACTIONS(1277),
    [anon_sym_LBRACK] = ACTIONS(1277),
    [anon_sym_RBRACK] = ACTIONS(1277),
    [sym__variable_pattern] = ACTIONS(286),
    [sym__constructor_pattern] = ACTIONS(1329),
    [sym_module_identifier] = ACTIONS(1329),
    [sym_comment] = ACTIONS(38),
  },
  [505] = {
    [sym_variable_identifier] = STATE(167),
    [aux_sym_type_class_repeat1] = STATE(521),
    [anon_sym_LPAREN] = ACTIONS(1277),
    [anon_sym_COMMA] = ACTIONS(1277),
    [anon_sym_RPAREN] = ACTIONS(1277),
    [anon_sym_DASH_GT] = ACTIONS(1277),
    [sym_unit_type] = ACTIONS(1277),
    [sym_list_constructor] = ACTIONS(1277),
    [sym_function_constructor] = ACTIONS(1277),
    [anon_sym_LBRACK] = ACTIONS(1277),
    [anon_sym_RBRACK] = ACTIONS(1277),
    [sym__variable_pattern] = ACTIONS(286),
    [sym__constructor_pattern] = ACTIONS(1329),
    [sym_module_identifier] = ACTIONS(1329),
    [sym_comment] = ACTIONS(38),
  },
  [506] = {
    [anon_sym_COMMA] = ACTIONS(1331),
    [anon_sym_RPAREN] = ACTIONS(1331),
    [sym_comment] = ACTIONS(38),
  },
  [507] = {
    [anon_sym_LPAREN] = ACTIONS(1333),
    [sym_unit_type] = ACTIONS(1333),
    [sym_list_constructor] = ACTIONS(1333),
    [sym_function_constructor] = ACTIONS(1333),
    [anon_sym_LBRACK] = ACTIONS(1333),
    [sym__variable_pattern] = ACTIONS(1333),
    [sym__constructor_pattern] = ACTIONS(1178),
    [sym_module_identifier] = ACTIONS(1178),
    [sym_comment] = ACTIONS(38),
  },
  [508] = {
    [sym_variable_identifier] = STATE(409),
    [sym__layout_semicolon] = ACTIONS(1335),
    [anon_sym_SEMI] = ACTIONS(1337),
    [anon_sym_DASH_GT] = ACTIONS(1337),
    [sym__variable_pattern] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [509] = {
    [anon_sym_COMMA] = ACTIONS(1339),
    [anon_sym_RPAREN] = ACTIONS(1339),
    [sym_comment] = ACTIONS(38),
  },
  [510] = {
    [sym__layout_semicolon] = ACTIONS(1341),
    [anon_sym_SEMI] = ACTIONS(1343),
    [sym_comment] = ACTIONS(38),
  },
  [511] = {
    [anon_sym_COMMA] = ACTIONS(964),
    [anon_sym_RPAREN] = ACTIONS(1345),
    [sym_comment] = ACTIONS(38),
  },
  [512] = {
    [aux_sym_import_specification_repeat1] = STATE(523),
    [anon_sym_COMMA] = ACTIONS(698),
    [anon_sym_RPAREN] = ACTIONS(1345),
    [sym_comment] = ACTIONS(38),
  },
  [513] = {
    [anon_sym_RPAREN] = ACTIONS(1347),
    [sym_comment] = ACTIONS(38),
  },
  [514] = {
    [aux_sym_export_repeat1] = STATE(525),
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(1347),
    [sym_comment] = ACTIONS(38),
  },
  [515] = {
    [sym__identifier] = STATE(527),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_DOT_DOT] = ACTIONS(1349),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(66),
    [sym_comment] = ACTIONS(38),
  },
  [516] = {
    [anon_sym_COMMA] = ACTIONS(716),
    [anon_sym_RPAREN] = ACTIONS(1351),
    [sym_comment] = ACTIONS(38),
  },
  [517] = {
    [anon_sym_RBRACE] = ACTIONS(1353),
    [anon_sym_COMMA] = ACTIONS(1353),
    [sym_comment] = ACTIONS(38),
  },
  [518] = {
    [anon_sym_RBRACE] = ACTIONS(1042),
    [anon_sym_COMMA] = ACTIONS(1042),
    [sym_comment] = ACTIONS(38),
  },
  [519] = {
    [anon_sym_COMMA] = ACTIONS(1355),
    [anon_sym_COLON_COLON] = ACTIONS(1355),
    [sym_comment] = ACTIONS(38),
  },
  [520] = {
    [anon_sym_RBRACE] = ACTIONS(1357),
    [anon_sym_COMMA] = ACTIONS(1357),
    [sym_comment] = ACTIONS(38),
  },
  [521] = {
    [sym_variable_identifier] = STATE(276),
    [anon_sym_LPAREN] = ACTIONS(1337),
    [anon_sym_COMMA] = ACTIONS(1337),
    [anon_sym_RPAREN] = ACTIONS(1337),
    [anon_sym_DASH_GT] = ACTIONS(1337),
    [sym_unit_type] = ACTIONS(1337),
    [sym_list_constructor] = ACTIONS(1337),
    [sym_function_constructor] = ACTIONS(1337),
    [anon_sym_LBRACK] = ACTIONS(1337),
    [anon_sym_RBRACK] = ACTIONS(1337),
    [sym__variable_pattern] = ACTIONS(286),
    [sym__constructor_pattern] = ACTIONS(1359),
    [sym_module_identifier] = ACTIONS(1359),
    [sym_comment] = ACTIONS(38),
  },
  [522] = {
    [sym__layout_semicolon] = ACTIONS(1361),
    [anon_sym_SEMI] = ACTIONS(1363),
    [sym_comment] = ACTIONS(38),
  },
  [523] = {
    [anon_sym_COMMA] = ACTIONS(964),
    [anon_sym_RPAREN] = ACTIONS(1365),
    [sym_comment] = ACTIONS(38),
  },
  [524] = {
    [anon_sym_COMMA] = ACTIONS(1367),
    [anon_sym_RPAREN] = ACTIONS(1367),
    [sym_comment] = ACTIONS(38),
  },
  [525] = {
    [anon_sym_COMMA] = ACTIONS(716),
    [anon_sym_RPAREN] = ACTIONS(1369),
    [sym_comment] = ACTIONS(38),
  },
  [526] = {
    [anon_sym_RPAREN] = ACTIONS(1369),
    [sym_comment] = ACTIONS(38),
  },
  [527] = {
    [aux_sym_export_repeat1] = STATE(531),
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(1369),
    [sym_comment] = ACTIONS(38),
  },
  [528] = {
    [aux_sym_import_specification_repeat1] = STATE(532),
    [anon_sym_COMMA] = ACTIONS(698),
    [anon_sym_RPAREN] = ACTIONS(1365),
    [sym_comment] = ACTIONS(38),
  },
  [529] = {
    [sym__layout_semicolon] = ACTIONS(1371),
    [anon_sym_SEMI] = ACTIONS(1373),
    [sym_comment] = ACTIONS(38),
  },
  [530] = {
    [anon_sym_COMMA] = ACTIONS(1375),
    [anon_sym_RPAREN] = ACTIONS(1375),
    [sym_comment] = ACTIONS(38),
  },
  [531] = {
    [anon_sym_COMMA] = ACTIONS(716),
    [anon_sym_RPAREN] = ACTIONS(1377),
    [sym_comment] = ACTIONS(38),
  },
  [532] = {
    [anon_sym_COMMA] = ACTIONS(964),
    [anon_sym_RPAREN] = ACTIONS(1379),
    [sym_comment] = ACTIONS(38),
  },
  [533] = {
    [anon_sym_COMMA] = ACTIONS(1381),
    [anon_sym_RPAREN] = ACTIONS(1381),
    [sym_comment] = ACTIONS(38),
  },
  [534] = {
    [sym__layout_semicolon] = ACTIONS(1383),
    [anon_sym_SEMI] = ACTIONS(1385),
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
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(38),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_identifier, 1),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_identifier, 1),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_identifier, 1),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_identifier, 1),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_identifier, 1),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(83),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable, 1, .fragile = true),
  [174] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__general_declaration, 1),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__general_declaration, 1),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign_import, 1),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(120),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [224] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_identifier, 1),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(133),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [236] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(139),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [240] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [246] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(142),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1),
  [264] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1),
  [266] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(147),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(152),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(157),
  [282] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_variable_identifier, 2),
  [296] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1, .fragile = true),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(169),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(170),
  [310] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(171),
  [312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(172),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(173),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [324] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(175),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(176),
  [330] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(177),
  [332] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(178),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(179),
  [336] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(180),
  [338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [344] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [346] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [348] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [350] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [352] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(181),
  [354] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(182),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
  [360] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 1),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 1),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
  [368] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(184),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_declaration, 2),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_declaration, 2),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_wildcard, 1),
  [376] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_wildcard, 1),
  [378] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(188),
  [380] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(189),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 1),
  [384] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 1),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 1),
  [388] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 1),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_head, 2),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [404] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(198),
  [406] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(199),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_calling_convention, 1),
  [434] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_calling_convention, 1),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 3),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 3),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [460] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [476] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [486] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(247),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [492] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [494] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(250),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2),
  [498] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2),
  [500] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(252),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(253),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [516] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [524] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(260),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(267),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [548] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(273),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
  [554] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(278),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [558] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(280),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(282),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(284),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [572] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [574] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [576] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(286),
  [578] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(288),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(290),
  [584] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [586] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [592] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 1),
  [598] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 2),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 2),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(293),
  [606] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(294),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 2),
  [612] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 2),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(300),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(301),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(302),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [622] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(304),
  [624] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(305),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__generic_type_constructor, 1),
  [630] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(311),
  [632] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(312),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(319),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(325),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 3),
  [668] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(330),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(331),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(336),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(338),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_safety, 1),
  [704] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_safety, 1),
  [706] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(342),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 4),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 4),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 4),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 4),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(347),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [724] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [734] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(350),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(352),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(354),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(355),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(360),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [756] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [758] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(362),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 4),
  [762] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 4),
  [764] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 3),
  [768] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [770] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(363),
  [772] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 3),
  [774] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 3),
  [776] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [780] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [782] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [784] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [788] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(369),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [808] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [824] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [830] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [832] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [836] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(378),
  [838] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [840] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [842] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [844] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [846] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(379),
  [848] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [850] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(380),
  [852] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 2),
  [856] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_as_pattern, 3),
  [860] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_as_pattern, 3),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 3),
  [864] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 3),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(381),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 1),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(382),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(384),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(385),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(387),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(388),
  [880] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(392),
  [884] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(395),
  [886] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(396),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(398),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(399),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(401),
  [894] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [896] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(402),
  [900] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(403),
  [902] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 1),
  [904] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 1),
  [906] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(405),
  [908] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(406),
  [912] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(407),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [920] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(410),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(413),
  [928] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 2),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(416),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(416),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(417),
  [944] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(420),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(421),
  [950] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(422),
  [952] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5),
  [954] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [956] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(425),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [964] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(428),
  [966] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(429),
  [968] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(430),
  [970] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(432),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 5),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 5),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [978] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 5),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 5),
  [982] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [984] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(436),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [990] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [992] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 2),
  [994] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 2),
  [996] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(438),
  [998] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(438),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
  [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(441),
  [1004] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(441),
  [1006] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(439),
  [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 5),
  [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 5),
  [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 4),
  [1016] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 4),
  [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1020] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(445),
  [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1032] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(448),
  [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(449),
  [1036] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(451),
  [1038] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(452),
  [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [1042] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [1044] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1048] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1050] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1052] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [1056] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [1058] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [1060] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [1062] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [1064] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [1066] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 4),
  [1070] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 4),
  [1072] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 2),
  [1074] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(456),
  [1076] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(458),
  [1078] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(460),
  [1080] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 1),
  [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1084] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 3),
  [1086] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(462),
  [1088] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(463),
  [1090] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(464),
  [1092] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [1094] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(467),
  [1098] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1101] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(469),
  [1106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(470),
  [1108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(472),
  [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(473),
  [1112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(475),
  [1114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
  [1118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 2),
  [1120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 2),
  [1122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(477),
  [1132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3),
  [1136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
  [1142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(479),
  [1144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(479),
  [1146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [1148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [1150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(481),
  [1152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [1154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [1156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(483),
  [1158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(485),
  [1160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [1162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [1164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [1166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(487),
  [1168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(489),
  [1170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 6),
  [1172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 6),
  [1174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [1176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [1178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [1180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [1182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [1184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 3),
  [1192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 3),
  [1194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(490),
  [1196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(490),
  [1198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(491),
  [1200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(491),
  [1202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 6),
  [1204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 6),
  [1206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [1208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [1210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [1212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [1214] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(492),
  [1216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [1222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [1224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(494),
  [1226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(495),
  [1228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(497),
  [1230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(499),
  [1232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(500),
  [1234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [1236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [1238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 2),
  [1240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label, 3),
  [1242] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(502),
  [1246] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(503),
  [1251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 2),
  [1253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 4),
  [1257] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [1263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 4),
  [1267] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [1271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(507),
  [1273] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1281] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [1285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [1287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(509),
  [1289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(510),
  [1291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(512),
  [1293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(513),
  [1295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(515),
  [1297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [1299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [1301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [1303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [1311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [1313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [1315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [1319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [1321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [1323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 3),
  [1325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 3),
  [1333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [1335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [1341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [1343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [1345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(522),
  [1347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(524),
  [1349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(526),
  [1351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(528),
  [1353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [1355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [1357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [1359] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [1363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [1365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(529),
  [1367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [1369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(530),
  [1371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [1373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [1375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [1377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(533),
  [1379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(534),
  [1381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [1383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
