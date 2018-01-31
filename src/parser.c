#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 735
#define SYMBOL_COUNT 237
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
  sym_as_pattern = 151,
  sym_labels = 152,
  sym_label = 153,
  sym_wildcard = 154,
  sym__variable = 155,
  sym_qualified_variable_identifier = 156,
  sym__expression = 157,
  sym_foreign = 158,
  sym_foreign_import = 159,
  sym_calling_convention = 160,
  sym_safety = 161,
  sym_default = 162,
  sym_do_expression = 163,
  sym_statement_list = 164,
  sym__statement = 165,
  sym_type_class = 166,
  sym_type_class_instance = 167,
  sym_fixity = 168,
  sym__op = 169,
  sym_variable_symbol = 170,
  sym_constructor_symbol = 171,
  sym_type_signature = 172,
  sym_type = 173,
  sym__generic_type_constructor = 174,
  sym_tupling_constructor = 175,
  sym_tuple = 176,
  sym_list = 177,
  sym_parenthesized_constructor = 178,
  sym_algebraic_datatype = 179,
  sym_context = 180,
  sym_constructors = 181,
  sym_constructor = 182,
  sym_deriving = 183,
  sym_newtype = 184,
  sym_field = 185,
  sym_strict = 186,
  sym_type_synonym = 187,
  sym__literal = 188,
  sym__identifier = 189,
  sym_variable_identifier = 190,
  sym_constructor_identifier = 191,
  sym__type_constructors = 192,
  sym_qualified_type_constructor = 193,
  sym_integer = 194,
  sym_char = 195,
  sym_string = 196,
  sym__gap = 197,
  sym__graphic = 198,
  sym__small = 199,
  sym__large = 200,
  sym__symbol = 201,
  sym__variable_symbol = 202,
  sym__constructor_symbol = 203,
  sym__special = 204,
  sym__escape = 205,
  sym__char_escape = 206,
  sym__ascii = 207,
  sym__cntrl = 208,
  sym_fields = 209,
  aux_sym_module_repeat1 = 210,
  aux_sym_module_exports_repeat1 = 211,
  aux_sym_export_repeat1 = 212,
  aux_sym_import_specification_repeat1 = 213,
  aux_sym_function_head_repeat1 = 214,
  aux_sym_function_body_repeat1 = 215,
  aux_sym_tuple_pattern_repeat1 = 216,
  aux_sym_labels_repeat1 = 217,
  aux_sym_statement_list_repeat1 = 218,
  aux_sym_fixity_repeat1 = 219,
  aux_sym_variable_symbol_repeat1 = 220,
  aux_sym_constructor_symbol_repeat1 = 221,
  aux_sym_tupling_constructor_repeat1 = 222,
  aux_sym_tuple_repeat1 = 223,
  aux_sym_list_repeat1 = 224,
  aux_sym_context_repeat1 = 225,
  aux_sym_constructors_repeat1 = 226,
  aux_sym_constructor_repeat1 = 227,
  aux_sym_constructor_repeat2 = 228,
  aux_sym_constructor_repeat3 = 229,
  aux_sym_field_repeat1 = 230,
  aux_sym__type_constructors_repeat1 = 231,
  aux_sym_qualified_type_constructor_repeat1 = 232,
  aux_sym_string_repeat1 = 233,
  aux_sym__escape_repeat1 = 234,
  aux_sym__escape_repeat2 = 235,
  aux_sym_fields_repeat1 = 236,
  alias_sym_type_constructor = 237,
  alias_sym_type_variable = 238,
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
  [sym_constructors] = "constructors",
  [sym_constructor] = "constructor",
  [sym_deriving] = "deriving",
  [sym_newtype] = "newtype",
  [sym_field] = "field",
  [sym_strict] = "strict",
  [sym_type_synonym] = "type_synonym",
  [sym__literal] = "_literal",
  [sym__identifier] = "_identifier",
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
  [aux_sym_labels_repeat1] = "labels_repeat1",
  [aux_sym_statement_list_repeat1] = "statement_list_repeat1",
  [aux_sym_fixity_repeat1] = "fixity_repeat1",
  [aux_sym_variable_symbol_repeat1] = "variable_symbol_repeat1",
  [aux_sym_constructor_symbol_repeat1] = "constructor_symbol_repeat1",
  [aux_sym_tupling_constructor_repeat1] = "tupling_constructor_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_context_repeat1] = "context_repeat1",
  [aux_sym_constructors_repeat1] = "constructors_repeat1",
  [aux_sym_constructor_repeat1] = "constructor_repeat1",
  [aux_sym_constructor_repeat2] = "constructor_repeat2",
  [aux_sym_constructor_repeat3] = "constructor_repeat3",
  [aux_sym_field_repeat1] = "field_repeat1",
  [aux_sym__type_constructors_repeat1] = "_type_constructors_repeat1",
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
  [aux_sym_labels_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_list_repeat1] = {
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
  [aux_sym_constructor_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constructor_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__type_constructors_repeat1] = {
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

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_type_constructor,
  },
  [2] = {
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '\\')
        SKIP(266);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'c')
        ADVANCE(267);
      if (lookahead == 'd')
        ADVANCE(273);
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
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(181);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(194);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'c')
        ADVANCE(195);
      if (lookahead == 'd')
        ADVANCE(201);
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
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(182);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
      ACCEPT_TOKEN(anon_sym_DASH);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 194:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(202);
      if (lookahead == 'e')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
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
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
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
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(196);
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
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '\\')
        SKIP(266);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'c')
        ADVANCE(267);
      if (lookahead == 'd')
        ADVANCE(273);
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
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(181);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_DASH);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 266:
      if (lookahead == 'n')
        SKIP(181);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'l')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'a')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 's')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 's')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'a')
        ADVANCE(274);
      if (lookahead == 'e')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 't')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'a')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'f')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'a')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'u')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'l')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 't')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'o')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'r')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'i')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'g')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'n')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'm')
        ADVANCE(291);
      if (lookahead == 'n')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'p')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'o')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'r')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 't')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'f')
        ADVANCE(297);
      if (lookahead == 's')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'i')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'x')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'l')
        ADVANCE(300);
      if (lookahead == 'r')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 't')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'a')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'n')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'c')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'o')
        ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'd')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'u')
        ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'l')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'w')
        ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 't')
        ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'y')
        ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'p')
        ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'y')
        ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'p')
        ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
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
        ADVANCE(340);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '\\')
        SKIP(342);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == 'q')
        ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(326);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(352);
      END_STATE();
    case 327:
      if (lookahead == '\n')
        ADVANCE(327);
      if (lookahead == '\r')
        ADVANCE(327);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '\\')
        ADVANCE(329);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == 'q')
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(339);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 328:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 329:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(327);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 330:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(331);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 331:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(332);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 332:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(333);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 333:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(334);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 334:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(335);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 335:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(336);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 336:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(337);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 337:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(338);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(339);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(339);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 340:
      if (lookahead == '\n')
        ADVANCE(327);
      if (lookahead == '\r')
        ADVANCE(340);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '\\')
        SKIP(342);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == 'q')
        ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(326);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(352);
      END_STATE();
    case 341:
      if (lookahead == '-')
        ADVANCE(29);
      END_STATE();
    case 342:
      if (lookahead == 'n')
        SKIP(326);
      END_STATE();
    case 343:
      if (lookahead == 'u')
        ADVANCE(344);
      END_STATE();
    case 344:
      if (lookahead == 'a')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'l')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'i')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'f')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == 'i')
        ADVANCE(349);
      END_STATE();
    case 349:
      if (lookahead == 'e')
        ADVANCE(350);
      END_STATE();
    case 350:
      if (lookahead == 'd')
        ADVANCE(351);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_qualified);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(352);
      if (lookahead == '.')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(352);
      END_STATE();
    case 353:
      if (lookahead == '\n')
        ADVANCE(354);
      if (lookahead == '\r')
        ADVANCE(404);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(407);
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
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(353);
      END_STATE();
    case 354:
      if (lookahead == '\n')
        ADVANCE(354);
      if (lookahead == '\r')
        ADVANCE(354);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(355);
      if (lookahead == ':')
        ADVANCE(356);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(357);
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(354);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 355:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 356:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 357:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(354);
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
        ADVANCE(354);
      if (lookahead == '\r')
        ADVANCE(404);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(407);
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
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(353);
      END_STATE();
    case 405:
      if (lookahead == '-')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(115);
      END_STATE();
    case 406:
      if (lookahead == ':')
        ADVANCE(120);
      END_STATE();
    case 407:
      if (lookahead == 'n')
        SKIP(353);
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
        ADVANCE(459);
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
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(460);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(462);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(454);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 455:
      if (lookahead == '\n')
        ADVANCE(455);
      if (lookahead == '\r')
        ADVANCE(455);
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
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(456);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(39);
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
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(455);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(457);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
      if (lookahead == '\n')
        ADVANCE(455);
      if (lookahead == '\r')
        ADVANCE(459);
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
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(460);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(462);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(454);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 460:
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
        ADVANCE(461);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(461);
      END_STATE();
    case 462:
      if (lookahead == 'n')
        SKIP(454);
      END_STATE();
    case 463:
      if (lookahead == '\n')
        ADVANCE(464);
      if (lookahead == '\r')
        ADVANCE(467);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(468);
      if (lookahead == '_')
        ADVANCE(469);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(463);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 464:
      if (lookahead == '\n')
        ADVANCE(464);
      if (lookahead == '\r')
        ADVANCE(464);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(355);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(356);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(465);
      if (lookahead == '_')
        ADVANCE(466);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(464);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 465:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(464);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 467:
      if (lookahead == '\n')
        ADVANCE(464);
      if (lookahead == '\r')
        ADVANCE(467);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(468);
      if (lookahead == '_')
        ADVANCE(469);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(463);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 468:
      if (lookahead == 'n')
        SKIP(463);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 470:
      if (lookahead == '\n')
        ADVANCE(471);
      if (lookahead == '\r')
        ADVANCE(473);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(474);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(470);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 471:
      if (lookahead == '\n')
        ADVANCE(471);
      if (lookahead == '\r')
        ADVANCE(471);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ':')
        ADVANCE(356);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(471);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 472:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(471);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 473:
      if (lookahead == '\n')
        ADVANCE(471);
      if (lookahead == '\r')
        ADVANCE(473);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(474);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(470);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 474:
      if (lookahead == 'n')
        SKIP(470);
      END_STATE();
    case 475:
      if (lookahead == '\n')
        ADVANCE(476);
      if (lookahead == '\r')
        ADVANCE(486);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(487);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(475);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
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
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(477);
      if (lookahead == 'd')
        ADVANCE(478);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(476);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(479);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 479:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(480);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 480:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(481);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 481:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(482);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 482:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(483);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 483:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(484);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 484:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(485);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 486:
      if (lookahead == '\n')
        ADVANCE(476);
      if (lookahead == '\r')
        ADVANCE(486);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(487);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(475);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 487:
      if (lookahead == 'n')
        SKIP(475);
      END_STATE();
    case 488:
      if (lookahead == 'e')
        ADVANCE(489);
      END_STATE();
    case 489:
      if (lookahead == 'r')
        ADVANCE(490);
      END_STATE();
    case 490:
      if (lookahead == 'i')
        ADVANCE(491);
      END_STATE();
    case 491:
      if (lookahead == 'v')
        ADVANCE(492);
      END_STATE();
    case 492:
      if (lookahead == 'i')
        ADVANCE(493);
      END_STATE();
    case 493:
      if (lookahead == 'n')
        ADVANCE(494);
      END_STATE();
    case 494:
      if (lookahead == 'g')
        ADVANCE(495);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_deriving);
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
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
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
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
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
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
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
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
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
        ADVANCE(341);
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
        ADVANCE(328);
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
        ADVANCE(341);
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
        ADVANCE(255);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
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
        ADVANCE(469);
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
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
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
        ADVANCE(466);
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
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
        ADVANCE(255);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
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
        ADVANCE(469);
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
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
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
        ADVANCE(341);
      if (lookahead == ':')
        ADVANCE(406);
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
        ADVANCE(328);
      if (lookahead == ':')
        ADVANCE(356);
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
        ADVANCE(341);
      if (lookahead == ':')
        ADVANCE(406);
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
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(534);
      if (lookahead == '_')
        ADVANCE(469);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(530);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
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
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(356);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(532);
      if (lookahead == '_')
        ADVANCE(466);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(531);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(534);
      if (lookahead == '_')
        ADVANCE(469);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(530);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 534:
      if (lookahead == 'n')
        SKIP(530);
      END_STATE();
    case 535:
      if (lookahead == '\n')
        ADVANCE(536);
      if (lookahead == '\r')
        ADVANCE(546);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(547);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(535);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 536:
      if (lookahead == '\n')
        ADVANCE(536);
      if (lookahead == '\r')
        ADVANCE(536);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ':')
        ADVANCE(356);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(537);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(536);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 546:
      if (lookahead == '\n')
        ADVANCE(536);
      if (lookahead == '\r')
        ADVANCE(546);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(547);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(535);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 547:
      if (lookahead == 'n')
        SKIP(535);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'r')
        ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'i')
        ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'v')
        ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'i')
        ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'n')
        ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'g')
        ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 556:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(557);
      if (lookahead == '\r')
        ADVANCE(559);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(560);
      if (lookahead == 'c')
        ADVANCE(267);
      if (lookahead == 'd')
        ADVANCE(273);
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
        SKIP(556);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 557:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(557);
      if (lookahead == '\r')
        ADVANCE(557);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(558);
      if (lookahead == 'c')
        ADVANCE(195);
      if (lookahead == 'd')
        ADVANCE(201);
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
        ADVANCE(557);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      ADVANCE(8);
      END_STATE();
    case 558:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(557);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 559:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(557);
      if (lookahead == '\r')
        ADVANCE(559);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(560);
      if (lookahead == 'c')
        ADVANCE(267);
      if (lookahead == 'd')
        ADVANCE(273);
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
        SKIP(556);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 560:
      if (lookahead == 'n')
        SKIP(556);
      END_STATE();
    case 561:
      if (lookahead == '\n')
        ADVANCE(562);
      if (lookahead == '\r')
        ADVANCE(572);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(573);
      if (lookahead == 'a')
        ADVANCE(574);
      if (lookahead == 'h')
        ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(561);
      END_STATE();
    case 562:
      if (lookahead == '\n')
        ADVANCE(562);
      if (lookahead == '\r')
        ADVANCE(562);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(563);
      if (lookahead == 'a')
        ADVANCE(564);
      if (lookahead == 'h')
        ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(562);
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(565);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
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
      if (lookahead == 'd')
        ADVANCE(568);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 568:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(569);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 569:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(570);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 570:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(571);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 572:
      if (lookahead == '\n')
        ADVANCE(562);
      if (lookahead == '\r')
        ADVANCE(572);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(573);
      if (lookahead == 'a')
        ADVANCE(574);
      if (lookahead == 'h')
        ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(561);
      END_STATE();
    case 573:
      if (lookahead == 'n')
        SKIP(561);
      END_STATE();
    case 574:
      if (lookahead == 's')
        ADVANCE(575);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 576:
      if (lookahead == 'i')
        ADVANCE(577);
      END_STATE();
    case 577:
      if (lookahead == 'd')
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
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 582:
      if (lookahead == '\n')
        ADVANCE(583);
      if (lookahead == '\r')
        ADVANCE(590);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(591);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(592);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(582);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 583:
      if (lookahead == '\n')
        ADVANCE(583);
      if (lookahead == '\r')
        ADVANCE(583);
      if (lookahead == '!')
        ADVANCE(9);
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
        ADVANCE(355);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(356);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(584);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'w')
        ADVANCE(585);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(583);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 584:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(583);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 590:
      if (lookahead == '\n')
        ADVANCE(583);
      if (lookahead == '\r')
        ADVANCE(590);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(591);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(592);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(582);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 591:
      if (lookahead == 'n')
        SKIP(582);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'h')
        ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'r')
        ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 597:
      if (lookahead == '\n')
        ADVANCE(598);
      if (lookahead == '\r')
        ADVANCE(600);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(601);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(597);
      END_STATE();
    case 598:
      if (lookahead == '\n')
        ADVANCE(598);
      if (lookahead == '\r')
        ADVANCE(598);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(599);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 8902)
        ADVANCE(87);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(601);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
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
        ADVANCE(605);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(606);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(602);
      END_STATE();
    case 603:
      if (lookahead == '\n')
        ADVANCE(603);
      if (lookahead == '\r')
        ADVANCE(603);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(604);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 8902)
        ADVANCE(87);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(606);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
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
        ADVANCE(610);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(611);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(469);
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
        SKIP(607);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 608:
      if (lookahead == '\n')
        ADVANCE(608);
      if (lookahead == '\r')
        ADVANCE(608);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(609);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(466);
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
        ADVANCE(608);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
      if (lookahead == '\n')
        ADVANCE(608);
      if (lookahead == '\r')
        ADVANCE(610);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(611);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(469);
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
        SKIP(607);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 611:
      if (lookahead == 'n')
        SKIP(607);
      END_STATE();
    case 612:
      if (lookahead == '\n')
        ADVANCE(613);
      if (lookahead == '\r')
        ADVANCE(615);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(612);
      END_STATE();
    case 613:
      if (lookahead == '\n')
        ADVANCE(613);
      if (lookahead == '\r')
        ADVANCE(613);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(614);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(613);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 614:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(613);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 615:
      if (lookahead == '\n')
        ADVANCE(613);
      if (lookahead == '\r')
        ADVANCE(615);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(612);
      END_STATE();
    case 616:
      if (lookahead == 'n')
        SKIP(612);
      END_STATE();
    case 617:
      if (lookahead == '\n')
        ADVANCE(618);
      if (lookahead == '\r')
        ADVANCE(620);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(621);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(617);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 618:
      if (lookahead == '\n')
        ADVANCE(618);
      if (lookahead == '\r')
        ADVANCE(618);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(619);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(618);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 619:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(618);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 620:
      if (lookahead == '\n')
        ADVANCE(618);
      if (lookahead == '\r')
        ADVANCE(620);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(621);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(617);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 621:
      if (lookahead == 'n')
        SKIP(617);
      END_STATE();
    case 622:
      if (lookahead == '\n')
        ADVANCE(623);
      if (lookahead == '\r')
        ADVANCE(625);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(626);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(622);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 623:
      if (lookahead == '\n')
        ADVANCE(623);
      if (lookahead == '\r')
        ADVANCE(623);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(624);
      if (lookahead == 'd')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 624:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(623);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 625:
      if (lookahead == '\n')
        ADVANCE(623);
      if (lookahead == '\r')
        ADVANCE(625);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(626);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(622);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 626:
      if (lookahead == 'n')
        SKIP(622);
      END_STATE();
    case 627:
      if (lookahead == '\n')
        ADVANCE(628);
      if (lookahead == '\r')
        ADVANCE(630);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(631);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(627);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 628:
      if (lookahead == '\n')
        ADVANCE(628);
      if (lookahead == '\r')
        ADVANCE(628);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(629);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(628);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 629:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(628);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 630:
      if (lookahead == '\n')
        ADVANCE(628);
      if (lookahead == '\r')
        ADVANCE(630);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(631);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(627);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 631:
      if (lookahead == 'n')
        SKIP(627);
      END_STATE();
    case 632:
      if (lookahead == '\n')
        ADVANCE(633);
      if (lookahead == '\r')
        ADVANCE(635);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(636);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(632);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 633:
      if (lookahead == '\n')
        ADVANCE(633);
      if (lookahead == '\r')
        ADVANCE(633);
      if (lookahead == '!')
        ADVANCE(9);
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
        ADVANCE(355);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(634);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(633);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 634:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(633);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 635:
      if (lookahead == '\n')
        ADVANCE(633);
      if (lookahead == '\r')
        ADVANCE(635);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(636);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(632);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 636:
      if (lookahead == 'n')
        SKIP(632);
      END_STATE();
    case 637:
      if (lookahead == '\n')
        ADVANCE(638);
      if (lookahead == '\r')
        ADVANCE(640);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(641);
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
        SKIP(637);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 638:
      if (lookahead == '\n')
        ADVANCE(638);
      if (lookahead == '\r')
        ADVANCE(638);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(639);
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
        ADVANCE(638);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 639:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(638);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 640:
      if (lookahead == '\n')
        ADVANCE(638);
      if (lookahead == '\r')
        ADVANCE(640);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(641);
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
        SKIP(637);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 641:
      if (lookahead == 'n')
        SKIP(637);
      END_STATE();
    case 642:
      if (lookahead == '\n')
        ADVANCE(643);
      if (lookahead == '\r')
        ADVANCE(695);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == 'A')
        ADVANCE(696);
      if (lookahead == 'B')
        ADVANCE(699);
      if (lookahead == 'C')
        ADVANCE(703);
      if (lookahead == 'D')
        ADVANCE(707);
      if (lookahead == 'E')
        ADVANCE(717);
      if (lookahead == 'F')
        ADVANCE(728);
      if (lookahead == 'G')
        ADVANCE(731);
      if (lookahead == 'H')
        ADVANCE(732);
      if (lookahead == 'L')
        ADVANCE(733);
      if (lookahead == 'N')
        ADVANCE(734);
      if (lookahead == 'O')
        ADVANCE(735);
      if (lookahead == 'R')
        ADVANCE(736);
      if (lookahead == 'S')
        ADVANCE(737);
      if (lookahead == 'U')
        ADVANCE(738);
      if (lookahead == 'V')
        ADVANCE(739);
      if (lookahead == 'X')
        ADVANCE(740);
      if (lookahead == '\\')
        ADVANCE(505);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 'a')
        ADVANCE(741);
      if (lookahead == 'b')
        ADVANCE(742);
      if (lookahead == 'f')
        ADVANCE(743);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(744);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(745);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(642);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(506);
      END_STATE();
    case 643:
      if (lookahead == '\n')
        ADVANCE(643);
      if (lookahead == '\r')
        ADVANCE(643);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == 'A')
        ADVANCE(644);
      if (lookahead == 'B')
        ADVANCE(647);
      if (lookahead == 'C')
        ADVANCE(651);
      if (lookahead == 'D')
        ADVANCE(655);
      if (lookahead == 'E')
        ADVANCE(665);
      if (lookahead == 'F')
        ADVANCE(676);
      if (lookahead == 'G')
        ADVANCE(679);
      if (lookahead == 'H')
        ADVANCE(680);
      if (lookahead == 'L')
        ADVANCE(681);
      if (lookahead == 'N')
        ADVANCE(682);
      if (lookahead == 'O')
        ADVANCE(683);
      if (lookahead == 'R')
        ADVANCE(684);
      if (lookahead == 'S')
        ADVANCE(685);
      if (lookahead == 'U')
        ADVANCE(686);
      if (lookahead == 'V')
        ADVANCE(687);
      if (lookahead == 'X')
        ADVANCE(688);
      if (lookahead == '\\')
        ADVANCE(689);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 'a')
        ADVANCE(690);
      if (lookahead == 'b')
        ADVANCE(691);
      if (lookahead == 'f')
        ADVANCE(692);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(693);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(694);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(501);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 644:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(645);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 645:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(646);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 647:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(648);
      if (lookahead == 'S')
        ADVANCE(650);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 648:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(649);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 651:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(652);
      if (lookahead == 'R')
        ADVANCE(654);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 652:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(653);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 655:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(656);
      if (lookahead == 'E')
        ADVANCE(661);
      if (lookahead == 'L')
        ADVANCE(663);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 656:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(657);
      if (lookahead == '2')
        ADVANCE(658);
      if (lookahead == '3')
        ADVANCE(659);
      if (lookahead == '4')
        ADVANCE(660);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 661:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(662);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 663:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(664);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 665:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(666);
      if (lookahead == 'N')
        ADVANCE(667);
      if (lookahead == 'O')
        ADVANCE(669);
      if (lookahead == 'S')
        ADVANCE(671);
      if (lookahead == 'T')
        ADVANCE(673);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(668);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 669:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(670);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 671:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(672);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 673:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(674);
      if (lookahead == 'X')
        ADVANCE(675);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 676:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(677);
      if (lookahead == 'S')
        ADVANCE(678);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 679:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(45);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 680:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 681:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(49);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 682:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 684:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 685:
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
    case 686:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(69);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 687:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(71);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(643);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 695:
      if (lookahead == '\n')
        ADVANCE(643);
      if (lookahead == '\r')
        ADVANCE(695);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == 'A')
        ADVANCE(696);
      if (lookahead == 'B')
        ADVANCE(699);
      if (lookahead == 'C')
        ADVANCE(703);
      if (lookahead == 'D')
        ADVANCE(707);
      if (lookahead == 'E')
        ADVANCE(717);
      if (lookahead == 'F')
        ADVANCE(728);
      if (lookahead == 'G')
        ADVANCE(731);
      if (lookahead == 'H')
        ADVANCE(732);
      if (lookahead == 'L')
        ADVANCE(733);
      if (lookahead == 'N')
        ADVANCE(734);
      if (lookahead == 'O')
        ADVANCE(735);
      if (lookahead == 'R')
        ADVANCE(736);
      if (lookahead == 'S')
        ADVANCE(737);
      if (lookahead == 'U')
        ADVANCE(738);
      if (lookahead == 'V')
        ADVANCE(739);
      if (lookahead == 'X')
        ADVANCE(740);
      if (lookahead == '\\')
        ADVANCE(505);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 'a')
        ADVANCE(741);
      if (lookahead == 'b')
        ADVANCE(742);
      if (lookahead == 'f')
        ADVANCE(743);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(744);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(745);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(642);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(506);
      END_STATE();
    case 696:
      if (lookahead == 'C')
        ADVANCE(697);
      END_STATE();
    case 697:
      if (lookahead == 'K')
        ADVANCE(698);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 699:
      if (lookahead == 'E')
        ADVANCE(700);
      if (lookahead == 'S')
        ADVANCE(702);
      END_STATE();
    case 700:
      if (lookahead == 'L')
        ADVANCE(701);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 703:
      if (lookahead == 'A')
        ADVANCE(704);
      if (lookahead == 'R')
        ADVANCE(706);
      END_STATE();
    case 704:
      if (lookahead == 'N')
        ADVANCE(705);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 707:
      if (lookahead == 'C')
        ADVANCE(708);
      if (lookahead == 'E')
        ADVANCE(713);
      if (lookahead == 'L')
        ADVANCE(715);
      END_STATE();
    case 708:
      if (lookahead == '1')
        ADVANCE(709);
      if (lookahead == '2')
        ADVANCE(710);
      if (lookahead == '3')
        ADVANCE(711);
      if (lookahead == '4')
        ADVANCE(712);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 713:
      if (lookahead == 'L')
        ADVANCE(714);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 715:
      if (lookahead == 'E')
        ADVANCE(716);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 717:
      if (lookahead == 'M')
        ADVANCE(718);
      if (lookahead == 'N')
        ADVANCE(719);
      if (lookahead == 'O')
        ADVANCE(721);
      if (lookahead == 'S')
        ADVANCE(723);
      if (lookahead == 'T')
        ADVANCE(725);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 719:
      if (lookahead == 'Q')
        ADVANCE(720);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 721:
      if (lookahead == 'T')
        ADVANCE(722);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 723:
      if (lookahead == 'C')
        ADVANCE(724);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 725:
      if (lookahead == 'B')
        ADVANCE(726);
      if (lookahead == 'X')
        ADVANCE(727);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 728:
      if (lookahead == 'F')
        ADVANCE(729);
      if (lookahead == 'S')
        ADVANCE(730);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 731:
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 732:
      if (lookahead == 'T')
        ADVANCE(132);
      END_STATE();
    case 733:
      if (lookahead == 'F')
        ADVANCE(134);
      END_STATE();
    case 734:
      if (lookahead == 'A')
        ADVANCE(136);
      if (lookahead == 'U')
        ADVANCE(138);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 736:
      if (lookahead == 'S')
        ADVANCE(141);
      END_STATE();
    case 737:
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
    case 738:
      if (lookahead == 'S')
        ADVANCE(154);
      END_STATE();
    case 739:
      if (lookahead == 'T')
        ADVANCE(156);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 746:
      if (lookahead == '\t')
        ADVANCE(508);
      if (lookahead == '\n')
        ADVANCE(747);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(758);
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
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == 'A')
        ADVANCE(759);
      if (lookahead == 'B')
        ADVANCE(760);
      if (lookahead == 'C')
        ADVANCE(761);
      if (lookahead == 'D')
        ADVANCE(762);
      if (lookahead == 'E')
        ADVANCE(763);
      if (lookahead == 'F')
        ADVANCE(764);
      if (lookahead == 'G')
        ADVANCE(129);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == 'L')
        ADVANCE(133);
      if (lookahead == 'N')
        ADVANCE(135);
      if (lookahead == 'O')
        ADVANCE(735);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead == 'S')
        ADVANCE(142);
      if (lookahead == 'U')
        ADVANCE(153);
      if (lookahead == 'V')
        ADVANCE(155);
      if (lookahead == 'X')
        ADVANCE(740);
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
        ADVANCE(741);
      if (lookahead == 'b')
        ADVANCE(742);
      if (lookahead == 'f')
        ADVANCE(743);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(744);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(745);
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
    case 747:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(748);
      if (lookahead == '\n')
        ADVANCE(747);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(749);
      if (lookahead == ' ')
        ADVANCE(750);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(751);
      if (lookahead == 'B')
        ADVANCE(752);
      if (lookahead == 'C')
        ADVANCE(753);
      if (lookahead == 'D')
        ADVANCE(754);
      if (lookahead == 'E')
        ADVANCE(755);
      if (lookahead == 'F')
        ADVANCE(756);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(683);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(688);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(757);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(690);
      if (lookahead == 'b')
        ADVANCE(691);
      if (lookahead == 'f')
        ADVANCE(692);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(693);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(694);
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
    case 748:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(748);
      if (lookahead == '\n')
        ADVANCE(747);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(749);
      if (lookahead == ' ')
        ADVANCE(750);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(751);
      if (lookahead == 'B')
        ADVANCE(752);
      if (lookahead == 'C')
        ADVANCE(753);
      if (lookahead == 'D')
        ADVANCE(754);
      if (lookahead == 'E')
        ADVANCE(755);
      if (lookahead == 'F')
        ADVANCE(756);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(683);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(688);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(757);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(690);
      if (lookahead == 'b')
        ADVANCE(691);
      if (lookahead == 'f')
        ADVANCE(692);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(693);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(694);
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
    case 749:
      if (lookahead == '\t')
        ADVANCE(748);
      if (lookahead == '\n')
        ADVANCE(747);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(749);
      if (lookahead == ' ')
        ADVANCE(750);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(751);
      if (lookahead == 'B')
        ADVANCE(752);
      if (lookahead == 'C')
        ADVANCE(753);
      if (lookahead == 'D')
        ADVANCE(754);
      if (lookahead == 'E')
        ADVANCE(755);
      if (lookahead == 'F')
        ADVANCE(756);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(683);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(688);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(757);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(690);
      if (lookahead == 'b')
        ADVANCE(691);
      if (lookahead == 'f')
        ADVANCE(692);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(693);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(694);
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
    case 750:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(748);
      if (lookahead == '\n')
        ADVANCE(747);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(749);
      if (lookahead == ' ')
        ADVANCE(750);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(751);
      if (lookahead == 'B')
        ADVANCE(752);
      if (lookahead == 'C')
        ADVANCE(753);
      if (lookahead == 'D')
        ADVANCE(754);
      if (lookahead == 'E')
        ADVANCE(755);
      if (lookahead == 'F')
        ADVANCE(756);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(683);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(688);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(757);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(690);
      if (lookahead == 'b')
        ADVANCE(691);
      if (lookahead == 'f')
        ADVANCE(692);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(693);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(694);
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
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(645);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(648);
      if (lookahead == 'S')
        ADVANCE(650);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(652);
      if (lookahead == 'R')
        ADVANCE(654);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(656);
      if (lookahead == 'E')
        ADVANCE(661);
      if (lookahead == 'L')
        ADVANCE(663);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(666);
      if (lookahead == 'N')
        ADVANCE(667);
      if (lookahead == 'O')
        ADVANCE(669);
      if (lookahead == 'S')
        ADVANCE(671);
      if (lookahead == 'T')
        ADVANCE(673);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(677);
      if (lookahead == 'S')
        ADVANCE(678);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(749);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 758:
      if (lookahead == '\t')
        ADVANCE(508);
      if (lookahead == '\n')
        ADVANCE(747);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(758);
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
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == 'A')
        ADVANCE(759);
      if (lookahead == 'B')
        ADVANCE(760);
      if (lookahead == 'C')
        ADVANCE(761);
      if (lookahead == 'D')
        ADVANCE(762);
      if (lookahead == 'E')
        ADVANCE(763);
      if (lookahead == 'F')
        ADVANCE(764);
      if (lookahead == 'G')
        ADVANCE(129);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == 'L')
        ADVANCE(133);
      if (lookahead == 'N')
        ADVANCE(135);
      if (lookahead == 'O')
        ADVANCE(735);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead == 'S')
        ADVANCE(142);
      if (lookahead == 'U')
        ADVANCE(153);
      if (lookahead == 'V')
        ADVANCE(155);
      if (lookahead == 'X')
        ADVANCE(740);
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
        ADVANCE(741);
      if (lookahead == 'b')
        ADVANCE(742);
      if (lookahead == 'f')
        ADVANCE(743);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(744);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(745);
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
    case 759:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(697);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(700);
      if (lookahead == 'S')
        ADVANCE(702);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(704);
      if (lookahead == 'R')
        ADVANCE(706);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(708);
      if (lookahead == 'E')
        ADVANCE(713);
      if (lookahead == 'L')
        ADVANCE(715);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(718);
      if (lookahead == 'N')
        ADVANCE(719);
      if (lookahead == 'O')
        ADVANCE(721);
      if (lookahead == 'S')
        ADVANCE(723);
      if (lookahead == 'T')
        ADVANCE(725);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(729);
      if (lookahead == 'S')
        ADVANCE(730);
      END_STATE();
    case 765:
      if (lookahead == '\n')
        ADVANCE(766);
      if (lookahead == '\r')
        ADVANCE(770);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(771);
      if (lookahead == 'd')
        ADVANCE(772);
      if (lookahead == 'w')
        ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(765);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 766:
      if (lookahead == '\n')
        ADVANCE(766);
      if (lookahead == '\r')
        ADVANCE(766);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(767);
      if (lookahead == 'd')
        ADVANCE(768);
      if (lookahead == 'w')
        ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(766);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 767:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(766);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 770:
      if (lookahead == '\n')
        ADVANCE(766);
      if (lookahead == '\r')
        ADVANCE(770);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(771);
      if (lookahead == 'd')
        ADVANCE(772);
      if (lookahead == 'w')
        ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(765);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 771:
      if (lookahead == 'n')
        SKIP(765);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'o')
        ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 774:
      if (lookahead == '\n')
        ADVANCE(775);
      if (lookahead == '\r')
        ADVANCE(777);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(778);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '_')
        ADVANCE(469);
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
        SKIP(774);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 775:
      if (lookahead == '\n')
        ADVANCE(775);
      if (lookahead == '\r')
        ADVANCE(775);
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
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(356);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(776);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(466);
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
        ADVANCE(775);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 776:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(775);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 777:
      if (lookahead == '\n')
        ADVANCE(775);
      if (lookahead == '\r')
        ADVANCE(777);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(406);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(778);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '_')
        ADVANCE(469);
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
        SKIP(774);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 778:
      if (lookahead == 'n')
        SKIP(774);
      END_STATE();
    case 779:
      if (lookahead == '\n')
        ADVANCE(780);
      if (lookahead == '\r')
        ADVANCE(783);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(784);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(779);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(785);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 780:
      if (lookahead == '\n')
        ADVANCE(780);
      if (lookahead == '\r')
        ADVANCE(780);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(355);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(781);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(780);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(782);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(782);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(782);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 783:
      if (lookahead == '\n')
        ADVANCE(780);
      if (lookahead == '\r')
        ADVANCE(783);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(784);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(779);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(785);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 784:
      if (lookahead == 'n')
        SKIP(779);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(785);
      if (lookahead == '.')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(785);
      END_STATE();
    case 786:
      if (lookahead == '\n')
        ADVANCE(787);
      if (lookahead == '\r')
        ADVANCE(789);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '\\')
        SKIP(790);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(786);
      END_STATE();
    case 787:
      if (lookahead == '\n')
        ADVANCE(787);
      if (lookahead == '\r')
        ADVANCE(787);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '\\')
        ADVANCE(788);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(787);
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
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '\\')
        SKIP(790);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(786);
      END_STATE();
    case 790:
      if (lookahead == 'n')
        SKIP(786);
      END_STATE();
    case 791:
      if (lookahead == '\n')
        ADVANCE(792);
      if (lookahead == '\r')
        ADVANCE(804);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '\\')
        SKIP(805);
      if (lookahead == 's')
        ADVANCE(806);
      if (lookahead == 'u')
        ADVANCE(810);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(791);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 792:
      if (lookahead == '\n')
        ADVANCE(792);
      if (lookahead == '\r')
        ADVANCE(792);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '\\')
        ADVANCE(793);
      if (lookahead == 's')
        ADVANCE(794);
      if (lookahead == 'u')
        ADVANCE(798);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(792);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 804:
      if (lookahead == '\n')
        ADVANCE(792);
      if (lookahead == '\r')
        ADVANCE(804);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '\\')
        SKIP(805);
      if (lookahead == 's')
        ADVANCE(806);
      if (lookahead == 'u')
        ADVANCE(810);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(791);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 805:
      if (lookahead == 'n')
        SKIP(791);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'a')
        ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'f')
        ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'n')
        ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 's')
        ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'a')
        ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'f')
        ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 816:
      if (lookahead == '\n')
        ADVANCE(817);
      if (lookahead == '\r')
        ADVANCE(819);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(820);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(592);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(816);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 817:
      if (lookahead == '\n')
        ADVANCE(817);
      if (lookahead == '\r')
        ADVANCE(817);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(818);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'w')
        ADVANCE(585);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(817);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(820);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(592);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(816);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(825);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(821);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 822:
      if (lookahead == '\n')
        ADVANCE(822);
      if (lookahead == '\r')
        ADVANCE(822);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(823);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(822);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(825);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(821);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
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
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(830);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(826);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 827:
      if (lookahead == '\n')
        ADVANCE(827);
      if (lookahead == '\r')
        ADVANCE(827);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(828);
      if (lookahead == 'd')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(827);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
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
      if (lookahead == '\n')
        ADVANCE(827);
      if (lookahead == '\r')
        ADVANCE(829);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(830);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(826);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 830:
      if (lookahead == 'n')
        SKIP(826);
      END_STATE();
    case 831:
      if (lookahead == '\n')
        ADVANCE(832);
      if (lookahead == '\r')
        ADVANCE(834);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(835);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(831);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 832:
      if (lookahead == '\n')
        ADVANCE(832);
      if (lookahead == '\r')
        ADVANCE(832);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(833);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(832);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
      if (lookahead == '\n')
        ADVANCE(832);
      if (lookahead == '\r')
        ADVANCE(834);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(835);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(831);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 835:
      if (lookahead == 'n')
        SKIP(831);
      END_STATE();
    case 836:
      if (lookahead == '\n')
        ADVANCE(837);
      if (lookahead == '\r')
        ADVANCE(839);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(840);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(836);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 837:
      if (lookahead == '\n')
        ADVANCE(837);
      if (lookahead == '\r')
        ADVANCE(837);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(838);
      if (lookahead == 'd')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(837);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 838:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(837);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 839:
      if (lookahead == '\n')
        ADVANCE(837);
      if (lookahead == '\r')
        ADVANCE(839);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(840);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(836);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 840:
      if (lookahead == 'n')
        SKIP(836);
      END_STATE();
    case 841:
      if (lookahead == '\n')
        ADVANCE(842);
      if (lookahead == '\r')
        ADVANCE(844);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(845);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(841);
      END_STATE();
    case 842:
      if (lookahead == '\n')
        ADVANCE(842);
      if (lookahead == '\r')
        ADVANCE(842);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(843);
      if (lookahead == 'd')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(842);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 843:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(842);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 844:
      if (lookahead == '\n')
        ADVANCE(842);
      if (lookahead == '\r')
        ADVANCE(844);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(845);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(841);
      END_STATE();
    case 845:
      if (lookahead == 'n')
        SKIP(841);
      END_STATE();
    case 846:
      if (lookahead == '\n')
        ADVANCE(847);
      if (lookahead == '\r')
        ADVANCE(849);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(850);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(846);
      END_STATE();
    case 847:
      if (lookahead == '\n')
        ADVANCE(847);
      if (lookahead == '\r')
        ADVANCE(847);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(848);
      if (lookahead == 'd')
        ADVANCE(478);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(847);
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
      if (lookahead == '\n')
        ADVANCE(847);
      if (lookahead == '\r')
        ADVANCE(849);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(850);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(846);
      END_STATE();
    case 850:
      if (lookahead == 'n')
        SKIP(846);
      END_STATE();
    case 851:
      if (lookahead == '\n')
        ADVANCE(852);
      if (lookahead == '\r')
        ADVANCE(854);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(855);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(851);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 852:
      if (lookahead == '\n')
        ADVANCE(852);
      if (lookahead == '\r')
        ADVANCE(852);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(853);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(852);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(855);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(851);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
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
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(860);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(856);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 857:
      if (lookahead == '\n')
        ADVANCE(857);
      if (lookahead == '\r')
        ADVANCE(857);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(858);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(857);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(860);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(856);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 860:
      if (lookahead == 'n')
        SKIP(856);
      END_STATE();
    case 861:
      if (lookahead == '\n')
        ADVANCE(862);
      if (lookahead == '\r')
        ADVANCE(864);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(865);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(861);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 862:
      if (lookahead == '\n')
        ADVANCE(862);
      if (lookahead == '\r')
        ADVANCE(862);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(863);
      if (lookahead == 'd')
        ADVANCE(478);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(862);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 863:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(862);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 864:
      if (lookahead == '\n')
        ADVANCE(862);
      if (lookahead == '\r')
        ADVANCE(864);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(865);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(861);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 865:
      if (lookahead == 'n')
        SKIP(861);
      END_STATE();
    case 866:
      if (lookahead == '\n')
        ADVANCE(867);
      if (lookahead == '\r')
        ADVANCE(869);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(870);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(866);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 867:
      if (lookahead == '\n')
        ADVANCE(867);
      if (lookahead == '\r')
        ADVANCE(867);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(868);
      if (lookahead == 'd')
        ADVANCE(478);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(867);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 868:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(867);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 869:
      if (lookahead == '\n')
        ADVANCE(867);
      if (lookahead == '\r')
        ADVANCE(869);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(870);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(866);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 870:
      if (lookahead == 'n')
        SKIP(866);
      END_STATE();
    case 871:
      if (lookahead == '\n')
        ADVANCE(872);
      if (lookahead == '\r')
        ADVANCE(874);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(875);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(871);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 872:
      if (lookahead == '\n')
        ADVANCE(872);
      if (lookahead == '\r')
        ADVANCE(872);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(873);
      if (lookahead == 'd')
        ADVANCE(478);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(872);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
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
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(875);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(871);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(880);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(876);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 877:
      if (lookahead == '\n')
        ADVANCE(877);
      if (lookahead == '\r')
        ADVANCE(877);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(878);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(877);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(880);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(876);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 880:
      if (lookahead == 'n')
        SKIP(876);
      END_STATE();
    case 881:
      if (lookahead == '\n')
        ADVANCE(882);
      if (lookahead == '\r')
        ADVANCE(884);
      if (lookahead == '-')
        ADVANCE(341);
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
        SKIP(881);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      END_STATE();
    case 882:
      if (lookahead == '\n')
        ADVANCE(882);
      if (lookahead == '\r')
        ADVANCE(882);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(883);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(882);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(882);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 884:
      if (lookahead == '\n')
        ADVANCE(882);
      if (lookahead == '\r')
        ADVANCE(884);
      if (lookahead == '-')
        ADVANCE(341);
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
        SKIP(881);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      END_STATE();
    case 885:
      if (lookahead == '\n')
        ADVANCE(886);
      if (lookahead == '\r')
        ADVANCE(889);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '\\')
        SKIP(890);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
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
        ADVANCE(328);
      if (lookahead == '\\')
        ADVANCE(887);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
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
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '\\')
        SKIP(890);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(891);
      END_STATE();
    case 890:
      if (lookahead == 'n')
        SKIP(885);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 892:
      if (lookahead == '\n')
        ADVANCE(893);
      if (lookahead == '\r')
        ADVANCE(896);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '\\')
        SKIP(897);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(892);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(898);
      END_STATE();
    case 893:
      if (lookahead == '\n')
        ADVANCE(893);
      if (lookahead == '\r')
        ADVANCE(893);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '\\')
        ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(895);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 896:
      if (lookahead == '\n')
        ADVANCE(893);
      if (lookahead == '\r')
        ADVANCE(896);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '\\')
        SKIP(897);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(892);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(898);
      END_STATE();
    case 897:
      if (lookahead == 'n')
        SKIP(892);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 899:
      if (lookahead == '\n')
        ADVANCE(900);
      if (lookahead == '\r')
        ADVANCE(902);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(903);
      if (lookahead == 'd')
        ADVANCE(772);
      if (lookahead == 'w')
        ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(899);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 900:
      if (lookahead == '\n')
        ADVANCE(900);
      if (lookahead == '\r')
        ADVANCE(900);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(901);
      if (lookahead == 'd')
        ADVANCE(768);
      if (lookahead == 'w')
        ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(900);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 901:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(900);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 902:
      if (lookahead == '\n')
        ADVANCE(900);
      if (lookahead == '\r')
        ADVANCE(902);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(903);
      if (lookahead == 'd')
        ADVANCE(772);
      if (lookahead == 'w')
        ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(899);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 903:
      if (lookahead == 'n')
        SKIP(899);
      END_STATE();
    case 904:
      if (lookahead == '\n')
        ADVANCE(905);
      if (lookahead == '\r')
        ADVANCE(907);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(908);
      if (lookahead == 'd')
        ADVANCE(772);
      if (lookahead == 'w')
        ADVANCE(592);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(904);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 905:
      if (lookahead == '\n')
        ADVANCE(905);
      if (lookahead == '\r')
        ADVANCE(905);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(906);
      if (lookahead == 'd')
        ADVANCE(768);
      if (lookahead == 'w')
        ADVANCE(585);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(905);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 906:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(905);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 907:
      if (lookahead == '\n')
        ADVANCE(905);
      if (lookahead == '\r')
        ADVANCE(907);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(908);
      if (lookahead == 'd')
        ADVANCE(772);
      if (lookahead == 'w')
        ADVANCE(592);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(904);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 908:
      if (lookahead == 'n')
        SKIP(904);
      END_STATE();
    case 909:
      if (lookahead == '\n')
        ADVANCE(910);
      if (lookahead == '\r')
        ADVANCE(912);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(913);
      if (lookahead == 'd')
        ADVANCE(772);
      if (lookahead == 'w')
        ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(909);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 910:
      if (lookahead == '\n')
        ADVANCE(910);
      if (lookahead == '\r')
        ADVANCE(910);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(911);
      if (lookahead == 'd')
        ADVANCE(768);
      if (lookahead == 'w')
        ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(910);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 911:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(910);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 912:
      if (lookahead == '\n')
        ADVANCE(910);
      if (lookahead == '\r')
        ADVANCE(912);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(913);
      if (lookahead == 'd')
        ADVANCE(772);
      if (lookahead == 'w')
        ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(909);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 913:
      if (lookahead == 'n')
        SKIP(909);
      END_STATE();
    case 914:
      if (lookahead == '\n')
        ADVANCE(915);
      if (lookahead == '\r')
        ADVANCE(917);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(918);
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
        SKIP(914);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 915:
      if (lookahead == '\n')
        ADVANCE(915);
      if (lookahead == '\r')
        ADVANCE(915);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(916);
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
        ADVANCE(915);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 916:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(915);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 917:
      if (lookahead == '\n')
        ADVANCE(915);
      if (lookahead == '\r')
        ADVANCE(917);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(918);
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
        SKIP(914);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 918:
      if (lookahead == 'n')
        SKIP(914);
      END_STATE();
    case 919:
      if (lookahead == '\n')
        ADVANCE(920);
      if (lookahead == '\r')
        ADVANCE(922);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(923);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(919);
      END_STATE();
    case 920:
      if (lookahead == '\n')
        ADVANCE(920);
      if (lookahead == '\r')
        ADVANCE(920);
      if (lookahead == '-')
        ADVANCE(355);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(921);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(920);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 921:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(920);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 922:
      if (lookahead == '\n')
        ADVANCE(920);
      if (lookahead == '\r')
        ADVANCE(922);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(923);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(919);
      END_STATE();
    case 923:
      if (lookahead == 'n')
        SKIP(919);
      END_STATE();
    case 924:
      if (lookahead == '\n')
        ADVANCE(925);
      if (lookahead == '\r')
        ADVANCE(928);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(929);
      if (lookahead == '\\')
        SKIP(930);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(924);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 925:
      if (lookahead == '\n')
        ADVANCE(925);
      if (lookahead == '\r')
        ADVANCE(925);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(355);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(926);
      if (lookahead == '\\')
        ADVANCE(927);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(925);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 926:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 927:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(925);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 928:
      if (lookahead == '\n')
        ADVANCE(925);
      if (lookahead == '\r')
        ADVANCE(928);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(929);
      if (lookahead == '\\')
        SKIP(930);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(924);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 929:
      if (lookahead == '>')
        ADVANCE(125);
      END_STATE();
    case 930:
      if (lookahead == 'n')
        SKIP(924);
      END_STATE();
    case 931:
      if (lookahead == '\n')
        ADVANCE(932);
      if (lookahead == '\r')
        ADVANCE(934);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(935);
      if (lookahead == 'c')
        ADVANCE(267);
      if (lookahead == 'd')
        ADVANCE(273);
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
        SKIP(931);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 932:
      if (lookahead == '\n')
        ADVANCE(932);
      if (lookahead == '\r')
        ADVANCE(932);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(933);
      if (lookahead == 'c')
        ADVANCE(195);
      if (lookahead == 'd')
        ADVANCE(201);
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
        ADVANCE(932);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
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
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(935);
      if (lookahead == 'c')
        ADVANCE(267);
      if (lookahead == 'd')
        ADVANCE(273);
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
        SKIP(931);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
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
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(940);
      if (lookahead == 'h')
        ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(936);
      END_STATE();
    case 937:
      if (lookahead == '\n')
        ADVANCE(937);
      if (lookahead == '\r')
        ADVANCE(937);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(938);
      if (lookahead == 'h')
        ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(937);
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
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(940);
      if (lookahead == 'h')
        ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(936);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(945);
      if (lookahead == 'w')
        ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(941);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 942:
      if (lookahead == '\n')
        ADVANCE(942);
      if (lookahead == '\r')
        ADVANCE(942);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(943);
      if (lookahead == 'w')
        ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(942);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(945);
      if (lookahead == 'w')
        ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(941);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 945:
      if (lookahead == 'n')
        SKIP(941);
      END_STATE();
    case 946:
      if (lookahead == '\n')
        ADVANCE(947);
      if (lookahead == '\r')
        ADVANCE(949);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(950);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(946);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 947:
      if (lookahead == '\n')
        ADVANCE(947);
      if (lookahead == '\r')
        ADVANCE(947);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(948);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(947);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 948:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(947);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 949:
      if (lookahead == '\n')
        ADVANCE(947);
      if (lookahead == '\r')
        ADVANCE(949);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(950);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(946);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 950:
      if (lookahead == 'n')
        SKIP(946);
      END_STATE();
    case 951:
      if (lookahead == '\n')
        ADVANCE(952);
      if (lookahead == '\r')
        ADVANCE(954);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(955);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(951);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 952:
      if (lookahead == '\n')
        ADVANCE(952);
      if (lookahead == '\r')
        ADVANCE(952);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(953);
      if (lookahead == 'd')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(952);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 953:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(952);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 954:
      if (lookahead == '\n')
        ADVANCE(952);
      if (lookahead == '\r')
        ADVANCE(954);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(955);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(951);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 955:
      if (lookahead == 'n')
        SKIP(951);
      END_STATE();
    case 956:
      if (lookahead == '\n')
        ADVANCE(957);
      if (lookahead == '\r')
        ADVANCE(959);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(960);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(956);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 957:
      if (lookahead == '\n')
        ADVANCE(957);
      if (lookahead == '\r')
        ADVANCE(957);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(958);
      if (lookahead == 'd')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(957);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 958:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(957);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 959:
      if (lookahead == '\n')
        ADVANCE(957);
      if (lookahead == '\r')
        ADVANCE(959);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(960);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(956);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 960:
      if (lookahead == 'n')
        SKIP(956);
      END_STATE();
    case 961:
      if (lookahead == '\n')
        ADVANCE(962);
      if (lookahead == '\r')
        ADVANCE(964);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(965);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(961);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 962:
      if (lookahead == '\n')
        ADVANCE(962);
      if (lookahead == '\r')
        ADVANCE(962);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(963);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(962);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 963:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(962);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 964:
      if (lookahead == '\n')
        ADVANCE(962);
      if (lookahead == '\r')
        ADVANCE(964);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(965);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(961);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 965:
      if (lookahead == 'n')
        SKIP(961);
      END_STATE();
    case 966:
      if (lookahead == '\n')
        ADVANCE(967);
      if (lookahead == '\r')
        ADVANCE(969);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(970);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(966);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 967:
      if (lookahead == '\n')
        ADVANCE(967);
      if (lookahead == '\r')
        ADVANCE(967);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(968);
      if (lookahead == 'd')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(967);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 968:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(967);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 969:
      if (lookahead == '\n')
        ADVANCE(967);
      if (lookahead == '\r')
        ADVANCE(969);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(970);
      if (lookahead == 'd')
        ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(966);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 970:
      if (lookahead == 'n')
        SKIP(966);
      END_STATE();
    case 971:
      if (lookahead == '\n')
        ADVANCE(972);
      if (lookahead == '\r')
        ADVANCE(974);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(975);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(971);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 972:
      if (lookahead == '\n')
        ADVANCE(972);
      if (lookahead == '\r')
        ADVANCE(972);
      if (lookahead == '-')
        ADVANCE(355);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(973);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(972);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 973:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(972);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 974:
      if (lookahead == '\n')
        ADVANCE(972);
      if (lookahead == '\r')
        ADVANCE(974);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(975);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(971);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 975:
      if (lookahead == 'n')
        SKIP(971);
      END_STATE();
    case 976:
      if (lookahead == '\t')
        ADVANCE(508);
      if (lookahead == '\n')
        ADVANCE(977);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(982);
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
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
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
    case 977:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(978);
      if (lookahead == '\n')
        ADVANCE(977);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(979);
      if (lookahead == ' ')
        ADVANCE(980);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(981);
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
    case 978:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(978);
      if (lookahead == '\n')
        ADVANCE(977);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(979);
      if (lookahead == ' ')
        ADVANCE(980);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(981);
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
    case 979:
      if (lookahead == '\t')
        ADVANCE(978);
      if (lookahead == '\n')
        ADVANCE(977);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(979);
      if (lookahead == ' ')
        ADVANCE(980);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(981);
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
    case 980:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(978);
      if (lookahead == '\n')
        ADVANCE(977);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(979);
      if (lookahead == ' ')
        ADVANCE(980);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(981);
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
    case 981:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(979);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 982:
      if (lookahead == '\t')
        ADVANCE(508);
      if (lookahead == '\n')
        ADVANCE(977);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(982);
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
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
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
    case 983:
      if (lookahead == '\n')
        ADVANCE(984);
      if (lookahead == '\r')
        ADVANCE(986);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(987);
      if (lookahead == 'd')
        ADVANCE(772);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(983);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 984:
      if (lookahead == '\n')
        ADVANCE(984);
      if (lookahead == '\r')
        ADVANCE(984);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(985);
      if (lookahead == 'd')
        ADVANCE(768);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(984);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 985:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(984);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 986:
      if (lookahead == '\n')
        ADVANCE(984);
      if (lookahead == '\r')
        ADVANCE(986);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(987);
      if (lookahead == 'd')
        ADVANCE(772);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(983);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 987:
      if (lookahead == 'n')
        SKIP(983);
      END_STATE();
    case 988:
      if (lookahead == '\n')
        ADVANCE(989);
      if (lookahead == '\r')
        ADVANCE(991);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(992);
      if (lookahead == 'd')
        ADVANCE(772);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(988);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 989:
      if (lookahead == '\n')
        ADVANCE(989);
      if (lookahead == '\r')
        ADVANCE(989);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(990);
      if (lookahead == 'd')
        ADVANCE(768);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(989);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 990:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(989);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 991:
      if (lookahead == '\n')
        ADVANCE(989);
      if (lookahead == '\r')
        ADVANCE(991);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(992);
      if (lookahead == 'd')
        ADVANCE(772);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(988);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 992:
      if (lookahead == 'n')
        SKIP(988);
      END_STATE();
    case 993:
      if (lookahead == '\n')
        ADVANCE(994);
      if (lookahead == '\r')
        ADVANCE(996);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(997);
      if (lookahead == 'd')
        ADVANCE(772);
      if (lookahead == 'w')
        ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(993);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 994:
      if (lookahead == '\n')
        ADVANCE(994);
      if (lookahead == '\r')
        ADVANCE(994);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(995);
      if (lookahead == 'd')
        ADVANCE(768);
      if (lookahead == 'w')
        ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(994);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 995:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(994);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 996:
      if (lookahead == '\n')
        ADVANCE(994);
      if (lookahead == '\r')
        ADVANCE(996);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(997);
      if (lookahead == 'd')
        ADVANCE(772);
      if (lookahead == 'w')
        ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(993);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 997:
      if (lookahead == 'n')
        SKIP(993);
      END_STATE();
    case 998:
      if (lookahead == '\n')
        ADVANCE(999);
      if (lookahead == '\r')
        ADVANCE(1001);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(1002);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(998);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(785);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 999:
      if (lookahead == '\n')
        ADVANCE(999);
      if (lookahead == '\r')
        ADVANCE(999);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(355);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(1000);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(999);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(782);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1000:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(999);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1001:
      if (lookahead == '\n')
        ADVANCE(999);
      if (lookahead == '\r')
        ADVANCE(1001);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(1002);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(998);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(785);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1002:
      if (lookahead == 'n')
        SKIP(998);
      END_STATE();
    case 1003:
      if (lookahead == '\n')
        ADVANCE(1004);
      if (lookahead == '\r')
        ADVANCE(1006);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(1007);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1003);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1004:
      if (lookahead == '\n')
        ADVANCE(1004);
      if (lookahead == '\r')
        ADVANCE(1004);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(355);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(1005);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(1004);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1005:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(1004);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1006:
      if (lookahead == '\n')
        ADVANCE(1004);
      if (lookahead == '\r')
        ADVANCE(1006);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(1007);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1003);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1007:
      if (lookahead == 'n')
        SKIP(1003);
      END_STATE();
    case 1008:
      if (lookahead == '\n')
        ADVANCE(1009);
      if (lookahead == '\r')
        ADVANCE(1012);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '.')
        ADVANCE(1013);
      if (lookahead == '\\')
        SKIP(1014);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1008);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1009:
      if (lookahead == '\n')
        ADVANCE(1009);
      if (lookahead == '\r')
        ADVANCE(1009);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '.')
        ADVANCE(1010);
      if (lookahead == '\\')
        ADVANCE(1011);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(1009);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1010:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1011:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(1009);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1012:
      if (lookahead == '\n')
        ADVANCE(1009);
      if (lookahead == '\r')
        ADVANCE(1012);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '.')
        ADVANCE(1013);
      if (lookahead == '\\')
        SKIP(1014);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1008);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1013:
      if (lookahead == '.')
        ADVANCE(117);
      END_STATE();
    case 1014:
      if (lookahead == 'n')
        SKIP(1008);
      END_STATE();
    case 1015:
      if (lookahead == '\n')
        ADVANCE(1016);
      if (lookahead == '\r')
        ADVANCE(1018);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(1019);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1015);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1016:
      if (lookahead == '\n')
        ADVANCE(1016);
      if (lookahead == '\r')
        ADVANCE(1016);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(1017);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(1016);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1017:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(1016);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1018:
      if (lookahead == '\n')
        ADVANCE(1016);
      if (lookahead == '\r')
        ADVANCE(1018);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(1019);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1015);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1019:
      if (lookahead == 'n')
        SKIP(1015);
      END_STATE();
    case 1020:
      if (lookahead == '\n')
        ADVANCE(1021);
      if (lookahead == '\r')
        ADVANCE(1023);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(1024);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1020);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1021:
      if (lookahead == '\n')
        ADVANCE(1021);
      if (lookahead == '\r')
        ADVANCE(1021);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(1022);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(1021);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1022:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(1021);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1023:
      if (lookahead == '\n')
        ADVANCE(1021);
      if (lookahead == '\r')
        ADVANCE(1023);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(1024);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1020);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1024:
      if (lookahead == 'n')
        SKIP(1020);
      END_STATE();
    case 1025:
      if (lookahead == '\n')
        ADVANCE(1026);
      if (lookahead == '\r')
        ADVANCE(1028);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(1029);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1025);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1026:
      if (lookahead == '\n')
        ADVANCE(1026);
      if (lookahead == '\r')
        ADVANCE(1026);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(1027);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(1026);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1027:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(1026);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1028:
      if (lookahead == '\n')
        ADVANCE(1026);
      if (lookahead == '\r')
        ADVANCE(1028);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(1029);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1025);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1029:
      if (lookahead == 'n')
        SKIP(1025);
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
  [4] = {.lex_state = 353},
  [5] = {.lex_state = 181},
  [6] = {.lex_state = 181},
  [7] = {.lex_state = 181},
  [8] = {.lex_state = 454},
  [9] = {.lex_state = 181},
  [10] = {.lex_state = 181},
  [11] = {.lex_state = 181},
  [12] = {.lex_state = 463, .external_lex_state = 2},
  [13] = {.lex_state = 470, .external_lex_state = 2},
  [14] = {.lex_state = 475, .external_lex_state = 2},
  [15] = {.lex_state = 496},
  [16] = {.lex_state = 507},
  [17] = {.lex_state = 475, .external_lex_state = 2},
  [18] = {.lex_state = 181},
  [19] = {.lex_state = 515, .external_lex_state = 2},
  [20] = {.lex_state = 515, .external_lex_state = 2},
  [21] = {.lex_state = 181},
  [22] = {.lex_state = 463},
  [23] = {.lex_state = 520},
  [24] = {.lex_state = 525, .external_lex_state = 2},
  [25] = {.lex_state = 530, .external_lex_state = 2},
  [26] = {.lex_state = 535, .external_lex_state = 2},
  [27] = {.lex_state = 556},
  [28] = {.lex_state = 353},
  [29] = {.lex_state = 326},
  [30] = {.lex_state = 561, .external_lex_state = 2},
  [31] = {.lex_state = 353},
  [32] = {.lex_state = 353},
  [33] = {.lex_state = 454},
  [34] = {.lex_state = 181},
  [35] = {.lex_state = 582},
  [36] = {.lex_state = 181},
  [37] = {.lex_state = 353},
  [38] = {.lex_state = 582},
  [39] = {.lex_state = 181},
  [40] = {.lex_state = 353},
  [41] = {.lex_state = 597, .external_lex_state = 2},
  [42] = {.lex_state = 454},
  [43] = {.lex_state = 602, .external_lex_state = 2},
  [44] = {.lex_state = 607},
  [45] = {.lex_state = 612, .external_lex_state = 2},
  [46] = {.lex_state = 612, .external_lex_state = 2},
  [47] = {.lex_state = 181},
  [48] = {.lex_state = 597, .external_lex_state = 2},
  [49] = {.lex_state = 617, .external_lex_state = 2},
  [50] = {.lex_state = 181},
  [51] = {.lex_state = 622, .external_lex_state = 2},
  [52] = {.lex_state = 627, .external_lex_state = 2},
  [53] = {.lex_state = 632},
  [54] = {.lex_state = 181},
  [55] = {.lex_state = 353},
  [56] = {.lex_state = 632},
  [57] = {.lex_state = 637},
  [58] = {.lex_state = 181},
  [59] = {.lex_state = 637},
  [60] = {.lex_state = 520},
  [61] = {.lex_state = 181},
  [62] = {.lex_state = 181},
  [63] = {.lex_state = 181},
  [64] = {.lex_state = 181},
  [65] = {.lex_state = 181},
  [66] = {.lex_state = 181},
  [67] = {.lex_state = 642},
  [68] = {.lex_state = 507},
  [69] = {.lex_state = 507},
  [70] = {.lex_state = 507},
  [71] = {.lex_state = 507},
  [72] = {.lex_state = 475, .external_lex_state = 2},
  [73] = {.lex_state = 507},
  [74] = {.lex_state = 507},
  [75] = {.lex_state = 746},
  [76] = {.lex_state = 507},
  [77] = {.lex_state = 507},
  [78] = {.lex_state = 556},
  [79] = {.lex_state = 765, .external_lex_state = 2},
  [80] = {.lex_state = 515, .external_lex_state = 2},
  [81] = {.lex_state = 520},
  [82] = {.lex_state = 463},
  [83] = {.lex_state = 463},
  [84] = {.lex_state = 607},
  [85] = {.lex_state = 607},
  [86] = {.lex_state = 607},
  [87] = {.lex_state = 520},
  [88] = {.lex_state = 607},
  [89] = {.lex_state = 496},
  [90] = {.lex_state = 507},
  [91] = {.lex_state = 463},
  [92] = {.lex_state = 181},
  [93] = {.lex_state = 607},
  [94] = {.lex_state = 607},
  [95] = {.lex_state = 774},
  [96] = {.lex_state = 463},
  [97] = {.lex_state = 779},
  [98] = {.lex_state = 515, .external_lex_state = 2},
  [99] = {.lex_state = 454},
  [100] = {.lex_state = 786, .external_lex_state = 3},
  [101] = {.lex_state = 353},
  [102] = {.lex_state = 181},
  [103] = {.lex_state = 561, .external_lex_state = 2},
  [104] = {.lex_state = 454},
  [105] = {.lex_state = 326},
  [106] = {.lex_state = 181},
  [107] = {.lex_state = 515, .external_lex_state = 2},
  [108] = {.lex_state = 791},
  [109] = {.lex_state = 791},
  [110] = {.lex_state = 515, .external_lex_state = 2},
  [111] = {.lex_state = 181},
  [112] = {.lex_state = 181},
  [113] = {.lex_state = 632},
  [114] = {.lex_state = 353},
  [115] = {.lex_state = 582},
  [116] = {.lex_state = 786, .external_lex_state = 3},
  [117] = {.lex_state = 181},
  [118] = {.lex_state = 515, .external_lex_state = 2},
  [119] = {.lex_state = 454},
  [120] = {.lex_state = 454},
  [121] = {.lex_state = 454},
  [122] = {.lex_state = 582},
  [123] = {.lex_state = 582},
  [124] = {.lex_state = 496},
  [125] = {.lex_state = 507},
  [126] = {.lex_state = 582},
  [127] = {.lex_state = 353},
  [128] = {.lex_state = 353},
  [129] = {.lex_state = 582},
  [130] = {.lex_state = 582},
  [131] = {.lex_state = 582},
  [132] = {.lex_state = 816},
  [133] = {.lex_state = 582},
  [134] = {.lex_state = 582},
  [135] = {.lex_state = 353},
  [136] = {.lex_state = 515, .external_lex_state = 2},
  [137] = {.lex_state = 181},
  [138] = {.lex_state = 602, .external_lex_state = 2},
  [139] = {.lex_state = 602, .external_lex_state = 2},
  [140] = {.lex_state = 602, .external_lex_state = 2},
  [141] = {.lex_state = 181},
  [142] = {.lex_state = 612, .external_lex_state = 2},
  [143] = {.lex_state = 612, .external_lex_state = 2},
  [144] = {.lex_state = 597, .external_lex_state = 2},
  [145] = {.lex_state = 597, .external_lex_state = 2},
  [146] = {.lex_state = 821, .external_lex_state = 2},
  [147] = {.lex_state = 826, .external_lex_state = 2},
  [148] = {.lex_state = 831, .external_lex_state = 2},
  [149] = {.lex_state = 836, .external_lex_state = 2},
  [150] = {.lex_state = 454},
  [151] = {.lex_state = 841, .external_lex_state = 2},
  [152] = {.lex_state = 846, .external_lex_state = 2},
  [153] = {.lex_state = 515, .external_lex_state = 2},
  [154] = {.lex_state = 851, .external_lex_state = 2},
  [155] = {.lex_state = 454},
  [156] = {.lex_state = 454},
  [157] = {.lex_state = 454},
  [158] = {.lex_state = 856, .external_lex_state = 2},
  [159] = {.lex_state = 861, .external_lex_state = 2},
  [160] = {.lex_state = 866, .external_lex_state = 2},
  [161] = {.lex_state = 856, .external_lex_state = 2},
  [162] = {.lex_state = 871, .external_lex_state = 2},
  [163] = {.lex_state = 876, .external_lex_state = 2},
  [164] = {.lex_state = 856, .external_lex_state = 2},
  [165] = {.lex_state = 871, .external_lex_state = 2},
  [166] = {.lex_state = 181},
  [167] = {.lex_state = 181},
  [168] = {.lex_state = 454},
  [169] = {.lex_state = 632},
  [170] = {.lex_state = 454},
  [171] = {.lex_state = 454},
  [172] = {.lex_state = 454},
  [173] = {.lex_state = 454},
  [174] = {.lex_state = 779},
  [175] = {.lex_state = 454},
  [176] = {.lex_state = 454},
  [177] = {.lex_state = 454},
  [178] = {.lex_state = 637},
  [179] = {.lex_state = 181},
  [180] = {.lex_state = 181},
  [181] = {.lex_state = 637},
  [182] = {.lex_state = 181},
  [183] = {.lex_state = 637},
  [184] = {.lex_state = 637},
  [185] = {.lex_state = 637},
  [186] = {.lex_state = 181},
  [187] = {.lex_state = 475, .external_lex_state = 2},
  [188] = {.lex_state = 181},
  [189] = {.lex_state = 181},
  [190] = {.lex_state = 881},
  [191] = {.lex_state = 885},
  [192] = {.lex_state = 892},
  [193] = {.lex_state = 181},
  [194] = {.lex_state = 507},
  [195] = {.lex_state = 507},
  [196] = {.lex_state = 881},
  [197] = {.lex_state = 885},
  [198] = {.lex_state = 892},
  [199] = {.lex_state = 507},
  [200] = {.lex_state = 507},
  [201] = {.lex_state = 475, .external_lex_state = 2},
  [202] = {.lex_state = 786, .external_lex_state = 3},
  [203] = {.lex_state = 899, .external_lex_state = 2},
  [204] = {.lex_state = 904, .external_lex_state = 2},
  [205] = {.lex_state = 909, .external_lex_state = 2},
  [206] = {.lex_state = 496},
  [207] = {.lex_state = 507},
  [208] = {.lex_state = 909, .external_lex_state = 2},
  [209] = {.lex_state = 515, .external_lex_state = 2},
  [210] = {.lex_state = 765, .external_lex_state = 2},
  [211] = {.lex_state = 765, .external_lex_state = 2},
  [212] = {.lex_state = 765, .external_lex_state = 2},
  [213] = {.lex_state = 904, .external_lex_state = 2},
  [214] = {.lex_state = 765, .external_lex_state = 2},
  [215] = {.lex_state = 463},
  [216] = {.lex_state = 181},
  [217] = {.lex_state = 637},
  [218] = {.lex_state = 181},
  [219] = {.lex_state = 181},
  [220] = {.lex_state = 181},
  [221] = {.lex_state = 181},
  [222] = {.lex_state = 637},
  [223] = {.lex_state = 607},
  [224] = {.lex_state = 463},
  [225] = {.lex_state = 914},
  [226] = {.lex_state = 326},
  [227] = {.lex_state = 181},
  [228] = {.lex_state = 181},
  [229] = {.lex_state = 607},
  [230] = {.lex_state = 507},
  [231] = {.lex_state = 463},
  [232] = {.lex_state = 454},
  [233] = {.lex_state = 463},
  [234] = {.lex_state = 779},
  [235] = {.lex_state = 779},
  [236] = {.lex_state = 919, .external_lex_state = 2},
  [237] = {.lex_state = 924, .external_lex_state = 2},
  [238] = {.lex_state = 181},
  [239] = {.lex_state = 515, .external_lex_state = 2},
  [240] = {.lex_state = 919, .external_lex_state = 2},
  [241] = {.lex_state = 779},
  [242] = {.lex_state = 353},
  [243] = {.lex_state = 919, .external_lex_state = 2},
  [244] = {.lex_state = 632},
  [245] = {.lex_state = 919, .external_lex_state = 2},
  [246] = {.lex_state = 556},
  [247] = {.lex_state = 353},
  [248] = {.lex_state = 181},
  [249] = {.lex_state = 181},
  [250] = {.lex_state = 931, .external_lex_state = 4},
  [251] = {.lex_state = 556},
  [252] = {.lex_state = 181},
  [253] = {.lex_state = 181},
  [254] = {.lex_state = 326},
  [255] = {.lex_state = 515, .external_lex_state = 2},
  [256] = {.lex_state = 515, .external_lex_state = 2},
  [257] = {.lex_state = 181},
  [258] = {.lex_state = 936, .external_lex_state = 2},
  [259] = {.lex_state = 454},
  [260] = {.lex_state = 454},
  [261] = {.lex_state = 507},
  [262] = {.lex_state = 454},
  [263] = {.lex_state = 515, .external_lex_state = 2},
  [264] = {.lex_state = 353},
  [265] = {.lex_state = 454},
  [266] = {.lex_state = 454},
  [267] = {.lex_state = 515, .external_lex_state = 2},
  [268] = {.lex_state = 181},
  [269] = {.lex_state = 181},
  [270] = {.lex_state = 353},
  [271] = {.lex_state = 181},
  [272] = {.lex_state = 181},
  [273] = {.lex_state = 637},
  [274] = {.lex_state = 181},
  [275] = {.lex_state = 515, .external_lex_state = 2},
  [276] = {.lex_state = 941},
  [277] = {.lex_state = 941},
  [278] = {.lex_state = 941},
  [279] = {.lex_state = 941},
  [280] = {.lex_state = 931, .external_lex_state = 4},
  [281] = {.lex_state = 556},
  [282] = {.lex_state = 515, .external_lex_state = 2},
  [283] = {.lex_state = 181},
  [284] = {.lex_state = 353},
  [285] = {.lex_state = 454},
  [286] = {.lex_state = 454},
  [287] = {.lex_state = 582},
  [288] = {.lex_state = 181},
  [289] = {.lex_state = 582},
  [290] = {.lex_state = 507},
  [291] = {.lex_state = 454},
  [292] = {.lex_state = 353},
  [293] = {.lex_state = 181},
  [294] = {.lex_state = 582},
  [295] = {.lex_state = 582},
  [296] = {.lex_state = 515, .external_lex_state = 2},
  [297] = {.lex_state = 612, .external_lex_state = 2},
  [298] = {.lex_state = 602, .external_lex_state = 2},
  [299] = {.lex_state = 612, .external_lex_state = 2},
  [300] = {.lex_state = 181},
  [301] = {.lex_state = 612, .external_lex_state = 2},
  [302] = {.lex_state = 597, .external_lex_state = 2},
  [303] = {.lex_state = 836, .external_lex_state = 2},
  [304] = {.lex_state = 841, .external_lex_state = 2},
  [305] = {.lex_state = 515, .external_lex_state = 2},
  [306] = {.lex_state = 454},
  [307] = {.lex_state = 454},
  [308] = {.lex_state = 454},
  [309] = {.lex_state = 946, .external_lex_state = 2},
  [310] = {.lex_state = 951, .external_lex_state = 2},
  [311] = {.lex_state = 496},
  [312] = {.lex_state = 507},
  [313] = {.lex_state = 951, .external_lex_state = 2},
  [314] = {.lex_state = 826, .external_lex_state = 2},
  [315] = {.lex_state = 956, .external_lex_state = 2},
  [316] = {.lex_state = 961, .external_lex_state = 2},
  [317] = {.lex_state = 966, .external_lex_state = 2},
  [318] = {.lex_state = 961, .external_lex_state = 2},
  [319] = {.lex_state = 946, .external_lex_state = 2},
  [320] = {.lex_state = 961, .external_lex_state = 2},
  [321] = {.lex_state = 966, .external_lex_state = 2},
  [322] = {.lex_state = 454},
  [323] = {.lex_state = 515, .external_lex_state = 2},
  [324] = {.lex_state = 181},
  [325] = {.lex_state = 846, .external_lex_state = 2},
  [326] = {.lex_state = 946, .external_lex_state = 2},
  [327] = {.lex_state = 181},
  [328] = {.lex_state = 454},
  [329] = {.lex_state = 856, .external_lex_state = 2},
  [330] = {.lex_state = 454},
  [331] = {.lex_state = 866, .external_lex_state = 2},
  [332] = {.lex_state = 181},
  [333] = {.lex_state = 856, .external_lex_state = 2},
  [334] = {.lex_state = 871, .external_lex_state = 2},
  [335] = {.lex_state = 181},
  [336] = {.lex_state = 841, .external_lex_state = 2},
  [337] = {.lex_state = 454},
  [338] = {.lex_state = 454},
  [339] = {.lex_state = 779},
  [340] = {.lex_state = 971, .external_lex_state = 2},
  [341] = {.lex_state = 515, .external_lex_state = 2},
  [342] = {.lex_state = 181},
  [343] = {.lex_state = 454},
  [344] = {.lex_state = 637},
  [345] = {.lex_state = 454},
  [346] = {.lex_state = 181},
  [347] = {.lex_state = 181},
  [348] = {.lex_state = 637},
  [349] = {.lex_state = 181},
  [350] = {.lex_state = 181},
  [351] = {.lex_state = 181},
  [352] = {.lex_state = 885},
  [353] = {.lex_state = 885},
  [354] = {.lex_state = 892},
  [355] = {.lex_state = 892},
  [356] = {.lex_state = 507},
  [357] = {.lex_state = 507},
  [358] = {.lex_state = 507},
  [359] = {.lex_state = 507},
  [360] = {.lex_state = 976},
  [361] = {.lex_state = 976},
  [362] = {.lex_state = 983, .external_lex_state = 4},
  [363] = {.lex_state = 988},
  [364] = {.lex_state = 765, .external_lex_state = 2},
  [365] = {.lex_state = 765, .external_lex_state = 2},
  [366] = {.lex_state = 181},
  [367] = {.lex_state = 909, .external_lex_state = 2},
  [368] = {.lex_state = 507},
  [369] = {.lex_state = 454},
  [370] = {.lex_state = 454},
  [371] = {.lex_state = 454},
  [372] = {.lex_state = 899, .external_lex_state = 2},
  [373] = {.lex_state = 765, .external_lex_state = 2},
  [374] = {.lex_state = 909, .external_lex_state = 2},
  [375] = {.lex_state = 993, .external_lex_state = 2},
  [376] = {.lex_state = 765, .external_lex_state = 2},
  [377] = {.lex_state = 899, .external_lex_state = 2},
  [378] = {.lex_state = 899, .external_lex_state = 2},
  [379] = {.lex_state = 993, .external_lex_state = 2},
  [380] = {.lex_state = 765, .external_lex_state = 2},
  [381] = {.lex_state = 515, .external_lex_state = 2},
  [382] = {.lex_state = 765, .external_lex_state = 2},
  [383] = {.lex_state = 181},
  [384] = {.lex_state = 520},
  [385] = {.lex_state = 607},
  [386] = {.lex_state = 520},
  [387] = {.lex_state = 454},
  [388] = {.lex_state = 520},
  [389] = {.lex_state = 520},
  [390] = {.lex_state = 520},
  [391] = {.lex_state = 520},
  [392] = {.lex_state = 181},
  [393] = {.lex_state = 463},
  [394] = {.lex_state = 607},
  [395] = {.lex_state = 463},
  [396] = {.lex_state = 607},
  [397] = {.lex_state = 607},
  [398] = {.lex_state = 607},
  [399] = {.lex_state = 607},
  [400] = {.lex_state = 181},
  [401] = {.lex_state = 181},
  [402] = {.lex_state = 181},
  [403] = {.lex_state = 779},
  [404] = {.lex_state = 181},
  [405] = {.lex_state = 779},
  [406] = {.lex_state = 998},
  [407] = {.lex_state = 632},
  [408] = {.lex_state = 181},
  [409] = {.lex_state = 181},
  [410] = {.lex_state = 353},
  [411] = {.lex_state = 181},
  [412] = {.lex_state = 353},
  [413] = {.lex_state = 998},
  [414] = {.lex_state = 779},
  [415] = {.lex_state = 779},
  [416] = {.lex_state = 181},
  [417] = {.lex_state = 779},
  [418] = {.lex_state = 779},
  [419] = {.lex_state = 779},
  [420] = {.lex_state = 779},
  [421] = {.lex_state = 1003, .external_lex_state = 2},
  [422] = {.lex_state = 971, .external_lex_state = 2},
  [423] = {.lex_state = 971, .external_lex_state = 2},
  [424] = {.lex_state = 1003, .external_lex_state = 2},
  [425] = {.lex_state = 779},
  [426] = {.lex_state = 971, .external_lex_state = 2},
  [427] = {.lex_state = 181},
  [428] = {.lex_state = 779},
  [429] = {.lex_state = 515, .external_lex_state = 2},
  [430] = {.lex_state = 779},
  [431] = {.lex_state = 779},
  [432] = {.lex_state = 454},
  [433] = {.lex_state = 454},
  [434] = {.lex_state = 353},
  [435] = {.lex_state = 181},
  [436] = {.lex_state = 1008},
  [437] = {.lex_state = 181},
  [438] = {.lex_state = 515, .external_lex_state = 2},
  [439] = {.lex_state = 931, .external_lex_state = 4},
  [440] = {.lex_state = 556},
  [441] = {.lex_state = 936, .external_lex_state = 2},
  [442] = {.lex_state = 1008},
  [443] = {.lex_state = 454},
  [444] = {.lex_state = 515, .external_lex_state = 2},
  [445] = {.lex_state = 181},
  [446] = {.lex_state = 515, .external_lex_state = 2},
  [447] = {.lex_state = 181},
  [448] = {.lex_state = 454},
  [449] = {.lex_state = 507},
  [450] = {.lex_state = 515, .external_lex_state = 2},
  [451] = {.lex_state = 454},
  [452] = {.lex_state = 181},
  [453] = {.lex_state = 454},
  [454] = {.lex_state = 515, .external_lex_state = 2},
  [455] = {.lex_state = 181},
  [456] = {.lex_state = 181},
  [457] = {.lex_state = 181},
  [458] = {.lex_state = 353},
  [459] = {.lex_state = 454},
  [460] = {.lex_state = 181},
  [461] = {.lex_state = 181},
  [462] = {.lex_state = 515, .external_lex_state = 2},
  [463] = {.lex_state = 931, .external_lex_state = 4},
  [464] = {.lex_state = 556},
  [465] = {.lex_state = 353},
  [466] = {.lex_state = 454},
  [467] = {.lex_state = 181},
  [468] = {.lex_state = 454},
  [469] = {.lex_state = 454},
  [470] = {.lex_state = 353},
  [471] = {.lex_state = 353},
  [472] = {.lex_state = 454},
  [473] = {.lex_state = 582},
  [474] = {.lex_state = 582},
  [475] = {.lex_state = 353},
  [476] = {.lex_state = 181},
  [477] = {.lex_state = 454},
  [478] = {.lex_state = 353},
  [479] = {.lex_state = 612, .external_lex_state = 2},
  [480] = {.lex_state = 841, .external_lex_state = 2},
  [481] = {.lex_state = 515, .external_lex_state = 2},
  [482] = {.lex_state = 181},
  [483] = {.lex_state = 454},
  [484] = {.lex_state = 961, .external_lex_state = 2},
  [485] = {.lex_state = 181},
  [486] = {.lex_state = 951, .external_lex_state = 2},
  [487] = {.lex_state = 507},
  [488] = {.lex_state = 454},
  [489] = {.lex_state = 956, .external_lex_state = 2},
  [490] = {.lex_state = 181},
  [491] = {.lex_state = 961, .external_lex_state = 2},
  [492] = {.lex_state = 966, .external_lex_state = 2},
  [493] = {.lex_state = 181},
  [494] = {.lex_state = 846, .external_lex_state = 2},
  [495] = {.lex_state = 181},
  [496] = {.lex_state = 861, .external_lex_state = 2},
  [497] = {.lex_state = 181},
  [498] = {.lex_state = 861, .external_lex_state = 2},
  [499] = {.lex_state = 866, .external_lex_state = 2},
  [500] = {.lex_state = 181},
  [501] = {.lex_state = 454},
  [502] = {.lex_state = 866, .external_lex_state = 2},
  [503] = {.lex_state = 841, .external_lex_state = 2},
  [504] = {.lex_state = 515, .external_lex_state = 2},
  [505] = {.lex_state = 632},
  [506] = {.lex_state = 181},
  [507] = {.lex_state = 181},
  [508] = {.lex_state = 181},
  [509] = {.lex_state = 181},
  [510] = {.lex_state = 181},
  [511] = {.lex_state = 454},
  [512] = {.lex_state = 181},
  [513] = {.lex_state = 885},
  [514] = {.lex_state = 892},
  [515] = {.lex_state = 507},
  [516] = {.lex_state = 976},
  [517] = {.lex_state = 765, .external_lex_state = 2},
  [518] = {.lex_state = 1015, .external_lex_state = 2},
  [519] = {.lex_state = 515, .external_lex_state = 2},
  [520] = {.lex_state = 983, .external_lex_state = 4},
  [521] = {.lex_state = 1015, .external_lex_state = 2},
  [522] = {.lex_state = 983, .external_lex_state = 4},
  [523] = {.lex_state = 515, .external_lex_state = 2},
  [524] = {.lex_state = 988},
  [525] = {.lex_state = 988},
  [526] = {.lex_state = 909, .external_lex_state = 2},
  [527] = {.lex_state = 909, .external_lex_state = 2},
  [528] = {.lex_state = 181},
  [529] = {.lex_state = 454},
  [530] = {.lex_state = 993, .external_lex_state = 2},
  [531] = {.lex_state = 454},
  [532] = {.lex_state = 909, .external_lex_state = 2},
  [533] = {.lex_state = 181},
  [534] = {.lex_state = 993, .external_lex_state = 2},
  [535] = {.lex_state = 765, .external_lex_state = 2},
  [536] = {.lex_state = 181},
  [537] = {.lex_state = 181},
  [538] = {.lex_state = 181},
  [539] = {.lex_state = 181},
  [540] = {.lex_state = 520},
  [541] = {.lex_state = 520},
  [542] = {.lex_state = 520},
  [543] = {.lex_state = 181},
  [544] = {.lex_state = 181},
  [545] = {.lex_state = 520},
  [546] = {.lex_state = 520},
  [547] = {.lex_state = 520},
  [548] = {.lex_state = 607},
  [549] = {.lex_state = 607},
  [550] = {.lex_state = 181},
  [551] = {.lex_state = 181},
  [552] = {.lex_state = 181},
  [553] = {.lex_state = 181},
  [554] = {.lex_state = 919, .external_lex_state = 2},
  [555] = {.lex_state = 181},
  [556] = {.lex_state = 779},
  [557] = {.lex_state = 998},
  [558] = {.lex_state = 632},
  [559] = {.lex_state = 779},
  [560] = {.lex_state = 632},
  [561] = {.lex_state = 181},
  [562] = {.lex_state = 779},
  [563] = {.lex_state = 919, .external_lex_state = 2},
  [564] = {.lex_state = 181},
  [565] = {.lex_state = 779},
  [566] = {.lex_state = 353},
  [567] = {.lex_state = 181},
  [568] = {.lex_state = 779},
  [569] = {.lex_state = 779},
  [570] = {.lex_state = 779},
  [571] = {.lex_state = 779},
  [572] = {.lex_state = 779},
  [573] = {.lex_state = 181},
  [574] = {.lex_state = 779},
  [575] = {.lex_state = 779},
  [576] = {.lex_state = 919, .external_lex_state = 2},
  [577] = {.lex_state = 779},
  [578] = {.lex_state = 971, .external_lex_state = 2},
  [579] = {.lex_state = 181},
  [580] = {.lex_state = 971, .external_lex_state = 2},
  [581] = {.lex_state = 971, .external_lex_state = 2},
  [582] = {.lex_state = 779},
  [583] = {.lex_state = 515, .external_lex_state = 2},
  [584] = {.lex_state = 515, .external_lex_state = 2},
  [585] = {.lex_state = 181},
  [586] = {.lex_state = 454},
  [587] = {.lex_state = 353},
  [588] = {.lex_state = 181},
  [589] = {.lex_state = 181},
  [590] = {.lex_state = 931, .external_lex_state = 4},
  [591] = {.lex_state = 181},
  [592] = {.lex_state = 515, .external_lex_state = 2},
  [593] = {.lex_state = 515, .external_lex_state = 2},
  [594] = {.lex_state = 181},
  [595] = {.lex_state = 181},
  [596] = {.lex_state = 181},
  [597] = {.lex_state = 454},
  [598] = {.lex_state = 515, .external_lex_state = 2},
  [599] = {.lex_state = 1008},
  [600] = {.lex_state = 181},
  [601] = {.lex_state = 454},
  [602] = {.lex_state = 515, .external_lex_state = 2},
  [603] = {.lex_state = 181},
  [604] = {.lex_state = 181},
  [605] = {.lex_state = 181},
  [606] = {.lex_state = 454},
  [607] = {.lex_state = 515, .external_lex_state = 2},
  [608] = {.lex_state = 181},
  [609] = {.lex_state = 353},
  [610] = {.lex_state = 454},
  [611] = {.lex_state = 353},
  [612] = {.lex_state = 454},
  [613] = {.lex_state = 181},
  [614] = {.lex_state = 454},
  [615] = {.lex_state = 454},
  [616] = {.lex_state = 353},
  [617] = {.lex_state = 515, .external_lex_state = 2},
  [618] = {.lex_state = 826, .external_lex_state = 2},
  [619] = {.lex_state = 181},
  [620] = {.lex_state = 826, .external_lex_state = 2},
  [621] = {.lex_state = 951, .external_lex_state = 2},
  [622] = {.lex_state = 951, .external_lex_state = 2},
  [623] = {.lex_state = 956, .external_lex_state = 2},
  [624] = {.lex_state = 181},
  [625] = {.lex_state = 454},
  [626] = {.lex_state = 956, .external_lex_state = 2},
  [627] = {.lex_state = 515, .external_lex_state = 2},
  [628] = {.lex_state = 181},
  [629] = {.lex_state = 846, .external_lex_state = 2},
  [630] = {.lex_state = 861, .external_lex_state = 2},
  [631] = {.lex_state = 866, .external_lex_state = 2},
  [632] = {.lex_state = 515, .external_lex_state = 2},
  [633] = {.lex_state = 181},
  [634] = {.lex_state = 181},
  [635] = {.lex_state = 983, .external_lex_state = 4},
  [636] = {.lex_state = 454},
  [637] = {.lex_state = 1020, .external_lex_state = 2},
  [638] = {.lex_state = 1025, .external_lex_state = 2},
  [639] = {.lex_state = 1025, .external_lex_state = 2},
  [640] = {.lex_state = 1020, .external_lex_state = 2},
  [641] = {.lex_state = 765, .external_lex_state = 2},
  [642] = {.lex_state = 983, .external_lex_state = 4},
  [643] = {.lex_state = 988},
  [644] = {.lex_state = 988},
  [645] = {.lex_state = 765, .external_lex_state = 2},
  [646] = {.lex_state = 181},
  [647] = {.lex_state = 765, .external_lex_state = 2},
  [648] = {.lex_state = 909, .external_lex_state = 2},
  [649] = {.lex_state = 181},
  [650] = {.lex_state = 454},
  [651] = {.lex_state = 909, .external_lex_state = 2},
  [652] = {.lex_state = 181},
  [653] = {.lex_state = 520},
  [654] = {.lex_state = 520},
  [655] = {.lex_state = 520},
  [656] = {.lex_state = 181},
  [657] = {.lex_state = 181},
  [658] = {.lex_state = 998},
  [659] = {.lex_state = 181},
  [660] = {.lex_state = 998},
  [661] = {.lex_state = 181},
  [662] = {.lex_state = 181},
  [663] = {.lex_state = 919, .external_lex_state = 2},
  [664] = {.lex_state = 998},
  [665] = {.lex_state = 998},
  [666] = {.lex_state = 632},
  [667] = {.lex_state = 632},
  [668] = {.lex_state = 779},
  [669] = {.lex_state = 181},
  [670] = {.lex_state = 779},
  [671] = {.lex_state = 919, .external_lex_state = 2},
  [672] = {.lex_state = 998},
  [673] = {.lex_state = 779},
  [674] = {.lex_state = 353},
  [675] = {.lex_state = 998},
  [676] = {.lex_state = 779},
  [677] = {.lex_state = 779},
  [678] = {.lex_state = 779},
  [679] = {.lex_state = 971, .external_lex_state = 2},
  [680] = {.lex_state = 181},
  [681] = {.lex_state = 971, .external_lex_state = 2},
  [682] = {.lex_state = 181},
  [683] = {.lex_state = 181},
  [684] = {.lex_state = 181},
  [685] = {.lex_state = 931, .external_lex_state = 4},
  [686] = {.lex_state = 181},
  [687] = {.lex_state = 181},
  [688] = {.lex_state = 1008},
  [689] = {.lex_state = 181},
  [690] = {.lex_state = 181},
  [691] = {.lex_state = 181},
  [692] = {.lex_state = 515, .external_lex_state = 2},
  [693] = {.lex_state = 181},
  [694] = {.lex_state = 353},
  [695] = {.lex_state = 181},
  [696] = {.lex_state = 826, .external_lex_state = 2},
  [697] = {.lex_state = 956, .external_lex_state = 2},
  [698] = {.lex_state = 515, .external_lex_state = 2},
  [699] = {.lex_state = 1020, .external_lex_state = 2},
  [700] = {.lex_state = 1020, .external_lex_state = 2},
  [701] = {.lex_state = 765, .external_lex_state = 2},
  [702] = {.lex_state = 909, .external_lex_state = 2},
  [703] = {.lex_state = 998},
  [704] = {.lex_state = 998},
  [705] = {.lex_state = 632},
  [706] = {.lex_state = 632},
  [707] = {.lex_state = 181},
  [708] = {.lex_state = 779},
  [709] = {.lex_state = 779},
  [710] = {.lex_state = 779},
  [711] = {.lex_state = 971, .external_lex_state = 2},
  [712] = {.lex_state = 181},
  [713] = {.lex_state = 515, .external_lex_state = 2},
  [714] = {.lex_state = 181},
  [715] = {.lex_state = 181},
  [716] = {.lex_state = 181},
  [717] = {.lex_state = 181},
  [718] = {.lex_state = 1008},
  [719] = {.lex_state = 181},
  [720] = {.lex_state = 632},
  [721] = {.lex_state = 779},
  [722] = {.lex_state = 515, .external_lex_state = 2},
  [723] = {.lex_state = 181},
  [724] = {.lex_state = 181},
  [725] = {.lex_state = 181},
  [726] = {.lex_state = 181},
  [727] = {.lex_state = 181},
  [728] = {.lex_state = 181},
  [729] = {.lex_state = 515, .external_lex_state = 2},
  [730] = {.lex_state = 181},
  [731] = {.lex_state = 181},
  [732] = {.lex_state = 181},
  [733] = {.lex_state = 181},
  [734] = {.lex_state = 515, .external_lex_state = 2},
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
    [sym_constructor] = STATE(37),
    [sym_constructor_identifier] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [7] = {
    [sym_context] = STATE(39),
    [sym_constructor] = STATE(40),
    [sym_constructor_identifier] = STATE(38),
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
    [sym_constructor] = STATE(51),
    [sym_constructor_identifier] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [10] = {
    [sym_context] = STATE(54),
    [sym_constructor] = STATE(55),
    [sym_constructor_identifier] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [11] = {
    [sym_constructor] = STATE(58),
    [sym_constructor_identifier] = STATE(59),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [12] = {
    [sym__layout_semicolon] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(75),
    [anon_sym_DASH_GT] = ACTIONS(75),
    [sym_list_constructor] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(77),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [sym__integer_literal] = ACTIONS(75),
    [sym__octal_literal] = ACTIONS(75),
    [sym__hexidecimal_literal] = ACTIONS(75),
  },
  [13] = {
    [sym__layout_semicolon] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_COLON_COLON] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(83),
    [sym_comment] = ACTIONS(5),
  },
  [14] = {
    [sym__layout_semicolon] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_EQ_GT] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_deriving] = ACTIONS(87),
    [sym__constructor_pattern] = ACTIONS(89),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym__integer_literal] = ACTIONS(87),
    [sym__octal_literal] = ACTIONS(87),
    [sym__hexidecimal_literal] = ACTIONS(87),
  },
  [15] = {
    [sym__graphic] = STATE(64),
    [sym__small] = STATE(65),
    [sym__large] = STATE(65),
    [sym__symbol] = STATE(65),
    [sym__special] = STATE(65),
    [sym__escape] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(93),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_BANG] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(93),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(95),
    [sym__ascii_large] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(93),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_QMARK] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
    [anon_sym_BSLASH] = ACTIONS(105),
    [sym__space] = ACTIONS(99),
  },
  [16] = {
    [sym__gap] = STATE(71),
    [sym__graphic] = STATE(71),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__symbol] = STATE(73),
    [sym__special] = STATE(73),
    [sym__escape] = STATE(71),
    [aux_sym_string_repeat1] = STATE(77),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [17] = {
    [sym__layout_semicolon] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_EQ_GT] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_deriving] = ACTIONS(127),
    [sym__constructor_pattern] = ACTIONS(129),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym__integer_literal] = ACTIONS(127),
    [sym__octal_literal] = ACTIONS(127),
    [sym__hexidecimal_literal] = ACTIONS(127),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_comment] = ACTIONS(5),
  },
  [19] = {
    [sym__layout_semicolon] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(135),
    [sym_comment] = ACTIONS(5),
  },
  [20] = {
    [sym__layout_semicolon] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(139),
    [sym_comment] = ACTIONS(5),
  },
  [21] = {
    [sym_function_body] = STATE(80),
    [anon_sym_EQ] = ACTIONS(141),
    [sym_comment] = ACTIONS(5),
  },
  [22] = {
    [sym__function_pattern] = STATE(91),
    [sym_label_pattern] = STATE(85),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(92),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(95),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [aux_sym_function_head_repeat1] = STATE(96),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(157),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [23] = {
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_TILDE] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(165),
    [anon_sym__] = ACTIONS(165),
    [sym_list_constructor] = ACTIONS(165),
    [sym__variable_pattern] = ACTIONS(167),
    [sym__constructor_pattern] = ACTIONS(167),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym__integer_literal] = ACTIONS(165),
    [sym__octal_literal] = ACTIONS(165),
    [sym__hexidecimal_literal] = ACTIONS(165),
  },
  [24] = {
    [sym__layout_semicolon] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_COLON_COLON] = ACTIONS(169),
    [sym_comment] = ACTIONS(5),
  },
  [25] = {
    [sym__layout_semicolon] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_TILDE] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym__] = ACTIONS(165),
    [anon_sym_COLON_COLON] = ACTIONS(173),
    [sym_list_constructor] = ACTIONS(165),
    [sym__variable_pattern] = ACTIONS(167),
    [sym__constructor_pattern] = ACTIONS(167),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym__integer_literal] = ACTIONS(165),
    [sym__octal_literal] = ACTIONS(165),
    [sym__hexidecimal_literal] = ACTIONS(165),
  },
  [26] = {
    [sym__layout_semicolon] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_COLON_COLON] = ACTIONS(173),
    [anon_sym_EQ_GT] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_deriving] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(175),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
  },
  [27] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(98),
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
    [ts_builtin_sym_end] = ACTIONS(177),
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
    [sym_module_exports] = STATE(101),
    [sym_where] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_where] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
  },
  [29] = {
    [sym_module_identifier] = ACTIONS(183),
    [sym_comment] = ACTIONS(5),
  },
  [30] = {
    [sym_import_specification] = STATE(107),
    [sym__layout_semicolon] = ACTIONS(185),
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_as] = ACTIONS(191),
    [anon_sym_hiding] = ACTIONS(193),
    [sym_comment] = ACTIONS(5),
  },
  [31] = {
    [anon_sym_ccall] = ACTIONS(195),
    [anon_sym_stdcall] = ACTIONS(195),
    [anon_sym_cplusplus] = ACTIONS(195),
    [anon_sym_jvm] = ACTIONS(195),
    [anon_sym_dotnet] = ACTIONS(195),
    [sym_comment] = ACTIONS(5),
  },
  [32] = {
    [sym_calling_convention] = STATE(109),
    [anon_sym_ccall] = ACTIONS(197),
    [anon_sym_stdcall] = ACTIONS(197),
    [anon_sym_cplusplus] = ACTIONS(197),
    [anon_sym_jvm] = ACTIONS(197),
    [anon_sym_dotnet] = ACTIONS(197),
    [sym_comment] = ACTIONS(5),
  },
  [33] = {
    [sym__identifier] = STATE(111),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(199),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [34] = {
    [sym_constructor] = STATE(112),
    [sym_constructor_identifier] = STATE(113),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [35] = {
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_where] = ACTIONS(81),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_COLON_COLON] = ACTIONS(81),
    [anon_sym_EQ_GT] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(203),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [36] = {
    [sym_constructor] = STATE(114),
    [sym_constructor_identifier] = STATE(115),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [37] = {
    [sym_where] = STATE(118),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_EQ_GT] = ACTIONS(207),
    [sym_comment] = ACTIONS(5),
  },
  [38] = {
    [sym_labels] = STATE(127),
    [sym_label] = STATE(128),
    [sym_strict] = STATE(129),
    [sym__literal] = STATE(130),
    [sym__identifier] = STATE(131),
    [sym_variable_identifier] = STATE(132),
    [sym_constructor_identifier] = STATE(132),
    [sym_integer] = STATE(123),
    [sym_char] = STATE(123),
    [sym_string] = STATE(123),
    [sym_fields] = STATE(127),
    [aux_sym_constructor_repeat1] = STATE(133),
    [aux_sym_constructor_repeat3] = STATE(134),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_where] = ACTIONS(213),
    [anon_sym_EQ_GT] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(215),
    [sym__variable_pattern] = ACTIONS(217),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [sym__integer_literal] = ACTIONS(225),
    [sym__octal_literal] = ACTIONS(225),
    [sym__hexidecimal_literal] = ACTIONS(225),
  },
  [39] = {
    [sym_constructor] = STATE(135),
    [sym_constructor_identifier] = STATE(115),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [40] = {
    [sym_where] = STATE(136),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_EQ_GT] = ACTIONS(207),
    [sym_comment] = ACTIONS(5),
  },
  [41] = {
    [sym__layout_semicolon] = ACTIONS(227),
    [anon_sym_SEMI] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_BANG] = ACTIONS(229),
    [anon_sym_DOT] = ACTIONS(229),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(229),
    [anon_sym_DOLLAR] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(229),
    [anon_sym_1] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_QMARK] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(229),
  },
  [42] = {
    [sym__identifier] = STATE(137),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [43] = {
    [sym__constructor_symbol] = STATE(139),
    [aux_sym_constructor_symbol_repeat1] = STATE(140),
    [sym__layout_semicolon] = ACTIONS(231),
    [anon_sym_SEMI] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_COLON] = ACTIONS(235),
    [anon_sym_BANG] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(235),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(235),
    [anon_sym_DOLLAR] = ACTIONS(235),
    [anon_sym_PERCENT] = ACTIONS(235),
    [anon_sym_AMP] = ACTIONS(235),
    [anon_sym_1] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_QMARK] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(235),
  },
  [44] = {
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym__] = ACTIONS(127),
    [anon_sym_BQUOTE] = ACTIONS(127),
    [anon_sym_COLON] = ACTIONS(127),
    [sym_list_constructor] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [sym__variable_pattern] = ACTIONS(129),
    [sym__constructor_pattern] = ACTIONS(129),
    [anon_sym_DOT] = ACTIONS(127),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_PERCENT] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_1] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_QMARK] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(127),
    [sym__integer_literal] = ACTIONS(127),
    [sym__octal_literal] = ACTIONS(127),
    [sym__hexidecimal_literal] = ACTIONS(127),
  },
  [45] = {
    [aux_sym_fixity_repeat1] = STATE(142),
    [sym__layout_semicolon] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(241),
    [sym_comment] = ACTIONS(5),
  },
  [46] = {
    [sym__layout_semicolon] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [sym_comment] = ACTIONS(5),
  },
  [47] = {
    [sym__op] = STATE(143),
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
    [sym__variable_symbol] = STATE(144),
    [aux_sym_variable_symbol_repeat1] = STATE(145),
    [sym__layout_semicolon] = ACTIONS(247),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
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
    [sym__layout_semicolon] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_EQ_GT] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_deriving] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(203),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [50] = {
    [sym_constructor] = STATE(147),
    [sym_constructor_identifier] = STATE(148),
    [sym__constructor_pattern] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
  },
  [51] = {
    [sym_constructors] = STATE(151),
    [sym_constructor] = STATE(152),
    [sym_deriving] = STATE(153),
    [sym_constructor_identifier] = STATE(154),
    [sym__layout_semicolon] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_EQ] = ACTIONS(257),
    [anon_sym_EQ_GT] = ACTIONS(207),
    [anon_sym_deriving] = ACTIONS(259),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [52] = {
    [sym_labels] = STATE(159),
    [sym_label] = STATE(160),
    [sym_strict] = STATE(161),
    [sym__literal] = STATE(162),
    [sym__identifier] = STATE(163),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym_fields] = STATE(159),
    [aux_sym_constructor_repeat1] = STATE(164),
    [aux_sym_constructor_repeat3] = STATE(165),
    [sym__layout_semicolon] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_EQ_GT] = ACTIONS(213),
    [anon_sym_deriving] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(267),
    [sym__variable_pattern] = ACTIONS(269),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [53] = {
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_DASH_GT] = ACTIONS(81),
    [anon_sym_EQ_GT] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [54] = {
    [sym_constructor] = STATE(166),
    [sym_constructor_identifier] = STATE(59),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [55] = {
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_EQ_GT] = ACTIONS(207),
    [sym_comment] = ACTIONS(5),
  },
  [56] = {
    [sym_labels] = STATE(127),
    [sym_label] = STATE(128),
    [sym_strict] = STATE(170),
    [sym__literal] = STATE(130),
    [sym__identifier] = STATE(171),
    [sym_variable_identifier] = STATE(172),
    [sym_constructor_identifier] = STATE(172),
    [sym_integer] = STATE(123),
    [sym_char] = STATE(123),
    [sym_string] = STATE(123),
    [sym_fields] = STATE(127),
    [aux_sym_constructor_repeat1] = STATE(173),
    [aux_sym_constructor_repeat3] = STATE(134),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_EQ_GT] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(273),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [sym__integer_literal] = ACTIONS(225),
    [sym__octal_literal] = ACTIONS(225),
    [sym__hexidecimal_literal] = ACTIONS(225),
  },
  [57] = {
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [58] = {
    [anon_sym_EQ] = ACTIONS(277),
    [sym_comment] = ACTIONS(5),
  },
  [59] = {
    [sym_labels] = STATE(179),
    [sym_label] = STATE(180),
    [sym_strict] = STATE(181),
    [sym__literal] = STATE(182),
    [sym__identifier] = STATE(183),
    [sym_variable_identifier] = STATE(184),
    [sym_constructor_identifier] = STATE(184),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [sym_fields] = STATE(179),
    [aux_sym_constructor_repeat1] = STATE(185),
    [aux_sym_constructor_repeat3] = STATE(186),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(283),
    [sym__variable_pattern] = ACTIONS(285),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [60] = {
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_EQ] = ACTIONS(287),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_AT] = ACTIONS(287),
    [anon_sym__] = ACTIONS(287),
    [sym_list_constructor] = ACTIONS(287),
    [sym__variable_pattern] = ACTIONS(289),
    [sym__constructor_pattern] = ACTIONS(289),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(289),
    [anon_sym_SQUOTE] = ACTIONS(287),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [sym__integer_literal] = ACTIONS(287),
    [sym__octal_literal] = ACTIONS(287),
    [sym__hexidecimal_literal] = ACTIONS(287),
  },
  [61] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(291),
  },
  [62] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(293),
  },
  [63] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(295),
  },
  [64] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(297),
  },
  [65] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(299),
  },
  [66] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(301),
  },
  [67] = {
    [sym__char_escape] = STATE(189),
    [sym__ascii] = STATE(189),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(305),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_CARET] = ACTIONS(307),
    [anon_sym_BSLASH] = ACTIONS(303),
    [anon_sym_x] = ACTIONS(309),
    [anon_sym_X] = ACTIONS(309),
    [anon_sym_o] = ACTIONS(311),
    [anon_sym_O] = ACTIONS(311),
    [anon_sym_a] = ACTIONS(303),
    [anon_sym_b] = ACTIONS(303),
    [anon_sym_f] = ACTIONS(303),
    [anon_sym_n] = ACTIONS(303),
    [anon_sym_r] = ACTIONS(303),
    [anon_sym_t] = ACTIONS(303),
    [anon_sym_v] = ACTIONS(303),
    [anon_sym_NUL] = ACTIONS(313),
    [anon_sym_SOH] = ACTIONS(313),
    [anon_sym_STX] = ACTIONS(313),
    [anon_sym_ETX] = ACTIONS(313),
    [anon_sym_EOT] = ACTIONS(313),
    [anon_sym_ENQ] = ACTIONS(313),
    [anon_sym_ACK] = ACTIONS(313),
    [anon_sym_BEL] = ACTIONS(313),
    [anon_sym_BS] = ACTIONS(313),
    [anon_sym_HT] = ACTIONS(313),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_VT] = ACTIONS(313),
    [anon_sym_FF] = ACTIONS(313),
    [anon_sym_CR] = ACTIONS(313),
    [anon_sym_SO] = ACTIONS(313),
    [anon_sym_SI] = ACTIONS(313),
    [anon_sym_DLE] = ACTIONS(313),
    [anon_sym_DC1] = ACTIONS(313),
    [anon_sym_DC2] = ACTIONS(313),
    [anon_sym_DC3] = ACTIONS(313),
    [anon_sym_DC4] = ACTIONS(313),
    [anon_sym_NAK] = ACTIONS(313),
    [anon_sym_SYN] = ACTIONS(313),
    [anon_sym_ETB] = ACTIONS(313),
    [anon_sym_CAN] = ACTIONS(313),
    [anon_sym_EM] = ACTIONS(313),
    [anon_sym_SUB] = ACTIONS(313),
    [anon_sym_ESC] = ACTIONS(313),
    [anon_sym_FS] = ACTIONS(313),
    [anon_sym_GS] = ACTIONS(313),
    [anon_sym_RS] = ACTIONS(313),
    [anon_sym_US] = ACTIONS(313),
    [anon_sym_SP] = ACTIONS(313),
    [anon_sym_DEL] = ACTIONS(313),
  },
  [68] = {
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_TILDE] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RBRACK] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_AT] = ACTIONS(315),
    [anon_sym__] = ACTIONS(315),
    [anon_sym_BQUOTE] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_BANG] = ACTIONS(315),
    [anon_sym_DOT] = ACTIONS(315),
    [sym_comment] = ACTIONS(97),
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
    [anon_sym_BSLASH] = ACTIONS(315),
    [sym__space] = ACTIONS(315),
    [sym__newline] = ACTIONS(315),
    [sym__tab] = ACTIONS(315),
    [sym__vertical_tab] = ACTIONS(315),
  },
  [69] = {
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
    [sym_comment] = ACTIONS(97),
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
  [70] = {
    [anon_sym_SEMI] = ACTIONS(319),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_LPAREN] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(319),
    [anon_sym_EQ] = ACTIONS(319),
    [anon_sym_TILDE] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_RBRACK] = ACTIONS(319),
    [anon_sym_DASH] = ACTIONS(319),
    [anon_sym_AT] = ACTIONS(319),
    [anon_sym__] = ACTIONS(319),
    [anon_sym_BQUOTE] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_BANG] = ACTIONS(319),
    [anon_sym_DOT] = ACTIONS(319),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(319),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(319),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(319),
    [sym__ascii_large] = ACTIONS(319),
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
    [anon_sym_BSLASH] = ACTIONS(319),
    [sym__space] = ACTIONS(319),
    [sym__newline] = ACTIONS(319),
    [sym__tab] = ACTIONS(319),
    [sym__vertical_tab] = ACTIONS(319),
  },
  [71] = {
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(321),
    [anon_sym_RBRACE] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_EQ] = ACTIONS(321),
    [anon_sym_TILDE] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(321),
    [anon_sym_RBRACK] = ACTIONS(321),
    [anon_sym_DASH] = ACTIONS(321),
    [anon_sym_AT] = ACTIONS(321),
    [anon_sym__] = ACTIONS(321),
    [anon_sym_BQUOTE] = ACTIONS(321),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(321),
    [anon_sym_BANG] = ACTIONS(321),
    [anon_sym_DOT] = ACTIONS(321),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(321),
    [sym__ascii_large] = ACTIONS(321),
    [anon_sym_POUND] = ACTIONS(321),
    [anon_sym_DOLLAR] = ACTIONS(321),
    [anon_sym_PERCENT] = ACTIONS(321),
    [anon_sym_AMP] = ACTIONS(321),
    [anon_sym_1] = ACTIONS(321),
    [anon_sym_PLUS] = ACTIONS(321),
    [anon_sym_SLASH] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_QMARK] = ACTIONS(321),
    [anon_sym_CARET] = ACTIONS(321),
    [anon_sym_BSLASH] = ACTIONS(321),
    [sym__space] = ACTIONS(321),
    [sym__newline] = ACTIONS(321),
    [sym__tab] = ACTIONS(321),
    [sym__vertical_tab] = ACTIONS(321),
  },
  [72] = {
    [sym__layout_semicolon] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_COMMA] = ACTIONS(325),
    [anon_sym_EQ] = ACTIONS(325),
    [anon_sym_EQ_GT] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_deriving] = ACTIONS(325),
    [sym__constructor_pattern] = ACTIONS(327),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(327),
    [anon_sym_SQUOTE] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [sym__integer_literal] = ACTIONS(325),
    [sym__octal_literal] = ACTIONS(325),
    [sym__hexidecimal_literal] = ACTIONS(325),
  },
  [73] = {
    [anon_sym_SEMI] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(329),
    [anon_sym_RBRACE] = ACTIONS(329),
    [anon_sym_LPAREN] = ACTIONS(329),
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_EQ] = ACTIONS(329),
    [anon_sym_TILDE] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_RBRACK] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_AT] = ACTIONS(329),
    [anon_sym__] = ACTIONS(329),
    [anon_sym_BQUOTE] = ACTIONS(329),
    [anon_sym_COLON] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(329),
    [anon_sym_BANG] = ACTIONS(329),
    [anon_sym_DOT] = ACTIONS(329),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(329),
    [sym__ascii_large] = ACTIONS(329),
    [anon_sym_POUND] = ACTIONS(329),
    [anon_sym_DOLLAR] = ACTIONS(329),
    [anon_sym_PERCENT] = ACTIONS(329),
    [anon_sym_AMP] = ACTIONS(329),
    [anon_sym_1] = ACTIONS(329),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(329),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_QMARK] = ACTIONS(329),
    [anon_sym_CARET] = ACTIONS(329),
    [anon_sym_BSLASH] = ACTIONS(329),
    [sym__space] = ACTIONS(329),
    [sym__newline] = ACTIONS(329),
    [sym__tab] = ACTIONS(329),
    [sym__vertical_tab] = ACTIONS(329),
  },
  [74] = {
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_RBRACE] = ACTIONS(331),
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_EQ] = ACTIONS(331),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(331),
    [anon_sym_AT] = ACTIONS(331),
    [anon_sym__] = ACTIONS(331),
    [anon_sym_BQUOTE] = ACTIONS(331),
    [anon_sym_COLON] = ACTIONS(331),
    [anon_sym_PIPE] = ACTIONS(331),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_DOT] = ACTIONS(331),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(331),
    [sym__ascii_large] = ACTIONS(331),
    [anon_sym_POUND] = ACTIONS(331),
    [anon_sym_DOLLAR] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(331),
    [anon_sym_1] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(331),
    [anon_sym_GT] = ACTIONS(331),
    [anon_sym_QMARK] = ACTIONS(331),
    [anon_sym_CARET] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(331),
    [sym__space] = ACTIONS(331),
    [sym__newline] = ACTIONS(331),
    [sym__tab] = ACTIONS(331),
    [sym__vertical_tab] = ACTIONS(331),
  },
  [75] = {
    [sym__char_escape] = STATE(195),
    [sym__ascii] = STATE(195),
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
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(333),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(317),
    [sym__ascii_large] = ACTIONS(317),
    [anon_sym_POUND] = ACTIONS(317),
    [anon_sym_DOLLAR] = ACTIONS(317),
    [anon_sym_PERCENT] = ACTIONS(317),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_1] = ACTIONS(317),
    [anon_sym_PLUS] = ACTIONS(317),
    [anon_sym_SLASH] = ACTIONS(317),
    [anon_sym_LT] = ACTIONS(317),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_CARET] = ACTIONS(337),
    [anon_sym_BSLASH] = ACTIONS(333),
    [sym__space] = ACTIONS(317),
    [sym__newline] = ACTIONS(317),
    [sym__tab] = ACTIONS(317),
    [sym__vertical_tab] = ACTIONS(317),
    [anon_sym_x] = ACTIONS(339),
    [anon_sym_X] = ACTIONS(339),
    [anon_sym_o] = ACTIONS(341),
    [anon_sym_O] = ACTIONS(341),
    [anon_sym_a] = ACTIONS(333),
    [anon_sym_b] = ACTIONS(333),
    [anon_sym_f] = ACTIONS(333),
    [anon_sym_n] = ACTIONS(333),
    [anon_sym_r] = ACTIONS(333),
    [anon_sym_t] = ACTIONS(333),
    [anon_sym_v] = ACTIONS(333),
    [anon_sym_NUL] = ACTIONS(343),
    [anon_sym_SOH] = ACTIONS(343),
    [anon_sym_STX] = ACTIONS(343),
    [anon_sym_ETX] = ACTIONS(343),
    [anon_sym_EOT] = ACTIONS(343),
    [anon_sym_ENQ] = ACTIONS(343),
    [anon_sym_ACK] = ACTIONS(343),
    [anon_sym_BEL] = ACTIONS(343),
    [anon_sym_BS] = ACTIONS(343),
    [anon_sym_HT] = ACTIONS(343),
    [anon_sym_LF] = ACTIONS(343),
    [anon_sym_VT] = ACTIONS(343),
    [anon_sym_FF] = ACTIONS(343),
    [anon_sym_CR] = ACTIONS(343),
    [anon_sym_SO] = ACTIONS(343),
    [anon_sym_SI] = ACTIONS(343),
    [anon_sym_DLE] = ACTIONS(343),
    [anon_sym_DC1] = ACTIONS(343),
    [anon_sym_DC2] = ACTIONS(343),
    [anon_sym_DC3] = ACTIONS(343),
    [anon_sym_DC4] = ACTIONS(343),
    [anon_sym_NAK] = ACTIONS(343),
    [anon_sym_SYN] = ACTIONS(343),
    [anon_sym_ETB] = ACTIONS(343),
    [anon_sym_CAN] = ACTIONS(343),
    [anon_sym_EM] = ACTIONS(343),
    [anon_sym_SUB] = ACTIONS(343),
    [anon_sym_ESC] = ACTIONS(343),
    [anon_sym_FS] = ACTIONS(343),
    [anon_sym_GS] = ACTIONS(343),
    [anon_sym_RS] = ACTIONS(343),
    [anon_sym_US] = ACTIONS(343),
    [anon_sym_SP] = ACTIONS(343),
    [anon_sym_DEL] = ACTIONS(343),
  },
  [76] = {
    [anon_sym_SEMI] = ACTIONS(345),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_RBRACE] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_EQ] = ACTIONS(345),
    [anon_sym_TILDE] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(345),
    [anon_sym_RBRACK] = ACTIONS(345),
    [anon_sym_DASH] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(345),
    [anon_sym__] = ACTIONS(345),
    [anon_sym_BQUOTE] = ACTIONS(345),
    [anon_sym_COLON] = ACTIONS(345),
    [anon_sym_PIPE] = ACTIONS(345),
    [anon_sym_BANG] = ACTIONS(345),
    [anon_sym_DOT] = ACTIONS(345),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(345),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(345),
    [sym__ascii_large] = ACTIONS(345),
    [anon_sym_POUND] = ACTIONS(345),
    [anon_sym_DOLLAR] = ACTIONS(345),
    [anon_sym_PERCENT] = ACTIONS(345),
    [anon_sym_AMP] = ACTIONS(345),
    [anon_sym_1] = ACTIONS(345),
    [anon_sym_PLUS] = ACTIONS(345),
    [anon_sym_SLASH] = ACTIONS(345),
    [anon_sym_LT] = ACTIONS(345),
    [anon_sym_GT] = ACTIONS(345),
    [anon_sym_QMARK] = ACTIONS(345),
    [anon_sym_CARET] = ACTIONS(345),
    [anon_sym_BSLASH] = ACTIONS(345),
    [sym__space] = ACTIONS(345),
    [sym__newline] = ACTIONS(345),
    [sym__tab] = ACTIONS(345),
    [sym__vertical_tab] = ACTIONS(345),
  },
  [77] = {
    [sym__gap] = STATE(200),
    [sym__graphic] = STATE(200),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__symbol] = STATE(73),
    [sym__special] = STATE(73),
    [sym__escape] = STATE(200),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(351),
    [anon_sym_RBRACE] = ACTIONS(353),
    [anon_sym_import] = ACTIONS(353),
    [anon_sym_foreign] = ACTIONS(353),
    [anon_sym_default] = ACTIONS(353),
    [anon_sym_class] = ACTIONS(353),
    [anon_sym_instance] = ACTIONS(353),
    [anon_sym_infixl] = ACTIONS(353),
    [anon_sym_infixr] = ACTIONS(353),
    [anon_sym_infix] = ACTIONS(353),
    [anon_sym_data] = ACTIONS(353),
    [anon_sym_newtype] = ACTIONS(353),
    [anon_sym_type] = ACTIONS(353),
    [sym__variable_pattern] = ACTIONS(355),
    [sym__constructor_pattern] = ACTIONS(355),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(355),
    [anon_sym_SQUOTE] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [sym__integer_literal] = ACTIONS(353),
    [sym__octal_literal] = ACTIONS(353),
    [sym__hexidecimal_literal] = ACTIONS(353),
  },
  [79] = {
    [sym_where] = STATE(209),
    [sym__variable] = STATE(210),
    [sym_qualified_variable_identifier] = STATE(211),
    [sym__expression] = STATE(212),
    [sym_do_expression] = STATE(210),
    [sym_constructor] = STATE(210),
    [sym__literal] = STATE(210),
    [sym_variable_identifier] = STATE(211),
    [sym_constructor_identifier] = STATE(213),
    [sym_integer] = STATE(205),
    [sym_char] = STATE(205),
    [sym_string] = STATE(205),
    [aux_sym_function_body_repeat1] = STATE(214),
    [sym__layout_semicolon] = ACTIONS(357),
    [anon_sym_SEMI] = ACTIONS(359),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_do] = ACTIONS(361),
    [sym__variable_pattern] = ACTIONS(363),
    [sym__constructor_pattern] = ACTIONS(365),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(367),
    [anon_sym_SQUOTE] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(371),
    [sym__integer_literal] = ACTIONS(373),
    [sym__octal_literal] = ACTIONS(373),
    [sym__hexidecimal_literal] = ACTIONS(373),
  },
  [80] = {
    [sym__layout_semicolon] = ACTIONS(375),
    [anon_sym_SEMI] = ACTIONS(377),
    [sym_comment] = ACTIONS(5),
  },
  [81] = {
    [sym__function_pattern] = STATE(218),
    [sym_label_pattern] = STATE(85),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym__pattern] = STATE(219),
    [sym_negative_literal] = STATE(220),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(221),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_constructor] = STATE(220),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(222),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(383),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [82] = {
    [sym__function_pattern] = STATE(223),
    [sym_label_pattern] = STATE(85),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(92),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(95),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(157),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [83] = {
    [sym__function_pattern] = STATE(226),
    [sym_label_pattern] = STATE(85),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(227),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(95),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(387),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [84] = {
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_COMMA] = ACTIONS(389),
    [anon_sym_RPAREN] = ACTIONS(389),
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym_RBRACK] = ACTIONS(389),
    [anon_sym_DASH] = ACTIONS(389),
    [anon_sym__] = ACTIONS(389),
    [anon_sym_BQUOTE] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(389),
    [sym_list_constructor] = ACTIONS(389),
    [anon_sym_BANG] = ACTIONS(389),
    [sym__variable_pattern] = ACTIONS(391),
    [sym__constructor_pattern] = ACTIONS(391),
    [anon_sym_DOT] = ACTIONS(389),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(391),
    [anon_sym_SQUOTE] = ACTIONS(389),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [anon_sym_POUND] = ACTIONS(389),
    [anon_sym_DOLLAR] = ACTIONS(389),
    [anon_sym_PERCENT] = ACTIONS(389),
    [anon_sym_AMP] = ACTIONS(389),
    [anon_sym_1] = ACTIONS(389),
    [anon_sym_PLUS] = ACTIONS(389),
    [anon_sym_SLASH] = ACTIONS(389),
    [anon_sym_LT] = ACTIONS(389),
    [anon_sym_GT] = ACTIONS(389),
    [anon_sym_QMARK] = ACTIONS(389),
    [anon_sym_CARET] = ACTIONS(389),
    [sym__integer_literal] = ACTIONS(389),
    [sym__octal_literal] = ACTIONS(389),
    [sym__hexidecimal_literal] = ACTIONS(389),
  },
  [85] = {
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_COMMA] = ACTIONS(393),
    [anon_sym_RPAREN] = ACTIONS(393),
    [anon_sym_EQ] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_RBRACK] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym__] = ACTIONS(393),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(393),
    [sym_list_constructor] = ACTIONS(393),
    [anon_sym_BANG] = ACTIONS(393),
    [sym__variable_pattern] = ACTIONS(395),
    [sym__constructor_pattern] = ACTIONS(395),
    [anon_sym_DOT] = ACTIONS(393),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(395),
    [anon_sym_SQUOTE] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [anon_sym_POUND] = ACTIONS(393),
    [anon_sym_DOLLAR] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_1] = ACTIONS(393),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(393),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_QMARK] = ACTIONS(393),
    [anon_sym_CARET] = ACTIONS(393),
    [sym__integer_literal] = ACTIONS(393),
    [sym__octal_literal] = ACTIONS(393),
    [sym__hexidecimal_literal] = ACTIONS(393),
  },
  [86] = {
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(75),
    [sym_list_constructor] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(77),
    [sym__constructor_pattern] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(75),
    [anon_sym_DOLLAR] = ACTIONS(75),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_1] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_CARET] = ACTIONS(75),
    [sym__integer_literal] = ACTIONS(75),
    [sym__octal_literal] = ACTIONS(75),
    [sym__hexidecimal_literal] = ACTIONS(75),
  },
  [87] = {
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym__] = ACTIONS(81),
    [sym_list_constructor] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(203),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [88] = {
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym__] = ACTIONS(87),
    [anon_sym_BQUOTE] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(87),
    [sym_list_constructor] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [sym__variable_pattern] = ACTIONS(89),
    [sym__constructor_pattern] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(87),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_POUND] = ACTIONS(87),
    [anon_sym_DOLLAR] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(87),
    [anon_sym_1] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(87),
    [sym__integer_literal] = ACTIONS(87),
    [sym__octal_literal] = ACTIONS(87),
    [sym__hexidecimal_literal] = ACTIONS(87),
  },
  [89] = {
    [sym__graphic] = STATE(228),
    [sym__small] = STATE(65),
    [sym__large] = STATE(65),
    [sym__symbol] = STATE(65),
    [sym__special] = STATE(65),
    [sym__escape] = STATE(228),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(93),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_BANG] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(93),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(397),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(95),
    [sym__ascii_large] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(93),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_QMARK] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
    [anon_sym_BSLASH] = ACTIONS(105),
    [sym__space] = ACTIONS(397),
  },
  [90] = {
    [sym__gap] = STATE(71),
    [sym__graphic] = STATE(71),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__symbol] = STATE(73),
    [sym__special] = STATE(73),
    [sym__escape] = STATE(71),
    [aux_sym_string_repeat1] = STATE(230),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(399),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [91] = {
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_EQ] = ACTIONS(401),
    [anon_sym_TILDE] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym__] = ACTIONS(401),
    [sym_list_constructor] = ACTIONS(401),
    [sym__variable_pattern] = ACTIONS(403),
    [sym__constructor_pattern] = ACTIONS(403),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(403),
    [anon_sym_SQUOTE] = ACTIONS(401),
    [anon_sym_DQUOTE] = ACTIONS(401),
    [sym__integer_literal] = ACTIONS(401),
    [sym__octal_literal] = ACTIONS(401),
    [sym__hexidecimal_literal] = ACTIONS(401),
  },
  [92] = {
    [anon_sym_AT] = ACTIONS(405),
    [sym_comment] = ACTIONS(5),
  },
  [93] = {
    [anon_sym_LBRACE] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_COMMA] = ACTIONS(393),
    [anon_sym_RPAREN] = ACTIONS(393),
    [anon_sym_EQ] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_RBRACK] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym__] = ACTIONS(393),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(393),
    [sym_list_constructor] = ACTIONS(393),
    [anon_sym_BANG] = ACTIONS(393),
    [sym__variable_pattern] = ACTIONS(395),
    [sym__constructor_pattern] = ACTIONS(395),
    [anon_sym_DOT] = ACTIONS(393),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(395),
    [anon_sym_SQUOTE] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [anon_sym_POUND] = ACTIONS(393),
    [anon_sym_DOLLAR] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_1] = ACTIONS(393),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(393),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_QMARK] = ACTIONS(393),
    [anon_sym_CARET] = ACTIONS(393),
    [sym__integer_literal] = ACTIONS(393),
    [sym__octal_literal] = ACTIONS(393),
    [sym__hexidecimal_literal] = ACTIONS(393),
  },
  [94] = {
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(165),
    [anon_sym__] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(173),
    [sym_list_constructor] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(175),
    [sym__constructor_pattern] = ACTIONS(175),
    [anon_sym_DOT] = ACTIONS(173),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [anon_sym_POUND] = ACTIONS(173),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(173),
    [anon_sym_AMP] = ACTIONS(173),
    [anon_sym_1] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_QMARK] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(173),
    [sym__integer_literal] = ACTIONS(173),
    [sym__octal_literal] = ACTIONS(173),
    [sym__hexidecimal_literal] = ACTIONS(173),
  },
  [95] = {
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym__] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_COLON_COLON] = ACTIONS(173),
    [sym_list_constructor] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(175),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [sym__integer_literal] = ACTIONS(173),
    [sym__octal_literal] = ACTIONS(173),
    [sym__hexidecimal_literal] = ACTIONS(173),
  },
  [96] = {
    [sym__function_pattern] = STATE(233),
    [sym_label_pattern] = STATE(85),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(92),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(95),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(409),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(157),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [97] = {
    [sym_type] = STATE(239),
    [sym__generic_type_constructor] = STATE(240),
    [sym_tupling_constructor] = STATE(236),
    [sym_tuple] = STATE(240),
    [sym_list] = STATE(240),
    [sym_parenthesized_constructor] = STATE(240),
    [sym_context] = STATE(241),
    [sym_constructor] = STATE(242),
    [sym_variable_identifier] = STATE(243),
    [sym_constructor_identifier] = STATE(244),
    [sym__type_constructors] = STATE(236),
    [sym_qualified_type_constructor] = STATE(245),
    [anon_sym_LPAREN] = ACTIONS(411),
    [anon_sym_LBRACK] = ACTIONS(413),
    [sym_unit_type] = ACTIONS(415),
    [sym_list_constructor] = ACTIONS(415),
    [sym_function_constructor] = ACTIONS(415),
    [sym__variable_pattern] = ACTIONS(417),
    [sym__constructor_pattern] = ACTIONS(419),
    [sym_module_identifier] = ACTIONS(421),
    [sym_comment] = ACTIONS(5),
  },
  [98] = {
    [sym__layout_semicolon] = ACTIONS(423),
    [anon_sym_SEMI] = ACTIONS(425),
    [sym_comment] = ACTIONS(5),
  },
  [99] = {
    [sym_export] = STATE(248),
    [sym__identifier] = STATE(249),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(427),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [100] = {
    [sym__declarations] = STATE(252),
    [sym__layout_open_brace] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(431),
    [sym_comment] = ACTIONS(5),
  },
  [101] = {
    [sym_where] = STATE(253),
    [anon_sym_where] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(433),
    [sym_comment] = ACTIONS(5),
  },
  [103] = {
    [sym_import_specification] = STATE(255),
    [sym__layout_semicolon] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(437),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_as] = ACTIONS(439),
    [anon_sym_hiding] = ACTIONS(193),
    [sym_comment] = ACTIONS(5),
  },
  [104] = {
    [sym__identifier] = STATE(257),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(441),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [105] = {
    [sym_module_identifier] = ACTIONS(443),
    [sym_comment] = ACTIONS(5),
  },
  [106] = {
    [anon_sym_LPAREN] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
  },
  [107] = {
    [sym__layout_semicolon] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(437),
    [sym_comment] = ACTIONS(5),
  },
  [108] = {
    [anon_sym_unsafe] = ACTIONS(447),
    [anon_sym_safe] = ACTIONS(447),
    [sym__variable_pattern] = ACTIONS(449),
    [sym__constructor_pattern] = ACTIONS(449),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(447),
  },
  [109] = {
    [sym_safety] = STATE(262),
    [sym_type_signature] = STATE(263),
    [sym__identifier] = STATE(264),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym_string] = STATE(265),
    [anon_sym_unsafe] = ACTIONS(451),
    [anon_sym_safe] = ACTIONS(451),
    [sym__variable_pattern] = ACTIONS(217),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(453),
  },
  [110] = {
    [sym__layout_semicolon] = ACTIONS(455),
    [anon_sym_SEMI] = ACTIONS(457),
    [sym_comment] = ACTIONS(5),
  },
  [111] = {
    [aux_sym_export_repeat1] = STATE(268),
    [anon_sym_COMMA] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(461),
    [sym_comment] = ACTIONS(5),
  },
  [112] = {
    [aux_sym_context_repeat1] = STATE(271),
    [anon_sym_COMMA] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(465),
    [sym_comment] = ACTIONS(5),
  },
  [113] = {
    [sym_labels] = STATE(127),
    [sym_label] = STATE(272),
    [sym_strict] = STATE(170),
    [sym__literal] = STATE(130),
    [sym__identifier] = STATE(273),
    [sym_variable_identifier] = STATE(184),
    [sym_constructor_identifier] = STATE(184),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [sym_fields] = STATE(127),
    [aux_sym_constructor_repeat1] = STATE(173),
    [aux_sym_constructor_repeat3] = STATE(274),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(273),
    [sym__variable_pattern] = ACTIONS(285),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [114] = {
    [sym_where] = STATE(275),
    [anon_sym_where] = ACTIONS(205),
    [sym_comment] = ACTIONS(5),
  },
  [115] = {
    [sym_labels] = STATE(127),
    [sym_label] = STATE(128),
    [sym_strict] = STATE(129),
    [sym__literal] = STATE(130),
    [sym__identifier] = STATE(278),
    [sym_variable_identifier] = STATE(279),
    [sym_constructor_identifier] = STATE(279),
    [sym_integer] = STATE(123),
    [sym_char] = STATE(123),
    [sym_string] = STATE(123),
    [sym_fields] = STATE(127),
    [aux_sym_constructor_repeat1] = STATE(133),
    [aux_sym_constructor_repeat3] = STATE(134),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_where] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(215),
    [sym__variable_pattern] = ACTIONS(467),
    [sym__constructor_pattern] = ACTIONS(469),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [sym__integer_literal] = ACTIONS(225),
    [sym__octal_literal] = ACTIONS(225),
    [sym__hexidecimal_literal] = ACTIONS(225),
  },
  [116] = {
    [sym__declarations] = STATE(282),
    [sym__layout_open_brace] = ACTIONS(471),
    [anon_sym_LBRACE] = ACTIONS(473),
    [sym_comment] = ACTIONS(5),
  },
  [117] = {
    [sym__constructor_pattern] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
  },
  [118] = {
    [sym__layout_semicolon] = ACTIONS(477),
    [anon_sym_SEMI] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [119] = {
    [sym_field] = STATE(283),
    [sym_variable_identifier] = STATE(284),
    [sym__variable_pattern] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
  },
  [120] = {
    [sym__identifier] = STATE(285),
    [sym_variable_identifier] = STATE(172),
    [sym_constructor_identifier] = STATE(172),
    [aux_sym_constructor_repeat2] = STATE(286),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [121] = {
    [sym__identifier] = STATE(287),
    [sym_variable_identifier] = STATE(132),
    [sym_constructor_identifier] = STATE(132),
    [sym__variable_pattern] = ACTIONS(481),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [122] = {
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(75),
    [anon_sym_DASH_GT] = ACTIONS(75),
    [anon_sym_EQ_GT] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(77),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
  },
  [123] = {
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_where] = ACTIONS(87),
    [anon_sym_EQ_GT] = ACTIONS(87),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym__integer_literal] = ACTIONS(87),
    [sym__octal_literal] = ACTIONS(87),
    [sym__hexidecimal_literal] = ACTIONS(87),
  },
  [124] = {
    [sym__graphic] = STATE(288),
    [sym__small] = STATE(65),
    [sym__large] = STATE(65),
    [sym__symbol] = STATE(65),
    [sym__special] = STATE(65),
    [sym__escape] = STATE(288),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(93),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_BANG] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(93),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(95),
    [sym__ascii_large] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(93),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_QMARK] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
    [anon_sym_BSLASH] = ACTIONS(105),
    [sym__space] = ACTIONS(483),
  },
  [125] = {
    [sym__gap] = STATE(71),
    [sym__graphic] = STATE(71),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__symbol] = STATE(73),
    [sym__special] = STATE(73),
    [sym__escape] = STATE(71),
    [aux_sym_string_repeat1] = STATE(290),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(485),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [126] = {
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_where] = ACTIONS(127),
    [anon_sym_EQ_GT] = ACTIONS(127),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym__integer_literal] = ACTIONS(127),
    [sym__octal_literal] = ACTIONS(127),
    [sym__hexidecimal_literal] = ACTIONS(127),
  },
  [127] = {
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(487),
    [anon_sym_where] = ACTIONS(487),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [sym_comment] = ACTIONS(5),
  },
  [128] = {
    [aux_sym_labels_repeat1] = STATE(292),
    [anon_sym_COMMA] = ACTIONS(489),
    [anon_sym_EQ] = ACTIONS(491),
    [anon_sym_where] = ACTIONS(491),
    [anon_sym_EQ_GT] = ACTIONS(491),
    [sym_comment] = ACTIONS(5),
  },
  [129] = {
    [anon_sym_where] = ACTIONS(493),
    [anon_sym_EQ_GT] = ACTIONS(493),
    [anon_sym_BANG] = ACTIONS(493),
    [sym__variable_pattern] = ACTIONS(495),
    [sym__constructor_pattern] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
  },
  [130] = {
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_where] = ACTIONS(497),
    [anon_sym_EQ_GT] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(499),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [sym__integer_literal] = ACTIONS(497),
    [sym__octal_literal] = ACTIONS(497),
    [sym__hexidecimal_literal] = ACTIONS(497),
  },
  [131] = {
    [anon_sym_EQ] = ACTIONS(501),
    [anon_sym_where] = ACTIONS(493),
    [anon_sym_EQ_GT] = ACTIONS(493),
    [anon_sym_BANG] = ACTIONS(493),
    [sym__variable_pattern] = ACTIONS(495),
    [sym__constructor_pattern] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
  },
  [132] = {
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_where] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_EQ_GT] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(175),
    [sym__constructor_pattern] = ACTIONS(175),
    [anon_sym_DOT] = ACTIONS(173),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(173),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(173),
    [anon_sym_AMP] = ACTIONS(173),
    [anon_sym_1] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_QMARK] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(173),
  },
  [133] = {
    [sym_strict] = STATE(294),
    [sym__identifier] = STATE(294),
    [sym_variable_identifier] = STATE(132),
    [sym_constructor_identifier] = STATE(132),
    [anon_sym_where] = ACTIONS(487),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [anon_sym_BANG] = ACTIONS(215),
    [sym__variable_pattern] = ACTIONS(217),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [134] = {
    [sym__literal] = STATE(295),
    [sym_integer] = STATE(123),
    [sym_char] = STATE(123),
    [sym_string] = STATE(123),
    [anon_sym_EQ] = ACTIONS(487),
    [anon_sym_where] = ACTIONS(487),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [sym__integer_literal] = ACTIONS(225),
    [sym__octal_literal] = ACTIONS(225),
    [sym__hexidecimal_literal] = ACTIONS(225),
  },
  [135] = {
    [sym_where] = STATE(296),
    [anon_sym_where] = ACTIONS(205),
    [sym_comment] = ACTIONS(5),
  },
  [136] = {
    [sym__layout_semicolon] = ACTIONS(503),
    [anon_sym_SEMI] = ACTIONS(505),
    [sym_comment] = ACTIONS(5),
  },
  [137] = {
    [anon_sym_BQUOTE] = ACTIONS(507),
    [sym_comment] = ACTIONS(5),
  },
  [138] = {
    [sym__layout_semicolon] = ACTIONS(509),
    [anon_sym_SEMI] = ACTIONS(511),
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(511),
    [anon_sym_COLON] = ACTIONS(511),
    [anon_sym_BANG] = ACTIONS(511),
    [anon_sym_DOT] = ACTIONS(511),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(511),
    [anon_sym_DOLLAR] = ACTIONS(511),
    [anon_sym_PERCENT] = ACTIONS(511),
    [anon_sym_AMP] = ACTIONS(511),
    [anon_sym_1] = ACTIONS(511),
    [anon_sym_PLUS] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(511),
    [anon_sym_LT] = ACTIONS(511),
    [anon_sym_GT] = ACTIONS(511),
    [anon_sym_QMARK] = ACTIONS(511),
    [anon_sym_CARET] = ACTIONS(511),
  },
  [139] = {
    [sym__layout_semicolon] = ACTIONS(513),
    [anon_sym_SEMI] = ACTIONS(515),
    [anon_sym_COMMA] = ACTIONS(515),
    [anon_sym_DASH] = ACTIONS(515),
    [anon_sym_COLON] = ACTIONS(515),
    [anon_sym_BANG] = ACTIONS(515),
    [anon_sym_DOT] = ACTIONS(515),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(515),
    [anon_sym_DOLLAR] = ACTIONS(515),
    [anon_sym_PERCENT] = ACTIONS(515),
    [anon_sym_AMP] = ACTIONS(515),
    [anon_sym_1] = ACTIONS(515),
    [anon_sym_PLUS] = ACTIONS(515),
    [anon_sym_SLASH] = ACTIONS(515),
    [anon_sym_LT] = ACTIONS(515),
    [anon_sym_GT] = ACTIONS(515),
    [anon_sym_QMARK] = ACTIONS(515),
    [anon_sym_CARET] = ACTIONS(515),
  },
  [140] = {
    [sym__constructor_symbol] = STATE(298),
    [sym__layout_semicolon] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(519),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_COLON] = ACTIONS(235),
    [anon_sym_BANG] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(235),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(235),
    [anon_sym_DOLLAR] = ACTIONS(235),
    [anon_sym_PERCENT] = ACTIONS(235),
    [anon_sym_AMP] = ACTIONS(235),
    [anon_sym_1] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_QMARK] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(235),
  },
  [141] = {
    [sym__op] = STATE(299),
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
  [142] = {
    [sym__layout_semicolon] = ACTIONS(521),
    [anon_sym_SEMI] = ACTIONS(523),
    [anon_sym_COMMA] = ACTIONS(525),
    [sym_comment] = ACTIONS(5),
  },
  [143] = {
    [aux_sym_fixity_repeat1] = STATE(301),
    [sym__layout_semicolon] = ACTIONS(521),
    [anon_sym_SEMI] = ACTIONS(523),
    [anon_sym_COMMA] = ACTIONS(241),
    [sym_comment] = ACTIONS(5),
  },
  [144] = {
    [sym__layout_semicolon] = ACTIONS(527),
    [anon_sym_SEMI] = ACTIONS(529),
    [anon_sym_COMMA] = ACTIONS(529),
    [anon_sym_DASH] = ACTIONS(529),
    [anon_sym_BANG] = ACTIONS(529),
    [anon_sym_DOT] = ACTIONS(529),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(529),
    [anon_sym_DOLLAR] = ACTIONS(529),
    [anon_sym_PERCENT] = ACTIONS(529),
    [anon_sym_AMP] = ACTIONS(529),
    [anon_sym_1] = ACTIONS(529),
    [anon_sym_PLUS] = ACTIONS(529),
    [anon_sym_SLASH] = ACTIONS(529),
    [anon_sym_LT] = ACTIONS(529),
    [anon_sym_GT] = ACTIONS(529),
    [anon_sym_QMARK] = ACTIONS(529),
    [anon_sym_CARET] = ACTIONS(529),
  },
  [145] = {
    [sym__variable_symbol] = STATE(302),
    [sym__layout_semicolon] = ACTIONS(531),
    [anon_sym_SEMI] = ACTIONS(533),
    [anon_sym_COMMA] = ACTIONS(533),
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
  [146] = {
    [sym__layout_semicolon] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_deriving] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(203),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [147] = {
    [sym_constructors] = STATE(304),
    [sym_constructor] = STATE(152),
    [sym_deriving] = STATE(305),
    [sym_constructor_identifier] = STATE(154),
    [sym__layout_semicolon] = ACTIONS(535),
    [anon_sym_SEMI] = ACTIONS(537),
    [anon_sym_EQ] = ACTIONS(539),
    [anon_sym_deriving] = ACTIONS(259),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [148] = {
    [sym_labels] = STATE(314),
    [sym_label] = STATE(315),
    [sym_strict] = STATE(316),
    [sym__literal] = STATE(317),
    [sym__identifier] = STATE(318),
    [sym_variable_identifier] = STATE(319),
    [sym_constructor_identifier] = STATE(319),
    [sym_integer] = STATE(310),
    [sym_char] = STATE(310),
    [sym_string] = STATE(310),
    [sym_fields] = STATE(314),
    [aux_sym_constructor_repeat1] = STATE(320),
    [aux_sym_constructor_repeat3] = STATE(321),
    [sym__layout_semicolon] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(541),
    [anon_sym_LPAREN] = ACTIONS(543),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_deriving] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(545),
    [sym__variable_pattern] = ACTIONS(547),
    [sym__constructor_pattern] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(549),
    [anon_sym_SQUOTE] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [sym__integer_literal] = ACTIONS(555),
    [sym__octal_literal] = ACTIONS(555),
    [sym__hexidecimal_literal] = ACTIONS(555),
  },
  [149] = {
    [sym_constructors] = STATE(304),
    [sym_constructor] = STATE(152),
    [sym_deriving] = STATE(305),
    [sym_constructor_identifier] = STATE(154),
    [sym__layout_semicolon] = ACTIONS(535),
    [anon_sym_SEMI] = ACTIONS(537),
    [anon_sym_deriving] = ACTIONS(259),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [150] = {
    [sym__identifier] = STATE(323),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(557),
    [sym__variable_pattern] = ACTIONS(417),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [151] = {
    [sym_deriving] = STATE(305),
    [sym__layout_semicolon] = ACTIONS(535),
    [anon_sym_SEMI] = ACTIONS(537),
    [anon_sym_deriving] = ACTIONS(259),
    [sym_comment] = ACTIONS(5),
  },
  [152] = {
    [aux_sym_constructors_repeat1] = STATE(325),
    [sym__layout_semicolon] = ACTIONS(559),
    [anon_sym_SEMI] = ACTIONS(561),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_deriving] = ACTIONS(561),
    [sym_comment] = ACTIONS(5),
  },
  [153] = {
    [sym__layout_semicolon] = ACTIONS(535),
    [anon_sym_SEMI] = ACTIONS(537),
    [sym_comment] = ACTIONS(5),
  },
  [154] = {
    [sym_labels] = STATE(159),
    [sym_label] = STATE(160),
    [sym_strict] = STATE(161),
    [sym__literal] = STATE(162),
    [sym__identifier] = STATE(326),
    [sym_variable_identifier] = STATE(319),
    [sym_constructor_identifier] = STATE(319),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym_fields] = STATE(159),
    [aux_sym_constructor_repeat1] = STATE(164),
    [aux_sym_constructor_repeat3] = STATE(165),
    [sym__layout_semicolon] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(213),
    [anon_sym_deriving] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(267),
    [sym__variable_pattern] = ACTIONS(547),
    [sym__constructor_pattern] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [155] = {
    [sym_field] = STATE(327),
    [sym_variable_identifier] = STATE(284),
    [sym__variable_pattern] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
  },
  [156] = {
    [sym__identifier] = STATE(285),
    [sym_variable_identifier] = STATE(172),
    [sym_constructor_identifier] = STATE(172),
    [aux_sym_constructor_repeat2] = STATE(328),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [157] = {
    [sym__identifier] = STATE(329),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(26),
    [sym__variable_pattern] = ACTIONS(565),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [158] = {
    [sym__layout_semicolon] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_EQ_GT] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(77),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
  },
  [159] = {
    [sym__layout_semicolon] = ACTIONS(567),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(487),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_deriving] = ACTIONS(487),
    [sym__constructor_pattern] = ACTIONS(569),
    [sym_comment] = ACTIONS(5),
  },
  [160] = {
    [aux_sym_labels_repeat1] = STATE(331),
    [sym__layout_semicolon] = ACTIONS(571),
    [anon_sym_SEMI] = ACTIONS(491),
    [anon_sym_COMMA] = ACTIONS(573),
    [anon_sym_EQ] = ACTIONS(491),
    [anon_sym_EQ_GT] = ACTIONS(491),
    [anon_sym_PIPE] = ACTIONS(491),
    [anon_sym_deriving] = ACTIONS(491),
    [sym__constructor_pattern] = ACTIONS(575),
    [sym_comment] = ACTIONS(5),
  },
  [161] = {
    [sym__layout_semicolon] = ACTIONS(577),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_EQ] = ACTIONS(493),
    [anon_sym_EQ_GT] = ACTIONS(493),
    [anon_sym_PIPE] = ACTIONS(493),
    [anon_sym_deriving] = ACTIONS(493),
    [anon_sym_BANG] = ACTIONS(493),
    [sym__variable_pattern] = ACTIONS(495),
    [sym__constructor_pattern] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
  },
  [162] = {
    [sym__layout_semicolon] = ACTIONS(579),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_EQ_GT] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_deriving] = ACTIONS(497),
    [sym__constructor_pattern] = ACTIONS(499),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(499),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [sym__integer_literal] = ACTIONS(497),
    [sym__octal_literal] = ACTIONS(497),
    [sym__hexidecimal_literal] = ACTIONS(497),
  },
  [163] = {
    [sym__layout_semicolon] = ACTIONS(577),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_EQ] = ACTIONS(581),
    [anon_sym_EQ_GT] = ACTIONS(493),
    [anon_sym_deriving] = ACTIONS(493),
    [anon_sym_BANG] = ACTIONS(493),
    [sym__variable_pattern] = ACTIONS(495),
    [sym__constructor_pattern] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
  },
  [164] = {
    [sym_strict] = STATE(333),
    [sym__identifier] = STATE(333),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(26),
    [sym__layout_semicolon] = ACTIONS(567),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(487),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_deriving] = ACTIONS(487),
    [anon_sym_BANG] = ACTIONS(267),
    [sym__variable_pattern] = ACTIONS(269),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [165] = {
    [sym__literal] = STATE(334),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_semicolon] = ACTIONS(567),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(487),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_deriving] = ACTIONS(487),
    [sym__constructor_pattern] = ACTIONS(569),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [166] = {
    [anon_sym_EQ] = ACTIONS(584),
    [sym_comment] = ACTIONS(5),
  },
  [167] = {
    [sym_constructor] = STATE(336),
    [sym_constructor_identifier] = STATE(154),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [168] = {
    [sym__identifier] = STATE(337),
    [sym_variable_identifier] = STATE(172),
    [sym_constructor_identifier] = STATE(172),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [169] = {
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_DASH_GT] = ACTIONS(75),
    [anon_sym_EQ_GT] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
  },
  [170] = {
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [anon_sym_EQ] = ACTIONS(493),
    [anon_sym_EQ_GT] = ACTIONS(493),
    [anon_sym_BANG] = ACTIONS(493),
    [sym__variable_pattern] = ACTIONS(493),
    [sym__constructor_pattern] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
  },
  [171] = {
    [anon_sym_EQ] = ACTIONS(586),
    [anon_sym_EQ_GT] = ACTIONS(493),
    [anon_sym_BANG] = ACTIONS(493),
    [sym__variable_pattern] = ACTIONS(493),
    [sym__constructor_pattern] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
  },
  [172] = {
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_EQ_GT] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(173),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
  },
  [173] = {
    [sym_strict] = STATE(338),
    [sym__identifier] = STATE(338),
    [sym_variable_identifier] = STATE(172),
    [sym_constructor_identifier] = STATE(172),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(487),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [anon_sym_BANG] = ACTIONS(273),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [174] = {
    [sym_type] = STATE(341),
    [sym__generic_type_constructor] = STATE(240),
    [sym_tupling_constructor] = STATE(236),
    [sym_tuple] = STATE(240),
    [sym_list] = STATE(240),
    [sym_parenthesized_constructor] = STATE(240),
    [sym_variable_identifier] = STATE(243),
    [sym__type_constructors] = STATE(236),
    [sym_qualified_type_constructor] = STATE(245),
    [anon_sym_LPAREN] = ACTIONS(589),
    [anon_sym_LBRACK] = ACTIONS(413),
    [sym_unit_type] = ACTIONS(415),
    [sym_list_constructor] = ACTIONS(415),
    [sym_function_constructor] = ACTIONS(415),
    [sym__variable_pattern] = ACTIONS(417),
    [sym__constructor_pattern] = ACTIONS(591),
    [sym_module_identifier] = ACTIONS(421),
    [sym_comment] = ACTIONS(5),
  },
  [175] = {
    [sym_field] = STATE(342),
    [sym_variable_identifier] = STATE(284),
    [sym__variable_pattern] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
  },
  [176] = {
    [sym__identifier] = STATE(285),
    [sym_variable_identifier] = STATE(172),
    [sym_constructor_identifier] = STATE(172),
    [aux_sym_constructor_repeat2] = STATE(343),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [177] = {
    [sym__identifier] = STATE(344),
    [sym_variable_identifier] = STATE(184),
    [sym_constructor_identifier] = STATE(184),
    [sym__variable_pattern] = ACTIONS(285),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [178] = {
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
  },
  [179] = {
    [anon_sym_EQ] = ACTIONS(487),
    [sym_comment] = ACTIONS(5),
  },
  [180] = {
    [aux_sym_labels_repeat1] = STATE(346),
    [anon_sym_COMMA] = ACTIONS(593),
    [anon_sym_EQ] = ACTIONS(491),
    [sym_comment] = ACTIONS(5),
  },
  [181] = {
    [anon_sym_EQ] = ACTIONS(493),
    [anon_sym_BANG] = ACTIONS(493),
    [sym__variable_pattern] = ACTIONS(493),
    [sym__constructor_pattern] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
  },
  [182] = {
    [anon_sym_EQ] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(499),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [sym__integer_literal] = ACTIONS(497),
    [sym__octal_literal] = ACTIONS(497),
    [sym__hexidecimal_literal] = ACTIONS(497),
  },
  [183] = {
    [anon_sym_EQ] = ACTIONS(595),
    [anon_sym_BANG] = ACTIONS(493),
    [sym__variable_pattern] = ACTIONS(493),
    [sym__constructor_pattern] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
  },
  [184] = {
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(173),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
  },
  [185] = {
    [sym_strict] = STATE(348),
    [sym__identifier] = STATE(348),
    [sym_variable_identifier] = STATE(184),
    [sym_constructor_identifier] = STATE(184),
    [anon_sym_EQ] = ACTIONS(487),
    [anon_sym_BANG] = ACTIONS(283),
    [sym__variable_pattern] = ACTIONS(285),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [186] = {
    [sym__literal] = STATE(349),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_EQ] = ACTIONS(487),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [187] = {
    [sym__layout_semicolon] = ACTIONS(598),
    [anon_sym_SEMI] = ACTIONS(600),
    [anon_sym_COMMA] = ACTIONS(600),
    [anon_sym_EQ] = ACTIONS(600),
    [anon_sym_EQ_GT] = ACTIONS(600),
    [anon_sym_PIPE] = ACTIONS(600),
    [anon_sym_deriving] = ACTIONS(600),
    [sym__constructor_pattern] = ACTIONS(602),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(600),
    [anon_sym_DQUOTE] = ACTIONS(600),
    [sym__integer_literal] = ACTIONS(600),
    [sym__octal_literal] = ACTIONS(600),
    [sym__hexidecimal_literal] = ACTIONS(600),
  },
  [188] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(604),
  },
  [189] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(606),
  },
  [190] = {
    [sym__cntrl] = STATE(351),
    [anon_sym_LBRACK] = ACTIONS(608),
    [anon_sym_RBRACK] = ACTIONS(608),
    [anon_sym_AT] = ACTIONS(608),
    [anon_sym__] = ACTIONS(608),
    [sym_comment] = ACTIONS(97),
    [sym__ascii_large] = ACTIONS(608),
    [anon_sym_CARET] = ACTIONS(608),
    [anon_sym_BSLASH] = ACTIONS(608),
  },
  [191] = {
    [aux_sym__escape_repeat1] = STATE(353),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(610),
  },
  [192] = {
    [aux_sym__escape_repeat2] = STATE(355),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(612),
  },
  [193] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(614),
  },
  [194] = {
    [anon_sym_SEMI] = ACTIONS(616),
    [anon_sym_LBRACE] = ACTIONS(616),
    [anon_sym_RBRACE] = ACTIONS(616),
    [anon_sym_LPAREN] = ACTIONS(616),
    [anon_sym_RPAREN] = ACTIONS(616),
    [anon_sym_EQ] = ACTIONS(616),
    [anon_sym_TILDE] = ACTIONS(616),
    [anon_sym_LBRACK] = ACTIONS(616),
    [anon_sym_RBRACK] = ACTIONS(616),
    [anon_sym_DASH] = ACTIONS(616),
    [anon_sym_AT] = ACTIONS(616),
    [anon_sym__] = ACTIONS(616),
    [anon_sym_BQUOTE] = ACTIONS(616),
    [anon_sym_COLON] = ACTIONS(616),
    [anon_sym_PIPE] = ACTIONS(616),
    [anon_sym_BANG] = ACTIONS(616),
    [anon_sym_DOT] = ACTIONS(616),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DQUOTE] = ACTIONS(616),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(616),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(616),
    [sym__ascii_large] = ACTIONS(616),
    [anon_sym_POUND] = ACTIONS(616),
    [anon_sym_DOLLAR] = ACTIONS(616),
    [anon_sym_PERCENT] = ACTIONS(616),
    [anon_sym_AMP] = ACTIONS(616),
    [anon_sym_1] = ACTIONS(616),
    [anon_sym_PLUS] = ACTIONS(616),
    [anon_sym_SLASH] = ACTIONS(616),
    [anon_sym_LT] = ACTIONS(616),
    [anon_sym_GT] = ACTIONS(616),
    [anon_sym_QMARK] = ACTIONS(616),
    [anon_sym_CARET] = ACTIONS(616),
    [anon_sym_BSLASH] = ACTIONS(616),
    [sym__space] = ACTIONS(616),
    [sym__newline] = ACTIONS(616),
    [sym__tab] = ACTIONS(616),
    [sym__vertical_tab] = ACTIONS(616),
  },
  [195] = {
    [anon_sym_SEMI] = ACTIONS(618),
    [anon_sym_LBRACE] = ACTIONS(618),
    [anon_sym_RBRACE] = ACTIONS(618),
    [anon_sym_LPAREN] = ACTIONS(618),
    [anon_sym_RPAREN] = ACTIONS(618),
    [anon_sym_EQ] = ACTIONS(618),
    [anon_sym_TILDE] = ACTIONS(618),
    [anon_sym_LBRACK] = ACTIONS(618),
    [anon_sym_RBRACK] = ACTIONS(618),
    [anon_sym_DASH] = ACTIONS(618),
    [anon_sym_AT] = ACTIONS(618),
    [anon_sym__] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(618),
    [anon_sym_COLON] = ACTIONS(618),
    [anon_sym_PIPE] = ACTIONS(618),
    [anon_sym_BANG] = ACTIONS(618),
    [anon_sym_DOT] = ACTIONS(618),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(618),
    [anon_sym_DQUOTE] = ACTIONS(618),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(618),
    [sym__ascii_large] = ACTIONS(618),
    [anon_sym_POUND] = ACTIONS(618),
    [anon_sym_DOLLAR] = ACTIONS(618),
    [anon_sym_PERCENT] = ACTIONS(618),
    [anon_sym_AMP] = ACTIONS(618),
    [anon_sym_1] = ACTIONS(618),
    [anon_sym_PLUS] = ACTIONS(618),
    [anon_sym_SLASH] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(618),
    [anon_sym_GT] = ACTIONS(618),
    [anon_sym_QMARK] = ACTIONS(618),
    [anon_sym_CARET] = ACTIONS(618),
    [anon_sym_BSLASH] = ACTIONS(618),
    [sym__space] = ACTIONS(618),
    [sym__newline] = ACTIONS(618),
    [sym__tab] = ACTIONS(618),
    [sym__vertical_tab] = ACTIONS(618),
  },
  [196] = {
    [sym__cntrl] = STATE(357),
    [anon_sym_LBRACK] = ACTIONS(620),
    [anon_sym_RBRACK] = ACTIONS(620),
    [anon_sym_AT] = ACTIONS(620),
    [anon_sym__] = ACTIONS(620),
    [sym_comment] = ACTIONS(97),
    [sym__ascii_large] = ACTIONS(620),
    [anon_sym_CARET] = ACTIONS(620),
    [anon_sym_BSLASH] = ACTIONS(620),
  },
  [197] = {
    [aux_sym__escape_repeat1] = STATE(359),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(622),
  },
  [198] = {
    [aux_sym__escape_repeat2] = STATE(361),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(624),
  },
  [199] = {
    [anon_sym_SEMI] = ACTIONS(626),
    [anon_sym_LBRACE] = ACTIONS(626),
    [anon_sym_RBRACE] = ACTIONS(626),
    [anon_sym_LPAREN] = ACTIONS(626),
    [anon_sym_RPAREN] = ACTIONS(626),
    [anon_sym_EQ] = ACTIONS(626),
    [anon_sym_TILDE] = ACTIONS(626),
    [anon_sym_LBRACK] = ACTIONS(626),
    [anon_sym_RBRACK] = ACTIONS(626),
    [anon_sym_DASH] = ACTIONS(626),
    [anon_sym_AT] = ACTIONS(626),
    [anon_sym__] = ACTIONS(626),
    [anon_sym_BQUOTE] = ACTIONS(626),
    [anon_sym_COLON] = ACTIONS(626),
    [anon_sym_PIPE] = ACTIONS(626),
    [anon_sym_BANG] = ACTIONS(626),
    [anon_sym_DOT] = ACTIONS(626),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(626),
    [anon_sym_DQUOTE] = ACTIONS(626),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(626),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(626),
    [sym__ascii_large] = ACTIONS(626),
    [anon_sym_POUND] = ACTIONS(626),
    [anon_sym_DOLLAR] = ACTIONS(626),
    [anon_sym_PERCENT] = ACTIONS(626),
    [anon_sym_AMP] = ACTIONS(626),
    [anon_sym_1] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(626),
    [anon_sym_SLASH] = ACTIONS(626),
    [anon_sym_LT] = ACTIONS(626),
    [anon_sym_GT] = ACTIONS(626),
    [anon_sym_QMARK] = ACTIONS(626),
    [anon_sym_CARET] = ACTIONS(626),
    [anon_sym_BSLASH] = ACTIONS(626),
    [sym__space] = ACTIONS(626),
    [sym__newline] = ACTIONS(626),
    [sym__tab] = ACTIONS(626),
    [sym__vertical_tab] = ACTIONS(626),
  },
  [200] = {
    [anon_sym_SEMI] = ACTIONS(628),
    [anon_sym_LBRACE] = ACTIONS(628),
    [anon_sym_RBRACE] = ACTIONS(628),
    [anon_sym_LPAREN] = ACTIONS(628),
    [anon_sym_RPAREN] = ACTIONS(628),
    [anon_sym_EQ] = ACTIONS(628),
    [anon_sym_TILDE] = ACTIONS(628),
    [anon_sym_LBRACK] = ACTIONS(628),
    [anon_sym_RBRACK] = ACTIONS(628),
    [anon_sym_DASH] = ACTIONS(628),
    [anon_sym_AT] = ACTIONS(628),
    [anon_sym__] = ACTIONS(628),
    [anon_sym_BQUOTE] = ACTIONS(628),
    [anon_sym_COLON] = ACTIONS(628),
    [anon_sym_PIPE] = ACTIONS(628),
    [anon_sym_BANG] = ACTIONS(628),
    [anon_sym_DOT] = ACTIONS(628),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(628),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(628),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(628),
    [sym__ascii_large] = ACTIONS(628),
    [anon_sym_POUND] = ACTIONS(628),
    [anon_sym_DOLLAR] = ACTIONS(628),
    [anon_sym_PERCENT] = ACTIONS(628),
    [anon_sym_AMP] = ACTIONS(628),
    [anon_sym_1] = ACTIONS(628),
    [anon_sym_PLUS] = ACTIONS(628),
    [anon_sym_SLASH] = ACTIONS(628),
    [anon_sym_LT] = ACTIONS(628),
    [anon_sym_GT] = ACTIONS(628),
    [anon_sym_QMARK] = ACTIONS(628),
    [anon_sym_CARET] = ACTIONS(628),
    [anon_sym_BSLASH] = ACTIONS(628),
    [sym__space] = ACTIONS(628),
    [sym__newline] = ACTIONS(628),
    [sym__tab] = ACTIONS(628),
    [sym__vertical_tab] = ACTIONS(628),
  },
  [201] = {
    [sym__layout_semicolon] = ACTIONS(630),
    [anon_sym_SEMI] = ACTIONS(632),
    [anon_sym_COMMA] = ACTIONS(632),
    [anon_sym_EQ] = ACTIONS(632),
    [anon_sym_EQ_GT] = ACTIONS(632),
    [anon_sym_PIPE] = ACTIONS(632),
    [anon_sym_deriving] = ACTIONS(632),
    [sym__constructor_pattern] = ACTIONS(634),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(634),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DQUOTE] = ACTIONS(632),
    [sym__integer_literal] = ACTIONS(632),
    [sym__octal_literal] = ACTIONS(632),
    [sym__hexidecimal_literal] = ACTIONS(632),
  },
  [202] = {
    [sym_statement_list] = STATE(364),
    [sym__layout_open_brace] = ACTIONS(636),
    [anon_sym_LBRACE] = ACTIONS(638),
    [sym_comment] = ACTIONS(5),
  },
  [203] = {
    [sym__layout_semicolon] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(77),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [sym__integer_literal] = ACTIONS(75),
    [sym__octal_literal] = ACTIONS(75),
    [sym__hexidecimal_literal] = ACTIONS(75),
  },
  [204] = {
    [sym__layout_semicolon] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_where] = ACTIONS(81),
    [anon_sym_do] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(203),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [205] = {
    [sym__layout_semicolon] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_where] = ACTIONS(87),
    [anon_sym_do] = ACTIONS(87),
    [sym__variable_pattern] = ACTIONS(89),
    [sym__constructor_pattern] = ACTIONS(89),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym__integer_literal] = ACTIONS(87),
    [sym__octal_literal] = ACTIONS(87),
    [sym__hexidecimal_literal] = ACTIONS(87),
  },
  [206] = {
    [sym__graphic] = STATE(366),
    [sym__small] = STATE(65),
    [sym__large] = STATE(65),
    [sym__symbol] = STATE(65),
    [sym__special] = STATE(65),
    [sym__escape] = STATE(366),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(93),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_BANG] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(93),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(640),
    [anon_sym_DQUOTE] = ACTIONS(640),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(95),
    [sym__ascii_large] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(93),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_QMARK] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
    [anon_sym_BSLASH] = ACTIONS(105),
    [sym__space] = ACTIONS(640),
  },
  [207] = {
    [sym__gap] = STATE(71),
    [sym__graphic] = STATE(71),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__symbol] = STATE(73),
    [sym__special] = STATE(73),
    [sym__escape] = STATE(71),
    [aux_sym_string_repeat1] = STATE(368),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(642),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [208] = {
    [sym__layout_semicolon] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_where] = ACTIONS(127),
    [anon_sym_do] = ACTIONS(127),
    [sym__variable_pattern] = ACTIONS(129),
    [sym__constructor_pattern] = ACTIONS(129),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym__integer_literal] = ACTIONS(127),
    [sym__octal_literal] = ACTIONS(127),
    [sym__hexidecimal_literal] = ACTIONS(127),
  },
  [209] = {
    [sym__layout_semicolon] = ACTIONS(644),
    [anon_sym_SEMI] = ACTIONS(646),
    [sym_comment] = ACTIONS(5),
  },
  [210] = {
    [sym__layout_semicolon] = ACTIONS(648),
    [anon_sym_SEMI] = ACTIONS(650),
    [anon_sym_where] = ACTIONS(650),
    [anon_sym_do] = ACTIONS(650),
    [sym__variable_pattern] = ACTIONS(652),
    [sym__constructor_pattern] = ACTIONS(652),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(652),
    [anon_sym_SQUOTE] = ACTIONS(650),
    [anon_sym_DQUOTE] = ACTIONS(650),
    [sym__integer_literal] = ACTIONS(650),
    [sym__octal_literal] = ACTIONS(650),
    [sym__hexidecimal_literal] = ACTIONS(650),
  },
  [211] = {
    [sym__layout_semicolon] = ACTIONS(654),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_where] = ACTIONS(165),
    [anon_sym_do] = ACTIONS(165),
    [sym__variable_pattern] = ACTIONS(167),
    [sym__constructor_pattern] = ACTIONS(167),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym__integer_literal] = ACTIONS(165),
    [sym__octal_literal] = ACTIONS(165),
    [sym__hexidecimal_literal] = ACTIONS(165),
  },
  [212] = {
    [sym__layout_semicolon] = ACTIONS(656),
    [anon_sym_SEMI] = ACTIONS(658),
    [anon_sym_where] = ACTIONS(658),
    [anon_sym_do] = ACTIONS(658),
    [sym__variable_pattern] = ACTIONS(660),
    [sym__constructor_pattern] = ACTIONS(660),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(660),
    [anon_sym_SQUOTE] = ACTIONS(658),
    [anon_sym_DQUOTE] = ACTIONS(658),
    [sym__integer_literal] = ACTIONS(658),
    [sym__octal_literal] = ACTIONS(658),
    [sym__hexidecimal_literal] = ACTIONS(658),
  },
  [213] = {
    [sym_labels] = STATE(373),
    [sym_label] = STATE(374),
    [sym_strict] = STATE(375),
    [sym__literal] = STATE(376),
    [sym__identifier] = STATE(377),
    [sym_variable_identifier] = STATE(378),
    [sym_constructor_identifier] = STATE(378),
    [sym_integer] = STATE(205),
    [sym_char] = STATE(205),
    [sym_string] = STATE(205),
    [sym_fields] = STATE(373),
    [aux_sym_constructor_repeat1] = STATE(379),
    [aux_sym_constructor_repeat3] = STATE(380),
    [sym__layout_semicolon] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(662),
    [anon_sym_LPAREN] = ACTIONS(664),
    [anon_sym_where] = ACTIONS(213),
    [anon_sym_do] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(666),
    [sym__variable_pattern] = ACTIONS(363),
    [sym__constructor_pattern] = ACTIONS(668),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(367),
    [anon_sym_SQUOTE] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(371),
    [sym__integer_literal] = ACTIONS(373),
    [sym__octal_literal] = ACTIONS(373),
    [sym__hexidecimal_literal] = ACTIONS(373),
  },
  [214] = {
    [sym_where] = STATE(381),
    [sym__variable] = STATE(210),
    [sym_qualified_variable_identifier] = STATE(211),
    [sym__expression] = STATE(382),
    [sym_do_expression] = STATE(210),
    [sym_constructor] = STATE(210),
    [sym__literal] = STATE(210),
    [sym_variable_identifier] = STATE(211),
    [sym_constructor_identifier] = STATE(213),
    [sym_integer] = STATE(205),
    [sym_char] = STATE(205),
    [sym_string] = STATE(205),
    [sym__layout_semicolon] = ACTIONS(644),
    [anon_sym_SEMI] = ACTIONS(646),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_do] = ACTIONS(361),
    [sym__variable_pattern] = ACTIONS(363),
    [sym__constructor_pattern] = ACTIONS(365),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(367),
    [anon_sym_SQUOTE] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(371),
    [sym__integer_literal] = ACTIONS(373),
    [sym__octal_literal] = ACTIONS(373),
    [sym__hexidecimal_literal] = ACTIONS(373),
  },
  [215] = {
    [sym__function_pattern] = STATE(223),
    [sym_label_pattern] = STATE(85),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(221),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(132),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(387),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [216] = {
    [anon_sym_LPAREN] = ACTIONS(670),
    [sym_comment] = ACTIONS(5),
  },
  [217] = {
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_COLON] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(81),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_1] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_QMARK] = ACTIONS(81),
    [anon_sym_CARET] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [218] = {
    [sym__op] = STATE(389),
    [sym_variable_symbol] = STATE(390),
    [sym_constructor_symbol] = STATE(390),
    [sym__variable_symbol] = STATE(391),
    [aux_sym_tuple_pattern_repeat1] = STATE(392),
    [anon_sym_COMMA] = ACTIONS(672),
    [anon_sym_RPAREN] = ACTIONS(674),
    [anon_sym_DASH] = ACTIONS(676),
    [anon_sym_BQUOTE] = ACTIONS(678),
    [anon_sym_COLON] = ACTIONS(680),
    [anon_sym_BANG] = ACTIONS(676),
    [anon_sym_DOT] = ACTIONS(676),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(676),
    [anon_sym_DOLLAR] = ACTIONS(676),
    [anon_sym_PERCENT] = ACTIONS(676),
    [anon_sym_AMP] = ACTIONS(676),
    [anon_sym_1] = ACTIONS(676),
    [anon_sym_PLUS] = ACTIONS(676),
    [anon_sym_SLASH] = ACTIONS(676),
    [anon_sym_LT] = ACTIONS(676),
    [anon_sym_GT] = ACTIONS(676),
    [anon_sym_QMARK] = ACTIONS(676),
    [anon_sym_CARET] = ACTIONS(676),
  },
  [219] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(392),
    [anon_sym_COMMA] = ACTIONS(672),
    [anon_sym_RPAREN] = ACTIONS(674),
    [sym_comment] = ACTIONS(5),
  },
  [220] = {
    [anon_sym_COMMA] = ACTIONS(682),
    [anon_sym_RPAREN] = ACTIONS(682),
    [sym_comment] = ACTIONS(5),
  },
  [221] = {
    [anon_sym_AT] = ACTIONS(684),
    [sym_comment] = ACTIONS(5),
  },
  [222] = {
    [sym_labels] = STATE(127),
    [sym_label] = STATE(272),
    [sym_strict] = STATE(170),
    [sym__literal] = STATE(130),
    [sym__identifier] = STATE(273),
    [sym_variable_identifier] = STATE(184),
    [sym_constructor_identifier] = STATE(184),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [sym_fields] = STATE(127),
    [aux_sym_constructor_repeat1] = STATE(173),
    [aux_sym_constructor_repeat3] = STATE(274),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(285),
    [sym__constructor_pattern] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(173),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(173),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(173),
    [anon_sym_AMP] = ACTIONS(173),
    [anon_sym_1] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_QMARK] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(173),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [223] = {
    [anon_sym_LPAREN] = ACTIONS(686),
    [anon_sym_COMMA] = ACTIONS(686),
    [anon_sym_RPAREN] = ACTIONS(686),
    [anon_sym_EQ] = ACTIONS(686),
    [anon_sym_TILDE] = ACTIONS(686),
    [anon_sym_LBRACK] = ACTIONS(686),
    [anon_sym_RBRACK] = ACTIONS(686),
    [anon_sym_DASH] = ACTIONS(686),
    [anon_sym__] = ACTIONS(686),
    [anon_sym_BQUOTE] = ACTIONS(686),
    [anon_sym_COLON] = ACTIONS(686),
    [sym_list_constructor] = ACTIONS(686),
    [anon_sym_BANG] = ACTIONS(686),
    [sym__variable_pattern] = ACTIONS(688),
    [sym__constructor_pattern] = ACTIONS(688),
    [anon_sym_DOT] = ACTIONS(686),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(688),
    [anon_sym_SQUOTE] = ACTIONS(686),
    [anon_sym_DQUOTE] = ACTIONS(686),
    [anon_sym_POUND] = ACTIONS(686),
    [anon_sym_DOLLAR] = ACTIONS(686),
    [anon_sym_PERCENT] = ACTIONS(686),
    [anon_sym_AMP] = ACTIONS(686),
    [anon_sym_1] = ACTIONS(686),
    [anon_sym_PLUS] = ACTIONS(686),
    [anon_sym_SLASH] = ACTIONS(686),
    [anon_sym_LT] = ACTIONS(686),
    [anon_sym_GT] = ACTIONS(686),
    [anon_sym_QMARK] = ACTIONS(686),
    [anon_sym_CARET] = ACTIONS(686),
    [sym__integer_literal] = ACTIONS(686),
    [sym__octal_literal] = ACTIONS(686),
    [sym__hexidecimal_literal] = ACTIONS(686),
  },
  [224] = {
    [sym__function_pattern] = STATE(223),
    [sym_label_pattern] = STATE(85),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(227),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(95),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(387),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [225] = {
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_COLON] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(81),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_1] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_QMARK] = ACTIONS(81),
    [anon_sym_CARET] = ACTIONS(81),
  },
  [226] = {
    [anon_sym_RBRACK] = ACTIONS(690),
    [sym_comment] = ACTIONS(5),
  },
  [227] = {
    [anon_sym_AT] = ACTIONS(692),
    [sym_comment] = ACTIONS(5),
  },
  [228] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(694),
  },
  [229] = {
    [anon_sym_RBRACE] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(325),
    [anon_sym_COMMA] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_EQ] = ACTIONS(325),
    [anon_sym_TILDE] = ACTIONS(325),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(325),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym__] = ACTIONS(325),
    [anon_sym_BQUOTE] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(325),
    [sym_list_constructor] = ACTIONS(325),
    [anon_sym_BANG] = ACTIONS(325),
    [sym__variable_pattern] = ACTIONS(327),
    [sym__constructor_pattern] = ACTIONS(327),
    [anon_sym_DOT] = ACTIONS(325),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(327),
    [anon_sym_SQUOTE] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
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
    [sym__integer_literal] = ACTIONS(325),
    [sym__octal_literal] = ACTIONS(325),
    [sym__hexidecimal_literal] = ACTIONS(325),
  },
  [230] = {
    [sym__gap] = STATE(200),
    [sym__graphic] = STATE(200),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__symbol] = STATE(73),
    [sym__special] = STATE(73),
    [sym__escape] = STATE(200),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(696),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [231] = {
    [sym__function_pattern] = STATE(398),
    [sym_label_pattern] = STATE(85),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(92),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(95),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(157),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [232] = {
    [sym_labels] = STATE(400),
    [sym_label] = STATE(401),
    [sym__identifier] = STATE(402),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [anon_sym_RBRACE] = ACTIONS(698),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [233] = {
    [anon_sym_LPAREN] = ACTIONS(700),
    [anon_sym_EQ] = ACTIONS(700),
    [anon_sym_TILDE] = ACTIONS(700),
    [anon_sym_LBRACK] = ACTIONS(700),
    [anon_sym__] = ACTIONS(700),
    [sym_list_constructor] = ACTIONS(700),
    [sym__variable_pattern] = ACTIONS(702),
    [sym__constructor_pattern] = ACTIONS(702),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(702),
    [anon_sym_SQUOTE] = ACTIONS(700),
    [anon_sym_DQUOTE] = ACTIONS(700),
    [sym__integer_literal] = ACTIONS(700),
    [sym__octal_literal] = ACTIONS(700),
    [sym__hexidecimal_literal] = ACTIONS(700),
  },
  [234] = {
    [sym_type] = STATE(409),
    [sym__generic_type_constructor] = STATE(410),
    [sym_tupling_constructor] = STATE(406),
    [sym_tuple] = STATE(410),
    [sym_list] = STATE(410),
    [sym_parenthesized_constructor] = STATE(410),
    [sym_constructor] = STATE(411),
    [sym_variable_identifier] = STATE(412),
    [sym_constructor_identifier] = STATE(113),
    [sym__type_constructors] = STATE(406),
    [sym_qualified_type_constructor] = STATE(413),
    [anon_sym_LPAREN] = ACTIONS(704),
    [anon_sym_COMMA] = ACTIONS(706),
    [anon_sym_LBRACK] = ACTIONS(708),
    [sym_unit_type] = ACTIONS(710),
    [sym_list_constructor] = ACTIONS(710),
    [sym_function_constructor] = ACTIONS(710),
    [sym__variable_pattern] = ACTIONS(481),
    [sym__constructor_pattern] = ACTIONS(712),
    [sym_module_identifier] = ACTIONS(714),
    [sym_comment] = ACTIONS(5),
  },
  [235] = {
    [sym_type] = STATE(417),
    [sym__generic_type_constructor] = STATE(418),
    [sym_tupling_constructor] = STATE(406),
    [sym_tuple] = STATE(418),
    [sym_list] = STATE(418),
    [sym_parenthesized_constructor] = STATE(418),
    [sym_variable_identifier] = STATE(419),
    [sym__type_constructors] = STATE(406),
    [sym_qualified_type_constructor] = STATE(413),
    [aux_sym_list_repeat1] = STATE(420),
    [anon_sym_LPAREN] = ACTIONS(704),
    [anon_sym_LBRACK] = ACTIONS(708),
    [sym_unit_type] = ACTIONS(710),
    [sym_list_constructor] = ACTIONS(710),
    [sym_function_constructor] = ACTIONS(710),
    [sym__variable_pattern] = ACTIONS(716),
    [sym__constructor_pattern] = ACTIONS(718),
    [sym_module_identifier] = ACTIONS(720),
    [sym_comment] = ACTIONS(5),
  },
  [236] = {
    [sym__layout_semicolon] = ACTIONS(722),
    [anon_sym_SEMI] = ACTIONS(724),
    [anon_sym_DASH_GT] = ACTIONS(724),
    [sym_comment] = ACTIONS(5),
  },
  [237] = {
    [sym_variable_identifier] = STATE(422),
    [aux_sym__type_constructors_repeat1] = STATE(423),
    [sym__layout_semicolon] = ACTIONS(726),
    [anon_sym_SEMI] = ACTIONS(728),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_DASH_GT] = ACTIONS(728),
    [anon_sym_EQ_GT] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [238] = {
    [sym_constructor_identifier] = STATE(426),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(427),
    [sym__constructor_pattern] = ACTIONS(730),
    [anon_sym_DOT] = ACTIONS(732),
    [sym_comment] = ACTIONS(5),
  },
  [239] = {
    [sym__layout_semicolon] = ACTIONS(734),
    [anon_sym_SEMI] = ACTIONS(736),
    [sym_comment] = ACTIONS(5),
  },
  [240] = {
    [sym__layout_semicolon] = ACTIONS(738),
    [anon_sym_SEMI] = ACTIONS(740),
    [anon_sym_DASH_GT] = ACTIONS(742),
    [sym_comment] = ACTIONS(5),
  },
  [241] = {
    [sym_type] = STATE(429),
    [sym__generic_type_constructor] = STATE(240),
    [sym_tupling_constructor] = STATE(236),
    [sym_tuple] = STATE(240),
    [sym_list] = STATE(240),
    [sym_parenthesized_constructor] = STATE(240),
    [sym_variable_identifier] = STATE(243),
    [sym__type_constructors] = STATE(236),
    [sym_qualified_type_constructor] = STATE(245),
    [anon_sym_LPAREN] = ACTIONS(589),
    [anon_sym_LBRACK] = ACTIONS(413),
    [sym_unit_type] = ACTIONS(415),
    [sym_list_constructor] = ACTIONS(415),
    [sym_function_constructor] = ACTIONS(415),
    [sym__variable_pattern] = ACTIONS(417),
    [sym__constructor_pattern] = ACTIONS(591),
    [sym_module_identifier] = ACTIONS(421),
    [sym_comment] = ACTIONS(5),
  },
  [242] = {
    [anon_sym_EQ_GT] = ACTIONS(744),
    [sym_comment] = ACTIONS(5),
  },
  [243] = {
    [sym__layout_semicolon] = ACTIONS(746),
    [anon_sym_SEMI] = ACTIONS(748),
    [anon_sym_DASH_GT] = ACTIONS(750),
    [sym_comment] = ACTIONS(5),
  },
  [244] = {
    [sym_labels] = STATE(127),
    [sym_label] = STATE(128),
    [sym_strict] = STATE(170),
    [sym__literal] = STATE(130),
    [sym__identifier] = STATE(432),
    [sym_variable_identifier] = STATE(172),
    [sym_constructor_identifier] = STATE(172),
    [sym_integer] = STATE(123),
    [sym_char] = STATE(123),
    [sym_string] = STATE(123),
    [sym_fields] = STATE(127),
    [aux_sym_constructor_repeat1] = STATE(173),
    [aux_sym_constructor_repeat3] = STATE(134),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_EQ_GT] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(273),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [sym__integer_literal] = ACTIONS(225),
    [sym__octal_literal] = ACTIONS(225),
    [sym__hexidecimal_literal] = ACTIONS(225),
  },
  [245] = {
    [sym__layout_semicolon] = ACTIONS(752),
    [anon_sym_SEMI] = ACTIONS(754),
    [anon_sym_DASH_GT] = ACTIONS(754),
    [sym_comment] = ACTIONS(5),
  },
  [246] = {
    [ts_builtin_sym_end] = ACTIONS(756),
    [anon_sym_RBRACE] = ACTIONS(758),
    [anon_sym_import] = ACTIONS(758),
    [anon_sym_foreign] = ACTIONS(758),
    [anon_sym_default] = ACTIONS(758),
    [anon_sym_class] = ACTIONS(758),
    [anon_sym_instance] = ACTIONS(758),
    [anon_sym_infixl] = ACTIONS(758),
    [anon_sym_infixr] = ACTIONS(758),
    [anon_sym_infix] = ACTIONS(758),
    [anon_sym_data] = ACTIONS(758),
    [anon_sym_newtype] = ACTIONS(758),
    [anon_sym_type] = ACTIONS(758),
    [sym__variable_pattern] = ACTIONS(760),
    [sym__constructor_pattern] = ACTIONS(760),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(760),
    [anon_sym_SQUOTE] = ACTIONS(758),
    [anon_sym_DQUOTE] = ACTIONS(758),
    [sym__integer_literal] = ACTIONS(758),
    [sym__octal_literal] = ACTIONS(758),
    [sym__hexidecimal_literal] = ACTIONS(758),
  },
  [247] = {
    [anon_sym_where] = ACTIONS(762),
    [sym_comment] = ACTIONS(5),
  },
  [248] = {
    [aux_sym_module_exports_repeat1] = STATE(435),
    [anon_sym_COMMA] = ACTIONS(764),
    [anon_sym_RPAREN] = ACTIONS(766),
    [sym_comment] = ACTIONS(5),
  },
  [249] = {
    [anon_sym_LPAREN] = ACTIONS(768),
    [anon_sym_COMMA] = ACTIONS(770),
    [anon_sym_RPAREN] = ACTIONS(770),
    [sym_comment] = ACTIONS(5),
  },
  [250] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(438),
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
    [aux_sym_module_repeat1] = STATE(439),
    [sym__layout_close_brace] = ACTIONS(772),
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
  [251] = {
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
    [aux_sym_module_repeat1] = STATE(440),
    [anon_sym_RBRACE] = ACTIONS(774),
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
  [252] = {
    [ts_builtin_sym_end] = ACTIONS(776),
    [sym_comment] = ACTIONS(5),
  },
  [253] = {
    [ts_builtin_sym_end] = ACTIONS(778),
    [sym_comment] = ACTIONS(5),
  },
  [254] = {
    [sym_module_identifier] = ACTIONS(780),
    [sym_comment] = ACTIONS(5),
  },
  [255] = {
    [sym__layout_semicolon] = ACTIONS(782),
    [anon_sym_SEMI] = ACTIONS(784),
    [sym_comment] = ACTIONS(5),
  },
  [256] = {
    [sym__layout_semicolon] = ACTIONS(786),
    [anon_sym_SEMI] = ACTIONS(788),
    [sym_comment] = ACTIONS(5),
  },
  [257] = {
    [aux_sym_import_specification_repeat1] = STATE(445),
    [anon_sym_LPAREN] = ACTIONS(790),
    [anon_sym_COMMA] = ACTIONS(792),
    [anon_sym_RPAREN] = ACTIONS(794),
    [sym_comment] = ACTIONS(5),
  },
  [258] = {
    [sym_import_specification] = STATE(446),
    [sym__layout_semicolon] = ACTIONS(782),
    [anon_sym_SEMI] = ACTIONS(784),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_hiding] = ACTIONS(193),
    [sym_comment] = ACTIONS(5),
  },
  [259] = {
    [sym__identifier] = STATE(447),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(794),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [260] = {
    [sym__variable_pattern] = ACTIONS(796),
    [sym__constructor_pattern] = ACTIONS(798),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(796),
  },
  [261] = {
    [sym__gap] = STATE(71),
    [sym__graphic] = STATE(71),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__symbol] = STATE(73),
    [sym__special] = STATE(73),
    [sym__escape] = STATE(71),
    [aux_sym_string_repeat1] = STATE(449),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(800),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [262] = {
    [sym_type_signature] = STATE(450),
    [sym__identifier] = STATE(264),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym_string] = STATE(451),
    [sym__variable_pattern] = ACTIONS(481),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(453),
  },
  [263] = {
    [sym__layout_semicolon] = ACTIONS(802),
    [anon_sym_SEMI] = ACTIONS(804),
    [sym_comment] = ACTIONS(5),
  },
  [264] = {
    [anon_sym_COLON_COLON] = ACTIONS(169),
    [sym_comment] = ACTIONS(5),
  },
  [265] = {
    [sym_type_signature] = STATE(450),
    [sym__identifier] = STATE(264),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(481),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [266] = {
    [sym__identifier] = STATE(452),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [267] = {
    [sym__layout_semicolon] = ACTIONS(806),
    [anon_sym_SEMI] = ACTIONS(808),
    [sym_comment] = ACTIONS(5),
  },
  [268] = {
    [anon_sym_COMMA] = ACTIONS(810),
    [anon_sym_RPAREN] = ACTIONS(812),
    [sym_comment] = ACTIONS(5),
  },
  [269] = {
    [sym_constructor] = STATE(455),
    [sym_constructor_identifier] = STATE(113),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [270] = {
    [anon_sym_EQ_GT] = ACTIONS(814),
    [sym_comment] = ACTIONS(5),
  },
  [271] = {
    [anon_sym_COMMA] = ACTIONS(816),
    [anon_sym_RPAREN] = ACTIONS(818),
    [sym_comment] = ACTIONS(5),
  },
  [272] = {
    [aux_sym_labels_repeat1] = STATE(460),
    [anon_sym_COMMA] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(491),
    [sym_comment] = ACTIONS(5),
  },
  [273] = {
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [anon_sym_EQ] = ACTIONS(820),
    [anon_sym_BANG] = ACTIONS(493),
    [sym__variable_pattern] = ACTIONS(493),
    [sym__constructor_pattern] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
  },
  [274] = {
    [sym__literal] = STATE(295),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [275] = {
    [sym__layout_semicolon] = ACTIONS(822),
    [anon_sym_SEMI] = ACTIONS(824),
    [sym_comment] = ACTIONS(5),
  },
  [276] = {
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(77),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
  },
  [277] = {
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_where] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(203),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [278] = {
    [anon_sym_EQ] = ACTIONS(501),
    [anon_sym_where] = ACTIONS(493),
    [anon_sym_BANG] = ACTIONS(493),
    [sym__variable_pattern] = ACTIONS(495),
    [sym__constructor_pattern] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
  },
  [279] = {
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_where] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(175),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
  },
  [280] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(438),
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
    [aux_sym_module_repeat1] = STATE(463),
    [sym__layout_close_brace] = ACTIONS(826),
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
  [281] = {
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
    [aux_sym_module_repeat1] = STATE(464),
    [anon_sym_RBRACE] = ACTIONS(828),
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
  [282] = {
    [sym__layout_semicolon] = ACTIONS(776),
    [anon_sym_SEMI] = ACTIONS(830),
    [sym_comment] = ACTIONS(5),
  },
  [283] = {
    [aux_sym_fields_repeat1] = STATE(467),
    [anon_sym_RBRACE] = ACTIONS(832),
    [anon_sym_COMMA] = ACTIONS(834),
    [sym_comment] = ACTIONS(5),
  },
  [284] = {
    [aux_sym_field_repeat1] = STATE(470),
    [anon_sym_COMMA] = ACTIONS(836),
    [anon_sym_COLON_COLON] = ACTIONS(838),
    [sym_comment] = ACTIONS(5),
  },
  [285] = {
    [anon_sym_RPAREN] = ACTIONS(840),
    [sym__variable_pattern] = ACTIONS(840),
    [sym__constructor_pattern] = ACTIONS(842),
    [sym_comment] = ACTIONS(5),
  },
  [286] = {
    [sym__identifier] = STATE(472),
    [sym_variable_identifier] = STATE(172),
    [sym_constructor_identifier] = STATE(172),
    [anon_sym_RPAREN] = ACTIONS(844),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [287] = {
    [anon_sym_RBRACE] = ACTIONS(846),
    [anon_sym_COMMA] = ACTIONS(846),
    [anon_sym_where] = ACTIONS(846),
    [anon_sym_EQ_GT] = ACTIONS(846),
    [anon_sym_BANG] = ACTIONS(846),
    [sym__variable_pattern] = ACTIONS(848),
    [sym__constructor_pattern] = ACTIONS(848),
    [sym_comment] = ACTIONS(5),
  },
  [288] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(850),
  },
  [289] = {
    [anon_sym_COMMA] = ACTIONS(325),
    [anon_sym_EQ] = ACTIONS(325),
    [anon_sym_where] = ACTIONS(325),
    [anon_sym_EQ_GT] = ACTIONS(325),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(327),
    [anon_sym_SQUOTE] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [sym__integer_literal] = ACTIONS(325),
    [sym__octal_literal] = ACTIONS(325),
    [sym__hexidecimal_literal] = ACTIONS(325),
  },
  [290] = {
    [sym__gap] = STATE(200),
    [sym__graphic] = STATE(200),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__symbol] = STATE(73),
    [sym__special] = STATE(73),
    [sym__escape] = STATE(200),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(852),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [291] = {
    [sym_label] = STATE(475),
    [sym__identifier] = STATE(476),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [292] = {
    [anon_sym_COMMA] = ACTIONS(854),
    [anon_sym_EQ] = ACTIONS(856),
    [anon_sym_where] = ACTIONS(856),
    [anon_sym_EQ_GT] = ACTIONS(856),
    [sym_comment] = ACTIONS(5),
  },
  [293] = {
    [sym__literal] = STATE(478),
    [sym_integer] = STATE(123),
    [sym_char] = STATE(123),
    [sym_string] = STATE(123),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [sym__integer_literal] = ACTIONS(225),
    [sym__octal_literal] = ACTIONS(225),
    [sym__hexidecimal_literal] = ACTIONS(225),
  },
  [294] = {
    [anon_sym_where] = ACTIONS(858),
    [anon_sym_EQ_GT] = ACTIONS(858),
    [anon_sym_BANG] = ACTIONS(858),
    [sym__variable_pattern] = ACTIONS(860),
    [sym__constructor_pattern] = ACTIONS(860),
    [sym_comment] = ACTIONS(5),
  },
  [295] = {
    [anon_sym_COMMA] = ACTIONS(862),
    [anon_sym_RPAREN] = ACTIONS(862),
    [anon_sym_EQ] = ACTIONS(862),
    [anon_sym_where] = ACTIONS(862),
    [anon_sym_EQ_GT] = ACTIONS(862),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(864),
    [anon_sym_SQUOTE] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(862),
    [sym__integer_literal] = ACTIONS(862),
    [sym__octal_literal] = ACTIONS(862),
    [sym__hexidecimal_literal] = ACTIONS(862),
  },
  [296] = {
    [sym__layout_semicolon] = ACTIONS(866),
    [anon_sym_SEMI] = ACTIONS(868),
    [sym_comment] = ACTIONS(5),
  },
  [297] = {
    [sym__layout_semicolon] = ACTIONS(870),
    [anon_sym_SEMI] = ACTIONS(872),
    [anon_sym_COMMA] = ACTIONS(872),
    [sym_comment] = ACTIONS(5),
  },
  [298] = {
    [sym__layout_semicolon] = ACTIONS(874),
    [anon_sym_SEMI] = ACTIONS(876),
    [anon_sym_COMMA] = ACTIONS(876),
    [anon_sym_DASH] = ACTIONS(876),
    [anon_sym_COLON] = ACTIONS(876),
    [anon_sym_BANG] = ACTIONS(876),
    [anon_sym_DOT] = ACTIONS(876),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(876),
    [anon_sym_DOLLAR] = ACTIONS(876),
    [anon_sym_PERCENT] = ACTIONS(876),
    [anon_sym_AMP] = ACTIONS(876),
    [anon_sym_1] = ACTIONS(876),
    [anon_sym_PLUS] = ACTIONS(876),
    [anon_sym_SLASH] = ACTIONS(876),
    [anon_sym_LT] = ACTIONS(876),
    [anon_sym_GT] = ACTIONS(876),
    [anon_sym_QMARK] = ACTIONS(876),
    [anon_sym_CARET] = ACTIONS(876),
  },
  [299] = {
    [sym__layout_semicolon] = ACTIONS(878),
    [anon_sym_SEMI] = ACTIONS(880),
    [anon_sym_COMMA] = ACTIONS(880),
    [sym_comment] = ACTIONS(5),
  },
  [300] = {
    [sym__op] = STATE(479),
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
  [301] = {
    [sym__layout_semicolon] = ACTIONS(882),
    [anon_sym_SEMI] = ACTIONS(884),
    [anon_sym_COMMA] = ACTIONS(525),
    [sym_comment] = ACTIONS(5),
  },
  [302] = {
    [sym__layout_semicolon] = ACTIONS(886),
    [anon_sym_SEMI] = ACTIONS(888),
    [anon_sym_COMMA] = ACTIONS(888),
    [anon_sym_DASH] = ACTIONS(888),
    [anon_sym_BANG] = ACTIONS(888),
    [anon_sym_DOT] = ACTIONS(888),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(888),
    [anon_sym_DOLLAR] = ACTIONS(888),
    [anon_sym_PERCENT] = ACTIONS(888),
    [anon_sym_AMP] = ACTIONS(888),
    [anon_sym_1] = ACTIONS(888),
    [anon_sym_PLUS] = ACTIONS(888),
    [anon_sym_SLASH] = ACTIONS(888),
    [anon_sym_LT] = ACTIONS(888),
    [anon_sym_GT] = ACTIONS(888),
    [anon_sym_QMARK] = ACTIONS(888),
    [anon_sym_CARET] = ACTIONS(888),
  },
  [303] = {
    [sym_constructors] = STATE(480),
    [sym_constructor] = STATE(152),
    [sym_deriving] = STATE(481),
    [sym_constructor_identifier] = STATE(154),
    [sym__layout_semicolon] = ACTIONS(890),
    [anon_sym_SEMI] = ACTIONS(892),
    [anon_sym_deriving] = ACTIONS(259),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [304] = {
    [sym_deriving] = STATE(481),
    [sym__layout_semicolon] = ACTIONS(890),
    [anon_sym_SEMI] = ACTIONS(892),
    [anon_sym_deriving] = ACTIONS(259),
    [sym_comment] = ACTIONS(5),
  },
  [305] = {
    [sym__layout_semicolon] = ACTIONS(890),
    [anon_sym_SEMI] = ACTIONS(892),
    [sym_comment] = ACTIONS(5),
  },
  [306] = {
    [sym_field] = STATE(482),
    [sym_variable_identifier] = STATE(284),
    [sym__variable_pattern] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
  },
  [307] = {
    [sym__identifier] = STATE(285),
    [sym_variable_identifier] = STATE(172),
    [sym_constructor_identifier] = STATE(172),
    [aux_sym_constructor_repeat2] = STATE(483),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [308] = {
    [sym__identifier] = STATE(484),
    [sym_variable_identifier] = STATE(319),
    [sym_constructor_identifier] = STATE(319),
    [sym__variable_pattern] = ACTIONS(894),
    [sym__constructor_pattern] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
  },
  [309] = {
    [sym__layout_semicolon] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(77),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
  },
  [310] = {
    [sym__layout_semicolon] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_deriving] = ACTIONS(87),
    [sym__constructor_pattern] = ACTIONS(89),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym__integer_literal] = ACTIONS(87),
    [sym__octal_literal] = ACTIONS(87),
    [sym__hexidecimal_literal] = ACTIONS(87),
  },
  [311] = {
    [sym__graphic] = STATE(485),
    [sym__small] = STATE(65),
    [sym__large] = STATE(65),
    [sym__symbol] = STATE(65),
    [sym__special] = STATE(65),
    [sym__escape] = STATE(485),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(93),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_BANG] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(93),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(896),
    [anon_sym_DQUOTE] = ACTIONS(896),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(95),
    [sym__ascii_large] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(93),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_QMARK] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
    [anon_sym_BSLASH] = ACTIONS(105),
    [sym__space] = ACTIONS(896),
  },
  [312] = {
    [sym__gap] = STATE(71),
    [sym__graphic] = STATE(71),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__symbol] = STATE(73),
    [sym__special] = STATE(73),
    [sym__escape] = STATE(71),
    [aux_sym_string_repeat1] = STATE(487),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(898),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [313] = {
    [sym__layout_semicolon] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_deriving] = ACTIONS(127),
    [sym__constructor_pattern] = ACTIONS(129),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym__integer_literal] = ACTIONS(127),
    [sym__octal_literal] = ACTIONS(127),
    [sym__hexidecimal_literal] = ACTIONS(127),
  },
  [314] = {
    [sym__layout_semicolon] = ACTIONS(567),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(487),
    [anon_sym_deriving] = ACTIONS(487),
    [sym__constructor_pattern] = ACTIONS(569),
    [sym_comment] = ACTIONS(5),
  },
  [315] = {
    [aux_sym_labels_repeat1] = STATE(489),
    [sym__layout_semicolon] = ACTIONS(571),
    [anon_sym_SEMI] = ACTIONS(491),
    [anon_sym_COMMA] = ACTIONS(900),
    [anon_sym_EQ] = ACTIONS(491),
    [anon_sym_deriving] = ACTIONS(491),
    [sym__constructor_pattern] = ACTIONS(575),
    [sym_comment] = ACTIONS(5),
  },
  [316] = {
    [sym__layout_semicolon] = ACTIONS(577),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_EQ] = ACTIONS(493),
    [anon_sym_deriving] = ACTIONS(493),
    [anon_sym_BANG] = ACTIONS(493),
    [sym__variable_pattern] = ACTIONS(495),
    [sym__constructor_pattern] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
  },
  [317] = {
    [sym__layout_semicolon] = ACTIONS(579),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_deriving] = ACTIONS(497),
    [sym__constructor_pattern] = ACTIONS(499),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(499),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [sym__integer_literal] = ACTIONS(497),
    [sym__octal_literal] = ACTIONS(497),
    [sym__hexidecimal_literal] = ACTIONS(497),
  },
  [318] = {
    [sym__layout_semicolon] = ACTIONS(577),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_EQ] = ACTIONS(902),
    [anon_sym_deriving] = ACTIONS(493),
    [anon_sym_BANG] = ACTIONS(493),
    [sym__variable_pattern] = ACTIONS(495),
    [sym__constructor_pattern] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
  },
  [319] = {
    [sym__layout_semicolon] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_deriving] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(175),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
  },
  [320] = {
    [sym_strict] = STATE(491),
    [sym__identifier] = STATE(491),
    [sym_variable_identifier] = STATE(319),
    [sym_constructor_identifier] = STATE(319),
    [sym__layout_semicolon] = ACTIONS(567),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(487),
    [anon_sym_deriving] = ACTIONS(487),
    [anon_sym_BANG] = ACTIONS(545),
    [sym__variable_pattern] = ACTIONS(547),
    [sym__constructor_pattern] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
  },
  [321] = {
    [sym__literal] = STATE(492),
    [sym_integer] = STATE(310),
    [sym_char] = STATE(310),
    [sym_string] = STATE(310),
    [sym__layout_semicolon] = ACTIONS(567),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(487),
    [anon_sym_deriving] = ACTIONS(487),
    [sym__constructor_pattern] = ACTIONS(569),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(549),
    [anon_sym_SQUOTE] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [sym__integer_literal] = ACTIONS(555),
    [sym__octal_literal] = ACTIONS(555),
    [sym__hexidecimal_literal] = ACTIONS(555),
  },
  [322] = {
    [sym__identifier] = STATE(493),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [323] = {
    [sym__layout_semicolon] = ACTIONS(905),
    [anon_sym_SEMI] = ACTIONS(907),
    [sym_comment] = ACTIONS(5),
  },
  [324] = {
    [sym_constructor] = STATE(494),
    [sym_constructor_identifier] = STATE(154),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [325] = {
    [sym__layout_semicolon] = ACTIONS(909),
    [anon_sym_SEMI] = ACTIONS(911),
    [anon_sym_PIPE] = ACTIONS(913),
    [anon_sym_deriving] = ACTIONS(911),
    [sym_comment] = ACTIONS(5),
  },
  [326] = {
    [sym__layout_semicolon] = ACTIONS(577),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_EQ] = ACTIONS(915),
    [anon_sym_PIPE] = ACTIONS(493),
    [anon_sym_deriving] = ACTIONS(493),
    [anon_sym_BANG] = ACTIONS(493),
    [sym__variable_pattern] = ACTIONS(495),
    [sym__constructor_pattern] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
  },
  [327] = {
    [aux_sym_fields_repeat1] = STATE(497),
    [anon_sym_RBRACE] = ACTIONS(917),
    [anon_sym_COMMA] = ACTIONS(834),
    [sym_comment] = ACTIONS(5),
  },
  [328] = {
    [sym__identifier] = STATE(472),
    [sym_variable_identifier] = STATE(172),
    [sym_constructor_identifier] = STATE(172),
    [anon_sym_RPAREN] = ACTIONS(919),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [329] = {
    [sym__layout_semicolon] = ACTIONS(921),
    [anon_sym_SEMI] = ACTIONS(846),
    [anon_sym_EQ] = ACTIONS(846),
    [anon_sym_EQ_GT] = ACTIONS(846),
    [anon_sym_PIPE] = ACTIONS(846),
    [anon_sym_deriving] = ACTIONS(846),
    [anon_sym_BANG] = ACTIONS(846),
    [sym__variable_pattern] = ACTIONS(848),
    [sym__constructor_pattern] = ACTIONS(848),
    [sym_comment] = ACTIONS(5),
  },
  [330] = {
    [sym_label] = STATE(499),
    [sym__identifier] = STATE(500),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [331] = {
    [sym__layout_semicolon] = ACTIONS(923),
    [anon_sym_SEMI] = ACTIONS(856),
    [anon_sym_COMMA] = ACTIONS(925),
    [anon_sym_EQ] = ACTIONS(856),
    [anon_sym_EQ_GT] = ACTIONS(856),
    [anon_sym_PIPE] = ACTIONS(856),
    [anon_sym_deriving] = ACTIONS(856),
    [sym__constructor_pattern] = ACTIONS(927),
    [sym_comment] = ACTIONS(5),
  },
  [332] = {
    [sym__literal] = STATE(502),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [333] = {
    [sym__layout_semicolon] = ACTIONS(929),
    [anon_sym_SEMI] = ACTIONS(858),
    [anon_sym_EQ] = ACTIONS(858),
    [anon_sym_EQ_GT] = ACTIONS(858),
    [anon_sym_PIPE] = ACTIONS(858),
    [anon_sym_deriving] = ACTIONS(858),
    [anon_sym_BANG] = ACTIONS(858),
    [sym__variable_pattern] = ACTIONS(860),
    [sym__constructor_pattern] = ACTIONS(860),
    [sym_comment] = ACTIONS(5),
  },
  [334] = {
    [sym__layout_semicolon] = ACTIONS(931),
    [anon_sym_SEMI] = ACTIONS(862),
    [anon_sym_EQ] = ACTIONS(862),
    [anon_sym_EQ_GT] = ACTIONS(862),
    [anon_sym_PIPE] = ACTIONS(862),
    [anon_sym_deriving] = ACTIONS(862),
    [sym__constructor_pattern] = ACTIONS(864),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(864),
    [anon_sym_SQUOTE] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(862),
    [sym__integer_literal] = ACTIONS(862),
    [sym__octal_literal] = ACTIONS(862),
    [sym__hexidecimal_literal] = ACTIONS(862),
  },
  [335] = {
    [sym_constructor] = STATE(503),
    [sym_constructor_identifier] = STATE(154),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [336] = {
    [sym_deriving] = STATE(504),
    [sym__layout_semicolon] = ACTIONS(933),
    [anon_sym_SEMI] = ACTIONS(935),
    [anon_sym_deriving] = ACTIONS(259),
    [sym_comment] = ACTIONS(5),
  },
  [337] = {
    [anon_sym_COMMA] = ACTIONS(846),
    [anon_sym_RPAREN] = ACTIONS(846),
    [anon_sym_EQ] = ACTIONS(846),
    [anon_sym_EQ_GT] = ACTIONS(846),
    [anon_sym_BANG] = ACTIONS(846),
    [sym__variable_pattern] = ACTIONS(846),
    [sym__constructor_pattern] = ACTIONS(848),
    [sym_comment] = ACTIONS(5),
  },
  [338] = {
    [anon_sym_COMMA] = ACTIONS(858),
    [anon_sym_RPAREN] = ACTIONS(858),
    [anon_sym_EQ] = ACTIONS(858),
    [anon_sym_EQ_GT] = ACTIONS(858),
    [anon_sym_BANG] = ACTIONS(858),
    [sym__variable_pattern] = ACTIONS(858),
    [sym__constructor_pattern] = ACTIONS(860),
    [sym_comment] = ACTIONS(5),
  },
  [339] = {
    [sym_type] = STATE(409),
    [sym__generic_type_constructor] = STATE(410),
    [sym_tupling_constructor] = STATE(406),
    [sym_tuple] = STATE(410),
    [sym_list] = STATE(410),
    [sym_parenthesized_constructor] = STATE(410),
    [sym_variable_identifier] = STATE(412),
    [sym__type_constructors] = STATE(406),
    [sym_qualified_type_constructor] = STATE(413),
    [anon_sym_LPAREN] = ACTIONS(704),
    [anon_sym_COMMA] = ACTIONS(706),
    [anon_sym_LBRACK] = ACTIONS(708),
    [sym_unit_type] = ACTIONS(710),
    [sym_list_constructor] = ACTIONS(710),
    [sym_function_constructor] = ACTIONS(710),
    [sym__variable_pattern] = ACTIONS(481),
    [sym__constructor_pattern] = ACTIONS(937),
    [sym_module_identifier] = ACTIONS(714),
    [sym_comment] = ACTIONS(5),
  },
  [340] = {
    [sym_variable_identifier] = STATE(422),
    [aux_sym__type_constructors_repeat1] = STATE(423),
    [sym__layout_semicolon] = ACTIONS(726),
    [anon_sym_SEMI] = ACTIONS(728),
    [anon_sym_DASH_GT] = ACTIONS(728),
    [sym__variable_pattern] = ACTIONS(939),
    [sym_comment] = ACTIONS(5),
  },
  [341] = {
    [sym__layout_semicolon] = ACTIONS(941),
    [anon_sym_SEMI] = ACTIONS(943),
    [sym_comment] = ACTIONS(5),
  },
  [342] = {
    [aux_sym_fields_repeat1] = STATE(507),
    [anon_sym_RBRACE] = ACTIONS(945),
    [anon_sym_COMMA] = ACTIONS(834),
    [sym_comment] = ACTIONS(5),
  },
  [343] = {
    [sym__identifier] = STATE(472),
    [sym_variable_identifier] = STATE(172),
    [sym_constructor_identifier] = STATE(172),
    [anon_sym_RPAREN] = ACTIONS(947),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [344] = {
    [anon_sym_EQ] = ACTIONS(846),
    [anon_sym_BANG] = ACTIONS(846),
    [sym__variable_pattern] = ACTIONS(846),
    [sym__constructor_pattern] = ACTIONS(848),
    [sym_comment] = ACTIONS(5),
  },
  [345] = {
    [sym_label] = STATE(509),
    [sym__identifier] = STATE(510),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [346] = {
    [anon_sym_COMMA] = ACTIONS(949),
    [anon_sym_EQ] = ACTIONS(856),
    [sym_comment] = ACTIONS(5),
  },
  [347] = {
    [sym__literal] = STATE(512),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [348] = {
    [anon_sym_EQ] = ACTIONS(858),
    [anon_sym_BANG] = ACTIONS(858),
    [sym__variable_pattern] = ACTIONS(858),
    [sym__constructor_pattern] = ACTIONS(860),
    [sym_comment] = ACTIONS(5),
  },
  [349] = {
    [anon_sym_EQ] = ACTIONS(862),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(864),
    [anon_sym_SQUOTE] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(862),
    [sym__integer_literal] = ACTIONS(862),
    [sym__octal_literal] = ACTIONS(862),
    [sym__hexidecimal_literal] = ACTIONS(862),
  },
  [350] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(951),
  },
  [351] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(953),
  },
  [352] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(955),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(955),
  },
  [353] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(957),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(959),
  },
  [354] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(961),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(961),
  },
  [355] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(957),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(963),
  },
  [356] = {
    [anon_sym_SEMI] = ACTIONS(965),
    [anon_sym_LBRACE] = ACTIONS(965),
    [anon_sym_RBRACE] = ACTIONS(965),
    [anon_sym_LPAREN] = ACTIONS(965),
    [anon_sym_RPAREN] = ACTIONS(965),
    [anon_sym_EQ] = ACTIONS(965),
    [anon_sym_TILDE] = ACTIONS(965),
    [anon_sym_LBRACK] = ACTIONS(965),
    [anon_sym_RBRACK] = ACTIONS(965),
    [anon_sym_DASH] = ACTIONS(965),
    [anon_sym_AT] = ACTIONS(965),
    [anon_sym__] = ACTIONS(965),
    [anon_sym_BQUOTE] = ACTIONS(965),
    [anon_sym_COLON] = ACTIONS(965),
    [anon_sym_PIPE] = ACTIONS(965),
    [anon_sym_BANG] = ACTIONS(965),
    [anon_sym_DOT] = ACTIONS(965),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(965),
    [anon_sym_DQUOTE] = ACTIONS(965),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(965),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(965),
    [sym__ascii_large] = ACTIONS(965),
    [anon_sym_POUND] = ACTIONS(965),
    [anon_sym_DOLLAR] = ACTIONS(965),
    [anon_sym_PERCENT] = ACTIONS(965),
    [anon_sym_AMP] = ACTIONS(965),
    [anon_sym_1] = ACTIONS(965),
    [anon_sym_PLUS] = ACTIONS(965),
    [anon_sym_SLASH] = ACTIONS(965),
    [anon_sym_LT] = ACTIONS(965),
    [anon_sym_GT] = ACTIONS(965),
    [anon_sym_QMARK] = ACTIONS(965),
    [anon_sym_CARET] = ACTIONS(965),
    [anon_sym_BSLASH] = ACTIONS(965),
    [sym__space] = ACTIONS(965),
    [sym__newline] = ACTIONS(965),
    [sym__tab] = ACTIONS(965),
    [sym__vertical_tab] = ACTIONS(965),
  },
  [357] = {
    [anon_sym_SEMI] = ACTIONS(967),
    [anon_sym_LBRACE] = ACTIONS(967),
    [anon_sym_RBRACE] = ACTIONS(967),
    [anon_sym_LPAREN] = ACTIONS(967),
    [anon_sym_RPAREN] = ACTIONS(967),
    [anon_sym_EQ] = ACTIONS(967),
    [anon_sym_TILDE] = ACTIONS(967),
    [anon_sym_LBRACK] = ACTIONS(967),
    [anon_sym_RBRACK] = ACTIONS(967),
    [anon_sym_DASH] = ACTIONS(967),
    [anon_sym_AT] = ACTIONS(967),
    [anon_sym__] = ACTIONS(967),
    [anon_sym_BQUOTE] = ACTIONS(967),
    [anon_sym_COLON] = ACTIONS(967),
    [anon_sym_PIPE] = ACTIONS(967),
    [anon_sym_BANG] = ACTIONS(967),
    [anon_sym_DOT] = ACTIONS(967),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(967),
    [anon_sym_DQUOTE] = ACTIONS(967),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(967),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(967),
    [sym__ascii_large] = ACTIONS(967),
    [anon_sym_POUND] = ACTIONS(967),
    [anon_sym_DOLLAR] = ACTIONS(967),
    [anon_sym_PERCENT] = ACTIONS(967),
    [anon_sym_AMP] = ACTIONS(967),
    [anon_sym_1] = ACTIONS(967),
    [anon_sym_PLUS] = ACTIONS(967),
    [anon_sym_SLASH] = ACTIONS(967),
    [anon_sym_LT] = ACTIONS(967),
    [anon_sym_GT] = ACTIONS(967),
    [anon_sym_QMARK] = ACTIONS(967),
    [anon_sym_CARET] = ACTIONS(967),
    [anon_sym_BSLASH] = ACTIONS(967),
    [sym__space] = ACTIONS(967),
    [sym__newline] = ACTIONS(967),
    [sym__tab] = ACTIONS(967),
    [sym__vertical_tab] = ACTIONS(967),
  },
  [358] = {
    [anon_sym_SEMI] = ACTIONS(969),
    [anon_sym_LBRACE] = ACTIONS(969),
    [anon_sym_RBRACE] = ACTIONS(969),
    [anon_sym_LPAREN] = ACTIONS(969),
    [anon_sym_RPAREN] = ACTIONS(969),
    [anon_sym_EQ] = ACTIONS(969),
    [anon_sym_TILDE] = ACTIONS(969),
    [anon_sym_LBRACK] = ACTIONS(969),
    [anon_sym_RBRACK] = ACTIONS(969),
    [anon_sym_DASH] = ACTIONS(969),
    [anon_sym_AT] = ACTIONS(969),
    [anon_sym__] = ACTIONS(969),
    [anon_sym_BQUOTE] = ACTIONS(969),
    [anon_sym_COLON] = ACTIONS(969),
    [anon_sym_PIPE] = ACTIONS(969),
    [anon_sym_BANG] = ACTIONS(969),
    [anon_sym_DOT] = ACTIONS(969),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(969),
    [anon_sym_DQUOTE] = ACTIONS(969),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(969),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(969),
    [sym__ascii_large] = ACTIONS(969),
    [anon_sym_POUND] = ACTIONS(969),
    [anon_sym_DOLLAR] = ACTIONS(969),
    [anon_sym_PERCENT] = ACTIONS(969),
    [anon_sym_AMP] = ACTIONS(969),
    [anon_sym_1] = ACTIONS(969),
    [anon_sym_PLUS] = ACTIONS(969),
    [anon_sym_SLASH] = ACTIONS(969),
    [anon_sym_LT] = ACTIONS(969),
    [anon_sym_GT] = ACTIONS(969),
    [anon_sym_QMARK] = ACTIONS(969),
    [anon_sym_CARET] = ACTIONS(969),
    [anon_sym_BSLASH] = ACTIONS(969),
    [sym__space] = ACTIONS(969),
    [sym__newline] = ACTIONS(969),
    [sym__tab] = ACTIONS(969),
    [sym__vertical_tab] = ACTIONS(969),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(969),
  },
  [359] = {
    [anon_sym_SEMI] = ACTIONS(971),
    [anon_sym_LBRACE] = ACTIONS(971),
    [anon_sym_RBRACE] = ACTIONS(971),
    [anon_sym_LPAREN] = ACTIONS(971),
    [anon_sym_RPAREN] = ACTIONS(971),
    [anon_sym_EQ] = ACTIONS(971),
    [anon_sym_TILDE] = ACTIONS(971),
    [anon_sym_LBRACK] = ACTIONS(971),
    [anon_sym_RBRACK] = ACTIONS(971),
    [anon_sym_DASH] = ACTIONS(971),
    [anon_sym_AT] = ACTIONS(971),
    [anon_sym__] = ACTIONS(971),
    [anon_sym_BQUOTE] = ACTIONS(971),
    [anon_sym_COLON] = ACTIONS(971),
    [anon_sym_PIPE] = ACTIONS(971),
    [anon_sym_BANG] = ACTIONS(971),
    [anon_sym_DOT] = ACTIONS(971),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(971),
    [anon_sym_DQUOTE] = ACTIONS(971),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(971),
    [sym__ascii_large] = ACTIONS(971),
    [anon_sym_POUND] = ACTIONS(971),
    [anon_sym_DOLLAR] = ACTIONS(971),
    [anon_sym_PERCENT] = ACTIONS(971),
    [anon_sym_AMP] = ACTIONS(971),
    [anon_sym_1] = ACTIONS(971),
    [anon_sym_PLUS] = ACTIONS(971),
    [anon_sym_SLASH] = ACTIONS(971),
    [anon_sym_LT] = ACTIONS(971),
    [anon_sym_GT] = ACTIONS(971),
    [anon_sym_QMARK] = ACTIONS(971),
    [anon_sym_CARET] = ACTIONS(971),
    [anon_sym_BSLASH] = ACTIONS(971),
    [sym__space] = ACTIONS(971),
    [sym__newline] = ACTIONS(971),
    [sym__tab] = ACTIONS(971),
    [sym__vertical_tab] = ACTIONS(971),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(973),
  },
  [360] = {
    [anon_sym_SEMI] = ACTIONS(975),
    [anon_sym_LBRACE] = ACTIONS(975),
    [anon_sym_RBRACE] = ACTIONS(975),
    [anon_sym_LPAREN] = ACTIONS(975),
    [anon_sym_RPAREN] = ACTIONS(975),
    [anon_sym_EQ] = ACTIONS(975),
    [anon_sym_TILDE] = ACTIONS(975),
    [anon_sym_LBRACK] = ACTIONS(975),
    [anon_sym_RBRACK] = ACTIONS(975),
    [anon_sym_DASH] = ACTIONS(975),
    [anon_sym_AT] = ACTIONS(975),
    [anon_sym__] = ACTIONS(975),
    [anon_sym_BQUOTE] = ACTIONS(975),
    [anon_sym_COLON] = ACTIONS(975),
    [anon_sym_PIPE] = ACTIONS(975),
    [anon_sym_BANG] = ACTIONS(975),
    [anon_sym_DOT] = ACTIONS(975),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(975),
    [anon_sym_DQUOTE] = ACTIONS(975),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(975),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(975),
    [sym__ascii_large] = ACTIONS(975),
    [anon_sym_POUND] = ACTIONS(975),
    [anon_sym_DOLLAR] = ACTIONS(975),
    [anon_sym_PERCENT] = ACTIONS(975),
    [anon_sym_AMP] = ACTIONS(975),
    [anon_sym_1] = ACTIONS(975),
    [anon_sym_PLUS] = ACTIONS(975),
    [anon_sym_SLASH] = ACTIONS(975),
    [anon_sym_LT] = ACTIONS(975),
    [anon_sym_GT] = ACTIONS(975),
    [anon_sym_QMARK] = ACTIONS(975),
    [anon_sym_CARET] = ACTIONS(975),
    [anon_sym_BSLASH] = ACTIONS(975),
    [sym__space] = ACTIONS(975),
    [sym__newline] = ACTIONS(975),
    [sym__tab] = ACTIONS(975),
    [sym__vertical_tab] = ACTIONS(975),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(975),
  },
  [361] = {
    [anon_sym_SEMI] = ACTIONS(971),
    [anon_sym_LBRACE] = ACTIONS(971),
    [anon_sym_RBRACE] = ACTIONS(971),
    [anon_sym_LPAREN] = ACTIONS(971),
    [anon_sym_RPAREN] = ACTIONS(971),
    [anon_sym_EQ] = ACTIONS(971),
    [anon_sym_TILDE] = ACTIONS(971),
    [anon_sym_LBRACK] = ACTIONS(971),
    [anon_sym_RBRACK] = ACTIONS(971),
    [anon_sym_DASH] = ACTIONS(971),
    [anon_sym_AT] = ACTIONS(971),
    [anon_sym__] = ACTIONS(971),
    [anon_sym_BQUOTE] = ACTIONS(971),
    [anon_sym_COLON] = ACTIONS(971),
    [anon_sym_PIPE] = ACTIONS(971),
    [anon_sym_BANG] = ACTIONS(971),
    [anon_sym_DOT] = ACTIONS(971),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(971),
    [anon_sym_DQUOTE] = ACTIONS(971),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(971),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(971),
    [sym__ascii_large] = ACTIONS(971),
    [anon_sym_POUND] = ACTIONS(971),
    [anon_sym_DOLLAR] = ACTIONS(971),
    [anon_sym_PERCENT] = ACTIONS(971),
    [anon_sym_AMP] = ACTIONS(971),
    [anon_sym_1] = ACTIONS(971),
    [anon_sym_PLUS] = ACTIONS(971),
    [anon_sym_SLASH] = ACTIONS(971),
    [anon_sym_LT] = ACTIONS(971),
    [anon_sym_GT] = ACTIONS(971),
    [anon_sym_QMARK] = ACTIONS(971),
    [anon_sym_CARET] = ACTIONS(971),
    [anon_sym_BSLASH] = ACTIONS(971),
    [sym__space] = ACTIONS(971),
    [sym__newline] = ACTIONS(971),
    [sym__tab] = ACTIONS(971),
    [sym__vertical_tab] = ACTIONS(971),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(977),
  },
  [362] = {
    [sym__variable] = STATE(210),
    [sym_qualified_variable_identifier] = STATE(211),
    [sym__expression] = STATE(519),
    [sym_do_expression] = STATE(210),
    [sym__statement] = STATE(520),
    [sym_constructor] = STATE(210),
    [sym__literal] = STATE(210),
    [sym_variable_identifier] = STATE(211),
    [sym_constructor_identifier] = STATE(521),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_statement_list_repeat1] = STATE(522),
    [sym__layout_close_brace] = ACTIONS(979),
    [anon_sym_do] = ACTIONS(361),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(981),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [363] = {
    [sym__variable] = STATE(210),
    [sym_qualified_variable_identifier] = STATE(211),
    [sym__expression] = STATE(523),
    [sym_do_expression] = STATE(210),
    [sym__statement] = STATE(524),
    [sym_constructor] = STATE(210),
    [sym__literal] = STATE(210),
    [sym_variable_identifier] = STATE(211),
    [sym_constructor_identifier] = STATE(521),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_statement_list_repeat1] = STATE(525),
    [anon_sym_RBRACE] = ACTIONS(983),
    [anon_sym_do] = ACTIONS(361),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(981),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [364] = {
    [sym__layout_semicolon] = ACTIONS(985),
    [anon_sym_SEMI] = ACTIONS(987),
    [anon_sym_where] = ACTIONS(987),
    [anon_sym_do] = ACTIONS(987),
    [sym__variable_pattern] = ACTIONS(989),
    [sym__constructor_pattern] = ACTIONS(989),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(989),
    [anon_sym_SQUOTE] = ACTIONS(987),
    [anon_sym_DQUOTE] = ACTIONS(987),
    [sym__integer_literal] = ACTIONS(987),
    [sym__octal_literal] = ACTIONS(987),
    [sym__hexidecimal_literal] = ACTIONS(987),
  },
  [365] = {
    [sym__layout_semicolon] = ACTIONS(991),
    [anon_sym_SEMI] = ACTIONS(287),
    [anon_sym_where] = ACTIONS(287),
    [anon_sym_do] = ACTIONS(287),
    [sym__variable_pattern] = ACTIONS(289),
    [sym__constructor_pattern] = ACTIONS(289),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(289),
    [anon_sym_SQUOTE] = ACTIONS(287),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [sym__integer_literal] = ACTIONS(287),
    [sym__octal_literal] = ACTIONS(287),
    [sym__hexidecimal_literal] = ACTIONS(287),
  },
  [366] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(993),
  },
  [367] = {
    [sym__layout_semicolon] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_COMMA] = ACTIONS(325),
    [anon_sym_where] = ACTIONS(325),
    [anon_sym_do] = ACTIONS(325),
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
  [368] = {
    [sym__gap] = STATE(200),
    [sym__graphic] = STATE(200),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__symbol] = STATE(73),
    [sym__special] = STATE(73),
    [sym__escape] = STATE(200),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(995),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [369] = {
    [sym_field] = STATE(528),
    [sym_variable_identifier] = STATE(284),
    [sym__variable_pattern] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
  },
  [370] = {
    [sym__identifier] = STATE(285),
    [sym_variable_identifier] = STATE(172),
    [sym_constructor_identifier] = STATE(172),
    [aux_sym_constructor_repeat2] = STATE(529),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [371] = {
    [sym__identifier] = STATE(530),
    [sym_variable_identifier] = STATE(378),
    [sym_constructor_identifier] = STATE(378),
    [sym__variable_pattern] = ACTIONS(997),
    [sym__constructor_pattern] = ACTIONS(668),
    [sym_comment] = ACTIONS(5),
  },
  [372] = {
    [sym__layout_semicolon] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_where] = ACTIONS(81),
    [anon_sym_do] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(203),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [373] = {
    [sym__layout_semicolon] = ACTIONS(567),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_where] = ACTIONS(487),
    [anon_sym_do] = ACTIONS(487),
    [sym__variable_pattern] = ACTIONS(569),
    [sym__constructor_pattern] = ACTIONS(569),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(569),
    [anon_sym_SQUOTE] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym__integer_literal] = ACTIONS(487),
    [sym__octal_literal] = ACTIONS(487),
    [sym__hexidecimal_literal] = ACTIONS(487),
  },
  [374] = {
    [aux_sym_labels_repeat1] = STATE(532),
    [sym__layout_semicolon] = ACTIONS(571),
    [anon_sym_SEMI] = ACTIONS(491),
    [anon_sym_COMMA] = ACTIONS(999),
    [anon_sym_where] = ACTIONS(491),
    [anon_sym_do] = ACTIONS(491),
    [sym__variable_pattern] = ACTIONS(575),
    [sym__constructor_pattern] = ACTIONS(575),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(575),
    [anon_sym_SQUOTE] = ACTIONS(491),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym__integer_literal] = ACTIONS(491),
    [sym__octal_literal] = ACTIONS(491),
    [sym__hexidecimal_literal] = ACTIONS(491),
  },
  [375] = {
    [sym__layout_semicolon] = ACTIONS(577),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_where] = ACTIONS(493),
    [anon_sym_do] = ACTIONS(493),
    [anon_sym_BANG] = ACTIONS(493),
    [sym__variable_pattern] = ACTIONS(495),
    [sym__constructor_pattern] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(495),
    [anon_sym_SQUOTE] = ACTIONS(493),
    [anon_sym_DQUOTE] = ACTIONS(493),
    [sym__integer_literal] = ACTIONS(493),
    [sym__octal_literal] = ACTIONS(493),
    [sym__hexidecimal_literal] = ACTIONS(493),
  },
  [376] = {
    [sym__layout_semicolon] = ACTIONS(579),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_where] = ACTIONS(497),
    [anon_sym_do] = ACTIONS(497),
    [sym__variable_pattern] = ACTIONS(499),
    [sym__constructor_pattern] = ACTIONS(499),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(499),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [sym__integer_literal] = ACTIONS(497),
    [sym__octal_literal] = ACTIONS(497),
    [sym__hexidecimal_literal] = ACTIONS(497),
  },
  [377] = {
    [sym__layout_semicolon] = ACTIONS(577),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_EQ] = ACTIONS(1001),
    [anon_sym_where] = ACTIONS(493),
    [anon_sym_do] = ACTIONS(493),
    [anon_sym_BANG] = ACTIONS(493),
    [sym__variable_pattern] = ACTIONS(495),
    [sym__constructor_pattern] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(495),
    [anon_sym_SQUOTE] = ACTIONS(493),
    [anon_sym_DQUOTE] = ACTIONS(493),
    [sym__integer_literal] = ACTIONS(493),
    [sym__octal_literal] = ACTIONS(493),
    [sym__hexidecimal_literal] = ACTIONS(493),
  },
  [378] = {
    [sym__layout_semicolon] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_where] = ACTIONS(173),
    [anon_sym_do] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(175),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [sym__integer_literal] = ACTIONS(173),
    [sym__octal_literal] = ACTIONS(173),
    [sym__hexidecimal_literal] = ACTIONS(173),
  },
  [379] = {
    [sym_strict] = STATE(534),
    [sym__identifier] = STATE(534),
    [sym_variable_identifier] = STATE(378),
    [sym_constructor_identifier] = STATE(378),
    [sym__layout_semicolon] = ACTIONS(567),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_where] = ACTIONS(487),
    [anon_sym_do] = ACTIONS(487),
    [anon_sym_BANG] = ACTIONS(666),
    [sym__variable_pattern] = ACTIONS(363),
    [sym__constructor_pattern] = ACTIONS(668),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(569),
    [anon_sym_SQUOTE] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym__integer_literal] = ACTIONS(487),
    [sym__octal_literal] = ACTIONS(487),
    [sym__hexidecimal_literal] = ACTIONS(487),
  },
  [380] = {
    [sym__literal] = STATE(535),
    [sym_integer] = STATE(205),
    [sym_char] = STATE(205),
    [sym_string] = STATE(205),
    [sym__layout_semicolon] = ACTIONS(567),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_where] = ACTIONS(487),
    [anon_sym_do] = ACTIONS(487),
    [sym__variable_pattern] = ACTIONS(569),
    [sym__constructor_pattern] = ACTIONS(569),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(367),
    [anon_sym_SQUOTE] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(371),
    [sym__integer_literal] = ACTIONS(373),
    [sym__octal_literal] = ACTIONS(373),
    [sym__hexidecimal_literal] = ACTIONS(373),
  },
  [381] = {
    [sym__layout_semicolon] = ACTIONS(1003),
    [anon_sym_SEMI] = ACTIONS(1005),
    [sym_comment] = ACTIONS(5),
  },
  [382] = {
    [sym__layout_semicolon] = ACTIONS(1007),
    [anon_sym_SEMI] = ACTIONS(1009),
    [anon_sym_where] = ACTIONS(1009),
    [anon_sym_do] = ACTIONS(1009),
    [sym__variable_pattern] = ACTIONS(1011),
    [sym__constructor_pattern] = ACTIONS(1011),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1011),
    [anon_sym_SQUOTE] = ACTIONS(1009),
    [anon_sym_DQUOTE] = ACTIONS(1009),
    [sym__integer_literal] = ACTIONS(1009),
    [sym__octal_literal] = ACTIONS(1009),
    [sym__hexidecimal_literal] = ACTIONS(1009),
  },
  [383] = {
    [sym__literal] = STATE(536),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [384] = {
    [sym__function_pattern] = STATE(537),
    [sym_label_pattern] = STATE(85),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym__pattern] = STATE(538),
    [sym_negative_literal] = STATE(220),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(221),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_constructor] = STATE(220),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(222),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(383),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [385] = {
    [anon_sym_LPAREN] = ACTIONS(1013),
    [anon_sym_COMMA] = ACTIONS(1013),
    [anon_sym_RPAREN] = ACTIONS(1013),
    [anon_sym_EQ] = ACTIONS(1013),
    [anon_sym_TILDE] = ACTIONS(1013),
    [anon_sym_LBRACK] = ACTIONS(1013),
    [anon_sym_RBRACK] = ACTIONS(1013),
    [anon_sym_DASH] = ACTIONS(1013),
    [anon_sym__] = ACTIONS(1013),
    [anon_sym_BQUOTE] = ACTIONS(1013),
    [anon_sym_COLON] = ACTIONS(1013),
    [sym_list_constructor] = ACTIONS(1013),
    [anon_sym_BANG] = ACTIONS(1013),
    [sym__variable_pattern] = ACTIONS(1015),
    [sym__constructor_pattern] = ACTIONS(1015),
    [anon_sym_DOT] = ACTIONS(1013),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1015),
    [anon_sym_SQUOTE] = ACTIONS(1013),
    [anon_sym_DQUOTE] = ACTIONS(1013),
    [anon_sym_POUND] = ACTIONS(1013),
    [anon_sym_DOLLAR] = ACTIONS(1013),
    [anon_sym_PERCENT] = ACTIONS(1013),
    [anon_sym_AMP] = ACTIONS(1013),
    [anon_sym_1] = ACTIONS(1013),
    [anon_sym_PLUS] = ACTIONS(1013),
    [anon_sym_SLASH] = ACTIONS(1013),
    [anon_sym_LT] = ACTIONS(1013),
    [anon_sym_GT] = ACTIONS(1013),
    [anon_sym_QMARK] = ACTIONS(1013),
    [anon_sym_CARET] = ACTIONS(1013),
    [sym__integer_literal] = ACTIONS(1013),
    [sym__octal_literal] = ACTIONS(1013),
    [sym__hexidecimal_literal] = ACTIONS(1013),
  },
  [386] = {
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_TILDE] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym__] = ACTIONS(229),
    [sym_list_constructor] = ACTIONS(229),
    [anon_sym_BANG] = ACTIONS(229),
    [sym__variable_pattern] = ACTIONS(1017),
    [sym__constructor_pattern] = ACTIONS(1017),
    [anon_sym_DOT] = ACTIONS(229),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1017),
    [anon_sym_SQUOTE] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND] = ACTIONS(229),
    [anon_sym_DOLLAR] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(229),
    [anon_sym_1] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_QMARK] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(229),
    [sym__integer_literal] = ACTIONS(229),
    [sym__octal_literal] = ACTIONS(229),
    [sym__hexidecimal_literal] = ACTIONS(229),
  },
  [387] = {
    [sym__identifier] = STATE(539),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [388] = {
    [sym__constructor_symbol] = STATE(541),
    [aux_sym_constructor_symbol_repeat1] = STATE(542),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_TILDE] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym__] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(1019),
    [sym_list_constructor] = ACTIONS(233),
    [anon_sym_BANG] = ACTIONS(1019),
    [sym__variable_pattern] = ACTIONS(1021),
    [sym__constructor_pattern] = ACTIONS(1021),
    [anon_sym_DOT] = ACTIONS(1019),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1021),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [anon_sym_POUND] = ACTIONS(1019),
    [anon_sym_DOLLAR] = ACTIONS(1019),
    [anon_sym_PERCENT] = ACTIONS(1019),
    [anon_sym_AMP] = ACTIONS(1019),
    [anon_sym_1] = ACTIONS(1019),
    [anon_sym_PLUS] = ACTIONS(1019),
    [anon_sym_SLASH] = ACTIONS(1019),
    [anon_sym_LT] = ACTIONS(1019),
    [anon_sym_GT] = ACTIONS(1019),
    [anon_sym_QMARK] = ACTIONS(1019),
    [anon_sym_CARET] = ACTIONS(1019),
    [sym__integer_literal] = ACTIONS(233),
    [sym__octal_literal] = ACTIONS(233),
    [sym__hexidecimal_literal] = ACTIONS(233),
  },
  [389] = {
    [sym__function_pattern] = STATE(543),
    [sym_label_pattern] = STATE(85),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym__pattern] = STATE(544),
    [sym_negative_literal] = STATE(220),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(221),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_constructor] = STATE(220),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(222),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(383),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [390] = {
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym__] = ACTIONS(245),
    [sym_list_constructor] = ACTIONS(245),
    [sym__variable_pattern] = ACTIONS(1023),
    [sym__constructor_pattern] = ACTIONS(1023),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1023),
    [anon_sym_SQUOTE] = ACTIONS(245),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym__integer_literal] = ACTIONS(245),
    [sym__octal_literal] = ACTIONS(245),
    [sym__hexidecimal_literal] = ACTIONS(245),
  },
  [391] = {
    [sym__variable_symbol] = STATE(545),
    [aux_sym_variable_symbol_repeat1] = STATE(546),
    [anon_sym_LPAREN] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(676),
    [anon_sym__] = ACTIONS(249),
    [sym_list_constructor] = ACTIONS(249),
    [anon_sym_BANG] = ACTIONS(676),
    [sym__variable_pattern] = ACTIONS(1025),
    [sym__constructor_pattern] = ACTIONS(1025),
    [anon_sym_DOT] = ACTIONS(676),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1025),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [anon_sym_POUND] = ACTIONS(676),
    [anon_sym_DOLLAR] = ACTIONS(676),
    [anon_sym_PERCENT] = ACTIONS(676),
    [anon_sym_AMP] = ACTIONS(676),
    [anon_sym_1] = ACTIONS(676),
    [anon_sym_PLUS] = ACTIONS(676),
    [anon_sym_SLASH] = ACTIONS(676),
    [anon_sym_LT] = ACTIONS(676),
    [anon_sym_GT] = ACTIONS(676),
    [anon_sym_QMARK] = ACTIONS(676),
    [anon_sym_CARET] = ACTIONS(676),
    [sym__integer_literal] = ACTIONS(249),
    [sym__octal_literal] = ACTIONS(249),
    [sym__hexidecimal_literal] = ACTIONS(249),
  },
  [392] = {
    [anon_sym_COMMA] = ACTIONS(1027),
    [anon_sym_RPAREN] = ACTIONS(1029),
    [sym_comment] = ACTIONS(5),
  },
  [393] = {
    [sym__function_pattern] = STATE(398),
    [sym_label_pattern] = STATE(85),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(221),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(132),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(387),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [394] = {
    [anon_sym_LPAREN] = ACTIONS(1031),
    [anon_sym_COMMA] = ACTIONS(1031),
    [anon_sym_RPAREN] = ACTIONS(1031),
    [anon_sym_EQ] = ACTIONS(1031),
    [anon_sym_TILDE] = ACTIONS(1031),
    [anon_sym_LBRACK] = ACTIONS(1031),
    [anon_sym_RBRACK] = ACTIONS(1031),
    [anon_sym_DASH] = ACTIONS(1031),
    [anon_sym__] = ACTIONS(1031),
    [anon_sym_BQUOTE] = ACTIONS(1031),
    [anon_sym_COLON] = ACTIONS(1031),
    [sym_list_constructor] = ACTIONS(1031),
    [anon_sym_BANG] = ACTIONS(1031),
    [sym__variable_pattern] = ACTIONS(1033),
    [sym__constructor_pattern] = ACTIONS(1033),
    [anon_sym_DOT] = ACTIONS(1031),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1033),
    [anon_sym_SQUOTE] = ACTIONS(1031),
    [anon_sym_DQUOTE] = ACTIONS(1031),
    [anon_sym_POUND] = ACTIONS(1031),
    [anon_sym_DOLLAR] = ACTIONS(1031),
    [anon_sym_PERCENT] = ACTIONS(1031),
    [anon_sym_AMP] = ACTIONS(1031),
    [anon_sym_1] = ACTIONS(1031),
    [anon_sym_PLUS] = ACTIONS(1031),
    [anon_sym_SLASH] = ACTIONS(1031),
    [anon_sym_LT] = ACTIONS(1031),
    [anon_sym_GT] = ACTIONS(1031),
    [anon_sym_QMARK] = ACTIONS(1031),
    [anon_sym_CARET] = ACTIONS(1031),
    [sym__integer_literal] = ACTIONS(1031),
    [sym__octal_literal] = ACTIONS(1031),
    [sym__hexidecimal_literal] = ACTIONS(1031),
  },
  [395] = {
    [sym__function_pattern] = STATE(398),
    [sym_label_pattern] = STATE(85),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(227),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(95),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(387),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [396] = {
    [anon_sym_RBRACE] = ACTIONS(600),
    [anon_sym_LPAREN] = ACTIONS(600),
    [anon_sym_COMMA] = ACTIONS(600),
    [anon_sym_RPAREN] = ACTIONS(600),
    [anon_sym_EQ] = ACTIONS(600),
    [anon_sym_TILDE] = ACTIONS(600),
    [anon_sym_LBRACK] = ACTIONS(600),
    [anon_sym_RBRACK] = ACTIONS(600),
    [anon_sym_DASH] = ACTIONS(600),
    [anon_sym__] = ACTIONS(600),
    [anon_sym_BQUOTE] = ACTIONS(600),
    [anon_sym_COLON] = ACTIONS(600),
    [sym_list_constructor] = ACTIONS(600),
    [anon_sym_BANG] = ACTIONS(600),
    [sym__variable_pattern] = ACTIONS(602),
    [sym__constructor_pattern] = ACTIONS(602),
    [anon_sym_DOT] = ACTIONS(600),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(600),
    [anon_sym_DQUOTE] = ACTIONS(600),
    [anon_sym_POUND] = ACTIONS(600),
    [anon_sym_DOLLAR] = ACTIONS(600),
    [anon_sym_PERCENT] = ACTIONS(600),
    [anon_sym_AMP] = ACTIONS(600),
    [anon_sym_1] = ACTIONS(600),
    [anon_sym_PLUS] = ACTIONS(600),
    [anon_sym_SLASH] = ACTIONS(600),
    [anon_sym_LT] = ACTIONS(600),
    [anon_sym_GT] = ACTIONS(600),
    [anon_sym_QMARK] = ACTIONS(600),
    [anon_sym_CARET] = ACTIONS(600),
    [sym__integer_literal] = ACTIONS(600),
    [sym__octal_literal] = ACTIONS(600),
    [sym__hexidecimal_literal] = ACTIONS(600),
  },
  [397] = {
    [anon_sym_RBRACE] = ACTIONS(632),
    [anon_sym_LPAREN] = ACTIONS(632),
    [anon_sym_COMMA] = ACTIONS(632),
    [anon_sym_RPAREN] = ACTIONS(632),
    [anon_sym_EQ] = ACTIONS(632),
    [anon_sym_TILDE] = ACTIONS(632),
    [anon_sym_LBRACK] = ACTIONS(632),
    [anon_sym_RBRACK] = ACTIONS(632),
    [anon_sym_DASH] = ACTIONS(632),
    [anon_sym__] = ACTIONS(632),
    [anon_sym_BQUOTE] = ACTIONS(632),
    [anon_sym_COLON] = ACTIONS(632),
    [sym_list_constructor] = ACTIONS(632),
    [anon_sym_BANG] = ACTIONS(632),
    [sym__variable_pattern] = ACTIONS(634),
    [sym__constructor_pattern] = ACTIONS(634),
    [anon_sym_DOT] = ACTIONS(632),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(634),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DQUOTE] = ACTIONS(632),
    [anon_sym_POUND] = ACTIONS(632),
    [anon_sym_DOLLAR] = ACTIONS(632),
    [anon_sym_PERCENT] = ACTIONS(632),
    [anon_sym_AMP] = ACTIONS(632),
    [anon_sym_1] = ACTIONS(632),
    [anon_sym_PLUS] = ACTIONS(632),
    [anon_sym_SLASH] = ACTIONS(632),
    [anon_sym_LT] = ACTIONS(632),
    [anon_sym_GT] = ACTIONS(632),
    [anon_sym_QMARK] = ACTIONS(632),
    [anon_sym_CARET] = ACTIONS(632),
    [sym__integer_literal] = ACTIONS(632),
    [sym__octal_literal] = ACTIONS(632),
    [sym__hexidecimal_literal] = ACTIONS(632),
  },
  [398] = {
    [anon_sym_LPAREN] = ACTIONS(1035),
    [anon_sym_COMMA] = ACTIONS(1035),
    [anon_sym_RPAREN] = ACTIONS(1035),
    [anon_sym_EQ] = ACTIONS(1035),
    [anon_sym_TILDE] = ACTIONS(1035),
    [anon_sym_LBRACK] = ACTIONS(1035),
    [anon_sym_RBRACK] = ACTIONS(1035),
    [anon_sym_DASH] = ACTIONS(1035),
    [anon_sym__] = ACTIONS(1035),
    [anon_sym_BQUOTE] = ACTIONS(1035),
    [anon_sym_COLON] = ACTIONS(1035),
    [sym_list_constructor] = ACTIONS(1035),
    [anon_sym_BANG] = ACTIONS(1035),
    [sym__variable_pattern] = ACTIONS(1037),
    [sym__constructor_pattern] = ACTIONS(1037),
    [anon_sym_DOT] = ACTIONS(1035),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1037),
    [anon_sym_SQUOTE] = ACTIONS(1035),
    [anon_sym_DQUOTE] = ACTIONS(1035),
    [anon_sym_POUND] = ACTIONS(1035),
    [anon_sym_DOLLAR] = ACTIONS(1035),
    [anon_sym_PERCENT] = ACTIONS(1035),
    [anon_sym_AMP] = ACTIONS(1035),
    [anon_sym_1] = ACTIONS(1035),
    [anon_sym_PLUS] = ACTIONS(1035),
    [anon_sym_SLASH] = ACTIONS(1035),
    [anon_sym_LT] = ACTIONS(1035),
    [anon_sym_GT] = ACTIONS(1035),
    [anon_sym_QMARK] = ACTIONS(1035),
    [anon_sym_CARET] = ACTIONS(1035),
    [sym__integer_literal] = ACTIONS(1035),
    [sym__octal_literal] = ACTIONS(1035),
    [sym__hexidecimal_literal] = ACTIONS(1035),
  },
  [399] = {
    [anon_sym_LPAREN] = ACTIONS(1039),
    [anon_sym_COMMA] = ACTIONS(1039),
    [anon_sym_RPAREN] = ACTIONS(1039),
    [anon_sym_EQ] = ACTIONS(1039),
    [anon_sym_TILDE] = ACTIONS(1039),
    [anon_sym_LBRACK] = ACTIONS(1039),
    [anon_sym_RBRACK] = ACTIONS(1039),
    [anon_sym_DASH] = ACTIONS(1039),
    [anon_sym__] = ACTIONS(1039),
    [anon_sym_BQUOTE] = ACTIONS(1039),
    [anon_sym_COLON] = ACTIONS(1039),
    [sym_list_constructor] = ACTIONS(1039),
    [anon_sym_BANG] = ACTIONS(1039),
    [sym__variable_pattern] = ACTIONS(1041),
    [sym__constructor_pattern] = ACTIONS(1041),
    [anon_sym_DOT] = ACTIONS(1039),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1041),
    [anon_sym_SQUOTE] = ACTIONS(1039),
    [anon_sym_DQUOTE] = ACTIONS(1039),
    [anon_sym_POUND] = ACTIONS(1039),
    [anon_sym_DOLLAR] = ACTIONS(1039),
    [anon_sym_PERCENT] = ACTIONS(1039),
    [anon_sym_AMP] = ACTIONS(1039),
    [anon_sym_1] = ACTIONS(1039),
    [anon_sym_PLUS] = ACTIONS(1039),
    [anon_sym_SLASH] = ACTIONS(1039),
    [anon_sym_LT] = ACTIONS(1039),
    [anon_sym_GT] = ACTIONS(1039),
    [anon_sym_QMARK] = ACTIONS(1039),
    [anon_sym_CARET] = ACTIONS(1039),
    [sym__integer_literal] = ACTIONS(1039),
    [sym__octal_literal] = ACTIONS(1039),
    [sym__hexidecimal_literal] = ACTIONS(1039),
  },
  [400] = {
    [anon_sym_RBRACE] = ACTIONS(1043),
    [sym_comment] = ACTIONS(5),
  },
  [401] = {
    [aux_sym_labels_repeat1] = STATE(550),
    [anon_sym_RBRACE] = ACTIONS(491),
    [anon_sym_COMMA] = ACTIONS(1045),
    [sym_comment] = ACTIONS(5),
  },
  [402] = {
    [anon_sym_EQ] = ACTIONS(820),
    [sym_comment] = ACTIONS(5),
  },
  [403] = {
    [sym_type] = STATE(552),
    [sym__generic_type_constructor] = STATE(410),
    [sym_tupling_constructor] = STATE(406),
    [sym_tuple] = STATE(410),
    [sym_list] = STATE(410),
    [sym_parenthesized_constructor] = STATE(410),
    [sym_variable_identifier] = STATE(412),
    [sym__type_constructors] = STATE(406),
    [sym_qualified_type_constructor] = STATE(413),
    [anon_sym_LPAREN] = ACTIONS(704),
    [anon_sym_COMMA] = ACTIONS(1047),
    [anon_sym_LBRACK] = ACTIONS(708),
    [sym_unit_type] = ACTIONS(710),
    [sym_list_constructor] = ACTIONS(710),
    [sym_function_constructor] = ACTIONS(710),
    [sym__variable_pattern] = ACTIONS(481),
    [sym__constructor_pattern] = ACTIONS(937),
    [sym_module_identifier] = ACTIONS(714),
    [sym_comment] = ACTIONS(5),
  },
  [404] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(555),
    [anon_sym_COMMA] = ACTIONS(1049),
    [anon_sym_RPAREN] = ACTIONS(1051),
    [sym_comment] = ACTIONS(5),
  },
  [405] = {
    [sym_type] = STATE(417),
    [sym__generic_type_constructor] = STATE(418),
    [sym_tupling_constructor] = STATE(406),
    [sym_tuple] = STATE(418),
    [sym_list] = STATE(418),
    [sym_parenthesized_constructor] = STATE(418),
    [sym_variable_identifier] = STATE(419),
    [sym__type_constructors] = STATE(406),
    [sym_qualified_type_constructor] = STATE(413),
    [aux_sym_list_repeat1] = STATE(556),
    [anon_sym_LPAREN] = ACTIONS(704),
    [anon_sym_LBRACK] = ACTIONS(708),
    [sym_unit_type] = ACTIONS(710),
    [sym_list_constructor] = ACTIONS(710),
    [sym_function_constructor] = ACTIONS(710),
    [sym__variable_pattern] = ACTIONS(716),
    [sym__constructor_pattern] = ACTIONS(718),
    [sym_module_identifier] = ACTIONS(720),
    [sym_comment] = ACTIONS(5),
  },
  [406] = {
    [anon_sym_LPAREN] = ACTIONS(724),
    [anon_sym_COMMA] = ACTIONS(724),
    [anon_sym_RPAREN] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(724),
    [anon_sym_RBRACK] = ACTIONS(724),
    [anon_sym_DASH_GT] = ACTIONS(724),
    [sym_unit_type] = ACTIONS(724),
    [sym_list_constructor] = ACTIONS(724),
    [sym_function_constructor] = ACTIONS(724),
    [sym__variable_pattern] = ACTIONS(724),
    [sym__constructor_pattern] = ACTIONS(1053),
    [sym_module_identifier] = ACTIONS(1053),
    [sym_comment] = ACTIONS(5),
  },
  [407] = {
    [sym_variable_identifier] = STATE(557),
    [aux_sym__type_constructors_repeat1] = STATE(558),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(1055),
    [anon_sym_RPAREN] = ACTIONS(1055),
    [anon_sym_DASH_GT] = ACTIONS(728),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [408] = {
    [sym_constructor_identifier] = STATE(560),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(561),
    [sym__constructor_pattern] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(1058),
    [sym_comment] = ACTIONS(5),
  },
  [409] = {
    [aux_sym_tuple_repeat1] = STATE(564),
    [anon_sym_COMMA] = ACTIONS(1060),
    [anon_sym_RPAREN] = ACTIONS(1062),
    [sym_comment] = ACTIONS(5),
  },
  [410] = {
    [anon_sym_COMMA] = ACTIONS(740),
    [anon_sym_RPAREN] = ACTIONS(740),
    [anon_sym_DASH_GT] = ACTIONS(1064),
    [sym_comment] = ACTIONS(5),
  },
  [411] = {
    [aux_sym_context_repeat1] = STATE(567),
    [anon_sym_COMMA] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(1066),
    [sym_comment] = ACTIONS(5),
  },
  [412] = {
    [anon_sym_COMMA] = ACTIONS(748),
    [anon_sym_RPAREN] = ACTIONS(748),
    [anon_sym_DASH_GT] = ACTIONS(1068),
    [sym_comment] = ACTIONS(5),
  },
  [413] = {
    [anon_sym_LPAREN] = ACTIONS(754),
    [anon_sym_COMMA] = ACTIONS(754),
    [anon_sym_RPAREN] = ACTIONS(754),
    [anon_sym_LBRACK] = ACTIONS(754),
    [anon_sym_RBRACK] = ACTIONS(754),
    [anon_sym_DASH_GT] = ACTIONS(754),
    [sym_unit_type] = ACTIONS(754),
    [sym_list_constructor] = ACTIONS(754),
    [sym_function_constructor] = ACTIONS(754),
    [sym__variable_pattern] = ACTIONS(754),
    [sym__constructor_pattern] = ACTIONS(1070),
    [sym_module_identifier] = ACTIONS(1070),
    [sym_comment] = ACTIONS(5),
  },
  [414] = {
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(75),
    [anon_sym_DASH_GT] = ACTIONS(75),
    [sym_unit_type] = ACTIONS(75),
    [sym_list_constructor] = ACTIONS(75),
    [sym_function_constructor] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_module_identifier] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
  },
  [415] = {
    [sym_variable_identifier] = STATE(557),
    [aux_sym__type_constructors_repeat1] = STATE(569),
    [anon_sym_LPAREN] = ACTIONS(728),
    [anon_sym_LBRACK] = ACTIONS(728),
    [anon_sym_RBRACK] = ACTIONS(728),
    [anon_sym_DASH_GT] = ACTIONS(728),
    [sym_unit_type] = ACTIONS(728),
    [sym_list_constructor] = ACTIONS(728),
    [sym_function_constructor] = ACTIONS(728),
    [sym__variable_pattern] = ACTIONS(716),
    [sym__constructor_pattern] = ACTIONS(1072),
    [sym_module_identifier] = ACTIONS(1072),
    [sym_comment] = ACTIONS(5),
  },
  [416] = {
    [sym_constructor_identifier] = STATE(572),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(573),
    [sym__constructor_pattern] = ACTIONS(1074),
    [anon_sym_DOT] = ACTIONS(1076),
    [sym_comment] = ACTIONS(5),
  },
  [417] = {
    [anon_sym_LPAREN] = ACTIONS(1078),
    [anon_sym_LBRACK] = ACTIONS(1078),
    [anon_sym_RBRACK] = ACTIONS(1078),
    [sym_unit_type] = ACTIONS(1078),
    [sym_list_constructor] = ACTIONS(1078),
    [sym_function_constructor] = ACTIONS(1078),
    [sym__variable_pattern] = ACTIONS(1078),
    [sym__constructor_pattern] = ACTIONS(1080),
    [sym_module_identifier] = ACTIONS(1080),
    [sym_comment] = ACTIONS(5),
  },
  [418] = {
    [anon_sym_LPAREN] = ACTIONS(740),
    [anon_sym_LBRACK] = ACTIONS(740),
    [anon_sym_RBRACK] = ACTIONS(740),
    [anon_sym_DASH_GT] = ACTIONS(1082),
    [sym_unit_type] = ACTIONS(740),
    [sym_list_constructor] = ACTIONS(740),
    [sym_function_constructor] = ACTIONS(740),
    [sym__variable_pattern] = ACTIONS(740),
    [sym__constructor_pattern] = ACTIONS(1084),
    [sym_module_identifier] = ACTIONS(1084),
    [sym_comment] = ACTIONS(5),
  },
  [419] = {
    [anon_sym_LPAREN] = ACTIONS(748),
    [anon_sym_LBRACK] = ACTIONS(748),
    [anon_sym_RBRACK] = ACTIONS(748),
    [anon_sym_DASH_GT] = ACTIONS(1086),
    [sym_unit_type] = ACTIONS(748),
    [sym_list_constructor] = ACTIONS(748),
    [sym_function_constructor] = ACTIONS(748),
    [sym__variable_pattern] = ACTIONS(748),
    [sym__constructor_pattern] = ACTIONS(1088),
    [sym_module_identifier] = ACTIONS(1088),
    [sym_comment] = ACTIONS(5),
  },
  [420] = {
    [sym_type] = STATE(577),
    [sym__generic_type_constructor] = STATE(418),
    [sym_tupling_constructor] = STATE(406),
    [sym_tuple] = STATE(418),
    [sym_list] = STATE(418),
    [sym_parenthesized_constructor] = STATE(418),
    [sym_variable_identifier] = STATE(419),
    [sym__type_constructors] = STATE(406),
    [sym_qualified_type_constructor] = STATE(413),
    [anon_sym_LPAREN] = ACTIONS(704),
    [anon_sym_LBRACK] = ACTIONS(708),
    [anon_sym_RBRACK] = ACTIONS(1090),
    [sym_unit_type] = ACTIONS(710),
    [sym_list_constructor] = ACTIONS(710),
    [sym_function_constructor] = ACTIONS(710),
    [sym__variable_pattern] = ACTIONS(716),
    [sym__constructor_pattern] = ACTIONS(718),
    [sym_module_identifier] = ACTIONS(720),
    [sym_comment] = ACTIONS(5),
  },
  [421] = {
    [sym__layout_semicolon] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_DASH_GT] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
  },
  [422] = {
    [sym__layout_semicolon] = ACTIONS(1092),
    [anon_sym_SEMI] = ACTIONS(1094),
    [anon_sym_DASH_GT] = ACTIONS(1094),
    [sym__variable_pattern] = ACTIONS(1094),
    [sym_comment] = ACTIONS(5),
  },
  [423] = {
    [sym_variable_identifier] = STATE(578),
    [sym__layout_semicolon] = ACTIONS(1096),
    [anon_sym_SEMI] = ACTIONS(1098),
    [anon_sym_DASH_GT] = ACTIONS(1098),
    [sym__variable_pattern] = ACTIONS(939),
    [sym_comment] = ACTIONS(5),
  },
  [424] = {
    [sym__layout_semicolon] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_DASH_GT] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [425] = {
    [sym_constructor_identifier] = STATE(580),
    [sym__constructor_pattern] = ACTIONS(730),
    [sym_module_identifier] = ACTIONS(1100),
    [sym_comment] = ACTIONS(5),
  },
  [426] = {
    [sym_variable_identifier] = STATE(422),
    [aux_sym__type_constructors_repeat1] = STATE(581),
    [sym__layout_semicolon] = ACTIONS(1102),
    [anon_sym_SEMI] = ACTIONS(1104),
    [anon_sym_DASH_GT] = ACTIONS(1104),
    [sym__variable_pattern] = ACTIONS(939),
    [sym_comment] = ACTIONS(5),
  },
  [427] = {
    [sym_constructor_identifier] = STATE(580),
    [sym__constructor_pattern] = ACTIONS(730),
    [anon_sym_DOT] = ACTIONS(1106),
    [sym_comment] = ACTIONS(5),
  },
  [428] = {
    [sym_type] = STATE(583),
    [sym__generic_type_constructor] = STATE(240),
    [sym_tupling_constructor] = STATE(236),
    [sym_tuple] = STATE(240),
    [sym_list] = STATE(240),
    [sym_parenthesized_constructor] = STATE(240),
    [sym_variable_identifier] = STATE(243),
    [sym__type_constructors] = STATE(236),
    [sym_qualified_type_constructor] = STATE(245),
    [anon_sym_LPAREN] = ACTIONS(589),
    [anon_sym_LBRACK] = ACTIONS(413),
    [sym_unit_type] = ACTIONS(415),
    [sym_list_constructor] = ACTIONS(415),
    [sym_function_constructor] = ACTIONS(415),
    [sym__variable_pattern] = ACTIONS(417),
    [sym__constructor_pattern] = ACTIONS(591),
    [sym_module_identifier] = ACTIONS(421),
    [sym_comment] = ACTIONS(5),
  },
  [429] = {
    [sym__layout_semicolon] = ACTIONS(1108),
    [anon_sym_SEMI] = ACTIONS(1110),
    [sym_comment] = ACTIONS(5),
  },
  [430] = {
    [anon_sym_LPAREN] = ACTIONS(1112),
    [anon_sym_LBRACK] = ACTIONS(1112),
    [sym_unit_type] = ACTIONS(1112),
    [sym_list_constructor] = ACTIONS(1112),
    [sym_function_constructor] = ACTIONS(1112),
    [sym__variable_pattern] = ACTIONS(1112),
    [sym__constructor_pattern] = ACTIONS(475),
    [sym_module_identifier] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
  },
  [431] = {
    [sym_type] = STATE(584),
    [sym__generic_type_constructor] = STATE(240),
    [sym_tupling_constructor] = STATE(236),
    [sym_tuple] = STATE(240),
    [sym_list] = STATE(240),
    [sym_parenthesized_constructor] = STATE(240),
    [sym_variable_identifier] = STATE(243),
    [sym__type_constructors] = STATE(236),
    [sym_qualified_type_constructor] = STATE(245),
    [anon_sym_LPAREN] = ACTIONS(589),
    [anon_sym_LBRACK] = ACTIONS(413),
    [sym_unit_type] = ACTIONS(415),
    [sym_list_constructor] = ACTIONS(415),
    [sym_function_constructor] = ACTIONS(415),
    [sym__variable_pattern] = ACTIONS(417),
    [sym__constructor_pattern] = ACTIONS(591),
    [sym_module_identifier] = ACTIONS(421),
    [sym_comment] = ACTIONS(5),
  },
  [432] = {
    [anon_sym_EQ] = ACTIONS(501),
    [anon_sym_EQ_GT] = ACTIONS(493),
    [anon_sym_BANG] = ACTIONS(493),
    [sym__variable_pattern] = ACTIONS(493),
    [sym__constructor_pattern] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
  },
  [433] = {
    [sym_export] = STATE(585),
    [sym__identifier] = STATE(249),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [434] = {
    [anon_sym_where] = ACTIONS(1114),
    [sym_comment] = ACTIONS(5),
  },
  [435] = {
    [anon_sym_COMMA] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(1118),
    [sym_comment] = ACTIONS(5),
  },
  [436] = {
    [sym__identifier] = STATE(589),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [anon_sym_DOT_DOT] = ACTIONS(1120),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [437] = {
    [ts_builtin_sym_end] = ACTIONS(1122),
    [sym_comment] = ACTIONS(5),
  },
  [438] = {
    [sym__layout_semicolon] = ACTIONS(1124),
    [anon_sym_SEMI] = ACTIONS(1126),
    [sym_comment] = ACTIONS(5),
  },
  [439] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(592),
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
    [sym__layout_close_brace] = ACTIONS(1128),
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
  [440] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(98),
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
    [anon_sym_RBRACE] = ACTIONS(1130),
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
  [441] = {
    [sym_import_specification] = STATE(593),
    [sym__layout_semicolon] = ACTIONS(1132),
    [anon_sym_SEMI] = ACTIONS(1134),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_hiding] = ACTIONS(193),
    [sym_comment] = ACTIONS(5),
  },
  [442] = {
    [sym__identifier] = STATE(595),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [anon_sym_DOT_DOT] = ACTIONS(1136),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [443] = {
    [sym__identifier] = STATE(596),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [444] = {
    [sym__layout_semicolon] = ACTIONS(1138),
    [anon_sym_SEMI] = ACTIONS(1140),
    [sym_comment] = ACTIONS(5),
  },
  [445] = {
    [anon_sym_COMMA] = ACTIONS(1142),
    [anon_sym_RPAREN] = ACTIONS(1144),
    [sym_comment] = ACTIONS(5),
  },
  [446] = {
    [sym__layout_semicolon] = ACTIONS(1132),
    [anon_sym_SEMI] = ACTIONS(1134),
    [sym_comment] = ACTIONS(5),
  },
  [447] = {
    [aux_sym_import_specification_repeat1] = STATE(600),
    [anon_sym_LPAREN] = ACTIONS(1146),
    [anon_sym_COMMA] = ACTIONS(792),
    [anon_sym_RPAREN] = ACTIONS(1144),
    [sym_comment] = ACTIONS(5),
  },
  [448] = {
    [sym__variable_pattern] = ACTIONS(325),
    [sym__constructor_pattern] = ACTIONS(327),
    [sym_comment] = ACTIONS(5),
  },
  [449] = {
    [sym__gap] = STATE(200),
    [sym__graphic] = STATE(200),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__symbol] = STATE(73),
    [sym__special] = STATE(73),
    [sym__escape] = STATE(200),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(1148),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [450] = {
    [sym__layout_semicolon] = ACTIONS(1150),
    [anon_sym_SEMI] = ACTIONS(1152),
    [sym_comment] = ACTIONS(5),
  },
  [451] = {
    [sym_type_signature] = STATE(602),
    [sym__identifier] = STATE(264),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(481),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [452] = {
    [anon_sym_COMMA] = ACTIONS(1154),
    [anon_sym_RPAREN] = ACTIONS(1154),
    [sym_comment] = ACTIONS(5),
  },
  [453] = {
    [sym__identifier] = STATE(603),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [454] = {
    [sym__layout_semicolon] = ACTIONS(1156),
    [anon_sym_SEMI] = ACTIONS(1158),
    [sym_comment] = ACTIONS(5),
  },
  [455] = {
    [anon_sym_COMMA] = ACTIONS(1160),
    [anon_sym_RPAREN] = ACTIONS(1160),
    [sym_comment] = ACTIONS(5),
  },
  [456] = {
    [sym__constructor_pattern] = ACTIONS(1162),
    [sym_comment] = ACTIONS(5),
  },
  [457] = {
    [sym_constructor] = STATE(604),
    [sym_constructor_identifier] = STATE(113),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [458] = {
    [anon_sym_EQ_GT] = ACTIONS(1164),
    [sym_comment] = ACTIONS(5),
  },
  [459] = {
    [sym_label] = STATE(475),
    [sym__identifier] = STATE(402),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [460] = {
    [anon_sym_COMMA] = ACTIONS(856),
    [anon_sym_RPAREN] = ACTIONS(856),
    [sym_comment] = ACTIONS(5),
  },
  [461] = {
    [sym__literal] = STATE(478),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [462] = {
    [sym__layout_semicolon] = ACTIONS(1122),
    [anon_sym_SEMI] = ACTIONS(1166),
    [sym_comment] = ACTIONS(5),
  },
  [463] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(592),
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
    [sym__layout_close_brace] = ACTIONS(1168),
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
  [464] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(98),
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
    [anon_sym_RBRACE] = ACTIONS(1170),
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
  [465] = {
    [anon_sym_COMMA] = ACTIONS(1172),
    [anon_sym_RPAREN] = ACTIONS(1172),
    [anon_sym_EQ] = ACTIONS(1172),
    [anon_sym_where] = ACTIONS(1172),
    [anon_sym_EQ_GT] = ACTIONS(1172),
    [sym_comment] = ACTIONS(5),
  },
  [466] = {
    [sym_field] = STATE(608),
    [sym_variable_identifier] = STATE(284),
    [sym__variable_pattern] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
  },
  [467] = {
    [anon_sym_RBRACE] = ACTIONS(1174),
    [anon_sym_COMMA] = ACTIONS(1176),
    [sym_comment] = ACTIONS(5),
  },
  [468] = {
    [sym_variable_identifier] = STATE(611),
    [sym__variable_pattern] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
  },
  [469] = {
    [sym_strict] = STATE(613),
    [sym__identifier] = STATE(613),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [anon_sym_BANG] = ACTIONS(1178),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [470] = {
    [anon_sym_COMMA] = ACTIONS(1180),
    [anon_sym_COLON_COLON] = ACTIONS(1182),
    [sym_comment] = ACTIONS(5),
  },
  [471] = {
    [anon_sym_COMMA] = ACTIONS(1184),
    [anon_sym_RPAREN] = ACTIONS(1184),
    [anon_sym_EQ] = ACTIONS(1184),
    [anon_sym_where] = ACTIONS(1184),
    [anon_sym_EQ_GT] = ACTIONS(1184),
    [sym_comment] = ACTIONS(5),
  },
  [472] = {
    [anon_sym_RPAREN] = ACTIONS(1186),
    [sym__variable_pattern] = ACTIONS(1186),
    [sym__constructor_pattern] = ACTIONS(1188),
    [sym_comment] = ACTIONS(5),
  },
  [473] = {
    [anon_sym_COMMA] = ACTIONS(600),
    [anon_sym_EQ] = ACTIONS(600),
    [anon_sym_where] = ACTIONS(600),
    [anon_sym_EQ_GT] = ACTIONS(600),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(600),
    [anon_sym_DQUOTE] = ACTIONS(600),
    [sym__integer_literal] = ACTIONS(600),
    [sym__octal_literal] = ACTIONS(600),
    [sym__hexidecimal_literal] = ACTIONS(600),
  },
  [474] = {
    [anon_sym_COMMA] = ACTIONS(632),
    [anon_sym_EQ] = ACTIONS(632),
    [anon_sym_where] = ACTIONS(632),
    [anon_sym_EQ_GT] = ACTIONS(632),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(634),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DQUOTE] = ACTIONS(632),
    [sym__integer_literal] = ACTIONS(632),
    [sym__octal_literal] = ACTIONS(632),
    [sym__hexidecimal_literal] = ACTIONS(632),
  },
  [475] = {
    [anon_sym_RBRACE] = ACTIONS(1190),
    [anon_sym_COMMA] = ACTIONS(1190),
    [anon_sym_RPAREN] = ACTIONS(1190),
    [anon_sym_EQ] = ACTIONS(1190),
    [anon_sym_where] = ACTIONS(1190),
    [anon_sym_EQ_GT] = ACTIONS(1190),
    [sym_comment] = ACTIONS(5),
  },
  [476] = {
    [anon_sym_EQ] = ACTIONS(501),
    [sym_comment] = ACTIONS(5),
  },
  [477] = {
    [sym_label] = STATE(616),
    [sym__identifier] = STATE(476),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [478] = {
    [anon_sym_RBRACE] = ACTIONS(1192),
    [anon_sym_COMMA] = ACTIONS(1192),
    [anon_sym_RPAREN] = ACTIONS(1192),
    [anon_sym_EQ] = ACTIONS(1192),
    [anon_sym_where] = ACTIONS(1192),
    [anon_sym_EQ_GT] = ACTIONS(1192),
    [sym_comment] = ACTIONS(5),
  },
  [479] = {
    [sym__layout_semicolon] = ACTIONS(1194),
    [anon_sym_SEMI] = ACTIONS(1196),
    [anon_sym_COMMA] = ACTIONS(1196),
    [sym_comment] = ACTIONS(5),
  },
  [480] = {
    [sym_deriving] = STATE(617),
    [sym__layout_semicolon] = ACTIONS(1198),
    [anon_sym_SEMI] = ACTIONS(1200),
    [anon_sym_deriving] = ACTIONS(259),
    [sym_comment] = ACTIONS(5),
  },
  [481] = {
    [sym__layout_semicolon] = ACTIONS(1198),
    [anon_sym_SEMI] = ACTIONS(1200),
    [sym_comment] = ACTIONS(5),
  },
  [482] = {
    [aux_sym_fields_repeat1] = STATE(619),
    [anon_sym_RBRACE] = ACTIONS(1202),
    [anon_sym_COMMA] = ACTIONS(834),
    [sym_comment] = ACTIONS(5),
  },
  [483] = {
    [sym__identifier] = STATE(472),
    [sym_variable_identifier] = STATE(172),
    [sym_constructor_identifier] = STATE(172),
    [anon_sym_RPAREN] = ACTIONS(1204),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [484] = {
    [sym__layout_semicolon] = ACTIONS(921),
    [anon_sym_SEMI] = ACTIONS(846),
    [anon_sym_EQ] = ACTIONS(846),
    [anon_sym_deriving] = ACTIONS(846),
    [anon_sym_BANG] = ACTIONS(846),
    [sym__variable_pattern] = ACTIONS(848),
    [sym__constructor_pattern] = ACTIONS(848),
    [sym_comment] = ACTIONS(5),
  },
  [485] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1206),
  },
  [486] = {
    [sym__layout_semicolon] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_COMMA] = ACTIONS(325),
    [anon_sym_EQ] = ACTIONS(325),
    [anon_sym_deriving] = ACTIONS(325),
    [sym__constructor_pattern] = ACTIONS(327),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(327),
    [anon_sym_SQUOTE] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [sym__integer_literal] = ACTIONS(325),
    [sym__octal_literal] = ACTIONS(325),
    [sym__hexidecimal_literal] = ACTIONS(325),
  },
  [487] = {
    [sym__gap] = STATE(200),
    [sym__graphic] = STATE(200),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__symbol] = STATE(73),
    [sym__special] = STATE(73),
    [sym__escape] = STATE(200),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(1208),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [488] = {
    [sym_label] = STATE(623),
    [sym__identifier] = STATE(624),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [489] = {
    [sym__layout_semicolon] = ACTIONS(923),
    [anon_sym_SEMI] = ACTIONS(856),
    [anon_sym_COMMA] = ACTIONS(1210),
    [anon_sym_EQ] = ACTIONS(856),
    [anon_sym_deriving] = ACTIONS(856),
    [sym__constructor_pattern] = ACTIONS(927),
    [sym_comment] = ACTIONS(5),
  },
  [490] = {
    [sym__literal] = STATE(626),
    [sym_integer] = STATE(310),
    [sym_char] = STATE(310),
    [sym_string] = STATE(310),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(549),
    [anon_sym_SQUOTE] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [sym__integer_literal] = ACTIONS(555),
    [sym__octal_literal] = ACTIONS(555),
    [sym__hexidecimal_literal] = ACTIONS(555),
  },
  [491] = {
    [sym__layout_semicolon] = ACTIONS(929),
    [anon_sym_SEMI] = ACTIONS(858),
    [anon_sym_EQ] = ACTIONS(858),
    [anon_sym_deriving] = ACTIONS(858),
    [anon_sym_BANG] = ACTIONS(858),
    [sym__variable_pattern] = ACTIONS(860),
    [sym__constructor_pattern] = ACTIONS(860),
    [sym_comment] = ACTIONS(5),
  },
  [492] = {
    [sym__layout_semicolon] = ACTIONS(931),
    [anon_sym_SEMI] = ACTIONS(862),
    [anon_sym_EQ] = ACTIONS(862),
    [anon_sym_deriving] = ACTIONS(862),
    [sym__constructor_pattern] = ACTIONS(864),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(864),
    [anon_sym_SQUOTE] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(862),
    [sym__integer_literal] = ACTIONS(862),
    [sym__octal_literal] = ACTIONS(862),
    [sym__hexidecimal_literal] = ACTIONS(862),
  },
  [493] = {
    [aux_sym_export_repeat1] = STATE(628),
    [anon_sym_COMMA] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(1212),
    [sym_comment] = ACTIONS(5),
  },
  [494] = {
    [sym__layout_semicolon] = ACTIONS(1214),
    [anon_sym_SEMI] = ACTIONS(1216),
    [anon_sym_PIPE] = ACTIONS(1216),
    [anon_sym_deriving] = ACTIONS(1216),
    [sym_comment] = ACTIONS(5),
  },
  [495] = {
    [sym_constructor] = STATE(629),
    [sym_constructor_identifier] = STATE(154),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [496] = {
    [sym__layout_semicolon] = ACTIONS(1218),
    [anon_sym_SEMI] = ACTIONS(1172),
    [anon_sym_EQ] = ACTIONS(1172),
    [anon_sym_EQ_GT] = ACTIONS(1172),
    [anon_sym_PIPE] = ACTIONS(1172),
    [anon_sym_deriving] = ACTIONS(1172),
    [sym__constructor_pattern] = ACTIONS(1220),
    [sym_comment] = ACTIONS(5),
  },
  [497] = {
    [anon_sym_RBRACE] = ACTIONS(1222),
    [anon_sym_COMMA] = ACTIONS(1176),
    [sym_comment] = ACTIONS(5),
  },
  [498] = {
    [sym__layout_semicolon] = ACTIONS(1224),
    [anon_sym_SEMI] = ACTIONS(1184),
    [anon_sym_EQ] = ACTIONS(1184),
    [anon_sym_EQ_GT] = ACTIONS(1184),
    [anon_sym_PIPE] = ACTIONS(1184),
    [anon_sym_deriving] = ACTIONS(1184),
    [sym__constructor_pattern] = ACTIONS(1226),
    [sym_comment] = ACTIONS(5),
  },
  [499] = {
    [sym__layout_semicolon] = ACTIONS(1228),
    [anon_sym_SEMI] = ACTIONS(1190),
    [anon_sym_COMMA] = ACTIONS(1190),
    [anon_sym_EQ] = ACTIONS(1190),
    [anon_sym_EQ_GT] = ACTIONS(1190),
    [anon_sym_PIPE] = ACTIONS(1190),
    [anon_sym_deriving] = ACTIONS(1190),
    [sym__constructor_pattern] = ACTIONS(1230),
    [sym_comment] = ACTIONS(5),
  },
  [500] = {
    [anon_sym_EQ] = ACTIONS(915),
    [sym_comment] = ACTIONS(5),
  },
  [501] = {
    [sym_label] = STATE(631),
    [sym__identifier] = STATE(500),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [502] = {
    [sym__layout_semicolon] = ACTIONS(1232),
    [anon_sym_SEMI] = ACTIONS(1192),
    [anon_sym_COMMA] = ACTIONS(1192),
    [anon_sym_EQ] = ACTIONS(1192),
    [anon_sym_EQ_GT] = ACTIONS(1192),
    [anon_sym_PIPE] = ACTIONS(1192),
    [anon_sym_deriving] = ACTIONS(1192),
    [sym__constructor_pattern] = ACTIONS(1234),
    [sym_comment] = ACTIONS(5),
  },
  [503] = {
    [sym_deriving] = STATE(632),
    [sym__layout_semicolon] = ACTIONS(1236),
    [anon_sym_SEMI] = ACTIONS(1238),
    [anon_sym_deriving] = ACTIONS(259),
    [sym_comment] = ACTIONS(5),
  },
  [504] = {
    [sym__layout_semicolon] = ACTIONS(1236),
    [anon_sym_SEMI] = ACTIONS(1238),
    [sym_comment] = ACTIONS(5),
  },
  [505] = {
    [sym_variable_identifier] = STATE(557),
    [aux_sym__type_constructors_repeat1] = STATE(558),
    [anon_sym_COMMA] = ACTIONS(728),
    [anon_sym_RPAREN] = ACTIONS(728),
    [anon_sym_DASH_GT] = ACTIONS(728),
    [sym__variable_pattern] = ACTIONS(275),
    [sym_comment] = ACTIONS(5),
  },
  [506] = {
    [anon_sym_EQ] = ACTIONS(1172),
    [sym_comment] = ACTIONS(5),
  },
  [507] = {
    [anon_sym_RBRACE] = ACTIONS(1240),
    [anon_sym_COMMA] = ACTIONS(1176),
    [sym_comment] = ACTIONS(5),
  },
  [508] = {
    [anon_sym_EQ] = ACTIONS(1184),
    [sym_comment] = ACTIONS(5),
  },
  [509] = {
    [anon_sym_COMMA] = ACTIONS(1190),
    [anon_sym_EQ] = ACTIONS(1190),
    [sym_comment] = ACTIONS(5),
  },
  [510] = {
    [anon_sym_EQ] = ACTIONS(1242),
    [sym_comment] = ACTIONS(5),
  },
  [511] = {
    [sym_label] = STATE(634),
    [sym__identifier] = STATE(510),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [512] = {
    [anon_sym_COMMA] = ACTIONS(1192),
    [anon_sym_EQ] = ACTIONS(1192),
    [sym_comment] = ACTIONS(5),
  },
  [513] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1244),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1244),
  },
  [514] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1246),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1246),
  },
  [515] = {
    [anon_sym_SEMI] = ACTIONS(1248),
    [anon_sym_LBRACE] = ACTIONS(1248),
    [anon_sym_RBRACE] = ACTIONS(1248),
    [anon_sym_LPAREN] = ACTIONS(1248),
    [anon_sym_RPAREN] = ACTIONS(1248),
    [anon_sym_EQ] = ACTIONS(1248),
    [anon_sym_TILDE] = ACTIONS(1248),
    [anon_sym_LBRACK] = ACTIONS(1248),
    [anon_sym_RBRACK] = ACTIONS(1248),
    [anon_sym_DASH] = ACTIONS(1248),
    [anon_sym_AT] = ACTIONS(1248),
    [anon_sym__] = ACTIONS(1248),
    [anon_sym_BQUOTE] = ACTIONS(1248),
    [anon_sym_COLON] = ACTIONS(1248),
    [anon_sym_PIPE] = ACTIONS(1248),
    [anon_sym_BANG] = ACTIONS(1248),
    [anon_sym_DOT] = ACTIONS(1248),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(1248),
    [anon_sym_DQUOTE] = ACTIONS(1248),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1248),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1248),
    [sym__ascii_large] = ACTIONS(1248),
    [anon_sym_POUND] = ACTIONS(1248),
    [anon_sym_DOLLAR] = ACTIONS(1248),
    [anon_sym_PERCENT] = ACTIONS(1248),
    [anon_sym_AMP] = ACTIONS(1248),
    [anon_sym_1] = ACTIONS(1248),
    [anon_sym_PLUS] = ACTIONS(1248),
    [anon_sym_SLASH] = ACTIONS(1248),
    [anon_sym_LT] = ACTIONS(1248),
    [anon_sym_GT] = ACTIONS(1248),
    [anon_sym_QMARK] = ACTIONS(1248),
    [anon_sym_CARET] = ACTIONS(1248),
    [anon_sym_BSLASH] = ACTIONS(1248),
    [sym__space] = ACTIONS(1248),
    [sym__newline] = ACTIONS(1248),
    [sym__tab] = ACTIONS(1248),
    [sym__vertical_tab] = ACTIONS(1248),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1248),
  },
  [516] = {
    [anon_sym_SEMI] = ACTIONS(1250),
    [anon_sym_LBRACE] = ACTIONS(1250),
    [anon_sym_RBRACE] = ACTIONS(1250),
    [anon_sym_LPAREN] = ACTIONS(1250),
    [anon_sym_RPAREN] = ACTIONS(1250),
    [anon_sym_EQ] = ACTIONS(1250),
    [anon_sym_TILDE] = ACTIONS(1250),
    [anon_sym_LBRACK] = ACTIONS(1250),
    [anon_sym_RBRACK] = ACTIONS(1250),
    [anon_sym_DASH] = ACTIONS(1250),
    [anon_sym_AT] = ACTIONS(1250),
    [anon_sym__] = ACTIONS(1250),
    [anon_sym_BQUOTE] = ACTIONS(1250),
    [anon_sym_COLON] = ACTIONS(1250),
    [anon_sym_PIPE] = ACTIONS(1250),
    [anon_sym_BANG] = ACTIONS(1250),
    [anon_sym_DOT] = ACTIONS(1250),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(1250),
    [anon_sym_DQUOTE] = ACTIONS(1250),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1250),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1250),
    [sym__ascii_large] = ACTIONS(1250),
    [anon_sym_POUND] = ACTIONS(1250),
    [anon_sym_DOLLAR] = ACTIONS(1250),
    [anon_sym_PERCENT] = ACTIONS(1250),
    [anon_sym_AMP] = ACTIONS(1250),
    [anon_sym_1] = ACTIONS(1250),
    [anon_sym_PLUS] = ACTIONS(1250),
    [anon_sym_SLASH] = ACTIONS(1250),
    [anon_sym_LT] = ACTIONS(1250),
    [anon_sym_GT] = ACTIONS(1250),
    [anon_sym_QMARK] = ACTIONS(1250),
    [anon_sym_CARET] = ACTIONS(1250),
    [anon_sym_BSLASH] = ACTIONS(1250),
    [sym__space] = ACTIONS(1250),
    [sym__newline] = ACTIONS(1250),
    [sym__tab] = ACTIONS(1250),
    [sym__vertical_tab] = ACTIONS(1250),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1250),
  },
  [517] = {
    [sym__layout_semicolon] = ACTIONS(1252),
    [anon_sym_SEMI] = ACTIONS(1254),
    [anon_sym_where] = ACTIONS(1254),
    [anon_sym_do] = ACTIONS(1254),
    [sym__variable_pattern] = ACTIONS(1256),
    [sym__constructor_pattern] = ACTIONS(1256),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1256),
    [anon_sym_SQUOTE] = ACTIONS(1254),
    [anon_sym_DQUOTE] = ACTIONS(1254),
    [sym__integer_literal] = ACTIONS(1254),
    [sym__octal_literal] = ACTIONS(1254),
    [sym__hexidecimal_literal] = ACTIONS(1254),
  },
  [518] = {
    [sym__layout_semicolon] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [519] = {
    [sym__layout_semicolon] = ACTIONS(1258),
    [anon_sym_SEMI] = ACTIONS(1260),
    [sym_comment] = ACTIONS(5),
  },
  [520] = {
    [sym__layout_close_brace] = ACTIONS(1262),
    [anon_sym_do] = ACTIONS(1264),
    [sym__variable_pattern] = ACTIONS(1266),
    [sym__constructor_pattern] = ACTIONS(1266),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1266),
    [anon_sym_SQUOTE] = ACTIONS(1264),
    [anon_sym_DQUOTE] = ACTIONS(1264),
    [sym__integer_literal] = ACTIONS(1264),
    [sym__octal_literal] = ACTIONS(1264),
    [sym__hexidecimal_literal] = ACTIONS(1264),
  },
  [521] = {
    [sym_labels] = STATE(159),
    [sym_label] = STATE(160),
    [sym_strict] = STATE(637),
    [sym__literal] = STATE(162),
    [sym__identifier] = STATE(638),
    [sym_variable_identifier] = STATE(639),
    [sym_constructor_identifier] = STATE(639),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym_fields] = STATE(159),
    [aux_sym_constructor_repeat1] = STATE(640),
    [aux_sym_constructor_repeat3] = STATE(165),
    [sym__layout_semicolon] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_BANG] = ACTIONS(1268),
    [sym__variable_pattern] = ACTIONS(939),
    [sym__constructor_pattern] = ACTIONS(730),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [522] = {
    [sym__variable] = STATE(210),
    [sym_qualified_variable_identifier] = STATE(211),
    [sym__expression] = STATE(519),
    [sym_do_expression] = STATE(210),
    [sym__statement] = STATE(642),
    [sym_constructor] = STATE(210),
    [sym__literal] = STATE(210),
    [sym_variable_identifier] = STATE(211),
    [sym_constructor_identifier] = STATE(521),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_close_brace] = ACTIONS(1270),
    [anon_sym_do] = ACTIONS(361),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(981),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [523] = {
    [sym__layout_semicolon] = ACTIONS(1272),
    [anon_sym_SEMI] = ACTIONS(1274),
    [sym_comment] = ACTIONS(5),
  },
  [524] = {
    [anon_sym_RBRACE] = ACTIONS(1264),
    [anon_sym_do] = ACTIONS(1264),
    [sym__variable_pattern] = ACTIONS(1266),
    [sym__constructor_pattern] = ACTIONS(1266),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1266),
    [anon_sym_SQUOTE] = ACTIONS(1264),
    [anon_sym_DQUOTE] = ACTIONS(1264),
    [sym__integer_literal] = ACTIONS(1264),
    [sym__octal_literal] = ACTIONS(1264),
    [sym__hexidecimal_literal] = ACTIONS(1264),
  },
  [525] = {
    [sym__variable] = STATE(210),
    [sym_qualified_variable_identifier] = STATE(211),
    [sym__expression] = STATE(523),
    [sym_do_expression] = STATE(210),
    [sym__statement] = STATE(644),
    [sym_constructor] = STATE(210),
    [sym__literal] = STATE(210),
    [sym_variable_identifier] = STATE(211),
    [sym_constructor_identifier] = STATE(521),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [anon_sym_RBRACE] = ACTIONS(1276),
    [anon_sym_do] = ACTIONS(361),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(981),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [526] = {
    [sym__layout_semicolon] = ACTIONS(598),
    [anon_sym_SEMI] = ACTIONS(600),
    [anon_sym_COMMA] = ACTIONS(600),
    [anon_sym_where] = ACTIONS(600),
    [anon_sym_do] = ACTIONS(600),
    [sym__variable_pattern] = ACTIONS(602),
    [sym__constructor_pattern] = ACTIONS(602),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(600),
    [anon_sym_DQUOTE] = ACTIONS(600),
    [sym__integer_literal] = ACTIONS(600),
    [sym__octal_literal] = ACTIONS(600),
    [sym__hexidecimal_literal] = ACTIONS(600),
  },
  [527] = {
    [sym__layout_semicolon] = ACTIONS(630),
    [anon_sym_SEMI] = ACTIONS(632),
    [anon_sym_COMMA] = ACTIONS(632),
    [anon_sym_where] = ACTIONS(632),
    [anon_sym_do] = ACTIONS(632),
    [sym__variable_pattern] = ACTIONS(634),
    [sym__constructor_pattern] = ACTIONS(634),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(634),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DQUOTE] = ACTIONS(632),
    [sym__integer_literal] = ACTIONS(632),
    [sym__octal_literal] = ACTIONS(632),
    [sym__hexidecimal_literal] = ACTIONS(632),
  },
  [528] = {
    [aux_sym_fields_repeat1] = STATE(646),
    [anon_sym_RBRACE] = ACTIONS(1278),
    [anon_sym_COMMA] = ACTIONS(834),
    [sym_comment] = ACTIONS(5),
  },
  [529] = {
    [sym__identifier] = STATE(472),
    [sym_variable_identifier] = STATE(172),
    [sym_constructor_identifier] = STATE(172),
    [anon_sym_RPAREN] = ACTIONS(1280),
    [sym__variable_pattern] = ACTIONS(275),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [530] = {
    [sym__layout_semicolon] = ACTIONS(921),
    [anon_sym_SEMI] = ACTIONS(846),
    [anon_sym_where] = ACTIONS(846),
    [anon_sym_do] = ACTIONS(846),
    [anon_sym_BANG] = ACTIONS(846),
    [sym__variable_pattern] = ACTIONS(848),
    [sym__constructor_pattern] = ACTIONS(848),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(848),
    [anon_sym_SQUOTE] = ACTIONS(846),
    [anon_sym_DQUOTE] = ACTIONS(846),
    [sym__integer_literal] = ACTIONS(846),
    [sym__octal_literal] = ACTIONS(846),
    [sym__hexidecimal_literal] = ACTIONS(846),
  },
  [531] = {
    [sym_label] = STATE(648),
    [sym__identifier] = STATE(649),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [532] = {
    [sym__layout_semicolon] = ACTIONS(923),
    [anon_sym_SEMI] = ACTIONS(856),
    [anon_sym_COMMA] = ACTIONS(1282),
    [anon_sym_where] = ACTIONS(856),
    [anon_sym_do] = ACTIONS(856),
    [sym__variable_pattern] = ACTIONS(927),
    [sym__constructor_pattern] = ACTIONS(927),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(927),
    [anon_sym_SQUOTE] = ACTIONS(856),
    [anon_sym_DQUOTE] = ACTIONS(856),
    [sym__integer_literal] = ACTIONS(856),
    [sym__octal_literal] = ACTIONS(856),
    [sym__hexidecimal_literal] = ACTIONS(856),
  },
  [533] = {
    [sym__literal] = STATE(651),
    [sym_integer] = STATE(205),
    [sym_char] = STATE(205),
    [sym_string] = STATE(205),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(367),
    [anon_sym_SQUOTE] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(371),
    [sym__integer_literal] = ACTIONS(373),
    [sym__octal_literal] = ACTIONS(373),
    [sym__hexidecimal_literal] = ACTIONS(373),
  },
  [534] = {
    [sym__layout_semicolon] = ACTIONS(929),
    [anon_sym_SEMI] = ACTIONS(858),
    [anon_sym_where] = ACTIONS(858),
    [anon_sym_do] = ACTIONS(858),
    [anon_sym_BANG] = ACTIONS(858),
    [sym__variable_pattern] = ACTIONS(860),
    [sym__constructor_pattern] = ACTIONS(860),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(860),
    [anon_sym_SQUOTE] = ACTIONS(858),
    [anon_sym_DQUOTE] = ACTIONS(858),
    [sym__integer_literal] = ACTIONS(858),
    [sym__octal_literal] = ACTIONS(858),
    [sym__hexidecimal_literal] = ACTIONS(858),
  },
  [535] = {
    [sym__layout_semicolon] = ACTIONS(931),
    [anon_sym_SEMI] = ACTIONS(862),
    [anon_sym_where] = ACTIONS(862),
    [anon_sym_do] = ACTIONS(862),
    [sym__variable_pattern] = ACTIONS(864),
    [sym__constructor_pattern] = ACTIONS(864),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(864),
    [anon_sym_SQUOTE] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(862),
    [sym__integer_literal] = ACTIONS(862),
    [sym__octal_literal] = ACTIONS(862),
    [sym__hexidecimal_literal] = ACTIONS(862),
  },
  [536] = {
    [anon_sym_RPAREN] = ACTIONS(1284),
    [sym_comment] = ACTIONS(5),
  },
  [537] = {
    [sym__op] = STATE(389),
    [sym_variable_symbol] = STATE(390),
    [sym_constructor_symbol] = STATE(390),
    [sym__variable_symbol] = STATE(391),
    [anon_sym_COMMA] = ACTIONS(1286),
    [anon_sym_RPAREN] = ACTIONS(1286),
    [anon_sym_DASH] = ACTIONS(676),
    [anon_sym_BQUOTE] = ACTIONS(678),
    [anon_sym_COLON] = ACTIONS(680),
    [anon_sym_BANG] = ACTIONS(676),
    [anon_sym_DOT] = ACTIONS(676),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(676),
    [anon_sym_DOLLAR] = ACTIONS(676),
    [anon_sym_PERCENT] = ACTIONS(676),
    [anon_sym_AMP] = ACTIONS(676),
    [anon_sym_1] = ACTIONS(676),
    [anon_sym_PLUS] = ACTIONS(676),
    [anon_sym_SLASH] = ACTIONS(676),
    [anon_sym_LT] = ACTIONS(676),
    [anon_sym_GT] = ACTIONS(676),
    [anon_sym_QMARK] = ACTIONS(676),
    [anon_sym_CARET] = ACTIONS(676),
  },
  [538] = {
    [anon_sym_COMMA] = ACTIONS(1286),
    [anon_sym_RPAREN] = ACTIONS(1286),
    [sym_comment] = ACTIONS(5),
  },
  [539] = {
    [anon_sym_BQUOTE] = ACTIONS(1288),
    [sym_comment] = ACTIONS(5),
  },
  [540] = {
    [anon_sym_LPAREN] = ACTIONS(511),
    [anon_sym_TILDE] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(511),
    [anon_sym__] = ACTIONS(511),
    [anon_sym_COLON] = ACTIONS(511),
    [sym_list_constructor] = ACTIONS(511),
    [anon_sym_BANG] = ACTIONS(511),
    [sym__variable_pattern] = ACTIONS(1290),
    [sym__constructor_pattern] = ACTIONS(1290),
    [anon_sym_DOT] = ACTIONS(511),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1290),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [anon_sym_POUND] = ACTIONS(511),
    [anon_sym_DOLLAR] = ACTIONS(511),
    [anon_sym_PERCENT] = ACTIONS(511),
    [anon_sym_AMP] = ACTIONS(511),
    [anon_sym_1] = ACTIONS(511),
    [anon_sym_PLUS] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(511),
    [anon_sym_LT] = ACTIONS(511),
    [anon_sym_GT] = ACTIONS(511),
    [anon_sym_QMARK] = ACTIONS(511),
    [anon_sym_CARET] = ACTIONS(511),
    [sym__integer_literal] = ACTIONS(511),
    [sym__octal_literal] = ACTIONS(511),
    [sym__hexidecimal_literal] = ACTIONS(511),
  },
  [541] = {
    [anon_sym_LPAREN] = ACTIONS(515),
    [anon_sym_TILDE] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(515),
    [anon_sym_DASH] = ACTIONS(515),
    [anon_sym__] = ACTIONS(515),
    [anon_sym_COLON] = ACTIONS(515),
    [sym_list_constructor] = ACTIONS(515),
    [anon_sym_BANG] = ACTIONS(515),
    [sym__variable_pattern] = ACTIONS(1292),
    [sym__constructor_pattern] = ACTIONS(1292),
    [anon_sym_DOT] = ACTIONS(515),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1292),
    [anon_sym_SQUOTE] = ACTIONS(515),
    [anon_sym_DQUOTE] = ACTIONS(515),
    [anon_sym_POUND] = ACTIONS(515),
    [anon_sym_DOLLAR] = ACTIONS(515),
    [anon_sym_PERCENT] = ACTIONS(515),
    [anon_sym_AMP] = ACTIONS(515),
    [anon_sym_1] = ACTIONS(515),
    [anon_sym_PLUS] = ACTIONS(515),
    [anon_sym_SLASH] = ACTIONS(515),
    [anon_sym_LT] = ACTIONS(515),
    [anon_sym_GT] = ACTIONS(515),
    [anon_sym_QMARK] = ACTIONS(515),
    [anon_sym_CARET] = ACTIONS(515),
    [sym__integer_literal] = ACTIONS(515),
    [sym__octal_literal] = ACTIONS(515),
    [sym__hexidecimal_literal] = ACTIONS(515),
  },
  [542] = {
    [sym__constructor_symbol] = STATE(654),
    [anon_sym_LPAREN] = ACTIONS(519),
    [anon_sym_TILDE] = ACTIONS(519),
    [anon_sym_LBRACK] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym__] = ACTIONS(519),
    [anon_sym_COLON] = ACTIONS(1019),
    [sym_list_constructor] = ACTIONS(519),
    [anon_sym_BANG] = ACTIONS(1019),
    [sym__variable_pattern] = ACTIONS(1294),
    [sym__constructor_pattern] = ACTIONS(1294),
    [anon_sym_DOT] = ACTIONS(1019),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1294),
    [anon_sym_SQUOTE] = ACTIONS(519),
    [anon_sym_DQUOTE] = ACTIONS(519),
    [anon_sym_POUND] = ACTIONS(1019),
    [anon_sym_DOLLAR] = ACTIONS(1019),
    [anon_sym_PERCENT] = ACTIONS(1019),
    [anon_sym_AMP] = ACTIONS(1019),
    [anon_sym_1] = ACTIONS(1019),
    [anon_sym_PLUS] = ACTIONS(1019),
    [anon_sym_SLASH] = ACTIONS(1019),
    [anon_sym_LT] = ACTIONS(1019),
    [anon_sym_GT] = ACTIONS(1019),
    [anon_sym_QMARK] = ACTIONS(1019),
    [anon_sym_CARET] = ACTIONS(1019),
    [sym__integer_literal] = ACTIONS(519),
    [sym__octal_literal] = ACTIONS(519),
    [sym__hexidecimal_literal] = ACTIONS(519),
  },
  [543] = {
    [sym__op] = STATE(389),
    [sym_variable_symbol] = STATE(390),
    [sym_constructor_symbol] = STATE(390),
    [sym__variable_symbol] = STATE(391),
    [anon_sym_COMMA] = ACTIONS(1296),
    [anon_sym_RPAREN] = ACTIONS(1296),
    [anon_sym_DASH] = ACTIONS(676),
    [anon_sym_BQUOTE] = ACTIONS(678),
    [anon_sym_COLON] = ACTIONS(680),
    [anon_sym_BANG] = ACTIONS(676),
    [anon_sym_DOT] = ACTIONS(676),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(676),
    [anon_sym_DOLLAR] = ACTIONS(676),
    [anon_sym_PERCENT] = ACTIONS(676),
    [anon_sym_AMP] = ACTIONS(676),
    [anon_sym_1] = ACTIONS(676),
    [anon_sym_PLUS] = ACTIONS(676),
    [anon_sym_SLASH] = ACTIONS(676),
    [anon_sym_LT] = ACTIONS(676),
    [anon_sym_GT] = ACTIONS(676),
    [anon_sym_QMARK] = ACTIONS(676),
    [anon_sym_CARET] = ACTIONS(676),
  },
  [544] = {
    [anon_sym_COMMA] = ACTIONS(1296),
    [anon_sym_RPAREN] = ACTIONS(1296),
    [sym_comment] = ACTIONS(5),
  },
  [545] = {
    [anon_sym_LPAREN] = ACTIONS(529),
    [anon_sym_TILDE] = ACTIONS(529),
    [anon_sym_LBRACK] = ACTIONS(529),
    [anon_sym_DASH] = ACTIONS(529),
    [anon_sym__] = ACTIONS(529),
    [sym_list_constructor] = ACTIONS(529),
    [anon_sym_BANG] = ACTIONS(529),
    [sym__variable_pattern] = ACTIONS(1298),
    [sym__constructor_pattern] = ACTIONS(1298),
    [anon_sym_DOT] = ACTIONS(529),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1298),
    [anon_sym_SQUOTE] = ACTIONS(529),
    [anon_sym_DQUOTE] = ACTIONS(529),
    [anon_sym_POUND] = ACTIONS(529),
    [anon_sym_DOLLAR] = ACTIONS(529),
    [anon_sym_PERCENT] = ACTIONS(529),
    [anon_sym_AMP] = ACTIONS(529),
    [anon_sym_1] = ACTIONS(529),
    [anon_sym_PLUS] = ACTIONS(529),
    [anon_sym_SLASH] = ACTIONS(529),
    [anon_sym_LT] = ACTIONS(529),
    [anon_sym_GT] = ACTIONS(529),
    [anon_sym_QMARK] = ACTIONS(529),
    [anon_sym_CARET] = ACTIONS(529),
    [sym__integer_literal] = ACTIONS(529),
    [sym__octal_literal] = ACTIONS(529),
    [sym__hexidecimal_literal] = ACTIONS(529),
  },
  [546] = {
    [sym__variable_symbol] = STATE(655),
    [anon_sym_LPAREN] = ACTIONS(533),
    [anon_sym_TILDE] = ACTIONS(533),
    [anon_sym_LBRACK] = ACTIONS(533),
    [anon_sym_DASH] = ACTIONS(676),
    [anon_sym__] = ACTIONS(533),
    [sym_list_constructor] = ACTIONS(533),
    [anon_sym_BANG] = ACTIONS(676),
    [sym__variable_pattern] = ACTIONS(1300),
    [sym__constructor_pattern] = ACTIONS(1300),
    [anon_sym_DOT] = ACTIONS(676),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1300),
    [anon_sym_SQUOTE] = ACTIONS(533),
    [anon_sym_DQUOTE] = ACTIONS(533),
    [anon_sym_POUND] = ACTIONS(676),
    [anon_sym_DOLLAR] = ACTIONS(676),
    [anon_sym_PERCENT] = ACTIONS(676),
    [anon_sym_AMP] = ACTIONS(676),
    [anon_sym_1] = ACTIONS(676),
    [anon_sym_PLUS] = ACTIONS(676),
    [anon_sym_SLASH] = ACTIONS(676),
    [anon_sym_LT] = ACTIONS(676),
    [anon_sym_GT] = ACTIONS(676),
    [anon_sym_QMARK] = ACTIONS(676),
    [anon_sym_CARET] = ACTIONS(676),
    [sym__integer_literal] = ACTIONS(533),
    [sym__octal_literal] = ACTIONS(533),
    [sym__hexidecimal_literal] = ACTIONS(533),
  },
  [547] = {
    [sym__function_pattern] = STATE(656),
    [sym_label_pattern] = STATE(85),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym__pattern] = STATE(657),
    [sym_negative_literal] = STATE(220),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(221),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_constructor] = STATE(220),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(222),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(383),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [548] = {
    [anon_sym_LPAREN] = ACTIONS(1302),
    [anon_sym_COMMA] = ACTIONS(1302),
    [anon_sym_RPAREN] = ACTIONS(1302),
    [anon_sym_EQ] = ACTIONS(1302),
    [anon_sym_TILDE] = ACTIONS(1302),
    [anon_sym_LBRACK] = ACTIONS(1302),
    [anon_sym_RBRACK] = ACTIONS(1302),
    [anon_sym_DASH] = ACTIONS(1302),
    [anon_sym__] = ACTIONS(1302),
    [anon_sym_BQUOTE] = ACTIONS(1302),
    [anon_sym_COLON] = ACTIONS(1302),
    [sym_list_constructor] = ACTIONS(1302),
    [anon_sym_BANG] = ACTIONS(1302),
    [sym__variable_pattern] = ACTIONS(1304),
    [sym__constructor_pattern] = ACTIONS(1304),
    [anon_sym_DOT] = ACTIONS(1302),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1304),
    [anon_sym_SQUOTE] = ACTIONS(1302),
    [anon_sym_DQUOTE] = ACTIONS(1302),
    [anon_sym_POUND] = ACTIONS(1302),
    [anon_sym_DOLLAR] = ACTIONS(1302),
    [anon_sym_PERCENT] = ACTIONS(1302),
    [anon_sym_AMP] = ACTIONS(1302),
    [anon_sym_1] = ACTIONS(1302),
    [anon_sym_PLUS] = ACTIONS(1302),
    [anon_sym_SLASH] = ACTIONS(1302),
    [anon_sym_LT] = ACTIONS(1302),
    [anon_sym_GT] = ACTIONS(1302),
    [anon_sym_QMARK] = ACTIONS(1302),
    [anon_sym_CARET] = ACTIONS(1302),
    [sym__integer_literal] = ACTIONS(1302),
    [sym__octal_literal] = ACTIONS(1302),
    [sym__hexidecimal_literal] = ACTIONS(1302),
  },
  [549] = {
    [anon_sym_LPAREN] = ACTIONS(1306),
    [anon_sym_COMMA] = ACTIONS(1306),
    [anon_sym_RPAREN] = ACTIONS(1306),
    [anon_sym_EQ] = ACTIONS(1306),
    [anon_sym_TILDE] = ACTIONS(1306),
    [anon_sym_LBRACK] = ACTIONS(1306),
    [anon_sym_RBRACK] = ACTIONS(1306),
    [anon_sym_DASH] = ACTIONS(1306),
    [anon_sym__] = ACTIONS(1306),
    [anon_sym_BQUOTE] = ACTIONS(1306),
    [anon_sym_COLON] = ACTIONS(1306),
    [sym_list_constructor] = ACTIONS(1306),
    [anon_sym_BANG] = ACTIONS(1306),
    [sym__variable_pattern] = ACTIONS(1308),
    [sym__constructor_pattern] = ACTIONS(1308),
    [anon_sym_DOT] = ACTIONS(1306),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1308),
    [anon_sym_SQUOTE] = ACTIONS(1306),
    [anon_sym_DQUOTE] = ACTIONS(1306),
    [anon_sym_POUND] = ACTIONS(1306),
    [anon_sym_DOLLAR] = ACTIONS(1306),
    [anon_sym_PERCENT] = ACTIONS(1306),
    [anon_sym_AMP] = ACTIONS(1306),
    [anon_sym_1] = ACTIONS(1306),
    [anon_sym_PLUS] = ACTIONS(1306),
    [anon_sym_SLASH] = ACTIONS(1306),
    [anon_sym_LT] = ACTIONS(1306),
    [anon_sym_GT] = ACTIONS(1306),
    [anon_sym_QMARK] = ACTIONS(1306),
    [anon_sym_CARET] = ACTIONS(1306),
    [sym__integer_literal] = ACTIONS(1306),
    [sym__octal_literal] = ACTIONS(1306),
    [sym__hexidecimal_literal] = ACTIONS(1306),
  },
  [550] = {
    [anon_sym_RBRACE] = ACTIONS(856),
    [anon_sym_COMMA] = ACTIONS(1310),
    [sym_comment] = ACTIONS(5),
  },
  [551] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(659),
    [anon_sym_COMMA] = ACTIONS(1049),
    [anon_sym_RPAREN] = ACTIONS(1312),
    [sym_comment] = ACTIONS(5),
  },
  [552] = {
    [aux_sym_tuple_repeat1] = STATE(661),
    [anon_sym_COMMA] = ACTIONS(1060),
    [anon_sym_RPAREN] = ACTIONS(1314),
    [sym_comment] = ACTIONS(5),
  },
  [553] = {
    [anon_sym_COMMA] = ACTIONS(1316),
    [anon_sym_RPAREN] = ACTIONS(1316),
    [sym_comment] = ACTIONS(5),
  },
  [554] = {
    [sym__layout_semicolon] = ACTIONS(1318),
    [anon_sym_SEMI] = ACTIONS(1320),
    [anon_sym_DASH_GT] = ACTIONS(1320),
    [sym_comment] = ACTIONS(5),
  },
  [555] = {
    [anon_sym_COMMA] = ACTIONS(1322),
    [anon_sym_RPAREN] = ACTIONS(1324),
    [sym_comment] = ACTIONS(5),
  },
  [556] = {
    [sym_type] = STATE(577),
    [sym__generic_type_constructor] = STATE(418),
    [sym_tupling_constructor] = STATE(406),
    [sym_tuple] = STATE(418),
    [sym_list] = STATE(418),
    [sym_parenthesized_constructor] = STATE(418),
    [sym_variable_identifier] = STATE(419),
    [sym__type_constructors] = STATE(406),
    [sym_qualified_type_constructor] = STATE(413),
    [anon_sym_LPAREN] = ACTIONS(704),
    [anon_sym_LBRACK] = ACTIONS(708),
    [anon_sym_RBRACK] = ACTIONS(1326),
    [sym_unit_type] = ACTIONS(710),
    [sym_list_constructor] = ACTIONS(710),
    [sym_function_constructor] = ACTIONS(710),
    [sym__variable_pattern] = ACTIONS(716),
    [sym__constructor_pattern] = ACTIONS(718),
    [sym_module_identifier] = ACTIONS(720),
    [sym_comment] = ACTIONS(5),
  },
  [557] = {
    [anon_sym_LPAREN] = ACTIONS(1094),
    [anon_sym_COMMA] = ACTIONS(1094),
    [anon_sym_RPAREN] = ACTIONS(1094),
    [anon_sym_LBRACK] = ACTIONS(1094),
    [anon_sym_RBRACK] = ACTIONS(1094),
    [anon_sym_DASH_GT] = ACTIONS(1094),
    [sym_unit_type] = ACTIONS(1094),
    [sym_list_constructor] = ACTIONS(1094),
    [sym_function_constructor] = ACTIONS(1094),
    [sym__variable_pattern] = ACTIONS(1094),
    [sym__constructor_pattern] = ACTIONS(1328),
    [sym_module_identifier] = ACTIONS(1328),
    [sym_comment] = ACTIONS(5),
  },
  [558] = {
    [sym_variable_identifier] = STATE(665),
    [anon_sym_COMMA] = ACTIONS(1098),
    [anon_sym_RPAREN] = ACTIONS(1098),
    [anon_sym_DASH_GT] = ACTIONS(1098),
    [sym__variable_pattern] = ACTIONS(275),
    [sym_comment] = ACTIONS(5),
  },
  [559] = {
    [sym_constructor_identifier] = STATE(666),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_module_identifier] = ACTIONS(1100),
    [sym_comment] = ACTIONS(5),
  },
  [560] = {
    [sym_variable_identifier] = STATE(557),
    [aux_sym__type_constructors_repeat1] = STATE(667),
    [anon_sym_COMMA] = ACTIONS(1104),
    [anon_sym_RPAREN] = ACTIONS(1104),
    [anon_sym_DASH_GT] = ACTIONS(1104),
    [sym__variable_pattern] = ACTIONS(275),
    [sym_comment] = ACTIONS(5),
  },
  [561] = {
    [sym_constructor_identifier] = STATE(666),
    [sym__constructor_pattern] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(1330),
    [sym_comment] = ACTIONS(5),
  },
  [562] = {
    [sym_type] = STATE(669),
    [sym__generic_type_constructor] = STATE(410),
    [sym_tupling_constructor] = STATE(406),
    [sym_tuple] = STATE(410),
    [sym_list] = STATE(410),
    [sym_parenthesized_constructor] = STATE(410),
    [sym_variable_identifier] = STATE(412),
    [sym__type_constructors] = STATE(406),
    [sym_qualified_type_constructor] = STATE(413),
    [anon_sym_LPAREN] = ACTIONS(704),
    [anon_sym_LBRACK] = ACTIONS(708),
    [sym_unit_type] = ACTIONS(710),
    [sym_list_constructor] = ACTIONS(710),
    [sym_function_constructor] = ACTIONS(710),
    [sym__variable_pattern] = ACTIONS(481),
    [sym__constructor_pattern] = ACTIONS(937),
    [sym_module_identifier] = ACTIONS(714),
    [sym_comment] = ACTIONS(5),
  },
  [563] = {
    [sym__layout_semicolon] = ACTIONS(1332),
    [anon_sym_SEMI] = ACTIONS(1335),
    [anon_sym_DASH_GT] = ACTIONS(1335),
    [sym_comment] = ACTIONS(5),
  },
  [564] = {
    [anon_sym_COMMA] = ACTIONS(1338),
    [anon_sym_RPAREN] = ACTIONS(1340),
    [sym_comment] = ACTIONS(5),
  },
  [565] = {
    [sym_type] = STATE(672),
    [sym__generic_type_constructor] = STATE(410),
    [sym_tupling_constructor] = STATE(406),
    [sym_tuple] = STATE(410),
    [sym_list] = STATE(410),
    [sym_parenthesized_constructor] = STATE(410),
    [sym_variable_identifier] = STATE(412),
    [sym__type_constructors] = STATE(406),
    [sym_qualified_type_constructor] = STATE(413),
    [anon_sym_LPAREN] = ACTIONS(704),
    [anon_sym_LBRACK] = ACTIONS(708),
    [sym_unit_type] = ACTIONS(710),
    [sym_list_constructor] = ACTIONS(710),
    [sym_function_constructor] = ACTIONS(710),
    [sym__variable_pattern] = ACTIONS(481),
    [sym__constructor_pattern] = ACTIONS(937),
    [sym_module_identifier] = ACTIONS(714),
    [sym_comment] = ACTIONS(5),
  },
  [566] = {
    [anon_sym_EQ_GT] = ACTIONS(1342),
    [sym_comment] = ACTIONS(5),
  },
  [567] = {
    [anon_sym_COMMA] = ACTIONS(816),
    [anon_sym_RPAREN] = ACTIONS(1344),
    [sym_comment] = ACTIONS(5),
  },
  [568] = {
    [sym_type] = STATE(675),
    [sym__generic_type_constructor] = STATE(410),
    [sym_tupling_constructor] = STATE(406),
    [sym_tuple] = STATE(410),
    [sym_list] = STATE(410),
    [sym_parenthesized_constructor] = STATE(410),
    [sym_variable_identifier] = STATE(412),
    [sym__type_constructors] = STATE(406),
    [sym_qualified_type_constructor] = STATE(413),
    [anon_sym_LPAREN] = ACTIONS(704),
    [anon_sym_LBRACK] = ACTIONS(708),
    [sym_unit_type] = ACTIONS(710),
    [sym_list_constructor] = ACTIONS(710),
    [sym_function_constructor] = ACTIONS(710),
    [sym__variable_pattern] = ACTIONS(481),
    [sym__constructor_pattern] = ACTIONS(937),
    [sym_module_identifier] = ACTIONS(714),
    [sym_comment] = ACTIONS(5),
  },
  [569] = {
    [sym_variable_identifier] = STATE(665),
    [anon_sym_LPAREN] = ACTIONS(1098),
    [anon_sym_LBRACK] = ACTIONS(1098),
    [anon_sym_RBRACK] = ACTIONS(1098),
    [anon_sym_DASH_GT] = ACTIONS(1098),
    [sym_unit_type] = ACTIONS(1098),
    [sym_list_constructor] = ACTIONS(1098),
    [sym_function_constructor] = ACTIONS(1098),
    [sym__variable_pattern] = ACTIONS(716),
    [sym__constructor_pattern] = ACTIONS(1346),
    [sym_module_identifier] = ACTIONS(1346),
    [sym_comment] = ACTIONS(5),
  },
  [570] = {
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_DASH_GT] = ACTIONS(81),
    [sym_unit_type] = ACTIONS(81),
    [sym_list_constructor] = ACTIONS(81),
    [sym_function_constructor] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_module_identifier] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [571] = {
    [sym_constructor_identifier] = STATE(676),
    [sym__constructor_pattern] = ACTIONS(1074),
    [sym_module_identifier] = ACTIONS(1100),
    [sym_comment] = ACTIONS(5),
  },
  [572] = {
    [sym_variable_identifier] = STATE(557),
    [aux_sym__type_constructors_repeat1] = STATE(677),
    [anon_sym_LPAREN] = ACTIONS(1104),
    [anon_sym_LBRACK] = ACTIONS(1104),
    [anon_sym_RBRACK] = ACTIONS(1104),
    [anon_sym_DASH_GT] = ACTIONS(1104),
    [sym_unit_type] = ACTIONS(1104),
    [sym_list_constructor] = ACTIONS(1104),
    [sym_function_constructor] = ACTIONS(1104),
    [sym__variable_pattern] = ACTIONS(716),
    [sym__constructor_pattern] = ACTIONS(1348),
    [sym_module_identifier] = ACTIONS(1348),
    [sym_comment] = ACTIONS(5),
  },
  [573] = {
    [sym_constructor_identifier] = STATE(676),
    [sym__constructor_pattern] = ACTIONS(1074),
    [anon_sym_DOT] = ACTIONS(1350),
    [sym_comment] = ACTIONS(5),
  },
  [574] = {
    [sym_type] = STATE(672),
    [sym__generic_type_constructor] = STATE(418),
    [sym_tupling_constructor] = STATE(406),
    [sym_tuple] = STATE(418),
    [sym_list] = STATE(418),
    [sym_parenthesized_constructor] = STATE(418),
    [sym_variable_identifier] = STATE(419),
    [sym__type_constructors] = STATE(406),
    [sym_qualified_type_constructor] = STATE(413),
    [anon_sym_LPAREN] = ACTIONS(704),
    [anon_sym_LBRACK] = ACTIONS(708),
    [sym_unit_type] = ACTIONS(710),
    [sym_list_constructor] = ACTIONS(710),
    [sym_function_constructor] = ACTIONS(710),
    [sym__variable_pattern] = ACTIONS(716),
    [sym__constructor_pattern] = ACTIONS(718),
    [sym_module_identifier] = ACTIONS(720),
    [sym_comment] = ACTIONS(5),
  },
  [575] = {
    [sym_type] = STATE(675),
    [sym__generic_type_constructor] = STATE(418),
    [sym_tupling_constructor] = STATE(406),
    [sym_tuple] = STATE(418),
    [sym_list] = STATE(418),
    [sym_parenthesized_constructor] = STATE(418),
    [sym_variable_identifier] = STATE(419),
    [sym__type_constructors] = STATE(406),
    [sym_qualified_type_constructor] = STATE(413),
    [anon_sym_LPAREN] = ACTIONS(704),
    [anon_sym_LBRACK] = ACTIONS(708),
    [sym_unit_type] = ACTIONS(710),
    [sym_list_constructor] = ACTIONS(710),
    [sym_function_constructor] = ACTIONS(710),
    [sym__variable_pattern] = ACTIONS(716),
    [sym__constructor_pattern] = ACTIONS(718),
    [sym_module_identifier] = ACTIONS(720),
    [sym_comment] = ACTIONS(5),
  },
  [576] = {
    [sym__layout_semicolon] = ACTIONS(1352),
    [anon_sym_SEMI] = ACTIONS(1354),
    [anon_sym_DASH_GT] = ACTIONS(1354),
    [sym_comment] = ACTIONS(5),
  },
  [577] = {
    [anon_sym_LPAREN] = ACTIONS(1356),
    [anon_sym_LBRACK] = ACTIONS(1356),
    [anon_sym_RBRACK] = ACTIONS(1356),
    [sym_unit_type] = ACTIONS(1356),
    [sym_list_constructor] = ACTIONS(1356),
    [sym_function_constructor] = ACTIONS(1356),
    [sym__variable_pattern] = ACTIONS(1356),
    [sym__constructor_pattern] = ACTIONS(1358),
    [sym_module_identifier] = ACTIONS(1358),
    [sym_comment] = ACTIONS(5),
  },
  [578] = {
    [sym__layout_semicolon] = ACTIONS(1360),
    [anon_sym_SEMI] = ACTIONS(1362),
    [anon_sym_DASH_GT] = ACTIONS(1362),
    [sym__variable_pattern] = ACTIONS(1362),
    [sym_comment] = ACTIONS(5),
  },
  [579] = {
    [sym__constructor_pattern] = ACTIONS(1364),
    [anon_sym_DOT] = ACTIONS(1366),
    [sym_comment] = ACTIONS(5),
  },
  [580] = {
    [sym_variable_identifier] = STATE(422),
    [aux_sym__type_constructors_repeat1] = STATE(679),
    [sym__layout_semicolon] = ACTIONS(1368),
    [anon_sym_SEMI] = ACTIONS(1370),
    [anon_sym_DASH_GT] = ACTIONS(1370),
    [sym__variable_pattern] = ACTIONS(939),
    [sym_comment] = ACTIONS(5),
  },
  [581] = {
    [sym_variable_identifier] = STATE(578),
    [sym__layout_semicolon] = ACTIONS(1368),
    [anon_sym_SEMI] = ACTIONS(1370),
    [anon_sym_DASH_GT] = ACTIONS(1370),
    [sym__variable_pattern] = ACTIONS(939),
    [sym_comment] = ACTIONS(5),
  },
  [582] = {
    [sym_constructor_identifier] = STATE(681),
    [sym__constructor_pattern] = ACTIONS(730),
    [sym_module_identifier] = ACTIONS(1372),
    [sym_comment] = ACTIONS(5),
  },
  [583] = {
    [sym__layout_semicolon] = ACTIONS(1374),
    [anon_sym_SEMI] = ACTIONS(1376),
    [sym_comment] = ACTIONS(5),
  },
  [584] = {
    [sym__layout_semicolon] = ACTIONS(1378),
    [anon_sym_SEMI] = ACTIONS(1380),
    [sym_comment] = ACTIONS(5),
  },
  [585] = {
    [anon_sym_COMMA] = ACTIONS(1382),
    [anon_sym_RPAREN] = ACTIONS(1382),
    [sym_comment] = ACTIONS(5),
  },
  [586] = {
    [sym_export] = STATE(682),
    [sym__identifier] = STATE(249),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [587] = {
    [anon_sym_where] = ACTIONS(1384),
    [sym_comment] = ACTIONS(5),
  },
  [588] = {
    [anon_sym_RPAREN] = ACTIONS(1386),
    [sym_comment] = ACTIONS(5),
  },
  [589] = {
    [aux_sym_export_repeat1] = STATE(684),
    [anon_sym_COMMA] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(1386),
    [sym_comment] = ACTIONS(5),
  },
  [590] = {
    [sym__layout_close_brace] = ACTIONS(351),
    [anon_sym_import] = ACTIONS(353),
    [anon_sym_foreign] = ACTIONS(353),
    [anon_sym_default] = ACTIONS(353),
    [anon_sym_class] = ACTIONS(353),
    [anon_sym_instance] = ACTIONS(353),
    [anon_sym_infixl] = ACTIONS(353),
    [anon_sym_infixr] = ACTIONS(353),
    [anon_sym_infix] = ACTIONS(353),
    [anon_sym_data] = ACTIONS(353),
    [anon_sym_newtype] = ACTIONS(353),
    [anon_sym_type] = ACTIONS(353),
    [sym__variable_pattern] = ACTIONS(355),
    [sym__constructor_pattern] = ACTIONS(355),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(355),
    [anon_sym_SQUOTE] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [sym__integer_literal] = ACTIONS(353),
    [sym__octal_literal] = ACTIONS(353),
    [sym__hexidecimal_literal] = ACTIONS(353),
  },
  [591] = {
    [ts_builtin_sym_end] = ACTIONS(1388),
    [sym_comment] = ACTIONS(5),
  },
  [592] = {
    [sym__layout_semicolon] = ACTIONS(1390),
    [anon_sym_SEMI] = ACTIONS(1392),
    [sym_comment] = ACTIONS(5),
  },
  [593] = {
    [sym__layout_semicolon] = ACTIONS(1394),
    [anon_sym_SEMI] = ACTIONS(1396),
    [sym_comment] = ACTIONS(5),
  },
  [594] = {
    [anon_sym_RPAREN] = ACTIONS(1398),
    [sym_comment] = ACTIONS(5),
  },
  [595] = {
    [aux_sym_export_repeat1] = STATE(687),
    [anon_sym_COMMA] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(1398),
    [sym_comment] = ACTIONS(5),
  },
  [596] = {
    [anon_sym_LPAREN] = ACTIONS(1400),
    [anon_sym_COMMA] = ACTIONS(1402),
    [anon_sym_RPAREN] = ACTIONS(1402),
    [sym_comment] = ACTIONS(5),
  },
  [597] = {
    [sym__identifier] = STATE(689),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [598] = {
    [sym__layout_semicolon] = ACTIONS(1404),
    [anon_sym_SEMI] = ACTIONS(1406),
    [sym_comment] = ACTIONS(5),
  },
  [599] = {
    [sym__identifier] = STATE(691),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [anon_sym_DOT_DOT] = ACTIONS(1408),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [600] = {
    [anon_sym_COMMA] = ACTIONS(1142),
    [anon_sym_RPAREN] = ACTIONS(1410),
    [sym_comment] = ACTIONS(5),
  },
  [601] = {
    [sym__variable_pattern] = ACTIONS(632),
    [sym__constructor_pattern] = ACTIONS(634),
    [sym_comment] = ACTIONS(5),
  },
  [602] = {
    [sym__layout_semicolon] = ACTIONS(1412),
    [anon_sym_SEMI] = ACTIONS(1414),
    [sym_comment] = ACTIONS(5),
  },
  [603] = {
    [anon_sym_COMMA] = ACTIONS(1416),
    [anon_sym_RPAREN] = ACTIONS(1416),
    [sym_comment] = ACTIONS(5),
  },
  [604] = {
    [anon_sym_COMMA] = ACTIONS(1418),
    [anon_sym_RPAREN] = ACTIONS(1418),
    [sym_comment] = ACTIONS(5),
  },
  [605] = {
    [sym__constructor_pattern] = ACTIONS(1420),
    [sym_comment] = ACTIONS(5),
  },
  [606] = {
    [sym_label] = STATE(616),
    [sym__identifier] = STATE(402),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [607] = {
    [sym__layout_semicolon] = ACTIONS(1388),
    [anon_sym_SEMI] = ACTIONS(1422),
    [sym_comment] = ACTIONS(5),
  },
  [608] = {
    [anon_sym_RBRACE] = ACTIONS(1424),
    [anon_sym_COMMA] = ACTIONS(1424),
    [sym_comment] = ACTIONS(5),
  },
  [609] = {
    [anon_sym_COMMA] = ACTIONS(1426),
    [anon_sym_RPAREN] = ACTIONS(1426),
    [anon_sym_EQ] = ACTIONS(1426),
    [anon_sym_where] = ACTIONS(1426),
    [anon_sym_EQ_GT] = ACTIONS(1426),
    [sym_comment] = ACTIONS(5),
  },
  [610] = {
    [sym_field] = STATE(693),
    [sym_variable_identifier] = STATE(284),
    [sym__variable_pattern] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
  },
  [611] = {
    [anon_sym_COMMA] = ACTIONS(1428),
    [anon_sym_COLON_COLON] = ACTIONS(1428),
    [sym_comment] = ACTIONS(5),
  },
  [612] = {
    [sym__identifier] = STATE(287),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [613] = {
    [anon_sym_RBRACE] = ACTIONS(1430),
    [anon_sym_COMMA] = ACTIONS(1430),
    [sym_comment] = ACTIONS(5),
  },
  [614] = {
    [sym_variable_identifier] = STATE(694),
    [sym__variable_pattern] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
  },
  [615] = {
    [sym_strict] = STATE(695),
    [sym__identifier] = STATE(695),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [anon_sym_BANG] = ACTIONS(1178),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [616] = {
    [anon_sym_RBRACE] = ACTIONS(1432),
    [anon_sym_COMMA] = ACTIONS(1432),
    [anon_sym_RPAREN] = ACTIONS(1432),
    [anon_sym_EQ] = ACTIONS(1432),
    [anon_sym_where] = ACTIONS(1432),
    [anon_sym_EQ_GT] = ACTIONS(1432),
    [sym_comment] = ACTIONS(5),
  },
  [617] = {
    [sym__layout_semicolon] = ACTIONS(1434),
    [anon_sym_SEMI] = ACTIONS(1436),
    [sym_comment] = ACTIONS(5),
  },
  [618] = {
    [sym__layout_semicolon] = ACTIONS(1218),
    [anon_sym_SEMI] = ACTIONS(1172),
    [anon_sym_EQ] = ACTIONS(1172),
    [anon_sym_deriving] = ACTIONS(1172),
    [sym__constructor_pattern] = ACTIONS(1220),
    [sym_comment] = ACTIONS(5),
  },
  [619] = {
    [anon_sym_RBRACE] = ACTIONS(1438),
    [anon_sym_COMMA] = ACTIONS(1176),
    [sym_comment] = ACTIONS(5),
  },
  [620] = {
    [sym__layout_semicolon] = ACTIONS(1224),
    [anon_sym_SEMI] = ACTIONS(1184),
    [anon_sym_EQ] = ACTIONS(1184),
    [anon_sym_deriving] = ACTIONS(1184),
    [sym__constructor_pattern] = ACTIONS(1226),
    [sym_comment] = ACTIONS(5),
  },
  [621] = {
    [sym__layout_semicolon] = ACTIONS(598),
    [anon_sym_SEMI] = ACTIONS(600),
    [anon_sym_COMMA] = ACTIONS(600),
    [anon_sym_EQ] = ACTIONS(600),
    [anon_sym_deriving] = ACTIONS(600),
    [sym__constructor_pattern] = ACTIONS(602),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(600),
    [anon_sym_DQUOTE] = ACTIONS(600),
    [sym__integer_literal] = ACTIONS(600),
    [sym__octal_literal] = ACTIONS(600),
    [sym__hexidecimal_literal] = ACTIONS(600),
  },
  [622] = {
    [sym__layout_semicolon] = ACTIONS(630),
    [anon_sym_SEMI] = ACTIONS(632),
    [anon_sym_COMMA] = ACTIONS(632),
    [anon_sym_EQ] = ACTIONS(632),
    [anon_sym_deriving] = ACTIONS(632),
    [sym__constructor_pattern] = ACTIONS(634),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(634),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DQUOTE] = ACTIONS(632),
    [sym__integer_literal] = ACTIONS(632),
    [sym__octal_literal] = ACTIONS(632),
    [sym__hexidecimal_literal] = ACTIONS(632),
  },
  [623] = {
    [sym__layout_semicolon] = ACTIONS(1228),
    [anon_sym_SEMI] = ACTIONS(1190),
    [anon_sym_COMMA] = ACTIONS(1190),
    [anon_sym_EQ] = ACTIONS(1190),
    [anon_sym_deriving] = ACTIONS(1190),
    [sym__constructor_pattern] = ACTIONS(1230),
    [sym_comment] = ACTIONS(5),
  },
  [624] = {
    [anon_sym_EQ] = ACTIONS(1440),
    [sym_comment] = ACTIONS(5),
  },
  [625] = {
    [sym_label] = STATE(697),
    [sym__identifier] = STATE(624),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [626] = {
    [sym__layout_semicolon] = ACTIONS(1232),
    [anon_sym_SEMI] = ACTIONS(1192),
    [anon_sym_COMMA] = ACTIONS(1192),
    [anon_sym_EQ] = ACTIONS(1192),
    [anon_sym_deriving] = ACTIONS(1192),
    [sym__constructor_pattern] = ACTIONS(1234),
    [sym_comment] = ACTIONS(5),
  },
  [627] = {
    [sym__layout_semicolon] = ACTIONS(1442),
    [anon_sym_SEMI] = ACTIONS(1444),
    [sym_comment] = ACTIONS(5),
  },
  [628] = {
    [anon_sym_COMMA] = ACTIONS(810),
    [anon_sym_RPAREN] = ACTIONS(1446),
    [sym_comment] = ACTIONS(5),
  },
  [629] = {
    [sym__layout_semicolon] = ACTIONS(1448),
    [anon_sym_SEMI] = ACTIONS(1450),
    [anon_sym_PIPE] = ACTIONS(1450),
    [anon_sym_deriving] = ACTIONS(1450),
    [sym_comment] = ACTIONS(5),
  },
  [630] = {
    [sym__layout_semicolon] = ACTIONS(1452),
    [anon_sym_SEMI] = ACTIONS(1426),
    [anon_sym_EQ] = ACTIONS(1426),
    [anon_sym_EQ_GT] = ACTIONS(1426),
    [anon_sym_PIPE] = ACTIONS(1426),
    [anon_sym_deriving] = ACTIONS(1426),
    [sym__constructor_pattern] = ACTIONS(1454),
    [sym_comment] = ACTIONS(5),
  },
  [631] = {
    [sym__layout_semicolon] = ACTIONS(1456),
    [anon_sym_SEMI] = ACTIONS(1432),
    [anon_sym_COMMA] = ACTIONS(1432),
    [anon_sym_EQ] = ACTIONS(1432),
    [anon_sym_EQ_GT] = ACTIONS(1432),
    [anon_sym_PIPE] = ACTIONS(1432),
    [anon_sym_deriving] = ACTIONS(1432),
    [sym__constructor_pattern] = ACTIONS(1458),
    [sym_comment] = ACTIONS(5),
  },
  [632] = {
    [sym__layout_semicolon] = ACTIONS(1460),
    [anon_sym_SEMI] = ACTIONS(1462),
    [sym_comment] = ACTIONS(5),
  },
  [633] = {
    [anon_sym_EQ] = ACTIONS(1426),
    [sym_comment] = ACTIONS(5),
  },
  [634] = {
    [anon_sym_COMMA] = ACTIONS(1432),
    [anon_sym_EQ] = ACTIONS(1432),
    [sym_comment] = ACTIONS(5),
  },
  [635] = {
    [sym__layout_close_brace] = ACTIONS(1464),
    [anon_sym_do] = ACTIONS(1466),
    [sym__variable_pattern] = ACTIONS(1468),
    [sym__constructor_pattern] = ACTIONS(1468),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1468),
    [anon_sym_SQUOTE] = ACTIONS(1466),
    [anon_sym_DQUOTE] = ACTIONS(1466),
    [sym__integer_literal] = ACTIONS(1466),
    [sym__octal_literal] = ACTIONS(1466),
    [sym__hexidecimal_literal] = ACTIONS(1466),
  },
  [636] = {
    [sym__identifier] = STATE(699),
    [sym_variable_identifier] = STATE(639),
    [sym_constructor_identifier] = STATE(639),
    [sym__variable_pattern] = ACTIONS(939),
    [sym__constructor_pattern] = ACTIONS(730),
    [sym_comment] = ACTIONS(5),
  },
  [637] = {
    [sym__layout_semicolon] = ACTIONS(577),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_BANG] = ACTIONS(493),
    [sym__variable_pattern] = ACTIONS(493),
    [sym__constructor_pattern] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
  },
  [638] = {
    [sym__layout_semicolon] = ACTIONS(577),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_EQ] = ACTIONS(915),
    [anon_sym_BANG] = ACTIONS(493),
    [sym__variable_pattern] = ACTIONS(493),
    [sym__constructor_pattern] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
  },
  [639] = {
    [sym__layout_semicolon] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(173),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
  },
  [640] = {
    [sym_strict] = STATE(700),
    [sym__identifier] = STATE(700),
    [sym_variable_identifier] = STATE(639),
    [sym_constructor_identifier] = STATE(639),
    [sym__layout_semicolon] = ACTIONS(567),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_BANG] = ACTIONS(1268),
    [sym__variable_pattern] = ACTIONS(939),
    [sym__constructor_pattern] = ACTIONS(730),
    [sym_comment] = ACTIONS(5),
  },
  [641] = {
    [sym__layout_semicolon] = ACTIONS(1470),
    [anon_sym_SEMI] = ACTIONS(1472),
    [anon_sym_where] = ACTIONS(1472),
    [anon_sym_do] = ACTIONS(1472),
    [sym__variable_pattern] = ACTIONS(1474),
    [sym__constructor_pattern] = ACTIONS(1474),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1474),
    [anon_sym_SQUOTE] = ACTIONS(1472),
    [anon_sym_DQUOTE] = ACTIONS(1472),
    [sym__integer_literal] = ACTIONS(1472),
    [sym__octal_literal] = ACTIONS(1472),
    [sym__hexidecimal_literal] = ACTIONS(1472),
  },
  [642] = {
    [sym__layout_close_brace] = ACTIONS(1476),
    [anon_sym_do] = ACTIONS(1478),
    [sym__variable_pattern] = ACTIONS(1480),
    [sym__constructor_pattern] = ACTIONS(1480),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1480),
    [anon_sym_SQUOTE] = ACTIONS(1478),
    [anon_sym_DQUOTE] = ACTIONS(1478),
    [sym__integer_literal] = ACTIONS(1478),
    [sym__octal_literal] = ACTIONS(1478),
    [sym__hexidecimal_literal] = ACTIONS(1478),
  },
  [643] = {
    [anon_sym_RBRACE] = ACTIONS(1466),
    [anon_sym_do] = ACTIONS(1466),
    [sym__variable_pattern] = ACTIONS(1468),
    [sym__constructor_pattern] = ACTIONS(1468),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1468),
    [anon_sym_SQUOTE] = ACTIONS(1466),
    [anon_sym_DQUOTE] = ACTIONS(1466),
    [sym__integer_literal] = ACTIONS(1466),
    [sym__octal_literal] = ACTIONS(1466),
    [sym__hexidecimal_literal] = ACTIONS(1466),
  },
  [644] = {
    [anon_sym_RBRACE] = ACTIONS(1478),
    [anon_sym_do] = ACTIONS(1478),
    [sym__variable_pattern] = ACTIONS(1480),
    [sym__constructor_pattern] = ACTIONS(1480),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1480),
    [anon_sym_SQUOTE] = ACTIONS(1478),
    [anon_sym_DQUOTE] = ACTIONS(1478),
    [sym__integer_literal] = ACTIONS(1478),
    [sym__octal_literal] = ACTIONS(1478),
    [sym__hexidecimal_literal] = ACTIONS(1478),
  },
  [645] = {
    [sym__layout_semicolon] = ACTIONS(1218),
    [anon_sym_SEMI] = ACTIONS(1172),
    [anon_sym_where] = ACTIONS(1172),
    [anon_sym_do] = ACTIONS(1172),
    [sym__variable_pattern] = ACTIONS(1220),
    [sym__constructor_pattern] = ACTIONS(1220),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1220),
    [anon_sym_SQUOTE] = ACTIONS(1172),
    [anon_sym_DQUOTE] = ACTIONS(1172),
    [sym__integer_literal] = ACTIONS(1172),
    [sym__octal_literal] = ACTIONS(1172),
    [sym__hexidecimal_literal] = ACTIONS(1172),
  },
  [646] = {
    [anon_sym_RBRACE] = ACTIONS(1482),
    [anon_sym_COMMA] = ACTIONS(1176),
    [sym_comment] = ACTIONS(5),
  },
  [647] = {
    [sym__layout_semicolon] = ACTIONS(1224),
    [anon_sym_SEMI] = ACTIONS(1184),
    [anon_sym_where] = ACTIONS(1184),
    [anon_sym_do] = ACTIONS(1184),
    [sym__variable_pattern] = ACTIONS(1226),
    [sym__constructor_pattern] = ACTIONS(1226),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1226),
    [anon_sym_SQUOTE] = ACTIONS(1184),
    [anon_sym_DQUOTE] = ACTIONS(1184),
    [sym__integer_literal] = ACTIONS(1184),
    [sym__octal_literal] = ACTIONS(1184),
    [sym__hexidecimal_literal] = ACTIONS(1184),
  },
  [648] = {
    [sym__layout_semicolon] = ACTIONS(1228),
    [anon_sym_SEMI] = ACTIONS(1190),
    [anon_sym_COMMA] = ACTIONS(1190),
    [anon_sym_where] = ACTIONS(1190),
    [anon_sym_do] = ACTIONS(1190),
    [sym__variable_pattern] = ACTIONS(1230),
    [sym__constructor_pattern] = ACTIONS(1230),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1230),
    [anon_sym_SQUOTE] = ACTIONS(1190),
    [anon_sym_DQUOTE] = ACTIONS(1190),
    [sym__integer_literal] = ACTIONS(1190),
    [sym__octal_literal] = ACTIONS(1190),
    [sym__hexidecimal_literal] = ACTIONS(1190),
  },
  [649] = {
    [anon_sym_EQ] = ACTIONS(1001),
    [sym_comment] = ACTIONS(5),
  },
  [650] = {
    [sym_label] = STATE(702),
    [sym__identifier] = STATE(649),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [651] = {
    [sym__layout_semicolon] = ACTIONS(1232),
    [anon_sym_SEMI] = ACTIONS(1192),
    [anon_sym_COMMA] = ACTIONS(1192),
    [anon_sym_where] = ACTIONS(1192),
    [anon_sym_do] = ACTIONS(1192),
    [sym__variable_pattern] = ACTIONS(1234),
    [sym__constructor_pattern] = ACTIONS(1234),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1234),
    [anon_sym_SQUOTE] = ACTIONS(1192),
    [anon_sym_DQUOTE] = ACTIONS(1192),
    [sym__integer_literal] = ACTIONS(1192),
    [sym__octal_literal] = ACTIONS(1192),
    [sym__hexidecimal_literal] = ACTIONS(1192),
  },
  [652] = {
    [anon_sym_COMMA] = ACTIONS(1484),
    [anon_sym_RPAREN] = ACTIONS(1484),
    [sym_comment] = ACTIONS(5),
  },
  [653] = {
    [anon_sym_LPAREN] = ACTIONS(872),
    [anon_sym_TILDE] = ACTIONS(872),
    [anon_sym_LBRACK] = ACTIONS(872),
    [anon_sym_DASH] = ACTIONS(872),
    [anon_sym__] = ACTIONS(872),
    [sym_list_constructor] = ACTIONS(872),
    [sym__variable_pattern] = ACTIONS(1486),
    [sym__constructor_pattern] = ACTIONS(1486),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1486),
    [anon_sym_SQUOTE] = ACTIONS(872),
    [anon_sym_DQUOTE] = ACTIONS(872),
    [sym__integer_literal] = ACTIONS(872),
    [sym__octal_literal] = ACTIONS(872),
    [sym__hexidecimal_literal] = ACTIONS(872),
  },
  [654] = {
    [anon_sym_LPAREN] = ACTIONS(876),
    [anon_sym_TILDE] = ACTIONS(876),
    [anon_sym_LBRACK] = ACTIONS(876),
    [anon_sym_DASH] = ACTIONS(876),
    [anon_sym__] = ACTIONS(876),
    [anon_sym_COLON] = ACTIONS(876),
    [sym_list_constructor] = ACTIONS(876),
    [anon_sym_BANG] = ACTIONS(876),
    [sym__variable_pattern] = ACTIONS(1488),
    [sym__constructor_pattern] = ACTIONS(1488),
    [anon_sym_DOT] = ACTIONS(876),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1488),
    [anon_sym_SQUOTE] = ACTIONS(876),
    [anon_sym_DQUOTE] = ACTIONS(876),
    [anon_sym_POUND] = ACTIONS(876),
    [anon_sym_DOLLAR] = ACTIONS(876),
    [anon_sym_PERCENT] = ACTIONS(876),
    [anon_sym_AMP] = ACTIONS(876),
    [anon_sym_1] = ACTIONS(876),
    [anon_sym_PLUS] = ACTIONS(876),
    [anon_sym_SLASH] = ACTIONS(876),
    [anon_sym_LT] = ACTIONS(876),
    [anon_sym_GT] = ACTIONS(876),
    [anon_sym_QMARK] = ACTIONS(876),
    [anon_sym_CARET] = ACTIONS(876),
    [sym__integer_literal] = ACTIONS(876),
    [sym__octal_literal] = ACTIONS(876),
    [sym__hexidecimal_literal] = ACTIONS(876),
  },
  [655] = {
    [anon_sym_LPAREN] = ACTIONS(888),
    [anon_sym_TILDE] = ACTIONS(888),
    [anon_sym_LBRACK] = ACTIONS(888),
    [anon_sym_DASH] = ACTIONS(888),
    [anon_sym__] = ACTIONS(888),
    [sym_list_constructor] = ACTIONS(888),
    [anon_sym_BANG] = ACTIONS(888),
    [sym__variable_pattern] = ACTIONS(1490),
    [sym__constructor_pattern] = ACTIONS(1490),
    [anon_sym_DOT] = ACTIONS(888),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1490),
    [anon_sym_SQUOTE] = ACTIONS(888),
    [anon_sym_DQUOTE] = ACTIONS(888),
    [anon_sym_POUND] = ACTIONS(888),
    [anon_sym_DOLLAR] = ACTIONS(888),
    [anon_sym_PERCENT] = ACTIONS(888),
    [anon_sym_AMP] = ACTIONS(888),
    [anon_sym_1] = ACTIONS(888),
    [anon_sym_PLUS] = ACTIONS(888),
    [anon_sym_SLASH] = ACTIONS(888),
    [anon_sym_LT] = ACTIONS(888),
    [anon_sym_GT] = ACTIONS(888),
    [anon_sym_QMARK] = ACTIONS(888),
    [anon_sym_CARET] = ACTIONS(888),
    [sym__integer_literal] = ACTIONS(888),
    [sym__octal_literal] = ACTIONS(888),
    [sym__hexidecimal_literal] = ACTIONS(888),
  },
  [656] = {
    [sym__op] = STATE(389),
    [sym_variable_symbol] = STATE(390),
    [sym_constructor_symbol] = STATE(390),
    [sym__variable_symbol] = STATE(391),
    [anon_sym_COMMA] = ACTIONS(1492),
    [anon_sym_RPAREN] = ACTIONS(1492),
    [anon_sym_DASH] = ACTIONS(676),
    [anon_sym_BQUOTE] = ACTIONS(678),
    [anon_sym_COLON] = ACTIONS(680),
    [anon_sym_BANG] = ACTIONS(676),
    [anon_sym_DOT] = ACTIONS(676),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(676),
    [anon_sym_DOLLAR] = ACTIONS(676),
    [anon_sym_PERCENT] = ACTIONS(676),
    [anon_sym_AMP] = ACTIONS(676),
    [anon_sym_1] = ACTIONS(676),
    [anon_sym_PLUS] = ACTIONS(676),
    [anon_sym_SLASH] = ACTIONS(676),
    [anon_sym_LT] = ACTIONS(676),
    [anon_sym_GT] = ACTIONS(676),
    [anon_sym_QMARK] = ACTIONS(676),
    [anon_sym_CARET] = ACTIONS(676),
  },
  [657] = {
    [anon_sym_COMMA] = ACTIONS(1492),
    [anon_sym_RPAREN] = ACTIONS(1492),
    [sym_comment] = ACTIONS(5),
  },
  [658] = {
    [anon_sym_LPAREN] = ACTIONS(1320),
    [anon_sym_COMMA] = ACTIONS(1320),
    [anon_sym_RPAREN] = ACTIONS(1320),
    [anon_sym_LBRACK] = ACTIONS(1320),
    [anon_sym_RBRACK] = ACTIONS(1320),
    [anon_sym_DASH_GT] = ACTIONS(1320),
    [sym_unit_type] = ACTIONS(1320),
    [sym_list_constructor] = ACTIONS(1320),
    [sym_function_constructor] = ACTIONS(1320),
    [sym__variable_pattern] = ACTIONS(1320),
    [sym__constructor_pattern] = ACTIONS(1494),
    [sym_module_identifier] = ACTIONS(1494),
    [sym_comment] = ACTIONS(5),
  },
  [659] = {
    [anon_sym_COMMA] = ACTIONS(1322),
    [anon_sym_RPAREN] = ACTIONS(1496),
    [sym_comment] = ACTIONS(5),
  },
  [660] = {
    [anon_sym_LPAREN] = ACTIONS(1335),
    [anon_sym_COMMA] = ACTIONS(1335),
    [anon_sym_RPAREN] = ACTIONS(1335),
    [anon_sym_LBRACK] = ACTIONS(1335),
    [anon_sym_RBRACK] = ACTIONS(1335),
    [anon_sym_DASH_GT] = ACTIONS(1335),
    [sym_unit_type] = ACTIONS(1335),
    [sym_list_constructor] = ACTIONS(1335),
    [sym_function_constructor] = ACTIONS(1335),
    [sym__variable_pattern] = ACTIONS(1335),
    [sym__constructor_pattern] = ACTIONS(1498),
    [sym_module_identifier] = ACTIONS(1498),
    [sym_comment] = ACTIONS(5),
  },
  [661] = {
    [anon_sym_COMMA] = ACTIONS(1338),
    [anon_sym_RPAREN] = ACTIONS(1501),
    [sym_comment] = ACTIONS(5),
  },
  [662] = {
    [anon_sym_COMMA] = ACTIONS(1503),
    [anon_sym_RPAREN] = ACTIONS(1503),
    [sym_comment] = ACTIONS(5),
  },
  [663] = {
    [sym__layout_semicolon] = ACTIONS(1505),
    [anon_sym_SEMI] = ACTIONS(1507),
    [anon_sym_DASH_GT] = ACTIONS(1507),
    [sym_comment] = ACTIONS(5),
  },
  [664] = {
    [anon_sym_LPAREN] = ACTIONS(1354),
    [anon_sym_COMMA] = ACTIONS(1354),
    [anon_sym_RPAREN] = ACTIONS(1354),
    [anon_sym_LBRACK] = ACTIONS(1354),
    [anon_sym_RBRACK] = ACTIONS(1354),
    [anon_sym_DASH_GT] = ACTIONS(1354),
    [sym_unit_type] = ACTIONS(1354),
    [sym_list_constructor] = ACTIONS(1354),
    [sym_function_constructor] = ACTIONS(1354),
    [sym__variable_pattern] = ACTIONS(1354),
    [sym__constructor_pattern] = ACTIONS(1509),
    [sym_module_identifier] = ACTIONS(1509),
    [sym_comment] = ACTIONS(5),
  },
  [665] = {
    [anon_sym_LPAREN] = ACTIONS(1362),
    [anon_sym_COMMA] = ACTIONS(1362),
    [anon_sym_RPAREN] = ACTIONS(1362),
    [anon_sym_LBRACK] = ACTIONS(1362),
    [anon_sym_RBRACK] = ACTIONS(1362),
    [anon_sym_DASH_GT] = ACTIONS(1362),
    [sym_unit_type] = ACTIONS(1362),
    [sym_list_constructor] = ACTIONS(1362),
    [sym_function_constructor] = ACTIONS(1362),
    [sym__variable_pattern] = ACTIONS(1362),
    [sym__constructor_pattern] = ACTIONS(1511),
    [sym_module_identifier] = ACTIONS(1511),
    [sym_comment] = ACTIONS(5),
  },
  [666] = {
    [sym_variable_identifier] = STATE(557),
    [aux_sym__type_constructors_repeat1] = STATE(705),
    [anon_sym_COMMA] = ACTIONS(1370),
    [anon_sym_RPAREN] = ACTIONS(1370),
    [anon_sym_DASH_GT] = ACTIONS(1370),
    [sym__variable_pattern] = ACTIONS(275),
    [sym_comment] = ACTIONS(5),
  },
  [667] = {
    [sym_variable_identifier] = STATE(665),
    [anon_sym_COMMA] = ACTIONS(1370),
    [anon_sym_RPAREN] = ACTIONS(1370),
    [anon_sym_DASH_GT] = ACTIONS(1370),
    [sym__variable_pattern] = ACTIONS(275),
    [sym_comment] = ACTIONS(5),
  },
  [668] = {
    [sym_constructor_identifier] = STATE(706),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_module_identifier] = ACTIONS(1372),
    [sym_comment] = ACTIONS(5),
  },
  [669] = {
    [anon_sym_COMMA] = ACTIONS(1513),
    [anon_sym_RPAREN] = ACTIONS(1513),
    [sym_comment] = ACTIONS(5),
  },
  [670] = {
    [sym_type] = STATE(707),
    [sym__generic_type_constructor] = STATE(410),
    [sym_tupling_constructor] = STATE(406),
    [sym_tuple] = STATE(410),
    [sym_list] = STATE(410),
    [sym_parenthesized_constructor] = STATE(410),
    [sym_variable_identifier] = STATE(412),
    [sym__type_constructors] = STATE(406),
    [sym_qualified_type_constructor] = STATE(413),
    [anon_sym_LPAREN] = ACTIONS(704),
    [anon_sym_LBRACK] = ACTIONS(708),
    [sym_unit_type] = ACTIONS(710),
    [sym_list_constructor] = ACTIONS(710),
    [sym_function_constructor] = ACTIONS(710),
    [sym__variable_pattern] = ACTIONS(481),
    [sym__constructor_pattern] = ACTIONS(937),
    [sym_module_identifier] = ACTIONS(714),
    [sym_comment] = ACTIONS(5),
  },
  [671] = {
    [sym__layout_semicolon] = ACTIONS(1515),
    [anon_sym_SEMI] = ACTIONS(1517),
    [anon_sym_DASH_GT] = ACTIONS(1517),
    [sym_comment] = ACTIONS(5),
  },
  [672] = {
    [anon_sym_LPAREN] = ACTIONS(1376),
    [anon_sym_COMMA] = ACTIONS(1376),
    [anon_sym_RPAREN] = ACTIONS(1376),
    [anon_sym_LBRACK] = ACTIONS(1376),
    [anon_sym_RBRACK] = ACTIONS(1376),
    [sym_unit_type] = ACTIONS(1376),
    [sym_list_constructor] = ACTIONS(1376),
    [sym_function_constructor] = ACTIONS(1376),
    [sym__variable_pattern] = ACTIONS(1376),
    [sym__constructor_pattern] = ACTIONS(1519),
    [sym_module_identifier] = ACTIONS(1519),
    [sym_comment] = ACTIONS(5),
  },
  [673] = {
    [anon_sym_LPAREN] = ACTIONS(1521),
    [anon_sym_LBRACK] = ACTIONS(1521),
    [sym_unit_type] = ACTIONS(1521),
    [sym_list_constructor] = ACTIONS(1521),
    [sym_function_constructor] = ACTIONS(1521),
    [sym__variable_pattern] = ACTIONS(1521),
    [sym__constructor_pattern] = ACTIONS(1162),
    [sym_module_identifier] = ACTIONS(1162),
    [sym_comment] = ACTIONS(5),
  },
  [674] = {
    [anon_sym_EQ_GT] = ACTIONS(1523),
    [sym_comment] = ACTIONS(5),
  },
  [675] = {
    [anon_sym_LPAREN] = ACTIONS(1380),
    [anon_sym_COMMA] = ACTIONS(1380),
    [anon_sym_RPAREN] = ACTIONS(1380),
    [anon_sym_LBRACK] = ACTIONS(1380),
    [anon_sym_RBRACK] = ACTIONS(1380),
    [sym_unit_type] = ACTIONS(1380),
    [sym_list_constructor] = ACTIONS(1380),
    [sym_function_constructor] = ACTIONS(1380),
    [sym__variable_pattern] = ACTIONS(1380),
    [sym__constructor_pattern] = ACTIONS(1525),
    [sym_module_identifier] = ACTIONS(1525),
    [sym_comment] = ACTIONS(5),
  },
  [676] = {
    [sym_variable_identifier] = STATE(557),
    [aux_sym__type_constructors_repeat1] = STATE(709),
    [anon_sym_LPAREN] = ACTIONS(1370),
    [anon_sym_LBRACK] = ACTIONS(1370),
    [anon_sym_RBRACK] = ACTIONS(1370),
    [anon_sym_DASH_GT] = ACTIONS(1370),
    [sym_unit_type] = ACTIONS(1370),
    [sym_list_constructor] = ACTIONS(1370),
    [sym_function_constructor] = ACTIONS(1370),
    [sym__variable_pattern] = ACTIONS(716),
    [sym__constructor_pattern] = ACTIONS(1527),
    [sym_module_identifier] = ACTIONS(1527),
    [sym_comment] = ACTIONS(5),
  },
  [677] = {
    [sym_variable_identifier] = STATE(665),
    [anon_sym_LPAREN] = ACTIONS(1370),
    [anon_sym_LBRACK] = ACTIONS(1370),
    [anon_sym_RBRACK] = ACTIONS(1370),
    [anon_sym_DASH_GT] = ACTIONS(1370),
    [sym_unit_type] = ACTIONS(1370),
    [sym_list_constructor] = ACTIONS(1370),
    [sym_function_constructor] = ACTIONS(1370),
    [sym__variable_pattern] = ACTIONS(716),
    [sym__constructor_pattern] = ACTIONS(1527),
    [sym_module_identifier] = ACTIONS(1527),
    [sym_comment] = ACTIONS(5),
  },
  [678] = {
    [sym_constructor_identifier] = STATE(710),
    [sym__constructor_pattern] = ACTIONS(1074),
    [sym_module_identifier] = ACTIONS(1372),
    [sym_comment] = ACTIONS(5),
  },
  [679] = {
    [sym_variable_identifier] = STATE(578),
    [sym__layout_semicolon] = ACTIONS(1529),
    [anon_sym_SEMI] = ACTIONS(1531),
    [anon_sym_DASH_GT] = ACTIONS(1531),
    [sym__variable_pattern] = ACTIONS(939),
    [sym_comment] = ACTIONS(5),
  },
  [680] = {
    [sym__constructor_pattern] = ACTIONS(1533),
    [anon_sym_DOT] = ACTIONS(1535),
    [sym_comment] = ACTIONS(5),
  },
  [681] = {
    [sym_variable_identifier] = STATE(422),
    [aux_sym__type_constructors_repeat1] = STATE(711),
    [sym__layout_semicolon] = ACTIONS(1529),
    [anon_sym_SEMI] = ACTIONS(1531),
    [anon_sym_DASH_GT] = ACTIONS(1531),
    [sym__variable_pattern] = ACTIONS(939),
    [sym_comment] = ACTIONS(5),
  },
  [682] = {
    [anon_sym_COMMA] = ACTIONS(1537),
    [anon_sym_RPAREN] = ACTIONS(1537),
    [sym_comment] = ACTIONS(5),
  },
  [683] = {
    [anon_sym_COMMA] = ACTIONS(1539),
    [anon_sym_RPAREN] = ACTIONS(1539),
    [sym_comment] = ACTIONS(5),
  },
  [684] = {
    [anon_sym_COMMA] = ACTIONS(810),
    [anon_sym_RPAREN] = ACTIONS(1541),
    [sym_comment] = ACTIONS(5),
  },
  [685] = {
    [sym__layout_close_brace] = ACTIONS(756),
    [anon_sym_import] = ACTIONS(758),
    [anon_sym_foreign] = ACTIONS(758),
    [anon_sym_default] = ACTIONS(758),
    [anon_sym_class] = ACTIONS(758),
    [anon_sym_instance] = ACTIONS(758),
    [anon_sym_infixl] = ACTIONS(758),
    [anon_sym_infixr] = ACTIONS(758),
    [anon_sym_infix] = ACTIONS(758),
    [anon_sym_data] = ACTIONS(758),
    [anon_sym_newtype] = ACTIONS(758),
    [anon_sym_type] = ACTIONS(758),
    [sym__variable_pattern] = ACTIONS(760),
    [sym__constructor_pattern] = ACTIONS(760),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(760),
    [anon_sym_SQUOTE] = ACTIONS(758),
    [anon_sym_DQUOTE] = ACTIONS(758),
    [sym__integer_literal] = ACTIONS(758),
    [sym__octal_literal] = ACTIONS(758),
    [sym__hexidecimal_literal] = ACTIONS(758),
  },
  [686] = {
    [aux_sym_import_specification_repeat1] = STATE(714),
    [anon_sym_COMMA] = ACTIONS(792),
    [anon_sym_RPAREN] = ACTIONS(1543),
    [sym_comment] = ACTIONS(5),
  },
  [687] = {
    [anon_sym_COMMA] = ACTIONS(810),
    [anon_sym_RPAREN] = ACTIONS(1545),
    [sym_comment] = ACTIONS(5),
  },
  [688] = {
    [sym__identifier] = STATE(717),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [anon_sym_DOT_DOT] = ACTIONS(1547),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [689] = {
    [anon_sym_LPAREN] = ACTIONS(1549),
    [anon_sym_COMMA] = ACTIONS(1551),
    [anon_sym_RPAREN] = ACTIONS(1551),
    [sym_comment] = ACTIONS(5),
  },
  [690] = {
    [anon_sym_RPAREN] = ACTIONS(1545),
    [sym_comment] = ACTIONS(5),
  },
  [691] = {
    [aux_sym_export_repeat1] = STATE(719),
    [anon_sym_COMMA] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(1545),
    [sym_comment] = ACTIONS(5),
  },
  [692] = {
    [sym__layout_semicolon] = ACTIONS(1553),
    [anon_sym_SEMI] = ACTIONS(1555),
    [sym_comment] = ACTIONS(5),
  },
  [693] = {
    [anon_sym_RBRACE] = ACTIONS(1557),
    [anon_sym_COMMA] = ACTIONS(1557),
    [sym_comment] = ACTIONS(5),
  },
  [694] = {
    [anon_sym_COMMA] = ACTIONS(1559),
    [anon_sym_COLON_COLON] = ACTIONS(1559),
    [sym_comment] = ACTIONS(5),
  },
  [695] = {
    [anon_sym_RBRACE] = ACTIONS(1561),
    [anon_sym_COMMA] = ACTIONS(1561),
    [sym_comment] = ACTIONS(5),
  },
  [696] = {
    [sym__layout_semicolon] = ACTIONS(1452),
    [anon_sym_SEMI] = ACTIONS(1426),
    [anon_sym_EQ] = ACTIONS(1426),
    [anon_sym_deriving] = ACTIONS(1426),
    [sym__constructor_pattern] = ACTIONS(1454),
    [sym_comment] = ACTIONS(5),
  },
  [697] = {
    [sym__layout_semicolon] = ACTIONS(1456),
    [anon_sym_SEMI] = ACTIONS(1432),
    [anon_sym_COMMA] = ACTIONS(1432),
    [anon_sym_EQ] = ACTIONS(1432),
    [anon_sym_deriving] = ACTIONS(1432),
    [sym__constructor_pattern] = ACTIONS(1458),
    [sym_comment] = ACTIONS(5),
  },
  [698] = {
    [sym__layout_semicolon] = ACTIONS(1563),
    [anon_sym_SEMI] = ACTIONS(1565),
    [sym_comment] = ACTIONS(5),
  },
  [699] = {
    [sym__layout_semicolon] = ACTIONS(921),
    [anon_sym_SEMI] = ACTIONS(846),
    [anon_sym_BANG] = ACTIONS(846),
    [sym__variable_pattern] = ACTIONS(846),
    [sym__constructor_pattern] = ACTIONS(848),
    [sym_comment] = ACTIONS(5),
  },
  [700] = {
    [sym__layout_semicolon] = ACTIONS(929),
    [anon_sym_SEMI] = ACTIONS(858),
    [anon_sym_BANG] = ACTIONS(858),
    [sym__variable_pattern] = ACTIONS(858),
    [sym__constructor_pattern] = ACTIONS(860),
    [sym_comment] = ACTIONS(5),
  },
  [701] = {
    [sym__layout_semicolon] = ACTIONS(1452),
    [anon_sym_SEMI] = ACTIONS(1426),
    [anon_sym_where] = ACTIONS(1426),
    [anon_sym_do] = ACTIONS(1426),
    [sym__variable_pattern] = ACTIONS(1454),
    [sym__constructor_pattern] = ACTIONS(1454),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1454),
    [anon_sym_SQUOTE] = ACTIONS(1426),
    [anon_sym_DQUOTE] = ACTIONS(1426),
    [sym__integer_literal] = ACTIONS(1426),
    [sym__octal_literal] = ACTIONS(1426),
    [sym__hexidecimal_literal] = ACTIONS(1426),
  },
  [702] = {
    [sym__layout_semicolon] = ACTIONS(1456),
    [anon_sym_SEMI] = ACTIONS(1432),
    [anon_sym_COMMA] = ACTIONS(1432),
    [anon_sym_where] = ACTIONS(1432),
    [anon_sym_do] = ACTIONS(1432),
    [sym__variable_pattern] = ACTIONS(1458),
    [sym__constructor_pattern] = ACTIONS(1458),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1458),
    [anon_sym_SQUOTE] = ACTIONS(1432),
    [anon_sym_DQUOTE] = ACTIONS(1432),
    [sym__integer_literal] = ACTIONS(1432),
    [sym__octal_literal] = ACTIONS(1432),
    [sym__hexidecimal_literal] = ACTIONS(1432),
  },
  [703] = {
    [anon_sym_LPAREN] = ACTIONS(1507),
    [anon_sym_COMMA] = ACTIONS(1507),
    [anon_sym_RPAREN] = ACTIONS(1507),
    [anon_sym_LBRACK] = ACTIONS(1507),
    [anon_sym_RBRACK] = ACTIONS(1507),
    [anon_sym_DASH_GT] = ACTIONS(1507),
    [sym_unit_type] = ACTIONS(1507),
    [sym_list_constructor] = ACTIONS(1507),
    [sym_function_constructor] = ACTIONS(1507),
    [sym__variable_pattern] = ACTIONS(1507),
    [sym__constructor_pattern] = ACTIONS(1567),
    [sym_module_identifier] = ACTIONS(1567),
    [sym_comment] = ACTIONS(5),
  },
  [704] = {
    [anon_sym_LPAREN] = ACTIONS(1517),
    [anon_sym_COMMA] = ACTIONS(1517),
    [anon_sym_RPAREN] = ACTIONS(1517),
    [anon_sym_LBRACK] = ACTIONS(1517),
    [anon_sym_RBRACK] = ACTIONS(1517),
    [anon_sym_DASH_GT] = ACTIONS(1517),
    [sym_unit_type] = ACTIONS(1517),
    [sym_list_constructor] = ACTIONS(1517),
    [sym_function_constructor] = ACTIONS(1517),
    [sym__variable_pattern] = ACTIONS(1517),
    [sym__constructor_pattern] = ACTIONS(1569),
    [sym_module_identifier] = ACTIONS(1569),
    [sym_comment] = ACTIONS(5),
  },
  [705] = {
    [sym_variable_identifier] = STATE(665),
    [anon_sym_COMMA] = ACTIONS(1531),
    [anon_sym_RPAREN] = ACTIONS(1531),
    [anon_sym_DASH_GT] = ACTIONS(1531),
    [sym__variable_pattern] = ACTIONS(275),
    [sym_comment] = ACTIONS(5),
  },
  [706] = {
    [sym_variable_identifier] = STATE(557),
    [aux_sym__type_constructors_repeat1] = STATE(720),
    [anon_sym_COMMA] = ACTIONS(1531),
    [anon_sym_RPAREN] = ACTIONS(1531),
    [anon_sym_DASH_GT] = ACTIONS(1531),
    [sym__variable_pattern] = ACTIONS(275),
    [sym_comment] = ACTIONS(5),
  },
  [707] = {
    [anon_sym_COMMA] = ACTIONS(1571),
    [anon_sym_RPAREN] = ACTIONS(1571),
    [sym_comment] = ACTIONS(5),
  },
  [708] = {
    [anon_sym_LPAREN] = ACTIONS(1573),
    [anon_sym_LBRACK] = ACTIONS(1573),
    [sym_unit_type] = ACTIONS(1573),
    [sym_list_constructor] = ACTIONS(1573),
    [sym_function_constructor] = ACTIONS(1573),
    [sym__variable_pattern] = ACTIONS(1573),
    [sym__constructor_pattern] = ACTIONS(1420),
    [sym_module_identifier] = ACTIONS(1420),
    [sym_comment] = ACTIONS(5),
  },
  [709] = {
    [sym_variable_identifier] = STATE(665),
    [anon_sym_LPAREN] = ACTIONS(1531),
    [anon_sym_LBRACK] = ACTIONS(1531),
    [anon_sym_RBRACK] = ACTIONS(1531),
    [anon_sym_DASH_GT] = ACTIONS(1531),
    [sym_unit_type] = ACTIONS(1531),
    [sym_list_constructor] = ACTIONS(1531),
    [sym_function_constructor] = ACTIONS(1531),
    [sym__variable_pattern] = ACTIONS(716),
    [sym__constructor_pattern] = ACTIONS(1575),
    [sym_module_identifier] = ACTIONS(1575),
    [sym_comment] = ACTIONS(5),
  },
  [710] = {
    [sym_variable_identifier] = STATE(557),
    [aux_sym__type_constructors_repeat1] = STATE(721),
    [anon_sym_LPAREN] = ACTIONS(1531),
    [anon_sym_LBRACK] = ACTIONS(1531),
    [anon_sym_RBRACK] = ACTIONS(1531),
    [anon_sym_DASH_GT] = ACTIONS(1531),
    [sym_unit_type] = ACTIONS(1531),
    [sym_list_constructor] = ACTIONS(1531),
    [sym_function_constructor] = ACTIONS(1531),
    [sym__variable_pattern] = ACTIONS(716),
    [sym__constructor_pattern] = ACTIONS(1575),
    [sym_module_identifier] = ACTIONS(1575),
    [sym_comment] = ACTIONS(5),
  },
  [711] = {
    [sym_variable_identifier] = STATE(578),
    [sym__layout_semicolon] = ACTIONS(1577),
    [anon_sym_SEMI] = ACTIONS(1579),
    [anon_sym_DASH_GT] = ACTIONS(1579),
    [sym__variable_pattern] = ACTIONS(939),
    [sym_comment] = ACTIONS(5),
  },
  [712] = {
    [anon_sym_COMMA] = ACTIONS(1581),
    [anon_sym_RPAREN] = ACTIONS(1581),
    [sym_comment] = ACTIONS(5),
  },
  [713] = {
    [sym__layout_semicolon] = ACTIONS(1583),
    [anon_sym_SEMI] = ACTIONS(1585),
    [sym_comment] = ACTIONS(5),
  },
  [714] = {
    [anon_sym_COMMA] = ACTIONS(1142),
    [anon_sym_RPAREN] = ACTIONS(1587),
    [sym_comment] = ACTIONS(5),
  },
  [715] = {
    [aux_sym_import_specification_repeat1] = STATE(723),
    [anon_sym_COMMA] = ACTIONS(792),
    [anon_sym_RPAREN] = ACTIONS(1587),
    [sym_comment] = ACTIONS(5),
  },
  [716] = {
    [anon_sym_RPAREN] = ACTIONS(1589),
    [sym_comment] = ACTIONS(5),
  },
  [717] = {
    [aux_sym_export_repeat1] = STATE(725),
    [anon_sym_COMMA] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(1589),
    [sym_comment] = ACTIONS(5),
  },
  [718] = {
    [sym__identifier] = STATE(727),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(95),
    [anon_sym_DOT_DOT] = ACTIONS(1591),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [719] = {
    [anon_sym_COMMA] = ACTIONS(810),
    [anon_sym_RPAREN] = ACTIONS(1593),
    [sym_comment] = ACTIONS(5),
  },
  [720] = {
    [sym_variable_identifier] = STATE(665),
    [anon_sym_COMMA] = ACTIONS(1579),
    [anon_sym_RPAREN] = ACTIONS(1579),
    [anon_sym_DASH_GT] = ACTIONS(1579),
    [sym__variable_pattern] = ACTIONS(275),
    [sym_comment] = ACTIONS(5),
  },
  [721] = {
    [sym_variable_identifier] = STATE(665),
    [anon_sym_LPAREN] = ACTIONS(1579),
    [anon_sym_LBRACK] = ACTIONS(1579),
    [anon_sym_RBRACK] = ACTIONS(1579),
    [anon_sym_DASH_GT] = ACTIONS(1579),
    [sym_unit_type] = ACTIONS(1579),
    [sym_list_constructor] = ACTIONS(1579),
    [sym_function_constructor] = ACTIONS(1579),
    [sym__variable_pattern] = ACTIONS(716),
    [sym__constructor_pattern] = ACTIONS(1595),
    [sym_module_identifier] = ACTIONS(1595),
    [sym_comment] = ACTIONS(5),
  },
  [722] = {
    [sym__layout_semicolon] = ACTIONS(1597),
    [anon_sym_SEMI] = ACTIONS(1599),
    [sym_comment] = ACTIONS(5),
  },
  [723] = {
    [anon_sym_COMMA] = ACTIONS(1142),
    [anon_sym_RPAREN] = ACTIONS(1601),
    [sym_comment] = ACTIONS(5),
  },
  [724] = {
    [anon_sym_COMMA] = ACTIONS(1603),
    [anon_sym_RPAREN] = ACTIONS(1603),
    [sym_comment] = ACTIONS(5),
  },
  [725] = {
    [anon_sym_COMMA] = ACTIONS(810),
    [anon_sym_RPAREN] = ACTIONS(1605),
    [sym_comment] = ACTIONS(5),
  },
  [726] = {
    [anon_sym_RPAREN] = ACTIONS(1605),
    [sym_comment] = ACTIONS(5),
  },
  [727] = {
    [aux_sym_export_repeat1] = STATE(731),
    [anon_sym_COMMA] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(1605),
    [sym_comment] = ACTIONS(5),
  },
  [728] = {
    [aux_sym_import_specification_repeat1] = STATE(732),
    [anon_sym_COMMA] = ACTIONS(792),
    [anon_sym_RPAREN] = ACTIONS(1601),
    [sym_comment] = ACTIONS(5),
  },
  [729] = {
    [sym__layout_semicolon] = ACTIONS(1607),
    [anon_sym_SEMI] = ACTIONS(1609),
    [sym_comment] = ACTIONS(5),
  },
  [730] = {
    [anon_sym_COMMA] = ACTIONS(1611),
    [anon_sym_RPAREN] = ACTIONS(1611),
    [sym_comment] = ACTIONS(5),
  },
  [731] = {
    [anon_sym_COMMA] = ACTIONS(810),
    [anon_sym_RPAREN] = ACTIONS(1613),
    [sym_comment] = ACTIONS(5),
  },
  [732] = {
    [anon_sym_COMMA] = ACTIONS(1142),
    [anon_sym_RPAREN] = ACTIONS(1615),
    [sym_comment] = ACTIONS(5),
  },
  [733] = {
    [anon_sym_COMMA] = ACTIONS(1617),
    [anon_sym_RPAREN] = ACTIONS(1617),
    [sym_comment] = ACTIONS(5),
  },
  [734] = {
    [sym__layout_semicolon] = ACTIONS(1619),
    [anon_sym_SEMI] = ACTIONS(1621),
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
  [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_identifier, 1),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_identifier, 1),
  [77] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_identifier, 1),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_identifier, 1, .fragile = true),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_identifier, 1, .fragile = true),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(60),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [93] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
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
  [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [129] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_head, 1),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(86),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable, 1),
  [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable, 1),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(103),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign_import, 1),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_identifier, 1, .fragile = true),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1, .fragile = true),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(122),
  [219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(123),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable_symbol, 1),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable_symbol, 1),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 1),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [251] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1, .fragile = true),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [269] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(158),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_variable_identifier, 2),
  [289] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(188),
  [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(189),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(190),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(191),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(192),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(193),
  [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(194),
  [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(195),
  [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(196),
  [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(197),
  [341] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(198),
  [343] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(199),
  [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(200),
  [349] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(201),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
  [355] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 1),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 1),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(203),
  [365] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(204),
  [367] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(205),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_declaration, 2),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_declaration, 2),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [383] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(217),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(225),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_wildcard, 1),
  [391] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_wildcard, 1),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 1),
  [395] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 1),
  [397] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(228),
  [399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(229),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 1),
  [403] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 1),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_head, 2),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [419] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(237),
  [421] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(238),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(247),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(251),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 3),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(258),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_calling_convention, 1),
  [449] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_calling_convention, 1),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 3),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 3),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(267),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
  [467] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(276),
  [469] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(277),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [475] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 3),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 3),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [483] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(288),
  [485] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(289),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2, .fragile = true),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 1),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1, .fragile = true),
  [495] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1, .fragile = true),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat3, 1),
  [499] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat3, 1),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(293),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 3),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 3),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__constructor_symbol, 1),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__constructor_symbol, 1),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(300),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(306),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [547] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(309),
  [549] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(310),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(311),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(312),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2, .fragile = true),
  [569] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2, .fragile = true),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_labels, 1),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(330),
  [575] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_labels, 1),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1, .fragile = true),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat3, 1),
  [581] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1, .fragile = true), SHIFT(332),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
  [586] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1, .fragile = true), SHIFT(293),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(339),
  [591] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(340),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(345),
  [595] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1, .fragile = true), SHIFT(347),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [602] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [608] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(350),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(352),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(354),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [616] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [618] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [620] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(356),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(360),
  [626] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [628] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [634] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(363),
  [640] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(366),
  [642] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(367),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 2),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 2),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [652] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable, 1),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 1),
  [660] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(369),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(370),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
  [668] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(372),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(383),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(384),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(385),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(386),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(387),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(388),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 1),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(393),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_irrefutable_pattern, 2),
  [688] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_irrefutable_pattern, 2),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(394),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(395),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(396),
  [696] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(397),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(399),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 2),
  [702] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 2),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(403),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(404),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(405),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(406),
  [712] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(407),
  [714] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(408),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(414),
  [718] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(415),
  [720] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(416),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__generic_type_constructor, 1),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [730] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(424),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(425),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(428),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(430),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 2),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1, .alias_sequence_id = 2),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(431),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [756] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [758] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 3),
  [760] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [762] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [764] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(433),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(434),
  [768] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(436),
  [770] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [772] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(437),
  [774] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(437),
  [776] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_where, 2),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [780] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(441),
  [782] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [784] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [788] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(442),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(443),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(444),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_safety, 1),
  [798] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_safety, 1),
  [800] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(448),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 4),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 4),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 4),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 4),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(453),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(454),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(456),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(457),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(458),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(461),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [824] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(462),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(462),
  [830] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_where, 2),
  [832] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(465),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(466),
  [836] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(468),
  [838] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(469),
  [840] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat2, 1),
  [842] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat2, 1),
  [844] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(471),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [848] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [850] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(473),
  [852] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(474),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(477),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 2),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [860] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat3, 2),
  [864] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat3, 2),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 4),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 4),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [884] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [886] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [894] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [896] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(485),
  [898] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(486),
  [900] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(488),
  [902] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1, .fragile = true), SHIFT(490),
  [905] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [907] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [911] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [913] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(495),
  [915] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(332),
  [917] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(496),
  [919] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(498),
  [921] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [923] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_labels, 2),
  [925] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(501),
  [927] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_labels, 2),
  [929] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [931] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat3, 2),
  [933] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [935] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [937] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(505),
  [939] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(421),
  [941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [943] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [945] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(506),
  [947] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(508),
  [949] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(511),
  [951] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [953] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [955] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [957] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [959] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(513),
  [961] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [963] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(514),
  [965] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [967] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [969] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [971] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [973] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(515),
  [975] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [977] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(516),
  [979] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(517),
  [981] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(518),
  [983] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(517),
  [985] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [987] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [989] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [991] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [993] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(526),
  [995] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(527),
  [997] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
  [999] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(531),
  [1001] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(533),
  [1003] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 3),
  [1005] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 3),
  [1007] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [1009] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 2),
  [1011] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [1013] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_pattern, 3),
  [1015] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_pattern, 3),
  [1017] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable_symbol, 1),
  [1019] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(540),
  [1021] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [1023] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [1025] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [1027] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(547),
  [1029] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(548),
  [1031] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list_pattern, 3),
  [1033] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list_pattern, 3),
  [1035] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_as_pattern, 3),
  [1037] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_as_pattern, 3),
  [1039] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label_pattern, 3),
  [1041] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_label_pattern, 3),
  [1043] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(549),
  [1045] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(459),
  [1047] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(551),
  [1049] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(553),
  [1051] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(554),
  [1053] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [1055] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_identifier, 1, .fragile = true), REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [1058] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(559),
  [1060] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(562),
  [1062] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(563),
  [1064] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(565),
  [1066] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(566),
  [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(568),
  [1070] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [1072] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [1074] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(570),
  [1076] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(571),
  [1078] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 1),
  [1080] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 1),
  [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(574),
  [1084] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [1086] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(575),
  [1088] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 2),
  [1090] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(576),
  [1092] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__type_constructors_repeat1, 1),
  [1094] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__type_constructors_repeat1, 1),
  [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [1098] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [1100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(579),
  [1102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [1104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [1106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(582),
  [1108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [1112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [1114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [1116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(586),
  [1118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(587),
  [1120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(588),
  [1122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declarations, 2),
  [1124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(590),
  [1126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(590),
  [1128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(591),
  [1130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(591),
  [1132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [1134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [1136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(594),
  [1138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [1142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(597),
  [1144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(598),
  [1146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(599),
  [1148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(601),
  [1150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 5),
  [1152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 5),
  [1154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [1156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 5),
  [1158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 5),
  [1160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [1162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [1164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(605),
  [1166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declarations, 2),
  [1168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(607),
  [1170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(607),
  [1172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [1174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(609),
  [1176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(610),
  [1178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(612),
  [1180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(614),
  [1182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(615),
  [1184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 4),
  [1186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat2, 2),
  [1188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat2, 2),
  [1190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 2),
  [1192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label, 3),
  [1194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [1200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [1202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(618),
  [1204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(620),
  [1206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(621),
  [1208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(622),
  [1210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(625),
  [1212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(627),
  [1214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [1220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [1222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(630),
  [1224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 4),
  [1226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 4),
  [1228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_labels_repeat1, 2),
  [1230] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_labels_repeat1, 2),
  [1232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_label, 3),
  [1234] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_label, 3),
  [1236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [1238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [1240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(633),
  [1242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(347),
  [1244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [1246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [1248] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [1250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [1252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [1254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [1256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [1258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(635),
  [1260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(635),
  [1262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [1264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [1266] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [1268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(636),
  [1270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(641),
  [1272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(643),
  [1274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(643),
  [1276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(641),
  [1278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(645),
  [1280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(647),
  [1282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(650),
  [1284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(652),
  [1286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_pattern_repeat1, 2),
  [1288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(653),
  [1290] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__constructor_symbol, 1),
  [1292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [1294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [1296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 3),
  [1298] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [1300] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [1302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple_pattern, 4),
  [1304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple_pattern, 4),
  [1306] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label_pattern, 4),
  [1308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_label_pattern, 4),
  [1310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(606),
  [1312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(658),
  [1314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(660),
  [1316] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 1),
  [1318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1320] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 3),
  [1322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(662),
  [1324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(663),
  [1326] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(664),
  [1328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__type_constructors_repeat1, 1),
  [1330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(668),
  [1332] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1335] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(670),
  [1340] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(671),
  [1342] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(673),
  [1344] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(674),
  [1346] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [1348] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [1350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(678),
  [1352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1354] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
  [1356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 2),
  [1358] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 2),
  [1360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__type_constructors_repeat1, 2),
  [1362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__type_constructors_repeat1, 2),
  [1364] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1366] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1370] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1372] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(680),
  [1374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3),
  [1378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 2),
  [1380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3, .alias_sequence_id = 2),
  [1382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [1384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [1386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(683),
  [1388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declarations, 3),
  [1390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(685),
  [1392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(685),
  [1394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [1396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [1398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(686),
  [1400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(688),
  [1402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [1404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [1406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [1408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(690),
  [1410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(692),
  [1412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 6),
  [1414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 6),
  [1416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [1418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [1420] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [1422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declarations, 3),
  [1424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [1426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [1428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [1430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [1432] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 3),
  [1434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [1436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [1438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(696),
  [1440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(490),
  [1442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [1444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [1446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(698),
  [1448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1450] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1454] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_labels_repeat1, 3),
  [1458] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_labels_repeat1, 3),
  [1460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [1462] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [1464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [1466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [1468] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [1470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [1472] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [1474] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [1476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [1478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [1480] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [1482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(701),
  [1484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_negative_literal, 4),
  [1486] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [1488] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [1490] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [1492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_pattern_repeat1, 3),
  [1494] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1496] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(703),
  [1498] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(704),
  [1503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 2),
  [1505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 4),
  [1509] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1511] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__type_constructors_repeat1, 2),
  [1513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [1515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 4),
  [1519] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [1523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(708),
  [1525] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 2),
  [1527] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1533] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [1539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [1541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(712),
  [1543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(713),
  [1545] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(715),
  [1547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(716),
  [1549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(718),
  [1551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [1553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [1555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [1557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [1559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [1561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [1563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [1565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [1567] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1569] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 3),
  [1573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [1575] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1581] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [1583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [1585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [1587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(722),
  [1589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(724),
  [1591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(726),
  [1593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(728),
  [1595] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [1599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [1601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(729),
  [1603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [1605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(730),
  [1607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [1609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [1611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [1613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(733),
  [1615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(734),
  [1617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [1619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
