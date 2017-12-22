#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 366
#define SYMBOL_COUNT 178
#define ALIAS_COUNT 0
#define TOKEN_COUNT 95
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__semicolon = 1,
  sym_decimal_integer_literal = 2,
  sym_hex_integer_literal = 3,
  sym_octal_integer_literal = 4,
  sym_binary_integer_literal = 5,
  sym_decimal_floating_point_literal = 6,
  sym_hex_floating_point_literal = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH = 11,
  aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH = 12,
  aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH = 13,
  sym_string_literal = 14,
  sym_null_literal = 15,
  aux_sym_SLASH_BSLASH_BSLASH_SLASH = 16,
  anon_sym_DQUOTE = 17,
  anon_sym_EQ = 18,
  anon_sym_PLUS_EQ = 19,
  anon_sym_DASH_EQ = 20,
  anon_sym_STAR_EQ = 21,
  anon_sym_SLASH_EQ = 22,
  anon_sym_AMP_EQ = 23,
  anon_sym_PIPE_EQ = 24,
  anon_sym_CARET_EQ = 25,
  anon_sym_PERCENT_EQ = 26,
  anon_sym_LT_LT_EQ = 27,
  anon_sym_GT_GT_EQ = 28,
  anon_sym_GT_GT_GT_EQ = 29,
  anon_sym_GT = 30,
  anon_sym_LT = 31,
  anon_sym_EQ_EQ = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_LT_EQ = 34,
  anon_sym_BANG_EQ = 35,
  anon_sym_AMP_AMP = 36,
  anon_sym_PIPE_PIPE = 37,
  anon_sym_PLUS = 38,
  anon_sym_DASH = 39,
  anon_sym_STAR = 40,
  anon_sym_SLASH = 41,
  anon_sym_AMP = 42,
  anon_sym_PIPE = 43,
  anon_sym_CARET = 44,
  anon_sym_PERCENT = 45,
  anon_sym_LT_LT = 46,
  anon_sym_GT_GT = 47,
  anon_sym_GT_GT_GT = 48,
  anon_sym_QMARK = 49,
  anon_sym_COLON = 50,
  anon_sym_BANG = 51,
  anon_sym_TILDE = 52,
  anon_sym_PLUS_PLUS = 53,
  anon_sym_DASH_DASH = 54,
  anon_sym_LPAREN = 55,
  anon_sym_RPAREN = 56,
  anon_sym_LBRACE = 57,
  anon_sym_RBRACE = 58,
  anon_sym_COMMA = 59,
  anon_sym_DOT = 60,
  anon_sym_LBRACK = 61,
  anon_sym_RBRACK = 62,
  anon_sym_boolean = 63,
  anon_sym_byte = 64,
  anon_sym_short = 65,
  anon_sym_int = 66,
  anon_sym_long = 67,
  anon_sym_char = 68,
  anon_sym_float = 69,
  anon_sym_double = 70,
  anon_sym_AT = 71,
  anon_sym_open = 72,
  anon_sym_module = 73,
  anon_sym_requires = 74,
  anon_sym_exports = 75,
  anon_sym_to = 76,
  anon_sym_opens = 77,
  anon_sym_uses = 78,
  anon_sym_provides = 79,
  anon_sym_with = 80,
  anon_sym_transitive = 81,
  anon_sym_static = 82,
  anon_sym_package = 83,
  anon_sym_import = 84,
  anon_sym_class = 85,
  anon_sym_public = 86,
  anon_sym_protected = 87,
  anon_sym_private = 88,
  anon_sym_final = 89,
  anon_sym_strictfp = 90,
  anon_sym_extends = 91,
  anon_sym_implements = 92,
  sym_identifier = 93,
  sym_comment = 94,
  sym_program = 95,
  sym__statement = 96,
  sym__literal = 97,
  sym_integer_literal = 98,
  sym_floating_point_literal = 99,
  sym_boolean_literal = 100,
  sym_character_literal = 101,
  sym__expression = 102,
  sym_assignment_expression = 103,
  sym_binary_expression = 104,
  sym_ternary_expression = 105,
  sym_unary_expression = 106,
  sym_update_expression = 107,
  sym_type_arguments = 108,
  sym_type_argument = 109,
  sym_reference_type = 110,
  sym_class_or_interface_type = 111,
  sym_dims = 112,
  sym_primitive_type = 113,
  sym_integral_type = 114,
  sym_floating_point_type = 115,
  sym__annotation = 116,
  sym_normal_annotation = 117,
  sym_marker_annotation = 118,
  sym_single_element_annotation = 119,
  sym_element_value_pair_list = 120,
  sym_element_value_pair = 121,
  sym_element_value = 122,
  sym_element_value_array_initializer = 123,
  sym_conditional_expression = 124,
  sym_conditional_or_expression = 125,
  sym_conditional_and_expression = 126,
  sym_inclusive_or_expression = 127,
  sym_exclusive_or_expression = 128,
  sym_and_expression = 129,
  sym_relational_expression = 130,
  sym_equality_expression = 131,
  sym_shift_expression = 132,
  sym_additive_expression = 133,
  sym_multiplicative_expression = 134,
  sym__declaration = 135,
  sym_module_declaration = 136,
  sym_module_identifier = 137,
  sym_module_directive = 138,
  sym_requires_modifier = 139,
  sym_module_name = 140,
  sym_package_declaration = 141,
  sym_package_or_type_name = 142,
  sym_import_statement = 143,
  sym_single_type_import_declaration = 144,
  sym_type_import_on_declaraction = 145,
  sym_single_static_import_declaration = 146,
  sym_static_import_on_demand_declaration = 147,
  sym_class_declaration = 148,
  sym_normal_class_declaration = 149,
  sym_class_modifier = 150,
  sym_type_paramaters = 151,
  sym_type_parameter_list = 152,
  sym_type_parameter = 153,
  sym_type_bound = 154,
  sym_superclass = 155,
  sym_super_interfaces = 156,
  sym_interface_type_list = 157,
  sym_class_body = 158,
  sym_class_body_declaration = 159,
  sym_class_member_declaration = 160,
  aux_sym_program_repeat1 = 161,
  aux_sym_character_literal_repeat1 = 162,
  aux_sym_type_arguments_repeat1 = 163,
  aux_sym_class_or_interface_type_repeat1 = 164,
  aux_sym_class_or_interface_type_repeat2 = 165,
  aux_sym_dims_repeat1 = 166,
  aux_sym_element_value_pair_list_repeat1 = 167,
  aux_sym_module_declaration_repeat1 = 168,
  aux_sym_module_identifier_repeat1 = 169,
  aux_sym_module_directive_repeat1 = 170,
  aux_sym_module_directive_repeat2 = 171,
  aux_sym_module_directive_repeat3 = 172,
  aux_sym_normal_class_declaration_repeat1 = 173,
  aux_sym_type_parameter_list_repeat1 = 174,
  aux_sym_type_bound_repeat1 = 175,
  aux_sym_interface_type_list_repeat1 = 176,
  aux_sym_class_body_repeat1 = 177,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym__semicolon] = "_semicolon",
  [sym_decimal_integer_literal] = "decimal_integer_literal",
  [sym_hex_integer_literal] = "hex_integer_literal",
  [sym_octal_integer_literal] = "octal_integer_literal",
  [sym_binary_integer_literal] = "binary_integer_literal",
  [sym_decimal_floating_point_literal] = "decimal_floating_point_literal",
  [sym_hex_floating_point_literal] = "hex_floating_point_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = "/[^\\'\\n]/",
  [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = "/\\\\./",
  [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = "/\\\\\\n/",
  [sym_string_literal] = "string_literal",
  [sym_null_literal] = "null_literal",
  [aux_sym_SLASH_BSLASH_BSLASH_SLASH] = "/\\\\/",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_GT_GT_GT_EQ] = ">>>=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_QMARK] = "?",
  [anon_sym_COLON] = ":",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_boolean] = "boolean",
  [anon_sym_byte] = "byte",
  [anon_sym_short] = "short",
  [anon_sym_int] = "int",
  [anon_sym_long] = "long",
  [anon_sym_char] = "char",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_AT] = "@",
  [anon_sym_open] = "open",
  [anon_sym_module] = "module",
  [anon_sym_requires] = "requires",
  [anon_sym_exports] = "exports",
  [anon_sym_to] = "to",
  [anon_sym_opens] = "opens",
  [anon_sym_uses] = "uses",
  [anon_sym_provides] = "provides",
  [anon_sym_with] = "with",
  [anon_sym_transitive] = "transitive",
  [anon_sym_static] = "static",
  [anon_sym_package] = "package",
  [anon_sym_import] = "import",
  [anon_sym_class] = "class",
  [anon_sym_public] = "public",
  [anon_sym_protected] = "protected",
  [anon_sym_private] = "private",
  [anon_sym_final] = "final",
  [anon_sym_strictfp] = "strictfp",
  [anon_sym_extends] = "extends",
  [anon_sym_implements] = "implements",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__literal] = "_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_floating_point_literal] = "floating_point_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_character_literal] = "character_literal",
  [sym__expression] = "_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_ternary_expression] = "ternary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_update_expression] = "update_expression",
  [sym_type_arguments] = "type_arguments",
  [sym_type_argument] = "type_argument",
  [sym_reference_type] = "reference_type",
  [sym_class_or_interface_type] = "class_or_interface_type",
  [sym_dims] = "dims",
  [sym_primitive_type] = "primitive_type",
  [sym_integral_type] = "integral_type",
  [sym_floating_point_type] = "floating_point_type",
  [sym__annotation] = "_annotation",
  [sym_normal_annotation] = "normal_annotation",
  [sym_marker_annotation] = "marker_annotation",
  [sym_single_element_annotation] = "single_element_annotation",
  [sym_element_value_pair_list] = "element_value_pair_list",
  [sym_element_value_pair] = "element_value_pair",
  [sym_element_value] = "element_value",
  [sym_element_value_array_initializer] = "element_value_array_initializer",
  [sym_conditional_expression] = "conditional_expression",
  [sym_conditional_or_expression] = "conditional_or_expression",
  [sym_conditional_and_expression] = "conditional_and_expression",
  [sym_inclusive_or_expression] = "inclusive_or_expression",
  [sym_exclusive_or_expression] = "exclusive_or_expression",
  [sym_and_expression] = "and_expression",
  [sym_relational_expression] = "relational_expression",
  [sym_equality_expression] = "equality_expression",
  [sym_shift_expression] = "shift_expression",
  [sym_additive_expression] = "additive_expression",
  [sym_multiplicative_expression] = "multiplicative_expression",
  [sym__declaration] = "_declaration",
  [sym_module_declaration] = "module_declaration",
  [sym_module_identifier] = "module_identifier",
  [sym_module_directive] = "module_directive",
  [sym_requires_modifier] = "requires_modifier",
  [sym_module_name] = "module_name",
  [sym_package_declaration] = "package_declaration",
  [sym_package_or_type_name] = "package_or_type_name",
  [sym_import_statement] = "import_statement",
  [sym_single_type_import_declaration] = "single_type_import_declaration",
  [sym_type_import_on_declaraction] = "type_import_on_declaraction",
  [sym_single_static_import_declaration] = "single_static_import_declaration",
  [sym_static_import_on_demand_declaration] = "static_import_on_demand_declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_normal_class_declaration] = "normal_class_declaration",
  [sym_class_modifier] = "class_modifier",
  [sym_type_paramaters] = "type_paramaters",
  [sym_type_parameter_list] = "type_parameter_list",
  [sym_type_parameter] = "type_parameter",
  [sym_type_bound] = "type_bound",
  [sym_superclass] = "superclass",
  [sym_super_interfaces] = "super_interfaces",
  [sym_interface_type_list] = "interface_type_list",
  [sym_class_body] = "class_body",
  [sym_class_body_declaration] = "class_body_declaration",
  [sym_class_member_declaration] = "class_member_declaration",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_character_literal_repeat1] = "character_literal_repeat1",
  [aux_sym_type_arguments_repeat1] = "type_arguments_repeat1",
  [aux_sym_class_or_interface_type_repeat1] = "class_or_interface_type_repeat1",
  [aux_sym_class_or_interface_type_repeat2] = "class_or_interface_type_repeat2",
  [aux_sym_dims_repeat1] = "dims_repeat1",
  [aux_sym_element_value_pair_list_repeat1] = "element_value_pair_list_repeat1",
  [aux_sym_module_declaration_repeat1] = "module_declaration_repeat1",
  [aux_sym_module_identifier_repeat1] = "module_identifier_repeat1",
  [aux_sym_module_directive_repeat1] = "module_directive_repeat1",
  [aux_sym_module_directive_repeat2] = "module_directive_repeat2",
  [aux_sym_module_directive_repeat3] = "module_directive_repeat3",
  [aux_sym_normal_class_declaration_repeat1] = "normal_class_declaration_repeat1",
  [aux_sym_type_parameter_list_repeat1] = "type_parameter_list_repeat1",
  [aux_sym_type_bound_repeat1] = "type_bound_repeat1",
  [aux_sym_interface_type_list_repeat1] = "interface_type_list_repeat1",
  [aux_sym_class_body_repeat1] = "class_body_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym_decimal_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_floating_point_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_floating_point_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_requires] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exports] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opens] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_provides] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transitive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_final] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strictfp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implements] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_point_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_character_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_update_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_type_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_type] = {
    .visible = true,
    .named = true,
  },
  [sym_class_or_interface_type] = {
    .visible = true,
    .named = true,
  },
  [sym_dims] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_integral_type] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_point_type] = {
    .visible = true,
    .named = true,
  },
  [sym__annotation] = {
    .visible = false,
    .named = true,
  },
  [sym_normal_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_marker_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_single_element_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_element_value_pair_list] = {
    .visible = true,
    .named = true,
  },
  [sym_element_value_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_element_value] = {
    .visible = true,
    .named = true,
  },
  [sym_element_value_array_initializer] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_inclusive_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_exclusive_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_relational_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_equality_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_shift_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_additive_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplicative_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_module_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_module_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_module_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_requires_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [sym_package_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_package_or_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_single_type_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_import_on_declaraction] = {
    .visible = true,
    .named = true,
  },
  [sym_single_static_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_static_import_on_demand_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_normal_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type_paramaters] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_type_bound] = {
    .visible = true,
    .named = true,
  },
  [sym_superclass] = {
    .visible = true,
    .named = true,
  },
  [sym_super_interfaces] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_class_body] = {
    .visible = true,
    .named = true,
  },
  [sym_class_body_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_member_declaration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_or_interface_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_or_interface_type_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dims_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_value_pair_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_directive_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_directive_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_normal_class_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_bound_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_type_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_body_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(55);
      if (lookahead == ';')
        ADVANCE(56);
      if (lookahead == '<')
        ADVANCE(57);
      if (lookahead == '=')
        ADVANCE(61);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '?')
        ADVANCE(69);
      if (lookahead == '@')
        ADVANCE(70);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == '\\')
        ADVANCE(72);
      if (lookahead == ']')
        ADVANCE(73);
      if (lookahead == '^')
        ADVANCE(74);
      if (lookahead == 'b')
        ADVANCE(76);
      if (lookahead == 'c')
        ADVANCE(86);
      if (lookahead == 'd')
        ADVANCE(90);
      if (lookahead == 'f')
        ADVANCE(96);
      if (lookahead == 'i')
        ADVANCE(105);
      if (lookahead == 'l')
        ADVANCE(108);
      if (lookahead == 'n')
        ADVANCE(112);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == 't')
        ADVANCE(126);
      if (lookahead == '{')
        ADVANCE(139);
      if (lookahead == '|')
        ADVANCE(140);
      if (lookahead == '}')
        ADVANCE(143);
      if (lookahead == '~')
        ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '=')
        ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '*')
        ADVANCE(25);
      if (lookahead != 0)
        ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '*')
        ADVANCE(25);
      if (lookahead == '/')
        ADVANCE(26);
      if (lookahead != 0)
        ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(30);
      if (lookahead == 'X')
        ADVANCE(35);
      if (lookahead == 'o')
        ADVANCE(30);
      if (lookahead == 'x')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(31);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == '_')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(31);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == '_')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(46);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '_')
        ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '+')
        ADVANCE(39);
      if (lookahead == '-')
        ADVANCE(39);
      if (lookahead == '_')
        ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(41);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '_')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '_')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(46);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+')
        ADVANCE(39);
      if (lookahead == '-')
        ADVANCE(39);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == '_')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+')
        ADVANCE(39);
      if (lookahead == '-')
        ADVANCE(39);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(46);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(53);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(54);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(58);
      if (lookahead == '=')
        ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(64);
      if (lookahead == '>')
        ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      if (lookahead == '=')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SLASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(77);
      if (lookahead == 'y')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'l')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_null_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(117);
      if (lookahead == 't')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(127);
      if (lookahead == 'r')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_to);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(129);
      if (lookahead == 'u')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_transitive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(141);
      if (lookahead == '|')
        ADVANCE(142);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 145:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(146);
      if (lookahead == '\"')
        ADVANCE(147);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(150);
      if (lookahead == '-')
        ADVANCE(151);
      if (lookahead == '.')
        ADVANCE(152);
      if (lookahead == '/')
        ADVANCE(160);
      if (lookahead == '0')
        ADVANCE(161);
      if (lookahead == '@')
        ADVANCE(70);
      if (lookahead == 'c')
        ADVANCE(168);
      if (lookahead == 'f')
        ADVANCE(173);
      if (lookahead == 'i')
        ADVANCE(182);
      if (lookahead == 'm')
        ADVANCE(188);
      if (lookahead == 'n')
        ADVANCE(194);
      if (lookahead == 'o')
        ADVANCE(198);
      if (lookahead == 'p')
        ADVANCE(202);
      if (lookahead == 's')
        ADVANCE(227);
      if (lookahead == 't')
        ADVANCE(239);
      if (lookahead == '~')
        ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(145);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 147:
      if (lookahead == '\"')
        ADVANCE(148);
      if (lookahead == '\\')
        ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 149:
      if (lookahead == '\n')
        ADVANCE(147);
      if (lookahead != 0)
        ADVANCE(147);
      END_STATE();
    case 150:
      if (lookahead == '+')
        ADVANCE(16);
      END_STATE();
    case 151:
      if (lookahead == '-')
        ADVANCE(20);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(154);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(155);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(153);
      END_STATE();
    case 154:
      if (lookahead == '_')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(153);
      END_STATE();
    case 155:
      if (lookahead == '+')
        ADVANCE(156);
      if (lookahead == '-')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(157);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(158);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(157);
      END_STATE();
    case 158:
      if (lookahead == '_')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(157);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 160:
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == 'B')
        ADVANCE(163);
      if (lookahead == 'O')
        ADVANCE(32);
      if (lookahead == 'X')
        ADVANCE(165);
      if (lookahead == '_')
        ADVANCE(166);
      if (lookahead == 'b')
        ADVANCE(163);
      if (lookahead == 'o')
        ADVANCE(32);
      if (lookahead == 'x')
        ADVANCE(165);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(155);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(155);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(153);
      END_STATE();
    case 163:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(163);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(164);
      END_STATE();
    case 165:
      if (lookahead == '.')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 166:
      if (lookahead == '_')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == '_')
        ADVANCE(166);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(155);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 168:
      if (lookahead == 'l')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'a')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 's')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 's')
        ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 173:
      if (lookahead == 'a')
        ADVANCE(174);
      if (lookahead == 'i')
        ADVANCE(178);
      END_STATE();
    case 174:
      if (lookahead == 'l')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 's')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'e')
        ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 178:
      if (lookahead == 'n')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'a')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'l')
        ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 182:
      if (lookahead == 'm')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'p')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'o')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'r')
        ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == 't')
        ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 188:
      if (lookahead == 'o')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'd')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 'u')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 'l')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'e')
        ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 194:
      if (lookahead == 'u')
        ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'l')
        ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'l')
        ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 198:
      if (lookahead == 'p')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'e')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'n')
        ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 202:
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == 'r')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(222);
      END_STATE();
    case 203:
      if (lookahead == 'c')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == 'k')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 'a')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 'g')
        ADVANCE(207);
      END_STATE();
    case 207:
      if (lookahead == 'e')
        ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 209:
      if (lookahead == 'i')
        ADVANCE(210);
      if (lookahead == 'o')
        ADVANCE(215);
      END_STATE();
    case 210:
      if (lookahead == 'v')
        ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == 'a')
        ADVANCE(212);
      END_STATE();
    case 212:
      if (lookahead == 't')
        ADVANCE(213);
      END_STATE();
    case 213:
      if (lookahead == 'e')
        ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 215:
      if (lookahead == 't')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 'e')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'c')
        ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 't')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'e')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'd')
        ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 222:
      if (lookahead == 'b')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 'l')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 'i')
        ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == 'c')
        ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 227:
      if (lookahead == 't')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'a')
        ADVANCE(229);
      if (lookahead == 'r')
        ADVANCE(233);
      END_STATE();
    case 229:
      if (lookahead == 't')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'i')
        ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 'c')
        ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 233:
      if (lookahead == 'i')
        ADVANCE(234);
      END_STATE();
    case 234:
      if (lookahead == 'c')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == 't')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 'f')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 'p')
        ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_strictfp);
      END_STATE();
    case 239:
      if (lookahead == 'r')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 'u')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == 'e')
        ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(244);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(160);
      if (lookahead == ';')
        ADVANCE(56);
      if (lookahead == '@')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 245:
      if (lookahead == '\n')
        SKIP(245);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(246);
      if (lookahead == '\\')
        ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(250);
      if (lookahead != 0)
        ADVANCE(250);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(248);
      if (lookahead != 0)
        ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(160);
      if (lookahead == 's')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 253:
      if (lookahead == '!')
        ADVANCE(254);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(55);
      if (lookahead == ';')
        ADVANCE(56);
      if (lookahead == '<')
        ADVANCE(57);
      if (lookahead == '=')
        ADVANCE(61);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '?')
        ADVANCE(69);
      if (lookahead == '@')
        ADVANCE(70);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == ']')
        ADVANCE(73);
      if (lookahead == '^')
        ADVANCE(74);
      if (lookahead == 'c')
        ADVANCE(168);
      if (lookahead == 'e')
        ADVANCE(255);
      if (lookahead == 'f')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(268);
      if (lookahead == 'm')
        ADVANCE(188);
      if (lookahead == 'o')
        ADVANCE(278);
      if (lookahead == 'p')
        ADVANCE(283);
      if (lookahead == 'r')
        ADVANCE(291);
      if (lookahead == 's')
        ADVANCE(227);
      if (lookahead == 'u')
        ADVANCE(299);
      if (lookahead == 'w')
        ADVANCE(303);
      if (lookahead == '{')
        ADVANCE(139);
      if (lookahead == '|')
        ADVANCE(140);
      if (lookahead == '}')
        ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(253);
      END_STATE();
    case 254:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 255:
      if (lookahead == 'x')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'p')
        ADVANCE(257);
      if (lookahead == 't')
        ADVANCE(262);
      END_STATE();
    case 257:
      if (lookahead == 'o')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 'r')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 't')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 's')
        ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_exports);
      END_STATE();
    case 262:
      if (lookahead == 'e')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'n')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 'd')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 's')
        ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 267:
      if (lookahead == 'i')
        ADVANCE(178);
      END_STATE();
    case 268:
      if (lookahead == 'm')
        ADVANCE(269);
      END_STATE();
    case 269:
      if (lookahead == 'p')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'l')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'e')
        ADVANCE(272);
      END_STATE();
    case 272:
      if (lookahead == 'm')
        ADVANCE(273);
      END_STATE();
    case 273:
      if (lookahead == 'e')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == 'n')
        ADVANCE(275);
      END_STATE();
    case 275:
      if (lookahead == 't')
        ADVANCE(276);
      END_STATE();
    case 276:
      if (lookahead == 's')
        ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 278:
      if (lookahead == 'p')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'e')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == 'n')
        ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_open);
      if (lookahead == 's')
        ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_opens);
      END_STATE();
    case 283:
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == 'r')
        ADVANCE(284);
      if (lookahead == 'u')
        ADVANCE(222);
      END_STATE();
    case 284:
      if (lookahead == 'i')
        ADVANCE(210);
      if (lookahead == 'o')
        ADVANCE(285);
      END_STATE();
    case 285:
      if (lookahead == 't')
        ADVANCE(216);
      if (lookahead == 'v')
        ADVANCE(286);
      END_STATE();
    case 286:
      if (lookahead == 'i')
        ADVANCE(287);
      END_STATE();
    case 287:
      if (lookahead == 'd')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 'e')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == 's')
        ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_provides);
      END_STATE();
    case 291:
      if (lookahead == 'e')
        ADVANCE(292);
      END_STATE();
    case 292:
      if (lookahead == 'q')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 'u')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == 'i')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == 'r')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 'e')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 's')
        ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 299:
      if (lookahead == 's')
        ADVANCE(300);
      END_STATE();
    case 300:
      if (lookahead == 'e')
        ADVANCE(301);
      END_STATE();
    case 301:
      if (lookahead == 's')
        ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 303:
      if (lookahead == 'i')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 't')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 'h')
        ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 307:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(146);
      if (lookahead == '\"')
        ADVANCE(147);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(150);
      if (lookahead == '-')
        ADVANCE(151);
      if (lookahead == '.')
        ADVANCE(152);
      if (lookahead == '/')
        ADVANCE(160);
      if (lookahead == '0')
        ADVANCE(161);
      if (lookahead == ';')
        ADVANCE(56);
      if (lookahead == '@')
        ADVANCE(70);
      if (lookahead == 'c')
        ADVANCE(168);
      if (lookahead == 'f')
        ADVANCE(173);
      if (lookahead == 'i')
        ADVANCE(182);
      if (lookahead == 'm')
        ADVANCE(188);
      if (lookahead == 'n')
        ADVANCE(194);
      if (lookahead == 'o')
        ADVANCE(198);
      if (lookahead == 'p')
        ADVANCE(202);
      if (lookahead == 's')
        ADVANCE(227);
      if (lookahead == 't')
        ADVANCE(239);
      if (lookahead == '}')
        ADVANCE(143);
      if (lookahead == '~')
        ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(307);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\"')
        ADVANCE(147);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(152);
      if (lookahead == '/')
        ADVANCE(160);
      if (lookahead == '0')
        ADVANCE(309);
      if (lookahead == 'f')
        ADVANCE(316);
      if (lookahead == 'n')
        ADVANCE(112);
      if (lookahead == 't')
        ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(308);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == 'B')
        ADVANCE(310);
      if (lookahead == 'O')
        ADVANCE(30);
      if (lookahead == 'X')
        ADVANCE(35);
      if (lookahead == '_')
        ADVANCE(166);
      if (lookahead == 'b')
        ADVANCE(310);
      if (lookahead == 'o')
        ADVANCE(30);
      if (lookahead == 'x')
        ADVANCE(35);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(312);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(311);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(163);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(311);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+')
        ADVANCE(156);
      if (lookahead == '-')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(158);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == '_')
        ADVANCE(166);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(312);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(160);
      if (lookahead == 's')
        ADVANCE(252);
      if (lookahead == 't')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 322:
      if (lookahead == '&')
        ADVANCE(323);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(160);
      if (lookahead == '<')
        ADVANCE(324);
      if (lookahead == '>')
        ADVANCE(325);
      if (lookahead == '@')
        ADVANCE(70);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == 'e')
        ADVANCE(326);
      if (lookahead == 'i')
        ADVANCE(268);
      if (lookahead == '{')
        ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 326:
      if (lookahead == 'x')
        ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 't')
        ADVANCE(262);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(160);
      if (lookahead == '@')
        ADVANCE(70);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(160);
      if (lookahead == ';')
        ADVANCE(56);
      if (lookahead == 't')
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(160);
      if (lookahead == '@')
        ADVANCE(70);
      if (lookahead == 'b')
        ADVANCE(76);
      if (lookahead == 'c')
        ADVANCE(86);
      if (lookahead == 'd')
        ADVANCE(90);
      if (lookahead == 'f')
        ADVANCE(332);
      if (lookahead == 'i')
        ADVANCE(105);
      if (lookahead == 'l')
        ADVANCE(108);
      if (lookahead == 's')
        ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 334:
      if (lookahead == '!')
        ADVANCE(254);
      if (lookahead == '%')
        ADVANCE(335);
      if (lookahead == '&')
        ADVANCE(336);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(244);
      if (lookahead == '+')
        ADVANCE(337);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(338);
      if (lookahead == '/')
        ADVANCE(339);
      if (lookahead == '<')
        ADVANCE(340);
      if (lookahead == '=')
        ADVANCE(342);
      if (lookahead == '>')
        ADVANCE(343);
      if (lookahead == '?')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(346);
      if (lookahead == '|')
        ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 336:
      if (lookahead == '&')
        ADVANCE(8);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(341);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 342:
      if (lookahead == '=')
        ADVANCE(62);
      END_STATE();
    case 343:
      if (lookahead == '>')
        ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>')
        ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(142);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 145},
  [2] = {.lex_state = 243},
  [3] = {.lex_state = 243},
  [4] = {.lex_state = 243},
  [5] = {.lex_state = 245},
  [6] = {.lex_state = 243},
  [7] = {.lex_state = 145},
  [8] = {.lex_state = 145},
  [9] = {.lex_state = 243},
  [10] = {.lex_state = 145},
  [11] = {.lex_state = 243},
  [12] = {.lex_state = 145},
  [13] = {.lex_state = 243},
  [14] = {.lex_state = 251},
  [15] = {.lex_state = 243},
  [16] = {.lex_state = 145},
  [17] = {.lex_state = 145},
  [18] = {.lex_state = 243},
  [19] = {.lex_state = 253},
  [20] = {.lex_state = 253},
  [21] = {.lex_state = 253},
  [22] = {.lex_state = 145},
  [23] = {.lex_state = 253},
  [24] = {.lex_state = 145},
  [25] = {.lex_state = 145},
  [26] = {.lex_state = 145},
  [27] = {.lex_state = 307},
  [28] = {.lex_state = 145},
  [29] = {.lex_state = 145},
  [30] = {.lex_state = 145},
  [31] = {.lex_state = 145},
  [32] = {.lex_state = 243},
  [33] = {.lex_state = 245},
  [34] = {.lex_state = 245},
  [35] = {.lex_state = 253},
  [36] = {.lex_state = 253},
  [37] = {.lex_state = 253},
  [38] = {.lex_state = 253},
  [39] = {.lex_state = 243},
  [40] = {.lex_state = 253},
  [41] = {.lex_state = 253},
  [42] = {.lex_state = 243},
  [43] = {.lex_state = 243},
  [44] = {.lex_state = 243},
  [45] = {.lex_state = 253},
  [46] = {.lex_state = 145},
  [47] = {.lex_state = 145},
  [48] = {.lex_state = 145},
  [49] = {.lex_state = 145},
  [50] = {.lex_state = 145},
  [51] = {.lex_state = 145},
  [52] = {.lex_state = 145},
  [53] = {.lex_state = 145},
  [54] = {.lex_state = 253},
  [55] = {.lex_state = 145},
  [56] = {.lex_state = 145},
  [57] = {.lex_state = 243},
  [58] = {.lex_state = 253},
  [59] = {.lex_state = 243},
  [60] = {.lex_state = 145},
  [61] = {.lex_state = 243},
  [62] = {.lex_state = 245},
  [63] = {.lex_state = 308},
  [64] = {.lex_state = 243},
  [65] = {.lex_state = 253},
  [66] = {.lex_state = 243},
  [67] = {.lex_state = 253},
  [68] = {.lex_state = 253},
  [69] = {.lex_state = 145},
  [70] = {.lex_state = 243},
  [71] = {.lex_state = 243},
  [72] = {.lex_state = 145},
  [73] = {.lex_state = 243},
  [74] = {.lex_state = 243},
  [75] = {.lex_state = 253},
  [76] = {.lex_state = 243},
  [77] = {.lex_state = 243},
  [78] = {.lex_state = 253},
  [79] = {.lex_state = 253},
  [80] = {.lex_state = 253},
  [81] = {.lex_state = 307},
  [82] = {.lex_state = 253},
  [83] = {.lex_state = 253},
  [84] = {.lex_state = 253},
  [85] = {.lex_state = 253},
  [86] = {.lex_state = 253},
  [87] = {.lex_state = 253},
  [88] = {.lex_state = 145},
  [89] = {.lex_state = 145},
  [90] = {.lex_state = 253},
  [91] = {.lex_state = 243},
  [92] = {.lex_state = 243},
  [93] = {.lex_state = 253},
  [94] = {.lex_state = 253},
  [95] = {.lex_state = 253},
  [96] = {.lex_state = 145},
  [97] = {.lex_state = 145},
  [98] = {.lex_state = 243},
  [99] = {.lex_state = 253},
  [100] = {.lex_state = 253},
  [101] = {.lex_state = 253},
  [102] = {.lex_state = 243},
  [103] = {.lex_state = 145},
  [104] = {.lex_state = 319},
  [105] = {.lex_state = 243},
  [106] = {.lex_state = 243},
  [107] = {.lex_state = 243},
  [108] = {.lex_state = 253},
  [109] = {.lex_state = 253},
  [110] = {.lex_state = 145},
  [111] = {.lex_state = 243},
  [112] = {.lex_state = 243},
  [113] = {.lex_state = 243},
  [114] = {.lex_state = 322},
  [115] = {.lex_state = 328},
  [116] = {.lex_state = 243},
  [117] = {.lex_state = 322},
  [118] = {.lex_state = 322},
  [119] = {.lex_state = 243},
  [120] = {.lex_state = 253},
  [121] = {.lex_state = 307},
  [122] = {.lex_state = 253},
  [123] = {.lex_state = 253},
  [124] = {.lex_state = 253},
  [125] = {.lex_state = 322},
  [126] = {.lex_state = 253},
  [127] = {.lex_state = 243},
  [128] = {.lex_state = 253},
  [129] = {.lex_state = 253},
  [130] = {.lex_state = 253},
  [131] = {.lex_state = 253},
  [132] = {.lex_state = 307},
  [133] = {.lex_state = 145},
  [134] = {.lex_state = 145},
  [135] = {.lex_state = 145},
  [136] = {.lex_state = 145},
  [137] = {.lex_state = 145},
  [138] = {.lex_state = 145},
  [139] = {.lex_state = 145},
  [140] = {.lex_state = 145},
  [141] = {.lex_state = 253},
  [142] = {.lex_state = 243},
  [143] = {.lex_state = 253},
  [144] = {.lex_state = 145},
  [145] = {.lex_state = 253},
  [146] = {.lex_state = 253},
  [147] = {.lex_state = 243},
  [148] = {.lex_state = 243},
  [149] = {.lex_state = 145},
  [150] = {.lex_state = 253},
  [151] = {.lex_state = 253},
  [152] = {.lex_state = 319},
  [153] = {.lex_state = 243},
  [154] = {.lex_state = 319},
  [155] = {.lex_state = 243},
  [156] = {.lex_state = 319},
  [157] = {.lex_state = 329},
  [158] = {.lex_state = 329},
  [159] = {.lex_state = 243},
  [160] = {.lex_state = 253},
  [161] = {.lex_state = 253},
  [162] = {.lex_state = 243},
  [163] = {.lex_state = 243},
  [164] = {.lex_state = 145},
  [165] = {.lex_state = 243},
  [166] = {.lex_state = 243},
  [167] = {.lex_state = 243},
  [168] = {.lex_state = 322},
  [169] = {.lex_state = 253},
  [170] = {.lex_state = 243},
  [171] = {.lex_state = 322},
  [172] = {.lex_state = 322},
  [173] = {.lex_state = 243},
  [174] = {.lex_state = 307},
  [175] = {.lex_state = 253},
  [176] = {.lex_state = 331},
  [177] = {.lex_state = 243},
  [178] = {.lex_state = 322},
  [179] = {.lex_state = 322},
  [180] = {.lex_state = 322},
  [181] = {.lex_state = 243},
  [182] = {.lex_state = 253},
  [183] = {.lex_state = 253},
  [184] = {.lex_state = 307},
  [185] = {.lex_state = 253},
  [186] = {.lex_state = 253},
  [187] = {.lex_state = 253},
  [188] = {.lex_state = 253},
  [189] = {.lex_state = 253},
  [190] = {.lex_state = 253},
  [191] = {.lex_state = 253},
  [192] = {.lex_state = 253},
  [193] = {.lex_state = 145},
  [194] = {.lex_state = 253},
  [195] = {.lex_state = 145},
  [196] = {.lex_state = 243},
  [197] = {.lex_state = 334},
  [198] = {.lex_state = 243},
  [199] = {.lex_state = 253},
  [200] = {.lex_state = 253},
  [201] = {.lex_state = 253},
  [202] = {.lex_state = 253},
  [203] = {.lex_state = 253},
  [204] = {.lex_state = 253},
  [205] = {.lex_state = 253},
  [206] = {.lex_state = 253},
  [207] = {.lex_state = 334},
  [208] = {.lex_state = 334},
  [209] = {.lex_state = 253},
  [210] = {.lex_state = 243},
  [211] = {.lex_state = 243},
  [212] = {.lex_state = 145},
  [213] = {.lex_state = 253},
  [214] = {.lex_state = 243},
  [215] = {.lex_state = 319},
  [216] = {.lex_state = 243},
  [217] = {.lex_state = 243},
  [218] = {.lex_state = 243},
  [219] = {.lex_state = 243},
  [220] = {.lex_state = 243},
  [221] = {.lex_state = 243},
  [222] = {.lex_state = 243},
  [223] = {.lex_state = 145},
  [224] = {.lex_state = 145},
  [225] = {.lex_state = 308},
  [226] = {.lex_state = 243},
  [227] = {.lex_state = 322},
  [228] = {.lex_state = 322},
  [229] = {.lex_state = 243},
  [230] = {.lex_state = 322},
  [231] = {.lex_state = 253},
  [232] = {.lex_state = 253},
  [233] = {.lex_state = 253},
  [234] = {.lex_state = 243},
  [235] = {.lex_state = 322},
  [236] = {.lex_state = 322},
  [237] = {.lex_state = 322},
  [238] = {.lex_state = 253},
  [239] = {.lex_state = 331},
  [240] = {.lex_state = 331},
  [241] = {.lex_state = 331},
  [242] = {.lex_state = 322},
  [243] = {.lex_state = 243},
  [244] = {.lex_state = 322},
  [245] = {.lex_state = 243},
  [246] = {.lex_state = 322},
  [247] = {.lex_state = 253},
  [248] = {.lex_state = 243},
  [249] = {.lex_state = 307},
  [250] = {.lex_state = 145},
  [251] = {.lex_state = 253},
  [252] = {.lex_state = 253},
  [253] = {.lex_state = 145},
  [254] = {.lex_state = 145},
  [255] = {.lex_state = 253},
  [256] = {.lex_state = 243},
  [257] = {.lex_state = 145},
  [258] = {.lex_state = 145},
  [259] = {.lex_state = 145},
  [260] = {.lex_state = 145},
  [261] = {.lex_state = 145},
  [262] = {.lex_state = 145},
  [263] = {.lex_state = 145},
  [264] = {.lex_state = 145},
  [265] = {.lex_state = 145},
  [266] = {.lex_state = 145},
  [267] = {.lex_state = 243},
  [268] = {.lex_state = 243},
  [269] = {.lex_state = 253},
  [270] = {.lex_state = 243},
  [271] = {.lex_state = 329},
  [272] = {.lex_state = 243},
  [273] = {.lex_state = 243},
  [274] = {.lex_state = 243},
  [275] = {.lex_state = 243},
  [276] = {.lex_state = 243},
  [277] = {.lex_state = 253},
  [278] = {.lex_state = 145},
  [279] = {.lex_state = 145},
  [280] = {.lex_state = 243},
  [281] = {.lex_state = 243},
  [282] = {.lex_state = 322},
  [283] = {.lex_state = 322},
  [284] = {.lex_state = 331},
  [285] = {.lex_state = 331},
  [286] = {.lex_state = 322},
  [287] = {.lex_state = 331},
  [288] = {.lex_state = 322},
  [289] = {.lex_state = 253},
  [290] = {.lex_state = 322},
  [291] = {.lex_state = 253},
  [292] = {.lex_state = 322},
  [293] = {.lex_state = 253},
  [294] = {.lex_state = 331},
  [295] = {.lex_state = 322},
  [296] = {.lex_state = 322},
  [297] = {.lex_state = 243},
  [298] = {.lex_state = 322},
  [299] = {.lex_state = 253},
  [300] = {.lex_state = 253},
  [301] = {.lex_state = 145},
  [302] = {.lex_state = 307},
  [303] = {.lex_state = 145},
  [304] = {.lex_state = 145},
  [305] = {.lex_state = 145},
  [306] = {.lex_state = 145},
  [307] = {.lex_state = 145},
  [308] = {.lex_state = 145},
  [309] = {.lex_state = 145},
  [310] = {.lex_state = 253},
  [311] = {.lex_state = 253},
  [312] = {.lex_state = 253},
  [313] = {.lex_state = 253},
  [314] = {.lex_state = 253},
  [315] = {.lex_state = 253},
  [316] = {.lex_state = 253},
  [317] = {.lex_state = 334},
  [318] = {.lex_state = 334},
  [319] = {.lex_state = 334},
  [320] = {.lex_state = 253},
  [321] = {.lex_state = 243},
  [322] = {.lex_state = 243},
  [323] = {.lex_state = 243},
  [324] = {.lex_state = 243},
  [325] = {.lex_state = 243},
  [326] = {.lex_state = 243},
  [327] = {.lex_state = 322},
  [328] = {.lex_state = 243},
  [329] = {.lex_state = 308},
  [330] = {.lex_state = 243},
  [331] = {.lex_state = 322},
  [332] = {.lex_state = 322},
  [333] = {.lex_state = 331},
  [334] = {.lex_state = 322},
  [335] = {.lex_state = 253},
  [336] = {.lex_state = 253},
  [337] = {.lex_state = 322},
  [338] = {.lex_state = 322},
  [339] = {.lex_state = 253},
  [340] = {.lex_state = 253},
  [341] = {.lex_state = 253},
  [342] = {.lex_state = 253},
  [343] = {.lex_state = 253},
  [344] = {.lex_state = 253},
  [345] = {.lex_state = 145},
  [346] = {.lex_state = 253},
  [347] = {.lex_state = 243},
  [348] = {.lex_state = 243},
  [349] = {.lex_state = 322},
  [350] = {.lex_state = 331},
  [351] = {.lex_state = 253},
  [352] = {.lex_state = 145},
  [353] = {.lex_state = 145},
  [354] = {.lex_state = 331},
  [355] = {.lex_state = 322},
  [356] = {.lex_state = 322},
  [357] = {.lex_state = 253},
  [358] = {.lex_state = 322},
  [359] = {.lex_state = 145},
  [360] = {.lex_state = 243},
  [361] = {.lex_state = 243},
  [362] = {.lex_state = 331},
  [363] = {.lex_state = 331},
  [364] = {.lex_state = 322},
  [365] = {.lex_state = 253},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__semicolon] = ACTIONS(1),
    [sym_hex_integer_literal] = ACTIONS(3),
    [sym_octal_integer_literal] = ACTIONS(3),
    [sym_hex_floating_point_literal] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_null_literal] = ACTIONS(3),
    [aux_sym_SLASH_BSLASH_BSLASH_SLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(3),
    [anon_sym_LT_LT] = ACTIONS(3),
    [anon_sym_GT_GT] = ACTIONS(3),
    [anon_sym_GT_GT_GT] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(3),
    [anon_sym_byte] = ACTIONS(3),
    [anon_sym_short] = ACTIONS(3),
    [anon_sym_int] = ACTIONS(3),
    [anon_sym_long] = ACTIONS(3),
    [anon_sym_char] = ACTIONS(3),
    [anon_sym_float] = ACTIONS(3),
    [anon_sym_double] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(3),
    [anon_sym_transitive] = ACTIONS(3),
    [anon_sym_static] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_program] = STATE(16),
    [sym__statement] = STATE(17),
    [sym__literal] = STATE(18),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(19),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [sym__annotation] = STATE(22),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [sym__declaration] = STATE(24),
    [sym_module_declaration] = STATE(25),
    [sym_package_declaration] = STATE(25),
    [sym_import_statement] = STATE(25),
    [sym_single_type_import_declaration] = STATE(26),
    [sym_type_import_on_declaraction] = STATE(26),
    [sym_single_static_import_declaration] = STATE(26),
    [sym_static_import_on_demand_declaration] = STATE(26),
    [sym_class_declaration] = STATE(25),
    [sym_normal_class_declaration] = STATE(27),
    [sym_class_modifier] = STATE(28),
    [aux_sym_program_repeat1] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(30),
    [aux_sym_normal_class_declaration_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(10),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(18),
    [anon_sym_false] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_open] = ACTIONS(30),
    [anon_sym_module] = ACTIONS(32),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_package] = ACTIONS(36),
    [anon_sym_import] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [sym_comment] = ACTIONS(42),
  },
  [2] = {
    [sym__semicolon] = ACTIONS(44),
    [anon_sym_RPAREN] = ACTIONS(44),
    [anon_sym_COMMA] = ACTIONS(44),
    [sym_comment] = ACTIONS(42),
  },
  [3] = {
    [sym__semicolon] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(46),
    [anon_sym_COMMA] = ACTIONS(46),
    [sym_comment] = ACTIONS(42),
  },
  [4] = {
    [sym__semicolon] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(48),
    [sym_comment] = ACTIONS(42),
  },
  [5] = {
    [aux_sym_character_literal_repeat1] = STATE(34),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(52),
    [sym_comment] = ACTIONS(54),
  },
  [6] = {
    [sym__semicolon] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_COMMA] = ACTIONS(56),
    [sym_comment] = ACTIONS(42),
  },
  [7] = {
    [sym__expression] = STATE(35),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(42),
  },
  [8] = {
    [sym__expression] = STATE(36),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(42),
  },
  [9] = {
    [sym_package_or_type_name] = STATE(38),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(42),
  },
  [10] = {
    [anon_sym_module] = ACTIONS(60),
    [sym_comment] = ACTIONS(42),
  },
  [11] = {
    [sym_module_identifier] = STATE(41),
    [sym_identifier] = ACTIONS(62),
    [sym_comment] = ACTIONS(42),
  },
  [12] = {
    [anon_sym_AT] = ACTIONS(64),
    [anon_sym_static] = ACTIONS(64),
    [anon_sym_class] = ACTIONS(64),
    [anon_sym_public] = ACTIONS(64),
    [anon_sym_protected] = ACTIONS(64),
    [anon_sym_private] = ACTIONS(64),
    [anon_sym_final] = ACTIONS(64),
    [anon_sym_strictfp] = ACTIONS(64),
    [sym_comment] = ACTIONS(42),
  },
  [13] = {
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(42),
  },
  [14] = {
    [sym_package_or_type_name] = STATE(44),
    [anon_sym_static] = ACTIONS(68),
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(42),
  },
  [15] = {
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(42),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [sym_comment] = ACTIONS(42),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym_decimal_integer_literal] = ACTIONS(78),
    [sym_hex_integer_literal] = ACTIONS(78),
    [sym_octal_integer_literal] = ACTIONS(78),
    [sym_binary_integer_literal] = ACTIONS(78),
    [sym_decimal_floating_point_literal] = ACTIONS(78),
    [sym_hex_floating_point_literal] = ACTIONS(80),
    [anon_sym_true] = ACTIONS(76),
    [anon_sym_false] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(76),
    [sym_string_literal] = ACTIONS(76),
    [sym_null_literal] = ACTIONS(76),
    [anon_sym_BANG] = ACTIONS(76),
    [anon_sym_TILDE] = ACTIONS(76),
    [anon_sym_PLUS_PLUS] = ACTIONS(76),
    [anon_sym_DASH_DASH] = ACTIONS(76),
    [anon_sym_AT] = ACTIONS(76),
    [anon_sym_open] = ACTIONS(76),
    [anon_sym_module] = ACTIONS(76),
    [anon_sym_static] = ACTIONS(76),
    [anon_sym_package] = ACTIONS(76),
    [anon_sym_import] = ACTIONS(76),
    [anon_sym_class] = ACTIONS(76),
    [anon_sym_public] = ACTIONS(76),
    [anon_sym_protected] = ACTIONS(76),
    [anon_sym_private] = ACTIONS(76),
    [anon_sym_final] = ACTIONS(76),
    [anon_sym_strictfp] = ACTIONS(76),
    [sym_comment] = ACTIONS(42),
  },
  [18] = {
    [sym__semicolon] = ACTIONS(82),
    [sym_comment] = ACTIONS(42),
  },
  [19] = {
    [sym__semicolon] = ACTIONS(82),
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_PLUS_EQ] = ACTIONS(86),
    [anon_sym_DASH_EQ] = ACTIONS(86),
    [anon_sym_STAR_EQ] = ACTIONS(86),
    [anon_sym_SLASH_EQ] = ACTIONS(86),
    [anon_sym_AMP_EQ] = ACTIONS(86),
    [anon_sym_PIPE_EQ] = ACTIONS(86),
    [anon_sym_CARET_EQ] = ACTIONS(86),
    [anon_sym_PERCENT_EQ] = ACTIONS(86),
    [anon_sym_LT_LT_EQ] = ACTIONS(86),
    [anon_sym_GT_GT_EQ] = ACTIONS(86),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(88),
    [anon_sym_LT] = ACTIONS(88),
    [anon_sym_EQ_EQ] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [anon_sym_BANG_EQ] = ACTIONS(90),
    [anon_sym_AMP_AMP] = ACTIONS(92),
    [anon_sym_PIPE_PIPE] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_AMP] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_CARET] = ACTIONS(102),
    [anon_sym_PERCENT] = ACTIONS(98),
    [anon_sym_LT_LT] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(98),
    [anon_sym_GT_GT_GT] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(104),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(42),
  },
  [20] = {
    [sym__semicolon] = ACTIONS(108),
    [anon_sym_EQ] = ACTIONS(110),
    [anon_sym_PLUS_EQ] = ACTIONS(108),
    [anon_sym_DASH_EQ] = ACTIONS(108),
    [anon_sym_STAR_EQ] = ACTIONS(108),
    [anon_sym_SLASH_EQ] = ACTIONS(108),
    [anon_sym_AMP_EQ] = ACTIONS(108),
    [anon_sym_PIPE_EQ] = ACTIONS(108),
    [anon_sym_CARET_EQ] = ACTIONS(108),
    [anon_sym_PERCENT_EQ] = ACTIONS(108),
    [anon_sym_LT_LT_EQ] = ACTIONS(108),
    [anon_sym_GT_GT_EQ] = ACTIONS(108),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(108),
    [anon_sym_GT] = ACTIONS(110),
    [anon_sym_LT] = ACTIONS(110),
    [anon_sym_EQ_EQ] = ACTIONS(108),
    [anon_sym_GT_EQ] = ACTIONS(108),
    [anon_sym_LT_EQ] = ACTIONS(108),
    [anon_sym_BANG_EQ] = ACTIONS(108),
    [anon_sym_AMP_AMP] = ACTIONS(108),
    [anon_sym_PIPE_PIPE] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_AMP] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(110),
    [anon_sym_PERCENT] = ACTIONS(110),
    [anon_sym_LT_LT] = ACTIONS(110),
    [anon_sym_GT_GT] = ACTIONS(110),
    [anon_sym_GT_GT_GT] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(108),
    [anon_sym_PLUS_PLUS] = ACTIONS(108),
    [anon_sym_DASH_DASH] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(108),
    [sym_comment] = ACTIONS(42),
  },
  [21] = {
    [sym__semicolon] = ACTIONS(112),
    [anon_sym_EQ] = ACTIONS(114),
    [anon_sym_PLUS_EQ] = ACTIONS(112),
    [anon_sym_DASH_EQ] = ACTIONS(112),
    [anon_sym_STAR_EQ] = ACTIONS(112),
    [anon_sym_SLASH_EQ] = ACTIONS(112),
    [anon_sym_AMP_EQ] = ACTIONS(112),
    [anon_sym_PIPE_EQ] = ACTIONS(112),
    [anon_sym_CARET_EQ] = ACTIONS(112),
    [anon_sym_PERCENT_EQ] = ACTIONS(112),
    [anon_sym_LT_LT_EQ] = ACTIONS(112),
    [anon_sym_GT_GT_EQ] = ACTIONS(112),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(112),
    [anon_sym_GT] = ACTIONS(114),
    [anon_sym_LT] = ACTIONS(114),
    [anon_sym_EQ_EQ] = ACTIONS(112),
    [anon_sym_GT_EQ] = ACTIONS(112),
    [anon_sym_LT_EQ] = ACTIONS(112),
    [anon_sym_BANG_EQ] = ACTIONS(112),
    [anon_sym_AMP_AMP] = ACTIONS(112),
    [anon_sym_PIPE_PIPE] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(114),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_AMP] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_CARET] = ACTIONS(114),
    [anon_sym_PERCENT] = ACTIONS(114),
    [anon_sym_LT_LT] = ACTIONS(114),
    [anon_sym_GT_GT] = ACTIONS(114),
    [anon_sym_GT_GT_GT] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(112),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_PLUS_PLUS] = ACTIONS(112),
    [anon_sym_DASH_DASH] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(112),
    [sym_comment] = ACTIONS(42),
  },
  [22] = {
    [anon_sym_AT] = ACTIONS(116),
    [anon_sym_open] = ACTIONS(119),
    [anon_sym_module] = ACTIONS(119),
    [anon_sym_static] = ACTIONS(64),
    [anon_sym_package] = ACTIONS(119),
    [anon_sym_class] = ACTIONS(64),
    [anon_sym_public] = ACTIONS(64),
    [anon_sym_protected] = ACTIONS(64),
    [anon_sym_private] = ACTIONS(64),
    [anon_sym_final] = ACTIONS(64),
    [anon_sym_strictfp] = ACTIONS(64),
    [sym_comment] = ACTIONS(42),
  },
  [23] = {
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(121),
    [anon_sym_open] = ACTIONS(121),
    [anon_sym_module] = ACTIONS(121),
    [anon_sym_static] = ACTIONS(121),
    [anon_sym_package] = ACTIONS(121),
    [anon_sym_class] = ACTIONS(121),
    [anon_sym_public] = ACTIONS(121),
    [anon_sym_protected] = ACTIONS(121),
    [anon_sym_private] = ACTIONS(121),
    [anon_sym_final] = ACTIONS(121),
    [anon_sym_strictfp] = ACTIONS(121),
    [sym_comment] = ACTIONS(42),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_decimal_integer_literal] = ACTIONS(125),
    [sym_hex_integer_literal] = ACTIONS(125),
    [sym_octal_integer_literal] = ACTIONS(125),
    [sym_binary_integer_literal] = ACTIONS(125),
    [sym_decimal_floating_point_literal] = ACTIONS(125),
    [sym_hex_floating_point_literal] = ACTIONS(127),
    [anon_sym_true] = ACTIONS(123),
    [anon_sym_false] = ACTIONS(123),
    [anon_sym_SQUOTE] = ACTIONS(123),
    [sym_string_literal] = ACTIONS(123),
    [sym_null_literal] = ACTIONS(123),
    [anon_sym_BANG] = ACTIONS(123),
    [anon_sym_TILDE] = ACTIONS(123),
    [anon_sym_PLUS_PLUS] = ACTIONS(123),
    [anon_sym_DASH_DASH] = ACTIONS(123),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_open] = ACTIONS(123),
    [anon_sym_module] = ACTIONS(123),
    [anon_sym_static] = ACTIONS(123),
    [anon_sym_package] = ACTIONS(123),
    [anon_sym_import] = ACTIONS(123),
    [anon_sym_class] = ACTIONS(123),
    [anon_sym_public] = ACTIONS(123),
    [anon_sym_protected] = ACTIONS(123),
    [anon_sym_private] = ACTIONS(123),
    [anon_sym_final] = ACTIONS(123),
    [anon_sym_strictfp] = ACTIONS(123),
    [sym_comment] = ACTIONS(42),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_decimal_integer_literal] = ACTIONS(131),
    [sym_hex_integer_literal] = ACTIONS(131),
    [sym_octal_integer_literal] = ACTIONS(131),
    [sym_binary_integer_literal] = ACTIONS(131),
    [sym_decimal_floating_point_literal] = ACTIONS(131),
    [sym_hex_floating_point_literal] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(129),
    [anon_sym_false] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [sym_string_literal] = ACTIONS(129),
    [sym_null_literal] = ACTIONS(129),
    [anon_sym_BANG] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(129),
    [anon_sym_PLUS_PLUS] = ACTIONS(129),
    [anon_sym_DASH_DASH] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(129),
    [anon_sym_open] = ACTIONS(129),
    [anon_sym_module] = ACTIONS(129),
    [anon_sym_static] = ACTIONS(129),
    [anon_sym_package] = ACTIONS(129),
    [anon_sym_import] = ACTIONS(129),
    [anon_sym_class] = ACTIONS(129),
    [anon_sym_public] = ACTIONS(129),
    [anon_sym_protected] = ACTIONS(129),
    [anon_sym_private] = ACTIONS(129),
    [anon_sym_final] = ACTIONS(129),
    [anon_sym_strictfp] = ACTIONS(129),
    [sym_comment] = ACTIONS(42),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_decimal_integer_literal] = ACTIONS(137),
    [sym_hex_integer_literal] = ACTIONS(137),
    [sym_octal_integer_literal] = ACTIONS(137),
    [sym_binary_integer_literal] = ACTIONS(137),
    [sym_decimal_floating_point_literal] = ACTIONS(137),
    [sym_hex_floating_point_literal] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(135),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [sym_string_literal] = ACTIONS(135),
    [sym_null_literal] = ACTIONS(135),
    [anon_sym_BANG] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(135),
    [anon_sym_PLUS_PLUS] = ACTIONS(135),
    [anon_sym_DASH_DASH] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(135),
    [anon_sym_open] = ACTIONS(135),
    [anon_sym_module] = ACTIONS(135),
    [anon_sym_static] = ACTIONS(135),
    [anon_sym_package] = ACTIONS(135),
    [anon_sym_import] = ACTIONS(135),
    [anon_sym_class] = ACTIONS(135),
    [anon_sym_public] = ACTIONS(135),
    [anon_sym_protected] = ACTIONS(135),
    [anon_sym_private] = ACTIONS(135),
    [anon_sym_final] = ACTIONS(135),
    [anon_sym_strictfp] = ACTIONS(135),
    [sym_comment] = ACTIONS(42),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym__semicolon] = ACTIONS(141),
    [sym_decimal_integer_literal] = ACTIONS(143),
    [sym_hex_integer_literal] = ACTIONS(143),
    [sym_octal_integer_literal] = ACTIONS(143),
    [sym_binary_integer_literal] = ACTIONS(143),
    [sym_decimal_floating_point_literal] = ACTIONS(143),
    [sym_hex_floating_point_literal] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(141),
    [anon_sym_false] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(141),
    [sym_string_literal] = ACTIONS(141),
    [sym_null_literal] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(141),
    [anon_sym_PLUS_PLUS] = ACTIONS(141),
    [anon_sym_DASH_DASH] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(141),
    [anon_sym_open] = ACTIONS(141),
    [anon_sym_module] = ACTIONS(141),
    [anon_sym_static] = ACTIONS(141),
    [anon_sym_package] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(141),
    [anon_sym_class] = ACTIONS(141),
    [anon_sym_public] = ACTIONS(141),
    [anon_sym_protected] = ACTIONS(141),
    [anon_sym_private] = ACTIONS(141),
    [anon_sym_final] = ACTIONS(141),
    [anon_sym_strictfp] = ACTIONS(141),
    [sym_comment] = ACTIONS(42),
  },
  [28] = {
    [anon_sym_AT] = ACTIONS(147),
    [anon_sym_static] = ACTIONS(147),
    [anon_sym_class] = ACTIONS(147),
    [anon_sym_public] = ACTIONS(147),
    [anon_sym_protected] = ACTIONS(147),
    [anon_sym_private] = ACTIONS(147),
    [anon_sym_final] = ACTIONS(147),
    [anon_sym_strictfp] = ACTIONS(147),
    [sym_comment] = ACTIONS(42),
  },
  [29] = {
    [sym__statement] = STATE(55),
    [sym__literal] = STATE(18),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(19),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [sym__annotation] = STATE(22),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [sym__declaration] = STATE(24),
    [sym_module_declaration] = STATE(25),
    [sym_package_declaration] = STATE(25),
    [sym_import_statement] = STATE(25),
    [sym_single_type_import_declaration] = STATE(26),
    [sym_type_import_on_declaraction] = STATE(26),
    [sym_single_static_import_declaration] = STATE(26),
    [sym_static_import_on_demand_declaration] = STATE(26),
    [sym_class_declaration] = STATE(25),
    [sym_normal_class_declaration] = STATE(27),
    [sym_class_modifier] = STATE(28),
    [aux_sym_class_or_interface_type_repeat1] = STATE(30),
    [aux_sym_normal_class_declaration_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(18),
    [anon_sym_false] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_open] = ACTIONS(30),
    [anon_sym_module] = ACTIONS(32),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_package] = ACTIONS(36),
    [anon_sym_import] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [sym_comment] = ACTIONS(42),
  },
  [30] = {
    [sym__annotation] = STATE(58),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_open] = ACTIONS(151),
    [anon_sym_module] = ACTIONS(60),
    [anon_sym_package] = ACTIONS(153),
    [sym_comment] = ACTIONS(42),
  },
  [31] = {
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [sym_class_modifier] = STATE(60),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(155),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [sym_comment] = ACTIONS(42),
  },
  [32] = {
    [sym__semicolon] = ACTIONS(157),
    [anon_sym_RPAREN] = ACTIONS(157),
    [anon_sym_COMMA] = ACTIONS(157),
    [sym_comment] = ACTIONS(42),
  },
  [33] = {
    [anon_sym_SQUOTE] = ACTIONS(159),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(159),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(159),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(159),
    [sym_comment] = ACTIONS(54),
  },
  [34] = {
    [anon_sym_SQUOTE] = ACTIONS(161),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(163),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(163),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(163),
    [sym_comment] = ACTIONS(54),
  },
  [35] = {
    [sym__semicolon] = ACTIONS(165),
    [anon_sym_EQ] = ACTIONS(167),
    [anon_sym_PLUS_EQ] = ACTIONS(165),
    [anon_sym_DASH_EQ] = ACTIONS(165),
    [anon_sym_STAR_EQ] = ACTIONS(165),
    [anon_sym_SLASH_EQ] = ACTIONS(165),
    [anon_sym_AMP_EQ] = ACTIONS(165),
    [anon_sym_PIPE_EQ] = ACTIONS(165),
    [anon_sym_CARET_EQ] = ACTIONS(165),
    [anon_sym_PERCENT_EQ] = ACTIONS(165),
    [anon_sym_LT_LT_EQ] = ACTIONS(165),
    [anon_sym_GT_GT_EQ] = ACTIONS(165),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(167),
    [anon_sym_EQ_EQ] = ACTIONS(165),
    [anon_sym_GT_EQ] = ACTIONS(165),
    [anon_sym_LT_EQ] = ACTIONS(165),
    [anon_sym_BANG_EQ] = ACTIONS(165),
    [anon_sym_AMP_AMP] = ACTIONS(165),
    [anon_sym_PIPE_PIPE] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_AMP] = ACTIONS(167),
    [anon_sym_PIPE] = ACTIONS(167),
    [anon_sym_CARET] = ACTIONS(167),
    [anon_sym_PERCENT] = ACTIONS(167),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_GT_GT] = ACTIONS(167),
    [anon_sym_GT_GT_GT] = ACTIONS(167),
    [anon_sym_QMARK] = ACTIONS(165),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(165),
    [sym_comment] = ACTIONS(42),
  },
  [36] = {
    [sym__semicolon] = ACTIONS(169),
    [anon_sym_EQ] = ACTIONS(171),
    [anon_sym_PLUS_EQ] = ACTIONS(169),
    [anon_sym_DASH_EQ] = ACTIONS(169),
    [anon_sym_STAR_EQ] = ACTIONS(169),
    [anon_sym_SLASH_EQ] = ACTIONS(169),
    [anon_sym_AMP_EQ] = ACTIONS(169),
    [anon_sym_PIPE_EQ] = ACTIONS(169),
    [anon_sym_CARET_EQ] = ACTIONS(169),
    [anon_sym_PERCENT_EQ] = ACTIONS(169),
    [anon_sym_LT_LT_EQ] = ACTIONS(169),
    [anon_sym_GT_GT_EQ] = ACTIONS(169),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(169),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(169),
    [anon_sym_GT_EQ] = ACTIONS(169),
    [anon_sym_LT_EQ] = ACTIONS(169),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(171),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(171),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_LT_LT] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(171),
    [anon_sym_GT_GT_GT] = ACTIONS(171),
    [anon_sym_QMARK] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_PLUS_PLUS] = ACTIONS(169),
    [anon_sym_DASH_DASH] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [sym_comment] = ACTIONS(42),
  },
  [37] = {
    [sym__semicolon] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_DOT] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(173),
    [anon_sym_open] = ACTIONS(173),
    [anon_sym_module] = ACTIONS(173),
    [anon_sym_with] = ACTIONS(173),
    [anon_sym_static] = ACTIONS(173),
    [anon_sym_package] = ACTIONS(173),
    [anon_sym_class] = ACTIONS(173),
    [anon_sym_public] = ACTIONS(173),
    [anon_sym_protected] = ACTIONS(173),
    [anon_sym_private] = ACTIONS(173),
    [anon_sym_final] = ACTIONS(173),
    [anon_sym_strictfp] = ACTIONS(173),
    [sym_comment] = ACTIONS(42),
  },
  [38] = {
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(177),
    [anon_sym_open] = ACTIONS(177),
    [anon_sym_module] = ACTIONS(177),
    [anon_sym_static] = ACTIONS(177),
    [anon_sym_package] = ACTIONS(177),
    [anon_sym_class] = ACTIONS(177),
    [anon_sym_public] = ACTIONS(177),
    [anon_sym_protected] = ACTIONS(177),
    [anon_sym_private] = ACTIONS(177),
    [anon_sym_final] = ACTIONS(177),
    [anon_sym_strictfp] = ACTIONS(177),
    [sym_comment] = ACTIONS(42),
  },
  [39] = {
    [sym_module_identifier] = STATE(65),
    [sym_identifier] = ACTIONS(62),
    [sym_comment] = ACTIONS(42),
  },
  [40] = {
    [aux_sym_module_identifier_repeat1] = STATE(67),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(183),
    [sym_comment] = ACTIONS(42),
  },
  [41] = {
    [anon_sym_LBRACE] = ACTIONS(185),
    [sym_comment] = ACTIONS(42),
  },
  [42] = {
    [aux_sym_module_identifier_repeat1] = STATE(70),
    [sym__semicolon] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(183),
    [sym_comment] = ACTIONS(42),
  },
  [43] = {
    [sym_package_or_type_name] = STATE(71),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(42),
  },
  [44] = {
    [sym__semicolon] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(191),
    [sym_comment] = ACTIONS(42),
  },
  [45] = {
    [sym_type_paramaters] = STATE(78),
    [sym_superclass] = STATE(79),
    [sym_super_interfaces] = STATE(80),
    [sym_class_body] = STATE(81),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_extends] = ACTIONS(197),
    [anon_sym_implements] = ACTIONS(199),
    [sym_comment] = ACTIONS(42),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_decimal_integer_literal] = ACTIONS(203),
    [sym_hex_integer_literal] = ACTIONS(203),
    [sym_octal_integer_literal] = ACTIONS(203),
    [sym_binary_integer_literal] = ACTIONS(203),
    [sym_decimal_floating_point_literal] = ACTIONS(203),
    [sym_hex_floating_point_literal] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(201),
    [anon_sym_false] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_string_literal] = ACTIONS(201),
    [sym_null_literal] = ACTIONS(201),
    [anon_sym_BANG] = ACTIONS(201),
    [anon_sym_TILDE] = ACTIONS(201),
    [anon_sym_PLUS_PLUS] = ACTIONS(201),
    [anon_sym_DASH_DASH] = ACTIONS(201),
    [anon_sym_AT] = ACTIONS(201),
    [anon_sym_open] = ACTIONS(201),
    [anon_sym_module] = ACTIONS(201),
    [anon_sym_static] = ACTIONS(201),
    [anon_sym_package] = ACTIONS(201),
    [anon_sym_import] = ACTIONS(201),
    [anon_sym_class] = ACTIONS(201),
    [anon_sym_public] = ACTIONS(201),
    [anon_sym_protected] = ACTIONS(201),
    [anon_sym_private] = ACTIONS(201),
    [anon_sym_final] = ACTIONS(201),
    [anon_sym_strictfp] = ACTIONS(201),
    [sym_comment] = ACTIONS(42),
  },
  [47] = {
    [sym__expression] = STATE(82),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(42),
  },
  [48] = {
    [sym__expression] = STATE(83),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(42),
  },
  [49] = {
    [sym__expression] = STATE(84),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(42),
  },
  [50] = {
    [sym__expression] = STATE(85),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(42),
  },
  [51] = {
    [sym__expression] = STATE(86),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(42),
  },
  [52] = {
    [sym__expression] = STATE(87),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(42),
  },
  [53] = {
    [sym__expression] = STATE(90),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_PLUS_PLUS] = ACTIONS(209),
    [anon_sym_DASH_DASH] = ACTIONS(209),
    [sym_comment] = ACTIONS(42),
  },
  [54] = {
    [sym__semicolon] = ACTIONS(169),
    [anon_sym_EQ] = ACTIONS(171),
    [anon_sym_PLUS_EQ] = ACTIONS(169),
    [anon_sym_DASH_EQ] = ACTIONS(169),
    [anon_sym_STAR_EQ] = ACTIONS(169),
    [anon_sym_SLASH_EQ] = ACTIONS(169),
    [anon_sym_AMP_EQ] = ACTIONS(169),
    [anon_sym_PIPE_EQ] = ACTIONS(169),
    [anon_sym_CARET_EQ] = ACTIONS(169),
    [anon_sym_PERCENT_EQ] = ACTIONS(169),
    [anon_sym_LT_LT_EQ] = ACTIONS(169),
    [anon_sym_GT_GT_EQ] = ACTIONS(169),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(169),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(169),
    [anon_sym_GT_EQ] = ACTIONS(169),
    [anon_sym_LT_EQ] = ACTIONS(169),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(171),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(171),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_LT_LT] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(171),
    [anon_sym_GT_GT_GT] = ACTIONS(171),
    [anon_sym_QMARK] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_PLUS_PLUS] = ACTIONS(169),
    [anon_sym_DASH_DASH] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [sym_comment] = ACTIONS(42),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [sym_decimal_integer_literal] = ACTIONS(213),
    [sym_hex_integer_literal] = ACTIONS(213),
    [sym_octal_integer_literal] = ACTIONS(213),
    [sym_binary_integer_literal] = ACTIONS(213),
    [sym_decimal_floating_point_literal] = ACTIONS(213),
    [sym_hex_floating_point_literal] = ACTIONS(215),
    [anon_sym_true] = ACTIONS(211),
    [anon_sym_false] = ACTIONS(211),
    [anon_sym_SQUOTE] = ACTIONS(211),
    [sym_string_literal] = ACTIONS(211),
    [sym_null_literal] = ACTIONS(211),
    [anon_sym_BANG] = ACTIONS(211),
    [anon_sym_TILDE] = ACTIONS(211),
    [anon_sym_PLUS_PLUS] = ACTIONS(211),
    [anon_sym_DASH_DASH] = ACTIONS(211),
    [anon_sym_AT] = ACTIONS(211),
    [anon_sym_open] = ACTIONS(211),
    [anon_sym_module] = ACTIONS(211),
    [anon_sym_static] = ACTIONS(211),
    [anon_sym_package] = ACTIONS(211),
    [anon_sym_import] = ACTIONS(211),
    [anon_sym_class] = ACTIONS(211),
    [anon_sym_public] = ACTIONS(211),
    [anon_sym_protected] = ACTIONS(211),
    [anon_sym_private] = ACTIONS(211),
    [anon_sym_final] = ACTIONS(211),
    [anon_sym_strictfp] = ACTIONS(211),
    [sym_comment] = ACTIONS(42),
  },
  [56] = {
    [anon_sym_module] = ACTIONS(217),
    [sym_comment] = ACTIONS(42),
  },
  [57] = {
    [sym_identifier] = ACTIONS(219),
    [sym_comment] = ACTIONS(42),
  },
  [58] = {
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_AT] = ACTIONS(221),
    [anon_sym_open] = ACTIONS(221),
    [anon_sym_module] = ACTIONS(221),
    [anon_sym_package] = ACTIONS(221),
    [sym_comment] = ACTIONS(42),
  },
  [59] = {
    [sym_identifier] = ACTIONS(223),
    [sym_comment] = ACTIONS(42),
  },
  [60] = {
    [anon_sym_AT] = ACTIONS(225),
    [anon_sym_static] = ACTIONS(225),
    [anon_sym_class] = ACTIONS(225),
    [anon_sym_public] = ACTIONS(225),
    [anon_sym_protected] = ACTIONS(225),
    [anon_sym_private] = ACTIONS(225),
    [anon_sym_final] = ACTIONS(225),
    [anon_sym_strictfp] = ACTIONS(225),
    [sym_comment] = ACTIONS(42),
  },
  [61] = {
    [sym__semicolon] = ACTIONS(227),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(227),
    [sym_comment] = ACTIONS(42),
  },
  [62] = {
    [anon_sym_SQUOTE] = ACTIONS(229),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(229),
    [sym_comment] = ACTIONS(54),
  },
  [63] = {
    [sym__literal] = STATE(96),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(97),
    [sym_element_value_pair] = STATE(98),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(231),
    [anon_sym_false] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(235),
    [sym_identifier] = ACTIONS(237),
    [sym_comment] = ACTIONS(42),
  },
  [64] = {
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(42),
  },
  [65] = {
    [anon_sym_LBRACE] = ACTIONS(241),
    [sym_comment] = ACTIONS(42),
  },
  [66] = {
    [sym_identifier] = ACTIONS(243),
    [sym_comment] = ACTIONS(42),
  },
  [67] = {
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_DOT] = ACTIONS(247),
    [sym_comment] = ACTIONS(42),
  },
  [68] = {
    [sym_module_directive] = STATE(108),
    [aux_sym_module_declaration_repeat1] = STATE(109),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_requires] = ACTIONS(251),
    [anon_sym_exports] = ACTIONS(253),
    [anon_sym_opens] = ACTIONS(253),
    [anon_sym_uses] = ACTIONS(255),
    [anon_sym_provides] = ACTIONS(257),
    [sym_comment] = ACTIONS(42),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [sym_decimal_integer_literal] = ACTIONS(261),
    [sym_hex_integer_literal] = ACTIONS(261),
    [sym_octal_integer_literal] = ACTIONS(261),
    [sym_binary_integer_literal] = ACTIONS(261),
    [sym_decimal_floating_point_literal] = ACTIONS(261),
    [sym_hex_floating_point_literal] = ACTIONS(263),
    [anon_sym_true] = ACTIONS(259),
    [anon_sym_false] = ACTIONS(259),
    [anon_sym_SQUOTE] = ACTIONS(259),
    [sym_string_literal] = ACTIONS(259),
    [sym_null_literal] = ACTIONS(259),
    [anon_sym_BANG] = ACTIONS(259),
    [anon_sym_TILDE] = ACTIONS(259),
    [anon_sym_PLUS_PLUS] = ACTIONS(259),
    [anon_sym_DASH_DASH] = ACTIONS(259),
    [anon_sym_AT] = ACTIONS(259),
    [anon_sym_open] = ACTIONS(259),
    [anon_sym_module] = ACTIONS(259),
    [anon_sym_static] = ACTIONS(259),
    [anon_sym_package] = ACTIONS(259),
    [anon_sym_import] = ACTIONS(259),
    [anon_sym_class] = ACTIONS(259),
    [anon_sym_public] = ACTIONS(259),
    [anon_sym_protected] = ACTIONS(259),
    [anon_sym_private] = ACTIONS(259),
    [anon_sym_final] = ACTIONS(259),
    [anon_sym_strictfp] = ACTIONS(259),
    [sym_comment] = ACTIONS(42),
  },
  [70] = {
    [sym__semicolon] = ACTIONS(265),
    [anon_sym_DOT] = ACTIONS(247),
    [sym_comment] = ACTIONS(42),
  },
  [71] = {
    [anon_sym_DOT] = ACTIONS(267),
    [sym_comment] = ACTIONS(42),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_decimal_integer_literal] = ACTIONS(271),
    [sym_hex_integer_literal] = ACTIONS(271),
    [sym_octal_integer_literal] = ACTIONS(271),
    [sym_binary_integer_literal] = ACTIONS(271),
    [sym_decimal_floating_point_literal] = ACTIONS(271),
    [sym_hex_floating_point_literal] = ACTIONS(273),
    [anon_sym_true] = ACTIONS(269),
    [anon_sym_false] = ACTIONS(269),
    [anon_sym_SQUOTE] = ACTIONS(269),
    [sym_string_literal] = ACTIONS(269),
    [sym_null_literal] = ACTIONS(269),
    [anon_sym_BANG] = ACTIONS(269),
    [anon_sym_TILDE] = ACTIONS(269),
    [anon_sym_PLUS_PLUS] = ACTIONS(269),
    [anon_sym_DASH_DASH] = ACTIONS(269),
    [anon_sym_AT] = ACTIONS(269),
    [anon_sym_open] = ACTIONS(269),
    [anon_sym_module] = ACTIONS(269),
    [anon_sym_static] = ACTIONS(269),
    [anon_sym_package] = ACTIONS(269),
    [anon_sym_import] = ACTIONS(269),
    [anon_sym_class] = ACTIONS(269),
    [anon_sym_public] = ACTIONS(269),
    [anon_sym_protected] = ACTIONS(269),
    [anon_sym_private] = ACTIONS(269),
    [anon_sym_final] = ACTIONS(269),
    [anon_sym_strictfp] = ACTIONS(269),
    [sym_comment] = ACTIONS(42),
  },
  [73] = {
    [anon_sym_STAR] = ACTIONS(275),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(42),
  },
  [74] = {
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [sym_type_parameter_list] = STATE(117),
    [sym_type_parameter] = STATE(118),
    [aux_sym_class_or_interface_type_repeat1] = STATE(119),
    [anon_sym_AT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(279),
    [sym_comment] = ACTIONS(42),
  },
  [75] = {
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [sym_class_declaration] = STATE(120),
    [sym_normal_class_declaration] = STATE(27),
    [sym_class_modifier] = STATE(28),
    [sym_class_body_declaration] = STATE(122),
    [sym_class_member_declaration] = STATE(123),
    [aux_sym_normal_class_declaration_repeat1] = STATE(31),
    [aux_sym_class_body_repeat1] = STATE(124),
    [sym__semicolon] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(283),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [sym_comment] = ACTIONS(42),
  },
  [76] = {
    [sym_class_or_interface_type] = STATE(126),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [aux_sym_class_or_interface_type_repeat1] = STATE(127),
    [anon_sym_AT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(285),
    [sym_comment] = ACTIONS(42),
  },
  [77] = {
    [sym_class_or_interface_type] = STATE(128),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [sym_interface_type_list] = STATE(129),
    [aux_sym_class_or_interface_type_repeat1] = STATE(127),
    [anon_sym_AT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(285),
    [sym_comment] = ACTIONS(42),
  },
  [78] = {
    [sym_superclass] = STATE(130),
    [sym_super_interfaces] = STATE(131),
    [sym_class_body] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_extends] = ACTIONS(197),
    [anon_sym_implements] = ACTIONS(199),
    [sym_comment] = ACTIONS(42),
  },
  [79] = {
    [sym_super_interfaces] = STATE(131),
    [sym_class_body] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_implements] = ACTIONS(199),
    [sym_comment] = ACTIONS(42),
  },
  [80] = {
    [sym_class_body] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(195),
    [sym_comment] = ACTIONS(42),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [sym__semicolon] = ACTIONS(287),
    [sym_decimal_integer_literal] = ACTIONS(289),
    [sym_hex_integer_literal] = ACTIONS(289),
    [sym_octal_integer_literal] = ACTIONS(289),
    [sym_binary_integer_literal] = ACTIONS(289),
    [sym_decimal_floating_point_literal] = ACTIONS(289),
    [sym_hex_floating_point_literal] = ACTIONS(291),
    [anon_sym_true] = ACTIONS(287),
    [anon_sym_false] = ACTIONS(287),
    [anon_sym_SQUOTE] = ACTIONS(287),
    [sym_string_literal] = ACTIONS(287),
    [sym_null_literal] = ACTIONS(287),
    [anon_sym_BANG] = ACTIONS(287),
    [anon_sym_TILDE] = ACTIONS(287),
    [anon_sym_PLUS_PLUS] = ACTIONS(287),
    [anon_sym_DASH_DASH] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(287),
    [anon_sym_AT] = ACTIONS(287),
    [anon_sym_open] = ACTIONS(287),
    [anon_sym_module] = ACTIONS(287),
    [anon_sym_static] = ACTIONS(287),
    [anon_sym_package] = ACTIONS(287),
    [anon_sym_import] = ACTIONS(287),
    [anon_sym_class] = ACTIONS(287),
    [anon_sym_public] = ACTIONS(287),
    [anon_sym_protected] = ACTIONS(287),
    [anon_sym_private] = ACTIONS(287),
    [anon_sym_final] = ACTIONS(287),
    [anon_sym_strictfp] = ACTIONS(287),
    [sym_comment] = ACTIONS(42),
  },
  [82] = {
    [sym__semicolon] = ACTIONS(293),
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_PLUS_EQ] = ACTIONS(86),
    [anon_sym_DASH_EQ] = ACTIONS(86),
    [anon_sym_STAR_EQ] = ACTIONS(86),
    [anon_sym_SLASH_EQ] = ACTIONS(86),
    [anon_sym_AMP_EQ] = ACTIONS(86),
    [anon_sym_PIPE_EQ] = ACTIONS(86),
    [anon_sym_CARET_EQ] = ACTIONS(86),
    [anon_sym_PERCENT_EQ] = ACTIONS(86),
    [anon_sym_LT_LT_EQ] = ACTIONS(86),
    [anon_sym_GT_GT_EQ] = ACTIONS(86),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(88),
    [anon_sym_LT] = ACTIONS(88),
    [anon_sym_EQ_EQ] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [anon_sym_BANG_EQ] = ACTIONS(90),
    [anon_sym_AMP_AMP] = ACTIONS(92),
    [anon_sym_PIPE_PIPE] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_AMP] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_CARET] = ACTIONS(102),
    [anon_sym_PERCENT] = ACTIONS(98),
    [anon_sym_LT_LT] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(98),
    [anon_sym_GT_GT_GT] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(104),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(42),
  },
  [83] = {
    [sym__semicolon] = ACTIONS(295),
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_PLUS_EQ] = ACTIONS(295),
    [anon_sym_DASH_EQ] = ACTIONS(295),
    [anon_sym_STAR_EQ] = ACTIONS(295),
    [anon_sym_SLASH_EQ] = ACTIONS(295),
    [anon_sym_AMP_EQ] = ACTIONS(295),
    [anon_sym_PIPE_EQ] = ACTIONS(295),
    [anon_sym_CARET_EQ] = ACTIONS(295),
    [anon_sym_PERCENT_EQ] = ACTIONS(295),
    [anon_sym_LT_LT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_EQ_EQ] = ACTIONS(295),
    [anon_sym_GT_EQ] = ACTIONS(295),
    [anon_sym_LT_EQ] = ACTIONS(295),
    [anon_sym_BANG_EQ] = ACTIONS(295),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_AMP] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(98),
    [anon_sym_LT_LT] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(98),
    [anon_sym_GT_GT_GT] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(295),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(42),
  },
  [84] = {
    [sym__semicolon] = ACTIONS(295),
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_PLUS_EQ] = ACTIONS(295),
    [anon_sym_DASH_EQ] = ACTIONS(295),
    [anon_sym_STAR_EQ] = ACTIONS(295),
    [anon_sym_SLASH_EQ] = ACTIONS(295),
    [anon_sym_AMP_EQ] = ACTIONS(295),
    [anon_sym_PIPE_EQ] = ACTIONS(295),
    [anon_sym_CARET_EQ] = ACTIONS(295),
    [anon_sym_PERCENT_EQ] = ACTIONS(295),
    [anon_sym_LT_LT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(88),
    [anon_sym_LT] = ACTIONS(88),
    [anon_sym_EQ_EQ] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [anon_sym_BANG_EQ] = ACTIONS(90),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_AMP] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(98),
    [anon_sym_LT_LT] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(98),
    [anon_sym_GT_GT_GT] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(295),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(42),
  },
  [85] = {
    [sym__semicolon] = ACTIONS(295),
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_PLUS_EQ] = ACTIONS(295),
    [anon_sym_DASH_EQ] = ACTIONS(295),
    [anon_sym_STAR_EQ] = ACTIONS(295),
    [anon_sym_SLASH_EQ] = ACTIONS(295),
    [anon_sym_AMP_EQ] = ACTIONS(295),
    [anon_sym_PIPE_EQ] = ACTIONS(295),
    [anon_sym_CARET_EQ] = ACTIONS(295),
    [anon_sym_PERCENT_EQ] = ACTIONS(295),
    [anon_sym_LT_LT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(88),
    [anon_sym_LT] = ACTIONS(88),
    [anon_sym_EQ_EQ] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [anon_sym_BANG_EQ] = ACTIONS(90),
    [anon_sym_AMP_AMP] = ACTIONS(92),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_AMP] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(98),
    [anon_sym_LT_LT] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(98),
    [anon_sym_GT_GT_GT] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(295),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(42),
  },
  [86] = {
    [sym__semicolon] = ACTIONS(295),
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_PLUS_EQ] = ACTIONS(295),
    [anon_sym_DASH_EQ] = ACTIONS(295),
    [anon_sym_STAR_EQ] = ACTIONS(295),
    [anon_sym_SLASH_EQ] = ACTIONS(295),
    [anon_sym_AMP_EQ] = ACTIONS(295),
    [anon_sym_PIPE_EQ] = ACTIONS(295),
    [anon_sym_CARET_EQ] = ACTIONS(295),
    [anon_sym_PERCENT_EQ] = ACTIONS(295),
    [anon_sym_LT_LT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(88),
    [anon_sym_LT] = ACTIONS(88),
    [anon_sym_EQ_EQ] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [anon_sym_BANG_EQ] = ACTIONS(90),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_AMP] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(98),
    [anon_sym_LT_LT] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(98),
    [anon_sym_GT_GT_GT] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(295),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(42),
  },
  [87] = {
    [sym__semicolon] = ACTIONS(295),
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_PLUS_EQ] = ACTIONS(295),
    [anon_sym_DASH_EQ] = ACTIONS(295),
    [anon_sym_STAR_EQ] = ACTIONS(295),
    [anon_sym_SLASH_EQ] = ACTIONS(295),
    [anon_sym_AMP_EQ] = ACTIONS(295),
    [anon_sym_PIPE_EQ] = ACTIONS(295),
    [anon_sym_CARET_EQ] = ACTIONS(295),
    [anon_sym_PERCENT_EQ] = ACTIONS(295),
    [anon_sym_LT_LT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_EQ_EQ] = ACTIONS(295),
    [anon_sym_GT_EQ] = ACTIONS(295),
    [anon_sym_LT_EQ] = ACTIONS(295),
    [anon_sym_BANG_EQ] = ACTIONS(295),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(297),
    [anon_sym_SLASH] = ACTIONS(297),
    [anon_sym_AMP] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(297),
    [anon_sym_LT_LT] = ACTIONS(297),
    [anon_sym_GT_GT] = ACTIONS(297),
    [anon_sym_GT_GT_GT] = ACTIONS(297),
    [anon_sym_QMARK] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_COMMA] = ACTIONS(295),
    [sym_comment] = ACTIONS(42),
  },
  [88] = {
    [sym__expression] = STATE(35),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_PLUS_PLUS] = ACTIONS(209),
    [anon_sym_DASH_DASH] = ACTIONS(209),
    [sym_comment] = ACTIONS(42),
  },
  [89] = {
    [sym__expression] = STATE(36),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_PLUS_PLUS] = ACTIONS(209),
    [anon_sym_DASH_DASH] = ACTIONS(209),
    [sym_comment] = ACTIONS(42),
  },
  [90] = {
    [anon_sym_EQ] = ACTIONS(299),
    [anon_sym_PLUS_EQ] = ACTIONS(301),
    [anon_sym_DASH_EQ] = ACTIONS(301),
    [anon_sym_STAR_EQ] = ACTIONS(301),
    [anon_sym_SLASH_EQ] = ACTIONS(301),
    [anon_sym_AMP_EQ] = ACTIONS(301),
    [anon_sym_PIPE_EQ] = ACTIONS(301),
    [anon_sym_CARET_EQ] = ACTIONS(301),
    [anon_sym_PERCENT_EQ] = ACTIONS(301),
    [anon_sym_LT_LT_EQ] = ACTIONS(301),
    [anon_sym_GT_GT_EQ] = ACTIONS(301),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(305),
    [anon_sym_GT_EQ] = ACTIONS(305),
    [anon_sym_LT_EQ] = ACTIONS(305),
    [anon_sym_BANG_EQ] = ACTIONS(305),
    [anon_sym_AMP_AMP] = ACTIONS(307),
    [anon_sym_PIPE_PIPE] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(311),
    [anon_sym_STAR] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_CARET] = ACTIONS(317),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_GT_GT_GT] = ACTIONS(313),
    [anon_sym_QMARK] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(42),
  },
  [91] = {
    [sym_module_identifier] = STATE(141),
    [sym_identifier] = ACTIONS(62),
    [sym_comment] = ACTIONS(42),
  },
  [92] = {
    [aux_sym_module_identifier_repeat1] = STATE(142),
    [sym__semicolon] = ACTIONS(265),
    [anon_sym_DOT] = ACTIONS(183),
    [sym_comment] = ACTIONS(42),
  },
  [93] = {
    [sym_type_paramaters] = STATE(143),
    [sym_superclass] = STATE(130),
    [sym_super_interfaces] = STATE(131),
    [sym_class_body] = STATE(132),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_extends] = ACTIONS(197),
    [anon_sym_implements] = ACTIONS(199),
    [sym_comment] = ACTIONS(42),
  },
  [94] = {
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_AT] = ACTIONS(323),
    [anon_sym_open] = ACTIONS(323),
    [anon_sym_module] = ACTIONS(323),
    [anon_sym_static] = ACTIONS(323),
    [anon_sym_package] = ACTIONS(323),
    [anon_sym_class] = ACTIONS(323),
    [anon_sym_public] = ACTIONS(323),
    [anon_sym_protected] = ACTIONS(323),
    [anon_sym_private] = ACTIONS(323),
    [anon_sym_final] = ACTIONS(323),
    [anon_sym_strictfp] = ACTIONS(323),
    [sym_comment] = ACTIONS(42),
  },
  [95] = {
    [anon_sym_EQ] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(42),
  },
  [96] = {
    [anon_sym_RPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(42),
  },
  [97] = {
    [anon_sym_RPAREN] = ACTIONS(329),
    [sym_comment] = ACTIONS(42),
  },
  [98] = {
    [aux_sym_element_value_pair_list_repeat1] = STATE(148),
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_COMMA] = ACTIONS(333),
    [sym_comment] = ACTIONS(42),
  },
  [99] = {
    [sym__semicolon] = ACTIONS(335),
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_RPAREN] = ACTIONS(335),
    [anon_sym_COMMA] = ACTIONS(335),
    [anon_sym_DOT] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(335),
    [anon_sym_AT] = ACTIONS(335),
    [anon_sym_open] = ACTIONS(335),
    [anon_sym_module] = ACTIONS(335),
    [anon_sym_with] = ACTIONS(335),
    [anon_sym_static] = ACTIONS(335),
    [anon_sym_package] = ACTIONS(335),
    [anon_sym_class] = ACTIONS(335),
    [anon_sym_public] = ACTIONS(335),
    [anon_sym_protected] = ACTIONS(335),
    [anon_sym_private] = ACTIONS(335),
    [anon_sym_final] = ACTIONS(335),
    [anon_sym_strictfp] = ACTIONS(335),
    [sym_comment] = ACTIONS(42),
  },
  [100] = {
    [sym_module_directive] = STATE(108),
    [aux_sym_module_declaration_repeat1] = STATE(150),
    [anon_sym_RBRACE] = ACTIONS(337),
    [anon_sym_requires] = ACTIONS(251),
    [anon_sym_exports] = ACTIONS(253),
    [anon_sym_opens] = ACTIONS(253),
    [anon_sym_uses] = ACTIONS(255),
    [anon_sym_provides] = ACTIONS(257),
    [sym_comment] = ACTIONS(42),
  },
  [101] = {
    [sym__semicolon] = ACTIONS(339),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_DOT] = ACTIONS(339),
    [sym_comment] = ACTIONS(42),
  },
  [102] = {
    [sym_identifier] = ACTIONS(341),
    [sym_comment] = ACTIONS(42),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(343),
    [sym_decimal_integer_literal] = ACTIONS(345),
    [sym_hex_integer_literal] = ACTIONS(345),
    [sym_octal_integer_literal] = ACTIONS(345),
    [sym_binary_integer_literal] = ACTIONS(345),
    [sym_decimal_floating_point_literal] = ACTIONS(345),
    [sym_hex_floating_point_literal] = ACTIONS(347),
    [anon_sym_true] = ACTIONS(343),
    [anon_sym_false] = ACTIONS(343),
    [anon_sym_SQUOTE] = ACTIONS(343),
    [sym_string_literal] = ACTIONS(343),
    [sym_null_literal] = ACTIONS(343),
    [anon_sym_BANG] = ACTIONS(343),
    [anon_sym_TILDE] = ACTIONS(343),
    [anon_sym_PLUS_PLUS] = ACTIONS(343),
    [anon_sym_DASH_DASH] = ACTIONS(343),
    [anon_sym_AT] = ACTIONS(343),
    [anon_sym_open] = ACTIONS(343),
    [anon_sym_module] = ACTIONS(343),
    [anon_sym_static] = ACTIONS(343),
    [anon_sym_package] = ACTIONS(343),
    [anon_sym_import] = ACTIONS(343),
    [anon_sym_class] = ACTIONS(343),
    [anon_sym_public] = ACTIONS(343),
    [anon_sym_protected] = ACTIONS(343),
    [anon_sym_private] = ACTIONS(343),
    [anon_sym_final] = ACTIONS(343),
    [anon_sym_strictfp] = ACTIONS(343),
    [sym_comment] = ACTIONS(42),
  },
  [104] = {
    [sym_requires_modifier] = STATE(154),
    [sym_module_name] = STATE(155),
    [aux_sym_module_directive_repeat1] = STATE(156),
    [anon_sym_transitive] = ACTIONS(349),
    [anon_sym_static] = ACTIONS(349),
    [sym_identifier] = ACTIONS(351),
    [sym_comment] = ACTIONS(42),
  },
  [105] = {
    [sym_package_or_type_name] = STATE(158),
    [sym_identifier] = ACTIONS(353),
    [sym_comment] = ACTIONS(42),
  },
  [106] = {
    [sym_package_or_type_name] = STATE(159),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(42),
  },
  [107] = {
    [sym_package_or_type_name] = STATE(160),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(42),
  },
  [108] = {
    [anon_sym_RBRACE] = ACTIONS(355),
    [anon_sym_requires] = ACTIONS(355),
    [anon_sym_exports] = ACTIONS(355),
    [anon_sym_opens] = ACTIONS(355),
    [anon_sym_uses] = ACTIONS(355),
    [anon_sym_provides] = ACTIONS(355),
    [sym_comment] = ACTIONS(42),
  },
  [109] = {
    [sym_module_directive] = STATE(161),
    [anon_sym_RBRACE] = ACTIONS(337),
    [anon_sym_requires] = ACTIONS(251),
    [anon_sym_exports] = ACTIONS(253),
    [anon_sym_opens] = ACTIONS(253),
    [anon_sym_uses] = ACTIONS(255),
    [anon_sym_provides] = ACTIONS(257),
    [sym_comment] = ACTIONS(42),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(357),
    [sym_decimal_integer_literal] = ACTIONS(359),
    [sym_hex_integer_literal] = ACTIONS(359),
    [sym_octal_integer_literal] = ACTIONS(359),
    [sym_binary_integer_literal] = ACTIONS(359),
    [sym_decimal_floating_point_literal] = ACTIONS(359),
    [sym_hex_floating_point_literal] = ACTIONS(361),
    [anon_sym_true] = ACTIONS(357),
    [anon_sym_false] = ACTIONS(357),
    [anon_sym_SQUOTE] = ACTIONS(357),
    [sym_string_literal] = ACTIONS(357),
    [sym_null_literal] = ACTIONS(357),
    [anon_sym_BANG] = ACTIONS(357),
    [anon_sym_TILDE] = ACTIONS(357),
    [anon_sym_PLUS_PLUS] = ACTIONS(357),
    [anon_sym_DASH_DASH] = ACTIONS(357),
    [anon_sym_AT] = ACTIONS(357),
    [anon_sym_open] = ACTIONS(357),
    [anon_sym_module] = ACTIONS(357),
    [anon_sym_static] = ACTIONS(357),
    [anon_sym_package] = ACTIONS(357),
    [anon_sym_import] = ACTIONS(357),
    [anon_sym_class] = ACTIONS(357),
    [anon_sym_public] = ACTIONS(357),
    [anon_sym_protected] = ACTIONS(357),
    [anon_sym_private] = ACTIONS(357),
    [anon_sym_final] = ACTIONS(357),
    [anon_sym_strictfp] = ACTIONS(357),
    [sym_comment] = ACTIONS(42),
  },
  [111] = {
    [anon_sym_STAR] = ACTIONS(363),
    [sym_identifier] = ACTIONS(365),
    [sym_comment] = ACTIONS(42),
  },
  [112] = {
    [sym__semicolon] = ACTIONS(367),
    [sym_comment] = ACTIONS(42),
  },
  [113] = {
    [sym_package_or_type_name] = STATE(166),
    [sym_identifier] = ACTIONS(369),
    [sym_comment] = ACTIONS(42),
  },
  [114] = {
    [sym_type_bound] = STATE(168),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_COMMA] = ACTIONS(371),
    [anon_sym_extends] = ACTIONS(373),
    [sym_comment] = ACTIONS(42),
  },
  [115] = {
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_AT] = ACTIONS(119),
    [sym_identifier] = ACTIONS(375),
    [sym_comment] = ACTIONS(42),
  },
  [116] = {
    [anon_sym_AT] = ACTIONS(121),
    [sym_identifier] = ACTIONS(377),
    [sym_comment] = ACTIONS(42),
  },
  [117] = {
    [anon_sym_GT] = ACTIONS(379),
    [sym_comment] = ACTIONS(42),
  },
  [118] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(171),
    [anon_sym_GT] = ACTIONS(381),
    [anon_sym_COMMA] = ACTIONS(383),
    [sym_comment] = ACTIONS(42),
  },
  [119] = {
    [sym__annotation] = STATE(173),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [anon_sym_AT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(385),
    [sym_comment] = ACTIONS(42),
  },
  [120] = {
    [sym__semicolon] = ACTIONS(387),
    [anon_sym_RBRACE] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(387),
    [anon_sym_static] = ACTIONS(387),
    [anon_sym_class] = ACTIONS(387),
    [anon_sym_public] = ACTIONS(387),
    [anon_sym_protected] = ACTIONS(387),
    [anon_sym_private] = ACTIONS(387),
    [anon_sym_final] = ACTIONS(387),
    [anon_sym_strictfp] = ACTIONS(387),
    [sym_comment] = ACTIONS(42),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [sym__semicolon] = ACTIONS(389),
    [sym_decimal_integer_literal] = ACTIONS(391),
    [sym_hex_integer_literal] = ACTIONS(391),
    [sym_octal_integer_literal] = ACTIONS(391),
    [sym_binary_integer_literal] = ACTIONS(391),
    [sym_decimal_floating_point_literal] = ACTIONS(391),
    [sym_hex_floating_point_literal] = ACTIONS(393),
    [anon_sym_true] = ACTIONS(389),
    [anon_sym_false] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(389),
    [sym_string_literal] = ACTIONS(389),
    [sym_null_literal] = ACTIONS(389),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_PLUS_PLUS] = ACTIONS(389),
    [anon_sym_DASH_DASH] = ACTIONS(389),
    [anon_sym_RBRACE] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(389),
    [anon_sym_open] = ACTIONS(389),
    [anon_sym_module] = ACTIONS(389),
    [anon_sym_static] = ACTIONS(389),
    [anon_sym_package] = ACTIONS(389),
    [anon_sym_import] = ACTIONS(389),
    [anon_sym_class] = ACTIONS(389),
    [anon_sym_public] = ACTIONS(389),
    [anon_sym_protected] = ACTIONS(389),
    [anon_sym_private] = ACTIONS(389),
    [anon_sym_final] = ACTIONS(389),
    [anon_sym_strictfp] = ACTIONS(389),
    [sym_comment] = ACTIONS(42),
  },
  [122] = {
    [sym__semicolon] = ACTIONS(395),
    [anon_sym_RBRACE] = ACTIONS(395),
    [anon_sym_AT] = ACTIONS(395),
    [anon_sym_static] = ACTIONS(395),
    [anon_sym_class] = ACTIONS(395),
    [anon_sym_public] = ACTIONS(395),
    [anon_sym_protected] = ACTIONS(395),
    [anon_sym_private] = ACTIONS(395),
    [anon_sym_final] = ACTIONS(395),
    [anon_sym_strictfp] = ACTIONS(395),
    [sym_comment] = ACTIONS(42),
  },
  [123] = {
    [sym__semicolon] = ACTIONS(397),
    [anon_sym_RBRACE] = ACTIONS(397),
    [anon_sym_AT] = ACTIONS(397),
    [anon_sym_static] = ACTIONS(397),
    [anon_sym_class] = ACTIONS(397),
    [anon_sym_public] = ACTIONS(397),
    [anon_sym_protected] = ACTIONS(397),
    [anon_sym_private] = ACTIONS(397),
    [anon_sym_final] = ACTIONS(397),
    [anon_sym_strictfp] = ACTIONS(397),
    [sym_comment] = ACTIONS(42),
  },
  [124] = {
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [sym_class_declaration] = STATE(120),
    [sym_normal_class_declaration] = STATE(27),
    [sym_class_modifier] = STATE(28),
    [sym_class_body_declaration] = STATE(175),
    [sym_class_member_declaration] = STATE(123),
    [aux_sym_normal_class_declaration_repeat1] = STATE(31),
    [sym__semicolon] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(399),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [sym_comment] = ACTIONS(42),
  },
  [125] = {
    [sym_type_arguments] = STATE(178),
    [aux_sym_class_or_interface_type_repeat2] = STATE(179),
    [anon_sym_GT] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(401),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_COMMA] = ACTIONS(401),
    [anon_sym_DOT] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_AT] = ACTIONS(401),
    [anon_sym_implements] = ACTIONS(401),
    [sym_comment] = ACTIONS(42),
  },
  [126] = {
    [anon_sym_LBRACE] = ACTIONS(407),
    [anon_sym_implements] = ACTIONS(407),
    [sym_comment] = ACTIONS(42),
  },
  [127] = {
    [sym__annotation] = STATE(173),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [anon_sym_AT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(409),
    [sym_comment] = ACTIONS(42),
  },
  [128] = {
    [aux_sym_interface_type_list_repeat1] = STATE(182),
    [anon_sym_LBRACE] = ACTIONS(411),
    [anon_sym_COMMA] = ACTIONS(413),
    [sym_comment] = ACTIONS(42),
  },
  [129] = {
    [anon_sym_LBRACE] = ACTIONS(415),
    [sym_comment] = ACTIONS(42),
  },
  [130] = {
    [sym_super_interfaces] = STATE(183),
    [sym_class_body] = STATE(184),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_implements] = ACTIONS(199),
    [sym_comment] = ACTIONS(42),
  },
  [131] = {
    [sym_class_body] = STATE(184),
    [anon_sym_LBRACE] = ACTIONS(195),
    [sym_comment] = ACTIONS(42),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [sym__semicolon] = ACTIONS(417),
    [sym_decimal_integer_literal] = ACTIONS(419),
    [sym_hex_integer_literal] = ACTIONS(419),
    [sym_octal_integer_literal] = ACTIONS(419),
    [sym_binary_integer_literal] = ACTIONS(419),
    [sym_decimal_floating_point_literal] = ACTIONS(419),
    [sym_hex_floating_point_literal] = ACTIONS(421),
    [anon_sym_true] = ACTIONS(417),
    [anon_sym_false] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [sym_string_literal] = ACTIONS(417),
    [sym_null_literal] = ACTIONS(417),
    [anon_sym_BANG] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(417),
    [anon_sym_PLUS_PLUS] = ACTIONS(417),
    [anon_sym_DASH_DASH] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_AT] = ACTIONS(417),
    [anon_sym_open] = ACTIONS(417),
    [anon_sym_module] = ACTIONS(417),
    [anon_sym_static] = ACTIONS(417),
    [anon_sym_package] = ACTIONS(417),
    [anon_sym_import] = ACTIONS(417),
    [anon_sym_class] = ACTIONS(417),
    [anon_sym_public] = ACTIONS(417),
    [anon_sym_protected] = ACTIONS(417),
    [anon_sym_private] = ACTIONS(417),
    [anon_sym_final] = ACTIONS(417),
    [anon_sym_strictfp] = ACTIONS(417),
    [sym_comment] = ACTIONS(42),
  },
  [133] = {
    [sym__expression] = STATE(185),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_PLUS_PLUS] = ACTIONS(209),
    [anon_sym_DASH_DASH] = ACTIONS(209),
    [sym_comment] = ACTIONS(42),
  },
  [134] = {
    [sym__expression] = STATE(186),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_PLUS_PLUS] = ACTIONS(209),
    [anon_sym_DASH_DASH] = ACTIONS(209),
    [sym_comment] = ACTIONS(42),
  },
  [135] = {
    [sym__expression] = STATE(187),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_PLUS_PLUS] = ACTIONS(209),
    [anon_sym_DASH_DASH] = ACTIONS(209),
    [sym_comment] = ACTIONS(42),
  },
  [136] = {
    [sym__expression] = STATE(188),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_PLUS_PLUS] = ACTIONS(209),
    [anon_sym_DASH_DASH] = ACTIONS(209),
    [sym_comment] = ACTIONS(42),
  },
  [137] = {
    [sym__expression] = STATE(189),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_PLUS_PLUS] = ACTIONS(209),
    [anon_sym_DASH_DASH] = ACTIONS(209),
    [sym_comment] = ACTIONS(42),
  },
  [138] = {
    [sym__expression] = STATE(87),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_PLUS_PLUS] = ACTIONS(209),
    [anon_sym_DASH_DASH] = ACTIONS(209),
    [sym_comment] = ACTIONS(42),
  },
  [139] = {
    [sym__expression] = STATE(190),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_PLUS_PLUS] = ACTIONS(209),
    [anon_sym_DASH_DASH] = ACTIONS(209),
    [sym_comment] = ACTIONS(42),
  },
  [140] = {
    [sym__expression] = STATE(191),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(42),
  },
  [141] = {
    [anon_sym_LBRACE] = ACTIONS(423),
    [sym_comment] = ACTIONS(42),
  },
  [142] = {
    [sym__semicolon] = ACTIONS(425),
    [anon_sym_DOT] = ACTIONS(247),
    [sym_comment] = ACTIONS(42),
  },
  [143] = {
    [sym_superclass] = STATE(194),
    [sym_super_interfaces] = STATE(183),
    [sym_class_body] = STATE(184),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_extends] = ACTIONS(197),
    [anon_sym_implements] = ACTIONS(199),
    [sym_comment] = ACTIONS(42),
  },
  [144] = {
    [sym__literal] = STATE(196),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(197),
    [sym__annotation] = STATE(196),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [sym_element_value] = STATE(198),
    [sym_element_value_array_initializer] = STATE(196),
    [sym_conditional_expression] = STATE(196),
    [sym_conditional_or_expression] = STATE(199),
    [sym_conditional_and_expression] = STATE(200),
    [sym_inclusive_or_expression] = STATE(201),
    [sym_exclusive_or_expression] = STATE(202),
    [sym_and_expression] = STATE(203),
    [sym_relational_expression] = STATE(204),
    [sym_equality_expression] = STATE(205),
    [sym_shift_expression] = STATE(206),
    [sym_additive_expression] = STATE(207),
    [sym_multiplicative_expression] = STATE(208),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(18),
    [anon_sym_false] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(427),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(42),
  },
  [145] = {
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_COMMA] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_AT] = ACTIONS(429),
    [anon_sym_open] = ACTIONS(429),
    [anon_sym_module] = ACTIONS(429),
    [anon_sym_static] = ACTIONS(429),
    [anon_sym_package] = ACTIONS(429),
    [anon_sym_class] = ACTIONS(429),
    [anon_sym_public] = ACTIONS(429),
    [anon_sym_protected] = ACTIONS(429),
    [anon_sym_private] = ACTIONS(429),
    [anon_sym_final] = ACTIONS(429),
    [anon_sym_strictfp] = ACTIONS(429),
    [sym_comment] = ACTIONS(42),
  },
  [146] = {
    [anon_sym_RPAREN] = ACTIONS(431),
    [anon_sym_COMMA] = ACTIONS(431),
    [anon_sym_LBRACK] = ACTIONS(431),
    [anon_sym_AT] = ACTIONS(431),
    [anon_sym_open] = ACTIONS(431),
    [anon_sym_module] = ACTIONS(431),
    [anon_sym_static] = ACTIONS(431),
    [anon_sym_package] = ACTIONS(431),
    [anon_sym_class] = ACTIONS(431),
    [anon_sym_public] = ACTIONS(431),
    [anon_sym_protected] = ACTIONS(431),
    [anon_sym_private] = ACTIONS(431),
    [anon_sym_final] = ACTIONS(431),
    [anon_sym_strictfp] = ACTIONS(431),
    [sym_comment] = ACTIONS(42),
  },
  [147] = {
    [sym_element_value_pair] = STATE(210),
    [sym_identifier] = ACTIONS(433),
    [sym_comment] = ACTIONS(42),
  },
  [148] = {
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_COMMA] = ACTIONS(437),
    [sym_comment] = ACTIONS(42),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(439),
    [sym_decimal_integer_literal] = ACTIONS(441),
    [sym_hex_integer_literal] = ACTIONS(441),
    [sym_octal_integer_literal] = ACTIONS(441),
    [sym_binary_integer_literal] = ACTIONS(441),
    [sym_decimal_floating_point_literal] = ACTIONS(441),
    [sym_hex_floating_point_literal] = ACTIONS(443),
    [anon_sym_true] = ACTIONS(439),
    [anon_sym_false] = ACTIONS(439),
    [anon_sym_SQUOTE] = ACTIONS(439),
    [sym_string_literal] = ACTIONS(439),
    [sym_null_literal] = ACTIONS(439),
    [anon_sym_BANG] = ACTIONS(439),
    [anon_sym_TILDE] = ACTIONS(439),
    [anon_sym_PLUS_PLUS] = ACTIONS(439),
    [anon_sym_DASH_DASH] = ACTIONS(439),
    [anon_sym_AT] = ACTIONS(439),
    [anon_sym_open] = ACTIONS(439),
    [anon_sym_module] = ACTIONS(439),
    [anon_sym_static] = ACTIONS(439),
    [anon_sym_package] = ACTIONS(439),
    [anon_sym_import] = ACTIONS(439),
    [anon_sym_class] = ACTIONS(439),
    [anon_sym_public] = ACTIONS(439),
    [anon_sym_protected] = ACTIONS(439),
    [anon_sym_private] = ACTIONS(439),
    [anon_sym_final] = ACTIONS(439),
    [anon_sym_strictfp] = ACTIONS(439),
    [sym_comment] = ACTIONS(42),
  },
  [150] = {
    [sym_module_directive] = STATE(161),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_requires] = ACTIONS(251),
    [anon_sym_exports] = ACTIONS(253),
    [anon_sym_opens] = ACTIONS(253),
    [anon_sym_uses] = ACTIONS(255),
    [anon_sym_provides] = ACTIONS(257),
    [sym_comment] = ACTIONS(42),
  },
  [151] = {
    [sym__semicolon] = ACTIONS(447),
    [anon_sym_LBRACE] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(447),
    [sym_comment] = ACTIONS(42),
  },
  [152] = {
    [anon_sym_transitive] = ACTIONS(449),
    [anon_sym_static] = ACTIONS(449),
    [sym_identifier] = ACTIONS(451),
    [sym_comment] = ACTIONS(42),
  },
  [153] = {
    [sym__semicolon] = ACTIONS(453),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_DOT] = ACTIONS(453),
    [sym_comment] = ACTIONS(42),
  },
  [154] = {
    [anon_sym_transitive] = ACTIONS(455),
    [anon_sym_static] = ACTIONS(455),
    [sym_identifier] = ACTIONS(457),
    [sym_comment] = ACTIONS(42),
  },
  [155] = {
    [sym__semicolon] = ACTIONS(459),
    [anon_sym_DOT] = ACTIONS(461),
    [sym_comment] = ACTIONS(42),
  },
  [156] = {
    [sym_requires_modifier] = STATE(215),
    [sym_module_name] = STATE(216),
    [anon_sym_transitive] = ACTIONS(349),
    [anon_sym_static] = ACTIONS(349),
    [sym_identifier] = ACTIONS(351),
    [sym_comment] = ACTIONS(42),
  },
  [157] = {
    [sym__semicolon] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_DOT] = ACTIONS(173),
    [anon_sym_to] = ACTIONS(463),
    [sym_identifier] = ACTIONS(465),
    [sym_comment] = ACTIONS(42),
  },
  [158] = {
    [sym_module_name] = STATE(220),
    [aux_sym_module_directive_repeat2] = STATE(221),
    [sym__semicolon] = ACTIONS(459),
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_DOT] = ACTIONS(469),
    [anon_sym_to] = ACTIONS(471),
    [sym_identifier] = ACTIONS(351),
    [sym_comment] = ACTIONS(42),
  },
  [159] = {
    [sym__semicolon] = ACTIONS(459),
    [anon_sym_DOT] = ACTIONS(179),
    [sym_comment] = ACTIONS(42),
  },
  [160] = {
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_with] = ACTIONS(473),
    [sym_comment] = ACTIONS(42),
  },
  [161] = {
    [anon_sym_RBRACE] = ACTIONS(475),
    [anon_sym_requires] = ACTIONS(475),
    [anon_sym_exports] = ACTIONS(475),
    [anon_sym_opens] = ACTIONS(475),
    [anon_sym_uses] = ACTIONS(475),
    [anon_sym_provides] = ACTIONS(475),
    [sym_comment] = ACTIONS(42),
  },
  [162] = {
    [sym__semicolon] = ACTIONS(477),
    [sym_comment] = ACTIONS(42),
  },
  [163] = {
    [sym__semicolon] = ACTIONS(479),
    [anon_sym_DOT] = ACTIONS(335),
    [sym_comment] = ACTIONS(42),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(481),
    [sym_decimal_integer_literal] = ACTIONS(483),
    [sym_hex_integer_literal] = ACTIONS(483),
    [sym_octal_integer_literal] = ACTIONS(483),
    [sym_binary_integer_literal] = ACTIONS(483),
    [sym_decimal_floating_point_literal] = ACTIONS(483),
    [sym_hex_floating_point_literal] = ACTIONS(485),
    [anon_sym_true] = ACTIONS(481),
    [anon_sym_false] = ACTIONS(481),
    [anon_sym_SQUOTE] = ACTIONS(481),
    [sym_string_literal] = ACTIONS(481),
    [sym_null_literal] = ACTIONS(481),
    [anon_sym_BANG] = ACTIONS(481),
    [anon_sym_TILDE] = ACTIONS(481),
    [anon_sym_PLUS_PLUS] = ACTIONS(481),
    [anon_sym_DASH_DASH] = ACTIONS(481),
    [anon_sym_AT] = ACTIONS(481),
    [anon_sym_open] = ACTIONS(481),
    [anon_sym_module] = ACTIONS(481),
    [anon_sym_static] = ACTIONS(481),
    [anon_sym_package] = ACTIONS(481),
    [anon_sym_import] = ACTIONS(481),
    [anon_sym_class] = ACTIONS(481),
    [anon_sym_public] = ACTIONS(481),
    [anon_sym_protected] = ACTIONS(481),
    [anon_sym_private] = ACTIONS(481),
    [anon_sym_final] = ACTIONS(481),
    [anon_sym_strictfp] = ACTIONS(481),
    [sym_comment] = ACTIONS(42),
  },
  [165] = {
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_DOT] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(173),
    [sym_identifier] = ACTIONS(463),
    [sym_comment] = ACTIONS(42),
  },
  [166] = {
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_DOT] = ACTIONS(489),
    [anon_sym_AT] = ACTIONS(177),
    [sym_identifier] = ACTIONS(491),
    [sym_comment] = ACTIONS(42),
  },
  [167] = {
    [sym_class_or_interface_type] = STATE(227),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [aux_sym_class_or_interface_type_repeat1] = STATE(127),
    [anon_sym_AT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(285),
    [sym_comment] = ACTIONS(42),
  },
  [168] = {
    [anon_sym_GT] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(493),
    [sym_comment] = ACTIONS(42),
  },
  [169] = {
    [anon_sym_LBRACE] = ACTIONS(495),
    [anon_sym_extends] = ACTIONS(495),
    [anon_sym_implements] = ACTIONS(495),
    [sym_comment] = ACTIONS(42),
  },
  [170] = {
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [sym_type_parameter] = STATE(228),
    [aux_sym_class_or_interface_type_repeat1] = STATE(119),
    [anon_sym_AT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(279),
    [sym_comment] = ACTIONS(42),
  },
  [171] = {
    [anon_sym_GT] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(499),
    [sym_comment] = ACTIONS(42),
  },
  [172] = {
    [sym_type_bound] = STATE(230),
    [anon_sym_GT] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_extends] = ACTIONS(373),
    [sym_comment] = ACTIONS(42),
  },
  [173] = {
    [anon_sym_AT] = ACTIONS(221),
    [sym_identifier] = ACTIONS(501),
    [sym_comment] = ACTIONS(42),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(503),
    [sym__semicolon] = ACTIONS(503),
    [sym_decimal_integer_literal] = ACTIONS(505),
    [sym_hex_integer_literal] = ACTIONS(505),
    [sym_octal_integer_literal] = ACTIONS(505),
    [sym_binary_integer_literal] = ACTIONS(505),
    [sym_decimal_floating_point_literal] = ACTIONS(505),
    [sym_hex_floating_point_literal] = ACTIONS(507),
    [anon_sym_true] = ACTIONS(503),
    [anon_sym_false] = ACTIONS(503),
    [anon_sym_SQUOTE] = ACTIONS(503),
    [sym_string_literal] = ACTIONS(503),
    [sym_null_literal] = ACTIONS(503),
    [anon_sym_BANG] = ACTIONS(503),
    [anon_sym_TILDE] = ACTIONS(503),
    [anon_sym_PLUS_PLUS] = ACTIONS(503),
    [anon_sym_DASH_DASH] = ACTIONS(503),
    [anon_sym_RBRACE] = ACTIONS(503),
    [anon_sym_AT] = ACTIONS(503),
    [anon_sym_open] = ACTIONS(503),
    [anon_sym_module] = ACTIONS(503),
    [anon_sym_static] = ACTIONS(503),
    [anon_sym_package] = ACTIONS(503),
    [anon_sym_import] = ACTIONS(503),
    [anon_sym_class] = ACTIONS(503),
    [anon_sym_public] = ACTIONS(503),
    [anon_sym_protected] = ACTIONS(503),
    [anon_sym_private] = ACTIONS(503),
    [anon_sym_final] = ACTIONS(503),
    [anon_sym_strictfp] = ACTIONS(503),
    [sym_comment] = ACTIONS(42),
  },
  [175] = {
    [sym__semicolon] = ACTIONS(509),
    [anon_sym_RBRACE] = ACTIONS(509),
    [anon_sym_AT] = ACTIONS(509),
    [anon_sym_static] = ACTIONS(509),
    [anon_sym_class] = ACTIONS(509),
    [anon_sym_public] = ACTIONS(509),
    [anon_sym_protected] = ACTIONS(509),
    [anon_sym_private] = ACTIONS(509),
    [anon_sym_final] = ACTIONS(509),
    [anon_sym_strictfp] = ACTIONS(509),
    [sym_comment] = ACTIONS(42),
  },
  [176] = {
    [sym_type_argument] = STATE(235),
    [sym_reference_type] = STATE(236),
    [sym_class_or_interface_type] = STATE(237),
    [sym_primitive_type] = STATE(238),
    [sym_integral_type] = STATE(231),
    [sym_floating_point_type] = STATE(231),
    [sym__annotation] = STATE(239),
    [sym_normal_annotation] = STATE(240),
    [sym_marker_annotation] = STATE(240),
    [sym_single_element_annotation] = STATE(240),
    [aux_sym_class_or_interface_type_repeat1] = STATE(241),
    [anon_sym_boolean] = ACTIONS(511),
    [anon_sym_byte] = ACTIONS(513),
    [anon_sym_short] = ACTIONS(513),
    [anon_sym_int] = ACTIONS(513),
    [anon_sym_long] = ACTIONS(513),
    [anon_sym_char] = ACTIONS(513),
    [anon_sym_float] = ACTIONS(515),
    [anon_sym_double] = ACTIONS(515),
    [anon_sym_AT] = ACTIONS(517),
    [sym_identifier] = ACTIONS(519),
    [sym_comment] = ACTIONS(42),
  },
  [177] = {
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [aux_sym_class_or_interface_type_repeat1] = STATE(243),
    [anon_sym_AT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(521),
    [sym_comment] = ACTIONS(42),
  },
  [178] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(244),
    [anon_sym_GT] = ACTIONS(523),
    [anon_sym_AMP] = ACTIONS(523),
    [anon_sym_LBRACE] = ACTIONS(523),
    [anon_sym_COMMA] = ACTIONS(523),
    [anon_sym_DOT] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(523),
    [anon_sym_AT] = ACTIONS(523),
    [anon_sym_implements] = ACTIONS(523),
    [sym_comment] = ACTIONS(42),
  },
  [179] = {
    [anon_sym_GT] = ACTIONS(523),
    [anon_sym_AMP] = ACTIONS(523),
    [anon_sym_LBRACE] = ACTIONS(523),
    [anon_sym_COMMA] = ACTIONS(523),
    [anon_sym_DOT] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(523),
    [anon_sym_AT] = ACTIONS(523),
    [anon_sym_implements] = ACTIONS(523),
    [sym_comment] = ACTIONS(42),
  },
  [180] = {
    [sym_type_arguments] = STATE(246),
    [aux_sym_class_or_interface_type_repeat2] = STATE(244),
    [anon_sym_GT] = ACTIONS(523),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(523),
    [anon_sym_LBRACE] = ACTIONS(523),
    [anon_sym_COMMA] = ACTIONS(523),
    [anon_sym_DOT] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(523),
    [anon_sym_AT] = ACTIONS(523),
    [anon_sym_implements] = ACTIONS(523),
    [sym_comment] = ACTIONS(42),
  },
  [181] = {
    [sym_class_or_interface_type] = STATE(247),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [aux_sym_class_or_interface_type_repeat1] = STATE(127),
    [anon_sym_AT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(285),
    [sym_comment] = ACTIONS(42),
  },
  [182] = {
    [anon_sym_LBRACE] = ACTIONS(527),
    [anon_sym_COMMA] = ACTIONS(529),
    [sym_comment] = ACTIONS(42),
  },
  [183] = {
    [sym_class_body] = STATE(249),
    [anon_sym_LBRACE] = ACTIONS(195),
    [sym_comment] = ACTIONS(42),
  },
  [184] = {
    [ts_builtin_sym_end] = ACTIONS(531),
    [sym__semicolon] = ACTIONS(531),
    [sym_decimal_integer_literal] = ACTIONS(533),
    [sym_hex_integer_literal] = ACTIONS(533),
    [sym_octal_integer_literal] = ACTIONS(533),
    [sym_binary_integer_literal] = ACTIONS(533),
    [sym_decimal_floating_point_literal] = ACTIONS(533),
    [sym_hex_floating_point_literal] = ACTIONS(535),
    [anon_sym_true] = ACTIONS(531),
    [anon_sym_false] = ACTIONS(531),
    [anon_sym_SQUOTE] = ACTIONS(531),
    [sym_string_literal] = ACTIONS(531),
    [sym_null_literal] = ACTIONS(531),
    [anon_sym_BANG] = ACTIONS(531),
    [anon_sym_TILDE] = ACTIONS(531),
    [anon_sym_PLUS_PLUS] = ACTIONS(531),
    [anon_sym_DASH_DASH] = ACTIONS(531),
    [anon_sym_RBRACE] = ACTIONS(531),
    [anon_sym_AT] = ACTIONS(531),
    [anon_sym_open] = ACTIONS(531),
    [anon_sym_module] = ACTIONS(531),
    [anon_sym_static] = ACTIONS(531),
    [anon_sym_package] = ACTIONS(531),
    [anon_sym_import] = ACTIONS(531),
    [anon_sym_class] = ACTIONS(531),
    [anon_sym_public] = ACTIONS(531),
    [anon_sym_protected] = ACTIONS(531),
    [anon_sym_private] = ACTIONS(531),
    [anon_sym_final] = ACTIONS(531),
    [anon_sym_strictfp] = ACTIONS(531),
    [sym_comment] = ACTIONS(42),
  },
  [185] = {
    [anon_sym_EQ] = ACTIONS(299),
    [anon_sym_PLUS_EQ] = ACTIONS(301),
    [anon_sym_DASH_EQ] = ACTIONS(301),
    [anon_sym_STAR_EQ] = ACTIONS(301),
    [anon_sym_SLASH_EQ] = ACTIONS(301),
    [anon_sym_AMP_EQ] = ACTIONS(301),
    [anon_sym_PIPE_EQ] = ACTIONS(301),
    [anon_sym_CARET_EQ] = ACTIONS(301),
    [anon_sym_PERCENT_EQ] = ACTIONS(301),
    [anon_sym_LT_LT_EQ] = ACTIONS(301),
    [anon_sym_GT_GT_EQ] = ACTIONS(301),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(305),
    [anon_sym_GT_EQ] = ACTIONS(305),
    [anon_sym_LT_EQ] = ACTIONS(305),
    [anon_sym_BANG_EQ] = ACTIONS(305),
    [anon_sym_AMP_AMP] = ACTIONS(307),
    [anon_sym_PIPE_PIPE] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(311),
    [anon_sym_STAR] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_CARET] = ACTIONS(317),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_GT_GT_GT] = ACTIONS(313),
    [anon_sym_QMARK] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(293),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(42),
  },
  [186] = {
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_PLUS_EQ] = ACTIONS(295),
    [anon_sym_DASH_EQ] = ACTIONS(295),
    [anon_sym_STAR_EQ] = ACTIONS(295),
    [anon_sym_SLASH_EQ] = ACTIONS(295),
    [anon_sym_AMP_EQ] = ACTIONS(295),
    [anon_sym_PIPE_EQ] = ACTIONS(295),
    [anon_sym_CARET_EQ] = ACTIONS(295),
    [anon_sym_PERCENT_EQ] = ACTIONS(295),
    [anon_sym_LT_LT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_EQ_EQ] = ACTIONS(295),
    [anon_sym_GT_EQ] = ACTIONS(295),
    [anon_sym_LT_EQ] = ACTIONS(295),
    [anon_sym_BANG_EQ] = ACTIONS(295),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_GT_GT_GT] = ACTIONS(313),
    [anon_sym_QMARK] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(42),
  },
  [187] = {
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_PLUS_EQ] = ACTIONS(295),
    [anon_sym_DASH_EQ] = ACTIONS(295),
    [anon_sym_STAR_EQ] = ACTIONS(295),
    [anon_sym_SLASH_EQ] = ACTIONS(295),
    [anon_sym_AMP_EQ] = ACTIONS(295),
    [anon_sym_PIPE_EQ] = ACTIONS(295),
    [anon_sym_CARET_EQ] = ACTIONS(295),
    [anon_sym_PERCENT_EQ] = ACTIONS(295),
    [anon_sym_LT_LT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(305),
    [anon_sym_GT_EQ] = ACTIONS(305),
    [anon_sym_LT_EQ] = ACTIONS(305),
    [anon_sym_BANG_EQ] = ACTIONS(305),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(311),
    [anon_sym_STAR] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_GT_GT_GT] = ACTIONS(313),
    [anon_sym_QMARK] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(42),
  },
  [188] = {
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_PLUS_EQ] = ACTIONS(295),
    [anon_sym_DASH_EQ] = ACTIONS(295),
    [anon_sym_STAR_EQ] = ACTIONS(295),
    [anon_sym_SLASH_EQ] = ACTIONS(295),
    [anon_sym_AMP_EQ] = ACTIONS(295),
    [anon_sym_PIPE_EQ] = ACTIONS(295),
    [anon_sym_CARET_EQ] = ACTIONS(295),
    [anon_sym_PERCENT_EQ] = ACTIONS(295),
    [anon_sym_LT_LT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(305),
    [anon_sym_GT_EQ] = ACTIONS(305),
    [anon_sym_LT_EQ] = ACTIONS(305),
    [anon_sym_BANG_EQ] = ACTIONS(305),
    [anon_sym_AMP_AMP] = ACTIONS(307),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(311),
    [anon_sym_STAR] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_GT_GT_GT] = ACTIONS(313),
    [anon_sym_QMARK] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(42),
  },
  [189] = {
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_PLUS_EQ] = ACTIONS(295),
    [anon_sym_DASH_EQ] = ACTIONS(295),
    [anon_sym_STAR_EQ] = ACTIONS(295),
    [anon_sym_SLASH_EQ] = ACTIONS(295),
    [anon_sym_AMP_EQ] = ACTIONS(295),
    [anon_sym_PIPE_EQ] = ACTIONS(295),
    [anon_sym_CARET_EQ] = ACTIONS(295),
    [anon_sym_PERCENT_EQ] = ACTIONS(295),
    [anon_sym_LT_LT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(305),
    [anon_sym_GT_EQ] = ACTIONS(305),
    [anon_sym_LT_EQ] = ACTIONS(305),
    [anon_sym_BANG_EQ] = ACTIONS(305),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_GT_GT_GT] = ACTIONS(313),
    [anon_sym_QMARK] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(42),
  },
  [190] = {
    [anon_sym_EQ] = ACTIONS(299),
    [anon_sym_PLUS_EQ] = ACTIONS(301),
    [anon_sym_DASH_EQ] = ACTIONS(301),
    [anon_sym_STAR_EQ] = ACTIONS(301),
    [anon_sym_SLASH_EQ] = ACTIONS(301),
    [anon_sym_AMP_EQ] = ACTIONS(301),
    [anon_sym_PIPE_EQ] = ACTIONS(301),
    [anon_sym_CARET_EQ] = ACTIONS(301),
    [anon_sym_PERCENT_EQ] = ACTIONS(301),
    [anon_sym_LT_LT_EQ] = ACTIONS(301),
    [anon_sym_GT_GT_EQ] = ACTIONS(301),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(305),
    [anon_sym_GT_EQ] = ACTIONS(305),
    [anon_sym_LT_EQ] = ACTIONS(305),
    [anon_sym_BANG_EQ] = ACTIONS(305),
    [anon_sym_AMP_AMP] = ACTIONS(307),
    [anon_sym_PIPE_PIPE] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(311),
    [anon_sym_STAR] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_CARET] = ACTIONS(317),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_GT_GT_GT] = ACTIONS(313),
    [anon_sym_QMARK] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(537),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(42),
  },
  [191] = {
    [sym__semicolon] = ACTIONS(539),
    [anon_sym_EQ] = ACTIONS(541),
    [anon_sym_PLUS_EQ] = ACTIONS(539),
    [anon_sym_DASH_EQ] = ACTIONS(539),
    [anon_sym_STAR_EQ] = ACTIONS(539),
    [anon_sym_SLASH_EQ] = ACTIONS(539),
    [anon_sym_AMP_EQ] = ACTIONS(539),
    [anon_sym_PIPE_EQ] = ACTIONS(539),
    [anon_sym_CARET_EQ] = ACTIONS(539),
    [anon_sym_PERCENT_EQ] = ACTIONS(539),
    [anon_sym_LT_LT_EQ] = ACTIONS(539),
    [anon_sym_GT_GT_EQ] = ACTIONS(539),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(539),
    [anon_sym_GT] = ACTIONS(88),
    [anon_sym_LT] = ACTIONS(88),
    [anon_sym_EQ_EQ] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [anon_sym_BANG_EQ] = ACTIONS(90),
    [anon_sym_AMP_AMP] = ACTIONS(92),
    [anon_sym_PIPE_PIPE] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_AMP] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_CARET] = ACTIONS(102),
    [anon_sym_PERCENT] = ACTIONS(98),
    [anon_sym_LT_LT] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(98),
    [anon_sym_GT_GT_GT] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(104),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(42),
  },
  [192] = {
    [sym_module_directive] = STATE(108),
    [aux_sym_module_declaration_repeat1] = STATE(251),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_requires] = ACTIONS(251),
    [anon_sym_exports] = ACTIONS(253),
    [anon_sym_opens] = ACTIONS(253),
    [anon_sym_uses] = ACTIONS(255),
    [anon_sym_provides] = ACTIONS(257),
    [sym_comment] = ACTIONS(42),
  },
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(543),
    [sym_decimal_integer_literal] = ACTIONS(545),
    [sym_hex_integer_literal] = ACTIONS(545),
    [sym_octal_integer_literal] = ACTIONS(545),
    [sym_binary_integer_literal] = ACTIONS(545),
    [sym_decimal_floating_point_literal] = ACTIONS(545),
    [sym_hex_floating_point_literal] = ACTIONS(547),
    [anon_sym_true] = ACTIONS(543),
    [anon_sym_false] = ACTIONS(543),
    [anon_sym_SQUOTE] = ACTIONS(543),
    [sym_string_literal] = ACTIONS(543),
    [sym_null_literal] = ACTIONS(543),
    [anon_sym_BANG] = ACTIONS(543),
    [anon_sym_TILDE] = ACTIONS(543),
    [anon_sym_PLUS_PLUS] = ACTIONS(543),
    [anon_sym_DASH_DASH] = ACTIONS(543),
    [anon_sym_AT] = ACTIONS(543),
    [anon_sym_open] = ACTIONS(543),
    [anon_sym_module] = ACTIONS(543),
    [anon_sym_static] = ACTIONS(543),
    [anon_sym_package] = ACTIONS(543),
    [anon_sym_import] = ACTIONS(543),
    [anon_sym_class] = ACTIONS(543),
    [anon_sym_public] = ACTIONS(543),
    [anon_sym_protected] = ACTIONS(543),
    [anon_sym_private] = ACTIONS(543),
    [anon_sym_final] = ACTIONS(543),
    [anon_sym_strictfp] = ACTIONS(543),
    [sym_comment] = ACTIONS(42),
  },
  [194] = {
    [sym_super_interfaces] = STATE(252),
    [sym_class_body] = STATE(249),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_implements] = ACTIONS(199),
    [sym_comment] = ACTIONS(42),
  },
  [195] = {
    [sym__expression] = STATE(255),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(549),
    [anon_sym_TILDE] = ACTIONS(549),
    [anon_sym_PLUS_PLUS] = ACTIONS(551),
    [anon_sym_DASH_DASH] = ACTIONS(551),
    [sym_comment] = ACTIONS(42),
  },
  [196] = {
    [anon_sym_RPAREN] = ACTIONS(553),
    [anon_sym_COMMA] = ACTIONS(553),
    [sym_comment] = ACTIONS(42),
  },
  [197] = {
    [anon_sym_LT] = ACTIONS(555),
    [anon_sym_EQ_EQ] = ACTIONS(557),
    [anon_sym_BANG_EQ] = ACTIONS(557),
    [anon_sym_AMP_AMP] = ACTIONS(557),
    [anon_sym_PIPE_PIPE] = ACTIONS(557),
    [anon_sym_PLUS] = ACTIONS(557),
    [anon_sym_DASH] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(557),
    [anon_sym_SLASH] = ACTIONS(555),
    [anon_sym_PIPE] = ACTIONS(555),
    [anon_sym_CARET] = ACTIONS(557),
    [anon_sym_PERCENT] = ACTIONS(557),
    [anon_sym_LT_LT] = ACTIONS(557),
    [anon_sym_GT_GT] = ACTIONS(555),
    [anon_sym_GT_GT_GT] = ACTIONS(557),
    [anon_sym_QMARK] = ACTIONS(557),
    [anon_sym_RPAREN] = ACTIONS(557),
    [anon_sym_COMMA] = ACTIONS(557),
    [sym_comment] = ACTIONS(42),
  },
  [198] = {
    [anon_sym_RPAREN] = ACTIONS(559),
    [anon_sym_COMMA] = ACTIONS(559),
    [sym_comment] = ACTIONS(42),
  },
  [199] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(561),
    [anon_sym_QMARK] = ACTIONS(563),
    [anon_sym_RPAREN] = ACTIONS(565),
    [anon_sym_COMMA] = ACTIONS(565),
    [sym_comment] = ACTIONS(42),
  },
  [200] = {
    [anon_sym_AMP_AMP] = ACTIONS(567),
    [anon_sym_PIPE_PIPE] = ACTIONS(569),
    [anon_sym_QMARK] = ACTIONS(569),
    [anon_sym_RPAREN] = ACTIONS(569),
    [anon_sym_COMMA] = ACTIONS(569),
    [sym_comment] = ACTIONS(42),
  },
  [201] = {
    [anon_sym_AMP_AMP] = ACTIONS(571),
    [anon_sym_PIPE_PIPE] = ACTIONS(571),
    [anon_sym_PIPE] = ACTIONS(573),
    [anon_sym_QMARK] = ACTIONS(571),
    [anon_sym_RPAREN] = ACTIONS(571),
    [anon_sym_COMMA] = ACTIONS(571),
    [sym_comment] = ACTIONS(42),
  },
  [202] = {
    [anon_sym_AMP_AMP] = ACTIONS(575),
    [anon_sym_PIPE_PIPE] = ACTIONS(575),
    [anon_sym_PIPE] = ACTIONS(577),
    [anon_sym_CARET] = ACTIONS(579),
    [anon_sym_QMARK] = ACTIONS(575),
    [anon_sym_RPAREN] = ACTIONS(575),
    [anon_sym_COMMA] = ACTIONS(575),
    [sym_comment] = ACTIONS(42),
  },
  [203] = {
    [anon_sym_AMP_AMP] = ACTIONS(581),
    [anon_sym_PIPE_PIPE] = ACTIONS(581),
    [anon_sym_PIPE] = ACTIONS(583),
    [anon_sym_CARET] = ACTIONS(581),
    [anon_sym_QMARK] = ACTIONS(581),
    [anon_sym_RPAREN] = ACTIONS(581),
    [anon_sym_COMMA] = ACTIONS(581),
    [sym_comment] = ACTIONS(42),
  },
  [204] = {
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_EQ_EQ] = ACTIONS(587),
    [anon_sym_BANG_EQ] = ACTIONS(587),
    [anon_sym_AMP_AMP] = ACTIONS(589),
    [anon_sym_PIPE_PIPE] = ACTIONS(589),
    [anon_sym_PIPE] = ACTIONS(591),
    [anon_sym_CARET] = ACTIONS(589),
    [anon_sym_QMARK] = ACTIONS(589),
    [anon_sym_RPAREN] = ACTIONS(589),
    [anon_sym_COMMA] = ACTIONS(589),
    [sym_comment] = ACTIONS(42),
  },
  [205] = {
    [anon_sym_EQ_EQ] = ACTIONS(593),
    [anon_sym_BANG_EQ] = ACTIONS(593),
    [sym_comment] = ACTIONS(42),
  },
  [206] = {
    [anon_sym_LT] = ACTIONS(595),
    [anon_sym_EQ_EQ] = ACTIONS(597),
    [anon_sym_BANG_EQ] = ACTIONS(597),
    [anon_sym_AMP_AMP] = ACTIONS(597),
    [anon_sym_PIPE_PIPE] = ACTIONS(597),
    [anon_sym_PIPE] = ACTIONS(595),
    [anon_sym_CARET] = ACTIONS(597),
    [anon_sym_LT_LT] = ACTIONS(599),
    [anon_sym_GT_GT] = ACTIONS(601),
    [anon_sym_GT_GT_GT] = ACTIONS(599),
    [anon_sym_QMARK] = ACTIONS(597),
    [anon_sym_RPAREN] = ACTIONS(597),
    [anon_sym_COMMA] = ACTIONS(597),
    [sym_comment] = ACTIONS(42),
  },
  [207] = {
    [anon_sym_LT] = ACTIONS(603),
    [anon_sym_EQ_EQ] = ACTIONS(605),
    [anon_sym_BANG_EQ] = ACTIONS(605),
    [anon_sym_AMP_AMP] = ACTIONS(605),
    [anon_sym_PIPE_PIPE] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [anon_sym_PIPE] = ACTIONS(603),
    [anon_sym_CARET] = ACTIONS(605),
    [anon_sym_LT_LT] = ACTIONS(605),
    [anon_sym_GT_GT] = ACTIONS(603),
    [anon_sym_GT_GT_GT] = ACTIONS(605),
    [anon_sym_QMARK] = ACTIONS(605),
    [anon_sym_RPAREN] = ACTIONS(605),
    [anon_sym_COMMA] = ACTIONS(605),
    [sym_comment] = ACTIONS(42),
  },
  [208] = {
    [anon_sym_LT] = ACTIONS(609),
    [anon_sym_EQ_EQ] = ACTIONS(611),
    [anon_sym_BANG_EQ] = ACTIONS(611),
    [anon_sym_AMP_AMP] = ACTIONS(611),
    [anon_sym_PIPE_PIPE] = ACTIONS(611),
    [anon_sym_PLUS] = ACTIONS(611),
    [anon_sym_DASH] = ACTIONS(611),
    [anon_sym_STAR] = ACTIONS(613),
    [anon_sym_SLASH] = ACTIONS(615),
    [anon_sym_PIPE] = ACTIONS(609),
    [anon_sym_CARET] = ACTIONS(611),
    [anon_sym_PERCENT] = ACTIONS(613),
    [anon_sym_LT_LT] = ACTIONS(611),
    [anon_sym_GT_GT] = ACTIONS(609),
    [anon_sym_GT_GT_GT] = ACTIONS(611),
    [anon_sym_QMARK] = ACTIONS(611),
    [anon_sym_RPAREN] = ACTIONS(611),
    [anon_sym_COMMA] = ACTIONS(611),
    [sym_comment] = ACTIONS(42),
  },
  [209] = {
    [anon_sym_EQ] = ACTIONS(325),
    [sym_comment] = ACTIONS(42),
  },
  [210] = {
    [anon_sym_RPAREN] = ACTIONS(617),
    [anon_sym_COMMA] = ACTIONS(617),
    [sym_comment] = ACTIONS(42),
  },
  [211] = {
    [sym_element_value_pair] = STATE(267),
    [sym_identifier] = ACTIONS(433),
    [sym_comment] = ACTIONS(42),
  },
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(619),
    [sym_decimal_integer_literal] = ACTIONS(621),
    [sym_hex_integer_literal] = ACTIONS(621),
    [sym_octal_integer_literal] = ACTIONS(621),
    [sym_binary_integer_literal] = ACTIONS(621),
    [sym_decimal_floating_point_literal] = ACTIONS(621),
    [sym_hex_floating_point_literal] = ACTIONS(623),
    [anon_sym_true] = ACTIONS(619),
    [anon_sym_false] = ACTIONS(619),
    [anon_sym_SQUOTE] = ACTIONS(619),
    [sym_string_literal] = ACTIONS(619),
    [sym_null_literal] = ACTIONS(619),
    [anon_sym_BANG] = ACTIONS(619),
    [anon_sym_TILDE] = ACTIONS(619),
    [anon_sym_PLUS_PLUS] = ACTIONS(619),
    [anon_sym_DASH_DASH] = ACTIONS(619),
    [anon_sym_AT] = ACTIONS(619),
    [anon_sym_open] = ACTIONS(619),
    [anon_sym_module] = ACTIONS(619),
    [anon_sym_static] = ACTIONS(619),
    [anon_sym_package] = ACTIONS(619),
    [anon_sym_import] = ACTIONS(619),
    [anon_sym_class] = ACTIONS(619),
    [anon_sym_public] = ACTIONS(619),
    [anon_sym_protected] = ACTIONS(619),
    [anon_sym_private] = ACTIONS(619),
    [anon_sym_final] = ACTIONS(619),
    [anon_sym_strictfp] = ACTIONS(619),
    [sym_comment] = ACTIONS(42),
  },
  [213] = {
    [anon_sym_RBRACE] = ACTIONS(625),
    [anon_sym_requires] = ACTIONS(625),
    [anon_sym_exports] = ACTIONS(625),
    [anon_sym_opens] = ACTIONS(625),
    [anon_sym_uses] = ACTIONS(625),
    [anon_sym_provides] = ACTIONS(625),
    [sym_comment] = ACTIONS(42),
  },
  [214] = {
    [sym_identifier] = ACTIONS(627),
    [sym_comment] = ACTIONS(42),
  },
  [215] = {
    [anon_sym_transitive] = ACTIONS(629),
    [anon_sym_static] = ACTIONS(629),
    [sym_identifier] = ACTIONS(631),
    [sym_comment] = ACTIONS(42),
  },
  [216] = {
    [sym__semicolon] = ACTIONS(633),
    [anon_sym_DOT] = ACTIONS(461),
    [sym_comment] = ACTIONS(42),
  },
  [217] = {
    [sym_module_name] = STATE(270),
    [sym_identifier] = ACTIONS(635),
    [sym_comment] = ACTIONS(42),
  },
  [218] = {
    [sym_identifier] = ACTIONS(637),
    [sym_comment] = ACTIONS(42),
  },
  [219] = {
    [sym_module_name] = STATE(272),
    [aux_sym_module_directive_repeat2] = STATE(273),
    [sym__semicolon] = ACTIONS(633),
    [anon_sym_COMMA] = ACTIONS(467),
    [sym_identifier] = ACTIONS(635),
    [sym_comment] = ACTIONS(42),
  },
  [220] = {
    [aux_sym_module_directive_repeat2] = STATE(273),
    [sym__semicolon] = ACTIONS(633),
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_DOT] = ACTIONS(461),
    [sym_comment] = ACTIONS(42),
  },
  [221] = {
    [sym__semicolon] = ACTIONS(633),
    [anon_sym_COMMA] = ACTIONS(639),
    [sym_comment] = ACTIONS(42),
  },
  [222] = {
    [sym_package_or_type_name] = STATE(275),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(42),
  },
  [223] = {
    [ts_builtin_sym_end] = ACTIONS(641),
    [sym_decimal_integer_literal] = ACTIONS(643),
    [sym_hex_integer_literal] = ACTIONS(643),
    [sym_octal_integer_literal] = ACTIONS(643),
    [sym_binary_integer_literal] = ACTIONS(643),
    [sym_decimal_floating_point_literal] = ACTIONS(643),
    [sym_hex_floating_point_literal] = ACTIONS(645),
    [anon_sym_true] = ACTIONS(641),
    [anon_sym_false] = ACTIONS(641),
    [anon_sym_SQUOTE] = ACTIONS(641),
    [sym_string_literal] = ACTIONS(641),
    [sym_null_literal] = ACTIONS(641),
    [anon_sym_BANG] = ACTIONS(641),
    [anon_sym_TILDE] = ACTIONS(641),
    [anon_sym_PLUS_PLUS] = ACTIONS(641),
    [anon_sym_DASH_DASH] = ACTIONS(641),
    [anon_sym_AT] = ACTIONS(641),
    [anon_sym_open] = ACTIONS(641),
    [anon_sym_module] = ACTIONS(641),
    [anon_sym_static] = ACTIONS(641),
    [anon_sym_package] = ACTIONS(641),
    [anon_sym_import] = ACTIONS(641),
    [anon_sym_class] = ACTIONS(641),
    [anon_sym_public] = ACTIONS(641),
    [anon_sym_protected] = ACTIONS(641),
    [anon_sym_private] = ACTIONS(641),
    [anon_sym_final] = ACTIONS(641),
    [anon_sym_strictfp] = ACTIONS(641),
    [sym_comment] = ACTIONS(42),
  },
  [224] = {
    [ts_builtin_sym_end] = ACTIONS(647),
    [sym_decimal_integer_literal] = ACTIONS(649),
    [sym_hex_integer_literal] = ACTIONS(649),
    [sym_octal_integer_literal] = ACTIONS(649),
    [sym_binary_integer_literal] = ACTIONS(649),
    [sym_decimal_floating_point_literal] = ACTIONS(649),
    [sym_hex_floating_point_literal] = ACTIONS(651),
    [anon_sym_true] = ACTIONS(647),
    [anon_sym_false] = ACTIONS(647),
    [anon_sym_SQUOTE] = ACTIONS(647),
    [sym_string_literal] = ACTIONS(647),
    [sym_null_literal] = ACTIONS(647),
    [anon_sym_BANG] = ACTIONS(647),
    [anon_sym_TILDE] = ACTIONS(647),
    [anon_sym_PLUS_PLUS] = ACTIONS(647),
    [anon_sym_DASH_DASH] = ACTIONS(647),
    [anon_sym_AT] = ACTIONS(647),
    [anon_sym_open] = ACTIONS(647),
    [anon_sym_module] = ACTIONS(647),
    [anon_sym_static] = ACTIONS(647),
    [anon_sym_package] = ACTIONS(647),
    [anon_sym_import] = ACTIONS(647),
    [anon_sym_class] = ACTIONS(647),
    [anon_sym_public] = ACTIONS(647),
    [anon_sym_protected] = ACTIONS(647),
    [anon_sym_private] = ACTIONS(647),
    [anon_sym_final] = ACTIONS(647),
    [anon_sym_strictfp] = ACTIONS(647),
    [sym_comment] = ACTIONS(42),
  },
  [225] = {
    [sym__literal] = STATE(278),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(279),
    [sym_element_value_pair] = STATE(98),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(231),
    [anon_sym_false] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(653),
    [sym_identifier] = ACTIONS(655),
    [sym_comment] = ACTIONS(42),
  },
  [226] = {
    [sym_identifier] = ACTIONS(657),
    [sym_comment] = ACTIONS(42),
  },
  [227] = {
    [aux_sym_type_bound_repeat1] = STATE(282),
    [anon_sym_GT] = ACTIONS(659),
    [anon_sym_AMP] = ACTIONS(661),
    [anon_sym_COMMA] = ACTIONS(659),
    [sym_comment] = ACTIONS(42),
  },
  [228] = {
    [anon_sym_GT] = ACTIONS(663),
    [anon_sym_COMMA] = ACTIONS(663),
    [sym_comment] = ACTIONS(42),
  },
  [229] = {
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [sym_type_parameter] = STATE(283),
    [aux_sym_class_or_interface_type_repeat1] = STATE(119),
    [anon_sym_AT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(279),
    [sym_comment] = ACTIONS(42),
  },
  [230] = {
    [anon_sym_GT] = ACTIONS(665),
    [anon_sym_COMMA] = ACTIONS(665),
    [sym_comment] = ACTIONS(42),
  },
  [231] = {
    [anon_sym_LBRACK] = ACTIONS(667),
    [anon_sym_AT] = ACTIONS(667),
    [sym_comment] = ACTIONS(42),
  },
  [232] = {
    [anon_sym_LBRACK] = ACTIONS(669),
    [anon_sym_AT] = ACTIONS(669),
    [sym_comment] = ACTIONS(42),
  },
  [233] = {
    [anon_sym_LBRACK] = ACTIONS(671),
    [anon_sym_AT] = ACTIONS(671),
    [sym_comment] = ACTIONS(42),
  },
  [234] = {
    [sym_package_or_type_name] = STATE(285),
    [sym_identifier] = ACTIONS(673),
    [sym_comment] = ACTIONS(42),
  },
  [235] = {
    [aux_sym_type_arguments_repeat1] = STATE(288),
    [anon_sym_GT] = ACTIONS(675),
    [anon_sym_COMMA] = ACTIONS(677),
    [sym_comment] = ACTIONS(42),
  },
  [236] = {
    [anon_sym_GT] = ACTIONS(679),
    [anon_sym_COMMA] = ACTIONS(679),
    [sym_comment] = ACTIONS(42),
  },
  [237] = {
    [sym_dims] = STATE(290),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [aux_sym_class_or_interface_type_repeat1] = STATE(291),
    [aux_sym_dims_repeat1] = STATE(292),
    [anon_sym_GT] = ACTIONS(681),
    [anon_sym_COMMA] = ACTIONS(681),
    [anon_sym_LBRACK] = ACTIONS(683),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(42),
  },
  [238] = {
    [sym_dims] = STATE(290),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [aux_sym_class_or_interface_type_repeat1] = STATE(291),
    [aux_sym_dims_repeat1] = STATE(292),
    [anon_sym_LBRACK] = ACTIONS(683),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(42),
  },
  [239] = {
    [anon_sym_boolean] = ACTIONS(375),
    [anon_sym_byte] = ACTIONS(375),
    [anon_sym_short] = ACTIONS(375),
    [anon_sym_int] = ACTIONS(375),
    [anon_sym_long] = ACTIONS(375),
    [anon_sym_char] = ACTIONS(375),
    [anon_sym_float] = ACTIONS(375),
    [anon_sym_double] = ACTIONS(375),
    [anon_sym_AT] = ACTIONS(119),
    [sym_identifier] = ACTIONS(685),
    [sym_comment] = ACTIONS(42),
  },
  [240] = {
    [anon_sym_boolean] = ACTIONS(377),
    [anon_sym_byte] = ACTIONS(377),
    [anon_sym_short] = ACTIONS(377),
    [anon_sym_int] = ACTIONS(377),
    [anon_sym_long] = ACTIONS(377),
    [anon_sym_char] = ACTIONS(377),
    [anon_sym_float] = ACTIONS(377),
    [anon_sym_double] = ACTIONS(377),
    [anon_sym_AT] = ACTIONS(121),
    [sym_identifier] = ACTIONS(687),
    [sym_comment] = ACTIONS(42),
  },
  [241] = {
    [sym_integral_type] = STATE(293),
    [sym_floating_point_type] = STATE(293),
    [sym__annotation] = STATE(294),
    [sym_normal_annotation] = STATE(240),
    [sym_marker_annotation] = STATE(240),
    [sym_single_element_annotation] = STATE(240),
    [anon_sym_boolean] = ACTIONS(689),
    [anon_sym_byte] = ACTIONS(513),
    [anon_sym_short] = ACTIONS(513),
    [anon_sym_int] = ACTIONS(513),
    [anon_sym_long] = ACTIONS(513),
    [anon_sym_char] = ACTIONS(513),
    [anon_sym_float] = ACTIONS(515),
    [anon_sym_double] = ACTIONS(515),
    [anon_sym_AT] = ACTIONS(517),
    [sym_identifier] = ACTIONS(691),
    [sym_comment] = ACTIONS(42),
  },
  [242] = {
    [sym_type_arguments] = STATE(295),
    [anon_sym_GT] = ACTIONS(693),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(693),
    [anon_sym_LBRACE] = ACTIONS(693),
    [anon_sym_COMMA] = ACTIONS(693),
    [anon_sym_DOT] = ACTIONS(693),
    [anon_sym_LBRACK] = ACTIONS(693),
    [anon_sym_AT] = ACTIONS(693),
    [anon_sym_implements] = ACTIONS(693),
    [sym_comment] = ACTIONS(42),
  },
  [243] = {
    [sym__annotation] = STATE(173),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [anon_sym_AT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(695),
    [sym_comment] = ACTIONS(42),
  },
  [244] = {
    [anon_sym_GT] = ACTIONS(697),
    [anon_sym_AMP] = ACTIONS(697),
    [anon_sym_LBRACE] = ACTIONS(697),
    [anon_sym_COMMA] = ACTIONS(697),
    [anon_sym_DOT] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(697),
    [anon_sym_AT] = ACTIONS(697),
    [anon_sym_implements] = ACTIONS(697),
    [sym_comment] = ACTIONS(42),
  },
  [245] = {
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [aux_sym_class_or_interface_type_repeat1] = STATE(297),
    [anon_sym_AT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(695),
    [sym_comment] = ACTIONS(42),
  },
  [246] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(298),
    [anon_sym_GT] = ACTIONS(697),
    [anon_sym_AMP] = ACTIONS(697),
    [anon_sym_LBRACE] = ACTIONS(697),
    [anon_sym_COMMA] = ACTIONS(697),
    [anon_sym_DOT] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(697),
    [anon_sym_AT] = ACTIONS(697),
    [anon_sym_implements] = ACTIONS(697),
    [sym_comment] = ACTIONS(42),
  },
  [247] = {
    [anon_sym_LBRACE] = ACTIONS(699),
    [anon_sym_COMMA] = ACTIONS(699),
    [sym_comment] = ACTIONS(42),
  },
  [248] = {
    [sym_class_or_interface_type] = STATE(299),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [aux_sym_class_or_interface_type_repeat1] = STATE(127),
    [anon_sym_AT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(285),
    [sym_comment] = ACTIONS(42),
  },
  [249] = {
    [ts_builtin_sym_end] = ACTIONS(701),
    [sym__semicolon] = ACTIONS(701),
    [sym_decimal_integer_literal] = ACTIONS(703),
    [sym_hex_integer_literal] = ACTIONS(703),
    [sym_octal_integer_literal] = ACTIONS(703),
    [sym_binary_integer_literal] = ACTIONS(703),
    [sym_decimal_floating_point_literal] = ACTIONS(703),
    [sym_hex_floating_point_literal] = ACTIONS(705),
    [anon_sym_true] = ACTIONS(701),
    [anon_sym_false] = ACTIONS(701),
    [anon_sym_SQUOTE] = ACTIONS(701),
    [sym_string_literal] = ACTIONS(701),
    [sym_null_literal] = ACTIONS(701),
    [anon_sym_BANG] = ACTIONS(701),
    [anon_sym_TILDE] = ACTIONS(701),
    [anon_sym_PLUS_PLUS] = ACTIONS(701),
    [anon_sym_DASH_DASH] = ACTIONS(701),
    [anon_sym_RBRACE] = ACTIONS(701),
    [anon_sym_AT] = ACTIONS(701),
    [anon_sym_open] = ACTIONS(701),
    [anon_sym_module] = ACTIONS(701),
    [anon_sym_static] = ACTIONS(701),
    [anon_sym_package] = ACTIONS(701),
    [anon_sym_import] = ACTIONS(701),
    [anon_sym_class] = ACTIONS(701),
    [anon_sym_public] = ACTIONS(701),
    [anon_sym_protected] = ACTIONS(701),
    [anon_sym_private] = ACTIONS(701),
    [anon_sym_final] = ACTIONS(701),
    [anon_sym_strictfp] = ACTIONS(701),
    [sym_comment] = ACTIONS(42),
  },
  [250] = {
    [sym__expression] = STATE(300),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_PLUS_PLUS] = ACTIONS(209),
    [anon_sym_DASH_DASH] = ACTIONS(209),
    [sym_comment] = ACTIONS(42),
  },
  [251] = {
    [sym_module_directive] = STATE(161),
    [anon_sym_RBRACE] = ACTIONS(707),
    [anon_sym_requires] = ACTIONS(251),
    [anon_sym_exports] = ACTIONS(253),
    [anon_sym_opens] = ACTIONS(253),
    [anon_sym_uses] = ACTIONS(255),
    [anon_sym_provides] = ACTIONS(257),
    [sym_comment] = ACTIONS(42),
  },
  [252] = {
    [sym_class_body] = STATE(302),
    [anon_sym_LBRACE] = ACTIONS(195),
    [sym_comment] = ACTIONS(42),
  },
  [253] = {
    [sym__expression] = STATE(35),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(549),
    [anon_sym_TILDE] = ACTIONS(549),
    [anon_sym_PLUS_PLUS] = ACTIONS(551),
    [anon_sym_DASH_DASH] = ACTIONS(551),
    [sym_comment] = ACTIONS(42),
  },
  [254] = {
    [sym__expression] = STATE(36),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(549),
    [anon_sym_TILDE] = ACTIONS(549),
    [anon_sym_PLUS_PLUS] = ACTIONS(551),
    [anon_sym_DASH_DASH] = ACTIONS(551),
    [sym_comment] = ACTIONS(42),
  },
  [255] = {
    [anon_sym_EQ] = ACTIONS(709),
    [anon_sym_PLUS_EQ] = ACTIONS(711),
    [anon_sym_DASH_EQ] = ACTIONS(711),
    [anon_sym_STAR_EQ] = ACTIONS(711),
    [anon_sym_SLASH_EQ] = ACTIONS(711),
    [anon_sym_AMP_EQ] = ACTIONS(711),
    [anon_sym_PIPE_EQ] = ACTIONS(711),
    [anon_sym_CARET_EQ] = ACTIONS(711),
    [anon_sym_PERCENT_EQ] = ACTIONS(711),
    [anon_sym_LT_LT_EQ] = ACTIONS(711),
    [anon_sym_GT_GT_EQ] = ACTIONS(711),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(711),
    [anon_sym_GT] = ACTIONS(713),
    [anon_sym_LT] = ACTIONS(167),
    [anon_sym_EQ_EQ] = ACTIONS(165),
    [anon_sym_GT_EQ] = ACTIONS(715),
    [anon_sym_LT_EQ] = ACTIONS(715),
    [anon_sym_BANG_EQ] = ACTIONS(165),
    [anon_sym_AMP_AMP] = ACTIONS(165),
    [anon_sym_PIPE_PIPE] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_AMP] = ACTIONS(717),
    [anon_sym_PIPE] = ACTIONS(167),
    [anon_sym_CARET] = ACTIONS(167),
    [anon_sym_PERCENT] = ACTIONS(167),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_GT_GT] = ACTIONS(167),
    [anon_sym_GT_GT_GT] = ACTIONS(167),
    [anon_sym_QMARK] = ACTIONS(165),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(165),
    [sym_comment] = ACTIONS(42),
  },
  [256] = {
    [anon_sym_RPAREN] = ACTIONS(719),
    [anon_sym_COMMA] = ACTIONS(719),
    [sym_comment] = ACTIONS(42),
  },
  [257] = {
    [sym_unary_expression] = STATE(197),
    [sym_conditional_and_expression] = STATE(310),
    [sym_inclusive_or_expression] = STATE(201),
    [sym_exclusive_or_expression] = STATE(202),
    [sym_and_expression] = STATE(203),
    [sym_relational_expression] = STATE(204),
    [sym_equality_expression] = STATE(205),
    [sym_shift_expression] = STATE(206),
    [sym_additive_expression] = STATE(207),
    [sym_multiplicative_expression] = STATE(208),
    [anon_sym_BANG] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(427),
    [sym_comment] = ACTIONS(42),
  },
  [258] = {
    [sym__expression] = STATE(311),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_PLUS_PLUS] = ACTIONS(209),
    [anon_sym_DASH_DASH] = ACTIONS(209),
    [sym_comment] = ACTIONS(42),
  },
  [259] = {
    [sym_unary_expression] = STATE(197),
    [sym_inclusive_or_expression] = STATE(312),
    [sym_exclusive_or_expression] = STATE(202),
    [sym_and_expression] = STATE(203),
    [sym_relational_expression] = STATE(204),
    [sym_equality_expression] = STATE(205),
    [sym_shift_expression] = STATE(206),
    [sym_additive_expression] = STATE(207),
    [sym_multiplicative_expression] = STATE(208),
    [anon_sym_BANG] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(427),
    [sym_comment] = ACTIONS(42),
  },
  [260] = {
    [sym_unary_expression] = STATE(197),
    [sym_exclusive_or_expression] = STATE(313),
    [sym_and_expression] = STATE(203),
    [sym_relational_expression] = STATE(204),
    [sym_equality_expression] = STATE(205),
    [sym_shift_expression] = STATE(206),
    [sym_additive_expression] = STATE(207),
    [sym_multiplicative_expression] = STATE(208),
    [anon_sym_BANG] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(427),
    [sym_comment] = ACTIONS(42),
  },
  [261] = {
    [sym_unary_expression] = STATE(197),
    [sym_and_expression] = STATE(314),
    [sym_relational_expression] = STATE(204),
    [sym_equality_expression] = STATE(205),
    [sym_shift_expression] = STATE(206),
    [sym_additive_expression] = STATE(207),
    [sym_multiplicative_expression] = STATE(208),
    [anon_sym_BANG] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(427),
    [sym_comment] = ACTIONS(42),
  },
  [262] = {
    [sym_unary_expression] = STATE(197),
    [sym_shift_expression] = STATE(315),
    [sym_additive_expression] = STATE(207),
    [sym_multiplicative_expression] = STATE(208),
    [anon_sym_BANG] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(427),
    [sym_comment] = ACTIONS(42),
  },
  [263] = {
    [sym_unary_expression] = STATE(197),
    [sym_relational_expression] = STATE(316),
    [sym_shift_expression] = STATE(206),
    [sym_additive_expression] = STATE(207),
    [sym_multiplicative_expression] = STATE(208),
    [anon_sym_BANG] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(427),
    [sym_comment] = ACTIONS(42),
  },
  [264] = {
    [sym_unary_expression] = STATE(197),
    [sym_additive_expression] = STATE(317),
    [sym_multiplicative_expression] = STATE(208),
    [anon_sym_BANG] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(427),
    [sym_comment] = ACTIONS(42),
  },
  [265] = {
    [sym_unary_expression] = STATE(197),
    [sym_multiplicative_expression] = STATE(318),
    [anon_sym_BANG] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(427),
    [sym_comment] = ACTIONS(42),
  },
  [266] = {
    [sym_unary_expression] = STATE(319),
    [anon_sym_BANG] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(427),
    [sym_comment] = ACTIONS(42),
  },
  [267] = {
    [anon_sym_RPAREN] = ACTIONS(721),
    [anon_sym_COMMA] = ACTIONS(721),
    [sym_comment] = ACTIONS(42),
  },
  [268] = {
    [sym__semicolon] = ACTIONS(723),
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_DOT] = ACTIONS(723),
    [sym_comment] = ACTIONS(42),
  },
  [269] = {
    [anon_sym_RBRACE] = ACTIONS(725),
    [anon_sym_requires] = ACTIONS(725),
    [anon_sym_exports] = ACTIONS(725),
    [anon_sym_opens] = ACTIONS(725),
    [anon_sym_uses] = ACTIONS(725),
    [anon_sym_provides] = ACTIONS(725),
    [sym_comment] = ACTIONS(42),
  },
  [270] = {
    [sym__semicolon] = ACTIONS(727),
    [anon_sym_COMMA] = ACTIONS(727),
    [anon_sym_DOT] = ACTIONS(461),
    [sym_comment] = ACTIONS(42),
  },
  [271] = {
    [sym__semicolon] = ACTIONS(335),
    [anon_sym_COMMA] = ACTIONS(335),
    [anon_sym_DOT] = ACTIONS(335),
    [anon_sym_to] = ACTIONS(729),
    [sym_identifier] = ACTIONS(731),
    [sym_comment] = ACTIONS(42),
  },
  [272] = {
    [aux_sym_module_directive_repeat2] = STATE(321),
    [sym__semicolon] = ACTIONS(733),
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_DOT] = ACTIONS(461),
    [sym_comment] = ACTIONS(42),
  },
  [273] = {
    [sym__semicolon] = ACTIONS(733),
    [anon_sym_COMMA] = ACTIONS(639),
    [sym_comment] = ACTIONS(42),
  },
  [274] = {
    [sym_module_name] = STATE(322),
    [sym_identifier] = ACTIONS(635),
    [sym_comment] = ACTIONS(42),
  },
  [275] = {
    [aux_sym_module_directive_repeat3] = STATE(324),
    [sym__semicolon] = ACTIONS(733),
    [anon_sym_COMMA] = ACTIONS(735),
    [anon_sym_DOT] = ACTIONS(179),
    [sym_comment] = ACTIONS(42),
  },
  [276] = {
    [anon_sym_AT] = ACTIONS(323),
    [sym_identifier] = ACTIONS(737),
    [sym_comment] = ACTIONS(42),
  },
  [277] = {
    [anon_sym_EQ] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(739),
    [sym_comment] = ACTIONS(42),
  },
  [278] = {
    [anon_sym_RPAREN] = ACTIONS(739),
    [sym_comment] = ACTIONS(42),
  },
  [279] = {
    [anon_sym_RPAREN] = ACTIONS(741),
    [sym_comment] = ACTIONS(42),
  },
  [280] = {
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_DOT] = ACTIONS(335),
    [anon_sym_AT] = ACTIONS(335),
    [sym_identifier] = ACTIONS(729),
    [sym_comment] = ACTIONS(42),
  },
  [281] = {
    [sym_class_or_interface_type] = STATE(327),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [aux_sym_class_or_interface_type_repeat1] = STATE(127),
    [anon_sym_AT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(285),
    [sym_comment] = ACTIONS(42),
  },
  [282] = {
    [anon_sym_GT] = ACTIONS(743),
    [anon_sym_AMP] = ACTIONS(745),
    [anon_sym_COMMA] = ACTIONS(743),
    [sym_comment] = ACTIONS(42),
  },
  [283] = {
    [anon_sym_GT] = ACTIONS(747),
    [anon_sym_COMMA] = ACTIONS(747),
    [sym_comment] = ACTIONS(42),
  },
  [284] = {
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_DOT] = ACTIONS(173),
    [anon_sym_boolean] = ACTIONS(463),
    [anon_sym_byte] = ACTIONS(463),
    [anon_sym_short] = ACTIONS(463),
    [anon_sym_int] = ACTIONS(463),
    [anon_sym_long] = ACTIONS(463),
    [anon_sym_char] = ACTIONS(463),
    [anon_sym_float] = ACTIONS(463),
    [anon_sym_double] = ACTIONS(463),
    [anon_sym_AT] = ACTIONS(173),
    [sym_identifier] = ACTIONS(465),
    [sym_comment] = ACTIONS(42),
  },
  [285] = {
    [anon_sym_LPAREN] = ACTIONS(749),
    [anon_sym_DOT] = ACTIONS(751),
    [anon_sym_boolean] = ACTIONS(491),
    [anon_sym_byte] = ACTIONS(491),
    [anon_sym_short] = ACTIONS(491),
    [anon_sym_int] = ACTIONS(491),
    [anon_sym_long] = ACTIONS(491),
    [anon_sym_char] = ACTIONS(491),
    [anon_sym_float] = ACTIONS(491),
    [anon_sym_double] = ACTIONS(491),
    [anon_sym_AT] = ACTIONS(177),
    [sym_identifier] = ACTIONS(753),
    [sym_comment] = ACTIONS(42),
  },
  [286] = {
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
    [anon_sym_LBRACE] = ACTIONS(755),
    [anon_sym_COMMA] = ACTIONS(755),
    [anon_sym_DOT] = ACTIONS(755),
    [anon_sym_LBRACK] = ACTIONS(755),
    [anon_sym_AT] = ACTIONS(755),
    [anon_sym_implements] = ACTIONS(755),
    [sym_comment] = ACTIONS(42),
  },
  [287] = {
    [sym_type_argument] = STATE(331),
    [sym_reference_type] = STATE(236),
    [sym_class_or_interface_type] = STATE(237),
    [sym_primitive_type] = STATE(238),
    [sym_integral_type] = STATE(231),
    [sym_floating_point_type] = STATE(231),
    [sym__annotation] = STATE(239),
    [sym_normal_annotation] = STATE(240),
    [sym_marker_annotation] = STATE(240),
    [sym_single_element_annotation] = STATE(240),
    [aux_sym_class_or_interface_type_repeat1] = STATE(241),
    [anon_sym_boolean] = ACTIONS(511),
    [anon_sym_byte] = ACTIONS(513),
    [anon_sym_short] = ACTIONS(513),
    [anon_sym_int] = ACTIONS(513),
    [anon_sym_long] = ACTIONS(513),
    [anon_sym_char] = ACTIONS(513),
    [anon_sym_float] = ACTIONS(515),
    [anon_sym_double] = ACTIONS(515),
    [anon_sym_AT] = ACTIONS(517),
    [sym_identifier] = ACTIONS(519),
    [sym_comment] = ACTIONS(42),
  },
  [288] = {
    [anon_sym_GT] = ACTIONS(757),
    [anon_sym_COMMA] = ACTIONS(759),
    [sym_comment] = ACTIONS(42),
  },
  [289] = {
    [anon_sym_RBRACK] = ACTIONS(761),
    [sym_comment] = ACTIONS(42),
  },
  [290] = {
    [anon_sym_GT] = ACTIONS(763),
    [anon_sym_COMMA] = ACTIONS(763),
    [sym_comment] = ACTIONS(42),
  },
  [291] = {
    [sym__annotation] = STATE(58),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [anon_sym_LBRACK] = ACTIONS(765),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(42),
  },
  [292] = {
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [aux_sym_class_or_interface_type_repeat1] = STATE(336),
    [anon_sym_GT] = ACTIONS(767),
    [anon_sym_COMMA] = ACTIONS(767),
    [anon_sym_LBRACK] = ACTIONS(765),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(42),
  },
  [293] = {
    [anon_sym_LBRACK] = ACTIONS(769),
    [anon_sym_AT] = ACTIONS(769),
    [sym_comment] = ACTIONS(42),
  },
  [294] = {
    [anon_sym_boolean] = ACTIONS(501),
    [anon_sym_byte] = ACTIONS(501),
    [anon_sym_short] = ACTIONS(501),
    [anon_sym_int] = ACTIONS(501),
    [anon_sym_long] = ACTIONS(501),
    [anon_sym_char] = ACTIONS(501),
    [anon_sym_float] = ACTIONS(501),
    [anon_sym_double] = ACTIONS(501),
    [anon_sym_AT] = ACTIONS(221),
    [sym_identifier] = ACTIONS(771),
    [sym_comment] = ACTIONS(42),
  },
  [295] = {
    [anon_sym_GT] = ACTIONS(773),
    [anon_sym_AMP] = ACTIONS(773),
    [anon_sym_LBRACE] = ACTIONS(773),
    [anon_sym_COMMA] = ACTIONS(773),
    [anon_sym_DOT] = ACTIONS(773),
    [anon_sym_LBRACK] = ACTIONS(773),
    [anon_sym_AT] = ACTIONS(773),
    [anon_sym_implements] = ACTIONS(773),
    [sym_comment] = ACTIONS(42),
  },
  [296] = {
    [sym_type_arguments] = STATE(337),
    [anon_sym_GT] = ACTIONS(773),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(773),
    [anon_sym_LBRACE] = ACTIONS(773),
    [anon_sym_COMMA] = ACTIONS(773),
    [anon_sym_DOT] = ACTIONS(773),
    [anon_sym_LBRACK] = ACTIONS(773),
    [anon_sym_AT] = ACTIONS(773),
    [anon_sym_implements] = ACTIONS(773),
    [sym_comment] = ACTIONS(42),
  },
  [297] = {
    [sym__annotation] = STATE(173),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [anon_sym_AT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(775),
    [sym_comment] = ACTIONS(42),
  },
  [298] = {
    [anon_sym_GT] = ACTIONS(777),
    [anon_sym_AMP] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [anon_sym_COMMA] = ACTIONS(777),
    [anon_sym_DOT] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(777),
    [anon_sym_AT] = ACTIONS(777),
    [anon_sym_implements] = ACTIONS(777),
    [sym_comment] = ACTIONS(42),
  },
  [299] = {
    [anon_sym_LBRACE] = ACTIONS(779),
    [anon_sym_COMMA] = ACTIONS(779),
    [sym_comment] = ACTIONS(42),
  },
  [300] = {
    [anon_sym_EQ] = ACTIONS(541),
    [anon_sym_PLUS_EQ] = ACTIONS(539),
    [anon_sym_DASH_EQ] = ACTIONS(539),
    [anon_sym_STAR_EQ] = ACTIONS(539),
    [anon_sym_SLASH_EQ] = ACTIONS(539),
    [anon_sym_AMP_EQ] = ACTIONS(539),
    [anon_sym_PIPE_EQ] = ACTIONS(539),
    [anon_sym_CARET_EQ] = ACTIONS(539),
    [anon_sym_PERCENT_EQ] = ACTIONS(539),
    [anon_sym_LT_LT_EQ] = ACTIONS(539),
    [anon_sym_GT_GT_EQ] = ACTIONS(539),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(539),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(305),
    [anon_sym_GT_EQ] = ACTIONS(305),
    [anon_sym_LT_EQ] = ACTIONS(305),
    [anon_sym_BANG_EQ] = ACTIONS(305),
    [anon_sym_AMP_AMP] = ACTIONS(307),
    [anon_sym_PIPE_PIPE] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(311),
    [anon_sym_STAR] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_CARET] = ACTIONS(317),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_GT_GT_GT] = ACTIONS(313),
    [anon_sym_QMARK] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(539),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(42),
  },
  [301] = {
    [ts_builtin_sym_end] = ACTIONS(781),
    [sym_decimal_integer_literal] = ACTIONS(783),
    [sym_hex_integer_literal] = ACTIONS(783),
    [sym_octal_integer_literal] = ACTIONS(783),
    [sym_binary_integer_literal] = ACTIONS(783),
    [sym_decimal_floating_point_literal] = ACTIONS(783),
    [sym_hex_floating_point_literal] = ACTIONS(785),
    [anon_sym_true] = ACTIONS(781),
    [anon_sym_false] = ACTIONS(781),
    [anon_sym_SQUOTE] = ACTIONS(781),
    [sym_string_literal] = ACTIONS(781),
    [sym_null_literal] = ACTIONS(781),
    [anon_sym_BANG] = ACTIONS(781),
    [anon_sym_TILDE] = ACTIONS(781),
    [anon_sym_PLUS_PLUS] = ACTIONS(781),
    [anon_sym_DASH_DASH] = ACTIONS(781),
    [anon_sym_AT] = ACTIONS(781),
    [anon_sym_open] = ACTIONS(781),
    [anon_sym_module] = ACTIONS(781),
    [anon_sym_static] = ACTIONS(781),
    [anon_sym_package] = ACTIONS(781),
    [anon_sym_import] = ACTIONS(781),
    [anon_sym_class] = ACTIONS(781),
    [anon_sym_public] = ACTIONS(781),
    [anon_sym_protected] = ACTIONS(781),
    [anon_sym_private] = ACTIONS(781),
    [anon_sym_final] = ACTIONS(781),
    [anon_sym_strictfp] = ACTIONS(781),
    [sym_comment] = ACTIONS(42),
  },
  [302] = {
    [ts_builtin_sym_end] = ACTIONS(787),
    [sym__semicolon] = ACTIONS(787),
    [sym_decimal_integer_literal] = ACTIONS(789),
    [sym_hex_integer_literal] = ACTIONS(789),
    [sym_octal_integer_literal] = ACTIONS(789),
    [sym_binary_integer_literal] = ACTIONS(789),
    [sym_decimal_floating_point_literal] = ACTIONS(789),
    [sym_hex_floating_point_literal] = ACTIONS(791),
    [anon_sym_true] = ACTIONS(787),
    [anon_sym_false] = ACTIONS(787),
    [anon_sym_SQUOTE] = ACTIONS(787),
    [sym_string_literal] = ACTIONS(787),
    [sym_null_literal] = ACTIONS(787),
    [anon_sym_BANG] = ACTIONS(787),
    [anon_sym_TILDE] = ACTIONS(787),
    [anon_sym_PLUS_PLUS] = ACTIONS(787),
    [anon_sym_DASH_DASH] = ACTIONS(787),
    [anon_sym_RBRACE] = ACTIONS(787),
    [anon_sym_AT] = ACTIONS(787),
    [anon_sym_open] = ACTIONS(787),
    [anon_sym_module] = ACTIONS(787),
    [anon_sym_static] = ACTIONS(787),
    [anon_sym_package] = ACTIONS(787),
    [anon_sym_import] = ACTIONS(787),
    [anon_sym_class] = ACTIONS(787),
    [anon_sym_public] = ACTIONS(787),
    [anon_sym_protected] = ACTIONS(787),
    [anon_sym_private] = ACTIONS(787),
    [anon_sym_final] = ACTIONS(787),
    [anon_sym_strictfp] = ACTIONS(787),
    [sym_comment] = ACTIONS(42),
  },
  [303] = {
    [sym__expression] = STATE(339),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(549),
    [anon_sym_TILDE] = ACTIONS(549),
    [anon_sym_PLUS_PLUS] = ACTIONS(551),
    [anon_sym_DASH_DASH] = ACTIONS(551),
    [sym_comment] = ACTIONS(42),
  },
  [304] = {
    [sym__expression] = STATE(340),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(549),
    [anon_sym_TILDE] = ACTIONS(549),
    [anon_sym_PLUS_PLUS] = ACTIONS(551),
    [anon_sym_DASH_DASH] = ACTIONS(551),
    [sym_comment] = ACTIONS(42),
  },
  [305] = {
    [sym__expression] = STATE(341),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(549),
    [anon_sym_TILDE] = ACTIONS(549),
    [anon_sym_PLUS_PLUS] = ACTIONS(551),
    [anon_sym_DASH_DASH] = ACTIONS(551),
    [sym_comment] = ACTIONS(42),
  },
  [306] = {
    [sym__expression] = STATE(342),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(549),
    [anon_sym_TILDE] = ACTIONS(549),
    [anon_sym_PLUS_PLUS] = ACTIONS(551),
    [anon_sym_DASH_DASH] = ACTIONS(551),
    [sym_comment] = ACTIONS(42),
  },
  [307] = {
    [sym__expression] = STATE(343),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(549),
    [anon_sym_TILDE] = ACTIONS(549),
    [anon_sym_PLUS_PLUS] = ACTIONS(551),
    [anon_sym_DASH_DASH] = ACTIONS(551),
    [sym_comment] = ACTIONS(42),
  },
  [308] = {
    [sym__expression] = STATE(87),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(549),
    [anon_sym_TILDE] = ACTIONS(549),
    [anon_sym_PLUS_PLUS] = ACTIONS(551),
    [anon_sym_DASH_DASH] = ACTIONS(551),
    [sym_comment] = ACTIONS(42),
  },
  [309] = {
    [sym__expression] = STATE(344),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_PLUS_PLUS] = ACTIONS(209),
    [anon_sym_DASH_DASH] = ACTIONS(209),
    [sym_comment] = ACTIONS(42),
  },
  [310] = {
    [anon_sym_AMP_AMP] = ACTIONS(567),
    [anon_sym_PIPE_PIPE] = ACTIONS(793),
    [anon_sym_QMARK] = ACTIONS(793),
    [anon_sym_RPAREN] = ACTIONS(793),
    [anon_sym_COMMA] = ACTIONS(793),
    [sym_comment] = ACTIONS(42),
  },
  [311] = {
    [anon_sym_EQ] = ACTIONS(299),
    [anon_sym_PLUS_EQ] = ACTIONS(301),
    [anon_sym_DASH_EQ] = ACTIONS(301),
    [anon_sym_STAR_EQ] = ACTIONS(301),
    [anon_sym_SLASH_EQ] = ACTIONS(301),
    [anon_sym_AMP_EQ] = ACTIONS(301),
    [anon_sym_PIPE_EQ] = ACTIONS(301),
    [anon_sym_CARET_EQ] = ACTIONS(301),
    [anon_sym_PERCENT_EQ] = ACTIONS(301),
    [anon_sym_LT_LT_EQ] = ACTIONS(301),
    [anon_sym_GT_GT_EQ] = ACTIONS(301),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(305),
    [anon_sym_GT_EQ] = ACTIONS(305),
    [anon_sym_LT_EQ] = ACTIONS(305),
    [anon_sym_BANG_EQ] = ACTIONS(305),
    [anon_sym_AMP_AMP] = ACTIONS(307),
    [anon_sym_PIPE_PIPE] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(311),
    [anon_sym_STAR] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_CARET] = ACTIONS(317),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_GT_GT_GT] = ACTIONS(313),
    [anon_sym_QMARK] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(795),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(42),
  },
  [312] = {
    [anon_sym_AMP_AMP] = ACTIONS(797),
    [anon_sym_PIPE_PIPE] = ACTIONS(797),
    [anon_sym_PIPE] = ACTIONS(573),
    [anon_sym_QMARK] = ACTIONS(797),
    [anon_sym_RPAREN] = ACTIONS(797),
    [anon_sym_COMMA] = ACTIONS(797),
    [sym_comment] = ACTIONS(42),
  },
  [313] = {
    [anon_sym_AMP_AMP] = ACTIONS(799),
    [anon_sym_PIPE_PIPE] = ACTIONS(799),
    [anon_sym_PIPE] = ACTIONS(801),
    [anon_sym_CARET] = ACTIONS(579),
    [anon_sym_QMARK] = ACTIONS(799),
    [anon_sym_RPAREN] = ACTIONS(799),
    [anon_sym_COMMA] = ACTIONS(799),
    [sym_comment] = ACTIONS(42),
  },
  [314] = {
    [anon_sym_AMP_AMP] = ACTIONS(803),
    [anon_sym_PIPE_PIPE] = ACTIONS(803),
    [anon_sym_PIPE] = ACTIONS(805),
    [anon_sym_CARET] = ACTIONS(803),
    [anon_sym_QMARK] = ACTIONS(803),
    [anon_sym_RPAREN] = ACTIONS(803),
    [anon_sym_COMMA] = ACTIONS(803),
    [sym_comment] = ACTIONS(42),
  },
  [315] = {
    [anon_sym_LT] = ACTIONS(807),
    [anon_sym_EQ_EQ] = ACTIONS(809),
    [anon_sym_BANG_EQ] = ACTIONS(809),
    [anon_sym_AMP_AMP] = ACTIONS(809),
    [anon_sym_PIPE_PIPE] = ACTIONS(809),
    [anon_sym_PIPE] = ACTIONS(807),
    [anon_sym_CARET] = ACTIONS(809),
    [anon_sym_LT_LT] = ACTIONS(599),
    [anon_sym_GT_GT] = ACTIONS(601),
    [anon_sym_GT_GT_GT] = ACTIONS(599),
    [anon_sym_QMARK] = ACTIONS(809),
    [anon_sym_RPAREN] = ACTIONS(809),
    [anon_sym_COMMA] = ACTIONS(809),
    [sym_comment] = ACTIONS(42),
  },
  [316] = {
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_EQ_EQ] = ACTIONS(811),
    [anon_sym_BANG_EQ] = ACTIONS(811),
    [anon_sym_AMP_AMP] = ACTIONS(813),
    [anon_sym_PIPE_PIPE] = ACTIONS(813),
    [anon_sym_PIPE] = ACTIONS(815),
    [anon_sym_CARET] = ACTIONS(813),
    [anon_sym_QMARK] = ACTIONS(813),
    [anon_sym_RPAREN] = ACTIONS(813),
    [anon_sym_COMMA] = ACTIONS(813),
    [sym_comment] = ACTIONS(42),
  },
  [317] = {
    [anon_sym_LT] = ACTIONS(817),
    [anon_sym_EQ_EQ] = ACTIONS(819),
    [anon_sym_BANG_EQ] = ACTIONS(819),
    [anon_sym_AMP_AMP] = ACTIONS(819),
    [anon_sym_PIPE_PIPE] = ACTIONS(819),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [anon_sym_PIPE] = ACTIONS(817),
    [anon_sym_CARET] = ACTIONS(819),
    [anon_sym_LT_LT] = ACTIONS(819),
    [anon_sym_GT_GT] = ACTIONS(817),
    [anon_sym_GT_GT_GT] = ACTIONS(819),
    [anon_sym_QMARK] = ACTIONS(819),
    [anon_sym_RPAREN] = ACTIONS(819),
    [anon_sym_COMMA] = ACTIONS(819),
    [sym_comment] = ACTIONS(42),
  },
  [318] = {
    [anon_sym_LT] = ACTIONS(821),
    [anon_sym_EQ_EQ] = ACTIONS(823),
    [anon_sym_BANG_EQ] = ACTIONS(823),
    [anon_sym_AMP_AMP] = ACTIONS(823),
    [anon_sym_PIPE_PIPE] = ACTIONS(823),
    [anon_sym_PLUS] = ACTIONS(823),
    [anon_sym_DASH] = ACTIONS(823),
    [anon_sym_STAR] = ACTIONS(613),
    [anon_sym_SLASH] = ACTIONS(615),
    [anon_sym_PIPE] = ACTIONS(821),
    [anon_sym_CARET] = ACTIONS(823),
    [anon_sym_PERCENT] = ACTIONS(613),
    [anon_sym_LT_LT] = ACTIONS(823),
    [anon_sym_GT_GT] = ACTIONS(821),
    [anon_sym_GT_GT_GT] = ACTIONS(823),
    [anon_sym_QMARK] = ACTIONS(823),
    [anon_sym_RPAREN] = ACTIONS(823),
    [anon_sym_COMMA] = ACTIONS(823),
    [sym_comment] = ACTIONS(42),
  },
  [319] = {
    [anon_sym_LT] = ACTIONS(825),
    [anon_sym_EQ_EQ] = ACTIONS(827),
    [anon_sym_BANG_EQ] = ACTIONS(827),
    [anon_sym_AMP_AMP] = ACTIONS(827),
    [anon_sym_PIPE_PIPE] = ACTIONS(827),
    [anon_sym_PLUS] = ACTIONS(827),
    [anon_sym_DASH] = ACTIONS(827),
    [anon_sym_STAR] = ACTIONS(827),
    [anon_sym_SLASH] = ACTIONS(825),
    [anon_sym_PIPE] = ACTIONS(825),
    [anon_sym_CARET] = ACTIONS(827),
    [anon_sym_PERCENT] = ACTIONS(827),
    [anon_sym_LT_LT] = ACTIONS(827),
    [anon_sym_GT_GT] = ACTIONS(825),
    [anon_sym_GT_GT_GT] = ACTIONS(827),
    [anon_sym_QMARK] = ACTIONS(827),
    [anon_sym_RPAREN] = ACTIONS(827),
    [anon_sym_COMMA] = ACTIONS(827),
    [sym_comment] = ACTIONS(42),
  },
  [320] = {
    [anon_sym_RBRACE] = ACTIONS(829),
    [anon_sym_requires] = ACTIONS(829),
    [anon_sym_exports] = ACTIONS(829),
    [anon_sym_opens] = ACTIONS(829),
    [anon_sym_uses] = ACTIONS(829),
    [anon_sym_provides] = ACTIONS(829),
    [sym_comment] = ACTIONS(42),
  },
  [321] = {
    [sym__semicolon] = ACTIONS(831),
    [anon_sym_COMMA] = ACTIONS(639),
    [sym_comment] = ACTIONS(42),
  },
  [322] = {
    [sym__semicolon] = ACTIONS(833),
    [anon_sym_COMMA] = ACTIONS(833),
    [anon_sym_DOT] = ACTIONS(461),
    [sym_comment] = ACTIONS(42),
  },
  [323] = {
    [sym_package_or_type_name] = STATE(347),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(42),
  },
  [324] = {
    [sym__semicolon] = ACTIONS(831),
    [anon_sym_COMMA] = ACTIONS(835),
    [sym_comment] = ACTIONS(42),
  },
  [325] = {
    [anon_sym_AT] = ACTIONS(429),
    [sym_identifier] = ACTIONS(837),
    [sym_comment] = ACTIONS(42),
  },
  [326] = {
    [anon_sym_AT] = ACTIONS(431),
    [sym_identifier] = ACTIONS(839),
    [sym_comment] = ACTIONS(42),
  },
  [327] = {
    [anon_sym_GT] = ACTIONS(841),
    [anon_sym_AMP] = ACTIONS(841),
    [anon_sym_COMMA] = ACTIONS(841),
    [sym_comment] = ACTIONS(42),
  },
  [328] = {
    [sym_class_or_interface_type] = STATE(349),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [aux_sym_class_or_interface_type_repeat1] = STATE(127),
    [anon_sym_AT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(285),
    [sym_comment] = ACTIONS(42),
  },
  [329] = {
    [sym__literal] = STATE(352),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(353),
    [sym_element_value_pair] = STATE(98),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(231),
    [anon_sym_false] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(843),
    [sym_identifier] = ACTIONS(845),
    [sym_comment] = ACTIONS(42),
  },
  [330] = {
    [sym_identifier] = ACTIONS(847),
    [sym_comment] = ACTIONS(42),
  },
  [331] = {
    [anon_sym_GT] = ACTIONS(849),
    [anon_sym_COMMA] = ACTIONS(849),
    [sym_comment] = ACTIONS(42),
  },
  [332] = {
    [anon_sym_GT] = ACTIONS(851),
    [anon_sym_AMP] = ACTIONS(851),
    [anon_sym_LBRACE] = ACTIONS(851),
    [anon_sym_COMMA] = ACTIONS(851),
    [anon_sym_DOT] = ACTIONS(851),
    [anon_sym_LBRACK] = ACTIONS(851),
    [anon_sym_AT] = ACTIONS(851),
    [anon_sym_implements] = ACTIONS(851),
    [sym_comment] = ACTIONS(42),
  },
  [333] = {
    [sym_type_argument] = STATE(355),
    [sym_reference_type] = STATE(236),
    [sym_class_or_interface_type] = STATE(237),
    [sym_primitive_type] = STATE(238),
    [sym_integral_type] = STATE(231),
    [sym_floating_point_type] = STATE(231),
    [sym__annotation] = STATE(239),
    [sym_normal_annotation] = STATE(240),
    [sym_marker_annotation] = STATE(240),
    [sym_single_element_annotation] = STATE(240),
    [aux_sym_class_or_interface_type_repeat1] = STATE(241),
    [anon_sym_boolean] = ACTIONS(511),
    [anon_sym_byte] = ACTIONS(513),
    [anon_sym_short] = ACTIONS(513),
    [anon_sym_int] = ACTIONS(513),
    [anon_sym_long] = ACTIONS(513),
    [anon_sym_char] = ACTIONS(513),
    [anon_sym_float] = ACTIONS(515),
    [anon_sym_double] = ACTIONS(515),
    [anon_sym_AT] = ACTIONS(517),
    [sym_identifier] = ACTIONS(519),
    [sym_comment] = ACTIONS(42),
  },
  [334] = {
    [anon_sym_GT] = ACTIONS(853),
    [anon_sym_COMMA] = ACTIONS(853),
    [anon_sym_LBRACK] = ACTIONS(853),
    [anon_sym_AT] = ACTIONS(853),
    [sym_comment] = ACTIONS(42),
  },
  [335] = {
    [anon_sym_RBRACK] = ACTIONS(855),
    [sym_comment] = ACTIONS(42),
  },
  [336] = {
    [sym__annotation] = STATE(58),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [anon_sym_LBRACK] = ACTIONS(857),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(42),
  },
  [337] = {
    [anon_sym_GT] = ACTIONS(859),
    [anon_sym_AMP] = ACTIONS(859),
    [anon_sym_LBRACE] = ACTIONS(859),
    [anon_sym_COMMA] = ACTIONS(859),
    [anon_sym_DOT] = ACTIONS(859),
    [anon_sym_LBRACK] = ACTIONS(859),
    [anon_sym_AT] = ACTIONS(859),
    [anon_sym_implements] = ACTIONS(859),
    [sym_comment] = ACTIONS(42),
  },
  [338] = {
    [sym_type_arguments] = STATE(358),
    [anon_sym_GT] = ACTIONS(859),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(859),
    [anon_sym_LBRACE] = ACTIONS(859),
    [anon_sym_COMMA] = ACTIONS(859),
    [anon_sym_DOT] = ACTIONS(859),
    [anon_sym_LBRACK] = ACTIONS(859),
    [anon_sym_AT] = ACTIONS(859),
    [anon_sym_implements] = ACTIONS(859),
    [sym_comment] = ACTIONS(42),
  },
  [339] = {
    [anon_sym_EQ] = ACTIONS(709),
    [anon_sym_PLUS_EQ] = ACTIONS(711),
    [anon_sym_DASH_EQ] = ACTIONS(711),
    [anon_sym_STAR_EQ] = ACTIONS(711),
    [anon_sym_SLASH_EQ] = ACTIONS(711),
    [anon_sym_AMP_EQ] = ACTIONS(711),
    [anon_sym_PIPE_EQ] = ACTIONS(711),
    [anon_sym_CARET_EQ] = ACTIONS(711),
    [anon_sym_PERCENT_EQ] = ACTIONS(711),
    [anon_sym_LT_LT_EQ] = ACTIONS(711),
    [anon_sym_GT_GT_EQ] = ACTIONS(711),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(711),
    [anon_sym_GT] = ACTIONS(713),
    [anon_sym_LT] = ACTIONS(713),
    [anon_sym_EQ_EQ] = ACTIONS(715),
    [anon_sym_GT_EQ] = ACTIONS(715),
    [anon_sym_LT_EQ] = ACTIONS(715),
    [anon_sym_BANG_EQ] = ACTIONS(715),
    [anon_sym_AMP_AMP] = ACTIONS(861),
    [anon_sym_PIPE_PIPE] = ACTIONS(863),
    [anon_sym_PLUS] = ACTIONS(865),
    [anon_sym_DASH] = ACTIONS(865),
    [anon_sym_STAR] = ACTIONS(867),
    [anon_sym_SLASH] = ACTIONS(867),
    [anon_sym_AMP] = ACTIONS(717),
    [anon_sym_PIPE] = ACTIONS(869),
    [anon_sym_CARET] = ACTIONS(869),
    [anon_sym_PERCENT] = ACTIONS(867),
    [anon_sym_LT_LT] = ACTIONS(867),
    [anon_sym_GT_GT] = ACTIONS(867),
    [anon_sym_GT_GT_GT] = ACTIONS(867),
    [anon_sym_QMARK] = ACTIONS(871),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_COMMA] = ACTIONS(293),
    [sym_comment] = ACTIONS(42),
  },
  [340] = {
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_PLUS_EQ] = ACTIONS(295),
    [anon_sym_DASH_EQ] = ACTIONS(295),
    [anon_sym_STAR_EQ] = ACTIONS(295),
    [anon_sym_SLASH_EQ] = ACTIONS(295),
    [anon_sym_AMP_EQ] = ACTIONS(295),
    [anon_sym_PIPE_EQ] = ACTIONS(295),
    [anon_sym_CARET_EQ] = ACTIONS(295),
    [anon_sym_PERCENT_EQ] = ACTIONS(295),
    [anon_sym_LT_LT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_EQ_EQ] = ACTIONS(295),
    [anon_sym_GT_EQ] = ACTIONS(295),
    [anon_sym_LT_EQ] = ACTIONS(295),
    [anon_sym_BANG_EQ] = ACTIONS(295),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(867),
    [anon_sym_SLASH] = ACTIONS(867),
    [anon_sym_AMP] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(867),
    [anon_sym_LT_LT] = ACTIONS(867),
    [anon_sym_GT_GT] = ACTIONS(867),
    [anon_sym_GT_GT_GT] = ACTIONS(867),
    [anon_sym_QMARK] = ACTIONS(295),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_COMMA] = ACTIONS(295),
    [sym_comment] = ACTIONS(42),
  },
  [341] = {
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_PLUS_EQ] = ACTIONS(295),
    [anon_sym_DASH_EQ] = ACTIONS(295),
    [anon_sym_STAR_EQ] = ACTIONS(295),
    [anon_sym_SLASH_EQ] = ACTIONS(295),
    [anon_sym_AMP_EQ] = ACTIONS(295),
    [anon_sym_PIPE_EQ] = ACTIONS(295),
    [anon_sym_CARET_EQ] = ACTIONS(295),
    [anon_sym_PERCENT_EQ] = ACTIONS(295),
    [anon_sym_LT_LT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(713),
    [anon_sym_LT] = ACTIONS(713),
    [anon_sym_EQ_EQ] = ACTIONS(715),
    [anon_sym_GT_EQ] = ACTIONS(715),
    [anon_sym_LT_EQ] = ACTIONS(715),
    [anon_sym_BANG_EQ] = ACTIONS(715),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(865),
    [anon_sym_DASH] = ACTIONS(865),
    [anon_sym_STAR] = ACTIONS(867),
    [anon_sym_SLASH] = ACTIONS(867),
    [anon_sym_AMP] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(867),
    [anon_sym_LT_LT] = ACTIONS(867),
    [anon_sym_GT_GT] = ACTIONS(867),
    [anon_sym_GT_GT_GT] = ACTIONS(867),
    [anon_sym_QMARK] = ACTIONS(295),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_COMMA] = ACTIONS(295),
    [sym_comment] = ACTIONS(42),
  },
  [342] = {
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_PLUS_EQ] = ACTIONS(295),
    [anon_sym_DASH_EQ] = ACTIONS(295),
    [anon_sym_STAR_EQ] = ACTIONS(295),
    [anon_sym_SLASH_EQ] = ACTIONS(295),
    [anon_sym_AMP_EQ] = ACTIONS(295),
    [anon_sym_PIPE_EQ] = ACTIONS(295),
    [anon_sym_CARET_EQ] = ACTIONS(295),
    [anon_sym_PERCENT_EQ] = ACTIONS(295),
    [anon_sym_LT_LT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(713),
    [anon_sym_LT] = ACTIONS(713),
    [anon_sym_EQ_EQ] = ACTIONS(715),
    [anon_sym_GT_EQ] = ACTIONS(715),
    [anon_sym_LT_EQ] = ACTIONS(715),
    [anon_sym_BANG_EQ] = ACTIONS(715),
    [anon_sym_AMP_AMP] = ACTIONS(861),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(865),
    [anon_sym_DASH] = ACTIONS(865),
    [anon_sym_STAR] = ACTIONS(867),
    [anon_sym_SLASH] = ACTIONS(867),
    [anon_sym_AMP] = ACTIONS(717),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(867),
    [anon_sym_LT_LT] = ACTIONS(867),
    [anon_sym_GT_GT] = ACTIONS(867),
    [anon_sym_GT_GT_GT] = ACTIONS(867),
    [anon_sym_QMARK] = ACTIONS(295),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_COMMA] = ACTIONS(295),
    [sym_comment] = ACTIONS(42),
  },
  [343] = {
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_PLUS_EQ] = ACTIONS(295),
    [anon_sym_DASH_EQ] = ACTIONS(295),
    [anon_sym_STAR_EQ] = ACTIONS(295),
    [anon_sym_SLASH_EQ] = ACTIONS(295),
    [anon_sym_AMP_EQ] = ACTIONS(295),
    [anon_sym_PIPE_EQ] = ACTIONS(295),
    [anon_sym_CARET_EQ] = ACTIONS(295),
    [anon_sym_PERCENT_EQ] = ACTIONS(295),
    [anon_sym_LT_LT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(713),
    [anon_sym_LT] = ACTIONS(713),
    [anon_sym_EQ_EQ] = ACTIONS(715),
    [anon_sym_GT_EQ] = ACTIONS(715),
    [anon_sym_LT_EQ] = ACTIONS(715),
    [anon_sym_BANG_EQ] = ACTIONS(715),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(867),
    [anon_sym_SLASH] = ACTIONS(867),
    [anon_sym_AMP] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(867),
    [anon_sym_LT_LT] = ACTIONS(867),
    [anon_sym_GT_GT] = ACTIONS(867),
    [anon_sym_GT_GT_GT] = ACTIONS(867),
    [anon_sym_QMARK] = ACTIONS(295),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_COMMA] = ACTIONS(295),
    [sym_comment] = ACTIONS(42),
  },
  [344] = {
    [anon_sym_EQ] = ACTIONS(299),
    [anon_sym_PLUS_EQ] = ACTIONS(301),
    [anon_sym_DASH_EQ] = ACTIONS(301),
    [anon_sym_STAR_EQ] = ACTIONS(301),
    [anon_sym_SLASH_EQ] = ACTIONS(301),
    [anon_sym_AMP_EQ] = ACTIONS(301),
    [anon_sym_PIPE_EQ] = ACTIONS(301),
    [anon_sym_CARET_EQ] = ACTIONS(301),
    [anon_sym_PERCENT_EQ] = ACTIONS(301),
    [anon_sym_LT_LT_EQ] = ACTIONS(301),
    [anon_sym_GT_GT_EQ] = ACTIONS(301),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(305),
    [anon_sym_GT_EQ] = ACTIONS(305),
    [anon_sym_LT_EQ] = ACTIONS(305),
    [anon_sym_BANG_EQ] = ACTIONS(305),
    [anon_sym_AMP_AMP] = ACTIONS(307),
    [anon_sym_PIPE_PIPE] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(311),
    [anon_sym_STAR] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_CARET] = ACTIONS(317),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_GT_GT_GT] = ACTIONS(313),
    [anon_sym_QMARK] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(873),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(42),
  },
  [345] = {
    [sym_unary_expression] = STATE(197),
    [sym_conditional_expression] = STATE(360),
    [sym_conditional_or_expression] = STATE(199),
    [sym_conditional_and_expression] = STATE(200),
    [sym_inclusive_or_expression] = STATE(201),
    [sym_exclusive_or_expression] = STATE(202),
    [sym_and_expression] = STATE(203),
    [sym_relational_expression] = STATE(204),
    [sym_equality_expression] = STATE(205),
    [sym_shift_expression] = STATE(206),
    [sym_additive_expression] = STATE(207),
    [sym_multiplicative_expression] = STATE(208),
    [anon_sym_BANG] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(427),
    [sym_comment] = ACTIONS(42),
  },
  [346] = {
    [anon_sym_RBRACE] = ACTIONS(875),
    [anon_sym_requires] = ACTIONS(875),
    [anon_sym_exports] = ACTIONS(875),
    [anon_sym_opens] = ACTIONS(875),
    [anon_sym_uses] = ACTIONS(875),
    [anon_sym_provides] = ACTIONS(875),
    [sym_comment] = ACTIONS(42),
  },
  [347] = {
    [sym__semicolon] = ACTIONS(877),
    [anon_sym_COMMA] = ACTIONS(877),
    [anon_sym_DOT] = ACTIONS(179),
    [sym_comment] = ACTIONS(42),
  },
  [348] = {
    [sym_package_or_type_name] = STATE(361),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(42),
  },
  [349] = {
    [anon_sym_GT] = ACTIONS(879),
    [anon_sym_AMP] = ACTIONS(879),
    [anon_sym_COMMA] = ACTIONS(879),
    [sym_comment] = ACTIONS(42),
  },
  [350] = {
    [anon_sym_boolean] = ACTIONS(737),
    [anon_sym_byte] = ACTIONS(737),
    [anon_sym_short] = ACTIONS(737),
    [anon_sym_int] = ACTIONS(737),
    [anon_sym_long] = ACTIONS(737),
    [anon_sym_char] = ACTIONS(737),
    [anon_sym_float] = ACTIONS(737),
    [anon_sym_double] = ACTIONS(737),
    [anon_sym_AT] = ACTIONS(323),
    [sym_identifier] = ACTIONS(881),
    [sym_comment] = ACTIONS(42),
  },
  [351] = {
    [anon_sym_EQ] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(883),
    [sym_comment] = ACTIONS(42),
  },
  [352] = {
    [anon_sym_RPAREN] = ACTIONS(883),
    [sym_comment] = ACTIONS(42),
  },
  [353] = {
    [anon_sym_RPAREN] = ACTIONS(885),
    [sym_comment] = ACTIONS(42),
  },
  [354] = {
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_DOT] = ACTIONS(335),
    [anon_sym_boolean] = ACTIONS(729),
    [anon_sym_byte] = ACTIONS(729),
    [anon_sym_short] = ACTIONS(729),
    [anon_sym_int] = ACTIONS(729),
    [anon_sym_long] = ACTIONS(729),
    [anon_sym_char] = ACTIONS(729),
    [anon_sym_float] = ACTIONS(729),
    [anon_sym_double] = ACTIONS(729),
    [anon_sym_AT] = ACTIONS(335),
    [sym_identifier] = ACTIONS(731),
    [sym_comment] = ACTIONS(42),
  },
  [355] = {
    [anon_sym_GT] = ACTIONS(887),
    [anon_sym_COMMA] = ACTIONS(887),
    [sym_comment] = ACTIONS(42),
  },
  [356] = {
    [anon_sym_GT] = ACTIONS(889),
    [anon_sym_COMMA] = ACTIONS(889),
    [anon_sym_LBRACK] = ACTIONS(889),
    [anon_sym_AT] = ACTIONS(889),
    [sym_comment] = ACTIONS(42),
  },
  [357] = {
    [anon_sym_RBRACK] = ACTIONS(891),
    [sym_comment] = ACTIONS(42),
  },
  [358] = {
    [anon_sym_GT] = ACTIONS(893),
    [anon_sym_AMP] = ACTIONS(893),
    [anon_sym_LBRACE] = ACTIONS(893),
    [anon_sym_COMMA] = ACTIONS(893),
    [anon_sym_DOT] = ACTIONS(893),
    [anon_sym_LBRACK] = ACTIONS(893),
    [anon_sym_AT] = ACTIONS(893),
    [anon_sym_implements] = ACTIONS(893),
    [sym_comment] = ACTIONS(42),
  },
  [359] = {
    [sym__expression] = STATE(365),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(549),
    [anon_sym_TILDE] = ACTIONS(549),
    [anon_sym_PLUS_PLUS] = ACTIONS(551),
    [anon_sym_DASH_DASH] = ACTIONS(551),
    [sym_comment] = ACTIONS(42),
  },
  [360] = {
    [anon_sym_RPAREN] = ACTIONS(895),
    [anon_sym_COMMA] = ACTIONS(895),
    [sym_comment] = ACTIONS(42),
  },
  [361] = {
    [sym__semicolon] = ACTIONS(897),
    [anon_sym_COMMA] = ACTIONS(897),
    [anon_sym_DOT] = ACTIONS(179),
    [sym_comment] = ACTIONS(42),
  },
  [362] = {
    [anon_sym_boolean] = ACTIONS(837),
    [anon_sym_byte] = ACTIONS(837),
    [anon_sym_short] = ACTIONS(837),
    [anon_sym_int] = ACTIONS(837),
    [anon_sym_long] = ACTIONS(837),
    [anon_sym_char] = ACTIONS(837),
    [anon_sym_float] = ACTIONS(837),
    [anon_sym_double] = ACTIONS(837),
    [anon_sym_AT] = ACTIONS(429),
    [sym_identifier] = ACTIONS(899),
    [sym_comment] = ACTIONS(42),
  },
  [363] = {
    [anon_sym_boolean] = ACTIONS(839),
    [anon_sym_byte] = ACTIONS(839),
    [anon_sym_short] = ACTIONS(839),
    [anon_sym_int] = ACTIONS(839),
    [anon_sym_long] = ACTIONS(839),
    [anon_sym_char] = ACTIONS(839),
    [anon_sym_float] = ACTIONS(839),
    [anon_sym_double] = ACTIONS(839),
    [anon_sym_AT] = ACTIONS(431),
    [sym_identifier] = ACTIONS(901),
    [sym_comment] = ACTIONS(42),
  },
  [364] = {
    [anon_sym_GT] = ACTIONS(903),
    [anon_sym_COMMA] = ACTIONS(903),
    [anon_sym_LBRACK] = ACTIONS(903),
    [anon_sym_AT] = ACTIONS(903),
    [sym_comment] = ACTIONS(42),
  },
  [365] = {
    [anon_sym_EQ] = ACTIONS(541),
    [anon_sym_PLUS_EQ] = ACTIONS(539),
    [anon_sym_DASH_EQ] = ACTIONS(539),
    [anon_sym_STAR_EQ] = ACTIONS(539),
    [anon_sym_SLASH_EQ] = ACTIONS(539),
    [anon_sym_AMP_EQ] = ACTIONS(539),
    [anon_sym_PIPE_EQ] = ACTIONS(539),
    [anon_sym_CARET_EQ] = ACTIONS(539),
    [anon_sym_PERCENT_EQ] = ACTIONS(539),
    [anon_sym_LT_LT_EQ] = ACTIONS(539),
    [anon_sym_GT_GT_EQ] = ACTIONS(539),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(539),
    [anon_sym_GT] = ACTIONS(713),
    [anon_sym_LT] = ACTIONS(713),
    [anon_sym_EQ_EQ] = ACTIONS(715),
    [anon_sym_GT_EQ] = ACTIONS(715),
    [anon_sym_LT_EQ] = ACTIONS(715),
    [anon_sym_BANG_EQ] = ACTIONS(715),
    [anon_sym_AMP_AMP] = ACTIONS(861),
    [anon_sym_PIPE_PIPE] = ACTIONS(863),
    [anon_sym_PLUS] = ACTIONS(865),
    [anon_sym_DASH] = ACTIONS(865),
    [anon_sym_STAR] = ACTIONS(867),
    [anon_sym_SLASH] = ACTIONS(867),
    [anon_sym_AMP] = ACTIONS(717),
    [anon_sym_PIPE] = ACTIONS(869),
    [anon_sym_CARET] = ACTIONS(869),
    [anon_sym_PERCENT] = ACTIONS(867),
    [anon_sym_LT_LT] = ACTIONS(867),
    [anon_sym_GT_GT] = ACTIONS(867),
    [anon_sym_GT_GT_GT] = ACTIONS(867),
    [anon_sym_QMARK] = ACTIONS(871),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(539),
    [anon_sym_COMMA] = ACTIONS(539),
    [sym_comment] = ACTIONS(42),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [16] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(3),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_literal, 1),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifier, 1, .fragile = true),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1, .fragile = true),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1, .fragile = true),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 1),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 1),
  [116] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifier, 1, .fragile = true), REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__annotation, 1),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 1),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_statement, 1),
  [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 1),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 1),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 1),
  [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 1),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 1),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 2),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 1),
  [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unary_expression, 2),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unary_expression, 2),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_update_expression, 2),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_update_expression, 2),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_marker_annotation, 2),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 1),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 2),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 2),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
  [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 2),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 3),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 3),
  [263] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 3),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_type_import_declaration, 3),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_type_import_declaration, 3),
  [273] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_type_import_declaration, 3),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 3),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 3),
  [291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 3),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3, .fragile = true),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 3),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(135),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 1),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 2),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 4),
  [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(152),
  [351] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(153),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat1, 1),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 4),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 4),
  [361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 4),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__annotation, 1),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 1),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_member_declaration, 1),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body, 2),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body, 2),
  [393] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body, 2),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 1),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body_declaration, 1),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 1),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_superclass, 2),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_type_list, 1),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_super_interfaces, 2),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 4),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 4),
  [421] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 4),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 2),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 5),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 5),
  [443] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 5),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 3),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_requires_modifier, 1),
  [451] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_requires_modifier, 1),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 1),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_directive_repeat1, 1),
  [457] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat1, 1),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_or_type_name, 1),
  [465] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat1, 2),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_import_on_declaraction, 5),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_import_on_declaraction, 5),
  [485] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_import_on_declaraction, 5),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_marker_annotation, 2),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 2),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_paramaters, 3),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 2),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body, 3),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body, 3),
  [507] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body, 3),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 2),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
  [519] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(125),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 2),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_type_list, 2),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 5),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 5),
  [535] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 5),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 5),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 5),
  [547] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 5),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value, 1),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 1),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 1),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair, 3),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 1),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 1),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 1),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 1),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 1),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 1),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 1),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 1),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 1),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 1),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 1),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 1),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 1),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 1),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 1),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 1),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 2),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 6),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 6),
  [623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 6),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 3),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(268),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [631] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(271),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [645] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_static_import_declaration, 6),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_static_import_declaration, 6),
  [651] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_static_import_declaration, 6),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
  [655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(277),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_bound, 2),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 3),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 1),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integral_type, 1),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_type, 1),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(284),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_argument, 1),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reference_type, 1),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
  [685] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [687] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__annotation, 1),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(293),
  [691] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(180),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 3),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 6),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 6),
  [705] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 6),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 2),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 3),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 3),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 4),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 2),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_or_type_name, 3),
  [731] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_annotation, 4),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_bound, 3),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(329),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
  [753] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_marker_annotation, 2),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 3),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(333),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reference_type, 2),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims, 1),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 2),
  [771] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(338),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 4),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_type_list_repeat1, 3),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 7),
  [785] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 7),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 7),
  [791] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 7),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 3),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 3),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 3),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 3),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 3),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 3),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 3),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 3),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 3),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 3),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 3),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 3),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 3),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 3),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 3),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 5),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 3),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_element_annotation, 5),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_annotation, 5),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
  [845] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(351),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(354),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 4),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 2),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
  [857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 4),
  [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
  [863] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
  [865] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [867] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [869] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(306),
  [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
  [873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
  [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 6),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat3, 2),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_bound_repeat1, 3),
  [881] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
  [885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_arguments_repeat1, 3),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 3),
  [891] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(364),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 5),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 5),
  [897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat3, 3),
  [899] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [901] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [903] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 4),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_java() {
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
