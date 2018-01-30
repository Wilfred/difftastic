#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 591
#define SYMBOL_COUNT 240
#define ALIAS_COUNT 2
#define TOKEN_COUNT 132
#define EXTERNAL_TOKEN_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym__layout_semicolon = 1,
  sym__layout_open_brace = 2,
  sym__layout_close_brace = 3,
  anon_sym_module = 4,
  anon_sym_SEMI = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_LPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_RPAREN = 10,
  anon_sym_DOT_DOT = 11,
  anon_sym_import = 12,
  anon_sym_qualified = 13,
  anon_sym_as = 14,
  anon_sym_hiding = 15,
  anon_sym_EQ = 16,
  anon_sym_where = 17,
  anon_sym_TILDE = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_DASH = 21,
  anon_sym_AT = 22,
  anon_sym__ = 23,
  anon_sym_foreign = 24,
  sym_foreign_export = 25,
  anon_sym_ccall = 26,
  anon_sym_stdcall = 27,
  anon_sym_cplusplus = 28,
  anon_sym_jvm = 29,
  anon_sym_dotnet = 30,
  anon_sym_unsafe = 31,
  anon_sym_safe = 32,
  anon_sym_default = 33,
  anon_sym_do = 34,
  anon_sym_class = 35,
  anon_sym_instance = 36,
  anon_sym_infixl = 37,
  anon_sym_infixr = 38,
  anon_sym_infix = 39,
  anon_sym_BQUOTE = 40,
  anon_sym_COLON = 41,
  anon_sym_COLON_COLON = 42,
  anon_sym_DASH_GT = 43,
  sym_unit_type = 44,
  sym_list_constructor = 45,
  sym_function_constructor = 46,
  anon_sym_data = 47,
  anon_sym_EQ_GT = 48,
  anon_sym_PIPE = 49,
  anon_sym_deriving = 50,
  anon_sym_newtype = 51,
  anon_sym_BANG = 52,
  anon_sym_type = 53,
  sym__variable_pattern = 54,
  sym__constructor_pattern = 55,
  anon_sym_DOT = 56,
  sym_module_identifier = 57,
  sym_comment = 58,
  sym_float = 59,
  anon_sym_SQUOTE = 60,
  anon_sym_DQUOTE = 61,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 62,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 63,
  sym__ascii_large = 64,
  anon_sym_POUND = 65,
  anon_sym_DOLLAR = 66,
  anon_sym_PERCENT = 67,
  anon_sym_AMP = 68,
  anon_sym_1 = 69,
  anon_sym_PLUS = 70,
  anon_sym_SLASH = 71,
  anon_sym_LT = 72,
  anon_sym_GT = 73,
  anon_sym_QMARK = 74,
  anon_sym_CARET = 75,
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
  sym__declarations = 133,
  sym_module_exports = 134,
  sym_export = 135,
  sym_import = 136,
  sym_import_specification = 137,
  sym__declaration = 138,
  sym_function_declaration = 139,
  sym_function_head = 140,
  sym_function_body = 141,
  sym_where = 142,
  sym__function_pattern = 143,
  sym_label_pattern = 144,
  sym_irrefutable_pattern = 145,
  sym_list_pattern = 146,
  sym_tuple_pattern = 147,
  sym_parenthesized_pattern = 148,
  sym__pattern = 149,
  sym_negative_literal = 150,
  sym_general_constructor = 151,
  sym_as_pattern = 152,
  sym_labels = 153,
  sym_label = 154,
  sym_wildcard = 155,
  sym__variable = 156,
  sym_qualified_variable_identifier = 157,
  sym__expression = 158,
  sym_foreign = 159,
  sym_foreign_import = 160,
  sym_calling_convention = 161,
  sym_safety = 162,
  sym_default = 163,
  sym_do_expression = 164,
  sym_statement_list = 165,
  sym__statement = 166,
  sym_type_class = 167,
  sym_type_class_instance = 168,
  sym_fixity = 169,
  sym__op = 170,
  sym_variable_symbol = 171,
  sym_constructor_symbol = 172,
  sym_type_signature = 173,
  sym_type = 174,
  sym__generic_type_constructor = 175,
  sym_tupling_constructor = 176,
  sym_tuple = 177,
  sym_list = 178,
  sym_parenthesized_constructor = 179,
  sym_algebraic_datatype = 180,
  sym_context = 181,
  sym_class = 182,
  sym_constructors = 183,
  sym_constructor = 184,
  sym_deriving = 185,
  sym_newtype = 186,
  sym_new_constructor = 187,
  sym_field = 188,
  sym_strict = 189,
  sym_type_synonym = 190,
  sym__literal = 191,
  sym__identifier = 192,
  sym_simple_type = 193,
  sym_variable_identifier = 194,
  sym_constructor_identifier = 195,
  sym__type_constructors = 196,
  sym_qualified_type_constructor = 197,
  sym_integer = 198,
  sym_char = 199,
  sym_string = 200,
  sym__gap = 201,
  sym__graphic = 202,
  sym__small = 203,
  sym__large = 204,
  sym__symbol = 205,
  sym__variable_symbol = 206,
  sym__constructor_symbol = 207,
  sym__special = 208,
  sym__escape = 209,
  sym__char_escape = 210,
  sym__ascii = 211,
  sym__cntrl = 212,
  sym_fields = 213,
  aux_sym_module_repeat1 = 214,
  aux_sym_module_exports_repeat1 = 215,
  aux_sym_export_repeat1 = 216,
  aux_sym_import_specification_repeat1 = 217,
  aux_sym_function_head_repeat1 = 218,
  aux_sym_function_body_repeat1 = 219,
  aux_sym_tuple_pattern_repeat1 = 220,
  aux_sym_general_constructor_repeat1 = 221,
  aux_sym_labels_repeat1 = 222,
  aux_sym_statement_list_repeat1 = 223,
  aux_sym_type_class_repeat1 = 224,
  aux_sym_fixity_repeat1 = 225,
  aux_sym_variable_symbol_repeat1 = 226,
  aux_sym_constructor_symbol_repeat1 = 227,
  aux_sym_tupling_constructor_repeat1 = 228,
  aux_sym_tuple_repeat1 = 229,
  aux_sym_list_repeat1 = 230,
  aux_sym_context_repeat1 = 231,
  aux_sym_constructors_repeat1 = 232,
  aux_sym_constructor_repeat1 = 233,
  aux_sym_field_repeat1 = 234,
  aux_sym_qualified_type_constructor_repeat1 = 235,
  aux_sym_string_repeat1 = 236,
  aux_sym__escape_repeat1 = 237,
  aux_sym__escape_repeat2 = 238,
  aux_sym_fields_repeat1 = 239,
  alias_sym_type_constructor = 240,
  alias_sym_type_variable = 241,
};

static const char *ts_symbol_names[] = {
  [sym__layout_semicolon] = "_layout_semicolon",
  [sym__layout_open_brace] = "_layout_open_brace",
  [sym__layout_close_brace] = "_layout_close_brace",
  [ts_builtin_sym_end] = "END",
  [anon_sym_module] = "module",
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
  [anon_sym_where] = "where",
  [anon_sym_TILDE] = "~",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH] = "-",
  [anon_sym_AT] = "@",
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
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DASH_GT] = "->",
  [sym_unit_type] = "unit_type",
  [sym_list_constructor] = "list_constructor",
  [sym_function_constructor] = "function_constructor",
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
  [sym__declarations] = "_declarations",
  [sym_module_exports] = "module_exports",
  [sym_export] = "export",
  [sym_import] = "import",
  [sym_import_specification] = "import_specification",
  [sym__declaration] = "_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_function_head] = "function_head",
  [sym_function_body] = "function_body",
  [sym_where] = "where",
  [sym__function_pattern] = "_function_pattern",
  [sym_label_pattern] = "label_pattern",
  [sym_irrefutable_pattern] = "irrefutable_pattern",
  [sym_list_pattern] = "list_pattern",
  [sym_tuple_pattern] = "tuple_pattern",
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
  [sym_type_class_instance] = "type_class_instance",
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
  [aux_sym_tuple_pattern_repeat1] = "tuple_pattern_repeat1",
  [aux_sym_general_constructor_repeat1] = "general_constructor_repeat1",
  [aux_sym_labels_repeat1] = "labels_repeat1",
  [aux_sym_statement_list_repeat1] = "statement_list_repeat1",
  [aux_sym_type_class_repeat1] = "type_class_repeat1",
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
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
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
  [sym__declarations] = {
    .visible = false,
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
  [sym_where] = {
    .visible = true,
    .named = true,
  },
  [sym__function_pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_label_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_irrefutable_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_list_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_pattern] = {
    .visible = true,
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
  [sym_type_class_instance] = {
    .visible = true,
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
  [aux_sym_tuple_pattern_repeat1] = {
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
  [aux_sym_type_class_repeat1] = {
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
        ADVANCE(253);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '\\')
        SKIP(264);
      if (lookahead == 'c')
        ADVANCE(265);
      if (lookahead == 'd')
        ADVANCE(271);
      if (lookahead == 'f')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 'm')
        ADVANCE(306);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(319);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(181);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
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
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
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
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead == 'm')
        ADVANCE(235);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 't')
        ADVANCE(248);
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
        ADVANCE(252);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(211);
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
      if (lookahead == 'r')
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
      if (lookahead == 'e')
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
      if (lookahead == 'i')
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
      if (lookahead == 'g')
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
      if (lookahead == 'n')
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
    case 217:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
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
      if (lookahead == 'p')
        ADVANCE(219);
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
      if (lookahead == 'o')
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
      if (lookahead == 'r')
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
      if (lookahead == 't')
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
    case 223:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
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
      if (lookahead == 'i')
        ADVANCE(225);
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
      if (lookahead == 'x')
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
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(195);
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
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 227:
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
    case 228:
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
    case 229:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(230);
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
      if (lookahead == 'a')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'n')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'c')
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
      if (lookahead == 'e')
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
    case 235:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(236);
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
      if (lookahead == 'd')
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
      if (lookahead == 'u')
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
      if (lookahead == 'l')
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
      if (lookahead == 'e')
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
    case 241:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(242);
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
      if (lookahead == 'w')
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
      if (lookahead == 't')
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
      if (lookahead == 'y')
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
      if (lookahead == 'p')
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
      if (lookahead == 'e')
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
    case 248:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(249);
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
      if (lookahead == 'p')
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
      if (lookahead == 'e')
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
    case 252:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(252);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 253:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(182);
      if (lookahead == '\r')
        ADVANCE(253);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '\\')
        SKIP(264);
      if (lookahead == 'c')
        ADVANCE(265);
      if (lookahead == 'd')
        ADVANCE(271);
      if (lookahead == 'f')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 'm')
        ADVANCE(306);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(319);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(181);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 255:
      if (lookahead == '-')
        ADVANCE(29);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'E')
        ADVANCE(175);
      if (lookahead == 'O')
        ADVANCE(258);
      if (lookahead == 'X')
        ADVANCE(260);
      if (lookahead == 'e')
        ADVANCE(175);
      if (lookahead == 'o')
        ADVANCE(258);
      if (lookahead == 'x')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(259);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(261);
      END_STATE();
    case 262:
      if (lookahead == ':')
        ADVANCE(120);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 264:
      if (lookahead == 'n')
        SKIP(181);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'l')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'a')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 's')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 's')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'a')
        ADVANCE(272);
      if (lookahead == 'e')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 't')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'a')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'f')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'a')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'u')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'l')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 't')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'o')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'r')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'i')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'g')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'n')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'm')
        ADVANCE(289);
      if (lookahead == 'n')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'p')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'o')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'r')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 't')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'f')
        ADVANCE(295);
      if (lookahead == 's')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'i')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'x')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'l')
        ADVANCE(298);
      if (lookahead == 'r')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 't')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'a')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'n')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'c')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'o')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'd')
        ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'u')
        ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'l')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'w')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 't')
        ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'y')
        ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'p')
        ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'y')
        ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'p')
        ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(323);
      END_STATE();
    case 324:
      if (lookahead == '\n')
        ADVANCE(325);
      if (lookahead == '\r')
        ADVANCE(337);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(338);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == 'q')
        ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(324);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(348);
      END_STATE();
    case 325:
      if (lookahead == '\n')
        ADVANCE(325);
      if (lookahead == '\r')
        ADVANCE(325);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(326);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == 'q')
        ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(336);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 326:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(325);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 327:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(328);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 328:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(329);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 329:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(330);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 330:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(331);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 331:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
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
      if (lookahead == 'e')
        ADVANCE(334);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 334:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(335);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(336);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 337:
      if (lookahead == '\n')
        ADVANCE(325);
      if (lookahead == '\r')
        ADVANCE(337);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(338);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == 'q')
        ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(324);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(348);
      END_STATE();
    case 338:
      if (lookahead == 'n')
        SKIP(324);
      END_STATE();
    case 339:
      if (lookahead == 'u')
        ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == 'a')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 'l')
        ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == 'i')
        ADVANCE(343);
      END_STATE();
    case 343:
      if (lookahead == 'f')
        ADVANCE(344);
      END_STATE();
    case 344:
      if (lookahead == 'i')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'e')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'd')
        ADVANCE(347);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_qualified);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(348);
      if (lookahead == '.')
        ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(348);
      END_STATE();
    case 349:
      if (lookahead == '\n')
        ADVANCE(350);
      if (lookahead == '\r')
        ADVANCE(402);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(406);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(407);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'c')
        ADVANCE(408);
      if (lookahead == 'd')
        ADVANCE(421);
      if (lookahead == 'e')
        ADVANCE(427);
      if (lookahead == 'i')
        ADVANCE(433);
      if (lookahead == 'j')
        ADVANCE(439);
      if (lookahead == 's')
        ADVANCE(442);
      if (lookahead == 'w')
        ADVANCE(449);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(349);
      END_STATE();
    case 350:
      if (lookahead == '\n')
        ADVANCE(350);
      if (lookahead == '\r')
        ADVANCE(350);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(355);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'c')
        ADVANCE(356);
      if (lookahead == 'd')
        ADVANCE(369);
      if (lookahead == 'e')
        ADVANCE(375);
      if (lookahead == 'i')
        ADVANCE(381);
      if (lookahead == 'j')
        ADVANCE(387);
      if (lookahead == 's')
        ADVANCE(390);
      if (lookahead == 'w')
        ADVANCE(397);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(350);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 354:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 355:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(350);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 356:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(357);
      if (lookahead == 'p')
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 357:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(358);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 358:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(359);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 359:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(360);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_ccall);
      if (lookahead == '-')
        ADVANCE(4);
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(365);
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
      ACCEPT_TOKEN(anon_sym_cplusplus);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 369:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(370);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 370:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(371);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 371:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 372:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(373);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 373:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(374);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_dotnet);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 375:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(376);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 376:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(377);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 377:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 378:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(379);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 379:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(380);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_foreign_export);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 381:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
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
      if (lookahead == 'o')
        ADVANCE(384);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 384:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(385);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 385:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(386);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 387:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(388);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 388:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(389);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_jvm);
      if (lookahead == '-')
        ADVANCE(4);
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
      if (lookahead == 'd')
        ADVANCE(392);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 392:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(393);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 393:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(394);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 394:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(395);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 395:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(396);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_stdcall);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 397:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(398);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 398:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(399);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 399:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
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
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 402:
      if (lookahead == '\n')
        ADVANCE(350);
      if (lookahead == '\r')
        ADVANCE(402);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(406);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(407);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'c')
        ADVANCE(408);
      if (lookahead == 'd')
        ADVANCE(421);
      if (lookahead == 'e')
        ADVANCE(427);
      if (lookahead == 'i')
        ADVANCE(433);
      if (lookahead == 'j')
        ADVANCE(439);
      if (lookahead == 's')
        ADVANCE(442);
      if (lookahead == 'w')
        ADVANCE(449);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(349);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(29);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 406:
      if (lookahead == '>')
        ADVANCE(125);
      END_STATE();
    case 407:
      if (lookahead == 'n')
        SKIP(349);
      END_STATE();
    case 408:
      if (lookahead == 'c')
        ADVANCE(409);
      if (lookahead == 'p')
        ADVANCE(413);
      END_STATE();
    case 409:
      if (lookahead == 'a')
        ADVANCE(410);
      END_STATE();
    case 410:
      if (lookahead == 'l')
        ADVANCE(411);
      END_STATE();
    case 411:
      if (lookahead == 'l')
        ADVANCE(412);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_ccall);
      END_STATE();
    case 413:
      if (lookahead == 'l')
        ADVANCE(414);
      END_STATE();
    case 414:
      if (lookahead == 'u')
        ADVANCE(415);
      END_STATE();
    case 415:
      if (lookahead == 's')
        ADVANCE(416);
      END_STATE();
    case 416:
      if (lookahead == 'p')
        ADVANCE(417);
      END_STATE();
    case 417:
      if (lookahead == 'l')
        ADVANCE(418);
      END_STATE();
    case 418:
      if (lookahead == 'u')
        ADVANCE(419);
      END_STATE();
    case 419:
      if (lookahead == 's')
        ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_cplusplus);
      END_STATE();
    case 421:
      if (lookahead == 'o')
        ADVANCE(422);
      END_STATE();
    case 422:
      if (lookahead == 't')
        ADVANCE(423);
      END_STATE();
    case 423:
      if (lookahead == 'n')
        ADVANCE(424);
      END_STATE();
    case 424:
      if (lookahead == 'e')
        ADVANCE(425);
      END_STATE();
    case 425:
      if (lookahead == 't')
        ADVANCE(426);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_dotnet);
      END_STATE();
    case 427:
      if (lookahead == 'x')
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
      ACCEPT_TOKEN(sym_foreign_export);
      END_STATE();
    case 433:
      if (lookahead == 'm')
        ADVANCE(434);
      END_STATE();
    case 434:
      if (lookahead == 'p')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 'o')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == 'r')
        ADVANCE(437);
      END_STATE();
    case 437:
      if (lookahead == 't')
        ADVANCE(438);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 439:
      if (lookahead == 'v')
        ADVANCE(440);
      END_STATE();
    case 440:
      if (lookahead == 'm')
        ADVANCE(441);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_jvm);
      END_STATE();
    case 442:
      if (lookahead == 't')
        ADVANCE(443);
      END_STATE();
    case 443:
      if (lookahead == 'd')
        ADVANCE(444);
      END_STATE();
    case 444:
      if (lookahead == 'c')
        ADVANCE(445);
      END_STATE();
    case 445:
      if (lookahead == 'a')
        ADVANCE(446);
      END_STATE();
    case 446:
      if (lookahead == 'l')
        ADVANCE(447);
      END_STATE();
    case 447:
      if (lookahead == 'l')
        ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_stdcall);
      END_STATE();
    case 449:
      if (lookahead == 'h')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == 'e')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 'r')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'e')
        ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 454:
      if (lookahead == '\n')
        ADVANCE(455);
      if (lookahead == '\r')
        ADVANCE(464);
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
        ADVANCE(254);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(465);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(467);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(468);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(454);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(466);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 455:
      if (lookahead == '\n')
        ADVANCE(455);
      if (lookahead == '\r')
        ADVANCE(455);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(456);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(458);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'w')
        ADVANCE(459);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(455);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(457);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 456:
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
        ADVANCE(457);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(457);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 458:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(455);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 463:
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
    case 464:
      if (lookahead == '\n')
        ADVANCE(455);
      if (lookahead == '\r')
        ADVANCE(464);
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
        ADVANCE(254);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(465);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(467);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(468);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(454);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(466);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'O')
        ADVANCE(258);
      if (lookahead == 'X')
        ADVANCE(260);
      if (lookahead == 'o')
        ADVANCE(258);
      if (lookahead == 'x')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(466);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(466);
      END_STATE();
    case 467:
      if (lookahead == 'n')
        SKIP(454);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'h')
        ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'r')
        ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 473:
      if (lookahead == '\n')
        ADVANCE(474);
      if (lookahead == '\r')
        ADVANCE(478);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(480);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(473);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 474:
      if (lookahead == '\n')
        ADVANCE(474);
      if (lookahead == '\r')
        ADVANCE(474);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(475);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(476);
      if (lookahead == '_')
        ADVANCE(477);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(474);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 475:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 476:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(474);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 477:
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
    case 478:
      if (lookahead == '\n')
        ADVANCE(474);
      if (lookahead == '\r')
        ADVANCE(478);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(480);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(473);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 479:
      if (lookahead == '-')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(115);
      END_STATE();
    case 480:
      if (lookahead == 'n')
        SKIP(473);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 482:
      if (lookahead == '\n')
        ADVANCE(483);
      if (lookahead == '\r')
        ADVANCE(485);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(486);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(482);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 483:
      if (lookahead == '\n')
        ADVANCE(483);
      if (lookahead == '\r')
        ADVANCE(483);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(483);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
        ADVANCE(255);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(486);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(482);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 486:
      if (lookahead == 'n')
        SKIP(482);
      END_STATE();
    case 487:
      if (lookahead == '\n')
        ADVANCE(488);
      if (lookahead == '\r')
        ADVANCE(492);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(493);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == 'w')
        ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(487);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
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
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(489);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == 'w')
        ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(488);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 491:
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
    case 492:
      if (lookahead == '\n')
        ADVANCE(488);
      if (lookahead == '\r')
        ADVANCE(492);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(493);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == 'w')
        ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(487);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 493:
      if (lookahead == 'n')
        SKIP(487);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'o')
        ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 496:
      if (lookahead == '\t')
        SKIP(496);
      if (lookahead == '\n')
        ADVANCE(497);
      if (lookahead == '\r')
        ADVANCE(502);
      if (lookahead == ' ')
        ADVANCE(503);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(504);
      if (lookahead == '\\')
        ADVANCE(505);
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
        ADVANCE(506);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 497:
      if (lookahead == '\t')
        ADVANCE(497);
      if (lookahead == '\n')
        ADVANCE(497);
      if (lookahead == '\r')
        ADVANCE(497);
      if (lookahead == ' ')
        ADVANCE(498);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(500);
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
        ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(497);
      if (lookahead == '\n')
        ADVANCE(497);
      if (lookahead == '\r')
        ADVANCE(497);
      if (lookahead == ' ')
        ADVANCE(498);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(500);
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
        ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(497);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 502:
      if (lookahead == '\t')
        SKIP(496);
      if (lookahead == '\n')
        ADVANCE(497);
      if (lookahead == '\r')
        ADVANCE(502);
      if (lookahead == ' ')
        ADVANCE(503);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(504);
      if (lookahead == '\\')
        ADVANCE(505);
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
        ADVANCE(506);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 507:
      if (lookahead == '\t')
        ADVANCE(508);
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(514);
      if (lookahead == ' ')
        ADVANCE(503);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(504);
      if (lookahead == '\\')
        ADVANCE(505);
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
        ADVANCE(506);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(510);
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(511);
      if (lookahead == ' ')
        ADVANCE(512);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(513);
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
        ADVANCE(501);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(510);
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(511);
      if (lookahead == ' ')
        ADVANCE(512);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(513);
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
        ADVANCE(501);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 511:
      if (lookahead == '\t')
        ADVANCE(510);
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(511);
      if (lookahead == ' ')
        ADVANCE(512);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(513);
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
        ADVANCE(501);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(510);
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(511);
      if (lookahead == ' ')
        ADVANCE(512);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(513);
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
        ADVANCE(501);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(511);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 514:
      if (lookahead == '\t')
        ADVANCE(508);
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(514);
      if (lookahead == ' ')
        ADVANCE(503);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(504);
      if (lookahead == '\\')
        ADVANCE(505);
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
        ADVANCE(506);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 515:
      if (lookahead == '\n')
        ADVANCE(516);
      if (lookahead == '\r')
        ADVANCE(518);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(519);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(515);
      END_STATE();
    case 516:
      if (lookahead == '\n')
        ADVANCE(516);
      if (lookahead == '\r')
        ADVANCE(516);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(516);
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
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(519);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(515);
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
        ADVANCE(254);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(524);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(520);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 521:
      if (lookahead == '\n')
        ADVANCE(521);
      if (lookahead == '\r')
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
        ADVANCE(183);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(522);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(477);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(521);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
        ADVANCE(254);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(524);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(520);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
        ADVANCE(255);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
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
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
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
        ADVANCE(255);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
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
      if (lookahead == '\n')
        ADVANCE(531);
      if (lookahead == '\r')
        ADVANCE(533);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(534);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(530);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(532);
      if (lookahead == '_')
        ADVANCE(477);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(531);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(534);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(530);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 534:
      if (lookahead == 'n')
        SKIP(530);
      END_STATE();
    case 535:
      if (lookahead == '\n')
        ADVANCE(536);
      if (lookahead == '\r')
        ADVANCE(538);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(539);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == 'w')
        ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(535);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 536:
      if (lookahead == '\n')
        ADVANCE(536);
      if (lookahead == '\r')
        ADVANCE(536);
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
        ADVANCE(537);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == 'w')
        ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(536);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead != 0)
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
      if (lookahead == '\n')
        ADVANCE(536);
      if (lookahead == '\r')
        ADVANCE(538);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(539);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == 'w')
        ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(535);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 539:
      if (lookahead == 'n')
        SKIP(535);
      END_STATE();
    case 540:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(541);
      if (lookahead == '\r')
        ADVANCE(543);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(544);
      if (lookahead == 'c')
        ADVANCE(265);
      if (lookahead == 'd')
        ADVANCE(271);
      if (lookahead == 'f')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(319);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(540);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 541:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(541);
      if (lookahead == '\r')
        ADVANCE(541);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(542);
      if (lookahead == 'c')
        ADVANCE(194);
      if (lookahead == 'd')
        ADVANCE(200);
      if (lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 't')
        ADVANCE(248);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(541);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(541);
      if (lookahead == '\r')
        ADVANCE(543);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(544);
      if (lookahead == 'c')
        ADVANCE(265);
      if (lookahead == 'd')
        ADVANCE(271);
      if (lookahead == 'f')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(319);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(540);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 544:
      if (lookahead == 'n')
        SKIP(540);
      END_STATE();
    case 545:
      if (lookahead == '\n')
        ADVANCE(546);
      if (lookahead == '\r')
        ADVANCE(556);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(557);
      if (lookahead == 'a')
        ADVANCE(558);
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
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(547);
      if (lookahead == 'a')
        ADVANCE(548);
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
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(557);
      if (lookahead == 'a')
        ADVANCE(558);
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
        ADVANCE(570);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '.')
        ADVANCE(571);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(572);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(566);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 567:
      if (lookahead == '\n')
        ADVANCE(567);
      if (lookahead == '\r')
        ADVANCE(567);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(475);
      if (lookahead == '.')
        ADVANCE(568);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(569);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 568:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 569:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(567);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 570:
      if (lookahead == '\n')
        ADVANCE(567);
      if (lookahead == '\r')
        ADVANCE(570);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '.')
        ADVANCE(571);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(572);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(566);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 571:
      if (lookahead == '.')
        ADVANCE(117);
      END_STATE();
    case 572:
      if (lookahead == 'n')
        SKIP(566);
      END_STATE();
    case 573:
      if (lookahead == '\n')
        ADVANCE(574);
      if (lookahead == '\r')
        ADVANCE(576);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(577);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(468);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(573);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 574:
      if (lookahead == '\n')
        ADVANCE(574);
      if (lookahead == '\r')
        ADVANCE(574);
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
        ADVANCE(575);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'w')
        ADVANCE(459);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(574);
      if (('_' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(577);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(468);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(573);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 577:
      if (lookahead == 'n')
        SKIP(573);
      END_STATE();
    case 578:
      if (lookahead == '\n')
        ADVANCE(579);
      if (lookahead == '\r')
        ADVANCE(581);
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
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(582);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(578);
      END_STATE();
    case 579:
      if (lookahead == '\n')
        ADVANCE(579);
      if (lookahead == '\r')
        ADVANCE(579);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(580);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(579);
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
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(582);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(578);
      END_STATE();
    case 582:
      if (lookahead == 'n')
        SKIP(578);
      END_STATE();
    case 583:
      if (lookahead == '\n')
        ADVANCE(584);
      if (lookahead == '\r')
        ADVANCE(586);
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
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(587);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(583);
      END_STATE();
    case 584:
      if (lookahead == '\n')
        ADVANCE(584);
      if (lookahead == '\r')
        ADVANCE(584);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(585);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 8902)
        ADVANCE(87);
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
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(587);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
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
        ADVANCE(591);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(592);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(588);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 589:
      if (lookahead == '\n')
        ADVANCE(589);
      if (lookahead == '\r')
        ADVANCE(589);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(590);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(477);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(589);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(592);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(588);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(597);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(593);
      END_STATE();
    case 594:
      if (lookahead == '\n')
        ADVANCE(594);
      if (lookahead == '\r')
        ADVANCE(594);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(595);
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
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(597);
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
        ADVANCE(609);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(610);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(598);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 599:
      if (lookahead == '\n')
        ADVANCE(599);
      if (lookahead == '\r')
        ADVANCE(599);
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
        ADVANCE(600);
      if (lookahead == 'd')
        ADVANCE(601);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 608:
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
    case 609:
      if (lookahead == '\n')
        ADVANCE(599);
      if (lookahead == '\r')
        ADVANCE(609);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(610);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(598);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 610:
      if (lookahead == 'n')
        SKIP(598);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'r')
        ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'i')
        ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'v')
        ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'i')
        ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'n')
        ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'g')
        ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 619:
      if (lookahead == '\n')
        ADVANCE(620);
      if (lookahead == '\r')
        ADVANCE(630);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(631);
      if (lookahead == 'd')
        ADVANCE(632);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(619);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 620:
      if (lookahead == '\n')
        ADVANCE(620);
      if (lookahead == '\r')
        ADVANCE(620);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(621);
      if (lookahead == 'd')
        ADVANCE(622);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(620);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(623);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 623:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(624);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 624:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(625);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 625:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(626);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 626:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(627);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 627:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(628);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 628:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(629);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 630:
      if (lookahead == '\n')
        ADVANCE(620);
      if (lookahead == '\r')
        ADVANCE(630);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(631);
      if (lookahead == 'd')
        ADVANCE(632);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(619);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 631:
      if (lookahead == 'n')
        SKIP(619);
      END_STATE();
    case 632:
      if (lookahead == 'e')
        ADVANCE(633);
      END_STATE();
    case 633:
      if (lookahead == 'r')
        ADVANCE(634);
      END_STATE();
    case 634:
      if (lookahead == 'i')
        ADVANCE(635);
      END_STATE();
    case 635:
      if (lookahead == 'v')
        ADVANCE(636);
      END_STATE();
    case 636:
      if (lookahead == 'i')
        ADVANCE(637);
      END_STATE();
    case 637:
      if (lookahead == 'n')
        ADVANCE(638);
      END_STATE();
    case 638:
      if (lookahead == 'g')
        ADVANCE(639);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 640:
      if (lookahead == '\n')
        ADVANCE(641);
      if (lookahead == '\r')
        ADVANCE(643);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(644);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(640);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 641:
      if (lookahead == '\n')
        ADVANCE(641);
      if (lookahead == '\r')
        ADVANCE(641);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(642);
      if (lookahead == 'd')
        ADVANCE(601);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 642:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(641);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 643:
      if (lookahead == '\n')
        ADVANCE(641);
      if (lookahead == '\r')
        ADVANCE(643);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(644);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(640);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 644:
      if (lookahead == 'n')
        SKIP(640);
      END_STATE();
    case 645:
      if (lookahead == '\n')
        ADVANCE(646);
      if (lookahead == '\r')
        ADVANCE(698);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == 'A')
        ADVANCE(699);
      if (lookahead == 'B')
        ADVANCE(702);
      if (lookahead == 'C')
        ADVANCE(706);
      if (lookahead == 'D')
        ADVANCE(710);
      if (lookahead == 'E')
        ADVANCE(720);
      if (lookahead == 'F')
        ADVANCE(731);
      if (lookahead == 'G')
        ADVANCE(734);
      if (lookahead == 'H')
        ADVANCE(735);
      if (lookahead == 'L')
        ADVANCE(736);
      if (lookahead == 'N')
        ADVANCE(737);
      if (lookahead == 'O')
        ADVANCE(738);
      if (lookahead == 'R')
        ADVANCE(739);
      if (lookahead == 'S')
        ADVANCE(740);
      if (lookahead == 'U')
        ADVANCE(741);
      if (lookahead == 'V')
        ADVANCE(742);
      if (lookahead == 'X')
        ADVANCE(743);
      if (lookahead == '\\')
        ADVANCE(505);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 'a')
        ADVANCE(744);
      if (lookahead == 'b')
        ADVANCE(745);
      if (lookahead == 'f')
        ADVANCE(746);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(747);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(748);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(645);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(506);
      END_STATE();
    case 646:
      if (lookahead == '\n')
        ADVANCE(646);
      if (lookahead == '\r')
        ADVANCE(646);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == 'A')
        ADVANCE(647);
      if (lookahead == 'B')
        ADVANCE(650);
      if (lookahead == 'C')
        ADVANCE(654);
      if (lookahead == 'D')
        ADVANCE(658);
      if (lookahead == 'E')
        ADVANCE(668);
      if (lookahead == 'F')
        ADVANCE(679);
      if (lookahead == 'G')
        ADVANCE(682);
      if (lookahead == 'H')
        ADVANCE(683);
      if (lookahead == 'L')
        ADVANCE(684);
      if (lookahead == 'N')
        ADVANCE(685);
      if (lookahead == 'O')
        ADVANCE(686);
      if (lookahead == 'R')
        ADVANCE(687);
      if (lookahead == 'S')
        ADVANCE(688);
      if (lookahead == 'U')
        ADVANCE(689);
      if (lookahead == 'V')
        ADVANCE(690);
      if (lookahead == 'X')
        ADVANCE(691);
      if (lookahead == '\\')
        ADVANCE(692);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 'a')
        ADVANCE(693);
      if (lookahead == 'b')
        ADVANCE(694);
      if (lookahead == 'f')
        ADVANCE(695);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(696);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(697);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(501);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 647:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(648);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 648:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(649);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 650:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(651);
      if (lookahead == 'S')
        ADVANCE(653);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 651:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(652);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 654:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(655);
      if (lookahead == 'R')
        ADVANCE(657);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 655:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(656);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 658:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(659);
      if (lookahead == 'E')
        ADVANCE(664);
      if (lookahead == 'L')
        ADVANCE(666);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 659:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(660);
      if (lookahead == '2')
        ADVANCE(661);
      if (lookahead == '3')
        ADVANCE(662);
      if (lookahead == '4')
        ADVANCE(663);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 664:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(665);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 666:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(667);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(669);
      if (lookahead == 'N')
        ADVANCE(670);
      if (lookahead == 'O')
        ADVANCE(672);
      if (lookahead == 'S')
        ADVANCE(674);
      if (lookahead == 'T')
        ADVANCE(676);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 670:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(671);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 672:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(673);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(675);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 676:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(677);
      if (lookahead == 'X')
        ADVANCE(678);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 679:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(680);
      if (lookahead == 'S')
        ADVANCE(681);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 682:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(45);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 683:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 684:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(49);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 685:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 687:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 688:
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
    case 689:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(69);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 690:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(71);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(646);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 698:
      if (lookahead == '\n')
        ADVANCE(646);
      if (lookahead == '\r')
        ADVANCE(698);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == 'A')
        ADVANCE(699);
      if (lookahead == 'B')
        ADVANCE(702);
      if (lookahead == 'C')
        ADVANCE(706);
      if (lookahead == 'D')
        ADVANCE(710);
      if (lookahead == 'E')
        ADVANCE(720);
      if (lookahead == 'F')
        ADVANCE(731);
      if (lookahead == 'G')
        ADVANCE(734);
      if (lookahead == 'H')
        ADVANCE(735);
      if (lookahead == 'L')
        ADVANCE(736);
      if (lookahead == 'N')
        ADVANCE(737);
      if (lookahead == 'O')
        ADVANCE(738);
      if (lookahead == 'R')
        ADVANCE(739);
      if (lookahead == 'S')
        ADVANCE(740);
      if (lookahead == 'U')
        ADVANCE(741);
      if (lookahead == 'V')
        ADVANCE(742);
      if (lookahead == 'X')
        ADVANCE(743);
      if (lookahead == '\\')
        ADVANCE(505);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 'a')
        ADVANCE(744);
      if (lookahead == 'b')
        ADVANCE(745);
      if (lookahead == 'f')
        ADVANCE(746);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(747);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(748);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(645);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(506);
      END_STATE();
    case 699:
      if (lookahead == 'C')
        ADVANCE(700);
      END_STATE();
    case 700:
      if (lookahead == 'K')
        ADVANCE(701);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 702:
      if (lookahead == 'E')
        ADVANCE(703);
      if (lookahead == 'S')
        ADVANCE(705);
      END_STATE();
    case 703:
      if (lookahead == 'L')
        ADVANCE(704);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 706:
      if (lookahead == 'A')
        ADVANCE(707);
      if (lookahead == 'R')
        ADVANCE(709);
      END_STATE();
    case 707:
      if (lookahead == 'N')
        ADVANCE(708);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 710:
      if (lookahead == 'C')
        ADVANCE(711);
      if (lookahead == 'E')
        ADVANCE(716);
      if (lookahead == 'L')
        ADVANCE(718);
      END_STATE();
    case 711:
      if (lookahead == '1')
        ADVANCE(712);
      if (lookahead == '2')
        ADVANCE(713);
      if (lookahead == '3')
        ADVANCE(714);
      if (lookahead == '4')
        ADVANCE(715);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 716:
      if (lookahead == 'L')
        ADVANCE(717);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 718:
      if (lookahead == 'E')
        ADVANCE(719);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 720:
      if (lookahead == 'M')
        ADVANCE(721);
      if (lookahead == 'N')
        ADVANCE(722);
      if (lookahead == 'O')
        ADVANCE(724);
      if (lookahead == 'S')
        ADVANCE(726);
      if (lookahead == 'T')
        ADVANCE(728);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 722:
      if (lookahead == 'Q')
        ADVANCE(723);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 724:
      if (lookahead == 'T')
        ADVANCE(725);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 726:
      if (lookahead == 'C')
        ADVANCE(727);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 728:
      if (lookahead == 'B')
        ADVANCE(729);
      if (lookahead == 'X')
        ADVANCE(730);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 731:
      if (lookahead == 'F')
        ADVANCE(732);
      if (lookahead == 'S')
        ADVANCE(733);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 734:
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 735:
      if (lookahead == 'T')
        ADVANCE(132);
      END_STATE();
    case 736:
      if (lookahead == 'F')
        ADVANCE(134);
      END_STATE();
    case 737:
      if (lookahead == 'A')
        ADVANCE(136);
      if (lookahead == 'U')
        ADVANCE(138);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 739:
      if (lookahead == 'S')
        ADVANCE(141);
      END_STATE();
    case 740:
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
    case 741:
      if (lookahead == 'S')
        ADVANCE(154);
      END_STATE();
    case 742:
      if (lookahead == 'T')
        ADVANCE(156);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 749:
      if (lookahead == '\t')
        ADVANCE(508);
      if (lookahead == '\n')
        ADVANCE(750);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(761);
      if (lookahead == ' ')
        ADVANCE(503);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == 'A')
        ADVANCE(762);
      if (lookahead == 'B')
        ADVANCE(763);
      if (lookahead == 'C')
        ADVANCE(764);
      if (lookahead == 'D')
        ADVANCE(765);
      if (lookahead == 'E')
        ADVANCE(766);
      if (lookahead == 'F')
        ADVANCE(767);
      if (lookahead == 'G')
        ADVANCE(129);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == 'L')
        ADVANCE(133);
      if (lookahead == 'N')
        ADVANCE(135);
      if (lookahead == 'O')
        ADVANCE(738);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead == 'S')
        ADVANCE(142);
      if (lookahead == 'U')
        ADVANCE(153);
      if (lookahead == 'V')
        ADVANCE(155);
      if (lookahead == 'X')
        ADVANCE(743);
      if (lookahead == '[')
        ADVANCE(504);
      if (lookahead == '\\')
        ADVANCE(505);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'a')
        ADVANCE(744);
      if (lookahead == 'b')
        ADVANCE(745);
      if (lookahead == 'f')
        ADVANCE(746);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(747);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(748);
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
        ADVANCE(506);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(751);
      if (lookahead == '\n')
        ADVANCE(750);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(752);
      if (lookahead == ' ')
        ADVANCE(753);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(754);
      if (lookahead == 'B')
        ADVANCE(755);
      if (lookahead == 'C')
        ADVANCE(756);
      if (lookahead == 'D')
        ADVANCE(757);
      if (lookahead == 'E')
        ADVANCE(758);
      if (lookahead == 'F')
        ADVANCE(759);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(686);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(691);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(760);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(693);
      if (lookahead == 'b')
        ADVANCE(694);
      if (lookahead == 'f')
        ADVANCE(695);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(696);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(697);
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
        ADVANCE(501);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(751);
      if (lookahead == '\n')
        ADVANCE(750);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(752);
      if (lookahead == ' ')
        ADVANCE(753);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(754);
      if (lookahead == 'B')
        ADVANCE(755);
      if (lookahead == 'C')
        ADVANCE(756);
      if (lookahead == 'D')
        ADVANCE(757);
      if (lookahead == 'E')
        ADVANCE(758);
      if (lookahead == 'F')
        ADVANCE(759);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(686);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(691);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(760);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(693);
      if (lookahead == 'b')
        ADVANCE(694);
      if (lookahead == 'f')
        ADVANCE(695);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(696);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(697);
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
        ADVANCE(501);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 752:
      if (lookahead == '\t')
        ADVANCE(751);
      if (lookahead == '\n')
        ADVANCE(750);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(752);
      if (lookahead == ' ')
        ADVANCE(753);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(754);
      if (lookahead == 'B')
        ADVANCE(755);
      if (lookahead == 'C')
        ADVANCE(756);
      if (lookahead == 'D')
        ADVANCE(757);
      if (lookahead == 'E')
        ADVANCE(758);
      if (lookahead == 'F')
        ADVANCE(759);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(686);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(691);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(760);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(693);
      if (lookahead == 'b')
        ADVANCE(694);
      if (lookahead == 'f')
        ADVANCE(695);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(696);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(697);
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
        ADVANCE(501);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(751);
      if (lookahead == '\n')
        ADVANCE(750);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(752);
      if (lookahead == ' ')
        ADVANCE(753);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(754);
      if (lookahead == 'B')
        ADVANCE(755);
      if (lookahead == 'C')
        ADVANCE(756);
      if (lookahead == 'D')
        ADVANCE(757);
      if (lookahead == 'E')
        ADVANCE(758);
      if (lookahead == 'F')
        ADVANCE(759);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(686);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(691);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(760);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(693);
      if (lookahead == 'b')
        ADVANCE(694);
      if (lookahead == 'f')
        ADVANCE(695);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(696);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(697);
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
        ADVANCE(501);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(648);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(651);
      if (lookahead == 'S')
        ADVANCE(653);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(655);
      if (lookahead == 'R')
        ADVANCE(657);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(659);
      if (lookahead == 'E')
        ADVANCE(664);
      if (lookahead == 'L')
        ADVANCE(666);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(669);
      if (lookahead == 'N')
        ADVANCE(670);
      if (lookahead == 'O')
        ADVANCE(672);
      if (lookahead == 'S')
        ADVANCE(674);
      if (lookahead == 'T')
        ADVANCE(676);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(680);
      if (lookahead == 'S')
        ADVANCE(681);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(752);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 761:
      if (lookahead == '\t')
        ADVANCE(508);
      if (lookahead == '\n')
        ADVANCE(750);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(761);
      if (lookahead == ' ')
        ADVANCE(503);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == 'A')
        ADVANCE(762);
      if (lookahead == 'B')
        ADVANCE(763);
      if (lookahead == 'C')
        ADVANCE(764);
      if (lookahead == 'D')
        ADVANCE(765);
      if (lookahead == 'E')
        ADVANCE(766);
      if (lookahead == 'F')
        ADVANCE(767);
      if (lookahead == 'G')
        ADVANCE(129);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == 'L')
        ADVANCE(133);
      if (lookahead == 'N')
        ADVANCE(135);
      if (lookahead == 'O')
        ADVANCE(738);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead == 'S')
        ADVANCE(142);
      if (lookahead == 'U')
        ADVANCE(153);
      if (lookahead == 'V')
        ADVANCE(155);
      if (lookahead == 'X')
        ADVANCE(743);
      if (lookahead == '[')
        ADVANCE(504);
      if (lookahead == '\\')
        ADVANCE(505);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'a')
        ADVANCE(744);
      if (lookahead == 'b')
        ADVANCE(745);
      if (lookahead == 'f')
        ADVANCE(746);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(747);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(748);
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
        ADVANCE(506);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(700);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(703);
      if (lookahead == 'S')
        ADVANCE(705);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(707);
      if (lookahead == 'R')
        ADVANCE(709);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(711);
      if (lookahead == 'E')
        ADVANCE(716);
      if (lookahead == 'L')
        ADVANCE(718);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(721);
      if (lookahead == 'N')
        ADVANCE(722);
      if (lookahead == 'O')
        ADVANCE(724);
      if (lookahead == 'S')
        ADVANCE(726);
      if (lookahead == 'T')
        ADVANCE(728);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(732);
      if (lookahead == 'S')
        ADVANCE(733);
      END_STATE();
    case 768:
      if (lookahead == '\n')
        ADVANCE(769);
      if (lookahead == '\r')
        ADVANCE(771);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(772);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(768);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 769:
      if (lookahead == '\n')
        ADVANCE(769);
      if (lookahead == '\r')
        ADVANCE(769);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(770);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(477);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(769);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 770:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(769);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 771:
      if (lookahead == '\n')
        ADVANCE(769);
      if (lookahead == '\r')
        ADVANCE(771);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(772);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(768);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 772:
      if (lookahead == 'n')
        SKIP(768);
      END_STATE();
    case 773:
      if (lookahead == '\n')
        ADVANCE(774);
      if (lookahead == '\r')
        ADVANCE(777);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(778);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(773);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(779);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 774:
      if (lookahead == '\n')
        ADVANCE(774);
      if (lookahead == '\r')
        ADVANCE(774);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(475);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(775);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(774);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(776);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 775:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(774);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(776);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(776);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 777:
      if (lookahead == '\n')
        ADVANCE(774);
      if (lookahead == '\r')
        ADVANCE(777);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(778);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(773);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(779);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 778:
      if (lookahead == 'n')
        SKIP(773);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(779);
      if (lookahead == '.')
        ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(779);
      END_STATE();
    case 780:
      if (lookahead == '\n')
        ADVANCE(781);
      if (lookahead == '\r')
        ADVANCE(783);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(784);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(780);
      END_STATE();
    case 781:
      if (lookahead == '\n')
        ADVANCE(781);
      if (lookahead == '\r')
        ADVANCE(781);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(782);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(781);
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
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(784);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(780);
      END_STATE();
    case 784:
      if (lookahead == 'n')
        SKIP(780);
      END_STATE();
    case 785:
      if (lookahead == '\n')
        ADVANCE(786);
      if (lookahead == '\r')
        ADVANCE(798);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(799);
      if (lookahead == 's')
        ADVANCE(800);
      if (lookahead == 'u')
        ADVANCE(804);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(785);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 786:
      if (lookahead == '\n')
        ADVANCE(786);
      if (lookahead == '\r')
        ADVANCE(786);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(787);
      if (lookahead == 's')
        ADVANCE(788);
      if (lookahead == 'u')
        ADVANCE(792);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(786);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 791:
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
    case 792:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 797:
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
    case 798:
      if (lookahead == '\n')
        ADVANCE(786);
      if (lookahead == '\r')
        ADVANCE(798);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(799);
      if (lookahead == 's')
        ADVANCE(800);
      if (lookahead == 'u')
        ADVANCE(804);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(785);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 799:
      if (lookahead == 'n')
        SKIP(785);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'a')
        ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'f')
        ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'n')
        ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 's')
        ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'a')
        ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'f')
        ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 810:
      if (lookahead == '\n')
        ADVANCE(811);
      if (lookahead == '\r')
        ADVANCE(813);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(406);
      if (lookahead == '\\')
        SKIP(814);
      if (lookahead == 'w')
        ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(810);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 811:
      if (lookahead == '\n')
        ADVANCE(811);
      if (lookahead == '\r')
        ADVANCE(811);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(475);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '\\')
        ADVANCE(812);
      if (lookahead == 'w')
        ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(811);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(406);
      if (lookahead == '\\')
        SKIP(814);
      if (lookahead == 'w')
        ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(810);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(819);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(815);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 816:
      if (lookahead == '\n')
        ADVANCE(816);
      if (lookahead == '\r')
        ADVANCE(816);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(817);
      if (lookahead == 'd')
        ADVANCE(601);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(816);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(819);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(815);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(824);
      if (lookahead == 'd')
        ADVANCE(632);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(820);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 821:
      if (lookahead == '\n')
        ADVANCE(821);
      if (lookahead == '\r')
        ADVANCE(821);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(822);
      if (lookahead == 'd')
        ADVANCE(622);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(821);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 822:
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
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(824);
      if (lookahead == 'd')
        ADVANCE(632);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(820);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 824:
      if (lookahead == 'n')
        SKIP(820);
      END_STATE();
    case 825:
      if (lookahead == '\n')
        ADVANCE(826);
      if (lookahead == '\r')
        ADVANCE(828);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(829);
      if (lookahead == 'd')
        ADVANCE(632);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(825);
      END_STATE();
    case 826:
      if (lookahead == '\n')
        ADVANCE(826);
      if (lookahead == '\r')
        ADVANCE(826);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(827);
      if (lookahead == 'd')
        ADVANCE(622);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(826);
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
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(829);
      if (lookahead == 'd')
        ADVANCE(632);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(825);
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
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(834);
      if (lookahead == 'd')
        ADVANCE(632);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(830);
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
      if (lookahead == '\\')
        ADVANCE(832);
      if (lookahead == 'd')
        ADVANCE(622);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(831);
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
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(834);
      if (lookahead == 'd')
        ADVANCE(632);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(830);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(839);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(835);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 836:
      if (lookahead == '\n')
        ADVANCE(836);
      if (lookahead == '\r')
        ADVANCE(836);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(837);
      if (lookahead == 'd')
        ADVANCE(601);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(836);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(839);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(835);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(844);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(840);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 841:
      if (lookahead == '\n')
        ADVANCE(841);
      if (lookahead == '\r')
        ADVANCE(841);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(842);
      if (lookahead == 'd')
        ADVANCE(601);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(841);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(844);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(840);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(849);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(845);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(847);
      if (lookahead == 'd')
        ADVANCE(601);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(846);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(849);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(845);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(854);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(850);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(779);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 851:
      if (lookahead == '\n')
        ADVANCE(851);
      if (lookahead == '\r')
        ADVANCE(851);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(475);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(852);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(851);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(776);
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
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(854);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(850);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(779);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(859);
      if (lookahead == ']')
        ADVANCE(160);
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
        SKIP(855);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 856:
      if (lookahead == '\n')
        ADVANCE(856);
      if (lookahead == '\r')
        ADVANCE(856);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(857);
      if (lookahead == ']')
        ADVANCE(75);
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
        ADVANCE(856);
      if (('_' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(859);
      if (lookahead == ']')
        ADVANCE(160);
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
        SKIP(855);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(864);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(860);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(779);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 861:
      if (lookahead == '\n')
        ADVANCE(861);
      if (lookahead == '\r')
        ADVANCE(861);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(475);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(862);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(861);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(776);
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
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(864);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(860);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(779);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(504);
      if (lookahead == '\\')
        ADVANCE(505);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(865);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      END_STATE();
    case 866:
      if (lookahead == '\n')
        ADVANCE(866);
      if (lookahead == '\r')
        ADVANCE(866);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(867);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(866);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
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
      if (lookahead == '\n')
        ADVANCE(866);
      if (lookahead == '\r')
        ADVANCE(868);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(504);
      if (lookahead == '\\')
        ADVANCE(505);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(865);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      END_STATE();
    case 869:
      if (lookahead == '\n')
        ADVANCE(870);
      if (lookahead == '\r')
        ADVANCE(873);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(874);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(875);
      END_STATE();
    case 870:
      if (lookahead == '\n')
        ADVANCE(870);
      if (lookahead == '\r')
        ADVANCE(870);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(871);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(872);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 873:
      if (lookahead == '\n')
        ADVANCE(870);
      if (lookahead == '\r')
        ADVANCE(873);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(874);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(875);
      END_STATE();
    case 874:
      if (lookahead == 'n')
        SKIP(869);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 876:
      if (lookahead == '\n')
        ADVANCE(877);
      if (lookahead == '\r')
        ADVANCE(880);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(881);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(876);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(882);
      END_STATE();
    case 877:
      if (lookahead == '\n')
        ADVANCE(877);
      if (lookahead == '\r')
        ADVANCE(877);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(878);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(879);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 880:
      if (lookahead == '\n')
        ADVANCE(877);
      if (lookahead == '\r')
        ADVANCE(880);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(881);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(876);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(882);
      END_STATE();
    case 881:
      if (lookahead == 'n')
        SKIP(876);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 883:
      if (lookahead == '\n')
        ADVANCE(884);
      if (lookahead == '\r')
        ADVANCE(886);
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
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(887);
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
        SKIP(883);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 884:
      if (lookahead == '\n')
        ADVANCE(884);
      if (lookahead == '\r')
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
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(885);
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
        ADVANCE(884);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 885:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(884);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 886:
      if (lookahead == '\n')
        ADVANCE(884);
      if (lookahead == '\r')
        ADVANCE(886);
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
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(887);
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
        SKIP(883);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 887:
      if (lookahead == 'n')
        SKIP(883);
      END_STATE();
    case 888:
      if (lookahead == '\n')
        ADVANCE(889);
      if (lookahead == '\r')
        ADVANCE(891);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(892);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(888);
      END_STATE();
    case 889:
      if (lookahead == '\n')
        ADVANCE(889);
      if (lookahead == '\r')
        ADVANCE(889);
      if (lookahead == '-')
        ADVANCE(475);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(890);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(889);
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
        ADVANCE(479);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(892);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(888);
      END_STATE();
    case 892:
      if (lookahead == 'n')
        SKIP(888);
      END_STATE();
    case 893:
      if (lookahead == '\n')
        ADVANCE(894);
      if (lookahead == '\r')
        ADVANCE(896);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(897);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(893);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 894:
      if (lookahead == '\n')
        ADVANCE(894);
      if (lookahead == '\r')
        ADVANCE(894);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(475);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(895);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(894);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 895:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(894);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 896:
      if (lookahead == '\n')
        ADVANCE(894);
      if (lookahead == '\r')
        ADVANCE(896);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(897);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(893);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 897:
      if (lookahead == 'n')
        SKIP(893);
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
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(902);
      if (lookahead == 'c')
        ADVANCE(265);
      if (lookahead == 'd')
        ADVANCE(271);
      if (lookahead == 'f')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(898);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
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
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(900);
      if (lookahead == 'c')
        ADVANCE(194);
      if (lookahead == 'd')
        ADVANCE(200);
      if (lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 't')
        ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(899);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
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
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(902);
      if (lookahead == 'c')
        ADVANCE(265);
      if (lookahead == 'd')
        ADVANCE(271);
      if (lookahead == 'f')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(898);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
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
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(907);
      if (lookahead == 'h')
        ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(903);
      END_STATE();
    case 904:
      if (lookahead == '\n')
        ADVANCE(904);
      if (lookahead == '\r')
        ADVANCE(904);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(905);
      if (lookahead == 'h')
        ADVANCE(550);
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
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(907);
      if (lookahead == 'h')
        ADVANCE(560);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(912);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(908);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 909:
      if (lookahead == '\n')
        ADVANCE(909);
      if (lookahead == '\r')
        ADVANCE(909);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(910);
      if (lookahead == 'd')
        ADVANCE(601);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(909);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(912);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(908);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(917);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(913);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 914:
      if (lookahead == '\n')
        ADVANCE(914);
      if (lookahead == '\r')
        ADVANCE(914);
      if (lookahead == '-')
        ADVANCE(475);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(914);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(917);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(913);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 917:
      if (lookahead == 'n')
        SKIP(913);
      END_STATE();
    case 918:
      if (lookahead == '\t')
        ADVANCE(508);
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(924);
      if (lookahead == ' ')
        ADVANCE(503);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(504);
      if (lookahead == '\\')
        ADVANCE(505);
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
        ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(506);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(920);
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(921);
      if (lookahead == ' ')
        ADVANCE(922);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(923);
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
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(920);
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(921);
      if (lookahead == ' ')
        ADVANCE(922);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(923);
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
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 921:
      if (lookahead == '\t')
        ADVANCE(920);
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(921);
      if (lookahead == ' ')
        ADVANCE(922);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(923);
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
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(920);
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(921);
      if (lookahead == ' ')
        ADVANCE(922);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(923);
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
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(921);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 924:
      if (lookahead == '\t')
        ADVANCE(508);
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(924);
      if (lookahead == ' ')
        ADVANCE(503);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(504);
      if (lookahead == '\\')
        ADVANCE(505);
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
        ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(506);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 925:
      if (lookahead == '\n')
        ADVANCE(926);
      if (lookahead == '\r')
        ADVANCE(928);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(929);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(925);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 926:
      if (lookahead == '\n')
        ADVANCE(926);
      if (lookahead == '\r')
        ADVANCE(926);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(927);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(926);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 927:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(926);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 928:
      if (lookahead == '\n')
        ADVANCE(926);
      if (lookahead == '\r')
        ADVANCE(928);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(929);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(925);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 929:
      if (lookahead == 'n')
        SKIP(925);
      END_STATE();
    case 930:
      if (lookahead == '\n')
        ADVANCE(931);
      if (lookahead == '\r')
        ADVANCE(933);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(934);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(930);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 931:
      if (lookahead == '\n')
        ADVANCE(931);
      if (lookahead == '\r')
        ADVANCE(931);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(932);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(931);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 932:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(931);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 933:
      if (lookahead == '\n')
        ADVANCE(931);
      if (lookahead == '\r')
        ADVANCE(933);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(934);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(930);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 934:
      if (lookahead == 'n')
        SKIP(930);
      END_STATE();
    case 935:
      if (lookahead == '\n')
        ADVANCE(936);
      if (lookahead == '\r')
        ADVANCE(938);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(939);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(935);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(779);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 936:
      if (lookahead == '\n')
        ADVANCE(936);
      if (lookahead == '\r')
        ADVANCE(936);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(475);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(937);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(936);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(776);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 937:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(936);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 938:
      if (lookahead == '\n')
        ADVANCE(936);
      if (lookahead == '\r')
        ADVANCE(938);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(939);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(935);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(779);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 939:
      if (lookahead == 'n')
        SKIP(935);
      END_STATE();
    case 940:
      if (lookahead == '\n')
        ADVANCE(941);
      if (lookahead == '\r')
        ADVANCE(943);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(944);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(940);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 941:
      if (lookahead == '\n')
        ADVANCE(941);
      if (lookahead == '\r')
        ADVANCE(941);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(475);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(941);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 942:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(941);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 943:
      if (lookahead == '\n')
        ADVANCE(941);
      if (lookahead == '\r')
        ADVANCE(943);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(944);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(940);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 944:
      if (lookahead == 'n')
        SKIP(940);
      END_STATE();
    case 945:
      if (lookahead == '\n')
        ADVANCE(946);
      if (lookahead == '\r')
        ADVANCE(948);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(949);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(945);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 946:
      if (lookahead == '\n')
        ADVANCE(946);
      if (lookahead == '\r')
        ADVANCE(946);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(947);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(946);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 947:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(946);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 948:
      if (lookahead == '\n')
        ADVANCE(946);
      if (lookahead == '\r')
        ADVANCE(948);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(949);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(945);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 949:
      if (lookahead == 'n')
        SKIP(945);
      END_STATE();
    case 950:
      if (lookahead == '\n')
        ADVANCE(951);
      if (lookahead == '\r')
        ADVANCE(953);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(954);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(950);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 951:
      if (lookahead == '\n')
        ADVANCE(951);
      if (lookahead == '\r')
        ADVANCE(951);
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
        ADVANCE(952);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(951);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 952:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(951);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 953:
      if (lookahead == '\n')
        ADVANCE(951);
      if (lookahead == '\r')
        ADVANCE(953);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(954);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(950);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 954:
      if (lookahead == 'n')
        SKIP(950);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 181},
  [2] = {.lex_state = 324},
  [3] = {.lex_state = 324},
  [4] = {.lex_state = 349},
  [5] = {.lex_state = 181},
  [6] = {.lex_state = 181},
  [7] = {.lex_state = 181},
  [8] = {.lex_state = 454},
  [9] = {.lex_state = 181},
  [10] = {.lex_state = 181},
  [11] = {.lex_state = 181},
  [12] = {.lex_state = 473, .external_lex_state = 2},
  [13] = {.lex_state = 482, .external_lex_state = 2},
  [14] = {.lex_state = 487, .external_lex_state = 2},
  [15] = {.lex_state = 496},
  [16] = {.lex_state = 507},
  [17] = {.lex_state = 487, .external_lex_state = 2},
  [18] = {.lex_state = 181},
  [19] = {.lex_state = 515, .external_lex_state = 2},
  [20] = {.lex_state = 515, .external_lex_state = 2},
  [21] = {.lex_state = 181},
  [22] = {.lex_state = 520},
  [23] = {.lex_state = 520},
  [24] = {.lex_state = 525, .external_lex_state = 2},
  [25] = {.lex_state = 530, .external_lex_state = 2},
  [26] = {.lex_state = 535, .external_lex_state = 2},
  [27] = {.lex_state = 540},
  [28] = {.lex_state = 349},
  [29] = {.lex_state = 324},
  [30] = {.lex_state = 545, .external_lex_state = 2},
  [31] = {.lex_state = 349},
  [32] = {.lex_state = 349},
  [33] = {.lex_state = 566},
  [34] = {.lex_state = 181},
  [35] = {.lex_state = 573},
  [36] = {.lex_state = 181},
  [37] = {.lex_state = 349},
  [38] = {.lex_state = 454},
  [39] = {.lex_state = 181},
  [40] = {.lex_state = 454},
  [41] = {.lex_state = 578, .external_lex_state = 2},
  [42] = {.lex_state = 566},
  [43] = {.lex_state = 583, .external_lex_state = 2},
  [44] = {.lex_state = 588},
  [45] = {.lex_state = 593, .external_lex_state = 2},
  [46] = {.lex_state = 593, .external_lex_state = 2},
  [47] = {.lex_state = 349},
  [48] = {.lex_state = 578, .external_lex_state = 2},
  [49] = {.lex_state = 598, .external_lex_state = 2},
  [50] = {.lex_state = 181},
  [51] = {.lex_state = 619, .external_lex_state = 2},
  [52] = {.lex_state = 640, .external_lex_state = 2},
  [53] = {.lex_state = 566},
  [54] = {.lex_state = 181},
  [55] = {.lex_state = 181},
  [56] = {.lex_state = 566},
  [57] = {.lex_state = 181},
  [58] = {.lex_state = 566},
  [59] = {.lex_state = 520},
  [60] = {.lex_state = 181},
  [61] = {.lex_state = 181},
  [62] = {.lex_state = 181},
  [63] = {.lex_state = 181},
  [64] = {.lex_state = 181},
  [65] = {.lex_state = 181},
  [66] = {.lex_state = 645},
  [67] = {.lex_state = 507},
  [68] = {.lex_state = 507},
  [69] = {.lex_state = 507},
  [70] = {.lex_state = 507},
  [71] = {.lex_state = 487, .external_lex_state = 2},
  [72] = {.lex_state = 507},
  [73] = {.lex_state = 507},
  [74] = {.lex_state = 749},
  [75] = {.lex_state = 507},
  [76] = {.lex_state = 507},
  [77] = {.lex_state = 540},
  [78] = {.lex_state = 487, .external_lex_state = 2},
  [79] = {.lex_state = 515, .external_lex_state = 2},
  [80] = {.lex_state = 520},
  [81] = {.lex_state = 520},
  [82] = {.lex_state = 520},
  [83] = {.lex_state = 588},
  [84] = {.lex_state = 588},
  [85] = {.lex_state = 588},
  [86] = {.lex_state = 520},
  [87] = {.lex_state = 588},
  [88] = {.lex_state = 496},
  [89] = {.lex_state = 507},
  [90] = {.lex_state = 520},
  [91] = {.lex_state = 181},
  [92] = {.lex_state = 588},
  [93] = {.lex_state = 588},
  [94] = {.lex_state = 768},
  [95] = {.lex_state = 520},
  [96] = {.lex_state = 773},
  [97] = {.lex_state = 515, .external_lex_state = 2},
  [98] = {.lex_state = 566},
  [99] = {.lex_state = 780, .external_lex_state = 3},
  [100] = {.lex_state = 349},
  [101] = {.lex_state = 181},
  [102] = {.lex_state = 545, .external_lex_state = 2},
  [103] = {.lex_state = 566},
  [104] = {.lex_state = 324},
  [105] = {.lex_state = 181},
  [106] = {.lex_state = 515, .external_lex_state = 2},
  [107] = {.lex_state = 785},
  [108] = {.lex_state = 785},
  [109] = {.lex_state = 515, .external_lex_state = 2},
  [110] = {.lex_state = 181},
  [111] = {.lex_state = 181},
  [112] = {.lex_state = 566},
  [113] = {.lex_state = 454},
  [114] = {.lex_state = 181},
  [115] = {.lex_state = 482},
  [116] = {.lex_state = 780, .external_lex_state = 3},
  [117] = {.lex_state = 810},
  [118] = {.lex_state = 515, .external_lex_state = 2},
  [119] = {.lex_state = 810},
  [120] = {.lex_state = 454},
  [121] = {.lex_state = 454},
  [122] = {.lex_state = 515, .external_lex_state = 2},
  [123] = {.lex_state = 454},
  [124] = {.lex_state = 349},
  [125] = {.lex_state = 583, .external_lex_state = 2},
  [126] = {.lex_state = 583, .external_lex_state = 2},
  [127] = {.lex_state = 583, .external_lex_state = 2},
  [128] = {.lex_state = 349},
  [129] = {.lex_state = 593, .external_lex_state = 2},
  [130] = {.lex_state = 593, .external_lex_state = 2},
  [131] = {.lex_state = 578, .external_lex_state = 2},
  [132] = {.lex_state = 578, .external_lex_state = 2},
  [133] = {.lex_state = 619, .external_lex_state = 2},
  [134] = {.lex_state = 815, .external_lex_state = 2},
  [135] = {.lex_state = 820, .external_lex_state = 2},
  [136] = {.lex_state = 566},
  [137] = {.lex_state = 825, .external_lex_state = 2},
  [138] = {.lex_state = 830, .external_lex_state = 2},
  [139] = {.lex_state = 515, .external_lex_state = 2},
  [140] = {.lex_state = 835, .external_lex_state = 2},
  [141] = {.lex_state = 840, .external_lex_state = 2},
  [142] = {.lex_state = 845, .external_lex_state = 2},
  [143] = {.lex_state = 815, .external_lex_state = 2},
  [144] = {.lex_state = 181},
  [145] = {.lex_state = 181},
  [146] = {.lex_state = 850},
  [147] = {.lex_state = 855},
  [148] = {.lex_state = 566},
  [149] = {.lex_state = 773},
  [150] = {.lex_state = 566},
  [151] = {.lex_state = 860},
  [152] = {.lex_state = 487, .external_lex_state = 2},
  [153] = {.lex_state = 181},
  [154] = {.lex_state = 181},
  [155] = {.lex_state = 865},
  [156] = {.lex_state = 869},
  [157] = {.lex_state = 876},
  [158] = {.lex_state = 181},
  [159] = {.lex_state = 507},
  [160] = {.lex_state = 507},
  [161] = {.lex_state = 865},
  [162] = {.lex_state = 869},
  [163] = {.lex_state = 876},
  [164] = {.lex_state = 507},
  [165] = {.lex_state = 507},
  [166] = {.lex_state = 487, .external_lex_state = 2},
  [167] = {.lex_state = 780, .external_lex_state = 3},
  [168] = {.lex_state = 487, .external_lex_state = 2},
  [169] = {.lex_state = 487, .external_lex_state = 2},
  [170] = {.lex_state = 515, .external_lex_state = 2},
  [171] = {.lex_state = 487, .external_lex_state = 2},
  [172] = {.lex_state = 487, .external_lex_state = 2},
  [173] = {.lex_state = 487, .external_lex_state = 2},
  [174] = {.lex_state = 487, .external_lex_state = 2},
  [175] = {.lex_state = 487, .external_lex_state = 2},
  [176] = {.lex_state = 520},
  [177] = {.lex_state = 181},
  [178] = {.lex_state = 883},
  [179] = {.lex_state = 349},
  [180] = {.lex_state = 181},
  [181] = {.lex_state = 181},
  [182] = {.lex_state = 181},
  [183] = {.lex_state = 883},
  [184] = {.lex_state = 588},
  [185] = {.lex_state = 520},
  [186] = {.lex_state = 855},
  [187] = {.lex_state = 324},
  [188] = {.lex_state = 181},
  [189] = {.lex_state = 181},
  [190] = {.lex_state = 588},
  [191] = {.lex_state = 507},
  [192] = {.lex_state = 520},
  [193] = {.lex_state = 566},
  [194] = {.lex_state = 520},
  [195] = {.lex_state = 773},
  [196] = {.lex_state = 773},
  [197] = {.lex_state = 888, .external_lex_state = 2},
  [198] = {.lex_state = 893, .external_lex_state = 2},
  [199] = {.lex_state = 181},
  [200] = {.lex_state = 515, .external_lex_state = 2},
  [201] = {.lex_state = 888, .external_lex_state = 2},
  [202] = {.lex_state = 773},
  [203] = {.lex_state = 349},
  [204] = {.lex_state = 888, .external_lex_state = 2},
  [205] = {.lex_state = 566},
  [206] = {.lex_state = 888, .external_lex_state = 2},
  [207] = {.lex_state = 540},
  [208] = {.lex_state = 349},
  [209] = {.lex_state = 181},
  [210] = {.lex_state = 181},
  [211] = {.lex_state = 898, .external_lex_state = 4},
  [212] = {.lex_state = 540},
  [213] = {.lex_state = 181},
  [214] = {.lex_state = 181},
  [215] = {.lex_state = 324},
  [216] = {.lex_state = 515, .external_lex_state = 2},
  [217] = {.lex_state = 515, .external_lex_state = 2},
  [218] = {.lex_state = 181},
  [219] = {.lex_state = 903, .external_lex_state = 2},
  [220] = {.lex_state = 566},
  [221] = {.lex_state = 566},
  [222] = {.lex_state = 507},
  [223] = {.lex_state = 566},
  [224] = {.lex_state = 515, .external_lex_state = 2},
  [225] = {.lex_state = 181},
  [226] = {.lex_state = 566},
  [227] = {.lex_state = 566},
  [228] = {.lex_state = 515, .external_lex_state = 2},
  [229] = {.lex_state = 181},
  [230] = {.lex_state = 181},
  [231] = {.lex_state = 349},
  [232] = {.lex_state = 181},
  [233] = {.lex_state = 349},
  [234] = {.lex_state = 515, .external_lex_state = 2},
  [235] = {.lex_state = 454},
  [236] = {.lex_state = 454},
  [237] = {.lex_state = 566},
  [238] = {.lex_state = 898, .external_lex_state = 4},
  [239] = {.lex_state = 540},
  [240] = {.lex_state = 515, .external_lex_state = 2},
  [241] = {.lex_state = 454},
  [242] = {.lex_state = 515, .external_lex_state = 2},
  [243] = {.lex_state = 454},
  [244] = {.lex_state = 593, .external_lex_state = 2},
  [245] = {.lex_state = 583, .external_lex_state = 2},
  [246] = {.lex_state = 593, .external_lex_state = 2},
  [247] = {.lex_state = 349},
  [248] = {.lex_state = 593, .external_lex_state = 2},
  [249] = {.lex_state = 578, .external_lex_state = 2},
  [250] = {.lex_state = 820, .external_lex_state = 2},
  [251] = {.lex_state = 825, .external_lex_state = 2},
  [252] = {.lex_state = 515, .external_lex_state = 2},
  [253] = {.lex_state = 815, .external_lex_state = 2},
  [254] = {.lex_state = 815, .external_lex_state = 2},
  [255] = {.lex_state = 566},
  [256] = {.lex_state = 515, .external_lex_state = 2},
  [257] = {.lex_state = 181},
  [258] = {.lex_state = 830, .external_lex_state = 2},
  [259] = {.lex_state = 482},
  [260] = {.lex_state = 566},
  [261] = {.lex_state = 908, .external_lex_state = 2},
  [262] = {.lex_state = 908, .external_lex_state = 2},
  [263] = {.lex_state = 830, .external_lex_state = 2},
  [264] = {.lex_state = 908, .external_lex_state = 2},
  [265] = {.lex_state = 815, .external_lex_state = 2},
  [266] = {.lex_state = 181},
  [267] = {.lex_state = 825, .external_lex_state = 2},
  [268] = {.lex_state = 566},
  [269] = {.lex_state = 860},
  [270] = {.lex_state = 773},
  [271] = {.lex_state = 913, .external_lex_state = 2},
  [272] = {.lex_state = 515, .external_lex_state = 2},
  [273] = {.lex_state = 181},
  [274] = {.lex_state = 181},
  [275] = {.lex_state = 869},
  [276] = {.lex_state = 869},
  [277] = {.lex_state = 876},
  [278] = {.lex_state = 876},
  [279] = {.lex_state = 507},
  [280] = {.lex_state = 507},
  [281] = {.lex_state = 507},
  [282] = {.lex_state = 507},
  [283] = {.lex_state = 918},
  [284] = {.lex_state = 918},
  [285] = {.lex_state = 925, .external_lex_state = 4},
  [286] = {.lex_state = 930},
  [287] = {.lex_state = 487, .external_lex_state = 2},
  [288] = {.lex_state = 487, .external_lex_state = 2},
  [289] = {.lex_state = 487, .external_lex_state = 2},
  [290] = {.lex_state = 487, .external_lex_state = 2},
  [291] = {.lex_state = 515, .external_lex_state = 2},
  [292] = {.lex_state = 487, .external_lex_state = 2},
  [293] = {.lex_state = 349},
  [294] = {.lex_state = 181},
  [295] = {.lex_state = 520},
  [296] = {.lex_state = 588},
  [297] = {.lex_state = 520},
  [298] = {.lex_state = 566},
  [299] = {.lex_state = 520},
  [300] = {.lex_state = 520},
  [301] = {.lex_state = 520},
  [302] = {.lex_state = 520},
  [303] = {.lex_state = 181},
  [304] = {.lex_state = 520},
  [305] = {.lex_state = 883},
  [306] = {.lex_state = 496},
  [307] = {.lex_state = 883},
  [308] = {.lex_state = 883},
  [309] = {.lex_state = 883},
  [310] = {.lex_state = 588},
  [311] = {.lex_state = 520},
  [312] = {.lex_state = 588},
  [313] = {.lex_state = 588},
  [314] = {.lex_state = 588},
  [315] = {.lex_state = 588},
  [316] = {.lex_state = 181},
  [317] = {.lex_state = 181},
  [318] = {.lex_state = 181},
  [319] = {.lex_state = 773},
  [320] = {.lex_state = 181},
  [321] = {.lex_state = 773},
  [322] = {.lex_state = 935},
  [323] = {.lex_state = 566},
  [324] = {.lex_state = 181},
  [325] = {.lex_state = 181},
  [326] = {.lex_state = 566},
  [327] = {.lex_state = 181},
  [328] = {.lex_state = 566},
  [329] = {.lex_state = 935},
  [330] = {.lex_state = 935},
  [331] = {.lex_state = 181},
  [332] = {.lex_state = 773},
  [333] = {.lex_state = 773},
  [334] = {.lex_state = 773},
  [335] = {.lex_state = 773},
  [336] = {.lex_state = 940, .external_lex_state = 2},
  [337] = {.lex_state = 913, .external_lex_state = 2},
  [338] = {.lex_state = 913, .external_lex_state = 2},
  [339] = {.lex_state = 913, .external_lex_state = 2},
  [340] = {.lex_state = 773},
  [341] = {.lex_state = 913, .external_lex_state = 2},
  [342] = {.lex_state = 181},
  [343] = {.lex_state = 773},
  [344] = {.lex_state = 515, .external_lex_state = 2},
  [345] = {.lex_state = 773},
  [346] = {.lex_state = 773},
  [347] = {.lex_state = 566},
  [348] = {.lex_state = 349},
  [349] = {.lex_state = 181},
  [350] = {.lex_state = 566},
  [351] = {.lex_state = 181},
  [352] = {.lex_state = 515, .external_lex_state = 2},
  [353] = {.lex_state = 898, .external_lex_state = 4},
  [354] = {.lex_state = 540},
  [355] = {.lex_state = 903, .external_lex_state = 2},
  [356] = {.lex_state = 566},
  [357] = {.lex_state = 566},
  [358] = {.lex_state = 515, .external_lex_state = 2},
  [359] = {.lex_state = 181},
  [360] = {.lex_state = 515, .external_lex_state = 2},
  [361] = {.lex_state = 181},
  [362] = {.lex_state = 945},
  [363] = {.lex_state = 507},
  [364] = {.lex_state = 515, .external_lex_state = 2},
  [365] = {.lex_state = 566},
  [366] = {.lex_state = 181},
  [367] = {.lex_state = 566},
  [368] = {.lex_state = 515, .external_lex_state = 2},
  [369] = {.lex_state = 181},
  [370] = {.lex_state = 181},
  [371] = {.lex_state = 181},
  [372] = {.lex_state = 349},
  [373] = {.lex_state = 515, .external_lex_state = 2},
  [374] = {.lex_state = 349},
  [375] = {.lex_state = 515, .external_lex_state = 2},
  [376] = {.lex_state = 898, .external_lex_state = 4},
  [377] = {.lex_state = 540},
  [378] = {.lex_state = 515, .external_lex_state = 2},
  [379] = {.lex_state = 593, .external_lex_state = 2},
  [380] = {.lex_state = 825, .external_lex_state = 2},
  [381] = {.lex_state = 515, .external_lex_state = 2},
  [382] = {.lex_state = 181},
  [383] = {.lex_state = 830, .external_lex_state = 2},
  [384] = {.lex_state = 181},
  [385] = {.lex_state = 181},
  [386] = {.lex_state = 181},
  [387] = {.lex_state = 908, .external_lex_state = 2},
  [388] = {.lex_state = 908, .external_lex_state = 2},
  [389] = {.lex_state = 825, .external_lex_state = 2},
  [390] = {.lex_state = 515, .external_lex_state = 2},
  [391] = {.lex_state = 825, .external_lex_state = 2},
  [392] = {.lex_state = 869},
  [393] = {.lex_state = 876},
  [394] = {.lex_state = 507},
  [395] = {.lex_state = 918},
  [396] = {.lex_state = 487, .external_lex_state = 2},
  [397] = {.lex_state = 950, .external_lex_state = 2},
  [398] = {.lex_state = 515, .external_lex_state = 2},
  [399] = {.lex_state = 925, .external_lex_state = 4},
  [400] = {.lex_state = 950, .external_lex_state = 2},
  [401] = {.lex_state = 925, .external_lex_state = 4},
  [402] = {.lex_state = 515, .external_lex_state = 2},
  [403] = {.lex_state = 930},
  [404] = {.lex_state = 930},
  [405] = {.lex_state = 487, .external_lex_state = 2},
  [406] = {.lex_state = 181},
  [407] = {.lex_state = 349},
  [408] = {.lex_state = 181},
  [409] = {.lex_state = 349},
  [410] = {.lex_state = 520},
  [411] = {.lex_state = 520},
  [412] = {.lex_state = 520},
  [413] = {.lex_state = 349},
  [414] = {.lex_state = 181},
  [415] = {.lex_state = 520},
  [416] = {.lex_state = 520},
  [417] = {.lex_state = 520},
  [418] = {.lex_state = 588},
  [419] = {.lex_state = 181},
  [420] = {.lex_state = 883},
  [421] = {.lex_state = 588},
  [422] = {.lex_state = 566},
  [423] = {.lex_state = 181},
  [424] = {.lex_state = 181},
  [425] = {.lex_state = 181},
  [426] = {.lex_state = 181},
  [427] = {.lex_state = 181},
  [428] = {.lex_state = 888, .external_lex_state = 2},
  [429] = {.lex_state = 181},
  [430] = {.lex_state = 773},
  [431] = {.lex_state = 935},
  [432] = {.lex_state = 773},
  [433] = {.lex_state = 935},
  [434] = {.lex_state = 181},
  [435] = {.lex_state = 773},
  [436] = {.lex_state = 888, .external_lex_state = 2},
  [437] = {.lex_state = 181},
  [438] = {.lex_state = 773},
  [439] = {.lex_state = 349},
  [440] = {.lex_state = 181},
  [441] = {.lex_state = 773},
  [442] = {.lex_state = 773},
  [443] = {.lex_state = 773},
  [444] = {.lex_state = 181},
  [445] = {.lex_state = 773},
  [446] = {.lex_state = 773},
  [447] = {.lex_state = 888, .external_lex_state = 2},
  [448] = {.lex_state = 773},
  [449] = {.lex_state = 913, .external_lex_state = 2},
  [450] = {.lex_state = 181},
  [451] = {.lex_state = 913, .external_lex_state = 2},
  [452] = {.lex_state = 913, .external_lex_state = 2},
  [453] = {.lex_state = 773},
  [454] = {.lex_state = 515, .external_lex_state = 2},
  [455] = {.lex_state = 515, .external_lex_state = 2},
  [456] = {.lex_state = 181},
  [457] = {.lex_state = 566},
  [458] = {.lex_state = 349},
  [459] = {.lex_state = 181},
  [460] = {.lex_state = 181},
  [461] = {.lex_state = 898, .external_lex_state = 4},
  [462] = {.lex_state = 181},
  [463] = {.lex_state = 515, .external_lex_state = 2},
  [464] = {.lex_state = 515, .external_lex_state = 2},
  [465] = {.lex_state = 181},
  [466] = {.lex_state = 181},
  [467] = {.lex_state = 181},
  [468] = {.lex_state = 566},
  [469] = {.lex_state = 515, .external_lex_state = 2},
  [470] = {.lex_state = 566},
  [471] = {.lex_state = 181},
  [472] = {.lex_state = 945},
  [473] = {.lex_state = 515, .external_lex_state = 2},
  [474] = {.lex_state = 181},
  [475] = {.lex_state = 181},
  [476] = {.lex_state = 181},
  [477] = {.lex_state = 515, .external_lex_state = 2},
  [478] = {.lex_state = 515, .external_lex_state = 2},
  [479] = {.lex_state = 515, .external_lex_state = 2},
  [480] = {.lex_state = 181},
  [481] = {.lex_state = 830, .external_lex_state = 2},
  [482] = {.lex_state = 830, .external_lex_state = 2},
  [483] = {.lex_state = 482},
  [484] = {.lex_state = 181},
  [485] = {.lex_state = 482},
  [486] = {.lex_state = 566},
  [487] = {.lex_state = 181},
  [488] = {.lex_state = 515, .external_lex_state = 2},
  [489] = {.lex_state = 925, .external_lex_state = 4},
  [490] = {.lex_state = 950, .external_lex_state = 2},
  [491] = {.lex_state = 496},
  [492] = {.lex_state = 507},
  [493] = {.lex_state = 950, .external_lex_state = 2},
  [494] = {.lex_state = 950, .external_lex_state = 2},
  [495] = {.lex_state = 950, .external_lex_state = 2},
  [496] = {.lex_state = 487, .external_lex_state = 2},
  [497] = {.lex_state = 925, .external_lex_state = 4},
  [498] = {.lex_state = 930},
  [499] = {.lex_state = 930},
  [500] = {.lex_state = 181},
  [501] = {.lex_state = 520},
  [502] = {.lex_state = 520},
  [503] = {.lex_state = 520},
  [504] = {.lex_state = 349},
  [505] = {.lex_state = 181},
  [506] = {.lex_state = 883},
  [507] = {.lex_state = 181},
  [508] = {.lex_state = 566},
  [509] = {.lex_state = 181},
  [510] = {.lex_state = 935},
  [511] = {.lex_state = 181},
  [512] = {.lex_state = 935},
  [513] = {.lex_state = 181},
  [514] = {.lex_state = 181},
  [515] = {.lex_state = 888, .external_lex_state = 2},
  [516] = {.lex_state = 935},
  [517] = {.lex_state = 935},
  [518] = {.lex_state = 935},
  [519] = {.lex_state = 773},
  [520] = {.lex_state = 181},
  [521] = {.lex_state = 773},
  [522] = {.lex_state = 888, .external_lex_state = 2},
  [523] = {.lex_state = 935},
  [524] = {.lex_state = 773},
  [525] = {.lex_state = 349},
  [526] = {.lex_state = 935},
  [527] = {.lex_state = 773},
  [528] = {.lex_state = 913, .external_lex_state = 2},
  [529] = {.lex_state = 181},
  [530] = {.lex_state = 913, .external_lex_state = 2},
  [531] = {.lex_state = 181},
  [532] = {.lex_state = 181},
  [533] = {.lex_state = 181},
  [534] = {.lex_state = 898, .external_lex_state = 4},
  [535] = {.lex_state = 181},
  [536] = {.lex_state = 181},
  [537] = {.lex_state = 566},
  [538] = {.lex_state = 181},
  [539] = {.lex_state = 181},
  [540] = {.lex_state = 181},
  [541] = {.lex_state = 515, .external_lex_state = 2},
  [542] = {.lex_state = 515, .external_lex_state = 2},
  [543] = {.lex_state = 181},
  [544] = {.lex_state = 830, .external_lex_state = 2},
  [545] = {.lex_state = 482},
  [546] = {.lex_state = 181},
  [547] = {.lex_state = 566},
  [548] = {.lex_state = 181},
  [549] = {.lex_state = 482},
  [550] = {.lex_state = 566},
  [551] = {.lex_state = 181},
  [552] = {.lex_state = 950, .external_lex_state = 2},
  [553] = {.lex_state = 507},
  [554] = {.lex_state = 950, .external_lex_state = 2},
  [555] = {.lex_state = 181},
  [556] = {.lex_state = 935},
  [557] = {.lex_state = 935},
  [558] = {.lex_state = 935},
  [559] = {.lex_state = 935},
  [560] = {.lex_state = 181},
  [561] = {.lex_state = 773},
  [562] = {.lex_state = 913, .external_lex_state = 2},
  [563] = {.lex_state = 181},
  [564] = {.lex_state = 515, .external_lex_state = 2},
  [565] = {.lex_state = 181},
  [566] = {.lex_state = 181},
  [567] = {.lex_state = 181},
  [568] = {.lex_state = 181},
  [569] = {.lex_state = 566},
  [570] = {.lex_state = 181},
  [571] = {.lex_state = 181},
  [572] = {.lex_state = 181},
  [573] = {.lex_state = 181},
  [574] = {.lex_state = 181},
  [575] = {.lex_state = 950, .external_lex_state = 2},
  [576] = {.lex_state = 950, .external_lex_state = 2},
  [577] = {.lex_state = 935},
  [578] = {.lex_state = 515, .external_lex_state = 2},
  [579] = {.lex_state = 181},
  [580] = {.lex_state = 181},
  [581] = {.lex_state = 181},
  [582] = {.lex_state = 181},
  [583] = {.lex_state = 181},
  [584] = {.lex_state = 181},
  [585] = {.lex_state = 515, .external_lex_state = 2},
  [586] = {.lex_state = 181},
  [587] = {.lex_state = 181},
  [588] = {.lex_state = 181},
  [589] = {.lex_state = 181},
  [590] = {.lex_state = 515, .external_lex_state = 2},
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
    [ts_external_token__layout_semicolon] = true,
  },
  [3] = {
    [ts_external_token__layout_open_brace] = true,
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
    [anon_sym_TILDE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(3),
    [anon_sym__] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(3),
    [anon_sym_DASH_GT] = ACTIONS(3),
    [sym_unit_type] = ACTIONS(3),
    [sym_list_constructor] = ACTIONS(3),
    [sym_function_constructor] = ACTIONS(3),
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
    [sym_module] = STATE(18),
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(20),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_variable_identifier] = STATE(25),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_module_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_module] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_newtype] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [2] = {
    [sym_module_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(5),
  },
  [3] = {
    [anon_sym_qualified] = ACTIONS(45),
    [sym_module_identifier] = ACTIONS(47),
    [sym_comment] = ACTIONS(5),
  },
  [4] = {
    [sym_foreign_import] = STATE(32),
    [anon_sym_import] = ACTIONS(49),
    [sym_foreign_export] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
  },
  [5] = {
    [anon_sym_LPAREN] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
  },
  [6] = {
    [sym_context] = STATE(36),
    [sym_class] = STATE(37),
    [sym_constructor_identifier] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [7] = {
    [sym_context] = STATE(39),
    [sym_class] = STATE(37),
    [sym_constructor_identifier] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [8] = {
    [sym__op] = STATE(45),
    [sym_variable_symbol] = STATE(46),
    [sym_constructor_symbol] = STATE(46),
    [sym_integer] = STATE(47),
    [sym__variable_symbol] = STATE(48),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_BQUOTE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_1] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [9] = {
    [sym_context] = STATE(50),
    [sym_class] = STATE(37),
    [sym_simple_type] = STATE(51),
    [sym_constructor_identifier] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [10] = {
    [sym_context] = STATE(54),
    [sym_class] = STATE(37),
    [sym_simple_type] = STATE(55),
    [sym_constructor_identifier] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [11] = {
    [sym_simple_type] = STATE(57),
    [sym_constructor_identifier] = STATE(58),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [12] = {
    [sym__layout_semicolon] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_TILDE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(73),
    [anon_sym_DASH_GT] = ACTIONS(73),
    [sym_list_constructor] = ACTIONS(73),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [sym__integer_literal] = ACTIONS(73),
    [sym__octal_literal] = ACTIONS(73),
    [sym__hexidecimal_literal] = ACTIONS(73),
  },
  [13] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
  },
  [14] = {
    [sym__layout_semicolon] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_where] = ACTIONS(85),
    [anon_sym_do] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(87),
    [sym__constructor_pattern] = ACTIONS(87),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym__integer_literal] = ACTIONS(85),
    [sym__octal_literal] = ACTIONS(85),
    [sym__hexidecimal_literal] = ACTIONS(85),
  },
  [15] = {
    [sym__graphic] = STATE(63),
    [sym__small] = STATE(64),
    [sym__large] = STATE(64),
    [sym__symbol] = STATE(64),
    [sym__special] = STATE(64),
    [sym__escape] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_AT] = ACTIONS(91),
    [anon_sym__] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_BANG] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(91),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(93),
    [sym__ascii_large] = ACTIONS(101),
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
    [anon_sym_BSLASH] = ACTIONS(103),
    [sym__space] = ACTIONS(97),
  },
  [16] = {
    [sym__gap] = STATE(70),
    [sym__graphic] = STATE(70),
    [sym__small] = STATE(72),
    [sym__large] = STATE(72),
    [sym__symbol] = STATE(72),
    [sym__special] = STATE(72),
    [sym__escape] = STATE(70),
    [aux_sym_string_repeat1] = STATE(76),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(109),
    [sym__ascii_large] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_1] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(119),
    [sym__space] = ACTIONS(121),
    [sym__newline] = ACTIONS(121),
    [sym__tab] = ACTIONS(121),
    [sym__vertical_tab] = ACTIONS(121),
  },
  [17] = {
    [sym__layout_semicolon] = ACTIONS(123),
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_where] = ACTIONS(125),
    [anon_sym_do] = ACTIONS(125),
    [sym__variable_pattern] = ACTIONS(127),
    [sym__constructor_pattern] = ACTIONS(127),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym__integer_literal] = ACTIONS(125),
    [sym__octal_literal] = ACTIONS(125),
    [sym__hexidecimal_literal] = ACTIONS(125),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_comment] = ACTIONS(5),
  },
  [19] = {
    [sym__layout_semicolon] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(133),
    [sym_comment] = ACTIONS(5),
  },
  [20] = {
    [sym__layout_semicolon] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(137),
    [sym_comment] = ACTIONS(5),
  },
  [21] = {
    [sym_function_body] = STATE(79),
    [anon_sym_EQ] = ACTIONS(139),
    [sym_comment] = ACTIONS(5),
  },
  [22] = {
    [sym__function_pattern] = STATE(90),
    [sym_label_pattern] = STATE(84),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(91),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_variable_identifier] = STATE(93),
    [sym_constructor_identifier] = STATE(94),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [aux_sym_function_head_repeat1] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_EQ] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(155),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [23] = {
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_EQ] = ACTIONS(163),
    [anon_sym_TILDE] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym__] = ACTIONS(163),
    [sym_list_constructor] = ACTIONS(163),
    [sym__variable_pattern] = ACTIONS(165),
    [sym__constructor_pattern] = ACTIONS(165),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(163),
    [sym__octal_literal] = ACTIONS(163),
    [sym__hexidecimal_literal] = ACTIONS(163),
  },
  [24] = {
    [sym__layout_semicolon] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_COLON_COLON] = ACTIONS(167),
    [sym_comment] = ACTIONS(5),
  },
  [25] = {
    [sym__layout_semicolon] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_EQ] = ACTIONS(163),
    [anon_sym_TILDE] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym__] = ACTIONS(163),
    [anon_sym_COLON_COLON] = ACTIONS(171),
    [sym_list_constructor] = ACTIONS(163),
    [sym__variable_pattern] = ACTIONS(165),
    [sym__constructor_pattern] = ACTIONS(165),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(163),
    [sym__octal_literal] = ACTIONS(163),
    [sym__hexidecimal_literal] = ACTIONS(163),
  },
  [26] = {
    [sym__layout_semicolon] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_where] = ACTIONS(171),
    [anon_sym_do] = ACTIONS(171),
    [anon_sym_COLON_COLON] = ACTIONS(171),
    [sym__variable_pattern] = ACTIONS(173),
    [sym__constructor_pattern] = ACTIONS(173),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [sym__integer_literal] = ACTIONS(171),
    [sym__octal_literal] = ACTIONS(171),
    [sym__hexidecimal_literal] = ACTIONS(171),
  },
  [27] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(97),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_variable_identifier] = STATE(25),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_newtype] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [28] = {
    [sym_module_exports] = STATE(100),
    [sym_where] = STATE(101),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_where] = ACTIONS(179),
    [sym_comment] = ACTIONS(5),
  },
  [29] = {
    [sym_module_identifier] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
  },
  [30] = {
    [sym_import_specification] = STATE(106),
    [sym__layout_semicolon] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_as] = ACTIONS(189),
    [anon_sym_hiding] = ACTIONS(191),
    [sym_comment] = ACTIONS(5),
  },
  [31] = {
    [anon_sym_ccall] = ACTIONS(193),
    [anon_sym_stdcall] = ACTIONS(193),
    [anon_sym_cplusplus] = ACTIONS(193),
    [anon_sym_jvm] = ACTIONS(193),
    [anon_sym_dotnet] = ACTIONS(193),
    [sym_comment] = ACTIONS(5),
  },
  [32] = {
    [sym_calling_convention] = STATE(108),
    [anon_sym_ccall] = ACTIONS(195),
    [anon_sym_stdcall] = ACTIONS(195),
    [anon_sym_cplusplus] = ACTIONS(195),
    [anon_sym_jvm] = ACTIONS(195),
    [anon_sym_dotnet] = ACTIONS(195),
    [sym_comment] = ACTIONS(5),
  },
  [33] = {
    [sym__identifier] = STATE(110),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [anon_sym_RPAREN] = ACTIONS(197),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [34] = {
    [sym_class] = STATE(111),
    [sym_constructor_identifier] = STATE(112),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [35] = {
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
  },
  [36] = {
    [sym_constructor_identifier] = STATE(113),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [37] = {
    [anon_sym_EQ_GT] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [38] = {
    [sym_where] = STATE(118),
    [sym_variable_identifier] = STATE(119),
    [aux_sym_type_class_repeat1] = STATE(120),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_where] = ACTIONS(207),
    [sym__variable_pattern] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
  },
  [39] = {
    [sym_constructor_identifier] = STATE(121),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [40] = {
    [sym_where] = STATE(122),
    [sym_variable_identifier] = STATE(119),
    [aux_sym_type_class_repeat1] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_where] = ACTIONS(207),
    [sym__variable_pattern] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
  },
  [41] = {
    [sym__layout_semicolon] = ACTIONS(211),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(213),
    [anon_sym_DOT] = ACTIONS(213),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(213),
    [anon_sym_DOLLAR] = ACTIONS(213),
    [anon_sym_PERCENT] = ACTIONS(213),
    [anon_sym_AMP] = ACTIONS(213),
    [anon_sym_1] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_QMARK] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(213),
  },
  [42] = {
    [sym__identifier] = STATE(124),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [43] = {
    [sym__constructor_symbol] = STATE(126),
    [aux_sym_constructor_symbol_repeat1] = STATE(127),
    [sym__layout_semicolon] = ACTIONS(215),
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(219),
    [anon_sym_BANG] = ACTIONS(219),
    [anon_sym_DOT] = ACTIONS(219),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(219),
    [anon_sym_DOLLAR] = ACTIONS(219),
    [anon_sym_PERCENT] = ACTIONS(219),
    [anon_sym_AMP] = ACTIONS(219),
    [anon_sym_1] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_QMARK] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(219),
  },
  [44] = {
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_EQ] = ACTIONS(125),
    [anon_sym_TILDE] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym__] = ACTIONS(125),
    [anon_sym_BQUOTE] = ACTIONS(125),
    [anon_sym_COLON] = ACTIONS(125),
    [sym_list_constructor] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [sym__variable_pattern] = ACTIONS(127),
    [sym__constructor_pattern] = ACTIONS(127),
    [anon_sym_DOT] = ACTIONS(125),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(125),
    [anon_sym_DOLLAR] = ACTIONS(125),
    [anon_sym_PERCENT] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_1] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_QMARK] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(125),
    [sym__integer_literal] = ACTIONS(125),
    [sym__octal_literal] = ACTIONS(125),
    [sym__hexidecimal_literal] = ACTIONS(125),
  },
  [45] = {
    [aux_sym_fixity_repeat1] = STATE(129),
    [sym__layout_semicolon] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(223),
    [anon_sym_COMMA] = ACTIONS(225),
    [sym_comment] = ACTIONS(5),
  },
  [46] = {
    [sym__layout_semicolon] = ACTIONS(227),
    [anon_sym_SEMI] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(229),
    [sym_comment] = ACTIONS(5),
  },
  [47] = {
    [sym__op] = STATE(130),
    [sym_variable_symbol] = STATE(46),
    [sym_constructor_symbol] = STATE(46),
    [sym__variable_symbol] = STATE(48),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_BQUOTE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_1] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
  },
  [48] = {
    [sym__variable_symbol] = STATE(131),
    [aux_sym_variable_symbol_repeat1] = STATE(132),
    [sym__layout_semicolon] = ACTIONS(231),
    [anon_sym_SEMI] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_1] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
  },
  [49] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_deriving] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
  },
  [50] = {
    [sym_simple_type] = STATE(133),
    [sym_constructor_identifier] = STATE(134),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [51] = {
    [sym_constructors] = STATE(137),
    [sym_constructor] = STATE(138),
    [sym_deriving] = STATE(139),
    [sym_constructor_identifier] = STATE(140),
    [sym__layout_semicolon] = ACTIONS(235),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_deriving] = ACTIONS(241),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [52] = {
    [sym_variable_identifier] = STATE(142),
    [aux_sym_type_class_repeat1] = STATE(143),
    [sym__layout_semicolon] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(245),
    [anon_sym_deriving] = ACTIONS(245),
    [sym__variable_pattern] = ACTIONS(247),
    [sym__constructor_pattern] = ACTIONS(249),
    [sym_comment] = ACTIONS(5),
  },
  [53] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym__constructor_pattern] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
  },
  [54] = {
    [sym_simple_type] = STATE(144),
    [sym_constructor_identifier] = STATE(58),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [55] = {
    [anon_sym_EQ] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
  },
  [56] = {
    [sym_variable_identifier] = STATE(147),
    [aux_sym_type_class_repeat1] = STATE(148),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(245),
    [sym__variable_pattern] = ACTIONS(253),
    [sym_comment] = ACTIONS(5),
  },
  [57] = {
    [anon_sym_EQ] = ACTIONS(255),
    [sym_comment] = ACTIONS(5),
  },
  [58] = {
    [sym_variable_identifier] = STATE(151),
    [aux_sym_type_class_repeat1] = STATE(148),
    [anon_sym_EQ] = ACTIONS(245),
    [sym__variable_pattern] = ACTIONS(257),
    [sym_comment] = ACTIONS(5),
  },
  [59] = {
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_EQ] = ACTIONS(259),
    [anon_sym_TILDE] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_AT] = ACTIONS(259),
    [anon_sym__] = ACTIONS(259),
    [sym_list_constructor] = ACTIONS(259),
    [sym__variable_pattern] = ACTIONS(261),
    [sym__constructor_pattern] = ACTIONS(261),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(261),
    [anon_sym_SQUOTE] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [sym__integer_literal] = ACTIONS(259),
    [sym__octal_literal] = ACTIONS(259),
    [sym__hexidecimal_literal] = ACTIONS(259),
  },
  [60] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(263),
  },
  [61] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(265),
  },
  [62] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(267),
  },
  [63] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(269),
  },
  [64] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(271),
  },
  [65] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(273),
  },
  [66] = {
    [sym__char_escape] = STATE(154),
    [sym__ascii] = STATE(154),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(275),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(275),
    [anon_sym_CARET] = ACTIONS(279),
    [anon_sym_BSLASH] = ACTIONS(275),
    [anon_sym_x] = ACTIONS(281),
    [anon_sym_X] = ACTIONS(281),
    [anon_sym_o] = ACTIONS(283),
    [anon_sym_O] = ACTIONS(283),
    [anon_sym_a] = ACTIONS(275),
    [anon_sym_b] = ACTIONS(275),
    [anon_sym_f] = ACTIONS(275),
    [anon_sym_n] = ACTIONS(275),
    [anon_sym_r] = ACTIONS(275),
    [anon_sym_t] = ACTIONS(275),
    [anon_sym_v] = ACTIONS(275),
    [anon_sym_NUL] = ACTIONS(285),
    [anon_sym_SOH] = ACTIONS(285),
    [anon_sym_STX] = ACTIONS(285),
    [anon_sym_ETX] = ACTIONS(285),
    [anon_sym_EOT] = ACTIONS(285),
    [anon_sym_ENQ] = ACTIONS(285),
    [anon_sym_ACK] = ACTIONS(285),
    [anon_sym_BEL] = ACTIONS(285),
    [anon_sym_BS] = ACTIONS(285),
    [anon_sym_HT] = ACTIONS(285),
    [anon_sym_LF] = ACTIONS(285),
    [anon_sym_VT] = ACTIONS(285),
    [anon_sym_FF] = ACTIONS(285),
    [anon_sym_CR] = ACTIONS(285),
    [anon_sym_SO] = ACTIONS(285),
    [anon_sym_SI] = ACTIONS(285),
    [anon_sym_DLE] = ACTIONS(285),
    [anon_sym_DC1] = ACTIONS(285),
    [anon_sym_DC2] = ACTIONS(285),
    [anon_sym_DC3] = ACTIONS(285),
    [anon_sym_DC4] = ACTIONS(285),
    [anon_sym_NAK] = ACTIONS(285),
    [anon_sym_SYN] = ACTIONS(285),
    [anon_sym_ETB] = ACTIONS(285),
    [anon_sym_CAN] = ACTIONS(285),
    [anon_sym_EM] = ACTIONS(285),
    [anon_sym_SUB] = ACTIONS(285),
    [anon_sym_ESC] = ACTIONS(285),
    [anon_sym_FS] = ACTIONS(285),
    [anon_sym_GS] = ACTIONS(285),
    [anon_sym_RS] = ACTIONS(285),
    [anon_sym_US] = ACTIONS(285),
    [anon_sym_SP] = ACTIONS(285),
    [anon_sym_DEL] = ACTIONS(285),
  },
  [67] = {
    [anon_sym_SEMI] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(287),
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_EQ] = ACTIONS(287),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(287),
    [anon_sym_DASH] = ACTIONS(287),
    [anon_sym_AT] = ACTIONS(287),
    [anon_sym__] = ACTIONS(287),
    [anon_sym_BQUOTE] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(287),
    [anon_sym_PIPE] = ACTIONS(287),
    [anon_sym_BANG] = ACTIONS(287),
    [anon_sym_DOT] = ACTIONS(287),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(287),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(287),
    [sym__ascii_large] = ACTIONS(287),
    [anon_sym_POUND] = ACTIONS(287),
    [anon_sym_DOLLAR] = ACTIONS(287),
    [anon_sym_PERCENT] = ACTIONS(287),
    [anon_sym_AMP] = ACTIONS(287),
    [anon_sym_1] = ACTIONS(287),
    [anon_sym_PLUS] = ACTIONS(287),
    [anon_sym_SLASH] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(287),
    [anon_sym_GT] = ACTIONS(287),
    [anon_sym_QMARK] = ACTIONS(287),
    [anon_sym_CARET] = ACTIONS(287),
    [anon_sym_BSLASH] = ACTIONS(287),
    [sym__space] = ACTIONS(287),
    [sym__newline] = ACTIONS(287),
    [sym__tab] = ACTIONS(287),
    [sym__vertical_tab] = ACTIONS(287),
  },
  [68] = {
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_EQ] = ACTIONS(289),
    [anon_sym_TILDE] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_DASH] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(289),
    [anon_sym__] = ACTIONS(289),
    [anon_sym_BQUOTE] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(289),
    [anon_sym_BANG] = ACTIONS(289),
    [anon_sym_DOT] = ACTIONS(289),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(289),
    [sym__ascii_large] = ACTIONS(289),
    [anon_sym_POUND] = ACTIONS(289),
    [anon_sym_DOLLAR] = ACTIONS(289),
    [anon_sym_PERCENT] = ACTIONS(289),
    [anon_sym_AMP] = ACTIONS(289),
    [anon_sym_1] = ACTIONS(289),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_SLASH] = ACTIONS(289),
    [anon_sym_LT] = ACTIONS(289),
    [anon_sym_GT] = ACTIONS(289),
    [anon_sym_QMARK] = ACTIONS(289),
    [anon_sym_CARET] = ACTIONS(289),
    [anon_sym_BSLASH] = ACTIONS(289),
    [sym__space] = ACTIONS(289),
    [sym__newline] = ACTIONS(289),
    [sym__tab] = ACTIONS(289),
    [sym__vertical_tab] = ACTIONS(289),
  },
  [69] = {
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_EQ] = ACTIONS(291),
    [anon_sym_TILDE] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(291),
    [anon_sym_AT] = ACTIONS(291),
    [anon_sym__] = ACTIONS(291),
    [anon_sym_BQUOTE] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_BANG] = ACTIONS(291),
    [anon_sym_DOT] = ACTIONS(291),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(291),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(291),
    [sym__ascii_large] = ACTIONS(291),
    [anon_sym_POUND] = ACTIONS(291),
    [anon_sym_DOLLAR] = ACTIONS(291),
    [anon_sym_PERCENT] = ACTIONS(291),
    [anon_sym_AMP] = ACTIONS(291),
    [anon_sym_1] = ACTIONS(291),
    [anon_sym_PLUS] = ACTIONS(291),
    [anon_sym_SLASH] = ACTIONS(291),
    [anon_sym_LT] = ACTIONS(291),
    [anon_sym_GT] = ACTIONS(291),
    [anon_sym_QMARK] = ACTIONS(291),
    [anon_sym_CARET] = ACTIONS(291),
    [anon_sym_BSLASH] = ACTIONS(291),
    [sym__space] = ACTIONS(291),
    [sym__newline] = ACTIONS(291),
    [sym__tab] = ACTIONS(291),
    [sym__vertical_tab] = ACTIONS(291),
  },
  [70] = {
    [anon_sym_SEMI] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_RBRACE] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_EQ] = ACTIONS(293),
    [anon_sym_TILDE] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_RBRACK] = ACTIONS(293),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_AT] = ACTIONS(293),
    [anon_sym__] = ACTIONS(293),
    [anon_sym_BQUOTE] = ACTIONS(293),
    [anon_sym_COLON] = ACTIONS(293),
    [anon_sym_PIPE] = ACTIONS(293),
    [anon_sym_BANG] = ACTIONS(293),
    [anon_sym_DOT] = ACTIONS(293),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(293),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(293),
    [sym__ascii_large] = ACTIONS(293),
    [anon_sym_POUND] = ACTIONS(293),
    [anon_sym_DOLLAR] = ACTIONS(293),
    [anon_sym_PERCENT] = ACTIONS(293),
    [anon_sym_AMP] = ACTIONS(293),
    [anon_sym_1] = ACTIONS(293),
    [anon_sym_PLUS] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(293),
    [anon_sym_LT] = ACTIONS(293),
    [anon_sym_GT] = ACTIONS(293),
    [anon_sym_QMARK] = ACTIONS(293),
    [anon_sym_CARET] = ACTIONS(293),
    [anon_sym_BSLASH] = ACTIONS(293),
    [sym__space] = ACTIONS(293),
    [sym__newline] = ACTIONS(293),
    [sym__tab] = ACTIONS(293),
    [sym__vertical_tab] = ACTIONS(293),
  },
  [71] = {
    [sym__layout_semicolon] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(297),
    [anon_sym_where] = ACTIONS(297),
    [anon_sym_do] = ACTIONS(297),
    [sym__variable_pattern] = ACTIONS(299),
    [sym__constructor_pattern] = ACTIONS(299),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [sym__integer_literal] = ACTIONS(297),
    [sym__octal_literal] = ACTIONS(297),
    [sym__hexidecimal_literal] = ACTIONS(297),
  },
  [72] = {
    [anon_sym_SEMI] = ACTIONS(301),
    [anon_sym_LBRACE] = ACTIONS(301),
    [anon_sym_RBRACE] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(301),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(301),
    [anon_sym__] = ACTIONS(301),
    [anon_sym_BQUOTE] = ACTIONS(301),
    [anon_sym_COLON] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(301),
    [anon_sym_BANG] = ACTIONS(301),
    [anon_sym_DOT] = ACTIONS(301),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(301),
    [sym__ascii_large] = ACTIONS(301),
    [anon_sym_POUND] = ACTIONS(301),
    [anon_sym_DOLLAR] = ACTIONS(301),
    [anon_sym_PERCENT] = ACTIONS(301),
    [anon_sym_AMP] = ACTIONS(301),
    [anon_sym_1] = ACTIONS(301),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_SLASH] = ACTIONS(301),
    [anon_sym_LT] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(301),
    [anon_sym_QMARK] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym_BSLASH] = ACTIONS(301),
    [sym__space] = ACTIONS(301),
    [sym__newline] = ACTIONS(301),
    [sym__tab] = ACTIONS(301),
    [sym__vertical_tab] = ACTIONS(301),
  },
  [73] = {
    [anon_sym_SEMI] = ACTIONS(303),
    [anon_sym_LBRACE] = ACTIONS(303),
    [anon_sym_RBRACE] = ACTIONS(303),
    [anon_sym_LPAREN] = ACTIONS(303),
    [anon_sym_RPAREN] = ACTIONS(303),
    [anon_sym_EQ] = ACTIONS(303),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(303),
    [anon_sym_DASH] = ACTIONS(303),
    [anon_sym_AT] = ACTIONS(303),
    [anon_sym__] = ACTIONS(303),
    [anon_sym_BQUOTE] = ACTIONS(303),
    [anon_sym_COLON] = ACTIONS(303),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_BANG] = ACTIONS(303),
    [anon_sym_DOT] = ACTIONS(303),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(303),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(303),
    [sym__ascii_large] = ACTIONS(303),
    [anon_sym_POUND] = ACTIONS(303),
    [anon_sym_DOLLAR] = ACTIONS(303),
    [anon_sym_PERCENT] = ACTIONS(303),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_1] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(303),
    [anon_sym_SLASH] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_QMARK] = ACTIONS(303),
    [anon_sym_CARET] = ACTIONS(303),
    [anon_sym_BSLASH] = ACTIONS(303),
    [sym__space] = ACTIONS(303),
    [sym__newline] = ACTIONS(303),
    [sym__tab] = ACTIONS(303),
    [sym__vertical_tab] = ACTIONS(303),
  },
  [74] = {
    [sym__char_escape] = STATE(160),
    [sym__ascii] = STATE(160),
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_EQ] = ACTIONS(289),
    [anon_sym_TILDE] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_DASH] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(289),
    [anon_sym__] = ACTIONS(289),
    [anon_sym_BQUOTE] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(289),
    [anon_sym_BANG] = ACTIONS(289),
    [anon_sym_DOT] = ACTIONS(289),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(307),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(289),
    [sym__ascii_large] = ACTIONS(289),
    [anon_sym_POUND] = ACTIONS(289),
    [anon_sym_DOLLAR] = ACTIONS(289),
    [anon_sym_PERCENT] = ACTIONS(289),
    [anon_sym_AMP] = ACTIONS(305),
    [anon_sym_1] = ACTIONS(289),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_SLASH] = ACTIONS(289),
    [anon_sym_LT] = ACTIONS(289),
    [anon_sym_GT] = ACTIONS(289),
    [anon_sym_QMARK] = ACTIONS(289),
    [anon_sym_CARET] = ACTIONS(309),
    [anon_sym_BSLASH] = ACTIONS(305),
    [sym__space] = ACTIONS(289),
    [sym__newline] = ACTIONS(289),
    [sym__tab] = ACTIONS(289),
    [sym__vertical_tab] = ACTIONS(289),
    [anon_sym_x] = ACTIONS(311),
    [anon_sym_X] = ACTIONS(311),
    [anon_sym_o] = ACTIONS(313),
    [anon_sym_O] = ACTIONS(313),
    [anon_sym_a] = ACTIONS(305),
    [anon_sym_b] = ACTIONS(305),
    [anon_sym_f] = ACTIONS(305),
    [anon_sym_n] = ACTIONS(305),
    [anon_sym_r] = ACTIONS(305),
    [anon_sym_t] = ACTIONS(305),
    [anon_sym_v] = ACTIONS(305),
    [anon_sym_NUL] = ACTIONS(315),
    [anon_sym_SOH] = ACTIONS(315),
    [anon_sym_STX] = ACTIONS(315),
    [anon_sym_ETX] = ACTIONS(315),
    [anon_sym_EOT] = ACTIONS(315),
    [anon_sym_ENQ] = ACTIONS(315),
    [anon_sym_ACK] = ACTIONS(315),
    [anon_sym_BEL] = ACTIONS(315),
    [anon_sym_BS] = ACTIONS(315),
    [anon_sym_HT] = ACTIONS(315),
    [anon_sym_LF] = ACTIONS(315),
    [anon_sym_VT] = ACTIONS(315),
    [anon_sym_FF] = ACTIONS(315),
    [anon_sym_CR] = ACTIONS(315),
    [anon_sym_SO] = ACTIONS(315),
    [anon_sym_SI] = ACTIONS(315),
    [anon_sym_DLE] = ACTIONS(315),
    [anon_sym_DC1] = ACTIONS(315),
    [anon_sym_DC2] = ACTIONS(315),
    [anon_sym_DC3] = ACTIONS(315),
    [anon_sym_DC4] = ACTIONS(315),
    [anon_sym_NAK] = ACTIONS(315),
    [anon_sym_SYN] = ACTIONS(315),
    [anon_sym_ETB] = ACTIONS(315),
    [anon_sym_CAN] = ACTIONS(315),
    [anon_sym_EM] = ACTIONS(315),
    [anon_sym_SUB] = ACTIONS(315),
    [anon_sym_ESC] = ACTIONS(315),
    [anon_sym_FS] = ACTIONS(315),
    [anon_sym_GS] = ACTIONS(315),
    [anon_sym_RS] = ACTIONS(315),
    [anon_sym_US] = ACTIONS(315),
    [anon_sym_SP] = ACTIONS(315),
    [anon_sym_DEL] = ACTIONS(315),
  },
  [75] = {
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_TILDE] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [anon_sym_DASH] = ACTIONS(317),
    [anon_sym_AT] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_BQUOTE] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_BANG] = ACTIONS(317),
    [anon_sym_DOT] = ACTIONS(317),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(317),
    [sym__ascii_large] = ACTIONS(317),
    [anon_sym_POUND] = ACTIONS(317),
    [anon_sym_DOLLAR] = ACTIONS(317),
    [anon_sym_PERCENT] = ACTIONS(317),
    [anon_sym_AMP] = ACTIONS(317),
    [anon_sym_1] = ACTIONS(317),
    [anon_sym_PLUS] = ACTIONS(317),
    [anon_sym_SLASH] = ACTIONS(317),
    [anon_sym_LT] = ACTIONS(317),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_CARET] = ACTIONS(317),
    [anon_sym_BSLASH] = ACTIONS(317),
    [sym__space] = ACTIONS(317),
    [sym__newline] = ACTIONS(317),
    [sym__tab] = ACTIONS(317),
    [sym__vertical_tab] = ACTIONS(317),
  },
  [76] = {
    [sym__gap] = STATE(165),
    [sym__graphic] = STATE(165),
    [sym__small] = STATE(72),
    [sym__large] = STATE(72),
    [sym__symbol] = STATE(72),
    [sym__special] = STATE(72),
    [sym__escape] = STATE(165),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(319),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(109),
    [sym__ascii_large] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_1] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(119),
    [sym__space] = ACTIONS(121),
    [sym__newline] = ACTIONS(121),
    [sym__tab] = ACTIONS(121),
    [sym__vertical_tab] = ACTIONS(121),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(325),
    [anon_sym_import] = ACTIONS(325),
    [anon_sym_foreign] = ACTIONS(325),
    [anon_sym_default] = ACTIONS(325),
    [anon_sym_class] = ACTIONS(325),
    [anon_sym_instance] = ACTIONS(325),
    [anon_sym_infixl] = ACTIONS(325),
    [anon_sym_infixr] = ACTIONS(325),
    [anon_sym_infix] = ACTIONS(325),
    [anon_sym_data] = ACTIONS(325),
    [anon_sym_newtype] = ACTIONS(325),
    [anon_sym_type] = ACTIONS(325),
    [sym__variable_pattern] = ACTIONS(327),
    [sym__constructor_pattern] = ACTIONS(327),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(327),
    [anon_sym_SQUOTE] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [sym__integer_literal] = ACTIONS(325),
    [sym__octal_literal] = ACTIONS(325),
    [sym__hexidecimal_literal] = ACTIONS(325),
  },
  [78] = {
    [sym_where] = STATE(170),
    [sym_general_constructor] = STATE(171),
    [sym__variable] = STATE(171),
    [sym_qualified_variable_identifier] = STATE(172),
    [sym__expression] = STATE(173),
    [sym_do_expression] = STATE(171),
    [sym__literal] = STATE(171),
    [sym__identifier] = STATE(171),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(174),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_function_body_repeat1] = STATE(175),
    [sym__layout_semicolon] = ACTIONS(329),
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_where] = ACTIONS(207),
    [anon_sym_do] = ACTIONS(333),
    [sym__variable_pattern] = ACTIONS(335),
    [sym__constructor_pattern] = ACTIONS(337),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [79] = {
    [sym__layout_semicolon] = ACTIONS(339),
    [anon_sym_SEMI] = ACTIONS(341),
    [sym_comment] = ACTIONS(5),
  },
  [80] = {
    [sym__function_pattern] = STATE(179),
    [sym_label_pattern] = STATE(84),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym__pattern] = STATE(180),
    [sym_negative_literal] = STATE(181),
    [sym_general_constructor] = STATE(181),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(182),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_variable_identifier] = STATE(93),
    [sym_constructor_identifier] = STATE(183),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(343),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(345),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(347),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [81] = {
    [sym__function_pattern] = STATE(184),
    [sym_label_pattern] = STATE(84),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(91),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_variable_identifier] = STATE(93),
    [sym_constructor_identifier] = STATE(94),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(155),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [82] = {
    [sym__function_pattern] = STATE(187),
    [sym_label_pattern] = STATE(84),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(188),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_variable_identifier] = STATE(93),
    [sym_constructor_identifier] = STATE(94),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [83] = {
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_EQ] = ACTIONS(353),
    [anon_sym_TILDE] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
    [anon_sym_DASH] = ACTIONS(353),
    [anon_sym__] = ACTIONS(353),
    [anon_sym_BQUOTE] = ACTIONS(353),
    [anon_sym_COLON] = ACTIONS(353),
    [sym_list_constructor] = ACTIONS(353),
    [anon_sym_BANG] = ACTIONS(353),
    [sym__variable_pattern] = ACTIONS(355),
    [sym__constructor_pattern] = ACTIONS(355),
    [anon_sym_DOT] = ACTIONS(353),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(355),
    [anon_sym_SQUOTE] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_DOLLAR] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(353),
    [anon_sym_AMP] = ACTIONS(353),
    [anon_sym_1] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(353),
    [anon_sym_LT] = ACTIONS(353),
    [anon_sym_GT] = ACTIONS(353),
    [anon_sym_QMARK] = ACTIONS(353),
    [anon_sym_CARET] = ACTIONS(353),
    [sym__integer_literal] = ACTIONS(353),
    [sym__octal_literal] = ACTIONS(353),
    [sym__hexidecimal_literal] = ACTIONS(353),
  },
  [84] = {
    [anon_sym_LPAREN] = ACTIONS(357),
    [anon_sym_COMMA] = ACTIONS(357),
    [anon_sym_RPAREN] = ACTIONS(357),
    [anon_sym_EQ] = ACTIONS(357),
    [anon_sym_TILDE] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(357),
    [anon_sym_RBRACK] = ACTIONS(357),
    [anon_sym_DASH] = ACTIONS(357),
    [anon_sym__] = ACTIONS(357),
    [anon_sym_BQUOTE] = ACTIONS(357),
    [anon_sym_COLON] = ACTIONS(357),
    [sym_list_constructor] = ACTIONS(357),
    [anon_sym_BANG] = ACTIONS(357),
    [sym__variable_pattern] = ACTIONS(359),
    [sym__constructor_pattern] = ACTIONS(359),
    [anon_sym_DOT] = ACTIONS(357),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(359),
    [anon_sym_SQUOTE] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_POUND] = ACTIONS(357),
    [anon_sym_DOLLAR] = ACTIONS(357),
    [anon_sym_PERCENT] = ACTIONS(357),
    [anon_sym_AMP] = ACTIONS(357),
    [anon_sym_1] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(357),
    [anon_sym_SLASH] = ACTIONS(357),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_QMARK] = ACTIONS(357),
    [anon_sym_CARET] = ACTIONS(357),
    [sym__integer_literal] = ACTIONS(357),
    [sym__octal_literal] = ACTIONS(357),
    [sym__hexidecimal_literal] = ACTIONS(357),
  },
  [85] = {
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_TILDE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_BQUOTE] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(73),
    [sym_list_constructor] = ACTIONS(73),
    [anon_sym_BANG] = ACTIONS(73),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(73),
    [anon_sym_DOLLAR] = ACTIONS(73),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_1] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(73),
    [sym__integer_literal] = ACTIONS(73),
    [sym__octal_literal] = ACTIONS(73),
    [sym__hexidecimal_literal] = ACTIONS(73),
  },
  [86] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [sym_list_constructor] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym__integer_literal] = ACTIONS(79),
    [sym__octal_literal] = ACTIONS(79),
    [sym__hexidecimal_literal] = ACTIONS(79),
  },
  [87] = {
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym__] = ACTIONS(85),
    [anon_sym_BQUOTE] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(85),
    [sym_list_constructor] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(87),
    [sym__constructor_pattern] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(85),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
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
    [sym__integer_literal] = ACTIONS(85),
    [sym__octal_literal] = ACTIONS(85),
    [sym__hexidecimal_literal] = ACTIONS(85),
  },
  [88] = {
    [sym__graphic] = STATE(189),
    [sym__small] = STATE(64),
    [sym__large] = STATE(64),
    [sym__symbol] = STATE(64),
    [sym__special] = STATE(64),
    [sym__escape] = STATE(189),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_AT] = ACTIONS(91),
    [anon_sym__] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_BANG] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(91),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(361),
    [anon_sym_DQUOTE] = ACTIONS(361),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(93),
    [sym__ascii_large] = ACTIONS(101),
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
    [anon_sym_BSLASH] = ACTIONS(103),
    [sym__space] = ACTIONS(361),
  },
  [89] = {
    [sym__gap] = STATE(70),
    [sym__graphic] = STATE(70),
    [sym__small] = STATE(72),
    [sym__large] = STATE(72),
    [sym__symbol] = STATE(72),
    [sym__special] = STATE(72),
    [sym__escape] = STATE(70),
    [aux_sym_string_repeat1] = STATE(191),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(363),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(109),
    [sym__ascii_large] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_1] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(119),
    [sym__space] = ACTIONS(121),
    [sym__newline] = ACTIONS(121),
    [sym__tab] = ACTIONS(121),
    [sym__vertical_tab] = ACTIONS(121),
  },
  [90] = {
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_TILDE] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym__] = ACTIONS(365),
    [sym_list_constructor] = ACTIONS(365),
    [sym__variable_pattern] = ACTIONS(367),
    [sym__constructor_pattern] = ACTIONS(367),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(367),
    [anon_sym_SQUOTE] = ACTIONS(365),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [sym__integer_literal] = ACTIONS(365),
    [sym__octal_literal] = ACTIONS(365),
    [sym__hexidecimal_literal] = ACTIONS(365),
  },
  [91] = {
    [anon_sym_AT] = ACTIONS(369),
    [sym_comment] = ACTIONS(5),
  },
  [92] = {
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(357),
    [anon_sym_COMMA] = ACTIONS(357),
    [anon_sym_RPAREN] = ACTIONS(357),
    [anon_sym_EQ] = ACTIONS(357),
    [anon_sym_TILDE] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(357),
    [anon_sym_RBRACK] = ACTIONS(357),
    [anon_sym_DASH] = ACTIONS(357),
    [anon_sym__] = ACTIONS(357),
    [anon_sym_BQUOTE] = ACTIONS(357),
    [anon_sym_COLON] = ACTIONS(357),
    [sym_list_constructor] = ACTIONS(357),
    [anon_sym_BANG] = ACTIONS(357),
    [sym__variable_pattern] = ACTIONS(359),
    [sym__constructor_pattern] = ACTIONS(359),
    [anon_sym_DOT] = ACTIONS(357),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(359),
    [anon_sym_SQUOTE] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_POUND] = ACTIONS(357),
    [anon_sym_DOLLAR] = ACTIONS(357),
    [anon_sym_PERCENT] = ACTIONS(357),
    [anon_sym_AMP] = ACTIONS(357),
    [anon_sym_1] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(357),
    [anon_sym_SLASH] = ACTIONS(357),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_QMARK] = ACTIONS(357),
    [anon_sym_CARET] = ACTIONS(357),
    [sym__integer_literal] = ACTIONS(357),
    [sym__octal_literal] = ACTIONS(357),
    [sym__hexidecimal_literal] = ACTIONS(357),
  },
  [93] = {
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_EQ] = ACTIONS(171),
    [anon_sym_TILDE] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym__] = ACTIONS(171),
    [anon_sym_BQUOTE] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(171),
    [sym_list_constructor] = ACTIONS(171),
    [anon_sym_BANG] = ACTIONS(171),
    [sym__variable_pattern] = ACTIONS(173),
    [sym__constructor_pattern] = ACTIONS(173),
    [anon_sym_DOT] = ACTIONS(171),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_POUND] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(171),
    [anon_sym_1] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_QMARK] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(171),
    [sym__integer_literal] = ACTIONS(171),
    [sym__octal_literal] = ACTIONS(171),
    [sym__hexidecimal_literal] = ACTIONS(171),
  },
  [94] = {
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_EQ] = ACTIONS(171),
    [anon_sym_TILDE] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(171),
    [anon_sym__] = ACTIONS(171),
    [anon_sym_BQUOTE] = ACTIONS(171),
    [anon_sym_COLON_COLON] = ACTIONS(171),
    [sym_list_constructor] = ACTIONS(171),
    [sym__variable_pattern] = ACTIONS(173),
    [sym__constructor_pattern] = ACTIONS(173),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [sym__integer_literal] = ACTIONS(171),
    [sym__octal_literal] = ACTIONS(171),
    [sym__hexidecimal_literal] = ACTIONS(171),
  },
  [95] = {
    [sym__function_pattern] = STATE(194),
    [sym_label_pattern] = STATE(84),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(91),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_variable_identifier] = STATE(93),
    [sym_constructor_identifier] = STATE(94),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_EQ] = ACTIONS(373),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(155),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [96] = {
    [sym_type] = STATE(200),
    [sym__generic_type_constructor] = STATE(201),
    [sym_tupling_constructor] = STATE(197),
    [sym_tuple] = STATE(201),
    [sym_list] = STATE(201),
    [sym_parenthesized_constructor] = STATE(201),
    [sym_context] = STATE(202),
    [sym_class] = STATE(203),
    [sym_variable_identifier] = STATE(204),
    [sym_constructor_identifier] = STATE(205),
    [sym__type_constructors] = STATE(197),
    [sym_qualified_type_constructor] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(377),
    [sym_unit_type] = ACTIONS(379),
    [sym_list_constructor] = ACTIONS(379),
    [sym_function_constructor] = ACTIONS(379),
    [sym__variable_pattern] = ACTIONS(381),
    [sym__constructor_pattern] = ACTIONS(383),
    [sym_module_identifier] = ACTIONS(385),
    [sym_comment] = ACTIONS(5),
  },
  [97] = {
    [sym__layout_semicolon] = ACTIONS(387),
    [anon_sym_SEMI] = ACTIONS(389),
    [sym_comment] = ACTIONS(5),
  },
  [98] = {
    [sym_export] = STATE(209),
    [sym__identifier] = STATE(210),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [anon_sym_RPAREN] = ACTIONS(391),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [99] = {
    [sym__declarations] = STATE(213),
    [sym__layout_open_brace] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(395),
    [sym_comment] = ACTIONS(5),
  },
  [100] = {
    [sym_where] = STATE(214),
    [anon_sym_where] = ACTIONS(179),
    [sym_comment] = ACTIONS(5),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [sym_comment] = ACTIONS(5),
  },
  [102] = {
    [sym_import_specification] = STATE(216),
    [sym__layout_semicolon] = ACTIONS(399),
    [anon_sym_SEMI] = ACTIONS(401),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_as] = ACTIONS(403),
    [anon_sym_hiding] = ACTIONS(191),
    [sym_comment] = ACTIONS(5),
  },
  [103] = {
    [sym__identifier] = STATE(218),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [anon_sym_RPAREN] = ACTIONS(405),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [104] = {
    [sym_module_identifier] = ACTIONS(407),
    [sym_comment] = ACTIONS(5),
  },
  [105] = {
    [anon_sym_LPAREN] = ACTIONS(409),
    [sym_comment] = ACTIONS(5),
  },
  [106] = {
    [sym__layout_semicolon] = ACTIONS(399),
    [anon_sym_SEMI] = ACTIONS(401),
    [sym_comment] = ACTIONS(5),
  },
  [107] = {
    [anon_sym_unsafe] = ACTIONS(411),
    [anon_sym_safe] = ACTIONS(411),
    [sym__variable_pattern] = ACTIONS(413),
    [sym__constructor_pattern] = ACTIONS(413),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(411),
  },
  [108] = {
    [sym_safety] = STATE(223),
    [sym_type_signature] = STATE(224),
    [sym__identifier] = STATE(225),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [sym_string] = STATE(226),
    [anon_sym_unsafe] = ACTIONS(415),
    [anon_sym_safe] = ACTIONS(415),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(417),
  },
  [109] = {
    [sym__layout_semicolon] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(421),
    [sym_comment] = ACTIONS(5),
  },
  [110] = {
    [aux_sym_export_repeat1] = STATE(229),
    [anon_sym_COMMA] = ACTIONS(423),
    [anon_sym_RPAREN] = ACTIONS(425),
    [sym_comment] = ACTIONS(5),
  },
  [111] = {
    [aux_sym_context_repeat1] = STATE(232),
    [anon_sym_COMMA] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(429),
    [sym_comment] = ACTIONS(5),
  },
  [112] = {
    [sym_variable_identifier] = STATE(233),
    [anon_sym_LPAREN] = ACTIONS(205),
    [sym__variable_pattern] = ACTIONS(199),
    [sym_comment] = ACTIONS(5),
  },
  [113] = {
    [sym_where] = STATE(234),
    [sym_variable_identifier] = STATE(235),
    [aux_sym_type_class_repeat1] = STATE(236),
    [anon_sym_where] = ACTIONS(207),
    [sym__variable_pattern] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
  },
  [114] = {
    [sym__constructor_pattern] = ACTIONS(431),
    [sym_comment] = ACTIONS(5),
  },
  [115] = {
    [sym_variable_identifier] = STATE(151),
    [aux_sym_type_class_repeat1] = STATE(237),
    [sym__variable_pattern] = ACTIONS(253),
    [sym_comment] = ACTIONS(5),
  },
  [116] = {
    [sym__declarations] = STATE(240),
    [sym__layout_open_brace] = ACTIONS(433),
    [anon_sym_LBRACE] = ACTIONS(435),
    [sym_comment] = ACTIONS(5),
  },
  [117] = {
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(73),
    [anon_sym_DASH_GT] = ACTIONS(73),
    [anon_sym_EQ_GT] = ACTIONS(73),
    [sym__variable_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [118] = {
    [sym__layout_semicolon] = ACTIONS(437),
    [anon_sym_SEMI] = ACTIONS(439),
    [sym_comment] = ACTIONS(5),
  },
  [119] = {
    [anon_sym_where] = ACTIONS(441),
    [anon_sym_EQ_GT] = ACTIONS(443),
    [sym__variable_pattern] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
  },
  [120] = {
    [sym_where] = STATE(234),
    [sym_variable_identifier] = STATE(241),
    [anon_sym_where] = ACTIONS(207),
    [sym__variable_pattern] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
  },
  [121] = {
    [sym_where] = STATE(242),
    [sym_variable_identifier] = STATE(235),
    [aux_sym_type_class_repeat1] = STATE(243),
    [anon_sym_where] = ACTIONS(207),
    [sym__variable_pattern] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
  },
  [122] = {
    [sym__layout_semicolon] = ACTIONS(447),
    [anon_sym_SEMI] = ACTIONS(449),
    [sym_comment] = ACTIONS(5),
  },
  [123] = {
    [sym_where] = STATE(242),
    [sym_variable_identifier] = STATE(241),
    [anon_sym_where] = ACTIONS(207),
    [sym__variable_pattern] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
  },
  [124] = {
    [anon_sym_BQUOTE] = ACTIONS(451),
    [sym_comment] = ACTIONS(5),
  },
  [125] = {
    [sym__layout_semicolon] = ACTIONS(453),
    [anon_sym_SEMI] = ACTIONS(455),
    [anon_sym_COMMA] = ACTIONS(455),
    [anon_sym_DASH] = ACTIONS(455),
    [anon_sym_COLON] = ACTIONS(455),
    [anon_sym_BANG] = ACTIONS(455),
    [anon_sym_DOT] = ACTIONS(455),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(455),
    [anon_sym_DOLLAR] = ACTIONS(455),
    [anon_sym_PERCENT] = ACTIONS(455),
    [anon_sym_AMP] = ACTIONS(455),
    [anon_sym_1] = ACTIONS(455),
    [anon_sym_PLUS] = ACTIONS(455),
    [anon_sym_SLASH] = ACTIONS(455),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_GT] = ACTIONS(455),
    [anon_sym_QMARK] = ACTIONS(455),
    [anon_sym_CARET] = ACTIONS(455),
  },
  [126] = {
    [sym__layout_semicolon] = ACTIONS(457),
    [anon_sym_SEMI] = ACTIONS(459),
    [anon_sym_COMMA] = ACTIONS(459),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_COLON] = ACTIONS(459),
    [anon_sym_BANG] = ACTIONS(459),
    [anon_sym_DOT] = ACTIONS(459),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(459),
    [anon_sym_DOLLAR] = ACTIONS(459),
    [anon_sym_PERCENT] = ACTIONS(459),
    [anon_sym_AMP] = ACTIONS(459),
    [anon_sym_1] = ACTIONS(459),
    [anon_sym_PLUS] = ACTIONS(459),
    [anon_sym_SLASH] = ACTIONS(459),
    [anon_sym_LT] = ACTIONS(459),
    [anon_sym_GT] = ACTIONS(459),
    [anon_sym_QMARK] = ACTIONS(459),
    [anon_sym_CARET] = ACTIONS(459),
  },
  [127] = {
    [sym__constructor_symbol] = STATE(245),
    [sym__layout_semicolon] = ACTIONS(461),
    [anon_sym_SEMI] = ACTIONS(463),
    [anon_sym_COMMA] = ACTIONS(463),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(219),
    [anon_sym_BANG] = ACTIONS(219),
    [anon_sym_DOT] = ACTIONS(219),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(219),
    [anon_sym_DOLLAR] = ACTIONS(219),
    [anon_sym_PERCENT] = ACTIONS(219),
    [anon_sym_AMP] = ACTIONS(219),
    [anon_sym_1] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_QMARK] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(219),
  },
  [128] = {
    [sym__op] = STATE(246),
    [sym_variable_symbol] = STATE(46),
    [sym_constructor_symbol] = STATE(46),
    [sym__variable_symbol] = STATE(48),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_BQUOTE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_1] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
  },
  [129] = {
    [sym__layout_semicolon] = ACTIONS(465),
    [anon_sym_SEMI] = ACTIONS(467),
    [anon_sym_COMMA] = ACTIONS(469),
    [sym_comment] = ACTIONS(5),
  },
  [130] = {
    [aux_sym_fixity_repeat1] = STATE(248),
    [sym__layout_semicolon] = ACTIONS(465),
    [anon_sym_SEMI] = ACTIONS(467),
    [anon_sym_COMMA] = ACTIONS(225),
    [sym_comment] = ACTIONS(5),
  },
  [131] = {
    [sym__layout_semicolon] = ACTIONS(471),
    [anon_sym_SEMI] = ACTIONS(473),
    [anon_sym_COMMA] = ACTIONS(473),
    [anon_sym_DASH] = ACTIONS(473),
    [anon_sym_BANG] = ACTIONS(473),
    [anon_sym_DOT] = ACTIONS(473),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(473),
    [anon_sym_DOLLAR] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(473),
    [anon_sym_AMP] = ACTIONS(473),
    [anon_sym_1] = ACTIONS(473),
    [anon_sym_PLUS] = ACTIONS(473),
    [anon_sym_SLASH] = ACTIONS(473),
    [anon_sym_LT] = ACTIONS(473),
    [anon_sym_GT] = ACTIONS(473),
    [anon_sym_QMARK] = ACTIONS(473),
    [anon_sym_CARET] = ACTIONS(473),
  },
  [132] = {
    [sym__variable_symbol] = STATE(249),
    [sym__layout_semicolon] = ACTIONS(475),
    [anon_sym_SEMI] = ACTIONS(477),
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_1] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
  },
  [133] = {
    [sym_constructors] = STATE(251),
    [sym_constructor] = STATE(138),
    [sym_deriving] = STATE(252),
    [sym_constructor_identifier] = STATE(140),
    [sym__layout_semicolon] = ACTIONS(479),
    [anon_sym_SEMI] = ACTIONS(481),
    [anon_sym_EQ] = ACTIONS(483),
    [anon_sym_deriving] = ACTIONS(241),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [134] = {
    [sym_variable_identifier] = STATE(254),
    [aux_sym_type_class_repeat1] = STATE(143),
    [sym__layout_semicolon] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_EQ] = ACTIONS(245),
    [anon_sym_deriving] = ACTIONS(245),
    [sym__variable_pattern] = ACTIONS(485),
    [sym__constructor_pattern] = ACTIONS(249),
    [sym_comment] = ACTIONS(5),
  },
  [135] = {
    [sym_constructors] = STATE(251),
    [sym_constructor] = STATE(138),
    [sym_deriving] = STATE(252),
    [sym_constructor_identifier] = STATE(140),
    [sym__layout_semicolon] = ACTIONS(479),
    [anon_sym_SEMI] = ACTIONS(481),
    [anon_sym_deriving] = ACTIONS(241),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [136] = {
    [sym__identifier] = STATE(256),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(487),
    [sym__variable_pattern] = ACTIONS(381),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [137] = {
    [sym_deriving] = STATE(252),
    [sym__layout_semicolon] = ACTIONS(479),
    [anon_sym_SEMI] = ACTIONS(481),
    [anon_sym_deriving] = ACTIONS(241),
    [sym_comment] = ACTIONS(5),
  },
  [138] = {
    [aux_sym_constructors_repeat1] = STATE(258),
    [sym__layout_semicolon] = ACTIONS(489),
    [anon_sym_SEMI] = ACTIONS(491),
    [anon_sym_PIPE] = ACTIONS(493),
    [anon_sym_deriving] = ACTIONS(491),
    [sym_comment] = ACTIONS(5),
  },
  [139] = {
    [sym__layout_semicolon] = ACTIONS(479),
    [anon_sym_SEMI] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
  },
  [140] = {
    [sym_strict] = STATE(261),
    [sym__identifier] = STATE(261),
    [sym_variable_identifier] = STATE(262),
    [sym_constructor_identifier] = STATE(262),
    [sym_fields] = STATE(263),
    [aux_sym_constructor_repeat1] = STATE(264),
    [sym__layout_semicolon] = ACTIONS(495),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(499),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_deriving] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(501),
    [sym__variable_pattern] = ACTIONS(247),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [141] = {
    [sym__layout_semicolon] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_EQ_GT] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_deriving] = ACTIONS(73),
    [anon_sym_BANG] = ACTIONS(73),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [142] = {
    [sym__layout_semicolon] = ACTIONS(503),
    [anon_sym_SEMI] = ACTIONS(441),
    [anon_sym_EQ] = ACTIONS(441),
    [anon_sym_EQ_GT] = ACTIONS(443),
    [anon_sym_deriving] = ACTIONS(441),
    [sym__variable_pattern] = ACTIONS(445),
    [sym__constructor_pattern] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
  },
  [143] = {
    [sym_variable_identifier] = STATE(265),
    [sym__layout_semicolon] = ACTIONS(505),
    [anon_sym_SEMI] = ACTIONS(507),
    [anon_sym_EQ] = ACTIONS(507),
    [anon_sym_deriving] = ACTIONS(507),
    [sym__variable_pattern] = ACTIONS(485),
    [sym__constructor_pattern] = ACTIONS(509),
    [sym_comment] = ACTIONS(5),
  },
  [144] = {
    [anon_sym_EQ] = ACTIONS(511),
    [sym_comment] = ACTIONS(5),
  },
  [145] = {
    [sym_new_constructor] = STATE(267),
    [sym_constructor_identifier] = STATE(268),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [146] = {
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_DASH_GT] = ACTIONS(73),
    [sym_unit_type] = ACTIONS(73),
    [sym_list_constructor] = ACTIONS(73),
    [sym_function_constructor] = ACTIONS(73),
    [anon_sym_EQ_GT] = ACTIONS(73),
    [sym__variable_pattern] = ACTIONS(73),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_module_identifier] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [sym__integer_literal] = ACTIONS(73),
    [sym__octal_literal] = ACTIONS(73),
    [sym__hexidecimal_literal] = ACTIONS(73),
  },
  [147] = {
    [anon_sym_EQ] = ACTIONS(441),
    [anon_sym_EQ_GT] = ACTIONS(443),
    [sym__variable_pattern] = ACTIONS(441),
    [sym_comment] = ACTIONS(5),
  },
  [148] = {
    [sym_variable_identifier] = STATE(269),
    [anon_sym_EQ] = ACTIONS(507),
    [sym__variable_pattern] = ACTIONS(257),
    [sym_comment] = ACTIONS(5),
  },
  [149] = {
    [sym_type] = STATE(272),
    [sym__generic_type_constructor] = STATE(201),
    [sym_tupling_constructor] = STATE(197),
    [sym_tuple] = STATE(201),
    [sym_list] = STATE(201),
    [sym_parenthesized_constructor] = STATE(201),
    [sym_variable_identifier] = STATE(204),
    [sym__type_constructors] = STATE(197),
    [sym_qualified_type_constructor] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(377),
    [sym_unit_type] = ACTIONS(379),
    [sym_list_constructor] = ACTIONS(379),
    [sym_function_constructor] = ACTIONS(379),
    [sym__variable_pattern] = ACTIONS(381),
    [sym__constructor_pattern] = ACTIONS(515),
    [sym_module_identifier] = ACTIONS(385),
    [sym_comment] = ACTIONS(5),
  },
  [150] = {
    [anon_sym_EQ] = ACTIONS(73),
    [sym__variable_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [151] = {
    [anon_sym_LPAREN] = ACTIONS(441),
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(441),
    [anon_sym_EQ] = ACTIONS(441),
    [anon_sym_LBRACK] = ACTIONS(441),
    [anon_sym_RBRACK] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(441),
    [sym_unit_type] = ACTIONS(441),
    [sym_list_constructor] = ACTIONS(441),
    [sym_function_constructor] = ACTIONS(441),
    [sym__variable_pattern] = ACTIONS(441),
    [sym__constructor_pattern] = ACTIONS(445),
    [sym_module_identifier] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
  },
  [152] = {
    [sym__layout_semicolon] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(519),
    [anon_sym_where] = ACTIONS(519),
    [anon_sym_do] = ACTIONS(519),
    [sym__variable_pattern] = ACTIONS(521),
    [sym__constructor_pattern] = ACTIONS(521),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(521),
    [anon_sym_SQUOTE] = ACTIONS(519),
    [anon_sym_DQUOTE] = ACTIONS(519),
    [sym__integer_literal] = ACTIONS(519),
    [sym__octal_literal] = ACTIONS(519),
    [sym__hexidecimal_literal] = ACTIONS(519),
  },
  [153] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(523),
  },
  [154] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(525),
  },
  [155] = {
    [sym__cntrl] = STATE(274),
    [anon_sym_LBRACK] = ACTIONS(527),
    [anon_sym_RBRACK] = ACTIONS(527),
    [anon_sym_AT] = ACTIONS(527),
    [anon_sym__] = ACTIONS(527),
    [sym_comment] = ACTIONS(95),
    [sym__ascii_large] = ACTIONS(527),
    [anon_sym_CARET] = ACTIONS(527),
    [anon_sym_BSLASH] = ACTIONS(527),
  },
  [156] = {
    [aux_sym__escape_repeat1] = STATE(276),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(529),
  },
  [157] = {
    [aux_sym__escape_repeat2] = STATE(278),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(531),
  },
  [158] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(533),
  },
  [159] = {
    [anon_sym_SEMI] = ACTIONS(535),
    [anon_sym_LBRACE] = ACTIONS(535),
    [anon_sym_RBRACE] = ACTIONS(535),
    [anon_sym_LPAREN] = ACTIONS(535),
    [anon_sym_RPAREN] = ACTIONS(535),
    [anon_sym_EQ] = ACTIONS(535),
    [anon_sym_TILDE] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(535),
    [anon_sym_RBRACK] = ACTIONS(535),
    [anon_sym_DASH] = ACTIONS(535),
    [anon_sym_AT] = ACTIONS(535),
    [anon_sym__] = ACTIONS(535),
    [anon_sym_BQUOTE] = ACTIONS(535),
    [anon_sym_COLON] = ACTIONS(535),
    [anon_sym_PIPE] = ACTIONS(535),
    [anon_sym_BANG] = ACTIONS(535),
    [anon_sym_DOT] = ACTIONS(535),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(535),
    [anon_sym_DQUOTE] = ACTIONS(535),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(535),
    [sym__ascii_large] = ACTIONS(535),
    [anon_sym_POUND] = ACTIONS(535),
    [anon_sym_DOLLAR] = ACTIONS(535),
    [anon_sym_PERCENT] = ACTIONS(535),
    [anon_sym_AMP] = ACTIONS(535),
    [anon_sym_1] = ACTIONS(535),
    [anon_sym_PLUS] = ACTIONS(535),
    [anon_sym_SLASH] = ACTIONS(535),
    [anon_sym_LT] = ACTIONS(535),
    [anon_sym_GT] = ACTIONS(535),
    [anon_sym_QMARK] = ACTIONS(535),
    [anon_sym_CARET] = ACTIONS(535),
    [anon_sym_BSLASH] = ACTIONS(535),
    [sym__space] = ACTIONS(535),
    [sym__newline] = ACTIONS(535),
    [sym__tab] = ACTIONS(535),
    [sym__vertical_tab] = ACTIONS(535),
  },
  [160] = {
    [anon_sym_SEMI] = ACTIONS(537),
    [anon_sym_LBRACE] = ACTIONS(537),
    [anon_sym_RBRACE] = ACTIONS(537),
    [anon_sym_LPAREN] = ACTIONS(537),
    [anon_sym_RPAREN] = ACTIONS(537),
    [anon_sym_EQ] = ACTIONS(537),
    [anon_sym_TILDE] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(537),
    [anon_sym_RBRACK] = ACTIONS(537),
    [anon_sym_DASH] = ACTIONS(537),
    [anon_sym_AT] = ACTIONS(537),
    [anon_sym__] = ACTIONS(537),
    [anon_sym_BQUOTE] = ACTIONS(537),
    [anon_sym_COLON] = ACTIONS(537),
    [anon_sym_PIPE] = ACTIONS(537),
    [anon_sym_BANG] = ACTIONS(537),
    [anon_sym_DOT] = ACTIONS(537),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(537),
    [anon_sym_DQUOTE] = ACTIONS(537),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(537),
    [sym__ascii_large] = ACTIONS(537),
    [anon_sym_POUND] = ACTIONS(537),
    [anon_sym_DOLLAR] = ACTIONS(537),
    [anon_sym_PERCENT] = ACTIONS(537),
    [anon_sym_AMP] = ACTIONS(537),
    [anon_sym_1] = ACTIONS(537),
    [anon_sym_PLUS] = ACTIONS(537),
    [anon_sym_SLASH] = ACTIONS(537),
    [anon_sym_LT] = ACTIONS(537),
    [anon_sym_GT] = ACTIONS(537),
    [anon_sym_QMARK] = ACTIONS(537),
    [anon_sym_CARET] = ACTIONS(537),
    [anon_sym_BSLASH] = ACTIONS(537),
    [sym__space] = ACTIONS(537),
    [sym__newline] = ACTIONS(537),
    [sym__tab] = ACTIONS(537),
    [sym__vertical_tab] = ACTIONS(537),
  },
  [161] = {
    [sym__cntrl] = STATE(280),
    [anon_sym_LBRACK] = ACTIONS(539),
    [anon_sym_RBRACK] = ACTIONS(539),
    [anon_sym_AT] = ACTIONS(539),
    [anon_sym__] = ACTIONS(539),
    [sym_comment] = ACTIONS(95),
    [sym__ascii_large] = ACTIONS(539),
    [anon_sym_CARET] = ACTIONS(539),
    [anon_sym_BSLASH] = ACTIONS(539),
  },
  [162] = {
    [aux_sym__escape_repeat1] = STATE(282),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(541),
  },
  [163] = {
    [aux_sym__escape_repeat2] = STATE(284),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(543),
  },
  [164] = {
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_LBRACE] = ACTIONS(545),
    [anon_sym_RBRACE] = ACTIONS(545),
    [anon_sym_LPAREN] = ACTIONS(545),
    [anon_sym_RPAREN] = ACTIONS(545),
    [anon_sym_EQ] = ACTIONS(545),
    [anon_sym_TILDE] = ACTIONS(545),
    [anon_sym_LBRACK] = ACTIONS(545),
    [anon_sym_RBRACK] = ACTIONS(545),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AT] = ACTIONS(545),
    [anon_sym__] = ACTIONS(545),
    [anon_sym_BQUOTE] = ACTIONS(545),
    [anon_sym_COLON] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_BANG] = ACTIONS(545),
    [anon_sym_DOT] = ACTIONS(545),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(545),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(545),
    [sym__ascii_large] = ACTIONS(545),
    [anon_sym_POUND] = ACTIONS(545),
    [anon_sym_DOLLAR] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_1] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(545),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_QMARK] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_BSLASH] = ACTIONS(545),
    [sym__space] = ACTIONS(545),
    [sym__newline] = ACTIONS(545),
    [sym__tab] = ACTIONS(545),
    [sym__vertical_tab] = ACTIONS(545),
  },
  [165] = {
    [anon_sym_SEMI] = ACTIONS(547),
    [anon_sym_LBRACE] = ACTIONS(547),
    [anon_sym_RBRACE] = ACTIONS(547),
    [anon_sym_LPAREN] = ACTIONS(547),
    [anon_sym_RPAREN] = ACTIONS(547),
    [anon_sym_EQ] = ACTIONS(547),
    [anon_sym_TILDE] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(547),
    [anon_sym_RBRACK] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(547),
    [anon_sym_AT] = ACTIONS(547),
    [anon_sym__] = ACTIONS(547),
    [anon_sym_BQUOTE] = ACTIONS(547),
    [anon_sym_COLON] = ACTIONS(547),
    [anon_sym_PIPE] = ACTIONS(547),
    [anon_sym_BANG] = ACTIONS(547),
    [anon_sym_DOT] = ACTIONS(547),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(547),
    [anon_sym_DQUOTE] = ACTIONS(547),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(547),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(547),
    [sym__ascii_large] = ACTIONS(547),
    [anon_sym_POUND] = ACTIONS(547),
    [anon_sym_DOLLAR] = ACTIONS(547),
    [anon_sym_PERCENT] = ACTIONS(547),
    [anon_sym_AMP] = ACTIONS(547),
    [anon_sym_1] = ACTIONS(547),
    [anon_sym_PLUS] = ACTIONS(547),
    [anon_sym_SLASH] = ACTIONS(547),
    [anon_sym_LT] = ACTIONS(547),
    [anon_sym_GT] = ACTIONS(547),
    [anon_sym_QMARK] = ACTIONS(547),
    [anon_sym_CARET] = ACTIONS(547),
    [anon_sym_BSLASH] = ACTIONS(547),
    [sym__space] = ACTIONS(547),
    [sym__newline] = ACTIONS(547),
    [sym__tab] = ACTIONS(547),
    [sym__vertical_tab] = ACTIONS(547),
  },
  [166] = {
    [sym__layout_semicolon] = ACTIONS(549),
    [anon_sym_SEMI] = ACTIONS(551),
    [anon_sym_where] = ACTIONS(551),
    [anon_sym_do] = ACTIONS(551),
    [sym__variable_pattern] = ACTIONS(553),
    [sym__constructor_pattern] = ACTIONS(553),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(553),
    [anon_sym_SQUOTE] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(551),
    [sym__integer_literal] = ACTIONS(551),
    [sym__octal_literal] = ACTIONS(551),
    [sym__hexidecimal_literal] = ACTIONS(551),
  },
  [167] = {
    [sym_statement_list] = STATE(287),
    [sym__layout_open_brace] = ACTIONS(555),
    [anon_sym_LBRACE] = ACTIONS(557),
    [sym_comment] = ACTIONS(5),
  },
  [168] = {
    [sym__layout_semicolon] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(73),
    [anon_sym_do] = ACTIONS(73),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [sym__integer_literal] = ACTIONS(73),
    [sym__octal_literal] = ACTIONS(73),
    [sym__hexidecimal_literal] = ACTIONS(73),
  },
  [169] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_do] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym__integer_literal] = ACTIONS(79),
    [sym__octal_literal] = ACTIONS(79),
    [sym__hexidecimal_literal] = ACTIONS(79),
  },
  [170] = {
    [sym__layout_semicolon] = ACTIONS(559),
    [anon_sym_SEMI] = ACTIONS(561),
    [sym_comment] = ACTIONS(5),
  },
  [171] = {
    [sym__layout_semicolon] = ACTIONS(563),
    [anon_sym_SEMI] = ACTIONS(565),
    [anon_sym_where] = ACTIONS(565),
    [anon_sym_do] = ACTIONS(565),
    [sym__variable_pattern] = ACTIONS(567),
    [sym__constructor_pattern] = ACTIONS(567),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(567),
    [anon_sym_SQUOTE] = ACTIONS(565),
    [anon_sym_DQUOTE] = ACTIONS(565),
    [sym__integer_literal] = ACTIONS(565),
    [sym__octal_literal] = ACTIONS(565),
    [sym__hexidecimal_literal] = ACTIONS(565),
  },
  [172] = {
    [sym__layout_semicolon] = ACTIONS(569),
    [anon_sym_SEMI] = ACTIONS(163),
    [anon_sym_where] = ACTIONS(163),
    [anon_sym_do] = ACTIONS(163),
    [sym__variable_pattern] = ACTIONS(165),
    [sym__constructor_pattern] = ACTIONS(165),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(163),
    [sym__octal_literal] = ACTIONS(163),
    [sym__hexidecimal_literal] = ACTIONS(163),
  },
  [173] = {
    [sym__layout_semicolon] = ACTIONS(571),
    [anon_sym_SEMI] = ACTIONS(573),
    [anon_sym_where] = ACTIONS(573),
    [anon_sym_do] = ACTIONS(573),
    [sym__variable_pattern] = ACTIONS(575),
    [sym__constructor_pattern] = ACTIONS(575),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(575),
    [anon_sym_SQUOTE] = ACTIONS(573),
    [anon_sym_DQUOTE] = ACTIONS(573),
    [sym__integer_literal] = ACTIONS(573),
    [sym__octal_literal] = ACTIONS(573),
    [sym__hexidecimal_literal] = ACTIONS(573),
  },
  [174] = {
    [sym__literal] = STATE(289),
    [sym_variable_identifier] = STATE(289),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_general_constructor_repeat1] = STATE(290),
    [sym__layout_semicolon] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_where] = ACTIONS(171),
    [anon_sym_do] = ACTIONS(171),
    [sym__variable_pattern] = ACTIONS(335),
    [sym__constructor_pattern] = ACTIONS(173),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [175] = {
    [sym_where] = STATE(291),
    [sym_general_constructor] = STATE(171),
    [sym__variable] = STATE(171),
    [sym_qualified_variable_identifier] = STATE(172),
    [sym__expression] = STATE(292),
    [sym_do_expression] = STATE(171),
    [sym__literal] = STATE(171),
    [sym__identifier] = STATE(171),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(174),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_semicolon] = ACTIONS(559),
    [anon_sym_SEMI] = ACTIONS(561),
    [anon_sym_where] = ACTIONS(207),
    [anon_sym_do] = ACTIONS(333),
    [sym__variable_pattern] = ACTIONS(335),
    [sym__constructor_pattern] = ACTIONS(337),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [176] = {
    [sym__function_pattern] = STATE(184),
    [sym_label_pattern] = STATE(84),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(182),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_variable_identifier] = STATE(93),
    [sym_constructor_identifier] = STATE(293),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(343),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [177] = {
    [anon_sym_LPAREN] = ACTIONS(577),
    [sym_comment] = ACTIONS(5),
  },
  [178] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [anon_sym_DOT] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(201),
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
  [179] = {
    [sym__op] = STATE(300),
    [sym_variable_symbol] = STATE(301),
    [sym_constructor_symbol] = STATE(301),
    [sym__variable_symbol] = STATE(302),
    [aux_sym_tuple_pattern_repeat1] = STATE(303),
    [anon_sym_COMMA] = ACTIONS(579),
    [anon_sym_RPAREN] = ACTIONS(581),
    [anon_sym_DASH] = ACTIONS(583),
    [anon_sym_BQUOTE] = ACTIONS(585),
    [anon_sym_COLON] = ACTIONS(587),
    [anon_sym_BANG] = ACTIONS(583),
    [anon_sym_DOT] = ACTIONS(583),
    [sym_comment] = ACTIONS(5),
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
  },
  [180] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(303),
    [anon_sym_COMMA] = ACTIONS(579),
    [anon_sym_RPAREN] = ACTIONS(581),
    [sym_comment] = ACTIONS(5),
  },
  [181] = {
    [anon_sym_COMMA] = ACTIONS(589),
    [anon_sym_RPAREN] = ACTIONS(589),
    [sym_comment] = ACTIONS(5),
  },
  [182] = {
    [anon_sym_AT] = ACTIONS(591),
    [sym_comment] = ACTIONS(5),
  },
  [183] = {
    [sym__literal] = STATE(308),
    [sym_variable_identifier] = STATE(308),
    [sym_integer] = STATE(305),
    [sym_char] = STATE(305),
    [sym_string] = STATE(305),
    [aux_sym_general_constructor_repeat1] = STATE(309),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_BQUOTE] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_BANG] = ACTIONS(171),
    [sym__variable_pattern] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(171),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(593),
    [anon_sym_SQUOTE] = ACTIONS(595),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [anon_sym_POUND] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(171),
    [anon_sym_1] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_QMARK] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(171),
    [sym__integer_literal] = ACTIONS(597),
    [sym__octal_literal] = ACTIONS(597),
    [sym__hexidecimal_literal] = ACTIONS(597),
  },
  [184] = {
    [anon_sym_LPAREN] = ACTIONS(599),
    [anon_sym_COMMA] = ACTIONS(599),
    [anon_sym_RPAREN] = ACTIONS(599),
    [anon_sym_EQ] = ACTIONS(599),
    [anon_sym_TILDE] = ACTIONS(599),
    [anon_sym_LBRACK] = ACTIONS(599),
    [anon_sym_RBRACK] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym__] = ACTIONS(599),
    [anon_sym_BQUOTE] = ACTIONS(599),
    [anon_sym_COLON] = ACTIONS(599),
    [sym_list_constructor] = ACTIONS(599),
    [anon_sym_BANG] = ACTIONS(599),
    [sym__variable_pattern] = ACTIONS(601),
    [sym__constructor_pattern] = ACTIONS(601),
    [anon_sym_DOT] = ACTIONS(599),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(601),
    [anon_sym_SQUOTE] = ACTIONS(599),
    [anon_sym_DQUOTE] = ACTIONS(599),
    [anon_sym_POUND] = ACTIONS(599),
    [anon_sym_DOLLAR] = ACTIONS(599),
    [anon_sym_PERCENT] = ACTIONS(599),
    [anon_sym_AMP] = ACTIONS(599),
    [anon_sym_1] = ACTIONS(599),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(599),
    [anon_sym_LT] = ACTIONS(599),
    [anon_sym_GT] = ACTIONS(599),
    [anon_sym_QMARK] = ACTIONS(599),
    [anon_sym_CARET] = ACTIONS(599),
    [sym__integer_literal] = ACTIONS(599),
    [sym__octal_literal] = ACTIONS(599),
    [sym__hexidecimal_literal] = ACTIONS(599),
  },
  [185] = {
    [sym__function_pattern] = STATE(184),
    [sym_label_pattern] = STATE(84),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(188),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_variable_identifier] = STATE(93),
    [sym_constructor_identifier] = STATE(94),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [186] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
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
  },
  [187] = {
    [anon_sym_RBRACK] = ACTIONS(603),
    [sym_comment] = ACTIONS(5),
  },
  [188] = {
    [anon_sym_AT] = ACTIONS(605),
    [sym_comment] = ACTIONS(5),
  },
  [189] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(607),
  },
  [190] = {
    [anon_sym_RBRACE] = ACTIONS(297),
    [anon_sym_LPAREN] = ACTIONS(297),
    [anon_sym_COMMA] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_TILDE] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_RBRACK] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym__] = ACTIONS(297),
    [anon_sym_BQUOTE] = ACTIONS(297),
    [anon_sym_COLON] = ACTIONS(297),
    [sym_list_constructor] = ACTIONS(297),
    [anon_sym_BANG] = ACTIONS(297),
    [sym__variable_pattern] = ACTIONS(299),
    [sym__constructor_pattern] = ACTIONS(299),
    [anon_sym_DOT] = ACTIONS(297),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [anon_sym_POUND] = ACTIONS(297),
    [anon_sym_DOLLAR] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(297),
    [anon_sym_AMP] = ACTIONS(297),
    [anon_sym_1] = ACTIONS(297),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_SLASH] = ACTIONS(297),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_QMARK] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(297),
    [sym__integer_literal] = ACTIONS(297),
    [sym__octal_literal] = ACTIONS(297),
    [sym__hexidecimal_literal] = ACTIONS(297),
  },
  [191] = {
    [sym__gap] = STATE(165),
    [sym__graphic] = STATE(165),
    [sym__small] = STATE(72),
    [sym__large] = STATE(72),
    [sym__symbol] = STATE(72),
    [sym__special] = STATE(72),
    [sym__escape] = STATE(165),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(319),
    [anon_sym_DQUOTE] = ACTIONS(609),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(109),
    [sym__ascii_large] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_1] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(119),
    [sym__space] = ACTIONS(121),
    [sym__newline] = ACTIONS(121),
    [sym__tab] = ACTIONS(121),
    [sym__vertical_tab] = ACTIONS(121),
  },
  [192] = {
    [sym__function_pattern] = STATE(314),
    [sym_label_pattern] = STATE(84),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(91),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_variable_identifier] = STATE(93),
    [sym_constructor_identifier] = STATE(94),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(155),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [193] = {
    [sym_labels] = STATE(316),
    [sym_label] = STATE(317),
    [sym__identifier] = STATE(318),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [anon_sym_RBRACE] = ACTIONS(611),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [194] = {
    [anon_sym_LPAREN] = ACTIONS(613),
    [anon_sym_EQ] = ACTIONS(613),
    [anon_sym_TILDE] = ACTIONS(613),
    [anon_sym_LBRACK] = ACTIONS(613),
    [anon_sym__] = ACTIONS(613),
    [sym_list_constructor] = ACTIONS(613),
    [sym__variable_pattern] = ACTIONS(615),
    [sym__constructor_pattern] = ACTIONS(615),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(615),
    [anon_sym_SQUOTE] = ACTIONS(613),
    [anon_sym_DQUOTE] = ACTIONS(613),
    [sym__integer_literal] = ACTIONS(613),
    [sym__octal_literal] = ACTIONS(613),
    [sym__hexidecimal_literal] = ACTIONS(613),
  },
  [195] = {
    [sym_type] = STATE(325),
    [sym__generic_type_constructor] = STATE(326),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(326),
    [sym_list] = STATE(326),
    [sym_parenthesized_constructor] = STATE(326),
    [sym_class] = STATE(327),
    [sym_variable_identifier] = STATE(328),
    [sym_constructor_identifier] = STATE(112),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(329),
    [anon_sym_LPAREN] = ACTIONS(617),
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_LBRACK] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(623),
    [sym_list_constructor] = ACTIONS(623),
    [sym_function_constructor] = ACTIONS(623),
    [sym__variable_pattern] = ACTIONS(625),
    [sym__constructor_pattern] = ACTIONS(627),
    [sym_module_identifier] = ACTIONS(629),
    [sym_comment] = ACTIONS(5),
  },
  [196] = {
    [sym_type] = STATE(332),
    [sym__generic_type_constructor] = STATE(333),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(333),
    [sym_list] = STATE(333),
    [sym_parenthesized_constructor] = STATE(333),
    [sym_variable_identifier] = STATE(334),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(329),
    [aux_sym_list_repeat1] = STATE(335),
    [anon_sym_LPAREN] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(623),
    [sym_list_constructor] = ACTIONS(623),
    [sym_function_constructor] = ACTIONS(623),
    [sym__variable_pattern] = ACTIONS(253),
    [sym__constructor_pattern] = ACTIONS(631),
    [sym_module_identifier] = ACTIONS(633),
    [sym_comment] = ACTIONS(5),
  },
  [197] = {
    [sym__layout_semicolon] = ACTIONS(635),
    [anon_sym_SEMI] = ACTIONS(637),
    [anon_sym_DASH_GT] = ACTIONS(637),
    [sym_comment] = ACTIONS(5),
  },
  [198] = {
    [sym_variable_identifier] = STATE(337),
    [aux_sym_type_class_repeat1] = STATE(338),
    [sym__layout_semicolon] = ACTIONS(639),
    [anon_sym_SEMI] = ACTIONS(641),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(641),
    [sym__variable_pattern] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
  },
  [199] = {
    [sym_constructor_identifier] = STATE(341),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(342),
    [sym__constructor_pattern] = ACTIONS(643),
    [anon_sym_DOT] = ACTIONS(645),
    [sym_comment] = ACTIONS(5),
  },
  [200] = {
    [sym__layout_semicolon] = ACTIONS(647),
    [anon_sym_SEMI] = ACTIONS(649),
    [sym_comment] = ACTIONS(5),
  },
  [201] = {
    [sym__layout_semicolon] = ACTIONS(651),
    [anon_sym_SEMI] = ACTIONS(653),
    [anon_sym_DASH_GT] = ACTIONS(655),
    [sym_comment] = ACTIONS(5),
  },
  [202] = {
    [sym_type] = STATE(344),
    [sym__generic_type_constructor] = STATE(201),
    [sym_tupling_constructor] = STATE(197),
    [sym_tuple] = STATE(201),
    [sym_list] = STATE(201),
    [sym_parenthesized_constructor] = STATE(201),
    [sym_variable_identifier] = STATE(204),
    [sym__type_constructors] = STATE(197),
    [sym_qualified_type_constructor] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(377),
    [sym_unit_type] = ACTIONS(379),
    [sym_list_constructor] = ACTIONS(379),
    [sym_function_constructor] = ACTIONS(379),
    [sym__variable_pattern] = ACTIONS(381),
    [sym__constructor_pattern] = ACTIONS(515),
    [sym_module_identifier] = ACTIONS(385),
    [sym_comment] = ACTIONS(5),
  },
  [203] = {
    [anon_sym_EQ_GT] = ACTIONS(657),
    [sym_comment] = ACTIONS(5),
  },
  [204] = {
    [sym__layout_semicolon] = ACTIONS(659),
    [anon_sym_SEMI] = ACTIONS(661),
    [anon_sym_DASH_GT] = ACTIONS(663),
    [sym_comment] = ACTIONS(5),
  },
  [205] = {
    [sym_variable_identifier] = STATE(233),
    [anon_sym_LPAREN] = ACTIONS(205),
    [sym__variable_pattern] = ACTIONS(625),
    [sym_comment] = ACTIONS(5),
  },
  [206] = {
    [sym__layout_semicolon] = ACTIONS(665),
    [anon_sym_SEMI] = ACTIONS(667),
    [anon_sym_DASH_GT] = ACTIONS(667),
    [sym_comment] = ACTIONS(5),
  },
  [207] = {
    [ts_builtin_sym_end] = ACTIONS(669),
    [anon_sym_RBRACE] = ACTIONS(671),
    [anon_sym_import] = ACTIONS(671),
    [anon_sym_foreign] = ACTIONS(671),
    [anon_sym_default] = ACTIONS(671),
    [anon_sym_class] = ACTIONS(671),
    [anon_sym_instance] = ACTIONS(671),
    [anon_sym_infixl] = ACTIONS(671),
    [anon_sym_infixr] = ACTIONS(671),
    [anon_sym_infix] = ACTIONS(671),
    [anon_sym_data] = ACTIONS(671),
    [anon_sym_newtype] = ACTIONS(671),
    [anon_sym_type] = ACTIONS(671),
    [sym__variable_pattern] = ACTIONS(673),
    [sym__constructor_pattern] = ACTIONS(673),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(673),
    [anon_sym_SQUOTE] = ACTIONS(671),
    [anon_sym_DQUOTE] = ACTIONS(671),
    [sym__integer_literal] = ACTIONS(671),
    [sym__octal_literal] = ACTIONS(671),
    [sym__hexidecimal_literal] = ACTIONS(671),
  },
  [208] = {
    [anon_sym_where] = ACTIONS(675),
    [sym_comment] = ACTIONS(5),
  },
  [209] = {
    [aux_sym_module_exports_repeat1] = STATE(349),
    [anon_sym_COMMA] = ACTIONS(677),
    [anon_sym_RPAREN] = ACTIONS(679),
    [sym_comment] = ACTIONS(5),
  },
  [210] = {
    [anon_sym_LPAREN] = ACTIONS(681),
    [anon_sym_COMMA] = ACTIONS(683),
    [anon_sym_RPAREN] = ACTIONS(683),
    [sym_comment] = ACTIONS(5),
  },
  [211] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(352),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_variable_identifier] = STATE(25),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_module_repeat1] = STATE(353),
    [sym__layout_close_brace] = ACTIONS(685),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_newtype] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [212] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(20),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_variable_identifier] = STATE(25),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_module_repeat1] = STATE(354),
    [anon_sym_RBRACE] = ACTIONS(687),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_newtype] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(689),
    [sym_comment] = ACTIONS(5),
  },
  [214] = {
    [ts_builtin_sym_end] = ACTIONS(691),
    [sym_comment] = ACTIONS(5),
  },
  [215] = {
    [sym_module_identifier] = ACTIONS(693),
    [sym_comment] = ACTIONS(5),
  },
  [216] = {
    [sym__layout_semicolon] = ACTIONS(695),
    [anon_sym_SEMI] = ACTIONS(697),
    [sym_comment] = ACTIONS(5),
  },
  [217] = {
    [sym__layout_semicolon] = ACTIONS(699),
    [anon_sym_SEMI] = ACTIONS(701),
    [sym_comment] = ACTIONS(5),
  },
  [218] = {
    [aux_sym_import_specification_repeat1] = STATE(359),
    [anon_sym_LPAREN] = ACTIONS(703),
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_RPAREN] = ACTIONS(707),
    [sym_comment] = ACTIONS(5),
  },
  [219] = {
    [sym_import_specification] = STATE(360),
    [sym__layout_semicolon] = ACTIONS(695),
    [anon_sym_SEMI] = ACTIONS(697),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_hiding] = ACTIONS(191),
    [sym_comment] = ACTIONS(5),
  },
  [220] = {
    [sym__identifier] = STATE(361),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [anon_sym_RPAREN] = ACTIONS(707),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [221] = {
    [sym__variable_pattern] = ACTIONS(709),
    [sym__constructor_pattern] = ACTIONS(711),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(709),
  },
  [222] = {
    [sym__gap] = STATE(70),
    [sym__graphic] = STATE(70),
    [sym__small] = STATE(72),
    [sym__large] = STATE(72),
    [sym__symbol] = STATE(72),
    [sym__special] = STATE(72),
    [sym__escape] = STATE(70),
    [aux_sym_string_repeat1] = STATE(363),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(713),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(109),
    [sym__ascii_large] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_1] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(119),
    [sym__space] = ACTIONS(121),
    [sym__newline] = ACTIONS(121),
    [sym__tab] = ACTIONS(121),
    [sym__vertical_tab] = ACTIONS(121),
  },
  [223] = {
    [sym_type_signature] = STATE(364),
    [sym__identifier] = STATE(225),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [sym_string] = STATE(365),
    [sym__variable_pattern] = ACTIONS(625),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(417),
  },
  [224] = {
    [sym__layout_semicolon] = ACTIONS(715),
    [anon_sym_SEMI] = ACTIONS(717),
    [sym_comment] = ACTIONS(5),
  },
  [225] = {
    [anon_sym_COLON_COLON] = ACTIONS(167),
    [sym_comment] = ACTIONS(5),
  },
  [226] = {
    [sym_type_signature] = STATE(364),
    [sym__identifier] = STATE(225),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [sym__variable_pattern] = ACTIONS(625),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [227] = {
    [sym__identifier] = STATE(366),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [228] = {
    [sym__layout_semicolon] = ACTIONS(719),
    [anon_sym_SEMI] = ACTIONS(721),
    [sym_comment] = ACTIONS(5),
  },
  [229] = {
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_RPAREN] = ACTIONS(725),
    [sym_comment] = ACTIONS(5),
  },
  [230] = {
    [sym_class] = STATE(369),
    [sym_constructor_identifier] = STATE(112),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [231] = {
    [anon_sym_EQ_GT] = ACTIONS(727),
    [sym_comment] = ACTIONS(5),
  },
  [232] = {
    [anon_sym_COMMA] = ACTIONS(729),
    [anon_sym_RPAREN] = ACTIONS(731),
    [sym_comment] = ACTIONS(5),
  },
  [233] = {
    [anon_sym_COMMA] = ACTIONS(443),
    [anon_sym_RPAREN] = ACTIONS(443),
    [anon_sym_EQ_GT] = ACTIONS(443),
    [sym_comment] = ACTIONS(5),
  },
  [234] = {
    [sym__layout_semicolon] = ACTIONS(733),
    [anon_sym_SEMI] = ACTIONS(735),
    [sym_comment] = ACTIONS(5),
  },
  [235] = {
    [anon_sym_where] = ACTIONS(441),
    [sym__variable_pattern] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
  },
  [236] = {
    [sym_where] = STATE(373),
    [sym_variable_identifier] = STATE(241),
    [anon_sym_where] = ACTIONS(207),
    [sym__variable_pattern] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
  },
  [237] = {
    [sym_variable_identifier] = STATE(269),
    [anon_sym_RPAREN] = ACTIONS(737),
    [sym__variable_pattern] = ACTIONS(253),
    [sym_comment] = ACTIONS(5),
  },
  [238] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(352),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_variable_identifier] = STATE(25),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_module_repeat1] = STATE(376),
    [sym__layout_close_brace] = ACTIONS(739),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_newtype] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [239] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(20),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_variable_identifier] = STATE(25),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_module_repeat1] = STATE(377),
    [anon_sym_RBRACE] = ACTIONS(741),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_newtype] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [240] = {
    [sym__layout_semicolon] = ACTIONS(689),
    [anon_sym_SEMI] = ACTIONS(743),
    [sym_comment] = ACTIONS(5),
  },
  [241] = {
    [anon_sym_where] = ACTIONS(745),
    [sym__variable_pattern] = ACTIONS(747),
    [sym_comment] = ACTIONS(5),
  },
  [242] = {
    [sym__layout_semicolon] = ACTIONS(749),
    [anon_sym_SEMI] = ACTIONS(751),
    [sym_comment] = ACTIONS(5),
  },
  [243] = {
    [sym_where] = STATE(378),
    [sym_variable_identifier] = STATE(241),
    [anon_sym_where] = ACTIONS(207),
    [sym__variable_pattern] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
  },
  [244] = {
    [sym__layout_semicolon] = ACTIONS(753),
    [anon_sym_SEMI] = ACTIONS(755),
    [anon_sym_COMMA] = ACTIONS(755),
    [sym_comment] = ACTIONS(5),
  },
  [245] = {
    [sym__layout_semicolon] = ACTIONS(757),
    [anon_sym_SEMI] = ACTIONS(759),
    [anon_sym_COMMA] = ACTIONS(759),
    [anon_sym_DASH] = ACTIONS(759),
    [anon_sym_COLON] = ACTIONS(759),
    [anon_sym_BANG] = ACTIONS(759),
    [anon_sym_DOT] = ACTIONS(759),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(759),
    [anon_sym_DOLLAR] = ACTIONS(759),
    [anon_sym_PERCENT] = ACTIONS(759),
    [anon_sym_AMP] = ACTIONS(759),
    [anon_sym_1] = ACTIONS(759),
    [anon_sym_PLUS] = ACTIONS(759),
    [anon_sym_SLASH] = ACTIONS(759),
    [anon_sym_LT] = ACTIONS(759),
    [anon_sym_GT] = ACTIONS(759),
    [anon_sym_QMARK] = ACTIONS(759),
    [anon_sym_CARET] = ACTIONS(759),
  },
  [246] = {
    [sym__layout_semicolon] = ACTIONS(761),
    [anon_sym_SEMI] = ACTIONS(763),
    [anon_sym_COMMA] = ACTIONS(763),
    [sym_comment] = ACTIONS(5),
  },
  [247] = {
    [sym__op] = STATE(379),
    [sym_variable_symbol] = STATE(46),
    [sym_constructor_symbol] = STATE(46),
    [sym__variable_symbol] = STATE(48),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_BQUOTE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_1] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
  },
  [248] = {
    [sym__layout_semicolon] = ACTIONS(765),
    [anon_sym_SEMI] = ACTIONS(767),
    [anon_sym_COMMA] = ACTIONS(469),
    [sym_comment] = ACTIONS(5),
  },
  [249] = {
    [sym__layout_semicolon] = ACTIONS(769),
    [anon_sym_SEMI] = ACTIONS(771),
    [anon_sym_COMMA] = ACTIONS(771),
    [anon_sym_DASH] = ACTIONS(771),
    [anon_sym_BANG] = ACTIONS(771),
    [anon_sym_DOT] = ACTIONS(771),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(771),
    [anon_sym_DOLLAR] = ACTIONS(771),
    [anon_sym_PERCENT] = ACTIONS(771),
    [anon_sym_AMP] = ACTIONS(771),
    [anon_sym_1] = ACTIONS(771),
    [anon_sym_PLUS] = ACTIONS(771),
    [anon_sym_SLASH] = ACTIONS(771),
    [anon_sym_LT] = ACTIONS(771),
    [anon_sym_GT] = ACTIONS(771),
    [anon_sym_QMARK] = ACTIONS(771),
    [anon_sym_CARET] = ACTIONS(771),
  },
  [250] = {
    [sym_constructors] = STATE(380),
    [sym_constructor] = STATE(138),
    [sym_deriving] = STATE(381),
    [sym_constructor_identifier] = STATE(140),
    [sym__layout_semicolon] = ACTIONS(773),
    [anon_sym_SEMI] = ACTIONS(775),
    [anon_sym_deriving] = ACTIONS(241),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [251] = {
    [sym_deriving] = STATE(381),
    [sym__layout_semicolon] = ACTIONS(773),
    [anon_sym_SEMI] = ACTIONS(775),
    [anon_sym_deriving] = ACTIONS(241),
    [sym_comment] = ACTIONS(5),
  },
  [252] = {
    [sym__layout_semicolon] = ACTIONS(773),
    [anon_sym_SEMI] = ACTIONS(775),
    [sym_comment] = ACTIONS(5),
  },
  [253] = {
    [sym__layout_semicolon] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_deriving] = ACTIONS(73),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [254] = {
    [sym__layout_semicolon] = ACTIONS(503),
    [anon_sym_SEMI] = ACTIONS(441),
    [anon_sym_EQ] = ACTIONS(441),
    [anon_sym_deriving] = ACTIONS(441),
    [sym__variable_pattern] = ACTIONS(445),
    [sym__constructor_pattern] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
  },
  [255] = {
    [sym__identifier] = STATE(382),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [256] = {
    [sym__layout_semicolon] = ACTIONS(777),
    [anon_sym_SEMI] = ACTIONS(779),
    [sym_comment] = ACTIONS(5),
  },
  [257] = {
    [sym_constructor] = STATE(383),
    [sym_constructor_identifier] = STATE(140),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [258] = {
    [sym__layout_semicolon] = ACTIONS(781),
    [anon_sym_SEMI] = ACTIONS(783),
    [anon_sym_PIPE] = ACTIONS(785),
    [anon_sym_deriving] = ACTIONS(783),
    [sym_comment] = ACTIONS(5),
  },
  [259] = {
    [sym_field] = STATE(385),
    [sym_variable_identifier] = STATE(386),
    [sym__variable_pattern] = ACTIONS(625),
    [sym_comment] = ACTIONS(5),
  },
  [260] = {
    [sym__identifier] = STATE(387),
    [sym_variable_identifier] = STATE(262),
    [sym_constructor_identifier] = STATE(262),
    [sym__variable_pattern] = ACTIONS(787),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [261] = {
    [sym__layout_semicolon] = ACTIONS(789),
    [anon_sym_SEMI] = ACTIONS(791),
    [anon_sym_PIPE] = ACTIONS(791),
    [anon_sym_deriving] = ACTIONS(791),
    [anon_sym_BANG] = ACTIONS(791),
    [sym__variable_pattern] = ACTIONS(793),
    [sym__constructor_pattern] = ACTIONS(793),
    [sym_comment] = ACTIONS(5),
  },
  [262] = {
    [sym__layout_semicolon] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_deriving] = ACTIONS(171),
    [anon_sym_BANG] = ACTIONS(171),
    [sym__variable_pattern] = ACTIONS(173),
    [sym__constructor_pattern] = ACTIONS(173),
    [sym_comment] = ACTIONS(5),
  },
  [263] = {
    [sym__layout_semicolon] = ACTIONS(795),
    [anon_sym_SEMI] = ACTIONS(797),
    [anon_sym_PIPE] = ACTIONS(797),
    [anon_sym_deriving] = ACTIONS(797),
    [sym_comment] = ACTIONS(5),
  },
  [264] = {
    [sym_strict] = STATE(388),
    [sym__identifier] = STATE(388),
    [sym_variable_identifier] = STATE(262),
    [sym_constructor_identifier] = STATE(262),
    [sym__layout_semicolon] = ACTIONS(795),
    [anon_sym_SEMI] = ACTIONS(797),
    [anon_sym_PIPE] = ACTIONS(797),
    [anon_sym_deriving] = ACTIONS(797),
    [anon_sym_BANG] = ACTIONS(501),
    [sym__variable_pattern] = ACTIONS(247),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [265] = {
    [sym__layout_semicolon] = ACTIONS(799),
    [anon_sym_SEMI] = ACTIONS(745),
    [anon_sym_EQ] = ACTIONS(745),
    [anon_sym_deriving] = ACTIONS(745),
    [sym__variable_pattern] = ACTIONS(747),
    [sym__constructor_pattern] = ACTIONS(747),
    [sym_comment] = ACTIONS(5),
  },
  [266] = {
    [sym_new_constructor] = STATE(389),
    [sym_constructor_identifier] = STATE(268),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [267] = {
    [sym_deriving] = STATE(390),
    [sym__layout_semicolon] = ACTIONS(801),
    [anon_sym_SEMI] = ACTIONS(803),
    [anon_sym_deriving] = ACTIONS(241),
    [sym_comment] = ACTIONS(5),
  },
  [268] = {
    [sym__identifier] = STATE(391),
    [sym_variable_identifier] = STATE(262),
    [sym_constructor_identifier] = STATE(262),
    [sym_fields] = STATE(391),
    [anon_sym_LBRACE] = ACTIONS(499),
    [sym__variable_pattern] = ACTIONS(787),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [269] = {
    [anon_sym_LPAREN] = ACTIONS(745),
    [anon_sym_COMMA] = ACTIONS(745),
    [anon_sym_RPAREN] = ACTIONS(745),
    [anon_sym_EQ] = ACTIONS(745),
    [anon_sym_LBRACK] = ACTIONS(745),
    [anon_sym_RBRACK] = ACTIONS(745),
    [anon_sym_DASH_GT] = ACTIONS(745),
    [sym_unit_type] = ACTIONS(745),
    [sym_list_constructor] = ACTIONS(745),
    [sym_function_constructor] = ACTIONS(745),
    [sym__variable_pattern] = ACTIONS(745),
    [sym__constructor_pattern] = ACTIONS(747),
    [sym_module_identifier] = ACTIONS(747),
    [sym_comment] = ACTIONS(5),
  },
  [270] = {
    [sym_type] = STATE(325),
    [sym__generic_type_constructor] = STATE(326),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(326),
    [sym_list] = STATE(326),
    [sym_parenthesized_constructor] = STATE(326),
    [sym_variable_identifier] = STATE(328),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(329),
    [anon_sym_LPAREN] = ACTIONS(617),
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_LBRACK] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(623),
    [sym_list_constructor] = ACTIONS(623),
    [sym_function_constructor] = ACTIONS(623),
    [sym__variable_pattern] = ACTIONS(625),
    [sym__constructor_pattern] = ACTIONS(631),
    [sym_module_identifier] = ACTIONS(629),
    [sym_comment] = ACTIONS(5),
  },
  [271] = {
    [sym_variable_identifier] = STATE(337),
    [aux_sym_type_class_repeat1] = STATE(338),
    [sym__layout_semicolon] = ACTIONS(639),
    [anon_sym_SEMI] = ACTIONS(641),
    [anon_sym_DASH_GT] = ACTIONS(641),
    [sym__variable_pattern] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
  },
  [272] = {
    [sym__layout_semicolon] = ACTIONS(807),
    [anon_sym_SEMI] = ACTIONS(809),
    [sym_comment] = ACTIONS(5),
  },
  [273] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(811),
  },
  [274] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(813),
  },
  [275] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(815),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(815),
  },
  [276] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(817),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(819),
  },
  [277] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(821),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(821),
  },
  [278] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(817),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(823),
  },
  [279] = {
    [anon_sym_SEMI] = ACTIONS(825),
    [anon_sym_LBRACE] = ACTIONS(825),
    [anon_sym_RBRACE] = ACTIONS(825),
    [anon_sym_LPAREN] = ACTIONS(825),
    [anon_sym_RPAREN] = ACTIONS(825),
    [anon_sym_EQ] = ACTIONS(825),
    [anon_sym_TILDE] = ACTIONS(825),
    [anon_sym_LBRACK] = ACTIONS(825),
    [anon_sym_RBRACK] = ACTIONS(825),
    [anon_sym_DASH] = ACTIONS(825),
    [anon_sym_AT] = ACTIONS(825),
    [anon_sym__] = ACTIONS(825),
    [anon_sym_BQUOTE] = ACTIONS(825),
    [anon_sym_COLON] = ACTIONS(825),
    [anon_sym_PIPE] = ACTIONS(825),
    [anon_sym_BANG] = ACTIONS(825),
    [anon_sym_DOT] = ACTIONS(825),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(825),
    [anon_sym_DQUOTE] = ACTIONS(825),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(825),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(825),
    [sym__ascii_large] = ACTIONS(825),
    [anon_sym_POUND] = ACTIONS(825),
    [anon_sym_DOLLAR] = ACTIONS(825),
    [anon_sym_PERCENT] = ACTIONS(825),
    [anon_sym_AMP] = ACTIONS(825),
    [anon_sym_1] = ACTIONS(825),
    [anon_sym_PLUS] = ACTIONS(825),
    [anon_sym_SLASH] = ACTIONS(825),
    [anon_sym_LT] = ACTIONS(825),
    [anon_sym_GT] = ACTIONS(825),
    [anon_sym_QMARK] = ACTIONS(825),
    [anon_sym_CARET] = ACTIONS(825),
    [anon_sym_BSLASH] = ACTIONS(825),
    [sym__space] = ACTIONS(825),
    [sym__newline] = ACTIONS(825),
    [sym__tab] = ACTIONS(825),
    [sym__vertical_tab] = ACTIONS(825),
  },
  [280] = {
    [anon_sym_SEMI] = ACTIONS(827),
    [anon_sym_LBRACE] = ACTIONS(827),
    [anon_sym_RBRACE] = ACTIONS(827),
    [anon_sym_LPAREN] = ACTIONS(827),
    [anon_sym_RPAREN] = ACTIONS(827),
    [anon_sym_EQ] = ACTIONS(827),
    [anon_sym_TILDE] = ACTIONS(827),
    [anon_sym_LBRACK] = ACTIONS(827),
    [anon_sym_RBRACK] = ACTIONS(827),
    [anon_sym_DASH] = ACTIONS(827),
    [anon_sym_AT] = ACTIONS(827),
    [anon_sym__] = ACTIONS(827),
    [anon_sym_BQUOTE] = ACTIONS(827),
    [anon_sym_COLON] = ACTIONS(827),
    [anon_sym_PIPE] = ACTIONS(827),
    [anon_sym_BANG] = ACTIONS(827),
    [anon_sym_DOT] = ACTIONS(827),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(827),
    [anon_sym_DQUOTE] = ACTIONS(827),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(827),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(827),
    [sym__ascii_large] = ACTIONS(827),
    [anon_sym_POUND] = ACTIONS(827),
    [anon_sym_DOLLAR] = ACTIONS(827),
    [anon_sym_PERCENT] = ACTIONS(827),
    [anon_sym_AMP] = ACTIONS(827),
    [anon_sym_1] = ACTIONS(827),
    [anon_sym_PLUS] = ACTIONS(827),
    [anon_sym_SLASH] = ACTIONS(827),
    [anon_sym_LT] = ACTIONS(827),
    [anon_sym_GT] = ACTIONS(827),
    [anon_sym_QMARK] = ACTIONS(827),
    [anon_sym_CARET] = ACTIONS(827),
    [anon_sym_BSLASH] = ACTIONS(827),
    [sym__space] = ACTIONS(827),
    [sym__newline] = ACTIONS(827),
    [sym__tab] = ACTIONS(827),
    [sym__vertical_tab] = ACTIONS(827),
  },
  [281] = {
    [anon_sym_SEMI] = ACTIONS(829),
    [anon_sym_LBRACE] = ACTIONS(829),
    [anon_sym_RBRACE] = ACTIONS(829),
    [anon_sym_LPAREN] = ACTIONS(829),
    [anon_sym_RPAREN] = ACTIONS(829),
    [anon_sym_EQ] = ACTIONS(829),
    [anon_sym_TILDE] = ACTIONS(829),
    [anon_sym_LBRACK] = ACTIONS(829),
    [anon_sym_RBRACK] = ACTIONS(829),
    [anon_sym_DASH] = ACTIONS(829),
    [anon_sym_AT] = ACTIONS(829),
    [anon_sym__] = ACTIONS(829),
    [anon_sym_BQUOTE] = ACTIONS(829),
    [anon_sym_COLON] = ACTIONS(829),
    [anon_sym_PIPE] = ACTIONS(829),
    [anon_sym_BANG] = ACTIONS(829),
    [anon_sym_DOT] = ACTIONS(829),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(829),
    [anon_sym_DQUOTE] = ACTIONS(829),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(829),
    [sym__ascii_large] = ACTIONS(829),
    [anon_sym_POUND] = ACTIONS(829),
    [anon_sym_DOLLAR] = ACTIONS(829),
    [anon_sym_PERCENT] = ACTIONS(829),
    [anon_sym_AMP] = ACTIONS(829),
    [anon_sym_1] = ACTIONS(829),
    [anon_sym_PLUS] = ACTIONS(829),
    [anon_sym_SLASH] = ACTIONS(829),
    [anon_sym_LT] = ACTIONS(829),
    [anon_sym_GT] = ACTIONS(829),
    [anon_sym_QMARK] = ACTIONS(829),
    [anon_sym_CARET] = ACTIONS(829),
    [anon_sym_BSLASH] = ACTIONS(829),
    [sym__space] = ACTIONS(829),
    [sym__newline] = ACTIONS(829),
    [sym__tab] = ACTIONS(829),
    [sym__vertical_tab] = ACTIONS(829),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(829),
  },
  [282] = {
    [anon_sym_SEMI] = ACTIONS(831),
    [anon_sym_LBRACE] = ACTIONS(831),
    [anon_sym_RBRACE] = ACTIONS(831),
    [anon_sym_LPAREN] = ACTIONS(831),
    [anon_sym_RPAREN] = ACTIONS(831),
    [anon_sym_EQ] = ACTIONS(831),
    [anon_sym_TILDE] = ACTIONS(831),
    [anon_sym_LBRACK] = ACTIONS(831),
    [anon_sym_RBRACK] = ACTIONS(831),
    [anon_sym_DASH] = ACTIONS(831),
    [anon_sym_AT] = ACTIONS(831),
    [anon_sym__] = ACTIONS(831),
    [anon_sym_BQUOTE] = ACTIONS(831),
    [anon_sym_COLON] = ACTIONS(831),
    [anon_sym_PIPE] = ACTIONS(831),
    [anon_sym_BANG] = ACTIONS(831),
    [anon_sym_DOT] = ACTIONS(831),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(831),
    [anon_sym_DQUOTE] = ACTIONS(831),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(831),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(831),
    [sym__ascii_large] = ACTIONS(831),
    [anon_sym_POUND] = ACTIONS(831),
    [anon_sym_DOLLAR] = ACTIONS(831),
    [anon_sym_PERCENT] = ACTIONS(831),
    [anon_sym_AMP] = ACTIONS(831),
    [anon_sym_1] = ACTIONS(831),
    [anon_sym_PLUS] = ACTIONS(831),
    [anon_sym_SLASH] = ACTIONS(831),
    [anon_sym_LT] = ACTIONS(831),
    [anon_sym_GT] = ACTIONS(831),
    [anon_sym_QMARK] = ACTIONS(831),
    [anon_sym_CARET] = ACTIONS(831),
    [anon_sym_BSLASH] = ACTIONS(831),
    [sym__space] = ACTIONS(831),
    [sym__newline] = ACTIONS(831),
    [sym__tab] = ACTIONS(831),
    [sym__vertical_tab] = ACTIONS(831),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(833),
  },
  [283] = {
    [anon_sym_SEMI] = ACTIONS(835),
    [anon_sym_LBRACE] = ACTIONS(835),
    [anon_sym_RBRACE] = ACTIONS(835),
    [anon_sym_LPAREN] = ACTIONS(835),
    [anon_sym_RPAREN] = ACTIONS(835),
    [anon_sym_EQ] = ACTIONS(835),
    [anon_sym_TILDE] = ACTIONS(835),
    [anon_sym_LBRACK] = ACTIONS(835),
    [anon_sym_RBRACK] = ACTIONS(835),
    [anon_sym_DASH] = ACTIONS(835),
    [anon_sym_AT] = ACTIONS(835),
    [anon_sym__] = ACTIONS(835),
    [anon_sym_BQUOTE] = ACTIONS(835),
    [anon_sym_COLON] = ACTIONS(835),
    [anon_sym_PIPE] = ACTIONS(835),
    [anon_sym_BANG] = ACTIONS(835),
    [anon_sym_DOT] = ACTIONS(835),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(835),
    [anon_sym_DQUOTE] = ACTIONS(835),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(835),
    [sym__ascii_large] = ACTIONS(835),
    [anon_sym_POUND] = ACTIONS(835),
    [anon_sym_DOLLAR] = ACTIONS(835),
    [anon_sym_PERCENT] = ACTIONS(835),
    [anon_sym_AMP] = ACTIONS(835),
    [anon_sym_1] = ACTIONS(835),
    [anon_sym_PLUS] = ACTIONS(835),
    [anon_sym_SLASH] = ACTIONS(835),
    [anon_sym_LT] = ACTIONS(835),
    [anon_sym_GT] = ACTIONS(835),
    [anon_sym_QMARK] = ACTIONS(835),
    [anon_sym_CARET] = ACTIONS(835),
    [anon_sym_BSLASH] = ACTIONS(835),
    [sym__space] = ACTIONS(835),
    [sym__newline] = ACTIONS(835),
    [sym__tab] = ACTIONS(835),
    [sym__vertical_tab] = ACTIONS(835),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(835),
  },
  [284] = {
    [anon_sym_SEMI] = ACTIONS(831),
    [anon_sym_LBRACE] = ACTIONS(831),
    [anon_sym_RBRACE] = ACTIONS(831),
    [anon_sym_LPAREN] = ACTIONS(831),
    [anon_sym_RPAREN] = ACTIONS(831),
    [anon_sym_EQ] = ACTIONS(831),
    [anon_sym_TILDE] = ACTIONS(831),
    [anon_sym_LBRACK] = ACTIONS(831),
    [anon_sym_RBRACK] = ACTIONS(831),
    [anon_sym_DASH] = ACTIONS(831),
    [anon_sym_AT] = ACTIONS(831),
    [anon_sym__] = ACTIONS(831),
    [anon_sym_BQUOTE] = ACTIONS(831),
    [anon_sym_COLON] = ACTIONS(831),
    [anon_sym_PIPE] = ACTIONS(831),
    [anon_sym_BANG] = ACTIONS(831),
    [anon_sym_DOT] = ACTIONS(831),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(831),
    [anon_sym_DQUOTE] = ACTIONS(831),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(831),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(831),
    [sym__ascii_large] = ACTIONS(831),
    [anon_sym_POUND] = ACTIONS(831),
    [anon_sym_DOLLAR] = ACTIONS(831),
    [anon_sym_PERCENT] = ACTIONS(831),
    [anon_sym_AMP] = ACTIONS(831),
    [anon_sym_1] = ACTIONS(831),
    [anon_sym_PLUS] = ACTIONS(831),
    [anon_sym_SLASH] = ACTIONS(831),
    [anon_sym_LT] = ACTIONS(831),
    [anon_sym_GT] = ACTIONS(831),
    [anon_sym_QMARK] = ACTIONS(831),
    [anon_sym_CARET] = ACTIONS(831),
    [anon_sym_BSLASH] = ACTIONS(831),
    [sym__space] = ACTIONS(831),
    [sym__newline] = ACTIONS(831),
    [sym__tab] = ACTIONS(831),
    [sym__vertical_tab] = ACTIONS(831),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(837),
  },
  [285] = {
    [sym_general_constructor] = STATE(171),
    [sym__variable] = STATE(171),
    [sym_qualified_variable_identifier] = STATE(172),
    [sym__expression] = STATE(398),
    [sym_do_expression] = STATE(171),
    [sym__statement] = STATE(399),
    [sym__literal] = STATE(171),
    [sym__identifier] = STATE(171),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(400),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_statement_list_repeat1] = STATE(401),
    [sym__layout_close_brace] = ACTIONS(839),
    [anon_sym_do] = ACTIONS(333),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(841),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [286] = {
    [sym_general_constructor] = STATE(171),
    [sym__variable] = STATE(171),
    [sym_qualified_variable_identifier] = STATE(172),
    [sym__expression] = STATE(402),
    [sym_do_expression] = STATE(171),
    [sym__statement] = STATE(403),
    [sym__literal] = STATE(171),
    [sym__identifier] = STATE(171),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(400),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_statement_list_repeat1] = STATE(404),
    [anon_sym_RBRACE] = ACTIONS(843),
    [anon_sym_do] = ACTIONS(333),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(841),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [287] = {
    [sym__layout_semicolon] = ACTIONS(845),
    [anon_sym_SEMI] = ACTIONS(847),
    [anon_sym_where] = ACTIONS(847),
    [anon_sym_do] = ACTIONS(847),
    [sym__variable_pattern] = ACTIONS(849),
    [sym__constructor_pattern] = ACTIONS(849),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(849),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [anon_sym_DQUOTE] = ACTIONS(847),
    [sym__integer_literal] = ACTIONS(847),
    [sym__octal_literal] = ACTIONS(847),
    [sym__hexidecimal_literal] = ACTIONS(847),
  },
  [288] = {
    [sym__layout_semicolon] = ACTIONS(851),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_where] = ACTIONS(259),
    [anon_sym_do] = ACTIONS(259),
    [sym__variable_pattern] = ACTIONS(261),
    [sym__constructor_pattern] = ACTIONS(261),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(261),
    [anon_sym_SQUOTE] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [sym__integer_literal] = ACTIONS(259),
    [sym__octal_literal] = ACTIONS(259),
    [sym__hexidecimal_literal] = ACTIONS(259),
  },
  [289] = {
    [sym__layout_semicolon] = ACTIONS(853),
    [anon_sym_SEMI] = ACTIONS(855),
    [anon_sym_where] = ACTIONS(855),
    [anon_sym_do] = ACTIONS(855),
    [sym__variable_pattern] = ACTIONS(857),
    [sym__constructor_pattern] = ACTIONS(857),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(857),
    [anon_sym_SQUOTE] = ACTIONS(855),
    [anon_sym_DQUOTE] = ACTIONS(855),
    [sym__integer_literal] = ACTIONS(855),
    [sym__octal_literal] = ACTIONS(855),
    [sym__hexidecimal_literal] = ACTIONS(855),
  },
  [290] = {
    [sym__literal] = STATE(405),
    [sym_variable_identifier] = STATE(405),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_semicolon] = ACTIONS(859),
    [anon_sym_SEMI] = ACTIONS(861),
    [anon_sym_where] = ACTIONS(861),
    [anon_sym_do] = ACTIONS(861),
    [sym__variable_pattern] = ACTIONS(863),
    [sym__constructor_pattern] = ACTIONS(863),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(863),
    [anon_sym_SQUOTE] = ACTIONS(861),
    [anon_sym_DQUOTE] = ACTIONS(861),
    [sym__integer_literal] = ACTIONS(861),
    [sym__octal_literal] = ACTIONS(861),
    [sym__hexidecimal_literal] = ACTIONS(861),
  },
  [291] = {
    [sym__layout_semicolon] = ACTIONS(865),
    [anon_sym_SEMI] = ACTIONS(867),
    [sym_comment] = ACTIONS(5),
  },
  [292] = {
    [sym__layout_semicolon] = ACTIONS(869),
    [anon_sym_SEMI] = ACTIONS(871),
    [anon_sym_where] = ACTIONS(871),
    [anon_sym_do] = ACTIONS(871),
    [sym__variable_pattern] = ACTIONS(873),
    [sym__constructor_pattern] = ACTIONS(873),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(873),
    [anon_sym_SQUOTE] = ACTIONS(871),
    [anon_sym_DQUOTE] = ACTIONS(871),
    [sym__integer_literal] = ACTIONS(871),
    [sym__octal_literal] = ACTIONS(871),
    [sym__hexidecimal_literal] = ACTIONS(871),
  },
  [293] = {
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_BQUOTE] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_BANG] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(171),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(171),
    [anon_sym_1] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_QMARK] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(171),
  },
  [294] = {
    [sym__literal] = STATE(406),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [295] = {
    [sym__function_pattern] = STATE(407),
    [sym_label_pattern] = STATE(84),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym__pattern] = STATE(408),
    [sym_negative_literal] = STATE(181),
    [sym_general_constructor] = STATE(181),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(182),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_variable_identifier] = STATE(93),
    [sym_constructor_identifier] = STATE(183),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(343),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(345),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(347),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [296] = {
    [anon_sym_LPAREN] = ACTIONS(875),
    [anon_sym_COMMA] = ACTIONS(875),
    [anon_sym_RPAREN] = ACTIONS(875),
    [anon_sym_EQ] = ACTIONS(875),
    [anon_sym_TILDE] = ACTIONS(875),
    [anon_sym_LBRACK] = ACTIONS(875),
    [anon_sym_RBRACK] = ACTIONS(875),
    [anon_sym_DASH] = ACTIONS(875),
    [anon_sym__] = ACTIONS(875),
    [anon_sym_BQUOTE] = ACTIONS(875),
    [anon_sym_COLON] = ACTIONS(875),
    [sym_list_constructor] = ACTIONS(875),
    [anon_sym_BANG] = ACTIONS(875),
    [sym__variable_pattern] = ACTIONS(877),
    [sym__constructor_pattern] = ACTIONS(877),
    [anon_sym_DOT] = ACTIONS(875),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(877),
    [anon_sym_SQUOTE] = ACTIONS(875),
    [anon_sym_DQUOTE] = ACTIONS(875),
    [anon_sym_POUND] = ACTIONS(875),
    [anon_sym_DOLLAR] = ACTIONS(875),
    [anon_sym_PERCENT] = ACTIONS(875),
    [anon_sym_AMP] = ACTIONS(875),
    [anon_sym_1] = ACTIONS(875),
    [anon_sym_PLUS] = ACTIONS(875),
    [anon_sym_SLASH] = ACTIONS(875),
    [anon_sym_LT] = ACTIONS(875),
    [anon_sym_GT] = ACTIONS(875),
    [anon_sym_QMARK] = ACTIONS(875),
    [anon_sym_CARET] = ACTIONS(875),
    [sym__integer_literal] = ACTIONS(875),
    [sym__octal_literal] = ACTIONS(875),
    [sym__hexidecimal_literal] = ACTIONS(875),
  },
  [297] = {
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym__] = ACTIONS(213),
    [sym_list_constructor] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(213),
    [sym__variable_pattern] = ACTIONS(879),
    [sym__constructor_pattern] = ACTIONS(879),
    [anon_sym_DOT] = ACTIONS(213),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(879),
    [anon_sym_SQUOTE] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [anon_sym_POUND] = ACTIONS(213),
    [anon_sym_DOLLAR] = ACTIONS(213),
    [anon_sym_PERCENT] = ACTIONS(213),
    [anon_sym_AMP] = ACTIONS(213),
    [anon_sym_1] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_QMARK] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(213),
    [sym__integer_literal] = ACTIONS(213),
    [sym__octal_literal] = ACTIONS(213),
    [sym__hexidecimal_literal] = ACTIONS(213),
  },
  [298] = {
    [sym__identifier] = STATE(409),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [299] = {
    [sym__constructor_symbol] = STATE(411),
    [aux_sym_constructor_symbol_repeat1] = STATE(412),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_TILDE] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym__] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(881),
    [sym_list_constructor] = ACTIONS(217),
    [anon_sym_BANG] = ACTIONS(881),
    [sym__variable_pattern] = ACTIONS(883),
    [sym__constructor_pattern] = ACTIONS(883),
    [anon_sym_DOT] = ACTIONS(881),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(883),
    [anon_sym_SQUOTE] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(217),
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
    [sym__integer_literal] = ACTIONS(217),
    [sym__octal_literal] = ACTIONS(217),
    [sym__hexidecimal_literal] = ACTIONS(217),
  },
  [300] = {
    [sym__function_pattern] = STATE(413),
    [sym_label_pattern] = STATE(84),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym__pattern] = STATE(414),
    [sym_negative_literal] = STATE(181),
    [sym_general_constructor] = STATE(181),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(182),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_variable_identifier] = STATE(93),
    [sym_constructor_identifier] = STATE(183),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(343),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(345),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(347),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [301] = {
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_TILDE] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym__] = ACTIONS(229),
    [sym_list_constructor] = ACTIONS(229),
    [sym__variable_pattern] = ACTIONS(885),
    [sym__constructor_pattern] = ACTIONS(885),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(885),
    [anon_sym_SQUOTE] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym__integer_literal] = ACTIONS(229),
    [sym__octal_literal] = ACTIONS(229),
    [sym__hexidecimal_literal] = ACTIONS(229),
  },
  [302] = {
    [sym__variable_symbol] = STATE(415),
    [aux_sym_variable_symbol_repeat1] = STATE(416),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_TILDE] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(583),
    [anon_sym__] = ACTIONS(233),
    [sym_list_constructor] = ACTIONS(233),
    [anon_sym_BANG] = ACTIONS(583),
    [sym__variable_pattern] = ACTIONS(887),
    [sym__constructor_pattern] = ACTIONS(887),
    [anon_sym_DOT] = ACTIONS(583),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(887),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(233),
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
    [sym__integer_literal] = ACTIONS(233),
    [sym__octal_literal] = ACTIONS(233),
    [sym__hexidecimal_literal] = ACTIONS(233),
  },
  [303] = {
    [anon_sym_COMMA] = ACTIONS(889),
    [anon_sym_RPAREN] = ACTIONS(891),
    [sym_comment] = ACTIONS(5),
  },
  [304] = {
    [sym__function_pattern] = STATE(314),
    [sym_label_pattern] = STATE(84),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(182),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_variable_identifier] = STATE(93),
    [sym_constructor_identifier] = STATE(293),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(343),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [305] = {
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(85),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym__integer_literal] = ACTIONS(85),
    [sym__octal_literal] = ACTIONS(85),
    [sym__hexidecimal_literal] = ACTIONS(85),
  },
  [306] = {
    [sym__graphic] = STATE(419),
    [sym__small] = STATE(64),
    [sym__large] = STATE(64),
    [sym__symbol] = STATE(64),
    [sym__special] = STATE(64),
    [sym__escape] = STATE(419),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_AT] = ACTIONS(91),
    [anon_sym__] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_BANG] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(91),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(893),
    [anon_sym_DQUOTE] = ACTIONS(893),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(93),
    [sym__ascii_large] = ACTIONS(101),
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
    [anon_sym_BSLASH] = ACTIONS(103),
    [sym__space] = ACTIONS(893),
  },
  [307] = {
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [sym__variable_pattern] = ACTIONS(125),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym__integer_literal] = ACTIONS(125),
    [sym__octal_literal] = ACTIONS(125),
    [sym__hexidecimal_literal] = ACTIONS(125),
  },
  [308] = {
    [anon_sym_COMMA] = ACTIONS(855),
    [anon_sym_RPAREN] = ACTIONS(855),
    [sym__variable_pattern] = ACTIONS(855),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(857),
    [anon_sym_SQUOTE] = ACTIONS(855),
    [anon_sym_DQUOTE] = ACTIONS(855),
    [sym__integer_literal] = ACTIONS(855),
    [sym__octal_literal] = ACTIONS(855),
    [sym__hexidecimal_literal] = ACTIONS(855),
  },
  [309] = {
    [sym__literal] = STATE(420),
    [sym_variable_identifier] = STATE(420),
    [sym_integer] = STATE(305),
    [sym_char] = STATE(305),
    [sym_string] = STATE(305),
    [anon_sym_COMMA] = ACTIONS(861),
    [anon_sym_RPAREN] = ACTIONS(861),
    [sym__variable_pattern] = ACTIONS(253),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(593),
    [anon_sym_SQUOTE] = ACTIONS(595),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym__integer_literal] = ACTIONS(597),
    [sym__octal_literal] = ACTIONS(597),
    [sym__hexidecimal_literal] = ACTIONS(597),
  },
  [310] = {
    [anon_sym_LPAREN] = ACTIONS(895),
    [anon_sym_COMMA] = ACTIONS(895),
    [anon_sym_RPAREN] = ACTIONS(895),
    [anon_sym_EQ] = ACTIONS(895),
    [anon_sym_TILDE] = ACTIONS(895),
    [anon_sym_LBRACK] = ACTIONS(895),
    [anon_sym_RBRACK] = ACTIONS(895),
    [anon_sym_DASH] = ACTIONS(895),
    [anon_sym__] = ACTIONS(895),
    [anon_sym_BQUOTE] = ACTIONS(895),
    [anon_sym_COLON] = ACTIONS(895),
    [sym_list_constructor] = ACTIONS(895),
    [anon_sym_BANG] = ACTIONS(895),
    [sym__variable_pattern] = ACTIONS(897),
    [sym__constructor_pattern] = ACTIONS(897),
    [anon_sym_DOT] = ACTIONS(895),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(897),
    [anon_sym_SQUOTE] = ACTIONS(895),
    [anon_sym_DQUOTE] = ACTIONS(895),
    [anon_sym_POUND] = ACTIONS(895),
    [anon_sym_DOLLAR] = ACTIONS(895),
    [anon_sym_PERCENT] = ACTIONS(895),
    [anon_sym_AMP] = ACTIONS(895),
    [anon_sym_1] = ACTIONS(895),
    [anon_sym_PLUS] = ACTIONS(895),
    [anon_sym_SLASH] = ACTIONS(895),
    [anon_sym_LT] = ACTIONS(895),
    [anon_sym_GT] = ACTIONS(895),
    [anon_sym_QMARK] = ACTIONS(895),
    [anon_sym_CARET] = ACTIONS(895),
    [sym__integer_literal] = ACTIONS(895),
    [sym__octal_literal] = ACTIONS(895),
    [sym__hexidecimal_literal] = ACTIONS(895),
  },
  [311] = {
    [sym__function_pattern] = STATE(314),
    [sym_label_pattern] = STATE(84),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(188),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_variable_identifier] = STATE(93),
    [sym_constructor_identifier] = STATE(94),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [312] = {
    [anon_sym_RBRACE] = ACTIONS(519),
    [anon_sym_LPAREN] = ACTIONS(519),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_EQ] = ACTIONS(519),
    [anon_sym_TILDE] = ACTIONS(519),
    [anon_sym_LBRACK] = ACTIONS(519),
    [anon_sym_RBRACK] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym__] = ACTIONS(519),
    [anon_sym_BQUOTE] = ACTIONS(519),
    [anon_sym_COLON] = ACTIONS(519),
    [sym_list_constructor] = ACTIONS(519),
    [anon_sym_BANG] = ACTIONS(519),
    [sym__variable_pattern] = ACTIONS(521),
    [sym__constructor_pattern] = ACTIONS(521),
    [anon_sym_DOT] = ACTIONS(519),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(521),
    [anon_sym_SQUOTE] = ACTIONS(519),
    [anon_sym_DQUOTE] = ACTIONS(519),
    [anon_sym_POUND] = ACTIONS(519),
    [anon_sym_DOLLAR] = ACTIONS(519),
    [anon_sym_PERCENT] = ACTIONS(519),
    [anon_sym_AMP] = ACTIONS(519),
    [anon_sym_1] = ACTIONS(519),
    [anon_sym_PLUS] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(519),
    [anon_sym_LT] = ACTIONS(519),
    [anon_sym_GT] = ACTIONS(519),
    [anon_sym_QMARK] = ACTIONS(519),
    [anon_sym_CARET] = ACTIONS(519),
    [sym__integer_literal] = ACTIONS(519),
    [sym__octal_literal] = ACTIONS(519),
    [sym__hexidecimal_literal] = ACTIONS(519),
  },
  [313] = {
    [anon_sym_RBRACE] = ACTIONS(551),
    [anon_sym_LPAREN] = ACTIONS(551),
    [anon_sym_COMMA] = ACTIONS(551),
    [anon_sym_RPAREN] = ACTIONS(551),
    [anon_sym_EQ] = ACTIONS(551),
    [anon_sym_TILDE] = ACTIONS(551),
    [anon_sym_LBRACK] = ACTIONS(551),
    [anon_sym_RBRACK] = ACTIONS(551),
    [anon_sym_DASH] = ACTIONS(551),
    [anon_sym__] = ACTIONS(551),
    [anon_sym_BQUOTE] = ACTIONS(551),
    [anon_sym_COLON] = ACTIONS(551),
    [sym_list_constructor] = ACTIONS(551),
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
  [314] = {
    [anon_sym_LPAREN] = ACTIONS(899),
    [anon_sym_COMMA] = ACTIONS(899),
    [anon_sym_RPAREN] = ACTIONS(899),
    [anon_sym_EQ] = ACTIONS(899),
    [anon_sym_TILDE] = ACTIONS(899),
    [anon_sym_LBRACK] = ACTIONS(899),
    [anon_sym_RBRACK] = ACTIONS(899),
    [anon_sym_DASH] = ACTIONS(899),
    [anon_sym__] = ACTIONS(899),
    [anon_sym_BQUOTE] = ACTIONS(899),
    [anon_sym_COLON] = ACTIONS(899),
    [sym_list_constructor] = ACTIONS(899),
    [anon_sym_BANG] = ACTIONS(899),
    [sym__variable_pattern] = ACTIONS(901),
    [sym__constructor_pattern] = ACTIONS(901),
    [anon_sym_DOT] = ACTIONS(899),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(901),
    [anon_sym_SQUOTE] = ACTIONS(899),
    [anon_sym_DQUOTE] = ACTIONS(899),
    [anon_sym_POUND] = ACTIONS(899),
    [anon_sym_DOLLAR] = ACTIONS(899),
    [anon_sym_PERCENT] = ACTIONS(899),
    [anon_sym_AMP] = ACTIONS(899),
    [anon_sym_1] = ACTIONS(899),
    [anon_sym_PLUS] = ACTIONS(899),
    [anon_sym_SLASH] = ACTIONS(899),
    [anon_sym_LT] = ACTIONS(899),
    [anon_sym_GT] = ACTIONS(899),
    [anon_sym_QMARK] = ACTIONS(899),
    [anon_sym_CARET] = ACTIONS(899),
    [sym__integer_literal] = ACTIONS(899),
    [sym__octal_literal] = ACTIONS(899),
    [sym__hexidecimal_literal] = ACTIONS(899),
  },
  [315] = {
    [anon_sym_LPAREN] = ACTIONS(903),
    [anon_sym_COMMA] = ACTIONS(903),
    [anon_sym_RPAREN] = ACTIONS(903),
    [anon_sym_EQ] = ACTIONS(903),
    [anon_sym_TILDE] = ACTIONS(903),
    [anon_sym_LBRACK] = ACTIONS(903),
    [anon_sym_RBRACK] = ACTIONS(903),
    [anon_sym_DASH] = ACTIONS(903),
    [anon_sym__] = ACTIONS(903),
    [anon_sym_BQUOTE] = ACTIONS(903),
    [anon_sym_COLON] = ACTIONS(903),
    [sym_list_constructor] = ACTIONS(903),
    [anon_sym_BANG] = ACTIONS(903),
    [sym__variable_pattern] = ACTIONS(905),
    [sym__constructor_pattern] = ACTIONS(905),
    [anon_sym_DOT] = ACTIONS(903),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(905),
    [anon_sym_SQUOTE] = ACTIONS(903),
    [anon_sym_DQUOTE] = ACTIONS(903),
    [anon_sym_POUND] = ACTIONS(903),
    [anon_sym_DOLLAR] = ACTIONS(903),
    [anon_sym_PERCENT] = ACTIONS(903),
    [anon_sym_AMP] = ACTIONS(903),
    [anon_sym_1] = ACTIONS(903),
    [anon_sym_PLUS] = ACTIONS(903),
    [anon_sym_SLASH] = ACTIONS(903),
    [anon_sym_LT] = ACTIONS(903),
    [anon_sym_GT] = ACTIONS(903),
    [anon_sym_QMARK] = ACTIONS(903),
    [anon_sym_CARET] = ACTIONS(903),
    [sym__integer_literal] = ACTIONS(903),
    [sym__octal_literal] = ACTIONS(903),
    [sym__hexidecimal_literal] = ACTIONS(903),
  },
  [316] = {
    [anon_sym_RBRACE] = ACTIONS(907),
    [sym_comment] = ACTIONS(5),
  },
  [317] = {
    [aux_sym_labels_repeat1] = STATE(423),
    [anon_sym_RBRACE] = ACTIONS(909),
    [anon_sym_COMMA] = ACTIONS(911),
    [sym_comment] = ACTIONS(5),
  },
  [318] = {
    [anon_sym_EQ] = ACTIONS(913),
    [sym_comment] = ACTIONS(5),
  },
  [319] = {
    [sym_type] = STATE(426),
    [sym__generic_type_constructor] = STATE(326),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(326),
    [sym_list] = STATE(326),
    [sym_parenthesized_constructor] = STATE(326),
    [sym_variable_identifier] = STATE(328),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(329),
    [anon_sym_LPAREN] = ACTIONS(617),
    [anon_sym_COMMA] = ACTIONS(915),
    [anon_sym_LBRACK] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(623),
    [sym_list_constructor] = ACTIONS(623),
    [sym_function_constructor] = ACTIONS(623),
    [sym__variable_pattern] = ACTIONS(625),
    [sym__constructor_pattern] = ACTIONS(631),
    [sym_module_identifier] = ACTIONS(629),
    [sym_comment] = ACTIONS(5),
  },
  [320] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(429),
    [anon_sym_COMMA] = ACTIONS(917),
    [anon_sym_RPAREN] = ACTIONS(919),
    [sym_comment] = ACTIONS(5),
  },
  [321] = {
    [sym_type] = STATE(332),
    [sym__generic_type_constructor] = STATE(333),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(333),
    [sym_list] = STATE(333),
    [sym_parenthesized_constructor] = STATE(333),
    [sym_variable_identifier] = STATE(334),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(329),
    [aux_sym_list_repeat1] = STATE(430),
    [anon_sym_LPAREN] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(623),
    [sym_list_constructor] = ACTIONS(623),
    [sym_function_constructor] = ACTIONS(623),
    [sym__variable_pattern] = ACTIONS(253),
    [sym__constructor_pattern] = ACTIONS(631),
    [sym_module_identifier] = ACTIONS(633),
    [sym_comment] = ACTIONS(5),
  },
  [322] = {
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_COMMA] = ACTIONS(637),
    [anon_sym_RPAREN] = ACTIONS(637),
    [anon_sym_LBRACK] = ACTIONS(637),
    [anon_sym_RBRACK] = ACTIONS(637),
    [anon_sym_DASH_GT] = ACTIONS(637),
    [sym_unit_type] = ACTIONS(637),
    [sym_list_constructor] = ACTIONS(637),
    [sym_function_constructor] = ACTIONS(637),
    [sym__variable_pattern] = ACTIONS(637),
    [sym__constructor_pattern] = ACTIONS(921),
    [sym_module_identifier] = ACTIONS(921),
    [sym_comment] = ACTIONS(5),
  },
  [323] = {
    [sym_variable_identifier] = STATE(151),
    [aux_sym_type_class_repeat1] = STATE(431),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(641),
    [anon_sym_RPAREN] = ACTIONS(641),
    [anon_sym_DASH_GT] = ACTIONS(641),
    [sym__variable_pattern] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
  },
  [324] = {
    [sym_constructor_identifier] = STATE(433),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(434),
    [sym__constructor_pattern] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(923),
    [sym_comment] = ACTIONS(5),
  },
  [325] = {
    [aux_sym_tuple_repeat1] = STATE(437),
    [anon_sym_COMMA] = ACTIONS(925),
    [anon_sym_RPAREN] = ACTIONS(927),
    [sym_comment] = ACTIONS(5),
  },
  [326] = {
    [anon_sym_COMMA] = ACTIONS(653),
    [anon_sym_RPAREN] = ACTIONS(653),
    [anon_sym_DASH_GT] = ACTIONS(929),
    [sym_comment] = ACTIONS(5),
  },
  [327] = {
    [aux_sym_context_repeat1] = STATE(440),
    [anon_sym_COMMA] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(931),
    [sym_comment] = ACTIONS(5),
  },
  [328] = {
    [anon_sym_COMMA] = ACTIONS(661),
    [anon_sym_RPAREN] = ACTIONS(661),
    [anon_sym_DASH_GT] = ACTIONS(933),
    [sym_comment] = ACTIONS(5),
  },
  [329] = {
    [anon_sym_LPAREN] = ACTIONS(667),
    [anon_sym_COMMA] = ACTIONS(667),
    [anon_sym_RPAREN] = ACTIONS(667),
    [anon_sym_LBRACK] = ACTIONS(667),
    [anon_sym_RBRACK] = ACTIONS(667),
    [anon_sym_DASH_GT] = ACTIONS(667),
    [sym_unit_type] = ACTIONS(667),
    [sym_list_constructor] = ACTIONS(667),
    [sym_function_constructor] = ACTIONS(667),
    [sym__variable_pattern] = ACTIONS(667),
    [sym__constructor_pattern] = ACTIONS(935),
    [sym_module_identifier] = ACTIONS(935),
    [sym_comment] = ACTIONS(5),
  },
  [330] = {
    [sym_variable_identifier] = STATE(151),
    [aux_sym_type_class_repeat1] = STATE(431),
    [anon_sym_LPAREN] = ACTIONS(641),
    [anon_sym_COMMA] = ACTIONS(641),
    [anon_sym_RPAREN] = ACTIONS(641),
    [anon_sym_LBRACK] = ACTIONS(641),
    [anon_sym_RBRACK] = ACTIONS(641),
    [anon_sym_DASH_GT] = ACTIONS(641),
    [sym_unit_type] = ACTIONS(641),
    [sym_list_constructor] = ACTIONS(641),
    [sym_function_constructor] = ACTIONS(641),
    [sym__variable_pattern] = ACTIONS(253),
    [sym__constructor_pattern] = ACTIONS(937),
    [sym_module_identifier] = ACTIONS(937),
    [sym_comment] = ACTIONS(5),
  },
  [331] = {
    [sym_constructor_identifier] = STATE(433),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(444),
    [sym__constructor_pattern] = ACTIONS(939),
    [anon_sym_DOT] = ACTIONS(941),
    [sym_comment] = ACTIONS(5),
  },
  [332] = {
    [anon_sym_LPAREN] = ACTIONS(943),
    [anon_sym_LBRACK] = ACTIONS(943),
    [anon_sym_RBRACK] = ACTIONS(943),
    [sym_unit_type] = ACTIONS(943),
    [sym_list_constructor] = ACTIONS(943),
    [sym_function_constructor] = ACTIONS(943),
    [sym__variable_pattern] = ACTIONS(943),
    [sym__constructor_pattern] = ACTIONS(945),
    [sym_module_identifier] = ACTIONS(945),
    [sym_comment] = ACTIONS(5),
  },
  [333] = {
    [anon_sym_LPAREN] = ACTIONS(653),
    [anon_sym_LBRACK] = ACTIONS(653),
    [anon_sym_RBRACK] = ACTIONS(653),
    [anon_sym_DASH_GT] = ACTIONS(947),
    [sym_unit_type] = ACTIONS(653),
    [sym_list_constructor] = ACTIONS(653),
    [sym_function_constructor] = ACTIONS(653),
    [sym__variable_pattern] = ACTIONS(653),
    [sym__constructor_pattern] = ACTIONS(949),
    [sym_module_identifier] = ACTIONS(949),
    [sym_comment] = ACTIONS(5),
  },
  [334] = {
    [anon_sym_LPAREN] = ACTIONS(661),
    [anon_sym_LBRACK] = ACTIONS(661),
    [anon_sym_RBRACK] = ACTIONS(661),
    [anon_sym_DASH_GT] = ACTIONS(951),
    [sym_unit_type] = ACTIONS(661),
    [sym_list_constructor] = ACTIONS(661),
    [sym_function_constructor] = ACTIONS(661),
    [sym__variable_pattern] = ACTIONS(661),
    [sym__constructor_pattern] = ACTIONS(953),
    [sym_module_identifier] = ACTIONS(953),
    [sym_comment] = ACTIONS(5),
  },
  [335] = {
    [sym_type] = STATE(448),
    [sym__generic_type_constructor] = STATE(333),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(333),
    [sym_list] = STATE(333),
    [sym_parenthesized_constructor] = STATE(333),
    [sym_variable_identifier] = STATE(334),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(329),
    [anon_sym_LPAREN] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(621),
    [anon_sym_RBRACK] = ACTIONS(955),
    [sym_unit_type] = ACTIONS(623),
    [sym_list_constructor] = ACTIONS(623),
    [sym_function_constructor] = ACTIONS(623),
    [sym__variable_pattern] = ACTIONS(253),
    [sym__constructor_pattern] = ACTIONS(631),
    [sym_module_identifier] = ACTIONS(633),
    [sym_comment] = ACTIONS(5),
  },
  [336] = {
    [sym__layout_semicolon] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_DASH_GT] = ACTIONS(73),
    [sym__variable_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [sym__integer_literal] = ACTIONS(73),
    [sym__octal_literal] = ACTIONS(73),
    [sym__hexidecimal_literal] = ACTIONS(73),
  },
  [337] = {
    [sym__layout_semicolon] = ACTIONS(503),
    [anon_sym_SEMI] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(441),
    [sym__variable_pattern] = ACTIONS(441),
    [sym_comment] = ACTIONS(5),
  },
  [338] = {
    [sym_variable_identifier] = STATE(449),
    [sym__layout_semicolon] = ACTIONS(957),
    [anon_sym_SEMI] = ACTIONS(959),
    [anon_sym_DASH_GT] = ACTIONS(959),
    [sym__variable_pattern] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
  },
  [339] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
  },
  [340] = {
    [sym_constructor_identifier] = STATE(451),
    [sym__constructor_pattern] = ACTIONS(643),
    [sym_module_identifier] = ACTIONS(961),
    [sym_comment] = ACTIONS(5),
  },
  [341] = {
    [sym_variable_identifier] = STATE(337),
    [aux_sym_type_class_repeat1] = STATE(452),
    [sym__layout_semicolon] = ACTIONS(963),
    [anon_sym_SEMI] = ACTIONS(965),
    [anon_sym_DASH_GT] = ACTIONS(965),
    [sym__variable_pattern] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
  },
  [342] = {
    [sym_constructor_identifier] = STATE(451),
    [sym__constructor_pattern] = ACTIONS(643),
    [anon_sym_DOT] = ACTIONS(967),
    [sym_comment] = ACTIONS(5),
  },
  [343] = {
    [sym_type] = STATE(454),
    [sym__generic_type_constructor] = STATE(201),
    [sym_tupling_constructor] = STATE(197),
    [sym_tuple] = STATE(201),
    [sym_list] = STATE(201),
    [sym_parenthesized_constructor] = STATE(201),
    [sym_variable_identifier] = STATE(204),
    [sym__type_constructors] = STATE(197),
    [sym_qualified_type_constructor] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(377),
    [sym_unit_type] = ACTIONS(379),
    [sym_list_constructor] = ACTIONS(379),
    [sym_function_constructor] = ACTIONS(379),
    [sym__variable_pattern] = ACTIONS(381),
    [sym__constructor_pattern] = ACTIONS(515),
    [sym_module_identifier] = ACTIONS(385),
    [sym_comment] = ACTIONS(5),
  },
  [344] = {
    [sym__layout_semicolon] = ACTIONS(969),
    [anon_sym_SEMI] = ACTIONS(971),
    [sym_comment] = ACTIONS(5),
  },
  [345] = {
    [anon_sym_LPAREN] = ACTIONS(973),
    [anon_sym_LBRACK] = ACTIONS(973),
    [sym_unit_type] = ACTIONS(973),
    [sym_list_constructor] = ACTIONS(973),
    [sym_function_constructor] = ACTIONS(973),
    [sym__variable_pattern] = ACTIONS(973),
    [sym__constructor_pattern] = ACTIONS(431),
    [sym_module_identifier] = ACTIONS(431),
    [sym_comment] = ACTIONS(5),
  },
  [346] = {
    [sym_type] = STATE(455),
    [sym__generic_type_constructor] = STATE(201),
    [sym_tupling_constructor] = STATE(197),
    [sym_tuple] = STATE(201),
    [sym_list] = STATE(201),
    [sym_parenthesized_constructor] = STATE(201),
    [sym_variable_identifier] = STATE(204),
    [sym__type_constructors] = STATE(197),
    [sym_qualified_type_constructor] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(377),
    [sym_unit_type] = ACTIONS(379),
    [sym_list_constructor] = ACTIONS(379),
    [sym_function_constructor] = ACTIONS(379),
    [sym__variable_pattern] = ACTIONS(381),
    [sym__constructor_pattern] = ACTIONS(515),
    [sym_module_identifier] = ACTIONS(385),
    [sym_comment] = ACTIONS(5),
  },
  [347] = {
    [sym_export] = STATE(456),
    [sym__identifier] = STATE(210),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [348] = {
    [anon_sym_where] = ACTIONS(975),
    [sym_comment] = ACTIONS(5),
  },
  [349] = {
    [anon_sym_COMMA] = ACTIONS(977),
    [anon_sym_RPAREN] = ACTIONS(979),
    [sym_comment] = ACTIONS(5),
  },
  [350] = {
    [sym__identifier] = STATE(460),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [anon_sym_DOT_DOT] = ACTIONS(981),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [351] = {
    [ts_builtin_sym_end] = ACTIONS(983),
    [sym_comment] = ACTIONS(5),
  },
  [352] = {
    [sym__layout_semicolon] = ACTIONS(985),
    [anon_sym_SEMI] = ACTIONS(987),
    [sym_comment] = ACTIONS(5),
  },
  [353] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(463),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_variable_identifier] = STATE(25),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_close_brace] = ACTIONS(989),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_newtype] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [354] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(97),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_variable_identifier] = STATE(25),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [anon_sym_RBRACE] = ACTIONS(991),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_newtype] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [355] = {
    [sym_import_specification] = STATE(464),
    [sym__layout_semicolon] = ACTIONS(993),
    [anon_sym_SEMI] = ACTIONS(995),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_hiding] = ACTIONS(191),
    [sym_comment] = ACTIONS(5),
  },
  [356] = {
    [sym__identifier] = STATE(466),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [anon_sym_DOT_DOT] = ACTIONS(997),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [357] = {
    [sym__identifier] = STATE(467),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [358] = {
    [sym__layout_semicolon] = ACTIONS(999),
    [anon_sym_SEMI] = ACTIONS(1001),
    [sym_comment] = ACTIONS(5),
  },
  [359] = {
    [anon_sym_COMMA] = ACTIONS(1003),
    [anon_sym_RPAREN] = ACTIONS(1005),
    [sym_comment] = ACTIONS(5),
  },
  [360] = {
    [sym__layout_semicolon] = ACTIONS(993),
    [anon_sym_SEMI] = ACTIONS(995),
    [sym_comment] = ACTIONS(5),
  },
  [361] = {
    [aux_sym_import_specification_repeat1] = STATE(471),
    [anon_sym_LPAREN] = ACTIONS(1007),
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_RPAREN] = ACTIONS(1005),
    [sym_comment] = ACTIONS(5),
  },
  [362] = {
    [anon_sym_COMMA] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(297),
    [sym__variable_pattern] = ACTIONS(297),
    [sym__constructor_pattern] = ACTIONS(299),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [sym__integer_literal] = ACTIONS(297),
    [sym__octal_literal] = ACTIONS(297),
    [sym__hexidecimal_literal] = ACTIONS(297),
  },
  [363] = {
    [sym__gap] = STATE(165),
    [sym__graphic] = STATE(165),
    [sym__small] = STATE(72),
    [sym__large] = STATE(72),
    [sym__symbol] = STATE(72),
    [sym__special] = STATE(72),
    [sym__escape] = STATE(165),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(319),
    [anon_sym_DQUOTE] = ACTIONS(1009),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(109),
    [sym__ascii_large] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_1] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(119),
    [sym__space] = ACTIONS(121),
    [sym__newline] = ACTIONS(121),
    [sym__tab] = ACTIONS(121),
    [sym__vertical_tab] = ACTIONS(121),
  },
  [364] = {
    [sym__layout_semicolon] = ACTIONS(1011),
    [anon_sym_SEMI] = ACTIONS(1013),
    [sym_comment] = ACTIONS(5),
  },
  [365] = {
    [sym_type_signature] = STATE(473),
    [sym__identifier] = STATE(225),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [sym__variable_pattern] = ACTIONS(625),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [366] = {
    [anon_sym_COMMA] = ACTIONS(1015),
    [anon_sym_RPAREN] = ACTIONS(1015),
    [sym_comment] = ACTIONS(5),
  },
  [367] = {
    [sym__identifier] = STATE(474),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [368] = {
    [sym__layout_semicolon] = ACTIONS(1017),
    [anon_sym_SEMI] = ACTIONS(1019),
    [sym_comment] = ACTIONS(5),
  },
  [369] = {
    [anon_sym_COMMA] = ACTIONS(1021),
    [anon_sym_RPAREN] = ACTIONS(1021),
    [sym_comment] = ACTIONS(5),
  },
  [370] = {
    [sym__constructor_pattern] = ACTIONS(1023),
    [sym_comment] = ACTIONS(5),
  },
  [371] = {
    [sym_class] = STATE(475),
    [sym_constructor_identifier] = STATE(112),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [372] = {
    [anon_sym_EQ_GT] = ACTIONS(1025),
    [sym_comment] = ACTIONS(5),
  },
  [373] = {
    [sym__layout_semicolon] = ACTIONS(1027),
    [anon_sym_SEMI] = ACTIONS(1029),
    [sym_comment] = ACTIONS(5),
  },
  [374] = {
    [anon_sym_COMMA] = ACTIONS(1031),
    [anon_sym_RPAREN] = ACTIONS(1031),
    [anon_sym_EQ_GT] = ACTIONS(1031),
    [sym_comment] = ACTIONS(5),
  },
  [375] = {
    [sym__layout_semicolon] = ACTIONS(983),
    [anon_sym_SEMI] = ACTIONS(1033),
    [sym_comment] = ACTIONS(5),
  },
  [376] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(463),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_variable_identifier] = STATE(25),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_close_brace] = ACTIONS(1035),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_newtype] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [377] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(97),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_variable_identifier] = STATE(25),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [anon_sym_RBRACE] = ACTIONS(1037),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_newtype] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [378] = {
    [sym__layout_semicolon] = ACTIONS(1039),
    [anon_sym_SEMI] = ACTIONS(1041),
    [sym_comment] = ACTIONS(5),
  },
  [379] = {
    [sym__layout_semicolon] = ACTIONS(1043),
    [anon_sym_SEMI] = ACTIONS(1045),
    [anon_sym_COMMA] = ACTIONS(1045),
    [sym_comment] = ACTIONS(5),
  },
  [380] = {
    [sym_deriving] = STATE(478),
    [sym__layout_semicolon] = ACTIONS(1047),
    [anon_sym_SEMI] = ACTIONS(1049),
    [anon_sym_deriving] = ACTIONS(241),
    [sym_comment] = ACTIONS(5),
  },
  [381] = {
    [sym__layout_semicolon] = ACTIONS(1047),
    [anon_sym_SEMI] = ACTIONS(1049),
    [sym_comment] = ACTIONS(5),
  },
  [382] = {
    [aux_sym_export_repeat1] = STATE(480),
    [anon_sym_COMMA] = ACTIONS(423),
    [anon_sym_RPAREN] = ACTIONS(1051),
    [sym_comment] = ACTIONS(5),
  },
  [383] = {
    [sym__layout_semicolon] = ACTIONS(1053),
    [anon_sym_SEMI] = ACTIONS(1055),
    [anon_sym_PIPE] = ACTIONS(1055),
    [anon_sym_deriving] = ACTIONS(1055),
    [sym_comment] = ACTIONS(5),
  },
  [384] = {
    [sym_constructor] = STATE(481),
    [sym_constructor_identifier] = STATE(140),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [385] = {
    [aux_sym_fields_repeat1] = STATE(484),
    [anon_sym_RBRACE] = ACTIONS(1057),
    [anon_sym_COMMA] = ACTIONS(1059),
    [sym_comment] = ACTIONS(5),
  },
  [386] = {
    [aux_sym_field_repeat1] = STATE(487),
    [anon_sym_COMMA] = ACTIONS(1061),
    [anon_sym_COLON_COLON] = ACTIONS(1063),
    [sym_comment] = ACTIONS(5),
  },
  [387] = {
    [sym__layout_semicolon] = ACTIONS(1065),
    [anon_sym_SEMI] = ACTIONS(1067),
    [anon_sym_PIPE] = ACTIONS(1067),
    [anon_sym_deriving] = ACTIONS(1067),
    [anon_sym_BANG] = ACTIONS(1067),
    [sym__variable_pattern] = ACTIONS(1069),
    [sym__constructor_pattern] = ACTIONS(1069),
    [sym_comment] = ACTIONS(5),
  },
  [388] = {
    [sym__layout_semicolon] = ACTIONS(1071),
    [anon_sym_SEMI] = ACTIONS(1073),
    [anon_sym_PIPE] = ACTIONS(1073),
    [anon_sym_deriving] = ACTIONS(1073),
    [anon_sym_BANG] = ACTIONS(1073),
    [sym__variable_pattern] = ACTIONS(1075),
    [sym__constructor_pattern] = ACTIONS(1075),
    [sym_comment] = ACTIONS(5),
  },
  [389] = {
    [sym_deriving] = STATE(488),
    [sym__layout_semicolon] = ACTIONS(1077),
    [anon_sym_SEMI] = ACTIONS(1079),
    [anon_sym_deriving] = ACTIONS(241),
    [sym_comment] = ACTIONS(5),
  },
  [390] = {
    [sym__layout_semicolon] = ACTIONS(1077),
    [anon_sym_SEMI] = ACTIONS(1079),
    [sym_comment] = ACTIONS(5),
  },
  [391] = {
    [sym__layout_semicolon] = ACTIONS(1081),
    [anon_sym_SEMI] = ACTIONS(1083),
    [anon_sym_deriving] = ACTIONS(1083),
    [sym_comment] = ACTIONS(5),
  },
  [392] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1085),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1085),
  },
  [393] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1087),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1087),
  },
  [394] = {
    [anon_sym_SEMI] = ACTIONS(1089),
    [anon_sym_LBRACE] = ACTIONS(1089),
    [anon_sym_RBRACE] = ACTIONS(1089),
    [anon_sym_LPAREN] = ACTIONS(1089),
    [anon_sym_RPAREN] = ACTIONS(1089),
    [anon_sym_EQ] = ACTIONS(1089),
    [anon_sym_TILDE] = ACTIONS(1089),
    [anon_sym_LBRACK] = ACTIONS(1089),
    [anon_sym_RBRACK] = ACTIONS(1089),
    [anon_sym_DASH] = ACTIONS(1089),
    [anon_sym_AT] = ACTIONS(1089),
    [anon_sym__] = ACTIONS(1089),
    [anon_sym_BQUOTE] = ACTIONS(1089),
    [anon_sym_COLON] = ACTIONS(1089),
    [anon_sym_PIPE] = ACTIONS(1089),
    [anon_sym_BANG] = ACTIONS(1089),
    [anon_sym_DOT] = ACTIONS(1089),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(1089),
    [anon_sym_DQUOTE] = ACTIONS(1089),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1089),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1089),
    [sym__ascii_large] = ACTIONS(1089),
    [anon_sym_POUND] = ACTIONS(1089),
    [anon_sym_DOLLAR] = ACTIONS(1089),
    [anon_sym_PERCENT] = ACTIONS(1089),
    [anon_sym_AMP] = ACTIONS(1089),
    [anon_sym_1] = ACTIONS(1089),
    [anon_sym_PLUS] = ACTIONS(1089),
    [anon_sym_SLASH] = ACTIONS(1089),
    [anon_sym_LT] = ACTIONS(1089),
    [anon_sym_GT] = ACTIONS(1089),
    [anon_sym_QMARK] = ACTIONS(1089),
    [anon_sym_CARET] = ACTIONS(1089),
    [anon_sym_BSLASH] = ACTIONS(1089),
    [sym__space] = ACTIONS(1089),
    [sym__newline] = ACTIONS(1089),
    [sym__tab] = ACTIONS(1089),
    [sym__vertical_tab] = ACTIONS(1089),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1089),
  },
  [395] = {
    [anon_sym_SEMI] = ACTIONS(1091),
    [anon_sym_LBRACE] = ACTIONS(1091),
    [anon_sym_RBRACE] = ACTIONS(1091),
    [anon_sym_LPAREN] = ACTIONS(1091),
    [anon_sym_RPAREN] = ACTIONS(1091),
    [anon_sym_EQ] = ACTIONS(1091),
    [anon_sym_TILDE] = ACTIONS(1091),
    [anon_sym_LBRACK] = ACTIONS(1091),
    [anon_sym_RBRACK] = ACTIONS(1091),
    [anon_sym_DASH] = ACTIONS(1091),
    [anon_sym_AT] = ACTIONS(1091),
    [anon_sym__] = ACTIONS(1091),
    [anon_sym_BQUOTE] = ACTIONS(1091),
    [anon_sym_COLON] = ACTIONS(1091),
    [anon_sym_PIPE] = ACTIONS(1091),
    [anon_sym_BANG] = ACTIONS(1091),
    [anon_sym_DOT] = ACTIONS(1091),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(1091),
    [anon_sym_DQUOTE] = ACTIONS(1091),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1091),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1091),
    [sym__ascii_large] = ACTIONS(1091),
    [anon_sym_POUND] = ACTIONS(1091),
    [anon_sym_DOLLAR] = ACTIONS(1091),
    [anon_sym_PERCENT] = ACTIONS(1091),
    [anon_sym_AMP] = ACTIONS(1091),
    [anon_sym_1] = ACTIONS(1091),
    [anon_sym_PLUS] = ACTIONS(1091),
    [anon_sym_SLASH] = ACTIONS(1091),
    [anon_sym_LT] = ACTIONS(1091),
    [anon_sym_GT] = ACTIONS(1091),
    [anon_sym_QMARK] = ACTIONS(1091),
    [anon_sym_CARET] = ACTIONS(1091),
    [anon_sym_BSLASH] = ACTIONS(1091),
    [sym__space] = ACTIONS(1091),
    [sym__newline] = ACTIONS(1091),
    [sym__tab] = ACTIONS(1091),
    [sym__vertical_tab] = ACTIONS(1091),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1091),
  },
  [396] = {
    [sym__layout_semicolon] = ACTIONS(1093),
    [anon_sym_SEMI] = ACTIONS(1095),
    [anon_sym_where] = ACTIONS(1095),
    [anon_sym_do] = ACTIONS(1095),
    [sym__variable_pattern] = ACTIONS(1097),
    [sym__constructor_pattern] = ACTIONS(1097),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1097),
    [anon_sym_SQUOTE] = ACTIONS(1095),
    [anon_sym_DQUOTE] = ACTIONS(1095),
    [sym__integer_literal] = ACTIONS(1095),
    [sym__octal_literal] = ACTIONS(1095),
    [sym__hexidecimal_literal] = ACTIONS(1095),
  },
  [397] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym__integer_literal] = ACTIONS(79),
    [sym__octal_literal] = ACTIONS(79),
    [sym__hexidecimal_literal] = ACTIONS(79),
  },
  [398] = {
    [sym__layout_semicolon] = ACTIONS(1099),
    [anon_sym_SEMI] = ACTIONS(1101),
    [sym_comment] = ACTIONS(5),
  },
  [399] = {
    [sym__layout_close_brace] = ACTIONS(1103),
    [anon_sym_do] = ACTIONS(1105),
    [sym__variable_pattern] = ACTIONS(1107),
    [sym__constructor_pattern] = ACTIONS(1107),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1107),
    [anon_sym_SQUOTE] = ACTIONS(1105),
    [anon_sym_DQUOTE] = ACTIONS(1105),
    [sym__integer_literal] = ACTIONS(1105),
    [sym__octal_literal] = ACTIONS(1105),
    [sym__hexidecimal_literal] = ACTIONS(1105),
  },
  [400] = {
    [sym__literal] = STATE(494),
    [sym_variable_identifier] = STATE(494),
    [sym_integer] = STATE(490),
    [sym_char] = STATE(490),
    [sym_string] = STATE(490),
    [aux_sym_general_constructor_repeat1] = STATE(495),
    [sym__layout_semicolon] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(171),
    [sym__variable_pattern] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1109),
    [anon_sym_SQUOTE] = ACTIONS(1111),
    [anon_sym_DQUOTE] = ACTIONS(1113),
    [sym__integer_literal] = ACTIONS(1115),
    [sym__octal_literal] = ACTIONS(1115),
    [sym__hexidecimal_literal] = ACTIONS(1115),
  },
  [401] = {
    [sym_general_constructor] = STATE(171),
    [sym__variable] = STATE(171),
    [sym_qualified_variable_identifier] = STATE(172),
    [sym__expression] = STATE(398),
    [sym_do_expression] = STATE(171),
    [sym__statement] = STATE(497),
    [sym__literal] = STATE(171),
    [sym__identifier] = STATE(171),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(400),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_close_brace] = ACTIONS(1117),
    [anon_sym_do] = ACTIONS(333),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(841),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [402] = {
    [sym__layout_semicolon] = ACTIONS(1119),
    [anon_sym_SEMI] = ACTIONS(1121),
    [sym_comment] = ACTIONS(5),
  },
  [403] = {
    [anon_sym_RBRACE] = ACTIONS(1105),
    [anon_sym_do] = ACTIONS(1105),
    [sym__variable_pattern] = ACTIONS(1107),
    [sym__constructor_pattern] = ACTIONS(1107),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1107),
    [anon_sym_SQUOTE] = ACTIONS(1105),
    [anon_sym_DQUOTE] = ACTIONS(1105),
    [sym__integer_literal] = ACTIONS(1105),
    [sym__octal_literal] = ACTIONS(1105),
    [sym__hexidecimal_literal] = ACTIONS(1105),
  },
  [404] = {
    [sym_general_constructor] = STATE(171),
    [sym__variable] = STATE(171),
    [sym_qualified_variable_identifier] = STATE(172),
    [sym__expression] = STATE(402),
    [sym_do_expression] = STATE(171),
    [sym__statement] = STATE(499),
    [sym__literal] = STATE(171),
    [sym__identifier] = STATE(171),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(400),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [anon_sym_RBRACE] = ACTIONS(1123),
    [anon_sym_do] = ACTIONS(333),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(841),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [405] = {
    [sym__layout_semicolon] = ACTIONS(1125),
    [anon_sym_SEMI] = ACTIONS(1127),
    [anon_sym_where] = ACTIONS(1127),
    [anon_sym_do] = ACTIONS(1127),
    [sym__variable_pattern] = ACTIONS(1129),
    [sym__constructor_pattern] = ACTIONS(1129),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1129),
    [anon_sym_SQUOTE] = ACTIONS(1127),
    [anon_sym_DQUOTE] = ACTIONS(1127),
    [sym__integer_literal] = ACTIONS(1127),
    [sym__octal_literal] = ACTIONS(1127),
    [sym__hexidecimal_literal] = ACTIONS(1127),
  },
  [406] = {
    [anon_sym_RPAREN] = ACTIONS(1131),
    [sym_comment] = ACTIONS(5),
  },
  [407] = {
    [sym__op] = STATE(300),
    [sym_variable_symbol] = STATE(301),
    [sym_constructor_symbol] = STATE(301),
    [sym__variable_symbol] = STATE(302),
    [anon_sym_COMMA] = ACTIONS(1133),
    [anon_sym_RPAREN] = ACTIONS(1133),
    [anon_sym_DASH] = ACTIONS(583),
    [anon_sym_BQUOTE] = ACTIONS(585),
    [anon_sym_COLON] = ACTIONS(587),
    [anon_sym_BANG] = ACTIONS(583),
    [anon_sym_DOT] = ACTIONS(583),
    [sym_comment] = ACTIONS(5),
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
  },
  [408] = {
    [anon_sym_COMMA] = ACTIONS(1133),
    [anon_sym_RPAREN] = ACTIONS(1133),
    [sym_comment] = ACTIONS(5),
  },
  [409] = {
    [anon_sym_BQUOTE] = ACTIONS(1135),
    [sym_comment] = ACTIONS(5),
  },
  [410] = {
    [anon_sym_LPAREN] = ACTIONS(455),
    [anon_sym_TILDE] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(455),
    [anon_sym_DASH] = ACTIONS(455),
    [anon_sym__] = ACTIONS(455),
    [anon_sym_COLON] = ACTIONS(455),
    [sym_list_constructor] = ACTIONS(455),
    [anon_sym_BANG] = ACTIONS(455),
    [sym__variable_pattern] = ACTIONS(1137),
    [sym__constructor_pattern] = ACTIONS(1137),
    [anon_sym_DOT] = ACTIONS(455),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1137),
    [anon_sym_SQUOTE] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(455),
    [anon_sym_POUND] = ACTIONS(455),
    [anon_sym_DOLLAR] = ACTIONS(455),
    [anon_sym_PERCENT] = ACTIONS(455),
    [anon_sym_AMP] = ACTIONS(455),
    [anon_sym_1] = ACTIONS(455),
    [anon_sym_PLUS] = ACTIONS(455),
    [anon_sym_SLASH] = ACTIONS(455),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_GT] = ACTIONS(455),
    [anon_sym_QMARK] = ACTIONS(455),
    [anon_sym_CARET] = ACTIONS(455),
    [sym__integer_literal] = ACTIONS(455),
    [sym__octal_literal] = ACTIONS(455),
    [sym__hexidecimal_literal] = ACTIONS(455),
  },
  [411] = {
    [anon_sym_LPAREN] = ACTIONS(459),
    [anon_sym_TILDE] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(459),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym__] = ACTIONS(459),
    [anon_sym_COLON] = ACTIONS(459),
    [sym_list_constructor] = ACTIONS(459),
    [anon_sym_BANG] = ACTIONS(459),
    [sym__variable_pattern] = ACTIONS(1139),
    [sym__constructor_pattern] = ACTIONS(1139),
    [anon_sym_DOT] = ACTIONS(459),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1139),
    [anon_sym_SQUOTE] = ACTIONS(459),
    [anon_sym_DQUOTE] = ACTIONS(459),
    [anon_sym_POUND] = ACTIONS(459),
    [anon_sym_DOLLAR] = ACTIONS(459),
    [anon_sym_PERCENT] = ACTIONS(459),
    [anon_sym_AMP] = ACTIONS(459),
    [anon_sym_1] = ACTIONS(459),
    [anon_sym_PLUS] = ACTIONS(459),
    [anon_sym_SLASH] = ACTIONS(459),
    [anon_sym_LT] = ACTIONS(459),
    [anon_sym_GT] = ACTIONS(459),
    [anon_sym_QMARK] = ACTIONS(459),
    [anon_sym_CARET] = ACTIONS(459),
    [sym__integer_literal] = ACTIONS(459),
    [sym__octal_literal] = ACTIONS(459),
    [sym__hexidecimal_literal] = ACTIONS(459),
  },
  [412] = {
    [sym__constructor_symbol] = STATE(502),
    [anon_sym_LPAREN] = ACTIONS(463),
    [anon_sym_TILDE] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(463),
    [anon_sym_DASH] = ACTIONS(463),
    [anon_sym__] = ACTIONS(463),
    [anon_sym_COLON] = ACTIONS(881),
    [sym_list_constructor] = ACTIONS(463),
    [anon_sym_BANG] = ACTIONS(881),
    [sym__variable_pattern] = ACTIONS(1141),
    [sym__constructor_pattern] = ACTIONS(1141),
    [anon_sym_DOT] = ACTIONS(881),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1141),
    [anon_sym_SQUOTE] = ACTIONS(463),
    [anon_sym_DQUOTE] = ACTIONS(463),
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
    [sym__integer_literal] = ACTIONS(463),
    [sym__octal_literal] = ACTIONS(463),
    [sym__hexidecimal_literal] = ACTIONS(463),
  },
  [413] = {
    [sym__op] = STATE(300),
    [sym_variable_symbol] = STATE(301),
    [sym_constructor_symbol] = STATE(301),
    [sym__variable_symbol] = STATE(302),
    [anon_sym_COMMA] = ACTIONS(1143),
    [anon_sym_RPAREN] = ACTIONS(1143),
    [anon_sym_DASH] = ACTIONS(583),
    [anon_sym_BQUOTE] = ACTIONS(585),
    [anon_sym_COLON] = ACTIONS(587),
    [anon_sym_BANG] = ACTIONS(583),
    [anon_sym_DOT] = ACTIONS(583),
    [sym_comment] = ACTIONS(5),
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
  },
  [414] = {
    [anon_sym_COMMA] = ACTIONS(1143),
    [anon_sym_RPAREN] = ACTIONS(1143),
    [sym_comment] = ACTIONS(5),
  },
  [415] = {
    [anon_sym_LPAREN] = ACTIONS(473),
    [anon_sym_TILDE] = ACTIONS(473),
    [anon_sym_LBRACK] = ACTIONS(473),
    [anon_sym_DASH] = ACTIONS(473),
    [anon_sym__] = ACTIONS(473),
    [sym_list_constructor] = ACTIONS(473),
    [anon_sym_BANG] = ACTIONS(473),
    [sym__variable_pattern] = ACTIONS(1145),
    [sym__constructor_pattern] = ACTIONS(1145),
    [anon_sym_DOT] = ACTIONS(473),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1145),
    [anon_sym_SQUOTE] = ACTIONS(473),
    [anon_sym_DQUOTE] = ACTIONS(473),
    [anon_sym_POUND] = ACTIONS(473),
    [anon_sym_DOLLAR] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(473),
    [anon_sym_AMP] = ACTIONS(473),
    [anon_sym_1] = ACTIONS(473),
    [anon_sym_PLUS] = ACTIONS(473),
    [anon_sym_SLASH] = ACTIONS(473),
    [anon_sym_LT] = ACTIONS(473),
    [anon_sym_GT] = ACTIONS(473),
    [anon_sym_QMARK] = ACTIONS(473),
    [anon_sym_CARET] = ACTIONS(473),
    [sym__integer_literal] = ACTIONS(473),
    [sym__octal_literal] = ACTIONS(473),
    [sym__hexidecimal_literal] = ACTIONS(473),
  },
  [416] = {
    [sym__variable_symbol] = STATE(503),
    [anon_sym_LPAREN] = ACTIONS(477),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(477),
    [anon_sym_DASH] = ACTIONS(583),
    [anon_sym__] = ACTIONS(477),
    [sym_list_constructor] = ACTIONS(477),
    [anon_sym_BANG] = ACTIONS(583),
    [sym__variable_pattern] = ACTIONS(1147),
    [sym__constructor_pattern] = ACTIONS(1147),
    [anon_sym_DOT] = ACTIONS(583),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1147),
    [anon_sym_SQUOTE] = ACTIONS(477),
    [anon_sym_DQUOTE] = ACTIONS(477),
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
    [sym__integer_literal] = ACTIONS(477),
    [sym__octal_literal] = ACTIONS(477),
    [sym__hexidecimal_literal] = ACTIONS(477),
  },
  [417] = {
    [sym__function_pattern] = STATE(504),
    [sym_label_pattern] = STATE(84),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym__pattern] = STATE(505),
    [sym_negative_literal] = STATE(181),
    [sym_general_constructor] = STATE(181),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(182),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_variable_identifier] = STATE(93),
    [sym_constructor_identifier] = STATE(183),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(343),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(345),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(347),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [418] = {
    [anon_sym_LPAREN] = ACTIONS(1149),
    [anon_sym_COMMA] = ACTIONS(1149),
    [anon_sym_RPAREN] = ACTIONS(1149),
    [anon_sym_EQ] = ACTIONS(1149),
    [anon_sym_TILDE] = ACTIONS(1149),
    [anon_sym_LBRACK] = ACTIONS(1149),
    [anon_sym_RBRACK] = ACTIONS(1149),
    [anon_sym_DASH] = ACTIONS(1149),
    [anon_sym__] = ACTIONS(1149),
    [anon_sym_BQUOTE] = ACTIONS(1149),
    [anon_sym_COLON] = ACTIONS(1149),
    [sym_list_constructor] = ACTIONS(1149),
    [anon_sym_BANG] = ACTIONS(1149),
    [sym__variable_pattern] = ACTIONS(1151),
    [sym__constructor_pattern] = ACTIONS(1151),
    [anon_sym_DOT] = ACTIONS(1149),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1151),
    [anon_sym_SQUOTE] = ACTIONS(1149),
    [anon_sym_DQUOTE] = ACTIONS(1149),
    [anon_sym_POUND] = ACTIONS(1149),
    [anon_sym_DOLLAR] = ACTIONS(1149),
    [anon_sym_PERCENT] = ACTIONS(1149),
    [anon_sym_AMP] = ACTIONS(1149),
    [anon_sym_1] = ACTIONS(1149),
    [anon_sym_PLUS] = ACTIONS(1149),
    [anon_sym_SLASH] = ACTIONS(1149),
    [anon_sym_LT] = ACTIONS(1149),
    [anon_sym_GT] = ACTIONS(1149),
    [anon_sym_QMARK] = ACTIONS(1149),
    [anon_sym_CARET] = ACTIONS(1149),
    [sym__integer_literal] = ACTIONS(1149),
    [sym__octal_literal] = ACTIONS(1149),
    [sym__hexidecimal_literal] = ACTIONS(1149),
  },
  [419] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1153),
  },
  [420] = {
    [anon_sym_COMMA] = ACTIONS(1127),
    [anon_sym_RPAREN] = ACTIONS(1127),
    [sym__variable_pattern] = ACTIONS(1127),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1129),
    [anon_sym_SQUOTE] = ACTIONS(1127),
    [anon_sym_DQUOTE] = ACTIONS(1127),
    [sym__integer_literal] = ACTIONS(1127),
    [sym__octal_literal] = ACTIONS(1127),
    [sym__hexidecimal_literal] = ACTIONS(1127),
  },
  [421] = {
    [anon_sym_LPAREN] = ACTIONS(1155),
    [anon_sym_COMMA] = ACTIONS(1155),
    [anon_sym_RPAREN] = ACTIONS(1155),
    [anon_sym_EQ] = ACTIONS(1155),
    [anon_sym_TILDE] = ACTIONS(1155),
    [anon_sym_LBRACK] = ACTIONS(1155),
    [anon_sym_RBRACK] = ACTIONS(1155),
    [anon_sym_DASH] = ACTIONS(1155),
    [anon_sym__] = ACTIONS(1155),
    [anon_sym_BQUOTE] = ACTIONS(1155),
    [anon_sym_COLON] = ACTIONS(1155),
    [sym_list_constructor] = ACTIONS(1155),
    [anon_sym_BANG] = ACTIONS(1155),
    [sym__variable_pattern] = ACTIONS(1157),
    [sym__constructor_pattern] = ACTIONS(1157),
    [anon_sym_DOT] = ACTIONS(1155),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1157),
    [anon_sym_SQUOTE] = ACTIONS(1155),
    [anon_sym_DQUOTE] = ACTIONS(1155),
    [anon_sym_POUND] = ACTIONS(1155),
    [anon_sym_DOLLAR] = ACTIONS(1155),
    [anon_sym_PERCENT] = ACTIONS(1155),
    [anon_sym_AMP] = ACTIONS(1155),
    [anon_sym_1] = ACTIONS(1155),
    [anon_sym_PLUS] = ACTIONS(1155),
    [anon_sym_SLASH] = ACTIONS(1155),
    [anon_sym_LT] = ACTIONS(1155),
    [anon_sym_GT] = ACTIONS(1155),
    [anon_sym_QMARK] = ACTIONS(1155),
    [anon_sym_CARET] = ACTIONS(1155),
    [sym__integer_literal] = ACTIONS(1155),
    [sym__octal_literal] = ACTIONS(1155),
    [sym__hexidecimal_literal] = ACTIONS(1155),
  },
  [422] = {
    [sym_label] = STATE(507),
    [sym__identifier] = STATE(318),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [423] = {
    [anon_sym_RBRACE] = ACTIONS(1159),
    [anon_sym_COMMA] = ACTIONS(1161),
    [sym_comment] = ACTIONS(5),
  },
  [424] = {
    [sym__literal] = STATE(509),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [425] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(511),
    [anon_sym_COMMA] = ACTIONS(917),
    [anon_sym_RPAREN] = ACTIONS(1163),
    [sym_comment] = ACTIONS(5),
  },
  [426] = {
    [aux_sym_tuple_repeat1] = STATE(513),
    [anon_sym_COMMA] = ACTIONS(925),
    [anon_sym_RPAREN] = ACTIONS(1165),
    [sym_comment] = ACTIONS(5),
  },
  [427] = {
    [anon_sym_COMMA] = ACTIONS(1167),
    [anon_sym_RPAREN] = ACTIONS(1167),
    [sym_comment] = ACTIONS(5),
  },
  [428] = {
    [sym__layout_semicolon] = ACTIONS(1169),
    [anon_sym_SEMI] = ACTIONS(1171),
    [anon_sym_DASH_GT] = ACTIONS(1171),
    [sym_comment] = ACTIONS(5),
  },
  [429] = {
    [anon_sym_COMMA] = ACTIONS(1173),
    [anon_sym_RPAREN] = ACTIONS(1175),
    [sym_comment] = ACTIONS(5),
  },
  [430] = {
    [sym_type] = STATE(448),
    [sym__generic_type_constructor] = STATE(333),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(333),
    [sym_list] = STATE(333),
    [sym_parenthesized_constructor] = STATE(333),
    [sym_variable_identifier] = STATE(334),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(329),
    [anon_sym_LPAREN] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(621),
    [anon_sym_RBRACK] = ACTIONS(1177),
    [sym_unit_type] = ACTIONS(623),
    [sym_list_constructor] = ACTIONS(623),
    [sym_function_constructor] = ACTIONS(623),
    [sym__variable_pattern] = ACTIONS(253),
    [sym__constructor_pattern] = ACTIONS(631),
    [sym_module_identifier] = ACTIONS(633),
    [sym_comment] = ACTIONS(5),
  },
  [431] = {
    [sym_variable_identifier] = STATE(269),
    [anon_sym_LPAREN] = ACTIONS(959),
    [anon_sym_COMMA] = ACTIONS(959),
    [anon_sym_RPAREN] = ACTIONS(959),
    [anon_sym_LBRACK] = ACTIONS(959),
    [anon_sym_RBRACK] = ACTIONS(959),
    [anon_sym_DASH_GT] = ACTIONS(959),
    [sym_unit_type] = ACTIONS(959),
    [sym_list_constructor] = ACTIONS(959),
    [sym_function_constructor] = ACTIONS(959),
    [sym__variable_pattern] = ACTIONS(253),
    [sym__constructor_pattern] = ACTIONS(1179),
    [sym_module_identifier] = ACTIONS(1179),
    [sym_comment] = ACTIONS(5),
  },
  [432] = {
    [sym_constructor_identifier] = STATE(517),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_module_identifier] = ACTIONS(961),
    [sym_comment] = ACTIONS(5),
  },
  [433] = {
    [sym_variable_identifier] = STATE(151),
    [aux_sym_type_class_repeat1] = STATE(518),
    [anon_sym_LPAREN] = ACTIONS(965),
    [anon_sym_COMMA] = ACTIONS(965),
    [anon_sym_RPAREN] = ACTIONS(965),
    [anon_sym_LBRACK] = ACTIONS(965),
    [anon_sym_RBRACK] = ACTIONS(965),
    [anon_sym_DASH_GT] = ACTIONS(965),
    [sym_unit_type] = ACTIONS(965),
    [sym_list_constructor] = ACTIONS(965),
    [sym_function_constructor] = ACTIONS(965),
    [sym__variable_pattern] = ACTIONS(253),
    [sym__constructor_pattern] = ACTIONS(1181),
    [sym_module_identifier] = ACTIONS(1181),
    [sym_comment] = ACTIONS(5),
  },
  [434] = {
    [sym_constructor_identifier] = STATE(517),
    [sym__constructor_pattern] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(1183),
    [sym_comment] = ACTIONS(5),
  },
  [435] = {
    [sym_type] = STATE(520),
    [sym__generic_type_constructor] = STATE(326),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(326),
    [sym_list] = STATE(326),
    [sym_parenthesized_constructor] = STATE(326),
    [sym_variable_identifier] = STATE(328),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(329),
    [anon_sym_LPAREN] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(623),
    [sym_list_constructor] = ACTIONS(623),
    [sym_function_constructor] = ACTIONS(623),
    [sym__variable_pattern] = ACTIONS(625),
    [sym__constructor_pattern] = ACTIONS(631),
    [sym_module_identifier] = ACTIONS(629),
    [sym_comment] = ACTIONS(5),
  },
  [436] = {
    [sym__layout_semicolon] = ACTIONS(1185),
    [anon_sym_SEMI] = ACTIONS(1188),
    [anon_sym_DASH_GT] = ACTIONS(1188),
    [sym_comment] = ACTIONS(5),
  },
  [437] = {
    [anon_sym_COMMA] = ACTIONS(1191),
    [anon_sym_RPAREN] = ACTIONS(1193),
    [sym_comment] = ACTIONS(5),
  },
  [438] = {
    [sym_type] = STATE(523),
    [sym__generic_type_constructor] = STATE(326),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(326),
    [sym_list] = STATE(326),
    [sym_parenthesized_constructor] = STATE(326),
    [sym_variable_identifier] = STATE(328),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(329),
    [anon_sym_LPAREN] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(623),
    [sym_list_constructor] = ACTIONS(623),
    [sym_function_constructor] = ACTIONS(623),
    [sym__variable_pattern] = ACTIONS(625),
    [sym__constructor_pattern] = ACTIONS(631),
    [sym_module_identifier] = ACTIONS(629),
    [sym_comment] = ACTIONS(5),
  },
  [439] = {
    [anon_sym_EQ_GT] = ACTIONS(1195),
    [sym_comment] = ACTIONS(5),
  },
  [440] = {
    [anon_sym_COMMA] = ACTIONS(729),
    [anon_sym_RPAREN] = ACTIONS(1197),
    [sym_comment] = ACTIONS(5),
  },
  [441] = {
    [sym_type] = STATE(526),
    [sym__generic_type_constructor] = STATE(326),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(326),
    [sym_list] = STATE(326),
    [sym_parenthesized_constructor] = STATE(326),
    [sym_variable_identifier] = STATE(328),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(329),
    [anon_sym_LPAREN] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(623),
    [sym_list_constructor] = ACTIONS(623),
    [sym_function_constructor] = ACTIONS(623),
    [sym__variable_pattern] = ACTIONS(625),
    [sym__constructor_pattern] = ACTIONS(631),
    [sym_module_identifier] = ACTIONS(629),
    [sym_comment] = ACTIONS(5),
  },
  [442] = {
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym_unit_type] = ACTIONS(79),
    [sym_list_constructor] = ACTIONS(79),
    [sym_function_constructor] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym__constructor_pattern] = ACTIONS(201),
    [sym_module_identifier] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
  },
  [443] = {
    [sym_constructor_identifier] = STATE(517),
    [sym__constructor_pattern] = ACTIONS(939),
    [sym_module_identifier] = ACTIONS(961),
    [sym_comment] = ACTIONS(5),
  },
  [444] = {
    [sym_constructor_identifier] = STATE(517),
    [sym__constructor_pattern] = ACTIONS(939),
    [anon_sym_DOT] = ACTIONS(1199),
    [sym_comment] = ACTIONS(5),
  },
  [445] = {
    [sym_type] = STATE(523),
    [sym__generic_type_constructor] = STATE(333),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(333),
    [sym_list] = STATE(333),
    [sym_parenthesized_constructor] = STATE(333),
    [sym_variable_identifier] = STATE(334),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(329),
    [anon_sym_LPAREN] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(623),
    [sym_list_constructor] = ACTIONS(623),
    [sym_function_constructor] = ACTIONS(623),
    [sym__variable_pattern] = ACTIONS(253),
    [sym__constructor_pattern] = ACTIONS(631),
    [sym_module_identifier] = ACTIONS(633),
    [sym_comment] = ACTIONS(5),
  },
  [446] = {
    [sym_type] = STATE(526),
    [sym__generic_type_constructor] = STATE(333),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(333),
    [sym_list] = STATE(333),
    [sym_parenthesized_constructor] = STATE(333),
    [sym_variable_identifier] = STATE(334),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(329),
    [anon_sym_LPAREN] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(623),
    [sym_list_constructor] = ACTIONS(623),
    [sym_function_constructor] = ACTIONS(623),
    [sym__variable_pattern] = ACTIONS(253),
    [sym__constructor_pattern] = ACTIONS(631),
    [sym_module_identifier] = ACTIONS(633),
    [sym_comment] = ACTIONS(5),
  },
  [447] = {
    [sym__layout_semicolon] = ACTIONS(1201),
    [anon_sym_SEMI] = ACTIONS(1203),
    [anon_sym_DASH_GT] = ACTIONS(1203),
    [sym_comment] = ACTIONS(5),
  },
  [448] = {
    [anon_sym_LPAREN] = ACTIONS(1205),
    [anon_sym_LBRACK] = ACTIONS(1205),
    [anon_sym_RBRACK] = ACTIONS(1205),
    [sym_unit_type] = ACTIONS(1205),
    [sym_list_constructor] = ACTIONS(1205),
    [sym_function_constructor] = ACTIONS(1205),
    [sym__variable_pattern] = ACTIONS(1205),
    [sym__constructor_pattern] = ACTIONS(1207),
    [sym_module_identifier] = ACTIONS(1207),
    [sym_comment] = ACTIONS(5),
  },
  [449] = {
    [sym__layout_semicolon] = ACTIONS(799),
    [anon_sym_SEMI] = ACTIONS(745),
    [anon_sym_DASH_GT] = ACTIONS(745),
    [sym__variable_pattern] = ACTIONS(745),
    [sym_comment] = ACTIONS(5),
  },
  [450] = {
    [sym__constructor_pattern] = ACTIONS(1209),
    [anon_sym_DOT] = ACTIONS(1211),
    [sym_comment] = ACTIONS(5),
  },
  [451] = {
    [sym_variable_identifier] = STATE(337),
    [aux_sym_type_class_repeat1] = STATE(528),
    [sym__layout_semicolon] = ACTIONS(1213),
    [anon_sym_SEMI] = ACTIONS(1215),
    [anon_sym_DASH_GT] = ACTIONS(1215),
    [sym__variable_pattern] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
  },
  [452] = {
    [sym_variable_identifier] = STATE(449),
    [sym__layout_semicolon] = ACTIONS(1213),
    [anon_sym_SEMI] = ACTIONS(1215),
    [anon_sym_DASH_GT] = ACTIONS(1215),
    [sym__variable_pattern] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
  },
  [453] = {
    [sym_constructor_identifier] = STATE(530),
    [sym__constructor_pattern] = ACTIONS(643),
    [sym_module_identifier] = ACTIONS(1217),
    [sym_comment] = ACTIONS(5),
  },
  [454] = {
    [sym__layout_semicolon] = ACTIONS(1219),
    [anon_sym_SEMI] = ACTIONS(1221),
    [sym_comment] = ACTIONS(5),
  },
  [455] = {
    [sym__layout_semicolon] = ACTIONS(1223),
    [anon_sym_SEMI] = ACTIONS(1225),
    [sym_comment] = ACTIONS(5),
  },
  [456] = {
    [anon_sym_COMMA] = ACTIONS(1227),
    [anon_sym_RPAREN] = ACTIONS(1227),
    [sym_comment] = ACTIONS(5),
  },
  [457] = {
    [sym_export] = STATE(531),
    [sym__identifier] = STATE(210),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [458] = {
    [anon_sym_where] = ACTIONS(1229),
    [sym_comment] = ACTIONS(5),
  },
  [459] = {
    [anon_sym_RPAREN] = ACTIONS(1231),
    [sym_comment] = ACTIONS(5),
  },
  [460] = {
    [aux_sym_export_repeat1] = STATE(533),
    [anon_sym_COMMA] = ACTIONS(423),
    [anon_sym_RPAREN] = ACTIONS(1231),
    [sym_comment] = ACTIONS(5),
  },
  [461] = {
    [sym__layout_close_brace] = ACTIONS(323),
    [anon_sym_import] = ACTIONS(325),
    [anon_sym_foreign] = ACTIONS(325),
    [anon_sym_default] = ACTIONS(325),
    [anon_sym_class] = ACTIONS(325),
    [anon_sym_instance] = ACTIONS(325),
    [anon_sym_infixl] = ACTIONS(325),
    [anon_sym_infixr] = ACTIONS(325),
    [anon_sym_infix] = ACTIONS(325),
    [anon_sym_data] = ACTIONS(325),
    [anon_sym_newtype] = ACTIONS(325),
    [anon_sym_type] = ACTIONS(325),
    [sym__variable_pattern] = ACTIONS(327),
    [sym__constructor_pattern] = ACTIONS(327),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(327),
    [anon_sym_SQUOTE] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [sym__integer_literal] = ACTIONS(325),
    [sym__octal_literal] = ACTIONS(325),
    [sym__hexidecimal_literal] = ACTIONS(325),
  },
  [462] = {
    [ts_builtin_sym_end] = ACTIONS(1233),
    [sym_comment] = ACTIONS(5),
  },
  [463] = {
    [sym__layout_semicolon] = ACTIONS(1235),
    [anon_sym_SEMI] = ACTIONS(1237),
    [sym_comment] = ACTIONS(5),
  },
  [464] = {
    [sym__layout_semicolon] = ACTIONS(1239),
    [anon_sym_SEMI] = ACTIONS(1241),
    [sym_comment] = ACTIONS(5),
  },
  [465] = {
    [anon_sym_RPAREN] = ACTIONS(1243),
    [sym_comment] = ACTIONS(5),
  },
  [466] = {
    [aux_sym_export_repeat1] = STATE(536),
    [anon_sym_COMMA] = ACTIONS(423),
    [anon_sym_RPAREN] = ACTIONS(1243),
    [sym_comment] = ACTIONS(5),
  },
  [467] = {
    [anon_sym_LPAREN] = ACTIONS(1245),
    [anon_sym_COMMA] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(1247),
    [sym_comment] = ACTIONS(5),
  },
  [468] = {
    [sym__identifier] = STATE(538),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [469] = {
    [sym__layout_semicolon] = ACTIONS(1249),
    [anon_sym_SEMI] = ACTIONS(1251),
    [sym_comment] = ACTIONS(5),
  },
  [470] = {
    [sym__identifier] = STATE(540),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [anon_sym_DOT_DOT] = ACTIONS(1253),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [471] = {
    [anon_sym_COMMA] = ACTIONS(1003),
    [anon_sym_RPAREN] = ACTIONS(1255),
    [sym_comment] = ACTIONS(5),
  },
  [472] = {
    [anon_sym_COMMA] = ACTIONS(551),
    [anon_sym_RPAREN] = ACTIONS(551),
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
  [473] = {
    [sym__layout_semicolon] = ACTIONS(1257),
    [anon_sym_SEMI] = ACTIONS(1259),
    [sym_comment] = ACTIONS(5),
  },
  [474] = {
    [anon_sym_COMMA] = ACTIONS(1261),
    [anon_sym_RPAREN] = ACTIONS(1261),
    [sym_comment] = ACTIONS(5),
  },
  [475] = {
    [anon_sym_COMMA] = ACTIONS(1263),
    [anon_sym_RPAREN] = ACTIONS(1263),
    [sym_comment] = ACTIONS(5),
  },
  [476] = {
    [sym__constructor_pattern] = ACTIONS(1265),
    [sym_comment] = ACTIONS(5),
  },
  [477] = {
    [sym__layout_semicolon] = ACTIONS(1233),
    [anon_sym_SEMI] = ACTIONS(1267),
    [sym_comment] = ACTIONS(5),
  },
  [478] = {
    [sym__layout_semicolon] = ACTIONS(1269),
    [anon_sym_SEMI] = ACTIONS(1271),
    [sym_comment] = ACTIONS(5),
  },
  [479] = {
    [sym__layout_semicolon] = ACTIONS(1273),
    [anon_sym_SEMI] = ACTIONS(1275),
    [sym_comment] = ACTIONS(5),
  },
  [480] = {
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_RPAREN] = ACTIONS(1277),
    [sym_comment] = ACTIONS(5),
  },
  [481] = {
    [sym__layout_semicolon] = ACTIONS(1279),
    [anon_sym_SEMI] = ACTIONS(1281),
    [anon_sym_PIPE] = ACTIONS(1281),
    [anon_sym_deriving] = ACTIONS(1281),
    [sym_comment] = ACTIONS(5),
  },
  [482] = {
    [sym__layout_semicolon] = ACTIONS(1283),
    [anon_sym_SEMI] = ACTIONS(1285),
    [anon_sym_PIPE] = ACTIONS(1285),
    [anon_sym_deriving] = ACTIONS(1285),
    [sym_comment] = ACTIONS(5),
  },
  [483] = {
    [sym_field] = STATE(543),
    [sym_variable_identifier] = STATE(386),
    [sym__variable_pattern] = ACTIONS(625),
    [sym_comment] = ACTIONS(5),
  },
  [484] = {
    [anon_sym_RBRACE] = ACTIONS(1287),
    [anon_sym_COMMA] = ACTIONS(1289),
    [sym_comment] = ACTIONS(5),
  },
  [485] = {
    [sym_variable_identifier] = STATE(546),
    [sym__variable_pattern] = ACTIONS(625),
    [sym_comment] = ACTIONS(5),
  },
  [486] = {
    [sym_strict] = STATE(548),
    [sym__identifier] = STATE(548),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [anon_sym_BANG] = ACTIONS(1291),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [487] = {
    [anon_sym_COMMA] = ACTIONS(1293),
    [anon_sym_COLON_COLON] = ACTIONS(1295),
    [sym_comment] = ACTIONS(5),
  },
  [488] = {
    [sym__layout_semicolon] = ACTIONS(1297),
    [anon_sym_SEMI] = ACTIONS(1299),
    [sym_comment] = ACTIONS(5),
  },
  [489] = {
    [sym__layout_close_brace] = ACTIONS(1301),
    [anon_sym_do] = ACTIONS(1303),
    [sym__variable_pattern] = ACTIONS(1305),
    [sym__constructor_pattern] = ACTIONS(1305),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1305),
    [anon_sym_SQUOTE] = ACTIONS(1303),
    [anon_sym_DQUOTE] = ACTIONS(1303),
    [sym__integer_literal] = ACTIONS(1303),
    [sym__octal_literal] = ACTIONS(1303),
    [sym__hexidecimal_literal] = ACTIONS(1303),
  },
  [490] = {
    [sym__layout_semicolon] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(85),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym__integer_literal] = ACTIONS(85),
    [sym__octal_literal] = ACTIONS(85),
    [sym__hexidecimal_literal] = ACTIONS(85),
  },
  [491] = {
    [sym__graphic] = STATE(551),
    [sym__small] = STATE(64),
    [sym__large] = STATE(64),
    [sym__symbol] = STATE(64),
    [sym__special] = STATE(64),
    [sym__escape] = STATE(551),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_AT] = ACTIONS(91),
    [anon_sym__] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_BANG] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(91),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(1307),
    [anon_sym_DQUOTE] = ACTIONS(1307),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(93),
    [sym__ascii_large] = ACTIONS(101),
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
    [anon_sym_BSLASH] = ACTIONS(103),
    [sym__space] = ACTIONS(1307),
  },
  [492] = {
    [sym__gap] = STATE(70),
    [sym__graphic] = STATE(70),
    [sym__small] = STATE(72),
    [sym__large] = STATE(72),
    [sym__symbol] = STATE(72),
    [sym__special] = STATE(72),
    [sym__escape] = STATE(70),
    [aux_sym_string_repeat1] = STATE(553),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(1309),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(109),
    [sym__ascii_large] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_1] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(119),
    [sym__space] = ACTIONS(121),
    [sym__newline] = ACTIONS(121),
    [sym__tab] = ACTIONS(121),
    [sym__vertical_tab] = ACTIONS(121),
  },
  [493] = {
    [sym__layout_semicolon] = ACTIONS(123),
    [anon_sym_SEMI] = ACTIONS(125),
    [sym__variable_pattern] = ACTIONS(125),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym__integer_literal] = ACTIONS(125),
    [sym__octal_literal] = ACTIONS(125),
    [sym__hexidecimal_literal] = ACTIONS(125),
  },
  [494] = {
    [sym__layout_semicolon] = ACTIONS(853),
    [anon_sym_SEMI] = ACTIONS(855),
    [sym__variable_pattern] = ACTIONS(855),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(857),
    [anon_sym_SQUOTE] = ACTIONS(855),
    [anon_sym_DQUOTE] = ACTIONS(855),
    [sym__integer_literal] = ACTIONS(855),
    [sym__octal_literal] = ACTIONS(855),
    [sym__hexidecimal_literal] = ACTIONS(855),
  },
  [495] = {
    [sym__literal] = STATE(554),
    [sym_variable_identifier] = STATE(554),
    [sym_integer] = STATE(490),
    [sym_char] = STATE(490),
    [sym_string] = STATE(490),
    [sym__layout_semicolon] = ACTIONS(859),
    [anon_sym_SEMI] = ACTIONS(861),
    [sym__variable_pattern] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1109),
    [anon_sym_SQUOTE] = ACTIONS(1111),
    [anon_sym_DQUOTE] = ACTIONS(1113),
    [sym__integer_literal] = ACTIONS(1115),
    [sym__octal_literal] = ACTIONS(1115),
    [sym__hexidecimal_literal] = ACTIONS(1115),
  },
  [496] = {
    [sym__layout_semicolon] = ACTIONS(1311),
    [anon_sym_SEMI] = ACTIONS(1313),
    [anon_sym_where] = ACTIONS(1313),
    [anon_sym_do] = ACTIONS(1313),
    [sym__variable_pattern] = ACTIONS(1315),
    [sym__constructor_pattern] = ACTIONS(1315),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1315),
    [anon_sym_SQUOTE] = ACTIONS(1313),
    [anon_sym_DQUOTE] = ACTIONS(1313),
    [sym__integer_literal] = ACTIONS(1313),
    [sym__octal_literal] = ACTIONS(1313),
    [sym__hexidecimal_literal] = ACTIONS(1313),
  },
  [497] = {
    [sym__layout_close_brace] = ACTIONS(1317),
    [anon_sym_do] = ACTIONS(1319),
    [sym__variable_pattern] = ACTIONS(1321),
    [sym__constructor_pattern] = ACTIONS(1321),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1321),
    [anon_sym_SQUOTE] = ACTIONS(1319),
    [anon_sym_DQUOTE] = ACTIONS(1319),
    [sym__integer_literal] = ACTIONS(1319),
    [sym__octal_literal] = ACTIONS(1319),
    [sym__hexidecimal_literal] = ACTIONS(1319),
  },
  [498] = {
    [anon_sym_RBRACE] = ACTIONS(1303),
    [anon_sym_do] = ACTIONS(1303),
    [sym__variable_pattern] = ACTIONS(1305),
    [sym__constructor_pattern] = ACTIONS(1305),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1305),
    [anon_sym_SQUOTE] = ACTIONS(1303),
    [anon_sym_DQUOTE] = ACTIONS(1303),
    [sym__integer_literal] = ACTIONS(1303),
    [sym__octal_literal] = ACTIONS(1303),
    [sym__hexidecimal_literal] = ACTIONS(1303),
  },
  [499] = {
    [anon_sym_RBRACE] = ACTIONS(1319),
    [anon_sym_do] = ACTIONS(1319),
    [sym__variable_pattern] = ACTIONS(1321),
    [sym__constructor_pattern] = ACTIONS(1321),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1321),
    [anon_sym_SQUOTE] = ACTIONS(1319),
    [anon_sym_DQUOTE] = ACTIONS(1319),
    [sym__integer_literal] = ACTIONS(1319),
    [sym__octal_literal] = ACTIONS(1319),
    [sym__hexidecimal_literal] = ACTIONS(1319),
  },
  [500] = {
    [anon_sym_COMMA] = ACTIONS(1323),
    [anon_sym_RPAREN] = ACTIONS(1323),
    [sym_comment] = ACTIONS(5),
  },
  [501] = {
    [anon_sym_LPAREN] = ACTIONS(755),
    [anon_sym_TILDE] = ACTIONS(755),
    [anon_sym_LBRACK] = ACTIONS(755),
    [anon_sym_DASH] = ACTIONS(755),
    [anon_sym__] = ACTIONS(755),
    [sym_list_constructor] = ACTIONS(755),
    [sym__variable_pattern] = ACTIONS(1325),
    [sym__constructor_pattern] = ACTIONS(1325),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1325),
    [anon_sym_SQUOTE] = ACTIONS(755),
    [anon_sym_DQUOTE] = ACTIONS(755),
    [sym__integer_literal] = ACTIONS(755),
    [sym__octal_literal] = ACTIONS(755),
    [sym__hexidecimal_literal] = ACTIONS(755),
  },
  [502] = {
    [anon_sym_LPAREN] = ACTIONS(759),
    [anon_sym_TILDE] = ACTIONS(759),
    [anon_sym_LBRACK] = ACTIONS(759),
    [anon_sym_DASH] = ACTIONS(759),
    [anon_sym__] = ACTIONS(759),
    [anon_sym_COLON] = ACTIONS(759),
    [sym_list_constructor] = ACTIONS(759),
    [anon_sym_BANG] = ACTIONS(759),
    [sym__variable_pattern] = ACTIONS(1327),
    [sym__constructor_pattern] = ACTIONS(1327),
    [anon_sym_DOT] = ACTIONS(759),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1327),
    [anon_sym_SQUOTE] = ACTIONS(759),
    [anon_sym_DQUOTE] = ACTIONS(759),
    [anon_sym_POUND] = ACTIONS(759),
    [anon_sym_DOLLAR] = ACTIONS(759),
    [anon_sym_PERCENT] = ACTIONS(759),
    [anon_sym_AMP] = ACTIONS(759),
    [anon_sym_1] = ACTIONS(759),
    [anon_sym_PLUS] = ACTIONS(759),
    [anon_sym_SLASH] = ACTIONS(759),
    [anon_sym_LT] = ACTIONS(759),
    [anon_sym_GT] = ACTIONS(759),
    [anon_sym_QMARK] = ACTIONS(759),
    [anon_sym_CARET] = ACTIONS(759),
    [sym__integer_literal] = ACTIONS(759),
    [sym__octal_literal] = ACTIONS(759),
    [sym__hexidecimal_literal] = ACTIONS(759),
  },
  [503] = {
    [anon_sym_LPAREN] = ACTIONS(771),
    [anon_sym_TILDE] = ACTIONS(771),
    [anon_sym_LBRACK] = ACTIONS(771),
    [anon_sym_DASH] = ACTIONS(771),
    [anon_sym__] = ACTIONS(771),
    [sym_list_constructor] = ACTIONS(771),
    [anon_sym_BANG] = ACTIONS(771),
    [sym__variable_pattern] = ACTIONS(1329),
    [sym__constructor_pattern] = ACTIONS(1329),
    [anon_sym_DOT] = ACTIONS(771),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1329),
    [anon_sym_SQUOTE] = ACTIONS(771),
    [anon_sym_DQUOTE] = ACTIONS(771),
    [anon_sym_POUND] = ACTIONS(771),
    [anon_sym_DOLLAR] = ACTIONS(771),
    [anon_sym_PERCENT] = ACTIONS(771),
    [anon_sym_AMP] = ACTIONS(771),
    [anon_sym_1] = ACTIONS(771),
    [anon_sym_PLUS] = ACTIONS(771),
    [anon_sym_SLASH] = ACTIONS(771),
    [anon_sym_LT] = ACTIONS(771),
    [anon_sym_GT] = ACTIONS(771),
    [anon_sym_QMARK] = ACTIONS(771),
    [anon_sym_CARET] = ACTIONS(771),
    [sym__integer_literal] = ACTIONS(771),
    [sym__octal_literal] = ACTIONS(771),
    [sym__hexidecimal_literal] = ACTIONS(771),
  },
  [504] = {
    [sym__op] = STATE(300),
    [sym_variable_symbol] = STATE(301),
    [sym_constructor_symbol] = STATE(301),
    [sym__variable_symbol] = STATE(302),
    [anon_sym_COMMA] = ACTIONS(1331),
    [anon_sym_RPAREN] = ACTIONS(1331),
    [anon_sym_DASH] = ACTIONS(583),
    [anon_sym_BQUOTE] = ACTIONS(585),
    [anon_sym_COLON] = ACTIONS(587),
    [anon_sym_BANG] = ACTIONS(583),
    [anon_sym_DOT] = ACTIONS(583),
    [sym_comment] = ACTIONS(5),
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
  },
  [505] = {
    [anon_sym_COMMA] = ACTIONS(1331),
    [anon_sym_RPAREN] = ACTIONS(1331),
    [sym_comment] = ACTIONS(5),
  },
  [506] = {
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_RPAREN] = ACTIONS(519),
    [sym__variable_pattern] = ACTIONS(519),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(521),
    [anon_sym_SQUOTE] = ACTIONS(519),
    [anon_sym_DQUOTE] = ACTIONS(519),
    [sym__integer_literal] = ACTIONS(519),
    [sym__octal_literal] = ACTIONS(519),
    [sym__hexidecimal_literal] = ACTIONS(519),
  },
  [507] = {
    [anon_sym_RBRACE] = ACTIONS(1333),
    [anon_sym_COMMA] = ACTIONS(1333),
    [sym_comment] = ACTIONS(5),
  },
  [508] = {
    [sym_label] = STATE(555),
    [sym__identifier] = STATE(318),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [509] = {
    [anon_sym_RBRACE] = ACTIONS(1335),
    [anon_sym_COMMA] = ACTIONS(1335),
    [sym_comment] = ACTIONS(5),
  },
  [510] = {
    [anon_sym_LPAREN] = ACTIONS(1171),
    [anon_sym_COMMA] = ACTIONS(1171),
    [anon_sym_RPAREN] = ACTIONS(1171),
    [anon_sym_LBRACK] = ACTIONS(1171),
    [anon_sym_RBRACK] = ACTIONS(1171),
    [anon_sym_DASH_GT] = ACTIONS(1171),
    [sym_unit_type] = ACTIONS(1171),
    [sym_list_constructor] = ACTIONS(1171),
    [sym_function_constructor] = ACTIONS(1171),
    [sym__variable_pattern] = ACTIONS(1171),
    [sym__constructor_pattern] = ACTIONS(1337),
    [sym_module_identifier] = ACTIONS(1337),
    [sym_comment] = ACTIONS(5),
  },
  [511] = {
    [anon_sym_COMMA] = ACTIONS(1173),
    [anon_sym_RPAREN] = ACTIONS(1339),
    [sym_comment] = ACTIONS(5),
  },
  [512] = {
    [anon_sym_LPAREN] = ACTIONS(1188),
    [anon_sym_COMMA] = ACTIONS(1188),
    [anon_sym_RPAREN] = ACTIONS(1188),
    [anon_sym_LBRACK] = ACTIONS(1188),
    [anon_sym_RBRACK] = ACTIONS(1188),
    [anon_sym_DASH_GT] = ACTIONS(1188),
    [sym_unit_type] = ACTIONS(1188),
    [sym_list_constructor] = ACTIONS(1188),
    [sym_function_constructor] = ACTIONS(1188),
    [sym__variable_pattern] = ACTIONS(1188),
    [sym__constructor_pattern] = ACTIONS(1341),
    [sym_module_identifier] = ACTIONS(1341),
    [sym_comment] = ACTIONS(5),
  },
  [513] = {
    [anon_sym_COMMA] = ACTIONS(1191),
    [anon_sym_RPAREN] = ACTIONS(1344),
    [sym_comment] = ACTIONS(5),
  },
  [514] = {
    [anon_sym_COMMA] = ACTIONS(1346),
    [anon_sym_RPAREN] = ACTIONS(1346),
    [sym_comment] = ACTIONS(5),
  },
  [515] = {
    [sym__layout_semicolon] = ACTIONS(1348),
    [anon_sym_SEMI] = ACTIONS(1350),
    [anon_sym_DASH_GT] = ACTIONS(1350),
    [sym_comment] = ACTIONS(5),
  },
  [516] = {
    [anon_sym_LPAREN] = ACTIONS(1203),
    [anon_sym_COMMA] = ACTIONS(1203),
    [anon_sym_RPAREN] = ACTIONS(1203),
    [anon_sym_LBRACK] = ACTIONS(1203),
    [anon_sym_RBRACK] = ACTIONS(1203),
    [anon_sym_DASH_GT] = ACTIONS(1203),
    [sym_unit_type] = ACTIONS(1203),
    [sym_list_constructor] = ACTIONS(1203),
    [sym_function_constructor] = ACTIONS(1203),
    [sym__variable_pattern] = ACTIONS(1203),
    [sym__constructor_pattern] = ACTIONS(1352),
    [sym_module_identifier] = ACTIONS(1352),
    [sym_comment] = ACTIONS(5),
  },
  [517] = {
    [sym_variable_identifier] = STATE(151),
    [aux_sym_type_class_repeat1] = STATE(558),
    [anon_sym_LPAREN] = ACTIONS(1215),
    [anon_sym_COMMA] = ACTIONS(1215),
    [anon_sym_RPAREN] = ACTIONS(1215),
    [anon_sym_LBRACK] = ACTIONS(1215),
    [anon_sym_RBRACK] = ACTIONS(1215),
    [anon_sym_DASH_GT] = ACTIONS(1215),
    [sym_unit_type] = ACTIONS(1215),
    [sym_list_constructor] = ACTIONS(1215),
    [sym_function_constructor] = ACTIONS(1215),
    [sym__variable_pattern] = ACTIONS(253),
    [sym__constructor_pattern] = ACTIONS(1354),
    [sym_module_identifier] = ACTIONS(1354),
    [sym_comment] = ACTIONS(5),
  },
  [518] = {
    [sym_variable_identifier] = STATE(269),
    [anon_sym_LPAREN] = ACTIONS(1215),
    [anon_sym_COMMA] = ACTIONS(1215),
    [anon_sym_RPAREN] = ACTIONS(1215),
    [anon_sym_LBRACK] = ACTIONS(1215),
    [anon_sym_RBRACK] = ACTIONS(1215),
    [anon_sym_DASH_GT] = ACTIONS(1215),
    [sym_unit_type] = ACTIONS(1215),
    [sym_list_constructor] = ACTIONS(1215),
    [sym_function_constructor] = ACTIONS(1215),
    [sym__variable_pattern] = ACTIONS(253),
    [sym__constructor_pattern] = ACTIONS(1354),
    [sym_module_identifier] = ACTIONS(1354),
    [sym_comment] = ACTIONS(5),
  },
  [519] = {
    [sym_constructor_identifier] = STATE(559),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_module_identifier] = ACTIONS(1217),
    [sym_comment] = ACTIONS(5),
  },
  [520] = {
    [anon_sym_COMMA] = ACTIONS(1356),
    [anon_sym_RPAREN] = ACTIONS(1356),
    [sym_comment] = ACTIONS(5),
  },
  [521] = {
    [sym_type] = STATE(560),
    [sym__generic_type_constructor] = STATE(326),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(326),
    [sym_list] = STATE(326),
    [sym_parenthesized_constructor] = STATE(326),
    [sym_variable_identifier] = STATE(328),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(329),
    [anon_sym_LPAREN] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(621),
    [sym_unit_type] = ACTIONS(623),
    [sym_list_constructor] = ACTIONS(623),
    [sym_function_constructor] = ACTIONS(623),
    [sym__variable_pattern] = ACTIONS(625),
    [sym__constructor_pattern] = ACTIONS(631),
    [sym_module_identifier] = ACTIONS(629),
    [sym_comment] = ACTIONS(5),
  },
  [522] = {
    [sym__layout_semicolon] = ACTIONS(1358),
    [anon_sym_SEMI] = ACTIONS(1360),
    [anon_sym_DASH_GT] = ACTIONS(1360),
    [sym_comment] = ACTIONS(5),
  },
  [523] = {
    [anon_sym_LPAREN] = ACTIONS(1221),
    [anon_sym_COMMA] = ACTIONS(1221),
    [anon_sym_RPAREN] = ACTIONS(1221),
    [anon_sym_LBRACK] = ACTIONS(1221),
    [anon_sym_RBRACK] = ACTIONS(1221),
    [sym_unit_type] = ACTIONS(1221),
    [sym_list_constructor] = ACTIONS(1221),
    [sym_function_constructor] = ACTIONS(1221),
    [sym__variable_pattern] = ACTIONS(1221),
    [sym__constructor_pattern] = ACTIONS(1362),
    [sym_module_identifier] = ACTIONS(1362),
    [sym_comment] = ACTIONS(5),
  },
  [524] = {
    [anon_sym_LPAREN] = ACTIONS(1364),
    [anon_sym_LBRACK] = ACTIONS(1364),
    [sym_unit_type] = ACTIONS(1364),
    [sym_list_constructor] = ACTIONS(1364),
    [sym_function_constructor] = ACTIONS(1364),
    [sym__variable_pattern] = ACTIONS(1364),
    [sym__constructor_pattern] = ACTIONS(1023),
    [sym_module_identifier] = ACTIONS(1023),
    [sym_comment] = ACTIONS(5),
  },
  [525] = {
    [anon_sym_EQ_GT] = ACTIONS(1366),
    [sym_comment] = ACTIONS(5),
  },
  [526] = {
    [anon_sym_LPAREN] = ACTIONS(1225),
    [anon_sym_COMMA] = ACTIONS(1225),
    [anon_sym_RPAREN] = ACTIONS(1225),
    [anon_sym_LBRACK] = ACTIONS(1225),
    [anon_sym_RBRACK] = ACTIONS(1225),
    [sym_unit_type] = ACTIONS(1225),
    [sym_list_constructor] = ACTIONS(1225),
    [sym_function_constructor] = ACTIONS(1225),
    [sym__variable_pattern] = ACTIONS(1225),
    [sym__constructor_pattern] = ACTIONS(1368),
    [sym_module_identifier] = ACTIONS(1368),
    [sym_comment] = ACTIONS(5),
  },
  [527] = {
    [sym_constructor_identifier] = STATE(559),
    [sym__constructor_pattern] = ACTIONS(939),
    [sym_module_identifier] = ACTIONS(1217),
    [sym_comment] = ACTIONS(5),
  },
  [528] = {
    [sym_variable_identifier] = STATE(449),
    [sym__layout_semicolon] = ACTIONS(1370),
    [anon_sym_SEMI] = ACTIONS(1372),
    [anon_sym_DASH_GT] = ACTIONS(1372),
    [sym__variable_pattern] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
  },
  [529] = {
    [sym__constructor_pattern] = ACTIONS(1374),
    [anon_sym_DOT] = ACTIONS(1376),
    [sym_comment] = ACTIONS(5),
  },
  [530] = {
    [sym_variable_identifier] = STATE(337),
    [aux_sym_type_class_repeat1] = STATE(562),
    [sym__layout_semicolon] = ACTIONS(1370),
    [anon_sym_SEMI] = ACTIONS(1372),
    [anon_sym_DASH_GT] = ACTIONS(1372),
    [sym__variable_pattern] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
  },
  [531] = {
    [anon_sym_COMMA] = ACTIONS(1378),
    [anon_sym_RPAREN] = ACTIONS(1378),
    [sym_comment] = ACTIONS(5),
  },
  [532] = {
    [anon_sym_COMMA] = ACTIONS(1380),
    [anon_sym_RPAREN] = ACTIONS(1380),
    [sym_comment] = ACTIONS(5),
  },
  [533] = {
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_RPAREN] = ACTIONS(1382),
    [sym_comment] = ACTIONS(5),
  },
  [534] = {
    [sym__layout_close_brace] = ACTIONS(669),
    [anon_sym_import] = ACTIONS(671),
    [anon_sym_foreign] = ACTIONS(671),
    [anon_sym_default] = ACTIONS(671),
    [anon_sym_class] = ACTIONS(671),
    [anon_sym_instance] = ACTIONS(671),
    [anon_sym_infixl] = ACTIONS(671),
    [anon_sym_infixr] = ACTIONS(671),
    [anon_sym_infix] = ACTIONS(671),
    [anon_sym_data] = ACTIONS(671),
    [anon_sym_newtype] = ACTIONS(671),
    [anon_sym_type] = ACTIONS(671),
    [sym__variable_pattern] = ACTIONS(673),
    [sym__constructor_pattern] = ACTIONS(673),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(673),
    [anon_sym_SQUOTE] = ACTIONS(671),
    [anon_sym_DQUOTE] = ACTIONS(671),
    [sym__integer_literal] = ACTIONS(671),
    [sym__octal_literal] = ACTIONS(671),
    [sym__hexidecimal_literal] = ACTIONS(671),
  },
  [535] = {
    [aux_sym_import_specification_repeat1] = STATE(565),
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_RPAREN] = ACTIONS(1384),
    [sym_comment] = ACTIONS(5),
  },
  [536] = {
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_RPAREN] = ACTIONS(1386),
    [sym_comment] = ACTIONS(5),
  },
  [537] = {
    [sym__identifier] = STATE(568),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [anon_sym_DOT_DOT] = ACTIONS(1388),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [538] = {
    [anon_sym_LPAREN] = ACTIONS(1390),
    [anon_sym_COMMA] = ACTIONS(1392),
    [anon_sym_RPAREN] = ACTIONS(1392),
    [sym_comment] = ACTIONS(5),
  },
  [539] = {
    [anon_sym_RPAREN] = ACTIONS(1386),
    [sym_comment] = ACTIONS(5),
  },
  [540] = {
    [aux_sym_export_repeat1] = STATE(570),
    [anon_sym_COMMA] = ACTIONS(423),
    [anon_sym_RPAREN] = ACTIONS(1386),
    [sym_comment] = ACTIONS(5),
  },
  [541] = {
    [sym__layout_semicolon] = ACTIONS(1394),
    [anon_sym_SEMI] = ACTIONS(1396),
    [sym_comment] = ACTIONS(5),
  },
  [542] = {
    [sym__layout_semicolon] = ACTIONS(1398),
    [anon_sym_SEMI] = ACTIONS(1400),
    [sym_comment] = ACTIONS(5),
  },
  [543] = {
    [anon_sym_RBRACE] = ACTIONS(1402),
    [anon_sym_COMMA] = ACTIONS(1402),
    [sym_comment] = ACTIONS(5),
  },
  [544] = {
    [sym__layout_semicolon] = ACTIONS(1404),
    [anon_sym_SEMI] = ACTIONS(1406),
    [anon_sym_PIPE] = ACTIONS(1406),
    [anon_sym_deriving] = ACTIONS(1406),
    [sym_comment] = ACTIONS(5),
  },
  [545] = {
    [sym_field] = STATE(571),
    [sym_variable_identifier] = STATE(386),
    [sym__variable_pattern] = ACTIONS(625),
    [sym_comment] = ACTIONS(5),
  },
  [546] = {
    [anon_sym_COMMA] = ACTIONS(1408),
    [anon_sym_COLON_COLON] = ACTIONS(1408),
    [sym_comment] = ACTIONS(5),
  },
  [547] = {
    [sym__identifier] = STATE(572),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [548] = {
    [anon_sym_RBRACE] = ACTIONS(1410),
    [anon_sym_COMMA] = ACTIONS(1410),
    [sym_comment] = ACTIONS(5),
  },
  [549] = {
    [sym_variable_identifier] = STATE(573),
    [sym__variable_pattern] = ACTIONS(625),
    [sym_comment] = ACTIONS(5),
  },
  [550] = {
    [sym_strict] = STATE(574),
    [sym__identifier] = STATE(574),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [anon_sym_BANG] = ACTIONS(1291),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [551] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1412),
  },
  [552] = {
    [sym__layout_semicolon] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(297),
    [sym__variable_pattern] = ACTIONS(297),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [sym__integer_literal] = ACTIONS(297),
    [sym__octal_literal] = ACTIONS(297),
    [sym__hexidecimal_literal] = ACTIONS(297),
  },
  [553] = {
    [sym__gap] = STATE(165),
    [sym__graphic] = STATE(165),
    [sym__small] = STATE(72),
    [sym__large] = STATE(72),
    [sym__symbol] = STATE(72),
    [sym__special] = STATE(72),
    [sym__escape] = STATE(165),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(319),
    [anon_sym_DQUOTE] = ACTIONS(1414),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(109),
    [sym__ascii_large] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_1] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(119),
    [sym__space] = ACTIONS(121),
    [sym__newline] = ACTIONS(121),
    [sym__tab] = ACTIONS(121),
    [sym__vertical_tab] = ACTIONS(121),
  },
  [554] = {
    [sym__layout_semicolon] = ACTIONS(1125),
    [anon_sym_SEMI] = ACTIONS(1127),
    [sym__variable_pattern] = ACTIONS(1127),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1129),
    [anon_sym_SQUOTE] = ACTIONS(1127),
    [anon_sym_DQUOTE] = ACTIONS(1127),
    [sym__integer_literal] = ACTIONS(1127),
    [sym__octal_literal] = ACTIONS(1127),
    [sym__hexidecimal_literal] = ACTIONS(1127),
  },
  [555] = {
    [anon_sym_RBRACE] = ACTIONS(1416),
    [anon_sym_COMMA] = ACTIONS(1416),
    [sym_comment] = ACTIONS(5),
  },
  [556] = {
    [anon_sym_LPAREN] = ACTIONS(1350),
    [anon_sym_COMMA] = ACTIONS(1350),
    [anon_sym_RPAREN] = ACTIONS(1350),
    [anon_sym_LBRACK] = ACTIONS(1350),
    [anon_sym_RBRACK] = ACTIONS(1350),
    [anon_sym_DASH_GT] = ACTIONS(1350),
    [sym_unit_type] = ACTIONS(1350),
    [sym_list_constructor] = ACTIONS(1350),
    [sym_function_constructor] = ACTIONS(1350),
    [sym__variable_pattern] = ACTIONS(1350),
    [sym__constructor_pattern] = ACTIONS(1418),
    [sym_module_identifier] = ACTIONS(1418),
    [sym_comment] = ACTIONS(5),
  },
  [557] = {
    [anon_sym_LPAREN] = ACTIONS(1360),
    [anon_sym_COMMA] = ACTIONS(1360),
    [anon_sym_RPAREN] = ACTIONS(1360),
    [anon_sym_LBRACK] = ACTIONS(1360),
    [anon_sym_RBRACK] = ACTIONS(1360),
    [anon_sym_DASH_GT] = ACTIONS(1360),
    [sym_unit_type] = ACTIONS(1360),
    [sym_list_constructor] = ACTIONS(1360),
    [sym_function_constructor] = ACTIONS(1360),
    [sym__variable_pattern] = ACTIONS(1360),
    [sym__constructor_pattern] = ACTIONS(1420),
    [sym_module_identifier] = ACTIONS(1420),
    [sym_comment] = ACTIONS(5),
  },
  [558] = {
    [sym_variable_identifier] = STATE(269),
    [anon_sym_LPAREN] = ACTIONS(1372),
    [anon_sym_COMMA] = ACTIONS(1372),
    [anon_sym_RPAREN] = ACTIONS(1372),
    [anon_sym_LBRACK] = ACTIONS(1372),
    [anon_sym_RBRACK] = ACTIONS(1372),
    [anon_sym_DASH_GT] = ACTIONS(1372),
    [sym_unit_type] = ACTIONS(1372),
    [sym_list_constructor] = ACTIONS(1372),
    [sym_function_constructor] = ACTIONS(1372),
    [sym__variable_pattern] = ACTIONS(253),
    [sym__constructor_pattern] = ACTIONS(1422),
    [sym_module_identifier] = ACTIONS(1422),
    [sym_comment] = ACTIONS(5),
  },
  [559] = {
    [sym_variable_identifier] = STATE(151),
    [aux_sym_type_class_repeat1] = STATE(577),
    [anon_sym_LPAREN] = ACTIONS(1372),
    [anon_sym_COMMA] = ACTIONS(1372),
    [anon_sym_RPAREN] = ACTIONS(1372),
    [anon_sym_LBRACK] = ACTIONS(1372),
    [anon_sym_RBRACK] = ACTIONS(1372),
    [anon_sym_DASH_GT] = ACTIONS(1372),
    [sym_unit_type] = ACTIONS(1372),
    [sym_list_constructor] = ACTIONS(1372),
    [sym_function_constructor] = ACTIONS(1372),
    [sym__variable_pattern] = ACTIONS(253),
    [sym__constructor_pattern] = ACTIONS(1422),
    [sym_module_identifier] = ACTIONS(1422),
    [sym_comment] = ACTIONS(5),
  },
  [560] = {
    [anon_sym_COMMA] = ACTIONS(1424),
    [anon_sym_RPAREN] = ACTIONS(1424),
    [sym_comment] = ACTIONS(5),
  },
  [561] = {
    [anon_sym_LPAREN] = ACTIONS(1426),
    [anon_sym_LBRACK] = ACTIONS(1426),
    [sym_unit_type] = ACTIONS(1426),
    [sym_list_constructor] = ACTIONS(1426),
    [sym_function_constructor] = ACTIONS(1426),
    [sym__variable_pattern] = ACTIONS(1426),
    [sym__constructor_pattern] = ACTIONS(1265),
    [sym_module_identifier] = ACTIONS(1265),
    [sym_comment] = ACTIONS(5),
  },
  [562] = {
    [sym_variable_identifier] = STATE(449),
    [sym__layout_semicolon] = ACTIONS(1428),
    [anon_sym_SEMI] = ACTIONS(1430),
    [anon_sym_DASH_GT] = ACTIONS(1430),
    [sym__variable_pattern] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
  },
  [563] = {
    [anon_sym_COMMA] = ACTIONS(1432),
    [anon_sym_RPAREN] = ACTIONS(1432),
    [sym_comment] = ACTIONS(5),
  },
  [564] = {
    [sym__layout_semicolon] = ACTIONS(1434),
    [anon_sym_SEMI] = ACTIONS(1436),
    [sym_comment] = ACTIONS(5),
  },
  [565] = {
    [anon_sym_COMMA] = ACTIONS(1003),
    [anon_sym_RPAREN] = ACTIONS(1438),
    [sym_comment] = ACTIONS(5),
  },
  [566] = {
    [aux_sym_import_specification_repeat1] = STATE(579),
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_RPAREN] = ACTIONS(1438),
    [sym_comment] = ACTIONS(5),
  },
  [567] = {
    [anon_sym_RPAREN] = ACTIONS(1440),
    [sym_comment] = ACTIONS(5),
  },
  [568] = {
    [aux_sym_export_repeat1] = STATE(581),
    [anon_sym_COMMA] = ACTIONS(423),
    [anon_sym_RPAREN] = ACTIONS(1440),
    [sym_comment] = ACTIONS(5),
  },
  [569] = {
    [sym__identifier] = STATE(583),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(94),
    [anon_sym_DOT_DOT] = ACTIONS(1442),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [570] = {
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_RPAREN] = ACTIONS(1444),
    [sym_comment] = ACTIONS(5),
  },
  [571] = {
    [anon_sym_RBRACE] = ACTIONS(1446),
    [anon_sym_COMMA] = ACTIONS(1446),
    [sym_comment] = ACTIONS(5),
  },
  [572] = {
    [anon_sym_RBRACE] = ACTIONS(1067),
    [anon_sym_COMMA] = ACTIONS(1067),
    [sym_comment] = ACTIONS(5),
  },
  [573] = {
    [anon_sym_COMMA] = ACTIONS(1448),
    [anon_sym_COLON_COLON] = ACTIONS(1448),
    [sym_comment] = ACTIONS(5),
  },
  [574] = {
    [anon_sym_RBRACE] = ACTIONS(1450),
    [anon_sym_COMMA] = ACTIONS(1450),
    [sym_comment] = ACTIONS(5),
  },
  [575] = {
    [sym__layout_semicolon] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(519),
    [sym__variable_pattern] = ACTIONS(519),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(521),
    [anon_sym_SQUOTE] = ACTIONS(519),
    [anon_sym_DQUOTE] = ACTIONS(519),
    [sym__integer_literal] = ACTIONS(519),
    [sym__octal_literal] = ACTIONS(519),
    [sym__hexidecimal_literal] = ACTIONS(519),
  },
  [576] = {
    [sym__layout_semicolon] = ACTIONS(549),
    [anon_sym_SEMI] = ACTIONS(551),
    [sym__variable_pattern] = ACTIONS(551),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(553),
    [anon_sym_SQUOTE] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(551),
    [sym__integer_literal] = ACTIONS(551),
    [sym__octal_literal] = ACTIONS(551),
    [sym__hexidecimal_literal] = ACTIONS(551),
  },
  [577] = {
    [sym_variable_identifier] = STATE(269),
    [anon_sym_LPAREN] = ACTIONS(1430),
    [anon_sym_COMMA] = ACTIONS(1430),
    [anon_sym_RPAREN] = ACTIONS(1430),
    [anon_sym_LBRACK] = ACTIONS(1430),
    [anon_sym_RBRACK] = ACTIONS(1430),
    [anon_sym_DASH_GT] = ACTIONS(1430),
    [sym_unit_type] = ACTIONS(1430),
    [sym_list_constructor] = ACTIONS(1430),
    [sym_function_constructor] = ACTIONS(1430),
    [sym__variable_pattern] = ACTIONS(253),
    [sym__constructor_pattern] = ACTIONS(1452),
    [sym_module_identifier] = ACTIONS(1452),
    [sym_comment] = ACTIONS(5),
  },
  [578] = {
    [sym__layout_semicolon] = ACTIONS(1454),
    [anon_sym_SEMI] = ACTIONS(1456),
    [sym_comment] = ACTIONS(5),
  },
  [579] = {
    [anon_sym_COMMA] = ACTIONS(1003),
    [anon_sym_RPAREN] = ACTIONS(1458),
    [sym_comment] = ACTIONS(5),
  },
  [580] = {
    [anon_sym_COMMA] = ACTIONS(1460),
    [anon_sym_RPAREN] = ACTIONS(1460),
    [sym_comment] = ACTIONS(5),
  },
  [581] = {
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_RPAREN] = ACTIONS(1462),
    [sym_comment] = ACTIONS(5),
  },
  [582] = {
    [anon_sym_RPAREN] = ACTIONS(1462),
    [sym_comment] = ACTIONS(5),
  },
  [583] = {
    [aux_sym_export_repeat1] = STATE(587),
    [anon_sym_COMMA] = ACTIONS(423),
    [anon_sym_RPAREN] = ACTIONS(1462),
    [sym_comment] = ACTIONS(5),
  },
  [584] = {
    [aux_sym_import_specification_repeat1] = STATE(588),
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_RPAREN] = ACTIONS(1458),
    [sym_comment] = ACTIONS(5),
  },
  [585] = {
    [sym__layout_semicolon] = ACTIONS(1464),
    [anon_sym_SEMI] = ACTIONS(1466),
    [sym_comment] = ACTIONS(5),
  },
  [586] = {
    [anon_sym_COMMA] = ACTIONS(1468),
    [anon_sym_RPAREN] = ACTIONS(1468),
    [sym_comment] = ACTIONS(5),
  },
  [587] = {
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_RPAREN] = ACTIONS(1470),
    [sym_comment] = ACTIONS(5),
  },
  [588] = {
    [anon_sym_COMMA] = ACTIONS(1003),
    [anon_sym_RPAREN] = ACTIONS(1472),
    [sym_comment] = ACTIONS(5),
  },
  [589] = {
    [anon_sym_COMMA] = ACTIONS(1474),
    [anon_sym_RPAREN] = ACTIONS(1474),
    [sym_comment] = ACTIONS(5),
  },
  [590] = {
    [sym__layout_semicolon] = ACTIONS(1476),
    [anon_sym_SEMI] = ACTIONS(1478),
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
  [31] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(29),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [57] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [69] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_identifier, 1),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_identifier, 1),
  [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_identifier, 1),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_identifier, 1),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_identifier, 1),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [87] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [93] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_head, 1),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(85),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(86),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable, 1, .fragile = true),
  [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(102),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(103),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign_import, 1),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_identifier, 1),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(117),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable_symbol, 1),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable_symbol, 1),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 1),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(135),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [247] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(141),
  [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(145),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_variable_identifier, 2),
  [261] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(152),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [275] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(153),
  [277] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(154),
  [279] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(155),
  [281] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(156),
  [283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(157),
  [285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(158),
  [287] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [289] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [293] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(159),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(160),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(162),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(163),
  [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(165),
  [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
  [327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 1),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 1),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(169),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_declaration, 2),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_declaration, 2),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
  [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(178),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [351] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(186),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_wildcard, 1),
  [355] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_wildcard, 1),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 1),
  [359] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 1),
  [361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(189),
  [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(190),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 1),
  [367] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 1),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_head, 2),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [383] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(198),
  [385] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(199),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 3),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_calling_convention, 1),
  [413] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_calling_convention, 1),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 3),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 3),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [431] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 3),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 3),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [445] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 3),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 3),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__constructor_symbol, 1),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__constructor_symbol, 1),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(247),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [485] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(253),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [509] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
  [515] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(271),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [521] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [527] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(273),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(275),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [535] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [537] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [539] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(279),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(283),
  [545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [547] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [553] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(286),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 2),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 2),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [567] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 1),
  [575] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(295),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 1),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [593] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(305),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(306),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_irrefutable_pattern, 2),
  [601] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_irrefutable_pattern, 2),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(310),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(311),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(312),
  [609] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(313),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(315),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 2),
  [615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 2),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(319),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(320),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(321),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [627] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(323),
  [629] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(324),
  [631] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(330),
  [633] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(331),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__generic_type_constructor, 1),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [643] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(339),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(340),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(343),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(345),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(346),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 3),
  [673] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(347),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(350),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_where, 2),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(355),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(357),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_safety, 1),
  [711] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_safety, 1),
  [713] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(362),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 4),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 4),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 4),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 4),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(367),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(368),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(370),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(372),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(374),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(375),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_where, 2),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [747] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 4),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 4),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(384),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [793] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(336),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(392),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(393),
  [825] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [827] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [829] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [831] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [833] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(394),
  [835] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [837] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(395),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
  [841] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(397),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(396),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [849] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 1),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 1),
  [857] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 1),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_constructor, 2),
  [861] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_constructor, 2),
  [863] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_general_constructor, 2),
  [865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 3),
  [867] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 3),
  [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [871] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 2),
  [873] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [875] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_pattern, 3),
  [877] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_pattern, 3),
  [879] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable_symbol, 1),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(410),
  [883] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [885] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [887] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(417),
  [891] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(418),
  [893] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(419),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list_pattern, 3),
  [897] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list_pattern, 3),
  [899] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_as_pattern, 3),
  [901] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_as_pattern, 3),
  [903] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label_pattern, 3),
  [905] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_label_pattern, 3),
  [907] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(421),
  [909] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 1),
  [911] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(422),
  [913] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(424),
  [915] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(425),
  [917] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(427),
  [919] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(428),
  [921] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [923] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(432),
  [925] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(435),
  [927] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(436),
  [929] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(438),
  [931] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(439),
  [933] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(441),
  [935] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [937] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [939] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(442),
  [941] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(443),
  [943] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 1),
  [945] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 1),
  [947] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(445),
  [949] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [951] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(446),
  [953] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [955] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(447),
  [957] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [959] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [961] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(450),
  [963] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [965] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [967] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(453),
  [969] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [971] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [973] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [975] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [977] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(457),
  [979] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(458),
  [981] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(459),
  [983] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declarations, 2),
  [985] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(461),
  [987] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(461),
  [989] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(462),
  [991] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(462),
  [993] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [995] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [997] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(465),
  [999] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [1001] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [1003] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(468),
  [1005] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(469),
  [1007] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(470),
  [1009] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(472),
  [1011] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 5),
  [1013] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 5),
  [1015] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [1017] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 5),
  [1019] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 5),
  [1021] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [1023] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [1025] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(476),
  [1027] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [1029] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [1031] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [1033] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declarations, 2),
  [1035] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(477),
  [1037] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(477),
  [1039] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 5),
  [1041] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 5),
  [1043] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1045] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1047] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [1049] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [1051] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(479),
  [1053] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1055] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1057] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(482),
  [1059] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(483),
  [1061] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(485),
  [1063] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(486),
  [1065] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [1067] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [1069] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [1071] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1073] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1075] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1077] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [1079] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [1081] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [1083] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [1085] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [1087] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [1089] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [1091] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [1093] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [1095] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [1097] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [1099] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(489),
  [1101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(489),
  [1103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [1105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [1107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [1109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(490),
  [1111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(491),
  [1113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(492),
  [1115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(493),
  [1117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(496),
  [1119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(498),
  [1121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(498),
  [1123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(496),
  [1125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1129] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(500),
  [1133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_pattern_repeat1, 2),
  [1135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(501),
  [1137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__constructor_symbol, 1),
  [1139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [1141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [1143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 3),
  [1145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [1147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [1149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple_pattern, 4),
  [1151] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple_pattern, 4),
  [1153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(506),
  [1155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label_pattern, 4),
  [1157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_label_pattern, 4),
  [1159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 2),
  [1161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(508),
  [1163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(510),
  [1165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(512),
  [1167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 1),
  [1169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 3),
  [1173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(514),
  [1175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(515),
  [1177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(516),
  [1179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [1181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [1183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(519),
  [1185] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1188] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(521),
  [1193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(522),
  [1195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(524),
  [1197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(525),
  [1199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(527),
  [1201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
  [1205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 2),
  [1207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 2),
  [1209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(529),
  [1219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3),
  [1223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [1229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [1231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(532),
  [1233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declarations, 3),
  [1235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(534),
  [1237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(534),
  [1239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [1241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [1243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(535),
  [1245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(537),
  [1247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [1249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [1251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [1253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(539),
  [1255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(541),
  [1257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 6),
  [1259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 6),
  [1261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [1263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [1265] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [1267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declarations, 3),
  [1269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [1271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [1273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [1275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [1277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(542),
  [1279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [1285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [1287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(544),
  [1289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(545),
  [1291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(547),
  [1293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(549),
  [1295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(550),
  [1297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [1299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [1301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [1303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [1305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [1307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(551),
  [1309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(552),
  [1311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [1313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [1315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [1317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [1319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [1321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [1323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_negative_literal, 4),
  [1325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [1327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [1329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [1331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_pattern_repeat1, 3),
  [1333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 2),
  [1335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label, 3),
  [1337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(556),
  [1341] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1344] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(557),
  [1346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 2),
  [1348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 4),
  [1352] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1354] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [1358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 4),
  [1362] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [1366] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(561),
  [1368] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1372] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1374] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [1380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [1382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(563),
  [1384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(564),
  [1386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(566),
  [1388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(567),
  [1390] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(569),
  [1392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [1394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [1396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [1398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [1400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [1402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [1404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [1408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [1410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [1412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(575),
  [1414] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(576),
  [1416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 3),
  [1418] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1420] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1422] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 3),
  [1426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [1428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1432] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [1434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [1436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [1438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(578),
  [1440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(580),
  [1442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(582),
  [1444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(584),
  [1446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [1448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [1450] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [1452] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [1456] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [1458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(585),
  [1460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [1462] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(586),
  [1464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [1466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [1468] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [1470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(589),
  [1472] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(590),
  [1474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [1476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
