#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 562
#define SYMBOL_COUNT 236
#define ALIAS_COUNT 2
#define TOKEN_COUNT 132
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
  anon_sym_DASH = 18,
  anon_sym_AT = 19,
  anon_sym_BQUOTE = 20,
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
  sym_unit_type = 41,
  sym_list_constructor = 42,
  sym_function_constructor = 43,
  anon_sym_LBRACK = 44,
  anon_sym_RBRACK = 45,
  anon_sym_data = 46,
  anon_sym_EQ_GT = 47,
  anon_sym_PIPE = 48,
  anon_sym_deriving = 49,
  anon_sym_newtype = 50,
  anon_sym_BANG = 51,
  anon_sym_type = 52,
  sym__variable_pattern = 53,
  sym__constructor_pattern = 54,
  anon_sym_DOT = 55,
  sym_module_identifier = 56,
  sym_comment = 57,
  sym_float = 58,
  anon_sym_SQUOTE = 59,
  anon_sym_DQUOTE = 60,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 61,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 62,
  sym__ascii_large = 63,
  anon_sym_POUND = 64,
  anon_sym_DOLLAR = 65,
  anon_sym_PERCENT = 66,
  anon_sym_AMP = 67,
  anon_sym_1 = 68,
  anon_sym_PLUS = 69,
  anon_sym_SLASH = 70,
  anon_sym_LT = 71,
  anon_sym_GT = 72,
  anon_sym_QMARK = 73,
  anon_sym_CARET = 74,
  anon_sym_TILDE = 75,
  anon_sym_BSLASH = 76,
  anon_sym_LT_DASH = 77,
  sym__space = 78,
  sym__newline = 79,
  sym__tab = 80,
  sym__vertical_tab = 81,
  anon_sym_x = 82,
  anon_sym_X = 83,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 84,
  anon_sym_o = 85,
  anon_sym_O = 86,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 87,
  anon_sym_a = 88,
  anon_sym_b = 89,
  anon_sym_f = 90,
  anon_sym_n = 91,
  anon_sym_r = 92,
  anon_sym_t = 93,
  anon_sym_v = 94,
  anon_sym_NUL = 95,
  anon_sym_SOH = 96,
  anon_sym_STX = 97,
  anon_sym_ETX = 98,
  anon_sym_EOT = 99,
  anon_sym_ENQ = 100,
  anon_sym_ACK = 101,
  anon_sym_BEL = 102,
  anon_sym_BS = 103,
  anon_sym_HT = 104,
  anon_sym_LF = 105,
  anon_sym_VT = 106,
  anon_sym_FF = 107,
  anon_sym_CR = 108,
  anon_sym_SO = 109,
  anon_sym_SI = 110,
  anon_sym_DLE = 111,
  anon_sym_DC1 = 112,
  anon_sym_DC2 = 113,
  anon_sym_DC3 = 114,
  anon_sym_DC4 = 115,
  anon_sym_NAK = 116,
  anon_sym_SYN = 117,
  anon_sym_ETB = 118,
  anon_sym_CAN = 119,
  anon_sym_EM = 120,
  anon_sym_SUB = 121,
  anon_sym_ESC = 122,
  anon_sym_FS = 123,
  anon_sym_GS = 124,
  anon_sym_RS = 125,
  anon_sym_US = 126,
  anon_sym_SP = 127,
  anon_sym_DEL = 128,
  sym__integer_literal = 129,
  sym__octal_literal = 130,
  sym__hexidecimal_literal = 131,
  sym_module = 132,
  sym_declarations = 133,
  sym_module_exports = 134,
  sym_export = 135,
  sym_import = 136,
  sym_import_specification = 137,
  sym__declaration = 138,
  sym_function_declaration = 139,
  sym_function_head = 140,
  sym_function_body = 141,
  sym__function_pattern = 142,
  sym_parenthesized_pattern = 143,
  sym__pattern = 144,
  sym_negative_literal = 145,
  sym_general_constructor = 146,
  sym_as_pattern = 147,
  sym_labels = 148,
  sym_label = 149,
  sym_wildcard = 150,
  sym__variable = 151,
  sym_qualified_variable_identifier = 152,
  sym__expression = 153,
  sym_foreign = 154,
  sym_foreign_import = 155,
  sym_calling_convention = 156,
  sym_safety = 157,
  sym_default = 158,
  sym_do_expression = 159,
  sym_statement_list = 160,
  sym__statement = 161,
  sym_type_class = 162,
  sym_general_declarations = 163,
  sym_type_class_instance = 164,
  sym__general_declaration = 165,
  sym_fixity = 166,
  sym__op = 167,
  sym_variable_symbol = 168,
  sym_constructor_symbol = 169,
  sym_type_signature = 170,
  sym_type = 171,
  sym__generic_type_constructor = 172,
  sym_tupling_constructor = 173,
  sym_tuple = 174,
  sym_list = 175,
  sym_parenthesized_constructor = 176,
  sym_algebraic_datatype = 177,
  sym_context = 178,
  sym_class = 179,
  sym_constructors = 180,
  sym_constructor = 181,
  sym_deriving = 182,
  sym_newtype = 183,
  sym_new_constructor = 184,
  sym_field = 185,
  sym_strict = 186,
  sym_type_synonym = 187,
  sym__literal = 188,
  sym__identifier = 189,
  sym_simple_type = 190,
  sym_variable_identifier = 191,
  sym_constructor_identifier = 192,
  sym__type_constructors = 193,
  sym_qualified_type_constructor = 194,
  sym_integer = 195,
  sym_char = 196,
  sym_string = 197,
  sym__gap = 198,
  sym__graphic = 199,
  sym__small = 200,
  sym__large = 201,
  sym__symbol = 202,
  sym__variable_symbol = 203,
  sym__constructor_symbol = 204,
  sym__special = 205,
  sym__escape = 206,
  sym__char_escape = 207,
  sym__ascii = 208,
  sym__cntrl = 209,
  sym_fields = 210,
  aux_sym_module_repeat1 = 211,
  aux_sym_module_exports_repeat1 = 212,
  aux_sym_export_repeat1 = 213,
  aux_sym_import_specification_repeat1 = 214,
  aux_sym_function_head_repeat1 = 215,
  aux_sym_function_body_repeat1 = 216,
  aux_sym_general_constructor_repeat1 = 217,
  aux_sym_labels_repeat1 = 218,
  aux_sym_statement_list_repeat1 = 219,
  aux_sym_general_declarations_repeat1 = 220,
  aux_sym_fixity_repeat1 = 221,
  aux_sym_variable_symbol_repeat1 = 222,
  aux_sym_constructor_symbol_repeat1 = 223,
  aux_sym_tupling_constructor_repeat1 = 224,
  aux_sym_tuple_repeat1 = 225,
  aux_sym_list_repeat1 = 226,
  aux_sym_context_repeat1 = 227,
  aux_sym_constructors_repeat1 = 228,
  aux_sym_constructor_repeat1 = 229,
  aux_sym_field_repeat1 = 230,
  aux_sym_qualified_type_constructor_repeat1 = 231,
  aux_sym_string_repeat1 = 232,
  aux_sym__escape_repeat1 = 233,
  aux_sym__escape_repeat2 = 234,
  aux_sym_fields_repeat1 = 235,
  alias_sym_type_constructor = 236,
  alias_sym_type_variable = 237,
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
  [anon_sym_DASH] = "-",
  [anon_sym_AT] = "@",
  [anon_sym_BQUOTE] = "`",
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
  [sym_unit_type] = "unit_type",
  [sym_list_constructor] = "list_constructor",
  [sym_function_constructor] = "function_constructor",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_data] = "data",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_PIPE] = "|",
  [anon_sym_deriving] = "deriving",
  [anon_sym_newtype] = "newtype",
  [anon_sym_BANG] = "!",
  [anon_sym_type] = "type",
  [sym__variable_pattern] = "_variable_pattern",
  [sym__constructor_pattern] = "_constructor_pattern",
  [anon_sym_DOT] = ".",
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
  [anon_sym_SLASH] = "/",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_QMARK] = "?",
  [anon_sym_CARET] = "^",
  [anon_sym_TILDE] = "~",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_LT_DASH] = "<-",
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
  [sym_parenthesized_pattern] = "parenthesized_pattern",
  [sym__pattern] = "_pattern",
  [sym_negative_literal] = "negative_literal",
  [sym_general_constructor] = "general_constructor",
  [sym_as_pattern] = "as_pattern",
  [sym_labels] = "labels",
  [sym_label] = "label",
  [sym_wildcard] = "wildcard",
  [sym__variable] = "_variable",
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
  [sym__symbol] = "_symbol",
  [sym__variable_symbol] = "_variable_symbol",
  [sym__constructor_symbol] = "_constructor_symbol",
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
  [aux_sym_general_constructor_repeat1] = "general_constructor_repeat1",
  [aux_sym_labels_repeat1] = "labels_repeat1",
  [aux_sym_statement_list_repeat1] = "statement_list_repeat1",
  [aux_sym_general_declarations_repeat1] = "general_declarations_repeat1",
  [aux_sym_fixity_repeat1] = "fixity_repeat1",
  [aux_sym_variable_symbol_repeat1] = "variable_symbol_repeat1",
  [aux_sym_constructor_symbol_repeat1] = "constructor_symbol_repeat1",
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
  [anon_sym_DASH] = {
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
  [sym__variable_pattern] = {
    .visible = false,
    .named = true,
  },
  [sym__constructor_pattern] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
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
  [anon_sym_LT_DASH] = {
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
  [sym_parenthesized_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_negative_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_general_constructor] = {
    .visible = true,
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
  [sym__symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__variable_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__constructor_symbol] = {
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
  [aux_sym_general_constructor_repeat1] = {
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
  [aux_sym_constructor_symbol_repeat1] = {
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
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(98);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(114);
      if (lookahead == '.')
        ADVANCE(116);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(119);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(122);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == 'G')
        ADVANCE(129);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == 'L')
        ADVANCE(133);
      if (lookahead == 'N')
        ADVANCE(135);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead == 'S')
        ADVANCE(142);
      if (lookahead == 'U')
        ADVANCE(153);
      if (lookahead == 'V')
        ADVANCE(155);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(159);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
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
        ADVANCE(39);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(74);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
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
        ADVANCE(38);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(45);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_GS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_HT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(49);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 51:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(52);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_NAK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 53:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(54);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_NUL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'I')
        ADVANCE(58);
      if (lookahead == 'O')
        ADVANCE(59);
      if (lookahead == 'P')
        ADVANCE(61);
      if (lookahead == 'T')
        ADVANCE(62);
      if (lookahead == 'U')
        ADVANCE(64);
      if (lookahead == 'Y')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SI);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'H')
        ADVANCE(60);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SOH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SP);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 62:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'X')
        ADVANCE(63);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_STX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 64:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(65);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 66:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(67);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SYN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(69);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_US);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(71);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_VT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ']')
        ADVANCE(73);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_list_constructor);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 74:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(89);
      if (lookahead == 'E')
        ADVANCE(90);
      if (lookahead == 'e')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(90);
      if (lookahead == 'e')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 90:
      if (lookahead == '+')
        ADVANCE(91);
      if (lookahead == '-')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(92);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 91:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(92);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(92);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 93:
      if (lookahead == '}')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(92);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(89);
      if (lookahead == 'E')
        ADVANCE(90);
      if (lookahead == 'e')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__vertical_tab);
      END_STATE();
    case 98:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(98);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(114);
      if (lookahead == '.')
        ADVANCE(116);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(119);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(122);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == 'G')
        ADVANCE(129);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == 'L')
        ADVANCE(133);
      if (lookahead == 'N')
        ADVANCE(135);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead == 'S')
        ADVANCE(142);
      if (lookahead == 'U')
        ADVANCE(153);
      if (lookahead == 'V')
        ADVANCE(155);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(159);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(107);
      if (lookahead == '-')
        ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_unit_type);
      END_STATE();
    case 108:
      if (lookahead == '>')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == ')')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_function_constructor);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-')
        ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>')
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(136);
      if (lookahead == 'U')
        ADVANCE(138);
      END_STATE();
    case 136:
      if (lookahead == 'K')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 138:
      if (lookahead == 'L')
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'I')
        ADVANCE(143);
      if (lookahead == 'O')
        ADVANCE(144);
      if (lookahead == 'P')
        ADVANCE(146);
      if (lookahead == 'T')
        ADVANCE(147);
      if (lookahead == 'U')
        ADVANCE(149);
      if (lookahead == 'Y')
        ADVANCE(151);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 147:
      if (lookahead == 'X')
        ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 149:
      if (lookahead == 'B')
        ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 151:
      if (lookahead == 'N')
        ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']')
        ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_list_constructor);
      END_STATE();
    case 159:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'E')
        ADVANCE(175);
      if (lookahead == 'e')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E')
        ADVANCE(175);
      if (lookahead == 'e')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(174);
      END_STATE();
    case 175:
      if (lookahead == '+')
        ADVANCE(176);
      if (lookahead == '-')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(177);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'E')
        ADVANCE(175);
      if (lookahead == 'e')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__ascii_large);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      END_STATE();
    case 181:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(182);
      if (lookahead == '\r')
        ADVANCE(254);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '@')
        ADVANCE(128);
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
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(181);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 182:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(182);
      if (lookahead == '\r')
        ADVANCE(182);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(193);
      if (lookahead == 'c')
        ADVANCE(194);
      if (lookahead == 'd')
        ADVANCE(200);
      if (lookahead == 'f')
        ADVANCE(211);
      if (lookahead == 'i')
        ADVANCE(218);
      if (lookahead == 'm')
        ADVANCE(236);
      if (lookahead == 'n')
        ADVANCE(242);
      if (lookahead == 't')
        ADVANCE(249);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(182);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      ADVANCE(8);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 184:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(89);
      if (lookahead == 'E')
        ADVANCE(90);
      if (lookahead == 'O')
        ADVANCE(187);
      if (lookahead == 'X')
        ADVANCE(189);
      if (lookahead == 'e')
        ADVANCE(90);
      if (lookahead == 'o')
        ADVANCE(187);
      if (lookahead == 'x')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 187:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(188);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(188);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 189:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(190);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(190);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 191:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 193:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(201);
      if (lookahead == 'e')
        ADVANCE(204);
      if (lookahead == 'o')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(219);
      if (lookahead == 'n')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(228);
      if (lookahead == 'r')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(4);
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
        ADVANCE(182);
      if (lookahead == '\r')
        ADVANCE(254);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '@')
        ADVANCE(128);
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
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(181);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 256:
      if (lookahead == '-')
        ADVANCE(29);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'E')
        ADVANCE(175);
      if (lookahead == 'O')
        ADVANCE(259);
      if (lookahead == 'X')
        ADVANCE(261);
      if (lookahead == 'e')
        ADVANCE(175);
      if (lookahead == 'o')
        ADVANCE(259);
      if (lookahead == 'x')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      END_STATE();
    case 259:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(260);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(262);
      END_STATE();
    case 263:
      if (lookahead == ':')
        ADVANCE(120);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 265:
      if (lookahead == 'n')
        SKIP(181);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__variable_pattern);
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
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(325);
      END_STATE();
    case 326:
      if (lookahead == '\n')
        ADVANCE(327);
      if (lookahead == '\r')
        ADVANCE(339);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(340);
      if (lookahead == 'q')
        ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(326);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(350);
      END_STATE();
    case 327:
      if (lookahead == '\n')
        ADVANCE(327);
      if (lookahead == '\r')
        ADVANCE(327);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(328);
      if (lookahead == 'q')
        ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(338);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 328:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(327);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 329:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(330);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 330:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(331);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 331:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(332);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 332:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(333);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 333:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(334);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 334:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(335);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 335:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(336);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 336:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(337);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(338);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(338);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 339:
      if (lookahead == '\n')
        ADVANCE(327);
      if (lookahead == '\r')
        ADVANCE(339);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(340);
      if (lookahead == 'q')
        ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(326);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(350);
      END_STATE();
    case 340:
      if (lookahead == 'n')
        SKIP(326);
      END_STATE();
    case 341:
      if (lookahead == 'u')
        ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == 'a')
        ADVANCE(343);
      END_STATE();
    case 343:
      if (lookahead == 'l')
        ADVANCE(344);
      END_STATE();
    case 344:
      if (lookahead == 'i')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'f')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'i')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'e')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == 'd')
        ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_qualified);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(350);
      END_STATE();
    case 351:
      if (lookahead == '\n')
        ADVANCE(352);
      if (lookahead == '\r')
        ADVANCE(404);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(408);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(409);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
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
        ADVANCE(170);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(351);
      END_STATE();
    case 352:
      if (lookahead == '\n')
        ADVANCE(352);
      if (lookahead == '\r')
        ADVANCE(352);
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
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(356);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(357);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'c')
        ADVANCE(358);
      if (lookahead == 'd')
        ADVANCE(371);
      if (lookahead == 'e')
        ADVANCE(377);
      if (lookahead == 'i')
        ADVANCE(383);
      if (lookahead == 'j')
        ADVANCE(389);
      if (lookahead == 's')
        ADVANCE(392);
      if (lookahead == 'w')
        ADVANCE(399);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(352);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 356:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 357:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(352);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 358:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(359);
      if (lookahead == 'p')
        ADVANCE(363);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 359:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(360);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 360:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
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
      ACCEPT_TOKEN(anon_sym_ccall);
      if (lookahead == '-')
        ADVANCE(4);
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(365);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 365:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(366);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 366:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(367);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 367:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(368);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 368:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 369:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(370);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_cplusplus);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 371:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 372:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(373);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 373:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(374);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 374:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
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
      ACCEPT_TOKEN(anon_sym_dotnet);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 377:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
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
      ACCEPT_TOKEN(sym_foreign_export);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 383:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
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
      if (lookahead == 'o')
        ADVANCE(386);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 386:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(387);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 387:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(388);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 389:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(390);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 390:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(391);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_jvm);
      if (lookahead == '-')
        ADVANCE(4);
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(394);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 394:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(395);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 395:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(396);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 396:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(397);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 397:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(398);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_stdcall);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 399:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(400);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 400:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(401);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 401:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
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
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 404:
      if (lookahead == '\n')
        ADVANCE(352);
      if (lookahead == '\r')
        ADVANCE(404);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(408);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(409);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
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
        ADVANCE(170);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(351);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(29);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 408:
      if (lookahead == '>')
        ADVANCE(125);
      END_STATE();
    case 409:
      if (lookahead == 'n')
        SKIP(351);
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
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(460);
      if (lookahead == '{')
        ADVANCE(168);
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
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(458);
      if (lookahead == '{')
        ADVANCE(83);
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
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(460);
      if (lookahead == '{')
        ADVANCE(168);
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
        ADVANCE(466);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(467);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(469);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(461);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(468);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 462:
      if (lookahead == '\n')
        ADVANCE(462);
      if (lookahead == '\r')
        ADVANCE(462);
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
        ADVANCE(183);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(463);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(465);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(462);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(464);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'O')
        ADVANCE(187);
      if (lookahead == 'X')
        ADVANCE(189);
      if (lookahead == 'o')
        ADVANCE(187);
      if (lookahead == 'x')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(464);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(464);
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
      if (lookahead == '\n')
        ADVANCE(462);
      if (lookahead == '\r')
        ADVANCE(466);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(467);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(469);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(461);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(468);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'O')
        ADVANCE(259);
      if (lookahead == 'X')
        ADVANCE(261);
      if (lookahead == 'o')
        ADVANCE(259);
      if (lookahead == 'x')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(468);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(468);
      END_STATE();
    case 469:
      if (lookahead == 'n')
        SKIP(461);
      END_STATE();
    case 470:
      if (lookahead == '\n')
        ADVANCE(471);
      if (lookahead == '\r')
        ADVANCE(475);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(477);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(470);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 471:
      if (lookahead == '\n')
        ADVANCE(471);
      if (lookahead == '\r')
        ADVANCE(471);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(473);
      if (lookahead == '_')
        ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(471);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 472:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 473:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(471);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 475:
      if (lookahead == '\n')
        ADVANCE(471);
      if (lookahead == '\r')
        ADVANCE(475);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(477);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(470);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 476:
      if (lookahead == '-')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(115);
      END_STATE();
    case 477:
      if (lookahead == 'n')
        SKIP(470);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 479:
      if (lookahead == '\n')
        ADVANCE(480);
      if (lookahead == '\r')
        ADVANCE(482);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(483);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(479);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 480:
      if (lookahead == '\n')
        ADVANCE(480);
      if (lookahead == '\r')
        ADVANCE(480);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 481:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(480);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 482:
      if (lookahead == '\n')
        ADVANCE(480);
      if (lookahead == '\r')
        ADVANCE(482);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(483);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(479);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 483:
      if (lookahead == 'n')
        SKIP(479);
      END_STATE();
    case 484:
      if (lookahead == '\n')
        ADVANCE(485);
      if (lookahead == '\r')
        ADVANCE(487);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(484);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 485:
      if (lookahead == '\n')
        ADVANCE(485);
      if (lookahead == '\r')
        ADVANCE(485);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(485);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 486:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(485);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 487:
      if (lookahead == '\n')
        ADVANCE(485);
      if (lookahead == '\r')
        ADVANCE(487);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(484);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 488:
      if (lookahead == 'n')
        SKIP(484);
      END_STATE();
    case 489:
      if (lookahead == '\t')
        SKIP(489);
      if (lookahead == '\n')
        ADVANCE(490);
      if (lookahead == '\r')
        ADVANCE(495);
      if (lookahead == ' ')
        ADVANCE(496);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(498);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(499);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 490:
      if (lookahead == '\t')
        ADVANCE(490);
      if (lookahead == '\n')
        ADVANCE(490);
      if (lookahead == '\r')
        ADVANCE(490);
      if (lookahead == ' ')
        ADVANCE(491);
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
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(493);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(490);
      if (lookahead == '\n')
        ADVANCE(490);
      if (lookahead == '\r')
        ADVANCE(490);
      if (lookahead == ' ')
        ADVANCE(491);
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
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(493);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(490);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 495:
      if (lookahead == '\t')
        SKIP(489);
      if (lookahead == '\n')
        ADVANCE(490);
      if (lookahead == '\r')
        ADVANCE(495);
      if (lookahead == ' ')
        ADVANCE(496);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(498);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(499);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 500:
      if (lookahead == '\t')
        ADVANCE(501);
      if (lookahead == '\n')
        ADVANCE(502);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(507);
      if (lookahead == ' ')
        ADVANCE(496);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(498);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(499);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(503);
      if (lookahead == '\n')
        ADVANCE(502);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(504);
      if (lookahead == ' ')
        ADVANCE(505);
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
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(506);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(494);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(503);
      if (lookahead == '\n')
        ADVANCE(502);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(504);
      if (lookahead == ' ')
        ADVANCE(505);
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
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(506);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(494);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 504:
      if (lookahead == '\t')
        ADVANCE(503);
      if (lookahead == '\n')
        ADVANCE(502);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(504);
      if (lookahead == ' ')
        ADVANCE(505);
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
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(506);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(494);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(503);
      if (lookahead == '\n')
        ADVANCE(502);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(504);
      if (lookahead == ' ')
        ADVANCE(505);
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
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(506);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(494);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(504);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 507:
      if (lookahead == '\t')
        ADVANCE(501);
      if (lookahead == '\n')
        ADVANCE(502);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(507);
      if (lookahead == ' ')
        ADVANCE(496);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(498);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(499);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 508:
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == '\r')
        ADVANCE(511);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(512);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(508);
      END_STATE();
    case 509:
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == '\r')
        ADVANCE(509);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(509);
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
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == '\r')
        ADVANCE(511);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(512);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(508);
      END_STATE();
    case 512:
      if (lookahead == 'n')
        SKIP(508);
      END_STATE();
    case 513:
      if (lookahead == '\n')
        ADVANCE(514);
      if (lookahead == '\r')
        ADVANCE(516);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(517);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(513);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 514:
      if (lookahead == '\n')
        ADVANCE(514);
      if (lookahead == '\r')
        ADVANCE(514);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(515);
      if (lookahead == '_')
        ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(514);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 515:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(514);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 516:
      if (lookahead == '\n')
        ADVANCE(514);
      if (lookahead == '\r')
        ADVANCE(516);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(517);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(513);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 517:
      if (lookahead == 'n')
        SKIP(513);
      END_STATE();
    case 518:
      if (lookahead == '\n')
        ADVANCE(519);
      if (lookahead == '\r')
        ADVANCE(521);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(522);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(518);
      END_STATE();
    case 519:
      if (lookahead == '\n')
        ADVANCE(519);
      if (lookahead == '\r')
        ADVANCE(519);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(519);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 520:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(519);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 521:
      if (lookahead == '\n')
        ADVANCE(519);
      if (lookahead == '\r')
        ADVANCE(521);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(522);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(518);
      END_STATE();
    case 522:
      if (lookahead == 'n')
        SKIP(518);
      END_STATE();
    case 523:
      if (lookahead == '\n')
        ADVANCE(524);
      if (lookahead == '\r')
        ADVANCE(526);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(527);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(523);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 524:
      if (lookahead == '\n')
        ADVANCE(524);
      if (lookahead == '\r')
        ADVANCE(524);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(525);
      if (lookahead == '_')
        ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(524);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 525:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(524);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 526:
      if (lookahead == '\n')
        ADVANCE(524);
      if (lookahead == '\r')
        ADVANCE(526);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(527);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(523);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 527:
      if (lookahead == 'n')
        SKIP(523);
      END_STATE();
    case 528:
      if (lookahead == '\n')
        ADVANCE(529);
      if (lookahead == '\r')
        ADVANCE(531);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(532);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(528);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 529:
      if (lookahead == '\n')
        ADVANCE(529);
      if (lookahead == '\r')
        ADVANCE(529);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(530);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(529);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 530:
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
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(532);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(528);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 532:
      if (lookahead == 'n')
        SKIP(528);
      END_STATE();
    case 533:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(534);
      if (lookahead == '\r')
        ADVANCE(536);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(537);
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
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(533);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 534:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(534);
      if (lookahead == '\r')
        ADVANCE(534);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(535);
      if (lookahead == 'c')
        ADVANCE(194);
      if (lookahead == 'd')
        ADVANCE(200);
      if (lookahead == 'f')
        ADVANCE(211);
      if (lookahead == 'i')
        ADVANCE(218);
      if (lookahead == 'n')
        ADVANCE(242);
      if (lookahead == 't')
        ADVANCE(249);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(534);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      ADVANCE(8);
      END_STATE();
    case 535:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(534);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 536:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(534);
      if (lookahead == '\r')
        ADVANCE(536);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(537);
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
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(533);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 537:
      if (lookahead == 'n')
        SKIP(533);
      END_STATE();
    case 538:
      if (lookahead == '\n')
        ADVANCE(539);
      if (lookahead == '\r')
        ADVANCE(549);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(550);
      if (lookahead == 'a')
        ADVANCE(551);
      if (lookahead == 'h')
        ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(538);
      END_STATE();
    case 539:
      if (lookahead == '\n')
        ADVANCE(539);
      if (lookahead == '\r')
        ADVANCE(539);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(540);
      if (lookahead == 'a')
        ADVANCE(541);
      if (lookahead == 'h')
        ADVANCE(543);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(539);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 540:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(539);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 541:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(542);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 543:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(544);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 544:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(545);
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
      if (lookahead == 'n')
        ADVANCE(547);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 547:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(548);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 549:
      if (lookahead == '\n')
        ADVANCE(539);
      if (lookahead == '\r')
        ADVANCE(549);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(550);
      if (lookahead == 'a')
        ADVANCE(551);
      if (lookahead == 'h')
        ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(538);
      END_STATE();
    case 550:
      if (lookahead == 'n')
        SKIP(538);
      END_STATE();
    case 551:
      if (lookahead == 's')
        ADVANCE(552);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 553:
      if (lookahead == 'i')
        ADVANCE(554);
      END_STATE();
    case 554:
      if (lookahead == 'd')
        ADVANCE(555);
      END_STATE();
    case 555:
      if (lookahead == 'i')
        ADVANCE(556);
      END_STATE();
    case 556:
      if (lookahead == 'n')
        ADVANCE(557);
      END_STATE();
    case 557:
      if (lookahead == 'g')
        ADVANCE(558);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 559:
      if (lookahead == '\n')
        ADVANCE(560);
      if (lookahead == '\r')
        ADVANCE(563);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '.')
        ADVANCE(564);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(565);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(559);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 560:
      if (lookahead == '\n')
        ADVANCE(560);
      if (lookahead == '\r')
        ADVANCE(560);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == '.')
        ADVANCE(561);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(562);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(560);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 561:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 562:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(560);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 563:
      if (lookahead == '\n')
        ADVANCE(560);
      if (lookahead == '\r')
        ADVANCE(563);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '.')
        ADVANCE(564);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(565);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(559);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 564:
      if (lookahead == '.')
        ADVANCE(117);
      END_STATE();
    case 565:
      if (lookahead == 'n')
        SKIP(559);
      END_STATE();
    case 566:
      if (lookahead == '\n')
        ADVANCE(567);
      if (lookahead == '\r')
        ADVANCE(570);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(571);
      if (lookahead == 'd')
        ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(566);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 567:
      if (lookahead == '\n')
        ADVANCE(567);
      if (lookahead == '\r')
        ADVANCE(567);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(568);
      if (lookahead == 'd')
        ADVANCE(569);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(567);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 570:
      if (lookahead == '\n')
        ADVANCE(567);
      if (lookahead == '\r')
        ADVANCE(570);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(571);
      if (lookahead == 'd')
        ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(566);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 571:
      if (lookahead == 'n')
        SKIP(566);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__variable_pattern);
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
    case 573:
      if (lookahead == '\n')
        ADVANCE(574);
      if (lookahead == '\r')
        ADVANCE(576);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(577);
      if (lookahead == 'd')
        ADVANCE(572);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(573);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 574:
      if (lookahead == '\n')
        ADVANCE(574);
      if (lookahead == '\r')
        ADVANCE(574);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(575);
      if (lookahead == 'd')
        ADVANCE(569);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(574);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      if (lookahead == '\n')
        ADVANCE(574);
      if (lookahead == '\r')
        ADVANCE(576);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(577);
      if (lookahead == 'd')
        ADVANCE(572);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(573);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 577:
      if (lookahead == 'n')
        SKIP(573);
      END_STATE();
    case 578:
      if (lookahead == '\n')
        ADVANCE(579);
      if (lookahead == '\r')
        ADVANCE(586);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(587);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(588);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(578);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 579:
      if (lookahead == '\n')
        ADVANCE(579);
      if (lookahead == '\r')
        ADVANCE(579);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(580);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'w')
        ADVANCE(581);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(579);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 586:
      if (lookahead == '\n')
        ADVANCE(579);
      if (lookahead == '\r')
        ADVANCE(586);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(587);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(588);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(578);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 587:
      if (lookahead == 'n')
        SKIP(578);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'h')
        ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'r')
        ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 593:
      if (lookahead == '\n')
        ADVANCE(594);
      if (lookahead == '\r')
        ADVANCE(596);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(597);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
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
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(595);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(594);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 595:
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
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(597);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(593);
      END_STATE();
    case 597:
      if (lookahead == 'n')
        SKIP(593);
      END_STATE();
    case 598:
      if (lookahead == '\n')
        ADVANCE(599);
      if (lookahead == '\r')
        ADVANCE(601);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(602);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
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
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(600);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 8902)
        ADVANCE(87);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(602);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
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
        ADVANCE(606);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '\\')
        SKIP(607);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(603);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 604:
      if (lookahead == '\n')
        ADVANCE(604);
      if (lookahead == '\r')
        ADVANCE(604);
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
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(605);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(474);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(604);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      if (lookahead == '\n')
        ADVANCE(604);
      if (lookahead == '\r')
        ADVANCE(606);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '\\')
        SKIP(607);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(603);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 607:
      if (lookahead == 'n')
        SKIP(603);
      END_STATE();
    case 608:
      if (lookahead == '\n')
        ADVANCE(609);
      if (lookahead == '\r')
        ADVANCE(611);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(612);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(608);
      END_STATE();
    case 609:
      if (lookahead == '\n')
        ADVANCE(609);
      if (lookahead == '\r')
        ADVANCE(609);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(609);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 610:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(609);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 611:
      if (lookahead == '\n')
        ADVANCE(609);
      if (lookahead == '\r')
        ADVANCE(611);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(612);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(608);
      END_STATE();
    case 612:
      if (lookahead == 'n')
        SKIP(608);
      END_STATE();
    case 613:
      if (lookahead == '\n')
        ADVANCE(614);
      if (lookahead == '\r')
        ADVANCE(624);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(625);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(613);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 614:
      if (lookahead == '\n')
        ADVANCE(614);
      if (lookahead == '\r')
        ADVANCE(614);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(615);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(614);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 615:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(614);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 624:
      if (lookahead == '\n')
        ADVANCE(614);
      if (lookahead == '\r')
        ADVANCE(624);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(625);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(613);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 625:
      if (lookahead == 'n')
        SKIP(613);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'r')
        ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'v')
        ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'n')
        ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'g')
        ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 634:
      if (lookahead == '\n')
        ADVANCE(635);
      if (lookahead == '\r')
        ADVANCE(645);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(646);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(634);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 635:
      if (lookahead == '\n')
        ADVANCE(635);
      if (lookahead == '\r')
        ADVANCE(635);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(636);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(638);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 638:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(639);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 639:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(640);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 640:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(641);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 641:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(642);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 642:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(643);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 643:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(644);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 645:
      if (lookahead == '\n')
        ADVANCE(635);
      if (lookahead == '\r')
        ADVANCE(645);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(646);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(634);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 646:
      if (lookahead == 'n')
        SKIP(634);
      END_STATE();
    case 647:
      if (lookahead == 'e')
        ADVANCE(648);
      END_STATE();
    case 648:
      if (lookahead == 'r')
        ADVANCE(649);
      END_STATE();
    case 649:
      if (lookahead == 'i')
        ADVANCE(650);
      END_STATE();
    case 650:
      if (lookahead == 'v')
        ADVANCE(651);
      END_STATE();
    case 651:
      if (lookahead == 'i')
        ADVANCE(652);
      END_STATE();
    case 652:
      if (lookahead == 'n')
        ADVANCE(653);
      END_STATE();
    case 653:
      if (lookahead == 'g')
        ADVANCE(654);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 655:
      if (lookahead == '\n')
        ADVANCE(656);
      if (lookahead == '\r')
        ADVANCE(658);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(659);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(655);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 656:
      if (lookahead == '\n')
        ADVANCE(656);
      if (lookahead == '\r')
        ADVANCE(656);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(657);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(656);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 657:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(656);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 658:
      if (lookahead == '\n')
        ADVANCE(656);
      if (lookahead == '\r')
        ADVANCE(658);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(659);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(655);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 659:
      if (lookahead == 'n')
        SKIP(655);
      END_STATE();
    case 660:
      if (lookahead == '\n')
        ADVANCE(661);
      if (lookahead == '\r')
        ADVANCE(713);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == 'A')
        ADVANCE(714);
      if (lookahead == 'B')
        ADVANCE(717);
      if (lookahead == 'C')
        ADVANCE(721);
      if (lookahead == 'D')
        ADVANCE(725);
      if (lookahead == 'E')
        ADVANCE(735);
      if (lookahead == 'F')
        ADVANCE(746);
      if (lookahead == 'G')
        ADVANCE(749);
      if (lookahead == 'H')
        ADVANCE(750);
      if (lookahead == 'L')
        ADVANCE(751);
      if (lookahead == 'N')
        ADVANCE(752);
      if (lookahead == 'O')
        ADVANCE(753);
      if (lookahead == 'R')
        ADVANCE(754);
      if (lookahead == 'S')
        ADVANCE(755);
      if (lookahead == 'U')
        ADVANCE(756);
      if (lookahead == 'V')
        ADVANCE(757);
      if (lookahead == 'X')
        ADVANCE(758);
      if (lookahead == '\\')
        ADVANCE(498);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 'a')
        ADVANCE(759);
      if (lookahead == 'b')
        ADVANCE(760);
      if (lookahead == 'f')
        ADVANCE(761);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(762);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(763);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(660);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(499);
      END_STATE();
    case 661:
      if (lookahead == '\n')
        ADVANCE(661);
      if (lookahead == '\r')
        ADVANCE(661);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == 'A')
        ADVANCE(662);
      if (lookahead == 'B')
        ADVANCE(665);
      if (lookahead == 'C')
        ADVANCE(669);
      if (lookahead == 'D')
        ADVANCE(673);
      if (lookahead == 'E')
        ADVANCE(683);
      if (lookahead == 'F')
        ADVANCE(694);
      if (lookahead == 'G')
        ADVANCE(697);
      if (lookahead == 'H')
        ADVANCE(698);
      if (lookahead == 'L')
        ADVANCE(699);
      if (lookahead == 'N')
        ADVANCE(700);
      if (lookahead == 'O')
        ADVANCE(701);
      if (lookahead == 'R')
        ADVANCE(702);
      if (lookahead == 'S')
        ADVANCE(703);
      if (lookahead == 'U')
        ADVANCE(704);
      if (lookahead == 'V')
        ADVANCE(705);
      if (lookahead == 'X')
        ADVANCE(706);
      if (lookahead == '\\')
        ADVANCE(707);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 'a')
        ADVANCE(708);
      if (lookahead == 'b')
        ADVANCE(709);
      if (lookahead == 'f')
        ADVANCE(710);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(711);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(712);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(494);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 662:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(663);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 663:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(664);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 665:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(666);
      if (lookahead == 'S')
        ADVANCE(668);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 666:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(667);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 669:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(670);
      if (lookahead == 'R')
        ADVANCE(672);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 670:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(671);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 673:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(674);
      if (lookahead == 'E')
        ADVANCE(679);
      if (lookahead == 'L')
        ADVANCE(681);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(675);
      if (lookahead == '2')
        ADVANCE(676);
      if (lookahead == '3')
        ADVANCE(677);
      if (lookahead == '4')
        ADVANCE(678);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 679:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(680);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 681:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(682);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 683:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(684);
      if (lookahead == 'N')
        ADVANCE(685);
      if (lookahead == 'O')
        ADVANCE(687);
      if (lookahead == 'S')
        ADVANCE(689);
      if (lookahead == 'T')
        ADVANCE(691);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 685:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(686);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 687:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(688);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 689:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(690);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 691:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(692);
      if (lookahead == 'X')
        ADVANCE(693);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 694:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(695);
      if (lookahead == 'S')
        ADVANCE(696);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 697:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(45);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 698:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 699:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(49);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 700:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 702:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 703:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'I')
        ADVANCE(58);
      if (lookahead == 'O')
        ADVANCE(59);
      if (lookahead == 'P')
        ADVANCE(61);
      if (lookahead == 'T')
        ADVANCE(62);
      if (lookahead == 'U')
        ADVANCE(64);
      if (lookahead == 'Y')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 704:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(69);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 705:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(71);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(661);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 713:
      if (lookahead == '\n')
        ADVANCE(661);
      if (lookahead == '\r')
        ADVANCE(713);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == 'A')
        ADVANCE(714);
      if (lookahead == 'B')
        ADVANCE(717);
      if (lookahead == 'C')
        ADVANCE(721);
      if (lookahead == 'D')
        ADVANCE(725);
      if (lookahead == 'E')
        ADVANCE(735);
      if (lookahead == 'F')
        ADVANCE(746);
      if (lookahead == 'G')
        ADVANCE(749);
      if (lookahead == 'H')
        ADVANCE(750);
      if (lookahead == 'L')
        ADVANCE(751);
      if (lookahead == 'N')
        ADVANCE(752);
      if (lookahead == 'O')
        ADVANCE(753);
      if (lookahead == 'R')
        ADVANCE(754);
      if (lookahead == 'S')
        ADVANCE(755);
      if (lookahead == 'U')
        ADVANCE(756);
      if (lookahead == 'V')
        ADVANCE(757);
      if (lookahead == 'X')
        ADVANCE(758);
      if (lookahead == '\\')
        ADVANCE(498);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 'a')
        ADVANCE(759);
      if (lookahead == 'b')
        ADVANCE(760);
      if (lookahead == 'f')
        ADVANCE(761);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(762);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(763);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(660);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(499);
      END_STATE();
    case 714:
      if (lookahead == 'C')
        ADVANCE(715);
      END_STATE();
    case 715:
      if (lookahead == 'K')
        ADVANCE(716);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 717:
      if (lookahead == 'E')
        ADVANCE(718);
      if (lookahead == 'S')
        ADVANCE(720);
      END_STATE();
    case 718:
      if (lookahead == 'L')
        ADVANCE(719);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 721:
      if (lookahead == 'A')
        ADVANCE(722);
      if (lookahead == 'R')
        ADVANCE(724);
      END_STATE();
    case 722:
      if (lookahead == 'N')
        ADVANCE(723);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 725:
      if (lookahead == 'C')
        ADVANCE(726);
      if (lookahead == 'E')
        ADVANCE(731);
      if (lookahead == 'L')
        ADVANCE(733);
      END_STATE();
    case 726:
      if (lookahead == '1')
        ADVANCE(727);
      if (lookahead == '2')
        ADVANCE(728);
      if (lookahead == '3')
        ADVANCE(729);
      if (lookahead == '4')
        ADVANCE(730);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 731:
      if (lookahead == 'L')
        ADVANCE(732);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 733:
      if (lookahead == 'E')
        ADVANCE(734);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 735:
      if (lookahead == 'M')
        ADVANCE(736);
      if (lookahead == 'N')
        ADVANCE(737);
      if (lookahead == 'O')
        ADVANCE(739);
      if (lookahead == 'S')
        ADVANCE(741);
      if (lookahead == 'T')
        ADVANCE(743);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 737:
      if (lookahead == 'Q')
        ADVANCE(738);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 739:
      if (lookahead == 'T')
        ADVANCE(740);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 741:
      if (lookahead == 'C')
        ADVANCE(742);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 743:
      if (lookahead == 'B')
        ADVANCE(744);
      if (lookahead == 'X')
        ADVANCE(745);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 746:
      if (lookahead == 'F')
        ADVANCE(747);
      if (lookahead == 'S')
        ADVANCE(748);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 749:
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 750:
      if (lookahead == 'T')
        ADVANCE(132);
      END_STATE();
    case 751:
      if (lookahead == 'F')
        ADVANCE(134);
      END_STATE();
    case 752:
      if (lookahead == 'A')
        ADVANCE(136);
      if (lookahead == 'U')
        ADVANCE(138);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 754:
      if (lookahead == 'S')
        ADVANCE(141);
      END_STATE();
    case 755:
      if (lookahead == 'I')
        ADVANCE(143);
      if (lookahead == 'O')
        ADVANCE(144);
      if (lookahead == 'P')
        ADVANCE(146);
      if (lookahead == 'T')
        ADVANCE(147);
      if (lookahead == 'U')
        ADVANCE(149);
      if (lookahead == 'Y')
        ADVANCE(151);
      END_STATE();
    case 756:
      if (lookahead == 'S')
        ADVANCE(154);
      END_STATE();
    case 757:
      if (lookahead == 'T')
        ADVANCE(156);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 764:
      if (lookahead == '\t')
        ADVANCE(501);
      if (lookahead == '\n')
        ADVANCE(765);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(776);
      if (lookahead == ' ')
        ADVANCE(496);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == 'A')
        ADVANCE(777);
      if (lookahead == 'B')
        ADVANCE(778);
      if (lookahead == 'C')
        ADVANCE(779);
      if (lookahead == 'D')
        ADVANCE(780);
      if (lookahead == 'E')
        ADVANCE(781);
      if (lookahead == 'F')
        ADVANCE(782);
      if (lookahead == 'G')
        ADVANCE(129);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == 'L')
        ADVANCE(133);
      if (lookahead == 'N')
        ADVANCE(135);
      if (lookahead == 'O')
        ADVANCE(753);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead == 'S')
        ADVANCE(142);
      if (lookahead == 'U')
        ADVANCE(153);
      if (lookahead == 'V')
        ADVANCE(155);
      if (lookahead == 'X')
        ADVANCE(758);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(498);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'a')
        ADVANCE(759);
      if (lookahead == 'b')
        ADVANCE(760);
      if (lookahead == 'f')
        ADVANCE(761);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(762);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(763);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(499);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(766);
      if (lookahead == '\n')
        ADVANCE(765);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(767);
      if (lookahead == ' ')
        ADVANCE(768);
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
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(769);
      if (lookahead == 'B')
        ADVANCE(770);
      if (lookahead == 'C')
        ADVANCE(771);
      if (lookahead == 'D')
        ADVANCE(772);
      if (lookahead == 'E')
        ADVANCE(773);
      if (lookahead == 'F')
        ADVANCE(774);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(701);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(706);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(775);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(708);
      if (lookahead == 'b')
        ADVANCE(709);
      if (lookahead == 'f')
        ADVANCE(710);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(711);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(712);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(494);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(766);
      if (lookahead == '\n')
        ADVANCE(765);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(767);
      if (lookahead == ' ')
        ADVANCE(768);
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
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(769);
      if (lookahead == 'B')
        ADVANCE(770);
      if (lookahead == 'C')
        ADVANCE(771);
      if (lookahead == 'D')
        ADVANCE(772);
      if (lookahead == 'E')
        ADVANCE(773);
      if (lookahead == 'F')
        ADVANCE(774);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(701);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(706);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(775);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(708);
      if (lookahead == 'b')
        ADVANCE(709);
      if (lookahead == 'f')
        ADVANCE(710);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(711);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(712);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(494);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 767:
      if (lookahead == '\t')
        ADVANCE(766);
      if (lookahead == '\n')
        ADVANCE(765);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(767);
      if (lookahead == ' ')
        ADVANCE(768);
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
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(769);
      if (lookahead == 'B')
        ADVANCE(770);
      if (lookahead == 'C')
        ADVANCE(771);
      if (lookahead == 'D')
        ADVANCE(772);
      if (lookahead == 'E')
        ADVANCE(773);
      if (lookahead == 'F')
        ADVANCE(774);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(701);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(706);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(775);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(708);
      if (lookahead == 'b')
        ADVANCE(709);
      if (lookahead == 'f')
        ADVANCE(710);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(711);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(712);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(494);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(766);
      if (lookahead == '\n')
        ADVANCE(765);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(767);
      if (lookahead == ' ')
        ADVANCE(768);
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
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(769);
      if (lookahead == 'B')
        ADVANCE(770);
      if (lookahead == 'C')
        ADVANCE(771);
      if (lookahead == 'D')
        ADVANCE(772);
      if (lookahead == 'E')
        ADVANCE(773);
      if (lookahead == 'F')
        ADVANCE(774);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(701);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(706);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(775);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(708);
      if (lookahead == 'b')
        ADVANCE(709);
      if (lookahead == 'f')
        ADVANCE(710);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(711);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(712);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(494);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(663);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(666);
      if (lookahead == 'S')
        ADVANCE(668);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(670);
      if (lookahead == 'R')
        ADVANCE(672);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(674);
      if (lookahead == 'E')
        ADVANCE(679);
      if (lookahead == 'L')
        ADVANCE(681);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(684);
      if (lookahead == 'N')
        ADVANCE(685);
      if (lookahead == 'O')
        ADVANCE(687);
      if (lookahead == 'S')
        ADVANCE(689);
      if (lookahead == 'T')
        ADVANCE(691);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(695);
      if (lookahead == 'S')
        ADVANCE(696);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(767);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 776:
      if (lookahead == '\t')
        ADVANCE(501);
      if (lookahead == '\n')
        ADVANCE(765);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(776);
      if (lookahead == ' ')
        ADVANCE(496);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == 'A')
        ADVANCE(777);
      if (lookahead == 'B')
        ADVANCE(778);
      if (lookahead == 'C')
        ADVANCE(779);
      if (lookahead == 'D')
        ADVANCE(780);
      if (lookahead == 'E')
        ADVANCE(781);
      if (lookahead == 'F')
        ADVANCE(782);
      if (lookahead == 'G')
        ADVANCE(129);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == 'L')
        ADVANCE(133);
      if (lookahead == 'N')
        ADVANCE(135);
      if (lookahead == 'O')
        ADVANCE(753);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead == 'S')
        ADVANCE(142);
      if (lookahead == 'U')
        ADVANCE(153);
      if (lookahead == 'V')
        ADVANCE(155);
      if (lookahead == 'X')
        ADVANCE(758);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(498);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'a')
        ADVANCE(759);
      if (lookahead == 'b')
        ADVANCE(760);
      if (lookahead == 'f')
        ADVANCE(761);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(762);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(763);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(499);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(715);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(718);
      if (lookahead == 'S')
        ADVANCE(720);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(722);
      if (lookahead == 'R')
        ADVANCE(724);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(726);
      if (lookahead == 'E')
        ADVANCE(731);
      if (lookahead == 'L')
        ADVANCE(733);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(736);
      if (lookahead == 'N')
        ADVANCE(737);
      if (lookahead == 'O')
        ADVANCE(739);
      if (lookahead == 'S')
        ADVANCE(741);
      if (lookahead == 'T')
        ADVANCE(743);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(747);
      if (lookahead == 'S')
        ADVANCE(748);
      END_STATE();
    case 783:
      if (lookahead == '\n')
        ADVANCE(784);
      if (lookahead == '\r')
        ADVANCE(786);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(787);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(783);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 784:
      if (lookahead == '\n')
        ADVANCE(784);
      if (lookahead == '\r')
        ADVANCE(784);
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
        ADVANCE(183);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(785);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(474);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(784);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 785:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(784);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 786:
      if (lookahead == '\n')
        ADVANCE(784);
      if (lookahead == '\r')
        ADVANCE(786);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(787);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(783);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 787:
      if (lookahead == 'n')
        SKIP(783);
      END_STATE();
    case 788:
      if (lookahead == '\n')
        ADVANCE(789);
      if (lookahead == '\r')
        ADVANCE(791);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '\\')
        SKIP(792);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(788);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 789:
      if (lookahead == '\n')
        ADVANCE(789);
      if (lookahead == '\r')
        ADVANCE(789);
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
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(790);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(474);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(789);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 790:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(789);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 791:
      if (lookahead == '\n')
        ADVANCE(789);
      if (lookahead == '\r')
        ADVANCE(791);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '\\')
        SKIP(792);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(788);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 792:
      if (lookahead == 'n')
        SKIP(788);
      END_STATE();
    case 793:
      if (lookahead == '\n')
        ADVANCE(794);
      if (lookahead == '\r')
        ADVANCE(797);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(798);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(793);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(799);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 794:
      if (lookahead == '\n')
        ADVANCE(794);
      if (lookahead == '\r')
        ADVANCE(794);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(795);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(794);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(796);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 795:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(794);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(796);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(796);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 797:
      if (lookahead == '\n')
        ADVANCE(794);
      if (lookahead == '\r')
        ADVANCE(797);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(798);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(793);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(799);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 798:
      if (lookahead == 'n')
        SKIP(793);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(799);
      if (lookahead == '.')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(799);
      END_STATE();
    case 800:
      if (lookahead == '\n')
        ADVANCE(801);
      if (lookahead == '\r')
        ADVANCE(813);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(814);
      if (lookahead == 's')
        ADVANCE(815);
      if (lookahead == 'u')
        ADVANCE(819);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(800);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 801:
      if (lookahead == '\n')
        ADVANCE(801);
      if (lookahead == '\r')
        ADVANCE(801);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(802);
      if (lookahead == 's')
        ADVANCE(803);
      if (lookahead == 'u')
        ADVANCE(807);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(801);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 813:
      if (lookahead == '\n')
        ADVANCE(801);
      if (lookahead == '\r')
        ADVANCE(813);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(814);
      if (lookahead == 's')
        ADVANCE(815);
      if (lookahead == 'u')
        ADVANCE(819);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(800);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 814:
      if (lookahead == 'n')
        SKIP(800);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'a')
        ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'f')
        ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'n')
        ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 's')
        ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'a')
        ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'f')
        ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 825:
      if (lookahead == '\n')
        ADVANCE(826);
      if (lookahead == '\r')
        ADVANCE(828);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '=')
        ADVANCE(408);
      if (lookahead == '\\')
        SKIP(829);
      if (lookahead == 'w')
        ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(825);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 826:
      if (lookahead == '\n')
        ADVANCE(826);
      if (lookahead == '\r')
        ADVANCE(826);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '=')
        ADVANCE(356);
      if (lookahead == '\\')
        ADVANCE(827);
      if (lookahead == 'w')
        ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(826);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 827:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(826);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 828:
      if (lookahead == '\n')
        ADVANCE(826);
      if (lookahead == '\r')
        ADVANCE(828);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '=')
        ADVANCE(408);
      if (lookahead == '\\')
        SKIP(829);
      if (lookahead == 'w')
        ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(825);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 829:
      if (lookahead == 'n')
        SKIP(825);
      END_STATE();
    case 830:
      if (lookahead == '\n')
        ADVANCE(831);
      if (lookahead == '\r')
        ADVANCE(833);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(834);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(830);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 831:
      if (lookahead == '\n')
        ADVANCE(831);
      if (lookahead == '\r')
        ADVANCE(831);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(832);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(831);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      if (lookahead == '\n')
        ADVANCE(831);
      if (lookahead == '\r')
        ADVANCE(833);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(834);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(830);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 834:
      if (lookahead == 'n')
        SKIP(830);
      END_STATE();
    case 835:
      if (lookahead == '\n')
        ADVANCE(836);
      if (lookahead == '\r')
        ADVANCE(838);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(839);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(835);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 836:
      if (lookahead == '\n')
        ADVANCE(836);
      if (lookahead == '\r')
        ADVANCE(836);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(837);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(836);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
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
      if (lookahead == '\n')
        ADVANCE(836);
      if (lookahead == '\r')
        ADVANCE(838);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(839);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(835);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 839:
      if (lookahead == 'n')
        SKIP(835);
      END_STATE();
    case 840:
      if (lookahead == '\n')
        ADVANCE(841);
      if (lookahead == '\r')
        ADVANCE(843);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(844);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(840);
      END_STATE();
    case 841:
      if (lookahead == '\n')
        ADVANCE(841);
      if (lookahead == '\r')
        ADVANCE(841);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(842);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(841);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 842:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(841);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 843:
      if (lookahead == '\n')
        ADVANCE(841);
      if (lookahead == '\r')
        ADVANCE(843);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(844);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(840);
      END_STATE();
    case 844:
      if (lookahead == 'n')
        SKIP(840);
      END_STATE();
    case 845:
      if (lookahead == '\n')
        ADVANCE(846);
      if (lookahead == '\r')
        ADVANCE(848);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(849);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == '|')
        ADVANCE(169);
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
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(847);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '|')
        ADVANCE(84);
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
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(849);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == '|')
        ADVANCE(169);
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
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(854);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(850);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 851:
      if (lookahead == '\n')
        ADVANCE(851);
      if (lookahead == '\r')
        ADVANCE(851);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(852);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(851);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 852:
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
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(854);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(850);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 854:
      if (lookahead == 'n')
        SKIP(850);
      END_STATE();
    case 855:
      if (lookahead == '\n')
        ADVANCE(856);
      if (lookahead == '\r')
        ADVANCE(858);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(859);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(855);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 856:
      if (lookahead == '\n')
        ADVANCE(856);
      if (lookahead == '\r')
        ADVANCE(856);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(857);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(856);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 857:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(856);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 858:
      if (lookahead == '\n')
        ADVANCE(856);
      if (lookahead == '\r')
        ADVANCE(858);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(859);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(855);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 859:
      if (lookahead == 'n')
        SKIP(855);
      END_STATE();
    case 860:
      if (lookahead == '\n')
        ADVANCE(861);
      if (lookahead == '\r')
        ADVANCE(863);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(864);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(860);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 861:
      if (lookahead == '\n')
        ADVANCE(861);
      if (lookahead == '\r')
        ADVANCE(861);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(862);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(861);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(864);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(860);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
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
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(869);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(865);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(799);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 866:
      if (lookahead == '\n')
        ADVANCE(866);
      if (lookahead == '\r')
        ADVANCE(866);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(867);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(866);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(796);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(869);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(865);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(799);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
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
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(874);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(870);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 871:
      if (lookahead == '\n')
        ADVANCE(871);
      if (lookahead == '\r')
        ADVANCE(871);
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
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(872);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(871);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(874);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(870);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
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
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(879);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(875);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(799);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 876:
      if (lookahead == '\n')
        ADVANCE(876);
      if (lookahead == '\r')
        ADVANCE(876);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(877);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(876);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(796);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(879);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(875);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(799);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 879:
      if (lookahead == 'n')
        SKIP(875);
      END_STATE();
    case 880:
      if (lookahead == '\n')
        ADVANCE(881);
      if (lookahead == '\r')
        ADVANCE(883);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(498);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(880);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      END_STATE();
    case 881:
      if (lookahead == '\n')
        ADVANCE(881);
      if (lookahead == '\r')
        ADVANCE(881);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(882);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(881);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(881);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 883:
      if (lookahead == '\n')
        ADVANCE(881);
      if (lookahead == '\r')
        ADVANCE(883);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(498);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(880);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      END_STATE();
    case 884:
      if (lookahead == '\n')
        ADVANCE(885);
      if (lookahead == '\r')
        ADVANCE(888);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(889);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(890);
      END_STATE();
    case 885:
      if (lookahead == '\n')
        ADVANCE(885);
      if (lookahead == '\r')
        ADVANCE(885);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(886);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(887);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 888:
      if (lookahead == '\n')
        ADVANCE(885);
      if (lookahead == '\r')
        ADVANCE(888);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(889);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(890);
      END_STATE();
    case 889:
      if (lookahead == 'n')
        SKIP(884);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 891:
      if (lookahead == '\n')
        ADVANCE(892);
      if (lookahead == '\r')
        ADVANCE(895);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(896);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(891);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(897);
      END_STATE();
    case 892:
      if (lookahead == '\n')
        ADVANCE(892);
      if (lookahead == '\r')
        ADVANCE(892);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(893);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(894);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 893:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(892);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 895:
      if (lookahead == '\n')
        ADVANCE(892);
      if (lookahead == '\r')
        ADVANCE(895);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(896);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(891);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(897);
      END_STATE();
    case 896:
      if (lookahead == 'n')
        SKIP(891);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 898:
      if (lookahead == '\n')
        ADVANCE(899);
      if (lookahead == '\r')
        ADVANCE(901);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(902);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(898);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 899:
      if (lookahead == '\n')
        ADVANCE(899);
      if (lookahead == '\r')
        ADVANCE(899);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(900);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(899);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 900:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(899);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 901:
      if (lookahead == '\n')
        ADVANCE(899);
      if (lookahead == '\r')
        ADVANCE(901);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(902);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(898);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 902:
      if (lookahead == 'n')
        SKIP(898);
      END_STATE();
    case 903:
      if (lookahead == '\n')
        ADVANCE(904);
      if (lookahead == '\r')
        ADVANCE(906);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(907);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(903);
      END_STATE();
    case 904:
      if (lookahead == '\n')
        ADVANCE(904);
      if (lookahead == '\r')
        ADVANCE(904);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(905);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(904);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 905:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(904);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 906:
      if (lookahead == '\n')
        ADVANCE(904);
      if (lookahead == '\r')
        ADVANCE(906);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(907);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(903);
      END_STATE();
    case 907:
      if (lookahead == 'n')
        SKIP(903);
      END_STATE();
    case 908:
      if (lookahead == '\n')
        ADVANCE(909);
      if (lookahead == '\r')
        ADVANCE(911);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(912);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(908);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 909:
      if (lookahead == '\n')
        ADVANCE(909);
      if (lookahead == '\r')
        ADVANCE(909);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(910);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(909);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 910:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(909);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 911:
      if (lookahead == '\n')
        ADVANCE(909);
      if (lookahead == '\r')
        ADVANCE(911);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(912);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(908);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 912:
      if (lookahead == 'n')
        SKIP(908);
      END_STATE();
    case 913:
      if (lookahead == '\n')
        ADVANCE(914);
      if (lookahead == '\r')
        ADVANCE(916);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(917);
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
        SKIP(913);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 914:
      if (lookahead == '\n')
        ADVANCE(914);
      if (lookahead == '\r')
        ADVANCE(914);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(915);
      if (lookahead == 'c')
        ADVANCE(194);
      if (lookahead == 'd')
        ADVANCE(200);
      if (lookahead == 'f')
        ADVANCE(211);
      if (lookahead == 'i')
        ADVANCE(218);
      if (lookahead == 'n')
        ADVANCE(242);
      if (lookahead == 't')
        ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(914);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 915:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(914);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 916:
      if (lookahead == '\n')
        ADVANCE(914);
      if (lookahead == '\r')
        ADVANCE(916);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(917);
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
        SKIP(913);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 917:
      if (lookahead == 'n')
        SKIP(913);
      END_STATE();
    case 918:
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == '\r')
        ADVANCE(921);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(922);
      if (lookahead == 'h')
        ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(918);
      END_STATE();
    case 919:
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == '\r')
        ADVANCE(919);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(920);
      if (lookahead == 'h')
        ADVANCE(543);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(919);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 920:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(919);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 921:
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == '\r')
        ADVANCE(921);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(922);
      if (lookahead == 'h')
        ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(918);
      END_STATE();
    case 922:
      if (lookahead == 'n')
        SKIP(918);
      END_STATE();
    case 923:
      if (lookahead == '\n')
        ADVANCE(924);
      if (lookahead == '\r')
        ADVANCE(928);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(929);
      if (lookahead == 'i')
        ADVANCE(930);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(923);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 924:
      if (lookahead == '\n')
        ADVANCE(924);
      if (lookahead == '\r')
        ADVANCE(924);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(925);
      if (lookahead == 'i')
        ADVANCE(926);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(924);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 925:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(924);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 928:
      if (lookahead == '\n')
        ADVANCE(924);
      if (lookahead == '\r')
        ADVANCE(928);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(929);
      if (lookahead == 'i')
        ADVANCE(930);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(923);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 929:
      if (lookahead == 'n')
        SKIP(923);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'n')
        ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__variable_pattern);
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
    case 932:
      if (lookahead == '\n')
        ADVANCE(933);
      if (lookahead == '\r')
        ADVANCE(935);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(936);
      if (lookahead == 'i')
        ADVANCE(930);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(932);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 933:
      if (lookahead == '\n')
        ADVANCE(933);
      if (lookahead == '\r')
        ADVANCE(933);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(934);
      if (lookahead == 'i')
        ADVANCE(926);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(933);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 934:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(933);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 935:
      if (lookahead == '\n')
        ADVANCE(933);
      if (lookahead == '\r')
        ADVANCE(935);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(936);
      if (lookahead == 'i')
        ADVANCE(930);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(932);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 936:
      if (lookahead == 'n')
        SKIP(932);
      END_STATE();
    case 937:
      if (lookahead == '\n')
        ADVANCE(938);
      if (lookahead == '\r')
        ADVANCE(940);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(941);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(937);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 938:
      if (lookahead == '\n')
        ADVANCE(938);
      if (lookahead == '\r')
        ADVANCE(938);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(939);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(938);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 939:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(938);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 940:
      if (lookahead == '\n')
        ADVANCE(938);
      if (lookahead == '\r')
        ADVANCE(940);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(941);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(937);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 941:
      if (lookahead == 'n')
        SKIP(937);
      END_STATE();
    case 942:
      if (lookahead == '\n')
        ADVANCE(943);
      if (lookahead == '\r')
        ADVANCE(945);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(946);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(942);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 943:
      if (lookahead == '\n')
        ADVANCE(943);
      if (lookahead == '\r')
        ADVANCE(943);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(944);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(943);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 944:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(943);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 945:
      if (lookahead == '\n')
        ADVANCE(943);
      if (lookahead == '\r')
        ADVANCE(945);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(946);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(942);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 946:
      if (lookahead == 'n')
        SKIP(942);
      END_STATE();
    case 947:
      if (lookahead == '\t')
        ADVANCE(501);
      if (lookahead == '\n')
        ADVANCE(948);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(953);
      if (lookahead == ' ')
        ADVANCE(496);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(498);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(499);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(949);
      if (lookahead == '\n')
        ADVANCE(948);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(950);
      if (lookahead == ' ')
        ADVANCE(951);
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
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(952);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(949);
      if (lookahead == '\n')
        ADVANCE(948);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(950);
      if (lookahead == ' ')
        ADVANCE(951);
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
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(952);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 950:
      if (lookahead == '\t')
        ADVANCE(949);
      if (lookahead == '\n')
        ADVANCE(948);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(950);
      if (lookahead == ' ')
        ADVANCE(951);
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
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(952);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(949);
      if (lookahead == '\n')
        ADVANCE(948);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(950);
      if (lookahead == ' ')
        ADVANCE(951);
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
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(952);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(950);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 953:
      if (lookahead == '\t')
        ADVANCE(501);
      if (lookahead == '\n')
        ADVANCE(948);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(953);
      if (lookahead == ' ')
        ADVANCE(496);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(101);
      if (lookahead == '$')
        ADVANCE(102);
      if (lookahead == '%')
        ADVANCE(103);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(498);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(499);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 954:
      if (lookahead == '\n')
        ADVANCE(955);
      if (lookahead == '\r')
        ADVANCE(957);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(958);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(954);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(799);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 955:
      if (lookahead == '\n')
        ADVANCE(955);
      if (lookahead == '\r')
        ADVANCE(955);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(956);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(955);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(796);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 956:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(955);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 957:
      if (lookahead == '\n')
        ADVANCE(955);
      if (lookahead == '\r')
        ADVANCE(957);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(958);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(954);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(799);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 958:
      if (lookahead == 'n')
        SKIP(954);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 181},
  [2] = {.lex_state = 326},
  [3] = {.lex_state = 326},
  [4] = {.lex_state = 351},
  [5] = {.lex_state = 181},
  [6] = {.lex_state = 456, .external_lex_state = 2},
  [7] = {.lex_state = 181},
  [8] = {.lex_state = 181},
  [9] = {.lex_state = 461},
  [10] = {.lex_state = 181},
  [11] = {.lex_state = 181},
  [12] = {.lex_state = 181},
  [13] = {.lex_state = 470, .external_lex_state = 3},
  [14] = {.lex_state = 479, .external_lex_state = 3},
  [15] = {.lex_state = 484, .external_lex_state = 3},
  [16] = {.lex_state = 489},
  [17] = {.lex_state = 500},
  [18] = {.lex_state = 484, .external_lex_state = 3},
  [19] = {.lex_state = 181},
  [20] = {.lex_state = 508, .external_lex_state = 3},
  [21] = {.lex_state = 508, .external_lex_state = 3},
  [22] = {.lex_state = 181},
  [23] = {.lex_state = 513, .external_lex_state = 3},
  [24] = {.lex_state = 513, .external_lex_state = 3},
  [25] = {.lex_state = 508, .external_lex_state = 3},
  [26] = {.lex_state = 508, .external_lex_state = 3},
  [27] = {.lex_state = 518, .external_lex_state = 3},
  [28] = {.lex_state = 523, .external_lex_state = 3},
  [29] = {.lex_state = 528, .external_lex_state = 3},
  [30] = {.lex_state = 533},
  [31] = {.lex_state = 351},
  [32] = {.lex_state = 326},
  [33] = {.lex_state = 538, .external_lex_state = 3},
  [34] = {.lex_state = 351},
  [35] = {.lex_state = 351},
  [36] = {.lex_state = 559},
  [37] = {.lex_state = 566, .external_lex_state = 4},
  [38] = {.lex_state = 573},
  [39] = {.lex_state = 508, .external_lex_state = 3},
  [40] = {.lex_state = 181},
  [41] = {.lex_state = 578},
  [42] = {.lex_state = 181},
  [43] = {.lex_state = 351},
  [44] = {.lex_state = 578},
  [45] = {.lex_state = 181},
  [46] = {.lex_state = 578},
  [47] = {.lex_state = 593, .external_lex_state = 3},
  [48] = {.lex_state = 484},
  [49] = {.lex_state = 598, .external_lex_state = 3},
  [50] = {.lex_state = 603},
  [51] = {.lex_state = 608, .external_lex_state = 3},
  [52] = {.lex_state = 608, .external_lex_state = 3},
  [53] = {.lex_state = 351},
  [54] = {.lex_state = 593, .external_lex_state = 3},
  [55] = {.lex_state = 613, .external_lex_state = 3},
  [56] = {.lex_state = 181},
  [57] = {.lex_state = 634, .external_lex_state = 3},
  [58] = {.lex_state = 655, .external_lex_state = 3},
  [59] = {.lex_state = 559},
  [60] = {.lex_state = 181},
  [61] = {.lex_state = 181},
  [62] = {.lex_state = 461},
  [63] = {.lex_state = 181},
  [64] = {.lex_state = 461},
  [65] = {.lex_state = 513, .external_lex_state = 3},
  [66] = {.lex_state = 181},
  [67] = {.lex_state = 181},
  [68] = {.lex_state = 181},
  [69] = {.lex_state = 181},
  [70] = {.lex_state = 181},
  [71] = {.lex_state = 181},
  [72] = {.lex_state = 660},
  [73] = {.lex_state = 500},
  [74] = {.lex_state = 500},
  [75] = {.lex_state = 500},
  [76] = {.lex_state = 500},
  [77] = {.lex_state = 484, .external_lex_state = 3},
  [78] = {.lex_state = 500},
  [79] = {.lex_state = 500},
  [80] = {.lex_state = 764},
  [81] = {.lex_state = 500},
  [82] = {.lex_state = 500},
  [83] = {.lex_state = 533},
  [84] = {.lex_state = 484, .external_lex_state = 3},
  [85] = {.lex_state = 508, .external_lex_state = 3},
  [86] = {.lex_state = 783},
  [87] = {.lex_state = 788},
  [88] = {.lex_state = 603},
  [89] = {.lex_state = 783},
  [90] = {.lex_state = 603},
  [91] = {.lex_state = 489},
  [92] = {.lex_state = 500},
  [93] = {.lex_state = 783},
  [94] = {.lex_state = 788},
  [95] = {.lex_state = 181},
  [96] = {.lex_state = 181},
  [97] = {.lex_state = 788},
  [98] = {.lex_state = 181},
  [99] = {.lex_state = 788},
  [100] = {.lex_state = 783},
  [101] = {.lex_state = 783},
  [102] = {.lex_state = 793},
  [103] = {.lex_state = 508, .external_lex_state = 3},
  [104] = {.lex_state = 456, .external_lex_state = 2},
  [105] = {.lex_state = 559},
  [106] = {.lex_state = 351},
  [107] = {.lex_state = 538, .external_lex_state = 3},
  [108] = {.lex_state = 559},
  [109] = {.lex_state = 326},
  [110] = {.lex_state = 181},
  [111] = {.lex_state = 508, .external_lex_state = 3},
  [112] = {.lex_state = 800},
  [113] = {.lex_state = 800},
  [114] = {.lex_state = 508, .external_lex_state = 3},
  [115] = {.lex_state = 351},
  [116] = {.lex_state = 578},
  [117] = {.lex_state = 508, .external_lex_state = 3},
  [118] = {.lex_state = 461},
  [119] = {.lex_state = 508, .external_lex_state = 3},
  [120] = {.lex_state = 566, .external_lex_state = 4},
  [121] = {.lex_state = 566, .external_lex_state = 4},
  [122] = {.lex_state = 508, .external_lex_state = 3},
  [123] = {.lex_state = 573},
  [124] = {.lex_state = 573},
  [125] = {.lex_state = 351},
  [126] = {.lex_state = 461},
  [127] = {.lex_state = 578},
  [128] = {.lex_state = 181},
  [129] = {.lex_state = 456, .external_lex_state = 2},
  [130] = {.lex_state = 461},
  [131] = {.lex_state = 825},
  [132] = {.lex_state = 825},
  [133] = {.lex_state = 578},
  [134] = {.lex_state = 578},
  [135] = {.lex_state = 456, .external_lex_state = 2},
  [136] = {.lex_state = 578},
  [137] = {.lex_state = 351},
  [138] = {.lex_state = 598, .external_lex_state = 3},
  [139] = {.lex_state = 598, .external_lex_state = 3},
  [140] = {.lex_state = 598, .external_lex_state = 3},
  [141] = {.lex_state = 351},
  [142] = {.lex_state = 608, .external_lex_state = 3},
  [143] = {.lex_state = 608, .external_lex_state = 3},
  [144] = {.lex_state = 593, .external_lex_state = 3},
  [145] = {.lex_state = 593, .external_lex_state = 3},
  [146] = {.lex_state = 634, .external_lex_state = 3},
  [147] = {.lex_state = 830, .external_lex_state = 3},
  [148] = {.lex_state = 835, .external_lex_state = 3},
  [149] = {.lex_state = 559},
  [150] = {.lex_state = 840, .external_lex_state = 3},
  [151] = {.lex_state = 845, .external_lex_state = 3},
  [152] = {.lex_state = 508, .external_lex_state = 3},
  [153] = {.lex_state = 850, .external_lex_state = 3},
  [154] = {.lex_state = 855, .external_lex_state = 3},
  [155] = {.lex_state = 860, .external_lex_state = 3},
  [156] = {.lex_state = 830, .external_lex_state = 3},
  [157] = {.lex_state = 181},
  [158] = {.lex_state = 181},
  [159] = {.lex_state = 865},
  [160] = {.lex_state = 870},
  [161] = {.lex_state = 461},
  [162] = {.lex_state = 793},
  [163] = {.lex_state = 461},
  [164] = {.lex_state = 875},
  [165] = {.lex_state = 484, .external_lex_state = 3},
  [166] = {.lex_state = 181},
  [167] = {.lex_state = 181},
  [168] = {.lex_state = 880},
  [169] = {.lex_state = 884},
  [170] = {.lex_state = 891},
  [171] = {.lex_state = 181},
  [172] = {.lex_state = 500},
  [173] = {.lex_state = 500},
  [174] = {.lex_state = 880},
  [175] = {.lex_state = 884},
  [176] = {.lex_state = 891},
  [177] = {.lex_state = 500},
  [178] = {.lex_state = 500},
  [179] = {.lex_state = 484, .external_lex_state = 3},
  [180] = {.lex_state = 898, .external_lex_state = 3},
  [181] = {.lex_state = 898, .external_lex_state = 3},
  [182] = {.lex_state = 484, .external_lex_state = 3},
  [183] = {.lex_state = 484, .external_lex_state = 3},
  [184] = {.lex_state = 181},
  [185] = {.lex_state = 870},
  [186] = {.lex_state = 351},
  [187] = {.lex_state = 351},
  [188] = {.lex_state = 351},
  [189] = {.lex_state = 181},
  [190] = {.lex_state = 870},
  [191] = {.lex_state = 181},
  [192] = {.lex_state = 181},
  [193] = {.lex_state = 603},
  [194] = {.lex_state = 500},
  [195] = {.lex_state = 513},
  [196] = {.lex_state = 559},
  [197] = {.lex_state = 461},
  [198] = {.lex_state = 783},
  [199] = {.lex_state = 793},
  [200] = {.lex_state = 903, .external_lex_state = 3},
  [201] = {.lex_state = 793},
  [202] = {.lex_state = 908, .external_lex_state = 3},
  [203] = {.lex_state = 181},
  [204] = {.lex_state = 508, .external_lex_state = 3},
  [205] = {.lex_state = 903, .external_lex_state = 3},
  [206] = {.lex_state = 793},
  [207] = {.lex_state = 351},
  [208] = {.lex_state = 903, .external_lex_state = 3},
  [209] = {.lex_state = 461},
  [210] = {.lex_state = 903, .external_lex_state = 3},
  [211] = {.lex_state = 533},
  [212] = {.lex_state = 913, .external_lex_state = 4},
  [213] = {.lex_state = 533},
  [214] = {.lex_state = 181},
  [215] = {.lex_state = 351},
  [216] = {.lex_state = 351},
  [217] = {.lex_state = 351},
  [218] = {.lex_state = 456, .external_lex_state = 2},
  [219] = {.lex_state = 326},
  [220] = {.lex_state = 508, .external_lex_state = 3},
  [221] = {.lex_state = 508, .external_lex_state = 3},
  [222] = {.lex_state = 351},
  [223] = {.lex_state = 918, .external_lex_state = 3},
  [224] = {.lex_state = 559},
  [225] = {.lex_state = 484},
  [226] = {.lex_state = 500},
  [227] = {.lex_state = 484},
  [228] = {.lex_state = 508, .external_lex_state = 3},
  [229] = {.lex_state = 181},
  [230] = {.lex_state = 484},
  [231] = {.lex_state = 484},
  [232] = {.lex_state = 508, .external_lex_state = 3},
  [233] = {.lex_state = 351},
  [234] = {.lex_state = 566, .external_lex_state = 4},
  [235] = {.lex_state = 508, .external_lex_state = 3},
  [236] = {.lex_state = 566, .external_lex_state = 4},
  [237] = {.lex_state = 573},
  [238] = {.lex_state = 573},
  [239] = {.lex_state = 181},
  [240] = {.lex_state = 351},
  [241] = {.lex_state = 351},
  [242] = {.lex_state = 351},
  [243] = {.lex_state = 456, .external_lex_state = 2},
  [244] = {.lex_state = 578},
  [245] = {.lex_state = 578},
  [246] = {.lex_state = 923, .external_lex_state = 4},
  [247] = {.lex_state = 932},
  [248] = {.lex_state = 508, .external_lex_state = 3},
  [249] = {.lex_state = 559},
  [250] = {.lex_state = 578},
  [251] = {.lex_state = 456, .external_lex_state = 2},
  [252] = {.lex_state = 578},
  [253] = {.lex_state = 508, .external_lex_state = 3},
  [254] = {.lex_state = 608, .external_lex_state = 3},
  [255] = {.lex_state = 598, .external_lex_state = 3},
  [256] = {.lex_state = 608, .external_lex_state = 3},
  [257] = {.lex_state = 351},
  [258] = {.lex_state = 608, .external_lex_state = 3},
  [259] = {.lex_state = 593, .external_lex_state = 3},
  [260] = {.lex_state = 835, .external_lex_state = 3},
  [261] = {.lex_state = 840, .external_lex_state = 3},
  [262] = {.lex_state = 508, .external_lex_state = 3},
  [263] = {.lex_state = 830, .external_lex_state = 3},
  [264] = {.lex_state = 830, .external_lex_state = 3},
  [265] = {.lex_state = 484},
  [266] = {.lex_state = 508, .external_lex_state = 3},
  [267] = {.lex_state = 181},
  [268] = {.lex_state = 845, .external_lex_state = 3},
  [269] = {.lex_state = 461},
  [270] = {.lex_state = 484},
  [271] = {.lex_state = 937, .external_lex_state = 3},
  [272] = {.lex_state = 937, .external_lex_state = 3},
  [273] = {.lex_state = 845, .external_lex_state = 3},
  [274] = {.lex_state = 937, .external_lex_state = 3},
  [275] = {.lex_state = 830, .external_lex_state = 3},
  [276] = {.lex_state = 181},
  [277] = {.lex_state = 840, .external_lex_state = 3},
  [278] = {.lex_state = 559},
  [279] = {.lex_state = 875},
  [280] = {.lex_state = 793},
  [281] = {.lex_state = 942, .external_lex_state = 3},
  [282] = {.lex_state = 508, .external_lex_state = 3},
  [283] = {.lex_state = 181},
  [284] = {.lex_state = 181},
  [285] = {.lex_state = 884},
  [286] = {.lex_state = 884},
  [287] = {.lex_state = 891},
  [288] = {.lex_state = 891},
  [289] = {.lex_state = 500},
  [290] = {.lex_state = 500},
  [291] = {.lex_state = 500},
  [292] = {.lex_state = 500},
  [293] = {.lex_state = 947},
  [294] = {.lex_state = 947},
  [295] = {.lex_state = 484, .external_lex_state = 3},
  [296] = {.lex_state = 181},
  [297] = {.lex_state = 783},
  [298] = {.lex_state = 484},
  [299] = {.lex_state = 783},
  [300] = {.lex_state = 513},
  [301] = {.lex_state = 513},
  [302] = {.lex_state = 783},
  [303] = {.lex_state = 788},
  [304] = {.lex_state = 513},
  [305] = {.lex_state = 559},
  [306] = {.lex_state = 603},
  [307] = {.lex_state = 603},
  [308] = {.lex_state = 788},
  [309] = {.lex_state = 788},
  [310] = {.lex_state = 181},
  [311] = {.lex_state = 351},
  [312] = {.lex_state = 181},
  [313] = {.lex_state = 793},
  [314] = {.lex_state = 351},
  [315] = {.lex_state = 954},
  [316] = {.lex_state = 793},
  [317] = {.lex_state = 559},
  [318] = {.lex_state = 181},
  [319] = {.lex_state = 351},
  [320] = {.lex_state = 559},
  [321] = {.lex_state = 351},
  [322] = {.lex_state = 559},
  [323] = {.lex_state = 954},
  [324] = {.lex_state = 954},
  [325] = {.lex_state = 181},
  [326] = {.lex_state = 793},
  [327] = {.lex_state = 793},
  [328] = {.lex_state = 793},
  [329] = {.lex_state = 793},
  [330] = {.lex_state = 942, .external_lex_state = 3},
  [331] = {.lex_state = 942, .external_lex_state = 3},
  [332] = {.lex_state = 793},
  [333] = {.lex_state = 942, .external_lex_state = 3},
  [334] = {.lex_state = 181},
  [335] = {.lex_state = 793},
  [336] = {.lex_state = 508, .external_lex_state = 3},
  [337] = {.lex_state = 793},
  [338] = {.lex_state = 793},
  [339] = {.lex_state = 181},
  [340] = {.lex_state = 508, .external_lex_state = 3},
  [341] = {.lex_state = 913, .external_lex_state = 4},
  [342] = {.lex_state = 533},
  [343] = {.lex_state = 484},
  [344] = {.lex_state = 351},
  [345] = {.lex_state = 351},
  [346] = {.lex_state = 559},
  [347] = {.lex_state = 181},
  [348] = {.lex_state = 918, .external_lex_state = 3},
  [349] = {.lex_state = 559},
  [350] = {.lex_state = 484},
  [351] = {.lex_state = 508, .external_lex_state = 3},
  [352] = {.lex_state = 351},
  [353] = {.lex_state = 508, .external_lex_state = 3},
  [354] = {.lex_state = 351},
  [355] = {.lex_state = 484},
  [356] = {.lex_state = 500},
  [357] = {.lex_state = 508, .external_lex_state = 3},
  [358] = {.lex_state = 484},
  [359] = {.lex_state = 351},
  [360] = {.lex_state = 484},
  [361] = {.lex_state = 508, .external_lex_state = 3},
  [362] = {.lex_state = 351},
  [363] = {.lex_state = 181},
  [364] = {.lex_state = 181},
  [365] = {.lex_state = 351},
  [366] = {.lex_state = 508, .external_lex_state = 3},
  [367] = {.lex_state = 456, .external_lex_state = 2},
  [368] = {.lex_state = 508, .external_lex_state = 3},
  [369] = {.lex_state = 508, .external_lex_state = 3},
  [370] = {.lex_state = 923, .external_lex_state = 4},
  [371] = {.lex_state = 508, .external_lex_state = 3},
  [372] = {.lex_state = 932},
  [373] = {.lex_state = 351},
  [374] = {.lex_state = 508, .external_lex_state = 3},
  [375] = {.lex_state = 456, .external_lex_state = 2},
  [376] = {.lex_state = 608, .external_lex_state = 3},
  [377] = {.lex_state = 840, .external_lex_state = 3},
  [378] = {.lex_state = 508, .external_lex_state = 3},
  [379] = {.lex_state = 351},
  [380] = {.lex_state = 845, .external_lex_state = 3},
  [381] = {.lex_state = 181},
  [382] = {.lex_state = 351},
  [383] = {.lex_state = 559},
  [384] = {.lex_state = 937, .external_lex_state = 3},
  [385] = {.lex_state = 937, .external_lex_state = 3},
  [386] = {.lex_state = 840, .external_lex_state = 3},
  [387] = {.lex_state = 508, .external_lex_state = 3},
  [388] = {.lex_state = 840, .external_lex_state = 3},
  [389] = {.lex_state = 884},
  [390] = {.lex_state = 891},
  [391] = {.lex_state = 500},
  [392] = {.lex_state = 947},
  [393] = {.lex_state = 351},
  [394] = {.lex_state = 351},
  [395] = {.lex_state = 783},
  [396] = {.lex_state = 783},
  [397] = {.lex_state = 783},
  [398] = {.lex_state = 351},
  [399] = {.lex_state = 181},
  [400] = {.lex_state = 870},
  [401] = {.lex_state = 783},
  [402] = {.lex_state = 783},
  [403] = {.lex_state = 788},
  [404] = {.lex_state = 484},
  [405] = {.lex_state = 351},
  [406] = {.lex_state = 181},
  [407] = {.lex_state = 351},
  [408] = {.lex_state = 351},
  [409] = {.lex_state = 351},
  [410] = {.lex_state = 903, .external_lex_state = 3},
  [411] = {.lex_state = 351},
  [412] = {.lex_state = 793},
  [413] = {.lex_state = 954},
  [414] = {.lex_state = 793},
  [415] = {.lex_state = 954},
  [416] = {.lex_state = 181},
  [417] = {.lex_state = 793},
  [418] = {.lex_state = 903, .external_lex_state = 3},
  [419] = {.lex_state = 351},
  [420] = {.lex_state = 793},
  [421] = {.lex_state = 351},
  [422] = {.lex_state = 351},
  [423] = {.lex_state = 793},
  [424] = {.lex_state = 793},
  [425] = {.lex_state = 793},
  [426] = {.lex_state = 181},
  [427] = {.lex_state = 793},
  [428] = {.lex_state = 793},
  [429] = {.lex_state = 903, .external_lex_state = 3},
  [430] = {.lex_state = 793},
  [431] = {.lex_state = 942, .external_lex_state = 3},
  [432] = {.lex_state = 181},
  [433] = {.lex_state = 942, .external_lex_state = 3},
  [434] = {.lex_state = 942, .external_lex_state = 3},
  [435] = {.lex_state = 793},
  [436] = {.lex_state = 508, .external_lex_state = 3},
  [437] = {.lex_state = 508, .external_lex_state = 3},
  [438] = {.lex_state = 913, .external_lex_state = 4},
  [439] = {.lex_state = 181},
  [440] = {.lex_state = 508, .external_lex_state = 3},
  [441] = {.lex_state = 351},
  [442] = {.lex_state = 484},
  [443] = {.lex_state = 351},
  [444] = {.lex_state = 351},
  [445] = {.lex_state = 351},
  [446] = {.lex_state = 508, .external_lex_state = 3},
  [447] = {.lex_state = 351},
  [448] = {.lex_state = 351},
  [449] = {.lex_state = 351},
  [450] = {.lex_state = 484},
  [451] = {.lex_state = 508, .external_lex_state = 3},
  [452] = {.lex_state = 559},
  [453] = {.lex_state = 351},
  [454] = {.lex_state = 484},
  [455] = {.lex_state = 508, .external_lex_state = 3},
  [456] = {.lex_state = 351},
  [457] = {.lex_state = 351},
  [458] = {.lex_state = 181},
  [459] = {.lex_state = 508, .external_lex_state = 3},
  [460] = {.lex_state = 923, .external_lex_state = 4},
  [461] = {.lex_state = 508, .external_lex_state = 3},
  [462] = {.lex_state = 508, .external_lex_state = 3},
  [463] = {.lex_state = 932},
  [464] = {.lex_state = 508, .external_lex_state = 3},
  [465] = {.lex_state = 508, .external_lex_state = 3},
  [466] = {.lex_state = 508, .external_lex_state = 3},
  [467] = {.lex_state = 508, .external_lex_state = 3},
  [468] = {.lex_state = 351},
  [469] = {.lex_state = 845, .external_lex_state = 3},
  [470] = {.lex_state = 845, .external_lex_state = 3},
  [471] = {.lex_state = 461},
  [472] = {.lex_state = 351},
  [473] = {.lex_state = 461},
  [474] = {.lex_state = 559},
  [475] = {.lex_state = 559},
  [476] = {.lex_state = 508, .external_lex_state = 3},
  [477] = {.lex_state = 351},
  [478] = {.lex_state = 513},
  [479] = {.lex_state = 783},
  [480] = {.lex_state = 513},
  [481] = {.lex_state = 783},
  [482] = {.lex_state = 351},
  [483] = {.lex_state = 484},
  [484] = {.lex_state = 351},
  [485] = {.lex_state = 954},
  [486] = {.lex_state = 351},
  [487] = {.lex_state = 954},
  [488] = {.lex_state = 351},
  [489] = {.lex_state = 351},
  [490] = {.lex_state = 903, .external_lex_state = 3},
  [491] = {.lex_state = 954},
  [492] = {.lex_state = 954},
  [493] = {.lex_state = 954},
  [494] = {.lex_state = 793},
  [495] = {.lex_state = 351},
  [496] = {.lex_state = 793},
  [497] = {.lex_state = 903, .external_lex_state = 3},
  [498] = {.lex_state = 954},
  [499] = {.lex_state = 793},
  [500] = {.lex_state = 351},
  [501] = {.lex_state = 954},
  [502] = {.lex_state = 793},
  [503] = {.lex_state = 942, .external_lex_state = 3},
  [504] = {.lex_state = 181},
  [505] = {.lex_state = 942, .external_lex_state = 3},
  [506] = {.lex_state = 913, .external_lex_state = 4},
  [507] = {.lex_state = 351},
  [508] = {.lex_state = 351},
  [509] = {.lex_state = 351},
  [510] = {.lex_state = 351},
  [511] = {.lex_state = 351},
  [512] = {.lex_state = 559},
  [513] = {.lex_state = 351},
  [514] = {.lex_state = 351},
  [515] = {.lex_state = 351},
  [516] = {.lex_state = 508, .external_lex_state = 3},
  [517] = {.lex_state = 923, .external_lex_state = 4},
  [518] = {.lex_state = 932},
  [519] = {.lex_state = 508, .external_lex_state = 3},
  [520] = {.lex_state = 351},
  [521] = {.lex_state = 845, .external_lex_state = 3},
  [522] = {.lex_state = 461},
  [523] = {.lex_state = 559},
  [524] = {.lex_state = 484},
  [525] = {.lex_state = 351},
  [526] = {.lex_state = 461},
  [527] = {.lex_state = 559},
  [528] = {.lex_state = 351},
  [529] = {.lex_state = 954},
  [530] = {.lex_state = 954},
  [531] = {.lex_state = 954},
  [532] = {.lex_state = 954},
  [533] = {.lex_state = 351},
  [534] = {.lex_state = 793},
  [535] = {.lex_state = 942, .external_lex_state = 3},
  [536] = {.lex_state = 351},
  [537] = {.lex_state = 508, .external_lex_state = 3},
  [538] = {.lex_state = 351},
  [539] = {.lex_state = 351},
  [540] = {.lex_state = 351},
  [541] = {.lex_state = 351},
  [542] = {.lex_state = 559},
  [543] = {.lex_state = 351},
  [544] = {.lex_state = 351},
  [545] = {.lex_state = 351},
  [546] = {.lex_state = 559},
  [547] = {.lex_state = 351},
  [548] = {.lex_state = 954},
  [549] = {.lex_state = 508, .external_lex_state = 3},
  [550] = {.lex_state = 351},
  [551] = {.lex_state = 351},
  [552] = {.lex_state = 351},
  [553] = {.lex_state = 351},
  [554] = {.lex_state = 351},
  [555] = {.lex_state = 351},
  [556] = {.lex_state = 508, .external_lex_state = 3},
  [557] = {.lex_state = 351},
  [558] = {.lex_state = 351},
  [559] = {.lex_state = 351},
  [560] = {.lex_state = 351},
  [561] = {.lex_state = 508, .external_lex_state = 3},
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
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(3),
    [anon_sym__] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(3),
    [anon_sym_DASH_GT] = ACTIONS(3),
    [sym_unit_type] = ACTIONS(3),
    [sym_list_constructor] = ACTIONS(3),
    [sym_function_constructor] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(3),
    [anon_sym_EQ_GT] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(7),
    [sym__ascii_large] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_1] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(3),
    [anon_sym_LT_DASH] = ACTIONS(3),
    [sym__vertical_tab] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(7),
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
    [sym__integer_literal] = ACTIONS(7),
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
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_module] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_class] = ACTIONS(21),
    [anon_sym_instance] = ACTIONS(23),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_newtype] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(31),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(35),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [2] = {
    [sym_module_identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(5),
  },
  [3] = {
    [anon_sym_qualified] = ACTIONS(47),
    [sym_module_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(5),
  },
  [4] = {
    [sym_foreign_import] = STATE(35),
    [anon_sym_import] = ACTIONS(51),
    [sym_foreign_export] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
  },
  [5] = {
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym_comment] = ACTIONS(5),
  },
  [6] = {
    [sym_statement_list] = STATE(39),
    [sym__layout_open_brace] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_comment] = ACTIONS(5),
  },
  [7] = {
    [sym_context] = STATE(42),
    [sym_class] = STATE(43),
    [sym_constructor_identifier] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(61),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [8] = {
    [sym_context] = STATE(45),
    [sym_class] = STATE(43),
    [sym_constructor_identifier] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(61),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [9] = {
    [sym__op] = STATE(51),
    [sym_variable_symbol] = STATE(52),
    [sym_constructor_symbol] = STATE(52),
    [sym_integer] = STATE(53),
    [sym__variable_symbol] = STATE(54),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_1] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(65),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [10] = {
    [sym_context] = STATE(56),
    [sym_class] = STATE(43),
    [sym_simple_type] = STATE(57),
    [sym_constructor_identifier] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(61),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [11] = {
    [sym_context] = STATE(60),
    [sym_class] = STATE(43),
    [sym_simple_type] = STATE(61),
    [sym_constructor_identifier] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(61),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [12] = {
    [sym_simple_type] = STATE(63),
    [sym_constructor_identifier] = STATE(64),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [13] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym__integer_literal] = ACTIONS(79),
    [sym__octal_literal] = ACTIONS(79),
    [sym__hexidecimal_literal] = ACTIONS(79),
  },
  [14] = {
    [sym__layout_semicolon] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_COLON_COLON] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(87),
    [sym_comment] = ACTIONS(5),
  },
  [15] = {
    [sym__layout_semicolon] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(91),
    [sym__variable_pattern] = ACTIONS(91),
    [sym__constructor_pattern] = ACTIONS(93),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym__integer_literal] = ACTIONS(91),
    [sym__octal_literal] = ACTIONS(91),
    [sym__hexidecimal_literal] = ACTIONS(91),
  },
  [16] = {
    [sym__graphic] = STATE(69),
    [sym__small] = STATE(70),
    [sym__large] = STATE(70),
    [sym__symbol] = STATE(70),
    [sym__special] = STATE(70),
    [sym__escape] = STATE(69),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_BANG] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(97),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(105),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(99),
    [sym__ascii_large] = ACTIONS(107),
    [anon_sym_POUND] = ACTIONS(97),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(97),
    [anon_sym_1] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(97),
    [anon_sym_BSLASH] = ACTIONS(109),
    [sym__space] = ACTIONS(103),
  },
  [17] = {
    [sym__gap] = STATE(76),
    [sym__graphic] = STATE(76),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(76),
    [aux_sym_string_repeat1] = STATE(82),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(115),
    [sym__ascii_large] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(113),
    [anon_sym_1] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(125),
    [sym__space] = ACTIONS(127),
    [sym__newline] = ACTIONS(127),
    [sym__tab] = ACTIONS(127),
    [sym__vertical_tab] = ACTIONS(127),
  },
  [18] = {
    [sym__layout_semicolon] = ACTIONS(129),
    [anon_sym_SEMI] = ACTIONS(131),
    [sym__variable_pattern] = ACTIONS(131),
    [sym__constructor_pattern] = ACTIONS(133),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [sym__integer_literal] = ACTIONS(131),
    [sym__octal_literal] = ACTIONS(131),
    [sym__hexidecimal_literal] = ACTIONS(131),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_comment] = ACTIONS(5),
  },
  [20] = {
    [sym__layout_semicolon] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(139),
    [sym_comment] = ACTIONS(5),
  },
  [21] = {
    [sym__layout_semicolon] = ACTIONS(141),
    [anon_sym_SEMI] = ACTIONS(143),
    [sym_comment] = ACTIONS(5),
  },
  [22] = {
    [sym_function_body] = STATE(85),
    [anon_sym_EQ] = ACTIONS(145),
    [sym_comment] = ACTIONS(5),
  },
  [23] = {
    [sym__function_pattern] = STATE(93),
    [sym_parenthesized_pattern] = STATE(94),
    [sym_as_pattern] = STATE(94),
    [sym_wildcard] = STATE(94),
    [sym__variable] = STATE(95),
    [sym_qualified_variable_identifier] = STATE(96),
    [sym__literal] = STATE(94),
    [sym__identifier] = STATE(97),
    [sym_simple_type] = STATE(98),
    [sym_variable_identifier] = STATE(99),
    [sym_constructor_identifier] = STATE(100),
    [sym_integer] = STATE(90),
    [sym_char] = STATE(90),
    [sym_string] = STATE(90),
    [aux_sym_function_head_repeat1] = STATE(101),
    [sym__layout_semicolon] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym__] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(157),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [24] = {
    [sym__layout_semicolon] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym__] = ACTIONS(167),
    [sym__variable_pattern] = ACTIONS(169),
    [sym__constructor_pattern] = ACTIONS(169),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym__integer_literal] = ACTIONS(167),
    [sym__octal_literal] = ACTIONS(167),
    [sym__hexidecimal_literal] = ACTIONS(167),
  },
  [25] = {
    [sym__layout_semicolon] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(149),
    [sym_comment] = ACTIONS(5),
  },
  [26] = {
    [sym__layout_semicolon] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(173),
    [sym_comment] = ACTIONS(5),
  },
  [27] = {
    [sym__layout_semicolon] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_COLON_COLON] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
  },
  [28] = {
    [sym__layout_semicolon] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym__] = ACTIONS(167),
    [anon_sym_COLON_COLON] = ACTIONS(179),
    [sym__variable_pattern] = ACTIONS(169),
    [sym__constructor_pattern] = ACTIONS(169),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym__integer_literal] = ACTIONS(167),
    [sym__octal_literal] = ACTIONS(167),
    [sym__hexidecimal_literal] = ACTIONS(167),
  },
  [29] = {
    [sym__layout_semicolon] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(179),
    [sym__variable_pattern] = ACTIONS(179),
    [sym__constructor_pattern] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [sym__integer_literal] = ACTIONS(179),
    [sym__octal_literal] = ACTIONS(179),
    [sym__hexidecimal_literal] = ACTIONS(179),
  },
  [30] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(103),
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
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_class] = ACTIONS(21),
    [anon_sym_instance] = ACTIONS(23),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_newtype] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(31),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(35),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [31] = {
    [sym_module_exports] = STATE(106),
    [anon_sym_where] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(187),
    [sym_comment] = ACTIONS(5),
  },
  [32] = {
    [sym_module_identifier] = ACTIONS(189),
    [sym_comment] = ACTIONS(5),
  },
  [33] = {
    [sym_import_specification] = STATE(111),
    [sym__layout_semicolon] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_as] = ACTIONS(197),
    [anon_sym_hiding] = ACTIONS(199),
    [sym_comment] = ACTIONS(5),
  },
  [34] = {
    [anon_sym_ccall] = ACTIONS(201),
    [anon_sym_stdcall] = ACTIONS(201),
    [anon_sym_cplusplus] = ACTIONS(201),
    [anon_sym_jvm] = ACTIONS(201),
    [anon_sym_dotnet] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
  },
  [35] = {
    [sym_calling_convention] = STATE(113),
    [anon_sym_ccall] = ACTIONS(203),
    [anon_sym_stdcall] = ACTIONS(203),
    [anon_sym_cplusplus] = ACTIONS(203),
    [anon_sym_jvm] = ACTIONS(203),
    [anon_sym_dotnet] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [36] = {
    [sym__identifier] = STATE(115),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_RPAREN] = ACTIONS(205),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [37] = {
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(119),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(120),
    [sym__literal] = STATE(25),
    [sym_variable_identifier] = STATE(24),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_statement_list_repeat1] = STATE(121),
    [sym__layout_close_brace] = ACTIONS(209),
    [anon_sym_do] = ACTIONS(19),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(211),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [38] = {
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(122),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(123),
    [sym__literal] = STATE(25),
    [sym_variable_identifier] = STATE(24),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_statement_list_repeat1] = STATE(124),
    [anon_sym_RBRACE] = ACTIONS(213),
    [anon_sym_do] = ACTIONS(19),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(211),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [39] = {
    [sym__layout_semicolon] = ACTIONS(215),
    [anon_sym_SEMI] = ACTIONS(217),
    [sym_comment] = ACTIONS(5),
  },
  [40] = {
    [sym_class] = STATE(125),
    [sym_constructor_identifier] = STATE(126),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [41] = {
    [anon_sym_where] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_BQUOTE] = ACTIONS(85),
    [anon_sym_COLON_COLON] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(219),
    [sym_comment] = ACTIONS(5),
  },
  [42] = {
    [sym_constructor_identifier] = STATE(127),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [43] = {
    [anon_sym_EQ_GT] = ACTIONS(221),
    [sym_comment] = ACTIONS(5),
  },
  [44] = {
    [sym_variable_identifier] = STATE(132),
    [aux_sym_general_constructor_repeat1] = STATE(133),
    [anon_sym_where] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [sym__variable_pattern] = ACTIONS(227),
    [sym_comment] = ACTIONS(5),
  },
  [45] = {
    [sym_constructor_identifier] = STATE(134),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [46] = {
    [sym_variable_identifier] = STATE(132),
    [aux_sym_general_constructor_repeat1] = STATE(136),
    [anon_sym_where] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(225),
    [sym__variable_pattern] = ACTIONS(227),
    [sym_comment] = ACTIONS(5),
  },
  [47] = {
    [sym__layout_semicolon] = ACTIONS(231),
    [anon_sym_SEMI] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_BANG] = ACTIONS(233),
    [anon_sym_DOT] = ACTIONS(233),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(233),
    [anon_sym_DOLLAR] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(233),
    [anon_sym_AMP] = ACTIONS(233),
    [anon_sym_1] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_QMARK] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(233),
  },
  [48] = {
    [sym__identifier] = STATE(137),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [49] = {
    [sym__constructor_symbol] = STATE(139),
    [aux_sym_constructor_symbol_repeat1] = STATE(140),
    [sym__layout_semicolon] = ACTIONS(235),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_COLON] = ACTIONS(239),
    [anon_sym_BANG] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(239),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(239),
    [anon_sym_DOLLAR] = ACTIONS(239),
    [anon_sym_PERCENT] = ACTIONS(239),
    [anon_sym_AMP] = ACTIONS(239),
    [anon_sym_1] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_SLASH] = ACTIONS(239),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_QMARK] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(239),
  },
  [50] = {
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_BQUOTE] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_BANG] = ACTIONS(131),
    [sym__variable_pattern] = ACTIONS(133),
    [sym__constructor_pattern] = ACTIONS(133),
    [anon_sym_DOT] = ACTIONS(131),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [anon_sym_PERCENT] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(131),
    [anon_sym_1] = ACTIONS(131),
    [anon_sym_PLUS] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_CARET] = ACTIONS(131),
    [sym__integer_literal] = ACTIONS(131),
    [sym__octal_literal] = ACTIONS(131),
    [sym__hexidecimal_literal] = ACTIONS(131),
  },
  [51] = {
    [aux_sym_fixity_repeat1] = STATE(142),
    [sym__layout_semicolon] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(245),
    [sym_comment] = ACTIONS(5),
  },
  [52] = {
    [sym__layout_semicolon] = ACTIONS(247),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [sym_comment] = ACTIONS(5),
  },
  [53] = {
    [sym__op] = STATE(143),
    [sym_variable_symbol] = STATE(52),
    [sym_constructor_symbol] = STATE(52),
    [sym__variable_symbol] = STATE(54),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_1] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(65),
  },
  [54] = {
    [sym__variable_symbol] = STATE(144),
    [aux_sym_variable_symbol_repeat1] = STATE(145),
    [sym__layout_semicolon] = ACTIONS(251),
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_1] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(65),
  },
  [55] = {
    [sym__layout_semicolon] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_deriving] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(219),
    [sym__constructor_pattern] = ACTIONS(219),
    [sym_comment] = ACTIONS(5),
  },
  [56] = {
    [sym_simple_type] = STATE(146),
    [sym_constructor_identifier] = STATE(147),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [57] = {
    [sym_constructors] = STATE(150),
    [sym_constructor] = STATE(151),
    [sym_deriving] = STATE(152),
    [sym_constructor_identifier] = STATE(153),
    [sym__layout_semicolon] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(257),
    [anon_sym_EQ] = ACTIONS(259),
    [anon_sym_deriving] = ACTIONS(261),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [58] = {
    [sym_variable_identifier] = STATE(155),
    [aux_sym_general_constructor_repeat1] = STATE(156),
    [sym__layout_semicolon] = ACTIONS(263),
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_deriving] = ACTIONS(265),
    [sym__variable_pattern] = ACTIONS(267),
    [sym__constructor_pattern] = ACTIONS(269),
    [sym_comment] = ACTIONS(5),
  },
  [59] = {
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(85),
    [sym__constructor_pattern] = ACTIONS(219),
    [sym_comment] = ACTIONS(5),
  },
  [60] = {
    [sym_simple_type] = STATE(157),
    [sym_constructor_identifier] = STATE(64),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [61] = {
    [anon_sym_EQ] = ACTIONS(271),
    [sym_comment] = ACTIONS(5),
  },
  [62] = {
    [sym_variable_identifier] = STATE(160),
    [aux_sym_general_constructor_repeat1] = STATE(161),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_EQ] = ACTIONS(265),
    [sym__variable_pattern] = ACTIONS(273),
    [sym_comment] = ACTIONS(5),
  },
  [63] = {
    [anon_sym_EQ] = ACTIONS(275),
    [sym_comment] = ACTIONS(5),
  },
  [64] = {
    [sym_variable_identifier] = STATE(164),
    [aux_sym_general_constructor_repeat1] = STATE(161),
    [anon_sym_EQ] = ACTIONS(265),
    [sym__variable_pattern] = ACTIONS(277),
    [sym_comment] = ACTIONS(5),
  },
  [65] = {
    [sym__layout_semicolon] = ACTIONS(279),
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [sym__variable_pattern] = ACTIONS(283),
    [sym__constructor_pattern] = ACTIONS(283),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(283),
    [anon_sym_SQUOTE] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [sym__integer_literal] = ACTIONS(281),
    [sym__octal_literal] = ACTIONS(281),
    [sym__hexidecimal_literal] = ACTIONS(281),
  },
  [66] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(285),
  },
  [67] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(287),
  },
  [68] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(289),
  },
  [69] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(291),
  },
  [70] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(293),
  },
  [71] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(295),
  },
  [72] = {
    [sym__char_escape] = STATE(167),
    [sym__ascii] = STATE(167),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(299),
    [anon_sym_AMP] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_BSLASH] = ACTIONS(297),
    [anon_sym_x] = ACTIONS(303),
    [anon_sym_X] = ACTIONS(303),
    [anon_sym_o] = ACTIONS(305),
    [anon_sym_O] = ACTIONS(305),
    [anon_sym_a] = ACTIONS(297),
    [anon_sym_b] = ACTIONS(297),
    [anon_sym_f] = ACTIONS(297),
    [anon_sym_n] = ACTIONS(297),
    [anon_sym_r] = ACTIONS(297),
    [anon_sym_t] = ACTIONS(297),
    [anon_sym_v] = ACTIONS(297),
    [anon_sym_NUL] = ACTIONS(307),
    [anon_sym_SOH] = ACTIONS(307),
    [anon_sym_STX] = ACTIONS(307),
    [anon_sym_ETX] = ACTIONS(307),
    [anon_sym_EOT] = ACTIONS(307),
    [anon_sym_ENQ] = ACTIONS(307),
    [anon_sym_ACK] = ACTIONS(307),
    [anon_sym_BEL] = ACTIONS(307),
    [anon_sym_BS] = ACTIONS(307),
    [anon_sym_HT] = ACTIONS(307),
    [anon_sym_LF] = ACTIONS(307),
    [anon_sym_VT] = ACTIONS(307),
    [anon_sym_FF] = ACTIONS(307),
    [anon_sym_CR] = ACTIONS(307),
    [anon_sym_SO] = ACTIONS(307),
    [anon_sym_SI] = ACTIONS(307),
    [anon_sym_DLE] = ACTIONS(307),
    [anon_sym_DC1] = ACTIONS(307),
    [anon_sym_DC2] = ACTIONS(307),
    [anon_sym_DC3] = ACTIONS(307),
    [anon_sym_DC4] = ACTIONS(307),
    [anon_sym_NAK] = ACTIONS(307),
    [anon_sym_SYN] = ACTIONS(307),
    [anon_sym_ETB] = ACTIONS(307),
    [anon_sym_CAN] = ACTIONS(307),
    [anon_sym_EM] = ACTIONS(307),
    [anon_sym_SUB] = ACTIONS(307),
    [anon_sym_ESC] = ACTIONS(307),
    [anon_sym_FS] = ACTIONS(307),
    [anon_sym_GS] = ACTIONS(307),
    [anon_sym_RS] = ACTIONS(307),
    [anon_sym_US] = ACTIONS(307),
    [anon_sym_SP] = ACTIONS(307),
    [anon_sym_DEL] = ACTIONS(307),
  },
  [73] = {
    [anon_sym_SEMI] = ACTIONS(309),
    [anon_sym_LBRACE] = ACTIONS(309),
    [anon_sym_RBRACE] = ACTIONS(309),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_EQ] = ACTIONS(309),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_AT] = ACTIONS(309),
    [anon_sym_BQUOTE] = ACTIONS(309),
    [anon_sym__] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(309),
    [anon_sym_RBRACK] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(309),
    [anon_sym_BANG] = ACTIONS(309),
    [anon_sym_DOT] = ACTIONS(309),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(309),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(309),
    [sym__ascii_large] = ACTIONS(309),
    [anon_sym_POUND] = ACTIONS(309),
    [anon_sym_DOLLAR] = ACTIONS(309),
    [anon_sym_PERCENT] = ACTIONS(309),
    [anon_sym_AMP] = ACTIONS(309),
    [anon_sym_1] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_SLASH] = ACTIONS(309),
    [anon_sym_LT] = ACTIONS(309),
    [anon_sym_GT] = ACTIONS(309),
    [anon_sym_QMARK] = ACTIONS(309),
    [anon_sym_CARET] = ACTIONS(309),
    [anon_sym_TILDE] = ACTIONS(309),
    [anon_sym_BSLASH] = ACTIONS(309),
    [sym__space] = ACTIONS(309),
    [sym__newline] = ACTIONS(309),
    [sym__tab] = ACTIONS(309),
    [sym__vertical_tab] = ACTIONS(309),
  },
  [74] = {
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_LPAREN] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_EQ] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(311),
    [anon_sym_AT] = ACTIONS(311),
    [anon_sym_BQUOTE] = ACTIONS(311),
    [anon_sym__] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_BANG] = ACTIONS(311),
    [anon_sym_DOT] = ACTIONS(311),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(311),
    [sym__ascii_large] = ACTIONS(311),
    [anon_sym_POUND] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(311),
    [anon_sym_PERCENT] = ACTIONS(311),
    [anon_sym_AMP] = ACTIONS(311),
    [anon_sym_1] = ACTIONS(311),
    [anon_sym_PLUS] = ACTIONS(311),
    [anon_sym_SLASH] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_QMARK] = ACTIONS(311),
    [anon_sym_CARET] = ACTIONS(311),
    [anon_sym_TILDE] = ACTIONS(311),
    [anon_sym_BSLASH] = ACTIONS(311),
    [sym__space] = ACTIONS(311),
    [sym__newline] = ACTIONS(311),
    [sym__tab] = ACTIONS(311),
    [sym__vertical_tab] = ACTIONS(311),
  },
  [75] = {
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(313),
    [anon_sym_BQUOTE] = ACTIONS(313),
    [anon_sym__] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_BANG] = ACTIONS(313),
    [anon_sym_DOT] = ACTIONS(313),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(313),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(313),
    [sym__ascii_large] = ACTIONS(313),
    [anon_sym_POUND] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(313),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(313),
    [anon_sym_1] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_CARET] = ACTIONS(313),
    [anon_sym_TILDE] = ACTIONS(313),
    [anon_sym_BSLASH] = ACTIONS(313),
    [sym__space] = ACTIONS(313),
    [sym__newline] = ACTIONS(313),
    [sym__tab] = ACTIONS(313),
    [sym__vertical_tab] = ACTIONS(313),
  },
  [76] = {
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_AT] = ACTIONS(315),
    [anon_sym_BQUOTE] = ACTIONS(315),
    [anon_sym__] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RBRACK] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_BANG] = ACTIONS(315),
    [anon_sym_DOT] = ACTIONS(315),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(315),
    [sym__ascii_large] = ACTIONS(315),
    [anon_sym_POUND] = ACTIONS(315),
    [anon_sym_DOLLAR] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(315),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_1] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_LT] = ACTIONS(315),
    [anon_sym_GT] = ACTIONS(315),
    [anon_sym_QMARK] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_TILDE] = ACTIONS(315),
    [anon_sym_BSLASH] = ACTIONS(315),
    [sym__space] = ACTIONS(315),
    [sym__newline] = ACTIONS(315),
    [sym__tab] = ACTIONS(315),
    [sym__vertical_tab] = ACTIONS(315),
  },
  [77] = {
    [sym__layout_semicolon] = ACTIONS(317),
    [anon_sym_SEMI] = ACTIONS(319),
    [sym__variable_pattern] = ACTIONS(319),
    [sym__constructor_pattern] = ACTIONS(321),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(319),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [sym__integer_literal] = ACTIONS(319),
    [sym__octal_literal] = ACTIONS(319),
    [sym__hexidecimal_literal] = ACTIONS(319),
  },
  [78] = {
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_EQ] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(323),
    [anon_sym_AT] = ACTIONS(323),
    [anon_sym_BQUOTE] = ACTIONS(323),
    [anon_sym__] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_BANG] = ACTIONS(323),
    [anon_sym_DOT] = ACTIONS(323),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(323),
    [sym__ascii_large] = ACTIONS(323),
    [anon_sym_POUND] = ACTIONS(323),
    [anon_sym_DOLLAR] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(323),
    [anon_sym_AMP] = ACTIONS(323),
    [anon_sym_1] = ACTIONS(323),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(323),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_QMARK] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(323),
    [anon_sym_TILDE] = ACTIONS(323),
    [anon_sym_BSLASH] = ACTIONS(323),
    [sym__space] = ACTIONS(323),
    [sym__newline] = ACTIONS(323),
    [sym__tab] = ACTIONS(323),
    [sym__vertical_tab] = ACTIONS(323),
  },
  [79] = {
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_EQ] = ACTIONS(325),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_AT] = ACTIONS(325),
    [anon_sym_BQUOTE] = ACTIONS(325),
    [anon_sym__] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_BANG] = ACTIONS(325),
    [anon_sym_DOT] = ACTIONS(325),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(325),
    [sym__ascii_large] = ACTIONS(325),
    [anon_sym_POUND] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(325),
    [anon_sym_PERCENT] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(325),
    [anon_sym_1] = ACTIONS(325),
    [anon_sym_PLUS] = ACTIONS(325),
    [anon_sym_SLASH] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_QMARK] = ACTIONS(325),
    [anon_sym_CARET] = ACTIONS(325),
    [anon_sym_TILDE] = ACTIONS(325),
    [anon_sym_BSLASH] = ACTIONS(325),
    [sym__space] = ACTIONS(325),
    [sym__newline] = ACTIONS(325),
    [sym__tab] = ACTIONS(325),
    [sym__vertical_tab] = ACTIONS(325),
  },
  [80] = {
    [sym__char_escape] = STATE(173),
    [sym__ascii] = STATE(173),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_LPAREN] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_EQ] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(311),
    [anon_sym_AT] = ACTIONS(311),
    [anon_sym_BQUOTE] = ACTIONS(311),
    [anon_sym__] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_BANG] = ACTIONS(311),
    [anon_sym_DOT] = ACTIONS(311),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(311),
    [sym__ascii_large] = ACTIONS(311),
    [anon_sym_POUND] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(311),
    [anon_sym_PERCENT] = ACTIONS(311),
    [anon_sym_AMP] = ACTIONS(327),
    [anon_sym_1] = ACTIONS(311),
    [anon_sym_PLUS] = ACTIONS(311),
    [anon_sym_SLASH] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_QMARK] = ACTIONS(311),
    [anon_sym_CARET] = ACTIONS(331),
    [anon_sym_TILDE] = ACTIONS(311),
    [anon_sym_BSLASH] = ACTIONS(327),
    [sym__space] = ACTIONS(311),
    [sym__newline] = ACTIONS(311),
    [sym__tab] = ACTIONS(311),
    [sym__vertical_tab] = ACTIONS(311),
    [anon_sym_x] = ACTIONS(333),
    [anon_sym_X] = ACTIONS(333),
    [anon_sym_o] = ACTIONS(335),
    [anon_sym_O] = ACTIONS(335),
    [anon_sym_a] = ACTIONS(327),
    [anon_sym_b] = ACTIONS(327),
    [anon_sym_f] = ACTIONS(327),
    [anon_sym_n] = ACTIONS(327),
    [anon_sym_r] = ACTIONS(327),
    [anon_sym_t] = ACTIONS(327),
    [anon_sym_v] = ACTIONS(327),
    [anon_sym_NUL] = ACTIONS(337),
    [anon_sym_SOH] = ACTIONS(337),
    [anon_sym_STX] = ACTIONS(337),
    [anon_sym_ETX] = ACTIONS(337),
    [anon_sym_EOT] = ACTIONS(337),
    [anon_sym_ENQ] = ACTIONS(337),
    [anon_sym_ACK] = ACTIONS(337),
    [anon_sym_BEL] = ACTIONS(337),
    [anon_sym_BS] = ACTIONS(337),
    [anon_sym_HT] = ACTIONS(337),
    [anon_sym_LF] = ACTIONS(337),
    [anon_sym_VT] = ACTIONS(337),
    [anon_sym_FF] = ACTIONS(337),
    [anon_sym_CR] = ACTIONS(337),
    [anon_sym_SO] = ACTIONS(337),
    [anon_sym_SI] = ACTIONS(337),
    [anon_sym_DLE] = ACTIONS(337),
    [anon_sym_DC1] = ACTIONS(337),
    [anon_sym_DC2] = ACTIONS(337),
    [anon_sym_DC3] = ACTIONS(337),
    [anon_sym_DC4] = ACTIONS(337),
    [anon_sym_NAK] = ACTIONS(337),
    [anon_sym_SYN] = ACTIONS(337),
    [anon_sym_ETB] = ACTIONS(337),
    [anon_sym_CAN] = ACTIONS(337),
    [anon_sym_EM] = ACTIONS(337),
    [anon_sym_SUB] = ACTIONS(337),
    [anon_sym_ESC] = ACTIONS(337),
    [anon_sym_FS] = ACTIONS(337),
    [anon_sym_GS] = ACTIONS(337),
    [anon_sym_RS] = ACTIONS(337),
    [anon_sym_US] = ACTIONS(337),
    [anon_sym_SP] = ACTIONS(337),
    [anon_sym_DEL] = ACTIONS(337),
  },
  [81] = {
    [anon_sym_SEMI] = ACTIONS(339),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_RBRACE] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(339),
    [anon_sym_RPAREN] = ACTIONS(339),
    [anon_sym_EQ] = ACTIONS(339),
    [anon_sym_DASH] = ACTIONS(339),
    [anon_sym_AT] = ACTIONS(339),
    [anon_sym_BQUOTE] = ACTIONS(339),
    [anon_sym__] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(339),
    [anon_sym_RBRACK] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_BANG] = ACTIONS(339),
    [anon_sym_DOT] = ACTIONS(339),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(339),
    [anon_sym_DQUOTE] = ACTIONS(339),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(339),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(339),
    [sym__ascii_large] = ACTIONS(339),
    [anon_sym_POUND] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(339),
    [anon_sym_PERCENT] = ACTIONS(339),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_1] = ACTIONS(339),
    [anon_sym_PLUS] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(339),
    [anon_sym_GT] = ACTIONS(339),
    [anon_sym_QMARK] = ACTIONS(339),
    [anon_sym_CARET] = ACTIONS(339),
    [anon_sym_TILDE] = ACTIONS(339),
    [anon_sym_BSLASH] = ACTIONS(339),
    [sym__space] = ACTIONS(339),
    [sym__newline] = ACTIONS(339),
    [sym__tab] = ACTIONS(339),
    [sym__vertical_tab] = ACTIONS(339),
  },
  [82] = {
    [sym__gap] = STATE(178),
    [sym__graphic] = STATE(178),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(178),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(343),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(115),
    [sym__ascii_large] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(113),
    [anon_sym_1] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(125),
    [sym__space] = ACTIONS(127),
    [sym__newline] = ACTIONS(127),
    [sym__tab] = ACTIONS(127),
    [sym__vertical_tab] = ACTIONS(127),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_RBRACE] = ACTIONS(347),
    [anon_sym_import] = ACTIONS(347),
    [anon_sym_foreign] = ACTIONS(347),
    [anon_sym_default] = ACTIONS(347),
    [anon_sym_do] = ACTIONS(347),
    [anon_sym_class] = ACTIONS(347),
    [anon_sym_instance] = ACTIONS(347),
    [anon_sym_infixl] = ACTIONS(347),
    [anon_sym_infixr] = ACTIONS(347),
    [anon_sym_infix] = ACTIONS(347),
    [anon_sym_data] = ACTIONS(347),
    [anon_sym_newtype] = ACTIONS(347),
    [anon_sym_type] = ACTIONS(347),
    [sym__variable_pattern] = ACTIONS(349),
    [sym__constructor_pattern] = ACTIONS(349),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(349),
    [anon_sym_SQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(347),
    [sym__integer_literal] = ACTIONS(347),
    [sym__octal_literal] = ACTIONS(347),
    [sym__hexidecimal_literal] = ACTIONS(347),
  },
  [84] = {
    [sym__literal] = STATE(182),
    [sym__identifier] = STATE(182),
    [sym_variable_identifier] = STATE(29),
    [sym_constructor_identifier] = STATE(29),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_function_body_repeat1] = STATE(183),
    [sym__layout_semicolon] = ACTIONS(351),
    [anon_sym_SEMI] = ACTIONS(353),
    [sym__variable_pattern] = ACTIONS(355),
    [sym__constructor_pattern] = ACTIONS(357),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [85] = {
    [sym__layout_semicolon] = ACTIONS(359),
    [anon_sym_SEMI] = ACTIONS(361),
    [sym_comment] = ACTIONS(5),
  },
  [86] = {
    [sym__function_pattern] = STATE(186),
    [sym_parenthesized_pattern] = STATE(94),
    [sym__pattern] = STATE(187),
    [sym_negative_literal] = STATE(188),
    [sym_general_constructor] = STATE(188),
    [sym_as_pattern] = STATE(94),
    [sym_wildcard] = STATE(94),
    [sym__variable] = STATE(189),
    [sym_qualified_variable_identifier] = STATE(96),
    [sym__literal] = STATE(94),
    [sym__identifier] = STATE(97),
    [sym_simple_type] = STATE(98),
    [sym_variable_identifier] = STATE(99),
    [sym_constructor_identifier] = STATE(190),
    [sym_integer] = STATE(90),
    [sym_char] = STATE(90),
    [sym_string] = STATE(90),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(363),
    [anon_sym__] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(365),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [87] = {
    [anon_sym_LPAREN] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(367),
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(367),
    [anon_sym_BQUOTE] = ACTIONS(367),
    [anon_sym__] = ACTIONS(367),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_BANG] = ACTIONS(367),
    [sym__variable_pattern] = ACTIONS(369),
    [sym__constructor_pattern] = ACTIONS(369),
    [anon_sym_DOT] = ACTIONS(367),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(369),
    [anon_sym_SQUOTE] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(367),
    [anon_sym_POUND] = ACTIONS(367),
    [anon_sym_DOLLAR] = ACTIONS(367),
    [anon_sym_PERCENT] = ACTIONS(367),
    [anon_sym_AMP] = ACTIONS(367),
    [anon_sym_1] = ACTIONS(367),
    [anon_sym_PLUS] = ACTIONS(367),
    [anon_sym_SLASH] = ACTIONS(367),
    [anon_sym_LT] = ACTIONS(367),
    [anon_sym_GT] = ACTIONS(367),
    [anon_sym_QMARK] = ACTIONS(367),
    [anon_sym_CARET] = ACTIONS(367),
    [sym__integer_literal] = ACTIONS(367),
    [sym__octal_literal] = ACTIONS(367),
    [sym__hexidecimal_literal] = ACTIONS(367),
  },
  [88] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_AT] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(79),
    [anon_sym_DOLLAR] = ACTIONS(79),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_1] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(79),
    [sym__integer_literal] = ACTIONS(79),
    [sym__octal_literal] = ACTIONS(79),
    [sym__hexidecimal_literal] = ACTIONS(79),
  },
  [89] = {
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym__] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(219),
    [sym__constructor_pattern] = ACTIONS(219),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym__integer_literal] = ACTIONS(85),
    [sym__octal_literal] = ACTIONS(85),
    [sym__hexidecimal_literal] = ACTIONS(85),
  },
  [90] = {
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_BANG] = ACTIONS(91),
    [sym__variable_pattern] = ACTIONS(93),
    [sym__constructor_pattern] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(91),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_POUND] = ACTIONS(91),
    [anon_sym_DOLLAR] = ACTIONS(91),
    [anon_sym_PERCENT] = ACTIONS(91),
    [anon_sym_AMP] = ACTIONS(91),
    [anon_sym_1] = ACTIONS(91),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(91),
    [sym__integer_literal] = ACTIONS(91),
    [sym__octal_literal] = ACTIONS(91),
    [sym__hexidecimal_literal] = ACTIONS(91),
  },
  [91] = {
    [sym__graphic] = STATE(192),
    [sym__small] = STATE(70),
    [sym__large] = STATE(70),
    [sym__symbol] = STATE(70),
    [sym__special] = STATE(70),
    [sym__escape] = STATE(192),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_BANG] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(97),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(371),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(105),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(99),
    [sym__ascii_large] = ACTIONS(107),
    [anon_sym_POUND] = ACTIONS(97),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_AMP] = ACTIONS(97),
    [anon_sym_1] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(97),
    [anon_sym_BSLASH] = ACTIONS(109),
    [sym__space] = ACTIONS(371),
  },
  [92] = {
    [sym__gap] = STATE(76),
    [sym__graphic] = STATE(76),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(76),
    [aux_sym_string_repeat1] = STATE(194),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(115),
    [sym__ascii_large] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(113),
    [anon_sym_1] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(125),
    [sym__space] = ACTIONS(127),
    [sym__newline] = ACTIONS(127),
    [sym__tab] = ACTIONS(127),
    [sym__vertical_tab] = ACTIONS(127),
  },
  [93] = {
    [anon_sym_LPAREN] = ACTIONS(375),
    [anon_sym_EQ] = ACTIONS(375),
    [anon_sym__] = ACTIONS(375),
    [sym__variable_pattern] = ACTIONS(377),
    [sym__constructor_pattern] = ACTIONS(377),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(375),
    [anon_sym_DQUOTE] = ACTIONS(375),
    [sym__integer_literal] = ACTIONS(375),
    [sym__octal_literal] = ACTIONS(375),
    [sym__hexidecimal_literal] = ACTIONS(375),
  },
  [94] = {
    [anon_sym_LPAREN] = ACTIONS(379),
    [anon_sym_RPAREN] = ACTIONS(379),
    [anon_sym_EQ] = ACTIONS(379),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(379),
    [anon_sym__] = ACTIONS(379),
    [anon_sym_COLON] = ACTIONS(379),
    [anon_sym_BANG] = ACTIONS(379),
    [sym__variable_pattern] = ACTIONS(381),
    [sym__constructor_pattern] = ACTIONS(381),
    [anon_sym_DOT] = ACTIONS(379),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(381),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [anon_sym_POUND] = ACTIONS(379),
    [anon_sym_DOLLAR] = ACTIONS(379),
    [anon_sym_PERCENT] = ACTIONS(379),
    [anon_sym_AMP] = ACTIONS(379),
    [anon_sym_1] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_SLASH] = ACTIONS(379),
    [anon_sym_LT] = ACTIONS(379),
    [anon_sym_GT] = ACTIONS(379),
    [anon_sym_QMARK] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(379),
    [sym__integer_literal] = ACTIONS(379),
    [sym__octal_literal] = ACTIONS(379),
    [sym__hexidecimal_literal] = ACTIONS(379),
  },
  [95] = {
    [anon_sym_AT] = ACTIONS(383),
    [sym_comment] = ACTIONS(5),
  },
  [96] = {
    [anon_sym_AT] = ACTIONS(167),
    [sym_comment] = ACTIONS(5),
  },
  [97] = {
    [anon_sym_LBRACE] = ACTIONS(385),
    [anon_sym_LPAREN] = ACTIONS(379),
    [anon_sym_RPAREN] = ACTIONS(379),
    [anon_sym_EQ] = ACTIONS(379),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(379),
    [anon_sym__] = ACTIONS(379),
    [anon_sym_COLON] = ACTIONS(379),
    [anon_sym_BANG] = ACTIONS(379),
    [sym__variable_pattern] = ACTIONS(381),
    [sym__constructor_pattern] = ACTIONS(381),
    [anon_sym_DOT] = ACTIONS(379),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(381),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [anon_sym_POUND] = ACTIONS(379),
    [anon_sym_DOLLAR] = ACTIONS(379),
    [anon_sym_PERCENT] = ACTIONS(379),
    [anon_sym_AMP] = ACTIONS(379),
    [anon_sym_1] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_SLASH] = ACTIONS(379),
    [anon_sym_LT] = ACTIONS(379),
    [anon_sym_GT] = ACTIONS(379),
    [anon_sym_QMARK] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(379),
    [sym__integer_literal] = ACTIONS(379),
    [sym__octal_literal] = ACTIONS(379),
    [sym__hexidecimal_literal] = ACTIONS(379),
  },
  [98] = {
    [anon_sym_LBRACE] = ACTIONS(385),
    [sym_comment] = ACTIONS(5),
  },
  [99] = {
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_EQ] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [anon_sym__] = ACTIONS(179),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_BANG] = ACTIONS(179),
    [sym__variable_pattern] = ACTIONS(181),
    [sym__constructor_pattern] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(179),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_POUND] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(179),
    [anon_sym_PERCENT] = ACTIONS(179),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_1] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_QMARK] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(179),
    [sym__integer_literal] = ACTIONS(179),
    [sym__octal_literal] = ACTIONS(179),
    [sym__hexidecimal_literal] = ACTIONS(179),
  },
  [100] = {
    [sym_variable_identifier] = STATE(164),
    [aux_sym_general_constructor_repeat1] = STATE(197),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_EQ] = ACTIONS(179),
    [anon_sym__] = ACTIONS(179),
    [sym__variable_pattern] = ACTIONS(181),
    [sym__constructor_pattern] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [sym__integer_literal] = ACTIONS(179),
    [sym__octal_literal] = ACTIONS(179),
    [sym__hexidecimal_literal] = ACTIONS(179),
  },
  [101] = {
    [sym__function_pattern] = STATE(198),
    [sym_parenthesized_pattern] = STATE(94),
    [sym_as_pattern] = STATE(94),
    [sym_wildcard] = STATE(94),
    [sym__variable] = STATE(95),
    [sym_qualified_variable_identifier] = STATE(96),
    [sym__literal] = STATE(94),
    [sym__identifier] = STATE(97),
    [sym_simple_type] = STATE(98),
    [sym_variable_identifier] = STATE(99),
    [sym_constructor_identifier] = STATE(100),
    [sym_integer] = STATE(90),
    [sym_char] = STATE(90),
    [sym_string] = STATE(90),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_EQ] = ACTIONS(387),
    [anon_sym__] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(157),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [102] = {
    [sym_type] = STATE(204),
    [sym__generic_type_constructor] = STATE(205),
    [sym_tupling_constructor] = STATE(200),
    [sym_tuple] = STATE(205),
    [sym_list] = STATE(205),
    [sym_parenthesized_constructor] = STATE(205),
    [sym_context] = STATE(206),
    [sym_class] = STATE(207),
    [sym_variable_identifier] = STATE(208),
    [sym_constructor_identifier] = STATE(209),
    [sym__type_constructors] = STATE(200),
    [sym_qualified_type_constructor] = STATE(210),
    [anon_sym_LPAREN] = ACTIONS(389),
    [sym_unit_type] = ACTIONS(391),
    [sym_list_constructor] = ACTIONS(391),
    [sym_function_constructor] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(393),
    [sym__variable_pattern] = ACTIONS(395),
    [sym__constructor_pattern] = ACTIONS(397),
    [sym_module_identifier] = ACTIONS(399),
    [sym_comment] = ACTIONS(5),
  },
  [103] = {
    [sym__layout_semicolon] = ACTIONS(401),
    [anon_sym_SEMI] = ACTIONS(403),
    [sym_comment] = ACTIONS(5),
  },
  [104] = {
    [sym_declarations] = STATE(214),
    [sym__layout_open_brace] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(407),
    [sym_comment] = ACTIONS(5),
  },
  [105] = {
    [sym_export] = STATE(216),
    [sym__identifier] = STATE(217),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_RPAREN] = ACTIONS(409),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [106] = {
    [anon_sym_where] = ACTIONS(411),
    [sym_comment] = ACTIONS(5),
  },
  [107] = {
    [sym_import_specification] = STATE(220),
    [sym__layout_semicolon] = ACTIONS(413),
    [anon_sym_SEMI] = ACTIONS(415),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_as] = ACTIONS(417),
    [anon_sym_hiding] = ACTIONS(199),
    [sym_comment] = ACTIONS(5),
  },
  [108] = {
    [sym__identifier] = STATE(222),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_RPAREN] = ACTIONS(419),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [109] = {
    [sym_module_identifier] = ACTIONS(421),
    [sym_comment] = ACTIONS(5),
  },
  [110] = {
    [anon_sym_LPAREN] = ACTIONS(423),
    [sym_comment] = ACTIONS(5),
  },
  [111] = {
    [sym__layout_semicolon] = ACTIONS(413),
    [anon_sym_SEMI] = ACTIONS(415),
    [sym_comment] = ACTIONS(5),
  },
  [112] = {
    [anon_sym_unsafe] = ACTIONS(425),
    [anon_sym_safe] = ACTIONS(425),
    [sym__variable_pattern] = ACTIONS(427),
    [sym__constructor_pattern] = ACTIONS(427),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(425),
  },
  [113] = {
    [sym_safety] = STATE(227),
    [sym_type_signature] = STATE(228),
    [sym__identifier] = STATE(229),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym_string] = STATE(230),
    [anon_sym_unsafe] = ACTIONS(429),
    [anon_sym_safe] = ACTIONS(429),
    [sym__variable_pattern] = ACTIONS(227),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(431),
  },
  [114] = {
    [sym__layout_semicolon] = ACTIONS(433),
    [anon_sym_SEMI] = ACTIONS(435),
    [sym_comment] = ACTIONS(5),
  },
  [115] = {
    [aux_sym_export_repeat1] = STATE(233),
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(439),
    [sym_comment] = ACTIONS(5),
  },
  [116] = {
    [anon_sym_RBRACE] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_EQ] = ACTIONS(179),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(179),
    [sym_comment] = ACTIONS(5),
  },
  [117] = {
    [sym__layout_semicolon] = ACTIONS(441),
    [anon_sym_SEMI] = ACTIONS(443),
    [sym_comment] = ACTIONS(5),
  },
  [118] = {
    [sym__variable_pattern] = ACTIONS(87),
    [sym_comment] = ACTIONS(5),
  },
  [119] = {
    [sym__layout_semicolon] = ACTIONS(445),
    [anon_sym_SEMI] = ACTIONS(447),
    [sym_comment] = ACTIONS(5),
  },
  [120] = {
    [sym__layout_close_brace] = ACTIONS(449),
    [anon_sym_do] = ACTIONS(451),
    [sym__variable_pattern] = ACTIONS(453),
    [sym__constructor_pattern] = ACTIONS(453),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(453),
    [anon_sym_SQUOTE] = ACTIONS(451),
    [anon_sym_DQUOTE] = ACTIONS(451),
    [sym__integer_literal] = ACTIONS(451),
    [sym__octal_literal] = ACTIONS(451),
    [sym__hexidecimal_literal] = ACTIONS(451),
  },
  [121] = {
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(119),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(236),
    [sym__literal] = STATE(25),
    [sym_variable_identifier] = STATE(24),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [sym__layout_close_brace] = ACTIONS(455),
    [anon_sym_do] = ACTIONS(19),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(211),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [122] = {
    [sym__layout_semicolon] = ACTIONS(457),
    [anon_sym_SEMI] = ACTIONS(459),
    [sym_comment] = ACTIONS(5),
  },
  [123] = {
    [anon_sym_RBRACE] = ACTIONS(451),
    [anon_sym_do] = ACTIONS(451),
    [sym__variable_pattern] = ACTIONS(453),
    [sym__constructor_pattern] = ACTIONS(453),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(453),
    [anon_sym_SQUOTE] = ACTIONS(451),
    [anon_sym_DQUOTE] = ACTIONS(451),
    [sym__integer_literal] = ACTIONS(451),
    [sym__octal_literal] = ACTIONS(451),
    [sym__hexidecimal_literal] = ACTIONS(451),
  },
  [124] = {
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(122),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(238),
    [sym__literal] = STATE(25),
    [sym_variable_identifier] = STATE(24),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [anon_sym_RBRACE] = ACTIONS(461),
    [anon_sym_do] = ACTIONS(19),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(211),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [125] = {
    [aux_sym_context_repeat1] = STATE(241),
    [anon_sym_COMMA] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(465),
    [sym_comment] = ACTIONS(5),
  },
  [126] = {
    [sym_variable_identifier] = STATE(242),
    [anon_sym_LPAREN] = ACTIONS(225),
    [sym__variable_pattern] = ACTIONS(207),
    [sym_comment] = ACTIONS(5),
  },
  [127] = {
    [sym_variable_identifier] = STATE(244),
    [aux_sym_general_constructor_repeat1] = STATE(245),
    [anon_sym_where] = ACTIONS(467),
    [sym__variable_pattern] = ACTIONS(227),
    [sym_comment] = ACTIONS(5),
  },
  [128] = {
    [sym__constructor_pattern] = ACTIONS(469),
    [sym_comment] = ACTIONS(5),
  },
  [129] = {
    [sym_general_declarations] = STATE(248),
    [sym__layout_open_brace] = ACTIONS(471),
    [anon_sym_LBRACE] = ACTIONS(473),
    [sym_comment] = ACTIONS(5),
  },
  [130] = {
    [sym_variable_identifier] = STATE(164),
    [aux_sym_general_constructor_repeat1] = STATE(249),
    [sym__variable_pattern] = ACTIONS(273),
    [sym_comment] = ACTIONS(5),
  },
  [131] = {
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_EQ_GT] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
  },
  [132] = {
    [anon_sym_where] = ACTIONS(475),
    [anon_sym_EQ_GT] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [133] = {
    [sym_variable_identifier] = STATE(250),
    [anon_sym_where] = ACTIONS(467),
    [sym__variable_pattern] = ACTIONS(227),
    [sym_comment] = ACTIONS(5),
  },
  [134] = {
    [sym_variable_identifier] = STATE(244),
    [aux_sym_general_constructor_repeat1] = STATE(252),
    [anon_sym_where] = ACTIONS(481),
    [sym__variable_pattern] = ACTIONS(227),
    [sym_comment] = ACTIONS(5),
  },
  [135] = {
    [sym_general_declarations] = STATE(253),
    [sym__layout_open_brace] = ACTIONS(471),
    [anon_sym_LBRACE] = ACTIONS(473),
    [sym_comment] = ACTIONS(5),
  },
  [136] = {
    [sym_variable_identifier] = STATE(250),
    [anon_sym_where] = ACTIONS(481),
    [sym__variable_pattern] = ACTIONS(227),
    [sym_comment] = ACTIONS(5),
  },
  [137] = {
    [anon_sym_BQUOTE] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [138] = {
    [sym__layout_semicolon] = ACTIONS(485),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_DASH] = ACTIONS(487),
    [anon_sym_COLON] = ACTIONS(487),
    [anon_sym_BANG] = ACTIONS(487),
    [anon_sym_DOT] = ACTIONS(487),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(487),
    [anon_sym_DOLLAR] = ACTIONS(487),
    [anon_sym_PERCENT] = ACTIONS(487),
    [anon_sym_AMP] = ACTIONS(487),
    [anon_sym_1] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(487),
    [anon_sym_SLASH] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_QMARK] = ACTIONS(487),
    [anon_sym_CARET] = ACTIONS(487),
  },
  [139] = {
    [sym__layout_semicolon] = ACTIONS(489),
    [anon_sym_SEMI] = ACTIONS(491),
    [anon_sym_COMMA] = ACTIONS(491),
    [anon_sym_DASH] = ACTIONS(491),
    [anon_sym_COLON] = ACTIONS(491),
    [anon_sym_BANG] = ACTIONS(491),
    [anon_sym_DOT] = ACTIONS(491),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(491),
    [anon_sym_DOLLAR] = ACTIONS(491),
    [anon_sym_PERCENT] = ACTIONS(491),
    [anon_sym_AMP] = ACTIONS(491),
    [anon_sym_1] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_LT] = ACTIONS(491),
    [anon_sym_GT] = ACTIONS(491),
    [anon_sym_QMARK] = ACTIONS(491),
    [anon_sym_CARET] = ACTIONS(491),
  },
  [140] = {
    [sym__constructor_symbol] = STATE(255),
    [sym__layout_semicolon] = ACTIONS(493),
    [anon_sym_SEMI] = ACTIONS(495),
    [anon_sym_COMMA] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_COLON] = ACTIONS(239),
    [anon_sym_BANG] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(239),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(239),
    [anon_sym_DOLLAR] = ACTIONS(239),
    [anon_sym_PERCENT] = ACTIONS(239),
    [anon_sym_AMP] = ACTIONS(239),
    [anon_sym_1] = ACTIONS(239),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_SLASH] = ACTIONS(239),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_QMARK] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(239),
  },
  [141] = {
    [sym__op] = STATE(256),
    [sym_variable_symbol] = STATE(52),
    [sym_constructor_symbol] = STATE(52),
    [sym__variable_symbol] = STATE(54),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_1] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(65),
  },
  [142] = {
    [sym__layout_semicolon] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_COMMA] = ACTIONS(501),
    [sym_comment] = ACTIONS(5),
  },
  [143] = {
    [aux_sym_fixity_repeat1] = STATE(258),
    [sym__layout_semicolon] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_COMMA] = ACTIONS(245),
    [sym_comment] = ACTIONS(5),
  },
  [144] = {
    [sym__layout_semicolon] = ACTIONS(503),
    [anon_sym_SEMI] = ACTIONS(505),
    [anon_sym_COMMA] = ACTIONS(505),
    [anon_sym_DASH] = ACTIONS(505),
    [anon_sym_BANG] = ACTIONS(505),
    [anon_sym_DOT] = ACTIONS(505),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(505),
    [anon_sym_DOLLAR] = ACTIONS(505),
    [anon_sym_PERCENT] = ACTIONS(505),
    [anon_sym_AMP] = ACTIONS(505),
    [anon_sym_1] = ACTIONS(505),
    [anon_sym_PLUS] = ACTIONS(505),
    [anon_sym_SLASH] = ACTIONS(505),
    [anon_sym_LT] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_QMARK] = ACTIONS(505),
    [anon_sym_CARET] = ACTIONS(505),
  },
  [145] = {
    [sym__variable_symbol] = STATE(259),
    [sym__layout_semicolon] = ACTIONS(507),
    [anon_sym_SEMI] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(509),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_1] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(65),
  },
  [146] = {
    [sym_constructors] = STATE(261),
    [sym_constructor] = STATE(151),
    [sym_deriving] = STATE(262),
    [sym_constructor_identifier] = STATE(153),
    [sym__layout_semicolon] = ACTIONS(511),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_EQ] = ACTIONS(515),
    [anon_sym_deriving] = ACTIONS(261),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [147] = {
    [sym_variable_identifier] = STATE(264),
    [aux_sym_general_constructor_repeat1] = STATE(156),
    [sym__layout_semicolon] = ACTIONS(263),
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_deriving] = ACTIONS(265),
    [sym__variable_pattern] = ACTIONS(517),
    [sym__constructor_pattern] = ACTIONS(269),
    [sym_comment] = ACTIONS(5),
  },
  [148] = {
    [sym_constructors] = STATE(261),
    [sym_constructor] = STATE(151),
    [sym_deriving] = STATE(262),
    [sym_constructor_identifier] = STATE(153),
    [sym__layout_semicolon] = ACTIONS(511),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_deriving] = ACTIONS(261),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [149] = {
    [sym__identifier] = STATE(266),
    [sym_variable_identifier] = STATE(29),
    [sym_constructor_identifier] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(519),
    [sym__variable_pattern] = ACTIONS(395),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [150] = {
    [sym_deriving] = STATE(262),
    [sym__layout_semicolon] = ACTIONS(511),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_deriving] = ACTIONS(261),
    [sym_comment] = ACTIONS(5),
  },
  [151] = {
    [aux_sym_constructors_repeat1] = STATE(268),
    [sym__layout_semicolon] = ACTIONS(521),
    [anon_sym_SEMI] = ACTIONS(523),
    [anon_sym_PIPE] = ACTIONS(525),
    [anon_sym_deriving] = ACTIONS(523),
    [sym_comment] = ACTIONS(5),
  },
  [152] = {
    [sym__layout_semicolon] = ACTIONS(511),
    [anon_sym_SEMI] = ACTIONS(513),
    [sym_comment] = ACTIONS(5),
  },
  [153] = {
    [sym_strict] = STATE(271),
    [sym__identifier] = STATE(271),
    [sym_variable_identifier] = STATE(272),
    [sym_constructor_identifier] = STATE(272),
    [sym_fields] = STATE(273),
    [aux_sym_constructor_repeat1] = STATE(274),
    [sym__layout_semicolon] = ACTIONS(527),
    [anon_sym_SEMI] = ACTIONS(529),
    [anon_sym_LBRACE] = ACTIONS(531),
    [anon_sym_PIPE] = ACTIONS(529),
    [anon_sym_deriving] = ACTIONS(529),
    [anon_sym_BANG] = ACTIONS(533),
    [sym__variable_pattern] = ACTIONS(267),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [154] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_EQ_GT] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_deriving] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
  },
  [155] = {
    [sym__layout_semicolon] = ACTIONS(535),
    [anon_sym_SEMI] = ACTIONS(475),
    [anon_sym_EQ] = ACTIONS(475),
    [anon_sym_EQ_GT] = ACTIONS(477),
    [anon_sym_deriving] = ACTIONS(475),
    [sym__variable_pattern] = ACTIONS(479),
    [sym__constructor_pattern] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [156] = {
    [sym_variable_identifier] = STATE(275),
    [sym__layout_semicolon] = ACTIONS(537),
    [anon_sym_SEMI] = ACTIONS(539),
    [anon_sym_EQ] = ACTIONS(539),
    [anon_sym_deriving] = ACTIONS(539),
    [sym__variable_pattern] = ACTIONS(517),
    [sym__constructor_pattern] = ACTIONS(541),
    [sym_comment] = ACTIONS(5),
  },
  [157] = {
    [anon_sym_EQ] = ACTIONS(543),
    [sym_comment] = ACTIONS(5),
  },
  [158] = {
    [sym_new_constructor] = STATE(277),
    [sym_constructor_identifier] = STATE(278),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [159] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym_unit_type] = ACTIONS(79),
    [sym_list_constructor] = ACTIONS(79),
    [sym_function_constructor] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_EQ_GT] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym__constructor_pattern] = ACTIONS(81),
    [sym_module_identifier] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
  },
  [160] = {
    [anon_sym_EQ] = ACTIONS(475),
    [anon_sym_EQ_GT] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
  },
  [161] = {
    [sym_variable_identifier] = STATE(279),
    [anon_sym_EQ] = ACTIONS(539),
    [sym__variable_pattern] = ACTIONS(277),
    [sym_comment] = ACTIONS(5),
  },
  [162] = {
    [sym_type] = STATE(282),
    [sym__generic_type_constructor] = STATE(205),
    [sym_tupling_constructor] = STATE(200),
    [sym_tuple] = STATE(205),
    [sym_list] = STATE(205),
    [sym_parenthesized_constructor] = STATE(205),
    [sym_variable_identifier] = STATE(208),
    [sym__type_constructors] = STATE(200),
    [sym_qualified_type_constructor] = STATE(210),
    [anon_sym_LPAREN] = ACTIONS(545),
    [sym_unit_type] = ACTIONS(391),
    [sym_list_constructor] = ACTIONS(391),
    [sym_function_constructor] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(393),
    [sym__variable_pattern] = ACTIONS(395),
    [sym__constructor_pattern] = ACTIONS(547),
    [sym_module_identifier] = ACTIONS(399),
    [sym_comment] = ACTIONS(5),
  },
  [163] = {
    [anon_sym_EQ] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
  },
  [164] = {
    [anon_sym_LBRACE] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(475),
    [anon_sym_COMMA] = ACTIONS(475),
    [anon_sym_RPAREN] = ACTIONS(475),
    [anon_sym_EQ] = ACTIONS(475),
    [anon_sym_DASH_GT] = ACTIONS(475),
    [sym_unit_type] = ACTIONS(475),
    [sym_list_constructor] = ACTIONS(475),
    [sym_function_constructor] = ACTIONS(475),
    [anon_sym_LBRACK] = ACTIONS(475),
    [anon_sym_RBRACK] = ACTIONS(475),
    [sym__variable_pattern] = ACTIONS(475),
    [sym__constructor_pattern] = ACTIONS(479),
    [sym_module_identifier] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [165] = {
    [sym__layout_semicolon] = ACTIONS(549),
    [anon_sym_SEMI] = ACTIONS(551),
    [sym__variable_pattern] = ACTIONS(551),
    [sym__constructor_pattern] = ACTIONS(553),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(553),
    [anon_sym_SQUOTE] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(551),
    [sym__integer_literal] = ACTIONS(551),
    [sym__octal_literal] = ACTIONS(551),
    [sym__hexidecimal_literal] = ACTIONS(551),
  },
  [166] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(555),
  },
  [167] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(557),
  },
  [168] = {
    [sym__cntrl] = STATE(284),
    [anon_sym_AT] = ACTIONS(559),
    [anon_sym__] = ACTIONS(559),
    [anon_sym_LBRACK] = ACTIONS(559),
    [anon_sym_RBRACK] = ACTIONS(559),
    [sym_comment] = ACTIONS(101),
    [sym__ascii_large] = ACTIONS(559),
    [anon_sym_CARET] = ACTIONS(559),
    [anon_sym_BSLASH] = ACTIONS(559),
  },
  [169] = {
    [aux_sym__escape_repeat1] = STATE(286),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(561),
  },
  [170] = {
    [aux_sym__escape_repeat2] = STATE(288),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(563),
  },
  [171] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(565),
  },
  [172] = {
    [anon_sym_SEMI] = ACTIONS(567),
    [anon_sym_LBRACE] = ACTIONS(567),
    [anon_sym_RBRACE] = ACTIONS(567),
    [anon_sym_LPAREN] = ACTIONS(567),
    [anon_sym_RPAREN] = ACTIONS(567),
    [anon_sym_EQ] = ACTIONS(567),
    [anon_sym_DASH] = ACTIONS(567),
    [anon_sym_AT] = ACTIONS(567),
    [anon_sym_BQUOTE] = ACTIONS(567),
    [anon_sym__] = ACTIONS(567),
    [anon_sym_COLON] = ACTIONS(567),
    [anon_sym_LBRACK] = ACTIONS(567),
    [anon_sym_RBRACK] = ACTIONS(567),
    [anon_sym_PIPE] = ACTIONS(567),
    [anon_sym_BANG] = ACTIONS(567),
    [anon_sym_DOT] = ACTIONS(567),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(567),
    [anon_sym_DQUOTE] = ACTIONS(567),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(567),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(567),
    [sym__ascii_large] = ACTIONS(567),
    [anon_sym_POUND] = ACTIONS(567),
    [anon_sym_DOLLAR] = ACTIONS(567),
    [anon_sym_PERCENT] = ACTIONS(567),
    [anon_sym_AMP] = ACTIONS(567),
    [anon_sym_1] = ACTIONS(567),
    [anon_sym_PLUS] = ACTIONS(567),
    [anon_sym_SLASH] = ACTIONS(567),
    [anon_sym_LT] = ACTIONS(567),
    [anon_sym_GT] = ACTIONS(567),
    [anon_sym_QMARK] = ACTIONS(567),
    [anon_sym_CARET] = ACTIONS(567),
    [anon_sym_TILDE] = ACTIONS(567),
    [anon_sym_BSLASH] = ACTIONS(567),
    [sym__space] = ACTIONS(567),
    [sym__newline] = ACTIONS(567),
    [sym__tab] = ACTIONS(567),
    [sym__vertical_tab] = ACTIONS(567),
  },
  [173] = {
    [anon_sym_SEMI] = ACTIONS(569),
    [anon_sym_LBRACE] = ACTIONS(569),
    [anon_sym_RBRACE] = ACTIONS(569),
    [anon_sym_LPAREN] = ACTIONS(569),
    [anon_sym_RPAREN] = ACTIONS(569),
    [anon_sym_EQ] = ACTIONS(569),
    [anon_sym_DASH] = ACTIONS(569),
    [anon_sym_AT] = ACTIONS(569),
    [anon_sym_BQUOTE] = ACTIONS(569),
    [anon_sym__] = ACTIONS(569),
    [anon_sym_COLON] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [anon_sym_RBRACK] = ACTIONS(569),
    [anon_sym_PIPE] = ACTIONS(569),
    [anon_sym_BANG] = ACTIONS(569),
    [anon_sym_DOT] = ACTIONS(569),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(569),
    [anon_sym_DQUOTE] = ACTIONS(569),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(569),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(569),
    [sym__ascii_large] = ACTIONS(569),
    [anon_sym_POUND] = ACTIONS(569),
    [anon_sym_DOLLAR] = ACTIONS(569),
    [anon_sym_PERCENT] = ACTIONS(569),
    [anon_sym_AMP] = ACTIONS(569),
    [anon_sym_1] = ACTIONS(569),
    [anon_sym_PLUS] = ACTIONS(569),
    [anon_sym_SLASH] = ACTIONS(569),
    [anon_sym_LT] = ACTIONS(569),
    [anon_sym_GT] = ACTIONS(569),
    [anon_sym_QMARK] = ACTIONS(569),
    [anon_sym_CARET] = ACTIONS(569),
    [anon_sym_TILDE] = ACTIONS(569),
    [anon_sym_BSLASH] = ACTIONS(569),
    [sym__space] = ACTIONS(569),
    [sym__newline] = ACTIONS(569),
    [sym__tab] = ACTIONS(569),
    [sym__vertical_tab] = ACTIONS(569),
  },
  [174] = {
    [sym__cntrl] = STATE(290),
    [anon_sym_AT] = ACTIONS(571),
    [anon_sym__] = ACTIONS(571),
    [anon_sym_LBRACK] = ACTIONS(571),
    [anon_sym_RBRACK] = ACTIONS(571),
    [sym_comment] = ACTIONS(101),
    [sym__ascii_large] = ACTIONS(571),
    [anon_sym_CARET] = ACTIONS(571),
    [anon_sym_BSLASH] = ACTIONS(571),
  },
  [175] = {
    [aux_sym__escape_repeat1] = STATE(292),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(573),
  },
  [176] = {
    [aux_sym__escape_repeat2] = STATE(294),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(575),
  },
  [177] = {
    [anon_sym_SEMI] = ACTIONS(577),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_RBRACE] = ACTIONS(577),
    [anon_sym_LPAREN] = ACTIONS(577),
    [anon_sym_RPAREN] = ACTIONS(577),
    [anon_sym_EQ] = ACTIONS(577),
    [anon_sym_DASH] = ACTIONS(577),
    [anon_sym_AT] = ACTIONS(577),
    [anon_sym_BQUOTE] = ACTIONS(577),
    [anon_sym__] = ACTIONS(577),
    [anon_sym_COLON] = ACTIONS(577),
    [anon_sym_LBRACK] = ACTIONS(577),
    [anon_sym_RBRACK] = ACTIONS(577),
    [anon_sym_PIPE] = ACTIONS(577),
    [anon_sym_BANG] = ACTIONS(577),
    [anon_sym_DOT] = ACTIONS(577),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(577),
    [anon_sym_DQUOTE] = ACTIONS(577),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(577),
    [sym__ascii_large] = ACTIONS(577),
    [anon_sym_POUND] = ACTIONS(577),
    [anon_sym_DOLLAR] = ACTIONS(577),
    [anon_sym_PERCENT] = ACTIONS(577),
    [anon_sym_AMP] = ACTIONS(577),
    [anon_sym_1] = ACTIONS(577),
    [anon_sym_PLUS] = ACTIONS(577),
    [anon_sym_SLASH] = ACTIONS(577),
    [anon_sym_LT] = ACTIONS(577),
    [anon_sym_GT] = ACTIONS(577),
    [anon_sym_QMARK] = ACTIONS(577),
    [anon_sym_CARET] = ACTIONS(577),
    [anon_sym_TILDE] = ACTIONS(577),
    [anon_sym_BSLASH] = ACTIONS(577),
    [sym__space] = ACTIONS(577),
    [sym__newline] = ACTIONS(577),
    [sym__tab] = ACTIONS(577),
    [sym__vertical_tab] = ACTIONS(577),
  },
  [178] = {
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_LBRACE] = ACTIONS(579),
    [anon_sym_RBRACE] = ACTIONS(579),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_RPAREN] = ACTIONS(579),
    [anon_sym_EQ] = ACTIONS(579),
    [anon_sym_DASH] = ACTIONS(579),
    [anon_sym_AT] = ACTIONS(579),
    [anon_sym_BQUOTE] = ACTIONS(579),
    [anon_sym__] = ACTIONS(579),
    [anon_sym_COLON] = ACTIONS(579),
    [anon_sym_LBRACK] = ACTIONS(579),
    [anon_sym_RBRACK] = ACTIONS(579),
    [anon_sym_PIPE] = ACTIONS(579),
    [anon_sym_BANG] = ACTIONS(579),
    [anon_sym_DOT] = ACTIONS(579),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(579),
    [anon_sym_DQUOTE] = ACTIONS(579),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(579),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(579),
    [sym__ascii_large] = ACTIONS(579),
    [anon_sym_POUND] = ACTIONS(579),
    [anon_sym_DOLLAR] = ACTIONS(579),
    [anon_sym_PERCENT] = ACTIONS(579),
    [anon_sym_AMP] = ACTIONS(579),
    [anon_sym_1] = ACTIONS(579),
    [anon_sym_PLUS] = ACTIONS(579),
    [anon_sym_SLASH] = ACTIONS(579),
    [anon_sym_LT] = ACTIONS(579),
    [anon_sym_GT] = ACTIONS(579),
    [anon_sym_QMARK] = ACTIONS(579),
    [anon_sym_CARET] = ACTIONS(579),
    [anon_sym_TILDE] = ACTIONS(579),
    [anon_sym_BSLASH] = ACTIONS(579),
    [sym__space] = ACTIONS(579),
    [sym__newline] = ACTIONS(579),
    [sym__tab] = ACTIONS(579),
    [sym__vertical_tab] = ACTIONS(579),
  },
  [179] = {
    [sym__layout_semicolon] = ACTIONS(581),
    [anon_sym_SEMI] = ACTIONS(583),
    [sym__variable_pattern] = ACTIONS(583),
    [sym__constructor_pattern] = ACTIONS(585),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(585),
    [anon_sym_SQUOTE] = ACTIONS(583),
    [anon_sym_DQUOTE] = ACTIONS(583),
    [sym__integer_literal] = ACTIONS(583),
    [sym__octal_literal] = ACTIONS(583),
    [sym__hexidecimal_literal] = ACTIONS(583),
  },
  [180] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym__constructor_pattern] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym__integer_literal] = ACTIONS(79),
    [sym__octal_literal] = ACTIONS(79),
    [sym__hexidecimal_literal] = ACTIONS(79),
  },
  [181] = {
    [sym__layout_semicolon] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(85),
    [sym__constructor_pattern] = ACTIONS(219),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym__integer_literal] = ACTIONS(85),
    [sym__octal_literal] = ACTIONS(85),
    [sym__hexidecimal_literal] = ACTIONS(85),
  },
  [182] = {
    [sym__layout_semicolon] = ACTIONS(587),
    [anon_sym_SEMI] = ACTIONS(589),
    [sym__variable_pattern] = ACTIONS(589),
    [sym__constructor_pattern] = ACTIONS(591),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(591),
    [anon_sym_SQUOTE] = ACTIONS(589),
    [anon_sym_DQUOTE] = ACTIONS(589),
    [sym__integer_literal] = ACTIONS(589),
    [sym__octal_literal] = ACTIONS(589),
    [sym__hexidecimal_literal] = ACTIONS(589),
  },
  [183] = {
    [sym__literal] = STATE(295),
    [sym__identifier] = STATE(295),
    [sym_variable_identifier] = STATE(29),
    [sym_constructor_identifier] = STATE(29),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [sym__layout_semicolon] = ACTIONS(593),
    [anon_sym_SEMI] = ACTIONS(595),
    [sym__variable_pattern] = ACTIONS(355),
    [sym__constructor_pattern] = ACTIONS(357),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [184] = {
    [anon_sym_LPAREN] = ACTIONS(597),
    [sym_comment] = ACTIONS(5),
  },
  [185] = {
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_BQUOTE] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(85),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(85),
    [anon_sym_DOLLAR] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_QMARK] = ACTIONS(85),
    [anon_sym_CARET] = ACTIONS(85),
  },
  [186] = {
    [sym__op] = STATE(300),
    [sym_variable_symbol] = STATE(301),
    [sym_constructor_symbol] = STATE(301),
    [sym__variable_symbol] = STATE(302),
    [anon_sym_RPAREN] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(601),
    [anon_sym_BQUOTE] = ACTIONS(603),
    [anon_sym_COLON] = ACTIONS(605),
    [anon_sym_BANG] = ACTIONS(601),
    [anon_sym_DOT] = ACTIONS(601),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(601),
    [anon_sym_DOLLAR] = ACTIONS(601),
    [anon_sym_PERCENT] = ACTIONS(601),
    [anon_sym_AMP] = ACTIONS(601),
    [anon_sym_1] = ACTIONS(601),
    [anon_sym_PLUS] = ACTIONS(601),
    [anon_sym_SLASH] = ACTIONS(601),
    [anon_sym_LT] = ACTIONS(601),
    [anon_sym_GT] = ACTIONS(601),
    [anon_sym_QMARK] = ACTIONS(601),
    [anon_sym_CARET] = ACTIONS(601),
  },
  [187] = {
    [anon_sym_RPAREN] = ACTIONS(607),
    [sym_comment] = ACTIONS(5),
  },
  [188] = {
    [anon_sym_RPAREN] = ACTIONS(599),
    [sym_comment] = ACTIONS(5),
  },
  [189] = {
    [anon_sym_AT] = ACTIONS(609),
    [sym_comment] = ACTIONS(5),
  },
  [190] = {
    [sym_variable_identifier] = STATE(164),
    [aux_sym_general_constructor_repeat1] = STATE(305),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_BANG] = ACTIONS(179),
    [sym__variable_pattern] = ACTIONS(273),
    [anon_sym_DOT] = ACTIONS(179),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(179),
    [anon_sym_PERCENT] = ACTIONS(179),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_1] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_QMARK] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(179),
  },
  [191] = {
    [anon_sym_AT] = ACTIONS(281),
    [sym_comment] = ACTIONS(5),
  },
  [192] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(611),
  },
  [193] = {
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_LPAREN] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(319),
    [anon_sym_EQ] = ACTIONS(319),
    [anon_sym_DASH] = ACTIONS(319),
    [anon_sym_BQUOTE] = ACTIONS(319),
    [anon_sym__] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(319),
    [anon_sym_BANG] = ACTIONS(319),
    [sym__variable_pattern] = ACTIONS(321),
    [sym__constructor_pattern] = ACTIONS(321),
    [anon_sym_DOT] = ACTIONS(319),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(319),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [anon_sym_POUND] = ACTIONS(319),
    [anon_sym_DOLLAR] = ACTIONS(319),
    [anon_sym_PERCENT] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(319),
    [anon_sym_1] = ACTIONS(319),
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_SLASH] = ACTIONS(319),
    [anon_sym_LT] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(319),
    [anon_sym_QMARK] = ACTIONS(319),
    [anon_sym_CARET] = ACTIONS(319),
    [sym__integer_literal] = ACTIONS(319),
    [sym__octal_literal] = ACTIONS(319),
    [sym__hexidecimal_literal] = ACTIONS(319),
  },
  [194] = {
    [sym__gap] = STATE(178),
    [sym__graphic] = STATE(178),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(178),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(613),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(115),
    [sym__ascii_large] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(113),
    [anon_sym_1] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(125),
    [sym__space] = ACTIONS(127),
    [sym__newline] = ACTIONS(127),
    [sym__tab] = ACTIONS(127),
    [sym__vertical_tab] = ACTIONS(127),
  },
  [195] = {
    [sym__function_pattern] = STATE(308),
    [sym_parenthesized_pattern] = STATE(94),
    [sym_as_pattern] = STATE(94),
    [sym_wildcard] = STATE(94),
    [sym__variable] = STATE(95),
    [sym_qualified_variable_identifier] = STATE(96),
    [sym__literal] = STATE(94),
    [sym__identifier] = STATE(97),
    [sym_simple_type] = STATE(98),
    [sym_variable_identifier] = STATE(99),
    [sym_constructor_identifier] = STATE(100),
    [sym_integer] = STATE(90),
    [sym_char] = STATE(90),
    [sym_string] = STATE(90),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym__] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(157),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [196] = {
    [sym_labels] = STATE(310),
    [sym_label] = STATE(311),
    [sym__identifier] = STATE(312),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_RBRACE] = ACTIONS(615),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [197] = {
    [sym_variable_identifier] = STATE(279),
    [anon_sym_LBRACE] = ACTIONS(539),
    [sym__variable_pattern] = ACTIONS(273),
    [sym_comment] = ACTIONS(5),
  },
  [198] = {
    [anon_sym_LPAREN] = ACTIONS(617),
    [anon_sym_EQ] = ACTIONS(617),
    [anon_sym__] = ACTIONS(617),
    [sym__variable_pattern] = ACTIONS(619),
    [sym__constructor_pattern] = ACTIONS(619),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(619),
    [anon_sym_SQUOTE] = ACTIONS(617),
    [anon_sym_DQUOTE] = ACTIONS(617),
    [sym__integer_literal] = ACTIONS(617),
    [sym__octal_literal] = ACTIONS(617),
    [sym__hexidecimal_literal] = ACTIONS(617),
  },
  [199] = {
    [sym_type] = STATE(319),
    [sym__generic_type_constructor] = STATE(320),
    [sym_tupling_constructor] = STATE(315),
    [sym_tuple] = STATE(320),
    [sym_list] = STATE(320),
    [sym_parenthesized_constructor] = STATE(320),
    [sym_class] = STATE(321),
    [sym_variable_identifier] = STATE(322),
    [sym_constructor_identifier] = STATE(126),
    [sym__type_constructors] = STATE(315),
    [sym_qualified_type_constructor] = STATE(323),
    [anon_sym_LPAREN] = ACTIONS(621),
    [anon_sym_COMMA] = ACTIONS(623),
    [sym_unit_type] = ACTIONS(625),
    [sym_list_constructor] = ACTIONS(625),
    [sym_function_constructor] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(627),
    [sym__variable_pattern] = ACTIONS(629),
    [sym__constructor_pattern] = ACTIONS(631),
    [sym_module_identifier] = ACTIONS(633),
    [sym_comment] = ACTIONS(5),
  },
  [200] = {
    [sym__layout_semicolon] = ACTIONS(635),
    [anon_sym_SEMI] = ACTIONS(637),
    [anon_sym_DASH_GT] = ACTIONS(637),
    [sym_comment] = ACTIONS(5),
  },
  [201] = {
    [sym_type] = STATE(326),
    [sym__generic_type_constructor] = STATE(327),
    [sym_tupling_constructor] = STATE(315),
    [sym_tuple] = STATE(327),
    [sym_list] = STATE(327),
    [sym_parenthesized_constructor] = STATE(327),
    [sym_variable_identifier] = STATE(328),
    [sym__type_constructors] = STATE(315),
    [sym_qualified_type_constructor] = STATE(323),
    [aux_sym_list_repeat1] = STATE(329),
    [anon_sym_LPAREN] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(625),
    [sym_list_constructor] = ACTIONS(625),
    [sym_function_constructor] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(627),
    [sym__variable_pattern] = ACTIONS(273),
    [sym__constructor_pattern] = ACTIONS(639),
    [sym_module_identifier] = ACTIONS(641),
    [sym_comment] = ACTIONS(5),
  },
  [202] = {
    [sym_variable_identifier] = STATE(330),
    [aux_sym_general_constructor_repeat1] = STATE(331),
    [sym__layout_semicolon] = ACTIONS(643),
    [anon_sym_SEMI] = ACTIONS(645),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(645),
    [sym__variable_pattern] = ACTIONS(85),
    [sym_comment] = ACTIONS(5),
  },
  [203] = {
    [sym_constructor_identifier] = STATE(333),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(334),
    [sym__constructor_pattern] = ACTIONS(357),
    [anon_sym_DOT] = ACTIONS(647),
    [sym_comment] = ACTIONS(5),
  },
  [204] = {
    [sym__layout_semicolon] = ACTIONS(649),
    [anon_sym_SEMI] = ACTIONS(651),
    [sym_comment] = ACTIONS(5),
  },
  [205] = {
    [sym__layout_semicolon] = ACTIONS(653),
    [anon_sym_SEMI] = ACTIONS(655),
    [anon_sym_DASH_GT] = ACTIONS(657),
    [sym_comment] = ACTIONS(5),
  },
  [206] = {
    [sym_type] = STATE(336),
    [sym__generic_type_constructor] = STATE(205),
    [sym_tupling_constructor] = STATE(200),
    [sym_tuple] = STATE(205),
    [sym_list] = STATE(205),
    [sym_parenthesized_constructor] = STATE(205),
    [sym_variable_identifier] = STATE(208),
    [sym__type_constructors] = STATE(200),
    [sym_qualified_type_constructor] = STATE(210),
    [anon_sym_LPAREN] = ACTIONS(545),
    [sym_unit_type] = ACTIONS(391),
    [sym_list_constructor] = ACTIONS(391),
    [sym_function_constructor] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(393),
    [sym__variable_pattern] = ACTIONS(395),
    [sym__constructor_pattern] = ACTIONS(547),
    [sym_module_identifier] = ACTIONS(399),
    [sym_comment] = ACTIONS(5),
  },
  [207] = {
    [anon_sym_EQ_GT] = ACTIONS(659),
    [sym_comment] = ACTIONS(5),
  },
  [208] = {
    [sym__layout_semicolon] = ACTIONS(661),
    [anon_sym_SEMI] = ACTIONS(663),
    [anon_sym_DASH_GT] = ACTIONS(665),
    [sym_comment] = ACTIONS(5),
  },
  [209] = {
    [sym_variable_identifier] = STATE(242),
    [anon_sym_LPAREN] = ACTIONS(225),
    [sym__variable_pattern] = ACTIONS(629),
    [sym_comment] = ACTIONS(5),
  },
  [210] = {
    [sym__layout_semicolon] = ACTIONS(667),
    [anon_sym_SEMI] = ACTIONS(669),
    [anon_sym_DASH_GT] = ACTIONS(669),
    [sym_comment] = ACTIONS(5),
  },
  [211] = {
    [ts_builtin_sym_end] = ACTIONS(671),
    [anon_sym_RBRACE] = ACTIONS(673),
    [anon_sym_import] = ACTIONS(673),
    [anon_sym_foreign] = ACTIONS(673),
    [anon_sym_default] = ACTIONS(673),
    [anon_sym_do] = ACTIONS(673),
    [anon_sym_class] = ACTIONS(673),
    [anon_sym_instance] = ACTIONS(673),
    [anon_sym_infixl] = ACTIONS(673),
    [anon_sym_infixr] = ACTIONS(673),
    [anon_sym_infix] = ACTIONS(673),
    [anon_sym_data] = ACTIONS(673),
    [anon_sym_newtype] = ACTIONS(673),
    [anon_sym_type] = ACTIONS(673),
    [sym__variable_pattern] = ACTIONS(675),
    [sym__constructor_pattern] = ACTIONS(675),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(675),
    [anon_sym_SQUOTE] = ACTIONS(673),
    [anon_sym_DQUOTE] = ACTIONS(673),
    [sym__integer_literal] = ACTIONS(673),
    [sym__octal_literal] = ACTIONS(673),
    [sym__hexidecimal_literal] = ACTIONS(673),
  },
  [212] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(340),
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
    [aux_sym_module_repeat1] = STATE(341),
    [sym__layout_close_brace] = ACTIONS(677),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_class] = ACTIONS(21),
    [anon_sym_instance] = ACTIONS(23),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_newtype] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(31),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(35),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [213] = {
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
    [aux_sym_module_repeat1] = STATE(342),
    [anon_sym_RBRACE] = ACTIONS(679),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_class] = ACTIONS(21),
    [anon_sym_instance] = ACTIONS(23),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_newtype] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(31),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(35),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [214] = {
    [ts_builtin_sym_end] = ACTIONS(681),
    [sym_comment] = ACTIONS(5),
  },
  [215] = {
    [anon_sym_where] = ACTIONS(683),
    [sym_comment] = ACTIONS(5),
  },
  [216] = {
    [aux_sym_module_exports_repeat1] = STATE(345),
    [anon_sym_COMMA] = ACTIONS(685),
    [anon_sym_RPAREN] = ACTIONS(687),
    [sym_comment] = ACTIONS(5),
  },
  [217] = {
    [anon_sym_LPAREN] = ACTIONS(689),
    [anon_sym_COMMA] = ACTIONS(691),
    [anon_sym_RPAREN] = ACTIONS(691),
    [sym_comment] = ACTIONS(5),
  },
  [218] = {
    [sym_declarations] = STATE(347),
    [sym__layout_open_brace] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(407),
    [sym_comment] = ACTIONS(5),
  },
  [219] = {
    [sym_module_identifier] = ACTIONS(693),
    [sym_comment] = ACTIONS(5),
  },
  [220] = {
    [sym__layout_semicolon] = ACTIONS(695),
    [anon_sym_SEMI] = ACTIONS(697),
    [sym_comment] = ACTIONS(5),
  },
  [221] = {
    [sym__layout_semicolon] = ACTIONS(699),
    [anon_sym_SEMI] = ACTIONS(701),
    [sym_comment] = ACTIONS(5),
  },
  [222] = {
    [aux_sym_import_specification_repeat1] = STATE(352),
    [anon_sym_LPAREN] = ACTIONS(703),
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_RPAREN] = ACTIONS(707),
    [sym_comment] = ACTIONS(5),
  },
  [223] = {
    [sym_import_specification] = STATE(353),
    [sym__layout_semicolon] = ACTIONS(695),
    [anon_sym_SEMI] = ACTIONS(697),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_hiding] = ACTIONS(199),
    [sym_comment] = ACTIONS(5),
  },
  [224] = {
    [sym__identifier] = STATE(354),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_RPAREN] = ACTIONS(707),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [225] = {
    [sym__variable_pattern] = ACTIONS(709),
    [sym__constructor_pattern] = ACTIONS(711),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(709),
  },
  [226] = {
    [sym__gap] = STATE(76),
    [sym__graphic] = STATE(76),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(76),
    [aux_sym_string_repeat1] = STATE(356),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(713),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(115),
    [sym__ascii_large] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(113),
    [anon_sym_1] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(125),
    [sym__space] = ACTIONS(127),
    [sym__newline] = ACTIONS(127),
    [sym__tab] = ACTIONS(127),
    [sym__vertical_tab] = ACTIONS(127),
  },
  [227] = {
    [sym_type_signature] = STATE(357),
    [sym__identifier] = STATE(229),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym_string] = STATE(358),
    [sym__variable_pattern] = ACTIONS(629),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(431),
  },
  [228] = {
    [sym__layout_semicolon] = ACTIONS(715),
    [anon_sym_SEMI] = ACTIONS(717),
    [sym_comment] = ACTIONS(5),
  },
  [229] = {
    [anon_sym_COLON_COLON] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
  },
  [230] = {
    [sym_type_signature] = STATE(357),
    [sym__identifier] = STATE(229),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(629),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [231] = {
    [sym__identifier] = STATE(359),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [232] = {
    [sym__layout_semicolon] = ACTIONS(719),
    [anon_sym_SEMI] = ACTIONS(721),
    [sym_comment] = ACTIONS(5),
  },
  [233] = {
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_RPAREN] = ACTIONS(725),
    [sym_comment] = ACTIONS(5),
  },
  [234] = {
    [sym__layout_close_brace] = ACTIONS(727),
    [anon_sym_do] = ACTIONS(729),
    [sym__variable_pattern] = ACTIONS(731),
    [sym__constructor_pattern] = ACTIONS(731),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(731),
    [anon_sym_SQUOTE] = ACTIONS(729),
    [anon_sym_DQUOTE] = ACTIONS(729),
    [sym__integer_literal] = ACTIONS(729),
    [sym__octal_literal] = ACTIONS(729),
    [sym__hexidecimal_literal] = ACTIONS(729),
  },
  [235] = {
    [sym__layout_semicolon] = ACTIONS(733),
    [anon_sym_SEMI] = ACTIONS(735),
    [sym_comment] = ACTIONS(5),
  },
  [236] = {
    [sym__layout_close_brace] = ACTIONS(737),
    [anon_sym_do] = ACTIONS(739),
    [sym__variable_pattern] = ACTIONS(741),
    [sym__constructor_pattern] = ACTIONS(741),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(741),
    [anon_sym_SQUOTE] = ACTIONS(739),
    [anon_sym_DQUOTE] = ACTIONS(739),
    [sym__integer_literal] = ACTIONS(739),
    [sym__octal_literal] = ACTIONS(739),
    [sym__hexidecimal_literal] = ACTIONS(739),
  },
  [237] = {
    [anon_sym_RBRACE] = ACTIONS(729),
    [anon_sym_do] = ACTIONS(729),
    [sym__variable_pattern] = ACTIONS(731),
    [sym__constructor_pattern] = ACTIONS(731),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(731),
    [anon_sym_SQUOTE] = ACTIONS(729),
    [anon_sym_DQUOTE] = ACTIONS(729),
    [sym__integer_literal] = ACTIONS(729),
    [sym__octal_literal] = ACTIONS(729),
    [sym__hexidecimal_literal] = ACTIONS(729),
  },
  [238] = {
    [anon_sym_RBRACE] = ACTIONS(739),
    [anon_sym_do] = ACTIONS(739),
    [sym__variable_pattern] = ACTIONS(741),
    [sym__constructor_pattern] = ACTIONS(741),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(741),
    [anon_sym_SQUOTE] = ACTIONS(739),
    [anon_sym_DQUOTE] = ACTIONS(739),
    [sym__integer_literal] = ACTIONS(739),
    [sym__octal_literal] = ACTIONS(739),
    [sym__hexidecimal_literal] = ACTIONS(739),
  },
  [239] = {
    [sym_class] = STATE(362),
    [sym_constructor_identifier] = STATE(126),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [240] = {
    [anon_sym_EQ_GT] = ACTIONS(743),
    [sym_comment] = ACTIONS(5),
  },
  [241] = {
    [anon_sym_COMMA] = ACTIONS(745),
    [anon_sym_RPAREN] = ACTIONS(747),
    [sym_comment] = ACTIONS(5),
  },
  [242] = {
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_EQ_GT] = ACTIONS(477),
    [sym_comment] = ACTIONS(5),
  },
  [243] = {
    [sym_general_declarations] = STATE(366),
    [sym__layout_open_brace] = ACTIONS(471),
    [anon_sym_LBRACE] = ACTIONS(473),
    [sym_comment] = ACTIONS(5),
  },
  [244] = {
    [anon_sym_where] = ACTIONS(475),
    [sym__variable_pattern] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [245] = {
    [sym_variable_identifier] = STATE(250),
    [anon_sym_where] = ACTIONS(749),
    [sym__variable_pattern] = ACTIONS(227),
    [sym_comment] = ACTIONS(5),
  },
  [246] = {
    [sym__general_declaration] = STATE(369),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(229),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [aux_sym_general_declarations_repeat1] = STATE(370),
    [sym__layout_close_brace] = ACTIONS(751),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [sym__variable_pattern] = ACTIONS(227),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [247] = {
    [sym__general_declaration] = STATE(371),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(229),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [aux_sym_general_declarations_repeat1] = STATE(372),
    [anon_sym_RBRACE] = ACTIONS(753),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [sym__variable_pattern] = ACTIONS(227),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [248] = {
    [sym__layout_semicolon] = ACTIONS(755),
    [anon_sym_SEMI] = ACTIONS(757),
    [sym_comment] = ACTIONS(5),
  },
  [249] = {
    [sym_variable_identifier] = STATE(279),
    [anon_sym_RPAREN] = ACTIONS(759),
    [sym__variable_pattern] = ACTIONS(273),
    [sym_comment] = ACTIONS(5),
  },
  [250] = {
    [anon_sym_where] = ACTIONS(761),
    [sym__variable_pattern] = ACTIONS(763),
    [sym_comment] = ACTIONS(5),
  },
  [251] = {
    [sym_general_declarations] = STATE(374),
    [sym__layout_open_brace] = ACTIONS(471),
    [anon_sym_LBRACE] = ACTIONS(473),
    [sym_comment] = ACTIONS(5),
  },
  [252] = {
    [sym_variable_identifier] = STATE(250),
    [anon_sym_where] = ACTIONS(765),
    [sym__variable_pattern] = ACTIONS(227),
    [sym_comment] = ACTIONS(5),
  },
  [253] = {
    [sym__layout_semicolon] = ACTIONS(767),
    [anon_sym_SEMI] = ACTIONS(769),
    [sym_comment] = ACTIONS(5),
  },
  [254] = {
    [sym__layout_semicolon] = ACTIONS(771),
    [anon_sym_SEMI] = ACTIONS(773),
    [anon_sym_COMMA] = ACTIONS(773),
    [sym_comment] = ACTIONS(5),
  },
  [255] = {
    [sym__layout_semicolon] = ACTIONS(775),
    [anon_sym_SEMI] = ACTIONS(777),
    [anon_sym_COMMA] = ACTIONS(777),
    [anon_sym_DASH] = ACTIONS(777),
    [anon_sym_COLON] = ACTIONS(777),
    [anon_sym_BANG] = ACTIONS(777),
    [anon_sym_DOT] = ACTIONS(777),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(777),
    [anon_sym_DOLLAR] = ACTIONS(777),
    [anon_sym_PERCENT] = ACTIONS(777),
    [anon_sym_AMP] = ACTIONS(777),
    [anon_sym_1] = ACTIONS(777),
    [anon_sym_PLUS] = ACTIONS(777),
    [anon_sym_SLASH] = ACTIONS(777),
    [anon_sym_LT] = ACTIONS(777),
    [anon_sym_GT] = ACTIONS(777),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_CARET] = ACTIONS(777),
  },
  [256] = {
    [sym__layout_semicolon] = ACTIONS(779),
    [anon_sym_SEMI] = ACTIONS(781),
    [anon_sym_COMMA] = ACTIONS(781),
    [sym_comment] = ACTIONS(5),
  },
  [257] = {
    [sym__op] = STATE(376),
    [sym_variable_symbol] = STATE(52),
    [sym_constructor_symbol] = STATE(52),
    [sym__variable_symbol] = STATE(54),
    [anon_sym_DASH] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(65),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(65),
    [anon_sym_AMP] = ACTIONS(65),
    [anon_sym_1] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_QMARK] = ACTIONS(65),
    [anon_sym_CARET] = ACTIONS(65),
  },
  [258] = {
    [sym__layout_semicolon] = ACTIONS(783),
    [anon_sym_SEMI] = ACTIONS(785),
    [anon_sym_COMMA] = ACTIONS(501),
    [sym_comment] = ACTIONS(5),
  },
  [259] = {
    [sym__layout_semicolon] = ACTIONS(787),
    [anon_sym_SEMI] = ACTIONS(789),
    [anon_sym_COMMA] = ACTIONS(789),
    [anon_sym_DASH] = ACTIONS(789),
    [anon_sym_BANG] = ACTIONS(789),
    [anon_sym_DOT] = ACTIONS(789),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(789),
    [anon_sym_DOLLAR] = ACTIONS(789),
    [anon_sym_PERCENT] = ACTIONS(789),
    [anon_sym_AMP] = ACTIONS(789),
    [anon_sym_1] = ACTIONS(789),
    [anon_sym_PLUS] = ACTIONS(789),
    [anon_sym_SLASH] = ACTIONS(789),
    [anon_sym_LT] = ACTIONS(789),
    [anon_sym_GT] = ACTIONS(789),
    [anon_sym_QMARK] = ACTIONS(789),
    [anon_sym_CARET] = ACTIONS(789),
  },
  [260] = {
    [sym_constructors] = STATE(377),
    [sym_constructor] = STATE(151),
    [sym_deriving] = STATE(378),
    [sym_constructor_identifier] = STATE(153),
    [sym__layout_semicolon] = ACTIONS(791),
    [anon_sym_SEMI] = ACTIONS(793),
    [anon_sym_deriving] = ACTIONS(261),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [261] = {
    [sym_deriving] = STATE(378),
    [sym__layout_semicolon] = ACTIONS(791),
    [anon_sym_SEMI] = ACTIONS(793),
    [anon_sym_deriving] = ACTIONS(261),
    [sym_comment] = ACTIONS(5),
  },
  [262] = {
    [sym__layout_semicolon] = ACTIONS(791),
    [anon_sym_SEMI] = ACTIONS(793),
    [sym_comment] = ACTIONS(5),
  },
  [263] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_deriving] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
  },
  [264] = {
    [sym__layout_semicolon] = ACTIONS(535),
    [anon_sym_SEMI] = ACTIONS(475),
    [anon_sym_EQ] = ACTIONS(475),
    [anon_sym_deriving] = ACTIONS(475),
    [sym__variable_pattern] = ACTIONS(479),
    [sym__constructor_pattern] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [265] = {
    [sym__identifier] = STATE(379),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [266] = {
    [sym__layout_semicolon] = ACTIONS(795),
    [anon_sym_SEMI] = ACTIONS(797),
    [sym_comment] = ACTIONS(5),
  },
  [267] = {
    [sym_constructor] = STATE(380),
    [sym_constructor_identifier] = STATE(153),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [268] = {
    [sym__layout_semicolon] = ACTIONS(799),
    [anon_sym_SEMI] = ACTIONS(801),
    [anon_sym_PIPE] = ACTIONS(803),
    [anon_sym_deriving] = ACTIONS(801),
    [sym_comment] = ACTIONS(5),
  },
  [269] = {
    [sym_field] = STATE(382),
    [sym_variable_identifier] = STATE(383),
    [sym__variable_pattern] = ACTIONS(629),
    [sym_comment] = ACTIONS(5),
  },
  [270] = {
    [sym__identifier] = STATE(384),
    [sym_variable_identifier] = STATE(272),
    [sym_constructor_identifier] = STATE(272),
    [sym__variable_pattern] = ACTIONS(805),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [271] = {
    [sym__layout_semicolon] = ACTIONS(807),
    [anon_sym_SEMI] = ACTIONS(809),
    [anon_sym_PIPE] = ACTIONS(809),
    [anon_sym_deriving] = ACTIONS(809),
    [anon_sym_BANG] = ACTIONS(809),
    [sym__variable_pattern] = ACTIONS(811),
    [sym__constructor_pattern] = ACTIONS(811),
    [sym_comment] = ACTIONS(5),
  },
  [272] = {
    [sym__layout_semicolon] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_deriving] = ACTIONS(179),
    [anon_sym_BANG] = ACTIONS(179),
    [sym__variable_pattern] = ACTIONS(181),
    [sym__constructor_pattern] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
  },
  [273] = {
    [sym__layout_semicolon] = ACTIONS(813),
    [anon_sym_SEMI] = ACTIONS(815),
    [anon_sym_PIPE] = ACTIONS(815),
    [anon_sym_deriving] = ACTIONS(815),
    [sym_comment] = ACTIONS(5),
  },
  [274] = {
    [sym_strict] = STATE(385),
    [sym__identifier] = STATE(385),
    [sym_variable_identifier] = STATE(272),
    [sym_constructor_identifier] = STATE(272),
    [sym__layout_semicolon] = ACTIONS(813),
    [anon_sym_SEMI] = ACTIONS(815),
    [anon_sym_PIPE] = ACTIONS(815),
    [anon_sym_deriving] = ACTIONS(815),
    [anon_sym_BANG] = ACTIONS(533),
    [sym__variable_pattern] = ACTIONS(267),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [275] = {
    [sym__layout_semicolon] = ACTIONS(817),
    [anon_sym_SEMI] = ACTIONS(761),
    [anon_sym_EQ] = ACTIONS(761),
    [anon_sym_deriving] = ACTIONS(761),
    [sym__variable_pattern] = ACTIONS(763),
    [sym__constructor_pattern] = ACTIONS(763),
    [sym_comment] = ACTIONS(5),
  },
  [276] = {
    [sym_new_constructor] = STATE(386),
    [sym_constructor_identifier] = STATE(278),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [277] = {
    [sym_deriving] = STATE(387),
    [sym__layout_semicolon] = ACTIONS(819),
    [anon_sym_SEMI] = ACTIONS(821),
    [anon_sym_deriving] = ACTIONS(261),
    [sym_comment] = ACTIONS(5),
  },
  [278] = {
    [sym__identifier] = STATE(388),
    [sym_variable_identifier] = STATE(272),
    [sym_constructor_identifier] = STATE(272),
    [sym_fields] = STATE(388),
    [anon_sym_LBRACE] = ACTIONS(531),
    [sym__variable_pattern] = ACTIONS(805),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [279] = {
    [anon_sym_LBRACE] = ACTIONS(761),
    [anon_sym_LPAREN] = ACTIONS(761),
    [anon_sym_COMMA] = ACTIONS(761),
    [anon_sym_RPAREN] = ACTIONS(761),
    [anon_sym_EQ] = ACTIONS(761),
    [anon_sym_DASH_GT] = ACTIONS(761),
    [sym_unit_type] = ACTIONS(761),
    [sym_list_constructor] = ACTIONS(761),
    [sym_function_constructor] = ACTIONS(761),
    [anon_sym_LBRACK] = ACTIONS(761),
    [anon_sym_RBRACK] = ACTIONS(761),
    [sym__variable_pattern] = ACTIONS(761),
    [sym__constructor_pattern] = ACTIONS(763),
    [sym_module_identifier] = ACTIONS(763),
    [sym_comment] = ACTIONS(5),
  },
  [280] = {
    [sym_type] = STATE(319),
    [sym__generic_type_constructor] = STATE(320),
    [sym_tupling_constructor] = STATE(315),
    [sym_tuple] = STATE(320),
    [sym_list] = STATE(320),
    [sym_parenthesized_constructor] = STATE(320),
    [sym_variable_identifier] = STATE(322),
    [sym__type_constructors] = STATE(315),
    [sym_qualified_type_constructor] = STATE(323),
    [anon_sym_LPAREN] = ACTIONS(621),
    [anon_sym_COMMA] = ACTIONS(623),
    [sym_unit_type] = ACTIONS(625),
    [sym_list_constructor] = ACTIONS(625),
    [sym_function_constructor] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(627),
    [sym__variable_pattern] = ACTIONS(629),
    [sym__constructor_pattern] = ACTIONS(639),
    [sym_module_identifier] = ACTIONS(633),
    [sym_comment] = ACTIONS(5),
  },
  [281] = {
    [sym_variable_identifier] = STATE(330),
    [aux_sym_general_constructor_repeat1] = STATE(331),
    [sym__layout_semicolon] = ACTIONS(643),
    [anon_sym_SEMI] = ACTIONS(645),
    [anon_sym_DASH_GT] = ACTIONS(645),
    [sym__variable_pattern] = ACTIONS(355),
    [sym_comment] = ACTIONS(5),
  },
  [282] = {
    [sym__layout_semicolon] = ACTIONS(823),
    [anon_sym_SEMI] = ACTIONS(825),
    [sym_comment] = ACTIONS(5),
  },
  [283] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(827),
  },
  [284] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(829),
  },
  [285] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(831),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(831),
  },
  [286] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(833),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(835),
  },
  [287] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(837),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(837),
  },
  [288] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(833),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(839),
  },
  [289] = {
    [anon_sym_SEMI] = ACTIONS(841),
    [anon_sym_LBRACE] = ACTIONS(841),
    [anon_sym_RBRACE] = ACTIONS(841),
    [anon_sym_LPAREN] = ACTIONS(841),
    [anon_sym_RPAREN] = ACTIONS(841),
    [anon_sym_EQ] = ACTIONS(841),
    [anon_sym_DASH] = ACTIONS(841),
    [anon_sym_AT] = ACTIONS(841),
    [anon_sym_BQUOTE] = ACTIONS(841),
    [anon_sym__] = ACTIONS(841),
    [anon_sym_COLON] = ACTIONS(841),
    [anon_sym_LBRACK] = ACTIONS(841),
    [anon_sym_RBRACK] = ACTIONS(841),
    [anon_sym_PIPE] = ACTIONS(841),
    [anon_sym_BANG] = ACTIONS(841),
    [anon_sym_DOT] = ACTIONS(841),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [anon_sym_DQUOTE] = ACTIONS(841),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(841),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(841),
    [sym__ascii_large] = ACTIONS(841),
    [anon_sym_POUND] = ACTIONS(841),
    [anon_sym_DOLLAR] = ACTIONS(841),
    [anon_sym_PERCENT] = ACTIONS(841),
    [anon_sym_AMP] = ACTIONS(841),
    [anon_sym_1] = ACTIONS(841),
    [anon_sym_PLUS] = ACTIONS(841),
    [anon_sym_SLASH] = ACTIONS(841),
    [anon_sym_LT] = ACTIONS(841),
    [anon_sym_GT] = ACTIONS(841),
    [anon_sym_QMARK] = ACTIONS(841),
    [anon_sym_CARET] = ACTIONS(841),
    [anon_sym_TILDE] = ACTIONS(841),
    [anon_sym_BSLASH] = ACTIONS(841),
    [sym__space] = ACTIONS(841),
    [sym__newline] = ACTIONS(841),
    [sym__tab] = ACTIONS(841),
    [sym__vertical_tab] = ACTIONS(841),
  },
  [290] = {
    [anon_sym_SEMI] = ACTIONS(843),
    [anon_sym_LBRACE] = ACTIONS(843),
    [anon_sym_RBRACE] = ACTIONS(843),
    [anon_sym_LPAREN] = ACTIONS(843),
    [anon_sym_RPAREN] = ACTIONS(843),
    [anon_sym_EQ] = ACTIONS(843),
    [anon_sym_DASH] = ACTIONS(843),
    [anon_sym_AT] = ACTIONS(843),
    [anon_sym_BQUOTE] = ACTIONS(843),
    [anon_sym__] = ACTIONS(843),
    [anon_sym_COLON] = ACTIONS(843),
    [anon_sym_LBRACK] = ACTIONS(843),
    [anon_sym_RBRACK] = ACTIONS(843),
    [anon_sym_PIPE] = ACTIONS(843),
    [anon_sym_BANG] = ACTIONS(843),
    [anon_sym_DOT] = ACTIONS(843),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(843),
    [anon_sym_DQUOTE] = ACTIONS(843),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(843),
    [sym__ascii_large] = ACTIONS(843),
    [anon_sym_POUND] = ACTIONS(843),
    [anon_sym_DOLLAR] = ACTIONS(843),
    [anon_sym_PERCENT] = ACTIONS(843),
    [anon_sym_AMP] = ACTIONS(843),
    [anon_sym_1] = ACTIONS(843),
    [anon_sym_PLUS] = ACTIONS(843),
    [anon_sym_SLASH] = ACTIONS(843),
    [anon_sym_LT] = ACTIONS(843),
    [anon_sym_GT] = ACTIONS(843),
    [anon_sym_QMARK] = ACTIONS(843),
    [anon_sym_CARET] = ACTIONS(843),
    [anon_sym_TILDE] = ACTIONS(843),
    [anon_sym_BSLASH] = ACTIONS(843),
    [sym__space] = ACTIONS(843),
    [sym__newline] = ACTIONS(843),
    [sym__tab] = ACTIONS(843),
    [sym__vertical_tab] = ACTIONS(843),
  },
  [291] = {
    [anon_sym_SEMI] = ACTIONS(845),
    [anon_sym_LBRACE] = ACTIONS(845),
    [anon_sym_RBRACE] = ACTIONS(845),
    [anon_sym_LPAREN] = ACTIONS(845),
    [anon_sym_RPAREN] = ACTIONS(845),
    [anon_sym_EQ] = ACTIONS(845),
    [anon_sym_DASH] = ACTIONS(845),
    [anon_sym_AT] = ACTIONS(845),
    [anon_sym_BQUOTE] = ACTIONS(845),
    [anon_sym__] = ACTIONS(845),
    [anon_sym_COLON] = ACTIONS(845),
    [anon_sym_LBRACK] = ACTIONS(845),
    [anon_sym_RBRACK] = ACTIONS(845),
    [anon_sym_PIPE] = ACTIONS(845),
    [anon_sym_BANG] = ACTIONS(845),
    [anon_sym_DOT] = ACTIONS(845),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(845),
    [anon_sym_DQUOTE] = ACTIONS(845),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(845),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(845),
    [sym__ascii_large] = ACTIONS(845),
    [anon_sym_POUND] = ACTIONS(845),
    [anon_sym_DOLLAR] = ACTIONS(845),
    [anon_sym_PERCENT] = ACTIONS(845),
    [anon_sym_AMP] = ACTIONS(845),
    [anon_sym_1] = ACTIONS(845),
    [anon_sym_PLUS] = ACTIONS(845),
    [anon_sym_SLASH] = ACTIONS(845),
    [anon_sym_LT] = ACTIONS(845),
    [anon_sym_GT] = ACTIONS(845),
    [anon_sym_QMARK] = ACTIONS(845),
    [anon_sym_CARET] = ACTIONS(845),
    [anon_sym_TILDE] = ACTIONS(845),
    [anon_sym_BSLASH] = ACTIONS(845),
    [sym__space] = ACTIONS(845),
    [sym__newline] = ACTIONS(845),
    [sym__tab] = ACTIONS(845),
    [sym__vertical_tab] = ACTIONS(845),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(845),
  },
  [292] = {
    [anon_sym_SEMI] = ACTIONS(847),
    [anon_sym_LBRACE] = ACTIONS(847),
    [anon_sym_RBRACE] = ACTIONS(847),
    [anon_sym_LPAREN] = ACTIONS(847),
    [anon_sym_RPAREN] = ACTIONS(847),
    [anon_sym_EQ] = ACTIONS(847),
    [anon_sym_DASH] = ACTIONS(847),
    [anon_sym_AT] = ACTIONS(847),
    [anon_sym_BQUOTE] = ACTIONS(847),
    [anon_sym__] = ACTIONS(847),
    [anon_sym_COLON] = ACTIONS(847),
    [anon_sym_LBRACK] = ACTIONS(847),
    [anon_sym_RBRACK] = ACTIONS(847),
    [anon_sym_PIPE] = ACTIONS(847),
    [anon_sym_BANG] = ACTIONS(847),
    [anon_sym_DOT] = ACTIONS(847),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [anon_sym_DQUOTE] = ACTIONS(847),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(847),
    [sym__ascii_large] = ACTIONS(847),
    [anon_sym_POUND] = ACTIONS(847),
    [anon_sym_DOLLAR] = ACTIONS(847),
    [anon_sym_PERCENT] = ACTIONS(847),
    [anon_sym_AMP] = ACTIONS(847),
    [anon_sym_1] = ACTIONS(847),
    [anon_sym_PLUS] = ACTIONS(847),
    [anon_sym_SLASH] = ACTIONS(847),
    [anon_sym_LT] = ACTIONS(847),
    [anon_sym_GT] = ACTIONS(847),
    [anon_sym_QMARK] = ACTIONS(847),
    [anon_sym_CARET] = ACTIONS(847),
    [anon_sym_TILDE] = ACTIONS(847),
    [anon_sym_BSLASH] = ACTIONS(847),
    [sym__space] = ACTIONS(847),
    [sym__newline] = ACTIONS(847),
    [sym__tab] = ACTIONS(847),
    [sym__vertical_tab] = ACTIONS(847),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(849),
  },
  [293] = {
    [anon_sym_SEMI] = ACTIONS(851),
    [anon_sym_LBRACE] = ACTIONS(851),
    [anon_sym_RBRACE] = ACTIONS(851),
    [anon_sym_LPAREN] = ACTIONS(851),
    [anon_sym_RPAREN] = ACTIONS(851),
    [anon_sym_EQ] = ACTIONS(851),
    [anon_sym_DASH] = ACTIONS(851),
    [anon_sym_AT] = ACTIONS(851),
    [anon_sym_BQUOTE] = ACTIONS(851),
    [anon_sym__] = ACTIONS(851),
    [anon_sym_COLON] = ACTIONS(851),
    [anon_sym_LBRACK] = ACTIONS(851),
    [anon_sym_RBRACK] = ACTIONS(851),
    [anon_sym_PIPE] = ACTIONS(851),
    [anon_sym_BANG] = ACTIONS(851),
    [anon_sym_DOT] = ACTIONS(851),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(851),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(851),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(851),
    [sym__ascii_large] = ACTIONS(851),
    [anon_sym_POUND] = ACTIONS(851),
    [anon_sym_DOLLAR] = ACTIONS(851),
    [anon_sym_PERCENT] = ACTIONS(851),
    [anon_sym_AMP] = ACTIONS(851),
    [anon_sym_1] = ACTIONS(851),
    [anon_sym_PLUS] = ACTIONS(851),
    [anon_sym_SLASH] = ACTIONS(851),
    [anon_sym_LT] = ACTIONS(851),
    [anon_sym_GT] = ACTIONS(851),
    [anon_sym_QMARK] = ACTIONS(851),
    [anon_sym_CARET] = ACTIONS(851),
    [anon_sym_TILDE] = ACTIONS(851),
    [anon_sym_BSLASH] = ACTIONS(851),
    [sym__space] = ACTIONS(851),
    [sym__newline] = ACTIONS(851),
    [sym__tab] = ACTIONS(851),
    [sym__vertical_tab] = ACTIONS(851),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(851),
  },
  [294] = {
    [anon_sym_SEMI] = ACTIONS(847),
    [anon_sym_LBRACE] = ACTIONS(847),
    [anon_sym_RBRACE] = ACTIONS(847),
    [anon_sym_LPAREN] = ACTIONS(847),
    [anon_sym_RPAREN] = ACTIONS(847),
    [anon_sym_EQ] = ACTIONS(847),
    [anon_sym_DASH] = ACTIONS(847),
    [anon_sym_AT] = ACTIONS(847),
    [anon_sym_BQUOTE] = ACTIONS(847),
    [anon_sym__] = ACTIONS(847),
    [anon_sym_COLON] = ACTIONS(847),
    [anon_sym_LBRACK] = ACTIONS(847),
    [anon_sym_RBRACK] = ACTIONS(847),
    [anon_sym_PIPE] = ACTIONS(847),
    [anon_sym_BANG] = ACTIONS(847),
    [anon_sym_DOT] = ACTIONS(847),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [anon_sym_DQUOTE] = ACTIONS(847),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(847),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(847),
    [sym__ascii_large] = ACTIONS(847),
    [anon_sym_POUND] = ACTIONS(847),
    [anon_sym_DOLLAR] = ACTIONS(847),
    [anon_sym_PERCENT] = ACTIONS(847),
    [anon_sym_AMP] = ACTIONS(847),
    [anon_sym_1] = ACTIONS(847),
    [anon_sym_PLUS] = ACTIONS(847),
    [anon_sym_SLASH] = ACTIONS(847),
    [anon_sym_LT] = ACTIONS(847),
    [anon_sym_GT] = ACTIONS(847),
    [anon_sym_QMARK] = ACTIONS(847),
    [anon_sym_CARET] = ACTIONS(847),
    [anon_sym_TILDE] = ACTIONS(847),
    [anon_sym_BSLASH] = ACTIONS(847),
    [sym__space] = ACTIONS(847),
    [sym__newline] = ACTIONS(847),
    [sym__tab] = ACTIONS(847),
    [sym__vertical_tab] = ACTIONS(847),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(853),
  },
  [295] = {
    [sym__layout_semicolon] = ACTIONS(855),
    [anon_sym_SEMI] = ACTIONS(857),
    [sym__variable_pattern] = ACTIONS(857),
    [sym__constructor_pattern] = ACTIONS(859),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(859),
    [anon_sym_SQUOTE] = ACTIONS(857),
    [anon_sym_DQUOTE] = ACTIONS(857),
    [sym__integer_literal] = ACTIONS(857),
    [sym__octal_literal] = ACTIONS(857),
    [sym__hexidecimal_literal] = ACTIONS(857),
  },
  [296] = {
    [sym__literal] = STATE(393),
    [sym_integer] = STATE(90),
    [sym_char] = STATE(90),
    [sym_string] = STATE(90),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [297] = {
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym__] = ACTIONS(233),
    [anon_sym_BANG] = ACTIONS(233),
    [sym__variable_pattern] = ACTIONS(861),
    [sym__constructor_pattern] = ACTIONS(861),
    [anon_sym_DOT] = ACTIONS(233),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(861),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [anon_sym_POUND] = ACTIONS(233),
    [anon_sym_DOLLAR] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(233),
    [anon_sym_AMP] = ACTIONS(233),
    [anon_sym_1] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_QMARK] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(233),
    [sym__integer_literal] = ACTIONS(233),
    [sym__octal_literal] = ACTIONS(233),
    [sym__hexidecimal_literal] = ACTIONS(233),
  },
  [298] = {
    [sym__identifier] = STATE(394),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [299] = {
    [sym__constructor_symbol] = STATE(396),
    [aux_sym_constructor_symbol_repeat1] = STATE(397),
    [anon_sym_LPAREN] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(863),
    [anon_sym__] = ACTIONS(237),
    [anon_sym_COLON] = ACTIONS(863),
    [anon_sym_BANG] = ACTIONS(863),
    [sym__variable_pattern] = ACTIONS(865),
    [sym__constructor_pattern] = ACTIONS(865),
    [anon_sym_DOT] = ACTIONS(863),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(865),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [anon_sym_POUND] = ACTIONS(863),
    [anon_sym_DOLLAR] = ACTIONS(863),
    [anon_sym_PERCENT] = ACTIONS(863),
    [anon_sym_AMP] = ACTIONS(863),
    [anon_sym_1] = ACTIONS(863),
    [anon_sym_PLUS] = ACTIONS(863),
    [anon_sym_SLASH] = ACTIONS(863),
    [anon_sym_LT] = ACTIONS(863),
    [anon_sym_GT] = ACTIONS(863),
    [anon_sym_QMARK] = ACTIONS(863),
    [anon_sym_CARET] = ACTIONS(863),
    [sym__integer_literal] = ACTIONS(237),
    [sym__octal_literal] = ACTIONS(237),
    [sym__hexidecimal_literal] = ACTIONS(237),
  },
  [300] = {
    [sym__function_pattern] = STATE(398),
    [sym_parenthesized_pattern] = STATE(94),
    [sym_as_pattern] = STATE(94),
    [sym_wildcard] = STATE(94),
    [sym__variable] = STATE(399),
    [sym_qualified_variable_identifier] = STATE(96),
    [sym__literal] = STATE(94),
    [sym__identifier] = STATE(97),
    [sym_simple_type] = STATE(98),
    [sym_variable_identifier] = STATE(99),
    [sym_constructor_identifier] = STATE(400),
    [sym_integer] = STATE(90),
    [sym_char] = STATE(90),
    [sym_string] = STATE(90),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym__] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(365),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [301] = {
    [anon_sym_LPAREN] = ACTIONS(249),
    [anon_sym__] = ACTIONS(249),
    [sym__variable_pattern] = ACTIONS(867),
    [sym__constructor_pattern] = ACTIONS(867),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(867),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [sym__integer_literal] = ACTIONS(249),
    [sym__octal_literal] = ACTIONS(249),
    [sym__hexidecimal_literal] = ACTIONS(249),
  },
  [302] = {
    [sym__variable_symbol] = STATE(401),
    [aux_sym_variable_symbol_repeat1] = STATE(402),
    [anon_sym_LPAREN] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(601),
    [anon_sym__] = ACTIONS(253),
    [anon_sym_BANG] = ACTIONS(601),
    [sym__variable_pattern] = ACTIONS(869),
    [sym__constructor_pattern] = ACTIONS(869),
    [anon_sym_DOT] = ACTIONS(601),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(869),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_POUND] = ACTIONS(601),
    [anon_sym_DOLLAR] = ACTIONS(601),
    [anon_sym_PERCENT] = ACTIONS(601),
    [anon_sym_AMP] = ACTIONS(601),
    [anon_sym_1] = ACTIONS(601),
    [anon_sym_PLUS] = ACTIONS(601),
    [anon_sym_SLASH] = ACTIONS(601),
    [anon_sym_LT] = ACTIONS(601),
    [anon_sym_GT] = ACTIONS(601),
    [anon_sym_QMARK] = ACTIONS(601),
    [anon_sym_CARET] = ACTIONS(601),
    [sym__integer_literal] = ACTIONS(253),
    [sym__octal_literal] = ACTIONS(253),
    [sym__hexidecimal_literal] = ACTIONS(253),
  },
  [303] = {
    [anon_sym_LPAREN] = ACTIONS(871),
    [anon_sym_RPAREN] = ACTIONS(871),
    [anon_sym_EQ] = ACTIONS(871),
    [anon_sym_DASH] = ACTIONS(871),
    [anon_sym_BQUOTE] = ACTIONS(871),
    [anon_sym__] = ACTIONS(871),
    [anon_sym_COLON] = ACTIONS(871),
    [anon_sym_BANG] = ACTIONS(871),
    [sym__variable_pattern] = ACTIONS(873),
    [sym__constructor_pattern] = ACTIONS(873),
    [anon_sym_DOT] = ACTIONS(871),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(873),
    [anon_sym_SQUOTE] = ACTIONS(871),
    [anon_sym_DQUOTE] = ACTIONS(871),
    [anon_sym_POUND] = ACTIONS(871),
    [anon_sym_DOLLAR] = ACTIONS(871),
    [anon_sym_PERCENT] = ACTIONS(871),
    [anon_sym_AMP] = ACTIONS(871),
    [anon_sym_1] = ACTIONS(871),
    [anon_sym_PLUS] = ACTIONS(871),
    [anon_sym_SLASH] = ACTIONS(871),
    [anon_sym_LT] = ACTIONS(871),
    [anon_sym_GT] = ACTIONS(871),
    [anon_sym_QMARK] = ACTIONS(871),
    [anon_sym_CARET] = ACTIONS(871),
    [sym__integer_literal] = ACTIONS(871),
    [sym__octal_literal] = ACTIONS(871),
    [sym__hexidecimal_literal] = ACTIONS(871),
  },
  [304] = {
    [sym__function_pattern] = STATE(308),
    [sym_parenthesized_pattern] = STATE(94),
    [sym_as_pattern] = STATE(94),
    [sym_wildcard] = STATE(94),
    [sym__variable] = STATE(189),
    [sym_qualified_variable_identifier] = STATE(96),
    [sym__literal] = STATE(94),
    [sym__identifier] = STATE(97),
    [sym_simple_type] = STATE(98),
    [sym_variable_identifier] = STATE(99),
    [sym_constructor_identifier] = STATE(400),
    [sym_integer] = STATE(90),
    [sym_char] = STATE(90),
    [sym_string] = STATE(90),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym__] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(365),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [305] = {
    [sym_variable_identifier] = STATE(279),
    [anon_sym_LBRACE] = ACTIONS(539),
    [anon_sym_RPAREN] = ACTIONS(875),
    [sym__variable_pattern] = ACTIONS(273),
    [sym_comment] = ACTIONS(5),
  },
  [306] = {
    [anon_sym_RBRACE] = ACTIONS(551),
    [anon_sym_LPAREN] = ACTIONS(551),
    [anon_sym_COMMA] = ACTIONS(551),
    [anon_sym_RPAREN] = ACTIONS(551),
    [anon_sym_EQ] = ACTIONS(551),
    [anon_sym_DASH] = ACTIONS(551),
    [anon_sym_BQUOTE] = ACTIONS(551),
    [anon_sym__] = ACTIONS(551),
    [anon_sym_COLON] = ACTIONS(551),
    [anon_sym_BANG] = ACTIONS(551),
    [sym__variable_pattern] = ACTIONS(553),
    [sym__constructor_pattern] = ACTIONS(553),
    [anon_sym_DOT] = ACTIONS(551),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(553),
    [anon_sym_SQUOTE] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(551),
    [anon_sym_POUND] = ACTIONS(551),
    [anon_sym_DOLLAR] = ACTIONS(551),
    [anon_sym_PERCENT] = ACTIONS(551),
    [anon_sym_AMP] = ACTIONS(551),
    [anon_sym_1] = ACTIONS(551),
    [anon_sym_PLUS] = ACTIONS(551),
    [anon_sym_SLASH] = ACTIONS(551),
    [anon_sym_LT] = ACTIONS(551),
    [anon_sym_GT] = ACTIONS(551),
    [anon_sym_QMARK] = ACTIONS(551),
    [anon_sym_CARET] = ACTIONS(551),
    [sym__integer_literal] = ACTIONS(551),
    [sym__octal_literal] = ACTIONS(551),
    [sym__hexidecimal_literal] = ACTIONS(551),
  },
  [307] = {
    [anon_sym_RBRACE] = ACTIONS(583),
    [anon_sym_LPAREN] = ACTIONS(583),
    [anon_sym_COMMA] = ACTIONS(583),
    [anon_sym_RPAREN] = ACTIONS(583),
    [anon_sym_EQ] = ACTIONS(583),
    [anon_sym_DASH] = ACTIONS(583),
    [anon_sym_BQUOTE] = ACTIONS(583),
    [anon_sym__] = ACTIONS(583),
    [anon_sym_COLON] = ACTIONS(583),
    [anon_sym_BANG] = ACTIONS(583),
    [sym__variable_pattern] = ACTIONS(585),
    [sym__constructor_pattern] = ACTIONS(585),
    [anon_sym_DOT] = ACTIONS(583),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(585),
    [anon_sym_SQUOTE] = ACTIONS(583),
    [anon_sym_DQUOTE] = ACTIONS(583),
    [anon_sym_POUND] = ACTIONS(583),
    [anon_sym_DOLLAR] = ACTIONS(583),
    [anon_sym_PERCENT] = ACTIONS(583),
    [anon_sym_AMP] = ACTIONS(583),
    [anon_sym_1] = ACTIONS(583),
    [anon_sym_PLUS] = ACTIONS(583),
    [anon_sym_SLASH] = ACTIONS(583),
    [anon_sym_LT] = ACTIONS(583),
    [anon_sym_GT] = ACTIONS(583),
    [anon_sym_QMARK] = ACTIONS(583),
    [anon_sym_CARET] = ACTIONS(583),
    [sym__integer_literal] = ACTIONS(583),
    [sym__octal_literal] = ACTIONS(583),
    [sym__hexidecimal_literal] = ACTIONS(583),
  },
  [308] = {
    [anon_sym_LPAREN] = ACTIONS(877),
    [anon_sym_RPAREN] = ACTIONS(877),
    [anon_sym_EQ] = ACTIONS(877),
    [anon_sym_DASH] = ACTIONS(877),
    [anon_sym_BQUOTE] = ACTIONS(877),
    [anon_sym__] = ACTIONS(877),
    [anon_sym_COLON] = ACTIONS(877),
    [anon_sym_BANG] = ACTIONS(877),
    [sym__variable_pattern] = ACTIONS(879),
    [sym__constructor_pattern] = ACTIONS(879),
    [anon_sym_DOT] = ACTIONS(877),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(879),
    [anon_sym_SQUOTE] = ACTIONS(877),
    [anon_sym_DQUOTE] = ACTIONS(877),
    [anon_sym_POUND] = ACTIONS(877),
    [anon_sym_DOLLAR] = ACTIONS(877),
    [anon_sym_PERCENT] = ACTIONS(877),
    [anon_sym_AMP] = ACTIONS(877),
    [anon_sym_1] = ACTIONS(877),
    [anon_sym_PLUS] = ACTIONS(877),
    [anon_sym_SLASH] = ACTIONS(877),
    [anon_sym_LT] = ACTIONS(877),
    [anon_sym_GT] = ACTIONS(877),
    [anon_sym_QMARK] = ACTIONS(877),
    [anon_sym_CARET] = ACTIONS(877),
    [sym__integer_literal] = ACTIONS(877),
    [sym__octal_literal] = ACTIONS(877),
    [sym__hexidecimal_literal] = ACTIONS(877),
  },
  [309] = {
    [anon_sym_LPAREN] = ACTIONS(881),
    [anon_sym_RPAREN] = ACTIONS(881),
    [anon_sym_EQ] = ACTIONS(881),
    [anon_sym_DASH] = ACTIONS(881),
    [anon_sym_BQUOTE] = ACTIONS(881),
    [anon_sym__] = ACTIONS(881),
    [anon_sym_COLON] = ACTIONS(881),
    [anon_sym_BANG] = ACTIONS(881),
    [sym__variable_pattern] = ACTIONS(883),
    [sym__constructor_pattern] = ACTIONS(883),
    [anon_sym_DOT] = ACTIONS(881),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(883),
    [anon_sym_SQUOTE] = ACTIONS(881),
    [anon_sym_DQUOTE] = ACTIONS(881),
    [anon_sym_POUND] = ACTIONS(881),
    [anon_sym_DOLLAR] = ACTIONS(881),
    [anon_sym_PERCENT] = ACTIONS(881),
    [anon_sym_AMP] = ACTIONS(881),
    [anon_sym_1] = ACTIONS(881),
    [anon_sym_PLUS] = ACTIONS(881),
    [anon_sym_SLASH] = ACTIONS(881),
    [anon_sym_LT] = ACTIONS(881),
    [anon_sym_GT] = ACTIONS(881),
    [anon_sym_QMARK] = ACTIONS(881),
    [anon_sym_CARET] = ACTIONS(881),
    [sym__integer_literal] = ACTIONS(881),
    [sym__octal_literal] = ACTIONS(881),
    [sym__hexidecimal_literal] = ACTIONS(881),
  },
  [310] = {
    [anon_sym_RBRACE] = ACTIONS(885),
    [sym_comment] = ACTIONS(5),
  },
  [311] = {
    [aux_sym_labels_repeat1] = STATE(405),
    [anon_sym_RBRACE] = ACTIONS(887),
    [anon_sym_COMMA] = ACTIONS(889),
    [sym_comment] = ACTIONS(5),
  },
  [312] = {
    [anon_sym_EQ] = ACTIONS(891),
    [sym_comment] = ACTIONS(5),
  },
  [313] = {
    [sym_type] = STATE(408),
    [sym__generic_type_constructor] = STATE(320),
    [sym_tupling_constructor] = STATE(315),
    [sym_tuple] = STATE(320),
    [sym_list] = STATE(320),
    [sym_parenthesized_constructor] = STATE(320),
    [sym_variable_identifier] = STATE(322),
    [sym__type_constructors] = STATE(315),
    [sym_qualified_type_constructor] = STATE(323),
    [anon_sym_LPAREN] = ACTIONS(621),
    [anon_sym_COMMA] = ACTIONS(893),
    [sym_unit_type] = ACTIONS(625),
    [sym_list_constructor] = ACTIONS(625),
    [sym_function_constructor] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(627),
    [sym__variable_pattern] = ACTIONS(629),
    [sym__constructor_pattern] = ACTIONS(639),
    [sym_module_identifier] = ACTIONS(633),
    [sym_comment] = ACTIONS(5),
  },
  [314] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(411),
    [anon_sym_COMMA] = ACTIONS(895),
    [anon_sym_RPAREN] = ACTIONS(897),
    [sym_comment] = ACTIONS(5),
  },
  [315] = {
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_COMMA] = ACTIONS(637),
    [anon_sym_RPAREN] = ACTIONS(637),
    [anon_sym_DASH_GT] = ACTIONS(637),
    [sym_unit_type] = ACTIONS(637),
    [sym_list_constructor] = ACTIONS(637),
    [sym_function_constructor] = ACTIONS(637),
    [anon_sym_LBRACK] = ACTIONS(637),
    [anon_sym_RBRACK] = ACTIONS(637),
    [sym__variable_pattern] = ACTIONS(637),
    [sym__constructor_pattern] = ACTIONS(899),
    [sym_module_identifier] = ACTIONS(899),
    [sym_comment] = ACTIONS(5),
  },
  [316] = {
    [sym_type] = STATE(326),
    [sym__generic_type_constructor] = STATE(327),
    [sym_tupling_constructor] = STATE(315),
    [sym_tuple] = STATE(327),
    [sym_list] = STATE(327),
    [sym_parenthesized_constructor] = STATE(327),
    [sym_variable_identifier] = STATE(328),
    [sym__type_constructors] = STATE(315),
    [sym_qualified_type_constructor] = STATE(323),
    [aux_sym_list_repeat1] = STATE(412),
    [anon_sym_LPAREN] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(625),
    [sym_list_constructor] = ACTIONS(625),
    [sym_function_constructor] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(627),
    [sym__variable_pattern] = ACTIONS(273),
    [sym__constructor_pattern] = ACTIONS(639),
    [sym_module_identifier] = ACTIONS(641),
    [sym_comment] = ACTIONS(5),
  },
  [317] = {
    [sym_variable_identifier] = STATE(164),
    [aux_sym_general_constructor_repeat1] = STATE(413),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(645),
    [anon_sym_RPAREN] = ACTIONS(645),
    [anon_sym_DASH_GT] = ACTIONS(645),
    [sym__variable_pattern] = ACTIONS(85),
    [sym_comment] = ACTIONS(5),
  },
  [318] = {
    [sym_constructor_identifier] = STATE(415),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(416),
    [sym__constructor_pattern] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(901),
    [sym_comment] = ACTIONS(5),
  },
  [319] = {
    [aux_sym_tuple_repeat1] = STATE(419),
    [anon_sym_COMMA] = ACTIONS(903),
    [anon_sym_RPAREN] = ACTIONS(905),
    [sym_comment] = ACTIONS(5),
  },
  [320] = {
    [anon_sym_COMMA] = ACTIONS(655),
    [anon_sym_RPAREN] = ACTIONS(655),
    [anon_sym_DASH_GT] = ACTIONS(907),
    [sym_comment] = ACTIONS(5),
  },
  [321] = {
    [aux_sym_context_repeat1] = STATE(422),
    [anon_sym_COMMA] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(909),
    [sym_comment] = ACTIONS(5),
  },
  [322] = {
    [anon_sym_COMMA] = ACTIONS(663),
    [anon_sym_RPAREN] = ACTIONS(663),
    [anon_sym_DASH_GT] = ACTIONS(911),
    [sym_comment] = ACTIONS(5),
  },
  [323] = {
    [anon_sym_LPAREN] = ACTIONS(669),
    [anon_sym_COMMA] = ACTIONS(669),
    [anon_sym_RPAREN] = ACTIONS(669),
    [anon_sym_DASH_GT] = ACTIONS(669),
    [sym_unit_type] = ACTIONS(669),
    [sym_list_constructor] = ACTIONS(669),
    [sym_function_constructor] = ACTIONS(669),
    [anon_sym_LBRACK] = ACTIONS(669),
    [anon_sym_RBRACK] = ACTIONS(669),
    [sym__variable_pattern] = ACTIONS(669),
    [sym__constructor_pattern] = ACTIONS(913),
    [sym_module_identifier] = ACTIONS(913),
    [sym_comment] = ACTIONS(5),
  },
  [324] = {
    [sym_variable_identifier] = STATE(164),
    [aux_sym_general_constructor_repeat1] = STATE(413),
    [anon_sym_LPAREN] = ACTIONS(645),
    [anon_sym_COMMA] = ACTIONS(645),
    [anon_sym_RPAREN] = ACTIONS(645),
    [anon_sym_DASH_GT] = ACTIONS(645),
    [sym_unit_type] = ACTIONS(645),
    [sym_list_constructor] = ACTIONS(645),
    [sym_function_constructor] = ACTIONS(645),
    [anon_sym_LBRACK] = ACTIONS(645),
    [anon_sym_RBRACK] = ACTIONS(645),
    [sym__variable_pattern] = ACTIONS(273),
    [sym__constructor_pattern] = ACTIONS(915),
    [sym_module_identifier] = ACTIONS(915),
    [sym_comment] = ACTIONS(5),
  },
  [325] = {
    [sym_constructor_identifier] = STATE(415),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(426),
    [sym__constructor_pattern] = ACTIONS(917),
    [anon_sym_DOT] = ACTIONS(919),
    [sym_comment] = ACTIONS(5),
  },
  [326] = {
    [anon_sym_LPAREN] = ACTIONS(921),
    [sym_unit_type] = ACTIONS(921),
    [sym_list_constructor] = ACTIONS(921),
    [sym_function_constructor] = ACTIONS(921),
    [anon_sym_LBRACK] = ACTIONS(921),
    [anon_sym_RBRACK] = ACTIONS(921),
    [sym__variable_pattern] = ACTIONS(921),
    [sym__constructor_pattern] = ACTIONS(923),
    [sym_module_identifier] = ACTIONS(923),
    [sym_comment] = ACTIONS(5),
  },
  [327] = {
    [anon_sym_LPAREN] = ACTIONS(655),
    [anon_sym_DASH_GT] = ACTIONS(925),
    [sym_unit_type] = ACTIONS(655),
    [sym_list_constructor] = ACTIONS(655),
    [sym_function_constructor] = ACTIONS(655),
    [anon_sym_LBRACK] = ACTIONS(655),
    [anon_sym_RBRACK] = ACTIONS(655),
    [sym__variable_pattern] = ACTIONS(655),
    [sym__constructor_pattern] = ACTIONS(927),
    [sym_module_identifier] = ACTIONS(927),
    [sym_comment] = ACTIONS(5),
  },
  [328] = {
    [anon_sym_LPAREN] = ACTIONS(663),
    [anon_sym_DASH_GT] = ACTIONS(929),
    [sym_unit_type] = ACTIONS(663),
    [sym_list_constructor] = ACTIONS(663),
    [sym_function_constructor] = ACTIONS(663),
    [anon_sym_LBRACK] = ACTIONS(663),
    [anon_sym_RBRACK] = ACTIONS(663),
    [sym__variable_pattern] = ACTIONS(663),
    [sym__constructor_pattern] = ACTIONS(931),
    [sym_module_identifier] = ACTIONS(931),
    [sym_comment] = ACTIONS(5),
  },
  [329] = {
    [sym_type] = STATE(430),
    [sym__generic_type_constructor] = STATE(327),
    [sym_tupling_constructor] = STATE(315),
    [sym_tuple] = STATE(327),
    [sym_list] = STATE(327),
    [sym_parenthesized_constructor] = STATE(327),
    [sym_variable_identifier] = STATE(328),
    [sym__type_constructors] = STATE(315),
    [sym_qualified_type_constructor] = STATE(323),
    [anon_sym_LPAREN] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(625),
    [sym_list_constructor] = ACTIONS(625),
    [sym_function_constructor] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(627),
    [anon_sym_RBRACK] = ACTIONS(933),
    [sym__variable_pattern] = ACTIONS(273),
    [sym__constructor_pattern] = ACTIONS(639),
    [sym_module_identifier] = ACTIONS(641),
    [sym_comment] = ACTIONS(5),
  },
  [330] = {
    [sym__layout_semicolon] = ACTIONS(535),
    [anon_sym_SEMI] = ACTIONS(475),
    [anon_sym_DASH_GT] = ACTIONS(475),
    [sym__variable_pattern] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
  },
  [331] = {
    [sym_variable_identifier] = STATE(431),
    [sym__layout_semicolon] = ACTIONS(935),
    [anon_sym_SEMI] = ACTIONS(937),
    [anon_sym_DASH_GT] = ACTIONS(937),
    [sym__variable_pattern] = ACTIONS(355),
    [sym_comment] = ACTIONS(5),
  },
  [332] = {
    [sym_constructor_identifier] = STATE(433),
    [sym__constructor_pattern] = ACTIONS(357),
    [sym_module_identifier] = ACTIONS(939),
    [sym_comment] = ACTIONS(5),
  },
  [333] = {
    [sym_variable_identifier] = STATE(330),
    [aux_sym_general_constructor_repeat1] = STATE(434),
    [sym__layout_semicolon] = ACTIONS(941),
    [anon_sym_SEMI] = ACTIONS(943),
    [anon_sym_DASH_GT] = ACTIONS(943),
    [sym__variable_pattern] = ACTIONS(355),
    [sym_comment] = ACTIONS(5),
  },
  [334] = {
    [sym_constructor_identifier] = STATE(433),
    [sym__constructor_pattern] = ACTIONS(357),
    [anon_sym_DOT] = ACTIONS(945),
    [sym_comment] = ACTIONS(5),
  },
  [335] = {
    [sym_type] = STATE(436),
    [sym__generic_type_constructor] = STATE(205),
    [sym_tupling_constructor] = STATE(200),
    [sym_tuple] = STATE(205),
    [sym_list] = STATE(205),
    [sym_parenthesized_constructor] = STATE(205),
    [sym_variable_identifier] = STATE(208),
    [sym__type_constructors] = STATE(200),
    [sym_qualified_type_constructor] = STATE(210),
    [anon_sym_LPAREN] = ACTIONS(545),
    [sym_unit_type] = ACTIONS(391),
    [sym_list_constructor] = ACTIONS(391),
    [sym_function_constructor] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(393),
    [sym__variable_pattern] = ACTIONS(395),
    [sym__constructor_pattern] = ACTIONS(547),
    [sym_module_identifier] = ACTIONS(399),
    [sym_comment] = ACTIONS(5),
  },
  [336] = {
    [sym__layout_semicolon] = ACTIONS(947),
    [anon_sym_SEMI] = ACTIONS(949),
    [sym_comment] = ACTIONS(5),
  },
  [337] = {
    [anon_sym_LPAREN] = ACTIONS(951),
    [sym_unit_type] = ACTIONS(951),
    [sym_list_constructor] = ACTIONS(951),
    [sym_function_constructor] = ACTIONS(951),
    [anon_sym_LBRACK] = ACTIONS(951),
    [sym__variable_pattern] = ACTIONS(951),
    [sym__constructor_pattern] = ACTIONS(469),
    [sym_module_identifier] = ACTIONS(469),
    [sym_comment] = ACTIONS(5),
  },
  [338] = {
    [sym_type] = STATE(437),
    [sym__generic_type_constructor] = STATE(205),
    [sym_tupling_constructor] = STATE(200),
    [sym_tuple] = STATE(205),
    [sym_list] = STATE(205),
    [sym_parenthesized_constructor] = STATE(205),
    [sym_variable_identifier] = STATE(208),
    [sym__type_constructors] = STATE(200),
    [sym_qualified_type_constructor] = STATE(210),
    [anon_sym_LPAREN] = ACTIONS(545),
    [sym_unit_type] = ACTIONS(391),
    [sym_list_constructor] = ACTIONS(391),
    [sym_function_constructor] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(393),
    [sym__variable_pattern] = ACTIONS(395),
    [sym__constructor_pattern] = ACTIONS(547),
    [sym_module_identifier] = ACTIONS(399),
    [sym_comment] = ACTIONS(5),
  },
  [339] = {
    [ts_builtin_sym_end] = ACTIONS(953),
    [sym_comment] = ACTIONS(5),
  },
  [340] = {
    [sym__layout_semicolon] = ACTIONS(955),
    [anon_sym_SEMI] = ACTIONS(957),
    [sym_comment] = ACTIONS(5),
  },
  [341] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(440),
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
    [sym__layout_close_brace] = ACTIONS(959),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_class] = ACTIONS(21),
    [anon_sym_instance] = ACTIONS(23),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_newtype] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(31),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(35),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [342] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(103),
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
    [anon_sym_RBRACE] = ACTIONS(961),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_class] = ACTIONS(21),
    [anon_sym_instance] = ACTIONS(23),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_newtype] = ACTIONS(29),
    [anon_sym_type] = ACTIONS(31),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(35),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [343] = {
    [sym_export] = STATE(441),
    [sym__identifier] = STATE(217),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [344] = {
    [anon_sym_where] = ACTIONS(963),
    [sym_comment] = ACTIONS(5),
  },
  [345] = {
    [anon_sym_COMMA] = ACTIONS(965),
    [anon_sym_RPAREN] = ACTIONS(967),
    [sym_comment] = ACTIONS(5),
  },
  [346] = {
    [sym__identifier] = STATE(445),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_DOT_DOT] = ACTIONS(969),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [347] = {
    [ts_builtin_sym_end] = ACTIONS(971),
    [sym_comment] = ACTIONS(5),
  },
  [348] = {
    [sym_import_specification] = STATE(446),
    [sym__layout_semicolon] = ACTIONS(973),
    [anon_sym_SEMI] = ACTIONS(975),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_hiding] = ACTIONS(199),
    [sym_comment] = ACTIONS(5),
  },
  [349] = {
    [sym__identifier] = STATE(448),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_DOT_DOT] = ACTIONS(977),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [350] = {
    [sym__identifier] = STATE(449),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [351] = {
    [sym__layout_semicolon] = ACTIONS(979),
    [anon_sym_SEMI] = ACTIONS(981),
    [sym_comment] = ACTIONS(5),
  },
  [352] = {
    [anon_sym_COMMA] = ACTIONS(983),
    [anon_sym_RPAREN] = ACTIONS(985),
    [sym_comment] = ACTIONS(5),
  },
  [353] = {
    [sym__layout_semicolon] = ACTIONS(973),
    [anon_sym_SEMI] = ACTIONS(975),
    [sym_comment] = ACTIONS(5),
  },
  [354] = {
    [aux_sym_import_specification_repeat1] = STATE(453),
    [anon_sym_LPAREN] = ACTIONS(987),
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_RPAREN] = ACTIONS(985),
    [sym_comment] = ACTIONS(5),
  },
  [355] = {
    [sym__variable_pattern] = ACTIONS(319),
    [sym__constructor_pattern] = ACTIONS(321),
    [sym_comment] = ACTIONS(5),
  },
  [356] = {
    [sym__gap] = STATE(178),
    [sym__graphic] = STATE(178),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(178),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(989),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(115),
    [sym__ascii_large] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(113),
    [anon_sym_1] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(125),
    [sym__space] = ACTIONS(127),
    [sym__newline] = ACTIONS(127),
    [sym__tab] = ACTIONS(127),
    [sym__vertical_tab] = ACTIONS(127),
  },
  [357] = {
    [sym__layout_semicolon] = ACTIONS(991),
    [anon_sym_SEMI] = ACTIONS(993),
    [sym_comment] = ACTIONS(5),
  },
  [358] = {
    [sym_type_signature] = STATE(455),
    [sym__identifier] = STATE(229),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(629),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [359] = {
    [anon_sym_COMMA] = ACTIONS(995),
    [anon_sym_RPAREN] = ACTIONS(995),
    [sym_comment] = ACTIONS(5),
  },
  [360] = {
    [sym__identifier] = STATE(456),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [361] = {
    [sym__layout_semicolon] = ACTIONS(997),
    [anon_sym_SEMI] = ACTIONS(999),
    [sym_comment] = ACTIONS(5),
  },
  [362] = {
    [anon_sym_COMMA] = ACTIONS(1001),
    [anon_sym_RPAREN] = ACTIONS(1001),
    [sym_comment] = ACTIONS(5),
  },
  [363] = {
    [sym__constructor_pattern] = ACTIONS(1003),
    [sym_comment] = ACTIONS(5),
  },
  [364] = {
    [sym_class] = STATE(457),
    [sym_constructor_identifier] = STATE(126),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [365] = {
    [anon_sym_EQ_GT] = ACTIONS(1005),
    [sym_comment] = ACTIONS(5),
  },
  [366] = {
    [sym__layout_semicolon] = ACTIONS(1007),
    [anon_sym_SEMI] = ACTIONS(1009),
    [sym_comment] = ACTIONS(5),
  },
  [367] = {
    [sym_general_declarations] = STATE(459),
    [sym__layout_open_brace] = ACTIONS(471),
    [anon_sym_LBRACE] = ACTIONS(473),
    [sym_comment] = ACTIONS(5),
  },
  [368] = {
    [sym__layout_semicolon] = ACTIONS(1011),
    [anon_sym_SEMI] = ACTIONS(1013),
    [sym_comment] = ACTIONS(5),
  },
  [369] = {
    [sym__layout_semicolon] = ACTIONS(1015),
    [anon_sym_SEMI] = ACTIONS(1017),
    [sym_comment] = ACTIONS(5),
  },
  [370] = {
    [sym__general_declaration] = STATE(462),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(229),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__layout_close_brace] = ACTIONS(1019),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [sym__variable_pattern] = ACTIONS(227),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [371] = {
    [sym__layout_semicolon] = ACTIONS(1021),
    [anon_sym_SEMI] = ACTIONS(1023),
    [sym_comment] = ACTIONS(5),
  },
  [372] = {
    [sym__general_declaration] = STATE(464),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(229),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_RBRACE] = ACTIONS(1025),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [sym__variable_pattern] = ACTIONS(227),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [373] = {
    [anon_sym_COMMA] = ACTIONS(1027),
    [anon_sym_RPAREN] = ACTIONS(1027),
    [anon_sym_EQ_GT] = ACTIONS(1027),
    [sym_comment] = ACTIONS(5),
  },
  [374] = {
    [sym__layout_semicolon] = ACTIONS(1029),
    [anon_sym_SEMI] = ACTIONS(1031),
    [sym_comment] = ACTIONS(5),
  },
  [375] = {
    [sym_general_declarations] = STATE(465),
    [sym__layout_open_brace] = ACTIONS(471),
    [anon_sym_LBRACE] = ACTIONS(473),
    [sym_comment] = ACTIONS(5),
  },
  [376] = {
    [sym__layout_semicolon] = ACTIONS(1033),
    [anon_sym_SEMI] = ACTIONS(1035),
    [anon_sym_COMMA] = ACTIONS(1035),
    [sym_comment] = ACTIONS(5),
  },
  [377] = {
    [sym_deriving] = STATE(466),
    [sym__layout_semicolon] = ACTIONS(1037),
    [anon_sym_SEMI] = ACTIONS(1039),
    [anon_sym_deriving] = ACTIONS(261),
    [sym_comment] = ACTIONS(5),
  },
  [378] = {
    [sym__layout_semicolon] = ACTIONS(1037),
    [anon_sym_SEMI] = ACTIONS(1039),
    [sym_comment] = ACTIONS(5),
  },
  [379] = {
    [aux_sym_export_repeat1] = STATE(468),
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(1041),
    [sym_comment] = ACTIONS(5),
  },
  [380] = {
    [sym__layout_semicolon] = ACTIONS(1043),
    [anon_sym_SEMI] = ACTIONS(1045),
    [anon_sym_PIPE] = ACTIONS(1045),
    [anon_sym_deriving] = ACTIONS(1045),
    [sym_comment] = ACTIONS(5),
  },
  [381] = {
    [sym_constructor] = STATE(469),
    [sym_constructor_identifier] = STATE(153),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [382] = {
    [aux_sym_fields_repeat1] = STATE(472),
    [anon_sym_RBRACE] = ACTIONS(1047),
    [anon_sym_COMMA] = ACTIONS(1049),
    [sym_comment] = ACTIONS(5),
  },
  [383] = {
    [aux_sym_field_repeat1] = STATE(475),
    [anon_sym_COMMA] = ACTIONS(1051),
    [anon_sym_COLON_COLON] = ACTIONS(1053),
    [sym_comment] = ACTIONS(5),
  },
  [384] = {
    [sym__layout_semicolon] = ACTIONS(1055),
    [anon_sym_SEMI] = ACTIONS(1057),
    [anon_sym_PIPE] = ACTIONS(1057),
    [anon_sym_deriving] = ACTIONS(1057),
    [anon_sym_BANG] = ACTIONS(1057),
    [sym__variable_pattern] = ACTIONS(1059),
    [sym__constructor_pattern] = ACTIONS(1059),
    [sym_comment] = ACTIONS(5),
  },
  [385] = {
    [sym__layout_semicolon] = ACTIONS(1061),
    [anon_sym_SEMI] = ACTIONS(1063),
    [anon_sym_PIPE] = ACTIONS(1063),
    [anon_sym_deriving] = ACTIONS(1063),
    [anon_sym_BANG] = ACTIONS(1063),
    [sym__variable_pattern] = ACTIONS(1065),
    [sym__constructor_pattern] = ACTIONS(1065),
    [sym_comment] = ACTIONS(5),
  },
  [386] = {
    [sym_deriving] = STATE(476),
    [sym__layout_semicolon] = ACTIONS(1067),
    [anon_sym_SEMI] = ACTIONS(1069),
    [anon_sym_deriving] = ACTIONS(261),
    [sym_comment] = ACTIONS(5),
  },
  [387] = {
    [sym__layout_semicolon] = ACTIONS(1067),
    [anon_sym_SEMI] = ACTIONS(1069),
    [sym_comment] = ACTIONS(5),
  },
  [388] = {
    [sym__layout_semicolon] = ACTIONS(1071),
    [anon_sym_SEMI] = ACTIONS(1073),
    [anon_sym_deriving] = ACTIONS(1073),
    [sym_comment] = ACTIONS(5),
  },
  [389] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1075),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1075),
  },
  [390] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1077),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1077),
  },
  [391] = {
    [anon_sym_SEMI] = ACTIONS(1079),
    [anon_sym_LBRACE] = ACTIONS(1079),
    [anon_sym_RBRACE] = ACTIONS(1079),
    [anon_sym_LPAREN] = ACTIONS(1079),
    [anon_sym_RPAREN] = ACTIONS(1079),
    [anon_sym_EQ] = ACTIONS(1079),
    [anon_sym_DASH] = ACTIONS(1079),
    [anon_sym_AT] = ACTIONS(1079),
    [anon_sym_BQUOTE] = ACTIONS(1079),
    [anon_sym__] = ACTIONS(1079),
    [anon_sym_COLON] = ACTIONS(1079),
    [anon_sym_LBRACK] = ACTIONS(1079),
    [anon_sym_RBRACK] = ACTIONS(1079),
    [anon_sym_PIPE] = ACTIONS(1079),
    [anon_sym_BANG] = ACTIONS(1079),
    [anon_sym_DOT] = ACTIONS(1079),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(1079),
    [anon_sym_DQUOTE] = ACTIONS(1079),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1079),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1079),
    [sym__ascii_large] = ACTIONS(1079),
    [anon_sym_POUND] = ACTIONS(1079),
    [anon_sym_DOLLAR] = ACTIONS(1079),
    [anon_sym_PERCENT] = ACTIONS(1079),
    [anon_sym_AMP] = ACTIONS(1079),
    [anon_sym_1] = ACTIONS(1079),
    [anon_sym_PLUS] = ACTIONS(1079),
    [anon_sym_SLASH] = ACTIONS(1079),
    [anon_sym_LT] = ACTIONS(1079),
    [anon_sym_GT] = ACTIONS(1079),
    [anon_sym_QMARK] = ACTIONS(1079),
    [anon_sym_CARET] = ACTIONS(1079),
    [anon_sym_TILDE] = ACTIONS(1079),
    [anon_sym_BSLASH] = ACTIONS(1079),
    [sym__space] = ACTIONS(1079),
    [sym__newline] = ACTIONS(1079),
    [sym__tab] = ACTIONS(1079),
    [sym__vertical_tab] = ACTIONS(1079),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1079),
  },
  [392] = {
    [anon_sym_SEMI] = ACTIONS(1081),
    [anon_sym_LBRACE] = ACTIONS(1081),
    [anon_sym_RBRACE] = ACTIONS(1081),
    [anon_sym_LPAREN] = ACTIONS(1081),
    [anon_sym_RPAREN] = ACTIONS(1081),
    [anon_sym_EQ] = ACTIONS(1081),
    [anon_sym_DASH] = ACTIONS(1081),
    [anon_sym_AT] = ACTIONS(1081),
    [anon_sym_BQUOTE] = ACTIONS(1081),
    [anon_sym__] = ACTIONS(1081),
    [anon_sym_COLON] = ACTIONS(1081),
    [anon_sym_LBRACK] = ACTIONS(1081),
    [anon_sym_RBRACK] = ACTIONS(1081),
    [anon_sym_PIPE] = ACTIONS(1081),
    [anon_sym_BANG] = ACTIONS(1081),
    [anon_sym_DOT] = ACTIONS(1081),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(1081),
    [anon_sym_DQUOTE] = ACTIONS(1081),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1081),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1081),
    [sym__ascii_large] = ACTIONS(1081),
    [anon_sym_POUND] = ACTIONS(1081),
    [anon_sym_DOLLAR] = ACTIONS(1081),
    [anon_sym_PERCENT] = ACTIONS(1081),
    [anon_sym_AMP] = ACTIONS(1081),
    [anon_sym_1] = ACTIONS(1081),
    [anon_sym_PLUS] = ACTIONS(1081),
    [anon_sym_SLASH] = ACTIONS(1081),
    [anon_sym_LT] = ACTIONS(1081),
    [anon_sym_GT] = ACTIONS(1081),
    [anon_sym_QMARK] = ACTIONS(1081),
    [anon_sym_CARET] = ACTIONS(1081),
    [anon_sym_TILDE] = ACTIONS(1081),
    [anon_sym_BSLASH] = ACTIONS(1081),
    [sym__space] = ACTIONS(1081),
    [sym__newline] = ACTIONS(1081),
    [sym__tab] = ACTIONS(1081),
    [sym__vertical_tab] = ACTIONS(1081),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1081),
  },
  [393] = {
    [anon_sym_RPAREN] = ACTIONS(1083),
    [sym_comment] = ACTIONS(5),
  },
  [394] = {
    [anon_sym_BQUOTE] = ACTIONS(1085),
    [sym_comment] = ACTIONS(5),
  },
  [395] = {
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_DASH] = ACTIONS(487),
    [anon_sym__] = ACTIONS(487),
    [anon_sym_COLON] = ACTIONS(487),
    [anon_sym_BANG] = ACTIONS(487),
    [sym__variable_pattern] = ACTIONS(1087),
    [sym__constructor_pattern] = ACTIONS(1087),
    [anon_sym_DOT] = ACTIONS(487),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1087),
    [anon_sym_SQUOTE] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_POUND] = ACTIONS(487),
    [anon_sym_DOLLAR] = ACTIONS(487),
    [anon_sym_PERCENT] = ACTIONS(487),
    [anon_sym_AMP] = ACTIONS(487),
    [anon_sym_1] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(487),
    [anon_sym_SLASH] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_QMARK] = ACTIONS(487),
    [anon_sym_CARET] = ACTIONS(487),
    [sym__integer_literal] = ACTIONS(487),
    [sym__octal_literal] = ACTIONS(487),
    [sym__hexidecimal_literal] = ACTIONS(487),
  },
  [396] = {
    [anon_sym_LPAREN] = ACTIONS(491),
    [anon_sym_DASH] = ACTIONS(491),
    [anon_sym__] = ACTIONS(491),
    [anon_sym_COLON] = ACTIONS(491),
    [anon_sym_BANG] = ACTIONS(491),
    [sym__variable_pattern] = ACTIONS(1089),
    [sym__constructor_pattern] = ACTIONS(1089),
    [anon_sym_DOT] = ACTIONS(491),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1089),
    [anon_sym_SQUOTE] = ACTIONS(491),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [anon_sym_POUND] = ACTIONS(491),
    [anon_sym_DOLLAR] = ACTIONS(491),
    [anon_sym_PERCENT] = ACTIONS(491),
    [anon_sym_AMP] = ACTIONS(491),
    [anon_sym_1] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_LT] = ACTIONS(491),
    [anon_sym_GT] = ACTIONS(491),
    [anon_sym_QMARK] = ACTIONS(491),
    [anon_sym_CARET] = ACTIONS(491),
    [sym__integer_literal] = ACTIONS(491),
    [sym__octal_literal] = ACTIONS(491),
    [sym__hexidecimal_literal] = ACTIONS(491),
  },
  [397] = {
    [sym__constructor_symbol] = STATE(479),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(863),
    [anon_sym__] = ACTIONS(495),
    [anon_sym_COLON] = ACTIONS(863),
    [anon_sym_BANG] = ACTIONS(863),
    [sym__variable_pattern] = ACTIONS(1091),
    [sym__constructor_pattern] = ACTIONS(1091),
    [anon_sym_DOT] = ACTIONS(863),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1091),
    [anon_sym_SQUOTE] = ACTIONS(495),
    [anon_sym_DQUOTE] = ACTIONS(495),
    [anon_sym_POUND] = ACTIONS(863),
    [anon_sym_DOLLAR] = ACTIONS(863),
    [anon_sym_PERCENT] = ACTIONS(863),
    [anon_sym_AMP] = ACTIONS(863),
    [anon_sym_1] = ACTIONS(863),
    [anon_sym_PLUS] = ACTIONS(863),
    [anon_sym_SLASH] = ACTIONS(863),
    [anon_sym_LT] = ACTIONS(863),
    [anon_sym_GT] = ACTIONS(863),
    [anon_sym_QMARK] = ACTIONS(863),
    [anon_sym_CARET] = ACTIONS(863),
    [sym__integer_literal] = ACTIONS(495),
    [sym__octal_literal] = ACTIONS(495),
    [sym__hexidecimal_literal] = ACTIONS(495),
  },
  [398] = {
    [anon_sym_RPAREN] = ACTIONS(1093),
    [sym_comment] = ACTIONS(5),
  },
  [399] = {
    [anon_sym_AT] = ACTIONS(1095),
    [sym_comment] = ACTIONS(5),
  },
  [400] = {
    [sym_variable_identifier] = STATE(164),
    [aux_sym_general_constructor_repeat1] = STATE(197),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_BANG] = ACTIONS(179),
    [sym__variable_pattern] = ACTIONS(273),
    [anon_sym_DOT] = ACTIONS(179),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(179),
    [anon_sym_PERCENT] = ACTIONS(179),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_1] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_QMARK] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(179),
  },
  [401] = {
    [anon_sym_LPAREN] = ACTIONS(505),
    [anon_sym_DASH] = ACTIONS(505),
    [anon_sym__] = ACTIONS(505),
    [anon_sym_BANG] = ACTIONS(505),
    [sym__variable_pattern] = ACTIONS(1097),
    [sym__constructor_pattern] = ACTIONS(1097),
    [anon_sym_DOT] = ACTIONS(505),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1097),
    [anon_sym_SQUOTE] = ACTIONS(505),
    [anon_sym_DQUOTE] = ACTIONS(505),
    [anon_sym_POUND] = ACTIONS(505),
    [anon_sym_DOLLAR] = ACTIONS(505),
    [anon_sym_PERCENT] = ACTIONS(505),
    [anon_sym_AMP] = ACTIONS(505),
    [anon_sym_1] = ACTIONS(505),
    [anon_sym_PLUS] = ACTIONS(505),
    [anon_sym_SLASH] = ACTIONS(505),
    [anon_sym_LT] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_QMARK] = ACTIONS(505),
    [anon_sym_CARET] = ACTIONS(505),
    [sym__integer_literal] = ACTIONS(505),
    [sym__octal_literal] = ACTIONS(505),
    [sym__hexidecimal_literal] = ACTIONS(505),
  },
  [402] = {
    [sym__variable_symbol] = STATE(481),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_DASH] = ACTIONS(601),
    [anon_sym__] = ACTIONS(509),
    [anon_sym_BANG] = ACTIONS(601),
    [sym__variable_pattern] = ACTIONS(1099),
    [sym__constructor_pattern] = ACTIONS(1099),
    [anon_sym_DOT] = ACTIONS(601),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1099),
    [anon_sym_SQUOTE] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_POUND] = ACTIONS(601),
    [anon_sym_DOLLAR] = ACTIONS(601),
    [anon_sym_PERCENT] = ACTIONS(601),
    [anon_sym_AMP] = ACTIONS(601),
    [anon_sym_1] = ACTIONS(601),
    [anon_sym_PLUS] = ACTIONS(601),
    [anon_sym_SLASH] = ACTIONS(601),
    [anon_sym_LT] = ACTIONS(601),
    [anon_sym_GT] = ACTIONS(601),
    [anon_sym_QMARK] = ACTIONS(601),
    [anon_sym_CARET] = ACTIONS(601),
    [sym__integer_literal] = ACTIONS(509),
    [sym__octal_literal] = ACTIONS(509),
    [sym__hexidecimal_literal] = ACTIONS(509),
  },
  [403] = {
    [anon_sym_LPAREN] = ACTIONS(1101),
    [anon_sym_RPAREN] = ACTIONS(1101),
    [anon_sym_EQ] = ACTIONS(1101),
    [anon_sym_DASH] = ACTIONS(1101),
    [anon_sym_BQUOTE] = ACTIONS(1101),
    [anon_sym__] = ACTIONS(1101),
    [anon_sym_COLON] = ACTIONS(1101),
    [anon_sym_BANG] = ACTIONS(1101),
    [sym__variable_pattern] = ACTIONS(1103),
    [sym__constructor_pattern] = ACTIONS(1103),
    [anon_sym_DOT] = ACTIONS(1101),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1103),
    [anon_sym_SQUOTE] = ACTIONS(1101),
    [anon_sym_DQUOTE] = ACTIONS(1101),
    [anon_sym_POUND] = ACTIONS(1101),
    [anon_sym_DOLLAR] = ACTIONS(1101),
    [anon_sym_PERCENT] = ACTIONS(1101),
    [anon_sym_AMP] = ACTIONS(1101),
    [anon_sym_1] = ACTIONS(1101),
    [anon_sym_PLUS] = ACTIONS(1101),
    [anon_sym_SLASH] = ACTIONS(1101),
    [anon_sym_LT] = ACTIONS(1101),
    [anon_sym_GT] = ACTIONS(1101),
    [anon_sym_QMARK] = ACTIONS(1101),
    [anon_sym_CARET] = ACTIONS(1101),
    [sym__integer_literal] = ACTIONS(1101),
    [sym__octal_literal] = ACTIONS(1101),
    [sym__hexidecimal_literal] = ACTIONS(1101),
  },
  [404] = {
    [sym_label] = STATE(482),
    [sym__identifier] = STATE(312),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [405] = {
    [anon_sym_RBRACE] = ACTIONS(1105),
    [anon_sym_COMMA] = ACTIONS(1107),
    [sym_comment] = ACTIONS(5),
  },
  [406] = {
    [sym__literal] = STATE(484),
    [sym_integer] = STATE(90),
    [sym_char] = STATE(90),
    [sym_string] = STATE(90),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [407] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(486),
    [anon_sym_COMMA] = ACTIONS(895),
    [anon_sym_RPAREN] = ACTIONS(1109),
    [sym_comment] = ACTIONS(5),
  },
  [408] = {
    [aux_sym_tuple_repeat1] = STATE(488),
    [anon_sym_COMMA] = ACTIONS(903),
    [anon_sym_RPAREN] = ACTIONS(1111),
    [sym_comment] = ACTIONS(5),
  },
  [409] = {
    [anon_sym_COMMA] = ACTIONS(1113),
    [anon_sym_RPAREN] = ACTIONS(1113),
    [sym_comment] = ACTIONS(5),
  },
  [410] = {
    [sym__layout_semicolon] = ACTIONS(1115),
    [anon_sym_SEMI] = ACTIONS(1117),
    [anon_sym_DASH_GT] = ACTIONS(1117),
    [sym_comment] = ACTIONS(5),
  },
  [411] = {
    [anon_sym_COMMA] = ACTIONS(1119),
    [anon_sym_RPAREN] = ACTIONS(1121),
    [sym_comment] = ACTIONS(5),
  },
  [412] = {
    [sym_type] = STATE(430),
    [sym__generic_type_constructor] = STATE(327),
    [sym_tupling_constructor] = STATE(315),
    [sym_tuple] = STATE(327),
    [sym_list] = STATE(327),
    [sym_parenthesized_constructor] = STATE(327),
    [sym_variable_identifier] = STATE(328),
    [sym__type_constructors] = STATE(315),
    [sym_qualified_type_constructor] = STATE(323),
    [anon_sym_LPAREN] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(625),
    [sym_list_constructor] = ACTIONS(625),
    [sym_function_constructor] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(627),
    [anon_sym_RBRACK] = ACTIONS(1123),
    [sym__variable_pattern] = ACTIONS(273),
    [sym__constructor_pattern] = ACTIONS(639),
    [sym_module_identifier] = ACTIONS(641),
    [sym_comment] = ACTIONS(5),
  },
  [413] = {
    [sym_variable_identifier] = STATE(279),
    [anon_sym_LPAREN] = ACTIONS(937),
    [anon_sym_COMMA] = ACTIONS(937),
    [anon_sym_RPAREN] = ACTIONS(937),
    [anon_sym_DASH_GT] = ACTIONS(937),
    [sym_unit_type] = ACTIONS(937),
    [sym_list_constructor] = ACTIONS(937),
    [sym_function_constructor] = ACTIONS(937),
    [anon_sym_LBRACK] = ACTIONS(937),
    [anon_sym_RBRACK] = ACTIONS(937),
    [sym__variable_pattern] = ACTIONS(273),
    [sym__constructor_pattern] = ACTIONS(1125),
    [sym_module_identifier] = ACTIONS(1125),
    [sym_comment] = ACTIONS(5),
  },
  [414] = {
    [sym_constructor_identifier] = STATE(492),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_module_identifier] = ACTIONS(939),
    [sym_comment] = ACTIONS(5),
  },
  [415] = {
    [sym_variable_identifier] = STATE(164),
    [aux_sym_general_constructor_repeat1] = STATE(493),
    [anon_sym_LPAREN] = ACTIONS(943),
    [anon_sym_COMMA] = ACTIONS(943),
    [anon_sym_RPAREN] = ACTIONS(943),
    [anon_sym_DASH_GT] = ACTIONS(943),
    [sym_unit_type] = ACTIONS(943),
    [sym_list_constructor] = ACTIONS(943),
    [sym_function_constructor] = ACTIONS(943),
    [anon_sym_LBRACK] = ACTIONS(943),
    [anon_sym_RBRACK] = ACTIONS(943),
    [sym__variable_pattern] = ACTIONS(273),
    [sym__constructor_pattern] = ACTIONS(1127),
    [sym_module_identifier] = ACTIONS(1127),
    [sym_comment] = ACTIONS(5),
  },
  [416] = {
    [sym_constructor_identifier] = STATE(492),
    [sym__constructor_pattern] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(1129),
    [sym_comment] = ACTIONS(5),
  },
  [417] = {
    [sym_type] = STATE(495),
    [sym__generic_type_constructor] = STATE(320),
    [sym_tupling_constructor] = STATE(315),
    [sym_tuple] = STATE(320),
    [sym_list] = STATE(320),
    [sym_parenthesized_constructor] = STATE(320),
    [sym_variable_identifier] = STATE(322),
    [sym__type_constructors] = STATE(315),
    [sym_qualified_type_constructor] = STATE(323),
    [anon_sym_LPAREN] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(625),
    [sym_list_constructor] = ACTIONS(625),
    [sym_function_constructor] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(627),
    [sym__variable_pattern] = ACTIONS(629),
    [sym__constructor_pattern] = ACTIONS(639),
    [sym_module_identifier] = ACTIONS(633),
    [sym_comment] = ACTIONS(5),
  },
  [418] = {
    [sym__layout_semicolon] = ACTIONS(1131),
    [anon_sym_SEMI] = ACTIONS(1134),
    [anon_sym_DASH_GT] = ACTIONS(1134),
    [sym_comment] = ACTIONS(5),
  },
  [419] = {
    [anon_sym_COMMA] = ACTIONS(1137),
    [anon_sym_RPAREN] = ACTIONS(1139),
    [sym_comment] = ACTIONS(5),
  },
  [420] = {
    [sym_type] = STATE(498),
    [sym__generic_type_constructor] = STATE(320),
    [sym_tupling_constructor] = STATE(315),
    [sym_tuple] = STATE(320),
    [sym_list] = STATE(320),
    [sym_parenthesized_constructor] = STATE(320),
    [sym_variable_identifier] = STATE(322),
    [sym__type_constructors] = STATE(315),
    [sym_qualified_type_constructor] = STATE(323),
    [anon_sym_LPAREN] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(625),
    [sym_list_constructor] = ACTIONS(625),
    [sym_function_constructor] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(627),
    [sym__variable_pattern] = ACTIONS(629),
    [sym__constructor_pattern] = ACTIONS(639),
    [sym_module_identifier] = ACTIONS(633),
    [sym_comment] = ACTIONS(5),
  },
  [421] = {
    [anon_sym_EQ_GT] = ACTIONS(1141),
    [sym_comment] = ACTIONS(5),
  },
  [422] = {
    [anon_sym_COMMA] = ACTIONS(745),
    [anon_sym_RPAREN] = ACTIONS(1143),
    [sym_comment] = ACTIONS(5),
  },
  [423] = {
    [sym_type] = STATE(501),
    [sym__generic_type_constructor] = STATE(320),
    [sym_tupling_constructor] = STATE(315),
    [sym_tuple] = STATE(320),
    [sym_list] = STATE(320),
    [sym_parenthesized_constructor] = STATE(320),
    [sym_variable_identifier] = STATE(322),
    [sym__type_constructors] = STATE(315),
    [sym_qualified_type_constructor] = STATE(323),
    [anon_sym_LPAREN] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(625),
    [sym_list_constructor] = ACTIONS(625),
    [sym_function_constructor] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(627),
    [sym__variable_pattern] = ACTIONS(629),
    [sym__constructor_pattern] = ACTIONS(639),
    [sym_module_identifier] = ACTIONS(633),
    [sym_comment] = ACTIONS(5),
  },
  [424] = {
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(85),
    [sym_unit_type] = ACTIONS(85),
    [sym_list_constructor] = ACTIONS(85),
    [sym_function_constructor] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(85),
    [sym__constructor_pattern] = ACTIONS(219),
    [sym_module_identifier] = ACTIONS(219),
    [sym_comment] = ACTIONS(5),
  },
  [425] = {
    [sym_constructor_identifier] = STATE(492),
    [sym__constructor_pattern] = ACTIONS(917),
    [sym_module_identifier] = ACTIONS(939),
    [sym_comment] = ACTIONS(5),
  },
  [426] = {
    [sym_constructor_identifier] = STATE(492),
    [sym__constructor_pattern] = ACTIONS(917),
    [anon_sym_DOT] = ACTIONS(1145),
    [sym_comment] = ACTIONS(5),
  },
  [427] = {
    [sym_type] = STATE(498),
    [sym__generic_type_constructor] = STATE(327),
    [sym_tupling_constructor] = STATE(315),
    [sym_tuple] = STATE(327),
    [sym_list] = STATE(327),
    [sym_parenthesized_constructor] = STATE(327),
    [sym_variable_identifier] = STATE(328),
    [sym__type_constructors] = STATE(315),
    [sym_qualified_type_constructor] = STATE(323),
    [anon_sym_LPAREN] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(625),
    [sym_list_constructor] = ACTIONS(625),
    [sym_function_constructor] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(627),
    [sym__variable_pattern] = ACTIONS(273),
    [sym__constructor_pattern] = ACTIONS(639),
    [sym_module_identifier] = ACTIONS(641),
    [sym_comment] = ACTIONS(5),
  },
  [428] = {
    [sym_type] = STATE(501),
    [sym__generic_type_constructor] = STATE(327),
    [sym_tupling_constructor] = STATE(315),
    [sym_tuple] = STATE(327),
    [sym_list] = STATE(327),
    [sym_parenthesized_constructor] = STATE(327),
    [sym_variable_identifier] = STATE(328),
    [sym__type_constructors] = STATE(315),
    [sym_qualified_type_constructor] = STATE(323),
    [anon_sym_LPAREN] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(625),
    [sym_list_constructor] = ACTIONS(625),
    [sym_function_constructor] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(627),
    [sym__variable_pattern] = ACTIONS(273),
    [sym__constructor_pattern] = ACTIONS(639),
    [sym_module_identifier] = ACTIONS(641),
    [sym_comment] = ACTIONS(5),
  },
  [429] = {
    [sym__layout_semicolon] = ACTIONS(1147),
    [anon_sym_SEMI] = ACTIONS(1149),
    [anon_sym_DASH_GT] = ACTIONS(1149),
    [sym_comment] = ACTIONS(5),
  },
  [430] = {
    [anon_sym_LPAREN] = ACTIONS(1151),
    [sym_unit_type] = ACTIONS(1151),
    [sym_list_constructor] = ACTIONS(1151),
    [sym_function_constructor] = ACTIONS(1151),
    [anon_sym_LBRACK] = ACTIONS(1151),
    [anon_sym_RBRACK] = ACTIONS(1151),
    [sym__variable_pattern] = ACTIONS(1151),
    [sym__constructor_pattern] = ACTIONS(1153),
    [sym_module_identifier] = ACTIONS(1153),
    [sym_comment] = ACTIONS(5),
  },
  [431] = {
    [sym__layout_semicolon] = ACTIONS(817),
    [anon_sym_SEMI] = ACTIONS(761),
    [anon_sym_DASH_GT] = ACTIONS(761),
    [sym__variable_pattern] = ACTIONS(761),
    [sym_comment] = ACTIONS(5),
  },
  [432] = {
    [sym__constructor_pattern] = ACTIONS(1155),
    [anon_sym_DOT] = ACTIONS(1157),
    [sym_comment] = ACTIONS(5),
  },
  [433] = {
    [sym_variable_identifier] = STATE(330),
    [aux_sym_general_constructor_repeat1] = STATE(503),
    [sym__layout_semicolon] = ACTIONS(1159),
    [anon_sym_SEMI] = ACTIONS(1161),
    [anon_sym_DASH_GT] = ACTIONS(1161),
    [sym__variable_pattern] = ACTIONS(355),
    [sym_comment] = ACTIONS(5),
  },
  [434] = {
    [sym_variable_identifier] = STATE(431),
    [sym__layout_semicolon] = ACTIONS(1159),
    [anon_sym_SEMI] = ACTIONS(1161),
    [anon_sym_DASH_GT] = ACTIONS(1161),
    [sym__variable_pattern] = ACTIONS(355),
    [sym_comment] = ACTIONS(5),
  },
  [435] = {
    [sym_constructor_identifier] = STATE(505),
    [sym__constructor_pattern] = ACTIONS(357),
    [sym_module_identifier] = ACTIONS(1163),
    [sym_comment] = ACTIONS(5),
  },
  [436] = {
    [sym__layout_semicolon] = ACTIONS(1165),
    [anon_sym_SEMI] = ACTIONS(1167),
    [sym_comment] = ACTIONS(5),
  },
  [437] = {
    [sym__layout_semicolon] = ACTIONS(1169),
    [anon_sym_SEMI] = ACTIONS(1171),
    [sym_comment] = ACTIONS(5),
  },
  [438] = {
    [sym__layout_close_brace] = ACTIONS(345),
    [anon_sym_import] = ACTIONS(347),
    [anon_sym_foreign] = ACTIONS(347),
    [anon_sym_default] = ACTIONS(347),
    [anon_sym_do] = ACTIONS(347),
    [anon_sym_class] = ACTIONS(347),
    [anon_sym_instance] = ACTIONS(347),
    [anon_sym_infixl] = ACTIONS(347),
    [anon_sym_infixr] = ACTIONS(347),
    [anon_sym_infix] = ACTIONS(347),
    [anon_sym_data] = ACTIONS(347),
    [anon_sym_newtype] = ACTIONS(347),
    [anon_sym_type] = ACTIONS(347),
    [sym__variable_pattern] = ACTIONS(349),
    [sym__constructor_pattern] = ACTIONS(349),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(349),
    [anon_sym_SQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(347),
    [sym__integer_literal] = ACTIONS(347),
    [sym__octal_literal] = ACTIONS(347),
    [sym__hexidecimal_literal] = ACTIONS(347),
  },
  [439] = {
    [ts_builtin_sym_end] = ACTIONS(1173),
    [sym_comment] = ACTIONS(5),
  },
  [440] = {
    [sym__layout_semicolon] = ACTIONS(1175),
    [anon_sym_SEMI] = ACTIONS(1177),
    [sym_comment] = ACTIONS(5),
  },
  [441] = {
    [anon_sym_COMMA] = ACTIONS(1179),
    [anon_sym_RPAREN] = ACTIONS(1179),
    [sym_comment] = ACTIONS(5),
  },
  [442] = {
    [sym_export] = STATE(507),
    [sym__identifier] = STATE(217),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [443] = {
    [anon_sym_where] = ACTIONS(1181),
    [sym_comment] = ACTIONS(5),
  },
  [444] = {
    [anon_sym_RPAREN] = ACTIONS(1183),
    [sym_comment] = ACTIONS(5),
  },
  [445] = {
    [aux_sym_export_repeat1] = STATE(509),
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(1183),
    [sym_comment] = ACTIONS(5),
  },
  [446] = {
    [sym__layout_semicolon] = ACTIONS(1185),
    [anon_sym_SEMI] = ACTIONS(1187),
    [sym_comment] = ACTIONS(5),
  },
  [447] = {
    [anon_sym_RPAREN] = ACTIONS(1189),
    [sym_comment] = ACTIONS(5),
  },
  [448] = {
    [aux_sym_export_repeat1] = STATE(511),
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(1189),
    [sym_comment] = ACTIONS(5),
  },
  [449] = {
    [anon_sym_LPAREN] = ACTIONS(1191),
    [anon_sym_COMMA] = ACTIONS(1193),
    [anon_sym_RPAREN] = ACTIONS(1193),
    [sym_comment] = ACTIONS(5),
  },
  [450] = {
    [sym__identifier] = STATE(513),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [451] = {
    [sym__layout_semicolon] = ACTIONS(1195),
    [anon_sym_SEMI] = ACTIONS(1197),
    [sym_comment] = ACTIONS(5),
  },
  [452] = {
    [sym__identifier] = STATE(515),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_DOT_DOT] = ACTIONS(1199),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [453] = {
    [anon_sym_COMMA] = ACTIONS(983),
    [anon_sym_RPAREN] = ACTIONS(1201),
    [sym_comment] = ACTIONS(5),
  },
  [454] = {
    [sym__variable_pattern] = ACTIONS(583),
    [sym__constructor_pattern] = ACTIONS(585),
    [sym_comment] = ACTIONS(5),
  },
  [455] = {
    [sym__layout_semicolon] = ACTIONS(1203),
    [anon_sym_SEMI] = ACTIONS(1205),
    [sym_comment] = ACTIONS(5),
  },
  [456] = {
    [anon_sym_COMMA] = ACTIONS(1207),
    [anon_sym_RPAREN] = ACTIONS(1207),
    [sym_comment] = ACTIONS(5),
  },
  [457] = {
    [anon_sym_COMMA] = ACTIONS(1209),
    [anon_sym_RPAREN] = ACTIONS(1209),
    [sym_comment] = ACTIONS(5),
  },
  [458] = {
    [sym__constructor_pattern] = ACTIONS(1211),
    [sym_comment] = ACTIONS(5),
  },
  [459] = {
    [sym__layout_semicolon] = ACTIONS(1213),
    [anon_sym_SEMI] = ACTIONS(1215),
    [sym_comment] = ACTIONS(5),
  },
  [460] = {
    [sym__layout_close_brace] = ACTIONS(1217),
    [anon_sym_infixl] = ACTIONS(1219),
    [anon_sym_infixr] = ACTIONS(1219),
    [anon_sym_infix] = ACTIONS(1219),
    [sym__variable_pattern] = ACTIONS(1221),
    [sym__constructor_pattern] = ACTIONS(1221),
    [sym_comment] = ACTIONS(5),
  },
  [461] = {
    [sym__layout_semicolon] = ACTIONS(1223),
    [anon_sym_SEMI] = ACTIONS(1225),
    [sym_comment] = ACTIONS(5),
  },
  [462] = {
    [sym__layout_semicolon] = ACTIONS(1227),
    [anon_sym_SEMI] = ACTIONS(1229),
    [sym_comment] = ACTIONS(5),
  },
  [463] = {
    [anon_sym_RBRACE] = ACTIONS(1219),
    [anon_sym_infixl] = ACTIONS(1219),
    [anon_sym_infixr] = ACTIONS(1219),
    [anon_sym_infix] = ACTIONS(1219),
    [sym__variable_pattern] = ACTIONS(1221),
    [sym__constructor_pattern] = ACTIONS(1221),
    [sym_comment] = ACTIONS(5),
  },
  [464] = {
    [sym__layout_semicolon] = ACTIONS(1231),
    [anon_sym_SEMI] = ACTIONS(1233),
    [sym_comment] = ACTIONS(5),
  },
  [465] = {
    [sym__layout_semicolon] = ACTIONS(1235),
    [anon_sym_SEMI] = ACTIONS(1237),
    [sym_comment] = ACTIONS(5),
  },
  [466] = {
    [sym__layout_semicolon] = ACTIONS(1239),
    [anon_sym_SEMI] = ACTIONS(1241),
    [sym_comment] = ACTIONS(5),
  },
  [467] = {
    [sym__layout_semicolon] = ACTIONS(1243),
    [anon_sym_SEMI] = ACTIONS(1245),
    [sym_comment] = ACTIONS(5),
  },
  [468] = {
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_RPAREN] = ACTIONS(1247),
    [sym_comment] = ACTIONS(5),
  },
  [469] = {
    [sym__layout_semicolon] = ACTIONS(1249),
    [anon_sym_SEMI] = ACTIONS(1251),
    [anon_sym_PIPE] = ACTIONS(1251),
    [anon_sym_deriving] = ACTIONS(1251),
    [sym_comment] = ACTIONS(5),
  },
  [470] = {
    [sym__layout_semicolon] = ACTIONS(1253),
    [anon_sym_SEMI] = ACTIONS(1255),
    [anon_sym_PIPE] = ACTIONS(1255),
    [anon_sym_deriving] = ACTIONS(1255),
    [sym_comment] = ACTIONS(5),
  },
  [471] = {
    [sym_field] = STATE(520),
    [sym_variable_identifier] = STATE(383),
    [sym__variable_pattern] = ACTIONS(629),
    [sym_comment] = ACTIONS(5),
  },
  [472] = {
    [anon_sym_RBRACE] = ACTIONS(1257),
    [anon_sym_COMMA] = ACTIONS(1259),
    [sym_comment] = ACTIONS(5),
  },
  [473] = {
    [sym_variable_identifier] = STATE(523),
    [sym__variable_pattern] = ACTIONS(629),
    [sym_comment] = ACTIONS(5),
  },
  [474] = {
    [sym_strict] = STATE(525),
    [sym__identifier] = STATE(525),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_BANG] = ACTIONS(1261),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [475] = {
    [anon_sym_COMMA] = ACTIONS(1263),
    [anon_sym_COLON_COLON] = ACTIONS(1265),
    [sym_comment] = ACTIONS(5),
  },
  [476] = {
    [sym__layout_semicolon] = ACTIONS(1267),
    [anon_sym_SEMI] = ACTIONS(1269),
    [sym_comment] = ACTIONS(5),
  },
  [477] = {
    [anon_sym_RPAREN] = ACTIONS(1271),
    [sym_comment] = ACTIONS(5),
  },
  [478] = {
    [anon_sym_LPAREN] = ACTIONS(773),
    [anon_sym__] = ACTIONS(773),
    [sym__variable_pattern] = ACTIONS(1273),
    [sym__constructor_pattern] = ACTIONS(1273),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1273),
    [anon_sym_SQUOTE] = ACTIONS(773),
    [anon_sym_DQUOTE] = ACTIONS(773),
    [sym__integer_literal] = ACTIONS(773),
    [sym__octal_literal] = ACTIONS(773),
    [sym__hexidecimal_literal] = ACTIONS(773),
  },
  [479] = {
    [anon_sym_LPAREN] = ACTIONS(777),
    [anon_sym_DASH] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_COLON] = ACTIONS(777),
    [anon_sym_BANG] = ACTIONS(777),
    [sym__variable_pattern] = ACTIONS(1275),
    [sym__constructor_pattern] = ACTIONS(1275),
    [anon_sym_DOT] = ACTIONS(777),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1275),
    [anon_sym_SQUOTE] = ACTIONS(777),
    [anon_sym_DQUOTE] = ACTIONS(777),
    [anon_sym_POUND] = ACTIONS(777),
    [anon_sym_DOLLAR] = ACTIONS(777),
    [anon_sym_PERCENT] = ACTIONS(777),
    [anon_sym_AMP] = ACTIONS(777),
    [anon_sym_1] = ACTIONS(777),
    [anon_sym_PLUS] = ACTIONS(777),
    [anon_sym_SLASH] = ACTIONS(777),
    [anon_sym_LT] = ACTIONS(777),
    [anon_sym_GT] = ACTIONS(777),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_CARET] = ACTIONS(777),
    [sym__integer_literal] = ACTIONS(777),
    [sym__octal_literal] = ACTIONS(777),
    [sym__hexidecimal_literal] = ACTIONS(777),
  },
  [480] = {
    [sym__function_pattern] = STATE(308),
    [sym_parenthesized_pattern] = STATE(94),
    [sym_as_pattern] = STATE(94),
    [sym_wildcard] = STATE(94),
    [sym__variable] = STATE(399),
    [sym_qualified_variable_identifier] = STATE(96),
    [sym__literal] = STATE(94),
    [sym__identifier] = STATE(97),
    [sym_simple_type] = STATE(98),
    [sym_variable_identifier] = STATE(99),
    [sym_constructor_identifier] = STATE(400),
    [sym_integer] = STATE(90),
    [sym_char] = STATE(90),
    [sym_string] = STATE(90),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym__] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(365),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [481] = {
    [anon_sym_LPAREN] = ACTIONS(789),
    [anon_sym_DASH] = ACTIONS(789),
    [anon_sym__] = ACTIONS(789),
    [anon_sym_BANG] = ACTIONS(789),
    [sym__variable_pattern] = ACTIONS(1277),
    [sym__constructor_pattern] = ACTIONS(1277),
    [anon_sym_DOT] = ACTIONS(789),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1277),
    [anon_sym_SQUOTE] = ACTIONS(789),
    [anon_sym_DQUOTE] = ACTIONS(789),
    [anon_sym_POUND] = ACTIONS(789),
    [anon_sym_DOLLAR] = ACTIONS(789),
    [anon_sym_PERCENT] = ACTIONS(789),
    [anon_sym_AMP] = ACTIONS(789),
    [anon_sym_1] = ACTIONS(789),
    [anon_sym_PLUS] = ACTIONS(789),
    [anon_sym_SLASH] = ACTIONS(789),
    [anon_sym_LT] = ACTIONS(789),
    [anon_sym_GT] = ACTIONS(789),
    [anon_sym_QMARK] = ACTIONS(789),
    [anon_sym_CARET] = ACTIONS(789),
    [sym__integer_literal] = ACTIONS(789),
    [sym__octal_literal] = ACTIONS(789),
    [sym__hexidecimal_literal] = ACTIONS(789),
  },
  [482] = {
    [anon_sym_RBRACE] = ACTIONS(1279),
    [anon_sym_COMMA] = ACTIONS(1279),
    [sym_comment] = ACTIONS(5),
  },
  [483] = {
    [sym_label] = STATE(528),
    [sym__identifier] = STATE(312),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [484] = {
    [anon_sym_RBRACE] = ACTIONS(1281),
    [anon_sym_COMMA] = ACTIONS(1281),
    [sym_comment] = ACTIONS(5),
  },
  [485] = {
    [anon_sym_LPAREN] = ACTIONS(1117),
    [anon_sym_COMMA] = ACTIONS(1117),
    [anon_sym_RPAREN] = ACTIONS(1117),
    [anon_sym_DASH_GT] = ACTIONS(1117),
    [sym_unit_type] = ACTIONS(1117),
    [sym_list_constructor] = ACTIONS(1117),
    [sym_function_constructor] = ACTIONS(1117),
    [anon_sym_LBRACK] = ACTIONS(1117),
    [anon_sym_RBRACK] = ACTIONS(1117),
    [sym__variable_pattern] = ACTIONS(1117),
    [sym__constructor_pattern] = ACTIONS(1283),
    [sym_module_identifier] = ACTIONS(1283),
    [sym_comment] = ACTIONS(5),
  },
  [486] = {
    [anon_sym_COMMA] = ACTIONS(1119),
    [anon_sym_RPAREN] = ACTIONS(1285),
    [sym_comment] = ACTIONS(5),
  },
  [487] = {
    [anon_sym_LPAREN] = ACTIONS(1134),
    [anon_sym_COMMA] = ACTIONS(1134),
    [anon_sym_RPAREN] = ACTIONS(1134),
    [anon_sym_DASH_GT] = ACTIONS(1134),
    [sym_unit_type] = ACTIONS(1134),
    [sym_list_constructor] = ACTIONS(1134),
    [sym_function_constructor] = ACTIONS(1134),
    [anon_sym_LBRACK] = ACTIONS(1134),
    [anon_sym_RBRACK] = ACTIONS(1134),
    [sym__variable_pattern] = ACTIONS(1134),
    [sym__constructor_pattern] = ACTIONS(1287),
    [sym_module_identifier] = ACTIONS(1287),
    [sym_comment] = ACTIONS(5),
  },
  [488] = {
    [anon_sym_COMMA] = ACTIONS(1137),
    [anon_sym_RPAREN] = ACTIONS(1290),
    [sym_comment] = ACTIONS(5),
  },
  [489] = {
    [anon_sym_COMMA] = ACTIONS(1292),
    [anon_sym_RPAREN] = ACTIONS(1292),
    [sym_comment] = ACTIONS(5),
  },
  [490] = {
    [sym__layout_semicolon] = ACTIONS(1294),
    [anon_sym_SEMI] = ACTIONS(1296),
    [anon_sym_DASH_GT] = ACTIONS(1296),
    [sym_comment] = ACTIONS(5),
  },
  [491] = {
    [anon_sym_LPAREN] = ACTIONS(1149),
    [anon_sym_COMMA] = ACTIONS(1149),
    [anon_sym_RPAREN] = ACTIONS(1149),
    [anon_sym_DASH_GT] = ACTIONS(1149),
    [sym_unit_type] = ACTIONS(1149),
    [sym_list_constructor] = ACTIONS(1149),
    [sym_function_constructor] = ACTIONS(1149),
    [anon_sym_LBRACK] = ACTIONS(1149),
    [anon_sym_RBRACK] = ACTIONS(1149),
    [sym__variable_pattern] = ACTIONS(1149),
    [sym__constructor_pattern] = ACTIONS(1298),
    [sym_module_identifier] = ACTIONS(1298),
    [sym_comment] = ACTIONS(5),
  },
  [492] = {
    [sym_variable_identifier] = STATE(164),
    [aux_sym_general_constructor_repeat1] = STATE(531),
    [anon_sym_LPAREN] = ACTIONS(1161),
    [anon_sym_COMMA] = ACTIONS(1161),
    [anon_sym_RPAREN] = ACTIONS(1161),
    [anon_sym_DASH_GT] = ACTIONS(1161),
    [sym_unit_type] = ACTIONS(1161),
    [sym_list_constructor] = ACTIONS(1161),
    [sym_function_constructor] = ACTIONS(1161),
    [anon_sym_LBRACK] = ACTIONS(1161),
    [anon_sym_RBRACK] = ACTIONS(1161),
    [sym__variable_pattern] = ACTIONS(273),
    [sym__constructor_pattern] = ACTIONS(1300),
    [sym_module_identifier] = ACTIONS(1300),
    [sym_comment] = ACTIONS(5),
  },
  [493] = {
    [sym_variable_identifier] = STATE(279),
    [anon_sym_LPAREN] = ACTIONS(1161),
    [anon_sym_COMMA] = ACTIONS(1161),
    [anon_sym_RPAREN] = ACTIONS(1161),
    [anon_sym_DASH_GT] = ACTIONS(1161),
    [sym_unit_type] = ACTIONS(1161),
    [sym_list_constructor] = ACTIONS(1161),
    [sym_function_constructor] = ACTIONS(1161),
    [anon_sym_LBRACK] = ACTIONS(1161),
    [anon_sym_RBRACK] = ACTIONS(1161),
    [sym__variable_pattern] = ACTIONS(273),
    [sym__constructor_pattern] = ACTIONS(1300),
    [sym_module_identifier] = ACTIONS(1300),
    [sym_comment] = ACTIONS(5),
  },
  [494] = {
    [sym_constructor_identifier] = STATE(532),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_module_identifier] = ACTIONS(1163),
    [sym_comment] = ACTIONS(5),
  },
  [495] = {
    [anon_sym_COMMA] = ACTIONS(1302),
    [anon_sym_RPAREN] = ACTIONS(1302),
    [sym_comment] = ACTIONS(5),
  },
  [496] = {
    [sym_type] = STATE(533),
    [sym__generic_type_constructor] = STATE(320),
    [sym_tupling_constructor] = STATE(315),
    [sym_tuple] = STATE(320),
    [sym_list] = STATE(320),
    [sym_parenthesized_constructor] = STATE(320),
    [sym_variable_identifier] = STATE(322),
    [sym__type_constructors] = STATE(315),
    [sym_qualified_type_constructor] = STATE(323),
    [anon_sym_LPAREN] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(625),
    [sym_list_constructor] = ACTIONS(625),
    [sym_function_constructor] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(627),
    [sym__variable_pattern] = ACTIONS(629),
    [sym__constructor_pattern] = ACTIONS(639),
    [sym_module_identifier] = ACTIONS(633),
    [sym_comment] = ACTIONS(5),
  },
  [497] = {
    [sym__layout_semicolon] = ACTIONS(1304),
    [anon_sym_SEMI] = ACTIONS(1306),
    [anon_sym_DASH_GT] = ACTIONS(1306),
    [sym_comment] = ACTIONS(5),
  },
  [498] = {
    [anon_sym_LPAREN] = ACTIONS(1167),
    [anon_sym_COMMA] = ACTIONS(1167),
    [anon_sym_RPAREN] = ACTIONS(1167),
    [sym_unit_type] = ACTIONS(1167),
    [sym_list_constructor] = ACTIONS(1167),
    [sym_function_constructor] = ACTIONS(1167),
    [anon_sym_LBRACK] = ACTIONS(1167),
    [anon_sym_RBRACK] = ACTIONS(1167),
    [sym__variable_pattern] = ACTIONS(1167),
    [sym__constructor_pattern] = ACTIONS(1308),
    [sym_module_identifier] = ACTIONS(1308),
    [sym_comment] = ACTIONS(5),
  },
  [499] = {
    [anon_sym_LPAREN] = ACTIONS(1310),
    [sym_unit_type] = ACTIONS(1310),
    [sym_list_constructor] = ACTIONS(1310),
    [sym_function_constructor] = ACTIONS(1310),
    [anon_sym_LBRACK] = ACTIONS(1310),
    [sym__variable_pattern] = ACTIONS(1310),
    [sym__constructor_pattern] = ACTIONS(1003),
    [sym_module_identifier] = ACTIONS(1003),
    [sym_comment] = ACTIONS(5),
  },
  [500] = {
    [anon_sym_EQ_GT] = ACTIONS(1312),
    [sym_comment] = ACTIONS(5),
  },
  [501] = {
    [anon_sym_LPAREN] = ACTIONS(1171),
    [anon_sym_COMMA] = ACTIONS(1171),
    [anon_sym_RPAREN] = ACTIONS(1171),
    [sym_unit_type] = ACTIONS(1171),
    [sym_list_constructor] = ACTIONS(1171),
    [sym_function_constructor] = ACTIONS(1171),
    [anon_sym_LBRACK] = ACTIONS(1171),
    [anon_sym_RBRACK] = ACTIONS(1171),
    [sym__variable_pattern] = ACTIONS(1171),
    [sym__constructor_pattern] = ACTIONS(1314),
    [sym_module_identifier] = ACTIONS(1314),
    [sym_comment] = ACTIONS(5),
  },
  [502] = {
    [sym_constructor_identifier] = STATE(532),
    [sym__constructor_pattern] = ACTIONS(917),
    [sym_module_identifier] = ACTIONS(1163),
    [sym_comment] = ACTIONS(5),
  },
  [503] = {
    [sym_variable_identifier] = STATE(431),
    [sym__layout_semicolon] = ACTIONS(1316),
    [anon_sym_SEMI] = ACTIONS(1318),
    [anon_sym_DASH_GT] = ACTIONS(1318),
    [sym__variable_pattern] = ACTIONS(355),
    [sym_comment] = ACTIONS(5),
  },
  [504] = {
    [sym__constructor_pattern] = ACTIONS(1320),
    [anon_sym_DOT] = ACTIONS(1322),
    [sym_comment] = ACTIONS(5),
  },
  [505] = {
    [sym_variable_identifier] = STATE(330),
    [aux_sym_general_constructor_repeat1] = STATE(535),
    [sym__layout_semicolon] = ACTIONS(1316),
    [anon_sym_SEMI] = ACTIONS(1318),
    [anon_sym_DASH_GT] = ACTIONS(1318),
    [sym__variable_pattern] = ACTIONS(355),
    [sym_comment] = ACTIONS(5),
  },
  [506] = {
    [sym__layout_close_brace] = ACTIONS(671),
    [anon_sym_import] = ACTIONS(673),
    [anon_sym_foreign] = ACTIONS(673),
    [anon_sym_default] = ACTIONS(673),
    [anon_sym_do] = ACTIONS(673),
    [anon_sym_class] = ACTIONS(673),
    [anon_sym_instance] = ACTIONS(673),
    [anon_sym_infixl] = ACTIONS(673),
    [anon_sym_infixr] = ACTIONS(673),
    [anon_sym_infix] = ACTIONS(673),
    [anon_sym_data] = ACTIONS(673),
    [anon_sym_newtype] = ACTIONS(673),
    [anon_sym_type] = ACTIONS(673),
    [sym__variable_pattern] = ACTIONS(675),
    [sym__constructor_pattern] = ACTIONS(675),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(675),
    [anon_sym_SQUOTE] = ACTIONS(673),
    [anon_sym_DQUOTE] = ACTIONS(673),
    [sym__integer_literal] = ACTIONS(673),
    [sym__octal_literal] = ACTIONS(673),
    [sym__hexidecimal_literal] = ACTIONS(673),
  },
  [507] = {
    [anon_sym_COMMA] = ACTIONS(1324),
    [anon_sym_RPAREN] = ACTIONS(1324),
    [sym_comment] = ACTIONS(5),
  },
  [508] = {
    [anon_sym_COMMA] = ACTIONS(1326),
    [anon_sym_RPAREN] = ACTIONS(1326),
    [sym_comment] = ACTIONS(5),
  },
  [509] = {
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_RPAREN] = ACTIONS(1328),
    [sym_comment] = ACTIONS(5),
  },
  [510] = {
    [aux_sym_import_specification_repeat1] = STATE(538),
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_RPAREN] = ACTIONS(1330),
    [sym_comment] = ACTIONS(5),
  },
  [511] = {
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_RPAREN] = ACTIONS(1332),
    [sym_comment] = ACTIONS(5),
  },
  [512] = {
    [sym__identifier] = STATE(541),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_DOT_DOT] = ACTIONS(1334),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [513] = {
    [anon_sym_LPAREN] = ACTIONS(1336),
    [anon_sym_COMMA] = ACTIONS(1338),
    [anon_sym_RPAREN] = ACTIONS(1338),
    [sym_comment] = ACTIONS(5),
  },
  [514] = {
    [anon_sym_RPAREN] = ACTIONS(1332),
    [sym_comment] = ACTIONS(5),
  },
  [515] = {
    [aux_sym_export_repeat1] = STATE(543),
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(1332),
    [sym_comment] = ACTIONS(5),
  },
  [516] = {
    [sym__layout_semicolon] = ACTIONS(1340),
    [anon_sym_SEMI] = ACTIONS(1342),
    [sym_comment] = ACTIONS(5),
  },
  [517] = {
    [sym__layout_close_brace] = ACTIONS(1344),
    [anon_sym_infixl] = ACTIONS(1346),
    [anon_sym_infixr] = ACTIONS(1346),
    [anon_sym_infix] = ACTIONS(1346),
    [sym__variable_pattern] = ACTIONS(1348),
    [sym__constructor_pattern] = ACTIONS(1348),
    [sym_comment] = ACTIONS(5),
  },
  [518] = {
    [anon_sym_RBRACE] = ACTIONS(1346),
    [anon_sym_infixl] = ACTIONS(1346),
    [anon_sym_infixr] = ACTIONS(1346),
    [anon_sym_infix] = ACTIONS(1346),
    [sym__variable_pattern] = ACTIONS(1348),
    [sym__constructor_pattern] = ACTIONS(1348),
    [sym_comment] = ACTIONS(5),
  },
  [519] = {
    [sym__layout_semicolon] = ACTIONS(1350),
    [anon_sym_SEMI] = ACTIONS(1352),
    [sym_comment] = ACTIONS(5),
  },
  [520] = {
    [anon_sym_RBRACE] = ACTIONS(1354),
    [anon_sym_COMMA] = ACTIONS(1354),
    [sym_comment] = ACTIONS(5),
  },
  [521] = {
    [sym__layout_semicolon] = ACTIONS(1356),
    [anon_sym_SEMI] = ACTIONS(1358),
    [anon_sym_PIPE] = ACTIONS(1358),
    [anon_sym_deriving] = ACTIONS(1358),
    [sym_comment] = ACTIONS(5),
  },
  [522] = {
    [sym_field] = STATE(544),
    [sym_variable_identifier] = STATE(383),
    [sym__variable_pattern] = ACTIONS(629),
    [sym_comment] = ACTIONS(5),
  },
  [523] = {
    [anon_sym_COMMA] = ACTIONS(1360),
    [anon_sym_COLON_COLON] = ACTIONS(1360),
    [sym_comment] = ACTIONS(5),
  },
  [524] = {
    [sym__identifier] = STATE(545),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [525] = {
    [anon_sym_RBRACE] = ACTIONS(1362),
    [anon_sym_COMMA] = ACTIONS(1362),
    [sym_comment] = ACTIONS(5),
  },
  [526] = {
    [sym_variable_identifier] = STATE(546),
    [sym__variable_pattern] = ACTIONS(629),
    [sym_comment] = ACTIONS(5),
  },
  [527] = {
    [sym_strict] = STATE(547),
    [sym__identifier] = STATE(547),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_BANG] = ACTIONS(1261),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [528] = {
    [anon_sym_RBRACE] = ACTIONS(1364),
    [anon_sym_COMMA] = ACTIONS(1364),
    [sym_comment] = ACTIONS(5),
  },
  [529] = {
    [anon_sym_LPAREN] = ACTIONS(1296),
    [anon_sym_COMMA] = ACTIONS(1296),
    [anon_sym_RPAREN] = ACTIONS(1296),
    [anon_sym_DASH_GT] = ACTIONS(1296),
    [sym_unit_type] = ACTIONS(1296),
    [sym_list_constructor] = ACTIONS(1296),
    [sym_function_constructor] = ACTIONS(1296),
    [anon_sym_LBRACK] = ACTIONS(1296),
    [anon_sym_RBRACK] = ACTIONS(1296),
    [sym__variable_pattern] = ACTIONS(1296),
    [sym__constructor_pattern] = ACTIONS(1366),
    [sym_module_identifier] = ACTIONS(1366),
    [sym_comment] = ACTIONS(5),
  },
  [530] = {
    [anon_sym_LPAREN] = ACTIONS(1306),
    [anon_sym_COMMA] = ACTIONS(1306),
    [anon_sym_RPAREN] = ACTIONS(1306),
    [anon_sym_DASH_GT] = ACTIONS(1306),
    [sym_unit_type] = ACTIONS(1306),
    [sym_list_constructor] = ACTIONS(1306),
    [sym_function_constructor] = ACTIONS(1306),
    [anon_sym_LBRACK] = ACTIONS(1306),
    [anon_sym_RBRACK] = ACTIONS(1306),
    [sym__variable_pattern] = ACTIONS(1306),
    [sym__constructor_pattern] = ACTIONS(1368),
    [sym_module_identifier] = ACTIONS(1368),
    [sym_comment] = ACTIONS(5),
  },
  [531] = {
    [sym_variable_identifier] = STATE(279),
    [anon_sym_LPAREN] = ACTIONS(1318),
    [anon_sym_COMMA] = ACTIONS(1318),
    [anon_sym_RPAREN] = ACTIONS(1318),
    [anon_sym_DASH_GT] = ACTIONS(1318),
    [sym_unit_type] = ACTIONS(1318),
    [sym_list_constructor] = ACTIONS(1318),
    [sym_function_constructor] = ACTIONS(1318),
    [anon_sym_LBRACK] = ACTIONS(1318),
    [anon_sym_RBRACK] = ACTIONS(1318),
    [sym__variable_pattern] = ACTIONS(273),
    [sym__constructor_pattern] = ACTIONS(1370),
    [sym_module_identifier] = ACTIONS(1370),
    [sym_comment] = ACTIONS(5),
  },
  [532] = {
    [sym_variable_identifier] = STATE(164),
    [aux_sym_general_constructor_repeat1] = STATE(548),
    [anon_sym_LPAREN] = ACTIONS(1318),
    [anon_sym_COMMA] = ACTIONS(1318),
    [anon_sym_RPAREN] = ACTIONS(1318),
    [anon_sym_DASH_GT] = ACTIONS(1318),
    [sym_unit_type] = ACTIONS(1318),
    [sym_list_constructor] = ACTIONS(1318),
    [sym_function_constructor] = ACTIONS(1318),
    [anon_sym_LBRACK] = ACTIONS(1318),
    [anon_sym_RBRACK] = ACTIONS(1318),
    [sym__variable_pattern] = ACTIONS(273),
    [sym__constructor_pattern] = ACTIONS(1370),
    [sym_module_identifier] = ACTIONS(1370),
    [sym_comment] = ACTIONS(5),
  },
  [533] = {
    [anon_sym_COMMA] = ACTIONS(1372),
    [anon_sym_RPAREN] = ACTIONS(1372),
    [sym_comment] = ACTIONS(5),
  },
  [534] = {
    [anon_sym_LPAREN] = ACTIONS(1374),
    [sym_unit_type] = ACTIONS(1374),
    [sym_list_constructor] = ACTIONS(1374),
    [sym_function_constructor] = ACTIONS(1374),
    [anon_sym_LBRACK] = ACTIONS(1374),
    [sym__variable_pattern] = ACTIONS(1374),
    [sym__constructor_pattern] = ACTIONS(1211),
    [sym_module_identifier] = ACTIONS(1211),
    [sym_comment] = ACTIONS(5),
  },
  [535] = {
    [sym_variable_identifier] = STATE(431),
    [sym__layout_semicolon] = ACTIONS(1376),
    [anon_sym_SEMI] = ACTIONS(1378),
    [anon_sym_DASH_GT] = ACTIONS(1378),
    [sym__variable_pattern] = ACTIONS(355),
    [sym_comment] = ACTIONS(5),
  },
  [536] = {
    [anon_sym_COMMA] = ACTIONS(1380),
    [anon_sym_RPAREN] = ACTIONS(1380),
    [sym_comment] = ACTIONS(5),
  },
  [537] = {
    [sym__layout_semicolon] = ACTIONS(1382),
    [anon_sym_SEMI] = ACTIONS(1384),
    [sym_comment] = ACTIONS(5),
  },
  [538] = {
    [anon_sym_COMMA] = ACTIONS(983),
    [anon_sym_RPAREN] = ACTIONS(1386),
    [sym_comment] = ACTIONS(5),
  },
  [539] = {
    [aux_sym_import_specification_repeat1] = STATE(550),
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_RPAREN] = ACTIONS(1386),
    [sym_comment] = ACTIONS(5),
  },
  [540] = {
    [anon_sym_RPAREN] = ACTIONS(1388),
    [sym_comment] = ACTIONS(5),
  },
  [541] = {
    [aux_sym_export_repeat1] = STATE(552),
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(1388),
    [sym_comment] = ACTIONS(5),
  },
  [542] = {
    [sym__identifier] = STATE(554),
    [sym_variable_identifier] = STATE(116),
    [sym_constructor_identifier] = STATE(116),
    [anon_sym_DOT_DOT] = ACTIONS(1390),
    [sym__variable_pattern] = ACTIONS(207),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [543] = {
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_RPAREN] = ACTIONS(1392),
    [sym_comment] = ACTIONS(5),
  },
  [544] = {
    [anon_sym_RBRACE] = ACTIONS(1394),
    [anon_sym_COMMA] = ACTIONS(1394),
    [sym_comment] = ACTIONS(5),
  },
  [545] = {
    [anon_sym_RBRACE] = ACTIONS(1057),
    [anon_sym_COMMA] = ACTIONS(1057),
    [sym_comment] = ACTIONS(5),
  },
  [546] = {
    [anon_sym_COMMA] = ACTIONS(1396),
    [anon_sym_COLON_COLON] = ACTIONS(1396),
    [sym_comment] = ACTIONS(5),
  },
  [547] = {
    [anon_sym_RBRACE] = ACTIONS(1398),
    [anon_sym_COMMA] = ACTIONS(1398),
    [sym_comment] = ACTIONS(5),
  },
  [548] = {
    [sym_variable_identifier] = STATE(279),
    [anon_sym_LPAREN] = ACTIONS(1378),
    [anon_sym_COMMA] = ACTIONS(1378),
    [anon_sym_RPAREN] = ACTIONS(1378),
    [anon_sym_DASH_GT] = ACTIONS(1378),
    [sym_unit_type] = ACTIONS(1378),
    [sym_list_constructor] = ACTIONS(1378),
    [sym_function_constructor] = ACTIONS(1378),
    [anon_sym_LBRACK] = ACTIONS(1378),
    [anon_sym_RBRACK] = ACTIONS(1378),
    [sym__variable_pattern] = ACTIONS(273),
    [sym__constructor_pattern] = ACTIONS(1400),
    [sym_module_identifier] = ACTIONS(1400),
    [sym_comment] = ACTIONS(5),
  },
  [549] = {
    [sym__layout_semicolon] = ACTIONS(1402),
    [anon_sym_SEMI] = ACTIONS(1404),
    [sym_comment] = ACTIONS(5),
  },
  [550] = {
    [anon_sym_COMMA] = ACTIONS(983),
    [anon_sym_RPAREN] = ACTIONS(1406),
    [sym_comment] = ACTIONS(5),
  },
  [551] = {
    [anon_sym_COMMA] = ACTIONS(1408),
    [anon_sym_RPAREN] = ACTIONS(1408),
    [sym_comment] = ACTIONS(5),
  },
  [552] = {
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_RPAREN] = ACTIONS(1410),
    [sym_comment] = ACTIONS(5),
  },
  [553] = {
    [anon_sym_RPAREN] = ACTIONS(1410),
    [sym_comment] = ACTIONS(5),
  },
  [554] = {
    [aux_sym_export_repeat1] = STATE(558),
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(1410),
    [sym_comment] = ACTIONS(5),
  },
  [555] = {
    [aux_sym_import_specification_repeat1] = STATE(559),
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_RPAREN] = ACTIONS(1406),
    [sym_comment] = ACTIONS(5),
  },
  [556] = {
    [sym__layout_semicolon] = ACTIONS(1412),
    [anon_sym_SEMI] = ACTIONS(1414),
    [sym_comment] = ACTIONS(5),
  },
  [557] = {
    [anon_sym_COMMA] = ACTIONS(1416),
    [anon_sym_RPAREN] = ACTIONS(1416),
    [sym_comment] = ACTIONS(5),
  },
  [558] = {
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_RPAREN] = ACTIONS(1418),
    [sym_comment] = ACTIONS(5),
  },
  [559] = {
    [anon_sym_COMMA] = ACTIONS(983),
    [anon_sym_RPAREN] = ACTIONS(1420),
    [sym_comment] = ACTIONS(5),
  },
  [560] = {
    [anon_sym_COMMA] = ACTIONS(1422),
    [anon_sym_RPAREN] = ACTIONS(1422),
    [sym_comment] = ACTIONS(5),
  },
  [561] = {
    [sym__layout_semicolon] = ACTIONS(1424),
    [anon_sym_SEMI] = ACTIONS(1426),
    [sym_comment] = ACTIONS(5),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [37] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(38),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [63] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [73] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_identifier, 1),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_identifier, 1),
  [81] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_identifier, 1),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_identifier, 1),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_identifier, 1),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [93] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable, 1, .fragile = true),
  [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__general_declaration, 1),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__general_declaration, 1),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(102),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign_import, 1),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(118),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_identifier, 1),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(131),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(135),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable_symbol, 1),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable_symbol, 1),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 1),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 1),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [267] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(154),
  [269] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_variable_identifier, 2),
  [283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [297] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(169),
  [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(170),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(171),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [323] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(172),
  [329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(173),
  [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(174),
  [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(175),
  [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(176),
  [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(177),
  [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [341] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(178),
  [343] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(179),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
  [349] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 1),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 1),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
  [357] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(181),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_declaration, 2),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_declaration, 2),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [365] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(185),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_wildcard, 1),
  [369] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_wildcard, 1),
  [371] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(192),
  [373] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(193),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 1),
  [377] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 1),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 1),
  [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 1),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_head, 2),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [397] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(202),
  [399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(203),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_calling_convention, 1),
  [427] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_calling_convention, 1),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 3),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 3),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [453] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
  [469] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(247),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 1),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [479] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 1),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(251),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__constructor_symbol, 1),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__constructor_symbol, 1),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [517] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(263),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(265),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(267),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 1),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [541] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
  [547] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(281),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [553] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [559] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(283),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(287),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [567] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [569] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [571] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(289),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(293),
  [577] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [579] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [585] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 1),
  [591] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 2),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 2),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 1),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(306),
  [613] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(307),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 2),
  [619] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 2),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(314),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(315),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [631] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(317),
  [633] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(318),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__generic_type_constructor, 1),
  [639] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(324),
  [641] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(325),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(332),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(338),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 3),
  [675] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(339),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(343),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(344),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(346),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(349),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(350),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_safety, 1),
  [711] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_safety, 1),
  [713] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(355),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 4),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 4),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 4),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 4),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(360),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(361),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [731] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [741] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(363),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(365),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(367),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(368),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(373),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [763] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(375),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 4),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 4),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(381),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [811] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(389),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(390),
  [841] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [843] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [845] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [847] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [849] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(391),
  [851] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [853] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(392),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [857] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 2),
  [859] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [861] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable_symbol, 1),
  [863] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(395),
  [865] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [867] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [869] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1),
  [871] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_pattern, 3),
  [873] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_pattern, 3),
  [875] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_constructor, 2),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_as_pattern, 3),
  [879] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_as_pattern, 3),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 3),
  [883] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 3),
  [885] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(403),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 1),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(404),
  [891] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(406),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(407),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(409),
  [897] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(410),
  [899] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [901] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(414),
  [903] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(417),
  [905] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(418),
  [907] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(420),
  [909] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(421),
  [911] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(423),
  [913] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [915] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [917] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(424),
  [919] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(425),
  [921] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 1),
  [923] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 1),
  [925] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(427),
  [927] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [929] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(428),
  [931] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [933] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(429),
  [935] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [937] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [939] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(432),
  [941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [943] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [945] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(435),
  [947] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [949] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [951] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [953] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 2),
  [955] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(438),
  [957] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(438),
  [959] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
  [961] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(439),
  [963] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [965] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(442),
  [967] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(443),
  [969] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(444),
  [971] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5),
  [973] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [975] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [977] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(447),
  [979] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [981] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [983] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(450),
  [985] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(451),
  [987] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(452),
  [989] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(454),
  [991] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 5),
  [993] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 5),
  [995] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [997] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 5),
  [999] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 5),
  [1001] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [1003] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [1005] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(458),
  [1007] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [1009] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [1011] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 2),
  [1013] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 2),
  [1015] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(460),
  [1017] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(460),
  [1019] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(461),
  [1021] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(463),
  [1023] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(463),
  [1025] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(461),
  [1027] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [1029] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 5),
  [1031] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 5),
  [1033] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1035] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1037] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [1039] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [1041] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(467),
  [1043] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1045] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1047] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(470),
  [1049] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(471),
  [1051] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(473),
  [1053] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(474),
  [1055] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [1057] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [1059] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [1061] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1063] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1065] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1067] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [1069] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [1071] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [1073] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [1075] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [1077] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [1079] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [1081] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [1083] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(477),
  [1085] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(478),
  [1087] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__constructor_symbol, 1),
  [1089] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [1091] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [1093] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 3),
  [1095] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(480),
  [1097] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [1099] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2),
  [1101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 4),
  [1103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 4),
  [1105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 2),
  [1107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(483),
  [1109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(485),
  [1111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(487),
  [1113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 1),
  [1115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 3),
  [1119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(489),
  [1121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(490),
  [1123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(491),
  [1125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [1127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [1129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(494),
  [1131] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1134] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(496),
  [1139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(497),
  [1141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(499),
  [1143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(500),
  [1145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(502),
  [1147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
  [1151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 2),
  [1153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 2),
  [1155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(504),
  [1165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3),
  [1169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
  [1175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(506),
  [1177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(506),
  [1179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [1181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [1183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(508),
  [1185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [1187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [1189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(510),
  [1191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(512),
  [1193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [1195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [1197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [1199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(514),
  [1201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(516),
  [1203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 6),
  [1205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 6),
  [1207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [1209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [1211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [1213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [1215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [1217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 3),
  [1225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 3),
  [1227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(517),
  [1229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(517),
  [1231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(518),
  [1233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(518),
  [1235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 6),
  [1237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 6),
  [1239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [1241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [1243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [1245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [1247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(519),
  [1249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [1255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [1257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(521),
  [1259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(522),
  [1261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(524),
  [1263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(526),
  [1265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(527),
  [1267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [1269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [1271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_negative_literal, 4),
  [1273] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [1275] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [1277] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [1279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 2),
  [1281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label, 3),
  [1283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(529),
  [1287] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(530),
  [1292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 2),
  [1294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 4),
  [1298] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1300] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [1304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1306] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 4),
  [1308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [1312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(534),
  [1314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [1326] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [1328] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(536),
  [1330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(537),
  [1332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(539),
  [1334] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(540),
  [1336] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(542),
  [1338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [1340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [1342] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [1344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1348] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [1352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [1354] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [1356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1358] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [1360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [1362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [1364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 3),
  [1366] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1368] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1370] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1372] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 3),
  [1374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [1376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [1382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [1384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [1386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(549),
  [1388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(551),
  [1390] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(553),
  [1392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(555),
  [1394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [1396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [1398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [1400] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [1404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [1406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(556),
  [1408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [1410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(557),
  [1412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [1414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [1416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [1418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(560),
  [1420] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(561),
  [1422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [1424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
