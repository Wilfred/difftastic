#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 590
#define SYMBOL_COUNT 241
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
  sym_irrefutable_pattern = 143,
  sym_list_pattern = 144,
  sym_tuple_pattern = 145,
  sym_parenthesized_pattern = 146,
  sym__pattern = 147,
  sym_negative_literal = 148,
  sym_general_constructor = 149,
  sym_as_pattern = 150,
  sym_labels = 151,
  sym_label = 152,
  sym_wildcard = 153,
  sym__variable = 154,
  sym_qualified_variable_identifier = 155,
  sym__expression = 156,
  sym_foreign = 157,
  sym_foreign_import = 158,
  sym_calling_convention = 159,
  sym_safety = 160,
  sym_default = 161,
  sym_do_expression = 162,
  sym_statement_list = 163,
  sym__statement = 164,
  sym_type_class = 165,
  sym_general_declarations = 166,
  sym_type_class_instance = 167,
  sym__general_declaration = 168,
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
  aux_sym_general_declarations_repeat1 = 225,
  aux_sym_fixity_repeat1 = 226,
  aux_sym_variable_symbol_repeat1 = 227,
  aux_sym_constructor_symbol_repeat1 = 228,
  aux_sym_tupling_constructor_repeat1 = 229,
  aux_sym_tuple_repeat1 = 230,
  aux_sym_list_repeat1 = 231,
  aux_sym_context_repeat1 = 232,
  aux_sym_constructors_repeat1 = 233,
  aux_sym_constructor_repeat1 = 234,
  aux_sym_field_repeat1 = 235,
  aux_sym_qualified_type_constructor_repeat1 = 236,
  aux_sym_string_repeat1 = 237,
  aux_sym__escape_repeat1 = 238,
  aux_sym__escape_repeat2 = 239,
  aux_sym_fields_repeat1 = 240,
  alias_sym_type_constructor = 241,
  alias_sym_type_variable = 242,
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
  [aux_sym_tuple_pattern_repeat1] = "tuple_pattern_repeat1",
  [aux_sym_general_constructor_repeat1] = "general_constructor_repeat1",
  [aux_sym_labels_repeat1] = "labels_repeat1",
  [aux_sym_statement_list_repeat1] = "statement_list_repeat1",
  [aux_sym_type_class_repeat1] = "type_class_repeat1",
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
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
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
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
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
      if (lookahead == ']')
        ADVANCE(160);
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
      if (lookahead == ']')
        ADVANCE(75);
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
      if (lookahead == ']')
        ADVANCE(160);
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
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(477);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '~')
        ADVANCE(171);
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
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(473);
      if (lookahead == '_')
        ADVANCE(474);
      if (lookahead == '~')
        ADVANCE(86);
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
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(477);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '~')
        ADVANCE(171);
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
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(517);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '~')
        ADVANCE(171);
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
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(515);
      if (lookahead == '_')
        ADVANCE(474);
      if (lookahead == '~')
        ADVANCE(86);
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
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(517);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '~')
        ADVANCE(171);
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
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(527);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '~')
        ADVANCE(171);
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
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(525);
      if (lookahead == '_')
        ADVANCE(474);
      if (lookahead == '~')
        ADVANCE(86);
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
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(527);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '~')
        ADVANCE(171);
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
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(607);
      if (lookahead == ']')
        ADVANCE(160);
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
      if (lookahead == '~')
        ADVANCE(171);
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
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(605);
      if (lookahead == ']')
        ADVANCE(75);
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
      if (lookahead == '~')
        ADVANCE(86);
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
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(607);
      if (lookahead == ']')
        ADVANCE(160);
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
      if (lookahead == '~')
        ADVANCE(171);
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
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(787);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '~')
        ADVANCE(171);
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
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(785);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(474);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(86);
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
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(787);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '~')
        ADVANCE(171);
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
        ADVANCE(792);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(793);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(788);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(794);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 789:
      if (lookahead == '\n')
        ADVANCE(789);
      if (lookahead == '\r')
        ADVANCE(789);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(790);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(789);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(791);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(791);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(791);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 792:
      if (lookahead == '\n')
        ADVANCE(789);
      if (lookahead == '\r')
        ADVANCE(792);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(793);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(788);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(794);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 793:
      if (lookahead == 'n')
        SKIP(788);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(794);
      if (lookahead == '.')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(794);
      END_STATE();
    case 795:
      if (lookahead == '\n')
        ADVANCE(796);
      if (lookahead == '\r')
        ADVANCE(808);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(809);
      if (lookahead == 's')
        ADVANCE(810);
      if (lookahead == 'u')
        ADVANCE(814);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(795);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 796:
      if (lookahead == '\n')
        ADVANCE(796);
      if (lookahead == '\r')
        ADVANCE(796);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(797);
      if (lookahead == 's')
        ADVANCE(798);
      if (lookahead == 'u')
        ADVANCE(802);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(796);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 801:
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
    case 802:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'a')
        ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'f')
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 807:
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
    case 808:
      if (lookahead == '\n')
        ADVANCE(796);
      if (lookahead == '\r')
        ADVANCE(808);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(809);
      if (lookahead == 's')
        ADVANCE(810);
      if (lookahead == 'u')
        ADVANCE(814);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(795);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 809:
      if (lookahead == 'n')
        SKIP(795);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'a')
        ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'f')
        ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'n')
        ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 's')
        ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'a')
        ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'f')
        ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 820:
      if (lookahead == '\n')
        ADVANCE(821);
      if (lookahead == '\r')
        ADVANCE(823);
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
        SKIP(824);
      if (lookahead == 'w')
        ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(820);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 821:
      if (lookahead == '\n')
        ADVANCE(821);
      if (lookahead == '\r')
        ADVANCE(821);
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
        ADVANCE(822);
      if (lookahead == 'w')
        ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(821);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
        SKIP(824);
      if (lookahead == 'w')
        ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(820);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
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
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(829);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(825);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
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
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(827);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(826);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
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
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(829);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(825);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
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
      if (lookahead == '\\')
        SKIP(834);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(830);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
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
        ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(831);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
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
      if (lookahead == '\\')
        SKIP(834);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(830);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
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
      if (lookahead == '|')
        ADVANCE(169);
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
      if (lookahead == '|')
        ADVANCE(84);
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
      if (lookahead == '|')
        ADVANCE(169);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(849);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(845);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 846:
      if (lookahead == '\n')
        ADVANCE(846);
      if (lookahead == '\r')
        ADVANCE(846);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(847);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(846);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(849);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(845);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
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
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(854);
      if (lookahead == 'd')
        ADVANCE(626);
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
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(852);
      if (lookahead == 'd')
        ADVANCE(616);
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
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(854);
      if (lookahead == 'd')
        ADVANCE(626);
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
        ADVANCE(476);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(864);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(860);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(794);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
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
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(862);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(861);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(791);
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
        ADVANCE(476);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(864);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(860);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(794);
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
        SKIP(869);
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
        SKIP(865);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
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
        ADVANCE(39);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(867);
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
        ADVANCE(866);
      if (('_' <= lookahead && lookahead <= 'z'))
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
        SKIP(869);
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
        SKIP(865);
      if (('_' <= lookahead && lookahead <= 'z'))
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
        SKIP(874);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(870);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(794);
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
        ADVANCE(872);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(871);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(791);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
        SKIP(874);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(870);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(794);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
        SKIP(875);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      END_STATE();
    case 876:
      if (lookahead == '\n')
        ADVANCE(876);
      if (lookahead == '\r')
        ADVANCE(876);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(877);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(876);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_BSLASH);
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
        SKIP(875);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      END_STATE();
    case 879:
      if (lookahead == '\n')
        ADVANCE(880);
      if (lookahead == '\r')
        ADVANCE(883);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(884);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(885);
      END_STATE();
    case 880:
      if (lookahead == '\n')
        ADVANCE(880);
      if (lookahead == '\r')
        ADVANCE(880);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(881);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(882);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 883:
      if (lookahead == '\n')
        ADVANCE(880);
      if (lookahead == '\r')
        ADVANCE(883);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(884);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(885);
      END_STATE();
    case 884:
      if (lookahead == 'n')
        SKIP(879);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 886:
      if (lookahead == '\n')
        ADVANCE(887);
      if (lookahead == '\r')
        ADVANCE(890);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(891);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(886);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(892);
      END_STATE();
    case 887:
      if (lookahead == '\n')
        ADVANCE(887);
      if (lookahead == '\r')
        ADVANCE(887);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(888);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(889);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 888:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(887);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 890:
      if (lookahead == '\n')
        ADVANCE(887);
      if (lookahead == '\r')
        ADVANCE(890);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(891);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(886);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(892);
      END_STATE();
    case 891:
      if (lookahead == 'n')
        SKIP(886);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 893:
      if (lookahead == '\n')
        ADVANCE(894);
      if (lookahead == '\r')
        ADVANCE(896);
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
        SKIP(897);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(893);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 894:
      if (lookahead == '\n')
        ADVANCE(894);
      if (lookahead == '\r')
        ADVANCE(894);
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
        ADVANCE(895);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(894);
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
        SKIP(897);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(893);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
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
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(902);
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
        SKIP(898);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 899:
      if (lookahead == '\n')
        ADVANCE(899);
      if (lookahead == '\r')
        ADVANCE(899);
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
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(900);
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
        ADVANCE(899);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('_' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(902);
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
        SKIP(898);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('_' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(907);
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
        SKIP(903);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 904:
      if (lookahead == '\n')
        ADVANCE(904);
      if (lookahead == '\r')
        ADVANCE(904);
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
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(905);
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
        ADVANCE(904);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(907);
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
        SKIP(903);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
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
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(912);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(908);
      END_STATE();
    case 909:
      if (lookahead == '\n')
        ADVANCE(909);
      if (lookahead == '\r')
        ADVANCE(909);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(910);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(909);
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
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(912);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(908);
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
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(917);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(913);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 914:
      if (lookahead == '\n')
        ADVANCE(914);
      if (lookahead == '\r')
        ADVANCE(914);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(472);
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
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(917);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(913);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
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
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(922);
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
        SKIP(918);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 919:
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == '\r')
        ADVANCE(919);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(920);
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
        ADVANCE(919);
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
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(922);
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
        SKIP(918);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 922:
      if (lookahead == 'n')
        SKIP(918);
      END_STATE();
    case 923:
      if (lookahead == '\n')
        ADVANCE(924);
      if (lookahead == '\r')
        ADVANCE(926);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(927);
      if (lookahead == 'h')
        ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(923);
      END_STATE();
    case 924:
      if (lookahead == '\n')
        ADVANCE(924);
      if (lookahead == '\r')
        ADVANCE(924);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(925);
      if (lookahead == 'h')
        ADVANCE(543);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(924);
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
      if (lookahead == '\n')
        ADVANCE(924);
      if (lookahead == '\r')
        ADVANCE(926);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(927);
      if (lookahead == 'h')
        ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(923);
      END_STATE();
    case 927:
      if (lookahead == 'n')
        SKIP(923);
      END_STATE();
    case 928:
      if (lookahead == '\n')
        ADVANCE(929);
      if (lookahead == '\r')
        ADVANCE(933);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(934);
      if (lookahead == 'i')
        ADVANCE(935);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(928);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 929:
      if (lookahead == '\n')
        ADVANCE(929);
      if (lookahead == '\r')
        ADVANCE(929);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(930);
      if (lookahead == 'i')
        ADVANCE(931);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(929);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 930:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(929);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 932:
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
    case 933:
      if (lookahead == '\n')
        ADVANCE(929);
      if (lookahead == '\r')
        ADVANCE(933);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(934);
      if (lookahead == 'i')
        ADVANCE(935);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(928);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 934:
      if (lookahead == 'n')
        SKIP(928);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'n')
        ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 936:
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
    case 937:
      if (lookahead == '\n')
        ADVANCE(938);
      if (lookahead == '\r')
        ADVANCE(940);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(941);
      if (lookahead == 'i')
        ADVANCE(935);
      if (lookahead == '}')
        ADVANCE(170);
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
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(939);
      if (lookahead == 'i')
        ADVANCE(931);
      if (lookahead == '}')
        ADVANCE(85);
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
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(941);
      if (lookahead == 'i')
        ADVANCE(935);
      if (lookahead == '}')
        ADVANCE(170);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(946);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(942);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 943:
      if (lookahead == '\n')
        ADVANCE(943);
      if (lookahead == '\r')
        ADVANCE(943);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(944);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(943);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(946);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(942);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 946:
      if (lookahead == 'n')
        SKIP(942);
      END_STATE();
    case 947:
      if (lookahead == '\n')
        ADVANCE(948);
      if (lookahead == '\r')
        ADVANCE(950);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(951);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(947);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 948:
      if (lookahead == '\n')
        ADVANCE(948);
      if (lookahead == '\r')
        ADVANCE(948);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(949);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(948);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 949:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(948);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 950:
      if (lookahead == '\n')
        ADVANCE(948);
      if (lookahead == '\r')
        ADVANCE(950);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(951);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(947);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 951:
      if (lookahead == 'n')
        SKIP(947);
      END_STATE();
    case 952:
      if (lookahead == '\t')
        ADVANCE(501);
      if (lookahead == '\n')
        ADVANCE(953);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(958);
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
    case 953:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(954);
      if (lookahead == '\n')
        ADVANCE(953);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(955);
      if (lookahead == ' ')
        ADVANCE(956);
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
        ADVANCE(957);
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
    case 954:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(954);
      if (lookahead == '\n')
        ADVANCE(953);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(955);
      if (lookahead == ' ')
        ADVANCE(956);
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
        ADVANCE(957);
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
    case 955:
      if (lookahead == '\t')
        ADVANCE(954);
      if (lookahead == '\n')
        ADVANCE(953);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(955);
      if (lookahead == ' ')
        ADVANCE(956);
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
        ADVANCE(957);
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
    case 956:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(954);
      if (lookahead == '\n')
        ADVANCE(953);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(955);
      if (lookahead == ' ')
        ADVANCE(956);
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
        ADVANCE(957);
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
    case 957:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(955);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 958:
      if (lookahead == '\t')
        ADVANCE(501);
      if (lookahead == '\n')
        ADVANCE(953);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(958);
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
    case 959:
      if (lookahead == '\n')
        ADVANCE(960);
      if (lookahead == '\r')
        ADVANCE(962);
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
        SKIP(963);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(959);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(794);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 960:
      if (lookahead == '\n')
        ADVANCE(960);
      if (lookahead == '\r')
        ADVANCE(960);
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
        ADVANCE(961);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(960);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(791);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 961:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(960);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 962:
      if (lookahead == '\n')
        ADVANCE(960);
      if (lookahead == '\r')
        ADVANCE(962);
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
        SKIP(963);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(959);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(794);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 963:
      if (lookahead == 'n')
        SKIP(959);
      END_STATE();
    case 964:
      if (lookahead == '\n')
        ADVANCE(965);
      if (lookahead == '\r')
        ADVANCE(967);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(968);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(964);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 965:
      if (lookahead == '\n')
        ADVANCE(965);
      if (lookahead == '\r')
        ADVANCE(965);
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
        ADVANCE(966);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(965);
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
    case 966:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(965);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 967:
      if (lookahead == '\n')
        ADVANCE(965);
      if (lookahead == '\r')
        ADVANCE(967);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(968);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(964);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 968:
      if (lookahead == 'n')
        SKIP(964);
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
  [87] = {.lex_state = 513},
  [88] = {.lex_state = 513},
  [89] = {.lex_state = 603},
  [90] = {.lex_state = 603},
  [91] = {.lex_state = 603},
  [92] = {.lex_state = 783},
  [93] = {.lex_state = 603},
  [94] = {.lex_state = 489},
  [95] = {.lex_state = 500},
  [96] = {.lex_state = 783},
  [97] = {.lex_state = 181},
  [98] = {.lex_state = 181},
  [99] = {.lex_state = 603},
  [100] = {.lex_state = 181},
  [101] = {.lex_state = 603},
  [102] = {.lex_state = 783},
  [103] = {.lex_state = 783},
  [104] = {.lex_state = 788},
  [105] = {.lex_state = 508, .external_lex_state = 3},
  [106] = {.lex_state = 456, .external_lex_state = 2},
  [107] = {.lex_state = 559},
  [108] = {.lex_state = 351},
  [109] = {.lex_state = 538, .external_lex_state = 3},
  [110] = {.lex_state = 559},
  [111] = {.lex_state = 326},
  [112] = {.lex_state = 181},
  [113] = {.lex_state = 508, .external_lex_state = 3},
  [114] = {.lex_state = 795},
  [115] = {.lex_state = 795},
  [116] = {.lex_state = 508, .external_lex_state = 3},
  [117] = {.lex_state = 181},
  [118] = {.lex_state = 578},
  [119] = {.lex_state = 508, .external_lex_state = 3},
  [120] = {.lex_state = 461},
  [121] = {.lex_state = 508, .external_lex_state = 3},
  [122] = {.lex_state = 566, .external_lex_state = 4},
  [123] = {.lex_state = 566, .external_lex_state = 4},
  [124] = {.lex_state = 508, .external_lex_state = 3},
  [125] = {.lex_state = 573},
  [126] = {.lex_state = 573},
  [127] = {.lex_state = 181},
  [128] = {.lex_state = 461},
  [129] = {.lex_state = 578},
  [130] = {.lex_state = 181},
  [131] = {.lex_state = 456, .external_lex_state = 2},
  [132] = {.lex_state = 461},
  [133] = {.lex_state = 820},
  [134] = {.lex_state = 820},
  [135] = {.lex_state = 578},
  [136] = {.lex_state = 578},
  [137] = {.lex_state = 456, .external_lex_state = 2},
  [138] = {.lex_state = 578},
  [139] = {.lex_state = 351},
  [140] = {.lex_state = 598, .external_lex_state = 3},
  [141] = {.lex_state = 598, .external_lex_state = 3},
  [142] = {.lex_state = 598, .external_lex_state = 3},
  [143] = {.lex_state = 351},
  [144] = {.lex_state = 608, .external_lex_state = 3},
  [145] = {.lex_state = 608, .external_lex_state = 3},
  [146] = {.lex_state = 593, .external_lex_state = 3},
  [147] = {.lex_state = 593, .external_lex_state = 3},
  [148] = {.lex_state = 634, .external_lex_state = 3},
  [149] = {.lex_state = 825, .external_lex_state = 3},
  [150] = {.lex_state = 830, .external_lex_state = 3},
  [151] = {.lex_state = 559},
  [152] = {.lex_state = 835, .external_lex_state = 3},
  [153] = {.lex_state = 840, .external_lex_state = 3},
  [154] = {.lex_state = 508, .external_lex_state = 3},
  [155] = {.lex_state = 845, .external_lex_state = 3},
  [156] = {.lex_state = 850, .external_lex_state = 3},
  [157] = {.lex_state = 855, .external_lex_state = 3},
  [158] = {.lex_state = 825, .external_lex_state = 3},
  [159] = {.lex_state = 181},
  [160] = {.lex_state = 181},
  [161] = {.lex_state = 860},
  [162] = {.lex_state = 865},
  [163] = {.lex_state = 461},
  [164] = {.lex_state = 788},
  [165] = {.lex_state = 461},
  [166] = {.lex_state = 870},
  [167] = {.lex_state = 484, .external_lex_state = 3},
  [168] = {.lex_state = 181},
  [169] = {.lex_state = 181},
  [170] = {.lex_state = 875},
  [171] = {.lex_state = 879},
  [172] = {.lex_state = 886},
  [173] = {.lex_state = 181},
  [174] = {.lex_state = 500},
  [175] = {.lex_state = 500},
  [176] = {.lex_state = 875},
  [177] = {.lex_state = 879},
  [178] = {.lex_state = 886},
  [179] = {.lex_state = 500},
  [180] = {.lex_state = 500},
  [181] = {.lex_state = 484, .external_lex_state = 3},
  [182] = {.lex_state = 893, .external_lex_state = 3},
  [183] = {.lex_state = 893, .external_lex_state = 3},
  [184] = {.lex_state = 484, .external_lex_state = 3},
  [185] = {.lex_state = 484, .external_lex_state = 3},
  [186] = {.lex_state = 484, .external_lex_state = 3},
  [187] = {.lex_state = 513},
  [188] = {.lex_state = 181},
  [189] = {.lex_state = 898},
  [190] = {.lex_state = 351},
  [191] = {.lex_state = 181},
  [192] = {.lex_state = 181},
  [193] = {.lex_state = 181},
  [194] = {.lex_state = 903},
  [195] = {.lex_state = 603},
  [196] = {.lex_state = 513},
  [197] = {.lex_state = 326},
  [198] = {.lex_state = 181},
  [199] = {.lex_state = 865},
  [200] = {.lex_state = 181},
  [201] = {.lex_state = 181},
  [202] = {.lex_state = 603},
  [203] = {.lex_state = 500},
  [204] = {.lex_state = 513},
  [205] = {.lex_state = 559},
  [206] = {.lex_state = 461},
  [207] = {.lex_state = 783},
  [208] = {.lex_state = 788},
  [209] = {.lex_state = 788},
  [210] = {.lex_state = 908, .external_lex_state = 3},
  [211] = {.lex_state = 913, .external_lex_state = 3},
  [212] = {.lex_state = 181},
  [213] = {.lex_state = 508, .external_lex_state = 3},
  [214] = {.lex_state = 908, .external_lex_state = 3},
  [215] = {.lex_state = 788},
  [216] = {.lex_state = 351},
  [217] = {.lex_state = 908, .external_lex_state = 3},
  [218] = {.lex_state = 461},
  [219] = {.lex_state = 908, .external_lex_state = 3},
  [220] = {.lex_state = 533},
  [221] = {.lex_state = 918, .external_lex_state = 4},
  [222] = {.lex_state = 533},
  [223] = {.lex_state = 181},
  [224] = {.lex_state = 351},
  [225] = {.lex_state = 181},
  [226] = {.lex_state = 181},
  [227] = {.lex_state = 456, .external_lex_state = 2},
  [228] = {.lex_state = 326},
  [229] = {.lex_state = 508, .external_lex_state = 3},
  [230] = {.lex_state = 508, .external_lex_state = 3},
  [231] = {.lex_state = 181},
  [232] = {.lex_state = 923, .external_lex_state = 3},
  [233] = {.lex_state = 559},
  [234] = {.lex_state = 484},
  [235] = {.lex_state = 500},
  [236] = {.lex_state = 484},
  [237] = {.lex_state = 508, .external_lex_state = 3},
  [238] = {.lex_state = 181},
  [239] = {.lex_state = 484},
  [240] = {.lex_state = 484},
  [241] = {.lex_state = 508, .external_lex_state = 3},
  [242] = {.lex_state = 181},
  [243] = {.lex_state = 566, .external_lex_state = 4},
  [244] = {.lex_state = 508, .external_lex_state = 3},
  [245] = {.lex_state = 566, .external_lex_state = 4},
  [246] = {.lex_state = 573},
  [247] = {.lex_state = 573},
  [248] = {.lex_state = 181},
  [249] = {.lex_state = 351},
  [250] = {.lex_state = 181},
  [251] = {.lex_state = 351},
  [252] = {.lex_state = 456, .external_lex_state = 2},
  [253] = {.lex_state = 578},
  [254] = {.lex_state = 578},
  [255] = {.lex_state = 928, .external_lex_state = 4},
  [256] = {.lex_state = 937},
  [257] = {.lex_state = 508, .external_lex_state = 3},
  [258] = {.lex_state = 461},
  [259] = {.lex_state = 578},
  [260] = {.lex_state = 456, .external_lex_state = 2},
  [261] = {.lex_state = 578},
  [262] = {.lex_state = 508, .external_lex_state = 3},
  [263] = {.lex_state = 608, .external_lex_state = 3},
  [264] = {.lex_state = 598, .external_lex_state = 3},
  [265] = {.lex_state = 608, .external_lex_state = 3},
  [266] = {.lex_state = 351},
  [267] = {.lex_state = 608, .external_lex_state = 3},
  [268] = {.lex_state = 593, .external_lex_state = 3},
  [269] = {.lex_state = 830, .external_lex_state = 3},
  [270] = {.lex_state = 835, .external_lex_state = 3},
  [271] = {.lex_state = 508, .external_lex_state = 3},
  [272] = {.lex_state = 825, .external_lex_state = 3},
  [273] = {.lex_state = 825, .external_lex_state = 3},
  [274] = {.lex_state = 484},
  [275] = {.lex_state = 508, .external_lex_state = 3},
  [276] = {.lex_state = 181},
  [277] = {.lex_state = 840, .external_lex_state = 3},
  [278] = {.lex_state = 461},
  [279] = {.lex_state = 484},
  [280] = {.lex_state = 942, .external_lex_state = 3},
  [281] = {.lex_state = 942, .external_lex_state = 3},
  [282] = {.lex_state = 840, .external_lex_state = 3},
  [283] = {.lex_state = 942, .external_lex_state = 3},
  [284] = {.lex_state = 825, .external_lex_state = 3},
  [285] = {.lex_state = 181},
  [286] = {.lex_state = 835, .external_lex_state = 3},
  [287] = {.lex_state = 559},
  [288] = {.lex_state = 870},
  [289] = {.lex_state = 788},
  [290] = {.lex_state = 947, .external_lex_state = 3},
  [291] = {.lex_state = 508, .external_lex_state = 3},
  [292] = {.lex_state = 181},
  [293] = {.lex_state = 181},
  [294] = {.lex_state = 879},
  [295] = {.lex_state = 879},
  [296] = {.lex_state = 886},
  [297] = {.lex_state = 886},
  [298] = {.lex_state = 500},
  [299] = {.lex_state = 500},
  [300] = {.lex_state = 500},
  [301] = {.lex_state = 500},
  [302] = {.lex_state = 952},
  [303] = {.lex_state = 952},
  [304] = {.lex_state = 484, .external_lex_state = 3},
  [305] = {.lex_state = 484, .external_lex_state = 3},
  [306] = {.lex_state = 484, .external_lex_state = 3},
  [307] = {.lex_state = 181},
  [308] = {.lex_state = 783},
  [309] = {.lex_state = 603},
  [310] = {.lex_state = 783},
  [311] = {.lex_state = 484},
  [312] = {.lex_state = 783},
  [313] = {.lex_state = 783},
  [314] = {.lex_state = 783},
  [315] = {.lex_state = 783},
  [316] = {.lex_state = 181},
  [317] = {.lex_state = 513},
  [318] = {.lex_state = 903},
  [319] = {.lex_state = 489},
  [320] = {.lex_state = 903},
  [321] = {.lex_state = 903},
  [322] = {.lex_state = 903},
  [323] = {.lex_state = 903},
  [324] = {.lex_state = 603},
  [325] = {.lex_state = 513},
  [326] = {.lex_state = 603},
  [327] = {.lex_state = 603},
  [328] = {.lex_state = 603},
  [329] = {.lex_state = 603},
  [330] = {.lex_state = 181},
  [331] = {.lex_state = 181},
  [332] = {.lex_state = 181},
  [333] = {.lex_state = 788},
  [334] = {.lex_state = 181},
  [335] = {.lex_state = 788},
  [336] = {.lex_state = 959},
  [337] = {.lex_state = 559},
  [338] = {.lex_state = 181},
  [339] = {.lex_state = 181},
  [340] = {.lex_state = 559},
  [341] = {.lex_state = 181},
  [342] = {.lex_state = 559},
  [343] = {.lex_state = 959},
  [344] = {.lex_state = 959},
  [345] = {.lex_state = 181},
  [346] = {.lex_state = 788},
  [347] = {.lex_state = 788},
  [348] = {.lex_state = 788},
  [349] = {.lex_state = 788},
  [350] = {.lex_state = 947, .external_lex_state = 3},
  [351] = {.lex_state = 947, .external_lex_state = 3},
  [352] = {.lex_state = 788},
  [353] = {.lex_state = 947, .external_lex_state = 3},
  [354] = {.lex_state = 181},
  [355] = {.lex_state = 788},
  [356] = {.lex_state = 508, .external_lex_state = 3},
  [357] = {.lex_state = 788},
  [358] = {.lex_state = 788},
  [359] = {.lex_state = 181},
  [360] = {.lex_state = 508, .external_lex_state = 3},
  [361] = {.lex_state = 918, .external_lex_state = 4},
  [362] = {.lex_state = 533},
  [363] = {.lex_state = 484},
  [364] = {.lex_state = 351},
  [365] = {.lex_state = 181},
  [366] = {.lex_state = 559},
  [367] = {.lex_state = 181},
  [368] = {.lex_state = 923, .external_lex_state = 3},
  [369] = {.lex_state = 559},
  [370] = {.lex_state = 484},
  [371] = {.lex_state = 508, .external_lex_state = 3},
  [372] = {.lex_state = 181},
  [373] = {.lex_state = 508, .external_lex_state = 3},
  [374] = {.lex_state = 181},
  [375] = {.lex_state = 964},
  [376] = {.lex_state = 500},
  [377] = {.lex_state = 508, .external_lex_state = 3},
  [378] = {.lex_state = 484},
  [379] = {.lex_state = 181},
  [380] = {.lex_state = 484},
  [381] = {.lex_state = 508, .external_lex_state = 3},
  [382] = {.lex_state = 181},
  [383] = {.lex_state = 181},
  [384] = {.lex_state = 181},
  [385] = {.lex_state = 351},
  [386] = {.lex_state = 508, .external_lex_state = 3},
  [387] = {.lex_state = 456, .external_lex_state = 2},
  [388] = {.lex_state = 508, .external_lex_state = 3},
  [389] = {.lex_state = 508, .external_lex_state = 3},
  [390] = {.lex_state = 928, .external_lex_state = 4},
  [391] = {.lex_state = 508, .external_lex_state = 3},
  [392] = {.lex_state = 937},
  [393] = {.lex_state = 351},
  [394] = {.lex_state = 508, .external_lex_state = 3},
  [395] = {.lex_state = 456, .external_lex_state = 2},
  [396] = {.lex_state = 608, .external_lex_state = 3},
  [397] = {.lex_state = 835, .external_lex_state = 3},
  [398] = {.lex_state = 508, .external_lex_state = 3},
  [399] = {.lex_state = 181},
  [400] = {.lex_state = 840, .external_lex_state = 3},
  [401] = {.lex_state = 181},
  [402] = {.lex_state = 181},
  [403] = {.lex_state = 181},
  [404] = {.lex_state = 942, .external_lex_state = 3},
  [405] = {.lex_state = 942, .external_lex_state = 3},
  [406] = {.lex_state = 835, .external_lex_state = 3},
  [407] = {.lex_state = 508, .external_lex_state = 3},
  [408] = {.lex_state = 835, .external_lex_state = 3},
  [409] = {.lex_state = 879},
  [410] = {.lex_state = 886},
  [411] = {.lex_state = 500},
  [412] = {.lex_state = 952},
  [413] = {.lex_state = 484, .external_lex_state = 3},
  [414] = {.lex_state = 181},
  [415] = {.lex_state = 351},
  [416] = {.lex_state = 181},
  [417] = {.lex_state = 351},
  [418] = {.lex_state = 783},
  [419] = {.lex_state = 783},
  [420] = {.lex_state = 783},
  [421] = {.lex_state = 351},
  [422] = {.lex_state = 181},
  [423] = {.lex_state = 783},
  [424] = {.lex_state = 783},
  [425] = {.lex_state = 783},
  [426] = {.lex_state = 603},
  [427] = {.lex_state = 181},
  [428] = {.lex_state = 903},
  [429] = {.lex_state = 603},
  [430] = {.lex_state = 484},
  [431] = {.lex_state = 181},
  [432] = {.lex_state = 181},
  [433] = {.lex_state = 181},
  [434] = {.lex_state = 181},
  [435] = {.lex_state = 181},
  [436] = {.lex_state = 908, .external_lex_state = 3},
  [437] = {.lex_state = 181},
  [438] = {.lex_state = 788},
  [439] = {.lex_state = 959},
  [440] = {.lex_state = 788},
  [441] = {.lex_state = 959},
  [442] = {.lex_state = 181},
  [443] = {.lex_state = 788},
  [444] = {.lex_state = 908, .external_lex_state = 3},
  [445] = {.lex_state = 181},
  [446] = {.lex_state = 788},
  [447] = {.lex_state = 351},
  [448] = {.lex_state = 181},
  [449] = {.lex_state = 788},
  [450] = {.lex_state = 788},
  [451] = {.lex_state = 788},
  [452] = {.lex_state = 181},
  [453] = {.lex_state = 788},
  [454] = {.lex_state = 788},
  [455] = {.lex_state = 908, .external_lex_state = 3},
  [456] = {.lex_state = 788},
  [457] = {.lex_state = 947, .external_lex_state = 3},
  [458] = {.lex_state = 181},
  [459] = {.lex_state = 947, .external_lex_state = 3},
  [460] = {.lex_state = 947, .external_lex_state = 3},
  [461] = {.lex_state = 788},
  [462] = {.lex_state = 508, .external_lex_state = 3},
  [463] = {.lex_state = 508, .external_lex_state = 3},
  [464] = {.lex_state = 918, .external_lex_state = 4},
  [465] = {.lex_state = 181},
  [466] = {.lex_state = 508, .external_lex_state = 3},
  [467] = {.lex_state = 181},
  [468] = {.lex_state = 484},
  [469] = {.lex_state = 351},
  [470] = {.lex_state = 181},
  [471] = {.lex_state = 181},
  [472] = {.lex_state = 508, .external_lex_state = 3},
  [473] = {.lex_state = 181},
  [474] = {.lex_state = 181},
  [475] = {.lex_state = 181},
  [476] = {.lex_state = 484},
  [477] = {.lex_state = 508, .external_lex_state = 3},
  [478] = {.lex_state = 559},
  [479] = {.lex_state = 181},
  [480] = {.lex_state = 964},
  [481] = {.lex_state = 508, .external_lex_state = 3},
  [482] = {.lex_state = 181},
  [483] = {.lex_state = 181},
  [484] = {.lex_state = 181},
  [485] = {.lex_state = 508, .external_lex_state = 3},
  [486] = {.lex_state = 928, .external_lex_state = 4},
  [487] = {.lex_state = 508, .external_lex_state = 3},
  [488] = {.lex_state = 508, .external_lex_state = 3},
  [489] = {.lex_state = 937},
  [490] = {.lex_state = 508, .external_lex_state = 3},
  [491] = {.lex_state = 508, .external_lex_state = 3},
  [492] = {.lex_state = 508, .external_lex_state = 3},
  [493] = {.lex_state = 508, .external_lex_state = 3},
  [494] = {.lex_state = 181},
  [495] = {.lex_state = 840, .external_lex_state = 3},
  [496] = {.lex_state = 840, .external_lex_state = 3},
  [497] = {.lex_state = 461},
  [498] = {.lex_state = 181},
  [499] = {.lex_state = 461},
  [500] = {.lex_state = 559},
  [501] = {.lex_state = 181},
  [502] = {.lex_state = 508, .external_lex_state = 3},
  [503] = {.lex_state = 181},
  [504] = {.lex_state = 783},
  [505] = {.lex_state = 783},
  [506] = {.lex_state = 783},
  [507] = {.lex_state = 351},
  [508] = {.lex_state = 181},
  [509] = {.lex_state = 903},
  [510] = {.lex_state = 181},
  [511] = {.lex_state = 484},
  [512] = {.lex_state = 181},
  [513] = {.lex_state = 959},
  [514] = {.lex_state = 181},
  [515] = {.lex_state = 959},
  [516] = {.lex_state = 181},
  [517] = {.lex_state = 181},
  [518] = {.lex_state = 908, .external_lex_state = 3},
  [519] = {.lex_state = 959},
  [520] = {.lex_state = 959},
  [521] = {.lex_state = 959},
  [522] = {.lex_state = 788},
  [523] = {.lex_state = 181},
  [524] = {.lex_state = 788},
  [525] = {.lex_state = 908, .external_lex_state = 3},
  [526] = {.lex_state = 959},
  [527] = {.lex_state = 788},
  [528] = {.lex_state = 351},
  [529] = {.lex_state = 959},
  [530] = {.lex_state = 788},
  [531] = {.lex_state = 947, .external_lex_state = 3},
  [532] = {.lex_state = 181},
  [533] = {.lex_state = 947, .external_lex_state = 3},
  [534] = {.lex_state = 918, .external_lex_state = 4},
  [535] = {.lex_state = 181},
  [536] = {.lex_state = 181},
  [537] = {.lex_state = 181},
  [538] = {.lex_state = 181},
  [539] = {.lex_state = 181},
  [540] = {.lex_state = 559},
  [541] = {.lex_state = 181},
  [542] = {.lex_state = 181},
  [543] = {.lex_state = 181},
  [544] = {.lex_state = 508, .external_lex_state = 3},
  [545] = {.lex_state = 928, .external_lex_state = 4},
  [546] = {.lex_state = 937},
  [547] = {.lex_state = 508, .external_lex_state = 3},
  [548] = {.lex_state = 181},
  [549] = {.lex_state = 840, .external_lex_state = 3},
  [550] = {.lex_state = 461},
  [551] = {.lex_state = 181},
  [552] = {.lex_state = 484},
  [553] = {.lex_state = 181},
  [554] = {.lex_state = 461},
  [555] = {.lex_state = 559},
  [556] = {.lex_state = 181},
  [557] = {.lex_state = 959},
  [558] = {.lex_state = 959},
  [559] = {.lex_state = 959},
  [560] = {.lex_state = 959},
  [561] = {.lex_state = 181},
  [562] = {.lex_state = 788},
  [563] = {.lex_state = 947, .external_lex_state = 3},
  [564] = {.lex_state = 181},
  [565] = {.lex_state = 508, .external_lex_state = 3},
  [566] = {.lex_state = 181},
  [567] = {.lex_state = 181},
  [568] = {.lex_state = 181},
  [569] = {.lex_state = 181},
  [570] = {.lex_state = 559},
  [571] = {.lex_state = 181},
  [572] = {.lex_state = 181},
  [573] = {.lex_state = 181},
  [574] = {.lex_state = 181},
  [575] = {.lex_state = 181},
  [576] = {.lex_state = 959},
  [577] = {.lex_state = 508, .external_lex_state = 3},
  [578] = {.lex_state = 181},
  [579] = {.lex_state = 181},
  [580] = {.lex_state = 181},
  [581] = {.lex_state = 181},
  [582] = {.lex_state = 181},
  [583] = {.lex_state = 181},
  [584] = {.lex_state = 508, .external_lex_state = 3},
  [585] = {.lex_state = 181},
  [586] = {.lex_state = 181},
  [587] = {.lex_state = 181},
  [588] = {.lex_state = 181},
  [589] = {.lex_state = 508, .external_lex_state = 3},
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
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym_list_constructor] = ACTIONS(79),
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
    [anon_sym_TILDE] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
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
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
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
    [sym__function_pattern] = STATE(96),
    [sym_irrefutable_pattern] = STATE(90),
    [sym_list_pattern] = STATE(90),
    [sym_tuple_pattern] = STATE(90),
    [sym_parenthesized_pattern] = STATE(90),
    [sym_as_pattern] = STATE(90),
    [sym_wildcard] = STATE(90),
    [sym__variable] = STATE(97),
    [sym_qualified_variable_identifier] = STATE(98),
    [sym__literal] = STATE(90),
    [sym__identifier] = STATE(99),
    [sym_simple_type] = STATE(100),
    [sym_variable_identifier] = STATE(101),
    [sym_constructor_identifier] = STATE(102),
    [sym_integer] = STATE(93),
    [sym_char] = STATE(93),
    [sym_string] = STATE(93),
    [aux_sym_function_head_repeat1] = STATE(103),
    [sym__layout_semicolon] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym__] = ACTIONS(157),
    [sym_list_constructor] = ACTIONS(159),
    [sym__variable_pattern] = ACTIONS(161),
    [sym__constructor_pattern] = ACTIONS(163),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [24] = {
    [sym__layout_semicolon] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym__] = ACTIONS(173),
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
  [25] = {
    [sym__layout_semicolon] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(149),
    [sym_comment] = ACTIONS(5),
  },
  [26] = {
    [sym__layout_semicolon] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(179),
    [sym_comment] = ACTIONS(5),
  },
  [27] = {
    [sym__layout_semicolon] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
  },
  [28] = {
    [sym__layout_semicolon] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym__] = ACTIONS(173),
    [anon_sym_COLON_COLON] = ACTIONS(185),
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
  [29] = {
    [sym__layout_semicolon] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_COLON_COLON] = ACTIONS(185),
    [sym__variable_pattern] = ACTIONS(185),
    [sym__constructor_pattern] = ACTIONS(187),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [sym__integer_literal] = ACTIONS(185),
    [sym__octal_literal] = ACTIONS(185),
    [sym__hexidecimal_literal] = ACTIONS(185),
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
    [ts_builtin_sym_end] = ACTIONS(189),
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
    [sym_module_exports] = STATE(108),
    [anon_sym_where] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(193),
    [sym_comment] = ACTIONS(5),
  },
  [32] = {
    [sym_module_identifier] = ACTIONS(195),
    [sym_comment] = ACTIONS(5),
  },
  [33] = {
    [sym_import_specification] = STATE(113),
    [sym__layout_semicolon] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_as] = ACTIONS(203),
    [anon_sym_hiding] = ACTIONS(205),
    [sym_comment] = ACTIONS(5),
  },
  [34] = {
    [anon_sym_ccall] = ACTIONS(207),
    [anon_sym_stdcall] = ACTIONS(207),
    [anon_sym_cplusplus] = ACTIONS(207),
    [anon_sym_jvm] = ACTIONS(207),
    [anon_sym_dotnet] = ACTIONS(207),
    [sym_comment] = ACTIONS(5),
  },
  [35] = {
    [sym_calling_convention] = STATE(115),
    [anon_sym_ccall] = ACTIONS(209),
    [anon_sym_stdcall] = ACTIONS(209),
    [anon_sym_cplusplus] = ACTIONS(209),
    [anon_sym_jvm] = ACTIONS(209),
    [anon_sym_dotnet] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
  },
  [36] = {
    [sym__identifier] = STATE(117),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_RPAREN] = ACTIONS(211),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
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
    [sym__layout_close_brace] = ACTIONS(215),
    [anon_sym_do] = ACTIONS(19),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(217),
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
    [sym__expression] = STATE(124),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(125),
    [sym__literal] = STATE(25),
    [sym_variable_identifier] = STATE(24),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_statement_list_repeat1] = STATE(126),
    [anon_sym_RBRACE] = ACTIONS(219),
    [anon_sym_do] = ACTIONS(19),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(217),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [39] = {
    [sym__layout_semicolon] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(223),
    [sym_comment] = ACTIONS(5),
  },
  [40] = {
    [sym_class] = STATE(127),
    [sym_constructor_identifier] = STATE(128),
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
    [sym__variable_pattern] = ACTIONS(225),
    [sym_comment] = ACTIONS(5),
  },
  [42] = {
    [sym_constructor_identifier] = STATE(129),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [43] = {
    [anon_sym_EQ_GT] = ACTIONS(227),
    [sym_comment] = ACTIONS(5),
  },
  [44] = {
    [sym_variable_identifier] = STATE(134),
    [aux_sym_type_class_repeat1] = STATE(135),
    [anon_sym_where] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(231),
    [sym__variable_pattern] = ACTIONS(233),
    [sym_comment] = ACTIONS(5),
  },
  [45] = {
    [sym_constructor_identifier] = STATE(136),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [46] = {
    [sym_variable_identifier] = STATE(134),
    [aux_sym_type_class_repeat1] = STATE(138),
    [anon_sym_where] = ACTIONS(235),
    [anon_sym_LPAREN] = ACTIONS(231),
    [sym__variable_pattern] = ACTIONS(233),
    [sym_comment] = ACTIONS(5),
  },
  [47] = {
    [sym__layout_semicolon] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
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
  [48] = {
    [sym__identifier] = STATE(139),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [49] = {
    [sym__constructor_symbol] = STATE(141),
    [aux_sym_constructor_symbol_repeat1] = STATE(142),
    [sym__layout_semicolon] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_COLON] = ACTIONS(245),
    [anon_sym_BANG] = ACTIONS(245),
    [anon_sym_DOT] = ACTIONS(245),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(245),
    [anon_sym_DOLLAR] = ACTIONS(245),
    [anon_sym_PERCENT] = ACTIONS(245),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_1] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_QMARK] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(245),
  },
  [50] = {
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [anon_sym_BQUOTE] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(131),
    [sym_list_constructor] = ACTIONS(131),
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
    [aux_sym_fixity_repeat1] = STATE(144),
    [sym__layout_semicolon] = ACTIONS(247),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
  },
  [52] = {
    [sym__layout_semicolon] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(255),
    [sym_comment] = ACTIONS(5),
  },
  [53] = {
    [sym__op] = STATE(145),
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
    [sym__variable_symbol] = STATE(146),
    [aux_sym_variable_symbol_repeat1] = STATE(147),
    [sym__layout_semicolon] = ACTIONS(257),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(259),
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
    [sym__variable_pattern] = ACTIONS(225),
    [sym__constructor_pattern] = ACTIONS(225),
    [sym_comment] = ACTIONS(5),
  },
  [56] = {
    [sym_simple_type] = STATE(148),
    [sym_constructor_identifier] = STATE(149),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [57] = {
    [sym_constructors] = STATE(152),
    [sym_constructor] = STATE(153),
    [sym_deriving] = STATE(154),
    [sym_constructor_identifier] = STATE(155),
    [sym__layout_semicolon] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_deriving] = ACTIONS(267),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [58] = {
    [sym_variable_identifier] = STATE(157),
    [aux_sym_type_class_repeat1] = STATE(158),
    [sym__layout_semicolon] = ACTIONS(269),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_deriving] = ACTIONS(271),
    [sym__variable_pattern] = ACTIONS(273),
    [sym__constructor_pattern] = ACTIONS(275),
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
    [sym__constructor_pattern] = ACTIONS(225),
    [sym_comment] = ACTIONS(5),
  },
  [60] = {
    [sym_simple_type] = STATE(159),
    [sym_constructor_identifier] = STATE(64),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [61] = {
    [anon_sym_EQ] = ACTIONS(277),
    [sym_comment] = ACTIONS(5),
  },
  [62] = {
    [sym_variable_identifier] = STATE(162),
    [aux_sym_type_class_repeat1] = STATE(163),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_EQ] = ACTIONS(271),
    [sym__variable_pattern] = ACTIONS(279),
    [sym_comment] = ACTIONS(5),
  },
  [63] = {
    [anon_sym_EQ] = ACTIONS(281),
    [sym_comment] = ACTIONS(5),
  },
  [64] = {
    [sym_variable_identifier] = STATE(166),
    [aux_sym_type_class_repeat1] = STATE(163),
    [anon_sym_EQ] = ACTIONS(271),
    [sym__variable_pattern] = ACTIONS(283),
    [sym_comment] = ACTIONS(5),
  },
  [65] = {
    [sym__layout_semicolon] = ACTIONS(285),
    [anon_sym_SEMI] = ACTIONS(287),
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(287),
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
  [66] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(291),
  },
  [67] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(293),
  },
  [68] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(295),
  },
  [69] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(297),
  },
  [70] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(299),
  },
  [71] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(301),
  },
  [72] = {
    [sym__char_escape] = STATE(169),
    [sym__ascii] = STATE(169),
    [sym_comment] = ACTIONS(101),
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
  [73] = {
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
    [anon_sym_BSLASH] = ACTIONS(315),
    [sym__space] = ACTIONS(315),
    [sym__newline] = ACTIONS(315),
    [sym__tab] = ACTIONS(315),
    [sym__vertical_tab] = ACTIONS(315),
  },
  [74] = {
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
    [sym_comment] = ACTIONS(101),
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
  [75] = {
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
    [sym_comment] = ACTIONS(101),
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
  [76] = {
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
    [sym_comment] = ACTIONS(101),
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
  [77] = {
    [sym__layout_semicolon] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(325),
    [sym__variable_pattern] = ACTIONS(325),
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
    [sym_comment] = ACTIONS(101),
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
  [79] = {
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
    [sym_comment] = ACTIONS(101),
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
  [80] = {
    [sym__char_escape] = STATE(175),
    [sym__ascii] = STATE(175),
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
    [sym_comment] = ACTIONS(101),
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
  [81] = {
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
    [sym_comment] = ACTIONS(101),
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
  [82] = {
    [sym__gap] = STATE(180),
    [sym__graphic] = STATE(180),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(180),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(349),
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
    [anon_sym_BSLASH] = ACTIONS(125),
    [sym__space] = ACTIONS(127),
    [sym__newline] = ACTIONS(127),
    [sym__tab] = ACTIONS(127),
    [sym__vertical_tab] = ACTIONS(127),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(351),
    [anon_sym_RBRACE] = ACTIONS(353),
    [anon_sym_import] = ACTIONS(353),
    [anon_sym_foreign] = ACTIONS(353),
    [anon_sym_default] = ACTIONS(353),
    [anon_sym_do] = ACTIONS(353),
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
  [84] = {
    [sym_general_constructor] = STATE(184),
    [sym__literal] = STATE(184),
    [sym__identifier] = STATE(184),
    [sym_variable_identifier] = STATE(29),
    [sym_constructor_identifier] = STATE(185),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_function_body_repeat1] = STATE(186),
    [sym__layout_semicolon] = ACTIONS(357),
    [anon_sym_SEMI] = ACTIONS(359),
    [sym__variable_pattern] = ACTIONS(361),
    [sym__constructor_pattern] = ACTIONS(363),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [85] = {
    [sym__layout_semicolon] = ACTIONS(365),
    [anon_sym_SEMI] = ACTIONS(367),
    [sym_comment] = ACTIONS(5),
  },
  [86] = {
    [sym__function_pattern] = STATE(190),
    [sym_irrefutable_pattern] = STATE(90),
    [sym_list_pattern] = STATE(90),
    [sym_tuple_pattern] = STATE(90),
    [sym_parenthesized_pattern] = STATE(90),
    [sym__pattern] = STATE(191),
    [sym_negative_literal] = STATE(192),
    [sym_general_constructor] = STATE(192),
    [sym_as_pattern] = STATE(90),
    [sym_wildcard] = STATE(90),
    [sym__variable] = STATE(193),
    [sym_qualified_variable_identifier] = STATE(98),
    [sym__literal] = STATE(90),
    [sym__identifier] = STATE(99),
    [sym_simple_type] = STATE(100),
    [sym_variable_identifier] = STATE(101),
    [sym_constructor_identifier] = STATE(194),
    [sym_integer] = STATE(93),
    [sym_char] = STATE(93),
    [sym_string] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(371),
    [anon_sym__] = ACTIONS(157),
    [sym_list_constructor] = ACTIONS(159),
    [sym__variable_pattern] = ACTIONS(161),
    [sym__constructor_pattern] = ACTIONS(373),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [87] = {
    [sym__function_pattern] = STATE(195),
    [sym_irrefutable_pattern] = STATE(90),
    [sym_list_pattern] = STATE(90),
    [sym_tuple_pattern] = STATE(90),
    [sym_parenthesized_pattern] = STATE(90),
    [sym_as_pattern] = STATE(90),
    [sym_wildcard] = STATE(90),
    [sym__variable] = STATE(97),
    [sym_qualified_variable_identifier] = STATE(98),
    [sym__literal] = STATE(90),
    [sym__identifier] = STATE(99),
    [sym_simple_type] = STATE(100),
    [sym_variable_identifier] = STATE(101),
    [sym_constructor_identifier] = STATE(102),
    [sym_integer] = STATE(93),
    [sym_char] = STATE(93),
    [sym_string] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym__] = ACTIONS(157),
    [sym_list_constructor] = ACTIONS(159),
    [sym__variable_pattern] = ACTIONS(161),
    [sym__constructor_pattern] = ACTIONS(163),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [88] = {
    [sym__function_pattern] = STATE(197),
    [sym_irrefutable_pattern] = STATE(90),
    [sym_list_pattern] = STATE(90),
    [sym_tuple_pattern] = STATE(90),
    [sym_parenthesized_pattern] = STATE(90),
    [sym_as_pattern] = STATE(90),
    [sym_wildcard] = STATE(90),
    [sym__variable] = STATE(198),
    [sym_qualified_variable_identifier] = STATE(98),
    [sym__literal] = STATE(90),
    [sym__identifier] = STATE(99),
    [sym_simple_type] = STATE(100),
    [sym_variable_identifier] = STATE(101),
    [sym_constructor_identifier] = STATE(199),
    [sym_integer] = STATE(93),
    [sym_char] = STATE(93),
    [sym_string] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym__] = ACTIONS(157),
    [sym_list_constructor] = ACTIONS(159),
    [sym__variable_pattern] = ACTIONS(161),
    [sym__constructor_pattern] = ACTIONS(373),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [89] = {
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_COMMA] = ACTIONS(377),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_EQ] = ACTIONS(377),
    [anon_sym_TILDE] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(377),
    [anon_sym_RBRACK] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(377),
    [anon_sym__] = ACTIONS(377),
    [anon_sym_BQUOTE] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(377),
    [sym_list_constructor] = ACTIONS(377),
    [anon_sym_BANG] = ACTIONS(377),
    [sym__variable_pattern] = ACTIONS(379),
    [sym__constructor_pattern] = ACTIONS(379),
    [anon_sym_DOT] = ACTIONS(377),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(379),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [anon_sym_POUND] = ACTIONS(377),
    [anon_sym_DOLLAR] = ACTIONS(377),
    [anon_sym_PERCENT] = ACTIONS(377),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_1] = ACTIONS(377),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_SLASH] = ACTIONS(377),
    [anon_sym_LT] = ACTIONS(377),
    [anon_sym_GT] = ACTIONS(377),
    [anon_sym_QMARK] = ACTIONS(377),
    [anon_sym_CARET] = ACTIONS(377),
    [sym__integer_literal] = ACTIONS(377),
    [sym__octal_literal] = ACTIONS(377),
    [sym__hexidecimal_literal] = ACTIONS(377),
  },
  [90] = {
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_EQ] = ACTIONS(381),
    [anon_sym_TILDE] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym__] = ACTIONS(381),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(381),
    [sym_list_constructor] = ACTIONS(381),
    [anon_sym_BANG] = ACTIONS(381),
    [sym__variable_pattern] = ACTIONS(383),
    [sym__constructor_pattern] = ACTIONS(383),
    [anon_sym_DOT] = ACTIONS(381),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(383),
    [anon_sym_SQUOTE] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(381),
    [anon_sym_DOLLAR] = ACTIONS(381),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(381),
    [anon_sym_1] = ACTIONS(381),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(381),
    [anon_sym_GT] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(381),
    [anon_sym_CARET] = ACTIONS(381),
    [sym__integer_literal] = ACTIONS(381),
    [sym__octal_literal] = ACTIONS(381),
    [sym__hexidecimal_literal] = ACTIONS(381),
  },
  [91] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_AT] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(79),
    [sym_list_constructor] = ACTIONS(79),
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
  [92] = {
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym__] = ACTIONS(85),
    [sym_list_constructor] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(225),
    [sym__constructor_pattern] = ACTIONS(225),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(225),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym__integer_literal] = ACTIONS(85),
    [sym__octal_literal] = ACTIONS(85),
    [sym__hexidecimal_literal] = ACTIONS(85),
  },
  [93] = {
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(91),
    [sym_list_constructor] = ACTIONS(91),
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
  [94] = {
    [sym__graphic] = STATE(201),
    [sym__small] = STATE(70),
    [sym__large] = STATE(70),
    [sym__symbol] = STATE(70),
    [sym__special] = STATE(70),
    [sym__escape] = STATE(201),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_BANG] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(97),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(385),
    [anon_sym_DQUOTE] = ACTIONS(385),
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
    [anon_sym_BSLASH] = ACTIONS(109),
    [sym__space] = ACTIONS(385),
  },
  [95] = {
    [sym__gap] = STATE(76),
    [sym__graphic] = STATE(76),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(76),
    [aux_sym_string_repeat1] = STATE(203),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(387),
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
    [anon_sym_BSLASH] = ACTIONS(125),
    [sym__space] = ACTIONS(127),
    [sym__newline] = ACTIONS(127),
    [sym__tab] = ACTIONS(127),
    [sym__vertical_tab] = ACTIONS(127),
  },
  [96] = {
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym__] = ACTIONS(389),
    [sym_list_constructor] = ACTIONS(389),
    [sym__variable_pattern] = ACTIONS(391),
    [sym__constructor_pattern] = ACTIONS(391),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(391),
    [anon_sym_SQUOTE] = ACTIONS(389),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [sym__integer_literal] = ACTIONS(389),
    [sym__octal_literal] = ACTIONS(389),
    [sym__hexidecimal_literal] = ACTIONS(389),
  },
  [97] = {
    [anon_sym_AT] = ACTIONS(393),
    [sym_comment] = ACTIONS(5),
  },
  [98] = {
    [anon_sym_AT] = ACTIONS(173),
    [sym_comment] = ACTIONS(5),
  },
  [99] = {
    [anon_sym_LBRACE] = ACTIONS(395),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_EQ] = ACTIONS(381),
    [anon_sym_TILDE] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym__] = ACTIONS(381),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(381),
    [sym_list_constructor] = ACTIONS(381),
    [anon_sym_BANG] = ACTIONS(381),
    [sym__variable_pattern] = ACTIONS(383),
    [sym__constructor_pattern] = ACTIONS(383),
    [anon_sym_DOT] = ACTIONS(381),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(383),
    [anon_sym_SQUOTE] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(381),
    [anon_sym_DOLLAR] = ACTIONS(381),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(381),
    [anon_sym_1] = ACTIONS(381),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(381),
    [anon_sym_GT] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(381),
    [anon_sym_CARET] = ACTIONS(381),
    [sym__integer_literal] = ACTIONS(381),
    [sym__octal_literal] = ACTIONS(381),
    [sym__hexidecimal_literal] = ACTIONS(381),
  },
  [100] = {
    [anon_sym_LBRACE] = ACTIONS(395),
    [sym_comment] = ACTIONS(5),
  },
  [101] = {
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_EQ] = ACTIONS(185),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(173),
    [anon_sym__] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(185),
    [sym_list_constructor] = ACTIONS(185),
    [anon_sym_BANG] = ACTIONS(185),
    [sym__variable_pattern] = ACTIONS(187),
    [sym__constructor_pattern] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(185),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(185),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_PERCENT] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(185),
    [anon_sym_1] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(185),
    [anon_sym_SLASH] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(185),
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_QMARK] = ACTIONS(185),
    [anon_sym_CARET] = ACTIONS(185),
    [sym__integer_literal] = ACTIONS(185),
    [sym__octal_literal] = ACTIONS(185),
    [sym__hexidecimal_literal] = ACTIONS(185),
  },
  [102] = {
    [sym_variable_identifier] = STATE(166),
    [aux_sym_type_class_repeat1] = STATE(206),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_EQ] = ACTIONS(185),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym__] = ACTIONS(185),
    [sym_list_constructor] = ACTIONS(185),
    [sym__variable_pattern] = ACTIONS(187),
    [sym__constructor_pattern] = ACTIONS(187),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [sym__integer_literal] = ACTIONS(185),
    [sym__octal_literal] = ACTIONS(185),
    [sym__hexidecimal_literal] = ACTIONS(185),
  },
  [103] = {
    [sym__function_pattern] = STATE(207),
    [sym_irrefutable_pattern] = STATE(90),
    [sym_list_pattern] = STATE(90),
    [sym_tuple_pattern] = STATE(90),
    [sym_parenthesized_pattern] = STATE(90),
    [sym_as_pattern] = STATE(90),
    [sym_wildcard] = STATE(90),
    [sym__variable] = STATE(97),
    [sym_qualified_variable_identifier] = STATE(98),
    [sym__literal] = STATE(90),
    [sym__identifier] = STATE(99),
    [sym_simple_type] = STATE(100),
    [sym_variable_identifier] = STATE(101),
    [sym_constructor_identifier] = STATE(102),
    [sym_integer] = STATE(93),
    [sym_char] = STATE(93),
    [sym_string] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_EQ] = ACTIONS(397),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym__] = ACTIONS(157),
    [sym_list_constructor] = ACTIONS(159),
    [sym__variable_pattern] = ACTIONS(161),
    [sym__constructor_pattern] = ACTIONS(163),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [104] = {
    [sym_type] = STATE(213),
    [sym__generic_type_constructor] = STATE(214),
    [sym_tupling_constructor] = STATE(210),
    [sym_tuple] = STATE(214),
    [sym_list] = STATE(214),
    [sym_parenthesized_constructor] = STATE(214),
    [sym_context] = STATE(215),
    [sym_class] = STATE(216),
    [sym_variable_identifier] = STATE(217),
    [sym_constructor_identifier] = STATE(218),
    [sym__type_constructors] = STATE(210),
    [sym_qualified_type_constructor] = STATE(219),
    [anon_sym_LPAREN] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(401),
    [sym_unit_type] = ACTIONS(403),
    [sym_list_constructor] = ACTIONS(403),
    [sym_function_constructor] = ACTIONS(403),
    [sym__variable_pattern] = ACTIONS(405),
    [sym__constructor_pattern] = ACTIONS(407),
    [sym_module_identifier] = ACTIONS(409),
    [sym_comment] = ACTIONS(5),
  },
  [105] = {
    [sym__layout_semicolon] = ACTIONS(411),
    [anon_sym_SEMI] = ACTIONS(413),
    [sym_comment] = ACTIONS(5),
  },
  [106] = {
    [sym_declarations] = STATE(223),
    [sym__layout_open_brace] = ACTIONS(415),
    [anon_sym_LBRACE] = ACTIONS(417),
    [sym_comment] = ACTIONS(5),
  },
  [107] = {
    [sym_export] = STATE(225),
    [sym__identifier] = STATE(226),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_RPAREN] = ACTIONS(419),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [108] = {
    [anon_sym_where] = ACTIONS(421),
    [sym_comment] = ACTIONS(5),
  },
  [109] = {
    [sym_import_specification] = STATE(229),
    [sym__layout_semicolon] = ACTIONS(423),
    [anon_sym_SEMI] = ACTIONS(425),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_as] = ACTIONS(427),
    [anon_sym_hiding] = ACTIONS(205),
    [sym_comment] = ACTIONS(5),
  },
  [110] = {
    [sym__identifier] = STATE(231),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_RPAREN] = ACTIONS(429),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [111] = {
    [sym_module_identifier] = ACTIONS(431),
    [sym_comment] = ACTIONS(5),
  },
  [112] = {
    [anon_sym_LPAREN] = ACTIONS(433),
    [sym_comment] = ACTIONS(5),
  },
  [113] = {
    [sym__layout_semicolon] = ACTIONS(423),
    [anon_sym_SEMI] = ACTIONS(425),
    [sym_comment] = ACTIONS(5),
  },
  [114] = {
    [anon_sym_unsafe] = ACTIONS(435),
    [anon_sym_safe] = ACTIONS(435),
    [sym__variable_pattern] = ACTIONS(437),
    [sym__constructor_pattern] = ACTIONS(437),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(435),
  },
  [115] = {
    [sym_safety] = STATE(236),
    [sym_type_signature] = STATE(237),
    [sym__identifier] = STATE(238),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym_string] = STATE(239),
    [anon_sym_unsafe] = ACTIONS(439),
    [anon_sym_safe] = ACTIONS(439),
    [sym__variable_pattern] = ACTIONS(233),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(441),
  },
  [116] = {
    [sym__layout_semicolon] = ACTIONS(443),
    [anon_sym_SEMI] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
  },
  [117] = {
    [aux_sym_export_repeat1] = STATE(242),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(449),
    [sym_comment] = ACTIONS(5),
  },
  [118] = {
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_EQ] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_COLON_COLON] = ACTIONS(185),
    [sym_comment] = ACTIONS(5),
  },
  [119] = {
    [sym__layout_semicolon] = ACTIONS(451),
    [anon_sym_SEMI] = ACTIONS(453),
    [sym_comment] = ACTIONS(5),
  },
  [120] = {
    [sym__variable_pattern] = ACTIONS(87),
    [sym_comment] = ACTIONS(5),
  },
  [121] = {
    [sym__layout_semicolon] = ACTIONS(455),
    [anon_sym_SEMI] = ACTIONS(457),
    [sym_comment] = ACTIONS(5),
  },
  [122] = {
    [sym__layout_close_brace] = ACTIONS(459),
    [anon_sym_do] = ACTIONS(461),
    [sym__variable_pattern] = ACTIONS(463),
    [sym__constructor_pattern] = ACTIONS(463),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(463),
    [anon_sym_SQUOTE] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [sym__integer_literal] = ACTIONS(461),
    [sym__octal_literal] = ACTIONS(461),
    [sym__hexidecimal_literal] = ACTIONS(461),
  },
  [123] = {
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(121),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(245),
    [sym__literal] = STATE(25),
    [sym_variable_identifier] = STATE(24),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [sym__layout_close_brace] = ACTIONS(465),
    [anon_sym_do] = ACTIONS(19),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(217),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [124] = {
    [sym__layout_semicolon] = ACTIONS(467),
    [anon_sym_SEMI] = ACTIONS(469),
    [sym_comment] = ACTIONS(5),
  },
  [125] = {
    [anon_sym_RBRACE] = ACTIONS(461),
    [anon_sym_do] = ACTIONS(461),
    [sym__variable_pattern] = ACTIONS(463),
    [sym__constructor_pattern] = ACTIONS(463),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(463),
    [anon_sym_SQUOTE] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [sym__integer_literal] = ACTIONS(461),
    [sym__octal_literal] = ACTIONS(461),
    [sym__hexidecimal_literal] = ACTIONS(461),
  },
  [126] = {
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(124),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(247),
    [sym__literal] = STATE(25),
    [sym_variable_identifier] = STATE(24),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [anon_sym_RBRACE] = ACTIONS(471),
    [anon_sym_do] = ACTIONS(19),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(217),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [127] = {
    [aux_sym_context_repeat1] = STATE(250),
    [anon_sym_COMMA] = ACTIONS(473),
    [anon_sym_RPAREN] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
  },
  [128] = {
    [sym_variable_identifier] = STATE(251),
    [anon_sym_LPAREN] = ACTIONS(231),
    [sym__variable_pattern] = ACTIONS(213),
    [sym_comment] = ACTIONS(5),
  },
  [129] = {
    [sym_variable_identifier] = STATE(253),
    [aux_sym_type_class_repeat1] = STATE(254),
    [anon_sym_where] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(233),
    [sym_comment] = ACTIONS(5),
  },
  [130] = {
    [sym__constructor_pattern] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [131] = {
    [sym_general_declarations] = STATE(257),
    [sym__layout_open_brace] = ACTIONS(481),
    [anon_sym_LBRACE] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [132] = {
    [sym_variable_identifier] = STATE(166),
    [aux_sym_type_class_repeat1] = STATE(258),
    [sym__variable_pattern] = ACTIONS(279),
    [sym_comment] = ACTIONS(5),
  },
  [133] = {
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_EQ_GT] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
  },
  [134] = {
    [anon_sym_where] = ACTIONS(485),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [sym__variable_pattern] = ACTIONS(489),
    [sym_comment] = ACTIONS(5),
  },
  [135] = {
    [sym_variable_identifier] = STATE(259),
    [anon_sym_where] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(233),
    [sym_comment] = ACTIONS(5),
  },
  [136] = {
    [sym_variable_identifier] = STATE(253),
    [aux_sym_type_class_repeat1] = STATE(261),
    [anon_sym_where] = ACTIONS(491),
    [sym__variable_pattern] = ACTIONS(233),
    [sym_comment] = ACTIONS(5),
  },
  [137] = {
    [sym_general_declarations] = STATE(262),
    [sym__layout_open_brace] = ACTIONS(481),
    [anon_sym_LBRACE] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [138] = {
    [sym_variable_identifier] = STATE(259),
    [anon_sym_where] = ACTIONS(491),
    [sym__variable_pattern] = ACTIONS(233),
    [sym_comment] = ACTIONS(5),
  },
  [139] = {
    [anon_sym_BQUOTE] = ACTIONS(493),
    [sym_comment] = ACTIONS(5),
  },
  [140] = {
    [sym__layout_semicolon] = ACTIONS(495),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(497),
    [anon_sym_DOLLAR] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(497),
    [anon_sym_AMP] = ACTIONS(497),
    [anon_sym_1] = ACTIONS(497),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_SLASH] = ACTIONS(497),
    [anon_sym_LT] = ACTIONS(497),
    [anon_sym_GT] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_CARET] = ACTIONS(497),
  },
  [141] = {
    [sym__layout_semicolon] = ACTIONS(499),
    [anon_sym_SEMI] = ACTIONS(501),
    [anon_sym_COMMA] = ACTIONS(501),
    [anon_sym_DASH] = ACTIONS(501),
    [anon_sym_COLON] = ACTIONS(501),
    [anon_sym_BANG] = ACTIONS(501),
    [anon_sym_DOT] = ACTIONS(501),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(501),
    [anon_sym_DOLLAR] = ACTIONS(501),
    [anon_sym_PERCENT] = ACTIONS(501),
    [anon_sym_AMP] = ACTIONS(501),
    [anon_sym_1] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(501),
    [anon_sym_SLASH] = ACTIONS(501),
    [anon_sym_LT] = ACTIONS(501),
    [anon_sym_GT] = ACTIONS(501),
    [anon_sym_QMARK] = ACTIONS(501),
    [anon_sym_CARET] = ACTIONS(501),
  },
  [142] = {
    [sym__constructor_symbol] = STATE(264),
    [sym__layout_semicolon] = ACTIONS(503),
    [anon_sym_SEMI] = ACTIONS(505),
    [anon_sym_COMMA] = ACTIONS(505),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_COLON] = ACTIONS(245),
    [anon_sym_BANG] = ACTIONS(245),
    [anon_sym_DOT] = ACTIONS(245),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(245),
    [anon_sym_DOLLAR] = ACTIONS(245),
    [anon_sym_PERCENT] = ACTIONS(245),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_1] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_QMARK] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(245),
  },
  [143] = {
    [sym__op] = STATE(265),
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
  [144] = {
    [sym__layout_semicolon] = ACTIONS(507),
    [anon_sym_SEMI] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(511),
    [sym_comment] = ACTIONS(5),
  },
  [145] = {
    [aux_sym_fixity_repeat1] = STATE(267),
    [sym__layout_semicolon] = ACTIONS(507),
    [anon_sym_SEMI] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
  },
  [146] = {
    [sym__layout_semicolon] = ACTIONS(513),
    [anon_sym_SEMI] = ACTIONS(515),
    [anon_sym_COMMA] = ACTIONS(515),
    [anon_sym_DASH] = ACTIONS(515),
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
  [147] = {
    [sym__variable_symbol] = STATE(268),
    [sym__layout_semicolon] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(519),
    [anon_sym_COMMA] = ACTIONS(519),
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
  [148] = {
    [sym_constructors] = STATE(270),
    [sym_constructor] = STATE(153),
    [sym_deriving] = STATE(271),
    [sym_constructor_identifier] = STATE(155),
    [sym__layout_semicolon] = ACTIONS(521),
    [anon_sym_SEMI] = ACTIONS(523),
    [anon_sym_EQ] = ACTIONS(525),
    [anon_sym_deriving] = ACTIONS(267),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [149] = {
    [sym_variable_identifier] = STATE(273),
    [aux_sym_type_class_repeat1] = STATE(158),
    [sym__layout_semicolon] = ACTIONS(269),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_deriving] = ACTIONS(271),
    [sym__variable_pattern] = ACTIONS(527),
    [sym__constructor_pattern] = ACTIONS(275),
    [sym_comment] = ACTIONS(5),
  },
  [150] = {
    [sym_constructors] = STATE(270),
    [sym_constructor] = STATE(153),
    [sym_deriving] = STATE(271),
    [sym_constructor_identifier] = STATE(155),
    [sym__layout_semicolon] = ACTIONS(521),
    [anon_sym_SEMI] = ACTIONS(523),
    [anon_sym_deriving] = ACTIONS(267),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [151] = {
    [sym__identifier] = STATE(275),
    [sym_variable_identifier] = STATE(29),
    [sym_constructor_identifier] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(529),
    [sym__variable_pattern] = ACTIONS(405),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [152] = {
    [sym_deriving] = STATE(271),
    [sym__layout_semicolon] = ACTIONS(521),
    [anon_sym_SEMI] = ACTIONS(523),
    [anon_sym_deriving] = ACTIONS(267),
    [sym_comment] = ACTIONS(5),
  },
  [153] = {
    [aux_sym_constructors_repeat1] = STATE(277),
    [sym__layout_semicolon] = ACTIONS(531),
    [anon_sym_SEMI] = ACTIONS(533),
    [anon_sym_PIPE] = ACTIONS(535),
    [anon_sym_deriving] = ACTIONS(533),
    [sym_comment] = ACTIONS(5),
  },
  [154] = {
    [sym__layout_semicolon] = ACTIONS(521),
    [anon_sym_SEMI] = ACTIONS(523),
    [sym_comment] = ACTIONS(5),
  },
  [155] = {
    [sym_strict] = STATE(280),
    [sym__identifier] = STATE(280),
    [sym_variable_identifier] = STATE(281),
    [sym_constructor_identifier] = STATE(281),
    [sym_fields] = STATE(282),
    [aux_sym_constructor_repeat1] = STATE(283),
    [sym__layout_semicolon] = ACTIONS(537),
    [anon_sym_SEMI] = ACTIONS(539),
    [anon_sym_LBRACE] = ACTIONS(541),
    [anon_sym_PIPE] = ACTIONS(539),
    [anon_sym_deriving] = ACTIONS(539),
    [anon_sym_BANG] = ACTIONS(543),
    [sym__variable_pattern] = ACTIONS(273),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [156] = {
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
  [157] = {
    [sym__layout_semicolon] = ACTIONS(545),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [anon_sym_deriving] = ACTIONS(485),
    [sym__variable_pattern] = ACTIONS(489),
    [sym__constructor_pattern] = ACTIONS(489),
    [sym_comment] = ACTIONS(5),
  },
  [158] = {
    [sym_variable_identifier] = STATE(284),
    [sym__layout_semicolon] = ACTIONS(547),
    [anon_sym_SEMI] = ACTIONS(549),
    [anon_sym_EQ] = ACTIONS(549),
    [anon_sym_deriving] = ACTIONS(549),
    [sym__variable_pattern] = ACTIONS(527),
    [sym__constructor_pattern] = ACTIONS(551),
    [sym_comment] = ACTIONS(5),
  },
  [159] = {
    [anon_sym_EQ] = ACTIONS(553),
    [sym_comment] = ACTIONS(5),
  },
  [160] = {
    [sym_new_constructor] = STATE(286),
    [sym_constructor_identifier] = STATE(287),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [161] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym_unit_type] = ACTIONS(79),
    [sym_list_constructor] = ACTIONS(79),
    [sym_function_constructor] = ACTIONS(79),
    [anon_sym_EQ_GT] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym__constructor_pattern] = ACTIONS(81),
    [sym_module_identifier] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym__integer_literal] = ACTIONS(79),
    [sym__octal_literal] = ACTIONS(79),
    [sym__hexidecimal_literal] = ACTIONS(79),
  },
  [162] = {
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [sym__variable_pattern] = ACTIONS(485),
    [sym_comment] = ACTIONS(5),
  },
  [163] = {
    [sym_variable_identifier] = STATE(288),
    [anon_sym_EQ] = ACTIONS(549),
    [sym__variable_pattern] = ACTIONS(283),
    [sym_comment] = ACTIONS(5),
  },
  [164] = {
    [sym_type] = STATE(291),
    [sym__generic_type_constructor] = STATE(214),
    [sym_tupling_constructor] = STATE(210),
    [sym_tuple] = STATE(214),
    [sym_list] = STATE(214),
    [sym_parenthesized_constructor] = STATE(214),
    [sym_variable_identifier] = STATE(217),
    [sym__type_constructors] = STATE(210),
    [sym_qualified_type_constructor] = STATE(219),
    [anon_sym_LPAREN] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(401),
    [sym_unit_type] = ACTIONS(403),
    [sym_list_constructor] = ACTIONS(403),
    [sym_function_constructor] = ACTIONS(403),
    [sym__variable_pattern] = ACTIONS(405),
    [sym__constructor_pattern] = ACTIONS(557),
    [sym_module_identifier] = ACTIONS(409),
    [sym_comment] = ACTIONS(5),
  },
  [165] = {
    [anon_sym_EQ] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
  },
  [166] = {
    [anon_sym_LBRACE] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(485),
    [anon_sym_RBRACK] = ACTIONS(485),
    [anon_sym_DASH_GT] = ACTIONS(485),
    [sym_unit_type] = ACTIONS(485),
    [sym_list_constructor] = ACTIONS(485),
    [sym_function_constructor] = ACTIONS(485),
    [sym__variable_pattern] = ACTIONS(485),
    [sym__constructor_pattern] = ACTIONS(489),
    [sym_module_identifier] = ACTIONS(489),
    [sym_comment] = ACTIONS(5),
  },
  [167] = {
    [sym__layout_semicolon] = ACTIONS(559),
    [anon_sym_SEMI] = ACTIONS(561),
    [sym__variable_pattern] = ACTIONS(561),
    [sym__constructor_pattern] = ACTIONS(563),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(563),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [sym__integer_literal] = ACTIONS(561),
    [sym__octal_literal] = ACTIONS(561),
    [sym__hexidecimal_literal] = ACTIONS(561),
  },
  [168] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(565),
  },
  [169] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(567),
  },
  [170] = {
    [sym__cntrl] = STATE(293),
    [anon_sym_LBRACK] = ACTIONS(569),
    [anon_sym_RBRACK] = ACTIONS(569),
    [anon_sym_AT] = ACTIONS(569),
    [anon_sym__] = ACTIONS(569),
    [sym_comment] = ACTIONS(101),
    [sym__ascii_large] = ACTIONS(569),
    [anon_sym_CARET] = ACTIONS(569),
    [anon_sym_BSLASH] = ACTIONS(569),
  },
  [171] = {
    [aux_sym__escape_repeat1] = STATE(295),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(571),
  },
  [172] = {
    [aux_sym__escape_repeat2] = STATE(297),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(573),
  },
  [173] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(575),
  },
  [174] = {
    [anon_sym_SEMI] = ACTIONS(577),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_RBRACE] = ACTIONS(577),
    [anon_sym_LPAREN] = ACTIONS(577),
    [anon_sym_RPAREN] = ACTIONS(577),
    [anon_sym_EQ] = ACTIONS(577),
    [anon_sym_TILDE] = ACTIONS(577),
    [anon_sym_LBRACK] = ACTIONS(577),
    [anon_sym_RBRACK] = ACTIONS(577),
    [anon_sym_DASH] = ACTIONS(577),
    [anon_sym_AT] = ACTIONS(577),
    [anon_sym__] = ACTIONS(577),
    [anon_sym_BQUOTE] = ACTIONS(577),
    [anon_sym_COLON] = ACTIONS(577),
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
    [anon_sym_BSLASH] = ACTIONS(577),
    [sym__space] = ACTIONS(577),
    [sym__newline] = ACTIONS(577),
    [sym__tab] = ACTIONS(577),
    [sym__vertical_tab] = ACTIONS(577),
  },
  [175] = {
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_LBRACE] = ACTIONS(579),
    [anon_sym_RBRACE] = ACTIONS(579),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_RPAREN] = ACTIONS(579),
    [anon_sym_EQ] = ACTIONS(579),
    [anon_sym_TILDE] = ACTIONS(579),
    [anon_sym_LBRACK] = ACTIONS(579),
    [anon_sym_RBRACK] = ACTIONS(579),
    [anon_sym_DASH] = ACTIONS(579),
    [anon_sym_AT] = ACTIONS(579),
    [anon_sym__] = ACTIONS(579),
    [anon_sym_BQUOTE] = ACTIONS(579),
    [anon_sym_COLON] = ACTIONS(579),
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
    [anon_sym_BSLASH] = ACTIONS(579),
    [sym__space] = ACTIONS(579),
    [sym__newline] = ACTIONS(579),
    [sym__tab] = ACTIONS(579),
    [sym__vertical_tab] = ACTIONS(579),
  },
  [176] = {
    [sym__cntrl] = STATE(299),
    [anon_sym_LBRACK] = ACTIONS(581),
    [anon_sym_RBRACK] = ACTIONS(581),
    [anon_sym_AT] = ACTIONS(581),
    [anon_sym__] = ACTIONS(581),
    [sym_comment] = ACTIONS(101),
    [sym__ascii_large] = ACTIONS(581),
    [anon_sym_CARET] = ACTIONS(581),
    [anon_sym_BSLASH] = ACTIONS(581),
  },
  [177] = {
    [aux_sym__escape_repeat1] = STATE(301),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(583),
  },
  [178] = {
    [aux_sym__escape_repeat2] = STATE(303),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(585),
  },
  [179] = {
    [anon_sym_SEMI] = ACTIONS(587),
    [anon_sym_LBRACE] = ACTIONS(587),
    [anon_sym_RBRACE] = ACTIONS(587),
    [anon_sym_LPAREN] = ACTIONS(587),
    [anon_sym_RPAREN] = ACTIONS(587),
    [anon_sym_EQ] = ACTIONS(587),
    [anon_sym_TILDE] = ACTIONS(587),
    [anon_sym_LBRACK] = ACTIONS(587),
    [anon_sym_RBRACK] = ACTIONS(587),
    [anon_sym_DASH] = ACTIONS(587),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym__] = ACTIONS(587),
    [anon_sym_BQUOTE] = ACTIONS(587),
    [anon_sym_COLON] = ACTIONS(587),
    [anon_sym_PIPE] = ACTIONS(587),
    [anon_sym_BANG] = ACTIONS(587),
    [anon_sym_DOT] = ACTIONS(587),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(587),
    [anon_sym_DQUOTE] = ACTIONS(587),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(587),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(587),
    [sym__ascii_large] = ACTIONS(587),
    [anon_sym_POUND] = ACTIONS(587),
    [anon_sym_DOLLAR] = ACTIONS(587),
    [anon_sym_PERCENT] = ACTIONS(587),
    [anon_sym_AMP] = ACTIONS(587),
    [anon_sym_1] = ACTIONS(587),
    [anon_sym_PLUS] = ACTIONS(587),
    [anon_sym_SLASH] = ACTIONS(587),
    [anon_sym_LT] = ACTIONS(587),
    [anon_sym_GT] = ACTIONS(587),
    [anon_sym_QMARK] = ACTIONS(587),
    [anon_sym_CARET] = ACTIONS(587),
    [anon_sym_BSLASH] = ACTIONS(587),
    [sym__space] = ACTIONS(587),
    [sym__newline] = ACTIONS(587),
    [sym__tab] = ACTIONS(587),
    [sym__vertical_tab] = ACTIONS(587),
  },
  [180] = {
    [anon_sym_SEMI] = ACTIONS(589),
    [anon_sym_LBRACE] = ACTIONS(589),
    [anon_sym_RBRACE] = ACTIONS(589),
    [anon_sym_LPAREN] = ACTIONS(589),
    [anon_sym_RPAREN] = ACTIONS(589),
    [anon_sym_EQ] = ACTIONS(589),
    [anon_sym_TILDE] = ACTIONS(589),
    [anon_sym_LBRACK] = ACTIONS(589),
    [anon_sym_RBRACK] = ACTIONS(589),
    [anon_sym_DASH] = ACTIONS(589),
    [anon_sym_AT] = ACTIONS(589),
    [anon_sym__] = ACTIONS(589),
    [anon_sym_BQUOTE] = ACTIONS(589),
    [anon_sym_COLON] = ACTIONS(589),
    [anon_sym_PIPE] = ACTIONS(589),
    [anon_sym_BANG] = ACTIONS(589),
    [anon_sym_DOT] = ACTIONS(589),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(589),
    [anon_sym_DQUOTE] = ACTIONS(589),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(589),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(589),
    [sym__ascii_large] = ACTIONS(589),
    [anon_sym_POUND] = ACTIONS(589),
    [anon_sym_DOLLAR] = ACTIONS(589),
    [anon_sym_PERCENT] = ACTIONS(589),
    [anon_sym_AMP] = ACTIONS(589),
    [anon_sym_1] = ACTIONS(589),
    [anon_sym_PLUS] = ACTIONS(589),
    [anon_sym_SLASH] = ACTIONS(589),
    [anon_sym_LT] = ACTIONS(589),
    [anon_sym_GT] = ACTIONS(589),
    [anon_sym_QMARK] = ACTIONS(589),
    [anon_sym_CARET] = ACTIONS(589),
    [anon_sym_BSLASH] = ACTIONS(589),
    [sym__space] = ACTIONS(589),
    [sym__newline] = ACTIONS(589),
    [sym__tab] = ACTIONS(589),
    [sym__vertical_tab] = ACTIONS(589),
  },
  [181] = {
    [sym__layout_semicolon] = ACTIONS(591),
    [anon_sym_SEMI] = ACTIONS(593),
    [sym__variable_pattern] = ACTIONS(593),
    [sym__constructor_pattern] = ACTIONS(595),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(595),
    [anon_sym_SQUOTE] = ACTIONS(593),
    [anon_sym_DQUOTE] = ACTIONS(593),
    [sym__integer_literal] = ACTIONS(593),
    [sym__octal_literal] = ACTIONS(593),
    [sym__hexidecimal_literal] = ACTIONS(593),
  },
  [182] = {
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
  [183] = {
    [sym__layout_semicolon] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(85),
    [sym__constructor_pattern] = ACTIONS(225),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(225),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym__integer_literal] = ACTIONS(85),
    [sym__octal_literal] = ACTIONS(85),
    [sym__hexidecimal_literal] = ACTIONS(85),
  },
  [184] = {
    [sym__layout_semicolon] = ACTIONS(597),
    [anon_sym_SEMI] = ACTIONS(599),
    [sym__variable_pattern] = ACTIONS(599),
    [sym__constructor_pattern] = ACTIONS(601),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(601),
    [anon_sym_SQUOTE] = ACTIONS(599),
    [anon_sym_DQUOTE] = ACTIONS(599),
    [sym__integer_literal] = ACTIONS(599),
    [sym__octal_literal] = ACTIONS(599),
    [sym__hexidecimal_literal] = ACTIONS(599),
  },
  [185] = {
    [sym__literal] = STATE(304),
    [sym_variable_identifier] = STATE(304),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_general_constructor_repeat1] = STATE(305),
    [sym__layout_semicolon] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(185),
    [sym__variable_pattern] = ACTIONS(361),
    [sym__constructor_pattern] = ACTIONS(187),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [186] = {
    [sym_general_constructor] = STATE(306),
    [sym__literal] = STATE(306),
    [sym__identifier] = STATE(306),
    [sym_variable_identifier] = STATE(29),
    [sym_constructor_identifier] = STATE(185),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [sym__layout_semicolon] = ACTIONS(603),
    [anon_sym_SEMI] = ACTIONS(605),
    [sym__variable_pattern] = ACTIONS(361),
    [sym__constructor_pattern] = ACTIONS(363),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [187] = {
    [sym__function_pattern] = STATE(195),
    [sym_irrefutable_pattern] = STATE(90),
    [sym_list_pattern] = STATE(90),
    [sym_tuple_pattern] = STATE(90),
    [sym_parenthesized_pattern] = STATE(90),
    [sym_as_pattern] = STATE(90),
    [sym_wildcard] = STATE(90),
    [sym__variable] = STATE(193),
    [sym_qualified_variable_identifier] = STATE(98),
    [sym__literal] = STATE(90),
    [sym__identifier] = STATE(99),
    [sym_simple_type] = STATE(100),
    [sym_variable_identifier] = STATE(101),
    [sym_constructor_identifier] = STATE(199),
    [sym_integer] = STATE(93),
    [sym_char] = STATE(93),
    [sym_string] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym__] = ACTIONS(157),
    [sym_list_constructor] = ACTIONS(159),
    [sym__variable_pattern] = ACTIONS(161),
    [sym__constructor_pattern] = ACTIONS(373),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [188] = {
    [anon_sym_LPAREN] = ACTIONS(607),
    [sym_comment] = ACTIONS(5),
  },
  [189] = {
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_BQUOTE] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(85),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(225),
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
  [190] = {
    [sym__op] = STATE(313),
    [sym_variable_symbol] = STATE(314),
    [sym_constructor_symbol] = STATE(314),
    [sym__variable_symbol] = STATE(315),
    [aux_sym_tuple_pattern_repeat1] = STATE(316),
    [anon_sym_COMMA] = ACTIONS(609),
    [anon_sym_RPAREN] = ACTIONS(611),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_BQUOTE] = ACTIONS(615),
    [anon_sym_COLON] = ACTIONS(617),
    [anon_sym_BANG] = ACTIONS(613),
    [anon_sym_DOT] = ACTIONS(613),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(613),
    [anon_sym_DOLLAR] = ACTIONS(613),
    [anon_sym_PERCENT] = ACTIONS(613),
    [anon_sym_AMP] = ACTIONS(613),
    [anon_sym_1] = ACTIONS(613),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_SLASH] = ACTIONS(613),
    [anon_sym_LT] = ACTIONS(613),
    [anon_sym_GT] = ACTIONS(613),
    [anon_sym_QMARK] = ACTIONS(613),
    [anon_sym_CARET] = ACTIONS(613),
  },
  [191] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(316),
    [anon_sym_COMMA] = ACTIONS(609),
    [anon_sym_RPAREN] = ACTIONS(611),
    [sym_comment] = ACTIONS(5),
  },
  [192] = {
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_RPAREN] = ACTIONS(619),
    [sym_comment] = ACTIONS(5),
  },
  [193] = {
    [anon_sym_AT] = ACTIONS(621),
    [sym_comment] = ACTIONS(5),
  },
  [194] = {
    [sym__literal] = STATE(321),
    [sym_variable_identifier] = STATE(322),
    [sym_integer] = STATE(318),
    [sym_char] = STATE(318),
    [sym_string] = STATE(318),
    [aux_sym_general_constructor_repeat1] = STATE(323),
    [aux_sym_type_class_repeat1] = STATE(206),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(185),
    [anon_sym_BANG] = ACTIONS(185),
    [sym__variable_pattern] = ACTIONS(279),
    [anon_sym_DOT] = ACTIONS(185),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(623),
    [anon_sym_SQUOTE] = ACTIONS(625),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [anon_sym_POUND] = ACTIONS(185),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_PERCENT] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(185),
    [anon_sym_1] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(185),
    [anon_sym_SLASH] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(185),
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_QMARK] = ACTIONS(185),
    [anon_sym_CARET] = ACTIONS(185),
    [sym__integer_literal] = ACTIONS(627),
    [sym__octal_literal] = ACTIONS(627),
    [sym__hexidecimal_literal] = ACTIONS(627),
  },
  [195] = {
    [anon_sym_LPAREN] = ACTIONS(629),
    [anon_sym_COMMA] = ACTIONS(629),
    [anon_sym_RPAREN] = ACTIONS(629),
    [anon_sym_EQ] = ACTIONS(629),
    [anon_sym_TILDE] = ACTIONS(629),
    [anon_sym_LBRACK] = ACTIONS(629),
    [anon_sym_RBRACK] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym__] = ACTIONS(629),
    [anon_sym_BQUOTE] = ACTIONS(629),
    [anon_sym_COLON] = ACTIONS(629),
    [sym_list_constructor] = ACTIONS(629),
    [anon_sym_BANG] = ACTIONS(629),
    [sym__variable_pattern] = ACTIONS(631),
    [sym__constructor_pattern] = ACTIONS(631),
    [anon_sym_DOT] = ACTIONS(629),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(629),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [anon_sym_POUND] = ACTIONS(629),
    [anon_sym_DOLLAR] = ACTIONS(629),
    [anon_sym_PERCENT] = ACTIONS(629),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_1] = ACTIONS(629),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_SLASH] = ACTIONS(629),
    [anon_sym_LT] = ACTIONS(629),
    [anon_sym_GT] = ACTIONS(629),
    [anon_sym_QMARK] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(629),
    [sym__integer_literal] = ACTIONS(629),
    [sym__octal_literal] = ACTIONS(629),
    [sym__hexidecimal_literal] = ACTIONS(629),
  },
  [196] = {
    [sym__function_pattern] = STATE(195),
    [sym_irrefutable_pattern] = STATE(90),
    [sym_list_pattern] = STATE(90),
    [sym_tuple_pattern] = STATE(90),
    [sym_parenthesized_pattern] = STATE(90),
    [sym_as_pattern] = STATE(90),
    [sym_wildcard] = STATE(90),
    [sym__variable] = STATE(198),
    [sym_qualified_variable_identifier] = STATE(98),
    [sym__literal] = STATE(90),
    [sym__identifier] = STATE(99),
    [sym_simple_type] = STATE(100),
    [sym_variable_identifier] = STATE(101),
    [sym_constructor_identifier] = STATE(199),
    [sym_integer] = STATE(93),
    [sym_char] = STATE(93),
    [sym_string] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym__] = ACTIONS(157),
    [sym_list_constructor] = ACTIONS(159),
    [sym__variable_pattern] = ACTIONS(161),
    [sym__constructor_pattern] = ACTIONS(373),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [197] = {
    [anon_sym_RBRACK] = ACTIONS(633),
    [sym_comment] = ACTIONS(5),
  },
  [198] = {
    [anon_sym_AT] = ACTIONS(635),
    [sym_comment] = ACTIONS(5),
  },
  [199] = {
    [sym_variable_identifier] = STATE(166),
    [aux_sym_type_class_repeat1] = STATE(206),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(185),
    [anon_sym_BANG] = ACTIONS(185),
    [sym__variable_pattern] = ACTIONS(279),
    [anon_sym_DOT] = ACTIONS(185),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(185),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_PERCENT] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(185),
    [anon_sym_1] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(185),
    [anon_sym_SLASH] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(185),
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_QMARK] = ACTIONS(185),
    [anon_sym_CARET] = ACTIONS(185),
  },
  [200] = {
    [anon_sym_AT] = ACTIONS(287),
    [sym_comment] = ACTIONS(5),
  },
  [201] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(637),
  },
  [202] = {
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
  [203] = {
    [sym__gap] = STATE(180),
    [sym__graphic] = STATE(180),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(180),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(639),
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
    [anon_sym_BSLASH] = ACTIONS(125),
    [sym__space] = ACTIONS(127),
    [sym__newline] = ACTIONS(127),
    [sym__tab] = ACTIONS(127),
    [sym__vertical_tab] = ACTIONS(127),
  },
  [204] = {
    [sym__function_pattern] = STATE(328),
    [sym_irrefutable_pattern] = STATE(90),
    [sym_list_pattern] = STATE(90),
    [sym_tuple_pattern] = STATE(90),
    [sym_parenthesized_pattern] = STATE(90),
    [sym_as_pattern] = STATE(90),
    [sym_wildcard] = STATE(90),
    [sym__variable] = STATE(97),
    [sym_qualified_variable_identifier] = STATE(98),
    [sym__literal] = STATE(90),
    [sym__identifier] = STATE(99),
    [sym_simple_type] = STATE(100),
    [sym_variable_identifier] = STATE(101),
    [sym_constructor_identifier] = STATE(102),
    [sym_integer] = STATE(93),
    [sym_char] = STATE(93),
    [sym_string] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym__] = ACTIONS(157),
    [sym_list_constructor] = ACTIONS(159),
    [sym__variable_pattern] = ACTIONS(161),
    [sym__constructor_pattern] = ACTIONS(163),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [205] = {
    [sym_labels] = STATE(330),
    [sym_label] = STATE(331),
    [sym__identifier] = STATE(332),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_RBRACE] = ACTIONS(641),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [206] = {
    [sym_variable_identifier] = STATE(288),
    [anon_sym_LBRACE] = ACTIONS(549),
    [sym__variable_pattern] = ACTIONS(279),
    [sym_comment] = ACTIONS(5),
  },
  [207] = {
    [anon_sym_LPAREN] = ACTIONS(643),
    [anon_sym_EQ] = ACTIONS(643),
    [anon_sym_TILDE] = ACTIONS(643),
    [anon_sym_LBRACK] = ACTIONS(643),
    [anon_sym__] = ACTIONS(643),
    [sym_list_constructor] = ACTIONS(643),
    [sym__variable_pattern] = ACTIONS(645),
    [sym__constructor_pattern] = ACTIONS(645),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(645),
    [anon_sym_SQUOTE] = ACTIONS(643),
    [anon_sym_DQUOTE] = ACTIONS(643),
    [sym__integer_literal] = ACTIONS(643),
    [sym__octal_literal] = ACTIONS(643),
    [sym__hexidecimal_literal] = ACTIONS(643),
  },
  [208] = {
    [sym_type] = STATE(339),
    [sym__generic_type_constructor] = STATE(340),
    [sym_tupling_constructor] = STATE(336),
    [sym_tuple] = STATE(340),
    [sym_list] = STATE(340),
    [sym_parenthesized_constructor] = STATE(340),
    [sym_class] = STATE(341),
    [sym_variable_identifier] = STATE(342),
    [sym_constructor_identifier] = STATE(128),
    [sym__type_constructors] = STATE(336),
    [sym_qualified_type_constructor] = STATE(343),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_COMMA] = ACTIONS(649),
    [anon_sym_LBRACK] = ACTIONS(651),
    [sym_unit_type] = ACTIONS(653),
    [sym_list_constructor] = ACTIONS(653),
    [sym_function_constructor] = ACTIONS(653),
    [sym__variable_pattern] = ACTIONS(655),
    [sym__constructor_pattern] = ACTIONS(657),
    [sym_module_identifier] = ACTIONS(659),
    [sym_comment] = ACTIONS(5),
  },
  [209] = {
    [sym_type] = STATE(346),
    [sym__generic_type_constructor] = STATE(347),
    [sym_tupling_constructor] = STATE(336),
    [sym_tuple] = STATE(347),
    [sym_list] = STATE(347),
    [sym_parenthesized_constructor] = STATE(347),
    [sym_variable_identifier] = STATE(348),
    [sym__type_constructors] = STATE(336),
    [sym_qualified_type_constructor] = STATE(343),
    [aux_sym_list_repeat1] = STATE(349),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_LBRACK] = ACTIONS(651),
    [sym_unit_type] = ACTIONS(653),
    [sym_list_constructor] = ACTIONS(653),
    [sym_function_constructor] = ACTIONS(653),
    [sym__variable_pattern] = ACTIONS(279),
    [sym__constructor_pattern] = ACTIONS(661),
    [sym_module_identifier] = ACTIONS(663),
    [sym_comment] = ACTIONS(5),
  },
  [210] = {
    [sym__layout_semicolon] = ACTIONS(665),
    [anon_sym_SEMI] = ACTIONS(667),
    [anon_sym_DASH_GT] = ACTIONS(667),
    [sym_comment] = ACTIONS(5),
  },
  [211] = {
    [sym_variable_identifier] = STATE(350),
    [aux_sym_type_class_repeat1] = STATE(351),
    [sym__layout_semicolon] = ACTIONS(669),
    [anon_sym_SEMI] = ACTIONS(671),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(671),
    [sym__variable_pattern] = ACTIONS(85),
    [sym_comment] = ACTIONS(5),
  },
  [212] = {
    [sym_constructor_identifier] = STATE(353),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(354),
    [sym__constructor_pattern] = ACTIONS(363),
    [anon_sym_DOT] = ACTIONS(673),
    [sym_comment] = ACTIONS(5),
  },
  [213] = {
    [sym__layout_semicolon] = ACTIONS(675),
    [anon_sym_SEMI] = ACTIONS(677),
    [sym_comment] = ACTIONS(5),
  },
  [214] = {
    [sym__layout_semicolon] = ACTIONS(679),
    [anon_sym_SEMI] = ACTIONS(681),
    [anon_sym_DASH_GT] = ACTIONS(683),
    [sym_comment] = ACTIONS(5),
  },
  [215] = {
    [sym_type] = STATE(356),
    [sym__generic_type_constructor] = STATE(214),
    [sym_tupling_constructor] = STATE(210),
    [sym_tuple] = STATE(214),
    [sym_list] = STATE(214),
    [sym_parenthesized_constructor] = STATE(214),
    [sym_variable_identifier] = STATE(217),
    [sym__type_constructors] = STATE(210),
    [sym_qualified_type_constructor] = STATE(219),
    [anon_sym_LPAREN] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(401),
    [sym_unit_type] = ACTIONS(403),
    [sym_list_constructor] = ACTIONS(403),
    [sym_function_constructor] = ACTIONS(403),
    [sym__variable_pattern] = ACTIONS(405),
    [sym__constructor_pattern] = ACTIONS(557),
    [sym_module_identifier] = ACTIONS(409),
    [sym_comment] = ACTIONS(5),
  },
  [216] = {
    [anon_sym_EQ_GT] = ACTIONS(685),
    [sym_comment] = ACTIONS(5),
  },
  [217] = {
    [sym__layout_semicolon] = ACTIONS(687),
    [anon_sym_SEMI] = ACTIONS(689),
    [anon_sym_DASH_GT] = ACTIONS(691),
    [sym_comment] = ACTIONS(5),
  },
  [218] = {
    [sym_variable_identifier] = STATE(251),
    [anon_sym_LPAREN] = ACTIONS(231),
    [sym__variable_pattern] = ACTIONS(655),
    [sym_comment] = ACTIONS(5),
  },
  [219] = {
    [sym__layout_semicolon] = ACTIONS(693),
    [anon_sym_SEMI] = ACTIONS(695),
    [anon_sym_DASH_GT] = ACTIONS(695),
    [sym_comment] = ACTIONS(5),
  },
  [220] = {
    [ts_builtin_sym_end] = ACTIONS(697),
    [anon_sym_RBRACE] = ACTIONS(699),
    [anon_sym_import] = ACTIONS(699),
    [anon_sym_foreign] = ACTIONS(699),
    [anon_sym_default] = ACTIONS(699),
    [anon_sym_do] = ACTIONS(699),
    [anon_sym_class] = ACTIONS(699),
    [anon_sym_instance] = ACTIONS(699),
    [anon_sym_infixl] = ACTIONS(699),
    [anon_sym_infixr] = ACTIONS(699),
    [anon_sym_infix] = ACTIONS(699),
    [anon_sym_data] = ACTIONS(699),
    [anon_sym_newtype] = ACTIONS(699),
    [anon_sym_type] = ACTIONS(699),
    [sym__variable_pattern] = ACTIONS(701),
    [sym__constructor_pattern] = ACTIONS(701),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(701),
    [anon_sym_SQUOTE] = ACTIONS(699),
    [anon_sym_DQUOTE] = ACTIONS(699),
    [sym__integer_literal] = ACTIONS(699),
    [sym__octal_literal] = ACTIONS(699),
    [sym__hexidecimal_literal] = ACTIONS(699),
  },
  [221] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(360),
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
    [aux_sym_module_repeat1] = STATE(361),
    [sym__layout_close_brace] = ACTIONS(703),
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
  [222] = {
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
    [aux_sym_module_repeat1] = STATE(362),
    [anon_sym_RBRACE] = ACTIONS(705),
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
  [223] = {
    [ts_builtin_sym_end] = ACTIONS(707),
    [sym_comment] = ACTIONS(5),
  },
  [224] = {
    [anon_sym_where] = ACTIONS(709),
    [sym_comment] = ACTIONS(5),
  },
  [225] = {
    [aux_sym_module_exports_repeat1] = STATE(365),
    [anon_sym_COMMA] = ACTIONS(711),
    [anon_sym_RPAREN] = ACTIONS(713),
    [sym_comment] = ACTIONS(5),
  },
  [226] = {
    [anon_sym_LPAREN] = ACTIONS(715),
    [anon_sym_COMMA] = ACTIONS(717),
    [anon_sym_RPAREN] = ACTIONS(717),
    [sym_comment] = ACTIONS(5),
  },
  [227] = {
    [sym_declarations] = STATE(367),
    [sym__layout_open_brace] = ACTIONS(415),
    [anon_sym_LBRACE] = ACTIONS(417),
    [sym_comment] = ACTIONS(5),
  },
  [228] = {
    [sym_module_identifier] = ACTIONS(719),
    [sym_comment] = ACTIONS(5),
  },
  [229] = {
    [sym__layout_semicolon] = ACTIONS(721),
    [anon_sym_SEMI] = ACTIONS(723),
    [sym_comment] = ACTIONS(5),
  },
  [230] = {
    [sym__layout_semicolon] = ACTIONS(725),
    [anon_sym_SEMI] = ACTIONS(727),
    [sym_comment] = ACTIONS(5),
  },
  [231] = {
    [aux_sym_import_specification_repeat1] = STATE(372),
    [anon_sym_LPAREN] = ACTIONS(729),
    [anon_sym_COMMA] = ACTIONS(731),
    [anon_sym_RPAREN] = ACTIONS(733),
    [sym_comment] = ACTIONS(5),
  },
  [232] = {
    [sym_import_specification] = STATE(373),
    [sym__layout_semicolon] = ACTIONS(721),
    [anon_sym_SEMI] = ACTIONS(723),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_hiding] = ACTIONS(205),
    [sym_comment] = ACTIONS(5),
  },
  [233] = {
    [sym__identifier] = STATE(374),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_RPAREN] = ACTIONS(733),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [234] = {
    [sym__variable_pattern] = ACTIONS(735),
    [sym__constructor_pattern] = ACTIONS(737),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(735),
  },
  [235] = {
    [sym__gap] = STATE(76),
    [sym__graphic] = STATE(76),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(76),
    [aux_sym_string_repeat1] = STATE(376),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(739),
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
    [anon_sym_BSLASH] = ACTIONS(125),
    [sym__space] = ACTIONS(127),
    [sym__newline] = ACTIONS(127),
    [sym__tab] = ACTIONS(127),
    [sym__vertical_tab] = ACTIONS(127),
  },
  [236] = {
    [sym_type_signature] = STATE(377),
    [sym__identifier] = STATE(238),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym_string] = STATE(378),
    [sym__variable_pattern] = ACTIONS(655),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(441),
  },
  [237] = {
    [sym__layout_semicolon] = ACTIONS(741),
    [anon_sym_SEMI] = ACTIONS(743),
    [sym_comment] = ACTIONS(5),
  },
  [238] = {
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
  },
  [239] = {
    [sym_type_signature] = STATE(377),
    [sym__identifier] = STATE(238),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(655),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [240] = {
    [sym__identifier] = STATE(379),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [241] = {
    [sym__layout_semicolon] = ACTIONS(745),
    [anon_sym_SEMI] = ACTIONS(747),
    [sym_comment] = ACTIONS(5),
  },
  [242] = {
    [anon_sym_COMMA] = ACTIONS(749),
    [anon_sym_RPAREN] = ACTIONS(751),
    [sym_comment] = ACTIONS(5),
  },
  [243] = {
    [sym__layout_close_brace] = ACTIONS(753),
    [anon_sym_do] = ACTIONS(755),
    [sym__variable_pattern] = ACTIONS(757),
    [sym__constructor_pattern] = ACTIONS(757),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(757),
    [anon_sym_SQUOTE] = ACTIONS(755),
    [anon_sym_DQUOTE] = ACTIONS(755),
    [sym__integer_literal] = ACTIONS(755),
    [sym__octal_literal] = ACTIONS(755),
    [sym__hexidecimal_literal] = ACTIONS(755),
  },
  [244] = {
    [sym__layout_semicolon] = ACTIONS(759),
    [anon_sym_SEMI] = ACTIONS(761),
    [sym_comment] = ACTIONS(5),
  },
  [245] = {
    [sym__layout_close_brace] = ACTIONS(763),
    [anon_sym_do] = ACTIONS(765),
    [sym__variable_pattern] = ACTIONS(767),
    [sym__constructor_pattern] = ACTIONS(767),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(767),
    [anon_sym_SQUOTE] = ACTIONS(765),
    [anon_sym_DQUOTE] = ACTIONS(765),
    [sym__integer_literal] = ACTIONS(765),
    [sym__octal_literal] = ACTIONS(765),
    [sym__hexidecimal_literal] = ACTIONS(765),
  },
  [246] = {
    [anon_sym_RBRACE] = ACTIONS(755),
    [anon_sym_do] = ACTIONS(755),
    [sym__variable_pattern] = ACTIONS(757),
    [sym__constructor_pattern] = ACTIONS(757),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(757),
    [anon_sym_SQUOTE] = ACTIONS(755),
    [anon_sym_DQUOTE] = ACTIONS(755),
    [sym__integer_literal] = ACTIONS(755),
    [sym__octal_literal] = ACTIONS(755),
    [sym__hexidecimal_literal] = ACTIONS(755),
  },
  [247] = {
    [anon_sym_RBRACE] = ACTIONS(765),
    [anon_sym_do] = ACTIONS(765),
    [sym__variable_pattern] = ACTIONS(767),
    [sym__constructor_pattern] = ACTIONS(767),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(767),
    [anon_sym_SQUOTE] = ACTIONS(765),
    [anon_sym_DQUOTE] = ACTIONS(765),
    [sym__integer_literal] = ACTIONS(765),
    [sym__octal_literal] = ACTIONS(765),
    [sym__hexidecimal_literal] = ACTIONS(765),
  },
  [248] = {
    [sym_class] = STATE(382),
    [sym_constructor_identifier] = STATE(128),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [249] = {
    [anon_sym_EQ_GT] = ACTIONS(769),
    [sym_comment] = ACTIONS(5),
  },
  [250] = {
    [anon_sym_COMMA] = ACTIONS(771),
    [anon_sym_RPAREN] = ACTIONS(773),
    [sym_comment] = ACTIONS(5),
  },
  [251] = {
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [sym_comment] = ACTIONS(5),
  },
  [252] = {
    [sym_general_declarations] = STATE(386),
    [sym__layout_open_brace] = ACTIONS(481),
    [anon_sym_LBRACE] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [253] = {
    [anon_sym_where] = ACTIONS(485),
    [sym__variable_pattern] = ACTIONS(489),
    [sym_comment] = ACTIONS(5),
  },
  [254] = {
    [sym_variable_identifier] = STATE(259),
    [anon_sym_where] = ACTIONS(775),
    [sym__variable_pattern] = ACTIONS(233),
    [sym_comment] = ACTIONS(5),
  },
  [255] = {
    [sym__general_declaration] = STATE(389),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(238),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [aux_sym_general_declarations_repeat1] = STATE(390),
    [sym__layout_close_brace] = ACTIONS(777),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [sym__variable_pattern] = ACTIONS(233),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [256] = {
    [sym__general_declaration] = STATE(391),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(238),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [aux_sym_general_declarations_repeat1] = STATE(392),
    [anon_sym_RBRACE] = ACTIONS(779),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [sym__variable_pattern] = ACTIONS(233),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [257] = {
    [sym__layout_semicolon] = ACTIONS(781),
    [anon_sym_SEMI] = ACTIONS(783),
    [sym_comment] = ACTIONS(5),
  },
  [258] = {
    [sym_variable_identifier] = STATE(288),
    [anon_sym_RPAREN] = ACTIONS(785),
    [sym__variable_pattern] = ACTIONS(279),
    [sym_comment] = ACTIONS(5),
  },
  [259] = {
    [anon_sym_where] = ACTIONS(787),
    [sym__variable_pattern] = ACTIONS(789),
    [sym_comment] = ACTIONS(5),
  },
  [260] = {
    [sym_general_declarations] = STATE(394),
    [sym__layout_open_brace] = ACTIONS(481),
    [anon_sym_LBRACE] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [261] = {
    [sym_variable_identifier] = STATE(259),
    [anon_sym_where] = ACTIONS(791),
    [sym__variable_pattern] = ACTIONS(233),
    [sym_comment] = ACTIONS(5),
  },
  [262] = {
    [sym__layout_semicolon] = ACTIONS(793),
    [anon_sym_SEMI] = ACTIONS(795),
    [sym_comment] = ACTIONS(5),
  },
  [263] = {
    [sym__layout_semicolon] = ACTIONS(797),
    [anon_sym_SEMI] = ACTIONS(799),
    [anon_sym_COMMA] = ACTIONS(799),
    [sym_comment] = ACTIONS(5),
  },
  [264] = {
    [sym__layout_semicolon] = ACTIONS(801),
    [anon_sym_SEMI] = ACTIONS(803),
    [anon_sym_COMMA] = ACTIONS(803),
    [anon_sym_DASH] = ACTIONS(803),
    [anon_sym_COLON] = ACTIONS(803),
    [anon_sym_BANG] = ACTIONS(803),
    [anon_sym_DOT] = ACTIONS(803),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(803),
    [anon_sym_DOLLAR] = ACTIONS(803),
    [anon_sym_PERCENT] = ACTIONS(803),
    [anon_sym_AMP] = ACTIONS(803),
    [anon_sym_1] = ACTIONS(803),
    [anon_sym_PLUS] = ACTIONS(803),
    [anon_sym_SLASH] = ACTIONS(803),
    [anon_sym_LT] = ACTIONS(803),
    [anon_sym_GT] = ACTIONS(803),
    [anon_sym_QMARK] = ACTIONS(803),
    [anon_sym_CARET] = ACTIONS(803),
  },
  [265] = {
    [sym__layout_semicolon] = ACTIONS(805),
    [anon_sym_SEMI] = ACTIONS(807),
    [anon_sym_COMMA] = ACTIONS(807),
    [sym_comment] = ACTIONS(5),
  },
  [266] = {
    [sym__op] = STATE(396),
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
  [267] = {
    [sym__layout_semicolon] = ACTIONS(809),
    [anon_sym_SEMI] = ACTIONS(811),
    [anon_sym_COMMA] = ACTIONS(511),
    [sym_comment] = ACTIONS(5),
  },
  [268] = {
    [sym__layout_semicolon] = ACTIONS(813),
    [anon_sym_SEMI] = ACTIONS(815),
    [anon_sym_COMMA] = ACTIONS(815),
    [anon_sym_DASH] = ACTIONS(815),
    [anon_sym_BANG] = ACTIONS(815),
    [anon_sym_DOT] = ACTIONS(815),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(815),
    [anon_sym_DOLLAR] = ACTIONS(815),
    [anon_sym_PERCENT] = ACTIONS(815),
    [anon_sym_AMP] = ACTIONS(815),
    [anon_sym_1] = ACTIONS(815),
    [anon_sym_PLUS] = ACTIONS(815),
    [anon_sym_SLASH] = ACTIONS(815),
    [anon_sym_LT] = ACTIONS(815),
    [anon_sym_GT] = ACTIONS(815),
    [anon_sym_QMARK] = ACTIONS(815),
    [anon_sym_CARET] = ACTIONS(815),
  },
  [269] = {
    [sym_constructors] = STATE(397),
    [sym_constructor] = STATE(153),
    [sym_deriving] = STATE(398),
    [sym_constructor_identifier] = STATE(155),
    [sym__layout_semicolon] = ACTIONS(817),
    [anon_sym_SEMI] = ACTIONS(819),
    [anon_sym_deriving] = ACTIONS(267),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [270] = {
    [sym_deriving] = STATE(398),
    [sym__layout_semicolon] = ACTIONS(817),
    [anon_sym_SEMI] = ACTIONS(819),
    [anon_sym_deriving] = ACTIONS(267),
    [sym_comment] = ACTIONS(5),
  },
  [271] = {
    [sym__layout_semicolon] = ACTIONS(817),
    [anon_sym_SEMI] = ACTIONS(819),
    [sym_comment] = ACTIONS(5),
  },
  [272] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_deriving] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
  },
  [273] = {
    [sym__layout_semicolon] = ACTIONS(545),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_deriving] = ACTIONS(485),
    [sym__variable_pattern] = ACTIONS(489),
    [sym__constructor_pattern] = ACTIONS(489),
    [sym_comment] = ACTIONS(5),
  },
  [274] = {
    [sym__identifier] = STATE(399),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [275] = {
    [sym__layout_semicolon] = ACTIONS(821),
    [anon_sym_SEMI] = ACTIONS(823),
    [sym_comment] = ACTIONS(5),
  },
  [276] = {
    [sym_constructor] = STATE(400),
    [sym_constructor_identifier] = STATE(155),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [277] = {
    [sym__layout_semicolon] = ACTIONS(825),
    [anon_sym_SEMI] = ACTIONS(827),
    [anon_sym_PIPE] = ACTIONS(829),
    [anon_sym_deriving] = ACTIONS(827),
    [sym_comment] = ACTIONS(5),
  },
  [278] = {
    [sym_field] = STATE(402),
    [sym_variable_identifier] = STATE(403),
    [sym__variable_pattern] = ACTIONS(655),
    [sym_comment] = ACTIONS(5),
  },
  [279] = {
    [sym__identifier] = STATE(404),
    [sym_variable_identifier] = STATE(281),
    [sym_constructor_identifier] = STATE(281),
    [sym__variable_pattern] = ACTIONS(831),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [280] = {
    [sym__layout_semicolon] = ACTIONS(833),
    [anon_sym_SEMI] = ACTIONS(835),
    [anon_sym_PIPE] = ACTIONS(835),
    [anon_sym_deriving] = ACTIONS(835),
    [anon_sym_BANG] = ACTIONS(835),
    [sym__variable_pattern] = ACTIONS(837),
    [sym__constructor_pattern] = ACTIONS(837),
    [sym_comment] = ACTIONS(5),
  },
  [281] = {
    [sym__layout_semicolon] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_PIPE] = ACTIONS(185),
    [anon_sym_deriving] = ACTIONS(185),
    [anon_sym_BANG] = ACTIONS(185),
    [sym__variable_pattern] = ACTIONS(187),
    [sym__constructor_pattern] = ACTIONS(187),
    [sym_comment] = ACTIONS(5),
  },
  [282] = {
    [sym__layout_semicolon] = ACTIONS(839),
    [anon_sym_SEMI] = ACTIONS(841),
    [anon_sym_PIPE] = ACTIONS(841),
    [anon_sym_deriving] = ACTIONS(841),
    [sym_comment] = ACTIONS(5),
  },
  [283] = {
    [sym_strict] = STATE(405),
    [sym__identifier] = STATE(405),
    [sym_variable_identifier] = STATE(281),
    [sym_constructor_identifier] = STATE(281),
    [sym__layout_semicolon] = ACTIONS(839),
    [anon_sym_SEMI] = ACTIONS(841),
    [anon_sym_PIPE] = ACTIONS(841),
    [anon_sym_deriving] = ACTIONS(841),
    [anon_sym_BANG] = ACTIONS(543),
    [sym__variable_pattern] = ACTIONS(273),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [284] = {
    [sym__layout_semicolon] = ACTIONS(843),
    [anon_sym_SEMI] = ACTIONS(787),
    [anon_sym_EQ] = ACTIONS(787),
    [anon_sym_deriving] = ACTIONS(787),
    [sym__variable_pattern] = ACTIONS(789),
    [sym__constructor_pattern] = ACTIONS(789),
    [sym_comment] = ACTIONS(5),
  },
  [285] = {
    [sym_new_constructor] = STATE(406),
    [sym_constructor_identifier] = STATE(287),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [286] = {
    [sym_deriving] = STATE(407),
    [sym__layout_semicolon] = ACTIONS(845),
    [anon_sym_SEMI] = ACTIONS(847),
    [anon_sym_deriving] = ACTIONS(267),
    [sym_comment] = ACTIONS(5),
  },
  [287] = {
    [sym__identifier] = STATE(408),
    [sym_variable_identifier] = STATE(281),
    [sym_constructor_identifier] = STATE(281),
    [sym_fields] = STATE(408),
    [anon_sym_LBRACE] = ACTIONS(541),
    [sym__variable_pattern] = ACTIONS(831),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [288] = {
    [anon_sym_LBRACE] = ACTIONS(787),
    [anon_sym_LPAREN] = ACTIONS(787),
    [anon_sym_COMMA] = ACTIONS(787),
    [anon_sym_RPAREN] = ACTIONS(787),
    [anon_sym_EQ] = ACTIONS(787),
    [anon_sym_LBRACK] = ACTIONS(787),
    [anon_sym_RBRACK] = ACTIONS(787),
    [anon_sym_DASH_GT] = ACTIONS(787),
    [sym_unit_type] = ACTIONS(787),
    [sym_list_constructor] = ACTIONS(787),
    [sym_function_constructor] = ACTIONS(787),
    [sym__variable_pattern] = ACTIONS(787),
    [sym__constructor_pattern] = ACTIONS(789),
    [sym_module_identifier] = ACTIONS(789),
    [sym_comment] = ACTIONS(5),
  },
  [289] = {
    [sym_type] = STATE(339),
    [sym__generic_type_constructor] = STATE(340),
    [sym_tupling_constructor] = STATE(336),
    [sym_tuple] = STATE(340),
    [sym_list] = STATE(340),
    [sym_parenthesized_constructor] = STATE(340),
    [sym_variable_identifier] = STATE(342),
    [sym__type_constructors] = STATE(336),
    [sym_qualified_type_constructor] = STATE(343),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_COMMA] = ACTIONS(649),
    [anon_sym_LBRACK] = ACTIONS(651),
    [sym_unit_type] = ACTIONS(653),
    [sym_list_constructor] = ACTIONS(653),
    [sym_function_constructor] = ACTIONS(653),
    [sym__variable_pattern] = ACTIONS(655),
    [sym__constructor_pattern] = ACTIONS(661),
    [sym_module_identifier] = ACTIONS(659),
    [sym_comment] = ACTIONS(5),
  },
  [290] = {
    [sym_variable_identifier] = STATE(350),
    [aux_sym_type_class_repeat1] = STATE(351),
    [sym__layout_semicolon] = ACTIONS(669),
    [anon_sym_SEMI] = ACTIONS(671),
    [anon_sym_DASH_GT] = ACTIONS(671),
    [sym__variable_pattern] = ACTIONS(361),
    [sym_comment] = ACTIONS(5),
  },
  [291] = {
    [sym__layout_semicolon] = ACTIONS(849),
    [anon_sym_SEMI] = ACTIONS(851),
    [sym_comment] = ACTIONS(5),
  },
  [292] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(853),
  },
  [293] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(855),
  },
  [294] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(857),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(857),
  },
  [295] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(859),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(861),
  },
  [296] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(863),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(863),
  },
  [297] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(859),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(865),
  },
  [298] = {
    [anon_sym_SEMI] = ACTIONS(867),
    [anon_sym_LBRACE] = ACTIONS(867),
    [anon_sym_RBRACE] = ACTIONS(867),
    [anon_sym_LPAREN] = ACTIONS(867),
    [anon_sym_RPAREN] = ACTIONS(867),
    [anon_sym_EQ] = ACTIONS(867),
    [anon_sym_TILDE] = ACTIONS(867),
    [anon_sym_LBRACK] = ACTIONS(867),
    [anon_sym_RBRACK] = ACTIONS(867),
    [anon_sym_DASH] = ACTIONS(867),
    [anon_sym_AT] = ACTIONS(867),
    [anon_sym__] = ACTIONS(867),
    [anon_sym_BQUOTE] = ACTIONS(867),
    [anon_sym_COLON] = ACTIONS(867),
    [anon_sym_PIPE] = ACTIONS(867),
    [anon_sym_BANG] = ACTIONS(867),
    [anon_sym_DOT] = ACTIONS(867),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(867),
    [anon_sym_DQUOTE] = ACTIONS(867),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(867),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(867),
    [sym__ascii_large] = ACTIONS(867),
    [anon_sym_POUND] = ACTIONS(867),
    [anon_sym_DOLLAR] = ACTIONS(867),
    [anon_sym_PERCENT] = ACTIONS(867),
    [anon_sym_AMP] = ACTIONS(867),
    [anon_sym_1] = ACTIONS(867),
    [anon_sym_PLUS] = ACTIONS(867),
    [anon_sym_SLASH] = ACTIONS(867),
    [anon_sym_LT] = ACTIONS(867),
    [anon_sym_GT] = ACTIONS(867),
    [anon_sym_QMARK] = ACTIONS(867),
    [anon_sym_CARET] = ACTIONS(867),
    [anon_sym_BSLASH] = ACTIONS(867),
    [sym__space] = ACTIONS(867),
    [sym__newline] = ACTIONS(867),
    [sym__tab] = ACTIONS(867),
    [sym__vertical_tab] = ACTIONS(867),
  },
  [299] = {
    [anon_sym_SEMI] = ACTIONS(869),
    [anon_sym_LBRACE] = ACTIONS(869),
    [anon_sym_RBRACE] = ACTIONS(869),
    [anon_sym_LPAREN] = ACTIONS(869),
    [anon_sym_RPAREN] = ACTIONS(869),
    [anon_sym_EQ] = ACTIONS(869),
    [anon_sym_TILDE] = ACTIONS(869),
    [anon_sym_LBRACK] = ACTIONS(869),
    [anon_sym_RBRACK] = ACTIONS(869),
    [anon_sym_DASH] = ACTIONS(869),
    [anon_sym_AT] = ACTIONS(869),
    [anon_sym__] = ACTIONS(869),
    [anon_sym_BQUOTE] = ACTIONS(869),
    [anon_sym_COLON] = ACTIONS(869),
    [anon_sym_PIPE] = ACTIONS(869),
    [anon_sym_BANG] = ACTIONS(869),
    [anon_sym_DOT] = ACTIONS(869),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(869),
    [anon_sym_DQUOTE] = ACTIONS(869),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(869),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(869),
    [sym__ascii_large] = ACTIONS(869),
    [anon_sym_POUND] = ACTIONS(869),
    [anon_sym_DOLLAR] = ACTIONS(869),
    [anon_sym_PERCENT] = ACTIONS(869),
    [anon_sym_AMP] = ACTIONS(869),
    [anon_sym_1] = ACTIONS(869),
    [anon_sym_PLUS] = ACTIONS(869),
    [anon_sym_SLASH] = ACTIONS(869),
    [anon_sym_LT] = ACTIONS(869),
    [anon_sym_GT] = ACTIONS(869),
    [anon_sym_QMARK] = ACTIONS(869),
    [anon_sym_CARET] = ACTIONS(869),
    [anon_sym_BSLASH] = ACTIONS(869),
    [sym__space] = ACTIONS(869),
    [sym__newline] = ACTIONS(869),
    [sym__tab] = ACTIONS(869),
    [sym__vertical_tab] = ACTIONS(869),
  },
  [300] = {
    [anon_sym_SEMI] = ACTIONS(871),
    [anon_sym_LBRACE] = ACTIONS(871),
    [anon_sym_RBRACE] = ACTIONS(871),
    [anon_sym_LPAREN] = ACTIONS(871),
    [anon_sym_RPAREN] = ACTIONS(871),
    [anon_sym_EQ] = ACTIONS(871),
    [anon_sym_TILDE] = ACTIONS(871),
    [anon_sym_LBRACK] = ACTIONS(871),
    [anon_sym_RBRACK] = ACTIONS(871),
    [anon_sym_DASH] = ACTIONS(871),
    [anon_sym_AT] = ACTIONS(871),
    [anon_sym__] = ACTIONS(871),
    [anon_sym_BQUOTE] = ACTIONS(871),
    [anon_sym_COLON] = ACTIONS(871),
    [anon_sym_PIPE] = ACTIONS(871),
    [anon_sym_BANG] = ACTIONS(871),
    [anon_sym_DOT] = ACTIONS(871),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(871),
    [anon_sym_DQUOTE] = ACTIONS(871),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(871),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(871),
    [sym__ascii_large] = ACTIONS(871),
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
    [anon_sym_BSLASH] = ACTIONS(871),
    [sym__space] = ACTIONS(871),
    [sym__newline] = ACTIONS(871),
    [sym__tab] = ACTIONS(871),
    [sym__vertical_tab] = ACTIONS(871),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(871),
  },
  [301] = {
    [anon_sym_SEMI] = ACTIONS(873),
    [anon_sym_LBRACE] = ACTIONS(873),
    [anon_sym_RBRACE] = ACTIONS(873),
    [anon_sym_LPAREN] = ACTIONS(873),
    [anon_sym_RPAREN] = ACTIONS(873),
    [anon_sym_EQ] = ACTIONS(873),
    [anon_sym_TILDE] = ACTIONS(873),
    [anon_sym_LBRACK] = ACTIONS(873),
    [anon_sym_RBRACK] = ACTIONS(873),
    [anon_sym_DASH] = ACTIONS(873),
    [anon_sym_AT] = ACTIONS(873),
    [anon_sym__] = ACTIONS(873),
    [anon_sym_BQUOTE] = ACTIONS(873),
    [anon_sym_COLON] = ACTIONS(873),
    [anon_sym_PIPE] = ACTIONS(873),
    [anon_sym_BANG] = ACTIONS(873),
    [anon_sym_DOT] = ACTIONS(873),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(873),
    [anon_sym_DQUOTE] = ACTIONS(873),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(873),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(873),
    [sym__ascii_large] = ACTIONS(873),
    [anon_sym_POUND] = ACTIONS(873),
    [anon_sym_DOLLAR] = ACTIONS(873),
    [anon_sym_PERCENT] = ACTIONS(873),
    [anon_sym_AMP] = ACTIONS(873),
    [anon_sym_1] = ACTIONS(873),
    [anon_sym_PLUS] = ACTIONS(873),
    [anon_sym_SLASH] = ACTIONS(873),
    [anon_sym_LT] = ACTIONS(873),
    [anon_sym_GT] = ACTIONS(873),
    [anon_sym_QMARK] = ACTIONS(873),
    [anon_sym_CARET] = ACTIONS(873),
    [anon_sym_BSLASH] = ACTIONS(873),
    [sym__space] = ACTIONS(873),
    [sym__newline] = ACTIONS(873),
    [sym__tab] = ACTIONS(873),
    [sym__vertical_tab] = ACTIONS(873),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(875),
  },
  [302] = {
    [anon_sym_SEMI] = ACTIONS(877),
    [anon_sym_LBRACE] = ACTIONS(877),
    [anon_sym_RBRACE] = ACTIONS(877),
    [anon_sym_LPAREN] = ACTIONS(877),
    [anon_sym_RPAREN] = ACTIONS(877),
    [anon_sym_EQ] = ACTIONS(877),
    [anon_sym_TILDE] = ACTIONS(877),
    [anon_sym_LBRACK] = ACTIONS(877),
    [anon_sym_RBRACK] = ACTIONS(877),
    [anon_sym_DASH] = ACTIONS(877),
    [anon_sym_AT] = ACTIONS(877),
    [anon_sym__] = ACTIONS(877),
    [anon_sym_BQUOTE] = ACTIONS(877),
    [anon_sym_COLON] = ACTIONS(877),
    [anon_sym_PIPE] = ACTIONS(877),
    [anon_sym_BANG] = ACTIONS(877),
    [anon_sym_DOT] = ACTIONS(877),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(877),
    [anon_sym_DQUOTE] = ACTIONS(877),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(877),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(877),
    [sym__ascii_large] = ACTIONS(877),
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
    [anon_sym_BSLASH] = ACTIONS(877),
    [sym__space] = ACTIONS(877),
    [sym__newline] = ACTIONS(877),
    [sym__tab] = ACTIONS(877),
    [sym__vertical_tab] = ACTIONS(877),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(877),
  },
  [303] = {
    [anon_sym_SEMI] = ACTIONS(873),
    [anon_sym_LBRACE] = ACTIONS(873),
    [anon_sym_RBRACE] = ACTIONS(873),
    [anon_sym_LPAREN] = ACTIONS(873),
    [anon_sym_RPAREN] = ACTIONS(873),
    [anon_sym_EQ] = ACTIONS(873),
    [anon_sym_TILDE] = ACTIONS(873),
    [anon_sym_LBRACK] = ACTIONS(873),
    [anon_sym_RBRACK] = ACTIONS(873),
    [anon_sym_DASH] = ACTIONS(873),
    [anon_sym_AT] = ACTIONS(873),
    [anon_sym__] = ACTIONS(873),
    [anon_sym_BQUOTE] = ACTIONS(873),
    [anon_sym_COLON] = ACTIONS(873),
    [anon_sym_PIPE] = ACTIONS(873),
    [anon_sym_BANG] = ACTIONS(873),
    [anon_sym_DOT] = ACTIONS(873),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(873),
    [anon_sym_DQUOTE] = ACTIONS(873),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(873),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(873),
    [sym__ascii_large] = ACTIONS(873),
    [anon_sym_POUND] = ACTIONS(873),
    [anon_sym_DOLLAR] = ACTIONS(873),
    [anon_sym_PERCENT] = ACTIONS(873),
    [anon_sym_AMP] = ACTIONS(873),
    [anon_sym_1] = ACTIONS(873),
    [anon_sym_PLUS] = ACTIONS(873),
    [anon_sym_SLASH] = ACTIONS(873),
    [anon_sym_LT] = ACTIONS(873),
    [anon_sym_GT] = ACTIONS(873),
    [anon_sym_QMARK] = ACTIONS(873),
    [anon_sym_CARET] = ACTIONS(873),
    [anon_sym_BSLASH] = ACTIONS(873),
    [sym__space] = ACTIONS(873),
    [sym__newline] = ACTIONS(873),
    [sym__tab] = ACTIONS(873),
    [sym__vertical_tab] = ACTIONS(873),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(879),
  },
  [304] = {
    [sym__layout_semicolon] = ACTIONS(881),
    [anon_sym_SEMI] = ACTIONS(883),
    [sym__variable_pattern] = ACTIONS(883),
    [sym__constructor_pattern] = ACTIONS(885),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(885),
    [anon_sym_SQUOTE] = ACTIONS(883),
    [anon_sym_DQUOTE] = ACTIONS(883),
    [sym__integer_literal] = ACTIONS(883),
    [sym__octal_literal] = ACTIONS(883),
    [sym__hexidecimal_literal] = ACTIONS(883),
  },
  [305] = {
    [sym__literal] = STATE(413),
    [sym_variable_identifier] = STATE(413),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [sym__layout_semicolon] = ACTIONS(887),
    [anon_sym_SEMI] = ACTIONS(889),
    [sym__variable_pattern] = ACTIONS(889),
    [sym__constructor_pattern] = ACTIONS(891),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(891),
    [anon_sym_SQUOTE] = ACTIONS(889),
    [anon_sym_DQUOTE] = ACTIONS(889),
    [sym__integer_literal] = ACTIONS(889),
    [sym__octal_literal] = ACTIONS(889),
    [sym__hexidecimal_literal] = ACTIONS(889),
  },
  [306] = {
    [sym__layout_semicolon] = ACTIONS(893),
    [anon_sym_SEMI] = ACTIONS(895),
    [sym__variable_pattern] = ACTIONS(895),
    [sym__constructor_pattern] = ACTIONS(897),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(897),
    [anon_sym_SQUOTE] = ACTIONS(895),
    [anon_sym_DQUOTE] = ACTIONS(895),
    [sym__integer_literal] = ACTIONS(895),
    [sym__octal_literal] = ACTIONS(895),
    [sym__hexidecimal_literal] = ACTIONS(895),
  },
  [307] = {
    [sym__literal] = STATE(414),
    [sym_integer] = STATE(93),
    [sym_char] = STATE(93),
    [sym_string] = STATE(93),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [308] = {
    [sym__function_pattern] = STATE(415),
    [sym_irrefutable_pattern] = STATE(90),
    [sym_list_pattern] = STATE(90),
    [sym_tuple_pattern] = STATE(90),
    [sym_parenthesized_pattern] = STATE(90),
    [sym__pattern] = STATE(416),
    [sym_negative_literal] = STATE(192),
    [sym_general_constructor] = STATE(192),
    [sym_as_pattern] = STATE(90),
    [sym_wildcard] = STATE(90),
    [sym__variable] = STATE(193),
    [sym_qualified_variable_identifier] = STATE(98),
    [sym__literal] = STATE(90),
    [sym__identifier] = STATE(99),
    [sym_simple_type] = STATE(100),
    [sym_variable_identifier] = STATE(101),
    [sym_constructor_identifier] = STATE(194),
    [sym_integer] = STATE(93),
    [sym_char] = STATE(93),
    [sym_string] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(371),
    [anon_sym__] = ACTIONS(157),
    [sym_list_constructor] = ACTIONS(159),
    [sym__variable_pattern] = ACTIONS(161),
    [sym__constructor_pattern] = ACTIONS(373),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [309] = {
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
  [310] = {
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_TILDE] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym__] = ACTIONS(239),
    [sym_list_constructor] = ACTIONS(239),
    [anon_sym_BANG] = ACTIONS(239),
    [sym__variable_pattern] = ACTIONS(903),
    [sym__constructor_pattern] = ACTIONS(903),
    [anon_sym_DOT] = ACTIONS(239),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(903),
    [anon_sym_SQUOTE] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(239),
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
    [sym__integer_literal] = ACTIONS(239),
    [sym__octal_literal] = ACTIONS(239),
    [sym__hexidecimal_literal] = ACTIONS(239),
  },
  [311] = {
    [sym__identifier] = STATE(417),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [312] = {
    [sym__constructor_symbol] = STATE(419),
    [aux_sym_constructor_symbol_repeat1] = STATE(420),
    [anon_sym_LPAREN] = ACTIONS(243),
    [anon_sym_TILDE] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(243),
    [anon_sym__] = ACTIONS(243),
    [anon_sym_COLON] = ACTIONS(905),
    [sym_list_constructor] = ACTIONS(243),
    [anon_sym_BANG] = ACTIONS(905),
    [sym__variable_pattern] = ACTIONS(907),
    [sym__constructor_pattern] = ACTIONS(907),
    [anon_sym_DOT] = ACTIONS(905),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(907),
    [anon_sym_SQUOTE] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(243),
    [anon_sym_POUND] = ACTIONS(905),
    [anon_sym_DOLLAR] = ACTIONS(905),
    [anon_sym_PERCENT] = ACTIONS(905),
    [anon_sym_AMP] = ACTIONS(905),
    [anon_sym_1] = ACTIONS(905),
    [anon_sym_PLUS] = ACTIONS(905),
    [anon_sym_SLASH] = ACTIONS(905),
    [anon_sym_LT] = ACTIONS(905),
    [anon_sym_GT] = ACTIONS(905),
    [anon_sym_QMARK] = ACTIONS(905),
    [anon_sym_CARET] = ACTIONS(905),
    [sym__integer_literal] = ACTIONS(243),
    [sym__octal_literal] = ACTIONS(243),
    [sym__hexidecimal_literal] = ACTIONS(243),
  },
  [313] = {
    [sym__function_pattern] = STATE(421),
    [sym_irrefutable_pattern] = STATE(90),
    [sym_list_pattern] = STATE(90),
    [sym_tuple_pattern] = STATE(90),
    [sym_parenthesized_pattern] = STATE(90),
    [sym__pattern] = STATE(422),
    [sym_negative_literal] = STATE(192),
    [sym_general_constructor] = STATE(192),
    [sym_as_pattern] = STATE(90),
    [sym_wildcard] = STATE(90),
    [sym__variable] = STATE(193),
    [sym_qualified_variable_identifier] = STATE(98),
    [sym__literal] = STATE(90),
    [sym__identifier] = STATE(99),
    [sym_simple_type] = STATE(100),
    [sym_variable_identifier] = STATE(101),
    [sym_constructor_identifier] = STATE(194),
    [sym_integer] = STATE(93),
    [sym_char] = STATE(93),
    [sym_string] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(371),
    [anon_sym__] = ACTIONS(157),
    [sym_list_constructor] = ACTIONS(159),
    [sym__variable_pattern] = ACTIONS(161),
    [sym__constructor_pattern] = ACTIONS(373),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [314] = {
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_TILDE] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym__] = ACTIONS(255),
    [sym_list_constructor] = ACTIONS(255),
    [sym__variable_pattern] = ACTIONS(909),
    [sym__constructor_pattern] = ACTIONS(909),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(909),
    [anon_sym_SQUOTE] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(255),
    [sym__integer_literal] = ACTIONS(255),
    [sym__octal_literal] = ACTIONS(255),
    [sym__hexidecimal_literal] = ACTIONS(255),
  },
  [315] = {
    [sym__variable_symbol] = STATE(423),
    [aux_sym_variable_symbol_repeat1] = STATE(424),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_TILDE] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym__] = ACTIONS(259),
    [sym_list_constructor] = ACTIONS(259),
    [anon_sym_BANG] = ACTIONS(613),
    [sym__variable_pattern] = ACTIONS(911),
    [sym__constructor_pattern] = ACTIONS(911),
    [anon_sym_DOT] = ACTIONS(613),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(911),
    [anon_sym_SQUOTE] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_POUND] = ACTIONS(613),
    [anon_sym_DOLLAR] = ACTIONS(613),
    [anon_sym_PERCENT] = ACTIONS(613),
    [anon_sym_AMP] = ACTIONS(613),
    [anon_sym_1] = ACTIONS(613),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_SLASH] = ACTIONS(613),
    [anon_sym_LT] = ACTIONS(613),
    [anon_sym_GT] = ACTIONS(613),
    [anon_sym_QMARK] = ACTIONS(613),
    [anon_sym_CARET] = ACTIONS(613),
    [sym__integer_literal] = ACTIONS(259),
    [sym__octal_literal] = ACTIONS(259),
    [sym__hexidecimal_literal] = ACTIONS(259),
  },
  [316] = {
    [anon_sym_COMMA] = ACTIONS(913),
    [anon_sym_RPAREN] = ACTIONS(915),
    [sym_comment] = ACTIONS(5),
  },
  [317] = {
    [sym__function_pattern] = STATE(328),
    [sym_irrefutable_pattern] = STATE(90),
    [sym_list_pattern] = STATE(90),
    [sym_tuple_pattern] = STATE(90),
    [sym_parenthesized_pattern] = STATE(90),
    [sym_as_pattern] = STATE(90),
    [sym_wildcard] = STATE(90),
    [sym__variable] = STATE(193),
    [sym_qualified_variable_identifier] = STATE(98),
    [sym__literal] = STATE(90),
    [sym__identifier] = STATE(99),
    [sym_simple_type] = STATE(100),
    [sym_variable_identifier] = STATE(101),
    [sym_constructor_identifier] = STATE(199),
    [sym_integer] = STATE(93),
    [sym_char] = STATE(93),
    [sym_string] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym__] = ACTIONS(157),
    [sym_list_constructor] = ACTIONS(159),
    [sym__variable_pattern] = ACTIONS(161),
    [sym__constructor_pattern] = ACTIONS(373),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [318] = {
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [sym__variable_pattern] = ACTIONS(91),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym__integer_literal] = ACTIONS(91),
    [sym__octal_literal] = ACTIONS(91),
    [sym__hexidecimal_literal] = ACTIONS(91),
  },
  [319] = {
    [sym__graphic] = STATE(427),
    [sym__small] = STATE(70),
    [sym__large] = STATE(70),
    [sym__symbol] = STATE(70),
    [sym__special] = STATE(70),
    [sym__escape] = STATE(427),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_BANG] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(97),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(917),
    [anon_sym_DQUOTE] = ACTIONS(917),
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
    [anon_sym_BSLASH] = ACTIONS(109),
    [sym__space] = ACTIONS(917),
  },
  [320] = {
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [sym__variable_pattern] = ACTIONS(131),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [sym__integer_literal] = ACTIONS(131),
    [sym__octal_literal] = ACTIONS(131),
    [sym__hexidecimal_literal] = ACTIONS(131),
  },
  [321] = {
    [anon_sym_COMMA] = ACTIONS(883),
    [anon_sym_RPAREN] = ACTIONS(883),
    [sym__variable_pattern] = ACTIONS(883),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(885),
    [anon_sym_SQUOTE] = ACTIONS(883),
    [anon_sym_DQUOTE] = ACTIONS(883),
    [sym__integer_literal] = ACTIONS(883),
    [sym__octal_literal] = ACTIONS(883),
    [sym__hexidecimal_literal] = ACTIONS(883),
  },
  [322] = {
    [anon_sym_LBRACE] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(883),
    [anon_sym_RPAREN] = ACTIONS(883),
    [sym__variable_pattern] = ACTIONS(919),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(885),
    [anon_sym_SQUOTE] = ACTIONS(883),
    [anon_sym_DQUOTE] = ACTIONS(883),
    [sym__integer_literal] = ACTIONS(883),
    [sym__octal_literal] = ACTIONS(883),
    [sym__hexidecimal_literal] = ACTIONS(883),
  },
  [323] = {
    [sym__literal] = STATE(428),
    [sym_variable_identifier] = STATE(428),
    [sym_integer] = STATE(318),
    [sym_char] = STATE(318),
    [sym_string] = STATE(318),
    [anon_sym_COMMA] = ACTIONS(889),
    [anon_sym_RPAREN] = ACTIONS(889),
    [sym__variable_pattern] = ACTIONS(279),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(623),
    [anon_sym_SQUOTE] = ACTIONS(625),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [sym__integer_literal] = ACTIONS(627),
    [sym__octal_literal] = ACTIONS(627),
    [sym__hexidecimal_literal] = ACTIONS(627),
  },
  [324] = {
    [anon_sym_LPAREN] = ACTIONS(922),
    [anon_sym_COMMA] = ACTIONS(922),
    [anon_sym_RPAREN] = ACTIONS(922),
    [anon_sym_EQ] = ACTIONS(922),
    [anon_sym_TILDE] = ACTIONS(922),
    [anon_sym_LBRACK] = ACTIONS(922),
    [anon_sym_RBRACK] = ACTIONS(922),
    [anon_sym_DASH] = ACTIONS(922),
    [anon_sym__] = ACTIONS(922),
    [anon_sym_BQUOTE] = ACTIONS(922),
    [anon_sym_COLON] = ACTIONS(922),
    [sym_list_constructor] = ACTIONS(922),
    [anon_sym_BANG] = ACTIONS(922),
    [sym__variable_pattern] = ACTIONS(924),
    [sym__constructor_pattern] = ACTIONS(924),
    [anon_sym_DOT] = ACTIONS(922),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(924),
    [anon_sym_SQUOTE] = ACTIONS(922),
    [anon_sym_DQUOTE] = ACTIONS(922),
    [anon_sym_POUND] = ACTIONS(922),
    [anon_sym_DOLLAR] = ACTIONS(922),
    [anon_sym_PERCENT] = ACTIONS(922),
    [anon_sym_AMP] = ACTIONS(922),
    [anon_sym_1] = ACTIONS(922),
    [anon_sym_PLUS] = ACTIONS(922),
    [anon_sym_SLASH] = ACTIONS(922),
    [anon_sym_LT] = ACTIONS(922),
    [anon_sym_GT] = ACTIONS(922),
    [anon_sym_QMARK] = ACTIONS(922),
    [anon_sym_CARET] = ACTIONS(922),
    [sym__integer_literal] = ACTIONS(922),
    [sym__octal_literal] = ACTIONS(922),
    [sym__hexidecimal_literal] = ACTIONS(922),
  },
  [325] = {
    [sym__function_pattern] = STATE(328),
    [sym_irrefutable_pattern] = STATE(90),
    [sym_list_pattern] = STATE(90),
    [sym_tuple_pattern] = STATE(90),
    [sym_parenthesized_pattern] = STATE(90),
    [sym_as_pattern] = STATE(90),
    [sym_wildcard] = STATE(90),
    [sym__variable] = STATE(198),
    [sym_qualified_variable_identifier] = STATE(98),
    [sym__literal] = STATE(90),
    [sym__identifier] = STATE(99),
    [sym_simple_type] = STATE(100),
    [sym_variable_identifier] = STATE(101),
    [sym_constructor_identifier] = STATE(199),
    [sym_integer] = STATE(93),
    [sym_char] = STATE(93),
    [sym_string] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym__] = ACTIONS(157),
    [sym_list_constructor] = ACTIONS(159),
    [sym__variable_pattern] = ACTIONS(161),
    [sym__constructor_pattern] = ACTIONS(373),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [326] = {
    [anon_sym_RBRACE] = ACTIONS(561),
    [anon_sym_LPAREN] = ACTIONS(561),
    [anon_sym_COMMA] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(561),
    [anon_sym_EQ] = ACTIONS(561),
    [anon_sym_TILDE] = ACTIONS(561),
    [anon_sym_LBRACK] = ACTIONS(561),
    [anon_sym_RBRACK] = ACTIONS(561),
    [anon_sym_DASH] = ACTIONS(561),
    [anon_sym__] = ACTIONS(561),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [anon_sym_COLON] = ACTIONS(561),
    [sym_list_constructor] = ACTIONS(561),
    [anon_sym_BANG] = ACTIONS(561),
    [sym__variable_pattern] = ACTIONS(563),
    [sym__constructor_pattern] = ACTIONS(563),
    [anon_sym_DOT] = ACTIONS(561),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(563),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [anon_sym_POUND] = ACTIONS(561),
    [anon_sym_DOLLAR] = ACTIONS(561),
    [anon_sym_PERCENT] = ACTIONS(561),
    [anon_sym_AMP] = ACTIONS(561),
    [anon_sym_1] = ACTIONS(561),
    [anon_sym_PLUS] = ACTIONS(561),
    [anon_sym_SLASH] = ACTIONS(561),
    [anon_sym_LT] = ACTIONS(561),
    [anon_sym_GT] = ACTIONS(561),
    [anon_sym_QMARK] = ACTIONS(561),
    [anon_sym_CARET] = ACTIONS(561),
    [sym__integer_literal] = ACTIONS(561),
    [sym__octal_literal] = ACTIONS(561),
    [sym__hexidecimal_literal] = ACTIONS(561),
  },
  [327] = {
    [anon_sym_RBRACE] = ACTIONS(593),
    [anon_sym_LPAREN] = ACTIONS(593),
    [anon_sym_COMMA] = ACTIONS(593),
    [anon_sym_RPAREN] = ACTIONS(593),
    [anon_sym_EQ] = ACTIONS(593),
    [anon_sym_TILDE] = ACTIONS(593),
    [anon_sym_LBRACK] = ACTIONS(593),
    [anon_sym_RBRACK] = ACTIONS(593),
    [anon_sym_DASH] = ACTIONS(593),
    [anon_sym__] = ACTIONS(593),
    [anon_sym_BQUOTE] = ACTIONS(593),
    [anon_sym_COLON] = ACTIONS(593),
    [sym_list_constructor] = ACTIONS(593),
    [anon_sym_BANG] = ACTIONS(593),
    [sym__variable_pattern] = ACTIONS(595),
    [sym__constructor_pattern] = ACTIONS(595),
    [anon_sym_DOT] = ACTIONS(593),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(595),
    [anon_sym_SQUOTE] = ACTIONS(593),
    [anon_sym_DQUOTE] = ACTIONS(593),
    [anon_sym_POUND] = ACTIONS(593),
    [anon_sym_DOLLAR] = ACTIONS(593),
    [anon_sym_PERCENT] = ACTIONS(593),
    [anon_sym_AMP] = ACTIONS(593),
    [anon_sym_1] = ACTIONS(593),
    [anon_sym_PLUS] = ACTIONS(593),
    [anon_sym_SLASH] = ACTIONS(593),
    [anon_sym_LT] = ACTIONS(593),
    [anon_sym_GT] = ACTIONS(593),
    [anon_sym_QMARK] = ACTIONS(593),
    [anon_sym_CARET] = ACTIONS(593),
    [sym__integer_literal] = ACTIONS(593),
    [sym__octal_literal] = ACTIONS(593),
    [sym__hexidecimal_literal] = ACTIONS(593),
  },
  [328] = {
    [anon_sym_LPAREN] = ACTIONS(926),
    [anon_sym_COMMA] = ACTIONS(926),
    [anon_sym_RPAREN] = ACTIONS(926),
    [anon_sym_EQ] = ACTIONS(926),
    [anon_sym_TILDE] = ACTIONS(926),
    [anon_sym_LBRACK] = ACTIONS(926),
    [anon_sym_RBRACK] = ACTIONS(926),
    [anon_sym_DASH] = ACTIONS(926),
    [anon_sym__] = ACTIONS(926),
    [anon_sym_BQUOTE] = ACTIONS(926),
    [anon_sym_COLON] = ACTIONS(926),
    [sym_list_constructor] = ACTIONS(926),
    [anon_sym_BANG] = ACTIONS(926),
    [sym__variable_pattern] = ACTIONS(928),
    [sym__constructor_pattern] = ACTIONS(928),
    [anon_sym_DOT] = ACTIONS(926),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(928),
    [anon_sym_SQUOTE] = ACTIONS(926),
    [anon_sym_DQUOTE] = ACTIONS(926),
    [anon_sym_POUND] = ACTIONS(926),
    [anon_sym_DOLLAR] = ACTIONS(926),
    [anon_sym_PERCENT] = ACTIONS(926),
    [anon_sym_AMP] = ACTIONS(926),
    [anon_sym_1] = ACTIONS(926),
    [anon_sym_PLUS] = ACTIONS(926),
    [anon_sym_SLASH] = ACTIONS(926),
    [anon_sym_LT] = ACTIONS(926),
    [anon_sym_GT] = ACTIONS(926),
    [anon_sym_QMARK] = ACTIONS(926),
    [anon_sym_CARET] = ACTIONS(926),
    [sym__integer_literal] = ACTIONS(926),
    [sym__octal_literal] = ACTIONS(926),
    [sym__hexidecimal_literal] = ACTIONS(926),
  },
  [329] = {
    [anon_sym_LPAREN] = ACTIONS(930),
    [anon_sym_COMMA] = ACTIONS(930),
    [anon_sym_RPAREN] = ACTIONS(930),
    [anon_sym_EQ] = ACTIONS(930),
    [anon_sym_TILDE] = ACTIONS(930),
    [anon_sym_LBRACK] = ACTIONS(930),
    [anon_sym_RBRACK] = ACTIONS(930),
    [anon_sym_DASH] = ACTIONS(930),
    [anon_sym__] = ACTIONS(930),
    [anon_sym_BQUOTE] = ACTIONS(930),
    [anon_sym_COLON] = ACTIONS(930),
    [sym_list_constructor] = ACTIONS(930),
    [anon_sym_BANG] = ACTIONS(930),
    [sym__variable_pattern] = ACTIONS(932),
    [sym__constructor_pattern] = ACTIONS(932),
    [anon_sym_DOT] = ACTIONS(930),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(932),
    [anon_sym_SQUOTE] = ACTIONS(930),
    [anon_sym_DQUOTE] = ACTIONS(930),
    [anon_sym_POUND] = ACTIONS(930),
    [anon_sym_DOLLAR] = ACTIONS(930),
    [anon_sym_PERCENT] = ACTIONS(930),
    [anon_sym_AMP] = ACTIONS(930),
    [anon_sym_1] = ACTIONS(930),
    [anon_sym_PLUS] = ACTIONS(930),
    [anon_sym_SLASH] = ACTIONS(930),
    [anon_sym_LT] = ACTIONS(930),
    [anon_sym_GT] = ACTIONS(930),
    [anon_sym_QMARK] = ACTIONS(930),
    [anon_sym_CARET] = ACTIONS(930),
    [sym__integer_literal] = ACTIONS(930),
    [sym__octal_literal] = ACTIONS(930),
    [sym__hexidecimal_literal] = ACTIONS(930),
  },
  [330] = {
    [anon_sym_RBRACE] = ACTIONS(934),
    [sym_comment] = ACTIONS(5),
  },
  [331] = {
    [aux_sym_labels_repeat1] = STATE(431),
    [anon_sym_RBRACE] = ACTIONS(936),
    [anon_sym_COMMA] = ACTIONS(938),
    [sym_comment] = ACTIONS(5),
  },
  [332] = {
    [anon_sym_EQ] = ACTIONS(940),
    [sym_comment] = ACTIONS(5),
  },
  [333] = {
    [sym_type] = STATE(434),
    [sym__generic_type_constructor] = STATE(340),
    [sym_tupling_constructor] = STATE(336),
    [sym_tuple] = STATE(340),
    [sym_list] = STATE(340),
    [sym_parenthesized_constructor] = STATE(340),
    [sym_variable_identifier] = STATE(342),
    [sym__type_constructors] = STATE(336),
    [sym_qualified_type_constructor] = STATE(343),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_COMMA] = ACTIONS(942),
    [anon_sym_LBRACK] = ACTIONS(651),
    [sym_unit_type] = ACTIONS(653),
    [sym_list_constructor] = ACTIONS(653),
    [sym_function_constructor] = ACTIONS(653),
    [sym__variable_pattern] = ACTIONS(655),
    [sym__constructor_pattern] = ACTIONS(661),
    [sym_module_identifier] = ACTIONS(659),
    [sym_comment] = ACTIONS(5),
  },
  [334] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(437),
    [anon_sym_COMMA] = ACTIONS(944),
    [anon_sym_RPAREN] = ACTIONS(946),
    [sym_comment] = ACTIONS(5),
  },
  [335] = {
    [sym_type] = STATE(346),
    [sym__generic_type_constructor] = STATE(347),
    [sym_tupling_constructor] = STATE(336),
    [sym_tuple] = STATE(347),
    [sym_list] = STATE(347),
    [sym_parenthesized_constructor] = STATE(347),
    [sym_variable_identifier] = STATE(348),
    [sym__type_constructors] = STATE(336),
    [sym_qualified_type_constructor] = STATE(343),
    [aux_sym_list_repeat1] = STATE(438),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_LBRACK] = ACTIONS(651),
    [sym_unit_type] = ACTIONS(653),
    [sym_list_constructor] = ACTIONS(653),
    [sym_function_constructor] = ACTIONS(653),
    [sym__variable_pattern] = ACTIONS(279),
    [sym__constructor_pattern] = ACTIONS(661),
    [sym_module_identifier] = ACTIONS(663),
    [sym_comment] = ACTIONS(5),
  },
  [336] = {
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
    [sym__constructor_pattern] = ACTIONS(948),
    [sym_module_identifier] = ACTIONS(948),
    [sym_comment] = ACTIONS(5),
  },
  [337] = {
    [sym_variable_identifier] = STATE(166),
    [aux_sym_type_class_repeat1] = STATE(439),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(671),
    [anon_sym_RPAREN] = ACTIONS(671),
    [anon_sym_DASH_GT] = ACTIONS(671),
    [sym__variable_pattern] = ACTIONS(85),
    [sym_comment] = ACTIONS(5),
  },
  [338] = {
    [sym_constructor_identifier] = STATE(441),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(442),
    [sym__constructor_pattern] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(950),
    [sym_comment] = ACTIONS(5),
  },
  [339] = {
    [aux_sym_tuple_repeat1] = STATE(445),
    [anon_sym_COMMA] = ACTIONS(952),
    [anon_sym_RPAREN] = ACTIONS(954),
    [sym_comment] = ACTIONS(5),
  },
  [340] = {
    [anon_sym_COMMA] = ACTIONS(681),
    [anon_sym_RPAREN] = ACTIONS(681),
    [anon_sym_DASH_GT] = ACTIONS(956),
    [sym_comment] = ACTIONS(5),
  },
  [341] = {
    [aux_sym_context_repeat1] = STATE(448),
    [anon_sym_COMMA] = ACTIONS(473),
    [anon_sym_RPAREN] = ACTIONS(958),
    [sym_comment] = ACTIONS(5),
  },
  [342] = {
    [anon_sym_COMMA] = ACTIONS(689),
    [anon_sym_RPAREN] = ACTIONS(689),
    [anon_sym_DASH_GT] = ACTIONS(960),
    [sym_comment] = ACTIONS(5),
  },
  [343] = {
    [anon_sym_LPAREN] = ACTIONS(695),
    [anon_sym_COMMA] = ACTIONS(695),
    [anon_sym_RPAREN] = ACTIONS(695),
    [anon_sym_LBRACK] = ACTIONS(695),
    [anon_sym_RBRACK] = ACTIONS(695),
    [anon_sym_DASH_GT] = ACTIONS(695),
    [sym_unit_type] = ACTIONS(695),
    [sym_list_constructor] = ACTIONS(695),
    [sym_function_constructor] = ACTIONS(695),
    [sym__variable_pattern] = ACTIONS(695),
    [sym__constructor_pattern] = ACTIONS(962),
    [sym_module_identifier] = ACTIONS(962),
    [sym_comment] = ACTIONS(5),
  },
  [344] = {
    [sym_variable_identifier] = STATE(166),
    [aux_sym_type_class_repeat1] = STATE(439),
    [anon_sym_LPAREN] = ACTIONS(671),
    [anon_sym_COMMA] = ACTIONS(671),
    [anon_sym_RPAREN] = ACTIONS(671),
    [anon_sym_LBRACK] = ACTIONS(671),
    [anon_sym_RBRACK] = ACTIONS(671),
    [anon_sym_DASH_GT] = ACTIONS(671),
    [sym_unit_type] = ACTIONS(671),
    [sym_list_constructor] = ACTIONS(671),
    [sym_function_constructor] = ACTIONS(671),
    [sym__variable_pattern] = ACTIONS(279),
    [sym__constructor_pattern] = ACTIONS(964),
    [sym_module_identifier] = ACTIONS(964),
    [sym_comment] = ACTIONS(5),
  },
  [345] = {
    [sym_constructor_identifier] = STATE(441),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(452),
    [sym__constructor_pattern] = ACTIONS(966),
    [anon_sym_DOT] = ACTIONS(968),
    [sym_comment] = ACTIONS(5),
  },
  [346] = {
    [anon_sym_LPAREN] = ACTIONS(970),
    [anon_sym_LBRACK] = ACTIONS(970),
    [anon_sym_RBRACK] = ACTIONS(970),
    [sym_unit_type] = ACTIONS(970),
    [sym_list_constructor] = ACTIONS(970),
    [sym_function_constructor] = ACTIONS(970),
    [sym__variable_pattern] = ACTIONS(970),
    [sym__constructor_pattern] = ACTIONS(972),
    [sym_module_identifier] = ACTIONS(972),
    [sym_comment] = ACTIONS(5),
  },
  [347] = {
    [anon_sym_LPAREN] = ACTIONS(681),
    [anon_sym_LBRACK] = ACTIONS(681),
    [anon_sym_RBRACK] = ACTIONS(681),
    [anon_sym_DASH_GT] = ACTIONS(974),
    [sym_unit_type] = ACTIONS(681),
    [sym_list_constructor] = ACTIONS(681),
    [sym_function_constructor] = ACTIONS(681),
    [sym__variable_pattern] = ACTIONS(681),
    [sym__constructor_pattern] = ACTIONS(976),
    [sym_module_identifier] = ACTIONS(976),
    [sym_comment] = ACTIONS(5),
  },
  [348] = {
    [anon_sym_LPAREN] = ACTIONS(689),
    [anon_sym_LBRACK] = ACTIONS(689),
    [anon_sym_RBRACK] = ACTIONS(689),
    [anon_sym_DASH_GT] = ACTIONS(978),
    [sym_unit_type] = ACTIONS(689),
    [sym_list_constructor] = ACTIONS(689),
    [sym_function_constructor] = ACTIONS(689),
    [sym__variable_pattern] = ACTIONS(689),
    [sym__constructor_pattern] = ACTIONS(980),
    [sym_module_identifier] = ACTIONS(980),
    [sym_comment] = ACTIONS(5),
  },
  [349] = {
    [sym_type] = STATE(456),
    [sym__generic_type_constructor] = STATE(347),
    [sym_tupling_constructor] = STATE(336),
    [sym_tuple] = STATE(347),
    [sym_list] = STATE(347),
    [sym_parenthesized_constructor] = STATE(347),
    [sym_variable_identifier] = STATE(348),
    [sym__type_constructors] = STATE(336),
    [sym_qualified_type_constructor] = STATE(343),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_LBRACK] = ACTIONS(651),
    [anon_sym_RBRACK] = ACTIONS(982),
    [sym_unit_type] = ACTIONS(653),
    [sym_list_constructor] = ACTIONS(653),
    [sym_function_constructor] = ACTIONS(653),
    [sym__variable_pattern] = ACTIONS(279),
    [sym__constructor_pattern] = ACTIONS(661),
    [sym_module_identifier] = ACTIONS(663),
    [sym_comment] = ACTIONS(5),
  },
  [350] = {
    [sym__layout_semicolon] = ACTIONS(545),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_DASH_GT] = ACTIONS(485),
    [sym__variable_pattern] = ACTIONS(485),
    [sym_comment] = ACTIONS(5),
  },
  [351] = {
    [sym_variable_identifier] = STATE(457),
    [sym__layout_semicolon] = ACTIONS(984),
    [anon_sym_SEMI] = ACTIONS(986),
    [anon_sym_DASH_GT] = ACTIONS(986),
    [sym__variable_pattern] = ACTIONS(361),
    [sym_comment] = ACTIONS(5),
  },
  [352] = {
    [sym_constructor_identifier] = STATE(459),
    [sym__constructor_pattern] = ACTIONS(363),
    [sym_module_identifier] = ACTIONS(988),
    [sym_comment] = ACTIONS(5),
  },
  [353] = {
    [sym_variable_identifier] = STATE(350),
    [aux_sym_type_class_repeat1] = STATE(460),
    [sym__layout_semicolon] = ACTIONS(990),
    [anon_sym_SEMI] = ACTIONS(992),
    [anon_sym_DASH_GT] = ACTIONS(992),
    [sym__variable_pattern] = ACTIONS(361),
    [sym_comment] = ACTIONS(5),
  },
  [354] = {
    [sym_constructor_identifier] = STATE(459),
    [sym__constructor_pattern] = ACTIONS(363),
    [anon_sym_DOT] = ACTIONS(994),
    [sym_comment] = ACTIONS(5),
  },
  [355] = {
    [sym_type] = STATE(462),
    [sym__generic_type_constructor] = STATE(214),
    [sym_tupling_constructor] = STATE(210),
    [sym_tuple] = STATE(214),
    [sym_list] = STATE(214),
    [sym_parenthesized_constructor] = STATE(214),
    [sym_variable_identifier] = STATE(217),
    [sym__type_constructors] = STATE(210),
    [sym_qualified_type_constructor] = STATE(219),
    [anon_sym_LPAREN] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(401),
    [sym_unit_type] = ACTIONS(403),
    [sym_list_constructor] = ACTIONS(403),
    [sym_function_constructor] = ACTIONS(403),
    [sym__variable_pattern] = ACTIONS(405),
    [sym__constructor_pattern] = ACTIONS(557),
    [sym_module_identifier] = ACTIONS(409),
    [sym_comment] = ACTIONS(5),
  },
  [356] = {
    [sym__layout_semicolon] = ACTIONS(996),
    [anon_sym_SEMI] = ACTIONS(998),
    [sym_comment] = ACTIONS(5),
  },
  [357] = {
    [anon_sym_LPAREN] = ACTIONS(1000),
    [anon_sym_LBRACK] = ACTIONS(1000),
    [sym_unit_type] = ACTIONS(1000),
    [sym_list_constructor] = ACTIONS(1000),
    [sym_function_constructor] = ACTIONS(1000),
    [sym__variable_pattern] = ACTIONS(1000),
    [sym__constructor_pattern] = ACTIONS(479),
    [sym_module_identifier] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [358] = {
    [sym_type] = STATE(463),
    [sym__generic_type_constructor] = STATE(214),
    [sym_tupling_constructor] = STATE(210),
    [sym_tuple] = STATE(214),
    [sym_list] = STATE(214),
    [sym_parenthesized_constructor] = STATE(214),
    [sym_variable_identifier] = STATE(217),
    [sym__type_constructors] = STATE(210),
    [sym_qualified_type_constructor] = STATE(219),
    [anon_sym_LPAREN] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(401),
    [sym_unit_type] = ACTIONS(403),
    [sym_list_constructor] = ACTIONS(403),
    [sym_function_constructor] = ACTIONS(403),
    [sym__variable_pattern] = ACTIONS(405),
    [sym__constructor_pattern] = ACTIONS(557),
    [sym_module_identifier] = ACTIONS(409),
    [sym_comment] = ACTIONS(5),
  },
  [359] = {
    [ts_builtin_sym_end] = ACTIONS(1002),
    [sym_comment] = ACTIONS(5),
  },
  [360] = {
    [sym__layout_semicolon] = ACTIONS(1004),
    [anon_sym_SEMI] = ACTIONS(1006),
    [sym_comment] = ACTIONS(5),
  },
  [361] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(466),
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
    [sym__layout_close_brace] = ACTIONS(1008),
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
  [362] = {
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
    [anon_sym_RBRACE] = ACTIONS(1010),
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
  [363] = {
    [sym_export] = STATE(467),
    [sym__identifier] = STATE(226),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [364] = {
    [anon_sym_where] = ACTIONS(1012),
    [sym_comment] = ACTIONS(5),
  },
  [365] = {
    [anon_sym_COMMA] = ACTIONS(1014),
    [anon_sym_RPAREN] = ACTIONS(1016),
    [sym_comment] = ACTIONS(5),
  },
  [366] = {
    [sym__identifier] = STATE(471),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_DOT_DOT] = ACTIONS(1018),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [367] = {
    [ts_builtin_sym_end] = ACTIONS(1020),
    [sym_comment] = ACTIONS(5),
  },
  [368] = {
    [sym_import_specification] = STATE(472),
    [sym__layout_semicolon] = ACTIONS(1022),
    [anon_sym_SEMI] = ACTIONS(1024),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_hiding] = ACTIONS(205),
    [sym_comment] = ACTIONS(5),
  },
  [369] = {
    [sym__identifier] = STATE(474),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_DOT_DOT] = ACTIONS(1026),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [370] = {
    [sym__identifier] = STATE(475),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [371] = {
    [sym__layout_semicolon] = ACTIONS(1028),
    [anon_sym_SEMI] = ACTIONS(1030),
    [sym_comment] = ACTIONS(5),
  },
  [372] = {
    [anon_sym_COMMA] = ACTIONS(1032),
    [anon_sym_RPAREN] = ACTIONS(1034),
    [sym_comment] = ACTIONS(5),
  },
  [373] = {
    [sym__layout_semicolon] = ACTIONS(1022),
    [anon_sym_SEMI] = ACTIONS(1024),
    [sym_comment] = ACTIONS(5),
  },
  [374] = {
    [aux_sym_import_specification_repeat1] = STATE(479),
    [anon_sym_LPAREN] = ACTIONS(1036),
    [anon_sym_COMMA] = ACTIONS(731),
    [anon_sym_RPAREN] = ACTIONS(1034),
    [sym_comment] = ACTIONS(5),
  },
  [375] = {
    [anon_sym_COMMA] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(325),
    [sym__variable_pattern] = ACTIONS(325),
    [sym__constructor_pattern] = ACTIONS(327),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(327),
    [anon_sym_SQUOTE] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [sym__integer_literal] = ACTIONS(325),
    [sym__octal_literal] = ACTIONS(325),
    [sym__hexidecimal_literal] = ACTIONS(325),
  },
  [376] = {
    [sym__gap] = STATE(180),
    [sym__graphic] = STATE(180),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(180),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(1038),
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
    [anon_sym_BSLASH] = ACTIONS(125),
    [sym__space] = ACTIONS(127),
    [sym__newline] = ACTIONS(127),
    [sym__tab] = ACTIONS(127),
    [sym__vertical_tab] = ACTIONS(127),
  },
  [377] = {
    [sym__layout_semicolon] = ACTIONS(1040),
    [anon_sym_SEMI] = ACTIONS(1042),
    [sym_comment] = ACTIONS(5),
  },
  [378] = {
    [sym_type_signature] = STATE(481),
    [sym__identifier] = STATE(238),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(655),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [379] = {
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_RPAREN] = ACTIONS(1044),
    [sym_comment] = ACTIONS(5),
  },
  [380] = {
    [sym__identifier] = STATE(482),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [381] = {
    [sym__layout_semicolon] = ACTIONS(1046),
    [anon_sym_SEMI] = ACTIONS(1048),
    [sym_comment] = ACTIONS(5),
  },
  [382] = {
    [anon_sym_COMMA] = ACTIONS(1050),
    [anon_sym_RPAREN] = ACTIONS(1050),
    [sym_comment] = ACTIONS(5),
  },
  [383] = {
    [sym__constructor_pattern] = ACTIONS(1052),
    [sym_comment] = ACTIONS(5),
  },
  [384] = {
    [sym_class] = STATE(483),
    [sym_constructor_identifier] = STATE(128),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [385] = {
    [anon_sym_EQ_GT] = ACTIONS(1054),
    [sym_comment] = ACTIONS(5),
  },
  [386] = {
    [sym__layout_semicolon] = ACTIONS(1056),
    [anon_sym_SEMI] = ACTIONS(1058),
    [sym_comment] = ACTIONS(5),
  },
  [387] = {
    [sym_general_declarations] = STATE(485),
    [sym__layout_open_brace] = ACTIONS(481),
    [anon_sym_LBRACE] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [388] = {
    [sym__layout_semicolon] = ACTIONS(1060),
    [anon_sym_SEMI] = ACTIONS(1062),
    [sym_comment] = ACTIONS(5),
  },
  [389] = {
    [sym__layout_semicolon] = ACTIONS(1064),
    [anon_sym_SEMI] = ACTIONS(1066),
    [sym_comment] = ACTIONS(5),
  },
  [390] = {
    [sym__general_declaration] = STATE(488),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(238),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__layout_close_brace] = ACTIONS(1068),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [sym__variable_pattern] = ACTIONS(233),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [391] = {
    [sym__layout_semicolon] = ACTIONS(1070),
    [anon_sym_SEMI] = ACTIONS(1072),
    [sym_comment] = ACTIONS(5),
  },
  [392] = {
    [sym__general_declaration] = STATE(490),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(238),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_RBRACE] = ACTIONS(1074),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [sym__variable_pattern] = ACTIONS(233),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [393] = {
    [anon_sym_COMMA] = ACTIONS(1076),
    [anon_sym_RPAREN] = ACTIONS(1076),
    [anon_sym_EQ_GT] = ACTIONS(1076),
    [sym_comment] = ACTIONS(5),
  },
  [394] = {
    [sym__layout_semicolon] = ACTIONS(1078),
    [anon_sym_SEMI] = ACTIONS(1080),
    [sym_comment] = ACTIONS(5),
  },
  [395] = {
    [sym_general_declarations] = STATE(491),
    [sym__layout_open_brace] = ACTIONS(481),
    [anon_sym_LBRACE] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [396] = {
    [sym__layout_semicolon] = ACTIONS(1082),
    [anon_sym_SEMI] = ACTIONS(1084),
    [anon_sym_COMMA] = ACTIONS(1084),
    [sym_comment] = ACTIONS(5),
  },
  [397] = {
    [sym_deriving] = STATE(492),
    [sym__layout_semicolon] = ACTIONS(1086),
    [anon_sym_SEMI] = ACTIONS(1088),
    [anon_sym_deriving] = ACTIONS(267),
    [sym_comment] = ACTIONS(5),
  },
  [398] = {
    [sym__layout_semicolon] = ACTIONS(1086),
    [anon_sym_SEMI] = ACTIONS(1088),
    [sym_comment] = ACTIONS(5),
  },
  [399] = {
    [aux_sym_export_repeat1] = STATE(494),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(1090),
    [sym_comment] = ACTIONS(5),
  },
  [400] = {
    [sym__layout_semicolon] = ACTIONS(1092),
    [anon_sym_SEMI] = ACTIONS(1094),
    [anon_sym_PIPE] = ACTIONS(1094),
    [anon_sym_deriving] = ACTIONS(1094),
    [sym_comment] = ACTIONS(5),
  },
  [401] = {
    [sym_constructor] = STATE(495),
    [sym_constructor_identifier] = STATE(155),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [402] = {
    [aux_sym_fields_repeat1] = STATE(498),
    [anon_sym_RBRACE] = ACTIONS(1096),
    [anon_sym_COMMA] = ACTIONS(1098),
    [sym_comment] = ACTIONS(5),
  },
  [403] = {
    [aux_sym_field_repeat1] = STATE(501),
    [anon_sym_COMMA] = ACTIONS(1100),
    [anon_sym_COLON_COLON] = ACTIONS(1102),
    [sym_comment] = ACTIONS(5),
  },
  [404] = {
    [sym__layout_semicolon] = ACTIONS(1104),
    [anon_sym_SEMI] = ACTIONS(1106),
    [anon_sym_PIPE] = ACTIONS(1106),
    [anon_sym_deriving] = ACTIONS(1106),
    [anon_sym_BANG] = ACTIONS(1106),
    [sym__variable_pattern] = ACTIONS(1108),
    [sym__constructor_pattern] = ACTIONS(1108),
    [sym_comment] = ACTIONS(5),
  },
  [405] = {
    [sym__layout_semicolon] = ACTIONS(1110),
    [anon_sym_SEMI] = ACTIONS(1112),
    [anon_sym_PIPE] = ACTIONS(1112),
    [anon_sym_deriving] = ACTIONS(1112),
    [anon_sym_BANG] = ACTIONS(1112),
    [sym__variable_pattern] = ACTIONS(1114),
    [sym__constructor_pattern] = ACTIONS(1114),
    [sym_comment] = ACTIONS(5),
  },
  [406] = {
    [sym_deriving] = STATE(502),
    [sym__layout_semicolon] = ACTIONS(1116),
    [anon_sym_SEMI] = ACTIONS(1118),
    [anon_sym_deriving] = ACTIONS(267),
    [sym_comment] = ACTIONS(5),
  },
  [407] = {
    [sym__layout_semicolon] = ACTIONS(1116),
    [anon_sym_SEMI] = ACTIONS(1118),
    [sym_comment] = ACTIONS(5),
  },
  [408] = {
    [sym__layout_semicolon] = ACTIONS(1120),
    [anon_sym_SEMI] = ACTIONS(1122),
    [anon_sym_deriving] = ACTIONS(1122),
    [sym_comment] = ACTIONS(5),
  },
  [409] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1124),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1124),
  },
  [410] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1126),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1126),
  },
  [411] = {
    [anon_sym_SEMI] = ACTIONS(1128),
    [anon_sym_LBRACE] = ACTIONS(1128),
    [anon_sym_RBRACE] = ACTIONS(1128),
    [anon_sym_LPAREN] = ACTIONS(1128),
    [anon_sym_RPAREN] = ACTIONS(1128),
    [anon_sym_EQ] = ACTIONS(1128),
    [anon_sym_TILDE] = ACTIONS(1128),
    [anon_sym_LBRACK] = ACTIONS(1128),
    [anon_sym_RBRACK] = ACTIONS(1128),
    [anon_sym_DASH] = ACTIONS(1128),
    [anon_sym_AT] = ACTIONS(1128),
    [anon_sym__] = ACTIONS(1128),
    [anon_sym_BQUOTE] = ACTIONS(1128),
    [anon_sym_COLON] = ACTIONS(1128),
    [anon_sym_PIPE] = ACTIONS(1128),
    [anon_sym_BANG] = ACTIONS(1128),
    [anon_sym_DOT] = ACTIONS(1128),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(1128),
    [anon_sym_DQUOTE] = ACTIONS(1128),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1128),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1128),
    [sym__ascii_large] = ACTIONS(1128),
    [anon_sym_POUND] = ACTIONS(1128),
    [anon_sym_DOLLAR] = ACTIONS(1128),
    [anon_sym_PERCENT] = ACTIONS(1128),
    [anon_sym_AMP] = ACTIONS(1128),
    [anon_sym_1] = ACTIONS(1128),
    [anon_sym_PLUS] = ACTIONS(1128),
    [anon_sym_SLASH] = ACTIONS(1128),
    [anon_sym_LT] = ACTIONS(1128),
    [anon_sym_GT] = ACTIONS(1128),
    [anon_sym_QMARK] = ACTIONS(1128),
    [anon_sym_CARET] = ACTIONS(1128),
    [anon_sym_BSLASH] = ACTIONS(1128),
    [sym__space] = ACTIONS(1128),
    [sym__newline] = ACTIONS(1128),
    [sym__tab] = ACTIONS(1128),
    [sym__vertical_tab] = ACTIONS(1128),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1128),
  },
  [412] = {
    [anon_sym_SEMI] = ACTIONS(1130),
    [anon_sym_LBRACE] = ACTIONS(1130),
    [anon_sym_RBRACE] = ACTIONS(1130),
    [anon_sym_LPAREN] = ACTIONS(1130),
    [anon_sym_RPAREN] = ACTIONS(1130),
    [anon_sym_EQ] = ACTIONS(1130),
    [anon_sym_TILDE] = ACTIONS(1130),
    [anon_sym_LBRACK] = ACTIONS(1130),
    [anon_sym_RBRACK] = ACTIONS(1130),
    [anon_sym_DASH] = ACTIONS(1130),
    [anon_sym_AT] = ACTIONS(1130),
    [anon_sym__] = ACTIONS(1130),
    [anon_sym_BQUOTE] = ACTIONS(1130),
    [anon_sym_COLON] = ACTIONS(1130),
    [anon_sym_PIPE] = ACTIONS(1130),
    [anon_sym_BANG] = ACTIONS(1130),
    [anon_sym_DOT] = ACTIONS(1130),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(1130),
    [anon_sym_DQUOTE] = ACTIONS(1130),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1130),
    [sym__ascii_large] = ACTIONS(1130),
    [anon_sym_POUND] = ACTIONS(1130),
    [anon_sym_DOLLAR] = ACTIONS(1130),
    [anon_sym_PERCENT] = ACTIONS(1130),
    [anon_sym_AMP] = ACTIONS(1130),
    [anon_sym_1] = ACTIONS(1130),
    [anon_sym_PLUS] = ACTIONS(1130),
    [anon_sym_SLASH] = ACTIONS(1130),
    [anon_sym_LT] = ACTIONS(1130),
    [anon_sym_GT] = ACTIONS(1130),
    [anon_sym_QMARK] = ACTIONS(1130),
    [anon_sym_CARET] = ACTIONS(1130),
    [anon_sym_BSLASH] = ACTIONS(1130),
    [sym__space] = ACTIONS(1130),
    [sym__newline] = ACTIONS(1130),
    [sym__tab] = ACTIONS(1130),
    [sym__vertical_tab] = ACTIONS(1130),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1130),
  },
  [413] = {
    [sym__layout_semicolon] = ACTIONS(1132),
    [anon_sym_SEMI] = ACTIONS(1134),
    [sym__variable_pattern] = ACTIONS(1134),
    [sym__constructor_pattern] = ACTIONS(1136),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1136),
    [anon_sym_SQUOTE] = ACTIONS(1134),
    [anon_sym_DQUOTE] = ACTIONS(1134),
    [sym__integer_literal] = ACTIONS(1134),
    [sym__octal_literal] = ACTIONS(1134),
    [sym__hexidecimal_literal] = ACTIONS(1134),
  },
  [414] = {
    [anon_sym_RPAREN] = ACTIONS(1138),
    [sym_comment] = ACTIONS(5),
  },
  [415] = {
    [sym__op] = STATE(313),
    [sym_variable_symbol] = STATE(314),
    [sym_constructor_symbol] = STATE(314),
    [sym__variable_symbol] = STATE(315),
    [anon_sym_COMMA] = ACTIONS(1140),
    [anon_sym_RPAREN] = ACTIONS(1140),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_BQUOTE] = ACTIONS(615),
    [anon_sym_COLON] = ACTIONS(617),
    [anon_sym_BANG] = ACTIONS(613),
    [anon_sym_DOT] = ACTIONS(613),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(613),
    [anon_sym_DOLLAR] = ACTIONS(613),
    [anon_sym_PERCENT] = ACTIONS(613),
    [anon_sym_AMP] = ACTIONS(613),
    [anon_sym_1] = ACTIONS(613),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_SLASH] = ACTIONS(613),
    [anon_sym_LT] = ACTIONS(613),
    [anon_sym_GT] = ACTIONS(613),
    [anon_sym_QMARK] = ACTIONS(613),
    [anon_sym_CARET] = ACTIONS(613),
  },
  [416] = {
    [anon_sym_COMMA] = ACTIONS(1140),
    [anon_sym_RPAREN] = ACTIONS(1140),
    [sym_comment] = ACTIONS(5),
  },
  [417] = {
    [anon_sym_BQUOTE] = ACTIONS(1142),
    [sym_comment] = ACTIONS(5),
  },
  [418] = {
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(497),
    [sym_list_constructor] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(497),
    [sym__variable_pattern] = ACTIONS(1144),
    [sym__constructor_pattern] = ACTIONS(1144),
    [anon_sym_DOT] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1144),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [anon_sym_POUND] = ACTIONS(497),
    [anon_sym_DOLLAR] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(497),
    [anon_sym_AMP] = ACTIONS(497),
    [anon_sym_1] = ACTIONS(497),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_SLASH] = ACTIONS(497),
    [anon_sym_LT] = ACTIONS(497),
    [anon_sym_GT] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_CARET] = ACTIONS(497),
    [sym__integer_literal] = ACTIONS(497),
    [sym__octal_literal] = ACTIONS(497),
    [sym__hexidecimal_literal] = ACTIONS(497),
  },
  [419] = {
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_TILDE] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(501),
    [anon_sym_DASH] = ACTIONS(501),
    [anon_sym__] = ACTIONS(501),
    [anon_sym_COLON] = ACTIONS(501),
    [sym_list_constructor] = ACTIONS(501),
    [anon_sym_BANG] = ACTIONS(501),
    [sym__variable_pattern] = ACTIONS(1146),
    [sym__constructor_pattern] = ACTIONS(1146),
    [anon_sym_DOT] = ACTIONS(501),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1146),
    [anon_sym_SQUOTE] = ACTIONS(501),
    [anon_sym_DQUOTE] = ACTIONS(501),
    [anon_sym_POUND] = ACTIONS(501),
    [anon_sym_DOLLAR] = ACTIONS(501),
    [anon_sym_PERCENT] = ACTIONS(501),
    [anon_sym_AMP] = ACTIONS(501),
    [anon_sym_1] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(501),
    [anon_sym_SLASH] = ACTIONS(501),
    [anon_sym_LT] = ACTIONS(501),
    [anon_sym_GT] = ACTIONS(501),
    [anon_sym_QMARK] = ACTIONS(501),
    [anon_sym_CARET] = ACTIONS(501),
    [sym__integer_literal] = ACTIONS(501),
    [sym__octal_literal] = ACTIONS(501),
    [sym__hexidecimal_literal] = ACTIONS(501),
  },
  [420] = {
    [sym__constructor_symbol] = STATE(505),
    [anon_sym_LPAREN] = ACTIONS(505),
    [anon_sym_TILDE] = ACTIONS(505),
    [anon_sym_LBRACK] = ACTIONS(505),
    [anon_sym_DASH] = ACTIONS(505),
    [anon_sym__] = ACTIONS(505),
    [anon_sym_COLON] = ACTIONS(905),
    [sym_list_constructor] = ACTIONS(505),
    [anon_sym_BANG] = ACTIONS(905),
    [sym__variable_pattern] = ACTIONS(1148),
    [sym__constructor_pattern] = ACTIONS(1148),
    [anon_sym_DOT] = ACTIONS(905),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1148),
    [anon_sym_SQUOTE] = ACTIONS(505),
    [anon_sym_DQUOTE] = ACTIONS(505),
    [anon_sym_POUND] = ACTIONS(905),
    [anon_sym_DOLLAR] = ACTIONS(905),
    [anon_sym_PERCENT] = ACTIONS(905),
    [anon_sym_AMP] = ACTIONS(905),
    [anon_sym_1] = ACTIONS(905),
    [anon_sym_PLUS] = ACTIONS(905),
    [anon_sym_SLASH] = ACTIONS(905),
    [anon_sym_LT] = ACTIONS(905),
    [anon_sym_GT] = ACTIONS(905),
    [anon_sym_QMARK] = ACTIONS(905),
    [anon_sym_CARET] = ACTIONS(905),
    [sym__integer_literal] = ACTIONS(505),
    [sym__octal_literal] = ACTIONS(505),
    [sym__hexidecimal_literal] = ACTIONS(505),
  },
  [421] = {
    [sym__op] = STATE(313),
    [sym_variable_symbol] = STATE(314),
    [sym_constructor_symbol] = STATE(314),
    [sym__variable_symbol] = STATE(315),
    [anon_sym_COMMA] = ACTIONS(1150),
    [anon_sym_RPAREN] = ACTIONS(1150),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_BQUOTE] = ACTIONS(615),
    [anon_sym_COLON] = ACTIONS(617),
    [anon_sym_BANG] = ACTIONS(613),
    [anon_sym_DOT] = ACTIONS(613),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(613),
    [anon_sym_DOLLAR] = ACTIONS(613),
    [anon_sym_PERCENT] = ACTIONS(613),
    [anon_sym_AMP] = ACTIONS(613),
    [anon_sym_1] = ACTIONS(613),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_SLASH] = ACTIONS(613),
    [anon_sym_LT] = ACTIONS(613),
    [anon_sym_GT] = ACTIONS(613),
    [anon_sym_QMARK] = ACTIONS(613),
    [anon_sym_CARET] = ACTIONS(613),
  },
  [422] = {
    [anon_sym_COMMA] = ACTIONS(1150),
    [anon_sym_RPAREN] = ACTIONS(1150),
    [sym_comment] = ACTIONS(5),
  },
  [423] = {
    [anon_sym_LPAREN] = ACTIONS(515),
    [anon_sym_TILDE] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(515),
    [anon_sym_DASH] = ACTIONS(515),
    [anon_sym__] = ACTIONS(515),
    [sym_list_constructor] = ACTIONS(515),
    [anon_sym_BANG] = ACTIONS(515),
    [sym__variable_pattern] = ACTIONS(1152),
    [sym__constructor_pattern] = ACTIONS(1152),
    [anon_sym_DOT] = ACTIONS(515),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1152),
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
  [424] = {
    [sym__variable_symbol] = STATE(506),
    [anon_sym_LPAREN] = ACTIONS(519),
    [anon_sym_TILDE] = ACTIONS(519),
    [anon_sym_LBRACK] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym__] = ACTIONS(519),
    [sym_list_constructor] = ACTIONS(519),
    [anon_sym_BANG] = ACTIONS(613),
    [sym__variable_pattern] = ACTIONS(1154),
    [sym__constructor_pattern] = ACTIONS(1154),
    [anon_sym_DOT] = ACTIONS(613),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1154),
    [anon_sym_SQUOTE] = ACTIONS(519),
    [anon_sym_DQUOTE] = ACTIONS(519),
    [anon_sym_POUND] = ACTIONS(613),
    [anon_sym_DOLLAR] = ACTIONS(613),
    [anon_sym_PERCENT] = ACTIONS(613),
    [anon_sym_AMP] = ACTIONS(613),
    [anon_sym_1] = ACTIONS(613),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_SLASH] = ACTIONS(613),
    [anon_sym_LT] = ACTIONS(613),
    [anon_sym_GT] = ACTIONS(613),
    [anon_sym_QMARK] = ACTIONS(613),
    [anon_sym_CARET] = ACTIONS(613),
    [sym__integer_literal] = ACTIONS(519),
    [sym__octal_literal] = ACTIONS(519),
    [sym__hexidecimal_literal] = ACTIONS(519),
  },
  [425] = {
    [sym__function_pattern] = STATE(507),
    [sym_irrefutable_pattern] = STATE(90),
    [sym_list_pattern] = STATE(90),
    [sym_tuple_pattern] = STATE(90),
    [sym_parenthesized_pattern] = STATE(90),
    [sym__pattern] = STATE(508),
    [sym_negative_literal] = STATE(192),
    [sym_general_constructor] = STATE(192),
    [sym_as_pattern] = STATE(90),
    [sym_wildcard] = STATE(90),
    [sym__variable] = STATE(193),
    [sym_qualified_variable_identifier] = STATE(98),
    [sym__literal] = STATE(90),
    [sym__identifier] = STATE(99),
    [sym_simple_type] = STATE(100),
    [sym_variable_identifier] = STATE(101),
    [sym_constructor_identifier] = STATE(194),
    [sym_integer] = STATE(93),
    [sym_char] = STATE(93),
    [sym_string] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(371),
    [anon_sym__] = ACTIONS(157),
    [sym_list_constructor] = ACTIONS(159),
    [sym__variable_pattern] = ACTIONS(161),
    [sym__constructor_pattern] = ACTIONS(373),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [426] = {
    [anon_sym_LPAREN] = ACTIONS(1156),
    [anon_sym_COMMA] = ACTIONS(1156),
    [anon_sym_RPAREN] = ACTIONS(1156),
    [anon_sym_EQ] = ACTIONS(1156),
    [anon_sym_TILDE] = ACTIONS(1156),
    [anon_sym_LBRACK] = ACTIONS(1156),
    [anon_sym_RBRACK] = ACTIONS(1156),
    [anon_sym_DASH] = ACTIONS(1156),
    [anon_sym__] = ACTIONS(1156),
    [anon_sym_BQUOTE] = ACTIONS(1156),
    [anon_sym_COLON] = ACTIONS(1156),
    [sym_list_constructor] = ACTIONS(1156),
    [anon_sym_BANG] = ACTIONS(1156),
    [sym__variable_pattern] = ACTIONS(1158),
    [sym__constructor_pattern] = ACTIONS(1158),
    [anon_sym_DOT] = ACTIONS(1156),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1158),
    [anon_sym_SQUOTE] = ACTIONS(1156),
    [anon_sym_DQUOTE] = ACTIONS(1156),
    [anon_sym_POUND] = ACTIONS(1156),
    [anon_sym_DOLLAR] = ACTIONS(1156),
    [anon_sym_PERCENT] = ACTIONS(1156),
    [anon_sym_AMP] = ACTIONS(1156),
    [anon_sym_1] = ACTIONS(1156),
    [anon_sym_PLUS] = ACTIONS(1156),
    [anon_sym_SLASH] = ACTIONS(1156),
    [anon_sym_LT] = ACTIONS(1156),
    [anon_sym_GT] = ACTIONS(1156),
    [anon_sym_QMARK] = ACTIONS(1156),
    [anon_sym_CARET] = ACTIONS(1156),
    [sym__integer_literal] = ACTIONS(1156),
    [sym__octal_literal] = ACTIONS(1156),
    [sym__hexidecimal_literal] = ACTIONS(1156),
  },
  [427] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1160),
  },
  [428] = {
    [anon_sym_COMMA] = ACTIONS(1134),
    [anon_sym_RPAREN] = ACTIONS(1134),
    [sym__variable_pattern] = ACTIONS(1134),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1136),
    [anon_sym_SQUOTE] = ACTIONS(1134),
    [anon_sym_DQUOTE] = ACTIONS(1134),
    [sym__integer_literal] = ACTIONS(1134),
    [sym__octal_literal] = ACTIONS(1134),
    [sym__hexidecimal_literal] = ACTIONS(1134),
  },
  [429] = {
    [anon_sym_LPAREN] = ACTIONS(1162),
    [anon_sym_COMMA] = ACTIONS(1162),
    [anon_sym_RPAREN] = ACTIONS(1162),
    [anon_sym_EQ] = ACTIONS(1162),
    [anon_sym_TILDE] = ACTIONS(1162),
    [anon_sym_LBRACK] = ACTIONS(1162),
    [anon_sym_RBRACK] = ACTIONS(1162),
    [anon_sym_DASH] = ACTIONS(1162),
    [anon_sym__] = ACTIONS(1162),
    [anon_sym_BQUOTE] = ACTIONS(1162),
    [anon_sym_COLON] = ACTIONS(1162),
    [sym_list_constructor] = ACTIONS(1162),
    [anon_sym_BANG] = ACTIONS(1162),
    [sym__variable_pattern] = ACTIONS(1164),
    [sym__constructor_pattern] = ACTIONS(1164),
    [anon_sym_DOT] = ACTIONS(1162),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1164),
    [anon_sym_SQUOTE] = ACTIONS(1162),
    [anon_sym_DQUOTE] = ACTIONS(1162),
    [anon_sym_POUND] = ACTIONS(1162),
    [anon_sym_DOLLAR] = ACTIONS(1162),
    [anon_sym_PERCENT] = ACTIONS(1162),
    [anon_sym_AMP] = ACTIONS(1162),
    [anon_sym_1] = ACTIONS(1162),
    [anon_sym_PLUS] = ACTIONS(1162),
    [anon_sym_SLASH] = ACTIONS(1162),
    [anon_sym_LT] = ACTIONS(1162),
    [anon_sym_GT] = ACTIONS(1162),
    [anon_sym_QMARK] = ACTIONS(1162),
    [anon_sym_CARET] = ACTIONS(1162),
    [sym__integer_literal] = ACTIONS(1162),
    [sym__octal_literal] = ACTIONS(1162),
    [sym__hexidecimal_literal] = ACTIONS(1162),
  },
  [430] = {
    [sym_label] = STATE(510),
    [sym__identifier] = STATE(332),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [431] = {
    [anon_sym_RBRACE] = ACTIONS(1166),
    [anon_sym_COMMA] = ACTIONS(1168),
    [sym_comment] = ACTIONS(5),
  },
  [432] = {
    [sym__literal] = STATE(512),
    [sym_integer] = STATE(93),
    [sym_char] = STATE(93),
    [sym_string] = STATE(93),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [433] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(514),
    [anon_sym_COMMA] = ACTIONS(944),
    [anon_sym_RPAREN] = ACTIONS(1170),
    [sym_comment] = ACTIONS(5),
  },
  [434] = {
    [aux_sym_tuple_repeat1] = STATE(516),
    [anon_sym_COMMA] = ACTIONS(952),
    [anon_sym_RPAREN] = ACTIONS(1172),
    [sym_comment] = ACTIONS(5),
  },
  [435] = {
    [anon_sym_COMMA] = ACTIONS(1174),
    [anon_sym_RPAREN] = ACTIONS(1174),
    [sym_comment] = ACTIONS(5),
  },
  [436] = {
    [sym__layout_semicolon] = ACTIONS(1176),
    [anon_sym_SEMI] = ACTIONS(1178),
    [anon_sym_DASH_GT] = ACTIONS(1178),
    [sym_comment] = ACTIONS(5),
  },
  [437] = {
    [anon_sym_COMMA] = ACTIONS(1180),
    [anon_sym_RPAREN] = ACTIONS(1182),
    [sym_comment] = ACTIONS(5),
  },
  [438] = {
    [sym_type] = STATE(456),
    [sym__generic_type_constructor] = STATE(347),
    [sym_tupling_constructor] = STATE(336),
    [sym_tuple] = STATE(347),
    [sym_list] = STATE(347),
    [sym_parenthesized_constructor] = STATE(347),
    [sym_variable_identifier] = STATE(348),
    [sym__type_constructors] = STATE(336),
    [sym_qualified_type_constructor] = STATE(343),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_LBRACK] = ACTIONS(651),
    [anon_sym_RBRACK] = ACTIONS(1184),
    [sym_unit_type] = ACTIONS(653),
    [sym_list_constructor] = ACTIONS(653),
    [sym_function_constructor] = ACTIONS(653),
    [sym__variable_pattern] = ACTIONS(279),
    [sym__constructor_pattern] = ACTIONS(661),
    [sym_module_identifier] = ACTIONS(663),
    [sym_comment] = ACTIONS(5),
  },
  [439] = {
    [sym_variable_identifier] = STATE(288),
    [anon_sym_LPAREN] = ACTIONS(986),
    [anon_sym_COMMA] = ACTIONS(986),
    [anon_sym_RPAREN] = ACTIONS(986),
    [anon_sym_LBRACK] = ACTIONS(986),
    [anon_sym_RBRACK] = ACTIONS(986),
    [anon_sym_DASH_GT] = ACTIONS(986),
    [sym_unit_type] = ACTIONS(986),
    [sym_list_constructor] = ACTIONS(986),
    [sym_function_constructor] = ACTIONS(986),
    [sym__variable_pattern] = ACTIONS(279),
    [sym__constructor_pattern] = ACTIONS(1186),
    [sym_module_identifier] = ACTIONS(1186),
    [sym_comment] = ACTIONS(5),
  },
  [440] = {
    [sym_constructor_identifier] = STATE(520),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_module_identifier] = ACTIONS(988),
    [sym_comment] = ACTIONS(5),
  },
  [441] = {
    [sym_variable_identifier] = STATE(166),
    [aux_sym_type_class_repeat1] = STATE(521),
    [anon_sym_LPAREN] = ACTIONS(992),
    [anon_sym_COMMA] = ACTIONS(992),
    [anon_sym_RPAREN] = ACTIONS(992),
    [anon_sym_LBRACK] = ACTIONS(992),
    [anon_sym_RBRACK] = ACTIONS(992),
    [anon_sym_DASH_GT] = ACTIONS(992),
    [sym_unit_type] = ACTIONS(992),
    [sym_list_constructor] = ACTIONS(992),
    [sym_function_constructor] = ACTIONS(992),
    [sym__variable_pattern] = ACTIONS(279),
    [sym__constructor_pattern] = ACTIONS(1188),
    [sym_module_identifier] = ACTIONS(1188),
    [sym_comment] = ACTIONS(5),
  },
  [442] = {
    [sym_constructor_identifier] = STATE(520),
    [sym__constructor_pattern] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(1190),
    [sym_comment] = ACTIONS(5),
  },
  [443] = {
    [sym_type] = STATE(523),
    [sym__generic_type_constructor] = STATE(340),
    [sym_tupling_constructor] = STATE(336),
    [sym_tuple] = STATE(340),
    [sym_list] = STATE(340),
    [sym_parenthesized_constructor] = STATE(340),
    [sym_variable_identifier] = STATE(342),
    [sym__type_constructors] = STATE(336),
    [sym_qualified_type_constructor] = STATE(343),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_LBRACK] = ACTIONS(651),
    [sym_unit_type] = ACTIONS(653),
    [sym_list_constructor] = ACTIONS(653),
    [sym_function_constructor] = ACTIONS(653),
    [sym__variable_pattern] = ACTIONS(655),
    [sym__constructor_pattern] = ACTIONS(661),
    [sym_module_identifier] = ACTIONS(659),
    [sym_comment] = ACTIONS(5),
  },
  [444] = {
    [sym__layout_semicolon] = ACTIONS(1192),
    [anon_sym_SEMI] = ACTIONS(1195),
    [anon_sym_DASH_GT] = ACTIONS(1195),
    [sym_comment] = ACTIONS(5),
  },
  [445] = {
    [anon_sym_COMMA] = ACTIONS(1198),
    [anon_sym_RPAREN] = ACTIONS(1200),
    [sym_comment] = ACTIONS(5),
  },
  [446] = {
    [sym_type] = STATE(526),
    [sym__generic_type_constructor] = STATE(340),
    [sym_tupling_constructor] = STATE(336),
    [sym_tuple] = STATE(340),
    [sym_list] = STATE(340),
    [sym_parenthesized_constructor] = STATE(340),
    [sym_variable_identifier] = STATE(342),
    [sym__type_constructors] = STATE(336),
    [sym_qualified_type_constructor] = STATE(343),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_LBRACK] = ACTIONS(651),
    [sym_unit_type] = ACTIONS(653),
    [sym_list_constructor] = ACTIONS(653),
    [sym_function_constructor] = ACTIONS(653),
    [sym__variable_pattern] = ACTIONS(655),
    [sym__constructor_pattern] = ACTIONS(661),
    [sym_module_identifier] = ACTIONS(659),
    [sym_comment] = ACTIONS(5),
  },
  [447] = {
    [anon_sym_EQ_GT] = ACTIONS(1202),
    [sym_comment] = ACTIONS(5),
  },
  [448] = {
    [anon_sym_COMMA] = ACTIONS(771),
    [anon_sym_RPAREN] = ACTIONS(1204),
    [sym_comment] = ACTIONS(5),
  },
  [449] = {
    [sym_type] = STATE(529),
    [sym__generic_type_constructor] = STATE(340),
    [sym_tupling_constructor] = STATE(336),
    [sym_tuple] = STATE(340),
    [sym_list] = STATE(340),
    [sym_parenthesized_constructor] = STATE(340),
    [sym_variable_identifier] = STATE(342),
    [sym__type_constructors] = STATE(336),
    [sym_qualified_type_constructor] = STATE(343),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_LBRACK] = ACTIONS(651),
    [sym_unit_type] = ACTIONS(653),
    [sym_list_constructor] = ACTIONS(653),
    [sym_function_constructor] = ACTIONS(653),
    [sym__variable_pattern] = ACTIONS(655),
    [sym__constructor_pattern] = ACTIONS(661),
    [sym_module_identifier] = ACTIONS(659),
    [sym_comment] = ACTIONS(5),
  },
  [450] = {
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(85),
    [sym_unit_type] = ACTIONS(85),
    [sym_list_constructor] = ACTIONS(85),
    [sym_function_constructor] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(85),
    [sym__constructor_pattern] = ACTIONS(225),
    [sym_module_identifier] = ACTIONS(225),
    [sym_comment] = ACTIONS(5),
  },
  [451] = {
    [sym_constructor_identifier] = STATE(520),
    [sym__constructor_pattern] = ACTIONS(966),
    [sym_module_identifier] = ACTIONS(988),
    [sym_comment] = ACTIONS(5),
  },
  [452] = {
    [sym_constructor_identifier] = STATE(520),
    [sym__constructor_pattern] = ACTIONS(966),
    [anon_sym_DOT] = ACTIONS(1206),
    [sym_comment] = ACTIONS(5),
  },
  [453] = {
    [sym_type] = STATE(526),
    [sym__generic_type_constructor] = STATE(347),
    [sym_tupling_constructor] = STATE(336),
    [sym_tuple] = STATE(347),
    [sym_list] = STATE(347),
    [sym_parenthesized_constructor] = STATE(347),
    [sym_variable_identifier] = STATE(348),
    [sym__type_constructors] = STATE(336),
    [sym_qualified_type_constructor] = STATE(343),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_LBRACK] = ACTIONS(651),
    [sym_unit_type] = ACTIONS(653),
    [sym_list_constructor] = ACTIONS(653),
    [sym_function_constructor] = ACTIONS(653),
    [sym__variable_pattern] = ACTIONS(279),
    [sym__constructor_pattern] = ACTIONS(661),
    [sym_module_identifier] = ACTIONS(663),
    [sym_comment] = ACTIONS(5),
  },
  [454] = {
    [sym_type] = STATE(529),
    [sym__generic_type_constructor] = STATE(347),
    [sym_tupling_constructor] = STATE(336),
    [sym_tuple] = STATE(347),
    [sym_list] = STATE(347),
    [sym_parenthesized_constructor] = STATE(347),
    [sym_variable_identifier] = STATE(348),
    [sym__type_constructors] = STATE(336),
    [sym_qualified_type_constructor] = STATE(343),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_LBRACK] = ACTIONS(651),
    [sym_unit_type] = ACTIONS(653),
    [sym_list_constructor] = ACTIONS(653),
    [sym_function_constructor] = ACTIONS(653),
    [sym__variable_pattern] = ACTIONS(279),
    [sym__constructor_pattern] = ACTIONS(661),
    [sym_module_identifier] = ACTIONS(663),
    [sym_comment] = ACTIONS(5),
  },
  [455] = {
    [sym__layout_semicolon] = ACTIONS(1208),
    [anon_sym_SEMI] = ACTIONS(1210),
    [anon_sym_DASH_GT] = ACTIONS(1210),
    [sym_comment] = ACTIONS(5),
  },
  [456] = {
    [anon_sym_LPAREN] = ACTIONS(1212),
    [anon_sym_LBRACK] = ACTIONS(1212),
    [anon_sym_RBRACK] = ACTIONS(1212),
    [sym_unit_type] = ACTIONS(1212),
    [sym_list_constructor] = ACTIONS(1212),
    [sym_function_constructor] = ACTIONS(1212),
    [sym__variable_pattern] = ACTIONS(1212),
    [sym__constructor_pattern] = ACTIONS(1214),
    [sym_module_identifier] = ACTIONS(1214),
    [sym_comment] = ACTIONS(5),
  },
  [457] = {
    [sym__layout_semicolon] = ACTIONS(843),
    [anon_sym_SEMI] = ACTIONS(787),
    [anon_sym_DASH_GT] = ACTIONS(787),
    [sym__variable_pattern] = ACTIONS(787),
    [sym_comment] = ACTIONS(5),
  },
  [458] = {
    [sym__constructor_pattern] = ACTIONS(1216),
    [anon_sym_DOT] = ACTIONS(1218),
    [sym_comment] = ACTIONS(5),
  },
  [459] = {
    [sym_variable_identifier] = STATE(350),
    [aux_sym_type_class_repeat1] = STATE(531),
    [sym__layout_semicolon] = ACTIONS(1220),
    [anon_sym_SEMI] = ACTIONS(1222),
    [anon_sym_DASH_GT] = ACTIONS(1222),
    [sym__variable_pattern] = ACTIONS(361),
    [sym_comment] = ACTIONS(5),
  },
  [460] = {
    [sym_variable_identifier] = STATE(457),
    [sym__layout_semicolon] = ACTIONS(1220),
    [anon_sym_SEMI] = ACTIONS(1222),
    [anon_sym_DASH_GT] = ACTIONS(1222),
    [sym__variable_pattern] = ACTIONS(361),
    [sym_comment] = ACTIONS(5),
  },
  [461] = {
    [sym_constructor_identifier] = STATE(533),
    [sym__constructor_pattern] = ACTIONS(363),
    [sym_module_identifier] = ACTIONS(1224),
    [sym_comment] = ACTIONS(5),
  },
  [462] = {
    [sym__layout_semicolon] = ACTIONS(1226),
    [anon_sym_SEMI] = ACTIONS(1228),
    [sym_comment] = ACTIONS(5),
  },
  [463] = {
    [sym__layout_semicolon] = ACTIONS(1230),
    [anon_sym_SEMI] = ACTIONS(1232),
    [sym_comment] = ACTIONS(5),
  },
  [464] = {
    [sym__layout_close_brace] = ACTIONS(351),
    [anon_sym_import] = ACTIONS(353),
    [anon_sym_foreign] = ACTIONS(353),
    [anon_sym_default] = ACTIONS(353),
    [anon_sym_do] = ACTIONS(353),
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
  [465] = {
    [ts_builtin_sym_end] = ACTIONS(1234),
    [sym_comment] = ACTIONS(5),
  },
  [466] = {
    [sym__layout_semicolon] = ACTIONS(1236),
    [anon_sym_SEMI] = ACTIONS(1238),
    [sym_comment] = ACTIONS(5),
  },
  [467] = {
    [anon_sym_COMMA] = ACTIONS(1240),
    [anon_sym_RPAREN] = ACTIONS(1240),
    [sym_comment] = ACTIONS(5),
  },
  [468] = {
    [sym_export] = STATE(535),
    [sym__identifier] = STATE(226),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [469] = {
    [anon_sym_where] = ACTIONS(1242),
    [sym_comment] = ACTIONS(5),
  },
  [470] = {
    [anon_sym_RPAREN] = ACTIONS(1244),
    [sym_comment] = ACTIONS(5),
  },
  [471] = {
    [aux_sym_export_repeat1] = STATE(537),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(1244),
    [sym_comment] = ACTIONS(5),
  },
  [472] = {
    [sym__layout_semicolon] = ACTIONS(1246),
    [anon_sym_SEMI] = ACTIONS(1248),
    [sym_comment] = ACTIONS(5),
  },
  [473] = {
    [anon_sym_RPAREN] = ACTIONS(1250),
    [sym_comment] = ACTIONS(5),
  },
  [474] = {
    [aux_sym_export_repeat1] = STATE(539),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(1250),
    [sym_comment] = ACTIONS(5),
  },
  [475] = {
    [anon_sym_LPAREN] = ACTIONS(1252),
    [anon_sym_COMMA] = ACTIONS(1254),
    [anon_sym_RPAREN] = ACTIONS(1254),
    [sym_comment] = ACTIONS(5),
  },
  [476] = {
    [sym__identifier] = STATE(541),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [477] = {
    [sym__layout_semicolon] = ACTIONS(1256),
    [anon_sym_SEMI] = ACTIONS(1258),
    [sym_comment] = ACTIONS(5),
  },
  [478] = {
    [sym__identifier] = STATE(543),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_DOT_DOT] = ACTIONS(1260),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [479] = {
    [anon_sym_COMMA] = ACTIONS(1032),
    [anon_sym_RPAREN] = ACTIONS(1262),
    [sym_comment] = ACTIONS(5),
  },
  [480] = {
    [anon_sym_COMMA] = ACTIONS(593),
    [anon_sym_RPAREN] = ACTIONS(593),
    [sym__variable_pattern] = ACTIONS(593),
    [sym__constructor_pattern] = ACTIONS(595),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(595),
    [anon_sym_SQUOTE] = ACTIONS(593),
    [anon_sym_DQUOTE] = ACTIONS(593),
    [sym__integer_literal] = ACTIONS(593),
    [sym__octal_literal] = ACTIONS(593),
    [sym__hexidecimal_literal] = ACTIONS(593),
  },
  [481] = {
    [sym__layout_semicolon] = ACTIONS(1264),
    [anon_sym_SEMI] = ACTIONS(1266),
    [sym_comment] = ACTIONS(5),
  },
  [482] = {
    [anon_sym_COMMA] = ACTIONS(1268),
    [anon_sym_RPAREN] = ACTIONS(1268),
    [sym_comment] = ACTIONS(5),
  },
  [483] = {
    [anon_sym_COMMA] = ACTIONS(1270),
    [anon_sym_RPAREN] = ACTIONS(1270),
    [sym_comment] = ACTIONS(5),
  },
  [484] = {
    [sym__constructor_pattern] = ACTIONS(1272),
    [sym_comment] = ACTIONS(5),
  },
  [485] = {
    [sym__layout_semicolon] = ACTIONS(1274),
    [anon_sym_SEMI] = ACTIONS(1276),
    [sym_comment] = ACTIONS(5),
  },
  [486] = {
    [sym__layout_close_brace] = ACTIONS(1278),
    [anon_sym_infixl] = ACTIONS(1280),
    [anon_sym_infixr] = ACTIONS(1280),
    [anon_sym_infix] = ACTIONS(1280),
    [sym__variable_pattern] = ACTIONS(1282),
    [sym__constructor_pattern] = ACTIONS(1282),
    [sym_comment] = ACTIONS(5),
  },
  [487] = {
    [sym__layout_semicolon] = ACTIONS(1284),
    [anon_sym_SEMI] = ACTIONS(1286),
    [sym_comment] = ACTIONS(5),
  },
  [488] = {
    [sym__layout_semicolon] = ACTIONS(1288),
    [anon_sym_SEMI] = ACTIONS(1290),
    [sym_comment] = ACTIONS(5),
  },
  [489] = {
    [anon_sym_RBRACE] = ACTIONS(1280),
    [anon_sym_infixl] = ACTIONS(1280),
    [anon_sym_infixr] = ACTIONS(1280),
    [anon_sym_infix] = ACTIONS(1280),
    [sym__variable_pattern] = ACTIONS(1282),
    [sym__constructor_pattern] = ACTIONS(1282),
    [sym_comment] = ACTIONS(5),
  },
  [490] = {
    [sym__layout_semicolon] = ACTIONS(1292),
    [anon_sym_SEMI] = ACTIONS(1294),
    [sym_comment] = ACTIONS(5),
  },
  [491] = {
    [sym__layout_semicolon] = ACTIONS(1296),
    [anon_sym_SEMI] = ACTIONS(1298),
    [sym_comment] = ACTIONS(5),
  },
  [492] = {
    [sym__layout_semicolon] = ACTIONS(1300),
    [anon_sym_SEMI] = ACTIONS(1302),
    [sym_comment] = ACTIONS(5),
  },
  [493] = {
    [sym__layout_semicolon] = ACTIONS(1304),
    [anon_sym_SEMI] = ACTIONS(1306),
    [sym_comment] = ACTIONS(5),
  },
  [494] = {
    [anon_sym_COMMA] = ACTIONS(749),
    [anon_sym_RPAREN] = ACTIONS(1308),
    [sym_comment] = ACTIONS(5),
  },
  [495] = {
    [sym__layout_semicolon] = ACTIONS(1310),
    [anon_sym_SEMI] = ACTIONS(1312),
    [anon_sym_PIPE] = ACTIONS(1312),
    [anon_sym_deriving] = ACTIONS(1312),
    [sym_comment] = ACTIONS(5),
  },
  [496] = {
    [sym__layout_semicolon] = ACTIONS(1314),
    [anon_sym_SEMI] = ACTIONS(1316),
    [anon_sym_PIPE] = ACTIONS(1316),
    [anon_sym_deriving] = ACTIONS(1316),
    [sym_comment] = ACTIONS(5),
  },
  [497] = {
    [sym_field] = STATE(548),
    [sym_variable_identifier] = STATE(403),
    [sym__variable_pattern] = ACTIONS(655),
    [sym_comment] = ACTIONS(5),
  },
  [498] = {
    [anon_sym_RBRACE] = ACTIONS(1318),
    [anon_sym_COMMA] = ACTIONS(1320),
    [sym_comment] = ACTIONS(5),
  },
  [499] = {
    [sym_variable_identifier] = STATE(551),
    [sym__variable_pattern] = ACTIONS(655),
    [sym_comment] = ACTIONS(5),
  },
  [500] = {
    [sym_strict] = STATE(553),
    [sym__identifier] = STATE(553),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_BANG] = ACTIONS(1322),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [501] = {
    [anon_sym_COMMA] = ACTIONS(1324),
    [anon_sym_COLON_COLON] = ACTIONS(1326),
    [sym_comment] = ACTIONS(5),
  },
  [502] = {
    [sym__layout_semicolon] = ACTIONS(1328),
    [anon_sym_SEMI] = ACTIONS(1330),
    [sym_comment] = ACTIONS(5),
  },
  [503] = {
    [anon_sym_COMMA] = ACTIONS(1332),
    [anon_sym_RPAREN] = ACTIONS(1332),
    [sym_comment] = ACTIONS(5),
  },
  [504] = {
    [anon_sym_LPAREN] = ACTIONS(799),
    [anon_sym_TILDE] = ACTIONS(799),
    [anon_sym_LBRACK] = ACTIONS(799),
    [anon_sym_DASH] = ACTIONS(799),
    [anon_sym__] = ACTIONS(799),
    [sym_list_constructor] = ACTIONS(799),
    [sym__variable_pattern] = ACTIONS(1334),
    [sym__constructor_pattern] = ACTIONS(1334),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1334),
    [anon_sym_SQUOTE] = ACTIONS(799),
    [anon_sym_DQUOTE] = ACTIONS(799),
    [sym__integer_literal] = ACTIONS(799),
    [sym__octal_literal] = ACTIONS(799),
    [sym__hexidecimal_literal] = ACTIONS(799),
  },
  [505] = {
    [anon_sym_LPAREN] = ACTIONS(803),
    [anon_sym_TILDE] = ACTIONS(803),
    [anon_sym_LBRACK] = ACTIONS(803),
    [anon_sym_DASH] = ACTIONS(803),
    [anon_sym__] = ACTIONS(803),
    [anon_sym_COLON] = ACTIONS(803),
    [sym_list_constructor] = ACTIONS(803),
    [anon_sym_BANG] = ACTIONS(803),
    [sym__variable_pattern] = ACTIONS(1336),
    [sym__constructor_pattern] = ACTIONS(1336),
    [anon_sym_DOT] = ACTIONS(803),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1336),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [anon_sym_DQUOTE] = ACTIONS(803),
    [anon_sym_POUND] = ACTIONS(803),
    [anon_sym_DOLLAR] = ACTIONS(803),
    [anon_sym_PERCENT] = ACTIONS(803),
    [anon_sym_AMP] = ACTIONS(803),
    [anon_sym_1] = ACTIONS(803),
    [anon_sym_PLUS] = ACTIONS(803),
    [anon_sym_SLASH] = ACTIONS(803),
    [anon_sym_LT] = ACTIONS(803),
    [anon_sym_GT] = ACTIONS(803),
    [anon_sym_QMARK] = ACTIONS(803),
    [anon_sym_CARET] = ACTIONS(803),
    [sym__integer_literal] = ACTIONS(803),
    [sym__octal_literal] = ACTIONS(803),
    [sym__hexidecimal_literal] = ACTIONS(803),
  },
  [506] = {
    [anon_sym_LPAREN] = ACTIONS(815),
    [anon_sym_TILDE] = ACTIONS(815),
    [anon_sym_LBRACK] = ACTIONS(815),
    [anon_sym_DASH] = ACTIONS(815),
    [anon_sym__] = ACTIONS(815),
    [sym_list_constructor] = ACTIONS(815),
    [anon_sym_BANG] = ACTIONS(815),
    [sym__variable_pattern] = ACTIONS(1338),
    [sym__constructor_pattern] = ACTIONS(1338),
    [anon_sym_DOT] = ACTIONS(815),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1338),
    [anon_sym_SQUOTE] = ACTIONS(815),
    [anon_sym_DQUOTE] = ACTIONS(815),
    [anon_sym_POUND] = ACTIONS(815),
    [anon_sym_DOLLAR] = ACTIONS(815),
    [anon_sym_PERCENT] = ACTIONS(815),
    [anon_sym_AMP] = ACTIONS(815),
    [anon_sym_1] = ACTIONS(815),
    [anon_sym_PLUS] = ACTIONS(815),
    [anon_sym_SLASH] = ACTIONS(815),
    [anon_sym_LT] = ACTIONS(815),
    [anon_sym_GT] = ACTIONS(815),
    [anon_sym_QMARK] = ACTIONS(815),
    [anon_sym_CARET] = ACTIONS(815),
    [sym__integer_literal] = ACTIONS(815),
    [sym__octal_literal] = ACTIONS(815),
    [sym__hexidecimal_literal] = ACTIONS(815),
  },
  [507] = {
    [sym__op] = STATE(313),
    [sym_variable_symbol] = STATE(314),
    [sym_constructor_symbol] = STATE(314),
    [sym__variable_symbol] = STATE(315),
    [anon_sym_COMMA] = ACTIONS(1340),
    [anon_sym_RPAREN] = ACTIONS(1340),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_BQUOTE] = ACTIONS(615),
    [anon_sym_COLON] = ACTIONS(617),
    [anon_sym_BANG] = ACTIONS(613),
    [anon_sym_DOT] = ACTIONS(613),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(613),
    [anon_sym_DOLLAR] = ACTIONS(613),
    [anon_sym_PERCENT] = ACTIONS(613),
    [anon_sym_AMP] = ACTIONS(613),
    [anon_sym_1] = ACTIONS(613),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_SLASH] = ACTIONS(613),
    [anon_sym_LT] = ACTIONS(613),
    [anon_sym_GT] = ACTIONS(613),
    [anon_sym_QMARK] = ACTIONS(613),
    [anon_sym_CARET] = ACTIONS(613),
  },
  [508] = {
    [anon_sym_COMMA] = ACTIONS(1340),
    [anon_sym_RPAREN] = ACTIONS(1340),
    [sym_comment] = ACTIONS(5),
  },
  [509] = {
    [anon_sym_COMMA] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(561),
    [sym__variable_pattern] = ACTIONS(561),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(563),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [sym__integer_literal] = ACTIONS(561),
    [sym__octal_literal] = ACTIONS(561),
    [sym__hexidecimal_literal] = ACTIONS(561),
  },
  [510] = {
    [anon_sym_RBRACE] = ACTIONS(1342),
    [anon_sym_COMMA] = ACTIONS(1342),
    [sym_comment] = ACTIONS(5),
  },
  [511] = {
    [sym_label] = STATE(556),
    [sym__identifier] = STATE(332),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [512] = {
    [anon_sym_RBRACE] = ACTIONS(1344),
    [anon_sym_COMMA] = ACTIONS(1344),
    [sym_comment] = ACTIONS(5),
  },
  [513] = {
    [anon_sym_LPAREN] = ACTIONS(1178),
    [anon_sym_COMMA] = ACTIONS(1178),
    [anon_sym_RPAREN] = ACTIONS(1178),
    [anon_sym_LBRACK] = ACTIONS(1178),
    [anon_sym_RBRACK] = ACTIONS(1178),
    [anon_sym_DASH_GT] = ACTIONS(1178),
    [sym_unit_type] = ACTIONS(1178),
    [sym_list_constructor] = ACTIONS(1178),
    [sym_function_constructor] = ACTIONS(1178),
    [sym__variable_pattern] = ACTIONS(1178),
    [sym__constructor_pattern] = ACTIONS(1346),
    [sym_module_identifier] = ACTIONS(1346),
    [sym_comment] = ACTIONS(5),
  },
  [514] = {
    [anon_sym_COMMA] = ACTIONS(1180),
    [anon_sym_RPAREN] = ACTIONS(1348),
    [sym_comment] = ACTIONS(5),
  },
  [515] = {
    [anon_sym_LPAREN] = ACTIONS(1195),
    [anon_sym_COMMA] = ACTIONS(1195),
    [anon_sym_RPAREN] = ACTIONS(1195),
    [anon_sym_LBRACK] = ACTIONS(1195),
    [anon_sym_RBRACK] = ACTIONS(1195),
    [anon_sym_DASH_GT] = ACTIONS(1195),
    [sym_unit_type] = ACTIONS(1195),
    [sym_list_constructor] = ACTIONS(1195),
    [sym_function_constructor] = ACTIONS(1195),
    [sym__variable_pattern] = ACTIONS(1195),
    [sym__constructor_pattern] = ACTIONS(1350),
    [sym_module_identifier] = ACTIONS(1350),
    [sym_comment] = ACTIONS(5),
  },
  [516] = {
    [anon_sym_COMMA] = ACTIONS(1198),
    [anon_sym_RPAREN] = ACTIONS(1353),
    [sym_comment] = ACTIONS(5),
  },
  [517] = {
    [anon_sym_COMMA] = ACTIONS(1355),
    [anon_sym_RPAREN] = ACTIONS(1355),
    [sym_comment] = ACTIONS(5),
  },
  [518] = {
    [sym__layout_semicolon] = ACTIONS(1357),
    [anon_sym_SEMI] = ACTIONS(1359),
    [anon_sym_DASH_GT] = ACTIONS(1359),
    [sym_comment] = ACTIONS(5),
  },
  [519] = {
    [anon_sym_LPAREN] = ACTIONS(1210),
    [anon_sym_COMMA] = ACTIONS(1210),
    [anon_sym_RPAREN] = ACTIONS(1210),
    [anon_sym_LBRACK] = ACTIONS(1210),
    [anon_sym_RBRACK] = ACTIONS(1210),
    [anon_sym_DASH_GT] = ACTIONS(1210),
    [sym_unit_type] = ACTIONS(1210),
    [sym_list_constructor] = ACTIONS(1210),
    [sym_function_constructor] = ACTIONS(1210),
    [sym__variable_pattern] = ACTIONS(1210),
    [sym__constructor_pattern] = ACTIONS(1361),
    [sym_module_identifier] = ACTIONS(1361),
    [sym_comment] = ACTIONS(5),
  },
  [520] = {
    [sym_variable_identifier] = STATE(166),
    [aux_sym_type_class_repeat1] = STATE(559),
    [anon_sym_LPAREN] = ACTIONS(1222),
    [anon_sym_COMMA] = ACTIONS(1222),
    [anon_sym_RPAREN] = ACTIONS(1222),
    [anon_sym_LBRACK] = ACTIONS(1222),
    [anon_sym_RBRACK] = ACTIONS(1222),
    [anon_sym_DASH_GT] = ACTIONS(1222),
    [sym_unit_type] = ACTIONS(1222),
    [sym_list_constructor] = ACTIONS(1222),
    [sym_function_constructor] = ACTIONS(1222),
    [sym__variable_pattern] = ACTIONS(279),
    [sym__constructor_pattern] = ACTIONS(1363),
    [sym_module_identifier] = ACTIONS(1363),
    [sym_comment] = ACTIONS(5),
  },
  [521] = {
    [sym_variable_identifier] = STATE(288),
    [anon_sym_LPAREN] = ACTIONS(1222),
    [anon_sym_COMMA] = ACTIONS(1222),
    [anon_sym_RPAREN] = ACTIONS(1222),
    [anon_sym_LBRACK] = ACTIONS(1222),
    [anon_sym_RBRACK] = ACTIONS(1222),
    [anon_sym_DASH_GT] = ACTIONS(1222),
    [sym_unit_type] = ACTIONS(1222),
    [sym_list_constructor] = ACTIONS(1222),
    [sym_function_constructor] = ACTIONS(1222),
    [sym__variable_pattern] = ACTIONS(279),
    [sym__constructor_pattern] = ACTIONS(1363),
    [sym_module_identifier] = ACTIONS(1363),
    [sym_comment] = ACTIONS(5),
  },
  [522] = {
    [sym_constructor_identifier] = STATE(560),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_module_identifier] = ACTIONS(1224),
    [sym_comment] = ACTIONS(5),
  },
  [523] = {
    [anon_sym_COMMA] = ACTIONS(1365),
    [anon_sym_RPAREN] = ACTIONS(1365),
    [sym_comment] = ACTIONS(5),
  },
  [524] = {
    [sym_type] = STATE(561),
    [sym__generic_type_constructor] = STATE(340),
    [sym_tupling_constructor] = STATE(336),
    [sym_tuple] = STATE(340),
    [sym_list] = STATE(340),
    [sym_parenthesized_constructor] = STATE(340),
    [sym_variable_identifier] = STATE(342),
    [sym__type_constructors] = STATE(336),
    [sym_qualified_type_constructor] = STATE(343),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_LBRACK] = ACTIONS(651),
    [sym_unit_type] = ACTIONS(653),
    [sym_list_constructor] = ACTIONS(653),
    [sym_function_constructor] = ACTIONS(653),
    [sym__variable_pattern] = ACTIONS(655),
    [sym__constructor_pattern] = ACTIONS(661),
    [sym_module_identifier] = ACTIONS(659),
    [sym_comment] = ACTIONS(5),
  },
  [525] = {
    [sym__layout_semicolon] = ACTIONS(1367),
    [anon_sym_SEMI] = ACTIONS(1369),
    [anon_sym_DASH_GT] = ACTIONS(1369),
    [sym_comment] = ACTIONS(5),
  },
  [526] = {
    [anon_sym_LPAREN] = ACTIONS(1228),
    [anon_sym_COMMA] = ACTIONS(1228),
    [anon_sym_RPAREN] = ACTIONS(1228),
    [anon_sym_LBRACK] = ACTIONS(1228),
    [anon_sym_RBRACK] = ACTIONS(1228),
    [sym_unit_type] = ACTIONS(1228),
    [sym_list_constructor] = ACTIONS(1228),
    [sym_function_constructor] = ACTIONS(1228),
    [sym__variable_pattern] = ACTIONS(1228),
    [sym__constructor_pattern] = ACTIONS(1371),
    [sym_module_identifier] = ACTIONS(1371),
    [sym_comment] = ACTIONS(5),
  },
  [527] = {
    [anon_sym_LPAREN] = ACTIONS(1373),
    [anon_sym_LBRACK] = ACTIONS(1373),
    [sym_unit_type] = ACTIONS(1373),
    [sym_list_constructor] = ACTIONS(1373),
    [sym_function_constructor] = ACTIONS(1373),
    [sym__variable_pattern] = ACTIONS(1373),
    [sym__constructor_pattern] = ACTIONS(1052),
    [sym_module_identifier] = ACTIONS(1052),
    [sym_comment] = ACTIONS(5),
  },
  [528] = {
    [anon_sym_EQ_GT] = ACTIONS(1375),
    [sym_comment] = ACTIONS(5),
  },
  [529] = {
    [anon_sym_LPAREN] = ACTIONS(1232),
    [anon_sym_COMMA] = ACTIONS(1232),
    [anon_sym_RPAREN] = ACTIONS(1232),
    [anon_sym_LBRACK] = ACTIONS(1232),
    [anon_sym_RBRACK] = ACTIONS(1232),
    [sym_unit_type] = ACTIONS(1232),
    [sym_list_constructor] = ACTIONS(1232),
    [sym_function_constructor] = ACTIONS(1232),
    [sym__variable_pattern] = ACTIONS(1232),
    [sym__constructor_pattern] = ACTIONS(1377),
    [sym_module_identifier] = ACTIONS(1377),
    [sym_comment] = ACTIONS(5),
  },
  [530] = {
    [sym_constructor_identifier] = STATE(560),
    [sym__constructor_pattern] = ACTIONS(966),
    [sym_module_identifier] = ACTIONS(1224),
    [sym_comment] = ACTIONS(5),
  },
  [531] = {
    [sym_variable_identifier] = STATE(457),
    [sym__layout_semicolon] = ACTIONS(1379),
    [anon_sym_SEMI] = ACTIONS(1381),
    [anon_sym_DASH_GT] = ACTIONS(1381),
    [sym__variable_pattern] = ACTIONS(361),
    [sym_comment] = ACTIONS(5),
  },
  [532] = {
    [sym__constructor_pattern] = ACTIONS(1383),
    [anon_sym_DOT] = ACTIONS(1385),
    [sym_comment] = ACTIONS(5),
  },
  [533] = {
    [sym_variable_identifier] = STATE(350),
    [aux_sym_type_class_repeat1] = STATE(563),
    [sym__layout_semicolon] = ACTIONS(1379),
    [anon_sym_SEMI] = ACTIONS(1381),
    [anon_sym_DASH_GT] = ACTIONS(1381),
    [sym__variable_pattern] = ACTIONS(361),
    [sym_comment] = ACTIONS(5),
  },
  [534] = {
    [sym__layout_close_brace] = ACTIONS(697),
    [anon_sym_import] = ACTIONS(699),
    [anon_sym_foreign] = ACTIONS(699),
    [anon_sym_default] = ACTIONS(699),
    [anon_sym_do] = ACTIONS(699),
    [anon_sym_class] = ACTIONS(699),
    [anon_sym_instance] = ACTIONS(699),
    [anon_sym_infixl] = ACTIONS(699),
    [anon_sym_infixr] = ACTIONS(699),
    [anon_sym_infix] = ACTIONS(699),
    [anon_sym_data] = ACTIONS(699),
    [anon_sym_newtype] = ACTIONS(699),
    [anon_sym_type] = ACTIONS(699),
    [sym__variable_pattern] = ACTIONS(701),
    [sym__constructor_pattern] = ACTIONS(701),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(701),
    [anon_sym_SQUOTE] = ACTIONS(699),
    [anon_sym_DQUOTE] = ACTIONS(699),
    [sym__integer_literal] = ACTIONS(699),
    [sym__octal_literal] = ACTIONS(699),
    [sym__hexidecimal_literal] = ACTIONS(699),
  },
  [535] = {
    [anon_sym_COMMA] = ACTIONS(1387),
    [anon_sym_RPAREN] = ACTIONS(1387),
    [sym_comment] = ACTIONS(5),
  },
  [536] = {
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_RPAREN] = ACTIONS(1389),
    [sym_comment] = ACTIONS(5),
  },
  [537] = {
    [anon_sym_COMMA] = ACTIONS(749),
    [anon_sym_RPAREN] = ACTIONS(1391),
    [sym_comment] = ACTIONS(5),
  },
  [538] = {
    [aux_sym_import_specification_repeat1] = STATE(566),
    [anon_sym_COMMA] = ACTIONS(731),
    [anon_sym_RPAREN] = ACTIONS(1393),
    [sym_comment] = ACTIONS(5),
  },
  [539] = {
    [anon_sym_COMMA] = ACTIONS(749),
    [anon_sym_RPAREN] = ACTIONS(1395),
    [sym_comment] = ACTIONS(5),
  },
  [540] = {
    [sym__identifier] = STATE(569),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_DOT_DOT] = ACTIONS(1397),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [541] = {
    [anon_sym_LPAREN] = ACTIONS(1399),
    [anon_sym_COMMA] = ACTIONS(1401),
    [anon_sym_RPAREN] = ACTIONS(1401),
    [sym_comment] = ACTIONS(5),
  },
  [542] = {
    [anon_sym_RPAREN] = ACTIONS(1395),
    [sym_comment] = ACTIONS(5),
  },
  [543] = {
    [aux_sym_export_repeat1] = STATE(571),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(1395),
    [sym_comment] = ACTIONS(5),
  },
  [544] = {
    [sym__layout_semicolon] = ACTIONS(1403),
    [anon_sym_SEMI] = ACTIONS(1405),
    [sym_comment] = ACTIONS(5),
  },
  [545] = {
    [sym__layout_close_brace] = ACTIONS(1407),
    [anon_sym_infixl] = ACTIONS(1409),
    [anon_sym_infixr] = ACTIONS(1409),
    [anon_sym_infix] = ACTIONS(1409),
    [sym__variable_pattern] = ACTIONS(1411),
    [sym__constructor_pattern] = ACTIONS(1411),
    [sym_comment] = ACTIONS(5),
  },
  [546] = {
    [anon_sym_RBRACE] = ACTIONS(1409),
    [anon_sym_infixl] = ACTIONS(1409),
    [anon_sym_infixr] = ACTIONS(1409),
    [anon_sym_infix] = ACTIONS(1409),
    [sym__variable_pattern] = ACTIONS(1411),
    [sym__constructor_pattern] = ACTIONS(1411),
    [sym_comment] = ACTIONS(5),
  },
  [547] = {
    [sym__layout_semicolon] = ACTIONS(1413),
    [anon_sym_SEMI] = ACTIONS(1415),
    [sym_comment] = ACTIONS(5),
  },
  [548] = {
    [anon_sym_RBRACE] = ACTIONS(1417),
    [anon_sym_COMMA] = ACTIONS(1417),
    [sym_comment] = ACTIONS(5),
  },
  [549] = {
    [sym__layout_semicolon] = ACTIONS(1419),
    [anon_sym_SEMI] = ACTIONS(1421),
    [anon_sym_PIPE] = ACTIONS(1421),
    [anon_sym_deriving] = ACTIONS(1421),
    [sym_comment] = ACTIONS(5),
  },
  [550] = {
    [sym_field] = STATE(572),
    [sym_variable_identifier] = STATE(403),
    [sym__variable_pattern] = ACTIONS(655),
    [sym_comment] = ACTIONS(5),
  },
  [551] = {
    [anon_sym_COMMA] = ACTIONS(1423),
    [anon_sym_COLON_COLON] = ACTIONS(1423),
    [sym_comment] = ACTIONS(5),
  },
  [552] = {
    [sym__identifier] = STATE(573),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [553] = {
    [anon_sym_RBRACE] = ACTIONS(1425),
    [anon_sym_COMMA] = ACTIONS(1425),
    [sym_comment] = ACTIONS(5),
  },
  [554] = {
    [sym_variable_identifier] = STATE(574),
    [sym__variable_pattern] = ACTIONS(655),
    [sym_comment] = ACTIONS(5),
  },
  [555] = {
    [sym_strict] = STATE(575),
    [sym__identifier] = STATE(575),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_BANG] = ACTIONS(1322),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [556] = {
    [anon_sym_RBRACE] = ACTIONS(1427),
    [anon_sym_COMMA] = ACTIONS(1427),
    [sym_comment] = ACTIONS(5),
  },
  [557] = {
    [anon_sym_LPAREN] = ACTIONS(1359),
    [anon_sym_COMMA] = ACTIONS(1359),
    [anon_sym_RPAREN] = ACTIONS(1359),
    [anon_sym_LBRACK] = ACTIONS(1359),
    [anon_sym_RBRACK] = ACTIONS(1359),
    [anon_sym_DASH_GT] = ACTIONS(1359),
    [sym_unit_type] = ACTIONS(1359),
    [sym_list_constructor] = ACTIONS(1359),
    [sym_function_constructor] = ACTIONS(1359),
    [sym__variable_pattern] = ACTIONS(1359),
    [sym__constructor_pattern] = ACTIONS(1429),
    [sym_module_identifier] = ACTIONS(1429),
    [sym_comment] = ACTIONS(5),
  },
  [558] = {
    [anon_sym_LPAREN] = ACTIONS(1369),
    [anon_sym_COMMA] = ACTIONS(1369),
    [anon_sym_RPAREN] = ACTIONS(1369),
    [anon_sym_LBRACK] = ACTIONS(1369),
    [anon_sym_RBRACK] = ACTIONS(1369),
    [anon_sym_DASH_GT] = ACTIONS(1369),
    [sym_unit_type] = ACTIONS(1369),
    [sym_list_constructor] = ACTIONS(1369),
    [sym_function_constructor] = ACTIONS(1369),
    [sym__variable_pattern] = ACTIONS(1369),
    [sym__constructor_pattern] = ACTIONS(1431),
    [sym_module_identifier] = ACTIONS(1431),
    [sym_comment] = ACTIONS(5),
  },
  [559] = {
    [sym_variable_identifier] = STATE(288),
    [anon_sym_LPAREN] = ACTIONS(1381),
    [anon_sym_COMMA] = ACTIONS(1381),
    [anon_sym_RPAREN] = ACTIONS(1381),
    [anon_sym_LBRACK] = ACTIONS(1381),
    [anon_sym_RBRACK] = ACTIONS(1381),
    [anon_sym_DASH_GT] = ACTIONS(1381),
    [sym_unit_type] = ACTIONS(1381),
    [sym_list_constructor] = ACTIONS(1381),
    [sym_function_constructor] = ACTIONS(1381),
    [sym__variable_pattern] = ACTIONS(279),
    [sym__constructor_pattern] = ACTIONS(1433),
    [sym_module_identifier] = ACTIONS(1433),
    [sym_comment] = ACTIONS(5),
  },
  [560] = {
    [sym_variable_identifier] = STATE(166),
    [aux_sym_type_class_repeat1] = STATE(576),
    [anon_sym_LPAREN] = ACTIONS(1381),
    [anon_sym_COMMA] = ACTIONS(1381),
    [anon_sym_RPAREN] = ACTIONS(1381),
    [anon_sym_LBRACK] = ACTIONS(1381),
    [anon_sym_RBRACK] = ACTIONS(1381),
    [anon_sym_DASH_GT] = ACTIONS(1381),
    [sym_unit_type] = ACTIONS(1381),
    [sym_list_constructor] = ACTIONS(1381),
    [sym_function_constructor] = ACTIONS(1381),
    [sym__variable_pattern] = ACTIONS(279),
    [sym__constructor_pattern] = ACTIONS(1433),
    [sym_module_identifier] = ACTIONS(1433),
    [sym_comment] = ACTIONS(5),
  },
  [561] = {
    [anon_sym_COMMA] = ACTIONS(1435),
    [anon_sym_RPAREN] = ACTIONS(1435),
    [sym_comment] = ACTIONS(5),
  },
  [562] = {
    [anon_sym_LPAREN] = ACTIONS(1437),
    [anon_sym_LBRACK] = ACTIONS(1437),
    [sym_unit_type] = ACTIONS(1437),
    [sym_list_constructor] = ACTIONS(1437),
    [sym_function_constructor] = ACTIONS(1437),
    [sym__variable_pattern] = ACTIONS(1437),
    [sym__constructor_pattern] = ACTIONS(1272),
    [sym_module_identifier] = ACTIONS(1272),
    [sym_comment] = ACTIONS(5),
  },
  [563] = {
    [sym_variable_identifier] = STATE(457),
    [sym__layout_semicolon] = ACTIONS(1439),
    [anon_sym_SEMI] = ACTIONS(1441),
    [anon_sym_DASH_GT] = ACTIONS(1441),
    [sym__variable_pattern] = ACTIONS(361),
    [sym_comment] = ACTIONS(5),
  },
  [564] = {
    [anon_sym_COMMA] = ACTIONS(1443),
    [anon_sym_RPAREN] = ACTIONS(1443),
    [sym_comment] = ACTIONS(5),
  },
  [565] = {
    [sym__layout_semicolon] = ACTIONS(1445),
    [anon_sym_SEMI] = ACTIONS(1447),
    [sym_comment] = ACTIONS(5),
  },
  [566] = {
    [anon_sym_COMMA] = ACTIONS(1032),
    [anon_sym_RPAREN] = ACTIONS(1449),
    [sym_comment] = ACTIONS(5),
  },
  [567] = {
    [aux_sym_import_specification_repeat1] = STATE(578),
    [anon_sym_COMMA] = ACTIONS(731),
    [anon_sym_RPAREN] = ACTIONS(1449),
    [sym_comment] = ACTIONS(5),
  },
  [568] = {
    [anon_sym_RPAREN] = ACTIONS(1451),
    [sym_comment] = ACTIONS(5),
  },
  [569] = {
    [aux_sym_export_repeat1] = STATE(580),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(1451),
    [sym_comment] = ACTIONS(5),
  },
  [570] = {
    [sym__identifier] = STATE(582),
    [sym_variable_identifier] = STATE(118),
    [sym_constructor_identifier] = STATE(118),
    [anon_sym_DOT_DOT] = ACTIONS(1453),
    [sym__variable_pattern] = ACTIONS(213),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [571] = {
    [anon_sym_COMMA] = ACTIONS(749),
    [anon_sym_RPAREN] = ACTIONS(1455),
    [sym_comment] = ACTIONS(5),
  },
  [572] = {
    [anon_sym_RBRACE] = ACTIONS(1457),
    [anon_sym_COMMA] = ACTIONS(1457),
    [sym_comment] = ACTIONS(5),
  },
  [573] = {
    [anon_sym_RBRACE] = ACTIONS(1106),
    [anon_sym_COMMA] = ACTIONS(1106),
    [sym_comment] = ACTIONS(5),
  },
  [574] = {
    [anon_sym_COMMA] = ACTIONS(1459),
    [anon_sym_COLON_COLON] = ACTIONS(1459),
    [sym_comment] = ACTIONS(5),
  },
  [575] = {
    [anon_sym_RBRACE] = ACTIONS(1461),
    [anon_sym_COMMA] = ACTIONS(1461),
    [sym_comment] = ACTIONS(5),
  },
  [576] = {
    [sym_variable_identifier] = STATE(288),
    [anon_sym_LPAREN] = ACTIONS(1441),
    [anon_sym_COMMA] = ACTIONS(1441),
    [anon_sym_RPAREN] = ACTIONS(1441),
    [anon_sym_LBRACK] = ACTIONS(1441),
    [anon_sym_RBRACK] = ACTIONS(1441),
    [anon_sym_DASH_GT] = ACTIONS(1441),
    [sym_unit_type] = ACTIONS(1441),
    [sym_list_constructor] = ACTIONS(1441),
    [sym_function_constructor] = ACTIONS(1441),
    [sym__variable_pattern] = ACTIONS(279),
    [sym__constructor_pattern] = ACTIONS(1463),
    [sym_module_identifier] = ACTIONS(1463),
    [sym_comment] = ACTIONS(5),
  },
  [577] = {
    [sym__layout_semicolon] = ACTIONS(1465),
    [anon_sym_SEMI] = ACTIONS(1467),
    [sym_comment] = ACTIONS(5),
  },
  [578] = {
    [anon_sym_COMMA] = ACTIONS(1032),
    [anon_sym_RPAREN] = ACTIONS(1469),
    [sym_comment] = ACTIONS(5),
  },
  [579] = {
    [anon_sym_COMMA] = ACTIONS(1471),
    [anon_sym_RPAREN] = ACTIONS(1471),
    [sym_comment] = ACTIONS(5),
  },
  [580] = {
    [anon_sym_COMMA] = ACTIONS(749),
    [anon_sym_RPAREN] = ACTIONS(1473),
    [sym_comment] = ACTIONS(5),
  },
  [581] = {
    [anon_sym_RPAREN] = ACTIONS(1473),
    [sym_comment] = ACTIONS(5),
  },
  [582] = {
    [aux_sym_export_repeat1] = STATE(586),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(1473),
    [sym_comment] = ACTIONS(5),
  },
  [583] = {
    [aux_sym_import_specification_repeat1] = STATE(587),
    [anon_sym_COMMA] = ACTIONS(731),
    [anon_sym_RPAREN] = ACTIONS(1469),
    [sym_comment] = ACTIONS(5),
  },
  [584] = {
    [sym__layout_semicolon] = ACTIONS(1475),
    [anon_sym_SEMI] = ACTIONS(1477),
    [sym_comment] = ACTIONS(5),
  },
  [585] = {
    [anon_sym_COMMA] = ACTIONS(1479),
    [anon_sym_RPAREN] = ACTIONS(1479),
    [sym_comment] = ACTIONS(5),
  },
  [586] = {
    [anon_sym_COMMA] = ACTIONS(749),
    [anon_sym_RPAREN] = ACTIONS(1481),
    [sym_comment] = ACTIONS(5),
  },
  [587] = {
    [anon_sym_COMMA] = ACTIONS(1032),
    [anon_sym_RPAREN] = ACTIONS(1483),
    [sym_comment] = ACTIONS(5),
  },
  [588] = {
    [anon_sym_COMMA] = ACTIONS(1485),
    [anon_sym_RPAREN] = ACTIONS(1485),
    [sym_comment] = ACTIONS(5),
  },
  [589] = {
    [sym__layout_semicolon] = ACTIONS(1487),
    [anon_sym_SEMI] = ACTIONS(1489),
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
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(92),
  [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(93),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable, 1, .fragile = true),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__general_declaration, 1),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__general_declaration, 1),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign_import, 1),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(120),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [225] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_identifier, 1),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(133),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable_symbol, 1),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable_symbol, 1),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 1),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(140),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(143),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [273] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(156),
  [275] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_variable_identifier, 2),
  [289] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(169),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(170),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(171),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(172),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(173),
  [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(174),
  [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(175),
  [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(176),
  [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(177),
  [341] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(178),
  [343] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(179),
  [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(180),
  [349] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(181),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
  [355] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 1),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 1),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
  [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(183),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_declaration, 2),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_declaration, 2),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(188),
  [373] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(189),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_wildcard, 1),
  [379] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_wildcard, 1),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 1),
  [383] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 1),
  [385] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(201),
  [387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(202),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 1),
  [391] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 1),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_head, 2),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [407] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(211),
  [409] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(212),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_calling_convention, 1),
  [437] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_calling_convention, 1),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 3),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 3),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [463] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
  [479] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [489] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(263),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__constructor_symbol, 1),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__constructor_symbol, 1),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
  [527] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(272),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(274),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(278),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [551] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(289),
  [557] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(290),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [563] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [569] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(292),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [577] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [579] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [581] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(298),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(300),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(302),
  [587] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [589] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [595] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 1),
  [601] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 2),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 2),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(310),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(311),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(312),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 1),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(317),
  [623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(318),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(319),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(320),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_irrefutable_pattern, 2),
  [631] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_irrefutable_pattern, 2),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(325),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
  [639] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(327),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(329),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 2),
  [645] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 2),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(334),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(336),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [657] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(337),
  [659] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(338),
  [661] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(344),
  [663] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(345),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__generic_type_constructor, 1),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(352),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(355),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(357),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 3),
  [701] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(363),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(366),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(368),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(369),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(370),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_safety, 1),
  [737] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_safety, 1),
  [739] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(375),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 4),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 4),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 4),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 4),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(380),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(381),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [757] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [767] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(383),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(384),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(385),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(387),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(388),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(388),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(393),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [789] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(395),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 4),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 4),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(401),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [837] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [857] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [861] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(409),
  [863] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [865] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(410),
  [867] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [869] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [871] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [873] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [875] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(411),
  [877] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [879] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(412),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 1, .fragile = true),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 1, .fragile = true),
  [885] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 1, .fragile = true),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_constructor, 2),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_constructor, 2),
  [891] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_general_constructor, 2),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 2),
  [897] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [899] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_pattern, 3),
  [901] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_pattern, 3),
  [903] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable_symbol, 1),
  [905] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(418),
  [907] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [909] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [911] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [913] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(425),
  [915] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(426),
  [917] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(427),
  [919] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 1, .fragile = true), REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list_pattern, 3),
  [924] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list_pattern, 3),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_as_pattern, 3),
  [928] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_as_pattern, 3),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 3),
  [932] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 3),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(429),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 1),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(430),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(432),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(433),
  [944] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(435),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(436),
  [948] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [950] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(440),
  [952] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(443),
  [954] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(444),
  [956] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(446),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(447),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(449),
  [962] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [964] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [966] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(450),
  [968] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(451),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 1),
  [972] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 1),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(453),
  [976] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [978] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(454),
  [980] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [982] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(455),
  [984] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [988] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(458),
  [990] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [992] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [994] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(461),
  [996] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [998] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 2),
  [1004] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(464),
  [1006] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(464),
  [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(465),
  [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(465),
  [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(468),
  [1016] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(469),
  [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(470),
  [1020] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5),
  [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(473),
  [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [1032] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(476),
  [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(477),
  [1036] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(478),
  [1038] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(480),
  [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 5),
  [1042] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 5),
  [1044] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 5),
  [1048] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 5),
  [1050] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [1052] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(484),
  [1056] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [1058] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [1060] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 2),
  [1062] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 2),
  [1064] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(486),
  [1066] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(486),
  [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(487),
  [1070] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(489),
  [1072] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(489),
  [1074] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(487),
  [1076] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [1078] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 5),
  [1080] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 5),
  [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1084] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1086] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [1088] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [1090] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(493),
  [1092] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1094] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(496),
  [1098] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(497),
  [1100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(499),
  [1102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(500),
  [1104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [1106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [1108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [1118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [1120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [1122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [1124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [1126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [1128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [1130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [1132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(503),
  [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_pattern_repeat1, 2),
  [1142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(504),
  [1144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__constructor_symbol, 1),
  [1146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [1148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [1150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 3),
  [1152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [1154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [1156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple_pattern, 4),
  [1158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple_pattern, 4),
  [1160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(509),
  [1162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 4),
  [1164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 4),
  [1166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 2),
  [1168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(511),
  [1170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(513),
  [1172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(515),
  [1174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 1),
  [1176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 3),
  [1180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(517),
  [1182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(518),
  [1184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(519),
  [1186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [1188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [1190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(522),
  [1192] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1195] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(524),
  [1200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(525),
  [1202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(527),
  [1204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(528),
  [1206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(530),
  [1208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
  [1212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 2),
  [1214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 2),
  [1216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1224] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(532),
  [1226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3),
  [1230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
  [1236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(534),
  [1238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(534),
  [1240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [1242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [1244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(536),
  [1246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [1248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [1250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(538),
  [1252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(540),
  [1254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [1256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [1258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [1260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(542),
  [1262] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(544),
  [1264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 6),
  [1266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 6),
  [1268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [1270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [1272] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [1274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [1276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [1278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1282] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 3),
  [1286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 3),
  [1288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(545),
  [1290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(545),
  [1292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(546),
  [1294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(546),
  [1296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 6),
  [1298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 6),
  [1300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [1302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [1304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [1306] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [1308] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(547),
  [1310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [1316] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [1318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(549),
  [1320] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(550),
  [1322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(552),
  [1324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(554),
  [1326] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(555),
  [1328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [1330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [1332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_negative_literal, 4),
  [1334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [1336] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [1338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [1340] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_pattern_repeat1, 3),
  [1342] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 2),
  [1344] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label, 3),
  [1346] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(557),
  [1350] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(558),
  [1355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 2),
  [1357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 4),
  [1361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [1367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 4),
  [1371] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [1375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(562),
  [1377] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1383] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [1389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [1391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(564),
  [1393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(565),
  [1395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(567),
  [1397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(568),
  [1399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(570),
  [1401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [1403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [1405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [1407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1411] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [1415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [1417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [1419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [1423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [1425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [1427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 3),
  [1429] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1431] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1433] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 3),
  [1437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [1439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [1445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [1447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [1449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(577),
  [1451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(579),
  [1453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(581),
  [1455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(583),
  [1457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [1459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [1461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [1463] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [1467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [1469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(584),
  [1471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [1473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(585),
  [1475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [1477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [1479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [1481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(588),
  [1483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(589),
  [1485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [1487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
