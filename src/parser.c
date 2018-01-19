#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 556
#define SYMBOL_COUNT 229
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
  sym_labels = 142,
  sym_label = 143,
  sym_wildcard = 144,
  sym__variable = 145,
  sym_qualified_variable_identifier = 146,
  sym_qualified_variable_symbol = 147,
  sym__expression = 148,
  sym_foreign = 149,
  sym_foreign_import = 150,
  sym_calling_convention = 151,
  sym_safety = 152,
  sym_default = 153,
  sym_do_expression = 154,
  sym_statement_list = 155,
  sym__statement = 156,
  sym_type_class = 157,
  sym_general_declarations = 158,
  sym_type_class_instance = 159,
  sym__general_declaration = 160,
  sym_fixity = 161,
  sym__op = 162,
  sym_variable_symbol = 163,
  sym_constructor_symbol = 164,
  sym_type_signature = 165,
  sym_type = 166,
  sym__generic_type_constructor = 167,
  sym_tupling_constructor = 168,
  sym_tuple = 169,
  sym_list = 170,
  sym_parenthesized_constructor = 171,
  sym_algebraic_datatype = 172,
  sym_context = 173,
  sym_class = 174,
  sym_constructors = 175,
  sym_constructor = 176,
  sym_deriving = 177,
  sym_newtype = 178,
  sym_new_constructor = 179,
  sym_field = 180,
  sym_strict = 181,
  sym_type_synonym = 182,
  sym__literal = 183,
  sym__identifier = 184,
  sym_simple_type = 185,
  sym_variable_identifier = 186,
  sym_constructor_identifier = 187,
  sym__type_constructors = 188,
  sym_qualified_type_constructor = 189,
  sym_integer = 190,
  sym_char = 191,
  sym_string = 192,
  sym__gap = 193,
  sym__graphic = 194,
  sym__small = 195,
  sym__large = 196,
  sym__symbol = 197,
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
  aux_sym__function_pattern_repeat1 = 210,
  aux_sym_labels_repeat1 = 211,
  aux_sym_statement_list_repeat1 = 212,
  aux_sym_type_class_repeat1 = 213,
  aux_sym_general_declarations_repeat1 = 214,
  aux_sym_fixity_repeat1 = 215,
  aux_sym_variable_symbol_repeat1 = 216,
  aux_sym_tupling_constructor_repeat1 = 217,
  aux_sym_tuple_repeat1 = 218,
  aux_sym_list_repeat1 = 219,
  aux_sym_context_repeat1 = 220,
  aux_sym_constructors_repeat1 = 221,
  aux_sym_constructor_repeat1 = 222,
  aux_sym_field_repeat1 = 223,
  aux_sym_qualified_type_constructor_repeat1 = 224,
  aux_sym_string_repeat1 = 225,
  aux_sym__escape_repeat1 = 226,
  aux_sym__escape_repeat2 = 227,
  aux_sym_fields_repeat1 = 228,
  alias_sym_type_constructor = 229,
  alias_sym_type_variable = 230,
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
  [sym_labels] = "labels",
  [sym_label] = "label",
  [sym_wildcard] = "wildcard",
  [sym__variable] = "_variable",
  [sym_qualified_variable_identifier] = "qualified_variable_identifier",
  [sym_qualified_variable_symbol] = "qualified_variable_symbol",
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
  [aux_sym__function_pattern_repeat1] = "_function_pattern_repeat1",
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
  [sym_qualified_variable_symbol] = {
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
  [aux_sym__function_pattern_repeat1] = {
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
        ADVANCE(252);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == 'c')
        ADVANCE(264);
      if (lookahead == 'd')
        ADVANCE(270);
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
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(179);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 180:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(180);
      if (lookahead == '\r')
        ADVANCE(180);
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
        ADVANCE(181);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(191);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == 'c')
        ADVANCE(192);
      if (lookahead == 'd')
        ADVANCE(198);
      if (lookahead == 'f')
        ADVANCE(209);
      if (lookahead == 'i')
        ADVANCE(216);
      if (lookahead == 'm')
        ADVANCE(234);
      if (lookahead == 'n')
        ADVANCE(240);
      if (lookahead == 't')
        ADVANCE(247);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(180);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      ADVANCE(8);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(88);
      if (lookahead == 'E')
        ADVANCE(89);
      if (lookahead == 'O')
        ADVANCE(185);
      if (lookahead == 'X')
        ADVANCE(187);
      if (lookahead == 'e')
        ADVANCE(89);
      if (lookahead == 'o')
        ADVANCE(185);
      if (lookahead == 'x')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 185:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(186);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(186);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 187:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(188);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(188);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(180);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(199);
      if (lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'o')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(217);
      if (lookahead == 'n')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(223);
      if (lookahead == 's')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(251);
      if (lookahead == '-')
        ADVANCE(4);
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
        ADVANCE(180);
      if (lookahead == '\r')
        ADVANCE(252);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == 'c')
        ADVANCE(264);
      if (lookahead == 'd')
        ADVANCE(270);
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
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(179);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(29);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(172);
      if (lookahead == 'E')
        ADVANCE(173);
      if (lookahead == 'O')
        ADVANCE(257);
      if (lookahead == 'X')
        ADVANCE(259);
      if (lookahead == 'e')
        ADVANCE(173);
      if (lookahead == 'o')
        ADVANCE(257);
      if (lookahead == 'x')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(258);
      END_STATE();
    case 259:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'l')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'a')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 's')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 's')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'a')
        ADVANCE(271);
      if (lookahead == 'e')
        ADVANCE(274);
      if (lookahead == 'o')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 't')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'a')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'f')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'a')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'u')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'l')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 't')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'o')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'r')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'e')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'i')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'g')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'n')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'm')
        ADVANCE(289);
      if (lookahead == 'n')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'p')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'o')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'r')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 't')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'f')
        ADVANCE(295);
      if (lookahead == 's')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'i')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'x')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'l')
        ADVANCE(298);
      if (lookahead == 'r')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 't')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'a')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'n')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'c')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'e')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'o')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'd')
        ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'u')
        ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'l')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'e')
        ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'e')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'w')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 't')
        ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'y')
        ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'p')
        ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'e')
        ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'y')
        ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'p')
        ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'e')
        ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
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
        ADVANCE(338);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '\\')
        SKIP(340);
      if (lookahead == 'q')
        ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(324);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(350);
      END_STATE();
    case 325:
      if (lookahead == '\n')
        ADVANCE(325);
      if (lookahead == '\r')
        ADVANCE(325);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == '\\')
        ADVANCE(327);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(337);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 326:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 327:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(325);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 328:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(329);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 329:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(330);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 330:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(331);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 331:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(332);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 332:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
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
      if (lookahead == 'e')
        ADVANCE(335);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 335:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(336);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(337);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(337);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 338:
      if (lookahead == '\n')
        ADVANCE(325);
      if (lookahead == '\r')
        ADVANCE(338);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '\\')
        SKIP(340);
      if (lookahead == 'q')
        ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(324);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(350);
      END_STATE();
    case 339:
      if (lookahead == '-')
        ADVANCE(29);
      END_STATE();
    case 340:
      if (lookahead == 'n')
        SKIP(324);
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
        ADVANCE(355);
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
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(356);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(351);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 352:
      if (lookahead == '\n')
        ADVANCE(352);
      if (lookahead == '\r')
        ADVANCE(352);
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
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(353);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(354);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(352);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(352);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 355:
      if (lookahead == '\n')
        ADVANCE(352);
      if (lookahead == '\r')
        ADVANCE(355);
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
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(356);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(351);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 357:
      if (lookahead == '\n')
        ADVANCE(358);
      if (lookahead == '\r')
        ADVANCE(408);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == ':')
        ADVANCE(410);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(411);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == 'c')
        ADVANCE(412);
      if (lookahead == 'd')
        ADVANCE(425);
      if (lookahead == 'e')
        ADVANCE(431);
      if (lookahead == 'i')
        ADVANCE(437);
      if (lookahead == 'j')
        ADVANCE(443);
      if (lookahead == 's')
        ADVANCE(446);
      if (lookahead == 'w')
        ADVANCE(453);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(357);
      END_STATE();
    case 358:
      if (lookahead == '\n')
        ADVANCE(358);
      if (lookahead == '\r')
        ADVANCE(358);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(359);
      if (lookahead == ':')
        ADVANCE(360);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '\\')
        ADVANCE(361);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == 'c')
        ADVANCE(362);
      if (lookahead == 'd')
        ADVANCE(375);
      if (lookahead == 'e')
        ADVANCE(381);
      if (lookahead == 'i')
        ADVANCE(387);
      if (lookahead == 'j')
        ADVANCE(393);
      if (lookahead == 's')
        ADVANCE(396);
      if (lookahead == 'w')
        ADVANCE(403);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(358);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 359:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 360:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 361:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(358);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 362:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(363);
      if (lookahead == 'p')
        ADVANCE(367);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 363:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(364);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 364:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
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
      ACCEPT_TOKEN(anon_sym_ccall);
      if (lookahead == '-')
        ADVANCE(4);
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(371);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 371:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 372:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(373);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 373:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(374);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_cplusplus);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 375:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(376);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 376:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(377);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 377:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 378:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
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
      ACCEPT_TOKEN(anon_sym_dotnet);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 381:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
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
      ACCEPT_TOKEN(sym_foreign_export);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 387:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(388);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 388:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(389);
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
      if (lookahead == 'r')
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
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 393:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(394);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 394:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(395);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_jvm);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 396:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(397);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 397:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(398);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 398:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(399);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 399:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(400);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 400:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(401);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 401:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(402);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_stdcall);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 403:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(406);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 406:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(407);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 408:
      if (lookahead == '\n')
        ADVANCE(358);
      if (lookahead == '\r')
        ADVANCE(408);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == ':')
        ADVANCE(410);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(411);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == 'c')
        ADVANCE(412);
      if (lookahead == 'd')
        ADVANCE(425);
      if (lookahead == 'e')
        ADVANCE(431);
      if (lookahead == 'i')
        ADVANCE(437);
      if (lookahead == 'j')
        ADVANCE(443);
      if (lookahead == 's')
        ADVANCE(446);
      if (lookahead == 'w')
        ADVANCE(453);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(357);
      END_STATE();
    case 409:
      if (lookahead == '-')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(114);
      END_STATE();
    case 410:
      if (lookahead == ':')
        ADVANCE(119);
      END_STATE();
    case 411:
      if (lookahead == 'n')
        SKIP(357);
      END_STATE();
    case 412:
      if (lookahead == 'c')
        ADVANCE(413);
      if (lookahead == 'p')
        ADVANCE(417);
      END_STATE();
    case 413:
      if (lookahead == 'a')
        ADVANCE(414);
      END_STATE();
    case 414:
      if (lookahead == 'l')
        ADVANCE(415);
      END_STATE();
    case 415:
      if (lookahead == 'l')
        ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_ccall);
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
      if (lookahead == 'p')
        ADVANCE(421);
      END_STATE();
    case 421:
      if (lookahead == 'l')
        ADVANCE(422);
      END_STATE();
    case 422:
      if (lookahead == 'u')
        ADVANCE(423);
      END_STATE();
    case 423:
      if (lookahead == 's')
        ADVANCE(424);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_cplusplus);
      END_STATE();
    case 425:
      if (lookahead == 'o')
        ADVANCE(426);
      END_STATE();
    case 426:
      if (lookahead == 't')
        ADVANCE(427);
      END_STATE();
    case 427:
      if (lookahead == 'n')
        ADVANCE(428);
      END_STATE();
    case 428:
      if (lookahead == 'e')
        ADVANCE(429);
      END_STATE();
    case 429:
      if (lookahead == 't')
        ADVANCE(430);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_dotnet);
      END_STATE();
    case 431:
      if (lookahead == 'x')
        ADVANCE(432);
      END_STATE();
    case 432:
      if (lookahead == 'p')
        ADVANCE(433);
      END_STATE();
    case 433:
      if (lookahead == 'o')
        ADVANCE(434);
      END_STATE();
    case 434:
      if (lookahead == 'r')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 't')
        ADVANCE(436);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_foreign_export);
      END_STATE();
    case 437:
      if (lookahead == 'm')
        ADVANCE(438);
      END_STATE();
    case 438:
      if (lookahead == 'p')
        ADVANCE(439);
      END_STATE();
    case 439:
      if (lookahead == 'o')
        ADVANCE(440);
      END_STATE();
    case 440:
      if (lookahead == 'r')
        ADVANCE(441);
      END_STATE();
    case 441:
      if (lookahead == 't')
        ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 443:
      if (lookahead == 'v')
        ADVANCE(444);
      END_STATE();
    case 444:
      if (lookahead == 'm')
        ADVANCE(445);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_jvm);
      END_STATE();
    case 446:
      if (lookahead == 't')
        ADVANCE(447);
      END_STATE();
    case 447:
      if (lookahead == 'd')
        ADVANCE(448);
      END_STATE();
    case 448:
      if (lookahead == 'c')
        ADVANCE(449);
      END_STATE();
    case 449:
      if (lookahead == 'a')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == 'l')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 'l')
        ADVANCE(452);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_stdcall);
      END_STATE();
    case 453:
      if (lookahead == 'h')
        ADVANCE(454);
      END_STATE();
    case 454:
      if (lookahead == 'e')
        ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead == 'r')
        ADVANCE(456);
      END_STATE();
    case 456:
      if (lookahead == 'e')
        ADVANCE(457);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 458:
      if (lookahead == '\n')
        ADVANCE(459);
      if (lookahead == '\r')
        ADVANCE(461);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '\\')
        SKIP(462);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(458);
      END_STATE();
    case 459:
      if (lookahead == '\n')
        ADVANCE(459);
      if (lookahead == '\r')
        ADVANCE(459);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == '\\')
        ADVANCE(460);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(459);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 460:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(459);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 461:
      if (lookahead == '\n')
        ADVANCE(459);
      if (lookahead == '\r')
        ADVANCE(461);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '\\')
        SKIP(462);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(458);
      END_STATE();
    case 462:
      if (lookahead == 'n')
        SKIP(458);
      END_STATE();
    case 463:
      if (lookahead == '\n')
        ADVANCE(464);
      if (lookahead == '\r')
        ADVANCE(466);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '=')
        ADVANCE(122);
      if (lookahead == '\\')
        SKIP(467);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(463);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 464:
      if (lookahead == '\n')
        ADVANCE(464);
      if (lookahead == '\r')
        ADVANCE(464);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(359);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '=')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(465);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
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
      if (lookahead == '\n')
        ADVANCE(464);
      if (lookahead == '\r')
        ADVANCE(466);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '=')
        ADVANCE(122);
      if (lookahead == '\\')
        SKIP(467);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(463);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 467:
      if (lookahead == 'n')
        SKIP(463);
      END_STATE();
    case 468:
      if (lookahead == '\n')
        ADVANCE(469);
      if (lookahead == '\r')
        ADVANCE(473);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(474);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
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
        SKIP(468);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(475);
      END_STATE();
    case 469:
      if (lookahead == '\n')
        ADVANCE(469);
      if (lookahead == '\r')
        ADVANCE(469);
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
        ADVANCE(181);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(470);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(472);
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
        ADVANCE(469);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(471);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'O')
        ADVANCE(185);
      if (lookahead == 'X')
        ADVANCE(187);
      if (lookahead == 'o')
        ADVANCE(185);
      if (lookahead == 'x')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(471);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(471);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(469);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 473:
      if (lookahead == '\n')
        ADVANCE(469);
      if (lookahead == '\r')
        ADVANCE(473);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(474);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
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
        SKIP(468);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(475);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'O')
        ADVANCE(257);
      if (lookahead == 'X')
        ADVANCE(259);
      if (lookahead == 'o')
        ADVANCE(257);
      if (lookahead == 'x')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(475);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(475);
      END_STATE();
    case 476:
      if (lookahead == '\n')
        ADVANCE(477);
      if (lookahead == '\r')
        ADVANCE(479);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(118);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(356);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(476);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 477:
      if (lookahead == '\n')
        ADVANCE(477);
      if (lookahead == '\r')
        ADVANCE(477);
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
        ADVANCE(181);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(478);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(354);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(477);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(477);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 479:
      if (lookahead == '\n')
        ADVANCE(477);
      if (lookahead == '\r')
        ADVANCE(479);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(118);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(356);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(476);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 480:
      if (lookahead == '\n')
        ADVANCE(481);
      if (lookahead == '\r')
        ADVANCE(483);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(118);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
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
        SKIP(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 481:
      if (lookahead == '\n')
        ADVANCE(481);
      if (lookahead == '\r')
        ADVANCE(481);
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
        ADVANCE(181);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(482);
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
        ADVANCE(481);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(481);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 483:
      if (lookahead == '\n')
        ADVANCE(481);
      if (lookahead == '\r')
        ADVANCE(483);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(118);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
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
        SKIP(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 484:
      if (lookahead == '\n')
        ADVANCE(485);
      if (lookahead == '\r')
        ADVANCE(487);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(484);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
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
        ADVANCE(326);
      if (lookahead == '0')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(485);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
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
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(484);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
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
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(263);
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
        ADVANCE(498);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
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
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(493);
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
        ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
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
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(493);
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
        ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
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
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(263);
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
        ADVANCE(498);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 499:
      if (lookahead == '\t')
        ADVANCE(500);
      if (lookahead == '\n')
        ADVANCE(501);
      if (lookahead == 11)
        ADVANCE(96);
      if (lookahead == '\r')
        ADVANCE(506);
      if (lookahead == ' ')
        ADVANCE(496);
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
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(263);
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
        ADVANCE(498);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(502);
      if (lookahead == '\n')
        ADVANCE(501);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(503);
      if (lookahead == ' ')
        ADVANCE(504);
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
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(505);
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
        ADVANCE(494);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(502);
      if (lookahead == '\n')
        ADVANCE(501);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(503);
      if (lookahead == ' ')
        ADVANCE(504);
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
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(505);
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
        ADVANCE(494);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 503:
      if (lookahead == '\t')
        ADVANCE(502);
      if (lookahead == '\n')
        ADVANCE(501);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(503);
      if (lookahead == ' ')
        ADVANCE(504);
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
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(505);
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
        ADVANCE(494);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(502);
      if (lookahead == '\n')
        ADVANCE(501);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(503);
      if (lookahead == ' ')
        ADVANCE(504);
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
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(505);
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
        ADVANCE(494);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(503);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 506:
      if (lookahead == '\t')
        ADVANCE(500);
      if (lookahead == '\n')
        ADVANCE(501);
      if (lookahead == 11)
        ADVANCE(96);
      if (lookahead == '\r')
        ADVANCE(506);
      if (lookahead == ' ')
        ADVANCE(496);
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
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(263);
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
        ADVANCE(498);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 507:
      if (lookahead == '\n')
        ADVANCE(508);
      if (lookahead == '\r')
        ADVANCE(510);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(511);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(507);
      END_STATE();
    case 508:
      if (lookahead == '\n')
        ADVANCE(508);
      if (lookahead == '\r')
        ADVANCE(508);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(509);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(508);
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
      if (lookahead == '\n')
        ADVANCE(508);
      if (lookahead == '\r')
        ADVANCE(510);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(511);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(507);
      END_STATE();
    case 511:
      if (lookahead == 'n')
        SKIP(507);
      END_STATE();
    case 512:
      if (lookahead == '\n')
        ADVANCE(513);
      if (lookahead == '\r')
        ADVANCE(515);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(356);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(512);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 513:
      if (lookahead == '\n')
        ADVANCE(513);
      if (lookahead == '\r')
        ADVANCE(513);
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
        ADVANCE(181);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(514);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(354);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(513);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(356);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(512);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 516:
      if (lookahead == '\n')
        ADVANCE(517);
      if (lookahead == '\r')
        ADVANCE(519);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ':')
        ADVANCE(410);
      if (lookahead == ';')
        ADVANCE(120);
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
        ADVANCE(326);
      if (lookahead == ':')
        ADVANCE(360);
      if (lookahead == ';')
        ADVANCE(36);
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
        ADVANCE(339);
      if (lookahead == ':')
        ADVANCE(410);
      if (lookahead == ';')
        ADVANCE(120);
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
      if (lookahead == '\n')
        ADVANCE(522);
      if (lookahead == '\r')
        ADVANCE(524);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(410);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(525);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(521);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 522:
      if (lookahead == '\n')
        ADVANCE(522);
      if (lookahead == '\r')
        ADVANCE(522);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == '0')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(360);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(522);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 523:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(522);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 524:
      if (lookahead == '\n')
        ADVANCE(522);
      if (lookahead == '\r')
        ADVANCE(524);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(410);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(525);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(521);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 525:
      if (lookahead == 'n')
        SKIP(521);
      END_STATE();
    case 526:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(527);
      if (lookahead == '\r')
        ADVANCE(529);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == 'c')
        ADVANCE(264);
      if (lookahead == 'd')
        ADVANCE(270);
      if (lookahead == 'f')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(319);
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
        SKIP(526);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 527:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(527);
      if (lookahead == '\r')
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
        ADVANCE(181);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(528);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == 'c')
        ADVANCE(192);
      if (lookahead == 'd')
        ADVANCE(198);
      if (lookahead == 'f')
        ADVANCE(209);
      if (lookahead == 'i')
        ADVANCE(216);
      if (lookahead == 'n')
        ADVANCE(240);
      if (lookahead == 't')
        ADVANCE(247);
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
        ADVANCE(527);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      ADVANCE(8);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(527);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 529:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(527);
      if (lookahead == '\r')
        ADVANCE(529);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == 'c')
        ADVANCE(264);
      if (lookahead == 'd')
        ADVANCE(270);
      if (lookahead == 'f')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(319);
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
        SKIP(526);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 530:
      if (lookahead == '\n')
        ADVANCE(531);
      if (lookahead == '\r')
        ADVANCE(533);
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
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(356);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(530);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 531:
      if (lookahead == '\n')
        ADVANCE(531);
      if (lookahead == '\r')
        ADVANCE(531);
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
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(532);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(354);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(531);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_BSLASH);
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
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(356);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(530);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 534:
      if (lookahead == '\n')
        ADVANCE(535);
      if (lookahead == '\r')
        ADVANCE(545);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(546);
      if (lookahead == 'a')
        ADVANCE(547);
      if (lookahead == 'h')
        ADVANCE(549);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(534);
      END_STATE();
    case 535:
      if (lookahead == '\n')
        ADVANCE(535);
      if (lookahead == '\r')
        ADVANCE(535);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(536);
      if (lookahead == 'a')
        ADVANCE(537);
      if (lookahead == 'h')
        ADVANCE(539);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(535);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 536:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(535);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 537:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(538);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 539:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(540);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 540:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(541);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 541:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(542);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 542:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(543);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 543:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(544);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 545:
      if (lookahead == '\n')
        ADVANCE(535);
      if (lookahead == '\r')
        ADVANCE(545);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(546);
      if (lookahead == 'a')
        ADVANCE(547);
      if (lookahead == 'h')
        ADVANCE(549);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(534);
      END_STATE();
    case 546:
      if (lookahead == 'n')
        SKIP(534);
      END_STATE();
    case 547:
      if (lookahead == 's')
        ADVANCE(548);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 549:
      if (lookahead == 'i')
        ADVANCE(550);
      END_STATE();
    case 550:
      if (lookahead == 'd')
        ADVANCE(551);
      END_STATE();
    case 551:
      if (lookahead == 'i')
        ADVANCE(552);
      END_STATE();
    case 552:
      if (lookahead == 'n')
        ADVANCE(553);
      END_STATE();
    case 553:
      if (lookahead == 'g')
        ADVANCE(554);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 555:
      if (lookahead == '\n')
        ADVANCE(556);
      if (lookahead == '\r')
        ADVANCE(559);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == 'd')
        ADVANCE(560);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(555);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 556:
      if (lookahead == '\n')
        ADVANCE(556);
      if (lookahead == '\r')
        ADVANCE(556);
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
        ADVANCE(181);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(557);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == 'd')
        ADVANCE(558);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(556);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(556);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 559:
      if (lookahead == '\n')
        ADVANCE(556);
      if (lookahead == '\r')
        ADVANCE(559);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == 'd')
        ADVANCE(560);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(555);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'o')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 561:
      if (lookahead == '\n')
        ADVANCE(562);
      if (lookahead == '\r')
        ADVANCE(564);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == 'd')
        ADVANCE(560);
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
        SKIP(561);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 562:
      if (lookahead == '\n')
        ADVANCE(562);
      if (lookahead == '\r')
        ADVANCE(562);
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
        ADVANCE(181);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(563);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == 'd')
        ADVANCE(558);
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
        ADVANCE(562);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(562);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 564:
      if (lookahead == '\n')
        ADVANCE(562);
      if (lookahead == '\r')
        ADVANCE(564);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == 'd')
        ADVANCE(560);
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
        SKIP(561);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 565:
      if (lookahead == '\n')
        ADVANCE(566);
      if (lookahead == '\r')
        ADVANCE(573);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ':')
        ADVANCE(410);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(574);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == 'w')
        ADVANCE(575);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(565);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 566:
      if (lookahead == '\n')
        ADVANCE(566);
      if (lookahead == '\r')
        ADVANCE(566);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == ':')
        ADVANCE(360);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '\\')
        ADVANCE(567);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == 'w')
        ADVANCE(568);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(566);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 567:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(566);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 573:
      if (lookahead == '\n')
        ADVANCE(566);
      if (lookahead == '\r')
        ADVANCE(573);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ':')
        ADVANCE(410);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(574);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == 'w')
        ADVANCE(575);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(565);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 574:
      if (lookahead == 'n')
        SKIP(565);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'h')
        ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'e')
        ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'r')
        ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'e')
        ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 580:
      if (lookahead == '\n')
        ADVANCE(581);
      if (lookahead == '\r')
        ADVANCE(584);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '=')
        ADVANCE(585);
      if (lookahead == '\\')
        SKIP(586);
      if (lookahead == 'w')
        ADVANCE(575);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(580);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 581:
      if (lookahead == '\n')
        ADVANCE(581);
      if (lookahead == '\r')
        ADVANCE(581);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == '=')
        ADVANCE(582);
      if (lookahead == '\\')
        ADVANCE(583);
      if (lookahead == 'w')
        ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(581);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 582:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(39);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 583:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(581);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 584:
      if (lookahead == '\n')
        ADVANCE(581);
      if (lookahead == '\r')
        ADVANCE(584);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '=')
        ADVANCE(585);
      if (lookahead == '\\')
        SKIP(586);
      if (lookahead == 'w')
        ADVANCE(575);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(580);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 585:
      if (lookahead == '>')
        ADVANCE(123);
      END_STATE();
    case 586:
      if (lookahead == 'n')
        SKIP(580);
      END_STATE();
    case 587:
      if (lookahead == '\n')
        ADVANCE(588);
      if (lookahead == '\r')
        ADVANCE(590);
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
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
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
        SKIP(587);
      END_STATE();
    case 588:
      if (lookahead == '\n')
        ADVANCE(588);
      if (lookahead == '\r')
        ADVANCE(588);
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
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(589);
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
        ADVANCE(588);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(588);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 590:
      if (lookahead == '\n')
        ADVANCE(588);
      if (lookahead == '\r')
        ADVANCE(590);
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
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
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
        SKIP(587);
      END_STATE();
    case 591:
      if (lookahead == '\n')
        ADVANCE(592);
      if (lookahead == '\r')
        ADVANCE(594);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(356);
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
        SKIP(591);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 592:
      if (lookahead == '\n')
        ADVANCE(592);
      if (lookahead == '\r')
        ADVANCE(592);
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
        ADVANCE(181);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(593);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(354);
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
        ADVANCE(592);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(592);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 594:
      if (lookahead == '\n')
        ADVANCE(592);
      if (lookahead == '\r')
        ADVANCE(594);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(356);
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
        SKIP(591);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 595:
      if (lookahead == '\n')
        ADVANCE(596);
      if (lookahead == '\r')
        ADVANCE(598);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(599);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(595);
      END_STATE();
    case 596:
      if (lookahead == '\n')
        ADVANCE(596);
      if (lookahead == '\r')
        ADVANCE(596);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(597);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(596);
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
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(599);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(595);
      END_STATE();
    case 599:
      if (lookahead == 'n')
        SKIP(595);
      END_STATE();
    case 600:
      if (lookahead == '\n')
        ADVANCE(601);
      if (lookahead == '\r')
        ADVANCE(611);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(612);
      if (lookahead == 'd')
        ADVANCE(613);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(600);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 601:
      if (lookahead == '\n')
        ADVANCE(601);
      if (lookahead == '\r')
        ADVANCE(601);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == 'd')
        ADVANCE(603);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 611:
      if (lookahead == '\n')
        ADVANCE(601);
      if (lookahead == '\r')
        ADVANCE(611);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(612);
      if (lookahead == 'd')
        ADVANCE(613);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(600);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 612:
      if (lookahead == 'n')
        SKIP(600);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'e')
        ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'r')
        ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'i')
        ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'v')
        ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'i')
        ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'n')
        ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'g')
        ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 621:
      if (lookahead == '\n')
        ADVANCE(622);
      if (lookahead == '\r')
        ADVANCE(632);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(633);
      if (lookahead == 'd')
        ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(621);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 622:
      if (lookahead == '\n')
        ADVANCE(622);
      if (lookahead == '\r')
        ADVANCE(622);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '\\')
        ADVANCE(623);
      if (lookahead == 'd')
        ADVANCE(624);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(622);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 623:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(622);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 624:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(625);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 625:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
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
      if (lookahead == 'v')
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
      if (lookahead == 'n')
        ADVANCE(630);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 630:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(631);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 632:
      if (lookahead == '\n')
        ADVANCE(622);
      if (lookahead == '\r')
        ADVANCE(632);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(633);
      if (lookahead == 'd')
        ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(621);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 633:
      if (lookahead == 'n')
        SKIP(621);
      END_STATE();
    case 634:
      if (lookahead == 'e')
        ADVANCE(635);
      END_STATE();
    case 635:
      if (lookahead == 'r')
        ADVANCE(636);
      END_STATE();
    case 636:
      if (lookahead == 'i')
        ADVANCE(637);
      END_STATE();
    case 637:
      if (lookahead == 'v')
        ADVANCE(638);
      END_STATE();
    case 638:
      if (lookahead == 'i')
        ADVANCE(639);
      END_STATE();
    case 639:
      if (lookahead == 'n')
        ADVANCE(640);
      END_STATE();
    case 640:
      if (lookahead == 'g')
        ADVANCE(641);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 642:
      if (lookahead == '\n')
        ADVANCE(643);
      if (lookahead == '\r')
        ADVANCE(645);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(646);
      if (lookahead == 'd')
        ADVANCE(613);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(642);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 643:
      if (lookahead == '\n')
        ADVANCE(643);
      if (lookahead == '\r')
        ADVANCE(643);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '\\')
        ADVANCE(644);
      if (lookahead == 'd')
        ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(643);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 644:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(643);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 645:
      if (lookahead == '\n')
        ADVANCE(643);
      if (lookahead == '\r')
        ADVANCE(645);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(646);
      if (lookahead == 'd')
        ADVANCE(613);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(642);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 646:
      if (lookahead == 'n')
        SKIP(642);
      END_STATE();
    case 647:
      if (lookahead == '\n')
        ADVANCE(648);
      if (lookahead == '\r')
        ADVANCE(651);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == '.')
        ADVANCE(652);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(653);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(647);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 648:
      if (lookahead == '\n')
        ADVANCE(648);
      if (lookahead == '\r')
        ADVANCE(648);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(359);
      if (lookahead == '.')
        ADVANCE(649);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '\\')
        ADVANCE(650);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(648);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 649:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 650:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(648);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 651:
      if (lookahead == '\n')
        ADVANCE(648);
      if (lookahead == '\r')
        ADVANCE(651);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == '.')
        ADVANCE(652);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(653);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(647);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 652:
      if (lookahead == '.')
        ADVANCE(116);
      END_STATE();
    case 653:
      if (lookahead == 'n')
        SKIP(647);
      END_STATE();
    case 654:
      if (lookahead == '\n')
        ADVANCE(655);
      if (lookahead == '\r')
        ADVANCE(707);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == 'A')
        ADVANCE(708);
      if (lookahead == 'B')
        ADVANCE(711);
      if (lookahead == 'C')
        ADVANCE(715);
      if (lookahead == 'D')
        ADVANCE(719);
      if (lookahead == 'E')
        ADVANCE(729);
      if (lookahead == 'F')
        ADVANCE(740);
      if (lookahead == 'G')
        ADVANCE(743);
      if (lookahead == 'H')
        ADVANCE(744);
      if (lookahead == 'L')
        ADVANCE(745);
      if (lookahead == 'N')
        ADVANCE(746);
      if (lookahead == 'O')
        ADVANCE(747);
      if (lookahead == 'R')
        ADVANCE(748);
      if (lookahead == 'S')
        ADVANCE(749);
      if (lookahead == 'U')
        ADVANCE(750);
      if (lookahead == 'V')
        ADVANCE(751);
      if (lookahead == 'X')
        ADVANCE(752);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == 'a')
        ADVANCE(753);
      if (lookahead == 'b')
        ADVANCE(754);
      if (lookahead == 'f')
        ADVANCE(755);
      if (lookahead == 'n')
        ADVANCE(162);
      if (lookahead == 'o')
        ADVANCE(756);
      if (lookahead == 'r')
        ADVANCE(163);
      if (lookahead == 't')
        ADVANCE(164);
      if (lookahead == 'v')
        ADVANCE(165);
      if (lookahead == 'x')
        ADVANCE(757);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(654);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(498);
      END_STATE();
    case 655:
      if (lookahead == '\n')
        ADVANCE(655);
      if (lookahead == '\r')
        ADVANCE(655);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == 'A')
        ADVANCE(656);
      if (lookahead == 'B')
        ADVANCE(659);
      if (lookahead == 'C')
        ADVANCE(663);
      if (lookahead == 'D')
        ADVANCE(667);
      if (lookahead == 'E')
        ADVANCE(677);
      if (lookahead == 'F')
        ADVANCE(688);
      if (lookahead == 'G')
        ADVANCE(691);
      if (lookahead == 'H')
        ADVANCE(692);
      if (lookahead == 'L')
        ADVANCE(693);
      if (lookahead == 'N')
        ADVANCE(694);
      if (lookahead == 'O')
        ADVANCE(695);
      if (lookahead == 'R')
        ADVANCE(696);
      if (lookahead == 'S')
        ADVANCE(697);
      if (lookahead == 'U')
        ADVANCE(698);
      if (lookahead == 'V')
        ADVANCE(699);
      if (lookahead == 'X')
        ADVANCE(700);
      if (lookahead == '\\')
        ADVANCE(701);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(702);
      if (lookahead == 'b')
        ADVANCE(703);
      if (lookahead == 'f')
        ADVANCE(704);
      if (lookahead == 'n')
        ADVANCE(78);
      if (lookahead == 'o')
        ADVANCE(705);
      if (lookahead == 'r')
        ADVANCE(79);
      if (lookahead == 't')
        ADVANCE(80);
      if (lookahead == 'v')
        ADVANCE(81);
      if (lookahead == 'x')
        ADVANCE(706);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(494);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 656:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(657);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 657:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(658);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 659:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(660);
      if (lookahead == 'S')
        ADVANCE(662);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 660:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(661);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 663:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(664);
      if (lookahead == 'R')
        ADVANCE(666);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 664:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(665);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(668);
      if (lookahead == 'E')
        ADVANCE(673);
      if (lookahead == 'L')
        ADVANCE(675);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(669);
      if (lookahead == '2')
        ADVANCE(670);
      if (lookahead == '3')
        ADVANCE(671);
      if (lookahead == '4')
        ADVANCE(672);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 673:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(674);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 675:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(676);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 677:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(678);
      if (lookahead == 'N')
        ADVANCE(679);
      if (lookahead == 'O')
        ADVANCE(681);
      if (lookahead == 'S')
        ADVANCE(683);
      if (lookahead == 'T')
        ADVANCE(685);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 679:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(680);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 681:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(682);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 683:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(684);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 685:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(686);
      if (lookahead == 'X')
        ADVANCE(687);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 688:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(689);
      if (lookahead == 'S')
        ADVANCE(690);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 691:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 692:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 693:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 694:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(52);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 696:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(55);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 697:
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
    case 698:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(68);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 699:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(70);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(655);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 707:
      if (lookahead == '\n')
        ADVANCE(655);
      if (lookahead == '\r')
        ADVANCE(707);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == 'A')
        ADVANCE(708);
      if (lookahead == 'B')
        ADVANCE(711);
      if (lookahead == 'C')
        ADVANCE(715);
      if (lookahead == 'D')
        ADVANCE(719);
      if (lookahead == 'E')
        ADVANCE(729);
      if (lookahead == 'F')
        ADVANCE(740);
      if (lookahead == 'G')
        ADVANCE(743);
      if (lookahead == 'H')
        ADVANCE(744);
      if (lookahead == 'L')
        ADVANCE(745);
      if (lookahead == 'N')
        ADVANCE(746);
      if (lookahead == 'O')
        ADVANCE(747);
      if (lookahead == 'R')
        ADVANCE(748);
      if (lookahead == 'S')
        ADVANCE(749);
      if (lookahead == 'U')
        ADVANCE(750);
      if (lookahead == 'V')
        ADVANCE(751);
      if (lookahead == 'X')
        ADVANCE(752);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == 'a')
        ADVANCE(753);
      if (lookahead == 'b')
        ADVANCE(754);
      if (lookahead == 'f')
        ADVANCE(755);
      if (lookahead == 'n')
        ADVANCE(162);
      if (lookahead == 'o')
        ADVANCE(756);
      if (lookahead == 'r')
        ADVANCE(163);
      if (lookahead == 't')
        ADVANCE(164);
      if (lookahead == 'v')
        ADVANCE(165);
      if (lookahead == 'x')
        ADVANCE(757);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(654);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(498);
      END_STATE();
    case 708:
      if (lookahead == 'C')
        ADVANCE(709);
      END_STATE();
    case 709:
      if (lookahead == 'K')
        ADVANCE(710);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 711:
      if (lookahead == 'E')
        ADVANCE(712);
      if (lookahead == 'S')
        ADVANCE(714);
      END_STATE();
    case 712:
      if (lookahead == 'L')
        ADVANCE(713);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 715:
      if (lookahead == 'A')
        ADVANCE(716);
      if (lookahead == 'R')
        ADVANCE(718);
      END_STATE();
    case 716:
      if (lookahead == 'N')
        ADVANCE(717);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 719:
      if (lookahead == 'C')
        ADVANCE(720);
      if (lookahead == 'E')
        ADVANCE(725);
      if (lookahead == 'L')
        ADVANCE(727);
      END_STATE();
    case 720:
      if (lookahead == '1')
        ADVANCE(721);
      if (lookahead == '2')
        ADVANCE(722);
      if (lookahead == '3')
        ADVANCE(723);
      if (lookahead == '4')
        ADVANCE(724);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 725:
      if (lookahead == 'L')
        ADVANCE(726);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 727:
      if (lookahead == 'E')
        ADVANCE(728);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 729:
      if (lookahead == 'M')
        ADVANCE(730);
      if (lookahead == 'N')
        ADVANCE(731);
      if (lookahead == 'O')
        ADVANCE(733);
      if (lookahead == 'S')
        ADVANCE(735);
      if (lookahead == 'T')
        ADVANCE(737);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 731:
      if (lookahead == 'Q')
        ADVANCE(732);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 733:
      if (lookahead == 'T')
        ADVANCE(734);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 735:
      if (lookahead == 'C')
        ADVANCE(736);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 737:
      if (lookahead == 'B')
        ADVANCE(738);
      if (lookahead == 'X')
        ADVANCE(739);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 740:
      if (lookahead == 'F')
        ADVANCE(741);
      if (lookahead == 'S')
        ADVANCE(742);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 743:
      if (lookahead == 'S')
        ADVANCE(128);
      END_STATE();
    case 744:
      if (lookahead == 'T')
        ADVANCE(130);
      END_STATE();
    case 745:
      if (lookahead == 'F')
        ADVANCE(132);
      END_STATE();
    case 746:
      if (lookahead == 'A')
        ADVANCE(134);
      if (lookahead == 'U')
        ADVANCE(136);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 748:
      if (lookahead == 'S')
        ADVANCE(139);
      END_STATE();
    case 749:
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
    case 750:
      if (lookahead == 'S')
        ADVANCE(152);
      END_STATE();
    case 751:
      if (lookahead == 'T')
        ADVANCE(154);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 758:
      if (lookahead == '\t')
        ADVANCE(500);
      if (lookahead == '\n')
        ADVANCE(759);
      if (lookahead == 11)
        ADVANCE(96);
      if (lookahead == '\r')
        ADVANCE(770);
      if (lookahead == ' ')
        ADVANCE(496);
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
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == 'A')
        ADVANCE(771);
      if (lookahead == 'B')
        ADVANCE(772);
      if (lookahead == 'C')
        ADVANCE(773);
      if (lookahead == 'D')
        ADVANCE(774);
      if (lookahead == 'E')
        ADVANCE(775);
      if (lookahead == 'F')
        ADVANCE(776);
      if (lookahead == 'G')
        ADVANCE(127);
      if (lookahead == 'H')
        ADVANCE(129);
      if (lookahead == 'L')
        ADVANCE(131);
      if (lookahead == 'N')
        ADVANCE(133);
      if (lookahead == 'O')
        ADVANCE(747);
      if (lookahead == 'R')
        ADVANCE(138);
      if (lookahead == 'S')
        ADVANCE(140);
      if (lookahead == 'U')
        ADVANCE(151);
      if (lookahead == 'V')
        ADVANCE(153);
      if (lookahead == 'X')
        ADVANCE(752);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(160);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == 'a')
        ADVANCE(753);
      if (lookahead == 'b')
        ADVANCE(754);
      if (lookahead == 'f')
        ADVANCE(755);
      if (lookahead == 'n')
        ADVANCE(162);
      if (lookahead == 'o')
        ADVANCE(756);
      if (lookahead == 'r')
        ADVANCE(163);
      if (lookahead == 't')
        ADVANCE(164);
      if (lookahead == 'v')
        ADVANCE(165);
      if (lookahead == 'x')
        ADVANCE(757);
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
        ADVANCE(498);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(760);
      if (lookahead == '\n')
        ADVANCE(759);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(761);
      if (lookahead == ' ')
        ADVANCE(762);
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
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'A')
        ADVANCE(763);
      if (lookahead == 'B')
        ADVANCE(764);
      if (lookahead == 'C')
        ADVANCE(765);
      if (lookahead == 'D')
        ADVANCE(766);
      if (lookahead == 'E')
        ADVANCE(767);
      if (lookahead == 'F')
        ADVANCE(768);
      if (lookahead == 'G')
        ADVANCE(43);
      if (lookahead == 'H')
        ADVANCE(45);
      if (lookahead == 'L')
        ADVANCE(47);
      if (lookahead == 'N')
        ADVANCE(49);
      if (lookahead == 'O')
        ADVANCE(695);
      if (lookahead == 'R')
        ADVANCE(54);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'U')
        ADVANCE(67);
      if (lookahead == 'V')
        ADVANCE(69);
      if (lookahead == 'X')
        ADVANCE(700);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(769);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == 'a')
        ADVANCE(702);
      if (lookahead == 'b')
        ADVANCE(703);
      if (lookahead == 'f')
        ADVANCE(704);
      if (lookahead == 'n')
        ADVANCE(78);
      if (lookahead == 'o')
        ADVANCE(705);
      if (lookahead == 'r')
        ADVANCE(79);
      if (lookahead == 't')
        ADVANCE(80);
      if (lookahead == 'v')
        ADVANCE(81);
      if (lookahead == 'x')
        ADVANCE(706);
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
        ADVANCE(494);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(760);
      if (lookahead == '\n')
        ADVANCE(759);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(761);
      if (lookahead == ' ')
        ADVANCE(762);
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
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'A')
        ADVANCE(763);
      if (lookahead == 'B')
        ADVANCE(764);
      if (lookahead == 'C')
        ADVANCE(765);
      if (lookahead == 'D')
        ADVANCE(766);
      if (lookahead == 'E')
        ADVANCE(767);
      if (lookahead == 'F')
        ADVANCE(768);
      if (lookahead == 'G')
        ADVANCE(43);
      if (lookahead == 'H')
        ADVANCE(45);
      if (lookahead == 'L')
        ADVANCE(47);
      if (lookahead == 'N')
        ADVANCE(49);
      if (lookahead == 'O')
        ADVANCE(695);
      if (lookahead == 'R')
        ADVANCE(54);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'U')
        ADVANCE(67);
      if (lookahead == 'V')
        ADVANCE(69);
      if (lookahead == 'X')
        ADVANCE(700);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(769);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == 'a')
        ADVANCE(702);
      if (lookahead == 'b')
        ADVANCE(703);
      if (lookahead == 'f')
        ADVANCE(704);
      if (lookahead == 'n')
        ADVANCE(78);
      if (lookahead == 'o')
        ADVANCE(705);
      if (lookahead == 'r')
        ADVANCE(79);
      if (lookahead == 't')
        ADVANCE(80);
      if (lookahead == 'v')
        ADVANCE(81);
      if (lookahead == 'x')
        ADVANCE(706);
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
        ADVANCE(494);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 761:
      if (lookahead == '\t')
        ADVANCE(760);
      if (lookahead == '\n')
        ADVANCE(759);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(761);
      if (lookahead == ' ')
        ADVANCE(762);
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
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'A')
        ADVANCE(763);
      if (lookahead == 'B')
        ADVANCE(764);
      if (lookahead == 'C')
        ADVANCE(765);
      if (lookahead == 'D')
        ADVANCE(766);
      if (lookahead == 'E')
        ADVANCE(767);
      if (lookahead == 'F')
        ADVANCE(768);
      if (lookahead == 'G')
        ADVANCE(43);
      if (lookahead == 'H')
        ADVANCE(45);
      if (lookahead == 'L')
        ADVANCE(47);
      if (lookahead == 'N')
        ADVANCE(49);
      if (lookahead == 'O')
        ADVANCE(695);
      if (lookahead == 'R')
        ADVANCE(54);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'U')
        ADVANCE(67);
      if (lookahead == 'V')
        ADVANCE(69);
      if (lookahead == 'X')
        ADVANCE(700);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(769);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == 'a')
        ADVANCE(702);
      if (lookahead == 'b')
        ADVANCE(703);
      if (lookahead == 'f')
        ADVANCE(704);
      if (lookahead == 'n')
        ADVANCE(78);
      if (lookahead == 'o')
        ADVANCE(705);
      if (lookahead == 'r')
        ADVANCE(79);
      if (lookahead == 't')
        ADVANCE(80);
      if (lookahead == 'v')
        ADVANCE(81);
      if (lookahead == 'x')
        ADVANCE(706);
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
        ADVANCE(494);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(760);
      if (lookahead == '\n')
        ADVANCE(759);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(761);
      if (lookahead == ' ')
        ADVANCE(762);
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
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == 'A')
        ADVANCE(763);
      if (lookahead == 'B')
        ADVANCE(764);
      if (lookahead == 'C')
        ADVANCE(765);
      if (lookahead == 'D')
        ADVANCE(766);
      if (lookahead == 'E')
        ADVANCE(767);
      if (lookahead == 'F')
        ADVANCE(768);
      if (lookahead == 'G')
        ADVANCE(43);
      if (lookahead == 'H')
        ADVANCE(45);
      if (lookahead == 'L')
        ADVANCE(47);
      if (lookahead == 'N')
        ADVANCE(49);
      if (lookahead == 'O')
        ADVANCE(695);
      if (lookahead == 'R')
        ADVANCE(54);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'U')
        ADVANCE(67);
      if (lookahead == 'V')
        ADVANCE(69);
      if (lookahead == 'X')
        ADVANCE(700);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(769);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == 'a')
        ADVANCE(702);
      if (lookahead == 'b')
        ADVANCE(703);
      if (lookahead == 'f')
        ADVANCE(704);
      if (lookahead == 'n')
        ADVANCE(78);
      if (lookahead == 'o')
        ADVANCE(705);
      if (lookahead == 'r')
        ADVANCE(79);
      if (lookahead == 't')
        ADVANCE(80);
      if (lookahead == 'v')
        ADVANCE(81);
      if (lookahead == 'x')
        ADVANCE(706);
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
        ADVANCE(494);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(657);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(660);
      if (lookahead == 'S')
        ADVANCE(662);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(664);
      if (lookahead == 'R')
        ADVANCE(666);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(668);
      if (lookahead == 'E')
        ADVANCE(673);
      if (lookahead == 'L')
        ADVANCE(675);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(678);
      if (lookahead == 'N')
        ADVANCE(679);
      if (lookahead == 'O')
        ADVANCE(681);
      if (lookahead == 'S')
        ADVANCE(683);
      if (lookahead == 'T')
        ADVANCE(685);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(689);
      if (lookahead == 'S')
        ADVANCE(690);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(761);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 770:
      if (lookahead == '\t')
        ADVANCE(500);
      if (lookahead == '\n')
        ADVANCE(759);
      if (lookahead == 11)
        ADVANCE(96);
      if (lookahead == '\r')
        ADVANCE(770);
      if (lookahead == ' ')
        ADVANCE(496);
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
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == 'A')
        ADVANCE(771);
      if (lookahead == 'B')
        ADVANCE(772);
      if (lookahead == 'C')
        ADVANCE(773);
      if (lookahead == 'D')
        ADVANCE(774);
      if (lookahead == 'E')
        ADVANCE(775);
      if (lookahead == 'F')
        ADVANCE(776);
      if (lookahead == 'G')
        ADVANCE(127);
      if (lookahead == 'H')
        ADVANCE(129);
      if (lookahead == 'L')
        ADVANCE(131);
      if (lookahead == 'N')
        ADVANCE(133);
      if (lookahead == 'O')
        ADVANCE(747);
      if (lookahead == 'R')
        ADVANCE(138);
      if (lookahead == 'S')
        ADVANCE(140);
      if (lookahead == 'U')
        ADVANCE(151);
      if (lookahead == 'V')
        ADVANCE(153);
      if (lookahead == 'X')
        ADVANCE(752);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(160);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == 'a')
        ADVANCE(753);
      if (lookahead == 'b')
        ADVANCE(754);
      if (lookahead == 'f')
        ADVANCE(755);
      if (lookahead == 'n')
        ADVANCE(162);
      if (lookahead == 'o')
        ADVANCE(756);
      if (lookahead == 'r')
        ADVANCE(163);
      if (lookahead == 't')
        ADVANCE(164);
      if (lookahead == 'v')
        ADVANCE(165);
      if (lookahead == 'x')
        ADVANCE(757);
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
        ADVANCE(498);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(709);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(712);
      if (lookahead == 'S')
        ADVANCE(714);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(716);
      if (lookahead == 'R')
        ADVANCE(718);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(720);
      if (lookahead == 'E')
        ADVANCE(725);
      if (lookahead == 'L')
        ADVANCE(727);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(730);
      if (lookahead == 'N')
        ADVANCE(731);
      if (lookahead == 'O')
        ADVANCE(733);
      if (lookahead == 'S')
        ADVANCE(735);
      if (lookahead == 'T')
        ADVANCE(737);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(741);
      if (lookahead == 'S')
        ADVANCE(742);
      END_STATE();
    case 777:
      if (lookahead == '\n')
        ADVANCE(778);
      if (lookahead == '\r')
        ADVANCE(780);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(356);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(777);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 778:
      if (lookahead == '\n')
        ADVANCE(778);
      if (lookahead == '\r')
        ADVANCE(778);
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
        ADVANCE(181);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(779);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(354);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(778);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_BSLASH);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(356);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(777);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 781:
      if (lookahead == '\n')
        ADVANCE(782);
      if (lookahead == '\r')
        ADVANCE(785);
      if (lookahead == '(')
        ADVANCE(105);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == '[')
        ADVANCE(155);
      if (lookahead == '\\')
        SKIP(786);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(781);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(787);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 782:
      if (lookahead == '\n')
        ADVANCE(782);
      if (lookahead == '\r')
        ADVANCE(782);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(359);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == '\\')
        ADVANCE(783);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(782);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(784);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 783:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(782);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(784);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(784);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 785:
      if (lookahead == '\n')
        ADVANCE(782);
      if (lookahead == '\r')
        ADVANCE(785);
      if (lookahead == '(')
        ADVANCE(105);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == '[')
        ADVANCE(155);
      if (lookahead == '\\')
        SKIP(786);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(781);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(787);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 786:
      if (lookahead == 'n')
        SKIP(781);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(787);
      if (lookahead == '.')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(787);
      END_STATE();
    case 788:
      if (lookahead == '\n')
        ADVANCE(789);
      if (lookahead == '\r')
        ADVANCE(801);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '\\')
        SKIP(802);
      if (lookahead == 's')
        ADVANCE(803);
      if (lookahead == 'u')
        ADVANCE(807);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(788);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 789:
      if (lookahead == '\n')
        ADVANCE(789);
      if (lookahead == '\r')
        ADVANCE(789);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == '\\')
        ADVANCE(790);
      if (lookahead == 's')
        ADVANCE(791);
      if (lookahead == 'u')
        ADVANCE(795);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(789);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 801:
      if (lookahead == '\n')
        ADVANCE(789);
      if (lookahead == '\r')
        ADVANCE(801);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '\\')
        SKIP(802);
      if (lookahead == 's')
        ADVANCE(803);
      if (lookahead == 'u')
        ADVANCE(807);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(788);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 802:
      if (lookahead == 'n')
        SKIP(788);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'a')
        ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'f')
        ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'e')
        ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'n')
        ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 's')
        ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'a')
        ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'f')
        ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'e')
        ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 813:
      if (lookahead == '\n')
        ADVANCE(814);
      if (lookahead == '\r')
        ADVANCE(816);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == ':')
        ADVANCE(410);
      if (lookahead == '=')
        ADVANCE(585);
      if (lookahead == '\\')
        SKIP(817);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == 'w')
        ADVANCE(575);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(813);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 814:
      if (lookahead == '\n')
        ADVANCE(814);
      if (lookahead == '\r')
        ADVANCE(814);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(359);
      if (lookahead == ':')
        ADVANCE(360);
      if (lookahead == '=')
        ADVANCE(582);
      if (lookahead == '\\')
        ADVANCE(815);
      if (lookahead == '`')
        ADVANCE(77);
      if (lookahead == 'w')
        ADVANCE(568);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(814);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 815:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(814);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 816:
      if (lookahead == '\n')
        ADVANCE(814);
      if (lookahead == '\r')
        ADVANCE(816);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == ':')
        ADVANCE(410);
      if (lookahead == '=')
        ADVANCE(585);
      if (lookahead == '\\')
        SKIP(817);
      if (lookahead == '`')
        ADVANCE(161);
      if (lookahead == 'w')
        ADVANCE(575);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(813);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 817:
      if (lookahead == 'n')
        SKIP(813);
      END_STATE();
    case 818:
      if (lookahead == '\n')
        ADVANCE(819);
      if (lookahead == '\r')
        ADVANCE(821);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(122);
      if (lookahead == '\\')
        SKIP(822);
      if (lookahead == 'd')
        ADVANCE(613);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(818);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 819:
      if (lookahead == '\n')
        ADVANCE(819);
      if (lookahead == '\r')
        ADVANCE(819);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(359);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(820);
      if (lookahead == 'd')
        ADVANCE(603);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(819);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 820:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(819);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 821:
      if (lookahead == '\n')
        ADVANCE(819);
      if (lookahead == '\r')
        ADVANCE(821);
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(122);
      if (lookahead == '\\')
        SKIP(822);
      if (lookahead == 'd')
        ADVANCE(613);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(818);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 822:
      if (lookahead == 'n')
        SKIP(818);
      END_STATE();
    case 823:
      if (lookahead == '\n')
        ADVANCE(824);
      if (lookahead == '\r')
        ADVANCE(826);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
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
        SKIP(823);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 824:
      if (lookahead == '\n')
        ADVANCE(824);
      if (lookahead == '\r')
        ADVANCE(824);
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
        ADVANCE(181);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(825);
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
        ADVANCE(824);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(824);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 826:
      if (lookahead == '\n')
        ADVANCE(824);
      if (lookahead == '\r')
        ADVANCE(826);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
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
        SKIP(823);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 827:
      if (lookahead == '\n')
        ADVANCE(828);
      if (lookahead == '\r')
        ADVANCE(830);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(831);
      if (lookahead == 'd')
        ADVANCE(613);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(827);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 828:
      if (lookahead == '\n')
        ADVANCE(828);
      if (lookahead == '\r')
        ADVANCE(828);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '\\')
        ADVANCE(829);
      if (lookahead == 'd')
        ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(828);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
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
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(831);
      if (lookahead == 'd')
        ADVANCE(613);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(827);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
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
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(836);
      if (lookahead == 'd')
        ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(832);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 833:
      if (lookahead == '\n')
        ADVANCE(833);
      if (lookahead == '\r')
        ADVANCE(833);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(834);
      if (lookahead == 'd')
        ADVANCE(624);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(833);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
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
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(836);
      if (lookahead == 'd')
        ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(832);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
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
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(841);
      if (lookahead == 'd')
        ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(837);
      END_STATE();
    case 838:
      if (lookahead == '\n')
        ADVANCE(838);
      if (lookahead == '\r')
        ADVANCE(838);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(839);
      if (lookahead == 'd')
        ADVANCE(624);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(838);
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
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(841);
      if (lookahead == 'd')
        ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(837);
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
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(846);
      if (lookahead == 'd')
        ADVANCE(634);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(842);
      END_STATE();
    case 843:
      if (lookahead == '\n')
        ADVANCE(843);
      if (lookahead == '\r')
        ADVANCE(843);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(844);
      if (lookahead == 'd')
        ADVANCE(624);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(843);
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
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(846);
      if (lookahead == 'd')
        ADVANCE(634);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(842);
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
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(851);
      if (lookahead == 'd')
        ADVANCE(613);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(847);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 848:
      if (lookahead == '\n')
        ADVANCE(848);
      if (lookahead == '\r')
        ADVANCE(848);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(849);
      if (lookahead == 'd')
        ADVANCE(603);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(848);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
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
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(851);
      if (lookahead == 'd')
        ADVANCE(613);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(847);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
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
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(122);
      if (lookahead == '\\')
        SKIP(856);
      if (lookahead == 'd')
        ADVANCE(613);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(852);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 853:
      if (lookahead == '\n')
        ADVANCE(853);
      if (lookahead == '\r')
        ADVANCE(853);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(854);
      if (lookahead == 'd')
        ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(853);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 854:
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
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(122);
      if (lookahead == '\\')
        SKIP(856);
      if (lookahead == 'd')
        ADVANCE(613);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(852);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 856:
      if (lookahead == 'n')
        SKIP(852);
      END_STATE();
    case 857:
      if (lookahead == '\n')
        ADVANCE(858);
      if (lookahead == '\r')
        ADVANCE(860);
      if (lookahead == '(')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == '=')
        ADVANCE(122);
      if (lookahead == '[')
        ADVANCE(155);
      if (lookahead == '\\')
        SKIP(861);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(857);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(787);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 858:
      if (lookahead == '\n')
        ADVANCE(858);
      if (lookahead == '\r')
        ADVANCE(858);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(359);
      if (lookahead == '=')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == '\\')
        ADVANCE(859);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(858);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(784);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 859:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(858);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 860:
      if (lookahead == '\n')
        ADVANCE(858);
      if (lookahead == '\r')
        ADVANCE(860);
      if (lookahead == '(')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == '=')
        ADVANCE(122);
      if (lookahead == '[')
        ADVANCE(155);
      if (lookahead == '\\')
        SKIP(861);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(857);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(787);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 861:
      if (lookahead == 'n')
        SKIP(857);
      END_STATE();
    case 862:
      if (lookahead == '\n')
        ADVANCE(863);
      if (lookahead == '\r')
        ADVANCE(865);
      if (lookahead == '(')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '[')
        ADVANCE(155);
      if (lookahead == '\\')
        SKIP(866);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(862);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(787);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 863:
      if (lookahead == '\n')
        ADVANCE(863);
      if (lookahead == '\r')
        ADVANCE(863);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(359);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == '\\')
        ADVANCE(864);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '{')
        ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(863);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(784);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 864:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(863);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 865:
      if (lookahead == '\n')
        ADVANCE(863);
      if (lookahead == '\r')
        ADVANCE(865);
      if (lookahead == '(')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '[')
        ADVANCE(155);
      if (lookahead == '\\')
        SKIP(866);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(862);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(787);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 866:
      if (lookahead == 'n')
        SKIP(862);
      END_STATE();
    case 867:
      if (lookahead == '\n')
        ADVANCE(868);
      if (lookahead == '\r')
        ADVANCE(870);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(867);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      END_STATE();
    case 868:
      if (lookahead == '\n')
        ADVANCE(868);
      if (lookahead == '\r')
        ADVANCE(868);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(869);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(868);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
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
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == '_')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(867);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      END_STATE();
    case 871:
      if (lookahead == '\n')
        ADVANCE(872);
      if (lookahead == '\r')
        ADVANCE(875);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '\\')
        SKIP(876);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(877);
      END_STATE();
    case 872:
      if (lookahead == '\n')
        ADVANCE(872);
      if (lookahead == '\r')
        ADVANCE(872);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == '\\')
        ADVANCE(873);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(874);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 875:
      if (lookahead == '\n')
        ADVANCE(872);
      if (lookahead == '\r')
        ADVANCE(875);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '\\')
        SKIP(876);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(877);
      END_STATE();
    case 876:
      if (lookahead == 'n')
        SKIP(871);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 878:
      if (lookahead == '\n')
        ADVANCE(879);
      if (lookahead == '\r')
        ADVANCE(882);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '\\')
        SKIP(883);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(878);
      if (('0' <= lookahead && lookahead <= '7'))
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
        ADVANCE(326);
      if (lookahead == '\\')
        ADVANCE(880);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '7'))
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
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
        ADVANCE(339);
      if (lookahead == '\\')
        SKIP(883);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(878);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(884);
      END_STATE();
    case 883:
      if (lookahead == 'n')
        SKIP(878);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 885:
      if (lookahead == '\n')
        ADVANCE(886);
      if (lookahead == '\r')
        ADVANCE(888);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(889);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(885);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 886:
      if (lookahead == '\n')
        ADVANCE(886);
      if (lookahead == '\r')
        ADVANCE(886);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(359);
      if (lookahead == '0')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(887);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(886);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
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
      if (lookahead == '\n')
        ADVANCE(886);
      if (lookahead == '\r')
        ADVANCE(888);
      if (lookahead == '\"')
        ADVANCE(99);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(889);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(885);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 889:
      if (lookahead == 'n')
        SKIP(885);
      END_STATE();
    case 890:
      if (lookahead == '\n')
        ADVANCE(891);
      if (lookahead == '\r')
        ADVANCE(893);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(894);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(890);
      END_STATE();
    case 891:
      if (lookahead == '\n')
        ADVANCE(891);
      if (lookahead == '\r')
        ADVANCE(891);
      if (lookahead == '-')
        ADVANCE(359);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(892);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(891);
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
        ADVANCE(409);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(894);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(890);
      END_STATE();
    case 894:
      if (lookahead == 'n')
        SKIP(890);
      END_STATE();
    case 895:
      if (lookahead == '\n')
        ADVANCE(896);
      if (lookahead == '\r')
        ADVANCE(898);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(899);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(895);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 896:
      if (lookahead == '\n')
        ADVANCE(896);
      if (lookahead == '\r')
        ADVANCE(896);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == '-')
        ADVANCE(359);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(897);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(896);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 897:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(896);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 898:
      if (lookahead == '\n')
        ADVANCE(896);
      if (lookahead == '\r')
        ADVANCE(898);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(899);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(895);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 899:
      if (lookahead == 'n')
        SKIP(895);
      END_STATE();
    case 900:
      if (lookahead == '\n')
        ADVANCE(901);
      if (lookahead == '\r')
        ADVANCE(903);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == 'c')
        ADVANCE(264);
      if (lookahead == 'd')
        ADVANCE(270);
      if (lookahead == 'f')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(319);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(900);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 901:
      if (lookahead == '\n')
        ADVANCE(901);
      if (lookahead == '\r')
        ADVANCE(901);
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
        ADVANCE(181);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(902);
      if (lookahead == '^')
        ADVANCE(75);
      if (lookahead == 'c')
        ADVANCE(192);
      if (lookahead == 'd')
        ADVANCE(198);
      if (lookahead == 'f')
        ADVANCE(209);
      if (lookahead == 'i')
        ADVANCE(216);
      if (lookahead == 'n')
        ADVANCE(240);
      if (lookahead == 't')
        ADVANCE(247);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(901);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(93);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(901);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 903:
      if (lookahead == '\n')
        ADVANCE(901);
      if (lookahead == '\r')
        ADVANCE(903);
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
        ADVANCE(253);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '^')
        ADVANCE(159);
      if (lookahead == 'c')
        ADVANCE(264);
      if (lookahead == 'd')
        ADVANCE(270);
      if (lookahead == 'f')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(319);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(169);
      if (lookahead == 8902)
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(900);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 904:
      if (lookahead == '\n')
        ADVANCE(905);
      if (lookahead == '\r')
        ADVANCE(907);
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(908);
      if (lookahead == 'h')
        ADVANCE(549);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(904);
      END_STATE();
    case 905:
      if (lookahead == '\n')
        ADVANCE(905);
      if (lookahead == '\r')
        ADVANCE(905);
      if (lookahead == '(')
        ADVANCE(181);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(906);
      if (lookahead == 'h')
        ADVANCE(539);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(905);
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
      if (lookahead == '(')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(908);
      if (lookahead == 'h')
        ADVANCE(549);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(904);
      END_STATE();
    case 908:
      if (lookahead == 'n')
        SKIP(904);
      END_STATE();
    case 909:
      if (lookahead == '\n')
        ADVANCE(910);
      if (lookahead == '\r')
        ADVANCE(914);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '\\')
        SKIP(915);
      if (lookahead == 'i')
        ADVANCE(916);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(909);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 910:
      if (lookahead == '\n')
        ADVANCE(910);
      if (lookahead == '\r')
        ADVANCE(910);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == '\\')
        ADVANCE(911);
      if (lookahead == 'i')
        ADVANCE(912);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(910);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 914:
      if (lookahead == '\n')
        ADVANCE(910);
      if (lookahead == '\r')
        ADVANCE(914);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '\\')
        SKIP(915);
      if (lookahead == 'i')
        ADVANCE(916);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(909);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 915:
      if (lookahead == 'n')
        SKIP(909);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'n')
        ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == 'f')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 918:
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == '\r')
        ADVANCE(921);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '\\')
        SKIP(922);
      if (lookahead == 'i')
        ADVANCE(916);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(918);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 919:
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == '\r')
        ADVANCE(919);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == '\\')
        ADVANCE(920);
      if (lookahead == 'i')
        ADVANCE(912);
      if (lookahead == '}')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(919);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
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
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == '\\')
        SKIP(922);
      if (lookahead == 'i')
        ADVANCE(916);
      if (lookahead == '}')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(918);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
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
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(927);
      if (lookahead == 'd')
        ADVANCE(613);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(923);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 924:
      if (lookahead == '\n')
        ADVANCE(924);
      if (lookahead == '\r')
        ADVANCE(924);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(925);
      if (lookahead == 'd')
        ADVANCE(603);
      if (lookahead == '|')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(924);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(251);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
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
      if (lookahead == '!')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(339);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(927);
      if (lookahead == 'd')
        ADVANCE(613);
      if (lookahead == '|')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(923);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 927:
      if (lookahead == 'n')
        SKIP(923);
      END_STATE();
    case 928:
      if (lookahead == '\n')
        ADVANCE(929);
      if (lookahead == '\r')
        ADVANCE(931);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(932);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(928);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 929:
      if (lookahead == '\n')
        ADVANCE(929);
      if (lookahead == '\r')
        ADVANCE(929);
      if (lookahead == '-')
        ADVANCE(359);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(930);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(929);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
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
      if (lookahead == '\n')
        ADVANCE(929);
      if (lookahead == '\r')
        ADVANCE(931);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(932);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(928);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 932:
      if (lookahead == 'n')
        SKIP(928);
      END_STATE();
    case 933:
      if (lookahead == '\t')
        ADVANCE(500);
      if (lookahead == '\n')
        ADVANCE(934);
      if (lookahead == 11)
        ADVANCE(96);
      if (lookahead == '\r')
        ADVANCE(939);
      if (lookahead == ' ')
        ADVANCE(496);
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
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(263);
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
        ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(498);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(935);
      if (lookahead == '\n')
        ADVANCE(934);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(936);
      if (lookahead == ' ')
        ADVANCE(937);
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
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(938);
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
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(935);
      if (lookahead == '\n')
        ADVANCE(934);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(936);
      if (lookahead == ' ')
        ADVANCE(937);
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
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(938);
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
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 936:
      if (lookahead == '\t')
        ADVANCE(935);
      if (lookahead == '\n')
        ADVANCE(934);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(936);
      if (lookahead == ' ')
        ADVANCE(937);
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
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(938);
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
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(935);
      if (lookahead == '\n')
        ADVANCE(934);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(936);
      if (lookahead == ' ')
        ADVANCE(937);
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
        ADVANCE(181);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(182);
      if (lookahead == '.')
        ADVANCE(183);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(189);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(190);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead == '?')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(938);
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
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(936);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 939:
      if (lookahead == '\t')
        ADVANCE(500);
      if (lookahead == '\n')
        ADVANCE(934);
      if (lookahead == 11)
        ADVANCE(96);
      if (lookahead == '\r')
        ADVANCE(939);
      if (lookahead == ' ')
        ADVANCE(496);
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
        ADVANCE(253);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == '+')
        ADVANCE(111);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '/')
        ADVANCE(117);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '<')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(262);
      if (lookahead == '>')
        ADVANCE(124);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '@')
        ADVANCE(126);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(263);
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
        ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(498);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(177);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(178);
      END_STATE();
    case 940:
      if (lookahead == '\n')
        ADVANCE(941);
      if (lookahead == '\r')
        ADVANCE(943);
      if (lookahead == '(')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == '[')
        ADVANCE(155);
      if (lookahead == '\\')
        SKIP(944);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(940);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(787);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 941:
      if (lookahead == '\n')
        ADVANCE(941);
      if (lookahead == '\r')
        ADVANCE(941);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(359);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == '\\')
        ADVANCE(942);
      if (lookahead == ']')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(941);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(784);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(193);
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
      if (lookahead == '(')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(110);
      if (lookahead == ',')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(409);
      if (lookahead == '[')
        ADVANCE(155);
      if (lookahead == '\\')
        SKIP(944);
      if (lookahead == ']')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(940);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(787);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      END_STATE();
    case 944:
      if (lookahead == 'n')
        SKIP(940);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 179},
  [2] = {.lex_state = 324},
  [3] = {.lex_state = 179},
  [4] = {.lex_state = 324},
  [5] = {.lex_state = 351, .external_lex_state = 2},
  [6] = {.lex_state = 357},
  [7] = {.lex_state = 324},
  [8] = {.lex_state = 458, .external_lex_state = 3},
  [9] = {.lex_state = 463},
  [10] = {.lex_state = 463},
  [11] = {.lex_state = 468},
  [12] = {.lex_state = 463},
  [13] = {.lex_state = 463},
  [14] = {.lex_state = 463},
  [15] = {.lex_state = 476, .external_lex_state = 2},
  [16] = {.lex_state = 480, .external_lex_state = 2},
  [17] = {.lex_state = 484, .external_lex_state = 2},
  [18] = {.lex_state = 489},
  [19] = {.lex_state = 499},
  [20] = {.lex_state = 484, .external_lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 507, .external_lex_state = 2},
  [23] = {.lex_state = 507, .external_lex_state = 2},
  [24] = {.lex_state = 357},
  [25] = {.lex_state = 512, .external_lex_state = 2},
  [26] = {.lex_state = 512, .external_lex_state = 2},
  [27] = {.lex_state = 507, .external_lex_state = 2},
  [28] = {.lex_state = 507, .external_lex_state = 2},
  [29] = {.lex_state = 516, .external_lex_state = 2},
  [30] = {.lex_state = 476, .external_lex_state = 2},
  [31] = {.lex_state = 521, .external_lex_state = 2},
  [32] = {.lex_state = 351, .external_lex_state = 2},
  [33] = {.lex_state = 526},
  [34] = {.lex_state = 530, .external_lex_state = 2},
  [35] = {.lex_state = 357},
  [36] = {.lex_state = 530, .external_lex_state = 2},
  [37] = {.lex_state = 324},
  [38] = {.lex_state = 534, .external_lex_state = 2},
  [39] = {.lex_state = 357},
  [40] = {.lex_state = 357},
  [41] = {.lex_state = 463},
  [42] = {.lex_state = 555, .external_lex_state = 4},
  [43] = {.lex_state = 561},
  [44] = {.lex_state = 507, .external_lex_state = 2},
  [45] = {.lex_state = 463},
  [46] = {.lex_state = 565},
  [47] = {.lex_state = 463},
  [48] = {.lex_state = 463},
  [49] = {.lex_state = 580},
  [50] = {.lex_state = 463},
  [51] = {.lex_state = 580},
  [52] = {.lex_state = 179},
  [53] = {.lex_state = 463},
  [54] = {.lex_state = 587, .external_lex_state = 2},
  [55] = {.lex_state = 591},
  [56] = {.lex_state = 595, .external_lex_state = 2},
  [57] = {.lex_state = 595, .external_lex_state = 2},
  [58] = {.lex_state = 468},
  [59] = {.lex_state = 587, .external_lex_state = 2},
  [60] = {.lex_state = 600, .external_lex_state = 2},
  [61] = {.lex_state = 463},
  [62] = {.lex_state = 621, .external_lex_state = 2},
  [63] = {.lex_state = 642, .external_lex_state = 2},
  [64] = {.lex_state = 647},
  [65] = {.lex_state = 463},
  [66] = {.lex_state = 357},
  [67] = {.lex_state = 647},
  [68] = {.lex_state = 357},
  [69] = {.lex_state = 647},
  [70] = {.lex_state = 512, .external_lex_state = 2},
  [71] = {.lex_state = 512, .external_lex_state = 2},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 654},
  [79] = {.lex_state = 499},
  [80] = {.lex_state = 499},
  [81] = {.lex_state = 499},
  [82] = {.lex_state = 499},
  [83] = {.lex_state = 484, .external_lex_state = 2},
  [84] = {.lex_state = 499},
  [85] = {.lex_state = 499},
  [86] = {.lex_state = 758},
  [87] = {.lex_state = 499},
  [88] = {.lex_state = 499},
  [89] = {.lex_state = 526},
  [90] = {.lex_state = 484, .external_lex_state = 2},
  [91] = {.lex_state = 507, .external_lex_state = 2},
  [92] = {.lex_state = 179},
  [93] = {.lex_state = 530},
  [94] = {.lex_state = 512},
  [95] = {.lex_state = 777},
  [96] = {.lex_state = 777},
  [97] = {.lex_state = 512},
  [98] = {.lex_state = 489},
  [99] = {.lex_state = 499},
  [100] = {.lex_state = 512},
  [101] = {.lex_state = 512},
  [102] = {.lex_state = 512},
  [103] = {.lex_state = 512},
  [104] = {.lex_state = 777},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 777},
  [107] = {.lex_state = 777},
  [108] = {.lex_state = 530},
  [109] = {.lex_state = 512},
  [110] = {.lex_state = 512},
  [111] = {.lex_state = 530},
  [112] = {.lex_state = 781},
  [113] = {.lex_state = 507, .external_lex_state = 2},
  [114] = {.lex_state = 512, .external_lex_state = 2},
  [115] = {.lex_state = 351, .external_lex_state = 2},
  [116] = {.lex_state = 458, .external_lex_state = 3},
  [117] = {.lex_state = 463},
  [118] = {.lex_state = 357},
  [119] = {.lex_state = 512, .external_lex_state = 2},
  [120] = {.lex_state = 534, .external_lex_state = 2},
  [121] = {.lex_state = 463},
  [122] = {.lex_state = 324},
  [123] = {.lex_state = 324},
  [124] = {.lex_state = 507, .external_lex_state = 2},
  [125] = {.lex_state = 788},
  [126] = {.lex_state = 788},
  [127] = {.lex_state = 507, .external_lex_state = 2},
  [128] = {.lex_state = 813},
  [129] = {.lex_state = 357},
  [130] = {.lex_state = 357},
  [131] = {.lex_state = 507, .external_lex_state = 2},
  [132] = {.lex_state = 179},
  [133] = {.lex_state = 818, .external_lex_state = 2},
  [134] = {.lex_state = 823},
  [135] = {.lex_state = 507, .external_lex_state = 2},
  [136] = {.lex_state = 507, .external_lex_state = 2},
  [137] = {.lex_state = 555, .external_lex_state = 4},
  [138] = {.lex_state = 555, .external_lex_state = 4},
  [139] = {.lex_state = 507, .external_lex_state = 2},
  [140] = {.lex_state = 561},
  [141] = {.lex_state = 561},
  [142] = {.lex_state = 357},
  [143] = {.lex_state = 463},
  [144] = {.lex_state = 580},
  [145] = {.lex_state = 463},
  [146] = {.lex_state = 458, .external_lex_state = 3},
  [147] = {.lex_state = 463},
  [148] = {.lex_state = 580},
  [149] = {.lex_state = 580},
  [150] = {.lex_state = 580},
  [151] = {.lex_state = 458, .external_lex_state = 3},
  [152] = {.lex_state = 580},
  [153] = {.lex_state = 587, .external_lex_state = 2},
  [154] = {.lex_state = 587, .external_lex_state = 2},
  [155] = {.lex_state = 357},
  [156] = {.lex_state = 595, .external_lex_state = 2},
  [157] = {.lex_state = 587, .external_lex_state = 2},
  [158] = {.lex_state = 468},
  [159] = {.lex_state = 595, .external_lex_state = 2},
  [160] = {.lex_state = 595, .external_lex_state = 2},
  [161] = {.lex_state = 595, .external_lex_state = 2},
  [162] = {.lex_state = 621, .external_lex_state = 2},
  [163] = {.lex_state = 827, .external_lex_state = 2},
  [164] = {.lex_state = 832, .external_lex_state = 2},
  [165] = {.lex_state = 463},
  [166] = {.lex_state = 837, .external_lex_state = 2},
  [167] = {.lex_state = 842, .external_lex_state = 2},
  [168] = {.lex_state = 507, .external_lex_state = 2},
  [169] = {.lex_state = 847, .external_lex_state = 2},
  [170] = {.lex_state = 852, .external_lex_state = 2},
  [171] = {.lex_state = 827, .external_lex_state = 2},
  [172] = {.lex_state = 357},
  [173] = {.lex_state = 463},
  [174] = {.lex_state = 857},
  [175] = {.lex_state = 463},
  [176] = {.lex_state = 647},
  [177] = {.lex_state = 781},
  [178] = {.lex_state = 647},
  [179] = {.lex_state = 862},
  [180] = {.lex_state = 484, .external_lex_state = 2},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 867},
  [184] = {.lex_state = 871},
  [185] = {.lex_state = 878},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 499},
  [188] = {.lex_state = 499},
  [189] = {.lex_state = 867},
  [190] = {.lex_state = 871},
  [191] = {.lex_state = 878},
  [192] = {.lex_state = 499},
  [193] = {.lex_state = 499},
  [194] = {.lex_state = 484, .external_lex_state = 2},
  [195] = {.lex_state = 885, .external_lex_state = 2},
  [196] = {.lex_state = 885, .external_lex_state = 2},
  [197] = {.lex_state = 484, .external_lex_state = 2},
  [198] = {.lex_state = 484, .external_lex_state = 2},
  [199] = {.lex_state = 530},
  [200] = {.lex_state = 512},
  [201] = {.lex_state = 512},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 512},
  [204] = {.lex_state = 499},
  [205] = {.lex_state = 512},
  [206] = {.lex_state = 463},
  [207] = {.lex_state = 463},
  [208] = {.lex_state = 512},
  [209] = {.lex_state = 512},
  [210] = {.lex_state = 512},
  [211] = {.lex_state = 512},
  [212] = {.lex_state = 530},
  [213] = {.lex_state = 781},
  [214] = {.lex_state = 890, .external_lex_state = 2},
  [215] = {.lex_state = 781},
  [216] = {.lex_state = 895, .external_lex_state = 2},
  [217] = {.lex_state = 463},
  [218] = {.lex_state = 507, .external_lex_state = 2},
  [219] = {.lex_state = 890, .external_lex_state = 2},
  [220] = {.lex_state = 781},
  [221] = {.lex_state = 463},
  [222] = {.lex_state = 890, .external_lex_state = 2},
  [223] = {.lex_state = 890, .external_lex_state = 2},
  [224] = {.lex_state = 526},
  [225] = {.lex_state = 900, .external_lex_state = 4},
  [226] = {.lex_state = 526},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 357},
  [229] = {.lex_state = 357},
  [230] = {.lex_state = 357},
  [231] = {.lex_state = 458, .external_lex_state = 3},
  [232] = {.lex_state = 324},
  [233] = {.lex_state = 507, .external_lex_state = 2},
  [234] = {.lex_state = 507, .external_lex_state = 2},
  [235] = {.lex_state = 357},
  [236] = {.lex_state = 904, .external_lex_state = 2},
  [237] = {.lex_state = 463},
  [238] = {.lex_state = 463},
  [239] = {.lex_state = 499},
  [240] = {.lex_state = 463},
  [241] = {.lex_state = 507, .external_lex_state = 2},
  [242] = {.lex_state = 357},
  [243] = {.lex_state = 463},
  [244] = {.lex_state = 463},
  [245] = {.lex_state = 507, .external_lex_state = 2},
  [246] = {.lex_state = 357},
  [247] = {.lex_state = 507, .external_lex_state = 2},
  [248] = {.lex_state = 507, .external_lex_state = 2},
  [249] = {.lex_state = 555, .external_lex_state = 4},
  [250] = {.lex_state = 507, .external_lex_state = 2},
  [251] = {.lex_state = 555, .external_lex_state = 4},
  [252] = {.lex_state = 561},
  [253] = {.lex_state = 561},
  [254] = {.lex_state = 463},
  [255] = {.lex_state = 463},
  [256] = {.lex_state = 357},
  [257] = {.lex_state = 463},
  [258] = {.lex_state = 458, .external_lex_state = 3},
  [259] = {.lex_state = 580},
  [260] = {.lex_state = 580},
  [261] = {.lex_state = 909, .external_lex_state = 4},
  [262] = {.lex_state = 918},
  [263] = {.lex_state = 507, .external_lex_state = 2},
  [264] = {.lex_state = 463},
  [265] = {.lex_state = 580},
  [266] = {.lex_state = 458, .external_lex_state = 3},
  [267] = {.lex_state = 580},
  [268] = {.lex_state = 507, .external_lex_state = 2},
  [269] = {.lex_state = 595, .external_lex_state = 2},
  [270] = {.lex_state = 587, .external_lex_state = 2},
  [271] = {.lex_state = 595, .external_lex_state = 2},
  [272] = {.lex_state = 595, .external_lex_state = 2},
  [273] = {.lex_state = 595, .external_lex_state = 2},
  [274] = {.lex_state = 468},
  [275] = {.lex_state = 595, .external_lex_state = 2},
  [276] = {.lex_state = 832, .external_lex_state = 2},
  [277] = {.lex_state = 837, .external_lex_state = 2},
  [278] = {.lex_state = 507, .external_lex_state = 2},
  [279] = {.lex_state = 827, .external_lex_state = 2},
  [280] = {.lex_state = 827, .external_lex_state = 2},
  [281] = {.lex_state = 463},
  [282] = {.lex_state = 507, .external_lex_state = 2},
  [283] = {.lex_state = 463},
  [284] = {.lex_state = 842, .external_lex_state = 2},
  [285] = {.lex_state = 463},
  [286] = {.lex_state = 463},
  [287] = {.lex_state = 923, .external_lex_state = 2},
  [288] = {.lex_state = 923, .external_lex_state = 2},
  [289] = {.lex_state = 842, .external_lex_state = 2},
  [290] = {.lex_state = 923, .external_lex_state = 2},
  [291] = {.lex_state = 827, .external_lex_state = 2},
  [292] = {.lex_state = 463},
  [293] = {.lex_state = 837, .external_lex_state = 2},
  [294] = {.lex_state = 463},
  [295] = {.lex_state = 862},
  [296] = {.lex_state = 781},
  [297] = {.lex_state = 928, .external_lex_state = 2},
  [298] = {.lex_state = 507, .external_lex_state = 2},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 871},
  [302] = {.lex_state = 871},
  [303] = {.lex_state = 878},
  [304] = {.lex_state = 878},
  [305] = {.lex_state = 499},
  [306] = {.lex_state = 499},
  [307] = {.lex_state = 499},
  [308] = {.lex_state = 499},
  [309] = {.lex_state = 933},
  [310] = {.lex_state = 933},
  [311] = {.lex_state = 484, .external_lex_state = 2},
  [312] = {.lex_state = 512},
  [313] = {.lex_state = 512},
  [314] = {.lex_state = 512},
  [315] = {.lex_state = 512},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 463},
  [318] = {.lex_state = 357},
  [319] = {.lex_state = 463},
  [320] = {.lex_state = 781},
  [321] = {.lex_state = 357},
  [322] = {.lex_state = 940},
  [323] = {.lex_state = 781},
  [324] = {.lex_state = 463},
  [325] = {.lex_state = 463},
  [326] = {.lex_state = 357},
  [327] = {.lex_state = 357},
  [328] = {.lex_state = 357},
  [329] = {.lex_state = 357},
  [330] = {.lex_state = 940},
  [331] = {.lex_state = 940},
  [332] = {.lex_state = 463},
  [333] = {.lex_state = 781},
  [334] = {.lex_state = 781},
  [335] = {.lex_state = 781},
  [336] = {.lex_state = 781},
  [337] = {.lex_state = 928, .external_lex_state = 2},
  [338] = {.lex_state = 928, .external_lex_state = 2},
  [339] = {.lex_state = 781},
  [340] = {.lex_state = 928, .external_lex_state = 2},
  [341] = {.lex_state = 463},
  [342] = {.lex_state = 781},
  [343] = {.lex_state = 507, .external_lex_state = 2},
  [344] = {.lex_state = 781},
  [345] = {.lex_state = 781},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 507, .external_lex_state = 2},
  [348] = {.lex_state = 900, .external_lex_state = 4},
  [349] = {.lex_state = 526},
  [350] = {.lex_state = 463},
  [351] = {.lex_state = 357},
  [352] = {.lex_state = 357},
  [353] = {.lex_state = 647},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 904, .external_lex_state = 2},
  [356] = {.lex_state = 647},
  [357] = {.lex_state = 463},
  [358] = {.lex_state = 507, .external_lex_state = 2},
  [359] = {.lex_state = 357},
  [360] = {.lex_state = 507, .external_lex_state = 2},
  [361] = {.lex_state = 357},
  [362] = {.lex_state = 463},
  [363] = {.lex_state = 499},
  [364] = {.lex_state = 507, .external_lex_state = 2},
  [365] = {.lex_state = 463},
  [366] = {.lex_state = 357},
  [367] = {.lex_state = 463},
  [368] = {.lex_state = 507, .external_lex_state = 2},
  [369] = {.lex_state = 357},
  [370] = {.lex_state = 463},
  [371] = {.lex_state = 463},
  [372] = {.lex_state = 463},
  [373] = {.lex_state = 507, .external_lex_state = 2},
  [374] = {.lex_state = 458, .external_lex_state = 3},
  [375] = {.lex_state = 507, .external_lex_state = 2},
  [376] = {.lex_state = 507, .external_lex_state = 2},
  [377] = {.lex_state = 909, .external_lex_state = 4},
  [378] = {.lex_state = 507, .external_lex_state = 2},
  [379] = {.lex_state = 918},
  [380] = {.lex_state = 463},
  [381] = {.lex_state = 507, .external_lex_state = 2},
  [382] = {.lex_state = 458, .external_lex_state = 3},
  [383] = {.lex_state = 595, .external_lex_state = 2},
  [384] = {.lex_state = 595, .external_lex_state = 2},
  [385] = {.lex_state = 837, .external_lex_state = 2},
  [386] = {.lex_state = 507, .external_lex_state = 2},
  [387] = {.lex_state = 357},
  [388] = {.lex_state = 842, .external_lex_state = 2},
  [389] = {.lex_state = 463},
  [390] = {.lex_state = 357},
  [391] = {.lex_state = 357},
  [392] = {.lex_state = 923, .external_lex_state = 2},
  [393] = {.lex_state = 923, .external_lex_state = 2},
  [394] = {.lex_state = 837, .external_lex_state = 2},
  [395] = {.lex_state = 507, .external_lex_state = 2},
  [396] = {.lex_state = 837, .external_lex_state = 2},
  [397] = {.lex_state = 871},
  [398] = {.lex_state = 878},
  [399] = {.lex_state = 499},
  [400] = {.lex_state = 933},
  [401] = {.lex_state = 512},
  [402] = {.lex_state = 484},
  [403] = {.lex_state = 463},
  [404] = {.lex_state = 357},
  [405] = {.lex_state = 357},
  [406] = {.lex_state = 357},
  [407] = {.lex_state = 890, .external_lex_state = 2},
  [408] = {.lex_state = 357},
  [409] = {.lex_state = 781},
  [410] = {.lex_state = 940},
  [411] = {.lex_state = 781},
  [412] = {.lex_state = 940},
  [413] = {.lex_state = 463},
  [414] = {.lex_state = 781},
  [415] = {.lex_state = 890, .external_lex_state = 2},
  [416] = {.lex_state = 357},
  [417] = {.lex_state = 781},
  [418] = {.lex_state = 463},
  [419] = {.lex_state = 357},
  [420] = {.lex_state = 781},
  [421] = {.lex_state = 781},
  [422] = {.lex_state = 781},
  [423] = {.lex_state = 463},
  [424] = {.lex_state = 781},
  [425] = {.lex_state = 781},
  [426] = {.lex_state = 890, .external_lex_state = 2},
  [427] = {.lex_state = 781},
  [428] = {.lex_state = 928, .external_lex_state = 2},
  [429] = {.lex_state = 463},
  [430] = {.lex_state = 928, .external_lex_state = 2},
  [431] = {.lex_state = 928, .external_lex_state = 2},
  [432] = {.lex_state = 781},
  [433] = {.lex_state = 507, .external_lex_state = 2},
  [434] = {.lex_state = 507, .external_lex_state = 2},
  [435] = {.lex_state = 900, .external_lex_state = 4},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 507, .external_lex_state = 2},
  [438] = {.lex_state = 357},
  [439] = {.lex_state = 463},
  [440] = {.lex_state = 357},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 357},
  [443] = {.lex_state = 507, .external_lex_state = 2},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 357},
  [446] = {.lex_state = 357},
  [447] = {.lex_state = 463},
  [448] = {.lex_state = 507, .external_lex_state = 2},
  [449] = {.lex_state = 647},
  [450] = {.lex_state = 357},
  [451] = {.lex_state = 463},
  [452] = {.lex_state = 507, .external_lex_state = 2},
  [453] = {.lex_state = 357},
  [454] = {.lex_state = 357},
  [455] = {.lex_state = 463},
  [456] = {.lex_state = 507, .external_lex_state = 2},
  [457] = {.lex_state = 909, .external_lex_state = 4},
  [458] = {.lex_state = 507, .external_lex_state = 2},
  [459] = {.lex_state = 507, .external_lex_state = 2},
  [460] = {.lex_state = 918},
  [461] = {.lex_state = 507, .external_lex_state = 2},
  [462] = {.lex_state = 507, .external_lex_state = 2},
  [463] = {.lex_state = 507, .external_lex_state = 2},
  [464] = {.lex_state = 507, .external_lex_state = 2},
  [465] = {.lex_state = 357},
  [466] = {.lex_state = 842, .external_lex_state = 2},
  [467] = {.lex_state = 842, .external_lex_state = 2},
  [468] = {.lex_state = 463},
  [469] = {.lex_state = 357},
  [470] = {.lex_state = 463},
  [471] = {.lex_state = 463},
  [472] = {.lex_state = 357},
  [473] = {.lex_state = 507, .external_lex_state = 2},
  [474] = {.lex_state = 463},
  [475] = {.lex_state = 489},
  [476] = {.lex_state = 463},
  [477] = {.lex_state = 463},
  [478] = {.lex_state = 940},
  [479] = {.lex_state = 357},
  [480] = {.lex_state = 940},
  [481] = {.lex_state = 357},
  [482] = {.lex_state = 357},
  [483] = {.lex_state = 890, .external_lex_state = 2},
  [484] = {.lex_state = 940},
  [485] = {.lex_state = 940},
  [486] = {.lex_state = 940},
  [487] = {.lex_state = 781},
  [488] = {.lex_state = 357},
  [489] = {.lex_state = 781},
  [490] = {.lex_state = 890, .external_lex_state = 2},
  [491] = {.lex_state = 940},
  [492] = {.lex_state = 781},
  [493] = {.lex_state = 463},
  [494] = {.lex_state = 940},
  [495] = {.lex_state = 781},
  [496] = {.lex_state = 928, .external_lex_state = 2},
  [497] = {.lex_state = 463},
  [498] = {.lex_state = 928, .external_lex_state = 2},
  [499] = {.lex_state = 900, .external_lex_state = 4},
  [500] = {.lex_state = 357},
  [501] = {.lex_state = 357},
  [502] = {.lex_state = 357},
  [503] = {.lex_state = 357},
  [504] = {.lex_state = 357},
  [505] = {.lex_state = 647},
  [506] = {.lex_state = 357},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 357},
  [509] = {.lex_state = 507, .external_lex_state = 2},
  [510] = {.lex_state = 909, .external_lex_state = 4},
  [511] = {.lex_state = 918},
  [512] = {.lex_state = 507, .external_lex_state = 2},
  [513] = {.lex_state = 357},
  [514] = {.lex_state = 842, .external_lex_state = 2},
  [515] = {.lex_state = 463},
  [516] = {.lex_state = 357},
  [517] = {.lex_state = 463},
  [518] = {.lex_state = 357},
  [519] = {.lex_state = 463},
  [520] = {.lex_state = 463},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 940},
  [523] = {.lex_state = 940},
  [524] = {.lex_state = 940},
  [525] = {.lex_state = 940},
  [526] = {.lex_state = 357},
  [527] = {.lex_state = 781},
  [528] = {.lex_state = 928, .external_lex_state = 2},
  [529] = {.lex_state = 357},
  [530] = {.lex_state = 507, .external_lex_state = 2},
  [531] = {.lex_state = 357},
  [532] = {.lex_state = 357},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 357},
  [535] = {.lex_state = 647},
  [536] = {.lex_state = 357},
  [537] = {.lex_state = 357},
  [538] = {.lex_state = 357},
  [539] = {.lex_state = 357},
  [540] = {.lex_state = 357},
  [541] = {.lex_state = 463},
  [542] = {.lex_state = 940},
  [543] = {.lex_state = 507, .external_lex_state = 2},
  [544] = {.lex_state = 357},
  [545] = {.lex_state = 357},
  [546] = {.lex_state = 357},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 357},
  [549] = {.lex_state = 357},
  [550] = {.lex_state = 507, .external_lex_state = 2},
  [551] = {.lex_state = 357},
  [552] = {.lex_state = 357},
  [553] = {.lex_state = 357},
  [554] = {.lex_state = 357},
  [555] = {.lex_state = 507, .external_lex_state = 2},
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
    [anon_sym_AT] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
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
    [sym_float] = ACTIONS(8),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(8),
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
    [sym_module] = STATE(21),
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(23),
    [sym_function_declaration] = STATE(22),
    [sym_function_head] = STATE(24),
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(26),
    [sym_qualified_variable_symbol] = STATE(26),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(27),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(28),
    [sym_variable_symbol] = STATE(26),
    [sym_type_signature] = STATE(28),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(27),
    [sym__identifier] = STATE(29),
    [sym_variable_identifier] = STATE(30),
    [sym_constructor_identifier] = STATE(31),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(32),
    [aux_sym_module_repeat1] = STATE(33),
    [aux_sym_variable_symbol_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_foreign] = ACTIONS(20),
    [anon_sym_default] = ACTIONS(22),
    [anon_sym_do] = ACTIONS(24),
    [anon_sym_class] = ACTIONS(26),
    [anon_sym_instance] = ACTIONS(28),
    [anon_sym_infixl] = ACTIONS(30),
    [anon_sym_infixr] = ACTIONS(30),
    [anon_sym_infix] = ACTIONS(30),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_data] = ACTIONS(32),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(34),
    [anon_sym_BANG] = ACTIONS(18),
    [anon_sym_type] = ACTIONS(36),
    [sym__variable_pattern] = ACTIONS(38),
    [sym__constructor_pattern] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(44),
    [anon_sym_SQUOTE] = ACTIONS(46),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
    [sym__integer_literal] = ACTIONS(50),
    [sym__octal_literal] = ACTIONS(50),
    [sym__hexidecimal_literal] = ACTIONS(50),
  },
  [2] = {
    [sym_module_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(54),
  },
  [3] = {
    [sym__symbol] = STATE(32),
    [aux_sym_variable_symbol_repeat1] = STATE(36),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
  },
  [4] = {
    [anon_sym_qualified] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(54),
  },
  [5] = {
    [sym__layout_semicolon] = ACTIONS(60),
    [anon_sym_SEMI] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_COMMA] = ACTIONS(62),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_EQ] = ACTIONS(62),
    [anon_sym_AT] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_COLON] = ACTIONS(62),
    [anon_sym_PIPE] = ACTIONS(62),
    [anon_sym_BANG] = ACTIONS(62),
    [sym__variable_pattern] = ACTIONS(62),
    [sym__constructor_pattern] = ACTIONS(62),
    [anon_sym_DOT] = ACTIONS(62),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(62),
    [anon_sym_DOLLAR] = ACTIONS(62),
    [anon_sym_PERCENT] = ACTIONS(62),
    [anon_sym_AMP] = ACTIONS(62),
    [anon_sym_1] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_SLASH] = ACTIONS(62),
    [anon_sym_LT] = ACTIONS(62),
    [anon_sym_GT] = ACTIONS(62),
    [anon_sym_QMARK] = ACTIONS(62),
    [anon_sym_CARET] = ACTIONS(62),
    [anon_sym_TILDE] = ACTIONS(62),
    [anon_sym_BSLASH] = ACTIONS(62),
    [sym__integer_literal] = ACTIONS(62),
    [sym__octal_literal] = ACTIONS(62),
    [sym__hexidecimal_literal] = ACTIONS(62),
  },
  [6] = {
    [sym_foreign_import] = STATE(40),
    [anon_sym_import] = ACTIONS(64),
    [sym_foreign_export] = ACTIONS(66),
    [sym_comment] = ACTIONS(54),
  },
  [7] = {
    [anon_sym_LPAREN] = ACTIONS(68),
    [sym_comment] = ACTIONS(54),
  },
  [8] = {
    [sym_statement_list] = STATE(44),
    [sym__layout_open_brace] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(54),
  },
  [9] = {
    [sym_context] = STATE(47),
    [sym_class] = STATE(48),
    [sym_constructor_identifier] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [10] = {
    [sym_context] = STATE(50),
    [sym_class] = STATE(48),
    [sym_constructor_identifier] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [11] = {
    [sym__op] = STATE(56),
    [sym_variable_symbol] = STATE(57),
    [sym_constructor_symbol] = STATE(57),
    [sym_integer] = STATE(58),
    [sym__symbol] = STATE(32),
    [aux_sym_variable_symbol_repeat1] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_COLON] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
    [sym__integer_literal] = ACTIONS(84),
    [sym__octal_literal] = ACTIONS(84),
    [sym__hexidecimal_literal] = ACTIONS(84),
  },
  [12] = {
    [sym_context] = STATE(61),
    [sym_class] = STATE(48),
    [sym_simple_type] = STATE(62),
    [sym_constructor_identifier] = STATE(63),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym__constructor_pattern] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [13] = {
    [sym_context] = STATE(65),
    [sym_class] = STATE(48),
    [sym_simple_type] = STATE(66),
    [sym_constructor_identifier] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym__constructor_pattern] = ACTIONS(88),
    [sym_comment] = ACTIONS(54),
  },
  [14] = {
    [sym_simple_type] = STATE(68),
    [sym_constructor_identifier] = STATE(69),
    [sym__constructor_pattern] = ACTIONS(88),
    [sym_comment] = ACTIONS(54),
  },
  [15] = {
    [sym__layout_semicolon] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_AT] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym__] = ACTIONS(92),
    [anon_sym_COLON] = ACTIONS(92),
    [anon_sym_COLON_COLON] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(92),
    [anon_sym_BANG] = ACTIONS(92),
    [sym__variable_pattern] = ACTIONS(92),
    [sym__constructor_pattern] = ACTIONS(92),
    [anon_sym_DOT] = ACTIONS(92),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(92),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [anon_sym_POUND] = ACTIONS(92),
    [anon_sym_DOLLAR] = ACTIONS(92),
    [anon_sym_PERCENT] = ACTIONS(92),
    [anon_sym_AMP] = ACTIONS(92),
    [anon_sym_1] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(92),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_QMARK] = ACTIONS(92),
    [anon_sym_CARET] = ACTIONS(92),
    [anon_sym_TILDE] = ACTIONS(92),
    [anon_sym_BSLASH] = ACTIONS(92),
    [sym__integer_literal] = ACTIONS(92),
    [sym__octal_literal] = ACTIONS(92),
    [sym__hexidecimal_literal] = ACTIONS(92),
  },
  [16] = {
    [sym_variable_symbol] = STATE(71),
    [sym__symbol] = STATE(32),
    [aux_sym_variable_symbol_repeat1] = STATE(34),
    [sym__layout_semicolon] = ACTIONS(94),
    [anon_sym_SEMI] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_COLON_COLON] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [sym__variable_pattern] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
  },
  [17] = {
    [sym__layout_semicolon] = ACTIONS(100),
    [anon_sym_SEMI] = ACTIONS(102),
    [sym__variable_pattern] = ACTIONS(102),
    [sym__constructor_pattern] = ACTIONS(104),
    [sym_comment] = ACTIONS(54),
    [sym_float] = ACTIONS(104),
    [anon_sym_SQUOTE] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [sym__integer_literal] = ACTIONS(102),
    [sym__octal_literal] = ACTIONS(102),
    [sym__hexidecimal_literal] = ACTIONS(102),
  },
  [18] = {
    [sym__graphic] = STATE(75),
    [sym__small] = STATE(76),
    [sym__large] = STATE(76),
    [sym__symbol] = STATE(76),
    [sym__special] = STATE(76),
    [sym__escape] = STATE(75),
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
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_RBRACK] = ACTIONS(106),
    [anon_sym_PIPE] = ACTIONS(108),
    [anon_sym_BANG] = ACTIONS(108),
    [anon_sym_DOT] = ACTIONS(108),
    [sym_comment] = ACTIONS(42),
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
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_LT] = ACTIONS(108),
    [anon_sym_GT] = ACTIONS(108),
    [anon_sym_QMARK] = ACTIONS(108),
    [anon_sym_CARET] = ACTIONS(108),
    [anon_sym_TILDE] = ACTIONS(108),
    [anon_sym_BSLASH] = ACTIONS(118),
    [sym__space] = ACTIONS(112),
  },
  [19] = {
    [sym__gap] = STATE(82),
    [sym__graphic] = STATE(82),
    [sym__small] = STATE(84),
    [sym__large] = STATE(84),
    [sym__symbol] = STATE(84),
    [sym__special] = STATE(84),
    [sym__escape] = STATE(82),
    [aux_sym_string_repeat1] = STATE(88),
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
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [sym_comment] = ACTIONS(42),
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
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(134),
    [sym__space] = ACTIONS(136),
    [sym__newline] = ACTIONS(136),
    [sym__tab] = ACTIONS(136),
    [sym__vertical_tab] = ACTIONS(136),
  },
  [20] = {
    [sym__layout_semicolon] = ACTIONS(138),
    [anon_sym_SEMI] = ACTIONS(140),
    [sym__variable_pattern] = ACTIONS(140),
    [sym__constructor_pattern] = ACTIONS(142),
    [sym_comment] = ACTIONS(54),
    [sym_float] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(140),
    [anon_sym_DQUOTE] = ACTIONS(140),
    [sym__integer_literal] = ACTIONS(140),
    [sym__octal_literal] = ACTIONS(140),
    [sym__hexidecimal_literal] = ACTIONS(140),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_comment] = ACTIONS(54),
  },
  [22] = {
    [sym__layout_semicolon] = ACTIONS(146),
    [anon_sym_SEMI] = ACTIONS(148),
    [sym_comment] = ACTIONS(54),
  },
  [23] = {
    [sym__layout_semicolon] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(152),
    [sym_comment] = ACTIONS(54),
  },
  [24] = {
    [sym_function_body] = STATE(91),
    [anon_sym_EQ] = ACTIONS(154),
    [sym_comment] = ACTIONS(54),
  },
  [25] = {
    [sym__function_pattern] = STATE(100),
    [sym_wildcard] = STATE(101),
    [sym__variable] = STATE(102),
    [sym_qualified_variable_identifier] = STATE(103),
    [sym_qualified_variable_symbol] = STATE(103),
    [sym_variable_symbol] = STATE(103),
    [sym__literal] = STATE(101),
    [sym__identifier] = STATE(104),
    [sym_simple_type] = STATE(105),
    [sym_variable_identifier] = STATE(106),
    [sym_constructor_identifier] = STATE(107),
    [sym_integer] = STATE(97),
    [sym_char] = STATE(97),
    [sym_string] = STATE(97),
    [sym__symbol] = STATE(108),
    [aux_sym_function_head_repeat1] = STATE(109),
    [aux_sym__function_pattern_repeat1] = STATE(110),
    [aux_sym_variable_symbol_repeat1] = STATE(111),
    [sym__layout_semicolon] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_EQ] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym__] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_BANG] = ACTIONS(162),
    [sym__variable_pattern] = ACTIONS(166),
    [sym__constructor_pattern] = ACTIONS(168),
    [anon_sym_DOT] = ACTIONS(162),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(170),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_DOLLAR] = ACTIONS(162),
    [anon_sym_PERCENT] = ACTIONS(162),
    [anon_sym_AMP] = ACTIONS(162),
    [anon_sym_1] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(162),
    [anon_sym_QMARK] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(162),
    [anon_sym_BSLASH] = ACTIONS(162),
    [sym__integer_literal] = ACTIONS(84),
    [sym__octal_literal] = ACTIONS(84),
    [sym__hexidecimal_literal] = ACTIONS(84),
  },
  [26] = {
    [sym__layout_semicolon] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_EQ] = ACTIONS(178),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym__] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(178),
    [anon_sym_BANG] = ACTIONS(178),
    [sym__variable_pattern] = ACTIONS(178),
    [sym__constructor_pattern] = ACTIONS(178),
    [anon_sym_DOT] = ACTIONS(178),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(178),
    [anon_sym_SQUOTE] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(178),
    [anon_sym_POUND] = ACTIONS(178),
    [anon_sym_DOLLAR] = ACTIONS(178),
    [anon_sym_PERCENT] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(178),
    [anon_sym_1] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(178),
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
  [27] = {
    [sym__layout_semicolon] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(180),
    [sym_comment] = ACTIONS(54),
  },
  [28] = {
    [sym__layout_semicolon] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(184),
    [sym_comment] = ACTIONS(54),
  },
  [29] = {
    [sym__layout_semicolon] = ACTIONS(146),
    [anon_sym_SEMI] = ACTIONS(148),
    [anon_sym_COLON_COLON] = ACTIONS(186),
    [sym_comment] = ACTIONS(54),
  },
  [30] = {
    [sym__layout_semicolon] = ACTIONS(188),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_EQ] = ACTIONS(178),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym__] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(178),
    [anon_sym_COLON_COLON] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(178),
    [anon_sym_BANG] = ACTIONS(178),
    [sym__variable_pattern] = ACTIONS(178),
    [sym__constructor_pattern] = ACTIONS(178),
    [anon_sym_DOT] = ACTIONS(178),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(178),
    [anon_sym_SQUOTE] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(178),
    [anon_sym_POUND] = ACTIONS(178),
    [anon_sym_DOLLAR] = ACTIONS(178),
    [anon_sym_PERCENT] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(178),
    [anon_sym_1] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(178),
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
    [sym__layout_semicolon] = ACTIONS(188),
    [anon_sym_SEMI] = ACTIONS(192),
    [anon_sym_COLON_COLON] = ACTIONS(192),
    [sym__variable_pattern] = ACTIONS(192),
    [sym__constructor_pattern] = ACTIONS(190),
    [sym_comment] = ACTIONS(54),
    [sym_float] = ACTIONS(190),
    [anon_sym_SQUOTE] = ACTIONS(192),
    [anon_sym_DQUOTE] = ACTIONS(192),
    [sym__integer_literal] = ACTIONS(192),
    [sym__octal_literal] = ACTIONS(192),
    [sym__hexidecimal_literal] = ACTIONS(192),
  },
  [32] = {
    [sym__layout_semicolon] = ACTIONS(194),
    [anon_sym_SEMI] = ACTIONS(196),
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(196),
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(196),
    [anon_sym_AT] = ACTIONS(196),
    [anon_sym_DASH] = ACTIONS(196),
    [anon_sym__] = ACTIONS(196),
    [anon_sym_COLON] = ACTIONS(196),
    [anon_sym_PIPE] = ACTIONS(196),
    [anon_sym_BANG] = ACTIONS(196),
    [sym__variable_pattern] = ACTIONS(196),
    [sym__constructor_pattern] = ACTIONS(196),
    [anon_sym_DOT] = ACTIONS(196),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(196),
    [anon_sym_DQUOTE] = ACTIONS(196),
    [anon_sym_POUND] = ACTIONS(196),
    [anon_sym_DOLLAR] = ACTIONS(196),
    [anon_sym_PERCENT] = ACTIONS(196),
    [anon_sym_AMP] = ACTIONS(196),
    [anon_sym_1] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(196),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(196),
    [anon_sym_QMARK] = ACTIONS(196),
    [anon_sym_CARET] = ACTIONS(196),
    [anon_sym_TILDE] = ACTIONS(196),
    [anon_sym_BSLASH] = ACTIONS(196),
    [sym__integer_literal] = ACTIONS(196),
    [sym__octal_literal] = ACTIONS(196),
    [sym__hexidecimal_literal] = ACTIONS(196),
  },
  [33] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(113),
    [sym_function_declaration] = STATE(22),
    [sym_function_head] = STATE(24),
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(26),
    [sym_qualified_variable_symbol] = STATE(26),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(27),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(28),
    [sym_variable_symbol] = STATE(26),
    [sym_type_signature] = STATE(28),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(27),
    [sym__identifier] = STATE(29),
    [sym_variable_identifier] = STATE(30),
    [sym_constructor_identifier] = STATE(31),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(32),
    [aux_sym_variable_symbol_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(198),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_foreign] = ACTIONS(20),
    [anon_sym_default] = ACTIONS(22),
    [anon_sym_do] = ACTIONS(24),
    [anon_sym_class] = ACTIONS(26),
    [anon_sym_instance] = ACTIONS(28),
    [anon_sym_infixl] = ACTIONS(30),
    [anon_sym_infixr] = ACTIONS(30),
    [anon_sym_infix] = ACTIONS(30),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_data] = ACTIONS(32),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(34),
    [anon_sym_BANG] = ACTIONS(18),
    [anon_sym_type] = ACTIONS(36),
    [sym__variable_pattern] = ACTIONS(38),
    [sym__constructor_pattern] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(44),
    [anon_sym_SQUOTE] = ACTIONS(46),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
    [sym__integer_literal] = ACTIONS(50),
    [sym__octal_literal] = ACTIONS(50),
    [sym__hexidecimal_literal] = ACTIONS(50),
  },
  [34] = {
    [sym__symbol] = STATE(115),
    [sym__layout_semicolon] = ACTIONS(200),
    [anon_sym_SEMI] = ACTIONS(202),
    [anon_sym_LPAREN] = ACTIONS(202),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym__] = ACTIONS(202),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [sym__variable_pattern] = ACTIONS(202),
    [sym__constructor_pattern] = ACTIONS(202),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(202),
    [anon_sym_SQUOTE] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(202),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
    [sym__integer_literal] = ACTIONS(202),
    [sym__octal_literal] = ACTIONS(202),
    [sym__hexidecimal_literal] = ACTIONS(202),
  },
  [35] = {
    [sym_module_exports] = STATE(118),
    [anon_sym_where] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(208),
    [sym_comment] = ACTIONS(54),
  },
  [36] = {
    [sym__symbol] = STATE(115),
    [sym__layout_semicolon] = ACTIONS(210),
    [anon_sym_SEMI] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(212),
    [anon_sym_RPAREN] = ACTIONS(214),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym__] = ACTIONS(212),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(212),
    [anon_sym_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
    [sym__integer_literal] = ACTIONS(212),
    [sym__octal_literal] = ACTIONS(212),
    [sym__hexidecimal_literal] = ACTIONS(212),
  },
  [37] = {
    [sym_module_identifier] = ACTIONS(216),
    [sym_comment] = ACTIONS(54),
  },
  [38] = {
    [sym_import_specification] = STATE(124),
    [sym__layout_semicolon] = ACTIONS(218),
    [anon_sym_SEMI] = ACTIONS(220),
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_as] = ACTIONS(224),
    [anon_sym_hiding] = ACTIONS(226),
    [sym_comment] = ACTIONS(54),
  },
  [39] = {
    [anon_sym_ccall] = ACTIONS(228),
    [anon_sym_stdcall] = ACTIONS(228),
    [anon_sym_cplusplus] = ACTIONS(228),
    [anon_sym_jvm] = ACTIONS(228),
    [anon_sym_dotnet] = ACTIONS(228),
    [sym_comment] = ACTIONS(54),
  },
  [40] = {
    [sym_calling_convention] = STATE(126),
    [anon_sym_ccall] = ACTIONS(230),
    [anon_sym_stdcall] = ACTIONS(230),
    [anon_sym_cplusplus] = ACTIONS(230),
    [anon_sym_jvm] = ACTIONS(230),
    [anon_sym_dotnet] = ACTIONS(230),
    [sym_comment] = ACTIONS(54),
  },
  [41] = {
    [sym__identifier] = STATE(129),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [anon_sym_RPAREN] = ACTIONS(232),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [42] = {
    [sym__variable] = STATE(27),
    [sym_qualified_variable_identifier] = STATE(135),
    [sym_qualified_variable_symbol] = STATE(135),
    [sym__expression] = STATE(136),
    [sym_do_expression] = STATE(27),
    [sym__statement] = STATE(137),
    [sym_variable_symbol] = STATE(135),
    [sym__literal] = STATE(27),
    [sym_variable_identifier] = STATE(135),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(32),
    [aux_sym_statement_list_repeat1] = STATE(138),
    [aux_sym_variable_symbol_repeat1] = STATE(59),
    [sym__layout_close_brace] = ACTIONS(236),
    [anon_sym_LPAREN] = ACTIONS(238),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_do] = ACTIONS(24),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [sym__variable_pattern] = ACTIONS(240),
    [sym__constructor_pattern] = ACTIONS(242),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(44),
    [anon_sym_SQUOTE] = ACTIONS(46),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
    [sym__integer_literal] = ACTIONS(50),
    [sym__octal_literal] = ACTIONS(50),
    [sym__hexidecimal_literal] = ACTIONS(50),
  },
  [43] = {
    [sym__variable] = STATE(27),
    [sym_qualified_variable_identifier] = STATE(135),
    [sym_qualified_variable_symbol] = STATE(135),
    [sym__expression] = STATE(139),
    [sym_do_expression] = STATE(27),
    [sym__statement] = STATE(140),
    [sym_variable_symbol] = STATE(135),
    [sym__literal] = STATE(27),
    [sym_variable_identifier] = STATE(135),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(32),
    [aux_sym_statement_list_repeat1] = STATE(141),
    [aux_sym_variable_symbol_repeat1] = STATE(59),
    [anon_sym_RBRACE] = ACTIONS(244),
    [anon_sym_LPAREN] = ACTIONS(238),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_do] = ACTIONS(24),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [sym__variable_pattern] = ACTIONS(240),
    [sym__constructor_pattern] = ACTIONS(242),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(44),
    [anon_sym_SQUOTE] = ACTIONS(46),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
    [sym__integer_literal] = ACTIONS(50),
    [sym__octal_literal] = ACTIONS(50),
    [sym__hexidecimal_literal] = ACTIONS(50),
  },
  [44] = {
    [sym__layout_semicolon] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(248),
    [sym_comment] = ACTIONS(54),
  },
  [45] = {
    [sym_class] = STATE(142),
    [sym_constructor_identifier] = STATE(143),
    [sym__constructor_pattern] = ACTIONS(88),
    [sym_comment] = ACTIONS(54),
  },
  [46] = {
    [anon_sym_where] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(250),
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_COMMA] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_EQ] = ACTIONS(250),
    [anon_sym_BQUOTE] = ACTIONS(250),
    [anon_sym_COLON_COLON] = ACTIONS(250),
    [sym__variable_pattern] = ACTIONS(96),
    [sym_comment] = ACTIONS(54),
  },
  [47] = {
    [sym_constructor_identifier] = STATE(144),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [48] = {
    [anon_sym_EQ_GT] = ACTIONS(252),
    [sym_comment] = ACTIONS(54),
  },
  [49] = {
    [sym_variable_identifier] = STATE(148),
    [aux_sym_type_class_repeat1] = STATE(149),
    [anon_sym_where] = ACTIONS(254),
    [anon_sym_LPAREN] = ACTIONS(256),
    [sym__variable_pattern] = ACTIONS(258),
    [sym_comment] = ACTIONS(54),
  },
  [50] = {
    [sym_constructor_identifier] = STATE(150),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [51] = {
    [sym_variable_identifier] = STATE(148),
    [aux_sym_type_class_repeat1] = STATE(152),
    [anon_sym_where] = ACTIONS(260),
    [anon_sym_LPAREN] = ACTIONS(256),
    [sym__variable_pattern] = ACTIONS(258),
    [sym_comment] = ACTIONS(54),
  },
  [52] = {
    [sym__symbol] = STATE(32),
    [aux_sym_variable_symbol_repeat1] = STATE(154),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_COLON] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
  },
  [53] = {
    [sym__identifier] = STATE(155),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [54] = {
    [sym__symbol] = STATE(32),
    [aux_sym_variable_symbol_repeat1] = STATE(157),
    [sym__layout_semicolon] = ACTIONS(264),
    [anon_sym_SEMI] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
  },
  [55] = {
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(142),
    [anon_sym_BQUOTE] = ACTIONS(142),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym__] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_BANG] = ACTIONS(142),
    [sym__variable_pattern] = ACTIONS(142),
    [sym__constructor_pattern] = ACTIONS(142),
    [anon_sym_DOT] = ACTIONS(142),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(142),
    [anon_sym_DQUOTE] = ACTIONS(142),
    [anon_sym_POUND] = ACTIONS(142),
    [anon_sym_DOLLAR] = ACTIONS(142),
    [anon_sym_PERCENT] = ACTIONS(142),
    [anon_sym_AMP] = ACTIONS(142),
    [anon_sym_1] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(142),
    [anon_sym_SLASH] = ACTIONS(142),
    [anon_sym_LT] = ACTIONS(142),
    [anon_sym_GT] = ACTIONS(142),
    [anon_sym_QMARK] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(142),
    [anon_sym_TILDE] = ACTIONS(142),
    [anon_sym_BSLASH] = ACTIONS(142),
    [sym__integer_literal] = ACTIONS(142),
    [sym__octal_literal] = ACTIONS(142),
    [sym__hexidecimal_literal] = ACTIONS(142),
  },
  [56] = {
    [aux_sym_fixity_repeat1] = STATE(159),
    [sym__layout_semicolon] = ACTIONS(270),
    [anon_sym_SEMI] = ACTIONS(272),
    [anon_sym_COMMA] = ACTIONS(274),
    [sym_comment] = ACTIONS(54),
  },
  [57] = {
    [sym__layout_semicolon] = ACTIONS(276),
    [anon_sym_SEMI] = ACTIONS(278),
    [anon_sym_COMMA] = ACTIONS(278),
    [sym_comment] = ACTIONS(54),
  },
  [58] = {
    [sym__op] = STATE(160),
    [sym_variable_symbol] = STATE(57),
    [sym_constructor_symbol] = STATE(57),
    [sym__symbol] = STATE(32),
    [aux_sym_variable_symbol_repeat1] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_COLON] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
  },
  [59] = {
    [sym__symbol] = STATE(115),
    [sym__layout_semicolon] = ACTIONS(200),
    [anon_sym_SEMI] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(202),
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
  },
  [60] = {
    [sym__layout_semicolon] = ACTIONS(94),
    [anon_sym_SEMI] = ACTIONS(250),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_EQ] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_deriving] = ACTIONS(250),
    [anon_sym_BANG] = ACTIONS(250),
    [sym__variable_pattern] = ACTIONS(96),
    [sym__constructor_pattern] = ACTIONS(96),
    [sym_comment] = ACTIONS(54),
  },
  [61] = {
    [sym_simple_type] = STATE(162),
    [sym_constructor_identifier] = STATE(163),
    [sym__constructor_pattern] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [62] = {
    [sym_constructors] = STATE(166),
    [sym_constructor] = STATE(167),
    [sym_deriving] = STATE(168),
    [sym_constructor_identifier] = STATE(169),
    [sym__layout_semicolon] = ACTIONS(282),
    [anon_sym_SEMI] = ACTIONS(284),
    [anon_sym_EQ] = ACTIONS(286),
    [anon_sym_deriving] = ACTIONS(288),
    [sym__constructor_pattern] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [63] = {
    [sym_variable_identifier] = STATE(170),
    [aux_sym_type_class_repeat1] = STATE(171),
    [sym__layout_semicolon] = ACTIONS(290),
    [anon_sym_SEMI] = ACTIONS(292),
    [anon_sym_LPAREN] = ACTIONS(256),
    [anon_sym_EQ] = ACTIONS(292),
    [anon_sym_deriving] = ACTIONS(292),
    [sym__variable_pattern] = ACTIONS(240),
    [sym__constructor_pattern] = ACTIONS(294),
    [sym_comment] = ACTIONS(54),
  },
  [64] = {
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_COMMA] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_EQ] = ACTIONS(250),
    [anon_sym_DASH_GT] = ACTIONS(250),
    [sym__variable_pattern] = ACTIONS(250),
    [sym__constructor_pattern] = ACTIONS(96),
    [sym_comment] = ACTIONS(54),
  },
  [65] = {
    [sym_simple_type] = STATE(172),
    [sym_constructor_identifier] = STATE(69),
    [sym__constructor_pattern] = ACTIONS(88),
    [sym_comment] = ACTIONS(54),
  },
  [66] = {
    [anon_sym_EQ] = ACTIONS(296),
    [sym_comment] = ACTIONS(54),
  },
  [67] = {
    [sym_variable_identifier] = STATE(175),
    [aux_sym_type_class_repeat1] = STATE(176),
    [anon_sym_LPAREN] = ACTIONS(256),
    [anon_sym_EQ] = ACTIONS(292),
    [sym__variable_pattern] = ACTIONS(298),
    [sym_comment] = ACTIONS(54),
  },
  [68] = {
    [anon_sym_EQ] = ACTIONS(300),
    [sym_comment] = ACTIONS(54),
  },
  [69] = {
    [sym_variable_identifier] = STATE(179),
    [aux_sym_type_class_repeat1] = STATE(176),
    [anon_sym_EQ] = ACTIONS(292),
    [sym__variable_pattern] = ACTIONS(302),
    [sym_comment] = ACTIONS(54),
  },
  [70] = {
    [sym__layout_semicolon] = ACTIONS(304),
    [anon_sym_SEMI] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_EQ] = ACTIONS(306),
    [anon_sym_AT] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym__] = ACTIONS(306),
    [anon_sym_COLON] = ACTIONS(306),
    [anon_sym_PIPE] = ACTIONS(306),
    [anon_sym_BANG] = ACTIONS(306),
    [sym__variable_pattern] = ACTIONS(306),
    [sym__constructor_pattern] = ACTIONS(306),
    [anon_sym_DOT] = ACTIONS(306),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(306),
    [anon_sym_SQUOTE] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [anon_sym_POUND] = ACTIONS(306),
    [anon_sym_DOLLAR] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(306),
    [anon_sym_1] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_LT] = ACTIONS(306),
    [anon_sym_GT] = ACTIONS(306),
    [anon_sym_QMARK] = ACTIONS(306),
    [anon_sym_CARET] = ACTIONS(306),
    [anon_sym_TILDE] = ACTIONS(306),
    [anon_sym_BSLASH] = ACTIONS(306),
    [sym__integer_literal] = ACTIONS(306),
    [sym__octal_literal] = ACTIONS(306),
    [sym__hexidecimal_literal] = ACTIONS(306),
  },
  [71] = {
    [sym__layout_semicolon] = ACTIONS(308),
    [anon_sym_SEMI] = ACTIONS(310),
    [anon_sym_LPAREN] = ACTIONS(310),
    [anon_sym_EQ] = ACTIONS(310),
    [anon_sym_AT] = ACTIONS(310),
    [anon_sym_DASH] = ACTIONS(310),
    [anon_sym__] = ACTIONS(310),
    [anon_sym_COLON] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_BANG] = ACTIONS(310),
    [sym__variable_pattern] = ACTIONS(310),
    [sym__constructor_pattern] = ACTIONS(310),
    [anon_sym_DOT] = ACTIONS(310),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(310),
    [anon_sym_SQUOTE] = ACTIONS(310),
    [anon_sym_DQUOTE] = ACTIONS(310),
    [anon_sym_POUND] = ACTIONS(310),
    [anon_sym_DOLLAR] = ACTIONS(310),
    [anon_sym_PERCENT] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_1] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(310),
    [anon_sym_GT] = ACTIONS(310),
    [anon_sym_QMARK] = ACTIONS(310),
    [anon_sym_CARET] = ACTIONS(310),
    [anon_sym_TILDE] = ACTIONS(310),
    [anon_sym_BSLASH] = ACTIONS(310),
    [sym__integer_literal] = ACTIONS(310),
    [sym__octal_literal] = ACTIONS(310),
    [sym__hexidecimal_literal] = ACTIONS(310),
  },
  [72] = {
    [sym_comment] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(312),
  },
  [73] = {
    [sym_comment] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(314),
  },
  [74] = {
    [sym_comment] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(316),
  },
  [75] = {
    [sym_comment] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(318),
  },
  [76] = {
    [sym_comment] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(320),
  },
  [77] = {
    [sym_comment] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(322),
  },
  [78] = {
    [sym__char_escape] = STATE(182),
    [sym__ascii] = STATE(182),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(324),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(326),
    [anon_sym_AMP] = ACTIONS(324),
    [anon_sym_CARET] = ACTIONS(328),
    [anon_sym_BSLASH] = ACTIONS(324),
    [anon_sym_x] = ACTIONS(330),
    [anon_sym_X] = ACTIONS(330),
    [anon_sym_o] = ACTIONS(332),
    [anon_sym_O] = ACTIONS(332),
    [anon_sym_a] = ACTIONS(324),
    [anon_sym_b] = ACTIONS(324),
    [anon_sym_f] = ACTIONS(324),
    [anon_sym_n] = ACTIONS(324),
    [anon_sym_r] = ACTIONS(324),
    [anon_sym_t] = ACTIONS(324),
    [anon_sym_v] = ACTIONS(324),
    [anon_sym_NUL] = ACTIONS(334),
    [anon_sym_SOH] = ACTIONS(334),
    [anon_sym_STX] = ACTIONS(334),
    [anon_sym_ETX] = ACTIONS(334),
    [anon_sym_EOT] = ACTIONS(334),
    [anon_sym_ENQ] = ACTIONS(334),
    [anon_sym_ACK] = ACTIONS(334),
    [anon_sym_BEL] = ACTIONS(334),
    [anon_sym_BS] = ACTIONS(334),
    [anon_sym_HT] = ACTIONS(334),
    [anon_sym_LF] = ACTIONS(334),
    [anon_sym_VT] = ACTIONS(334),
    [anon_sym_FF] = ACTIONS(334),
    [anon_sym_CR] = ACTIONS(334),
    [anon_sym_SO] = ACTIONS(334),
    [anon_sym_SI] = ACTIONS(334),
    [anon_sym_DLE] = ACTIONS(334),
    [anon_sym_DC1] = ACTIONS(334),
    [anon_sym_DC2] = ACTIONS(334),
    [anon_sym_DC3] = ACTIONS(334),
    [anon_sym_DC4] = ACTIONS(334),
    [anon_sym_NAK] = ACTIONS(334),
    [anon_sym_SYN] = ACTIONS(334),
    [anon_sym_ETB] = ACTIONS(334),
    [anon_sym_CAN] = ACTIONS(334),
    [anon_sym_EM] = ACTIONS(334),
    [anon_sym_SUB] = ACTIONS(334),
    [anon_sym_ESC] = ACTIONS(334),
    [anon_sym_FS] = ACTIONS(334),
    [anon_sym_GS] = ACTIONS(334),
    [anon_sym_RS] = ACTIONS(334),
    [anon_sym_US] = ACTIONS(334),
    [anon_sym_SP] = ACTIONS(334),
    [anon_sym_DEL] = ACTIONS(334),
  },
  [79] = {
    [anon_sym_SEMI] = ACTIONS(336),
    [anon_sym_LBRACE] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_LPAREN] = ACTIONS(336),
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym_EQ] = ACTIONS(336),
    [anon_sym_AT] = ACTIONS(336),
    [anon_sym_BQUOTE] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym__] = ACTIONS(336),
    [anon_sym_COLON] = ACTIONS(336),
    [anon_sym_LBRACK] = ACTIONS(336),
    [anon_sym_RBRACK] = ACTIONS(336),
    [anon_sym_PIPE] = ACTIONS(336),
    [anon_sym_BANG] = ACTIONS(336),
    [anon_sym_DOT] = ACTIONS(336),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(336),
    [anon_sym_DQUOTE] = ACTIONS(336),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(336),
    [sym__ascii_large] = ACTIONS(336),
    [anon_sym_POUND] = ACTIONS(336),
    [anon_sym_DOLLAR] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_AMP] = ACTIONS(336),
    [anon_sym_1] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [anon_sym_QMARK] = ACTIONS(336),
    [anon_sym_CARET] = ACTIONS(336),
    [anon_sym_TILDE] = ACTIONS(336),
    [anon_sym_BSLASH] = ACTIONS(336),
    [sym__space] = ACTIONS(336),
    [sym__newline] = ACTIONS(336),
    [sym__tab] = ACTIONS(336),
    [sym__vertical_tab] = ACTIONS(336),
  },
  [80] = {
    [anon_sym_SEMI] = ACTIONS(62),
    [anon_sym_LBRACE] = ACTIONS(62),
    [anon_sym_RBRACE] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_EQ] = ACTIONS(62),
    [anon_sym_AT] = ACTIONS(62),
    [anon_sym_BQUOTE] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_COLON] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_RBRACK] = ACTIONS(62),
    [anon_sym_PIPE] = ACTIONS(62),
    [anon_sym_BANG] = ACTIONS(62),
    [anon_sym_DOT] = ACTIONS(62),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(62),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(62),
    [sym__ascii_large] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(62),
    [anon_sym_DOLLAR] = ACTIONS(62),
    [anon_sym_PERCENT] = ACTIONS(62),
    [anon_sym_AMP] = ACTIONS(62),
    [anon_sym_1] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_SLASH] = ACTIONS(62),
    [anon_sym_LT] = ACTIONS(62),
    [anon_sym_GT] = ACTIONS(62),
    [anon_sym_QMARK] = ACTIONS(62),
    [anon_sym_CARET] = ACTIONS(62),
    [anon_sym_TILDE] = ACTIONS(62),
    [anon_sym_BSLASH] = ACTIONS(62),
    [sym__space] = ACTIONS(62),
    [sym__newline] = ACTIONS(62),
    [sym__tab] = ACTIONS(62),
    [sym__vertical_tab] = ACTIONS(62),
  },
  [81] = {
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
    [anon_sym_COLON] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(338),
    [anon_sym_RBRACK] = ACTIONS(338),
    [anon_sym_PIPE] = ACTIONS(338),
    [anon_sym_BANG] = ACTIONS(338),
    [anon_sym_DOT] = ACTIONS(338),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(338),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(338),
    [sym__ascii_large] = ACTIONS(338),
    [anon_sym_POUND] = ACTIONS(338),
    [anon_sym_DOLLAR] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_AMP] = ACTIONS(338),
    [anon_sym_1] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_LT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(338),
    [anon_sym_QMARK] = ACTIONS(338),
    [anon_sym_CARET] = ACTIONS(338),
    [anon_sym_TILDE] = ACTIONS(338),
    [anon_sym_BSLASH] = ACTIONS(338),
    [sym__space] = ACTIONS(338),
    [sym__newline] = ACTIONS(338),
    [sym__tab] = ACTIONS(338),
    [sym__vertical_tab] = ACTIONS(338),
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
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(340),
    [anon_sym_PIPE] = ACTIONS(340),
    [anon_sym_BANG] = ACTIONS(340),
    [anon_sym_DOT] = ACTIONS(340),
    [sym_comment] = ACTIONS(42),
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
    [anon_sym_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(340),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_QMARK] = ACTIONS(340),
    [anon_sym_CARET] = ACTIONS(340),
    [anon_sym_TILDE] = ACTIONS(340),
    [anon_sym_BSLASH] = ACTIONS(340),
    [sym__space] = ACTIONS(340),
    [sym__newline] = ACTIONS(340),
    [sym__tab] = ACTIONS(340),
    [sym__vertical_tab] = ACTIONS(340),
  },
  [83] = {
    [sym__layout_semicolon] = ACTIONS(342),
    [anon_sym_SEMI] = ACTIONS(344),
    [sym__variable_pattern] = ACTIONS(344),
    [sym__constructor_pattern] = ACTIONS(346),
    [sym_comment] = ACTIONS(54),
    [sym_float] = ACTIONS(346),
    [anon_sym_SQUOTE] = ACTIONS(344),
    [anon_sym_DQUOTE] = ACTIONS(344),
    [sym__integer_literal] = ACTIONS(344),
    [sym__octal_literal] = ACTIONS(344),
    [sym__hexidecimal_literal] = ACTIONS(344),
  },
  [84] = {
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
    [anon_sym_COLON] = ACTIONS(348),
    [anon_sym_LBRACK] = ACTIONS(348),
    [anon_sym_RBRACK] = ACTIONS(348),
    [anon_sym_PIPE] = ACTIONS(348),
    [anon_sym_BANG] = ACTIONS(348),
    [anon_sym_DOT] = ACTIONS(348),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(348),
    [anon_sym_DQUOTE] = ACTIONS(348),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(348),
    [sym__ascii_large] = ACTIONS(348),
    [anon_sym_POUND] = ACTIONS(348),
    [anon_sym_DOLLAR] = ACTIONS(348),
    [anon_sym_PERCENT] = ACTIONS(348),
    [anon_sym_AMP] = ACTIONS(348),
    [anon_sym_1] = ACTIONS(348),
    [anon_sym_PLUS] = ACTIONS(348),
    [anon_sym_SLASH] = ACTIONS(348),
    [anon_sym_LT] = ACTIONS(348),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_QMARK] = ACTIONS(348),
    [anon_sym_CARET] = ACTIONS(348),
    [anon_sym_TILDE] = ACTIONS(348),
    [anon_sym_BSLASH] = ACTIONS(348),
    [sym__space] = ACTIONS(348),
    [sym__newline] = ACTIONS(348),
    [sym__tab] = ACTIONS(348),
    [sym__vertical_tab] = ACTIONS(348),
  },
  [85] = {
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
    [anon_sym_COLON] = ACTIONS(350),
    [anon_sym_LBRACK] = ACTIONS(350),
    [anon_sym_RBRACK] = ACTIONS(350),
    [anon_sym_PIPE] = ACTIONS(350),
    [anon_sym_BANG] = ACTIONS(350),
    [anon_sym_DOT] = ACTIONS(350),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(350),
    [anon_sym_DQUOTE] = ACTIONS(350),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(350),
    [sym__ascii_large] = ACTIONS(350),
    [anon_sym_POUND] = ACTIONS(350),
    [anon_sym_DOLLAR] = ACTIONS(350),
    [anon_sym_PERCENT] = ACTIONS(350),
    [anon_sym_AMP] = ACTIONS(350),
    [anon_sym_1] = ACTIONS(350),
    [anon_sym_PLUS] = ACTIONS(350),
    [anon_sym_SLASH] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(350),
    [anon_sym_GT] = ACTIONS(350),
    [anon_sym_QMARK] = ACTIONS(350),
    [anon_sym_CARET] = ACTIONS(350),
    [anon_sym_TILDE] = ACTIONS(350),
    [anon_sym_BSLASH] = ACTIONS(350),
    [sym__space] = ACTIONS(350),
    [sym__newline] = ACTIONS(350),
    [sym__tab] = ACTIONS(350),
    [sym__vertical_tab] = ACTIONS(350),
  },
  [86] = {
    [sym__char_escape] = STATE(188),
    [sym__ascii] = STATE(188),
    [anon_sym_SEMI] = ACTIONS(62),
    [anon_sym_LBRACE] = ACTIONS(62),
    [anon_sym_RBRACE] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_EQ] = ACTIONS(62),
    [anon_sym_AT] = ACTIONS(62),
    [anon_sym_BQUOTE] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_COLON] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_RBRACK] = ACTIONS(62),
    [anon_sym_PIPE] = ACTIONS(62),
    [anon_sym_BANG] = ACTIONS(62),
    [anon_sym_DOT] = ACTIONS(62),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(352),
    [anon_sym_DQUOTE] = ACTIONS(352),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(62),
    [sym__ascii_large] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(62),
    [anon_sym_DOLLAR] = ACTIONS(62),
    [anon_sym_PERCENT] = ACTIONS(62),
    [anon_sym_AMP] = ACTIONS(352),
    [anon_sym_1] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_SLASH] = ACTIONS(62),
    [anon_sym_LT] = ACTIONS(62),
    [anon_sym_GT] = ACTIONS(62),
    [anon_sym_QMARK] = ACTIONS(62),
    [anon_sym_CARET] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(62),
    [anon_sym_BSLASH] = ACTIONS(352),
    [sym__space] = ACTIONS(62),
    [sym__newline] = ACTIONS(62),
    [sym__tab] = ACTIONS(62),
    [sym__vertical_tab] = ACTIONS(62),
    [anon_sym_x] = ACTIONS(358),
    [anon_sym_X] = ACTIONS(358),
    [anon_sym_o] = ACTIONS(360),
    [anon_sym_O] = ACTIONS(360),
    [anon_sym_a] = ACTIONS(352),
    [anon_sym_b] = ACTIONS(352),
    [anon_sym_f] = ACTIONS(352),
    [anon_sym_n] = ACTIONS(352),
    [anon_sym_r] = ACTIONS(352),
    [anon_sym_t] = ACTIONS(352),
    [anon_sym_v] = ACTIONS(352),
    [anon_sym_NUL] = ACTIONS(362),
    [anon_sym_SOH] = ACTIONS(362),
    [anon_sym_STX] = ACTIONS(362),
    [anon_sym_ETX] = ACTIONS(362),
    [anon_sym_EOT] = ACTIONS(362),
    [anon_sym_ENQ] = ACTIONS(362),
    [anon_sym_ACK] = ACTIONS(362),
    [anon_sym_BEL] = ACTIONS(362),
    [anon_sym_BS] = ACTIONS(362),
    [anon_sym_HT] = ACTIONS(362),
    [anon_sym_LF] = ACTIONS(362),
    [anon_sym_VT] = ACTIONS(362),
    [anon_sym_FF] = ACTIONS(362),
    [anon_sym_CR] = ACTIONS(362),
    [anon_sym_SO] = ACTIONS(362),
    [anon_sym_SI] = ACTIONS(362),
    [anon_sym_DLE] = ACTIONS(362),
    [anon_sym_DC1] = ACTIONS(362),
    [anon_sym_DC2] = ACTIONS(362),
    [anon_sym_DC3] = ACTIONS(362),
    [anon_sym_DC4] = ACTIONS(362),
    [anon_sym_NAK] = ACTIONS(362),
    [anon_sym_SYN] = ACTIONS(362),
    [anon_sym_ETB] = ACTIONS(362),
    [anon_sym_CAN] = ACTIONS(362),
    [anon_sym_EM] = ACTIONS(362),
    [anon_sym_SUB] = ACTIONS(362),
    [anon_sym_ESC] = ACTIONS(362),
    [anon_sym_FS] = ACTIONS(362),
    [anon_sym_GS] = ACTIONS(362),
    [anon_sym_RS] = ACTIONS(362),
    [anon_sym_US] = ACTIONS(362),
    [anon_sym_SP] = ACTIONS(362),
    [anon_sym_DEL] = ACTIONS(362),
  },
  [87] = {
    [anon_sym_SEMI] = ACTIONS(364),
    [anon_sym_LBRACE] = ACTIONS(364),
    [anon_sym_RBRACE] = ACTIONS(364),
    [anon_sym_LPAREN] = ACTIONS(364),
    [anon_sym_RPAREN] = ACTIONS(364),
    [anon_sym_EQ] = ACTIONS(364),
    [anon_sym_AT] = ACTIONS(364),
    [anon_sym_BQUOTE] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [anon_sym__] = ACTIONS(364),
    [anon_sym_COLON] = ACTIONS(364),
    [anon_sym_LBRACK] = ACTIONS(364),
    [anon_sym_RBRACK] = ACTIONS(364),
    [anon_sym_PIPE] = ACTIONS(364),
    [anon_sym_BANG] = ACTIONS(364),
    [anon_sym_DOT] = ACTIONS(364),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(364),
    [anon_sym_DQUOTE] = ACTIONS(364),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(364),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(364),
    [sym__ascii_large] = ACTIONS(364),
    [anon_sym_POUND] = ACTIONS(364),
    [anon_sym_DOLLAR] = ACTIONS(364),
    [anon_sym_PERCENT] = ACTIONS(364),
    [anon_sym_AMP] = ACTIONS(364),
    [anon_sym_1] = ACTIONS(364),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_SLASH] = ACTIONS(364),
    [anon_sym_LT] = ACTIONS(364),
    [anon_sym_GT] = ACTIONS(364),
    [anon_sym_QMARK] = ACTIONS(364),
    [anon_sym_CARET] = ACTIONS(364),
    [anon_sym_TILDE] = ACTIONS(364),
    [anon_sym_BSLASH] = ACTIONS(364),
    [sym__space] = ACTIONS(364),
    [sym__newline] = ACTIONS(364),
    [sym__tab] = ACTIONS(364),
    [sym__vertical_tab] = ACTIONS(364),
  },
  [88] = {
    [sym__gap] = STATE(193),
    [sym__graphic] = STATE(193),
    [sym__small] = STATE(84),
    [sym__large] = STATE(84),
    [sym__symbol] = STATE(84),
    [sym__special] = STATE(84),
    [sym__escape] = STATE(193),
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
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(366),
    [anon_sym_DQUOTE] = ACTIONS(368),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(124),
    [sym__ascii_large] = ACTIONS(132),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_1] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(134),
    [sym__space] = ACTIONS(136),
    [sym__newline] = ACTIONS(136),
    [sym__tab] = ACTIONS(136),
    [sym__vertical_tab] = ACTIONS(136),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(370),
    [anon_sym_RBRACE] = ACTIONS(370),
    [anon_sym_LPAREN] = ACTIONS(370),
    [anon_sym_import] = ACTIONS(370),
    [anon_sym_EQ] = ACTIONS(370),
    [anon_sym_AT] = ACTIONS(370),
    [anon_sym_DASH] = ACTIONS(370),
    [anon_sym_foreign] = ACTIONS(370),
    [anon_sym_default] = ACTIONS(370),
    [anon_sym_do] = ACTIONS(370),
    [anon_sym_class] = ACTIONS(370),
    [anon_sym_instance] = ACTIONS(370),
    [anon_sym_infixl] = ACTIONS(370),
    [anon_sym_infixr] = ACTIONS(370),
    [anon_sym_infix] = ACTIONS(370),
    [anon_sym_COLON] = ACTIONS(370),
    [anon_sym_data] = ACTIONS(370),
    [anon_sym_PIPE] = ACTIONS(370),
    [anon_sym_newtype] = ACTIONS(370),
    [anon_sym_BANG] = ACTIONS(370),
    [anon_sym_type] = ACTIONS(370),
    [sym__variable_pattern] = ACTIONS(370),
    [sym__constructor_pattern] = ACTIONS(370),
    [anon_sym_DOT] = ACTIONS(370),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(370),
    [anon_sym_SQUOTE] = ACTIONS(370),
    [anon_sym_DQUOTE] = ACTIONS(370),
    [anon_sym_POUND] = ACTIONS(370),
    [anon_sym_DOLLAR] = ACTIONS(370),
    [anon_sym_PERCENT] = ACTIONS(370),
    [anon_sym_AMP] = ACTIONS(370),
    [anon_sym_1] = ACTIONS(370),
    [anon_sym_PLUS] = ACTIONS(370),
    [anon_sym_SLASH] = ACTIONS(370),
    [anon_sym_LT] = ACTIONS(370),
    [anon_sym_GT] = ACTIONS(370),
    [anon_sym_QMARK] = ACTIONS(370),
    [anon_sym_CARET] = ACTIONS(370),
    [anon_sym_TILDE] = ACTIONS(370),
    [anon_sym_BSLASH] = ACTIONS(370),
    [sym__integer_literal] = ACTIONS(370),
    [sym__octal_literal] = ACTIONS(370),
    [sym__hexidecimal_literal] = ACTIONS(370),
  },
  [90] = {
    [sym__literal] = STATE(197),
    [sym__identifier] = STATE(197),
    [sym_variable_identifier] = STATE(31),
    [sym_constructor_identifier] = STATE(31),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_function_body_repeat1] = STATE(198),
    [sym__layout_semicolon] = ACTIONS(372),
    [anon_sym_SEMI] = ACTIONS(374),
    [sym__variable_pattern] = ACTIONS(376),
    [sym__constructor_pattern] = ACTIONS(378),
    [sym_comment] = ACTIONS(54),
    [sym_float] = ACTIONS(44),
    [anon_sym_SQUOTE] = ACTIONS(380),
    [anon_sym_DQUOTE] = ACTIONS(382),
    [sym__integer_literal] = ACTIONS(384),
    [sym__octal_literal] = ACTIONS(384),
    [sym__hexidecimal_literal] = ACTIONS(384),
  },
  [91] = {
    [sym__layout_semicolon] = ACTIONS(386),
    [anon_sym_SEMI] = ACTIONS(388),
    [sym_comment] = ACTIONS(54),
  },
  [92] = {
    [sym__symbol] = STATE(108),
    [aux_sym_variable_symbol_repeat1] = STATE(199),
    [anon_sym_EQ] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_BANG] = ACTIONS(162),
    [anon_sym_DOT] = ACTIONS(162),
    [sym_comment] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_DOLLAR] = ACTIONS(162),
    [anon_sym_PERCENT] = ACTIONS(162),
    [anon_sym_AMP] = ACTIONS(162),
    [anon_sym_1] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(162),
    [anon_sym_QMARK] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(162),
    [anon_sym_BSLASH] = ACTIONS(162),
  },
  [93] = {
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_EQ] = ACTIONS(62),
    [anon_sym_AT] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_COLON] = ACTIONS(62),
    [anon_sym_PIPE] = ACTIONS(62),
    [anon_sym_BANG] = ACTIONS(62),
    [sym__variable_pattern] = ACTIONS(62),
    [sym__constructor_pattern] = ACTIONS(62),
    [anon_sym_DOT] = ACTIONS(62),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(62),
    [anon_sym_DOLLAR] = ACTIONS(62),
    [anon_sym_PERCENT] = ACTIONS(62),
    [anon_sym_AMP] = ACTIONS(62),
    [anon_sym_1] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_SLASH] = ACTIONS(62),
    [anon_sym_LT] = ACTIONS(62),
    [anon_sym_GT] = ACTIONS(62),
    [anon_sym_QMARK] = ACTIONS(62),
    [anon_sym_CARET] = ACTIONS(62),
    [anon_sym_TILDE] = ACTIONS(62),
    [anon_sym_BSLASH] = ACTIONS(62),
    [sym__integer_literal] = ACTIONS(62),
    [sym__octal_literal] = ACTIONS(62),
    [sym__hexidecimal_literal] = ACTIONS(62),
  },
  [94] = {
    [anon_sym_LPAREN] = ACTIONS(390),
    [anon_sym_EQ] = ACTIONS(390),
    [anon_sym_AT] = ACTIONS(390),
    [anon_sym_DASH] = ACTIONS(390),
    [anon_sym__] = ACTIONS(390),
    [anon_sym_COLON] = ACTIONS(390),
    [anon_sym_PIPE] = ACTIONS(390),
    [anon_sym_BANG] = ACTIONS(390),
    [sym__variable_pattern] = ACTIONS(390),
    [sym__constructor_pattern] = ACTIONS(390),
    [anon_sym_DOT] = ACTIONS(390),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(390),
    [anon_sym_SQUOTE] = ACTIONS(390),
    [anon_sym_DQUOTE] = ACTIONS(390),
    [anon_sym_POUND] = ACTIONS(390),
    [anon_sym_DOLLAR] = ACTIONS(390),
    [anon_sym_PERCENT] = ACTIONS(390),
    [anon_sym_AMP] = ACTIONS(390),
    [anon_sym_1] = ACTIONS(390),
    [anon_sym_PLUS] = ACTIONS(390),
    [anon_sym_SLASH] = ACTIONS(390),
    [anon_sym_LT] = ACTIONS(390),
    [anon_sym_GT] = ACTIONS(390),
    [anon_sym_QMARK] = ACTIONS(390),
    [anon_sym_CARET] = ACTIONS(390),
    [anon_sym_TILDE] = ACTIONS(390),
    [anon_sym_BSLASH] = ACTIONS(390),
    [sym__integer_literal] = ACTIONS(390),
    [sym__octal_literal] = ACTIONS(390),
    [sym__hexidecimal_literal] = ACTIONS(390),
  },
  [95] = {
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_AT] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym__] = ACTIONS(92),
    [anon_sym_COLON] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(92),
    [anon_sym_BANG] = ACTIONS(92),
    [sym__variable_pattern] = ACTIONS(92),
    [sym__constructor_pattern] = ACTIONS(92),
    [anon_sym_DOT] = ACTIONS(92),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(92),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [anon_sym_POUND] = ACTIONS(92),
    [anon_sym_DOLLAR] = ACTIONS(92),
    [anon_sym_PERCENT] = ACTIONS(92),
    [anon_sym_AMP] = ACTIONS(92),
    [anon_sym_1] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(92),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_QMARK] = ACTIONS(92),
    [anon_sym_CARET] = ACTIONS(92),
    [anon_sym_TILDE] = ACTIONS(92),
    [anon_sym_BSLASH] = ACTIONS(92),
    [sym__integer_literal] = ACTIONS(92),
    [sym__octal_literal] = ACTIONS(92),
    [sym__hexidecimal_literal] = ACTIONS(92),
  },
  [96] = {
    [sym_variable_symbol] = STATE(201),
    [sym__symbol] = STATE(108),
    [aux_sym_variable_symbol_repeat1] = STATE(111),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [sym__variable_pattern] = ACTIONS(96),
    [sym__constructor_pattern] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [anon_sym_POUND] = ACTIONS(96),
    [anon_sym_DOLLAR] = ACTIONS(96),
    [anon_sym_PERCENT] = ACTIONS(96),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_1] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
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
  [97] = {
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_AT] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym__] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(104),
    [anon_sym_BANG] = ACTIONS(104),
    [sym__variable_pattern] = ACTIONS(104),
    [sym__constructor_pattern] = ACTIONS(104),
    [anon_sym_DOT] = ACTIONS(104),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(104),
    [anon_sym_SQUOTE] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [anon_sym_POUND] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(104),
    [anon_sym_PERCENT] = ACTIONS(104),
    [anon_sym_AMP] = ACTIONS(104),
    [anon_sym_1] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(104),
    [anon_sym_LT] = ACTIONS(104),
    [anon_sym_GT] = ACTIONS(104),
    [anon_sym_QMARK] = ACTIONS(104),
    [anon_sym_CARET] = ACTIONS(104),
    [anon_sym_TILDE] = ACTIONS(104),
    [anon_sym_BSLASH] = ACTIONS(104),
    [sym__integer_literal] = ACTIONS(104),
    [sym__octal_literal] = ACTIONS(104),
    [sym__hexidecimal_literal] = ACTIONS(104),
  },
  [98] = {
    [sym__graphic] = STATE(202),
    [sym__small] = STATE(76),
    [sym__large] = STATE(76),
    [sym__symbol] = STATE(76),
    [sym__special] = STATE(76),
    [sym__escape] = STATE(202),
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
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_RBRACK] = ACTIONS(106),
    [anon_sym_PIPE] = ACTIONS(108),
    [anon_sym_BANG] = ACTIONS(108),
    [anon_sym_DOT] = ACTIONS(108),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(392),
    [anon_sym_DQUOTE] = ACTIONS(392),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(110),
    [sym__ascii_large] = ACTIONS(116),
    [anon_sym_POUND] = ACTIONS(108),
    [anon_sym_DOLLAR] = ACTIONS(108),
    [anon_sym_PERCENT] = ACTIONS(108),
    [anon_sym_AMP] = ACTIONS(108),
    [anon_sym_1] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_LT] = ACTIONS(108),
    [anon_sym_GT] = ACTIONS(108),
    [anon_sym_QMARK] = ACTIONS(108),
    [anon_sym_CARET] = ACTIONS(108),
    [anon_sym_TILDE] = ACTIONS(108),
    [anon_sym_BSLASH] = ACTIONS(118),
    [sym__space] = ACTIONS(392),
  },
  [99] = {
    [sym__gap] = STATE(82),
    [sym__graphic] = STATE(82),
    [sym__small] = STATE(84),
    [sym__large] = STATE(84),
    [sym__symbol] = STATE(84),
    [sym__special] = STATE(84),
    [sym__escape] = STATE(82),
    [aux_sym_string_repeat1] = STATE(204),
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
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(394),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(124),
    [sym__ascii_large] = ACTIONS(132),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_1] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(134),
    [sym__space] = ACTIONS(136),
    [sym__newline] = ACTIONS(136),
    [sym__tab] = ACTIONS(136),
    [sym__vertical_tab] = ACTIONS(136),
  },
  [100] = {
    [anon_sym_LPAREN] = ACTIONS(396),
    [anon_sym_EQ] = ACTIONS(396),
    [anon_sym_AT] = ACTIONS(396),
    [anon_sym_DASH] = ACTIONS(396),
    [anon_sym__] = ACTIONS(396),
    [anon_sym_COLON] = ACTIONS(396),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_BANG] = ACTIONS(396),
    [sym__variable_pattern] = ACTIONS(396),
    [sym__constructor_pattern] = ACTIONS(396),
    [anon_sym_DOT] = ACTIONS(396),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(396),
    [anon_sym_SQUOTE] = ACTIONS(396),
    [anon_sym_DQUOTE] = ACTIONS(396),
    [anon_sym_POUND] = ACTIONS(396),
    [anon_sym_DOLLAR] = ACTIONS(396),
    [anon_sym_PERCENT] = ACTIONS(396),
    [anon_sym_AMP] = ACTIONS(396),
    [anon_sym_1] = ACTIONS(396),
    [anon_sym_PLUS] = ACTIONS(396),
    [anon_sym_SLASH] = ACTIONS(396),
    [anon_sym_LT] = ACTIONS(396),
    [anon_sym_GT] = ACTIONS(396),
    [anon_sym_QMARK] = ACTIONS(396),
    [anon_sym_CARET] = ACTIONS(396),
    [anon_sym_TILDE] = ACTIONS(396),
    [anon_sym_BSLASH] = ACTIONS(396),
    [sym__integer_literal] = ACTIONS(396),
    [sym__octal_literal] = ACTIONS(396),
    [sym__hexidecimal_literal] = ACTIONS(396),
  },
  [101] = {
    [anon_sym_LPAREN] = ACTIONS(398),
    [anon_sym_EQ] = ACTIONS(398),
    [anon_sym_AT] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(398),
    [anon_sym__] = ACTIONS(398),
    [anon_sym_COLON] = ACTIONS(398),
    [anon_sym_PIPE] = ACTIONS(398),
    [anon_sym_BANG] = ACTIONS(398),
    [sym__variable_pattern] = ACTIONS(398),
    [sym__constructor_pattern] = ACTIONS(398),
    [anon_sym_DOT] = ACTIONS(398),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(398),
    [anon_sym_SQUOTE] = ACTIONS(398),
    [anon_sym_DQUOTE] = ACTIONS(398),
    [anon_sym_POUND] = ACTIONS(398),
    [anon_sym_DOLLAR] = ACTIONS(398),
    [anon_sym_PERCENT] = ACTIONS(398),
    [anon_sym_AMP] = ACTIONS(398),
    [anon_sym_1] = ACTIONS(398),
    [anon_sym_PLUS] = ACTIONS(398),
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
  [102] = {
    [anon_sym_LPAREN] = ACTIONS(398),
    [anon_sym_EQ] = ACTIONS(398),
    [anon_sym_AT] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(398),
    [anon_sym__] = ACTIONS(398),
    [anon_sym_COLON] = ACTIONS(398),
    [anon_sym_PIPE] = ACTIONS(398),
    [anon_sym_BANG] = ACTIONS(398),
    [sym__variable_pattern] = ACTIONS(398),
    [sym__constructor_pattern] = ACTIONS(398),
    [anon_sym_DOT] = ACTIONS(398),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(398),
    [anon_sym_SQUOTE] = ACTIONS(398),
    [anon_sym_DQUOTE] = ACTIONS(398),
    [anon_sym_POUND] = ACTIONS(398),
    [anon_sym_DOLLAR] = ACTIONS(398),
    [anon_sym_PERCENT] = ACTIONS(398),
    [anon_sym_AMP] = ACTIONS(398),
    [anon_sym_1] = ACTIONS(398),
    [anon_sym_PLUS] = ACTIONS(398),
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
  [103] = {
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_EQ] = ACTIONS(178),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym__] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(178),
    [anon_sym_BANG] = ACTIONS(178),
    [sym__variable_pattern] = ACTIONS(178),
    [sym__constructor_pattern] = ACTIONS(178),
    [anon_sym_DOT] = ACTIONS(178),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(178),
    [anon_sym_SQUOTE] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(178),
    [anon_sym_POUND] = ACTIONS(178),
    [anon_sym_DOLLAR] = ACTIONS(178),
    [anon_sym_PERCENT] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(178),
    [anon_sym_1] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(178),
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
  [104] = {
    [anon_sym_LBRACE] = ACTIONS(400),
    [anon_sym_LPAREN] = ACTIONS(402),
    [anon_sym_EQ] = ACTIONS(402),
    [anon_sym_AT] = ACTIONS(402),
    [anon_sym_DASH] = ACTIONS(402),
    [anon_sym__] = ACTIONS(402),
    [anon_sym_COLON] = ACTIONS(402),
    [anon_sym_PIPE] = ACTIONS(402),
    [anon_sym_BANG] = ACTIONS(402),
    [sym__variable_pattern] = ACTIONS(402),
    [sym__constructor_pattern] = ACTIONS(402),
    [anon_sym_DOT] = ACTIONS(402),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(402),
    [anon_sym_SQUOTE] = ACTIONS(402),
    [anon_sym_DQUOTE] = ACTIONS(402),
    [anon_sym_POUND] = ACTIONS(402),
    [anon_sym_DOLLAR] = ACTIONS(402),
    [anon_sym_PERCENT] = ACTIONS(402),
    [anon_sym_AMP] = ACTIONS(402),
    [anon_sym_1] = ACTIONS(402),
    [anon_sym_PLUS] = ACTIONS(402),
    [anon_sym_SLASH] = ACTIONS(402),
    [anon_sym_LT] = ACTIONS(402),
    [anon_sym_GT] = ACTIONS(402),
    [anon_sym_QMARK] = ACTIONS(402),
    [anon_sym_CARET] = ACTIONS(402),
    [anon_sym_TILDE] = ACTIONS(402),
    [anon_sym_BSLASH] = ACTIONS(402),
    [sym__integer_literal] = ACTIONS(402),
    [sym__octal_literal] = ACTIONS(402),
    [sym__hexidecimal_literal] = ACTIONS(402),
  },
  [105] = {
    [anon_sym_LBRACE] = ACTIONS(404),
    [sym_comment] = ACTIONS(54),
  },
  [106] = {
    [anon_sym_LBRACE] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_EQ] = ACTIONS(190),
    [anon_sym_AT] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym__] = ACTIONS(190),
    [anon_sym_COLON] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(190),
    [anon_sym_BANG] = ACTIONS(190),
    [sym__variable_pattern] = ACTIONS(190),
    [sym__constructor_pattern] = ACTIONS(190),
    [anon_sym_DOT] = ACTIONS(190),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(190),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(190),
    [anon_sym_POUND] = ACTIONS(190),
    [anon_sym_DOLLAR] = ACTIONS(190),
    [anon_sym_PERCENT] = ACTIONS(190),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_1] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(190),
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
  [107] = {
    [sym_variable_identifier] = STATE(179),
    [aux_sym_type_class_repeat1] = STATE(207),
    [anon_sym_LBRACE] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_EQ] = ACTIONS(190),
    [anon_sym_AT] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym__] = ACTIONS(190),
    [anon_sym_COLON] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(190),
    [anon_sym_BANG] = ACTIONS(190),
    [sym__variable_pattern] = ACTIONS(190),
    [sym__constructor_pattern] = ACTIONS(190),
    [anon_sym_DOT] = ACTIONS(190),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(190),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(190),
    [anon_sym_POUND] = ACTIONS(190),
    [anon_sym_DOLLAR] = ACTIONS(190),
    [anon_sym_PERCENT] = ACTIONS(190),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_1] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(190),
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
  [108] = {
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(196),
    [anon_sym_AT] = ACTIONS(196),
    [anon_sym_DASH] = ACTIONS(196),
    [anon_sym__] = ACTIONS(196),
    [anon_sym_COLON] = ACTIONS(196),
    [anon_sym_PIPE] = ACTIONS(196),
    [anon_sym_BANG] = ACTIONS(196),
    [sym__variable_pattern] = ACTIONS(196),
    [sym__constructor_pattern] = ACTIONS(196),
    [anon_sym_DOT] = ACTIONS(196),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(196),
    [anon_sym_DQUOTE] = ACTIONS(196),
    [anon_sym_POUND] = ACTIONS(196),
    [anon_sym_DOLLAR] = ACTIONS(196),
    [anon_sym_PERCENT] = ACTIONS(196),
    [anon_sym_AMP] = ACTIONS(196),
    [anon_sym_1] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(196),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(196),
    [anon_sym_QMARK] = ACTIONS(196),
    [anon_sym_CARET] = ACTIONS(196),
    [anon_sym_TILDE] = ACTIONS(196),
    [anon_sym_BSLASH] = ACTIONS(196),
    [sym__integer_literal] = ACTIONS(196),
    [sym__octal_literal] = ACTIONS(196),
    [sym__hexidecimal_literal] = ACTIONS(196),
  },
  [109] = {
    [sym__function_pattern] = STATE(208),
    [sym_wildcard] = STATE(101),
    [sym__variable] = STATE(102),
    [sym_qualified_variable_identifier] = STATE(103),
    [sym_qualified_variable_symbol] = STATE(103),
    [sym_variable_symbol] = STATE(103),
    [sym__literal] = STATE(101),
    [sym__identifier] = STATE(104),
    [sym_simple_type] = STATE(105),
    [sym_variable_identifier] = STATE(106),
    [sym_constructor_identifier] = STATE(107),
    [sym_integer] = STATE(97),
    [sym_char] = STATE(97),
    [sym_string] = STATE(97),
    [sym__symbol] = STATE(108),
    [aux_sym__function_pattern_repeat1] = STATE(110),
    [aux_sym_variable_symbol_repeat1] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_EQ] = ACTIONS(406),
    [anon_sym_AT] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym__] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_BANG] = ACTIONS(162),
    [sym__variable_pattern] = ACTIONS(166),
    [sym__constructor_pattern] = ACTIONS(168),
    [anon_sym_DOT] = ACTIONS(162),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(170),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_DOLLAR] = ACTIONS(162),
    [anon_sym_PERCENT] = ACTIONS(162),
    [anon_sym_AMP] = ACTIONS(162),
    [anon_sym_1] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(162),
    [anon_sym_QMARK] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(162),
    [anon_sym_BSLASH] = ACTIONS(162),
    [sym__integer_literal] = ACTIONS(84),
    [sym__octal_literal] = ACTIONS(84),
    [sym__hexidecimal_literal] = ACTIONS(84),
  },
  [110] = {
    [sym__identifier] = STATE(210),
    [sym_variable_identifier] = STATE(106),
    [sym_constructor_identifier] = STATE(106),
    [anon_sym_LPAREN] = ACTIONS(398),
    [anon_sym_EQ] = ACTIONS(398),
    [anon_sym_AT] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(398),
    [anon_sym__] = ACTIONS(398),
    [anon_sym_COLON] = ACTIONS(398),
    [anon_sym_PIPE] = ACTIONS(398),
    [anon_sym_BANG] = ACTIONS(398),
    [sym__variable_pattern] = ACTIONS(398),
    [sym__constructor_pattern] = ACTIONS(398),
    [anon_sym_DOT] = ACTIONS(398),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(398),
    [anon_sym_SQUOTE] = ACTIONS(398),
    [anon_sym_DQUOTE] = ACTIONS(398),
    [anon_sym_POUND] = ACTIONS(398),
    [anon_sym_DOLLAR] = ACTIONS(398),
    [anon_sym_PERCENT] = ACTIONS(398),
    [anon_sym_AMP] = ACTIONS(398),
    [anon_sym_1] = ACTIONS(398),
    [anon_sym_PLUS] = ACTIONS(398),
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
  [111] = {
    [sym__symbol] = STATE(212),
    [anon_sym_LPAREN] = ACTIONS(202),
    [anon_sym_RPAREN] = ACTIONS(408),
    [anon_sym_EQ] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym__] = ACTIONS(202),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_BANG] = ACTIONS(162),
    [sym__variable_pattern] = ACTIONS(202),
    [sym__constructor_pattern] = ACTIONS(202),
    [anon_sym_DOT] = ACTIONS(162),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(202),
    [anon_sym_SQUOTE] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(202),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_DOLLAR] = ACTIONS(162),
    [anon_sym_PERCENT] = ACTIONS(162),
    [anon_sym_AMP] = ACTIONS(162),
    [anon_sym_1] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(162),
    [anon_sym_QMARK] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(162),
    [anon_sym_BSLASH] = ACTIONS(162),
    [sym__integer_literal] = ACTIONS(202),
    [sym__octal_literal] = ACTIONS(202),
    [sym__hexidecimal_literal] = ACTIONS(202),
  },
  [112] = {
    [sym_type] = STATE(218),
    [sym__generic_type_constructor] = STATE(219),
    [sym_tupling_constructor] = STATE(214),
    [sym_tuple] = STATE(219),
    [sym_list] = STATE(219),
    [sym_parenthesized_constructor] = STATE(219),
    [sym_context] = STATE(220),
    [sym_class] = STATE(221),
    [sym_variable_identifier] = STATE(222),
    [sym_constructor_identifier] = STATE(143),
    [sym__type_constructors] = STATE(214),
    [sym_qualified_type_constructor] = STATE(223),
    [anon_sym_LPAREN] = ACTIONS(410),
    [sym_unit_type] = ACTIONS(412),
    [sym_list_constructor] = ACTIONS(412),
    [sym_function_constructor] = ACTIONS(412),
    [anon_sym_LBRACK] = ACTIONS(414),
    [sym__variable_pattern] = ACTIONS(416),
    [sym__constructor_pattern] = ACTIONS(418),
    [sym_module_identifier] = ACTIONS(420),
    [sym_comment] = ACTIONS(54),
  },
  [113] = {
    [sym__layout_semicolon] = ACTIONS(422),
    [anon_sym_SEMI] = ACTIONS(424),
    [sym_comment] = ACTIONS(54),
  },
  [114] = {
    [sym__layout_semicolon] = ACTIONS(210),
    [anon_sym_SEMI] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(212),
    [anon_sym_EQ] = ACTIONS(212),
    [anon_sym_AT] = ACTIONS(212),
    [anon_sym_DASH] = ACTIONS(212),
    [anon_sym__] = ACTIONS(212),
    [anon_sym_COLON] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_BANG] = ACTIONS(212),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(212),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(212),
    [anon_sym_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [anon_sym_POUND] = ACTIONS(212),
    [anon_sym_DOLLAR] = ACTIONS(212),
    [anon_sym_PERCENT] = ACTIONS(212),
    [anon_sym_AMP] = ACTIONS(212),
    [anon_sym_1] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(212),
    [anon_sym_SLASH] = ACTIONS(212),
    [anon_sym_LT] = ACTIONS(212),
    [anon_sym_GT] = ACTIONS(212),
    [anon_sym_QMARK] = ACTIONS(212),
    [anon_sym_CARET] = ACTIONS(212),
    [anon_sym_TILDE] = ACTIONS(212),
    [anon_sym_BSLASH] = ACTIONS(212),
    [sym__integer_literal] = ACTIONS(212),
    [sym__octal_literal] = ACTIONS(212),
    [sym__hexidecimal_literal] = ACTIONS(212),
  },
  [115] = {
    [sym__layout_semicolon] = ACTIONS(426),
    [anon_sym_SEMI] = ACTIONS(428),
    [anon_sym_LPAREN] = ACTIONS(428),
    [anon_sym_COMMA] = ACTIONS(428),
    [anon_sym_RPAREN] = ACTIONS(428),
    [anon_sym_EQ] = ACTIONS(428),
    [anon_sym_AT] = ACTIONS(428),
    [anon_sym_DASH] = ACTIONS(428),
    [anon_sym__] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(428),
    [anon_sym_PIPE] = ACTIONS(428),
    [anon_sym_BANG] = ACTIONS(428),
    [sym__variable_pattern] = ACTIONS(428),
    [sym__constructor_pattern] = ACTIONS(428),
    [anon_sym_DOT] = ACTIONS(428),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(428),
    [anon_sym_SQUOTE] = ACTIONS(428),
    [anon_sym_DQUOTE] = ACTIONS(428),
    [anon_sym_POUND] = ACTIONS(428),
    [anon_sym_DOLLAR] = ACTIONS(428),
    [anon_sym_PERCENT] = ACTIONS(428),
    [anon_sym_AMP] = ACTIONS(428),
    [anon_sym_1] = ACTIONS(428),
    [anon_sym_PLUS] = ACTIONS(428),
    [anon_sym_SLASH] = ACTIONS(428),
    [anon_sym_LT] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(428),
    [anon_sym_QMARK] = ACTIONS(428),
    [anon_sym_CARET] = ACTIONS(428),
    [anon_sym_TILDE] = ACTIONS(428),
    [anon_sym_BSLASH] = ACTIONS(428),
    [sym__integer_literal] = ACTIONS(428),
    [sym__octal_literal] = ACTIONS(428),
    [sym__hexidecimal_literal] = ACTIONS(428),
  },
  [116] = {
    [sym_declarations] = STATE(227),
    [sym__layout_open_brace] = ACTIONS(430),
    [anon_sym_LBRACE] = ACTIONS(432),
    [sym_comment] = ACTIONS(54),
  },
  [117] = {
    [sym_export] = STATE(229),
    [sym__identifier] = STATE(230),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [anon_sym_RPAREN] = ACTIONS(434),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [118] = {
    [anon_sym_where] = ACTIONS(436),
    [sym_comment] = ACTIONS(54),
  },
  [119] = {
    [sym__layout_semicolon] = ACTIONS(438),
    [anon_sym_SEMI] = ACTIONS(440),
    [anon_sym_LPAREN] = ACTIONS(440),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_AT] = ACTIONS(440),
    [anon_sym_DASH] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_BANG] = ACTIONS(440),
    [sym__variable_pattern] = ACTIONS(440),
    [sym__constructor_pattern] = ACTIONS(440),
    [anon_sym_DOT] = ACTIONS(440),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(440),
    [anon_sym_SQUOTE] = ACTIONS(440),
    [anon_sym_DQUOTE] = ACTIONS(440),
    [anon_sym_POUND] = ACTIONS(440),
    [anon_sym_DOLLAR] = ACTIONS(440),
    [anon_sym_PERCENT] = ACTIONS(440),
    [anon_sym_AMP] = ACTIONS(440),
    [anon_sym_1] = ACTIONS(440),
    [anon_sym_PLUS] = ACTIONS(440),
    [anon_sym_SLASH] = ACTIONS(440),
    [anon_sym_LT] = ACTIONS(440),
    [anon_sym_GT] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_CARET] = ACTIONS(440),
    [anon_sym_TILDE] = ACTIONS(440),
    [anon_sym_BSLASH] = ACTIONS(440),
    [sym__integer_literal] = ACTIONS(440),
    [sym__octal_literal] = ACTIONS(440),
    [sym__hexidecimal_literal] = ACTIONS(440),
  },
  [120] = {
    [sym_import_specification] = STATE(233),
    [sym__layout_semicolon] = ACTIONS(442),
    [anon_sym_SEMI] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_as] = ACTIONS(446),
    [anon_sym_hiding] = ACTIONS(226),
    [sym_comment] = ACTIONS(54),
  },
  [121] = {
    [sym__identifier] = STATE(235),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [anon_sym_RPAREN] = ACTIONS(448),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [122] = {
    [sym_module_identifier] = ACTIONS(450),
    [sym_comment] = ACTIONS(54),
  },
  [123] = {
    [anon_sym_LPAREN] = ACTIONS(452),
    [sym_comment] = ACTIONS(54),
  },
  [124] = {
    [sym__layout_semicolon] = ACTIONS(442),
    [anon_sym_SEMI] = ACTIONS(444),
    [sym_comment] = ACTIONS(54),
  },
  [125] = {
    [anon_sym_unsafe] = ACTIONS(454),
    [anon_sym_safe] = ACTIONS(454),
    [sym__variable_pattern] = ACTIONS(456),
    [sym__constructor_pattern] = ACTIONS(456),
    [sym_comment] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(454),
  },
  [126] = {
    [sym_safety] = STATE(240),
    [sym_type_signature] = STATE(241),
    [sym__identifier] = STATE(242),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [sym_string] = STATE(243),
    [anon_sym_unsafe] = ACTIONS(458),
    [anon_sym_safe] = ACTIONS(458),
    [sym__variable_pattern] = ACTIONS(258),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(460),
  },
  [127] = {
    [sym__layout_semicolon] = ACTIONS(462),
    [anon_sym_SEMI] = ACTIONS(464),
    [sym_comment] = ACTIONS(54),
  },
  [128] = {
    [anon_sym_where] = ACTIONS(466),
    [anon_sym_RBRACE] = ACTIONS(466),
    [anon_sym_LPAREN] = ACTIONS(466),
    [anon_sym_COMMA] = ACTIONS(466),
    [anon_sym_RPAREN] = ACTIONS(466),
    [anon_sym_BQUOTE] = ACTIONS(466),
    [anon_sym_COLON_COLON] = ACTIONS(466),
    [anon_sym_DASH_GT] = ACTIONS(466),
    [anon_sym_EQ_GT] = ACTIONS(466),
    [sym__variable_pattern] = ACTIONS(92),
    [sym_comment] = ACTIONS(54),
  },
  [129] = {
    [aux_sym_export_repeat1] = STATE(246),
    [anon_sym_COMMA] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(470),
    [sym_comment] = ACTIONS(54),
  },
  [130] = {
    [anon_sym_RBRACE] = ACTIONS(192),
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(192),
    [anon_sym_RPAREN] = ACTIONS(192),
    [anon_sym_EQ] = ACTIONS(192),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_COLON_COLON] = ACTIONS(192),
    [sym_comment] = ACTIONS(54),
  },
  [131] = {
    [sym__layout_semicolon] = ACTIONS(472),
    [anon_sym_SEMI] = ACTIONS(474),
    [sym_comment] = ACTIONS(54),
  },
  [132] = {
    [sym__symbol] = STATE(32),
    [aux_sym_variable_symbol_repeat1] = STATE(154),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
  },
  [133] = {
    [sym__layout_semicolon] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(466),
    [anon_sym_EQ] = ACTIONS(466),
    [anon_sym_DASH_GT] = ACTIONS(466),
    [anon_sym_EQ_GT] = ACTIONS(466),
    [anon_sym_PIPE] = ACTIONS(466),
    [anon_sym_deriving] = ACTIONS(466),
    [anon_sym_BANG] = ACTIONS(466),
    [sym__variable_pattern] = ACTIONS(92),
    [sym__constructor_pattern] = ACTIONS(92),
    [sym_comment] = ACTIONS(54),
  },
  [134] = {
    [sym_variable_symbol] = STATE(248),
    [sym__symbol] = STATE(32),
    [aux_sym_variable_symbol_repeat1] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(238),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [sym__variable_pattern] = ACTIONS(476),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
  },
  [135] = {
    [sym__layout_semicolon] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(478),
    [sym_comment] = ACTIONS(54),
  },
  [136] = {
    [sym__layout_semicolon] = ACTIONS(480),
    [anon_sym_SEMI] = ACTIONS(482),
    [sym_comment] = ACTIONS(54),
  },
  [137] = {
    [sym__layout_close_brace] = ACTIONS(484),
    [anon_sym_LPAREN] = ACTIONS(486),
    [anon_sym_EQ] = ACTIONS(486),
    [anon_sym_AT] = ACTIONS(486),
    [anon_sym_DASH] = ACTIONS(486),
    [anon_sym_do] = ACTIONS(486),
    [anon_sym_COLON] = ACTIONS(486),
    [anon_sym_PIPE] = ACTIONS(486),
    [anon_sym_BANG] = ACTIONS(486),
    [sym__variable_pattern] = ACTIONS(486),
    [sym__constructor_pattern] = ACTIONS(486),
    [anon_sym_DOT] = ACTIONS(486),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(486),
    [anon_sym_SQUOTE] = ACTIONS(486),
    [anon_sym_DQUOTE] = ACTIONS(486),
    [anon_sym_POUND] = ACTIONS(486),
    [anon_sym_DOLLAR] = ACTIONS(486),
    [anon_sym_PERCENT] = ACTIONS(486),
    [anon_sym_AMP] = ACTIONS(486),
    [anon_sym_1] = ACTIONS(486),
    [anon_sym_PLUS] = ACTIONS(486),
    [anon_sym_SLASH] = ACTIONS(486),
    [anon_sym_LT] = ACTIONS(486),
    [anon_sym_GT] = ACTIONS(486),
    [anon_sym_QMARK] = ACTIONS(486),
    [anon_sym_CARET] = ACTIONS(486),
    [anon_sym_TILDE] = ACTIONS(486),
    [anon_sym_BSLASH] = ACTIONS(486),
    [sym__integer_literal] = ACTIONS(486),
    [sym__octal_literal] = ACTIONS(486),
    [sym__hexidecimal_literal] = ACTIONS(486),
  },
  [138] = {
    [sym__variable] = STATE(27),
    [sym_qualified_variable_identifier] = STATE(135),
    [sym_qualified_variable_symbol] = STATE(135),
    [sym__expression] = STATE(136),
    [sym_do_expression] = STATE(27),
    [sym__statement] = STATE(251),
    [sym_variable_symbol] = STATE(135),
    [sym__literal] = STATE(27),
    [sym_variable_identifier] = STATE(135),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(32),
    [aux_sym_variable_symbol_repeat1] = STATE(59),
    [sym__layout_close_brace] = ACTIONS(488),
    [anon_sym_LPAREN] = ACTIONS(238),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_do] = ACTIONS(24),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [sym__variable_pattern] = ACTIONS(240),
    [sym__constructor_pattern] = ACTIONS(242),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(44),
    [anon_sym_SQUOTE] = ACTIONS(46),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
    [sym__integer_literal] = ACTIONS(50),
    [sym__octal_literal] = ACTIONS(50),
    [sym__hexidecimal_literal] = ACTIONS(50),
  },
  [139] = {
    [sym__layout_semicolon] = ACTIONS(490),
    [anon_sym_SEMI] = ACTIONS(492),
    [sym_comment] = ACTIONS(54),
  },
  [140] = {
    [anon_sym_RBRACE] = ACTIONS(486),
    [anon_sym_LPAREN] = ACTIONS(486),
    [anon_sym_EQ] = ACTIONS(486),
    [anon_sym_AT] = ACTIONS(486),
    [anon_sym_DASH] = ACTIONS(486),
    [anon_sym_do] = ACTIONS(486),
    [anon_sym_COLON] = ACTIONS(486),
    [anon_sym_PIPE] = ACTIONS(486),
    [anon_sym_BANG] = ACTIONS(486),
    [sym__variable_pattern] = ACTIONS(486),
    [sym__constructor_pattern] = ACTIONS(486),
    [anon_sym_DOT] = ACTIONS(486),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(486),
    [anon_sym_SQUOTE] = ACTIONS(486),
    [anon_sym_DQUOTE] = ACTIONS(486),
    [anon_sym_POUND] = ACTIONS(486),
    [anon_sym_DOLLAR] = ACTIONS(486),
    [anon_sym_PERCENT] = ACTIONS(486),
    [anon_sym_AMP] = ACTIONS(486),
    [anon_sym_1] = ACTIONS(486),
    [anon_sym_PLUS] = ACTIONS(486),
    [anon_sym_SLASH] = ACTIONS(486),
    [anon_sym_LT] = ACTIONS(486),
    [anon_sym_GT] = ACTIONS(486),
    [anon_sym_QMARK] = ACTIONS(486),
    [anon_sym_CARET] = ACTIONS(486),
    [anon_sym_TILDE] = ACTIONS(486),
    [anon_sym_BSLASH] = ACTIONS(486),
    [sym__integer_literal] = ACTIONS(486),
    [sym__octal_literal] = ACTIONS(486),
    [sym__hexidecimal_literal] = ACTIONS(486),
  },
  [141] = {
    [sym__variable] = STATE(27),
    [sym_qualified_variable_identifier] = STATE(135),
    [sym_qualified_variable_symbol] = STATE(135),
    [sym__expression] = STATE(139),
    [sym_do_expression] = STATE(27),
    [sym__statement] = STATE(253),
    [sym_variable_symbol] = STATE(135),
    [sym__literal] = STATE(27),
    [sym_variable_identifier] = STATE(135),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(32),
    [aux_sym_variable_symbol_repeat1] = STATE(59),
    [anon_sym_RBRACE] = ACTIONS(494),
    [anon_sym_LPAREN] = ACTIONS(238),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_do] = ACTIONS(24),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [sym__variable_pattern] = ACTIONS(240),
    [sym__constructor_pattern] = ACTIONS(242),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(44),
    [anon_sym_SQUOTE] = ACTIONS(46),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
    [sym__integer_literal] = ACTIONS(50),
    [sym__octal_literal] = ACTIONS(50),
    [sym__hexidecimal_literal] = ACTIONS(50),
  },
  [142] = {
    [aux_sym_context_repeat1] = STATE(256),
    [anon_sym_COMMA] = ACTIONS(496),
    [anon_sym_RPAREN] = ACTIONS(498),
    [sym_comment] = ACTIONS(54),
  },
  [143] = {
    [sym_variable_identifier] = STATE(257),
    [anon_sym_LPAREN] = ACTIONS(256),
    [sym__variable_pattern] = ACTIONS(234),
    [sym_comment] = ACTIONS(54),
  },
  [144] = {
    [sym_variable_identifier] = STATE(259),
    [aux_sym_type_class_repeat1] = STATE(260),
    [anon_sym_where] = ACTIONS(500),
    [sym__variable_pattern] = ACTIONS(258),
    [sym_comment] = ACTIONS(54),
  },
  [145] = {
    [sym__constructor_pattern] = ACTIONS(502),
    [sym_comment] = ACTIONS(54),
  },
  [146] = {
    [sym_general_declarations] = STATE(263),
    [sym__layout_open_brace] = ACTIONS(504),
    [anon_sym_LBRACE] = ACTIONS(506),
    [sym_comment] = ACTIONS(54),
  },
  [147] = {
    [sym_variable_identifier] = STATE(179),
    [aux_sym_type_class_repeat1] = STATE(264),
    [sym__variable_pattern] = ACTIONS(298),
    [sym_comment] = ACTIONS(54),
  },
  [148] = {
    [anon_sym_where] = ACTIONS(508),
    [anon_sym_EQ_GT] = ACTIONS(510),
    [sym__variable_pattern] = ACTIONS(512),
    [sym_comment] = ACTIONS(54),
  },
  [149] = {
    [sym_variable_identifier] = STATE(265),
    [anon_sym_where] = ACTIONS(500),
    [sym__variable_pattern] = ACTIONS(258),
    [sym_comment] = ACTIONS(54),
  },
  [150] = {
    [sym_variable_identifier] = STATE(259),
    [aux_sym_type_class_repeat1] = STATE(267),
    [anon_sym_where] = ACTIONS(514),
    [sym__variable_pattern] = ACTIONS(258),
    [sym_comment] = ACTIONS(54),
  },
  [151] = {
    [sym_general_declarations] = STATE(268),
    [sym__layout_open_brace] = ACTIONS(504),
    [anon_sym_LBRACE] = ACTIONS(506),
    [sym_comment] = ACTIONS(54),
  },
  [152] = {
    [sym_variable_identifier] = STATE(265),
    [anon_sym_where] = ACTIONS(514),
    [sym__variable_pattern] = ACTIONS(258),
    [sym_comment] = ACTIONS(54),
  },
  [153] = {
    [sym__symbol] = STATE(32),
    [aux_sym_variable_symbol_repeat1] = STATE(270),
    [sym__layout_semicolon] = ACTIONS(516),
    [anon_sym_SEMI] = ACTIONS(518),
    [anon_sym_COMMA] = ACTIONS(518),
    [anon_sym_RPAREN] = ACTIONS(520),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
  },
  [154] = {
    [sym__symbol] = STATE(115),
    [sym__layout_semicolon] = ACTIONS(210),
    [anon_sym_SEMI] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(212),
    [anon_sym_RPAREN] = ACTIONS(522),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
  },
  [155] = {
    [anon_sym_BQUOTE] = ACTIONS(524),
    [sym_comment] = ACTIONS(54),
  },
  [156] = {
    [sym__layout_semicolon] = ACTIONS(516),
    [anon_sym_SEMI] = ACTIONS(526),
    [anon_sym_COMMA] = ACTIONS(526),
    [sym_comment] = ACTIONS(54),
  },
  [157] = {
    [sym__symbol] = STATE(115),
    [sym__layout_semicolon] = ACTIONS(516),
    [anon_sym_SEMI] = ACTIONS(518),
    [anon_sym_COMMA] = ACTIONS(518),
    [anon_sym_RPAREN] = ACTIONS(520),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
  },
  [158] = {
    [sym__op] = STATE(273),
    [sym_variable_symbol] = STATE(57),
    [sym_constructor_symbol] = STATE(57),
    [sym__symbol] = STATE(32),
    [aux_sym_variable_symbol_repeat1] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_COLON] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
  },
  [159] = {
    [sym__layout_semicolon] = ACTIONS(528),
    [anon_sym_SEMI] = ACTIONS(530),
    [anon_sym_COMMA] = ACTIONS(532),
    [sym_comment] = ACTIONS(54),
  },
  [160] = {
    [aux_sym_fixity_repeat1] = STATE(275),
    [sym__layout_semicolon] = ACTIONS(528),
    [anon_sym_SEMI] = ACTIONS(530),
    [anon_sym_COMMA] = ACTIONS(274),
    [sym_comment] = ACTIONS(54),
  },
  [161] = {
    [sym__layout_semicolon] = ACTIONS(210),
    [anon_sym_SEMI] = ACTIONS(534),
    [anon_sym_COMMA] = ACTIONS(534),
    [sym_comment] = ACTIONS(54),
  },
  [162] = {
    [sym_constructors] = STATE(277),
    [sym_constructor] = STATE(167),
    [sym_deriving] = STATE(278),
    [sym_constructor_identifier] = STATE(169),
    [sym__layout_semicolon] = ACTIONS(536),
    [anon_sym_SEMI] = ACTIONS(538),
    [anon_sym_EQ] = ACTIONS(540),
    [anon_sym_deriving] = ACTIONS(288),
    [sym__constructor_pattern] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [163] = {
    [sym_variable_identifier] = STATE(280),
    [aux_sym_type_class_repeat1] = STATE(171),
    [sym__layout_semicolon] = ACTIONS(290),
    [anon_sym_SEMI] = ACTIONS(292),
    [anon_sym_EQ] = ACTIONS(292),
    [anon_sym_deriving] = ACTIONS(292),
    [sym__variable_pattern] = ACTIONS(542),
    [sym__constructor_pattern] = ACTIONS(294),
    [sym_comment] = ACTIONS(54),
  },
  [164] = {
    [sym_constructors] = STATE(277),
    [sym_constructor] = STATE(167),
    [sym_deriving] = STATE(278),
    [sym_constructor_identifier] = STATE(169),
    [sym__layout_semicolon] = ACTIONS(536),
    [anon_sym_SEMI] = ACTIONS(538),
    [anon_sym_deriving] = ACTIONS(288),
    [sym__constructor_pattern] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [165] = {
    [sym__identifier] = STATE(282),
    [sym_variable_identifier] = STATE(31),
    [sym_constructor_identifier] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(544),
    [sym__variable_pattern] = ACTIONS(416),
    [sym__constructor_pattern] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [166] = {
    [sym_deriving] = STATE(278),
    [sym__layout_semicolon] = ACTIONS(536),
    [anon_sym_SEMI] = ACTIONS(538),
    [anon_sym_deriving] = ACTIONS(288),
    [sym_comment] = ACTIONS(54),
  },
  [167] = {
    [aux_sym_constructors_repeat1] = STATE(284),
    [sym__layout_semicolon] = ACTIONS(546),
    [anon_sym_SEMI] = ACTIONS(548),
    [anon_sym_PIPE] = ACTIONS(550),
    [anon_sym_deriving] = ACTIONS(548),
    [sym_comment] = ACTIONS(54),
  },
  [168] = {
    [sym__layout_semicolon] = ACTIONS(536),
    [anon_sym_SEMI] = ACTIONS(538),
    [sym_comment] = ACTIONS(54),
  },
  [169] = {
    [sym_strict] = STATE(287),
    [sym__identifier] = STATE(287),
    [sym_variable_identifier] = STATE(288),
    [sym_constructor_identifier] = STATE(288),
    [sym_fields] = STATE(289),
    [aux_sym_constructor_repeat1] = STATE(290),
    [sym__layout_semicolon] = ACTIONS(552),
    [anon_sym_SEMI] = ACTIONS(554),
    [anon_sym_LBRACE] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(554),
    [anon_sym_deriving] = ACTIONS(554),
    [anon_sym_BANG] = ACTIONS(558),
    [sym__variable_pattern] = ACTIONS(240),
    [sym__constructor_pattern] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [170] = {
    [sym__layout_semicolon] = ACTIONS(560),
    [anon_sym_SEMI] = ACTIONS(508),
    [anon_sym_EQ] = ACTIONS(508),
    [anon_sym_EQ_GT] = ACTIONS(510),
    [anon_sym_deriving] = ACTIONS(508),
    [sym__variable_pattern] = ACTIONS(512),
    [sym__constructor_pattern] = ACTIONS(512),
    [sym_comment] = ACTIONS(54),
  },
  [171] = {
    [sym_variable_identifier] = STATE(291),
    [sym__layout_semicolon] = ACTIONS(562),
    [anon_sym_SEMI] = ACTIONS(564),
    [anon_sym_EQ] = ACTIONS(564),
    [anon_sym_deriving] = ACTIONS(564),
    [sym__variable_pattern] = ACTIONS(542),
    [sym__constructor_pattern] = ACTIONS(566),
    [sym_comment] = ACTIONS(54),
  },
  [172] = {
    [anon_sym_EQ] = ACTIONS(568),
    [sym_comment] = ACTIONS(54),
  },
  [173] = {
    [sym_new_constructor] = STATE(293),
    [sym_constructor_identifier] = STATE(294),
    [sym__constructor_pattern] = ACTIONS(88),
    [sym_comment] = ACTIONS(54),
  },
  [174] = {
    [anon_sym_LBRACE] = ACTIONS(466),
    [anon_sym_LPAREN] = ACTIONS(466),
    [anon_sym_COMMA] = ACTIONS(466),
    [anon_sym_RPAREN] = ACTIONS(466),
    [anon_sym_EQ] = ACTIONS(466),
    [anon_sym_DASH_GT] = ACTIONS(466),
    [sym_unit_type] = ACTIONS(466),
    [sym_list_constructor] = ACTIONS(466),
    [sym_function_constructor] = ACTIONS(466),
    [anon_sym_LBRACK] = ACTIONS(466),
    [anon_sym_RBRACK] = ACTIONS(466),
    [anon_sym_EQ_GT] = ACTIONS(466),
    [sym__variable_pattern] = ACTIONS(466),
    [sym__constructor_pattern] = ACTIONS(92),
    [sym_module_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(54),
  },
  [175] = {
    [anon_sym_EQ] = ACTIONS(508),
    [anon_sym_EQ_GT] = ACTIONS(510),
    [sym__variable_pattern] = ACTIONS(508),
    [sym_comment] = ACTIONS(54),
  },
  [176] = {
    [sym_variable_identifier] = STATE(295),
    [anon_sym_EQ] = ACTIONS(564),
    [sym__variable_pattern] = ACTIONS(302),
    [sym_comment] = ACTIONS(54),
  },
  [177] = {
    [sym_type] = STATE(298),
    [sym__generic_type_constructor] = STATE(219),
    [sym_tupling_constructor] = STATE(214),
    [sym_tuple] = STATE(219),
    [sym_list] = STATE(219),
    [sym_parenthesized_constructor] = STATE(219),
    [sym_variable_identifier] = STATE(222),
    [sym__type_constructors] = STATE(214),
    [sym_qualified_type_constructor] = STATE(223),
    [anon_sym_LPAREN] = ACTIONS(570),
    [sym_unit_type] = ACTIONS(412),
    [sym_list_constructor] = ACTIONS(412),
    [sym_function_constructor] = ACTIONS(412),
    [anon_sym_LBRACK] = ACTIONS(414),
    [sym__variable_pattern] = ACTIONS(416),
    [sym__constructor_pattern] = ACTIONS(572),
    [sym_module_identifier] = ACTIONS(420),
    [sym_comment] = ACTIONS(54),
  },
  [178] = {
    [anon_sym_EQ] = ACTIONS(466),
    [sym__variable_pattern] = ACTIONS(466),
    [sym_comment] = ACTIONS(54),
  },
  [179] = {
    [anon_sym_LBRACE] = ACTIONS(508),
    [anon_sym_LPAREN] = ACTIONS(508),
    [anon_sym_COMMA] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(508),
    [anon_sym_EQ] = ACTIONS(508),
    [anon_sym_DASH_GT] = ACTIONS(508),
    [sym_unit_type] = ACTIONS(508),
    [sym_list_constructor] = ACTIONS(508),
    [sym_function_constructor] = ACTIONS(508),
    [anon_sym_LBRACK] = ACTIONS(508),
    [anon_sym_RBRACK] = ACTIONS(508),
    [sym__variable_pattern] = ACTIONS(508),
    [sym__constructor_pattern] = ACTIONS(512),
    [sym_module_identifier] = ACTIONS(512),
    [sym_comment] = ACTIONS(54),
  },
  [180] = {
    [sym__layout_semicolon] = ACTIONS(574),
    [anon_sym_SEMI] = ACTIONS(576),
    [sym__variable_pattern] = ACTIONS(576),
    [sym__constructor_pattern] = ACTIONS(578),
    [sym_comment] = ACTIONS(54),
    [sym_float] = ACTIONS(578),
    [anon_sym_SQUOTE] = ACTIONS(576),
    [anon_sym_DQUOTE] = ACTIONS(576),
    [sym__integer_literal] = ACTIONS(576),
    [sym__octal_literal] = ACTIONS(576),
    [sym__hexidecimal_literal] = ACTIONS(576),
  },
  [181] = {
    [sym_comment] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(580),
  },
  [182] = {
    [sym_comment] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(582),
  },
  [183] = {
    [sym__cntrl] = STATE(300),
    [anon_sym_AT] = ACTIONS(584),
    [anon_sym__] = ACTIONS(584),
    [anon_sym_LBRACK] = ACTIONS(584),
    [anon_sym_RBRACK] = ACTIONS(584),
    [sym_comment] = ACTIONS(42),
    [sym__ascii_large] = ACTIONS(584),
    [anon_sym_CARET] = ACTIONS(584),
    [anon_sym_BSLASH] = ACTIONS(584),
  },
  [184] = {
    [aux_sym__escape_repeat1] = STATE(302),
    [sym_comment] = ACTIONS(54),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(586),
  },
  [185] = {
    [aux_sym__escape_repeat2] = STATE(304),
    [sym_comment] = ACTIONS(54),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(588),
  },
  [186] = {
    [sym_comment] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(590),
  },
  [187] = {
    [anon_sym_SEMI] = ACTIONS(592),
    [anon_sym_LBRACE] = ACTIONS(592),
    [anon_sym_RBRACE] = ACTIONS(592),
    [anon_sym_LPAREN] = ACTIONS(592),
    [anon_sym_RPAREN] = ACTIONS(592),
    [anon_sym_EQ] = ACTIONS(592),
    [anon_sym_AT] = ACTIONS(592),
    [anon_sym_BQUOTE] = ACTIONS(592),
    [anon_sym_DASH] = ACTIONS(592),
    [anon_sym__] = ACTIONS(592),
    [anon_sym_COLON] = ACTIONS(592),
    [anon_sym_LBRACK] = ACTIONS(592),
    [anon_sym_RBRACK] = ACTIONS(592),
    [anon_sym_PIPE] = ACTIONS(592),
    [anon_sym_BANG] = ACTIONS(592),
    [anon_sym_DOT] = ACTIONS(592),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(592),
    [anon_sym_DQUOTE] = ACTIONS(592),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(592),
    [sym__ascii_large] = ACTIONS(592),
    [anon_sym_POUND] = ACTIONS(592),
    [anon_sym_DOLLAR] = ACTIONS(592),
    [anon_sym_PERCENT] = ACTIONS(592),
    [anon_sym_AMP] = ACTIONS(592),
    [anon_sym_1] = ACTIONS(592),
    [anon_sym_PLUS] = ACTIONS(592),
    [anon_sym_SLASH] = ACTIONS(592),
    [anon_sym_LT] = ACTIONS(592),
    [anon_sym_GT] = ACTIONS(592),
    [anon_sym_QMARK] = ACTIONS(592),
    [anon_sym_CARET] = ACTIONS(592),
    [anon_sym_TILDE] = ACTIONS(592),
    [anon_sym_BSLASH] = ACTIONS(592),
    [sym__space] = ACTIONS(592),
    [sym__newline] = ACTIONS(592),
    [sym__tab] = ACTIONS(592),
    [sym__vertical_tab] = ACTIONS(592),
  },
  [188] = {
    [anon_sym_SEMI] = ACTIONS(594),
    [anon_sym_LBRACE] = ACTIONS(594),
    [anon_sym_RBRACE] = ACTIONS(594),
    [anon_sym_LPAREN] = ACTIONS(594),
    [anon_sym_RPAREN] = ACTIONS(594),
    [anon_sym_EQ] = ACTIONS(594),
    [anon_sym_AT] = ACTIONS(594),
    [anon_sym_BQUOTE] = ACTIONS(594),
    [anon_sym_DASH] = ACTIONS(594),
    [anon_sym__] = ACTIONS(594),
    [anon_sym_COLON] = ACTIONS(594),
    [anon_sym_LBRACK] = ACTIONS(594),
    [anon_sym_RBRACK] = ACTIONS(594),
    [anon_sym_PIPE] = ACTIONS(594),
    [anon_sym_BANG] = ACTIONS(594),
    [anon_sym_DOT] = ACTIONS(594),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DQUOTE] = ACTIONS(594),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(594),
    [sym__ascii_large] = ACTIONS(594),
    [anon_sym_POUND] = ACTIONS(594),
    [anon_sym_DOLLAR] = ACTIONS(594),
    [anon_sym_PERCENT] = ACTIONS(594),
    [anon_sym_AMP] = ACTIONS(594),
    [anon_sym_1] = ACTIONS(594),
    [anon_sym_PLUS] = ACTIONS(594),
    [anon_sym_SLASH] = ACTIONS(594),
    [anon_sym_LT] = ACTIONS(594),
    [anon_sym_GT] = ACTIONS(594),
    [anon_sym_QMARK] = ACTIONS(594),
    [anon_sym_CARET] = ACTIONS(594),
    [anon_sym_TILDE] = ACTIONS(594),
    [anon_sym_BSLASH] = ACTIONS(594),
    [sym__space] = ACTIONS(594),
    [sym__newline] = ACTIONS(594),
    [sym__tab] = ACTIONS(594),
    [sym__vertical_tab] = ACTIONS(594),
  },
  [189] = {
    [sym__cntrl] = STATE(306),
    [anon_sym_AT] = ACTIONS(596),
    [anon_sym__] = ACTIONS(596),
    [anon_sym_LBRACK] = ACTIONS(596),
    [anon_sym_RBRACK] = ACTIONS(596),
    [sym_comment] = ACTIONS(42),
    [sym__ascii_large] = ACTIONS(596),
    [anon_sym_CARET] = ACTIONS(596),
    [anon_sym_BSLASH] = ACTIONS(596),
  },
  [190] = {
    [aux_sym__escape_repeat1] = STATE(308),
    [sym_comment] = ACTIONS(54),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(598),
  },
  [191] = {
    [aux_sym__escape_repeat2] = STATE(310),
    [sym_comment] = ACTIONS(54),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(600),
  },
  [192] = {
    [anon_sym_SEMI] = ACTIONS(602),
    [anon_sym_LBRACE] = ACTIONS(602),
    [anon_sym_RBRACE] = ACTIONS(602),
    [anon_sym_LPAREN] = ACTIONS(602),
    [anon_sym_RPAREN] = ACTIONS(602),
    [anon_sym_EQ] = ACTIONS(602),
    [anon_sym_AT] = ACTIONS(602),
    [anon_sym_BQUOTE] = ACTIONS(602),
    [anon_sym_DASH] = ACTIONS(602),
    [anon_sym__] = ACTIONS(602),
    [anon_sym_COLON] = ACTIONS(602),
    [anon_sym_LBRACK] = ACTIONS(602),
    [anon_sym_RBRACK] = ACTIONS(602),
    [anon_sym_PIPE] = ACTIONS(602),
    [anon_sym_BANG] = ACTIONS(602),
    [anon_sym_DOT] = ACTIONS(602),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(602),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(602),
    [sym__ascii_large] = ACTIONS(602),
    [anon_sym_POUND] = ACTIONS(602),
    [anon_sym_DOLLAR] = ACTIONS(602),
    [anon_sym_PERCENT] = ACTIONS(602),
    [anon_sym_AMP] = ACTIONS(602),
    [anon_sym_1] = ACTIONS(602),
    [anon_sym_PLUS] = ACTIONS(602),
    [anon_sym_SLASH] = ACTIONS(602),
    [anon_sym_LT] = ACTIONS(602),
    [anon_sym_GT] = ACTIONS(602),
    [anon_sym_QMARK] = ACTIONS(602),
    [anon_sym_CARET] = ACTIONS(602),
    [anon_sym_TILDE] = ACTIONS(602),
    [anon_sym_BSLASH] = ACTIONS(602),
    [sym__space] = ACTIONS(602),
    [sym__newline] = ACTIONS(602),
    [sym__tab] = ACTIONS(602),
    [sym__vertical_tab] = ACTIONS(602),
  },
  [193] = {
    [anon_sym_SEMI] = ACTIONS(604),
    [anon_sym_LBRACE] = ACTIONS(604),
    [anon_sym_RBRACE] = ACTIONS(604),
    [anon_sym_LPAREN] = ACTIONS(604),
    [anon_sym_RPAREN] = ACTIONS(604),
    [anon_sym_EQ] = ACTIONS(604),
    [anon_sym_AT] = ACTIONS(604),
    [anon_sym_BQUOTE] = ACTIONS(604),
    [anon_sym_DASH] = ACTIONS(604),
    [anon_sym__] = ACTIONS(604),
    [anon_sym_COLON] = ACTIONS(604),
    [anon_sym_LBRACK] = ACTIONS(604),
    [anon_sym_RBRACK] = ACTIONS(604),
    [anon_sym_PIPE] = ACTIONS(604),
    [anon_sym_BANG] = ACTIONS(604),
    [anon_sym_DOT] = ACTIONS(604),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(604),
    [anon_sym_DQUOTE] = ACTIONS(604),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(604),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(604),
    [sym__ascii_large] = ACTIONS(604),
    [anon_sym_POUND] = ACTIONS(604),
    [anon_sym_DOLLAR] = ACTIONS(604),
    [anon_sym_PERCENT] = ACTIONS(604),
    [anon_sym_AMP] = ACTIONS(604),
    [anon_sym_1] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(604),
    [anon_sym_SLASH] = ACTIONS(604),
    [anon_sym_LT] = ACTIONS(604),
    [anon_sym_GT] = ACTIONS(604),
    [anon_sym_QMARK] = ACTIONS(604),
    [anon_sym_CARET] = ACTIONS(604),
    [anon_sym_TILDE] = ACTIONS(604),
    [anon_sym_BSLASH] = ACTIONS(604),
    [sym__space] = ACTIONS(604),
    [sym__newline] = ACTIONS(604),
    [sym__tab] = ACTIONS(604),
    [sym__vertical_tab] = ACTIONS(604),
  },
  [194] = {
    [sym__layout_semicolon] = ACTIONS(606),
    [anon_sym_SEMI] = ACTIONS(608),
    [sym__variable_pattern] = ACTIONS(608),
    [sym__constructor_pattern] = ACTIONS(610),
    [sym_comment] = ACTIONS(54),
    [sym_float] = ACTIONS(610),
    [anon_sym_SQUOTE] = ACTIONS(608),
    [anon_sym_DQUOTE] = ACTIONS(608),
    [sym__integer_literal] = ACTIONS(608),
    [sym__octal_literal] = ACTIONS(608),
    [sym__hexidecimal_literal] = ACTIONS(608),
  },
  [195] = {
    [sym__layout_semicolon] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(466),
    [anon_sym_DASH_GT] = ACTIONS(466),
    [sym__variable_pattern] = ACTIONS(466),
    [sym__constructor_pattern] = ACTIONS(92),
    [sym_comment] = ACTIONS(54),
    [sym_float] = ACTIONS(92),
    [anon_sym_SQUOTE] = ACTIONS(466),
    [anon_sym_DQUOTE] = ACTIONS(466),
    [sym__integer_literal] = ACTIONS(466),
    [sym__octal_literal] = ACTIONS(466),
    [sym__hexidecimal_literal] = ACTIONS(466),
  },
  [196] = {
    [sym__layout_semicolon] = ACTIONS(94),
    [anon_sym_SEMI] = ACTIONS(250),
    [anon_sym_DASH_GT] = ACTIONS(250),
    [sym__variable_pattern] = ACTIONS(250),
    [sym__constructor_pattern] = ACTIONS(96),
    [sym_comment] = ACTIONS(54),
    [sym_float] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [anon_sym_DQUOTE] = ACTIONS(250),
    [sym__integer_literal] = ACTIONS(250),
    [sym__octal_literal] = ACTIONS(250),
    [sym__hexidecimal_literal] = ACTIONS(250),
  },
  [197] = {
    [sym__layout_semicolon] = ACTIONS(612),
    [anon_sym_SEMI] = ACTIONS(614),
    [sym__variable_pattern] = ACTIONS(614),
    [sym__constructor_pattern] = ACTIONS(616),
    [sym_comment] = ACTIONS(54),
    [sym_float] = ACTIONS(616),
    [anon_sym_SQUOTE] = ACTIONS(614),
    [anon_sym_DQUOTE] = ACTIONS(614),
    [sym__integer_literal] = ACTIONS(614),
    [sym__octal_literal] = ACTIONS(614),
    [sym__hexidecimal_literal] = ACTIONS(614),
  },
  [198] = {
    [sym__literal] = STATE(311),
    [sym__identifier] = STATE(311),
    [sym_variable_identifier] = STATE(31),
    [sym_constructor_identifier] = STATE(31),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__layout_semicolon] = ACTIONS(618),
    [anon_sym_SEMI] = ACTIONS(620),
    [sym__variable_pattern] = ACTIONS(376),
    [sym__constructor_pattern] = ACTIONS(378),
    [sym_comment] = ACTIONS(54),
    [sym_float] = ACTIONS(44),
    [anon_sym_SQUOTE] = ACTIONS(380),
    [anon_sym_DQUOTE] = ACTIONS(382),
    [sym__integer_literal] = ACTIONS(384),
    [sym__octal_literal] = ACTIONS(384),
    [sym__hexidecimal_literal] = ACTIONS(384),
  },
  [199] = {
    [sym__symbol] = STATE(212),
    [anon_sym_LPAREN] = ACTIONS(212),
    [anon_sym_RPAREN] = ACTIONS(622),
    [anon_sym_EQ] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym__] = ACTIONS(212),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_BANG] = ACTIONS(162),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(162),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(212),
    [anon_sym_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_DOLLAR] = ACTIONS(162),
    [anon_sym_PERCENT] = ACTIONS(162),
    [anon_sym_AMP] = ACTIONS(162),
    [anon_sym_1] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(162),
    [anon_sym_QMARK] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(162),
    [anon_sym_BSLASH] = ACTIONS(162),
    [sym__integer_literal] = ACTIONS(212),
    [sym__octal_literal] = ACTIONS(212),
    [sym__hexidecimal_literal] = ACTIONS(212),
  },
  [200] = {
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_EQ] = ACTIONS(306),
    [anon_sym_AT] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym__] = ACTIONS(306),
    [anon_sym_COLON] = ACTIONS(306),
    [anon_sym_PIPE] = ACTIONS(306),
    [anon_sym_BANG] = ACTIONS(306),
    [sym__variable_pattern] = ACTIONS(306),
    [sym__constructor_pattern] = ACTIONS(306),
    [anon_sym_DOT] = ACTIONS(306),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(306),
    [anon_sym_SQUOTE] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [anon_sym_POUND] = ACTIONS(306),
    [anon_sym_DOLLAR] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(306),
    [anon_sym_1] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_LT] = ACTIONS(306),
    [anon_sym_GT] = ACTIONS(306),
    [anon_sym_QMARK] = ACTIONS(306),
    [anon_sym_CARET] = ACTIONS(306),
    [anon_sym_TILDE] = ACTIONS(306),
    [anon_sym_BSLASH] = ACTIONS(306),
    [sym__integer_literal] = ACTIONS(306),
    [sym__octal_literal] = ACTIONS(306),
    [sym__hexidecimal_literal] = ACTIONS(306),
  },
  [201] = {
    [anon_sym_LPAREN] = ACTIONS(310),
    [anon_sym_EQ] = ACTIONS(310),
    [anon_sym_AT] = ACTIONS(310),
    [anon_sym_DASH] = ACTIONS(310),
    [anon_sym__] = ACTIONS(310),
    [anon_sym_COLON] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_BANG] = ACTIONS(310),
    [sym__variable_pattern] = ACTIONS(310),
    [sym__constructor_pattern] = ACTIONS(310),
    [anon_sym_DOT] = ACTIONS(310),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(310),
    [anon_sym_SQUOTE] = ACTIONS(310),
    [anon_sym_DQUOTE] = ACTIONS(310),
    [anon_sym_POUND] = ACTIONS(310),
    [anon_sym_DOLLAR] = ACTIONS(310),
    [anon_sym_PERCENT] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_1] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(310),
    [anon_sym_GT] = ACTIONS(310),
    [anon_sym_QMARK] = ACTIONS(310),
    [anon_sym_CARET] = ACTIONS(310),
    [anon_sym_TILDE] = ACTIONS(310),
    [anon_sym_BSLASH] = ACTIONS(310),
    [sym__integer_literal] = ACTIONS(310),
    [sym__octal_literal] = ACTIONS(310),
    [sym__hexidecimal_literal] = ACTIONS(310),
  },
  [202] = {
    [sym_comment] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(624),
  },
  [203] = {
    [anon_sym_LPAREN] = ACTIONS(346),
    [anon_sym_EQ] = ACTIONS(346),
    [anon_sym_AT] = ACTIONS(346),
    [anon_sym_DASH] = ACTIONS(346),
    [anon_sym__] = ACTIONS(346),
    [anon_sym_COLON] = ACTIONS(346),
    [anon_sym_PIPE] = ACTIONS(346),
    [anon_sym_BANG] = ACTIONS(346),
    [sym__variable_pattern] = ACTIONS(346),
    [sym__constructor_pattern] = ACTIONS(346),
    [anon_sym_DOT] = ACTIONS(346),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(346),
    [anon_sym_SQUOTE] = ACTIONS(346),
    [anon_sym_DQUOTE] = ACTIONS(346),
    [anon_sym_POUND] = ACTIONS(346),
    [anon_sym_DOLLAR] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_AMP] = ACTIONS(346),
    [anon_sym_1] = ACTIONS(346),
    [anon_sym_PLUS] = ACTIONS(346),
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
  [204] = {
    [sym__gap] = STATE(193),
    [sym__graphic] = STATE(193),
    [sym__small] = STATE(84),
    [sym__large] = STATE(84),
    [sym__symbol] = STATE(84),
    [sym__special] = STATE(84),
    [sym__escape] = STATE(193),
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
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(366),
    [anon_sym_DQUOTE] = ACTIONS(626),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(124),
    [sym__ascii_large] = ACTIONS(132),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_1] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(134),
    [sym__space] = ACTIONS(136),
    [sym__newline] = ACTIONS(136),
    [sym__tab] = ACTIONS(136),
    [sym__vertical_tab] = ACTIONS(136),
  },
  [205] = {
    [sym__function_pattern] = STATE(315),
    [sym_wildcard] = STATE(101),
    [sym__variable] = STATE(102),
    [sym_qualified_variable_identifier] = STATE(103),
    [sym_qualified_variable_symbol] = STATE(103),
    [sym_variable_symbol] = STATE(103),
    [sym__literal] = STATE(101),
    [sym__identifier] = STATE(104),
    [sym_simple_type] = STATE(105),
    [sym_variable_identifier] = STATE(106),
    [sym_constructor_identifier] = STATE(107),
    [sym_integer] = STATE(97),
    [sym_char] = STATE(97),
    [sym_string] = STATE(97),
    [sym__symbol] = STATE(108),
    [aux_sym__function_pattern_repeat1] = STATE(110),
    [aux_sym_variable_symbol_repeat1] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_EQ] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym__] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_BANG] = ACTIONS(162),
    [sym__variable_pattern] = ACTIONS(166),
    [sym__constructor_pattern] = ACTIONS(168),
    [anon_sym_DOT] = ACTIONS(162),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(170),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_DOLLAR] = ACTIONS(162),
    [anon_sym_PERCENT] = ACTIONS(162),
    [anon_sym_AMP] = ACTIONS(162),
    [anon_sym_1] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(162),
    [anon_sym_QMARK] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(162),
    [anon_sym_BSLASH] = ACTIONS(162),
    [sym__integer_literal] = ACTIONS(84),
    [sym__octal_literal] = ACTIONS(84),
    [sym__hexidecimal_literal] = ACTIONS(84),
  },
  [206] = {
    [sym_labels] = STATE(316),
    [sym_label] = STATE(317),
    [sym__identifier] = STATE(318),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [aux_sym_labels_repeat1] = STATE(319),
    [anon_sym_RBRACE] = ACTIONS(628),
    [sym__variable_pattern] = ACTIONS(302),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [207] = {
    [sym_variable_identifier] = STATE(295),
    [anon_sym_LBRACE] = ACTIONS(564),
    [sym__variable_pattern] = ACTIONS(298),
    [sym_comment] = ACTIONS(54),
  },
  [208] = {
    [anon_sym_LPAREN] = ACTIONS(630),
    [anon_sym_EQ] = ACTIONS(630),
    [anon_sym_AT] = ACTIONS(630),
    [anon_sym_DASH] = ACTIONS(630),
    [anon_sym__] = ACTIONS(630),
    [anon_sym_COLON] = ACTIONS(630),
    [anon_sym_PIPE] = ACTIONS(630),
    [anon_sym_BANG] = ACTIONS(630),
    [sym__variable_pattern] = ACTIONS(630),
    [sym__constructor_pattern] = ACTIONS(630),
    [anon_sym_DOT] = ACTIONS(630),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(630),
    [anon_sym_DQUOTE] = ACTIONS(630),
    [anon_sym_POUND] = ACTIONS(630),
    [anon_sym_DOLLAR] = ACTIONS(630),
    [anon_sym_PERCENT] = ACTIONS(630),
    [anon_sym_AMP] = ACTIONS(630),
    [anon_sym_1] = ACTIONS(630),
    [anon_sym_PLUS] = ACTIONS(630),
    [anon_sym_SLASH] = ACTIONS(630),
    [anon_sym_LT] = ACTIONS(630),
    [anon_sym_GT] = ACTIONS(630),
    [anon_sym_QMARK] = ACTIONS(630),
    [anon_sym_CARET] = ACTIONS(630),
    [anon_sym_TILDE] = ACTIONS(630),
    [anon_sym_BSLASH] = ACTIONS(630),
    [sym__integer_literal] = ACTIONS(630),
    [sym__octal_literal] = ACTIONS(630),
    [sym__hexidecimal_literal] = ACTIONS(630),
  },
  [209] = {
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [sym__variable_pattern] = ACTIONS(96),
    [sym__constructor_pattern] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [anon_sym_POUND] = ACTIONS(96),
    [anon_sym_DOLLAR] = ACTIONS(96),
    [anon_sym_PERCENT] = ACTIONS(96),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_1] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
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
  [210] = {
    [anon_sym_LPAREN] = ACTIONS(632),
    [anon_sym_EQ] = ACTIONS(632),
    [anon_sym_AT] = ACTIONS(632),
    [anon_sym_DASH] = ACTIONS(632),
    [anon_sym__] = ACTIONS(632),
    [anon_sym_COLON] = ACTIONS(632),
    [anon_sym_PIPE] = ACTIONS(632),
    [anon_sym_BANG] = ACTIONS(632),
    [sym__variable_pattern] = ACTIONS(632),
    [sym__constructor_pattern] = ACTIONS(632),
    [anon_sym_DOT] = ACTIONS(632),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(632),
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
    [anon_sym_TILDE] = ACTIONS(632),
    [anon_sym_BSLASH] = ACTIONS(632),
    [sym__integer_literal] = ACTIONS(632),
    [sym__octal_literal] = ACTIONS(632),
    [sym__hexidecimal_literal] = ACTIONS(632),
  },
  [211] = {
    [anon_sym_LPAREN] = ACTIONS(212),
    [anon_sym_EQ] = ACTIONS(212),
    [anon_sym_AT] = ACTIONS(212),
    [anon_sym_DASH] = ACTIONS(212),
    [anon_sym__] = ACTIONS(212),
    [anon_sym_COLON] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_BANG] = ACTIONS(212),
    [sym__variable_pattern] = ACTIONS(212),
    [sym__constructor_pattern] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(212),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(212),
    [anon_sym_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [anon_sym_POUND] = ACTIONS(212),
    [anon_sym_DOLLAR] = ACTIONS(212),
    [anon_sym_PERCENT] = ACTIONS(212),
    [anon_sym_AMP] = ACTIONS(212),
    [anon_sym_1] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(212),
    [anon_sym_SLASH] = ACTIONS(212),
    [anon_sym_LT] = ACTIONS(212),
    [anon_sym_GT] = ACTIONS(212),
    [anon_sym_QMARK] = ACTIONS(212),
    [anon_sym_CARET] = ACTIONS(212),
    [anon_sym_TILDE] = ACTIONS(212),
    [anon_sym_BSLASH] = ACTIONS(212),
    [sym__integer_literal] = ACTIONS(212),
    [sym__octal_literal] = ACTIONS(212),
    [sym__hexidecimal_literal] = ACTIONS(212),
  },
  [212] = {
    [anon_sym_LPAREN] = ACTIONS(428),
    [anon_sym_RPAREN] = ACTIONS(428),
    [anon_sym_EQ] = ACTIONS(428),
    [anon_sym_AT] = ACTIONS(428),
    [anon_sym_DASH] = ACTIONS(428),
    [anon_sym__] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(428),
    [anon_sym_PIPE] = ACTIONS(428),
    [anon_sym_BANG] = ACTIONS(428),
    [sym__variable_pattern] = ACTIONS(428),
    [sym__constructor_pattern] = ACTIONS(428),
    [anon_sym_DOT] = ACTIONS(428),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(428),
    [anon_sym_SQUOTE] = ACTIONS(428),
    [anon_sym_DQUOTE] = ACTIONS(428),
    [anon_sym_POUND] = ACTIONS(428),
    [anon_sym_DOLLAR] = ACTIONS(428),
    [anon_sym_PERCENT] = ACTIONS(428),
    [anon_sym_AMP] = ACTIONS(428),
    [anon_sym_1] = ACTIONS(428),
    [anon_sym_PLUS] = ACTIONS(428),
    [anon_sym_SLASH] = ACTIONS(428),
    [anon_sym_LT] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(428),
    [anon_sym_QMARK] = ACTIONS(428),
    [anon_sym_CARET] = ACTIONS(428),
    [anon_sym_TILDE] = ACTIONS(428),
    [anon_sym_BSLASH] = ACTIONS(428),
    [sym__integer_literal] = ACTIONS(428),
    [sym__octal_literal] = ACTIONS(428),
    [sym__hexidecimal_literal] = ACTIONS(428),
  },
  [213] = {
    [sym_type] = STATE(326),
    [sym__generic_type_constructor] = STATE(327),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(327),
    [sym_list] = STATE(327),
    [sym_parenthesized_constructor] = STATE(327),
    [sym_class] = STATE(328),
    [sym_variable_identifier] = STATE(329),
    [sym_constructor_identifier] = STATE(143),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(330),
    [anon_sym_LPAREN] = ACTIONS(634),
    [anon_sym_COMMA] = ACTIONS(636),
    [sym_unit_type] = ACTIONS(638),
    [sym_list_constructor] = ACTIONS(638),
    [sym_function_constructor] = ACTIONS(638),
    [anon_sym_LBRACK] = ACTIONS(640),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(642),
    [sym_module_identifier] = ACTIONS(644),
    [sym_comment] = ACTIONS(54),
  },
  [214] = {
    [sym__layout_semicolon] = ACTIONS(646),
    [anon_sym_SEMI] = ACTIONS(648),
    [anon_sym_DASH_GT] = ACTIONS(648),
    [sym_comment] = ACTIONS(54),
  },
  [215] = {
    [sym_type] = STATE(333),
    [sym__generic_type_constructor] = STATE(334),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(334),
    [sym_list] = STATE(334),
    [sym_parenthesized_constructor] = STATE(334),
    [sym_variable_identifier] = STATE(335),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(330),
    [aux_sym_list_repeat1] = STATE(336),
    [anon_sym_LPAREN] = ACTIONS(634),
    [sym_unit_type] = ACTIONS(638),
    [sym_list_constructor] = ACTIONS(638),
    [sym_function_constructor] = ACTIONS(638),
    [anon_sym_LBRACK] = ACTIONS(640),
    [sym__variable_pattern] = ACTIONS(298),
    [sym__constructor_pattern] = ACTIONS(650),
    [sym_module_identifier] = ACTIONS(652),
    [sym_comment] = ACTIONS(54),
  },
  [216] = {
    [sym_variable_identifier] = STATE(337),
    [aux_sym_type_class_repeat1] = STATE(338),
    [sym__layout_semicolon] = ACTIONS(654),
    [anon_sym_SEMI] = ACTIONS(656),
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_DASH_GT] = ACTIONS(656),
    [sym__variable_pattern] = ACTIONS(250),
    [sym_comment] = ACTIONS(54),
  },
  [217] = {
    [sym_constructor_identifier] = STATE(340),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(341),
    [sym__constructor_pattern] = ACTIONS(378),
    [anon_sym_DOT] = ACTIONS(658),
    [sym_comment] = ACTIONS(54),
  },
  [218] = {
    [sym__layout_semicolon] = ACTIONS(660),
    [anon_sym_SEMI] = ACTIONS(662),
    [sym_comment] = ACTIONS(54),
  },
  [219] = {
    [sym__layout_semicolon] = ACTIONS(664),
    [anon_sym_SEMI] = ACTIONS(666),
    [anon_sym_DASH_GT] = ACTIONS(668),
    [sym_comment] = ACTIONS(54),
  },
  [220] = {
    [sym_type] = STATE(343),
    [sym__generic_type_constructor] = STATE(219),
    [sym_tupling_constructor] = STATE(214),
    [sym_tuple] = STATE(219),
    [sym_list] = STATE(219),
    [sym_parenthesized_constructor] = STATE(219),
    [sym_variable_identifier] = STATE(222),
    [sym__type_constructors] = STATE(214),
    [sym_qualified_type_constructor] = STATE(223),
    [anon_sym_LPAREN] = ACTIONS(570),
    [sym_unit_type] = ACTIONS(412),
    [sym_list_constructor] = ACTIONS(412),
    [sym_function_constructor] = ACTIONS(412),
    [anon_sym_LBRACK] = ACTIONS(414),
    [sym__variable_pattern] = ACTIONS(416),
    [sym__constructor_pattern] = ACTIONS(572),
    [sym_module_identifier] = ACTIONS(420),
    [sym_comment] = ACTIONS(54),
  },
  [221] = {
    [anon_sym_EQ_GT] = ACTIONS(670),
    [sym_comment] = ACTIONS(54),
  },
  [222] = {
    [sym__layout_semicolon] = ACTIONS(672),
    [anon_sym_SEMI] = ACTIONS(674),
    [anon_sym_DASH_GT] = ACTIONS(676),
    [sym_comment] = ACTIONS(54),
  },
  [223] = {
    [sym__layout_semicolon] = ACTIONS(678),
    [anon_sym_SEMI] = ACTIONS(680),
    [anon_sym_DASH_GT] = ACTIONS(680),
    [sym_comment] = ACTIONS(54),
  },
  [224] = {
    [ts_builtin_sym_end] = ACTIONS(682),
    [anon_sym_RBRACE] = ACTIONS(682),
    [anon_sym_LPAREN] = ACTIONS(682),
    [anon_sym_import] = ACTIONS(682),
    [anon_sym_EQ] = ACTIONS(682),
    [anon_sym_AT] = ACTIONS(682),
    [anon_sym_DASH] = ACTIONS(682),
    [anon_sym_foreign] = ACTIONS(682),
    [anon_sym_default] = ACTIONS(682),
    [anon_sym_do] = ACTIONS(682),
    [anon_sym_class] = ACTIONS(682),
    [anon_sym_instance] = ACTIONS(682),
    [anon_sym_infixl] = ACTIONS(682),
    [anon_sym_infixr] = ACTIONS(682),
    [anon_sym_infix] = ACTIONS(682),
    [anon_sym_COLON] = ACTIONS(682),
    [anon_sym_data] = ACTIONS(682),
    [anon_sym_PIPE] = ACTIONS(682),
    [anon_sym_newtype] = ACTIONS(682),
    [anon_sym_BANG] = ACTIONS(682),
    [anon_sym_type] = ACTIONS(682),
    [sym__variable_pattern] = ACTIONS(682),
    [sym__constructor_pattern] = ACTIONS(682),
    [anon_sym_DOT] = ACTIONS(682),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(682),
    [anon_sym_SQUOTE] = ACTIONS(682),
    [anon_sym_DQUOTE] = ACTIONS(682),
    [anon_sym_POUND] = ACTIONS(682),
    [anon_sym_DOLLAR] = ACTIONS(682),
    [anon_sym_PERCENT] = ACTIONS(682),
    [anon_sym_AMP] = ACTIONS(682),
    [anon_sym_1] = ACTIONS(682),
    [anon_sym_PLUS] = ACTIONS(682),
    [anon_sym_SLASH] = ACTIONS(682),
    [anon_sym_LT] = ACTIONS(682),
    [anon_sym_GT] = ACTIONS(682),
    [anon_sym_QMARK] = ACTIONS(682),
    [anon_sym_CARET] = ACTIONS(682),
    [anon_sym_TILDE] = ACTIONS(682),
    [anon_sym_BSLASH] = ACTIONS(682),
    [sym__integer_literal] = ACTIONS(682),
    [sym__octal_literal] = ACTIONS(682),
    [sym__hexidecimal_literal] = ACTIONS(682),
  },
  [225] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(347),
    [sym_function_declaration] = STATE(22),
    [sym_function_head] = STATE(24),
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(26),
    [sym_qualified_variable_symbol] = STATE(26),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(27),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(28),
    [sym_variable_symbol] = STATE(26),
    [sym_type_signature] = STATE(28),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(27),
    [sym__identifier] = STATE(29),
    [sym_variable_identifier] = STATE(30),
    [sym_constructor_identifier] = STATE(31),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(32),
    [aux_sym_module_repeat1] = STATE(348),
    [aux_sym_variable_symbol_repeat1] = STATE(34),
    [sym__layout_close_brace] = ACTIONS(684),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_foreign] = ACTIONS(20),
    [anon_sym_default] = ACTIONS(22),
    [anon_sym_do] = ACTIONS(24),
    [anon_sym_class] = ACTIONS(26),
    [anon_sym_instance] = ACTIONS(28),
    [anon_sym_infixl] = ACTIONS(30),
    [anon_sym_infixr] = ACTIONS(30),
    [anon_sym_infix] = ACTIONS(30),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_data] = ACTIONS(32),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(34),
    [anon_sym_BANG] = ACTIONS(18),
    [anon_sym_type] = ACTIONS(36),
    [sym__variable_pattern] = ACTIONS(38),
    [sym__constructor_pattern] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(44),
    [anon_sym_SQUOTE] = ACTIONS(46),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
    [sym__integer_literal] = ACTIONS(50),
    [sym__octal_literal] = ACTIONS(50),
    [sym__hexidecimal_literal] = ACTIONS(50),
  },
  [226] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(23),
    [sym_function_declaration] = STATE(22),
    [sym_function_head] = STATE(24),
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(26),
    [sym_qualified_variable_symbol] = STATE(26),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(27),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(28),
    [sym_variable_symbol] = STATE(26),
    [sym_type_signature] = STATE(28),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(27),
    [sym__identifier] = STATE(29),
    [sym_variable_identifier] = STATE(30),
    [sym_constructor_identifier] = STATE(31),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(32),
    [aux_sym_module_repeat1] = STATE(349),
    [aux_sym_variable_symbol_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(686),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_foreign] = ACTIONS(20),
    [anon_sym_default] = ACTIONS(22),
    [anon_sym_do] = ACTIONS(24),
    [anon_sym_class] = ACTIONS(26),
    [anon_sym_instance] = ACTIONS(28),
    [anon_sym_infixl] = ACTIONS(30),
    [anon_sym_infixr] = ACTIONS(30),
    [anon_sym_infix] = ACTIONS(30),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_data] = ACTIONS(32),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(34),
    [anon_sym_BANG] = ACTIONS(18),
    [anon_sym_type] = ACTIONS(36),
    [sym__variable_pattern] = ACTIONS(38),
    [sym__constructor_pattern] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(44),
    [anon_sym_SQUOTE] = ACTIONS(46),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
    [sym__integer_literal] = ACTIONS(50),
    [sym__octal_literal] = ACTIONS(50),
    [sym__hexidecimal_literal] = ACTIONS(50),
  },
  [227] = {
    [ts_builtin_sym_end] = ACTIONS(688),
    [sym_comment] = ACTIONS(54),
  },
  [228] = {
    [anon_sym_where] = ACTIONS(690),
    [sym_comment] = ACTIONS(54),
  },
  [229] = {
    [aux_sym_module_exports_repeat1] = STATE(352),
    [anon_sym_COMMA] = ACTIONS(692),
    [anon_sym_RPAREN] = ACTIONS(694),
    [sym_comment] = ACTIONS(54),
  },
  [230] = {
    [anon_sym_LPAREN] = ACTIONS(696),
    [anon_sym_COMMA] = ACTIONS(698),
    [anon_sym_RPAREN] = ACTIONS(698),
    [sym_comment] = ACTIONS(54),
  },
  [231] = {
    [sym_declarations] = STATE(354),
    [sym__layout_open_brace] = ACTIONS(430),
    [anon_sym_LBRACE] = ACTIONS(432),
    [sym_comment] = ACTIONS(54),
  },
  [232] = {
    [sym_module_identifier] = ACTIONS(700),
    [sym_comment] = ACTIONS(54),
  },
  [233] = {
    [sym__layout_semicolon] = ACTIONS(702),
    [anon_sym_SEMI] = ACTIONS(704),
    [sym_comment] = ACTIONS(54),
  },
  [234] = {
    [sym__layout_semicolon] = ACTIONS(706),
    [anon_sym_SEMI] = ACTIONS(708),
    [sym_comment] = ACTIONS(54),
  },
  [235] = {
    [aux_sym_import_specification_repeat1] = STATE(359),
    [anon_sym_LPAREN] = ACTIONS(710),
    [anon_sym_COMMA] = ACTIONS(712),
    [anon_sym_RPAREN] = ACTIONS(714),
    [sym_comment] = ACTIONS(54),
  },
  [236] = {
    [sym_import_specification] = STATE(360),
    [sym__layout_semicolon] = ACTIONS(702),
    [anon_sym_SEMI] = ACTIONS(704),
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_hiding] = ACTIONS(226),
    [sym_comment] = ACTIONS(54),
  },
  [237] = {
    [sym__identifier] = STATE(361),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [anon_sym_RPAREN] = ACTIONS(714),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [238] = {
    [sym__variable_pattern] = ACTIONS(716),
    [sym__constructor_pattern] = ACTIONS(718),
    [sym_comment] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(716),
  },
  [239] = {
    [sym__gap] = STATE(82),
    [sym__graphic] = STATE(82),
    [sym__small] = STATE(84),
    [sym__large] = STATE(84),
    [sym__symbol] = STATE(84),
    [sym__special] = STATE(84),
    [sym__escape] = STATE(82),
    [aux_sym_string_repeat1] = STATE(363),
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
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(720),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(124),
    [sym__ascii_large] = ACTIONS(132),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_1] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(134),
    [sym__space] = ACTIONS(136),
    [sym__newline] = ACTIONS(136),
    [sym__tab] = ACTIONS(136),
    [sym__vertical_tab] = ACTIONS(136),
  },
  [240] = {
    [sym_type_signature] = STATE(364),
    [sym__identifier] = STATE(242),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [sym_string] = STATE(365),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(460),
  },
  [241] = {
    [sym__layout_semicolon] = ACTIONS(722),
    [anon_sym_SEMI] = ACTIONS(724),
    [sym_comment] = ACTIONS(54),
  },
  [242] = {
    [anon_sym_COLON_COLON] = ACTIONS(186),
    [sym_comment] = ACTIONS(54),
  },
  [243] = {
    [sym_type_signature] = STATE(364),
    [sym__identifier] = STATE(242),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [244] = {
    [sym__identifier] = STATE(366),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [245] = {
    [sym__layout_semicolon] = ACTIONS(726),
    [anon_sym_SEMI] = ACTIONS(728),
    [sym_comment] = ACTIONS(54),
  },
  [246] = {
    [anon_sym_COMMA] = ACTIONS(730),
    [anon_sym_RPAREN] = ACTIONS(732),
    [sym_comment] = ACTIONS(54),
  },
  [247] = {
    [sym__layout_semicolon] = ACTIONS(304),
    [anon_sym_SEMI] = ACTIONS(734),
    [sym_comment] = ACTIONS(54),
  },
  [248] = {
    [sym__layout_semicolon] = ACTIONS(308),
    [anon_sym_SEMI] = ACTIONS(736),
    [sym_comment] = ACTIONS(54),
  },
  [249] = {
    [sym__layout_close_brace] = ACTIONS(738),
    [anon_sym_LPAREN] = ACTIONS(740),
    [anon_sym_EQ] = ACTIONS(740),
    [anon_sym_AT] = ACTIONS(740),
    [anon_sym_DASH] = ACTIONS(740),
    [anon_sym_do] = ACTIONS(740),
    [anon_sym_COLON] = ACTIONS(740),
    [anon_sym_PIPE] = ACTIONS(740),
    [anon_sym_BANG] = ACTIONS(740),
    [sym__variable_pattern] = ACTIONS(740),
    [sym__constructor_pattern] = ACTIONS(740),
    [anon_sym_DOT] = ACTIONS(740),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(740),
    [anon_sym_SQUOTE] = ACTIONS(740),
    [anon_sym_DQUOTE] = ACTIONS(740),
    [anon_sym_POUND] = ACTIONS(740),
    [anon_sym_DOLLAR] = ACTIONS(740),
    [anon_sym_PERCENT] = ACTIONS(740),
    [anon_sym_AMP] = ACTIONS(740),
    [anon_sym_1] = ACTIONS(740),
    [anon_sym_PLUS] = ACTIONS(740),
    [anon_sym_SLASH] = ACTIONS(740),
    [anon_sym_LT] = ACTIONS(740),
    [anon_sym_GT] = ACTIONS(740),
    [anon_sym_QMARK] = ACTIONS(740),
    [anon_sym_CARET] = ACTIONS(740),
    [anon_sym_TILDE] = ACTIONS(740),
    [anon_sym_BSLASH] = ACTIONS(740),
    [sym__integer_literal] = ACTIONS(740),
    [sym__octal_literal] = ACTIONS(740),
    [sym__hexidecimal_literal] = ACTIONS(740),
  },
  [250] = {
    [sym__layout_semicolon] = ACTIONS(742),
    [anon_sym_SEMI] = ACTIONS(744),
    [sym_comment] = ACTIONS(54),
  },
  [251] = {
    [sym__layout_close_brace] = ACTIONS(746),
    [anon_sym_LPAREN] = ACTIONS(748),
    [anon_sym_EQ] = ACTIONS(748),
    [anon_sym_AT] = ACTIONS(748),
    [anon_sym_DASH] = ACTIONS(748),
    [anon_sym_do] = ACTIONS(748),
    [anon_sym_COLON] = ACTIONS(748),
    [anon_sym_PIPE] = ACTIONS(748),
    [anon_sym_BANG] = ACTIONS(748),
    [sym__variable_pattern] = ACTIONS(748),
    [sym__constructor_pattern] = ACTIONS(748),
    [anon_sym_DOT] = ACTIONS(748),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(748),
    [anon_sym_SQUOTE] = ACTIONS(748),
    [anon_sym_DQUOTE] = ACTIONS(748),
    [anon_sym_POUND] = ACTIONS(748),
    [anon_sym_DOLLAR] = ACTIONS(748),
    [anon_sym_PERCENT] = ACTIONS(748),
    [anon_sym_AMP] = ACTIONS(748),
    [anon_sym_1] = ACTIONS(748),
    [anon_sym_PLUS] = ACTIONS(748),
    [anon_sym_SLASH] = ACTIONS(748),
    [anon_sym_LT] = ACTIONS(748),
    [anon_sym_GT] = ACTIONS(748),
    [anon_sym_QMARK] = ACTIONS(748),
    [anon_sym_CARET] = ACTIONS(748),
    [anon_sym_TILDE] = ACTIONS(748),
    [anon_sym_BSLASH] = ACTIONS(748),
    [sym__integer_literal] = ACTIONS(748),
    [sym__octal_literal] = ACTIONS(748),
    [sym__hexidecimal_literal] = ACTIONS(748),
  },
  [252] = {
    [anon_sym_RBRACE] = ACTIONS(740),
    [anon_sym_LPAREN] = ACTIONS(740),
    [anon_sym_EQ] = ACTIONS(740),
    [anon_sym_AT] = ACTIONS(740),
    [anon_sym_DASH] = ACTIONS(740),
    [anon_sym_do] = ACTIONS(740),
    [anon_sym_COLON] = ACTIONS(740),
    [anon_sym_PIPE] = ACTIONS(740),
    [anon_sym_BANG] = ACTIONS(740),
    [sym__variable_pattern] = ACTIONS(740),
    [sym__constructor_pattern] = ACTIONS(740),
    [anon_sym_DOT] = ACTIONS(740),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(740),
    [anon_sym_SQUOTE] = ACTIONS(740),
    [anon_sym_DQUOTE] = ACTIONS(740),
    [anon_sym_POUND] = ACTIONS(740),
    [anon_sym_DOLLAR] = ACTIONS(740),
    [anon_sym_PERCENT] = ACTIONS(740),
    [anon_sym_AMP] = ACTIONS(740),
    [anon_sym_1] = ACTIONS(740),
    [anon_sym_PLUS] = ACTIONS(740),
    [anon_sym_SLASH] = ACTIONS(740),
    [anon_sym_LT] = ACTIONS(740),
    [anon_sym_GT] = ACTIONS(740),
    [anon_sym_QMARK] = ACTIONS(740),
    [anon_sym_CARET] = ACTIONS(740),
    [anon_sym_TILDE] = ACTIONS(740),
    [anon_sym_BSLASH] = ACTIONS(740),
    [sym__integer_literal] = ACTIONS(740),
    [sym__octal_literal] = ACTIONS(740),
    [sym__hexidecimal_literal] = ACTIONS(740),
  },
  [253] = {
    [anon_sym_RBRACE] = ACTIONS(748),
    [anon_sym_LPAREN] = ACTIONS(748),
    [anon_sym_EQ] = ACTIONS(748),
    [anon_sym_AT] = ACTIONS(748),
    [anon_sym_DASH] = ACTIONS(748),
    [anon_sym_do] = ACTIONS(748),
    [anon_sym_COLON] = ACTIONS(748),
    [anon_sym_PIPE] = ACTIONS(748),
    [anon_sym_BANG] = ACTIONS(748),
    [sym__variable_pattern] = ACTIONS(748),
    [sym__constructor_pattern] = ACTIONS(748),
    [anon_sym_DOT] = ACTIONS(748),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(748),
    [anon_sym_SQUOTE] = ACTIONS(748),
    [anon_sym_DQUOTE] = ACTIONS(748),
    [anon_sym_POUND] = ACTIONS(748),
    [anon_sym_DOLLAR] = ACTIONS(748),
    [anon_sym_PERCENT] = ACTIONS(748),
    [anon_sym_AMP] = ACTIONS(748),
    [anon_sym_1] = ACTIONS(748),
    [anon_sym_PLUS] = ACTIONS(748),
    [anon_sym_SLASH] = ACTIONS(748),
    [anon_sym_LT] = ACTIONS(748),
    [anon_sym_GT] = ACTIONS(748),
    [anon_sym_QMARK] = ACTIONS(748),
    [anon_sym_CARET] = ACTIONS(748),
    [anon_sym_TILDE] = ACTIONS(748),
    [anon_sym_BSLASH] = ACTIONS(748),
    [sym__integer_literal] = ACTIONS(748),
    [sym__octal_literal] = ACTIONS(748),
    [sym__hexidecimal_literal] = ACTIONS(748),
  },
  [254] = {
    [sym_class] = STATE(369),
    [sym_constructor_identifier] = STATE(143),
    [sym__constructor_pattern] = ACTIONS(88),
    [sym_comment] = ACTIONS(54),
  },
  [255] = {
    [anon_sym_EQ_GT] = ACTIONS(750),
    [sym_comment] = ACTIONS(54),
  },
  [256] = {
    [anon_sym_COMMA] = ACTIONS(752),
    [anon_sym_RPAREN] = ACTIONS(754),
    [sym_comment] = ACTIONS(54),
  },
  [257] = {
    [anon_sym_COMMA] = ACTIONS(510),
    [anon_sym_RPAREN] = ACTIONS(510),
    [anon_sym_EQ_GT] = ACTIONS(510),
    [sym_comment] = ACTIONS(54),
  },
  [258] = {
    [sym_general_declarations] = STATE(373),
    [sym__layout_open_brace] = ACTIONS(504),
    [anon_sym_LBRACE] = ACTIONS(506),
    [sym_comment] = ACTIONS(54),
  },
  [259] = {
    [anon_sym_where] = ACTIONS(508),
    [sym__variable_pattern] = ACTIONS(512),
    [sym_comment] = ACTIONS(54),
  },
  [260] = {
    [sym_variable_identifier] = STATE(265),
    [anon_sym_where] = ACTIONS(756),
    [sym__variable_pattern] = ACTIONS(258),
    [sym_comment] = ACTIONS(54),
  },
  [261] = {
    [sym__general_declaration] = STATE(376),
    [sym_fixity] = STATE(28),
    [sym_type_signature] = STATE(28),
    [sym__identifier] = STATE(242),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [aux_sym_general_declarations_repeat1] = STATE(377),
    [sym__layout_close_brace] = ACTIONS(758),
    [anon_sym_infixl] = ACTIONS(760),
    [anon_sym_infixr] = ACTIONS(760),
    [anon_sym_infix] = ACTIONS(760),
    [sym__variable_pattern] = ACTIONS(258),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [262] = {
    [sym__general_declaration] = STATE(378),
    [sym_fixity] = STATE(28),
    [sym_type_signature] = STATE(28),
    [sym__identifier] = STATE(242),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [aux_sym_general_declarations_repeat1] = STATE(379),
    [anon_sym_RBRACE] = ACTIONS(762),
    [anon_sym_infixl] = ACTIONS(760),
    [anon_sym_infixr] = ACTIONS(760),
    [anon_sym_infix] = ACTIONS(760),
    [sym__variable_pattern] = ACTIONS(258),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [263] = {
    [sym__layout_semicolon] = ACTIONS(764),
    [anon_sym_SEMI] = ACTIONS(766),
    [sym_comment] = ACTIONS(54),
  },
  [264] = {
    [sym_variable_identifier] = STATE(295),
    [anon_sym_RPAREN] = ACTIONS(768),
    [sym__variable_pattern] = ACTIONS(298),
    [sym_comment] = ACTIONS(54),
  },
  [265] = {
    [anon_sym_where] = ACTIONS(770),
    [sym__variable_pattern] = ACTIONS(772),
    [sym_comment] = ACTIONS(54),
  },
  [266] = {
    [sym_general_declarations] = STATE(381),
    [sym__layout_open_brace] = ACTIONS(504),
    [anon_sym_LBRACE] = ACTIONS(506),
    [sym_comment] = ACTIONS(54),
  },
  [267] = {
    [sym_variable_identifier] = STATE(265),
    [anon_sym_where] = ACTIONS(774),
    [sym__variable_pattern] = ACTIONS(258),
    [sym_comment] = ACTIONS(54),
  },
  [268] = {
    [sym__layout_semicolon] = ACTIONS(776),
    [anon_sym_SEMI] = ACTIONS(778),
    [sym_comment] = ACTIONS(54),
  },
  [269] = {
    [sym__layout_semicolon] = ACTIONS(780),
    [anon_sym_SEMI] = ACTIONS(782),
    [anon_sym_COMMA] = ACTIONS(782),
    [sym_comment] = ACTIONS(54),
  },
  [270] = {
    [sym__symbol] = STATE(115),
    [sym__layout_semicolon] = ACTIONS(780),
    [anon_sym_SEMI] = ACTIONS(784),
    [anon_sym_COMMA] = ACTIONS(784),
    [anon_sym_RPAREN] = ACTIONS(786),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
  },
  [271] = {
    [sym__layout_semicolon] = ACTIONS(438),
    [anon_sym_SEMI] = ACTIONS(788),
    [anon_sym_COMMA] = ACTIONS(788),
    [sym_comment] = ACTIONS(54),
  },
  [272] = {
    [sym__layout_semicolon] = ACTIONS(790),
    [anon_sym_SEMI] = ACTIONS(792),
    [anon_sym_COMMA] = ACTIONS(792),
    [sym_comment] = ACTIONS(54),
  },
  [273] = {
    [sym__layout_semicolon] = ACTIONS(794),
    [anon_sym_SEMI] = ACTIONS(796),
    [anon_sym_COMMA] = ACTIONS(796),
    [sym_comment] = ACTIONS(54),
  },
  [274] = {
    [sym__op] = STATE(384),
    [sym_variable_symbol] = STATE(57),
    [sym_constructor_symbol] = STATE(57),
    [sym__symbol] = STATE(32),
    [aux_sym_variable_symbol_repeat1] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_COLON] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_BANG] = ACTIONS(18),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
  },
  [275] = {
    [sym__layout_semicolon] = ACTIONS(798),
    [anon_sym_SEMI] = ACTIONS(800),
    [anon_sym_COMMA] = ACTIONS(532),
    [sym_comment] = ACTIONS(54),
  },
  [276] = {
    [sym_constructors] = STATE(385),
    [sym_constructor] = STATE(167),
    [sym_deriving] = STATE(386),
    [sym_constructor_identifier] = STATE(169),
    [sym__layout_semicolon] = ACTIONS(802),
    [anon_sym_SEMI] = ACTIONS(804),
    [anon_sym_deriving] = ACTIONS(288),
    [sym__constructor_pattern] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [277] = {
    [sym_deriving] = STATE(386),
    [sym__layout_semicolon] = ACTIONS(802),
    [anon_sym_SEMI] = ACTIONS(804),
    [anon_sym_deriving] = ACTIONS(288),
    [sym_comment] = ACTIONS(54),
  },
  [278] = {
    [sym__layout_semicolon] = ACTIONS(802),
    [anon_sym_SEMI] = ACTIONS(804),
    [sym_comment] = ACTIONS(54),
  },
  [279] = {
    [sym__layout_semicolon] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(466),
    [anon_sym_EQ] = ACTIONS(466),
    [anon_sym_deriving] = ACTIONS(466),
    [sym__variable_pattern] = ACTIONS(92),
    [sym__constructor_pattern] = ACTIONS(92),
    [sym_comment] = ACTIONS(54),
  },
  [280] = {
    [sym__layout_semicolon] = ACTIONS(560),
    [anon_sym_SEMI] = ACTIONS(508),
    [anon_sym_EQ] = ACTIONS(508),
    [anon_sym_deriving] = ACTIONS(508),
    [sym__variable_pattern] = ACTIONS(512),
    [sym__constructor_pattern] = ACTIONS(512),
    [sym_comment] = ACTIONS(54),
  },
  [281] = {
    [sym__identifier] = STATE(387),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [282] = {
    [sym__layout_semicolon] = ACTIONS(806),
    [anon_sym_SEMI] = ACTIONS(808),
    [sym_comment] = ACTIONS(54),
  },
  [283] = {
    [sym_constructor] = STATE(388),
    [sym_constructor_identifier] = STATE(169),
    [sym__constructor_pattern] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [284] = {
    [sym__layout_semicolon] = ACTIONS(810),
    [anon_sym_SEMI] = ACTIONS(812),
    [anon_sym_PIPE] = ACTIONS(814),
    [anon_sym_deriving] = ACTIONS(812),
    [sym_comment] = ACTIONS(54),
  },
  [285] = {
    [sym_field] = STATE(390),
    [sym_variable_identifier] = STATE(391),
    [sym__variable_pattern] = ACTIONS(234),
    [sym_comment] = ACTIONS(54),
  },
  [286] = {
    [sym__identifier] = STATE(392),
    [sym_variable_identifier] = STATE(288),
    [sym_constructor_identifier] = STATE(288),
    [sym__variable_pattern] = ACTIONS(416),
    [sym__constructor_pattern] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [287] = {
    [sym__layout_semicolon] = ACTIONS(816),
    [anon_sym_SEMI] = ACTIONS(818),
    [anon_sym_PIPE] = ACTIONS(818),
    [anon_sym_deriving] = ACTIONS(818),
    [anon_sym_BANG] = ACTIONS(818),
    [sym__variable_pattern] = ACTIONS(820),
    [sym__constructor_pattern] = ACTIONS(820),
    [sym_comment] = ACTIONS(54),
  },
  [288] = {
    [sym__layout_semicolon] = ACTIONS(188),
    [anon_sym_SEMI] = ACTIONS(192),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_deriving] = ACTIONS(192),
    [anon_sym_BANG] = ACTIONS(192),
    [sym__variable_pattern] = ACTIONS(190),
    [sym__constructor_pattern] = ACTIONS(190),
    [sym_comment] = ACTIONS(54),
  },
  [289] = {
    [sym__layout_semicolon] = ACTIONS(822),
    [anon_sym_SEMI] = ACTIONS(824),
    [anon_sym_PIPE] = ACTIONS(824),
    [anon_sym_deriving] = ACTIONS(824),
    [sym_comment] = ACTIONS(54),
  },
  [290] = {
    [sym_strict] = STATE(393),
    [sym__identifier] = STATE(393),
    [sym_variable_identifier] = STATE(288),
    [sym_constructor_identifier] = STATE(288),
    [sym__layout_semicolon] = ACTIONS(822),
    [anon_sym_SEMI] = ACTIONS(824),
    [anon_sym_PIPE] = ACTIONS(824),
    [anon_sym_deriving] = ACTIONS(824),
    [anon_sym_BANG] = ACTIONS(558),
    [sym__variable_pattern] = ACTIONS(240),
    [sym__constructor_pattern] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [291] = {
    [sym__layout_semicolon] = ACTIONS(826),
    [anon_sym_SEMI] = ACTIONS(770),
    [anon_sym_EQ] = ACTIONS(770),
    [anon_sym_deriving] = ACTIONS(770),
    [sym__variable_pattern] = ACTIONS(772),
    [sym__constructor_pattern] = ACTIONS(772),
    [sym_comment] = ACTIONS(54),
  },
  [292] = {
    [sym_new_constructor] = STATE(394),
    [sym_constructor_identifier] = STATE(294),
    [sym__constructor_pattern] = ACTIONS(88),
    [sym_comment] = ACTIONS(54),
  },
  [293] = {
    [sym_deriving] = STATE(395),
    [sym__layout_semicolon] = ACTIONS(828),
    [anon_sym_SEMI] = ACTIONS(830),
    [anon_sym_deriving] = ACTIONS(288),
    [sym_comment] = ACTIONS(54),
  },
  [294] = {
    [sym__identifier] = STATE(396),
    [sym_variable_identifier] = STATE(288),
    [sym_constructor_identifier] = STATE(288),
    [sym_fields] = STATE(396),
    [anon_sym_LBRACE] = ACTIONS(556),
    [sym__variable_pattern] = ACTIONS(416),
    [sym__constructor_pattern] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [295] = {
    [anon_sym_LBRACE] = ACTIONS(770),
    [anon_sym_LPAREN] = ACTIONS(770),
    [anon_sym_COMMA] = ACTIONS(770),
    [anon_sym_RPAREN] = ACTIONS(770),
    [anon_sym_EQ] = ACTIONS(770),
    [anon_sym_DASH_GT] = ACTIONS(770),
    [sym_unit_type] = ACTIONS(770),
    [sym_list_constructor] = ACTIONS(770),
    [sym_function_constructor] = ACTIONS(770),
    [anon_sym_LBRACK] = ACTIONS(770),
    [anon_sym_RBRACK] = ACTIONS(770),
    [sym__variable_pattern] = ACTIONS(770),
    [sym__constructor_pattern] = ACTIONS(772),
    [sym_module_identifier] = ACTIONS(772),
    [sym_comment] = ACTIONS(54),
  },
  [296] = {
    [sym_type] = STATE(326),
    [sym__generic_type_constructor] = STATE(327),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(327),
    [sym_list] = STATE(327),
    [sym_parenthesized_constructor] = STATE(327),
    [sym_variable_identifier] = STATE(329),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(330),
    [anon_sym_LPAREN] = ACTIONS(634),
    [anon_sym_COMMA] = ACTIONS(636),
    [sym_unit_type] = ACTIONS(638),
    [sym_list_constructor] = ACTIONS(638),
    [sym_function_constructor] = ACTIONS(638),
    [anon_sym_LBRACK] = ACTIONS(640),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(650),
    [sym_module_identifier] = ACTIONS(644),
    [sym_comment] = ACTIONS(54),
  },
  [297] = {
    [sym_variable_identifier] = STATE(337),
    [aux_sym_type_class_repeat1] = STATE(338),
    [sym__layout_semicolon] = ACTIONS(654),
    [anon_sym_SEMI] = ACTIONS(656),
    [anon_sym_DASH_GT] = ACTIONS(656),
    [sym__variable_pattern] = ACTIONS(376),
    [sym_comment] = ACTIONS(54),
  },
  [298] = {
    [sym__layout_semicolon] = ACTIONS(832),
    [anon_sym_SEMI] = ACTIONS(834),
    [sym_comment] = ACTIONS(54),
  },
  [299] = {
    [sym_comment] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(836),
  },
  [300] = {
    [sym_comment] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(838),
  },
  [301] = {
    [sym_comment] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(840),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(840),
  },
  [302] = {
    [sym_comment] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(842),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(844),
  },
  [303] = {
    [sym_comment] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(846),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(846),
  },
  [304] = {
    [sym_comment] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(842),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(848),
  },
  [305] = {
    [anon_sym_SEMI] = ACTIONS(850),
    [anon_sym_LBRACE] = ACTIONS(850),
    [anon_sym_RBRACE] = ACTIONS(850),
    [anon_sym_LPAREN] = ACTIONS(850),
    [anon_sym_RPAREN] = ACTIONS(850),
    [anon_sym_EQ] = ACTIONS(850),
    [anon_sym_AT] = ACTIONS(850),
    [anon_sym_BQUOTE] = ACTIONS(850),
    [anon_sym_DASH] = ACTIONS(850),
    [anon_sym__] = ACTIONS(850),
    [anon_sym_COLON] = ACTIONS(850),
    [anon_sym_LBRACK] = ACTIONS(850),
    [anon_sym_RBRACK] = ACTIONS(850),
    [anon_sym_PIPE] = ACTIONS(850),
    [anon_sym_BANG] = ACTIONS(850),
    [anon_sym_DOT] = ACTIONS(850),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(850),
    [anon_sym_DQUOTE] = ACTIONS(850),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(850),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(850),
    [sym__ascii_large] = ACTIONS(850),
    [anon_sym_POUND] = ACTIONS(850),
    [anon_sym_DOLLAR] = ACTIONS(850),
    [anon_sym_PERCENT] = ACTIONS(850),
    [anon_sym_AMP] = ACTIONS(850),
    [anon_sym_1] = ACTIONS(850),
    [anon_sym_PLUS] = ACTIONS(850),
    [anon_sym_SLASH] = ACTIONS(850),
    [anon_sym_LT] = ACTIONS(850),
    [anon_sym_GT] = ACTIONS(850),
    [anon_sym_QMARK] = ACTIONS(850),
    [anon_sym_CARET] = ACTIONS(850),
    [anon_sym_TILDE] = ACTIONS(850),
    [anon_sym_BSLASH] = ACTIONS(850),
    [sym__space] = ACTIONS(850),
    [sym__newline] = ACTIONS(850),
    [sym__tab] = ACTIONS(850),
    [sym__vertical_tab] = ACTIONS(850),
  },
  [306] = {
    [anon_sym_SEMI] = ACTIONS(852),
    [anon_sym_LBRACE] = ACTIONS(852),
    [anon_sym_RBRACE] = ACTIONS(852),
    [anon_sym_LPAREN] = ACTIONS(852),
    [anon_sym_RPAREN] = ACTIONS(852),
    [anon_sym_EQ] = ACTIONS(852),
    [anon_sym_AT] = ACTIONS(852),
    [anon_sym_BQUOTE] = ACTIONS(852),
    [anon_sym_DASH] = ACTIONS(852),
    [anon_sym__] = ACTIONS(852),
    [anon_sym_COLON] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(852),
    [anon_sym_RBRACK] = ACTIONS(852),
    [anon_sym_PIPE] = ACTIONS(852),
    [anon_sym_BANG] = ACTIONS(852),
    [anon_sym_DOT] = ACTIONS(852),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(852),
    [anon_sym_DQUOTE] = ACTIONS(852),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(852),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(852),
    [sym__ascii_large] = ACTIONS(852),
    [anon_sym_POUND] = ACTIONS(852),
    [anon_sym_DOLLAR] = ACTIONS(852),
    [anon_sym_PERCENT] = ACTIONS(852),
    [anon_sym_AMP] = ACTIONS(852),
    [anon_sym_1] = ACTIONS(852),
    [anon_sym_PLUS] = ACTIONS(852),
    [anon_sym_SLASH] = ACTIONS(852),
    [anon_sym_LT] = ACTIONS(852),
    [anon_sym_GT] = ACTIONS(852),
    [anon_sym_QMARK] = ACTIONS(852),
    [anon_sym_CARET] = ACTIONS(852),
    [anon_sym_TILDE] = ACTIONS(852),
    [anon_sym_BSLASH] = ACTIONS(852),
    [sym__space] = ACTIONS(852),
    [sym__newline] = ACTIONS(852),
    [sym__tab] = ACTIONS(852),
    [sym__vertical_tab] = ACTIONS(852),
  },
  [307] = {
    [anon_sym_SEMI] = ACTIONS(854),
    [anon_sym_LBRACE] = ACTIONS(854),
    [anon_sym_RBRACE] = ACTIONS(854),
    [anon_sym_LPAREN] = ACTIONS(854),
    [anon_sym_RPAREN] = ACTIONS(854),
    [anon_sym_EQ] = ACTIONS(854),
    [anon_sym_AT] = ACTIONS(854),
    [anon_sym_BQUOTE] = ACTIONS(854),
    [anon_sym_DASH] = ACTIONS(854),
    [anon_sym__] = ACTIONS(854),
    [anon_sym_COLON] = ACTIONS(854),
    [anon_sym_LBRACK] = ACTIONS(854),
    [anon_sym_RBRACK] = ACTIONS(854),
    [anon_sym_PIPE] = ACTIONS(854),
    [anon_sym_BANG] = ACTIONS(854),
    [anon_sym_DOT] = ACTIONS(854),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(854),
    [anon_sym_DQUOTE] = ACTIONS(854),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(854),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(854),
    [sym__ascii_large] = ACTIONS(854),
    [anon_sym_POUND] = ACTIONS(854),
    [anon_sym_DOLLAR] = ACTIONS(854),
    [anon_sym_PERCENT] = ACTIONS(854),
    [anon_sym_AMP] = ACTIONS(854),
    [anon_sym_1] = ACTIONS(854),
    [anon_sym_PLUS] = ACTIONS(854),
    [anon_sym_SLASH] = ACTIONS(854),
    [anon_sym_LT] = ACTIONS(854),
    [anon_sym_GT] = ACTIONS(854),
    [anon_sym_QMARK] = ACTIONS(854),
    [anon_sym_CARET] = ACTIONS(854),
    [anon_sym_TILDE] = ACTIONS(854),
    [anon_sym_BSLASH] = ACTIONS(854),
    [sym__space] = ACTIONS(854),
    [sym__newline] = ACTIONS(854),
    [sym__tab] = ACTIONS(854),
    [sym__vertical_tab] = ACTIONS(854),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(854),
  },
  [308] = {
    [anon_sym_SEMI] = ACTIONS(856),
    [anon_sym_LBRACE] = ACTIONS(856),
    [anon_sym_RBRACE] = ACTIONS(856),
    [anon_sym_LPAREN] = ACTIONS(856),
    [anon_sym_RPAREN] = ACTIONS(856),
    [anon_sym_EQ] = ACTIONS(856),
    [anon_sym_AT] = ACTIONS(856),
    [anon_sym_BQUOTE] = ACTIONS(856),
    [anon_sym_DASH] = ACTIONS(856),
    [anon_sym__] = ACTIONS(856),
    [anon_sym_COLON] = ACTIONS(856),
    [anon_sym_LBRACK] = ACTIONS(856),
    [anon_sym_RBRACK] = ACTIONS(856),
    [anon_sym_PIPE] = ACTIONS(856),
    [anon_sym_BANG] = ACTIONS(856),
    [anon_sym_DOT] = ACTIONS(856),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(856),
    [anon_sym_DQUOTE] = ACTIONS(856),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(856),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(856),
    [sym__ascii_large] = ACTIONS(856),
    [anon_sym_POUND] = ACTIONS(856),
    [anon_sym_DOLLAR] = ACTIONS(856),
    [anon_sym_PERCENT] = ACTIONS(856),
    [anon_sym_AMP] = ACTIONS(856),
    [anon_sym_1] = ACTIONS(856),
    [anon_sym_PLUS] = ACTIONS(856),
    [anon_sym_SLASH] = ACTIONS(856),
    [anon_sym_LT] = ACTIONS(856),
    [anon_sym_GT] = ACTIONS(856),
    [anon_sym_QMARK] = ACTIONS(856),
    [anon_sym_CARET] = ACTIONS(856),
    [anon_sym_TILDE] = ACTIONS(856),
    [anon_sym_BSLASH] = ACTIONS(856),
    [sym__space] = ACTIONS(856),
    [sym__newline] = ACTIONS(856),
    [sym__tab] = ACTIONS(856),
    [sym__vertical_tab] = ACTIONS(856),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(858),
  },
  [309] = {
    [anon_sym_SEMI] = ACTIONS(860),
    [anon_sym_LBRACE] = ACTIONS(860),
    [anon_sym_RBRACE] = ACTIONS(860),
    [anon_sym_LPAREN] = ACTIONS(860),
    [anon_sym_RPAREN] = ACTIONS(860),
    [anon_sym_EQ] = ACTIONS(860),
    [anon_sym_AT] = ACTIONS(860),
    [anon_sym_BQUOTE] = ACTIONS(860),
    [anon_sym_DASH] = ACTIONS(860),
    [anon_sym__] = ACTIONS(860),
    [anon_sym_COLON] = ACTIONS(860),
    [anon_sym_LBRACK] = ACTIONS(860),
    [anon_sym_RBRACK] = ACTIONS(860),
    [anon_sym_PIPE] = ACTIONS(860),
    [anon_sym_BANG] = ACTIONS(860),
    [anon_sym_DOT] = ACTIONS(860),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(860),
    [anon_sym_DQUOTE] = ACTIONS(860),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(860),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(860),
    [sym__ascii_large] = ACTIONS(860),
    [anon_sym_POUND] = ACTIONS(860),
    [anon_sym_DOLLAR] = ACTIONS(860),
    [anon_sym_PERCENT] = ACTIONS(860),
    [anon_sym_AMP] = ACTIONS(860),
    [anon_sym_1] = ACTIONS(860),
    [anon_sym_PLUS] = ACTIONS(860),
    [anon_sym_SLASH] = ACTIONS(860),
    [anon_sym_LT] = ACTIONS(860),
    [anon_sym_GT] = ACTIONS(860),
    [anon_sym_QMARK] = ACTIONS(860),
    [anon_sym_CARET] = ACTIONS(860),
    [anon_sym_TILDE] = ACTIONS(860),
    [anon_sym_BSLASH] = ACTIONS(860),
    [sym__space] = ACTIONS(860),
    [sym__newline] = ACTIONS(860),
    [sym__tab] = ACTIONS(860),
    [sym__vertical_tab] = ACTIONS(860),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(860),
  },
  [310] = {
    [anon_sym_SEMI] = ACTIONS(856),
    [anon_sym_LBRACE] = ACTIONS(856),
    [anon_sym_RBRACE] = ACTIONS(856),
    [anon_sym_LPAREN] = ACTIONS(856),
    [anon_sym_RPAREN] = ACTIONS(856),
    [anon_sym_EQ] = ACTIONS(856),
    [anon_sym_AT] = ACTIONS(856),
    [anon_sym_BQUOTE] = ACTIONS(856),
    [anon_sym_DASH] = ACTIONS(856),
    [anon_sym__] = ACTIONS(856),
    [anon_sym_COLON] = ACTIONS(856),
    [anon_sym_LBRACK] = ACTIONS(856),
    [anon_sym_RBRACK] = ACTIONS(856),
    [anon_sym_PIPE] = ACTIONS(856),
    [anon_sym_BANG] = ACTIONS(856),
    [anon_sym_DOT] = ACTIONS(856),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(856),
    [anon_sym_DQUOTE] = ACTIONS(856),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(856),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(856),
    [sym__ascii_large] = ACTIONS(856),
    [anon_sym_POUND] = ACTIONS(856),
    [anon_sym_DOLLAR] = ACTIONS(856),
    [anon_sym_PERCENT] = ACTIONS(856),
    [anon_sym_AMP] = ACTIONS(856),
    [anon_sym_1] = ACTIONS(856),
    [anon_sym_PLUS] = ACTIONS(856),
    [anon_sym_SLASH] = ACTIONS(856),
    [anon_sym_LT] = ACTIONS(856),
    [anon_sym_GT] = ACTIONS(856),
    [anon_sym_QMARK] = ACTIONS(856),
    [anon_sym_CARET] = ACTIONS(856),
    [anon_sym_TILDE] = ACTIONS(856),
    [anon_sym_BSLASH] = ACTIONS(856),
    [sym__space] = ACTIONS(856),
    [sym__newline] = ACTIONS(856),
    [sym__tab] = ACTIONS(856),
    [sym__vertical_tab] = ACTIONS(856),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(862),
  },
  [311] = {
    [sym__layout_semicolon] = ACTIONS(864),
    [anon_sym_SEMI] = ACTIONS(866),
    [sym__variable_pattern] = ACTIONS(866),
    [sym__constructor_pattern] = ACTIONS(868),
    [sym_comment] = ACTIONS(54),
    [sym_float] = ACTIONS(868),
    [anon_sym_SQUOTE] = ACTIONS(866),
    [anon_sym_DQUOTE] = ACTIONS(866),
    [sym__integer_literal] = ACTIONS(866),
    [sym__octal_literal] = ACTIONS(866),
    [sym__hexidecimal_literal] = ACTIONS(866),
  },
  [312] = {
    [anon_sym_LPAREN] = ACTIONS(440),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_AT] = ACTIONS(440),
    [anon_sym_DASH] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_BANG] = ACTIONS(440),
    [sym__variable_pattern] = ACTIONS(440),
    [sym__constructor_pattern] = ACTIONS(440),
    [anon_sym_DOT] = ACTIONS(440),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(440),
    [anon_sym_SQUOTE] = ACTIONS(440),
    [anon_sym_DQUOTE] = ACTIONS(440),
    [anon_sym_POUND] = ACTIONS(440),
    [anon_sym_DOLLAR] = ACTIONS(440),
    [anon_sym_PERCENT] = ACTIONS(440),
    [anon_sym_AMP] = ACTIONS(440),
    [anon_sym_1] = ACTIONS(440),
    [anon_sym_PLUS] = ACTIONS(440),
    [anon_sym_SLASH] = ACTIONS(440),
    [anon_sym_LT] = ACTIONS(440),
    [anon_sym_GT] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_CARET] = ACTIONS(440),
    [anon_sym_TILDE] = ACTIONS(440),
    [anon_sym_BSLASH] = ACTIONS(440),
    [sym__integer_literal] = ACTIONS(440),
    [sym__octal_literal] = ACTIONS(440),
    [sym__hexidecimal_literal] = ACTIONS(440),
  },
  [313] = {
    [anon_sym_LPAREN] = ACTIONS(578),
    [anon_sym_EQ] = ACTIONS(578),
    [anon_sym_AT] = ACTIONS(578),
    [anon_sym_DASH] = ACTIONS(578),
    [anon_sym__] = ACTIONS(578),
    [anon_sym_COLON] = ACTIONS(578),
    [anon_sym_PIPE] = ACTIONS(578),
    [anon_sym_BANG] = ACTIONS(578),
    [sym__variable_pattern] = ACTIONS(578),
    [sym__constructor_pattern] = ACTIONS(578),
    [anon_sym_DOT] = ACTIONS(578),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(578),
    [anon_sym_SQUOTE] = ACTIONS(578),
    [anon_sym_DQUOTE] = ACTIONS(578),
    [anon_sym_POUND] = ACTIONS(578),
    [anon_sym_DOLLAR] = ACTIONS(578),
    [anon_sym_PERCENT] = ACTIONS(578),
    [anon_sym_AMP] = ACTIONS(578),
    [anon_sym_1] = ACTIONS(578),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_SLASH] = ACTIONS(578),
    [anon_sym_LT] = ACTIONS(578),
    [anon_sym_GT] = ACTIONS(578),
    [anon_sym_QMARK] = ACTIONS(578),
    [anon_sym_CARET] = ACTIONS(578),
    [anon_sym_TILDE] = ACTIONS(578),
    [anon_sym_BSLASH] = ACTIONS(578),
    [sym__integer_literal] = ACTIONS(578),
    [sym__octal_literal] = ACTIONS(578),
    [sym__hexidecimal_literal] = ACTIONS(578),
  },
  [314] = {
    [anon_sym_LPAREN] = ACTIONS(610),
    [anon_sym_EQ] = ACTIONS(610),
    [anon_sym_AT] = ACTIONS(610),
    [anon_sym_DASH] = ACTIONS(610),
    [anon_sym__] = ACTIONS(610),
    [anon_sym_COLON] = ACTIONS(610),
    [anon_sym_PIPE] = ACTIONS(610),
    [anon_sym_BANG] = ACTIONS(610),
    [sym__variable_pattern] = ACTIONS(610),
    [sym__constructor_pattern] = ACTIONS(610),
    [anon_sym_DOT] = ACTIONS(610),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(610),
    [anon_sym_SQUOTE] = ACTIONS(610),
    [anon_sym_DQUOTE] = ACTIONS(610),
    [anon_sym_POUND] = ACTIONS(610),
    [anon_sym_DOLLAR] = ACTIONS(610),
    [anon_sym_PERCENT] = ACTIONS(610),
    [anon_sym_AMP] = ACTIONS(610),
    [anon_sym_1] = ACTIONS(610),
    [anon_sym_PLUS] = ACTIONS(610),
    [anon_sym_SLASH] = ACTIONS(610),
    [anon_sym_LT] = ACTIONS(610),
    [anon_sym_GT] = ACTIONS(610),
    [anon_sym_QMARK] = ACTIONS(610),
    [anon_sym_CARET] = ACTIONS(610),
    [anon_sym_TILDE] = ACTIONS(610),
    [anon_sym_BSLASH] = ACTIONS(610),
    [sym__integer_literal] = ACTIONS(610),
    [sym__octal_literal] = ACTIONS(610),
    [sym__hexidecimal_literal] = ACTIONS(610),
  },
  [315] = {
    [anon_sym_LPAREN] = ACTIONS(870),
    [anon_sym_EQ] = ACTIONS(870),
    [anon_sym_AT] = ACTIONS(870),
    [anon_sym_DASH] = ACTIONS(870),
    [anon_sym__] = ACTIONS(870),
    [anon_sym_COLON] = ACTIONS(870),
    [anon_sym_PIPE] = ACTIONS(870),
    [anon_sym_BANG] = ACTIONS(870),
    [sym__variable_pattern] = ACTIONS(870),
    [sym__constructor_pattern] = ACTIONS(870),
    [anon_sym_DOT] = ACTIONS(870),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(870),
    [anon_sym_SQUOTE] = ACTIONS(870),
    [anon_sym_DQUOTE] = ACTIONS(870),
    [anon_sym_POUND] = ACTIONS(870),
    [anon_sym_DOLLAR] = ACTIONS(870),
    [anon_sym_PERCENT] = ACTIONS(870),
    [anon_sym_AMP] = ACTIONS(870),
    [anon_sym_1] = ACTIONS(870),
    [anon_sym_PLUS] = ACTIONS(870),
    [anon_sym_SLASH] = ACTIONS(870),
    [anon_sym_LT] = ACTIONS(870),
    [anon_sym_GT] = ACTIONS(870),
    [anon_sym_QMARK] = ACTIONS(870),
    [anon_sym_CARET] = ACTIONS(870),
    [anon_sym_TILDE] = ACTIONS(870),
    [anon_sym_BSLASH] = ACTIONS(870),
    [sym__integer_literal] = ACTIONS(870),
    [sym__octal_literal] = ACTIONS(870),
    [sym__hexidecimal_literal] = ACTIONS(870),
  },
  [316] = {
    [anon_sym_RBRACE] = ACTIONS(872),
    [sym_comment] = ACTIONS(54),
  },
  [317] = {
    [anon_sym_RBRACE] = ACTIONS(874),
    [sym__variable_pattern] = ACTIONS(874),
    [sym__constructor_pattern] = ACTIONS(876),
    [sym_comment] = ACTIONS(54),
  },
  [318] = {
    [anon_sym_EQ] = ACTIONS(878),
    [sym_comment] = ACTIONS(54),
  },
  [319] = {
    [sym_label] = STATE(403),
    [sym__identifier] = STATE(318),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [anon_sym_RBRACE] = ACTIONS(880),
    [sym__variable_pattern] = ACTIONS(302),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [320] = {
    [sym_type] = STATE(405),
    [sym__generic_type_constructor] = STATE(327),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(327),
    [sym_list] = STATE(327),
    [sym_parenthesized_constructor] = STATE(327),
    [sym_variable_identifier] = STATE(329),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(330),
    [anon_sym_LPAREN] = ACTIONS(634),
    [anon_sym_COMMA] = ACTIONS(882),
    [sym_unit_type] = ACTIONS(638),
    [sym_list_constructor] = ACTIONS(638),
    [sym_function_constructor] = ACTIONS(638),
    [anon_sym_LBRACK] = ACTIONS(640),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(650),
    [sym_module_identifier] = ACTIONS(644),
    [sym_comment] = ACTIONS(54),
  },
  [321] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(408),
    [anon_sym_COMMA] = ACTIONS(884),
    [anon_sym_RPAREN] = ACTIONS(886),
    [sym_comment] = ACTIONS(54),
  },
  [322] = {
    [anon_sym_LPAREN] = ACTIONS(648),
    [anon_sym_COMMA] = ACTIONS(648),
    [anon_sym_RPAREN] = ACTIONS(648),
    [anon_sym_DASH_GT] = ACTIONS(648),
    [sym_unit_type] = ACTIONS(648),
    [sym_list_constructor] = ACTIONS(648),
    [sym_function_constructor] = ACTIONS(648),
    [anon_sym_LBRACK] = ACTIONS(648),
    [anon_sym_RBRACK] = ACTIONS(648),
    [sym__variable_pattern] = ACTIONS(648),
    [sym__constructor_pattern] = ACTIONS(888),
    [sym_module_identifier] = ACTIONS(888),
    [sym_comment] = ACTIONS(54),
  },
  [323] = {
    [sym_type] = STATE(333),
    [sym__generic_type_constructor] = STATE(334),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(334),
    [sym_list] = STATE(334),
    [sym_parenthesized_constructor] = STATE(334),
    [sym_variable_identifier] = STATE(335),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(330),
    [aux_sym_list_repeat1] = STATE(409),
    [anon_sym_LPAREN] = ACTIONS(634),
    [sym_unit_type] = ACTIONS(638),
    [sym_list_constructor] = ACTIONS(638),
    [sym_function_constructor] = ACTIONS(638),
    [anon_sym_LBRACK] = ACTIONS(640),
    [sym__variable_pattern] = ACTIONS(298),
    [sym__constructor_pattern] = ACTIONS(650),
    [sym_module_identifier] = ACTIONS(652),
    [sym_comment] = ACTIONS(54),
  },
  [324] = {
    [sym_variable_identifier] = STATE(179),
    [aux_sym_type_class_repeat1] = STATE(410),
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_COMMA] = ACTIONS(656),
    [anon_sym_RPAREN] = ACTIONS(656),
    [anon_sym_DASH_GT] = ACTIONS(656),
    [sym__variable_pattern] = ACTIONS(250),
    [sym_comment] = ACTIONS(54),
  },
  [325] = {
    [sym_constructor_identifier] = STATE(412),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(413),
    [sym__constructor_pattern] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(890),
    [sym_comment] = ACTIONS(54),
  },
  [326] = {
    [aux_sym_tuple_repeat1] = STATE(416),
    [anon_sym_COMMA] = ACTIONS(892),
    [anon_sym_RPAREN] = ACTIONS(894),
    [sym_comment] = ACTIONS(54),
  },
  [327] = {
    [anon_sym_COMMA] = ACTIONS(666),
    [anon_sym_RPAREN] = ACTIONS(666),
    [anon_sym_DASH_GT] = ACTIONS(896),
    [sym_comment] = ACTIONS(54),
  },
  [328] = {
    [aux_sym_context_repeat1] = STATE(419),
    [anon_sym_COMMA] = ACTIONS(496),
    [anon_sym_RPAREN] = ACTIONS(898),
    [sym_comment] = ACTIONS(54),
  },
  [329] = {
    [anon_sym_COMMA] = ACTIONS(674),
    [anon_sym_RPAREN] = ACTIONS(674),
    [anon_sym_DASH_GT] = ACTIONS(900),
    [sym_comment] = ACTIONS(54),
  },
  [330] = {
    [anon_sym_LPAREN] = ACTIONS(680),
    [anon_sym_COMMA] = ACTIONS(680),
    [anon_sym_RPAREN] = ACTIONS(680),
    [anon_sym_DASH_GT] = ACTIONS(680),
    [sym_unit_type] = ACTIONS(680),
    [sym_list_constructor] = ACTIONS(680),
    [sym_function_constructor] = ACTIONS(680),
    [anon_sym_LBRACK] = ACTIONS(680),
    [anon_sym_RBRACK] = ACTIONS(680),
    [sym__variable_pattern] = ACTIONS(680),
    [sym__constructor_pattern] = ACTIONS(902),
    [sym_module_identifier] = ACTIONS(902),
    [sym_comment] = ACTIONS(54),
  },
  [331] = {
    [sym_variable_identifier] = STATE(179),
    [aux_sym_type_class_repeat1] = STATE(410),
    [anon_sym_LPAREN] = ACTIONS(656),
    [anon_sym_COMMA] = ACTIONS(656),
    [anon_sym_RPAREN] = ACTIONS(656),
    [anon_sym_DASH_GT] = ACTIONS(656),
    [sym_unit_type] = ACTIONS(656),
    [sym_list_constructor] = ACTIONS(656),
    [sym_function_constructor] = ACTIONS(656),
    [anon_sym_LBRACK] = ACTIONS(656),
    [anon_sym_RBRACK] = ACTIONS(656),
    [sym__variable_pattern] = ACTIONS(298),
    [sym__constructor_pattern] = ACTIONS(904),
    [sym_module_identifier] = ACTIONS(904),
    [sym_comment] = ACTIONS(54),
  },
  [332] = {
    [sym_constructor_identifier] = STATE(412),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(423),
    [sym__constructor_pattern] = ACTIONS(906),
    [anon_sym_DOT] = ACTIONS(908),
    [sym_comment] = ACTIONS(54),
  },
  [333] = {
    [anon_sym_LPAREN] = ACTIONS(910),
    [sym_unit_type] = ACTIONS(910),
    [sym_list_constructor] = ACTIONS(910),
    [sym_function_constructor] = ACTIONS(910),
    [anon_sym_LBRACK] = ACTIONS(910),
    [anon_sym_RBRACK] = ACTIONS(910),
    [sym__variable_pattern] = ACTIONS(910),
    [sym__constructor_pattern] = ACTIONS(912),
    [sym_module_identifier] = ACTIONS(912),
    [sym_comment] = ACTIONS(54),
  },
  [334] = {
    [anon_sym_LPAREN] = ACTIONS(666),
    [anon_sym_DASH_GT] = ACTIONS(914),
    [sym_unit_type] = ACTIONS(666),
    [sym_list_constructor] = ACTIONS(666),
    [sym_function_constructor] = ACTIONS(666),
    [anon_sym_LBRACK] = ACTIONS(666),
    [anon_sym_RBRACK] = ACTIONS(666),
    [sym__variable_pattern] = ACTIONS(666),
    [sym__constructor_pattern] = ACTIONS(916),
    [sym_module_identifier] = ACTIONS(916),
    [sym_comment] = ACTIONS(54),
  },
  [335] = {
    [anon_sym_LPAREN] = ACTIONS(674),
    [anon_sym_DASH_GT] = ACTIONS(918),
    [sym_unit_type] = ACTIONS(674),
    [sym_list_constructor] = ACTIONS(674),
    [sym_function_constructor] = ACTIONS(674),
    [anon_sym_LBRACK] = ACTIONS(674),
    [anon_sym_RBRACK] = ACTIONS(674),
    [sym__variable_pattern] = ACTIONS(674),
    [sym__constructor_pattern] = ACTIONS(920),
    [sym_module_identifier] = ACTIONS(920),
    [sym_comment] = ACTIONS(54),
  },
  [336] = {
    [sym_type] = STATE(427),
    [sym__generic_type_constructor] = STATE(334),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(334),
    [sym_list] = STATE(334),
    [sym_parenthesized_constructor] = STATE(334),
    [sym_variable_identifier] = STATE(335),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(330),
    [anon_sym_LPAREN] = ACTIONS(634),
    [sym_unit_type] = ACTIONS(638),
    [sym_list_constructor] = ACTIONS(638),
    [sym_function_constructor] = ACTIONS(638),
    [anon_sym_LBRACK] = ACTIONS(640),
    [anon_sym_RBRACK] = ACTIONS(922),
    [sym__variable_pattern] = ACTIONS(298),
    [sym__constructor_pattern] = ACTIONS(650),
    [sym_module_identifier] = ACTIONS(652),
    [sym_comment] = ACTIONS(54),
  },
  [337] = {
    [sym__layout_semicolon] = ACTIONS(560),
    [anon_sym_SEMI] = ACTIONS(508),
    [anon_sym_DASH_GT] = ACTIONS(508),
    [sym__variable_pattern] = ACTIONS(508),
    [sym_comment] = ACTIONS(54),
  },
  [338] = {
    [sym_variable_identifier] = STATE(428),
    [sym__layout_semicolon] = ACTIONS(924),
    [anon_sym_SEMI] = ACTIONS(926),
    [anon_sym_DASH_GT] = ACTIONS(926),
    [sym__variable_pattern] = ACTIONS(376),
    [sym_comment] = ACTIONS(54),
  },
  [339] = {
    [sym_constructor_identifier] = STATE(430),
    [sym__constructor_pattern] = ACTIONS(378),
    [sym_module_identifier] = ACTIONS(928),
    [sym_comment] = ACTIONS(54),
  },
  [340] = {
    [sym_variable_identifier] = STATE(337),
    [aux_sym_type_class_repeat1] = STATE(431),
    [sym__layout_semicolon] = ACTIONS(930),
    [anon_sym_SEMI] = ACTIONS(932),
    [anon_sym_DASH_GT] = ACTIONS(932),
    [sym__variable_pattern] = ACTIONS(376),
    [sym_comment] = ACTIONS(54),
  },
  [341] = {
    [sym_constructor_identifier] = STATE(430),
    [sym__constructor_pattern] = ACTIONS(378),
    [anon_sym_DOT] = ACTIONS(934),
    [sym_comment] = ACTIONS(54),
  },
  [342] = {
    [sym_type] = STATE(433),
    [sym__generic_type_constructor] = STATE(219),
    [sym_tupling_constructor] = STATE(214),
    [sym_tuple] = STATE(219),
    [sym_list] = STATE(219),
    [sym_parenthesized_constructor] = STATE(219),
    [sym_variable_identifier] = STATE(222),
    [sym__type_constructors] = STATE(214),
    [sym_qualified_type_constructor] = STATE(223),
    [anon_sym_LPAREN] = ACTIONS(570),
    [sym_unit_type] = ACTIONS(412),
    [sym_list_constructor] = ACTIONS(412),
    [sym_function_constructor] = ACTIONS(412),
    [anon_sym_LBRACK] = ACTIONS(414),
    [sym__variable_pattern] = ACTIONS(416),
    [sym__constructor_pattern] = ACTIONS(572),
    [sym_module_identifier] = ACTIONS(420),
    [sym_comment] = ACTIONS(54),
  },
  [343] = {
    [sym__layout_semicolon] = ACTIONS(936),
    [anon_sym_SEMI] = ACTIONS(938),
    [sym_comment] = ACTIONS(54),
  },
  [344] = {
    [anon_sym_LPAREN] = ACTIONS(940),
    [sym_unit_type] = ACTIONS(940),
    [sym_list_constructor] = ACTIONS(940),
    [sym_function_constructor] = ACTIONS(940),
    [anon_sym_LBRACK] = ACTIONS(940),
    [sym__variable_pattern] = ACTIONS(940),
    [sym__constructor_pattern] = ACTIONS(502),
    [sym_module_identifier] = ACTIONS(502),
    [sym_comment] = ACTIONS(54),
  },
  [345] = {
    [sym_type] = STATE(434),
    [sym__generic_type_constructor] = STATE(219),
    [sym_tupling_constructor] = STATE(214),
    [sym_tuple] = STATE(219),
    [sym_list] = STATE(219),
    [sym_parenthesized_constructor] = STATE(219),
    [sym_variable_identifier] = STATE(222),
    [sym__type_constructors] = STATE(214),
    [sym_qualified_type_constructor] = STATE(223),
    [anon_sym_LPAREN] = ACTIONS(570),
    [sym_unit_type] = ACTIONS(412),
    [sym_list_constructor] = ACTIONS(412),
    [sym_function_constructor] = ACTIONS(412),
    [anon_sym_LBRACK] = ACTIONS(414),
    [sym__variable_pattern] = ACTIONS(416),
    [sym__constructor_pattern] = ACTIONS(572),
    [sym_module_identifier] = ACTIONS(420),
    [sym_comment] = ACTIONS(54),
  },
  [346] = {
    [ts_builtin_sym_end] = ACTIONS(942),
    [sym_comment] = ACTIONS(54),
  },
  [347] = {
    [sym__layout_semicolon] = ACTIONS(944),
    [anon_sym_SEMI] = ACTIONS(946),
    [sym_comment] = ACTIONS(54),
  },
  [348] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(437),
    [sym_function_declaration] = STATE(22),
    [sym_function_head] = STATE(24),
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(26),
    [sym_qualified_variable_symbol] = STATE(26),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(27),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(28),
    [sym_variable_symbol] = STATE(26),
    [sym_type_signature] = STATE(28),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(27),
    [sym__identifier] = STATE(29),
    [sym_variable_identifier] = STATE(30),
    [sym_constructor_identifier] = STATE(31),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(32),
    [aux_sym_variable_symbol_repeat1] = STATE(34),
    [sym__layout_close_brace] = ACTIONS(948),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_foreign] = ACTIONS(20),
    [anon_sym_default] = ACTIONS(22),
    [anon_sym_do] = ACTIONS(24),
    [anon_sym_class] = ACTIONS(26),
    [anon_sym_instance] = ACTIONS(28),
    [anon_sym_infixl] = ACTIONS(30),
    [anon_sym_infixr] = ACTIONS(30),
    [anon_sym_infix] = ACTIONS(30),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_data] = ACTIONS(32),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(34),
    [anon_sym_BANG] = ACTIONS(18),
    [anon_sym_type] = ACTIONS(36),
    [sym__variable_pattern] = ACTIONS(38),
    [sym__constructor_pattern] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(44),
    [anon_sym_SQUOTE] = ACTIONS(46),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
    [sym__integer_literal] = ACTIONS(50),
    [sym__octal_literal] = ACTIONS(50),
    [sym__hexidecimal_literal] = ACTIONS(50),
  },
  [349] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(113),
    [sym_function_declaration] = STATE(22),
    [sym_function_head] = STATE(24),
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(26),
    [sym_qualified_variable_symbol] = STATE(26),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(27),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(28),
    [sym_variable_symbol] = STATE(26),
    [sym_type_signature] = STATE(28),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(27),
    [sym__identifier] = STATE(29),
    [sym_variable_identifier] = STATE(30),
    [sym_constructor_identifier] = STATE(31),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(32),
    [aux_sym_variable_symbol_repeat1] = STATE(34),
    [anon_sym_RBRACE] = ACTIONS(950),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(18),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_DASH] = ACTIONS(18),
    [anon_sym_foreign] = ACTIONS(20),
    [anon_sym_default] = ACTIONS(22),
    [anon_sym_do] = ACTIONS(24),
    [anon_sym_class] = ACTIONS(26),
    [anon_sym_instance] = ACTIONS(28),
    [anon_sym_infixl] = ACTIONS(30),
    [anon_sym_infixr] = ACTIONS(30),
    [anon_sym_infix] = ACTIONS(30),
    [anon_sym_COLON] = ACTIONS(18),
    [anon_sym_data] = ACTIONS(32),
    [anon_sym_PIPE] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(34),
    [anon_sym_BANG] = ACTIONS(18),
    [anon_sym_type] = ACTIONS(36),
    [sym__variable_pattern] = ACTIONS(38),
    [sym__constructor_pattern] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(18),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(44),
    [anon_sym_SQUOTE] = ACTIONS(46),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [anon_sym_POUND] = ACTIONS(18),
    [anon_sym_DOLLAR] = ACTIONS(18),
    [anon_sym_PERCENT] = ACTIONS(18),
    [anon_sym_AMP] = ACTIONS(18),
    [anon_sym_1] = ACTIONS(18),
    [anon_sym_PLUS] = ACTIONS(18),
    [anon_sym_SLASH] = ACTIONS(18),
    [anon_sym_LT] = ACTIONS(18),
    [anon_sym_GT] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(18),
    [anon_sym_CARET] = ACTIONS(18),
    [anon_sym_TILDE] = ACTIONS(18),
    [anon_sym_BSLASH] = ACTIONS(18),
    [sym__integer_literal] = ACTIONS(50),
    [sym__octal_literal] = ACTIONS(50),
    [sym__hexidecimal_literal] = ACTIONS(50),
  },
  [350] = {
    [sym_export] = STATE(438),
    [sym__identifier] = STATE(230),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [351] = {
    [anon_sym_where] = ACTIONS(952),
    [sym_comment] = ACTIONS(54),
  },
  [352] = {
    [anon_sym_COMMA] = ACTIONS(954),
    [anon_sym_RPAREN] = ACTIONS(956),
    [sym_comment] = ACTIONS(54),
  },
  [353] = {
    [sym__identifier] = STATE(442),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [anon_sym_DOT_DOT] = ACTIONS(958),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [354] = {
    [ts_builtin_sym_end] = ACTIONS(960),
    [sym_comment] = ACTIONS(54),
  },
  [355] = {
    [sym_import_specification] = STATE(443),
    [sym__layout_semicolon] = ACTIONS(962),
    [anon_sym_SEMI] = ACTIONS(964),
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_hiding] = ACTIONS(226),
    [sym_comment] = ACTIONS(54),
  },
  [356] = {
    [sym__identifier] = STATE(445),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [anon_sym_DOT_DOT] = ACTIONS(966),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [357] = {
    [sym__identifier] = STATE(446),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [358] = {
    [sym__layout_semicolon] = ACTIONS(968),
    [anon_sym_SEMI] = ACTIONS(970),
    [sym_comment] = ACTIONS(54),
  },
  [359] = {
    [anon_sym_COMMA] = ACTIONS(972),
    [anon_sym_RPAREN] = ACTIONS(974),
    [sym_comment] = ACTIONS(54),
  },
  [360] = {
    [sym__layout_semicolon] = ACTIONS(962),
    [anon_sym_SEMI] = ACTIONS(964),
    [sym_comment] = ACTIONS(54),
  },
  [361] = {
    [aux_sym_import_specification_repeat1] = STATE(450),
    [anon_sym_LPAREN] = ACTIONS(976),
    [anon_sym_COMMA] = ACTIONS(712),
    [anon_sym_RPAREN] = ACTIONS(974),
    [sym_comment] = ACTIONS(54),
  },
  [362] = {
    [anon_sym_RBRACE] = ACTIONS(344),
    [sym__variable_pattern] = ACTIONS(344),
    [sym__constructor_pattern] = ACTIONS(346),
    [sym_comment] = ACTIONS(54),
  },
  [363] = {
    [sym__gap] = STATE(193),
    [sym__graphic] = STATE(193),
    [sym__small] = STATE(84),
    [sym__large] = STATE(84),
    [sym__symbol] = STATE(84),
    [sym__special] = STATE(84),
    [sym__escape] = STATE(193),
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
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(366),
    [anon_sym_DQUOTE] = ACTIONS(978),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(124),
    [sym__ascii_large] = ACTIONS(132),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_1] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(134),
    [sym__space] = ACTIONS(136),
    [sym__newline] = ACTIONS(136),
    [sym__tab] = ACTIONS(136),
    [sym__vertical_tab] = ACTIONS(136),
  },
  [364] = {
    [sym__layout_semicolon] = ACTIONS(980),
    [anon_sym_SEMI] = ACTIONS(982),
    [sym_comment] = ACTIONS(54),
  },
  [365] = {
    [sym_type_signature] = STATE(452),
    [sym__identifier] = STATE(242),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [366] = {
    [anon_sym_COMMA] = ACTIONS(984),
    [anon_sym_RPAREN] = ACTIONS(984),
    [sym_comment] = ACTIONS(54),
  },
  [367] = {
    [sym__identifier] = STATE(453),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [368] = {
    [sym__layout_semicolon] = ACTIONS(986),
    [anon_sym_SEMI] = ACTIONS(988),
    [sym_comment] = ACTIONS(54),
  },
  [369] = {
    [anon_sym_COMMA] = ACTIONS(990),
    [anon_sym_RPAREN] = ACTIONS(990),
    [sym_comment] = ACTIONS(54),
  },
  [370] = {
    [sym__constructor_pattern] = ACTIONS(992),
    [sym_comment] = ACTIONS(54),
  },
  [371] = {
    [sym_class] = STATE(454),
    [sym_constructor_identifier] = STATE(143),
    [sym__constructor_pattern] = ACTIONS(88),
    [sym_comment] = ACTIONS(54),
  },
  [372] = {
    [anon_sym_EQ_GT] = ACTIONS(994),
    [sym_comment] = ACTIONS(54),
  },
  [373] = {
    [sym__layout_semicolon] = ACTIONS(996),
    [anon_sym_SEMI] = ACTIONS(998),
    [sym_comment] = ACTIONS(54),
  },
  [374] = {
    [sym_general_declarations] = STATE(456),
    [sym__layout_open_brace] = ACTIONS(504),
    [anon_sym_LBRACE] = ACTIONS(506),
    [sym_comment] = ACTIONS(54),
  },
  [375] = {
    [sym__layout_semicolon] = ACTIONS(1000),
    [anon_sym_SEMI] = ACTIONS(1002),
    [sym_comment] = ACTIONS(54),
  },
  [376] = {
    [sym__layout_semicolon] = ACTIONS(1004),
    [anon_sym_SEMI] = ACTIONS(1006),
    [sym_comment] = ACTIONS(54),
  },
  [377] = {
    [sym__general_declaration] = STATE(459),
    [sym_fixity] = STATE(28),
    [sym_type_signature] = STATE(28),
    [sym__identifier] = STATE(242),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [sym__layout_close_brace] = ACTIONS(1008),
    [anon_sym_infixl] = ACTIONS(760),
    [anon_sym_infixr] = ACTIONS(760),
    [anon_sym_infix] = ACTIONS(760),
    [sym__variable_pattern] = ACTIONS(258),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [378] = {
    [sym__layout_semicolon] = ACTIONS(1010),
    [anon_sym_SEMI] = ACTIONS(1012),
    [sym_comment] = ACTIONS(54),
  },
  [379] = {
    [sym__general_declaration] = STATE(461),
    [sym_fixity] = STATE(28),
    [sym_type_signature] = STATE(28),
    [sym__identifier] = STATE(242),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [anon_sym_RBRACE] = ACTIONS(1014),
    [anon_sym_infixl] = ACTIONS(760),
    [anon_sym_infixr] = ACTIONS(760),
    [anon_sym_infix] = ACTIONS(760),
    [sym__variable_pattern] = ACTIONS(258),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [380] = {
    [anon_sym_COMMA] = ACTIONS(1016),
    [anon_sym_RPAREN] = ACTIONS(1016),
    [anon_sym_EQ_GT] = ACTIONS(1016),
    [sym_comment] = ACTIONS(54),
  },
  [381] = {
    [sym__layout_semicolon] = ACTIONS(1018),
    [anon_sym_SEMI] = ACTIONS(1020),
    [sym_comment] = ACTIONS(54),
  },
  [382] = {
    [sym_general_declarations] = STATE(462),
    [sym__layout_open_brace] = ACTIONS(504),
    [anon_sym_LBRACE] = ACTIONS(506),
    [sym_comment] = ACTIONS(54),
  },
  [383] = {
    [sym__layout_semicolon] = ACTIONS(1022),
    [anon_sym_SEMI] = ACTIONS(1024),
    [anon_sym_COMMA] = ACTIONS(1024),
    [sym_comment] = ACTIONS(54),
  },
  [384] = {
    [sym__layout_semicolon] = ACTIONS(1026),
    [anon_sym_SEMI] = ACTIONS(1028),
    [anon_sym_COMMA] = ACTIONS(1028),
    [sym_comment] = ACTIONS(54),
  },
  [385] = {
    [sym_deriving] = STATE(463),
    [sym__layout_semicolon] = ACTIONS(1030),
    [anon_sym_SEMI] = ACTIONS(1032),
    [anon_sym_deriving] = ACTIONS(288),
    [sym_comment] = ACTIONS(54),
  },
  [386] = {
    [sym__layout_semicolon] = ACTIONS(1030),
    [anon_sym_SEMI] = ACTIONS(1032),
    [sym_comment] = ACTIONS(54),
  },
  [387] = {
    [aux_sym_export_repeat1] = STATE(465),
    [anon_sym_COMMA] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(1034),
    [sym_comment] = ACTIONS(54),
  },
  [388] = {
    [sym__layout_semicolon] = ACTIONS(1036),
    [anon_sym_SEMI] = ACTIONS(1038),
    [anon_sym_PIPE] = ACTIONS(1038),
    [anon_sym_deriving] = ACTIONS(1038),
    [sym_comment] = ACTIONS(54),
  },
  [389] = {
    [sym_constructor] = STATE(466),
    [sym_constructor_identifier] = STATE(169),
    [sym__constructor_pattern] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [390] = {
    [aux_sym_fields_repeat1] = STATE(469),
    [anon_sym_RBRACE] = ACTIONS(1040),
    [anon_sym_COMMA] = ACTIONS(1042),
    [sym_comment] = ACTIONS(54),
  },
  [391] = {
    [aux_sym_field_repeat1] = STATE(472),
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_COLON_COLON] = ACTIONS(1046),
    [sym_comment] = ACTIONS(54),
  },
  [392] = {
    [sym__layout_semicolon] = ACTIONS(1048),
    [anon_sym_SEMI] = ACTIONS(1050),
    [anon_sym_PIPE] = ACTIONS(1050),
    [anon_sym_deriving] = ACTIONS(1050),
    [anon_sym_BANG] = ACTIONS(1050),
    [sym__variable_pattern] = ACTIONS(1052),
    [sym__constructor_pattern] = ACTIONS(1052),
    [sym_comment] = ACTIONS(54),
  },
  [393] = {
    [sym__layout_semicolon] = ACTIONS(1054),
    [anon_sym_SEMI] = ACTIONS(1056),
    [anon_sym_PIPE] = ACTIONS(1056),
    [anon_sym_deriving] = ACTIONS(1056),
    [anon_sym_BANG] = ACTIONS(1056),
    [sym__variable_pattern] = ACTIONS(1058),
    [sym__constructor_pattern] = ACTIONS(1058),
    [sym_comment] = ACTIONS(54),
  },
  [394] = {
    [sym_deriving] = STATE(473),
    [sym__layout_semicolon] = ACTIONS(1060),
    [anon_sym_SEMI] = ACTIONS(1062),
    [anon_sym_deriving] = ACTIONS(288),
    [sym_comment] = ACTIONS(54),
  },
  [395] = {
    [sym__layout_semicolon] = ACTIONS(1060),
    [anon_sym_SEMI] = ACTIONS(1062),
    [sym_comment] = ACTIONS(54),
  },
  [396] = {
    [sym__layout_semicolon] = ACTIONS(1064),
    [anon_sym_SEMI] = ACTIONS(1066),
    [anon_sym_deriving] = ACTIONS(1066),
    [sym_comment] = ACTIONS(54),
  },
  [397] = {
    [sym_comment] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(1068),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1068),
  },
  [398] = {
    [sym_comment] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(1070),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1070),
  },
  [399] = {
    [anon_sym_SEMI] = ACTIONS(1072),
    [anon_sym_LBRACE] = ACTIONS(1072),
    [anon_sym_RBRACE] = ACTIONS(1072),
    [anon_sym_LPAREN] = ACTIONS(1072),
    [anon_sym_RPAREN] = ACTIONS(1072),
    [anon_sym_EQ] = ACTIONS(1072),
    [anon_sym_AT] = ACTIONS(1072),
    [anon_sym_BQUOTE] = ACTIONS(1072),
    [anon_sym_DASH] = ACTIONS(1072),
    [anon_sym__] = ACTIONS(1072),
    [anon_sym_COLON] = ACTIONS(1072),
    [anon_sym_LBRACK] = ACTIONS(1072),
    [anon_sym_RBRACK] = ACTIONS(1072),
    [anon_sym_PIPE] = ACTIONS(1072),
    [anon_sym_BANG] = ACTIONS(1072),
    [anon_sym_DOT] = ACTIONS(1072),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(1072),
    [anon_sym_DQUOTE] = ACTIONS(1072),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1072),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1072),
    [sym__ascii_large] = ACTIONS(1072),
    [anon_sym_POUND] = ACTIONS(1072),
    [anon_sym_DOLLAR] = ACTIONS(1072),
    [anon_sym_PERCENT] = ACTIONS(1072),
    [anon_sym_AMP] = ACTIONS(1072),
    [anon_sym_1] = ACTIONS(1072),
    [anon_sym_PLUS] = ACTIONS(1072),
    [anon_sym_SLASH] = ACTIONS(1072),
    [anon_sym_LT] = ACTIONS(1072),
    [anon_sym_GT] = ACTIONS(1072),
    [anon_sym_QMARK] = ACTIONS(1072),
    [anon_sym_CARET] = ACTIONS(1072),
    [anon_sym_TILDE] = ACTIONS(1072),
    [anon_sym_BSLASH] = ACTIONS(1072),
    [sym__space] = ACTIONS(1072),
    [sym__newline] = ACTIONS(1072),
    [sym__tab] = ACTIONS(1072),
    [sym__vertical_tab] = ACTIONS(1072),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1072),
  },
  [400] = {
    [anon_sym_SEMI] = ACTIONS(1074),
    [anon_sym_LBRACE] = ACTIONS(1074),
    [anon_sym_RBRACE] = ACTIONS(1074),
    [anon_sym_LPAREN] = ACTIONS(1074),
    [anon_sym_RPAREN] = ACTIONS(1074),
    [anon_sym_EQ] = ACTIONS(1074),
    [anon_sym_AT] = ACTIONS(1074),
    [anon_sym_BQUOTE] = ACTIONS(1074),
    [anon_sym_DASH] = ACTIONS(1074),
    [anon_sym__] = ACTIONS(1074),
    [anon_sym_COLON] = ACTIONS(1074),
    [anon_sym_LBRACK] = ACTIONS(1074),
    [anon_sym_RBRACK] = ACTIONS(1074),
    [anon_sym_PIPE] = ACTIONS(1074),
    [anon_sym_BANG] = ACTIONS(1074),
    [anon_sym_DOT] = ACTIONS(1074),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(1074),
    [anon_sym_DQUOTE] = ACTIONS(1074),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1074),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1074),
    [sym__ascii_large] = ACTIONS(1074),
    [anon_sym_POUND] = ACTIONS(1074),
    [anon_sym_DOLLAR] = ACTIONS(1074),
    [anon_sym_PERCENT] = ACTIONS(1074),
    [anon_sym_AMP] = ACTIONS(1074),
    [anon_sym_1] = ACTIONS(1074),
    [anon_sym_PLUS] = ACTIONS(1074),
    [anon_sym_SLASH] = ACTIONS(1074),
    [anon_sym_LT] = ACTIONS(1074),
    [anon_sym_GT] = ACTIONS(1074),
    [anon_sym_QMARK] = ACTIONS(1074),
    [anon_sym_CARET] = ACTIONS(1074),
    [anon_sym_TILDE] = ACTIONS(1074),
    [anon_sym_BSLASH] = ACTIONS(1074),
    [sym__space] = ACTIONS(1074),
    [sym__newline] = ACTIONS(1074),
    [sym__tab] = ACTIONS(1074),
    [sym__vertical_tab] = ACTIONS(1074),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1074),
  },
  [401] = {
    [anon_sym_LPAREN] = ACTIONS(1076),
    [anon_sym_EQ] = ACTIONS(1076),
    [anon_sym_AT] = ACTIONS(1076),
    [anon_sym_DASH] = ACTIONS(1076),
    [anon_sym__] = ACTIONS(1076),
    [anon_sym_COLON] = ACTIONS(1076),
    [anon_sym_PIPE] = ACTIONS(1076),
    [anon_sym_BANG] = ACTIONS(1076),
    [sym__variable_pattern] = ACTIONS(1076),
    [sym__constructor_pattern] = ACTIONS(1076),
    [anon_sym_DOT] = ACTIONS(1076),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(1076),
    [anon_sym_SQUOTE] = ACTIONS(1076),
    [anon_sym_DQUOTE] = ACTIONS(1076),
    [anon_sym_POUND] = ACTIONS(1076),
    [anon_sym_DOLLAR] = ACTIONS(1076),
    [anon_sym_PERCENT] = ACTIONS(1076),
    [anon_sym_AMP] = ACTIONS(1076),
    [anon_sym_1] = ACTIONS(1076),
    [anon_sym_PLUS] = ACTIONS(1076),
    [anon_sym_SLASH] = ACTIONS(1076),
    [anon_sym_LT] = ACTIONS(1076),
    [anon_sym_GT] = ACTIONS(1076),
    [anon_sym_QMARK] = ACTIONS(1076),
    [anon_sym_CARET] = ACTIONS(1076),
    [anon_sym_TILDE] = ACTIONS(1076),
    [anon_sym_BSLASH] = ACTIONS(1076),
    [sym__integer_literal] = ACTIONS(1076),
    [sym__octal_literal] = ACTIONS(1076),
    [sym__hexidecimal_literal] = ACTIONS(1076),
  },
  [402] = {
    [sym__literal] = STATE(477),
    [sym_integer] = STATE(474),
    [sym_char] = STATE(474),
    [sym_string] = STATE(474),
    [sym_comment] = ACTIONS(54),
    [sym_float] = ACTIONS(1078),
    [anon_sym_SQUOTE] = ACTIONS(1080),
    [anon_sym_DQUOTE] = ACTIONS(460),
    [sym__integer_literal] = ACTIONS(1082),
    [sym__octal_literal] = ACTIONS(1082),
    [sym__hexidecimal_literal] = ACTIONS(1082),
  },
  [403] = {
    [anon_sym_RBRACE] = ACTIONS(1084),
    [sym__variable_pattern] = ACTIONS(1084),
    [sym__constructor_pattern] = ACTIONS(1086),
    [sym_comment] = ACTIONS(54),
  },
  [404] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(479),
    [anon_sym_COMMA] = ACTIONS(884),
    [anon_sym_RPAREN] = ACTIONS(1088),
    [sym_comment] = ACTIONS(54),
  },
  [405] = {
    [aux_sym_tuple_repeat1] = STATE(481),
    [anon_sym_COMMA] = ACTIONS(892),
    [anon_sym_RPAREN] = ACTIONS(1090),
    [sym_comment] = ACTIONS(54),
  },
  [406] = {
    [anon_sym_COMMA] = ACTIONS(1092),
    [anon_sym_RPAREN] = ACTIONS(1092),
    [sym_comment] = ACTIONS(54),
  },
  [407] = {
    [sym__layout_semicolon] = ACTIONS(1094),
    [anon_sym_SEMI] = ACTIONS(1096),
    [anon_sym_DASH_GT] = ACTIONS(1096),
    [sym_comment] = ACTIONS(54),
  },
  [408] = {
    [anon_sym_COMMA] = ACTIONS(1098),
    [anon_sym_RPAREN] = ACTIONS(1100),
    [sym_comment] = ACTIONS(54),
  },
  [409] = {
    [sym_type] = STATE(427),
    [sym__generic_type_constructor] = STATE(334),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(334),
    [sym_list] = STATE(334),
    [sym_parenthesized_constructor] = STATE(334),
    [sym_variable_identifier] = STATE(335),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(330),
    [anon_sym_LPAREN] = ACTIONS(634),
    [sym_unit_type] = ACTIONS(638),
    [sym_list_constructor] = ACTIONS(638),
    [sym_function_constructor] = ACTIONS(638),
    [anon_sym_LBRACK] = ACTIONS(640),
    [anon_sym_RBRACK] = ACTIONS(1102),
    [sym__variable_pattern] = ACTIONS(298),
    [sym__constructor_pattern] = ACTIONS(650),
    [sym_module_identifier] = ACTIONS(652),
    [sym_comment] = ACTIONS(54),
  },
  [410] = {
    [sym_variable_identifier] = STATE(295),
    [anon_sym_LPAREN] = ACTIONS(926),
    [anon_sym_COMMA] = ACTIONS(926),
    [anon_sym_RPAREN] = ACTIONS(926),
    [anon_sym_DASH_GT] = ACTIONS(926),
    [sym_unit_type] = ACTIONS(926),
    [sym_list_constructor] = ACTIONS(926),
    [sym_function_constructor] = ACTIONS(926),
    [anon_sym_LBRACK] = ACTIONS(926),
    [anon_sym_RBRACK] = ACTIONS(926),
    [sym__variable_pattern] = ACTIONS(298),
    [sym__constructor_pattern] = ACTIONS(1104),
    [sym_module_identifier] = ACTIONS(1104),
    [sym_comment] = ACTIONS(54),
  },
  [411] = {
    [sym_constructor_identifier] = STATE(485),
    [sym__constructor_pattern] = ACTIONS(88),
    [sym_module_identifier] = ACTIONS(928),
    [sym_comment] = ACTIONS(54),
  },
  [412] = {
    [sym_variable_identifier] = STATE(179),
    [aux_sym_type_class_repeat1] = STATE(486),
    [anon_sym_LPAREN] = ACTIONS(932),
    [anon_sym_COMMA] = ACTIONS(932),
    [anon_sym_RPAREN] = ACTIONS(932),
    [anon_sym_DASH_GT] = ACTIONS(932),
    [sym_unit_type] = ACTIONS(932),
    [sym_list_constructor] = ACTIONS(932),
    [sym_function_constructor] = ACTIONS(932),
    [anon_sym_LBRACK] = ACTIONS(932),
    [anon_sym_RBRACK] = ACTIONS(932),
    [sym__variable_pattern] = ACTIONS(298),
    [sym__constructor_pattern] = ACTIONS(1106),
    [sym_module_identifier] = ACTIONS(1106),
    [sym_comment] = ACTIONS(54),
  },
  [413] = {
    [sym_constructor_identifier] = STATE(485),
    [sym__constructor_pattern] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(1108),
    [sym_comment] = ACTIONS(54),
  },
  [414] = {
    [sym_type] = STATE(488),
    [sym__generic_type_constructor] = STATE(327),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(327),
    [sym_list] = STATE(327),
    [sym_parenthesized_constructor] = STATE(327),
    [sym_variable_identifier] = STATE(329),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(330),
    [anon_sym_LPAREN] = ACTIONS(634),
    [sym_unit_type] = ACTIONS(638),
    [sym_list_constructor] = ACTIONS(638),
    [sym_function_constructor] = ACTIONS(638),
    [anon_sym_LBRACK] = ACTIONS(640),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(650),
    [sym_module_identifier] = ACTIONS(644),
    [sym_comment] = ACTIONS(54),
  },
  [415] = {
    [sym__layout_semicolon] = ACTIONS(1110),
    [anon_sym_SEMI] = ACTIONS(1113),
    [anon_sym_DASH_GT] = ACTIONS(1113),
    [sym_comment] = ACTIONS(54),
  },
  [416] = {
    [anon_sym_COMMA] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(1118),
    [sym_comment] = ACTIONS(54),
  },
  [417] = {
    [sym_type] = STATE(491),
    [sym__generic_type_constructor] = STATE(327),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(327),
    [sym_list] = STATE(327),
    [sym_parenthesized_constructor] = STATE(327),
    [sym_variable_identifier] = STATE(329),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(330),
    [anon_sym_LPAREN] = ACTIONS(634),
    [sym_unit_type] = ACTIONS(638),
    [sym_list_constructor] = ACTIONS(638),
    [sym_function_constructor] = ACTIONS(638),
    [anon_sym_LBRACK] = ACTIONS(640),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(650),
    [sym_module_identifier] = ACTIONS(644),
    [sym_comment] = ACTIONS(54),
  },
  [418] = {
    [anon_sym_EQ_GT] = ACTIONS(1120),
    [sym_comment] = ACTIONS(54),
  },
  [419] = {
    [anon_sym_COMMA] = ACTIONS(752),
    [anon_sym_RPAREN] = ACTIONS(1122),
    [sym_comment] = ACTIONS(54),
  },
  [420] = {
    [sym_type] = STATE(494),
    [sym__generic_type_constructor] = STATE(327),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(327),
    [sym_list] = STATE(327),
    [sym_parenthesized_constructor] = STATE(327),
    [sym_variable_identifier] = STATE(329),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(330),
    [anon_sym_LPAREN] = ACTIONS(634),
    [sym_unit_type] = ACTIONS(638),
    [sym_list_constructor] = ACTIONS(638),
    [sym_function_constructor] = ACTIONS(638),
    [anon_sym_LBRACK] = ACTIONS(640),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(650),
    [sym_module_identifier] = ACTIONS(644),
    [sym_comment] = ACTIONS(54),
  },
  [421] = {
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_DASH_GT] = ACTIONS(250),
    [sym_unit_type] = ACTIONS(250),
    [sym_list_constructor] = ACTIONS(250),
    [sym_function_constructor] = ACTIONS(250),
    [anon_sym_LBRACK] = ACTIONS(250),
    [anon_sym_RBRACK] = ACTIONS(250),
    [sym__variable_pattern] = ACTIONS(250),
    [sym__constructor_pattern] = ACTIONS(96),
    [sym_module_identifier] = ACTIONS(96),
    [sym_comment] = ACTIONS(54),
  },
  [422] = {
    [sym_constructor_identifier] = STATE(485),
    [sym__constructor_pattern] = ACTIONS(906),
    [sym_module_identifier] = ACTIONS(928),
    [sym_comment] = ACTIONS(54),
  },
  [423] = {
    [sym_constructor_identifier] = STATE(485),
    [sym__constructor_pattern] = ACTIONS(906),
    [anon_sym_DOT] = ACTIONS(1124),
    [sym_comment] = ACTIONS(54),
  },
  [424] = {
    [sym_type] = STATE(491),
    [sym__generic_type_constructor] = STATE(334),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(334),
    [sym_list] = STATE(334),
    [sym_parenthesized_constructor] = STATE(334),
    [sym_variable_identifier] = STATE(335),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(330),
    [anon_sym_LPAREN] = ACTIONS(634),
    [sym_unit_type] = ACTIONS(638),
    [sym_list_constructor] = ACTIONS(638),
    [sym_function_constructor] = ACTIONS(638),
    [anon_sym_LBRACK] = ACTIONS(640),
    [sym__variable_pattern] = ACTIONS(298),
    [sym__constructor_pattern] = ACTIONS(650),
    [sym_module_identifier] = ACTIONS(652),
    [sym_comment] = ACTIONS(54),
  },
  [425] = {
    [sym_type] = STATE(494),
    [sym__generic_type_constructor] = STATE(334),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(334),
    [sym_list] = STATE(334),
    [sym_parenthesized_constructor] = STATE(334),
    [sym_variable_identifier] = STATE(335),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(330),
    [anon_sym_LPAREN] = ACTIONS(634),
    [sym_unit_type] = ACTIONS(638),
    [sym_list_constructor] = ACTIONS(638),
    [sym_function_constructor] = ACTIONS(638),
    [anon_sym_LBRACK] = ACTIONS(640),
    [sym__variable_pattern] = ACTIONS(298),
    [sym__constructor_pattern] = ACTIONS(650),
    [sym_module_identifier] = ACTIONS(652),
    [sym_comment] = ACTIONS(54),
  },
  [426] = {
    [sym__layout_semicolon] = ACTIONS(1126),
    [anon_sym_SEMI] = ACTIONS(1128),
    [anon_sym_DASH_GT] = ACTIONS(1128),
    [sym_comment] = ACTIONS(54),
  },
  [427] = {
    [anon_sym_LPAREN] = ACTIONS(1130),
    [sym_unit_type] = ACTIONS(1130),
    [sym_list_constructor] = ACTIONS(1130),
    [sym_function_constructor] = ACTIONS(1130),
    [anon_sym_LBRACK] = ACTIONS(1130),
    [anon_sym_RBRACK] = ACTIONS(1130),
    [sym__variable_pattern] = ACTIONS(1130),
    [sym__constructor_pattern] = ACTIONS(1132),
    [sym_module_identifier] = ACTIONS(1132),
    [sym_comment] = ACTIONS(54),
  },
  [428] = {
    [sym__layout_semicolon] = ACTIONS(826),
    [anon_sym_SEMI] = ACTIONS(770),
    [anon_sym_DASH_GT] = ACTIONS(770),
    [sym__variable_pattern] = ACTIONS(770),
    [sym_comment] = ACTIONS(54),
  },
  [429] = {
    [sym__constructor_pattern] = ACTIONS(1134),
    [anon_sym_DOT] = ACTIONS(1136),
    [sym_comment] = ACTIONS(54),
  },
  [430] = {
    [sym_variable_identifier] = STATE(337),
    [aux_sym_type_class_repeat1] = STATE(496),
    [sym__layout_semicolon] = ACTIONS(1138),
    [anon_sym_SEMI] = ACTIONS(1140),
    [anon_sym_DASH_GT] = ACTIONS(1140),
    [sym__variable_pattern] = ACTIONS(376),
    [sym_comment] = ACTIONS(54),
  },
  [431] = {
    [sym_variable_identifier] = STATE(428),
    [sym__layout_semicolon] = ACTIONS(1138),
    [anon_sym_SEMI] = ACTIONS(1140),
    [anon_sym_DASH_GT] = ACTIONS(1140),
    [sym__variable_pattern] = ACTIONS(376),
    [sym_comment] = ACTIONS(54),
  },
  [432] = {
    [sym_constructor_identifier] = STATE(498),
    [sym__constructor_pattern] = ACTIONS(378),
    [sym_module_identifier] = ACTIONS(1142),
    [sym_comment] = ACTIONS(54),
  },
  [433] = {
    [sym__layout_semicolon] = ACTIONS(1144),
    [anon_sym_SEMI] = ACTIONS(1146),
    [sym_comment] = ACTIONS(54),
  },
  [434] = {
    [sym__layout_semicolon] = ACTIONS(1148),
    [anon_sym_SEMI] = ACTIONS(1150),
    [sym_comment] = ACTIONS(54),
  },
  [435] = {
    [sym__layout_close_brace] = ACTIONS(1152),
    [anon_sym_LPAREN] = ACTIONS(370),
    [anon_sym_import] = ACTIONS(370),
    [anon_sym_EQ] = ACTIONS(370),
    [anon_sym_AT] = ACTIONS(370),
    [anon_sym_DASH] = ACTIONS(370),
    [anon_sym_foreign] = ACTIONS(370),
    [anon_sym_default] = ACTIONS(370),
    [anon_sym_do] = ACTIONS(370),
    [anon_sym_class] = ACTIONS(370),
    [anon_sym_instance] = ACTIONS(370),
    [anon_sym_infixl] = ACTIONS(370),
    [anon_sym_infixr] = ACTIONS(370),
    [anon_sym_infix] = ACTIONS(370),
    [anon_sym_COLON] = ACTIONS(370),
    [anon_sym_data] = ACTIONS(370),
    [anon_sym_PIPE] = ACTIONS(370),
    [anon_sym_newtype] = ACTIONS(370),
    [anon_sym_BANG] = ACTIONS(370),
    [anon_sym_type] = ACTIONS(370),
    [sym__variable_pattern] = ACTIONS(370),
    [sym__constructor_pattern] = ACTIONS(370),
    [anon_sym_DOT] = ACTIONS(370),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(370),
    [anon_sym_SQUOTE] = ACTIONS(370),
    [anon_sym_DQUOTE] = ACTIONS(370),
    [anon_sym_POUND] = ACTIONS(370),
    [anon_sym_DOLLAR] = ACTIONS(370),
    [anon_sym_PERCENT] = ACTIONS(370),
    [anon_sym_AMP] = ACTIONS(370),
    [anon_sym_1] = ACTIONS(370),
    [anon_sym_PLUS] = ACTIONS(370),
    [anon_sym_SLASH] = ACTIONS(370),
    [anon_sym_LT] = ACTIONS(370),
    [anon_sym_GT] = ACTIONS(370),
    [anon_sym_QMARK] = ACTIONS(370),
    [anon_sym_CARET] = ACTIONS(370),
    [anon_sym_TILDE] = ACTIONS(370),
    [anon_sym_BSLASH] = ACTIONS(370),
    [sym__integer_literal] = ACTIONS(370),
    [sym__octal_literal] = ACTIONS(370),
    [sym__hexidecimal_literal] = ACTIONS(370),
  },
  [436] = {
    [ts_builtin_sym_end] = ACTIONS(1154),
    [sym_comment] = ACTIONS(54),
  },
  [437] = {
    [sym__layout_semicolon] = ACTIONS(1156),
    [anon_sym_SEMI] = ACTIONS(1158),
    [sym_comment] = ACTIONS(54),
  },
  [438] = {
    [anon_sym_COMMA] = ACTIONS(1160),
    [anon_sym_RPAREN] = ACTIONS(1160),
    [sym_comment] = ACTIONS(54),
  },
  [439] = {
    [sym_export] = STATE(500),
    [sym__identifier] = STATE(230),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [440] = {
    [anon_sym_where] = ACTIONS(1162),
    [sym_comment] = ACTIONS(54),
  },
  [441] = {
    [anon_sym_RPAREN] = ACTIONS(1164),
    [sym_comment] = ACTIONS(54),
  },
  [442] = {
    [aux_sym_export_repeat1] = STATE(502),
    [anon_sym_COMMA] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(1164),
    [sym_comment] = ACTIONS(54),
  },
  [443] = {
    [sym__layout_semicolon] = ACTIONS(1166),
    [anon_sym_SEMI] = ACTIONS(1168),
    [sym_comment] = ACTIONS(54),
  },
  [444] = {
    [anon_sym_RPAREN] = ACTIONS(1170),
    [sym_comment] = ACTIONS(54),
  },
  [445] = {
    [aux_sym_export_repeat1] = STATE(504),
    [anon_sym_COMMA] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(1170),
    [sym_comment] = ACTIONS(54),
  },
  [446] = {
    [anon_sym_LPAREN] = ACTIONS(1172),
    [anon_sym_COMMA] = ACTIONS(1174),
    [anon_sym_RPAREN] = ACTIONS(1174),
    [sym_comment] = ACTIONS(54),
  },
  [447] = {
    [sym__identifier] = STATE(506),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [448] = {
    [sym__layout_semicolon] = ACTIONS(1176),
    [anon_sym_SEMI] = ACTIONS(1178),
    [sym_comment] = ACTIONS(54),
  },
  [449] = {
    [sym__identifier] = STATE(508),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [anon_sym_DOT_DOT] = ACTIONS(1180),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [450] = {
    [anon_sym_COMMA] = ACTIONS(972),
    [anon_sym_RPAREN] = ACTIONS(1182),
    [sym_comment] = ACTIONS(54),
  },
  [451] = {
    [anon_sym_RBRACE] = ACTIONS(608),
    [sym__variable_pattern] = ACTIONS(608),
    [sym__constructor_pattern] = ACTIONS(610),
    [sym_comment] = ACTIONS(54),
  },
  [452] = {
    [sym__layout_semicolon] = ACTIONS(1184),
    [anon_sym_SEMI] = ACTIONS(1186),
    [sym_comment] = ACTIONS(54),
  },
  [453] = {
    [anon_sym_COMMA] = ACTIONS(1188),
    [anon_sym_RPAREN] = ACTIONS(1188),
    [sym_comment] = ACTIONS(54),
  },
  [454] = {
    [anon_sym_COMMA] = ACTIONS(1190),
    [anon_sym_RPAREN] = ACTIONS(1190),
    [sym_comment] = ACTIONS(54),
  },
  [455] = {
    [sym__constructor_pattern] = ACTIONS(1192),
    [sym_comment] = ACTIONS(54),
  },
  [456] = {
    [sym__layout_semicolon] = ACTIONS(1194),
    [anon_sym_SEMI] = ACTIONS(1196),
    [sym_comment] = ACTIONS(54),
  },
  [457] = {
    [sym__layout_close_brace] = ACTIONS(1198),
    [anon_sym_infixl] = ACTIONS(1200),
    [anon_sym_infixr] = ACTIONS(1200),
    [anon_sym_infix] = ACTIONS(1200),
    [sym__variable_pattern] = ACTIONS(1202),
    [sym__constructor_pattern] = ACTIONS(1202),
    [sym_comment] = ACTIONS(54),
  },
  [458] = {
    [sym__layout_semicolon] = ACTIONS(1204),
    [anon_sym_SEMI] = ACTIONS(1206),
    [sym_comment] = ACTIONS(54),
  },
  [459] = {
    [sym__layout_semicolon] = ACTIONS(1208),
    [anon_sym_SEMI] = ACTIONS(1210),
    [sym_comment] = ACTIONS(54),
  },
  [460] = {
    [anon_sym_RBRACE] = ACTIONS(1200),
    [anon_sym_infixl] = ACTIONS(1200),
    [anon_sym_infixr] = ACTIONS(1200),
    [anon_sym_infix] = ACTIONS(1200),
    [sym__variable_pattern] = ACTIONS(1202),
    [sym__constructor_pattern] = ACTIONS(1202),
    [sym_comment] = ACTIONS(54),
  },
  [461] = {
    [sym__layout_semicolon] = ACTIONS(1212),
    [anon_sym_SEMI] = ACTIONS(1214),
    [sym_comment] = ACTIONS(54),
  },
  [462] = {
    [sym__layout_semicolon] = ACTIONS(1216),
    [anon_sym_SEMI] = ACTIONS(1218),
    [sym_comment] = ACTIONS(54),
  },
  [463] = {
    [sym__layout_semicolon] = ACTIONS(1220),
    [anon_sym_SEMI] = ACTIONS(1222),
    [sym_comment] = ACTIONS(54),
  },
  [464] = {
    [sym__layout_semicolon] = ACTIONS(1224),
    [anon_sym_SEMI] = ACTIONS(1226),
    [sym_comment] = ACTIONS(54),
  },
  [465] = {
    [anon_sym_COMMA] = ACTIONS(730),
    [anon_sym_RPAREN] = ACTIONS(1228),
    [sym_comment] = ACTIONS(54),
  },
  [466] = {
    [sym__layout_semicolon] = ACTIONS(1230),
    [anon_sym_SEMI] = ACTIONS(1232),
    [anon_sym_PIPE] = ACTIONS(1232),
    [anon_sym_deriving] = ACTIONS(1232),
    [sym_comment] = ACTIONS(54),
  },
  [467] = {
    [sym__layout_semicolon] = ACTIONS(1234),
    [anon_sym_SEMI] = ACTIONS(1236),
    [anon_sym_PIPE] = ACTIONS(1236),
    [anon_sym_deriving] = ACTIONS(1236),
    [sym_comment] = ACTIONS(54),
  },
  [468] = {
    [sym_field] = STATE(513),
    [sym_variable_identifier] = STATE(391),
    [sym__variable_pattern] = ACTIONS(234),
    [sym_comment] = ACTIONS(54),
  },
  [469] = {
    [anon_sym_RBRACE] = ACTIONS(1238),
    [anon_sym_COMMA] = ACTIONS(1240),
    [sym_comment] = ACTIONS(54),
  },
  [470] = {
    [sym_variable_identifier] = STATE(516),
    [sym__variable_pattern] = ACTIONS(234),
    [sym_comment] = ACTIONS(54),
  },
  [471] = {
    [sym_strict] = STATE(518),
    [sym__identifier] = STATE(518),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [anon_sym_BANG] = ACTIONS(1242),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [472] = {
    [anon_sym_COMMA] = ACTIONS(1244),
    [anon_sym_COLON_COLON] = ACTIONS(1246),
    [sym_comment] = ACTIONS(54),
  },
  [473] = {
    [sym__layout_semicolon] = ACTIONS(1248),
    [anon_sym_SEMI] = ACTIONS(1250),
    [sym_comment] = ACTIONS(54),
  },
  [474] = {
    [anon_sym_RBRACE] = ACTIONS(102),
    [sym__variable_pattern] = ACTIONS(102),
    [sym__constructor_pattern] = ACTIONS(104),
    [sym_comment] = ACTIONS(54),
  },
  [475] = {
    [sym__graphic] = STATE(521),
    [sym__small] = STATE(76),
    [sym__large] = STATE(76),
    [sym__symbol] = STATE(76),
    [sym__special] = STATE(76),
    [sym__escape] = STATE(521),
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
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_RBRACK] = ACTIONS(106),
    [anon_sym_PIPE] = ACTIONS(108),
    [anon_sym_BANG] = ACTIONS(108),
    [anon_sym_DOT] = ACTIONS(108),
    [sym_comment] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(1252),
    [anon_sym_DQUOTE] = ACTIONS(1252),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(110),
    [sym__ascii_large] = ACTIONS(116),
    [anon_sym_POUND] = ACTIONS(108),
    [anon_sym_DOLLAR] = ACTIONS(108),
    [anon_sym_PERCENT] = ACTIONS(108),
    [anon_sym_AMP] = ACTIONS(108),
    [anon_sym_1] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_LT] = ACTIONS(108),
    [anon_sym_GT] = ACTIONS(108),
    [anon_sym_QMARK] = ACTIONS(108),
    [anon_sym_CARET] = ACTIONS(108),
    [anon_sym_TILDE] = ACTIONS(108),
    [anon_sym_BSLASH] = ACTIONS(118),
    [sym__space] = ACTIONS(1252),
  },
  [476] = {
    [anon_sym_RBRACE] = ACTIONS(140),
    [sym__variable_pattern] = ACTIONS(140),
    [sym__constructor_pattern] = ACTIONS(142),
    [sym_comment] = ACTIONS(54),
  },
  [477] = {
    [anon_sym_RBRACE] = ACTIONS(1254),
    [sym__variable_pattern] = ACTIONS(1254),
    [sym__constructor_pattern] = ACTIONS(1256),
    [sym_comment] = ACTIONS(54),
  },
  [478] = {
    [anon_sym_LPAREN] = ACTIONS(1096),
    [anon_sym_COMMA] = ACTIONS(1096),
    [anon_sym_RPAREN] = ACTIONS(1096),
    [anon_sym_DASH_GT] = ACTIONS(1096),
    [sym_unit_type] = ACTIONS(1096),
    [sym_list_constructor] = ACTIONS(1096),
    [sym_function_constructor] = ACTIONS(1096),
    [anon_sym_LBRACK] = ACTIONS(1096),
    [anon_sym_RBRACK] = ACTIONS(1096),
    [sym__variable_pattern] = ACTIONS(1096),
    [sym__constructor_pattern] = ACTIONS(1258),
    [sym_module_identifier] = ACTIONS(1258),
    [sym_comment] = ACTIONS(54),
  },
  [479] = {
    [anon_sym_COMMA] = ACTIONS(1098),
    [anon_sym_RPAREN] = ACTIONS(1260),
    [sym_comment] = ACTIONS(54),
  },
  [480] = {
    [anon_sym_LPAREN] = ACTIONS(1113),
    [anon_sym_COMMA] = ACTIONS(1113),
    [anon_sym_RPAREN] = ACTIONS(1113),
    [anon_sym_DASH_GT] = ACTIONS(1113),
    [sym_unit_type] = ACTIONS(1113),
    [sym_list_constructor] = ACTIONS(1113),
    [sym_function_constructor] = ACTIONS(1113),
    [anon_sym_LBRACK] = ACTIONS(1113),
    [anon_sym_RBRACK] = ACTIONS(1113),
    [sym__variable_pattern] = ACTIONS(1113),
    [sym__constructor_pattern] = ACTIONS(1262),
    [sym_module_identifier] = ACTIONS(1262),
    [sym_comment] = ACTIONS(54),
  },
  [481] = {
    [anon_sym_COMMA] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(1265),
    [sym_comment] = ACTIONS(54),
  },
  [482] = {
    [anon_sym_COMMA] = ACTIONS(1267),
    [anon_sym_RPAREN] = ACTIONS(1267),
    [sym_comment] = ACTIONS(54),
  },
  [483] = {
    [sym__layout_semicolon] = ACTIONS(1269),
    [anon_sym_SEMI] = ACTIONS(1271),
    [anon_sym_DASH_GT] = ACTIONS(1271),
    [sym_comment] = ACTIONS(54),
  },
  [484] = {
    [anon_sym_LPAREN] = ACTIONS(1128),
    [anon_sym_COMMA] = ACTIONS(1128),
    [anon_sym_RPAREN] = ACTIONS(1128),
    [anon_sym_DASH_GT] = ACTIONS(1128),
    [sym_unit_type] = ACTIONS(1128),
    [sym_list_constructor] = ACTIONS(1128),
    [sym_function_constructor] = ACTIONS(1128),
    [anon_sym_LBRACK] = ACTIONS(1128),
    [anon_sym_RBRACK] = ACTIONS(1128),
    [sym__variable_pattern] = ACTIONS(1128),
    [sym__constructor_pattern] = ACTIONS(1273),
    [sym_module_identifier] = ACTIONS(1273),
    [sym_comment] = ACTIONS(54),
  },
  [485] = {
    [sym_variable_identifier] = STATE(179),
    [aux_sym_type_class_repeat1] = STATE(524),
    [anon_sym_LPAREN] = ACTIONS(1140),
    [anon_sym_COMMA] = ACTIONS(1140),
    [anon_sym_RPAREN] = ACTIONS(1140),
    [anon_sym_DASH_GT] = ACTIONS(1140),
    [sym_unit_type] = ACTIONS(1140),
    [sym_list_constructor] = ACTIONS(1140),
    [sym_function_constructor] = ACTIONS(1140),
    [anon_sym_LBRACK] = ACTIONS(1140),
    [anon_sym_RBRACK] = ACTIONS(1140),
    [sym__variable_pattern] = ACTIONS(298),
    [sym__constructor_pattern] = ACTIONS(1275),
    [sym_module_identifier] = ACTIONS(1275),
    [sym_comment] = ACTIONS(54),
  },
  [486] = {
    [sym_variable_identifier] = STATE(295),
    [anon_sym_LPAREN] = ACTIONS(1140),
    [anon_sym_COMMA] = ACTIONS(1140),
    [anon_sym_RPAREN] = ACTIONS(1140),
    [anon_sym_DASH_GT] = ACTIONS(1140),
    [sym_unit_type] = ACTIONS(1140),
    [sym_list_constructor] = ACTIONS(1140),
    [sym_function_constructor] = ACTIONS(1140),
    [anon_sym_LBRACK] = ACTIONS(1140),
    [anon_sym_RBRACK] = ACTIONS(1140),
    [sym__variable_pattern] = ACTIONS(298),
    [sym__constructor_pattern] = ACTIONS(1275),
    [sym_module_identifier] = ACTIONS(1275),
    [sym_comment] = ACTIONS(54),
  },
  [487] = {
    [sym_constructor_identifier] = STATE(525),
    [sym__constructor_pattern] = ACTIONS(88),
    [sym_module_identifier] = ACTIONS(1142),
    [sym_comment] = ACTIONS(54),
  },
  [488] = {
    [anon_sym_COMMA] = ACTIONS(1277),
    [anon_sym_RPAREN] = ACTIONS(1277),
    [sym_comment] = ACTIONS(54),
  },
  [489] = {
    [sym_type] = STATE(526),
    [sym__generic_type_constructor] = STATE(327),
    [sym_tupling_constructor] = STATE(322),
    [sym_tuple] = STATE(327),
    [sym_list] = STATE(327),
    [sym_parenthesized_constructor] = STATE(327),
    [sym_variable_identifier] = STATE(329),
    [sym__type_constructors] = STATE(322),
    [sym_qualified_type_constructor] = STATE(330),
    [anon_sym_LPAREN] = ACTIONS(634),
    [sym_unit_type] = ACTIONS(638),
    [sym_list_constructor] = ACTIONS(638),
    [sym_function_constructor] = ACTIONS(638),
    [anon_sym_LBRACK] = ACTIONS(640),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(650),
    [sym_module_identifier] = ACTIONS(644),
    [sym_comment] = ACTIONS(54),
  },
  [490] = {
    [sym__layout_semicolon] = ACTIONS(1279),
    [anon_sym_SEMI] = ACTIONS(1281),
    [anon_sym_DASH_GT] = ACTIONS(1281),
    [sym_comment] = ACTIONS(54),
  },
  [491] = {
    [anon_sym_LPAREN] = ACTIONS(1146),
    [anon_sym_COMMA] = ACTIONS(1146),
    [anon_sym_RPAREN] = ACTIONS(1146),
    [sym_unit_type] = ACTIONS(1146),
    [sym_list_constructor] = ACTIONS(1146),
    [sym_function_constructor] = ACTIONS(1146),
    [anon_sym_LBRACK] = ACTIONS(1146),
    [anon_sym_RBRACK] = ACTIONS(1146),
    [sym__variable_pattern] = ACTIONS(1146),
    [sym__constructor_pattern] = ACTIONS(1283),
    [sym_module_identifier] = ACTIONS(1283),
    [sym_comment] = ACTIONS(54),
  },
  [492] = {
    [anon_sym_LPAREN] = ACTIONS(1285),
    [sym_unit_type] = ACTIONS(1285),
    [sym_list_constructor] = ACTIONS(1285),
    [sym_function_constructor] = ACTIONS(1285),
    [anon_sym_LBRACK] = ACTIONS(1285),
    [sym__variable_pattern] = ACTIONS(1285),
    [sym__constructor_pattern] = ACTIONS(992),
    [sym_module_identifier] = ACTIONS(992),
    [sym_comment] = ACTIONS(54),
  },
  [493] = {
    [anon_sym_EQ_GT] = ACTIONS(1287),
    [sym_comment] = ACTIONS(54),
  },
  [494] = {
    [anon_sym_LPAREN] = ACTIONS(1150),
    [anon_sym_COMMA] = ACTIONS(1150),
    [anon_sym_RPAREN] = ACTIONS(1150),
    [sym_unit_type] = ACTIONS(1150),
    [sym_list_constructor] = ACTIONS(1150),
    [sym_function_constructor] = ACTIONS(1150),
    [anon_sym_LBRACK] = ACTIONS(1150),
    [anon_sym_RBRACK] = ACTIONS(1150),
    [sym__variable_pattern] = ACTIONS(1150),
    [sym__constructor_pattern] = ACTIONS(1289),
    [sym_module_identifier] = ACTIONS(1289),
    [sym_comment] = ACTIONS(54),
  },
  [495] = {
    [sym_constructor_identifier] = STATE(525),
    [sym__constructor_pattern] = ACTIONS(906),
    [sym_module_identifier] = ACTIONS(1142),
    [sym_comment] = ACTIONS(54),
  },
  [496] = {
    [sym_variable_identifier] = STATE(428),
    [sym__layout_semicolon] = ACTIONS(1291),
    [anon_sym_SEMI] = ACTIONS(1293),
    [anon_sym_DASH_GT] = ACTIONS(1293),
    [sym__variable_pattern] = ACTIONS(376),
    [sym_comment] = ACTIONS(54),
  },
  [497] = {
    [sym__constructor_pattern] = ACTIONS(1295),
    [anon_sym_DOT] = ACTIONS(1297),
    [sym_comment] = ACTIONS(54),
  },
  [498] = {
    [sym_variable_identifier] = STATE(337),
    [aux_sym_type_class_repeat1] = STATE(528),
    [sym__layout_semicolon] = ACTIONS(1291),
    [anon_sym_SEMI] = ACTIONS(1293),
    [anon_sym_DASH_GT] = ACTIONS(1293),
    [sym__variable_pattern] = ACTIONS(376),
    [sym_comment] = ACTIONS(54),
  },
  [499] = {
    [sym__layout_close_brace] = ACTIONS(1299),
    [anon_sym_LPAREN] = ACTIONS(682),
    [anon_sym_import] = ACTIONS(682),
    [anon_sym_EQ] = ACTIONS(682),
    [anon_sym_AT] = ACTIONS(682),
    [anon_sym_DASH] = ACTIONS(682),
    [anon_sym_foreign] = ACTIONS(682),
    [anon_sym_default] = ACTIONS(682),
    [anon_sym_do] = ACTIONS(682),
    [anon_sym_class] = ACTIONS(682),
    [anon_sym_instance] = ACTIONS(682),
    [anon_sym_infixl] = ACTIONS(682),
    [anon_sym_infixr] = ACTIONS(682),
    [anon_sym_infix] = ACTIONS(682),
    [anon_sym_COLON] = ACTIONS(682),
    [anon_sym_data] = ACTIONS(682),
    [anon_sym_PIPE] = ACTIONS(682),
    [anon_sym_newtype] = ACTIONS(682),
    [anon_sym_BANG] = ACTIONS(682),
    [anon_sym_type] = ACTIONS(682),
    [sym__variable_pattern] = ACTIONS(682),
    [sym__constructor_pattern] = ACTIONS(682),
    [anon_sym_DOT] = ACTIONS(682),
    [sym_comment] = ACTIONS(42),
    [sym_float] = ACTIONS(682),
    [anon_sym_SQUOTE] = ACTIONS(682),
    [anon_sym_DQUOTE] = ACTIONS(682),
    [anon_sym_POUND] = ACTIONS(682),
    [anon_sym_DOLLAR] = ACTIONS(682),
    [anon_sym_PERCENT] = ACTIONS(682),
    [anon_sym_AMP] = ACTIONS(682),
    [anon_sym_1] = ACTIONS(682),
    [anon_sym_PLUS] = ACTIONS(682),
    [anon_sym_SLASH] = ACTIONS(682),
    [anon_sym_LT] = ACTIONS(682),
    [anon_sym_GT] = ACTIONS(682),
    [anon_sym_QMARK] = ACTIONS(682),
    [anon_sym_CARET] = ACTIONS(682),
    [anon_sym_TILDE] = ACTIONS(682),
    [anon_sym_BSLASH] = ACTIONS(682),
    [sym__integer_literal] = ACTIONS(682),
    [sym__octal_literal] = ACTIONS(682),
    [sym__hexidecimal_literal] = ACTIONS(682),
  },
  [500] = {
    [anon_sym_COMMA] = ACTIONS(1301),
    [anon_sym_RPAREN] = ACTIONS(1301),
    [sym_comment] = ACTIONS(54),
  },
  [501] = {
    [anon_sym_COMMA] = ACTIONS(1303),
    [anon_sym_RPAREN] = ACTIONS(1303),
    [sym_comment] = ACTIONS(54),
  },
  [502] = {
    [anon_sym_COMMA] = ACTIONS(730),
    [anon_sym_RPAREN] = ACTIONS(1305),
    [sym_comment] = ACTIONS(54),
  },
  [503] = {
    [aux_sym_import_specification_repeat1] = STATE(531),
    [anon_sym_COMMA] = ACTIONS(712),
    [anon_sym_RPAREN] = ACTIONS(1307),
    [sym_comment] = ACTIONS(54),
  },
  [504] = {
    [anon_sym_COMMA] = ACTIONS(730),
    [anon_sym_RPAREN] = ACTIONS(1309),
    [sym_comment] = ACTIONS(54),
  },
  [505] = {
    [sym__identifier] = STATE(534),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [anon_sym_DOT_DOT] = ACTIONS(1311),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [506] = {
    [anon_sym_LPAREN] = ACTIONS(1313),
    [anon_sym_COMMA] = ACTIONS(1315),
    [anon_sym_RPAREN] = ACTIONS(1315),
    [sym_comment] = ACTIONS(54),
  },
  [507] = {
    [anon_sym_RPAREN] = ACTIONS(1309),
    [sym_comment] = ACTIONS(54),
  },
  [508] = {
    [aux_sym_export_repeat1] = STATE(536),
    [anon_sym_COMMA] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(1309),
    [sym_comment] = ACTIONS(54),
  },
  [509] = {
    [sym__layout_semicolon] = ACTIONS(1317),
    [anon_sym_SEMI] = ACTIONS(1319),
    [sym_comment] = ACTIONS(54),
  },
  [510] = {
    [sym__layout_close_brace] = ACTIONS(1321),
    [anon_sym_infixl] = ACTIONS(1323),
    [anon_sym_infixr] = ACTIONS(1323),
    [anon_sym_infix] = ACTIONS(1323),
    [sym__variable_pattern] = ACTIONS(1325),
    [sym__constructor_pattern] = ACTIONS(1325),
    [sym_comment] = ACTIONS(54),
  },
  [511] = {
    [anon_sym_RBRACE] = ACTIONS(1323),
    [anon_sym_infixl] = ACTIONS(1323),
    [anon_sym_infixr] = ACTIONS(1323),
    [anon_sym_infix] = ACTIONS(1323),
    [sym__variable_pattern] = ACTIONS(1325),
    [sym__constructor_pattern] = ACTIONS(1325),
    [sym_comment] = ACTIONS(54),
  },
  [512] = {
    [sym__layout_semicolon] = ACTIONS(1327),
    [anon_sym_SEMI] = ACTIONS(1329),
    [sym_comment] = ACTIONS(54),
  },
  [513] = {
    [anon_sym_RBRACE] = ACTIONS(1331),
    [anon_sym_COMMA] = ACTIONS(1331),
    [sym_comment] = ACTIONS(54),
  },
  [514] = {
    [sym__layout_semicolon] = ACTIONS(1333),
    [anon_sym_SEMI] = ACTIONS(1335),
    [anon_sym_PIPE] = ACTIONS(1335),
    [anon_sym_deriving] = ACTIONS(1335),
    [sym_comment] = ACTIONS(54),
  },
  [515] = {
    [sym_field] = STATE(537),
    [sym_variable_identifier] = STATE(391),
    [sym__variable_pattern] = ACTIONS(234),
    [sym_comment] = ACTIONS(54),
  },
  [516] = {
    [anon_sym_COMMA] = ACTIONS(1337),
    [anon_sym_COLON_COLON] = ACTIONS(1337),
    [sym_comment] = ACTIONS(54),
  },
  [517] = {
    [sym__identifier] = STATE(538),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [518] = {
    [anon_sym_RBRACE] = ACTIONS(1339),
    [anon_sym_COMMA] = ACTIONS(1339),
    [sym_comment] = ACTIONS(54),
  },
  [519] = {
    [sym_variable_identifier] = STATE(539),
    [sym__variable_pattern] = ACTIONS(234),
    [sym_comment] = ACTIONS(54),
  },
  [520] = {
    [sym_strict] = STATE(540),
    [sym__identifier] = STATE(540),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [anon_sym_BANG] = ACTIONS(1242),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [521] = {
    [sym_comment] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(1341),
  },
  [522] = {
    [anon_sym_LPAREN] = ACTIONS(1271),
    [anon_sym_COMMA] = ACTIONS(1271),
    [anon_sym_RPAREN] = ACTIONS(1271),
    [anon_sym_DASH_GT] = ACTIONS(1271),
    [sym_unit_type] = ACTIONS(1271),
    [sym_list_constructor] = ACTIONS(1271),
    [sym_function_constructor] = ACTIONS(1271),
    [anon_sym_LBRACK] = ACTIONS(1271),
    [anon_sym_RBRACK] = ACTIONS(1271),
    [sym__variable_pattern] = ACTIONS(1271),
    [sym__constructor_pattern] = ACTIONS(1343),
    [sym_module_identifier] = ACTIONS(1343),
    [sym_comment] = ACTIONS(54),
  },
  [523] = {
    [anon_sym_LPAREN] = ACTIONS(1281),
    [anon_sym_COMMA] = ACTIONS(1281),
    [anon_sym_RPAREN] = ACTIONS(1281),
    [anon_sym_DASH_GT] = ACTIONS(1281),
    [sym_unit_type] = ACTIONS(1281),
    [sym_list_constructor] = ACTIONS(1281),
    [sym_function_constructor] = ACTIONS(1281),
    [anon_sym_LBRACK] = ACTIONS(1281),
    [anon_sym_RBRACK] = ACTIONS(1281),
    [sym__variable_pattern] = ACTIONS(1281),
    [sym__constructor_pattern] = ACTIONS(1345),
    [sym_module_identifier] = ACTIONS(1345),
    [sym_comment] = ACTIONS(54),
  },
  [524] = {
    [sym_variable_identifier] = STATE(295),
    [anon_sym_LPAREN] = ACTIONS(1293),
    [anon_sym_COMMA] = ACTIONS(1293),
    [anon_sym_RPAREN] = ACTIONS(1293),
    [anon_sym_DASH_GT] = ACTIONS(1293),
    [sym_unit_type] = ACTIONS(1293),
    [sym_list_constructor] = ACTIONS(1293),
    [sym_function_constructor] = ACTIONS(1293),
    [anon_sym_LBRACK] = ACTIONS(1293),
    [anon_sym_RBRACK] = ACTIONS(1293),
    [sym__variable_pattern] = ACTIONS(298),
    [sym__constructor_pattern] = ACTIONS(1347),
    [sym_module_identifier] = ACTIONS(1347),
    [sym_comment] = ACTIONS(54),
  },
  [525] = {
    [sym_variable_identifier] = STATE(179),
    [aux_sym_type_class_repeat1] = STATE(542),
    [anon_sym_LPAREN] = ACTIONS(1293),
    [anon_sym_COMMA] = ACTIONS(1293),
    [anon_sym_RPAREN] = ACTIONS(1293),
    [anon_sym_DASH_GT] = ACTIONS(1293),
    [sym_unit_type] = ACTIONS(1293),
    [sym_list_constructor] = ACTIONS(1293),
    [sym_function_constructor] = ACTIONS(1293),
    [anon_sym_LBRACK] = ACTIONS(1293),
    [anon_sym_RBRACK] = ACTIONS(1293),
    [sym__variable_pattern] = ACTIONS(298),
    [sym__constructor_pattern] = ACTIONS(1347),
    [sym_module_identifier] = ACTIONS(1347),
    [sym_comment] = ACTIONS(54),
  },
  [526] = {
    [anon_sym_COMMA] = ACTIONS(1349),
    [anon_sym_RPAREN] = ACTIONS(1349),
    [sym_comment] = ACTIONS(54),
  },
  [527] = {
    [anon_sym_LPAREN] = ACTIONS(1351),
    [sym_unit_type] = ACTIONS(1351),
    [sym_list_constructor] = ACTIONS(1351),
    [sym_function_constructor] = ACTIONS(1351),
    [anon_sym_LBRACK] = ACTIONS(1351),
    [sym__variable_pattern] = ACTIONS(1351),
    [sym__constructor_pattern] = ACTIONS(1192),
    [sym_module_identifier] = ACTIONS(1192),
    [sym_comment] = ACTIONS(54),
  },
  [528] = {
    [sym_variable_identifier] = STATE(428),
    [sym__layout_semicolon] = ACTIONS(1353),
    [anon_sym_SEMI] = ACTIONS(1355),
    [anon_sym_DASH_GT] = ACTIONS(1355),
    [sym__variable_pattern] = ACTIONS(376),
    [sym_comment] = ACTIONS(54),
  },
  [529] = {
    [anon_sym_COMMA] = ACTIONS(1357),
    [anon_sym_RPAREN] = ACTIONS(1357),
    [sym_comment] = ACTIONS(54),
  },
  [530] = {
    [sym__layout_semicolon] = ACTIONS(1359),
    [anon_sym_SEMI] = ACTIONS(1361),
    [sym_comment] = ACTIONS(54),
  },
  [531] = {
    [anon_sym_COMMA] = ACTIONS(972),
    [anon_sym_RPAREN] = ACTIONS(1363),
    [sym_comment] = ACTIONS(54),
  },
  [532] = {
    [aux_sym_import_specification_repeat1] = STATE(544),
    [anon_sym_COMMA] = ACTIONS(712),
    [anon_sym_RPAREN] = ACTIONS(1363),
    [sym_comment] = ACTIONS(54),
  },
  [533] = {
    [anon_sym_RPAREN] = ACTIONS(1365),
    [sym_comment] = ACTIONS(54),
  },
  [534] = {
    [aux_sym_export_repeat1] = STATE(546),
    [anon_sym_COMMA] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(1365),
    [sym_comment] = ACTIONS(54),
  },
  [535] = {
    [sym__identifier] = STATE(548),
    [sym_variable_identifier] = STATE(130),
    [sym_constructor_identifier] = STATE(130),
    [anon_sym_DOT_DOT] = ACTIONS(1367),
    [sym__variable_pattern] = ACTIONS(234),
    [sym__constructor_pattern] = ACTIONS(76),
    [sym_comment] = ACTIONS(54),
  },
  [536] = {
    [anon_sym_COMMA] = ACTIONS(730),
    [anon_sym_RPAREN] = ACTIONS(1369),
    [sym_comment] = ACTIONS(54),
  },
  [537] = {
    [anon_sym_RBRACE] = ACTIONS(1371),
    [anon_sym_COMMA] = ACTIONS(1371),
    [sym_comment] = ACTIONS(54),
  },
  [538] = {
    [anon_sym_RBRACE] = ACTIONS(1050),
    [anon_sym_COMMA] = ACTIONS(1050),
    [sym_comment] = ACTIONS(54),
  },
  [539] = {
    [anon_sym_COMMA] = ACTIONS(1373),
    [anon_sym_COLON_COLON] = ACTIONS(1373),
    [sym_comment] = ACTIONS(54),
  },
  [540] = {
    [anon_sym_RBRACE] = ACTIONS(1375),
    [anon_sym_COMMA] = ACTIONS(1375),
    [sym_comment] = ACTIONS(54),
  },
  [541] = {
    [anon_sym_RBRACE] = ACTIONS(576),
    [sym__variable_pattern] = ACTIONS(576),
    [sym__constructor_pattern] = ACTIONS(578),
    [sym_comment] = ACTIONS(54),
  },
  [542] = {
    [sym_variable_identifier] = STATE(295),
    [anon_sym_LPAREN] = ACTIONS(1355),
    [anon_sym_COMMA] = ACTIONS(1355),
    [anon_sym_RPAREN] = ACTIONS(1355),
    [anon_sym_DASH_GT] = ACTIONS(1355),
    [sym_unit_type] = ACTIONS(1355),
    [sym_list_constructor] = ACTIONS(1355),
    [sym_function_constructor] = ACTIONS(1355),
    [anon_sym_LBRACK] = ACTIONS(1355),
    [anon_sym_RBRACK] = ACTIONS(1355),
    [sym__variable_pattern] = ACTIONS(298),
    [sym__constructor_pattern] = ACTIONS(1377),
    [sym_module_identifier] = ACTIONS(1377),
    [sym_comment] = ACTIONS(54),
  },
  [543] = {
    [sym__layout_semicolon] = ACTIONS(1379),
    [anon_sym_SEMI] = ACTIONS(1381),
    [sym_comment] = ACTIONS(54),
  },
  [544] = {
    [anon_sym_COMMA] = ACTIONS(972),
    [anon_sym_RPAREN] = ACTIONS(1383),
    [sym_comment] = ACTIONS(54),
  },
  [545] = {
    [anon_sym_COMMA] = ACTIONS(1385),
    [anon_sym_RPAREN] = ACTIONS(1385),
    [sym_comment] = ACTIONS(54),
  },
  [546] = {
    [anon_sym_COMMA] = ACTIONS(730),
    [anon_sym_RPAREN] = ACTIONS(1387),
    [sym_comment] = ACTIONS(54),
  },
  [547] = {
    [anon_sym_RPAREN] = ACTIONS(1387),
    [sym_comment] = ACTIONS(54),
  },
  [548] = {
    [aux_sym_export_repeat1] = STATE(552),
    [anon_sym_COMMA] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(1387),
    [sym_comment] = ACTIONS(54),
  },
  [549] = {
    [aux_sym_import_specification_repeat1] = STATE(553),
    [anon_sym_COMMA] = ACTIONS(712),
    [anon_sym_RPAREN] = ACTIONS(1383),
    [sym_comment] = ACTIONS(54),
  },
  [550] = {
    [sym__layout_semicolon] = ACTIONS(1389),
    [anon_sym_SEMI] = ACTIONS(1391),
    [sym_comment] = ACTIONS(54),
  },
  [551] = {
    [anon_sym_COMMA] = ACTIONS(1393),
    [anon_sym_RPAREN] = ACTIONS(1393),
    [sym_comment] = ACTIONS(54),
  },
  [552] = {
    [anon_sym_COMMA] = ACTIONS(730),
    [anon_sym_RPAREN] = ACTIONS(1395),
    [sym_comment] = ACTIONS(54),
  },
  [553] = {
    [anon_sym_COMMA] = ACTIONS(972),
    [anon_sym_RPAREN] = ACTIONS(1397),
    [sym_comment] = ACTIONS(54),
  },
  [554] = {
    [anon_sym_COMMA] = ACTIONS(1399),
    [anon_sym_RPAREN] = ACTIONS(1399),
    [sym_comment] = ACTIONS(54),
  },
  [555] = {
    [sym__layout_semicolon] = ACTIONS(1401),
    [anon_sym_SEMI] = ACTIONS(1403),
    [sym_comment] = ACTIONS(54),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [10] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
  [12] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(2),
  [14] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(3),
  [16] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [18] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(5),
  [20] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(6),
  [22] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(7),
  [24] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(8),
  [26] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(9),
  [28] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(10),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [34] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [36] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(38),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_identifier, 1),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_identifier, 1),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_identifier, 1),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_identifier, 1),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(83),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(84),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(85),
  [134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(86),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(92),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(93),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(94),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(96),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(97),
  [172] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(98),
  [174] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(99),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__general_declaration, 1),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__general_declaration, 1),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [202] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(114),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(119),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign_import, 1),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
  [238] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(132),
  [240] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(133),
  [242] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(134),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(131),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_identifier, 1),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(145),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [258] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(128),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(153),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [266] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(156),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_symbol, 2),
  [310] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_symbol, 2),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1, .fragile = true),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [324] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(181),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(182),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(183),
  [330] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(184),
  [332] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(185),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(186),
  [336] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [346] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [348] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [350] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [352] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(187),
  [354] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(188),
  [356] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(189),
  [358] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(190),
  [360] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(191),
  [362] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(192),
  [364] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [366] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(193),
  [368] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(194),
  [370] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 1),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 1),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [378] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(196),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_declaration, 2),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_declaration, 2),
  [390] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_wildcard, 1),
  [392] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(202),
  [394] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(203),
  [396] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 1),
  [398] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 1),
  [400] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(206),
  [402] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__function_pattern_repeat1, 1),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [406] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_head, 2),
  [408] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(211),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [418] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(216),
  [420] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(217),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [428] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 3),
  [440] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 3),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_calling_convention, 1),
  [456] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_calling_convention, 1),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 3),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 3),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_identifier, 1),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [476] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(247),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable, 1, .fragile = true),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [486] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
  [494] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(250),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(258),
  [502] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [512] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [518] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [520] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(269),
  [522] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(271),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(274),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
  [542] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(279),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(283),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(286),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [566] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [572] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(297),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [578] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [584] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(299),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(301),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [592] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [594] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [596] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(305),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [602] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [604] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [610] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 1),
  [616] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 2),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 2),
  [622] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(312),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
  [626] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(314),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(315),
  [630] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 2),
  [632] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__function_pattern_repeat1, 2),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(320),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(321),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(323),
  [642] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(324),
  [644] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(325),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__generic_type_constructor, 1),
  [650] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(331),
  [652] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(332),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(339),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(342),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(344),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(345),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [682] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
  [686] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(346),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(350),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(353),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(355),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(357),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_safety, 1),
  [718] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_safety, 1),
  [720] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(362),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 4),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 4),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 4),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 4),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(367),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(368),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_variable_identifier, 2),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_variable_symbol, 2),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [740] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [748] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(370),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(372),
  [756] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(374),
  [758] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [762] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(375),
  [764] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [768] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(380),
  [770] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [772] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [774] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(382),
  [776] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 4),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 4),
  [780] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [782] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 3),
  [784] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [786] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(383),
  [788] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 3),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(389),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [820] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [824] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [830] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [832] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [836] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [838] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [840] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [842] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [844] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(397),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [848] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(398),
  [850] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [852] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [854] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [856] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [858] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(399),
  [860] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [862] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(400),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 2),
  [868] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [870] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 3),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(401),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 1),
  [876] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_labels_repeat1, 1),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(402),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 1),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(404),
  [884] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(406),
  [886] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(407),
  [888] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(411),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(414),
  [894] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(415),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(417),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(418),
  [900] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(420),
  [902] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [904] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [906] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(421),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(422),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 1),
  [912] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 1),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(424),
  [916] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(425),
  [920] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(426),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [928] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(429),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(432),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 2),
  [944] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(435),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(435),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(436),
  [950] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(436),
  [952] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [954] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(439),
  [956] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(440),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(441),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [964] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [966] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(444),
  [968] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(447),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(448),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(449),
  [978] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(451),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 5),
  [982] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 5),
  [984] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 5),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 5),
  [990] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [992] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [994] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(455),
  [996] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [998] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 2),
  [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 2),
  [1004] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(457),
  [1006] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(457),
  [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(458),
  [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(460),
  [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(460),
  [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(458),
  [1016] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 5),
  [1020] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 5),
  [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 4),
  [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 4),
  [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [1032] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(464),
  [1036] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1038] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(467),
  [1042] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(468),
  [1044] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(470),
  [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(471),
  [1048] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [1050] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [1052] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1056] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1058] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1060] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [1062] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [1064] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [1066] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [1070] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [1072] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [1074] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [1076] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 4),
  [1078] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(474),
  [1080] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(475),
  [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(476),
  [1084] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 2),
  [1086] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_labels_repeat1, 2),
  [1088] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(478),
  [1090] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(480),
  [1092] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 1),
  [1094] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 3),
  [1098] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(482),
  [1100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(483),
  [1102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(484),
  [1104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [1106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [1108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(487),
  [1110] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1113] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(489),
  [1118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(490),
  [1120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(492),
  [1122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(493),
  [1124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(495),
  [1126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
  [1130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 2),
  [1132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 2),
  [1134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(497),
  [1144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3),
  [1148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [1154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
  [1156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(499),
  [1158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(499),
  [1160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [1162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [1164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(501),
  [1166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [1168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [1170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(503),
  [1172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(505),
  [1174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [1176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [1178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [1180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(507),
  [1182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(509),
  [1184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 6),
  [1186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 6),
  [1188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [1190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [1192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [1194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [1196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [1198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1202] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 3),
  [1206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 3),
  [1208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(510),
  [1210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(510),
  [1212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(511),
  [1214] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(511),
  [1216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 6),
  [1218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 6),
  [1220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [1222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [1224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [1226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [1228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(512),
  [1230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [1236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [1238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(514),
  [1240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(515),
  [1242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(517),
  [1244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(519),
  [1246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(520),
  [1248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [1250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [1252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(521),
  [1254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label, 3),
  [1256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_label, 3),
  [1258] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(522),
  [1262] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(523),
  [1267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 2),
  [1269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 4),
  [1273] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1275] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [1279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 4),
  [1283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [1287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(527),
  [1289] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1295] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [1301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [1303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [1305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(529),
  [1307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(530),
  [1309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(532),
  [1311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(533),
  [1313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(535),
  [1315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [1317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [1319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [1321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [1329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [1331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [1333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [1337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [1339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [1341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(541),
  [1343] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 3),
  [1351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [1353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [1359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [1361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [1363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(543),
  [1365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(545),
  [1367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(547),
  [1369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(549),
  [1371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [1373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [1375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [1377] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [1381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [1383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(550),
  [1385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [1387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(551),
  [1389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [1391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [1393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [1395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(554),
  [1397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(555),
  [1399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [1401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
