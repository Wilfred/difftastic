#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 832
#define SYMBOL_COUNT 232
#define ALIAS_COUNT 0
#define TOKEN_COUNT 106
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
  anon_sym_if = 55,
  anon_sym_LPAREN = 56,
  anon_sym_RPAREN = 57,
  anon_sym_LBRACE = 58,
  anon_sym_RBRACE = 59,
  anon_sym_elseif = 60,
  anon_sym_else = 61,
  anon_sym_COMMA = 62,
  anon_sym_DOT = 63,
  anon_sym_LBRACK = 64,
  anon_sym_RBRACK = 65,
  anon_sym_boolean = 66,
  anon_sym_byte = 67,
  anon_sym_short = 68,
  anon_sym_int = 69,
  anon_sym_long = 70,
  anon_sym_char = 71,
  anon_sym_float = 72,
  anon_sym_double = 73,
  anon_sym_AT = 74,
  anon_sym_open = 75,
  anon_sym_module = 76,
  anon_sym_requires = 77,
  anon_sym_exports = 78,
  anon_sym_to = 79,
  anon_sym_opens = 80,
  anon_sym_uses = 81,
  anon_sym_provides = 82,
  anon_sym_with = 83,
  anon_sym_transitive = 84,
  anon_sym_static = 85,
  anon_sym_package = 86,
  anon_sym_import = 87,
  anon_sym_class = 88,
  anon_sym_public = 89,
  anon_sym_protected = 90,
  anon_sym_private = 91,
  anon_sym_abstract = 92,
  anon_sym_final = 93,
  anon_sym_strictfp = 94,
  anon_sym_default = 95,
  anon_sym_extends = 96,
  anon_sym_implements = 97,
  anon_sym_ATinterface = 98,
  anon_sym_interface = 99,
  sym_result = 100,
  anon_sym_this = 101,
  anon_sym_DOT_DOT_DOT = 102,
  anon_sym_throws = 103,
  sym_identifier = 104,
  sym_comment = 105,
  sym_program = 106,
  sym__statement = 107,
  sym__literal = 108,
  sym_integer_literal = 109,
  sym_floating_point_literal = 110,
  sym_boolean_literal = 111,
  sym_character_literal = 112,
  sym__expression = 113,
  sym_assignment_expression = 114,
  sym_binary_expression = 115,
  sym_ternary_expression = 116,
  sym_unary_expression = 117,
  sym_update_expression = 118,
  sym_statement = 119,
  sym_if_then_statement = 120,
  sym_else_if_clause = 121,
  sym_else_clause = 122,
  sym_type_arguments = 123,
  sym_type_argument = 124,
  sym_reference_type = 125,
  sym_class_or_interface_type = 126,
  sym_type_variable = 127,
  sym_dims = 128,
  sym_primitive_type = 129,
  sym_integral_type = 130,
  sym_floating_point_type = 131,
  sym__annotation = 132,
  sym_normal_annotation = 133,
  sym_marker_annotation = 134,
  sym_single_element_annotation = 135,
  sym_element_value_pair_list = 136,
  sym_element_value_pair = 137,
  sym_element_value = 138,
  sym_element_value_array_initializer = 139,
  sym_conditional_expression = 140,
  sym_conditional_or_expression = 141,
  sym_conditional_and_expression = 142,
  sym_inclusive_or_expression = 143,
  sym_exclusive_or_expression = 144,
  sym_and_expression = 145,
  sym_relational_expression = 146,
  sym_equality_expression = 147,
  sym_shift_expression = 148,
  sym_additive_expression = 149,
  sym_multiplicative_expression = 150,
  sym__declaration = 151,
  sym_module_declaration = 152,
  sym_module_identifier = 153,
  sym_module_directive = 154,
  sym_requires_modifier = 155,
  sym_module_name = 156,
  sym_package_declaration = 157,
  sym_package_or_type_name = 158,
  sym_import_statement = 159,
  sym_single_type_import_declaration = 160,
  sym_type_import_on_declaraction = 161,
  sym_single_static_import_declaration = 162,
  sym_static_import_on_demand_declaration = 163,
  sym_class_declaration = 164,
  sym_normal_class_declaration = 165,
  sym_modifier = 166,
  sym_type_parameters = 167,
  sym_type_parameter_list = 168,
  sym_type_parameter = 169,
  sym_type_bound = 170,
  sym_superclass = 171,
  sym_super_interfaces = 172,
  sym_interface_type_list = 173,
  sym_class_body = 174,
  sym_class_body_declaration = 175,
  sym_class_member_declaration = 176,
  sym_interface_declaration = 177,
  sym_annotation_type_declaration = 178,
  sym_annotation_type_body = 179,
  sym_annotation_type_member_declaration = 180,
  sym_annotation_type_element_declaration = 181,
  sym_default_value = 182,
  sym_normal_interface_declaration = 183,
  sym_extends_interfaces = 184,
  sym_interface_body = 185,
  sym_interface_member_declaration = 186,
  sym_constant_declaration = 187,
  sym_variable_declarator_list = 188,
  sym_variable_declarator = 189,
  sym_variable_declarator_id = 190,
  sym_interface_method_declaration = 191,
  sym_method_header = 192,
  sym_method_declarator = 193,
  sym_formal_parameter_list = 194,
  sym_formal_parameter = 195,
  sym_receiver_parameter = 196,
  sym_last_formal_parameter = 197,
  sym_throws = 198,
  sym_exception_type_list = 199,
  sym_exception_type = 200,
  sym_method_body = 201,
  sym_block = 202,
  sym_block_statements = 203,
  sym_block_statement = 204,
  sym_local_variable_declaration_statement = 205,
  sym_local_variable_declaration = 206,
  aux_sym_program_repeat1 = 207,
  aux_sym_character_literal_repeat1 = 208,
  aux_sym_if_then_statement_repeat1 = 209,
  aux_sym_type_arguments_repeat1 = 210,
  aux_sym_class_or_interface_type_repeat1 = 211,
  aux_sym_class_or_interface_type_repeat2 = 212,
  aux_sym_dims_repeat1 = 213,
  aux_sym_element_value_pair_list_repeat1 = 214,
  aux_sym_element_value_array_initializer_repeat1 = 215,
  aux_sym_module_declaration_repeat1 = 216,
  aux_sym_module_identifier_repeat1 = 217,
  aux_sym_module_directive_repeat1 = 218,
  aux_sym_module_directive_repeat2 = 219,
  aux_sym_module_directive_repeat3 = 220,
  aux_sym_normal_class_declaration_repeat1 = 221,
  aux_sym_type_parameter_list_repeat1 = 222,
  aux_sym_type_bound_repeat1 = 223,
  aux_sym_interface_type_list_repeat1 = 224,
  aux_sym_class_body_repeat1 = 225,
  aux_sym_annotation_type_body_repeat1 = 226,
  aux_sym_interface_body_repeat1 = 227,
  aux_sym_variable_declarator_list_repeat1 = 228,
  aux_sym_formal_parameters_repeat1 = 229,
  aux_sym_exception_type_list_repeat1 = 230,
  aux_sym_block_statements_repeat1 = 231,
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
  [anon_sym_if] = "if",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_elseif] = "else if",
  [anon_sym_else] = "else",
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
  [anon_sym_abstract] = "abstract",
  [anon_sym_final] = "final",
  [anon_sym_strictfp] = "strictfp",
  [anon_sym_default] = "default",
  [anon_sym_extends] = "extends",
  [anon_sym_implements] = "implements",
  [anon_sym_ATinterface] = "@ interface",
  [anon_sym_interface] = "interface",
  [sym_result] = "result",
  [anon_sym_this] = "this",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_throws] = "throws",
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
  [sym_statement] = "statement",
  [sym_if_then_statement] = "if_then_statement",
  [sym_else_if_clause] = "else_if_clause",
  [sym_else_clause] = "else_clause",
  [sym_type_arguments] = "type_arguments",
  [sym_type_argument] = "type_argument",
  [sym_reference_type] = "reference_type",
  [sym_class_or_interface_type] = "class_or_interface_type",
  [sym_type_variable] = "type_variable",
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
  [sym_modifier] = "modifier",
  [sym_type_parameters] = "type_parameters",
  [sym_type_parameter_list] = "type_parameter_list",
  [sym_type_parameter] = "type_parameter",
  [sym_type_bound] = "type_bound",
  [sym_superclass] = "superclass",
  [sym_super_interfaces] = "super_interfaces",
  [sym_interface_type_list] = "interface_type_list",
  [sym_class_body] = "class_body",
  [sym_class_body_declaration] = "class_body_declaration",
  [sym_class_member_declaration] = "class_member_declaration",
  [sym_interface_declaration] = "interface_declaration",
  [sym_annotation_type_declaration] = "annotation_type_declaration",
  [sym_annotation_type_body] = "annotation_type_body",
  [sym_annotation_type_member_declaration] = "annotation_type_member_declaration",
  [sym_annotation_type_element_declaration] = "annotation_type_element_declaration",
  [sym_default_value] = "default_value",
  [sym_normal_interface_declaration] = "normal_interface_declaration",
  [sym_extends_interfaces] = "extends_interfaces",
  [sym_interface_body] = "interface_body",
  [sym_interface_member_declaration] = "interface_member_declaration",
  [sym_constant_declaration] = "constant_declaration",
  [sym_variable_declarator_list] = "variable_declarator_list",
  [sym_variable_declarator] = "variable_declarator",
  [sym_variable_declarator_id] = "variable_declarator_id",
  [sym_interface_method_declaration] = "interface_method_declaration",
  [sym_method_header] = "method_header",
  [sym_method_declarator] = "method_declarator",
  [sym_formal_parameter_list] = "formal_parameter_list",
  [sym_formal_parameter] = "formal_parameter",
  [sym_receiver_parameter] = "receiver_parameter",
  [sym_last_formal_parameter] = "last_formal_parameter",
  [sym_throws] = "throws",
  [sym_exception_type_list] = "exception_type_list",
  [sym_exception_type] = "exception_type",
  [sym_method_body] = "method_body",
  [sym_block] = "block",
  [sym_block_statements] = "block_statements",
  [sym_block_statement] = "block_statement",
  [sym_local_variable_declaration_statement] = "local_variable_declaration_statement",
  [sym_local_variable_declaration] = "local_variable_declaration",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_character_literal_repeat1] = "character_literal_repeat1",
  [aux_sym_if_then_statement_repeat1] = "if_then_statement_repeat1",
  [aux_sym_type_arguments_repeat1] = "type_arguments_repeat1",
  [aux_sym_class_or_interface_type_repeat1] = "class_or_interface_type_repeat1",
  [aux_sym_class_or_interface_type_repeat2] = "class_or_interface_type_repeat2",
  [aux_sym_dims_repeat1] = "dims_repeat1",
  [aux_sym_element_value_pair_list_repeat1] = "element_value_pair_list_repeat1",
  [aux_sym_element_value_array_initializer_repeat1] = "element_value_array_initializer_repeat1",
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
  [aux_sym_annotation_type_body_repeat1] = "annotation_type_body_repeat1",
  [aux_sym_interface_body_repeat1] = "interface_body_repeat1",
  [aux_sym_variable_declarator_list_repeat1] = "variable_declarator_list_repeat1",
  [aux_sym_formal_parameters_repeat1] = "formal_parameters_repeat1",
  [aux_sym_exception_type_list_repeat1] = "exception_type_list_repeat1",
  [aux_sym_block_statements_repeat1] = "block_statements_repeat1",
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
  [anon_sym_if] = {
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
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
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
  [anon_sym_abstract] = {
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
  [anon_sym_default] = {
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
  [anon_sym_ATinterface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [sym_result] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throws] = {
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
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_then_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
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
  [sym_type_variable] = {
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
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameters] = {
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
  [sym_interface_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_type_body] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_type_member_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_type_element_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_default_value] = {
    .visible = true,
    .named = true,
  },
  [sym_normal_interface_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_extends_interfaces] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_body] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_member_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declarator_list] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declarator_id] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_method_header] = {
    .visible = true,
    .named = true,
  },
  [sym_method_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_receiver_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_last_formal_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_throws] = {
    .visible = true,
    .named = true,
  },
  [sym_exception_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_exception_type] = {
    .visible = true,
    .named = true,
  },
  [sym_method_body] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_statements] = {
    .visible = true,
    .named = true,
  },
  [sym_block_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_local_variable_declaration_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_local_variable_declaration] = {
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
  [aux_sym_if_then_statement_repeat1] = {
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
  [aux_sym_element_value_array_initializer_repeat1] = {
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
  [aux_sym_annotation_type_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_declarator_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_formal_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exception_type_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_statements_repeat1] = {
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
        ADVANCE(25);
      if (lookahead == '0')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(57);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == '<')
        ADVANCE(59);
      if (lookahead == '=')
        ADVANCE(63);
      if (lookahead == '>')
        ADVANCE(65);
      if (lookahead == '?')
        ADVANCE(71);
      if (lookahead == '@')
        ADVANCE(72);
      if (lookahead == '[')
        ADVANCE(83);
      if (lookahead == '\\')
        ADVANCE(84);
      if (lookahead == ']')
        ADVANCE(85);
      if (lookahead == '^')
        ADVANCE(86);
      if (lookahead == 'a')
        ADVANCE(88);
      if (lookahead == 'b')
        ADVANCE(96);
      if (lookahead == 'c')
        ADVANCE(106);
      if (lookahead == 'd')
        ADVANCE(114);
      if (lookahead == 'f')
        ADVANCE(126);
      if (lookahead == 'i')
        ADVANCE(139);
      if (lookahead == 'l')
        ADVANCE(148);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'p')
        ADVANCE(156);
      if (lookahead == 's')
        ADVANCE(175);
      if (lookahead == 't')
        ADVANCE(191);
      if (lookahead == 'v')
        ADVANCE(207);
      if (lookahead == '{')
        ADVANCE(211);
      if (lookahead == '|')
        ADVANCE(212);
      if (lookahead == '}')
        ADVANCE(215);
      if (lookahead == '~')
        ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
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
      if (lookahead == '.')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '.')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(26);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == '=')
        ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == '*')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '*')
        ADVANCE(27);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(32);
      if (lookahead == 'X')
        ADVANCE(37);
      if (lookahead == 'o')
        ADVANCE(32);
      if (lookahead == 'x')
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(33);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == '_')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(33);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == '_')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(48);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '_')
        ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '+')
        ADVANCE(41);
      if (lookahead == '-')
        ADVANCE(41);
      if (lookahead == '_')
        ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(39);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(43);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '_')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(40);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '_')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(39);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(39);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(49);
      if (lookahead == '_')
        ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(48);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(39);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(49);
      if (lookahead == '_')
        ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+')
        ADVANCE(41);
      if (lookahead == '-')
        ADVANCE(41);
      if (lookahead == '.')
        ADVANCE(49);
      if (lookahead == '_')
        ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(49);
      if (lookahead == '_')
        ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(52);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == '_')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(51);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+')
        ADVANCE(41);
      if (lookahead == '-')
        ADVANCE(41);
      if (lookahead == '.')
        ADVANCE(49);
      if (lookahead == '_')
        ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(48);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(49);
      if (lookahead == '_')
        ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(55);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(56);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(60);
      if (lookahead == '=')
        ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=')
        ADVANCE(68);
      if (lookahead == '>')
        ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      if (lookahead == '=')
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == ' ')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'i')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'n')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 't')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'e')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'r')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'f')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'a')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'c')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'e')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ATinterface);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SLASH);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(97);
      if (lookahead == 'y')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(107);
      if (lookahead == 'l')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(115);
      if (lookahead == 'o')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(127);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'l')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_null_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(157);
      if (lookahead == 'u')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(158);
      if (lookahead == 'o')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(176);
      if (lookahead == 't')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(181);
      if (lookahead == 'r')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_strictfp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(192);
      if (lookahead == 'o')
        ADVANCE(195);
      if (lookahead == 'r')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_to);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(197);
      if (lookahead == 'u')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_transitive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_result);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(213);
      if (lookahead == '|')
        ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 217:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(218);
      if (lookahead == '\"')
        ADVANCE(219);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(222);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(223);
      if (lookahead == '.')
        ADVANCE(224);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == '0')
        ADVANCE(233);
      if (lookahead == '@')
        ADVANCE(240);
      if (lookahead == 'a')
        ADVANCE(241);
      if (lookahead == 'c')
        ADVANCE(249);
      if (lookahead == 'd')
        ADVANCE(254);
      if (lookahead == 'e')
        ADVANCE(261);
      if (lookahead == 'f')
        ADVANCE(268);
      if (lookahead == 'i')
        ADVANCE(277);
      if (lookahead == 'm')
        ADVANCE(284);
      if (lookahead == 'n')
        ADVANCE(290);
      if (lookahead == 'o')
        ADVANCE(294);
      if (lookahead == 'p')
        ADVANCE(298);
      if (lookahead == 's')
        ADVANCE(323);
      if (lookahead == 't')
        ADVANCE(335);
      if (lookahead == '{')
        ADVANCE(211);
      if (lookahead == '}')
        ADVANCE(215);
      if (lookahead == '~')
        ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(217);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(239);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 219:
      if (lookahead == '\"')
        ADVANCE(220);
      if (lookahead == '\\')
        ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 221:
      if (lookahead == '\n')
        ADVANCE(219);
      if (lookahead != 0)
        ADVANCE(219);
      END_STATE();
    case 222:
      if (lookahead == '+')
        ADVANCE(16);
      END_STATE();
    case 223:
      if (lookahead == '-')
        ADVANCE(20);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(227);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(225);
      END_STATE();
    case 226:
      if (lookahead == '_')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(225);
      END_STATE();
    case 227:
      if (lookahead == '+')
        ADVANCE(228);
      if (lookahead == '-')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(229);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(230);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(229);
      END_STATE();
    case 230:
      if (lookahead == '_')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(229);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 232:
      if (lookahead == '*')
        ADVANCE(26);
      if (lookahead == '/')
        ADVANCE(29);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(234);
      if (lookahead == 'B')
        ADVANCE(235);
      if (lookahead == 'O')
        ADVANCE(34);
      if (lookahead == 'X')
        ADVANCE(237);
      if (lookahead == '_')
        ADVANCE(238);
      if (lookahead == 'b')
        ADVANCE(235);
      if (lookahead == 'o')
        ADVANCE(34);
      if (lookahead == 'x')
        ADVANCE(237);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(227);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(239);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(227);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(225);
      END_STATE();
    case 235:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(235);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(236);
      END_STATE();
    case 237:
      if (lookahead == '.')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(51);
      END_STATE();
    case 238:
      if (lookahead == '_')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(234);
      if (lookahead == '_')
        ADVANCE(238);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(227);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 241:
      if (lookahead == 'b')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 's')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 't')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == 'r')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 'a')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'c')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 't')
        ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 249:
      if (lookahead == 'l')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'a')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == 's')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 's')
        ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 254:
      if (lookahead == 'e')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == 'f')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'a')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 'u')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 'l')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 't')
        ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 261:
      if (lookahead == 'l')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 's')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'e')
        ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'i')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 'f')
        ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 268:
      if (lookahead == 'a')
        ADVANCE(269);
      if (lookahead == 'i')
        ADVANCE(273);
      END_STATE();
    case 269:
      if (lookahead == 'l')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 's')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'e')
        ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 273:
      if (lookahead == 'n')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == 'a')
        ADVANCE(275);
      END_STATE();
    case 275:
      if (lookahead == 'l')
        ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 277:
      if (lookahead == 'f')
        ADVANCE(278);
      if (lookahead == 'm')
        ADVANCE(279);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 279:
      if (lookahead == 'p')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == 'o')
        ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == 'r')
        ADVANCE(282);
      END_STATE();
    case 282:
      if (lookahead == 't')
        ADVANCE(283);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 284:
      if (lookahead == 'o')
        ADVANCE(285);
      END_STATE();
    case 285:
      if (lookahead == 'd')
        ADVANCE(286);
      END_STATE();
    case 286:
      if (lookahead == 'u')
        ADVANCE(287);
      END_STATE();
    case 287:
      if (lookahead == 'l')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 'e')
        ADVANCE(289);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 290:
      if (lookahead == 'u')
        ADVANCE(291);
      END_STATE();
    case 291:
      if (lookahead == 'l')
        ADVANCE(292);
      END_STATE();
    case 292:
      if (lookahead == 'l')
        ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 294:
      if (lookahead == 'p')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == 'e')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 'n')
        ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 298:
      if (lookahead == 'a')
        ADVANCE(299);
      if (lookahead == 'r')
        ADVANCE(305);
      if (lookahead == 'u')
        ADVANCE(318);
      END_STATE();
    case 299:
      if (lookahead == 'c')
        ADVANCE(300);
      END_STATE();
    case 300:
      if (lookahead == 'k')
        ADVANCE(301);
      END_STATE();
    case 301:
      if (lookahead == 'a')
        ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == 'g')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == 'e')
        ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 305:
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 'o')
        ADVANCE(311);
      END_STATE();
    case 306:
      if (lookahead == 'v')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'a')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 't')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == 'e')
        ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 311:
      if (lookahead == 't')
        ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == 'e')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 'c')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 't')
        ADVANCE(315);
      END_STATE();
    case 315:
      if (lookahead == 'e')
        ADVANCE(316);
      END_STATE();
    case 316:
      if (lookahead == 'd')
        ADVANCE(317);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 318:
      if (lookahead == 'b')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'l')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 'i')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == 'c')
        ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 323:
      if (lookahead == 't')
        ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == 'a')
        ADVANCE(325);
      if (lookahead == 'r')
        ADVANCE(329);
      END_STATE();
    case 325:
      if (lookahead == 't')
        ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 'i')
        ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'c')
        ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 329:
      if (lookahead == 'i')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 'c')
        ADVANCE(331);
      END_STATE();
    case 331:
      if (lookahead == 't')
        ADVANCE(332);
      END_STATE();
    case 332:
      if (lookahead == 'f')
        ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 'p')
        ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_strictfp);
      END_STATE();
    case 335:
      if (lookahead == 'r')
        ADVANCE(336);
      END_STATE();
    case 336:
      if (lookahead == 'u')
        ADVANCE(337);
      END_STATE();
    case 337:
      if (lookahead == 'e')
        ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(340);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == '<')
        ADVANCE(341);
      if (lookahead == '@')
        ADVANCE(240);
      if (lookahead == '}')
        ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 342:
      if (lookahead == '\n')
        SKIP(342);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(343);
      if (lookahead == '\\')
        ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(347);
      if (lookahead != 0)
        ADVANCE(347);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(26);
      if (lookahead == '/')
        ADVANCE(29);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(345);
      if (lookahead != 0)
        ADVANCE(346);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(349);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == '@')
        ADVANCE(240);
      if (lookahead == 'a')
        ADVANCE(88);
      if (lookahead == 'c')
        ADVANCE(350);
      if (lookahead == 'd')
        ADVANCE(351);
      if (lookahead == 'f')
        ADVANCE(352);
      if (lookahead == 'p')
        ADVANCE(156);
      if (lookahead == 's')
        ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == 's')
        ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 357:
      if (lookahead == '!')
        ADVANCE(358);
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
        ADVANCE(25);
      if (lookahead == ':')
        ADVANCE(57);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == '<')
        ADVANCE(59);
      if (lookahead == '=')
        ADVANCE(63);
      if (lookahead == '>')
        ADVANCE(65);
      if (lookahead == '?')
        ADVANCE(71);
      if (lookahead == '@')
        ADVANCE(240);
      if (lookahead == '[')
        ADVANCE(83);
      if (lookahead == ']')
        ADVANCE(85);
      if (lookahead == '^')
        ADVANCE(86);
      if (lookahead == 'a')
        ADVANCE(241);
      if (lookahead == 'c')
        ADVANCE(249);
      if (lookahead == 'd')
        ADVANCE(254);
      if (lookahead == 'e')
        ADVANCE(359);
      if (lookahead == 'f')
        ADVANCE(371);
      if (lookahead == 'i')
        ADVANCE(372);
      if (lookahead == 'm')
        ADVANCE(284);
      if (lookahead == 'o')
        ADVANCE(382);
      if (lookahead == 'p')
        ADVANCE(387);
      if (lookahead == 'r')
        ADVANCE(395);
      if (lookahead == 's')
        ADVANCE(323);
      if (lookahead == 't')
        ADVANCE(403);
      if (lookahead == 'u')
        ADVANCE(411);
      if (lookahead == 'v')
        ADVANCE(415);
      if (lookahead == 'w')
        ADVANCE(419);
      if (lookahead == '{')
        ADVANCE(211);
      if (lookahead == '|')
        ADVANCE(212);
      if (lookahead == '}')
        ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(357);
      END_STATE();
    case 358:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 359:
      if (lookahead == 'x')
        ADVANCE(360);
      END_STATE();
    case 360:
      if (lookahead == 'p')
        ADVANCE(361);
      if (lookahead == 't')
        ADVANCE(366);
      END_STATE();
    case 361:
      if (lookahead == 'o')
        ADVANCE(362);
      END_STATE();
    case 362:
      if (lookahead == 'r')
        ADVANCE(363);
      END_STATE();
    case 363:
      if (lookahead == 't')
        ADVANCE(364);
      END_STATE();
    case 364:
      if (lookahead == 's')
        ADVANCE(365);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_exports);
      END_STATE();
    case 366:
      if (lookahead == 'e')
        ADVANCE(367);
      END_STATE();
    case 367:
      if (lookahead == 'n')
        ADVANCE(368);
      END_STATE();
    case 368:
      if (lookahead == 'd')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead == 's')
        ADVANCE(370);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 371:
      if (lookahead == 'i')
        ADVANCE(273);
      END_STATE();
    case 372:
      if (lookahead == 'm')
        ADVANCE(373);
      END_STATE();
    case 373:
      if (lookahead == 'p')
        ADVANCE(374);
      END_STATE();
    case 374:
      if (lookahead == 'l')
        ADVANCE(375);
      END_STATE();
    case 375:
      if (lookahead == 'e')
        ADVANCE(376);
      END_STATE();
    case 376:
      if (lookahead == 'm')
        ADVANCE(377);
      END_STATE();
    case 377:
      if (lookahead == 'e')
        ADVANCE(378);
      END_STATE();
    case 378:
      if (lookahead == 'n')
        ADVANCE(379);
      END_STATE();
    case 379:
      if (lookahead == 't')
        ADVANCE(380);
      END_STATE();
    case 380:
      if (lookahead == 's')
        ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 382:
      if (lookahead == 'p')
        ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == 'e')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == 'n')
        ADVANCE(385);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_open);
      if (lookahead == 's')
        ADVANCE(386);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_opens);
      END_STATE();
    case 387:
      if (lookahead == 'a')
        ADVANCE(299);
      if (lookahead == 'r')
        ADVANCE(388);
      if (lookahead == 'u')
        ADVANCE(318);
      END_STATE();
    case 388:
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 'o')
        ADVANCE(389);
      END_STATE();
    case 389:
      if (lookahead == 't')
        ADVANCE(312);
      if (lookahead == 'v')
        ADVANCE(390);
      END_STATE();
    case 390:
      if (lookahead == 'i')
        ADVANCE(391);
      END_STATE();
    case 391:
      if (lookahead == 'd')
        ADVANCE(392);
      END_STATE();
    case 392:
      if (lookahead == 'e')
        ADVANCE(393);
      END_STATE();
    case 393:
      if (lookahead == 's')
        ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_provides);
      END_STATE();
    case 395:
      if (lookahead == 'e')
        ADVANCE(396);
      END_STATE();
    case 396:
      if (lookahead == 'q')
        ADVANCE(397);
      END_STATE();
    case 397:
      if (lookahead == 'u')
        ADVANCE(398);
      END_STATE();
    case 398:
      if (lookahead == 'i')
        ADVANCE(399);
      END_STATE();
    case 399:
      if (lookahead == 'r')
        ADVANCE(400);
      END_STATE();
    case 400:
      if (lookahead == 'e')
        ADVANCE(401);
      END_STATE();
    case 401:
      if (lookahead == 's')
        ADVANCE(402);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 403:
      if (lookahead == 'h')
        ADVANCE(404);
      END_STATE();
    case 404:
      if (lookahead == 'i')
        ADVANCE(405);
      if (lookahead == 'r')
        ADVANCE(407);
      END_STATE();
    case 405:
      if (lookahead == 's')
        ADVANCE(406);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 407:
      if (lookahead == 'o')
        ADVANCE(408);
      END_STATE();
    case 408:
      if (lookahead == 'w')
        ADVANCE(409);
      END_STATE();
    case 409:
      if (lookahead == 's')
        ADVANCE(410);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_throws);
      END_STATE();
    case 411:
      if (lookahead == 's')
        ADVANCE(412);
      END_STATE();
    case 412:
      if (lookahead == 'e')
        ADVANCE(413);
      END_STATE();
    case 413:
      if (lookahead == 's')
        ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 415:
      if (lookahead == 'o')
        ADVANCE(416);
      END_STATE();
    case 416:
      if (lookahead == 'i')
        ADVANCE(417);
      END_STATE();
    case 417:
      if (lookahead == 'd')
        ADVANCE(418);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_result);
      END_STATE();
    case 419:
      if (lookahead == 'i')
        ADVANCE(420);
      END_STATE();
    case 420:
      if (lookahead == 't')
        ADVANCE(421);
      END_STATE();
    case 421:
      if (lookahead == 'h')
        ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\"')
        ADVANCE(219);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(224);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == '0')
        ADVANCE(424);
      if (lookahead == 'f')
        ADVANCE(431);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 't')
        ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(423);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(234);
      if (lookahead == 'B')
        ADVANCE(425);
      if (lookahead == 'O')
        ADVANCE(32);
      if (lookahead == 'X')
        ADVANCE(37);
      if (lookahead == '_')
        ADVANCE(238);
      if (lookahead == 'b')
        ADVANCE(425);
      if (lookahead == 'o')
        ADVANCE(32);
      if (lookahead == 'x')
        ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(427);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(426);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(235);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(426);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+')
        ADVANCE(228);
      if (lookahead == '-')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(230);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(234);
      if (lookahead == '_')
        ADVANCE(238);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(427);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 434:
      if (lookahead == '&')
        ADVANCE(435);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == '>')
        ADVANCE(436);
      if (lookahead == '@')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(241);
      if (lookahead == 'c')
        ADVANCE(249);
      if (lookahead == 'd')
        ADVANCE(254);
      if (lookahead == 'e')
        ADVANCE(437);
      if (lookahead == 'f')
        ADVANCE(371);
      if (lookahead == 'i')
        ADVANCE(439);
      if (lookahead == 'p')
        ADVANCE(448);
      if (lookahead == 's')
        ADVANCE(323);
      if (lookahead == '{')
        ADVANCE(211);
      if (lookahead == '}')
        ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 437:
      if (lookahead == 'x')
        ADVANCE(438);
      END_STATE();
    case 438:
      if (lookahead == 't')
        ADVANCE(366);
      END_STATE();
    case 439:
      if (lookahead == 'n')
        ADVANCE(440);
      END_STATE();
    case 440:
      if (lookahead == 't')
        ADVANCE(441);
      END_STATE();
    case 441:
      if (lookahead == 'e')
        ADVANCE(442);
      END_STATE();
    case 442:
      if (lookahead == 'r')
        ADVANCE(443);
      END_STATE();
    case 443:
      if (lookahead == 'f')
        ADVANCE(444);
      END_STATE();
    case 444:
      if (lookahead == 'a')
        ADVANCE(445);
      END_STATE();
    case 445:
      if (lookahead == 'c')
        ADVANCE(446);
      END_STATE();
    case 446:
      if (lookahead == 'e')
        ADVANCE(447);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 448:
      if (lookahead == 'r')
        ADVANCE(305);
      if (lookahead == 'u')
        ADVANCE(318);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == 's')
        ADVANCE(355);
      if (lookahead == 't')
        ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == '@')
        ADVANCE(240);
      if (lookahead == '[')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(349);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == '@')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(88);
      if (lookahead == 'c')
        ADVANCE(350);
      if (lookahead == 'd')
        ADVANCE(351);
      if (lookahead == 'f')
        ADVANCE(352);
      if (lookahead == 'i')
        ADVANCE(454);
      if (lookahead == 'p')
        ADVANCE(156);
      if (lookahead == 's')
        ADVANCE(353);
      if (lookahead == '}')
        ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == '@')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(88);
      if (lookahead == 'c')
        ADVANCE(350);
      if (lookahead == 'd')
        ADVANCE(351);
      if (lookahead == 'f')
        ADVANCE(352);
      if (lookahead == 'i')
        ADVANCE(454);
      if (lookahead == 'p')
        ADVANCE(156);
      if (lookahead == 's')
        ADVANCE(353);
      if (lookahead == '{')
        ADVANCE(211);
      if (lookahead == '}')
        ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 458:
      if (lookahead == '&')
        ADVANCE(435);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(349);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == '<')
        ADVANCE(341);
      if (lookahead == '=')
        ADVANCE(459);
      if (lookahead == '>')
        ADVANCE(436);
      if (lookahead == '@')
        ADVANCE(240);
      if (lookahead == '[')
        ADVANCE(83);
      if (lookahead == 'd')
        ADVANCE(254);
      if (lookahead == 'i')
        ADVANCE(372);
      if (lookahead == 't')
        ADVANCE(460);
      if (lookahead == '{')
        ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 460:
      if (lookahead == 'h')
        ADVANCE(461);
      END_STATE();
    case 461:
      if (lookahead == 'r')
        ADVANCE(407);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(349);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == 't')
        ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == '<')
        ADVANCE(341);
      if (lookahead == '@')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(88);
      if (lookahead == 'c')
        ADVANCE(350);
      if (lookahead == 'd')
        ADVANCE(351);
      if (lookahead == 'f')
        ADVANCE(352);
      if (lookahead == 'i')
        ADVANCE(454);
      if (lookahead == 'p')
        ADVANCE(156);
      if (lookahead == 's')
        ADVANCE(353);
      if (lookahead == 'v')
        ADVANCE(207);
      if (lookahead == '{')
        ADVANCE(211);
      if (lookahead == '}')
        ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(349);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == '@')
        ADVANCE(240);
      if (lookahead == 'b')
        ADVANCE(96);
      if (lookahead == 'c')
        ADVANCE(466);
      if (lookahead == 'd')
        ADVANCE(467);
      if (lookahead == 'f')
        ADVANCE(468);
      if (lookahead == 'i')
        ADVANCE(469);
      if (lookahead == 'l')
        ADVANCE(148);
      if (lookahead == 's')
        ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 473:
      if (lookahead == '!')
        ADVANCE(358);
      if (lookahead == '%')
        ADVANCE(474);
      if (lookahead == '&')
        ADVANCE(475);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(340);
      if (lookahead == '+')
        ADVANCE(476);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(477);
      if (lookahead == '/')
        ADVANCE(478);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == '<')
        ADVANCE(479);
      if (lookahead == '=')
        ADVANCE(481);
      if (lookahead == '>')
        ADVANCE(482);
      if (lookahead == '?')
        ADVANCE(71);
      if (lookahead == '^')
        ADVANCE(485);
      if (lookahead == '|')
        ADVANCE(486);
      if (lookahead == '}')
        ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 475:
      if (lookahead == '&')
        ADVANCE(8);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(26);
      if (lookahead == '/')
        ADVANCE(29);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(480);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 481:
      if (lookahead == '=')
        ADVANCE(64);
      END_STATE();
    case 482:
      if (lookahead == '>')
        ADVANCE(483);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>')
        ADVANCE(484);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(214);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(349);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == '<')
        ADVANCE(341);
      if (lookahead == '@')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(88);
      if (lookahead == 'c')
        ADVANCE(350);
      if (lookahead == 'd')
        ADVANCE(351);
      if (lookahead == 'f')
        ADVANCE(352);
      if (lookahead == 'i')
        ADVANCE(454);
      if (lookahead == 'p')
        ADVANCE(156);
      if (lookahead == 's')
        ADVANCE(353);
      if (lookahead == 'v')
        ADVANCE(207);
      if (lookahead == '}')
        ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == '@')
        ADVANCE(240);
      if (lookahead == 'a')
        ADVANCE(88);
      if (lookahead == 'd')
        ADVANCE(351);
      if (lookahead == 'f')
        ADVANCE(352);
      if (lookahead == 'p')
        ADVANCE(156);
      if (lookahead == 's')
        ADVANCE(353);
      if (lookahead == 't')
        ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == '@')
        ADVANCE(240);
      if (lookahead == 'a')
        ADVANCE(88);
      if (lookahead == 'd')
        ADVANCE(351);
      if (lookahead == 'f')
        ADVANCE(352);
      if (lookahead == 'p')
        ADVANCE(156);
      if (lookahead == 's')
        ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == '@')
        ADVANCE(240);
      if (lookahead == 't')
        ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 217},
  [2] = {.lex_state = 339},
  [3] = {.lex_state = 339},
  [4] = {.lex_state = 339},
  [5] = {.lex_state = 342},
  [6] = {.lex_state = 339},
  [7] = {.lex_state = 217},
  [8] = {.lex_state = 217},
  [9] = {.lex_state = 339},
  [10] = {.lex_state = 217},
  [11] = {.lex_state = 339},
  [12] = {.lex_state = 348},
  [13] = {.lex_state = 339},
  [14] = {.lex_state = 354},
  [15] = {.lex_state = 339},
  [16] = {.lex_state = 217},
  [17] = {.lex_state = 217},
  [18] = {.lex_state = 339},
  [19] = {.lex_state = 357},
  [20] = {.lex_state = 357},
  [21] = {.lex_state = 357},
  [22] = {.lex_state = 217},
  [23] = {.lex_state = 357},
  [24] = {.lex_state = 217},
  [25] = {.lex_state = 217},
  [26] = {.lex_state = 217},
  [27] = {.lex_state = 217},
  [28] = {.lex_state = 217},
  [29] = {.lex_state = 217},
  [30] = {.lex_state = 217},
  [31] = {.lex_state = 217},
  [32] = {.lex_state = 339},
  [33] = {.lex_state = 342},
  [34] = {.lex_state = 342},
  [35] = {.lex_state = 357},
  [36] = {.lex_state = 357},
  [37] = {.lex_state = 357},
  [38] = {.lex_state = 357},
  [39] = {.lex_state = 339},
  [40] = {.lex_state = 357},
  [41] = {.lex_state = 217},
  [42] = {.lex_state = 339},
  [43] = {.lex_state = 339},
  [44] = {.lex_state = 339},
  [45] = {.lex_state = 357},
  [46] = {.lex_state = 217},
  [47] = {.lex_state = 217},
  [48] = {.lex_state = 217},
  [49] = {.lex_state = 217},
  [50] = {.lex_state = 217},
  [51] = {.lex_state = 217},
  [52] = {.lex_state = 217},
  [53] = {.lex_state = 217},
  [54] = {.lex_state = 357},
  [55] = {.lex_state = 217},
  [56] = {.lex_state = 217},
  [57] = {.lex_state = 339},
  [58] = {.lex_state = 357},
  [59] = {.lex_state = 339},
  [60] = {.lex_state = 217},
  [61] = {.lex_state = 339},
  [62] = {.lex_state = 342},
  [63] = {.lex_state = 423},
  [64] = {.lex_state = 339},
  [65] = {.lex_state = 217},
  [66] = {.lex_state = 339},
  [67] = {.lex_state = 357},
  [68] = {.lex_state = 357},
  [69] = {.lex_state = 217},
  [70] = {.lex_state = 339},
  [71] = {.lex_state = 339},
  [72] = {.lex_state = 217},
  [73] = {.lex_state = 339},
  [74] = {.lex_state = 339},
  [75] = {.lex_state = 434},
  [76] = {.lex_state = 339},
  [77] = {.lex_state = 339},
  [78] = {.lex_state = 357},
  [79] = {.lex_state = 357},
  [80] = {.lex_state = 217},
  [81] = {.lex_state = 217},
  [82] = {.lex_state = 357},
  [83] = {.lex_state = 357},
  [84] = {.lex_state = 357},
  [85] = {.lex_state = 357},
  [86] = {.lex_state = 357},
  [87] = {.lex_state = 357},
  [88] = {.lex_state = 217},
  [89] = {.lex_state = 217},
  [90] = {.lex_state = 357},
  [91] = {.lex_state = 339},
  [92] = {.lex_state = 339},
  [93] = {.lex_state = 357},
  [94] = {.lex_state = 357},
  [95] = {.lex_state = 357},
  [96] = {.lex_state = 217},
  [97] = {.lex_state = 217},
  [98] = {.lex_state = 217},
  [99] = {.lex_state = 357},
  [100] = {.lex_state = 357},
  [101] = {.lex_state = 357},
  [102] = {.lex_state = 339},
  [103] = {.lex_state = 217},
  [104] = {.lex_state = 449},
  [105] = {.lex_state = 339},
  [106] = {.lex_state = 339},
  [107] = {.lex_state = 339},
  [108] = {.lex_state = 357},
  [109] = {.lex_state = 357},
  [110] = {.lex_state = 217},
  [111] = {.lex_state = 339},
  [112] = {.lex_state = 339},
  [113] = {.lex_state = 339},
  [114] = {.lex_state = 434},
  [115] = {.lex_state = 452},
  [116] = {.lex_state = 339},
  [117] = {.lex_state = 434},
  [118] = {.lex_state = 434},
  [119] = {.lex_state = 339},
  [120] = {.lex_state = 434},
  [121] = {.lex_state = 217},
  [122] = {.lex_state = 217},
  [123] = {.lex_state = 339},
  [124] = {.lex_state = 453},
  [125] = {.lex_state = 339},
  [126] = {.lex_state = 339},
  [127] = {.lex_state = 339},
  [128] = {.lex_state = 453},
  [129] = {.lex_state = 457},
  [130] = {.lex_state = 453},
  [131] = {.lex_state = 434},
  [132] = {.lex_state = 434},
  [133] = {.lex_state = 457},
  [134] = {.lex_state = 434},
  [135] = {.lex_state = 434},
  [136] = {.lex_state = 458},
  [137] = {.lex_state = 357},
  [138] = {.lex_state = 339},
  [139] = {.lex_state = 217},
  [140] = {.lex_state = 217},
  [141] = {.lex_state = 357},
  [142] = {.lex_state = 217},
  [143] = {.lex_state = 217},
  [144] = {.lex_state = 217},
  [145] = {.lex_state = 217},
  [146] = {.lex_state = 217},
  [147] = {.lex_state = 217},
  [148] = {.lex_state = 217},
  [149] = {.lex_state = 217},
  [150] = {.lex_state = 217},
  [151] = {.lex_state = 217},
  [152] = {.lex_state = 217},
  [153] = {.lex_state = 339},
  [154] = {.lex_state = 357},
  [155] = {.lex_state = 217},
  [156] = {.lex_state = 357},
  [157] = {.lex_state = 357},
  [158] = {.lex_state = 339},
  [159] = {.lex_state = 217},
  [160] = {.lex_state = 217},
  [161] = {.lex_state = 357},
  [162] = {.lex_state = 357},
  [163] = {.lex_state = 449},
  [164] = {.lex_state = 339},
  [165] = {.lex_state = 449},
  [166] = {.lex_state = 339},
  [167] = {.lex_state = 449},
  [168] = {.lex_state = 462},
  [169] = {.lex_state = 462},
  [170] = {.lex_state = 339},
  [171] = {.lex_state = 357},
  [172] = {.lex_state = 357},
  [173] = {.lex_state = 339},
  [174] = {.lex_state = 339},
  [175] = {.lex_state = 217},
  [176] = {.lex_state = 339},
  [177] = {.lex_state = 339},
  [178] = {.lex_state = 339},
  [179] = {.lex_state = 434},
  [180] = {.lex_state = 357},
  [181] = {.lex_state = 339},
  [182] = {.lex_state = 434},
  [183] = {.lex_state = 434},
  [184] = {.lex_state = 339},
  [185] = {.lex_state = 339},
  [186] = {.lex_state = 464},
  [187] = {.lex_state = 339},
  [188] = {.lex_state = 217},
  [189] = {.lex_state = 217},
  [190] = {.lex_state = 348},
  [191] = {.lex_state = 348},
  [192] = {.lex_state = 217},
  [193] = {.lex_state = 217},
  [194] = {.lex_state = 339},
  [195] = {.lex_state = 453},
  [196] = {.lex_state = 453},
  [197] = {.lex_state = 357},
  [198] = {.lex_state = 217},
  [199] = {.lex_state = 357},
  [200] = {.lex_state = 339},
  [201] = {.lex_state = 339},
  [202] = {.lex_state = 339},
  [203] = {.lex_state = 453},
  [204] = {.lex_state = 217},
  [205] = {.lex_state = 434},
  [206] = {.lex_state = 465},
  [207] = {.lex_state = 339},
  [208] = {.lex_state = 458},
  [209] = {.lex_state = 458},
  [210] = {.lex_state = 458},
  [211] = {.lex_state = 339},
  [212] = {.lex_state = 217},
  [213] = {.lex_state = 217},
  [214] = {.lex_state = 217},
  [215] = {.lex_state = 357},
  [216] = {.lex_state = 357},
  [217] = {.lex_state = 357},
  [218] = {.lex_state = 357},
  [219] = {.lex_state = 357},
  [220] = {.lex_state = 357},
  [221] = {.lex_state = 357},
  [222] = {.lex_state = 357},
  [223] = {.lex_state = 217},
  [224] = {.lex_state = 357},
  [225] = {.lex_state = 217},
  [226] = {.lex_state = 217},
  [227] = {.lex_state = 339},
  [228] = {.lex_state = 473},
  [229] = {.lex_state = 217},
  [230] = {.lex_state = 357},
  [231] = {.lex_state = 357},
  [232] = {.lex_state = 357},
  [233] = {.lex_state = 357},
  [234] = {.lex_state = 357},
  [235] = {.lex_state = 357},
  [236] = {.lex_state = 357},
  [237] = {.lex_state = 357},
  [238] = {.lex_state = 473},
  [239] = {.lex_state = 473},
  [240] = {.lex_state = 357},
  [241] = {.lex_state = 217},
  [242] = {.lex_state = 339},
  [243] = {.lex_state = 217},
  [244] = {.lex_state = 357},
  [245] = {.lex_state = 339},
  [246] = {.lex_state = 449},
  [247] = {.lex_state = 339},
  [248] = {.lex_state = 339},
  [249] = {.lex_state = 339},
  [250] = {.lex_state = 339},
  [251] = {.lex_state = 339},
  [252] = {.lex_state = 339},
  [253] = {.lex_state = 339},
  [254] = {.lex_state = 217},
  [255] = {.lex_state = 217},
  [256] = {.lex_state = 423},
  [257] = {.lex_state = 339},
  [258] = {.lex_state = 434},
  [259] = {.lex_state = 434},
  [260] = {.lex_state = 339},
  [261] = {.lex_state = 434},
  [262] = {.lex_state = 217},
  [263] = {.lex_state = 348},
  [264] = {.lex_state = 348},
  [265] = {.lex_state = 357},
  [266] = {.lex_state = 339},
  [267] = {.lex_state = 339},
  [268] = {.lex_state = 357},
  [269] = {.lex_state = 464},
  [270] = {.lex_state = 217},
  [271] = {.lex_state = 217},
  [272] = {.lex_state = 217},
  [273] = {.lex_state = 423},
  [274] = {.lex_state = 339},
  [275] = {.lex_state = 434},
  [276] = {.lex_state = 357},
  [277] = {.lex_state = 357},
  [278] = {.lex_state = 217},
  [279] = {.lex_state = 457},
  [280] = {.lex_state = 453},
  [281] = {.lex_state = 457},
  [282] = {.lex_state = 487},
  [283] = {.lex_state = 339},
  [284] = {.lex_state = 357},
  [285] = {.lex_state = 217},
  [286] = {.lex_state = 457},
  [287] = {.lex_state = 357},
  [288] = {.lex_state = 217},
  [289] = {.lex_state = 357},
  [290] = {.lex_state = 357},
  [291] = {.lex_state = 357},
  [292] = {.lex_state = 357},
  [293] = {.lex_state = 339},
  [294] = {.lex_state = 434},
  [295] = {.lex_state = 434},
  [296] = {.lex_state = 458},
  [297] = {.lex_state = 357},
  [298] = {.lex_state = 465},
  [299] = {.lex_state = 465},
  [300] = {.lex_state = 465},
  [301] = {.lex_state = 458},
  [302] = {.lex_state = 339},
  [303] = {.lex_state = 458},
  [304] = {.lex_state = 339},
  [305] = {.lex_state = 458},
  [306] = {.lex_state = 217},
  [307] = {.lex_state = 339},
  [308] = {.lex_state = 217},
  [309] = {.lex_state = 217},
  [310] = {.lex_state = 357},
  [311] = {.lex_state = 217},
  [312] = {.lex_state = 217},
  [313] = {.lex_state = 217},
  [314] = {.lex_state = 357},
  [315] = {.lex_state = 217},
  [316] = {.lex_state = 339},
  [317] = {.lex_state = 217},
  [318] = {.lex_state = 217},
  [319] = {.lex_state = 357},
  [320] = {.lex_state = 357},
  [321] = {.lex_state = 357},
  [322] = {.lex_state = 357},
  [323] = {.lex_state = 357},
  [324] = {.lex_state = 357},
  [325] = {.lex_state = 357},
  [326] = {.lex_state = 473},
  [327] = {.lex_state = 473},
  [328] = {.lex_state = 217},
  [329] = {.lex_state = 217},
  [330] = {.lex_state = 217},
  [331] = {.lex_state = 217},
  [332] = {.lex_state = 217},
  [333] = {.lex_state = 217},
  [334] = {.lex_state = 217},
  [335] = {.lex_state = 217},
  [336] = {.lex_state = 217},
  [337] = {.lex_state = 217},
  [338] = {.lex_state = 217},
  [339] = {.lex_state = 339},
  [340] = {.lex_state = 357},
  [341] = {.lex_state = 339},
  [342] = {.lex_state = 462},
  [343] = {.lex_state = 339},
  [344] = {.lex_state = 339},
  [345] = {.lex_state = 339},
  [346] = {.lex_state = 339},
  [347] = {.lex_state = 339},
  [348] = {.lex_state = 357},
  [349] = {.lex_state = 217},
  [350] = {.lex_state = 217},
  [351] = {.lex_state = 339},
  [352] = {.lex_state = 339},
  [353] = {.lex_state = 434},
  [354] = {.lex_state = 434},
  [355] = {.lex_state = 217},
  [356] = {.lex_state = 217},
  [357] = {.lex_state = 357},
  [358] = {.lex_state = 423},
  [359] = {.lex_state = 339},
  [360] = {.lex_state = 357},
  [361] = {.lex_state = 357},
  [362] = {.lex_state = 357},
  [363] = {.lex_state = 458},
  [364] = {.lex_state = 339},
  [365] = {.lex_state = 339},
  [366] = {.lex_state = 339},
  [367] = {.lex_state = 217},
  [368] = {.lex_state = 453},
  [369] = {.lex_state = 357},
  [370] = {.lex_state = 217},
  [371] = {.lex_state = 217},
  [372] = {.lex_state = 453},
  [373] = {.lex_state = 457},
  [374] = {.lex_state = 434},
  [375] = {.lex_state = 357},
  [376] = {.lex_state = 217},
  [377] = {.lex_state = 457},
  [378] = {.lex_state = 457},
  [379] = {.lex_state = 357},
  [380] = {.lex_state = 453},
  [381] = {.lex_state = 453},
  [382] = {.lex_state = 339},
  [383] = {.lex_state = 453},
  [384] = {.lex_state = 453},
  [385] = {.lex_state = 487},
  [386] = {.lex_state = 457},
  [387] = {.lex_state = 339},
  [388] = {.lex_state = 487},
  [389] = {.lex_state = 339},
  [390] = {.lex_state = 339},
  [391] = {.lex_state = 339},
  [392] = {.lex_state = 339},
  [393] = {.lex_state = 487},
  [394] = {.lex_state = 487},
  [395] = {.lex_state = 487},
  [396] = {.lex_state = 357},
  [397] = {.lex_state = 487},
  [398] = {.lex_state = 487},
  [399] = {.lex_state = 339},
  [400] = {.lex_state = 357},
  [401] = {.lex_state = 487},
  [402] = {.lex_state = 487},
  [403] = {.lex_state = 217},
  [404] = {.lex_state = 217},
  [405] = {.lex_state = 457},
  [406] = {.lex_state = 357},
  [407] = {.lex_state = 457},
  [408] = {.lex_state = 357},
  [409] = {.lex_state = 465},
  [410] = {.lex_state = 465},
  [411] = {.lex_state = 458},
  [412] = {.lex_state = 465},
  [413] = {.lex_state = 434},
  [414] = {.lex_state = 434},
  [415] = {.lex_state = 357},
  [416] = {.lex_state = 465},
  [417] = {.lex_state = 458},
  [418] = {.lex_state = 458},
  [419] = {.lex_state = 339},
  [420] = {.lex_state = 458},
  [421] = {.lex_state = 217},
  [422] = {.lex_state = 357},
  [423] = {.lex_state = 217},
  [424] = {.lex_state = 217},
  [425] = {.lex_state = 217},
  [426] = {.lex_state = 217},
  [427] = {.lex_state = 217},
  [428] = {.lex_state = 217},
  [429] = {.lex_state = 217},
  [430] = {.lex_state = 217},
  [431] = {.lex_state = 217},
  [432] = {.lex_state = 217},
  [433] = {.lex_state = 217},
  [434] = {.lex_state = 357},
  [435] = {.lex_state = 339},
  [436] = {.lex_state = 217},
  [437] = {.lex_state = 217},
  [438] = {.lex_state = 217},
  [439] = {.lex_state = 217},
  [440] = {.lex_state = 217},
  [441] = {.lex_state = 217},
  [442] = {.lex_state = 217},
  [443] = {.lex_state = 217},
  [444] = {.lex_state = 217},
  [445] = {.lex_state = 217},
  [446] = {.lex_state = 217},
  [447] = {.lex_state = 217},
  [448] = {.lex_state = 357},
  [449] = {.lex_state = 357},
  [450] = {.lex_state = 357},
  [451] = {.lex_state = 357},
  [452] = {.lex_state = 357},
  [453] = {.lex_state = 357},
  [454] = {.lex_state = 357},
  [455] = {.lex_state = 473},
  [456] = {.lex_state = 473},
  [457] = {.lex_state = 473},
  [458] = {.lex_state = 357},
  [459] = {.lex_state = 339},
  [460] = {.lex_state = 339},
  [461] = {.lex_state = 339},
  [462] = {.lex_state = 339},
  [463] = {.lex_state = 339},
  [464] = {.lex_state = 339},
  [465] = {.lex_state = 434},
  [466] = {.lex_state = 339},
  [467] = {.lex_state = 217},
  [468] = {.lex_state = 217},
  [469] = {.lex_state = 217},
  [470] = {.lex_state = 217},
  [471] = {.lex_state = 217},
  [472] = {.lex_state = 217},
  [473] = {.lex_state = 217},
  [474] = {.lex_state = 217},
  [475] = {.lex_state = 348},
  [476] = {.lex_state = 357},
  [477] = {.lex_state = 217},
  [478] = {.lex_state = 217},
  [479] = {.lex_state = 348},
  [480] = {.lex_state = 458},
  [481] = {.lex_state = 357},
  [482] = {.lex_state = 357},
  [483] = {.lex_state = 339},
  [484] = {.lex_state = 339},
  [485] = {.lex_state = 453},
  [486] = {.lex_state = 453},
  [487] = {.lex_state = 457},
  [488] = {.lex_state = 217},
  [489] = {.lex_state = 457},
  [490] = {.lex_state = 217},
  [491] = {.lex_state = 453},
  [492] = {.lex_state = 357},
  [493] = {.lex_state = 339},
  [494] = {.lex_state = 457},
  [495] = {.lex_state = 453},
  [496] = {.lex_state = 487},
  [497] = {.lex_state = 487},
  [498] = {.lex_state = 357},
  [499] = {.lex_state = 217},
  [500] = {.lex_state = 357},
  [501] = {.lex_state = 339},
  [502] = {.lex_state = 357},
  [503] = {.lex_state = 339},
  [504] = {.lex_state = 357},
  [505] = {.lex_state = 357},
  [506] = {.lex_state = 487},
  [507] = {.lex_state = 487},
  [508] = {.lex_state = 487},
  [509] = {.lex_state = 339},
  [510] = {.lex_state = 339},
  [511] = {.lex_state = 339},
  [512] = {.lex_state = 487},
  [513] = {.lex_state = 339},
  [514] = {.lex_state = 357},
  [515] = {.lex_state = 457},
  [516] = {.lex_state = 487},
  [517] = {.lex_state = 457},
  [518] = {.lex_state = 357},
  [519] = {.lex_state = 217},
  [520] = {.lex_state = 423},
  [521] = {.lex_state = 339},
  [522] = {.lex_state = 434},
  [523] = {.lex_state = 458},
  [524] = {.lex_state = 465},
  [525] = {.lex_state = 458},
  [526] = {.lex_state = 458},
  [527] = {.lex_state = 357},
  [528] = {.lex_state = 357},
  [529] = {.lex_state = 357},
  [530] = {.lex_state = 357},
  [531] = {.lex_state = 357},
  [532] = {.lex_state = 357},
  [533] = {.lex_state = 217},
  [534] = {.lex_state = 217},
  [535] = {.lex_state = 217},
  [536] = {.lex_state = 217},
  [537] = {.lex_state = 217},
  [538] = {.lex_state = 217},
  [539] = {.lex_state = 217},
  [540] = {.lex_state = 339},
  [541] = {.lex_state = 217},
  [542] = {.lex_state = 217},
  [543] = {.lex_state = 357},
  [544] = {.lex_state = 357},
  [545] = {.lex_state = 357},
  [546] = {.lex_state = 357},
  [547] = {.lex_state = 357},
  [548] = {.lex_state = 357},
  [549] = {.lex_state = 473},
  [550] = {.lex_state = 473},
  [551] = {.lex_state = 217},
  [552] = {.lex_state = 357},
  [553] = {.lex_state = 339},
  [554] = {.lex_state = 339},
  [555] = {.lex_state = 434},
  [556] = {.lex_state = 357},
  [557] = {.lex_state = 357},
  [558] = {.lex_state = 357},
  [559] = {.lex_state = 357},
  [560] = {.lex_state = 357},
  [561] = {.lex_state = 357},
  [562] = {.lex_state = 217},
  [563] = {.lex_state = 339},
  [564] = {.lex_state = 217},
  [565] = {.lex_state = 217},
  [566] = {.lex_state = 217},
  [567] = {.lex_state = 348},
  [568] = {.lex_state = 348},
  [569] = {.lex_state = 458},
  [570] = {.lex_state = 357},
  [571] = {.lex_state = 339},
  [572] = {.lex_state = 457},
  [573] = {.lex_state = 357},
  [574] = {.lex_state = 217},
  [575] = {.lex_state = 453},
  [576] = {.lex_state = 423},
  [577] = {.lex_state = 339},
  [578] = {.lex_state = 434},
  [579] = {.lex_state = 357},
  [580] = {.lex_state = 357},
  [581] = {.lex_state = 217},
  [582] = {.lex_state = 487},
  [583] = {.lex_state = 453},
  [584] = {.lex_state = 487},
  [585] = {.lex_state = 487},
  [586] = {.lex_state = 357},
  [587] = {.lex_state = 217},
  [588] = {.lex_state = 487},
  [589] = {.lex_state = 488},
  [590] = {.lex_state = 339},
  [591] = {.lex_state = 357},
  [592] = {.lex_state = 357},
  [593] = {.lex_state = 339},
  [594] = {.lex_state = 357},
  [595] = {.lex_state = 217},
  [596] = {.lex_state = 357},
  [597] = {.lex_state = 487},
  [598] = {.lex_state = 487},
  [599] = {.lex_state = 217},
  [600] = {.lex_state = 457},
  [601] = {.lex_state = 465},
  [602] = {.lex_state = 357},
  [603] = {.lex_state = 217},
  [604] = {.lex_state = 217},
  [605] = {.lex_state = 465},
  [606] = {.lex_state = 434},
  [607] = {.lex_state = 458},
  [608] = {.lex_state = 217},
  [609] = {.lex_state = 357},
  [610] = {.lex_state = 357},
  [611] = {.lex_state = 357},
  [612] = {.lex_state = 357},
  [613] = {.lex_state = 357},
  [614] = {.lex_state = 357},
  [615] = {.lex_state = 339},
  [616] = {.lex_state = 217},
  [617] = {.lex_state = 217},
  [618] = {.lex_state = 339},
  [619] = {.lex_state = 339},
  [620] = {.lex_state = 217},
  [621] = {.lex_state = 217},
  [622] = {.lex_state = 217},
  [623] = {.lex_state = 217},
  [624] = {.lex_state = 217},
  [625] = {.lex_state = 458},
  [626] = {.lex_state = 453},
  [627] = {.lex_state = 217},
  [628] = {.lex_state = 348},
  [629] = {.lex_state = 339},
  [630] = {.lex_state = 357},
  [631] = {.lex_state = 487},
  [632] = {.lex_state = 357},
  [633] = {.lex_state = 217},
  [634] = {.lex_state = 217},
  [635] = {.lex_state = 487},
  [636] = {.lex_state = 487},
  [637] = {.lex_state = 434},
  [638] = {.lex_state = 357},
  [639] = {.lex_state = 217},
  [640] = {.lex_state = 487},
  [641] = {.lex_state = 487},
  [642] = {.lex_state = 453},
  [643] = {.lex_state = 487},
  [644] = {.lex_state = 487},
  [645] = {.lex_state = 217},
  [646] = {.lex_state = 487},
  [647] = {.lex_state = 357},
  [648] = {.lex_state = 339},
  [649] = {.lex_state = 490},
  [650] = {.lex_state = 217},
  [651] = {.lex_state = 339},
  [652] = {.lex_state = 357},
  [653] = {.lex_state = 488},
  [654] = {.lex_state = 488},
  [655] = {.lex_state = 490},
  [656] = {.lex_state = 217},
  [657] = {.lex_state = 217},
  [658] = {.lex_state = 217},
  [659] = {.lex_state = 217},
  [660] = {.lex_state = 217},
  [661] = {.lex_state = 491},
  [662] = {.lex_state = 490},
  [663] = {.lex_state = 339},
  [664] = {.lex_state = 339},
  [665] = {.lex_state = 357},
  [666] = {.lex_state = 357},
  [667] = {.lex_state = 339},
  [668] = {.lex_state = 357},
  [669] = {.lex_state = 357},
  [670] = {.lex_state = 357},
  [671] = {.lex_state = 487},
  [672] = {.lex_state = 357},
  [673] = {.lex_state = 457},
  [674] = {.lex_state = 465},
  [675] = {.lex_state = 465},
  [676] = {.lex_state = 357},
  [677] = {.lex_state = 217},
  [678] = {.lex_state = 357},
  [679] = {.lex_state = 357},
  [680] = {.lex_state = 217},
  [681] = {.lex_state = 217},
  [682] = {.lex_state = 339},
  [683] = {.lex_state = 357},
  [684] = {.lex_state = 357},
  [685] = {.lex_state = 357},
  [686] = {.lex_state = 357},
  [687] = {.lex_state = 357},
  [688] = {.lex_state = 357},
  [689] = {.lex_state = 357},
  [690] = {.lex_state = 473},
  [691] = {.lex_state = 473},
  [692] = {.lex_state = 453},
  [693] = {.lex_state = 339},
  [694] = {.lex_state = 348},
  [695] = {.lex_state = 487},
  [696] = {.lex_state = 487},
  [697] = {.lex_state = 487},
  [698] = {.lex_state = 217},
  [699] = {.lex_state = 487},
  [700] = {.lex_state = 487},
  [701] = {.lex_state = 487},
  [702] = {.lex_state = 487},
  [703] = {.lex_state = 357},
  [704] = {.lex_state = 488},
  [705] = {.lex_state = 488},
  [706] = {.lex_state = 217},
  [707] = {.lex_state = 357},
  [708] = {.lex_state = 357},
  [709] = {.lex_state = 490},
  [710] = {.lex_state = 217},
  [711] = {.lex_state = 339},
  [712] = {.lex_state = 217},
  [713] = {.lex_state = 339},
  [714] = {.lex_state = 339},
  [715] = {.lex_state = 491},
  [716] = {.lex_state = 491},
  [717] = {.lex_state = 339},
  [718] = {.lex_state = 490},
  [719] = {.lex_state = 490},
  [720] = {.lex_state = 490},
  [721] = {.lex_state = 217},
  [722] = {.lex_state = 339},
  [723] = {.lex_state = 465},
  [724] = {.lex_state = 339},
  [725] = {.lex_state = 339},
  [726] = {.lex_state = 339},
  [727] = {.lex_state = 357},
  [728] = {.lex_state = 357},
  [729] = {.lex_state = 339},
  [730] = {.lex_state = 357},
  [731] = {.lex_state = 357},
  [732] = {.lex_state = 339},
  [733] = {.lex_state = 357},
  [734] = {.lex_state = 357},
  [735] = {.lex_state = 217},
  [736] = {.lex_state = 357},
  [737] = {.lex_state = 217},
  [738] = {.lex_state = 217},
  [739] = {.lex_state = 357},
  [740] = {.lex_state = 217},
  [741] = {.lex_state = 217},
  [742] = {.lex_state = 217},
  [743] = {.lex_state = 217},
  [744] = {.lex_state = 217},
  [745] = {.lex_state = 217},
  [746] = {.lex_state = 217},
  [747] = {.lex_state = 217},
  [748] = {.lex_state = 217},
  [749] = {.lex_state = 217},
  [750] = {.lex_state = 453},
  [751] = {.lex_state = 339},
  [752] = {.lex_state = 487},
  [753] = {.lex_state = 423},
  [754] = {.lex_state = 339},
  [755] = {.lex_state = 217},
  [756] = {.lex_state = 357},
  [757] = {.lex_state = 217},
  [758] = {.lex_state = 217},
  [759] = {.lex_state = 339},
  [760] = {.lex_state = 490},
  [761] = {.lex_state = 491},
  [762] = {.lex_state = 491},
  [763] = {.lex_state = 217},
  [764] = {.lex_state = 357},
  [765] = {.lex_state = 490},
  [766] = {.lex_state = 490},
  [767] = {.lex_state = 339},
  [768] = {.lex_state = 434},
  [769] = {.lex_state = 339},
  [770] = {.lex_state = 339},
  [771] = {.lex_state = 339},
  [772] = {.lex_state = 339},
  [773] = {.lex_state = 357},
  [774] = {.lex_state = 357},
  [775] = {.lex_state = 339},
  [776] = {.lex_state = 217},
  [777] = {.lex_state = 487},
  [778] = {.lex_state = 217},
  [779] = {.lex_state = 217},
  [780] = {.lex_state = 357},
  [781] = {.lex_state = 357},
  [782] = {.lex_state = 357},
  [783] = {.lex_state = 357},
  [784] = {.lex_state = 357},
  [785] = {.lex_state = 357},
  [786] = {.lex_state = 473},
  [787] = {.lex_state = 473},
  [788] = {.lex_state = 453},
  [789] = {.lex_state = 488},
  [790] = {.lex_state = 357},
  [791] = {.lex_state = 217},
  [792] = {.lex_state = 217},
  [793] = {.lex_state = 488},
  [794] = {.lex_state = 217},
  [795] = {.lex_state = 217},
  [796] = {.lex_state = 423},
  [797] = {.lex_state = 339},
  [798] = {.lex_state = 217},
  [799] = {.lex_state = 423},
  [800] = {.lex_state = 339},
  [801] = {.lex_state = 217},
  [802] = {.lex_state = 339},
  [803] = {.lex_state = 434},
  [804] = {.lex_state = 339},
  [805] = {.lex_state = 339},
  [806] = {.lex_state = 339},
  [807] = {.lex_state = 339},
  [808] = {.lex_state = 487},
  [809] = {.lex_state = 217},
  [810] = {.lex_state = 217},
  [811] = {.lex_state = 488},
  [812] = {.lex_state = 488},
  [813] = {.lex_state = 491},
  [814] = {.lex_state = 357},
  [815] = {.lex_state = 217},
  [816] = {.lex_state = 217},
  [817] = {.lex_state = 491},
  [818] = {.lex_state = 490},
  [819] = {.lex_state = 357},
  [820] = {.lex_state = 217},
  [821] = {.lex_state = 217},
  [822] = {.lex_state = 490},
  [823] = {.lex_state = 339},
  [824] = {.lex_state = 339},
  [825] = {.lex_state = 339},
  [826] = {.lex_state = 217},
  [827] = {.lex_state = 491},
  [828] = {.lex_state = 491},
  [829] = {.lex_state = 490},
  [830] = {.lex_state = 490},
  [831] = {.lex_state = 339},
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
    [anon_sym_DOT] = ACTIONS(3),
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
    [anon_sym_AT] = ACTIONS(3),
    [anon_sym_to] = ACTIONS(3),
    [anon_sym_transitive] = ACTIONS(3),
    [anon_sym_static] = ACTIONS(3),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_public] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(3),
    [anon_sym_private] = ACTIONS(3),
    [anon_sym_abstract] = ACTIONS(3),
    [anon_sym_final] = ACTIONS(3),
    [anon_sym_strictfp] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(3),
    [anon_sym_ATinterface] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(3),
    [sym_result] = ACTIONS(3),
    [anon_sym_this] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
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
    [sym_modifier] = STATE(28),
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
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [sym_comment] = ACTIONS(42),
  },
  [2] = {
    [sym__semicolon] = ACTIONS(44),
    [anon_sym_RPAREN] = ACTIONS(44),
    [anon_sym_RBRACE] = ACTIONS(44),
    [anon_sym_COMMA] = ACTIONS(44),
    [sym_comment] = ACTIONS(42),
  },
  [3] = {
    [sym__semicolon] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(46),
    [anon_sym_RBRACE] = ACTIONS(46),
    [anon_sym_COMMA] = ACTIONS(46),
    [sym_comment] = ACTIONS(42),
  },
  [4] = {
    [sym__semicolon] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(48),
    [anon_sym_RBRACE] = ACTIONS(48),
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
    [anon_sym_RBRACE] = ACTIONS(56),
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
    [anon_sym_static] = ACTIONS(66),
    [anon_sym_class] = ACTIONS(66),
    [anon_sym_public] = ACTIONS(66),
    [anon_sym_protected] = ACTIONS(66),
    [anon_sym_private] = ACTIONS(66),
    [anon_sym_abstract] = ACTIONS(66),
    [anon_sym_final] = ACTIONS(66),
    [anon_sym_strictfp] = ACTIONS(66),
    [anon_sym_default] = ACTIONS(66),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(42),
  },
  [13] = {
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(42),
  },
  [14] = {
    [sym_package_or_type_name] = STATE(44),
    [anon_sym_static] = ACTIONS(72),
    [sym_identifier] = ACTIONS(74),
    [sym_comment] = ACTIONS(42),
  },
  [15] = {
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(42),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [sym_comment] = ACTIONS(42),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [sym_decimal_integer_literal] = ACTIONS(82),
    [sym_hex_integer_literal] = ACTIONS(82),
    [sym_octal_integer_literal] = ACTIONS(82),
    [sym_binary_integer_literal] = ACTIONS(82),
    [sym_decimal_floating_point_literal] = ACTIONS(82),
    [sym_hex_floating_point_literal] = ACTIONS(84),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(80),
    [sym_string_literal] = ACTIONS(80),
    [sym_null_literal] = ACTIONS(80),
    [anon_sym_BANG] = ACTIONS(80),
    [anon_sym_TILDE] = ACTIONS(80),
    [anon_sym_PLUS_PLUS] = ACTIONS(80),
    [anon_sym_DASH_DASH] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(80),
    [anon_sym_open] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_static] = ACTIONS(80),
    [anon_sym_package] = ACTIONS(80),
    [anon_sym_import] = ACTIONS(80),
    [anon_sym_class] = ACTIONS(80),
    [anon_sym_public] = ACTIONS(80),
    [anon_sym_protected] = ACTIONS(80),
    [anon_sym_private] = ACTIONS(80),
    [anon_sym_abstract] = ACTIONS(80),
    [anon_sym_final] = ACTIONS(80),
    [anon_sym_strictfp] = ACTIONS(80),
    [anon_sym_default] = ACTIONS(80),
    [sym_comment] = ACTIONS(42),
  },
  [18] = {
    [sym__semicolon] = ACTIONS(86),
    [sym_comment] = ACTIONS(42),
  },
  [19] = {
    [sym__semicolon] = ACTIONS(86),
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_PLUS_EQ] = ACTIONS(90),
    [anon_sym_DASH_EQ] = ACTIONS(90),
    [anon_sym_STAR_EQ] = ACTIONS(90),
    [anon_sym_SLASH_EQ] = ACTIONS(90),
    [anon_sym_AMP_EQ] = ACTIONS(90),
    [anon_sym_PIPE_EQ] = ACTIONS(90),
    [anon_sym_CARET_EQ] = ACTIONS(90),
    [anon_sym_PERCENT_EQ] = ACTIONS(90),
    [anon_sym_LT_LT_EQ] = ACTIONS(90),
    [anon_sym_GT_GT_EQ] = ACTIONS(90),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(90),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_EQ_EQ] = ACTIONS(94),
    [anon_sym_GT_EQ] = ACTIONS(94),
    [anon_sym_LT_EQ] = ACTIONS(94),
    [anon_sym_BANG_EQ] = ACTIONS(94),
    [anon_sym_AMP_AMP] = ACTIONS(96),
    [anon_sym_PIPE_PIPE] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_AMP] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(106),
    [anon_sym_CARET] = ACTIONS(106),
    [anon_sym_PERCENT] = ACTIONS(102),
    [anon_sym_LT_LT] = ACTIONS(102),
    [anon_sym_GT_GT] = ACTIONS(102),
    [anon_sym_GT_GT_GT] = ACTIONS(102),
    [anon_sym_QMARK] = ACTIONS(108),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [20] = {
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
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(112),
    [sym_comment] = ACTIONS(42),
  },
  [21] = {
    [sym__semicolon] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_PLUS_EQ] = ACTIONS(116),
    [anon_sym_DASH_EQ] = ACTIONS(116),
    [anon_sym_STAR_EQ] = ACTIONS(116),
    [anon_sym_SLASH_EQ] = ACTIONS(116),
    [anon_sym_AMP_EQ] = ACTIONS(116),
    [anon_sym_PIPE_EQ] = ACTIONS(116),
    [anon_sym_CARET_EQ] = ACTIONS(116),
    [anon_sym_PERCENT_EQ] = ACTIONS(116),
    [anon_sym_LT_LT_EQ] = ACTIONS(116),
    [anon_sym_GT_GT_EQ] = ACTIONS(116),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(116),
    [anon_sym_GT] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(118),
    [anon_sym_EQ_EQ] = ACTIONS(116),
    [anon_sym_GT_EQ] = ACTIONS(116),
    [anon_sym_LT_EQ] = ACTIONS(116),
    [anon_sym_BANG_EQ] = ACTIONS(116),
    [anon_sym_AMP_AMP] = ACTIONS(116),
    [anon_sym_PIPE_PIPE] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym_STAR] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym_AMP] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_CARET] = ACTIONS(118),
    [anon_sym_PERCENT] = ACTIONS(118),
    [anon_sym_LT_LT] = ACTIONS(118),
    [anon_sym_GT_GT] = ACTIONS(118),
    [anon_sym_GT_GT_GT] = ACTIONS(118),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_PLUS_PLUS] = ACTIONS(116),
    [anon_sym_DASH_DASH] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_COMMA] = ACTIONS(116),
    [sym_comment] = ACTIONS(42),
  },
  [22] = {
    [anon_sym_AT] = ACTIONS(120),
    [anon_sym_open] = ACTIONS(123),
    [anon_sym_module] = ACTIONS(123),
    [anon_sym_static] = ACTIONS(64),
    [anon_sym_package] = ACTIONS(123),
    [anon_sym_class] = ACTIONS(64),
    [anon_sym_public] = ACTIONS(64),
    [anon_sym_protected] = ACTIONS(64),
    [anon_sym_private] = ACTIONS(64),
    [anon_sym_abstract] = ACTIONS(64),
    [anon_sym_final] = ACTIONS(64),
    [anon_sym_strictfp] = ACTIONS(64),
    [anon_sym_default] = ACTIONS(64),
    [sym_comment] = ACTIONS(42),
  },
  [23] = {
    [sym__semicolon] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_AT] = ACTIONS(125),
    [anon_sym_open] = ACTIONS(125),
    [anon_sym_module] = ACTIONS(125),
    [anon_sym_static] = ACTIONS(125),
    [anon_sym_package] = ACTIONS(125),
    [anon_sym_class] = ACTIONS(125),
    [anon_sym_public] = ACTIONS(125),
    [anon_sym_protected] = ACTIONS(125),
    [anon_sym_private] = ACTIONS(125),
    [anon_sym_abstract] = ACTIONS(125),
    [anon_sym_final] = ACTIONS(125),
    [anon_sym_strictfp] = ACTIONS(125),
    [anon_sym_default] = ACTIONS(125),
    [sym_result] = ACTIONS(125),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(125),
    [sym_comment] = ACTIONS(42),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_decimal_integer_literal] = ACTIONS(129),
    [sym_hex_integer_literal] = ACTIONS(129),
    [sym_octal_integer_literal] = ACTIONS(129),
    [sym_binary_integer_literal] = ACTIONS(129),
    [sym_decimal_floating_point_literal] = ACTIONS(129),
    [sym_hex_floating_point_literal] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(127),
    [anon_sym_false] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [sym_string_literal] = ACTIONS(127),
    [sym_null_literal] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_PLUS_PLUS] = ACTIONS(127),
    [anon_sym_DASH_DASH] = ACTIONS(127),
    [anon_sym_if] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_elseif] = ACTIONS(127),
    [anon_sym_AT] = ACTIONS(127),
    [anon_sym_open] = ACTIONS(127),
    [anon_sym_module] = ACTIONS(127),
    [anon_sym_static] = ACTIONS(127),
    [anon_sym_package] = ACTIONS(127),
    [anon_sym_import] = ACTIONS(127),
    [anon_sym_class] = ACTIONS(127),
    [anon_sym_public] = ACTIONS(127),
    [anon_sym_protected] = ACTIONS(127),
    [anon_sym_private] = ACTIONS(127),
    [anon_sym_abstract] = ACTIONS(127),
    [anon_sym_final] = ACTIONS(127),
    [anon_sym_strictfp] = ACTIONS(127),
    [anon_sym_default] = ACTIONS(127),
    [sym_comment] = ACTIONS(42),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_decimal_integer_literal] = ACTIONS(135),
    [sym_hex_integer_literal] = ACTIONS(135),
    [sym_octal_integer_literal] = ACTIONS(135),
    [sym_binary_integer_literal] = ACTIONS(135),
    [sym_decimal_floating_point_literal] = ACTIONS(135),
    [sym_hex_floating_point_literal] = ACTIONS(137),
    [anon_sym_true] = ACTIONS(133),
    [anon_sym_false] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [sym_string_literal] = ACTIONS(133),
    [sym_null_literal] = ACTIONS(133),
    [anon_sym_BANG] = ACTIONS(133),
    [anon_sym_TILDE] = ACTIONS(133),
    [anon_sym_PLUS_PLUS] = ACTIONS(133),
    [anon_sym_DASH_DASH] = ACTIONS(133),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_elseif] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(133),
    [anon_sym_open] = ACTIONS(133),
    [anon_sym_module] = ACTIONS(133),
    [anon_sym_static] = ACTIONS(133),
    [anon_sym_package] = ACTIONS(133),
    [anon_sym_import] = ACTIONS(133),
    [anon_sym_class] = ACTIONS(133),
    [anon_sym_public] = ACTIONS(133),
    [anon_sym_protected] = ACTIONS(133),
    [anon_sym_private] = ACTIONS(133),
    [anon_sym_abstract] = ACTIONS(133),
    [anon_sym_final] = ACTIONS(133),
    [anon_sym_strictfp] = ACTIONS(133),
    [anon_sym_default] = ACTIONS(133),
    [sym_comment] = ACTIONS(42),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_decimal_integer_literal] = ACTIONS(141),
    [sym_hex_integer_literal] = ACTIONS(141),
    [sym_octal_integer_literal] = ACTIONS(141),
    [sym_binary_integer_literal] = ACTIONS(141),
    [sym_decimal_floating_point_literal] = ACTIONS(141),
    [sym_hex_floating_point_literal] = ACTIONS(143),
    [anon_sym_true] = ACTIONS(139),
    [anon_sym_false] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(139),
    [sym_string_literal] = ACTIONS(139),
    [sym_null_literal] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_PLUS_PLUS] = ACTIONS(139),
    [anon_sym_DASH_DASH] = ACTIONS(139),
    [anon_sym_if] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_elseif] = ACTIONS(139),
    [anon_sym_AT] = ACTIONS(139),
    [anon_sym_open] = ACTIONS(139),
    [anon_sym_module] = ACTIONS(139),
    [anon_sym_static] = ACTIONS(139),
    [anon_sym_package] = ACTIONS(139),
    [anon_sym_import] = ACTIONS(139),
    [anon_sym_class] = ACTIONS(139),
    [anon_sym_public] = ACTIONS(139),
    [anon_sym_protected] = ACTIONS(139),
    [anon_sym_private] = ACTIONS(139),
    [anon_sym_abstract] = ACTIONS(139),
    [anon_sym_final] = ACTIONS(139),
    [anon_sym_strictfp] = ACTIONS(139),
    [anon_sym_default] = ACTIONS(139),
    [sym_comment] = ACTIONS(42),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_decimal_integer_literal] = ACTIONS(147),
    [sym_hex_integer_literal] = ACTIONS(147),
    [sym_octal_integer_literal] = ACTIONS(147),
    [sym_binary_integer_literal] = ACTIONS(147),
    [sym_decimal_floating_point_literal] = ACTIONS(147),
    [sym_hex_floating_point_literal] = ACTIONS(149),
    [anon_sym_true] = ACTIONS(145),
    [anon_sym_false] = ACTIONS(145),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [sym_string_literal] = ACTIONS(145),
    [sym_null_literal] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_PLUS_PLUS] = ACTIONS(145),
    [anon_sym_DASH_DASH] = ACTIONS(145),
    [anon_sym_if] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(145),
    [anon_sym_elseif] = ACTIONS(145),
    [anon_sym_AT] = ACTIONS(145),
    [anon_sym_open] = ACTIONS(145),
    [anon_sym_module] = ACTIONS(145),
    [anon_sym_static] = ACTIONS(145),
    [anon_sym_package] = ACTIONS(145),
    [anon_sym_import] = ACTIONS(145),
    [anon_sym_class] = ACTIONS(145),
    [anon_sym_public] = ACTIONS(145),
    [anon_sym_protected] = ACTIONS(145),
    [anon_sym_private] = ACTIONS(145),
    [anon_sym_abstract] = ACTIONS(145),
    [anon_sym_final] = ACTIONS(145),
    [anon_sym_strictfp] = ACTIONS(145),
    [anon_sym_default] = ACTIONS(145),
    [sym_comment] = ACTIONS(42),
  },
  [28] = {
    [anon_sym_AT] = ACTIONS(151),
    [anon_sym_static] = ACTIONS(151),
    [anon_sym_class] = ACTIONS(151),
    [anon_sym_public] = ACTIONS(151),
    [anon_sym_protected] = ACTIONS(151),
    [anon_sym_private] = ACTIONS(151),
    [anon_sym_abstract] = ACTIONS(151),
    [anon_sym_final] = ACTIONS(151),
    [anon_sym_strictfp] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
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
    [sym_modifier] = STATE(28),
    [aux_sym_class_or_interface_type_repeat1] = STATE(30),
    [aux_sym_normal_class_declaration_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(153),
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
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [sym_comment] = ACTIONS(42),
  },
  [30] = {
    [sym__annotation] = STATE(58),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_open] = ACTIONS(155),
    [anon_sym_module] = ACTIONS(60),
    [anon_sym_package] = ACTIONS(157),
    [sym_comment] = ACTIONS(42),
  },
  [31] = {
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [sym_modifier] = STATE(60),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(159),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [sym_comment] = ACTIONS(42),
  },
  [32] = {
    [sym__semicolon] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(161),
    [sym_comment] = ACTIONS(42),
  },
  [33] = {
    [anon_sym_SQUOTE] = ACTIONS(163),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(163),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(163),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(163),
    [sym_comment] = ACTIONS(54),
  },
  [34] = {
    [anon_sym_SQUOTE] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(167),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(167),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(167),
    [sym_comment] = ACTIONS(54),
  },
  [35] = {
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
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [sym_comment] = ACTIONS(42),
  },
  [36] = {
    [sym__semicolon] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(175),
    [anon_sym_PLUS_EQ] = ACTIONS(173),
    [anon_sym_DASH_EQ] = ACTIONS(173),
    [anon_sym_STAR_EQ] = ACTIONS(173),
    [anon_sym_SLASH_EQ] = ACTIONS(173),
    [anon_sym_AMP_EQ] = ACTIONS(173),
    [anon_sym_PIPE_EQ] = ACTIONS(173),
    [anon_sym_CARET_EQ] = ACTIONS(173),
    [anon_sym_PERCENT_EQ] = ACTIONS(173),
    [anon_sym_LT_LT_EQ] = ACTIONS(173),
    [anon_sym_GT_GT_EQ] = ACTIONS(173),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_LT] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(173),
    [anon_sym_GT_EQ] = ACTIONS(173),
    [anon_sym_LT_EQ] = ACTIONS(173),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_AMP_AMP] = ACTIONS(173),
    [anon_sym_PIPE_PIPE] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(175),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_AMP] = ACTIONS(175),
    [anon_sym_PIPE] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(175),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_LT_LT] = ACTIONS(175),
    [anon_sym_GT_GT] = ACTIONS(175),
    [anon_sym_GT_GT_GT] = ACTIONS(175),
    [anon_sym_QMARK] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_PLUS_PLUS] = ACTIONS(173),
    [anon_sym_DASH_DASH] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [sym_comment] = ACTIONS(42),
  },
  [37] = {
    [sym__semicolon] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(177),
    [anon_sym_open] = ACTIONS(177),
    [anon_sym_module] = ACTIONS(177),
    [anon_sym_with] = ACTIONS(177),
    [anon_sym_static] = ACTIONS(177),
    [anon_sym_package] = ACTIONS(177),
    [anon_sym_class] = ACTIONS(177),
    [anon_sym_public] = ACTIONS(177),
    [anon_sym_protected] = ACTIONS(177),
    [anon_sym_private] = ACTIONS(177),
    [anon_sym_abstract] = ACTIONS(177),
    [anon_sym_final] = ACTIONS(177),
    [anon_sym_strictfp] = ACTIONS(177),
    [anon_sym_default] = ACTIONS(177),
    [sym_result] = ACTIONS(177),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(177),
    [sym_comment] = ACTIONS(42),
  },
  [38] = {
    [sym__semicolon] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_open] = ACTIONS(181),
    [anon_sym_module] = ACTIONS(181),
    [anon_sym_static] = ACTIONS(181),
    [anon_sym_package] = ACTIONS(181),
    [anon_sym_class] = ACTIONS(181),
    [anon_sym_public] = ACTIONS(181),
    [anon_sym_protected] = ACTIONS(181),
    [anon_sym_private] = ACTIONS(181),
    [anon_sym_abstract] = ACTIONS(181),
    [anon_sym_final] = ACTIONS(181),
    [anon_sym_strictfp] = ACTIONS(181),
    [anon_sym_default] = ACTIONS(181),
    [sym_result] = ACTIONS(181),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(181),
    [sym_comment] = ACTIONS(42),
  },
  [39] = {
    [sym_module_identifier] = STATE(65),
    [sym_identifier] = ACTIONS(62),
    [sym_comment] = ACTIONS(42),
  },
  [40] = {
    [aux_sym_module_identifier_repeat1] = STATE(67),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(189),
    [sym_comment] = ACTIONS(42),
  },
  [41] = {
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_comment] = ACTIONS(42),
  },
  [42] = {
    [aux_sym_module_identifier_repeat1] = STATE(70),
    [sym__semicolon] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(189),
    [sym_comment] = ACTIONS(42),
  },
  [43] = {
    [sym_package_or_type_name] = STATE(71),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(42),
  },
  [44] = {
    [sym__semicolon] = ACTIONS(195),
    [anon_sym_DOT] = ACTIONS(197),
    [sym_comment] = ACTIONS(42),
  },
  [45] = {
    [sym_type_parameters] = STATE(78),
    [sym_superclass] = STATE(79),
    [sym_super_interfaces] = STATE(80),
    [sym_class_body] = STATE(81),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_extends] = ACTIONS(203),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_decimal_integer_literal] = ACTIONS(209),
    [sym_hex_integer_literal] = ACTIONS(209),
    [sym_octal_integer_literal] = ACTIONS(209),
    [sym_binary_integer_literal] = ACTIONS(209),
    [sym_decimal_floating_point_literal] = ACTIONS(209),
    [sym_hex_floating_point_literal] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_false] = ACTIONS(207),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [sym_string_literal] = ACTIONS(207),
    [sym_null_literal] = ACTIONS(207),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_PLUS_PLUS] = ACTIONS(207),
    [anon_sym_DASH_DASH] = ACTIONS(207),
    [anon_sym_if] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_elseif] = ACTIONS(207),
    [anon_sym_AT] = ACTIONS(207),
    [anon_sym_open] = ACTIONS(207),
    [anon_sym_module] = ACTIONS(207),
    [anon_sym_static] = ACTIONS(207),
    [anon_sym_package] = ACTIONS(207),
    [anon_sym_import] = ACTIONS(207),
    [anon_sym_class] = ACTIONS(207),
    [anon_sym_public] = ACTIONS(207),
    [anon_sym_protected] = ACTIONS(207),
    [anon_sym_private] = ACTIONS(207),
    [anon_sym_abstract] = ACTIONS(207),
    [anon_sym_final] = ACTIONS(207),
    [anon_sym_strictfp] = ACTIONS(207),
    [anon_sym_default] = ACTIONS(207),
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
    [anon_sym_BANG] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
    [anon_sym_PLUS_PLUS] = ACTIONS(215),
    [anon_sym_DASH_DASH] = ACTIONS(215),
    [sym_comment] = ACTIONS(42),
  },
  [54] = {
    [sym__semicolon] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(175),
    [anon_sym_PLUS_EQ] = ACTIONS(173),
    [anon_sym_DASH_EQ] = ACTIONS(173),
    [anon_sym_STAR_EQ] = ACTIONS(173),
    [anon_sym_SLASH_EQ] = ACTIONS(173),
    [anon_sym_AMP_EQ] = ACTIONS(173),
    [anon_sym_PIPE_EQ] = ACTIONS(173),
    [anon_sym_CARET_EQ] = ACTIONS(173),
    [anon_sym_PERCENT_EQ] = ACTIONS(173),
    [anon_sym_LT_LT_EQ] = ACTIONS(173),
    [anon_sym_GT_GT_EQ] = ACTIONS(173),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_LT] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(173),
    [anon_sym_GT_EQ] = ACTIONS(173),
    [anon_sym_LT_EQ] = ACTIONS(173),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_AMP_AMP] = ACTIONS(173),
    [anon_sym_PIPE_PIPE] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(175),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_AMP] = ACTIONS(175),
    [anon_sym_PIPE] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(175),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_LT_LT] = ACTIONS(175),
    [anon_sym_GT_GT] = ACTIONS(175),
    [anon_sym_GT_GT_GT] = ACTIONS(175),
    [anon_sym_QMARK] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_PLUS_PLUS] = ACTIONS(173),
    [anon_sym_DASH_DASH] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [sym_comment] = ACTIONS(42),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [sym_decimal_integer_literal] = ACTIONS(219),
    [sym_hex_integer_literal] = ACTIONS(219),
    [sym_octal_integer_literal] = ACTIONS(219),
    [sym_binary_integer_literal] = ACTIONS(219),
    [sym_decimal_floating_point_literal] = ACTIONS(219),
    [sym_hex_floating_point_literal] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(217),
    [anon_sym_false] = ACTIONS(217),
    [anon_sym_SQUOTE] = ACTIONS(217),
    [sym_string_literal] = ACTIONS(217),
    [sym_null_literal] = ACTIONS(217),
    [anon_sym_BANG] = ACTIONS(217),
    [anon_sym_TILDE] = ACTIONS(217),
    [anon_sym_PLUS_PLUS] = ACTIONS(217),
    [anon_sym_DASH_DASH] = ACTIONS(217),
    [anon_sym_AT] = ACTIONS(217),
    [anon_sym_open] = ACTIONS(217),
    [anon_sym_module] = ACTIONS(217),
    [anon_sym_static] = ACTIONS(217),
    [anon_sym_package] = ACTIONS(217),
    [anon_sym_import] = ACTIONS(217),
    [anon_sym_class] = ACTIONS(217),
    [anon_sym_public] = ACTIONS(217),
    [anon_sym_protected] = ACTIONS(217),
    [anon_sym_private] = ACTIONS(217),
    [anon_sym_abstract] = ACTIONS(217),
    [anon_sym_final] = ACTIONS(217),
    [anon_sym_strictfp] = ACTIONS(217),
    [anon_sym_default] = ACTIONS(217),
    [sym_comment] = ACTIONS(42),
  },
  [56] = {
    [anon_sym_module] = ACTIONS(223),
    [sym_comment] = ACTIONS(42),
  },
  [57] = {
    [sym_identifier] = ACTIONS(225),
    [sym_comment] = ACTIONS(42),
  },
  [58] = {
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_AT] = ACTIONS(227),
    [anon_sym_open] = ACTIONS(227),
    [anon_sym_module] = ACTIONS(227),
    [anon_sym_package] = ACTIONS(227),
    [sym_result] = ACTIONS(227),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(227),
    [sym_comment] = ACTIONS(42),
  },
  [59] = {
    [sym_identifier] = ACTIONS(229),
    [sym_comment] = ACTIONS(42),
  },
  [60] = {
    [anon_sym_AT] = ACTIONS(231),
    [anon_sym_static] = ACTIONS(231),
    [anon_sym_class] = ACTIONS(231),
    [anon_sym_public] = ACTIONS(231),
    [anon_sym_protected] = ACTIONS(231),
    [anon_sym_private] = ACTIONS(231),
    [anon_sym_abstract] = ACTIONS(231),
    [anon_sym_final] = ACTIONS(231),
    [anon_sym_strictfp] = ACTIONS(231),
    [anon_sym_default] = ACTIONS(231),
    [sym_comment] = ACTIONS(42),
  },
  [61] = {
    [sym__semicolon] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [sym_comment] = ACTIONS(42),
  },
  [62] = {
    [anon_sym_SQUOTE] = ACTIONS(235),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(235),
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
    [anon_sym_true] = ACTIONS(237),
    [anon_sym_false] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(241),
    [sym_identifier] = ACTIONS(243),
    [sym_comment] = ACTIONS(42),
  },
  [64] = {
    [sym_identifier] = ACTIONS(245),
    [sym_comment] = ACTIONS(42),
  },
  [65] = {
    [anon_sym_LBRACE] = ACTIONS(247),
    [sym_comment] = ACTIONS(42),
  },
  [66] = {
    [sym_identifier] = ACTIONS(249),
    [sym_comment] = ACTIONS(42),
  },
  [67] = {
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(253),
    [sym_comment] = ACTIONS(42),
  },
  [68] = {
    [sym_module_directive] = STATE(108),
    [aux_sym_module_declaration_repeat1] = STATE(109),
    [anon_sym_RBRACE] = ACTIONS(255),
    [anon_sym_requires] = ACTIONS(257),
    [anon_sym_exports] = ACTIONS(259),
    [anon_sym_opens] = ACTIONS(259),
    [anon_sym_uses] = ACTIONS(261),
    [anon_sym_provides] = ACTIONS(263),
    [sym_comment] = ACTIONS(42),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [sym_decimal_integer_literal] = ACTIONS(267),
    [sym_hex_integer_literal] = ACTIONS(267),
    [sym_octal_integer_literal] = ACTIONS(267),
    [sym_binary_integer_literal] = ACTIONS(267),
    [sym_decimal_floating_point_literal] = ACTIONS(267),
    [sym_hex_floating_point_literal] = ACTIONS(269),
    [anon_sym_true] = ACTIONS(265),
    [anon_sym_false] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(265),
    [sym_string_literal] = ACTIONS(265),
    [sym_null_literal] = ACTIONS(265),
    [anon_sym_BANG] = ACTIONS(265),
    [anon_sym_TILDE] = ACTIONS(265),
    [anon_sym_PLUS_PLUS] = ACTIONS(265),
    [anon_sym_DASH_DASH] = ACTIONS(265),
    [anon_sym_if] = ACTIONS(265),
    [anon_sym_RBRACE] = ACTIONS(265),
    [anon_sym_elseif] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(265),
    [anon_sym_open] = ACTIONS(265),
    [anon_sym_module] = ACTIONS(265),
    [anon_sym_static] = ACTIONS(265),
    [anon_sym_package] = ACTIONS(265),
    [anon_sym_import] = ACTIONS(265),
    [anon_sym_class] = ACTIONS(265),
    [anon_sym_public] = ACTIONS(265),
    [anon_sym_protected] = ACTIONS(265),
    [anon_sym_private] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(265),
    [anon_sym_final] = ACTIONS(265),
    [anon_sym_strictfp] = ACTIONS(265),
    [anon_sym_default] = ACTIONS(265),
    [sym_comment] = ACTIONS(42),
  },
  [70] = {
    [sym__semicolon] = ACTIONS(271),
    [anon_sym_DOT] = ACTIONS(253),
    [sym_comment] = ACTIONS(42),
  },
  [71] = {
    [anon_sym_DOT] = ACTIONS(273),
    [sym_comment] = ACTIONS(42),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [sym_decimal_integer_literal] = ACTIONS(277),
    [sym_hex_integer_literal] = ACTIONS(277),
    [sym_octal_integer_literal] = ACTIONS(277),
    [sym_binary_integer_literal] = ACTIONS(277),
    [sym_decimal_floating_point_literal] = ACTIONS(277),
    [sym_hex_floating_point_literal] = ACTIONS(279),
    [anon_sym_true] = ACTIONS(275),
    [anon_sym_false] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(275),
    [sym_string_literal] = ACTIONS(275),
    [sym_null_literal] = ACTIONS(275),
    [anon_sym_BANG] = ACTIONS(275),
    [anon_sym_TILDE] = ACTIONS(275),
    [anon_sym_PLUS_PLUS] = ACTIONS(275),
    [anon_sym_DASH_DASH] = ACTIONS(275),
    [anon_sym_if] = ACTIONS(275),
    [anon_sym_RBRACE] = ACTIONS(275),
    [anon_sym_elseif] = ACTIONS(275),
    [anon_sym_AT] = ACTIONS(275),
    [anon_sym_open] = ACTIONS(275),
    [anon_sym_module] = ACTIONS(275),
    [anon_sym_static] = ACTIONS(275),
    [anon_sym_package] = ACTIONS(275),
    [anon_sym_import] = ACTIONS(275),
    [anon_sym_class] = ACTIONS(275),
    [anon_sym_public] = ACTIONS(275),
    [anon_sym_protected] = ACTIONS(275),
    [anon_sym_private] = ACTIONS(275),
    [anon_sym_abstract] = ACTIONS(275),
    [anon_sym_final] = ACTIONS(275),
    [anon_sym_strictfp] = ACTIONS(275),
    [anon_sym_default] = ACTIONS(275),
    [sym_comment] = ACTIONS(42),
  },
  [73] = {
    [anon_sym_STAR] = ACTIONS(281),
    [sym_identifier] = ACTIONS(245),
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
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(285),
    [sym_comment] = ACTIONS(42),
  },
  [75] = {
    [sym__annotation] = STATE(124),
    [sym_normal_annotation] = STATE(128),
    [sym_marker_annotation] = STATE(128),
    [sym_single_element_annotation] = STATE(128),
    [sym_class_declaration] = STATE(120),
    [sym_normal_class_declaration] = STATE(129),
    [sym_modifier] = STATE(130),
    [sym_class_body_declaration] = STATE(131),
    [sym_class_member_declaration] = STATE(132),
    [sym_interface_declaration] = STATE(120),
    [sym_annotation_type_declaration] = STATE(133),
    [sym_normal_interface_declaration] = STATE(133),
    [sym_block] = STATE(132),
    [aux_sym_normal_class_declaration_repeat1] = STATE(134),
    [aux_sym_class_body_repeat1] = STATE(135),
    [sym__semicolon] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(291),
    [anon_sym_AT] = ACTIONS(293),
    [anon_sym_static] = ACTIONS(295),
    [anon_sym_class] = ACTIONS(297),
    [anon_sym_public] = ACTIONS(295),
    [anon_sym_protected] = ACTIONS(295),
    [anon_sym_private] = ACTIONS(295),
    [anon_sym_abstract] = ACTIONS(295),
    [anon_sym_final] = ACTIONS(295),
    [anon_sym_strictfp] = ACTIONS(295),
    [anon_sym_default] = ACTIONS(295),
    [anon_sym_ATinterface] = ACTIONS(299),
    [anon_sym_interface] = ACTIONS(301),
    [sym_comment] = ACTIONS(42),
  },
  [76] = {
    [sym_class_or_interface_type] = STATE(137),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [aux_sym_class_or_interface_type_repeat1] = STATE(138),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(303),
    [sym_comment] = ACTIONS(42),
  },
  [77] = {
    [sym_class_or_interface_type] = STATE(139),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [sym_interface_type_list] = STATE(140),
    [aux_sym_class_or_interface_type_repeat1] = STATE(138),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(303),
    [sym_comment] = ACTIONS(42),
  },
  [78] = {
    [sym_superclass] = STATE(141),
    [sym_super_interfaces] = STATE(142),
    [sym_class_body] = STATE(143),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_extends] = ACTIONS(203),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [79] = {
    [sym_super_interfaces] = STATE(142),
    [sym_class_body] = STATE(143),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [80] = {
    [sym_class_body] = STATE(143),
    [anon_sym_LBRACE] = ACTIONS(201),
    [sym_comment] = ACTIONS(42),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [sym_decimal_integer_literal] = ACTIONS(307),
    [sym_hex_integer_literal] = ACTIONS(307),
    [sym_octal_integer_literal] = ACTIONS(307),
    [sym_binary_integer_literal] = ACTIONS(307),
    [sym_decimal_floating_point_literal] = ACTIONS(307),
    [sym_hex_floating_point_literal] = ACTIONS(309),
    [anon_sym_true] = ACTIONS(305),
    [anon_sym_false] = ACTIONS(305),
    [anon_sym_SQUOTE] = ACTIONS(305),
    [sym_string_literal] = ACTIONS(305),
    [sym_null_literal] = ACTIONS(305),
    [anon_sym_BANG] = ACTIONS(305),
    [anon_sym_TILDE] = ACTIONS(305),
    [anon_sym_PLUS_PLUS] = ACTIONS(305),
    [anon_sym_DASH_DASH] = ACTIONS(305),
    [anon_sym_if] = ACTIONS(305),
    [anon_sym_RBRACE] = ACTIONS(305),
    [anon_sym_elseif] = ACTIONS(305),
    [anon_sym_AT] = ACTIONS(305),
    [anon_sym_open] = ACTIONS(305),
    [anon_sym_module] = ACTIONS(305),
    [anon_sym_static] = ACTIONS(305),
    [anon_sym_package] = ACTIONS(305),
    [anon_sym_import] = ACTIONS(305),
    [anon_sym_class] = ACTIONS(305),
    [anon_sym_public] = ACTIONS(305),
    [anon_sym_protected] = ACTIONS(305),
    [anon_sym_private] = ACTIONS(305),
    [anon_sym_abstract] = ACTIONS(305),
    [anon_sym_final] = ACTIONS(305),
    [anon_sym_strictfp] = ACTIONS(305),
    [anon_sym_default] = ACTIONS(305),
    [sym_comment] = ACTIONS(42),
  },
  [82] = {
    [sym__semicolon] = ACTIONS(311),
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_PLUS_EQ] = ACTIONS(90),
    [anon_sym_DASH_EQ] = ACTIONS(90),
    [anon_sym_STAR_EQ] = ACTIONS(90),
    [anon_sym_SLASH_EQ] = ACTIONS(90),
    [anon_sym_AMP_EQ] = ACTIONS(90),
    [anon_sym_PIPE_EQ] = ACTIONS(90),
    [anon_sym_CARET_EQ] = ACTIONS(90),
    [anon_sym_PERCENT_EQ] = ACTIONS(90),
    [anon_sym_LT_LT_EQ] = ACTIONS(90),
    [anon_sym_GT_GT_EQ] = ACTIONS(90),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(90),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_EQ_EQ] = ACTIONS(94),
    [anon_sym_GT_EQ] = ACTIONS(94),
    [anon_sym_LT_EQ] = ACTIONS(94),
    [anon_sym_BANG_EQ] = ACTIONS(94),
    [anon_sym_AMP_AMP] = ACTIONS(96),
    [anon_sym_PIPE_PIPE] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_AMP] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(106),
    [anon_sym_CARET] = ACTIONS(106),
    [anon_sym_PERCENT] = ACTIONS(102),
    [anon_sym_LT_LT] = ACTIONS(102),
    [anon_sym_GT_GT] = ACTIONS(102),
    [anon_sym_GT_GT_GT] = ACTIONS(102),
    [anon_sym_QMARK] = ACTIONS(108),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [83] = {
    [sym__semicolon] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(315),
    [anon_sym_LT] = ACTIONS(315),
    [anon_sym_EQ_EQ] = ACTIONS(313),
    [anon_sym_GT_EQ] = ACTIONS(313),
    [anon_sym_LT_EQ] = ACTIONS(313),
    [anon_sym_BANG_EQ] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(102),
    [anon_sym_LT_LT] = ACTIONS(102),
    [anon_sym_GT_GT] = ACTIONS(102),
    [anon_sym_GT_GT_GT] = ACTIONS(102),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [84] = {
    [sym__semicolon] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_EQ_EQ] = ACTIONS(94),
    [anon_sym_GT_EQ] = ACTIONS(94),
    [anon_sym_LT_EQ] = ACTIONS(94),
    [anon_sym_BANG_EQ] = ACTIONS(94),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(102),
    [anon_sym_LT_LT] = ACTIONS(102),
    [anon_sym_GT_GT] = ACTIONS(102),
    [anon_sym_GT_GT_GT] = ACTIONS(102),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [85] = {
    [sym__semicolon] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_EQ_EQ] = ACTIONS(94),
    [anon_sym_GT_EQ] = ACTIONS(94),
    [anon_sym_LT_EQ] = ACTIONS(94),
    [anon_sym_BANG_EQ] = ACTIONS(94),
    [anon_sym_AMP_AMP] = ACTIONS(96),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_AMP] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(102),
    [anon_sym_LT_LT] = ACTIONS(102),
    [anon_sym_GT_GT] = ACTIONS(102),
    [anon_sym_GT_GT_GT] = ACTIONS(102),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [86] = {
    [sym__semicolon] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_EQ_EQ] = ACTIONS(94),
    [anon_sym_GT_EQ] = ACTIONS(94),
    [anon_sym_LT_EQ] = ACTIONS(94),
    [anon_sym_BANG_EQ] = ACTIONS(94),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(102),
    [anon_sym_LT_LT] = ACTIONS(102),
    [anon_sym_GT_GT] = ACTIONS(102),
    [anon_sym_GT_GT_GT] = ACTIONS(102),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [87] = {
    [sym__semicolon] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(315),
    [anon_sym_LT] = ACTIONS(315),
    [anon_sym_EQ_EQ] = ACTIONS(313),
    [anon_sym_GT_EQ] = ACTIONS(313),
    [anon_sym_LT_EQ] = ACTIONS(313),
    [anon_sym_BANG_EQ] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(315),
    [anon_sym_LT_LT] = ACTIONS(315),
    [anon_sym_GT_GT] = ACTIONS(315),
    [anon_sym_GT_GT_GT] = ACTIONS(315),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(313),
    [sym_comment] = ACTIONS(42),
  },
  [88] = {
    [sym__expression] = STATE(35),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
    [anon_sym_PLUS_PLUS] = ACTIONS(215),
    [anon_sym_DASH_DASH] = ACTIONS(215),
    [sym_comment] = ACTIONS(42),
  },
  [89] = {
    [sym__expression] = STATE(36),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
    [anon_sym_PLUS_PLUS] = ACTIONS(215),
    [anon_sym_DASH_DASH] = ACTIONS(215),
    [sym_comment] = ACTIONS(42),
  },
  [90] = {
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PLUS_EQ] = ACTIONS(319),
    [anon_sym_DASH_EQ] = ACTIONS(319),
    [anon_sym_STAR_EQ] = ACTIONS(319),
    [anon_sym_SLASH_EQ] = ACTIONS(319),
    [anon_sym_AMP_EQ] = ACTIONS(319),
    [anon_sym_PIPE_EQ] = ACTIONS(319),
    [anon_sym_CARET_EQ] = ACTIONS(319),
    [anon_sym_PERCENT_EQ] = ACTIONS(319),
    [anon_sym_LT_LT_EQ] = ACTIONS(319),
    [anon_sym_GT_GT_EQ] = ACTIONS(319),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_CARET] = ACTIONS(335),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_GT_GT_GT] = ACTIONS(331),
    [anon_sym_QMARK] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(339),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [91] = {
    [sym_module_identifier] = STATE(152),
    [sym_identifier] = ACTIONS(62),
    [sym_comment] = ACTIONS(42),
  },
  [92] = {
    [aux_sym_module_identifier_repeat1] = STATE(153),
    [sym__semicolon] = ACTIONS(271),
    [anon_sym_DOT] = ACTIONS(189),
    [sym_comment] = ACTIONS(42),
  },
  [93] = {
    [sym_type_parameters] = STATE(154),
    [sym_superclass] = STATE(141),
    [sym_super_interfaces] = STATE(142),
    [sym_class_body] = STATE(143),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_extends] = ACTIONS(203),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [94] = {
    [sym__semicolon] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(341),
    [anon_sym_open] = ACTIONS(341),
    [anon_sym_module] = ACTIONS(341),
    [anon_sym_static] = ACTIONS(341),
    [anon_sym_package] = ACTIONS(341),
    [anon_sym_class] = ACTIONS(341),
    [anon_sym_public] = ACTIONS(341),
    [anon_sym_protected] = ACTIONS(341),
    [anon_sym_private] = ACTIONS(341),
    [anon_sym_abstract] = ACTIONS(341),
    [anon_sym_final] = ACTIONS(341),
    [anon_sym_strictfp] = ACTIONS(341),
    [anon_sym_default] = ACTIONS(341),
    [sym_result] = ACTIONS(341),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(341),
    [sym_comment] = ACTIONS(42),
  },
  [95] = {
    [anon_sym_EQ] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(345),
    [sym_comment] = ACTIONS(42),
  },
  [96] = {
    [anon_sym_RPAREN] = ACTIONS(345),
    [sym_comment] = ACTIONS(42),
  },
  [97] = {
    [anon_sym_RPAREN] = ACTIONS(347),
    [sym_comment] = ACTIONS(42),
  },
  [98] = {
    [aux_sym_element_value_pair_list_repeat1] = STATE(159),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(351),
    [sym_comment] = ACTIONS(42),
  },
  [99] = {
    [sym__semicolon] = ACTIONS(353),
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_RBRACE] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(353),
    [anon_sym_open] = ACTIONS(353),
    [anon_sym_module] = ACTIONS(353),
    [anon_sym_with] = ACTIONS(353),
    [anon_sym_static] = ACTIONS(353),
    [anon_sym_package] = ACTIONS(353),
    [anon_sym_class] = ACTIONS(353),
    [anon_sym_public] = ACTIONS(353),
    [anon_sym_protected] = ACTIONS(353),
    [anon_sym_private] = ACTIONS(353),
    [anon_sym_abstract] = ACTIONS(353),
    [anon_sym_final] = ACTIONS(353),
    [anon_sym_strictfp] = ACTIONS(353),
    [anon_sym_default] = ACTIONS(353),
    [sym_result] = ACTIONS(353),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(353),
    [sym_comment] = ACTIONS(42),
  },
  [100] = {
    [sym_module_directive] = STATE(108),
    [aux_sym_module_declaration_repeat1] = STATE(161),
    [anon_sym_RBRACE] = ACTIONS(357),
    [anon_sym_requires] = ACTIONS(257),
    [anon_sym_exports] = ACTIONS(259),
    [anon_sym_opens] = ACTIONS(259),
    [anon_sym_uses] = ACTIONS(261),
    [anon_sym_provides] = ACTIONS(263),
    [sym_comment] = ACTIONS(42),
  },
  [101] = {
    [sym__semicolon] = ACTIONS(359),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_DOT] = ACTIONS(359),
    [sym_comment] = ACTIONS(42),
  },
  [102] = {
    [sym_identifier] = ACTIONS(361),
    [sym_comment] = ACTIONS(42),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [sym_decimal_integer_literal] = ACTIONS(365),
    [sym_hex_integer_literal] = ACTIONS(365),
    [sym_octal_integer_literal] = ACTIONS(365),
    [sym_binary_integer_literal] = ACTIONS(365),
    [sym_decimal_floating_point_literal] = ACTIONS(365),
    [sym_hex_floating_point_literal] = ACTIONS(367),
    [anon_sym_true] = ACTIONS(363),
    [anon_sym_false] = ACTIONS(363),
    [anon_sym_SQUOTE] = ACTIONS(363),
    [sym_string_literal] = ACTIONS(363),
    [sym_null_literal] = ACTIONS(363),
    [anon_sym_BANG] = ACTIONS(363),
    [anon_sym_TILDE] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(363),
    [anon_sym_DASH_DASH] = ACTIONS(363),
    [anon_sym_if] = ACTIONS(363),
    [anon_sym_RBRACE] = ACTIONS(363),
    [anon_sym_elseif] = ACTIONS(363),
    [anon_sym_AT] = ACTIONS(363),
    [anon_sym_open] = ACTIONS(363),
    [anon_sym_module] = ACTIONS(363),
    [anon_sym_static] = ACTIONS(363),
    [anon_sym_package] = ACTIONS(363),
    [anon_sym_import] = ACTIONS(363),
    [anon_sym_class] = ACTIONS(363),
    [anon_sym_public] = ACTIONS(363),
    [anon_sym_protected] = ACTIONS(363),
    [anon_sym_private] = ACTIONS(363),
    [anon_sym_abstract] = ACTIONS(363),
    [anon_sym_final] = ACTIONS(363),
    [anon_sym_strictfp] = ACTIONS(363),
    [anon_sym_default] = ACTIONS(363),
    [sym_comment] = ACTIONS(42),
  },
  [104] = {
    [sym_requires_modifier] = STATE(165),
    [sym_module_name] = STATE(166),
    [aux_sym_module_directive_repeat1] = STATE(167),
    [anon_sym_transitive] = ACTIONS(369),
    [anon_sym_static] = ACTIONS(369),
    [sym_identifier] = ACTIONS(371),
    [sym_comment] = ACTIONS(42),
  },
  [105] = {
    [sym_package_or_type_name] = STATE(169),
    [sym_identifier] = ACTIONS(373),
    [sym_comment] = ACTIONS(42),
  },
  [106] = {
    [sym_package_or_type_name] = STATE(170),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(42),
  },
  [107] = {
    [sym_package_or_type_name] = STATE(171),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(42),
  },
  [108] = {
    [anon_sym_RBRACE] = ACTIONS(375),
    [anon_sym_requires] = ACTIONS(375),
    [anon_sym_exports] = ACTIONS(375),
    [anon_sym_opens] = ACTIONS(375),
    [anon_sym_uses] = ACTIONS(375),
    [anon_sym_provides] = ACTIONS(375),
    [sym_comment] = ACTIONS(42),
  },
  [109] = {
    [sym_module_directive] = STATE(172),
    [anon_sym_RBRACE] = ACTIONS(357),
    [anon_sym_requires] = ACTIONS(257),
    [anon_sym_exports] = ACTIONS(259),
    [anon_sym_opens] = ACTIONS(259),
    [anon_sym_uses] = ACTIONS(261),
    [anon_sym_provides] = ACTIONS(263),
    [sym_comment] = ACTIONS(42),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(377),
    [sym_decimal_integer_literal] = ACTIONS(379),
    [sym_hex_integer_literal] = ACTIONS(379),
    [sym_octal_integer_literal] = ACTIONS(379),
    [sym_binary_integer_literal] = ACTIONS(379),
    [sym_decimal_floating_point_literal] = ACTIONS(379),
    [sym_hex_floating_point_literal] = ACTIONS(381),
    [anon_sym_true] = ACTIONS(377),
    [anon_sym_false] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [sym_string_literal] = ACTIONS(377),
    [sym_null_literal] = ACTIONS(377),
    [anon_sym_BANG] = ACTIONS(377),
    [anon_sym_TILDE] = ACTIONS(377),
    [anon_sym_PLUS_PLUS] = ACTIONS(377),
    [anon_sym_DASH_DASH] = ACTIONS(377),
    [anon_sym_if] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(377),
    [anon_sym_elseif] = ACTIONS(377),
    [anon_sym_AT] = ACTIONS(377),
    [anon_sym_open] = ACTIONS(377),
    [anon_sym_module] = ACTIONS(377),
    [anon_sym_static] = ACTIONS(377),
    [anon_sym_package] = ACTIONS(377),
    [anon_sym_import] = ACTIONS(377),
    [anon_sym_class] = ACTIONS(377),
    [anon_sym_public] = ACTIONS(377),
    [anon_sym_protected] = ACTIONS(377),
    [anon_sym_private] = ACTIONS(377),
    [anon_sym_abstract] = ACTIONS(377),
    [anon_sym_final] = ACTIONS(377),
    [anon_sym_strictfp] = ACTIONS(377),
    [anon_sym_default] = ACTIONS(377),
    [sym_comment] = ACTIONS(42),
  },
  [111] = {
    [anon_sym_STAR] = ACTIONS(383),
    [sym_identifier] = ACTIONS(385),
    [sym_comment] = ACTIONS(42),
  },
  [112] = {
    [sym__semicolon] = ACTIONS(387),
    [sym_comment] = ACTIONS(42),
  },
  [113] = {
    [sym_package_or_type_name] = STATE(177),
    [sym_identifier] = ACTIONS(389),
    [sym_comment] = ACTIONS(42),
  },
  [114] = {
    [sym_type_bound] = STATE(179),
    [anon_sym_GT] = ACTIONS(391),
    [anon_sym_COMMA] = ACTIONS(391),
    [anon_sym_extends] = ACTIONS(393),
    [sym_comment] = ACTIONS(42),
  },
  [115] = {
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_AT] = ACTIONS(123),
    [sym_identifier] = ACTIONS(395),
    [sym_comment] = ACTIONS(42),
  },
  [116] = {
    [anon_sym_AT] = ACTIONS(125),
    [sym_identifier] = ACTIONS(397),
    [sym_comment] = ACTIONS(42),
  },
  [117] = {
    [anon_sym_GT] = ACTIONS(399),
    [sym_comment] = ACTIONS(42),
  },
  [118] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(182),
    [anon_sym_GT] = ACTIONS(401),
    [anon_sym_COMMA] = ACTIONS(403),
    [sym_comment] = ACTIONS(42),
  },
  [119] = {
    [sym__annotation] = STATE(184),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(405),
    [sym_comment] = ACTIONS(42),
  },
  [120] = {
    [sym__semicolon] = ACTIONS(407),
    [anon_sym_LBRACE] = ACTIONS(407),
    [anon_sym_RBRACE] = ACTIONS(407),
    [anon_sym_AT] = ACTIONS(409),
    [anon_sym_static] = ACTIONS(407),
    [anon_sym_class] = ACTIONS(407),
    [anon_sym_public] = ACTIONS(407),
    [anon_sym_protected] = ACTIONS(407),
    [anon_sym_private] = ACTIONS(407),
    [anon_sym_abstract] = ACTIONS(407),
    [anon_sym_final] = ACTIONS(407),
    [anon_sym_strictfp] = ACTIONS(407),
    [anon_sym_default] = ACTIONS(407),
    [anon_sym_ATinterface] = ACTIONS(407),
    [anon_sym_interface] = ACTIONS(407),
    [sym_comment] = ACTIONS(42),
  },
  [121] = {
    [sym_statement] = STATE(188),
    [sym_if_then_statement] = STATE(189),
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(190),
    [sym_marker_annotation] = STATE(190),
    [sym_single_element_annotation] = STATE(190),
    [sym_class_declaration] = STATE(188),
    [sym_normal_class_declaration] = STATE(27),
    [sym_modifier] = STATE(191),
    [sym_block_statements] = STATE(192),
    [sym_block_statement] = STATE(193),
    [sym_local_variable_declaration_statement] = STATE(188),
    [sym_local_variable_declaration] = STATE(194),
    [aux_sym_normal_class_declaration_repeat1] = STATE(31),
    [anon_sym_if] = ACTIONS(411),
    [anon_sym_RBRACE] = ACTIONS(413),
    [anon_sym_AT] = ACTIONS(415),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [sym_comment] = ACTIONS(42),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(417),
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
    [anon_sym_if] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_elseif] = ACTIONS(417),
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
    [anon_sym_abstract] = ACTIONS(417),
    [anon_sym_final] = ACTIONS(417),
    [anon_sym_strictfp] = ACTIONS(417),
    [anon_sym_default] = ACTIONS(417),
    [sym_comment] = ACTIONS(42),
  },
  [123] = {
    [sym_package_or_type_name] = STATE(196),
    [sym_identifier] = ACTIONS(423),
    [sym_comment] = ACTIONS(42),
  },
  [124] = {
    [anon_sym_AT] = ACTIONS(66),
    [anon_sym_static] = ACTIONS(66),
    [anon_sym_class] = ACTIONS(66),
    [anon_sym_public] = ACTIONS(66),
    [anon_sym_protected] = ACTIONS(66),
    [anon_sym_private] = ACTIONS(66),
    [anon_sym_abstract] = ACTIONS(66),
    [anon_sym_final] = ACTIONS(66),
    [anon_sym_strictfp] = ACTIONS(66),
    [anon_sym_default] = ACTIONS(66),
    [anon_sym_ATinterface] = ACTIONS(64),
    [anon_sym_interface] = ACTIONS(66),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(42),
  },
  [125] = {
    [sym_identifier] = ACTIONS(425),
    [sym_comment] = ACTIONS(42),
  },
  [126] = {
    [sym_identifier] = ACTIONS(427),
    [sym_comment] = ACTIONS(42),
  },
  [127] = {
    [sym_identifier] = ACTIONS(429),
    [sym_comment] = ACTIONS(42),
  },
  [128] = {
    [anon_sym_AT] = ACTIONS(397),
    [anon_sym_static] = ACTIONS(397),
    [anon_sym_class] = ACTIONS(397),
    [anon_sym_public] = ACTIONS(397),
    [anon_sym_protected] = ACTIONS(397),
    [anon_sym_private] = ACTIONS(397),
    [anon_sym_abstract] = ACTIONS(397),
    [anon_sym_final] = ACTIONS(397),
    [anon_sym_strictfp] = ACTIONS(397),
    [anon_sym_default] = ACTIONS(397),
    [anon_sym_ATinterface] = ACTIONS(125),
    [anon_sym_interface] = ACTIONS(397),
    [sym_identifier] = ACTIONS(431),
    [sym_comment] = ACTIONS(42),
  },
  [129] = {
    [sym__semicolon] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(145),
    [anon_sym_AT] = ACTIONS(147),
    [anon_sym_static] = ACTIONS(147),
    [anon_sym_class] = ACTIONS(147),
    [anon_sym_public] = ACTIONS(147),
    [anon_sym_protected] = ACTIONS(147),
    [anon_sym_private] = ACTIONS(147),
    [anon_sym_abstract] = ACTIONS(147),
    [anon_sym_final] = ACTIONS(147),
    [anon_sym_strictfp] = ACTIONS(147),
    [anon_sym_default] = ACTIONS(147),
    [anon_sym_ATinterface] = ACTIONS(145),
    [anon_sym_interface] = ACTIONS(147),
    [sym_identifier] = ACTIONS(149),
    [sym_comment] = ACTIONS(42),
  },
  [130] = {
    [anon_sym_AT] = ACTIONS(433),
    [anon_sym_static] = ACTIONS(433),
    [anon_sym_class] = ACTIONS(433),
    [anon_sym_public] = ACTIONS(433),
    [anon_sym_protected] = ACTIONS(433),
    [anon_sym_private] = ACTIONS(433),
    [anon_sym_abstract] = ACTIONS(433),
    [anon_sym_final] = ACTIONS(433),
    [anon_sym_strictfp] = ACTIONS(433),
    [anon_sym_default] = ACTIONS(433),
    [anon_sym_ATinterface] = ACTIONS(151),
    [anon_sym_interface] = ACTIONS(433),
    [sym_identifier] = ACTIONS(435),
    [sym_comment] = ACTIONS(42),
  },
  [131] = {
    [sym__semicolon] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(437),
    [anon_sym_RBRACE] = ACTIONS(437),
    [anon_sym_AT] = ACTIONS(439),
    [anon_sym_static] = ACTIONS(437),
    [anon_sym_class] = ACTIONS(437),
    [anon_sym_public] = ACTIONS(437),
    [anon_sym_protected] = ACTIONS(437),
    [anon_sym_private] = ACTIONS(437),
    [anon_sym_abstract] = ACTIONS(437),
    [anon_sym_final] = ACTIONS(437),
    [anon_sym_strictfp] = ACTIONS(437),
    [anon_sym_default] = ACTIONS(437),
    [anon_sym_ATinterface] = ACTIONS(437),
    [anon_sym_interface] = ACTIONS(437),
    [sym_comment] = ACTIONS(42),
  },
  [132] = {
    [sym__semicolon] = ACTIONS(441),
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_RBRACE] = ACTIONS(441),
    [anon_sym_AT] = ACTIONS(443),
    [anon_sym_static] = ACTIONS(441),
    [anon_sym_class] = ACTIONS(441),
    [anon_sym_public] = ACTIONS(441),
    [anon_sym_protected] = ACTIONS(441),
    [anon_sym_private] = ACTIONS(441),
    [anon_sym_abstract] = ACTIONS(441),
    [anon_sym_final] = ACTIONS(441),
    [anon_sym_strictfp] = ACTIONS(441),
    [anon_sym_default] = ACTIONS(441),
    [anon_sym_ATinterface] = ACTIONS(441),
    [anon_sym_interface] = ACTIONS(441),
    [sym_comment] = ACTIONS(42),
  },
  [133] = {
    [sym__semicolon] = ACTIONS(445),
    [anon_sym_LBRACE] = ACTIONS(445),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_AT] = ACTIONS(447),
    [anon_sym_static] = ACTIONS(447),
    [anon_sym_class] = ACTIONS(447),
    [anon_sym_public] = ACTIONS(447),
    [anon_sym_protected] = ACTIONS(447),
    [anon_sym_private] = ACTIONS(447),
    [anon_sym_abstract] = ACTIONS(447),
    [anon_sym_final] = ACTIONS(447),
    [anon_sym_strictfp] = ACTIONS(447),
    [anon_sym_default] = ACTIONS(447),
    [anon_sym_ATinterface] = ACTIONS(445),
    [anon_sym_interface] = ACTIONS(447),
    [sym_identifier] = ACTIONS(449),
    [sym_comment] = ACTIONS(42),
  },
  [134] = {
    [sym__annotation] = STATE(124),
    [sym_normal_annotation] = STATE(128),
    [sym_marker_annotation] = STATE(128),
    [sym_single_element_annotation] = STATE(128),
    [sym_modifier] = STATE(203),
    [anon_sym_AT] = ACTIONS(293),
    [anon_sym_static] = ACTIONS(295),
    [anon_sym_class] = ACTIONS(451),
    [anon_sym_public] = ACTIONS(295),
    [anon_sym_protected] = ACTIONS(295),
    [anon_sym_private] = ACTIONS(295),
    [anon_sym_abstract] = ACTIONS(295),
    [anon_sym_final] = ACTIONS(295),
    [anon_sym_strictfp] = ACTIONS(295),
    [anon_sym_default] = ACTIONS(295),
    [anon_sym_ATinterface] = ACTIONS(453),
    [anon_sym_interface] = ACTIONS(455),
    [sym_comment] = ACTIONS(42),
  },
  [135] = {
    [sym__annotation] = STATE(124),
    [sym_normal_annotation] = STATE(128),
    [sym_marker_annotation] = STATE(128),
    [sym_single_element_annotation] = STATE(128),
    [sym_class_declaration] = STATE(120),
    [sym_normal_class_declaration] = STATE(129),
    [sym_modifier] = STATE(130),
    [sym_class_body_declaration] = STATE(205),
    [sym_class_member_declaration] = STATE(132),
    [sym_interface_declaration] = STATE(120),
    [sym_annotation_type_declaration] = STATE(133),
    [sym_normal_interface_declaration] = STATE(133),
    [sym_block] = STATE(132),
    [aux_sym_normal_class_declaration_repeat1] = STATE(134),
    [sym__semicolon] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(457),
    [anon_sym_AT] = ACTIONS(293),
    [anon_sym_static] = ACTIONS(295),
    [anon_sym_class] = ACTIONS(297),
    [anon_sym_public] = ACTIONS(295),
    [anon_sym_protected] = ACTIONS(295),
    [anon_sym_private] = ACTIONS(295),
    [anon_sym_abstract] = ACTIONS(295),
    [anon_sym_final] = ACTIONS(295),
    [anon_sym_strictfp] = ACTIONS(295),
    [anon_sym_default] = ACTIONS(295),
    [anon_sym_ATinterface] = ACTIONS(299),
    [anon_sym_interface] = ACTIONS(301),
    [sym_comment] = ACTIONS(42),
  },
  [136] = {
    [sym_type_arguments] = STATE(208),
    [aux_sym_class_or_interface_type_repeat2] = STATE(209),
    [anon_sym_GT] = ACTIONS(459),
    [anon_sym_LT] = ACTIONS(461),
    [anon_sym_AMP] = ACTIONS(459),
    [anon_sym_LBRACE] = ACTIONS(459),
    [anon_sym_COMMA] = ACTIONS(459),
    [anon_sym_DOT] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(459),
    [anon_sym_AT] = ACTIONS(459),
    [anon_sym_implements] = ACTIONS(459),
    [sym_comment] = ACTIONS(42),
  },
  [137] = {
    [anon_sym_LBRACE] = ACTIONS(465),
    [anon_sym_implements] = ACTIONS(465),
    [sym_comment] = ACTIONS(42),
  },
  [138] = {
    [sym__annotation] = STATE(184),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(467),
    [sym_comment] = ACTIONS(42),
  },
  [139] = {
    [aux_sym_interface_type_list_repeat1] = STATE(212),
    [anon_sym_LBRACE] = ACTIONS(469),
    [anon_sym_COMMA] = ACTIONS(471),
    [sym_comment] = ACTIONS(42),
  },
  [140] = {
    [anon_sym_LBRACE] = ACTIONS(473),
    [sym_comment] = ACTIONS(42),
  },
  [141] = {
    [sym_super_interfaces] = STATE(213),
    [sym_class_body] = STATE(214),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [142] = {
    [sym_class_body] = STATE(214),
    [anon_sym_LBRACE] = ACTIONS(201),
    [sym_comment] = ACTIONS(42),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(475),
    [sym_decimal_integer_literal] = ACTIONS(477),
    [sym_hex_integer_literal] = ACTIONS(477),
    [sym_octal_integer_literal] = ACTIONS(477),
    [sym_binary_integer_literal] = ACTIONS(477),
    [sym_decimal_floating_point_literal] = ACTIONS(477),
    [sym_hex_floating_point_literal] = ACTIONS(479),
    [anon_sym_true] = ACTIONS(475),
    [anon_sym_false] = ACTIONS(475),
    [anon_sym_SQUOTE] = ACTIONS(475),
    [sym_string_literal] = ACTIONS(475),
    [sym_null_literal] = ACTIONS(475),
    [anon_sym_BANG] = ACTIONS(475),
    [anon_sym_TILDE] = ACTIONS(475),
    [anon_sym_PLUS_PLUS] = ACTIONS(475),
    [anon_sym_DASH_DASH] = ACTIONS(475),
    [anon_sym_if] = ACTIONS(475),
    [anon_sym_RBRACE] = ACTIONS(475),
    [anon_sym_elseif] = ACTIONS(475),
    [anon_sym_AT] = ACTIONS(475),
    [anon_sym_open] = ACTIONS(475),
    [anon_sym_module] = ACTIONS(475),
    [anon_sym_static] = ACTIONS(475),
    [anon_sym_package] = ACTIONS(475),
    [anon_sym_import] = ACTIONS(475),
    [anon_sym_class] = ACTIONS(475),
    [anon_sym_public] = ACTIONS(475),
    [anon_sym_protected] = ACTIONS(475),
    [anon_sym_private] = ACTIONS(475),
    [anon_sym_abstract] = ACTIONS(475),
    [anon_sym_final] = ACTIONS(475),
    [anon_sym_strictfp] = ACTIONS(475),
    [anon_sym_default] = ACTIONS(475),
    [sym_comment] = ACTIONS(42),
  },
  [144] = {
    [sym__expression] = STATE(215),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
    [anon_sym_PLUS_PLUS] = ACTIONS(215),
    [anon_sym_DASH_DASH] = ACTIONS(215),
    [sym_comment] = ACTIONS(42),
  },
  [145] = {
    [sym__expression] = STATE(216),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
    [anon_sym_PLUS_PLUS] = ACTIONS(215),
    [anon_sym_DASH_DASH] = ACTIONS(215),
    [sym_comment] = ACTIONS(42),
  },
  [146] = {
    [sym__expression] = STATE(217),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
    [anon_sym_PLUS_PLUS] = ACTIONS(215),
    [anon_sym_DASH_DASH] = ACTIONS(215),
    [sym_comment] = ACTIONS(42),
  },
  [147] = {
    [sym__expression] = STATE(218),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
    [anon_sym_PLUS_PLUS] = ACTIONS(215),
    [anon_sym_DASH_DASH] = ACTIONS(215),
    [sym_comment] = ACTIONS(42),
  },
  [148] = {
    [sym__expression] = STATE(219),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
    [anon_sym_PLUS_PLUS] = ACTIONS(215),
    [anon_sym_DASH_DASH] = ACTIONS(215),
    [sym_comment] = ACTIONS(42),
  },
  [149] = {
    [sym__expression] = STATE(87),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
    [anon_sym_PLUS_PLUS] = ACTIONS(215),
    [anon_sym_DASH_DASH] = ACTIONS(215),
    [sym_comment] = ACTIONS(42),
  },
  [150] = {
    [sym__expression] = STATE(220),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
    [anon_sym_PLUS_PLUS] = ACTIONS(215),
    [anon_sym_DASH_DASH] = ACTIONS(215),
    [sym_comment] = ACTIONS(42),
  },
  [151] = {
    [sym__expression] = STATE(221),
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
  [152] = {
    [anon_sym_LBRACE] = ACTIONS(481),
    [sym_comment] = ACTIONS(42),
  },
  [153] = {
    [sym__semicolon] = ACTIONS(483),
    [anon_sym_DOT] = ACTIONS(253),
    [sym_comment] = ACTIONS(42),
  },
  [154] = {
    [sym_superclass] = STATE(224),
    [sym_super_interfaces] = STATE(213),
    [sym_class_body] = STATE(214),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_extends] = ACTIONS(203),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [155] = {
    [sym__literal] = STATE(227),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(228),
    [sym__annotation] = STATE(227),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [sym_element_value] = STATE(229),
    [sym_element_value_array_initializer] = STATE(227),
    [sym_conditional_expression] = STATE(227),
    [sym_conditional_or_expression] = STATE(230),
    [sym_conditional_and_expression] = STATE(231),
    [sym_inclusive_or_expression] = STATE(232),
    [sym_exclusive_or_expression] = STATE(233),
    [sym_and_expression] = STATE(234),
    [sym_relational_expression] = STATE(235),
    [sym_equality_expression] = STATE(236),
    [sym_shift_expression] = STATE(237),
    [sym_additive_expression] = STATE(238),
    [sym_multiplicative_expression] = STATE(239),
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
    [anon_sym_BANG] = ACTIONS(485),
    [anon_sym_TILDE] = ACTIONS(485),
    [anon_sym_LBRACE] = ACTIONS(487),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(42),
  },
  [156] = {
    [sym__semicolon] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(489),
    [anon_sym_RBRACE] = ACTIONS(489),
    [anon_sym_COMMA] = ACTIONS(489),
    [anon_sym_LBRACK] = ACTIONS(489),
    [anon_sym_AT] = ACTIONS(489),
    [anon_sym_open] = ACTIONS(489),
    [anon_sym_module] = ACTIONS(489),
    [anon_sym_static] = ACTIONS(489),
    [anon_sym_package] = ACTIONS(489),
    [anon_sym_class] = ACTIONS(489),
    [anon_sym_public] = ACTIONS(489),
    [anon_sym_protected] = ACTIONS(489),
    [anon_sym_private] = ACTIONS(489),
    [anon_sym_abstract] = ACTIONS(489),
    [anon_sym_final] = ACTIONS(489),
    [anon_sym_strictfp] = ACTIONS(489),
    [anon_sym_default] = ACTIONS(489),
    [sym_result] = ACTIONS(489),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(489),
    [sym_comment] = ACTIONS(42),
  },
  [157] = {
    [sym__semicolon] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(491),
    [anon_sym_RBRACE] = ACTIONS(491),
    [anon_sym_COMMA] = ACTIONS(491),
    [anon_sym_LBRACK] = ACTIONS(491),
    [anon_sym_AT] = ACTIONS(491),
    [anon_sym_open] = ACTIONS(491),
    [anon_sym_module] = ACTIONS(491),
    [anon_sym_static] = ACTIONS(491),
    [anon_sym_package] = ACTIONS(491),
    [anon_sym_class] = ACTIONS(491),
    [anon_sym_public] = ACTIONS(491),
    [anon_sym_protected] = ACTIONS(491),
    [anon_sym_private] = ACTIONS(491),
    [anon_sym_abstract] = ACTIONS(491),
    [anon_sym_final] = ACTIONS(491),
    [anon_sym_strictfp] = ACTIONS(491),
    [anon_sym_default] = ACTIONS(491),
    [sym_result] = ACTIONS(491),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(491),
    [sym_comment] = ACTIONS(42),
  },
  [158] = {
    [sym_element_value_pair] = STATE(241),
    [sym_identifier] = ACTIONS(493),
    [sym_comment] = ACTIONS(42),
  },
  [159] = {
    [anon_sym_RPAREN] = ACTIONS(495),
    [anon_sym_COMMA] = ACTIONS(497),
    [sym_comment] = ACTIONS(42),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [sym_decimal_integer_literal] = ACTIONS(501),
    [sym_hex_integer_literal] = ACTIONS(501),
    [sym_octal_integer_literal] = ACTIONS(501),
    [sym_binary_integer_literal] = ACTIONS(501),
    [sym_decimal_floating_point_literal] = ACTIONS(501),
    [sym_hex_floating_point_literal] = ACTIONS(503),
    [anon_sym_true] = ACTIONS(499),
    [anon_sym_false] = ACTIONS(499),
    [anon_sym_SQUOTE] = ACTIONS(499),
    [sym_string_literal] = ACTIONS(499),
    [sym_null_literal] = ACTIONS(499),
    [anon_sym_BANG] = ACTIONS(499),
    [anon_sym_TILDE] = ACTIONS(499),
    [anon_sym_PLUS_PLUS] = ACTIONS(499),
    [anon_sym_DASH_DASH] = ACTIONS(499),
    [anon_sym_if] = ACTIONS(499),
    [anon_sym_RBRACE] = ACTIONS(499),
    [anon_sym_elseif] = ACTIONS(499),
    [anon_sym_AT] = ACTIONS(499),
    [anon_sym_open] = ACTIONS(499),
    [anon_sym_module] = ACTIONS(499),
    [anon_sym_static] = ACTIONS(499),
    [anon_sym_package] = ACTIONS(499),
    [anon_sym_import] = ACTIONS(499),
    [anon_sym_class] = ACTIONS(499),
    [anon_sym_public] = ACTIONS(499),
    [anon_sym_protected] = ACTIONS(499),
    [anon_sym_private] = ACTIONS(499),
    [anon_sym_abstract] = ACTIONS(499),
    [anon_sym_final] = ACTIONS(499),
    [anon_sym_strictfp] = ACTIONS(499),
    [anon_sym_default] = ACTIONS(499),
    [sym_comment] = ACTIONS(42),
  },
  [161] = {
    [sym_module_directive] = STATE(172),
    [anon_sym_RBRACE] = ACTIONS(505),
    [anon_sym_requires] = ACTIONS(257),
    [anon_sym_exports] = ACTIONS(259),
    [anon_sym_opens] = ACTIONS(259),
    [anon_sym_uses] = ACTIONS(261),
    [anon_sym_provides] = ACTIONS(263),
    [sym_comment] = ACTIONS(42),
  },
  [162] = {
    [sym__semicolon] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(507),
    [anon_sym_DOT] = ACTIONS(507),
    [sym_comment] = ACTIONS(42),
  },
  [163] = {
    [anon_sym_transitive] = ACTIONS(509),
    [anon_sym_static] = ACTIONS(509),
    [sym_identifier] = ACTIONS(511),
    [sym_comment] = ACTIONS(42),
  },
  [164] = {
    [sym__semicolon] = ACTIONS(513),
    [anon_sym_COMMA] = ACTIONS(513),
    [anon_sym_DOT] = ACTIONS(513),
    [sym_comment] = ACTIONS(42),
  },
  [165] = {
    [anon_sym_transitive] = ACTIONS(515),
    [anon_sym_static] = ACTIONS(515),
    [sym_identifier] = ACTIONS(517),
    [sym_comment] = ACTIONS(42),
  },
  [166] = {
    [sym__semicolon] = ACTIONS(519),
    [anon_sym_DOT] = ACTIONS(521),
    [sym_comment] = ACTIONS(42),
  },
  [167] = {
    [sym_requires_modifier] = STATE(246),
    [sym_module_name] = STATE(247),
    [anon_sym_transitive] = ACTIONS(369),
    [anon_sym_static] = ACTIONS(369),
    [sym_identifier] = ACTIONS(371),
    [sym_comment] = ACTIONS(42),
  },
  [168] = {
    [sym__semicolon] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_to] = ACTIONS(179),
    [sym_identifier] = ACTIONS(523),
    [sym_comment] = ACTIONS(42),
  },
  [169] = {
    [sym_module_name] = STATE(251),
    [aux_sym_module_directive_repeat2] = STATE(252),
    [sym__semicolon] = ACTIONS(519),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_DOT] = ACTIONS(527),
    [anon_sym_to] = ACTIONS(529),
    [sym_identifier] = ACTIONS(371),
    [sym_comment] = ACTIONS(42),
  },
  [170] = {
    [sym__semicolon] = ACTIONS(519),
    [anon_sym_DOT] = ACTIONS(531),
    [sym_comment] = ACTIONS(42),
  },
  [171] = {
    [anon_sym_DOT] = ACTIONS(531),
    [anon_sym_with] = ACTIONS(533),
    [sym_comment] = ACTIONS(42),
  },
  [172] = {
    [anon_sym_RBRACE] = ACTIONS(535),
    [anon_sym_requires] = ACTIONS(535),
    [anon_sym_exports] = ACTIONS(535),
    [anon_sym_opens] = ACTIONS(535),
    [anon_sym_uses] = ACTIONS(535),
    [anon_sym_provides] = ACTIONS(535),
    [sym_comment] = ACTIONS(42),
  },
  [173] = {
    [sym__semicolon] = ACTIONS(537),
    [sym_comment] = ACTIONS(42),
  },
  [174] = {
    [sym__semicolon] = ACTIONS(539),
    [anon_sym_DOT] = ACTIONS(353),
    [sym_comment] = ACTIONS(42),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(541),
    [sym_decimal_integer_literal] = ACTIONS(543),
    [sym_hex_integer_literal] = ACTIONS(543),
    [sym_octal_integer_literal] = ACTIONS(543),
    [sym_binary_integer_literal] = ACTIONS(543),
    [sym_decimal_floating_point_literal] = ACTIONS(543),
    [sym_hex_floating_point_literal] = ACTIONS(545),
    [anon_sym_true] = ACTIONS(541),
    [anon_sym_false] = ACTIONS(541),
    [anon_sym_SQUOTE] = ACTIONS(541),
    [sym_string_literal] = ACTIONS(541),
    [sym_null_literal] = ACTIONS(541),
    [anon_sym_BANG] = ACTIONS(541),
    [anon_sym_TILDE] = ACTIONS(541),
    [anon_sym_PLUS_PLUS] = ACTIONS(541),
    [anon_sym_DASH_DASH] = ACTIONS(541),
    [anon_sym_if] = ACTIONS(541),
    [anon_sym_RBRACE] = ACTIONS(541),
    [anon_sym_elseif] = ACTIONS(541),
    [anon_sym_AT] = ACTIONS(541),
    [anon_sym_open] = ACTIONS(541),
    [anon_sym_module] = ACTIONS(541),
    [anon_sym_static] = ACTIONS(541),
    [anon_sym_package] = ACTIONS(541),
    [anon_sym_import] = ACTIONS(541),
    [anon_sym_class] = ACTIONS(541),
    [anon_sym_public] = ACTIONS(541),
    [anon_sym_protected] = ACTIONS(541),
    [anon_sym_private] = ACTIONS(541),
    [anon_sym_abstract] = ACTIONS(541),
    [anon_sym_final] = ACTIONS(541),
    [anon_sym_strictfp] = ACTIONS(541),
    [anon_sym_default] = ACTIONS(541),
    [sym_comment] = ACTIONS(42),
  },
  [176] = {
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(177),
    [sym_identifier] = ACTIONS(179),
    [sym_comment] = ACTIONS(42),
  },
  [177] = {
    [anon_sym_LPAREN] = ACTIONS(547),
    [anon_sym_DOT] = ACTIONS(549),
    [anon_sym_AT] = ACTIONS(181),
    [sym_identifier] = ACTIONS(551),
    [sym_comment] = ACTIONS(42),
  },
  [178] = {
    [sym_class_or_interface_type] = STATE(258),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [aux_sym_class_or_interface_type_repeat1] = STATE(138),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(303),
    [sym_comment] = ACTIONS(42),
  },
  [179] = {
    [anon_sym_GT] = ACTIONS(553),
    [anon_sym_COMMA] = ACTIONS(553),
    [sym_comment] = ACTIONS(42),
  },
  [180] = {
    [anon_sym_LBRACE] = ACTIONS(555),
    [anon_sym_AT] = ACTIONS(555),
    [anon_sym_extends] = ACTIONS(555),
    [anon_sym_implements] = ACTIONS(555),
    [sym_result] = ACTIONS(555),
    [sym_comment] = ACTIONS(42),
  },
  [181] = {
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [sym_type_parameter] = STATE(259),
    [aux_sym_class_or_interface_type_repeat1] = STATE(119),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(285),
    [sym_comment] = ACTIONS(42),
  },
  [182] = {
    [anon_sym_GT] = ACTIONS(557),
    [anon_sym_COMMA] = ACTIONS(559),
    [sym_comment] = ACTIONS(42),
  },
  [183] = {
    [sym_type_bound] = STATE(261),
    [anon_sym_GT] = ACTIONS(553),
    [anon_sym_COMMA] = ACTIONS(553),
    [anon_sym_extends] = ACTIONS(393),
    [sym_comment] = ACTIONS(42),
  },
  [184] = {
    [anon_sym_AT] = ACTIONS(227),
    [sym_identifier] = ACTIONS(561),
    [sym_comment] = ACTIONS(42),
  },
  [185] = {
    [anon_sym_LPAREN] = ACTIONS(563),
    [sym_comment] = ACTIONS(42),
  },
  [186] = {
    [sym__semicolon] = ACTIONS(565),
    [anon_sym_LT] = ACTIONS(565),
    [anon_sym_LBRACE] = ACTIONS(565),
    [anon_sym_RBRACE] = ACTIONS(565),
    [anon_sym_AT] = ACTIONS(567),
    [anon_sym_static] = ACTIONS(567),
    [anon_sym_class] = ACTIONS(567),
    [anon_sym_public] = ACTIONS(567),
    [anon_sym_protected] = ACTIONS(567),
    [anon_sym_private] = ACTIONS(567),
    [anon_sym_abstract] = ACTIONS(567),
    [anon_sym_final] = ACTIONS(567),
    [anon_sym_strictfp] = ACTIONS(567),
    [anon_sym_default] = ACTIONS(567),
    [anon_sym_ATinterface] = ACTIONS(565),
    [anon_sym_interface] = ACTIONS(567),
    [sym_result] = ACTIONS(567),
    [sym_identifier] = ACTIONS(569),
    [sym_comment] = ACTIONS(42),
  },
  [187] = {
    [sym_package_or_type_name] = STATE(264),
    [sym_identifier] = ACTIONS(571),
    [sym_comment] = ACTIONS(42),
  },
  [188] = {
    [anon_sym_if] = ACTIONS(573),
    [anon_sym_RBRACE] = ACTIONS(573),
    [anon_sym_AT] = ACTIONS(573),
    [anon_sym_static] = ACTIONS(573),
    [anon_sym_class] = ACTIONS(573),
    [anon_sym_public] = ACTIONS(573),
    [anon_sym_protected] = ACTIONS(573),
    [anon_sym_private] = ACTIONS(573),
    [anon_sym_abstract] = ACTIONS(573),
    [anon_sym_final] = ACTIONS(573),
    [anon_sym_strictfp] = ACTIONS(573),
    [anon_sym_default] = ACTIONS(573),
    [sym_comment] = ACTIONS(42),
  },
  [189] = {
    [anon_sym_if] = ACTIONS(575),
    [anon_sym_RBRACE] = ACTIONS(575),
    [anon_sym_AT] = ACTIONS(575),
    [anon_sym_static] = ACTIONS(575),
    [anon_sym_class] = ACTIONS(575),
    [anon_sym_public] = ACTIONS(575),
    [anon_sym_protected] = ACTIONS(575),
    [anon_sym_private] = ACTIONS(575),
    [anon_sym_abstract] = ACTIONS(575),
    [anon_sym_final] = ACTIONS(575),
    [anon_sym_strictfp] = ACTIONS(575),
    [anon_sym_default] = ACTIONS(575),
    [sym_comment] = ACTIONS(42),
  },
  [190] = {
    [anon_sym_AT] = ACTIONS(125),
    [anon_sym_static] = ACTIONS(397),
    [anon_sym_class] = ACTIONS(397),
    [anon_sym_public] = ACTIONS(397),
    [anon_sym_protected] = ACTIONS(397),
    [anon_sym_private] = ACTIONS(397),
    [anon_sym_abstract] = ACTIONS(397),
    [anon_sym_final] = ACTIONS(397),
    [anon_sym_strictfp] = ACTIONS(397),
    [anon_sym_default] = ACTIONS(397),
    [sym_identifier] = ACTIONS(431),
    [sym_comment] = ACTIONS(42),
  },
  [191] = {
    [sym_variable_declarator_list] = STATE(266),
    [sym_variable_declarator] = STATE(267),
    [sym_variable_declarator_id] = STATE(268),
    [anon_sym_AT] = ACTIONS(151),
    [anon_sym_static] = ACTIONS(433),
    [anon_sym_class] = ACTIONS(433),
    [anon_sym_public] = ACTIONS(433),
    [anon_sym_protected] = ACTIONS(433),
    [anon_sym_private] = ACTIONS(433),
    [anon_sym_abstract] = ACTIONS(433),
    [anon_sym_final] = ACTIONS(433),
    [anon_sym_strictfp] = ACTIONS(433),
    [anon_sym_default] = ACTIONS(433),
    [sym_identifier] = ACTIONS(577),
    [sym_comment] = ACTIONS(42),
  },
  [192] = {
    [anon_sym_RBRACE] = ACTIONS(579),
    [sym_comment] = ACTIONS(42),
  },
  [193] = {
    [sym_statement] = STATE(188),
    [sym_if_then_statement] = STATE(189),
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(190),
    [sym_marker_annotation] = STATE(190),
    [sym_single_element_annotation] = STATE(190),
    [sym_class_declaration] = STATE(188),
    [sym_normal_class_declaration] = STATE(27),
    [sym_modifier] = STATE(191),
    [sym_block_statement] = STATE(270),
    [sym_local_variable_declaration_statement] = STATE(188),
    [sym_local_variable_declaration] = STATE(194),
    [aux_sym_normal_class_declaration_repeat1] = STATE(31),
    [aux_sym_block_statements_repeat1] = STATE(271),
    [anon_sym_if] = ACTIONS(411),
    [anon_sym_RBRACE] = ACTIONS(581),
    [anon_sym_AT] = ACTIONS(415),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [sym_comment] = ACTIONS(42),
  },
  [194] = {
    [sym__semicolon] = ACTIONS(583),
    [sym_comment] = ACTIONS(42),
  },
  [195] = {
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(179),
    [anon_sym_static] = ACTIONS(179),
    [anon_sym_class] = ACTIONS(179),
    [anon_sym_public] = ACTIONS(179),
    [anon_sym_protected] = ACTIONS(179),
    [anon_sym_private] = ACTIONS(179),
    [anon_sym_abstract] = ACTIONS(179),
    [anon_sym_final] = ACTIONS(179),
    [anon_sym_strictfp] = ACTIONS(179),
    [anon_sym_default] = ACTIONS(179),
    [anon_sym_ATinterface] = ACTIONS(177),
    [anon_sym_interface] = ACTIONS(179),
    [sym_identifier] = ACTIONS(523),
    [sym_comment] = ACTIONS(42),
  },
  [196] = {
    [anon_sym_LPAREN] = ACTIONS(585),
    [anon_sym_DOT] = ACTIONS(587),
    [anon_sym_AT] = ACTIONS(551),
    [anon_sym_static] = ACTIONS(551),
    [anon_sym_class] = ACTIONS(551),
    [anon_sym_public] = ACTIONS(551),
    [anon_sym_protected] = ACTIONS(551),
    [anon_sym_private] = ACTIONS(551),
    [anon_sym_abstract] = ACTIONS(551),
    [anon_sym_final] = ACTIONS(551),
    [anon_sym_strictfp] = ACTIONS(551),
    [anon_sym_default] = ACTIONS(551),
    [anon_sym_ATinterface] = ACTIONS(181),
    [anon_sym_interface] = ACTIONS(551),
    [sym_identifier] = ACTIONS(589),
    [sym_comment] = ACTIONS(42),
  },
  [197] = {
    [sym_type_parameters] = STATE(276),
    [sym_superclass] = STATE(277),
    [sym_super_interfaces] = STATE(278),
    [sym_class_body] = STATE(279),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(591),
    [anon_sym_extends] = ACTIONS(203),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [198] = {
    [sym_annotation_type_body] = STATE(281),
    [anon_sym_LBRACE] = ACTIONS(593),
    [sym_comment] = ACTIONS(42),
  },
  [199] = {
    [sym_type_parameters] = STATE(284),
    [sym_extends_interfaces] = STATE(285),
    [sym_interface_body] = STATE(286),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(595),
    [anon_sym_extends] = ACTIONS(597),
    [sym_comment] = ACTIONS(42),
  },
  [200] = {
    [sym_identifier] = ACTIONS(599),
    [sym_comment] = ACTIONS(42),
  },
  [201] = {
    [sym_identifier] = ACTIONS(601),
    [sym_comment] = ACTIONS(42),
  },
  [202] = {
    [sym_identifier] = ACTIONS(603),
    [sym_comment] = ACTIONS(42),
  },
  [203] = {
    [anon_sym_AT] = ACTIONS(605),
    [anon_sym_static] = ACTIONS(605),
    [anon_sym_class] = ACTIONS(605),
    [anon_sym_public] = ACTIONS(605),
    [anon_sym_protected] = ACTIONS(605),
    [anon_sym_private] = ACTIONS(605),
    [anon_sym_abstract] = ACTIONS(605),
    [anon_sym_final] = ACTIONS(605),
    [anon_sym_strictfp] = ACTIONS(605),
    [anon_sym_default] = ACTIONS(605),
    [anon_sym_ATinterface] = ACTIONS(231),
    [anon_sym_interface] = ACTIONS(605),
    [sym_identifier] = ACTIONS(607),
    [sym_comment] = ACTIONS(42),
  },
  [204] = {
    [ts_builtin_sym_end] = ACTIONS(609),
    [sym_decimal_integer_literal] = ACTIONS(611),
    [sym_hex_integer_literal] = ACTIONS(611),
    [sym_octal_integer_literal] = ACTIONS(611),
    [sym_binary_integer_literal] = ACTIONS(611),
    [sym_decimal_floating_point_literal] = ACTIONS(611),
    [sym_hex_floating_point_literal] = ACTIONS(613),
    [anon_sym_true] = ACTIONS(609),
    [anon_sym_false] = ACTIONS(609),
    [anon_sym_SQUOTE] = ACTIONS(609),
    [sym_string_literal] = ACTIONS(609),
    [sym_null_literal] = ACTIONS(609),
    [anon_sym_BANG] = ACTIONS(609),
    [anon_sym_TILDE] = ACTIONS(609),
    [anon_sym_PLUS_PLUS] = ACTIONS(609),
    [anon_sym_DASH_DASH] = ACTIONS(609),
    [anon_sym_if] = ACTIONS(609),
    [anon_sym_RBRACE] = ACTIONS(609),
    [anon_sym_elseif] = ACTIONS(609),
    [anon_sym_AT] = ACTIONS(609),
    [anon_sym_open] = ACTIONS(609),
    [anon_sym_module] = ACTIONS(609),
    [anon_sym_static] = ACTIONS(609),
    [anon_sym_package] = ACTIONS(609),
    [anon_sym_import] = ACTIONS(609),
    [anon_sym_class] = ACTIONS(609),
    [anon_sym_public] = ACTIONS(609),
    [anon_sym_protected] = ACTIONS(609),
    [anon_sym_private] = ACTIONS(609),
    [anon_sym_abstract] = ACTIONS(609),
    [anon_sym_final] = ACTIONS(609),
    [anon_sym_strictfp] = ACTIONS(609),
    [anon_sym_default] = ACTIONS(609),
    [sym_comment] = ACTIONS(42),
  },
  [205] = {
    [sym__semicolon] = ACTIONS(615),
    [anon_sym_LBRACE] = ACTIONS(615),
    [anon_sym_RBRACE] = ACTIONS(615),
    [anon_sym_AT] = ACTIONS(617),
    [anon_sym_static] = ACTIONS(615),
    [anon_sym_class] = ACTIONS(615),
    [anon_sym_public] = ACTIONS(615),
    [anon_sym_protected] = ACTIONS(615),
    [anon_sym_private] = ACTIONS(615),
    [anon_sym_abstract] = ACTIONS(615),
    [anon_sym_final] = ACTIONS(615),
    [anon_sym_strictfp] = ACTIONS(615),
    [anon_sym_default] = ACTIONS(615),
    [anon_sym_ATinterface] = ACTIONS(615),
    [anon_sym_interface] = ACTIONS(615),
    [sym_comment] = ACTIONS(42),
  },
  [206] = {
    [sym_type_argument] = STATE(294),
    [sym_reference_type] = STATE(295),
    [sym_class_or_interface_type] = STATE(296),
    [sym_primitive_type] = STATE(297),
    [sym_integral_type] = STATE(290),
    [sym_floating_point_type] = STATE(290),
    [sym__annotation] = STATE(298),
    [sym_normal_annotation] = STATE(299),
    [sym_marker_annotation] = STATE(299),
    [sym_single_element_annotation] = STATE(299),
    [aux_sym_class_or_interface_type_repeat1] = STATE(300),
    [anon_sym_boolean] = ACTIONS(619),
    [anon_sym_byte] = ACTIONS(621),
    [anon_sym_short] = ACTIONS(621),
    [anon_sym_int] = ACTIONS(621),
    [anon_sym_long] = ACTIONS(621),
    [anon_sym_char] = ACTIONS(621),
    [anon_sym_float] = ACTIONS(623),
    [anon_sym_double] = ACTIONS(623),
    [anon_sym_AT] = ACTIONS(625),
    [sym_identifier] = ACTIONS(627),
    [sym_comment] = ACTIONS(42),
  },
  [207] = {
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [aux_sym_class_or_interface_type_repeat1] = STATE(302),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(629),
    [sym_comment] = ACTIONS(42),
  },
  [208] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(303),
    [anon_sym_GT] = ACTIONS(631),
    [anon_sym_AMP] = ACTIONS(631),
    [anon_sym_LBRACE] = ACTIONS(631),
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_DOT] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(631),
    [anon_sym_AT] = ACTIONS(631),
    [anon_sym_implements] = ACTIONS(631),
    [sym_comment] = ACTIONS(42),
  },
  [209] = {
    [anon_sym_GT] = ACTIONS(631),
    [anon_sym_AMP] = ACTIONS(631),
    [anon_sym_LBRACE] = ACTIONS(631),
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_DOT] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(631),
    [anon_sym_AT] = ACTIONS(631),
    [anon_sym_implements] = ACTIONS(631),
    [sym_comment] = ACTIONS(42),
  },
  [210] = {
    [sym_type_arguments] = STATE(305),
    [aux_sym_class_or_interface_type_repeat2] = STATE(303),
    [anon_sym_GT] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(461),
    [anon_sym_AMP] = ACTIONS(631),
    [anon_sym_LBRACE] = ACTIONS(631),
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_DOT] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(631),
    [anon_sym_AT] = ACTIONS(631),
    [anon_sym_implements] = ACTIONS(631),
    [sym_comment] = ACTIONS(42),
  },
  [211] = {
    [sym_class_or_interface_type] = STATE(306),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [aux_sym_class_or_interface_type_repeat1] = STATE(138),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(303),
    [sym_comment] = ACTIONS(42),
  },
  [212] = {
    [anon_sym_LBRACE] = ACTIONS(635),
    [anon_sym_COMMA] = ACTIONS(637),
    [sym_comment] = ACTIONS(42),
  },
  [213] = {
    [sym_class_body] = STATE(308),
    [anon_sym_LBRACE] = ACTIONS(201),
    [sym_comment] = ACTIONS(42),
  },
  [214] = {
    [ts_builtin_sym_end] = ACTIONS(639),
    [sym_decimal_integer_literal] = ACTIONS(641),
    [sym_hex_integer_literal] = ACTIONS(641),
    [sym_octal_integer_literal] = ACTIONS(641),
    [sym_binary_integer_literal] = ACTIONS(641),
    [sym_decimal_floating_point_literal] = ACTIONS(641),
    [sym_hex_floating_point_literal] = ACTIONS(643),
    [anon_sym_true] = ACTIONS(639),
    [anon_sym_false] = ACTIONS(639),
    [anon_sym_SQUOTE] = ACTIONS(639),
    [sym_string_literal] = ACTIONS(639),
    [sym_null_literal] = ACTIONS(639),
    [anon_sym_BANG] = ACTIONS(639),
    [anon_sym_TILDE] = ACTIONS(639),
    [anon_sym_PLUS_PLUS] = ACTIONS(639),
    [anon_sym_DASH_DASH] = ACTIONS(639),
    [anon_sym_if] = ACTIONS(639),
    [anon_sym_RBRACE] = ACTIONS(639),
    [anon_sym_elseif] = ACTIONS(639),
    [anon_sym_AT] = ACTIONS(639),
    [anon_sym_open] = ACTIONS(639),
    [anon_sym_module] = ACTIONS(639),
    [anon_sym_static] = ACTIONS(639),
    [anon_sym_package] = ACTIONS(639),
    [anon_sym_import] = ACTIONS(639),
    [anon_sym_class] = ACTIONS(639),
    [anon_sym_public] = ACTIONS(639),
    [anon_sym_protected] = ACTIONS(639),
    [anon_sym_private] = ACTIONS(639),
    [anon_sym_abstract] = ACTIONS(639),
    [anon_sym_final] = ACTIONS(639),
    [anon_sym_strictfp] = ACTIONS(639),
    [anon_sym_default] = ACTIONS(639),
    [sym_comment] = ACTIONS(42),
  },
  [215] = {
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PLUS_EQ] = ACTIONS(319),
    [anon_sym_DASH_EQ] = ACTIONS(319),
    [anon_sym_STAR_EQ] = ACTIONS(319),
    [anon_sym_SLASH_EQ] = ACTIONS(319),
    [anon_sym_AMP_EQ] = ACTIONS(319),
    [anon_sym_PIPE_EQ] = ACTIONS(319),
    [anon_sym_CARET_EQ] = ACTIONS(319),
    [anon_sym_PERCENT_EQ] = ACTIONS(319),
    [anon_sym_LT_LT_EQ] = ACTIONS(319),
    [anon_sym_GT_GT_EQ] = ACTIONS(319),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_CARET] = ACTIONS(335),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_GT_GT_GT] = ACTIONS(331),
    [anon_sym_QMARK] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(311),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [216] = {
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(315),
    [anon_sym_LT] = ACTIONS(315),
    [anon_sym_EQ_EQ] = ACTIONS(313),
    [anon_sym_GT_EQ] = ACTIONS(313),
    [anon_sym_LT_EQ] = ACTIONS(313),
    [anon_sym_BANG_EQ] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_GT_GT_GT] = ACTIONS(331),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [217] = {
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_GT_GT_GT] = ACTIONS(331),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [218] = {
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_GT_GT_GT] = ACTIONS(331),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [219] = {
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_GT_GT_GT] = ACTIONS(331),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [220] = {
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PLUS_EQ] = ACTIONS(319),
    [anon_sym_DASH_EQ] = ACTIONS(319),
    [anon_sym_STAR_EQ] = ACTIONS(319),
    [anon_sym_SLASH_EQ] = ACTIONS(319),
    [anon_sym_AMP_EQ] = ACTIONS(319),
    [anon_sym_PIPE_EQ] = ACTIONS(319),
    [anon_sym_CARET_EQ] = ACTIONS(319),
    [anon_sym_PERCENT_EQ] = ACTIONS(319),
    [anon_sym_LT_LT_EQ] = ACTIONS(319),
    [anon_sym_GT_GT_EQ] = ACTIONS(319),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_CARET] = ACTIONS(335),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_GT_GT_GT] = ACTIONS(331),
    [anon_sym_QMARK] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(645),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [221] = {
    [sym__semicolon] = ACTIONS(647),
    [anon_sym_EQ] = ACTIONS(649),
    [anon_sym_PLUS_EQ] = ACTIONS(647),
    [anon_sym_DASH_EQ] = ACTIONS(647),
    [anon_sym_STAR_EQ] = ACTIONS(647),
    [anon_sym_SLASH_EQ] = ACTIONS(647),
    [anon_sym_AMP_EQ] = ACTIONS(647),
    [anon_sym_PIPE_EQ] = ACTIONS(647),
    [anon_sym_CARET_EQ] = ACTIONS(647),
    [anon_sym_PERCENT_EQ] = ACTIONS(647),
    [anon_sym_LT_LT_EQ] = ACTIONS(647),
    [anon_sym_GT_GT_EQ] = ACTIONS(647),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(647),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_EQ_EQ] = ACTIONS(94),
    [anon_sym_GT_EQ] = ACTIONS(94),
    [anon_sym_LT_EQ] = ACTIONS(94),
    [anon_sym_BANG_EQ] = ACTIONS(94),
    [anon_sym_AMP_AMP] = ACTIONS(96),
    [anon_sym_PIPE_PIPE] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_AMP] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(106),
    [anon_sym_CARET] = ACTIONS(106),
    [anon_sym_PERCENT] = ACTIONS(102),
    [anon_sym_LT_LT] = ACTIONS(102),
    [anon_sym_GT_GT] = ACTIONS(102),
    [anon_sym_GT_GT_GT] = ACTIONS(102),
    [anon_sym_QMARK] = ACTIONS(108),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [222] = {
    [sym_module_directive] = STATE(108),
    [aux_sym_module_declaration_repeat1] = STATE(310),
    [anon_sym_RBRACE] = ACTIONS(505),
    [anon_sym_requires] = ACTIONS(257),
    [anon_sym_exports] = ACTIONS(259),
    [anon_sym_opens] = ACTIONS(259),
    [anon_sym_uses] = ACTIONS(261),
    [anon_sym_provides] = ACTIONS(263),
    [sym_comment] = ACTIONS(42),
  },
  [223] = {
    [ts_builtin_sym_end] = ACTIONS(651),
    [sym_decimal_integer_literal] = ACTIONS(653),
    [sym_hex_integer_literal] = ACTIONS(653),
    [sym_octal_integer_literal] = ACTIONS(653),
    [sym_binary_integer_literal] = ACTIONS(653),
    [sym_decimal_floating_point_literal] = ACTIONS(653),
    [sym_hex_floating_point_literal] = ACTIONS(655),
    [anon_sym_true] = ACTIONS(651),
    [anon_sym_false] = ACTIONS(651),
    [anon_sym_SQUOTE] = ACTIONS(651),
    [sym_string_literal] = ACTIONS(651),
    [sym_null_literal] = ACTIONS(651),
    [anon_sym_BANG] = ACTIONS(651),
    [anon_sym_TILDE] = ACTIONS(651),
    [anon_sym_PLUS_PLUS] = ACTIONS(651),
    [anon_sym_DASH_DASH] = ACTIONS(651),
    [anon_sym_if] = ACTIONS(651),
    [anon_sym_RBRACE] = ACTIONS(651),
    [anon_sym_elseif] = ACTIONS(651),
    [anon_sym_AT] = ACTIONS(651),
    [anon_sym_open] = ACTIONS(651),
    [anon_sym_module] = ACTIONS(651),
    [anon_sym_static] = ACTIONS(651),
    [anon_sym_package] = ACTIONS(651),
    [anon_sym_import] = ACTIONS(651),
    [anon_sym_class] = ACTIONS(651),
    [anon_sym_public] = ACTIONS(651),
    [anon_sym_protected] = ACTIONS(651),
    [anon_sym_private] = ACTIONS(651),
    [anon_sym_abstract] = ACTIONS(651),
    [anon_sym_final] = ACTIONS(651),
    [anon_sym_strictfp] = ACTIONS(651),
    [anon_sym_default] = ACTIONS(651),
    [sym_comment] = ACTIONS(42),
  },
  [224] = {
    [sym_super_interfaces] = STATE(311),
    [sym_class_body] = STATE(308),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [225] = {
    [sym__expression] = STATE(314),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(657),
    [anon_sym_TILDE] = ACTIONS(657),
    [anon_sym_PLUS_PLUS] = ACTIONS(659),
    [anon_sym_DASH_DASH] = ACTIONS(659),
    [sym_comment] = ACTIONS(42),
  },
  [226] = {
    [sym__literal] = STATE(227),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(228),
    [sym__annotation] = STATE(227),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [sym_element_value] = STATE(318),
    [sym_element_value_array_initializer] = STATE(227),
    [sym_conditional_expression] = STATE(227),
    [sym_conditional_or_expression] = STATE(319),
    [sym_conditional_and_expression] = STATE(320),
    [sym_inclusive_or_expression] = STATE(321),
    [sym_exclusive_or_expression] = STATE(322),
    [sym_and_expression] = STATE(234),
    [sym_relational_expression] = STATE(323),
    [sym_equality_expression] = STATE(324),
    [sym_shift_expression] = STATE(325),
    [sym_additive_expression] = STATE(326),
    [sym_multiplicative_expression] = STATE(327),
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
    [anon_sym_BANG] = ACTIONS(661),
    [anon_sym_TILDE] = ACTIONS(661),
    [anon_sym_LBRACE] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(663),
    [anon_sym_COMMA] = ACTIONS(665),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(42),
  },
  [227] = {
    [sym__semicolon] = ACTIONS(667),
    [anon_sym_RPAREN] = ACTIONS(667),
    [anon_sym_RBRACE] = ACTIONS(667),
    [anon_sym_COMMA] = ACTIONS(667),
    [sym_comment] = ACTIONS(42),
  },
  [228] = {
    [sym__semicolon] = ACTIONS(669),
    [anon_sym_LT] = ACTIONS(671),
    [anon_sym_EQ_EQ] = ACTIONS(669),
    [anon_sym_BANG_EQ] = ACTIONS(669),
    [anon_sym_AMP_AMP] = ACTIONS(669),
    [anon_sym_PIPE_PIPE] = ACTIONS(669),
    [anon_sym_PLUS] = ACTIONS(669),
    [anon_sym_DASH] = ACTIONS(669),
    [anon_sym_STAR] = ACTIONS(669),
    [anon_sym_SLASH] = ACTIONS(671),
    [anon_sym_PIPE] = ACTIONS(671),
    [anon_sym_CARET] = ACTIONS(669),
    [anon_sym_PERCENT] = ACTIONS(669),
    [anon_sym_LT_LT] = ACTIONS(669),
    [anon_sym_GT_GT] = ACTIONS(671),
    [anon_sym_GT_GT_GT] = ACTIONS(669),
    [anon_sym_QMARK] = ACTIONS(669),
    [anon_sym_RPAREN] = ACTIONS(669),
    [anon_sym_RBRACE] = ACTIONS(669),
    [anon_sym_COMMA] = ACTIONS(669),
    [sym_comment] = ACTIONS(42),
  },
  [229] = {
    [anon_sym_RPAREN] = ACTIONS(673),
    [anon_sym_COMMA] = ACTIONS(673),
    [sym_comment] = ACTIONS(42),
  },
  [230] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_QMARK] = ACTIONS(677),
    [anon_sym_RPAREN] = ACTIONS(679),
    [anon_sym_COMMA] = ACTIONS(679),
    [sym_comment] = ACTIONS(42),
  },
  [231] = {
    [anon_sym_AMP_AMP] = ACTIONS(681),
    [anon_sym_PIPE_PIPE] = ACTIONS(683),
    [anon_sym_QMARK] = ACTIONS(683),
    [anon_sym_RPAREN] = ACTIONS(683),
    [anon_sym_COMMA] = ACTIONS(683),
    [sym_comment] = ACTIONS(42),
  },
  [232] = {
    [anon_sym_AMP_AMP] = ACTIONS(685),
    [anon_sym_PIPE_PIPE] = ACTIONS(685),
    [anon_sym_PIPE] = ACTIONS(687),
    [anon_sym_QMARK] = ACTIONS(685),
    [anon_sym_RPAREN] = ACTIONS(685),
    [anon_sym_COMMA] = ACTIONS(685),
    [sym_comment] = ACTIONS(42),
  },
  [233] = {
    [anon_sym_AMP_AMP] = ACTIONS(689),
    [anon_sym_PIPE_PIPE] = ACTIONS(689),
    [anon_sym_PIPE] = ACTIONS(691),
    [anon_sym_CARET] = ACTIONS(693),
    [anon_sym_QMARK] = ACTIONS(689),
    [anon_sym_RPAREN] = ACTIONS(689),
    [anon_sym_COMMA] = ACTIONS(689),
    [sym_comment] = ACTIONS(42),
  },
  [234] = {
    [sym__semicolon] = ACTIONS(695),
    [anon_sym_AMP_AMP] = ACTIONS(695),
    [anon_sym_PIPE_PIPE] = ACTIONS(695),
    [anon_sym_PIPE] = ACTIONS(697),
    [anon_sym_CARET] = ACTIONS(695),
    [anon_sym_QMARK] = ACTIONS(695),
    [anon_sym_RPAREN] = ACTIONS(695),
    [anon_sym_RBRACE] = ACTIONS(695),
    [anon_sym_COMMA] = ACTIONS(695),
    [sym_comment] = ACTIONS(42),
  },
  [235] = {
    [anon_sym_LT] = ACTIONS(699),
    [anon_sym_EQ_EQ] = ACTIONS(701),
    [anon_sym_BANG_EQ] = ACTIONS(701),
    [anon_sym_AMP_AMP] = ACTIONS(703),
    [anon_sym_PIPE_PIPE] = ACTIONS(703),
    [anon_sym_PIPE] = ACTIONS(705),
    [anon_sym_CARET] = ACTIONS(703),
    [anon_sym_QMARK] = ACTIONS(703),
    [anon_sym_RPAREN] = ACTIONS(703),
    [anon_sym_COMMA] = ACTIONS(703),
    [sym_comment] = ACTIONS(42),
  },
  [236] = {
    [anon_sym_EQ_EQ] = ACTIONS(707),
    [anon_sym_BANG_EQ] = ACTIONS(707),
    [sym_comment] = ACTIONS(42),
  },
  [237] = {
    [anon_sym_LT] = ACTIONS(709),
    [anon_sym_EQ_EQ] = ACTIONS(711),
    [anon_sym_BANG_EQ] = ACTIONS(711),
    [anon_sym_AMP_AMP] = ACTIONS(711),
    [anon_sym_PIPE_PIPE] = ACTIONS(711),
    [anon_sym_PIPE] = ACTIONS(709),
    [anon_sym_CARET] = ACTIONS(711),
    [anon_sym_LT_LT] = ACTIONS(713),
    [anon_sym_GT_GT] = ACTIONS(715),
    [anon_sym_GT_GT_GT] = ACTIONS(713),
    [anon_sym_QMARK] = ACTIONS(711),
    [anon_sym_RPAREN] = ACTIONS(711),
    [anon_sym_COMMA] = ACTIONS(711),
    [sym_comment] = ACTIONS(42),
  },
  [238] = {
    [anon_sym_LT] = ACTIONS(717),
    [anon_sym_EQ_EQ] = ACTIONS(719),
    [anon_sym_BANG_EQ] = ACTIONS(719),
    [anon_sym_AMP_AMP] = ACTIONS(719),
    [anon_sym_PIPE_PIPE] = ACTIONS(719),
    [anon_sym_PLUS] = ACTIONS(721),
    [anon_sym_DASH] = ACTIONS(721),
    [anon_sym_PIPE] = ACTIONS(717),
    [anon_sym_CARET] = ACTIONS(719),
    [anon_sym_LT_LT] = ACTIONS(719),
    [anon_sym_GT_GT] = ACTIONS(717),
    [anon_sym_GT_GT_GT] = ACTIONS(719),
    [anon_sym_QMARK] = ACTIONS(719),
    [anon_sym_RPAREN] = ACTIONS(719),
    [anon_sym_COMMA] = ACTIONS(719),
    [sym_comment] = ACTIONS(42),
  },
  [239] = {
    [anon_sym_LT] = ACTIONS(723),
    [anon_sym_EQ_EQ] = ACTIONS(725),
    [anon_sym_BANG_EQ] = ACTIONS(725),
    [anon_sym_AMP_AMP] = ACTIONS(725),
    [anon_sym_PIPE_PIPE] = ACTIONS(725),
    [anon_sym_PLUS] = ACTIONS(725),
    [anon_sym_DASH] = ACTIONS(725),
    [anon_sym_STAR] = ACTIONS(727),
    [anon_sym_SLASH] = ACTIONS(729),
    [anon_sym_PIPE] = ACTIONS(723),
    [anon_sym_CARET] = ACTIONS(725),
    [anon_sym_PERCENT] = ACTIONS(727),
    [anon_sym_LT_LT] = ACTIONS(725),
    [anon_sym_GT_GT] = ACTIONS(723),
    [anon_sym_GT_GT_GT] = ACTIONS(725),
    [anon_sym_QMARK] = ACTIONS(725),
    [anon_sym_RPAREN] = ACTIONS(725),
    [anon_sym_COMMA] = ACTIONS(725),
    [sym_comment] = ACTIONS(42),
  },
  [240] = {
    [anon_sym_EQ] = ACTIONS(343),
    [sym_comment] = ACTIONS(42),
  },
  [241] = {
    [anon_sym_RPAREN] = ACTIONS(731),
    [anon_sym_COMMA] = ACTIONS(731),
    [sym_comment] = ACTIONS(42),
  },
  [242] = {
    [sym_element_value_pair] = STATE(338),
    [sym_identifier] = ACTIONS(493),
    [sym_comment] = ACTIONS(42),
  },
  [243] = {
    [ts_builtin_sym_end] = ACTIONS(733),
    [sym_decimal_integer_literal] = ACTIONS(735),
    [sym_hex_integer_literal] = ACTIONS(735),
    [sym_octal_integer_literal] = ACTIONS(735),
    [sym_binary_integer_literal] = ACTIONS(735),
    [sym_decimal_floating_point_literal] = ACTIONS(735),
    [sym_hex_floating_point_literal] = ACTIONS(737),
    [anon_sym_true] = ACTIONS(733),
    [anon_sym_false] = ACTIONS(733),
    [anon_sym_SQUOTE] = ACTIONS(733),
    [sym_string_literal] = ACTIONS(733),
    [sym_null_literal] = ACTIONS(733),
    [anon_sym_BANG] = ACTIONS(733),
    [anon_sym_TILDE] = ACTIONS(733),
    [anon_sym_PLUS_PLUS] = ACTIONS(733),
    [anon_sym_DASH_DASH] = ACTIONS(733),
    [anon_sym_if] = ACTIONS(733),
    [anon_sym_RBRACE] = ACTIONS(733),
    [anon_sym_elseif] = ACTIONS(733),
    [anon_sym_AT] = ACTIONS(733),
    [anon_sym_open] = ACTIONS(733),
    [anon_sym_module] = ACTIONS(733),
    [anon_sym_static] = ACTIONS(733),
    [anon_sym_package] = ACTIONS(733),
    [anon_sym_import] = ACTIONS(733),
    [anon_sym_class] = ACTIONS(733),
    [anon_sym_public] = ACTIONS(733),
    [anon_sym_protected] = ACTIONS(733),
    [anon_sym_private] = ACTIONS(733),
    [anon_sym_abstract] = ACTIONS(733),
    [anon_sym_final] = ACTIONS(733),
    [anon_sym_strictfp] = ACTIONS(733),
    [anon_sym_default] = ACTIONS(733),
    [sym_comment] = ACTIONS(42),
  },
  [244] = {
    [anon_sym_RBRACE] = ACTIONS(739),
    [anon_sym_requires] = ACTIONS(739),
    [anon_sym_exports] = ACTIONS(739),
    [anon_sym_opens] = ACTIONS(739),
    [anon_sym_uses] = ACTIONS(739),
    [anon_sym_provides] = ACTIONS(739),
    [sym_comment] = ACTIONS(42),
  },
  [245] = {
    [sym_identifier] = ACTIONS(741),
    [sym_comment] = ACTIONS(42),
  },
  [246] = {
    [anon_sym_transitive] = ACTIONS(743),
    [anon_sym_static] = ACTIONS(743),
    [sym_identifier] = ACTIONS(745),
    [sym_comment] = ACTIONS(42),
  },
  [247] = {
    [sym__semicolon] = ACTIONS(747),
    [anon_sym_DOT] = ACTIONS(521),
    [sym_comment] = ACTIONS(42),
  },
  [248] = {
    [sym_module_name] = STATE(341),
    [sym_identifier] = ACTIONS(749),
    [sym_comment] = ACTIONS(42),
  },
  [249] = {
    [sym_identifier] = ACTIONS(751),
    [sym_comment] = ACTIONS(42),
  },
  [250] = {
    [sym_module_name] = STATE(343),
    [aux_sym_module_directive_repeat2] = STATE(344),
    [sym__semicolon] = ACTIONS(747),
    [anon_sym_COMMA] = ACTIONS(525),
    [sym_identifier] = ACTIONS(749),
    [sym_comment] = ACTIONS(42),
  },
  [251] = {
    [aux_sym_module_directive_repeat2] = STATE(344),
    [sym__semicolon] = ACTIONS(747),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_DOT] = ACTIONS(521),
    [sym_comment] = ACTIONS(42),
  },
  [252] = {
    [sym__semicolon] = ACTIONS(747),
    [anon_sym_COMMA] = ACTIONS(753),
    [sym_comment] = ACTIONS(42),
  },
  [253] = {
    [sym_package_or_type_name] = STATE(346),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(42),
  },
  [254] = {
    [ts_builtin_sym_end] = ACTIONS(755),
    [sym_decimal_integer_literal] = ACTIONS(757),
    [sym_hex_integer_literal] = ACTIONS(757),
    [sym_octal_integer_literal] = ACTIONS(757),
    [sym_binary_integer_literal] = ACTIONS(757),
    [sym_decimal_floating_point_literal] = ACTIONS(757),
    [sym_hex_floating_point_literal] = ACTIONS(759),
    [anon_sym_true] = ACTIONS(755),
    [anon_sym_false] = ACTIONS(755),
    [anon_sym_SQUOTE] = ACTIONS(755),
    [sym_string_literal] = ACTIONS(755),
    [sym_null_literal] = ACTIONS(755),
    [anon_sym_BANG] = ACTIONS(755),
    [anon_sym_TILDE] = ACTIONS(755),
    [anon_sym_PLUS_PLUS] = ACTIONS(755),
    [anon_sym_DASH_DASH] = ACTIONS(755),
    [anon_sym_if] = ACTIONS(755),
    [anon_sym_RBRACE] = ACTIONS(755),
    [anon_sym_elseif] = ACTIONS(755),
    [anon_sym_AT] = ACTIONS(755),
    [anon_sym_open] = ACTIONS(755),
    [anon_sym_module] = ACTIONS(755),
    [anon_sym_static] = ACTIONS(755),
    [anon_sym_package] = ACTIONS(755),
    [anon_sym_import] = ACTIONS(755),
    [anon_sym_class] = ACTIONS(755),
    [anon_sym_public] = ACTIONS(755),
    [anon_sym_protected] = ACTIONS(755),
    [anon_sym_private] = ACTIONS(755),
    [anon_sym_abstract] = ACTIONS(755),
    [anon_sym_final] = ACTIONS(755),
    [anon_sym_strictfp] = ACTIONS(755),
    [anon_sym_default] = ACTIONS(755),
    [sym_comment] = ACTIONS(42),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(761),
    [sym_decimal_integer_literal] = ACTIONS(763),
    [sym_hex_integer_literal] = ACTIONS(763),
    [sym_octal_integer_literal] = ACTIONS(763),
    [sym_binary_integer_literal] = ACTIONS(763),
    [sym_decimal_floating_point_literal] = ACTIONS(763),
    [sym_hex_floating_point_literal] = ACTIONS(765),
    [anon_sym_true] = ACTIONS(761),
    [anon_sym_false] = ACTIONS(761),
    [anon_sym_SQUOTE] = ACTIONS(761),
    [sym_string_literal] = ACTIONS(761),
    [sym_null_literal] = ACTIONS(761),
    [anon_sym_BANG] = ACTIONS(761),
    [anon_sym_TILDE] = ACTIONS(761),
    [anon_sym_PLUS_PLUS] = ACTIONS(761),
    [anon_sym_DASH_DASH] = ACTIONS(761),
    [anon_sym_if] = ACTIONS(761),
    [anon_sym_RBRACE] = ACTIONS(761),
    [anon_sym_elseif] = ACTIONS(761),
    [anon_sym_AT] = ACTIONS(761),
    [anon_sym_open] = ACTIONS(761),
    [anon_sym_module] = ACTIONS(761),
    [anon_sym_static] = ACTIONS(761),
    [anon_sym_package] = ACTIONS(761),
    [anon_sym_import] = ACTIONS(761),
    [anon_sym_class] = ACTIONS(761),
    [anon_sym_public] = ACTIONS(761),
    [anon_sym_protected] = ACTIONS(761),
    [anon_sym_private] = ACTIONS(761),
    [anon_sym_abstract] = ACTIONS(761),
    [anon_sym_final] = ACTIONS(761),
    [anon_sym_strictfp] = ACTIONS(761),
    [anon_sym_default] = ACTIONS(761),
    [sym_comment] = ACTIONS(42),
  },
  [256] = {
    [sym__literal] = STATE(349),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(350),
    [sym_element_value_pair] = STATE(98),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(237),
    [anon_sym_false] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(767),
    [sym_identifier] = ACTIONS(769),
    [sym_comment] = ACTIONS(42),
  },
  [257] = {
    [sym_identifier] = ACTIONS(771),
    [sym_comment] = ACTIONS(42),
  },
  [258] = {
    [aux_sym_type_bound_repeat1] = STATE(353),
    [anon_sym_GT] = ACTIONS(773),
    [anon_sym_AMP] = ACTIONS(775),
    [anon_sym_COMMA] = ACTIONS(773),
    [sym_comment] = ACTIONS(42),
  },
  [259] = {
    [anon_sym_GT] = ACTIONS(777),
    [anon_sym_COMMA] = ACTIONS(777),
    [sym_comment] = ACTIONS(42),
  },
  [260] = {
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [sym_type_parameter] = STATE(354),
    [aux_sym_class_or_interface_type_repeat1] = STATE(119),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(285),
    [sym_comment] = ACTIONS(42),
  },
  [261] = {
    [anon_sym_GT] = ACTIONS(779),
    [anon_sym_COMMA] = ACTIONS(779),
    [sym_comment] = ACTIONS(42),
  },
  [262] = {
    [sym__expression] = STATE(357),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(781),
    [anon_sym_TILDE] = ACTIONS(781),
    [anon_sym_PLUS_PLUS] = ACTIONS(783),
    [anon_sym_DASH_DASH] = ACTIONS(783),
    [sym_comment] = ACTIONS(42),
  },
  [263] = {
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(177),
    [anon_sym_static] = ACTIONS(179),
    [anon_sym_class] = ACTIONS(179),
    [anon_sym_public] = ACTIONS(179),
    [anon_sym_protected] = ACTIONS(179),
    [anon_sym_private] = ACTIONS(179),
    [anon_sym_abstract] = ACTIONS(179),
    [anon_sym_final] = ACTIONS(179),
    [anon_sym_strictfp] = ACTIONS(179),
    [anon_sym_default] = ACTIONS(179),
    [sym_identifier] = ACTIONS(523),
    [sym_comment] = ACTIONS(42),
  },
  [264] = {
    [anon_sym_LPAREN] = ACTIONS(785),
    [anon_sym_DOT] = ACTIONS(787),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_static] = ACTIONS(551),
    [anon_sym_class] = ACTIONS(551),
    [anon_sym_public] = ACTIONS(551),
    [anon_sym_protected] = ACTIONS(551),
    [anon_sym_private] = ACTIONS(551),
    [anon_sym_abstract] = ACTIONS(551),
    [anon_sym_final] = ACTIONS(551),
    [anon_sym_strictfp] = ACTIONS(551),
    [anon_sym_default] = ACTIONS(551),
    [sym_identifier] = ACTIONS(589),
    [sym_comment] = ACTIONS(42),
  },
  [265] = {
    [sym_dims] = STATE(361),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [aux_sym_class_or_interface_type_repeat1] = STATE(362),
    [aux_sym_dims_repeat1] = STATE(363),
    [sym__semicolon] = ACTIONS(789),
    [anon_sym_EQ] = ACTIONS(789),
    [anon_sym_RPAREN] = ACTIONS(789),
    [anon_sym_COMMA] = ACTIONS(789),
    [anon_sym_LBRACK] = ACTIONS(791),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(42),
  },
  [266] = {
    [sym__semicolon] = ACTIONS(793),
    [sym_comment] = ACTIONS(42),
  },
  [267] = {
    [aux_sym_variable_declarator_list_repeat1] = STATE(365),
    [sym__semicolon] = ACTIONS(795),
    [anon_sym_COMMA] = ACTIONS(797),
    [sym_comment] = ACTIONS(42),
  },
  [268] = {
    [sym__semicolon] = ACTIONS(799),
    [anon_sym_EQ] = ACTIONS(801),
    [anon_sym_RPAREN] = ACTIONS(799),
    [anon_sym_COMMA] = ACTIONS(799),
    [sym_comment] = ACTIONS(42),
  },
  [269] = {
    [sym__semicolon] = ACTIONS(803),
    [anon_sym_LT] = ACTIONS(803),
    [anon_sym_LBRACE] = ACTIONS(803),
    [anon_sym_RBRACE] = ACTIONS(803),
    [anon_sym_AT] = ACTIONS(805),
    [anon_sym_static] = ACTIONS(805),
    [anon_sym_class] = ACTIONS(805),
    [anon_sym_public] = ACTIONS(805),
    [anon_sym_protected] = ACTIONS(805),
    [anon_sym_private] = ACTIONS(805),
    [anon_sym_abstract] = ACTIONS(805),
    [anon_sym_final] = ACTIONS(805),
    [anon_sym_strictfp] = ACTIONS(805),
    [anon_sym_default] = ACTIONS(805),
    [anon_sym_ATinterface] = ACTIONS(803),
    [anon_sym_interface] = ACTIONS(805),
    [sym_result] = ACTIONS(805),
    [sym_identifier] = ACTIONS(807),
    [sym_comment] = ACTIONS(42),
  },
  [270] = {
    [anon_sym_if] = ACTIONS(809),
    [anon_sym_RBRACE] = ACTIONS(809),
    [anon_sym_AT] = ACTIONS(809),
    [anon_sym_static] = ACTIONS(809),
    [anon_sym_class] = ACTIONS(809),
    [anon_sym_public] = ACTIONS(809),
    [anon_sym_protected] = ACTIONS(809),
    [anon_sym_private] = ACTIONS(809),
    [anon_sym_abstract] = ACTIONS(809),
    [anon_sym_final] = ACTIONS(809),
    [anon_sym_strictfp] = ACTIONS(809),
    [anon_sym_default] = ACTIONS(809),
    [sym_comment] = ACTIONS(42),
  },
  [271] = {
    [sym_statement] = STATE(188),
    [sym_if_then_statement] = STATE(189),
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(190),
    [sym_marker_annotation] = STATE(190),
    [sym_single_element_annotation] = STATE(190),
    [sym_class_declaration] = STATE(188),
    [sym_normal_class_declaration] = STATE(27),
    [sym_modifier] = STATE(191),
    [sym_block_statement] = STATE(367),
    [sym_local_variable_declaration_statement] = STATE(188),
    [sym_local_variable_declaration] = STATE(194),
    [aux_sym_normal_class_declaration_repeat1] = STATE(31),
    [anon_sym_if] = ACTIONS(411),
    [anon_sym_RBRACE] = ACTIONS(811),
    [anon_sym_AT] = ACTIONS(415),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [sym_comment] = ACTIONS(42),
  },
  [272] = {
    [anon_sym_if] = ACTIONS(813),
    [anon_sym_RBRACE] = ACTIONS(813),
    [anon_sym_AT] = ACTIONS(813),
    [anon_sym_static] = ACTIONS(813),
    [anon_sym_class] = ACTIONS(813),
    [anon_sym_public] = ACTIONS(813),
    [anon_sym_protected] = ACTIONS(813),
    [anon_sym_private] = ACTIONS(813),
    [anon_sym_abstract] = ACTIONS(813),
    [anon_sym_final] = ACTIONS(813),
    [anon_sym_strictfp] = ACTIONS(813),
    [anon_sym_default] = ACTIONS(813),
    [sym_comment] = ACTIONS(42),
  },
  [273] = {
    [sym__literal] = STATE(370),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(371),
    [sym_element_value_pair] = STATE(98),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(237),
    [anon_sym_false] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(815),
    [sym_identifier] = ACTIONS(817),
    [sym_comment] = ACTIONS(42),
  },
  [274] = {
    [sym_identifier] = ACTIONS(819),
    [sym_comment] = ACTIONS(42),
  },
  [275] = {
    [sym__annotation] = STATE(124),
    [sym_normal_annotation] = STATE(128),
    [sym_marker_annotation] = STATE(128),
    [sym_single_element_annotation] = STATE(128),
    [sym_class_declaration] = STATE(120),
    [sym_normal_class_declaration] = STATE(129),
    [sym_modifier] = STATE(130),
    [sym_class_body_declaration] = STATE(131),
    [sym_class_member_declaration] = STATE(132),
    [sym_interface_declaration] = STATE(120),
    [sym_annotation_type_declaration] = STATE(133),
    [sym_normal_interface_declaration] = STATE(133),
    [sym_block] = STATE(132),
    [aux_sym_normal_class_declaration_repeat1] = STATE(134),
    [aux_sym_class_body_repeat1] = STATE(374),
    [sym__semicolon] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(821),
    [anon_sym_AT] = ACTIONS(293),
    [anon_sym_static] = ACTIONS(295),
    [anon_sym_class] = ACTIONS(297),
    [anon_sym_public] = ACTIONS(295),
    [anon_sym_protected] = ACTIONS(295),
    [anon_sym_private] = ACTIONS(295),
    [anon_sym_abstract] = ACTIONS(295),
    [anon_sym_final] = ACTIONS(295),
    [anon_sym_strictfp] = ACTIONS(295),
    [anon_sym_default] = ACTIONS(295),
    [anon_sym_ATinterface] = ACTIONS(299),
    [anon_sym_interface] = ACTIONS(301),
    [sym_comment] = ACTIONS(42),
  },
  [276] = {
    [sym_superclass] = STATE(375),
    [sym_super_interfaces] = STATE(376),
    [sym_class_body] = STATE(377),
    [anon_sym_LBRACE] = ACTIONS(591),
    [anon_sym_extends] = ACTIONS(203),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [277] = {
    [sym_super_interfaces] = STATE(376),
    [sym_class_body] = STATE(377),
    [anon_sym_LBRACE] = ACTIONS(591),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [278] = {
    [sym_class_body] = STATE(377),
    [anon_sym_LBRACE] = ACTIONS(591),
    [sym_comment] = ACTIONS(42),
  },
  [279] = {
    [sym__semicolon] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(305),
    [anon_sym_RBRACE] = ACTIONS(305),
    [anon_sym_AT] = ACTIONS(307),
    [anon_sym_static] = ACTIONS(307),
    [anon_sym_class] = ACTIONS(307),
    [anon_sym_public] = ACTIONS(307),
    [anon_sym_protected] = ACTIONS(307),
    [anon_sym_private] = ACTIONS(307),
    [anon_sym_abstract] = ACTIONS(307),
    [anon_sym_final] = ACTIONS(307),
    [anon_sym_strictfp] = ACTIONS(307),
    [anon_sym_default] = ACTIONS(307),
    [anon_sym_ATinterface] = ACTIONS(305),
    [anon_sym_interface] = ACTIONS(307),
    [sym_identifier] = ACTIONS(309),
    [sym_comment] = ACTIONS(42),
  },
  [280] = {
    [sym__annotation] = STATE(124),
    [sym_normal_annotation] = STATE(128),
    [sym_marker_annotation] = STATE(128),
    [sym_single_element_annotation] = STATE(128),
    [sym_class_declaration] = STATE(380),
    [sym_normal_class_declaration] = STATE(129),
    [sym_modifier] = STATE(130),
    [sym_interface_declaration] = STATE(380),
    [sym_annotation_type_declaration] = STATE(133),
    [sym_annotation_type_member_declaration] = STATE(381),
    [sym_annotation_type_element_declaration] = STATE(380),
    [sym_normal_interface_declaration] = STATE(133),
    [sym_constant_declaration] = STATE(380),
    [sym_variable_declarator_list] = STATE(382),
    [sym_variable_declarator] = STATE(267),
    [sym_variable_declarator_id] = STATE(268),
    [aux_sym_normal_class_declaration_repeat1] = STATE(383),
    [aux_sym_annotation_type_body_repeat1] = STATE(384),
    [anon_sym_RBRACE] = ACTIONS(823),
    [anon_sym_AT] = ACTIONS(293),
    [anon_sym_static] = ACTIONS(825),
    [anon_sym_class] = ACTIONS(827),
    [anon_sym_public] = ACTIONS(825),
    [anon_sym_protected] = ACTIONS(825),
    [anon_sym_private] = ACTIONS(825),
    [anon_sym_abstract] = ACTIONS(825),
    [anon_sym_final] = ACTIONS(825),
    [anon_sym_strictfp] = ACTIONS(825),
    [anon_sym_default] = ACTIONS(825),
    [anon_sym_ATinterface] = ACTIONS(299),
    [anon_sym_interface] = ACTIONS(829),
    [sym_identifier] = ACTIONS(831),
    [sym_comment] = ACTIONS(42),
  },
  [281] = {
    [sym__semicolon] = ACTIONS(833),
    [anon_sym_LBRACE] = ACTIONS(833),
    [anon_sym_RBRACE] = ACTIONS(833),
    [anon_sym_AT] = ACTIONS(835),
    [anon_sym_static] = ACTIONS(835),
    [anon_sym_class] = ACTIONS(835),
    [anon_sym_public] = ACTIONS(835),
    [anon_sym_protected] = ACTIONS(835),
    [anon_sym_private] = ACTIONS(835),
    [anon_sym_abstract] = ACTIONS(835),
    [anon_sym_final] = ACTIONS(835),
    [anon_sym_strictfp] = ACTIONS(835),
    [anon_sym_default] = ACTIONS(835),
    [anon_sym_ATinterface] = ACTIONS(833),
    [anon_sym_interface] = ACTIONS(835),
    [sym_identifier] = ACTIONS(837),
    [sym_comment] = ACTIONS(42),
  },
  [282] = {
    [sym__annotation] = STATE(388),
    [sym_normal_annotation] = STATE(393),
    [sym_marker_annotation] = STATE(393),
    [sym_single_element_annotation] = STATE(393),
    [sym_class_declaration] = STATE(385),
    [sym_normal_class_declaration] = STATE(394),
    [sym_modifier] = STATE(395),
    [sym_type_parameters] = STATE(396),
    [sym_interface_declaration] = STATE(385),
    [sym_annotation_type_declaration] = STATE(397),
    [sym_normal_interface_declaration] = STATE(397),
    [sym_interface_member_declaration] = STATE(398),
    [sym_constant_declaration] = STATE(385),
    [sym_variable_declarator_list] = STATE(399),
    [sym_variable_declarator] = STATE(267),
    [sym_variable_declarator_id] = STATE(268),
    [sym_interface_method_declaration] = STATE(385),
    [sym_method_header] = STATE(400),
    [aux_sym_normal_class_declaration_repeat1] = STATE(401),
    [aux_sym_interface_body_repeat1] = STATE(402),
    [sym__semicolon] = ACTIONS(839),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(841),
    [anon_sym_AT] = ACTIONS(843),
    [anon_sym_static] = ACTIONS(845),
    [anon_sym_class] = ACTIONS(847),
    [anon_sym_public] = ACTIONS(845),
    [anon_sym_protected] = ACTIONS(845),
    [anon_sym_private] = ACTIONS(845),
    [anon_sym_abstract] = ACTIONS(845),
    [anon_sym_final] = ACTIONS(845),
    [anon_sym_strictfp] = ACTIONS(845),
    [anon_sym_default] = ACTIONS(845),
    [anon_sym_ATinterface] = ACTIONS(849),
    [anon_sym_interface] = ACTIONS(851),
    [sym_result] = ACTIONS(853),
    [sym_identifier] = ACTIONS(577),
    [sym_comment] = ACTIONS(42),
  },
  [283] = {
    [sym_class_or_interface_type] = STATE(139),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [sym_interface_type_list] = STATE(403),
    [aux_sym_class_or_interface_type_repeat1] = STATE(138),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(303),
    [sym_comment] = ACTIONS(42),
  },
  [284] = {
    [sym_extends_interfaces] = STATE(404),
    [sym_interface_body] = STATE(405),
    [anon_sym_LBRACE] = ACTIONS(595),
    [anon_sym_extends] = ACTIONS(597),
    [sym_comment] = ACTIONS(42),
  },
  [285] = {
    [sym_interface_body] = STATE(405),
    [anon_sym_LBRACE] = ACTIONS(595),
    [sym_comment] = ACTIONS(42),
  },
  [286] = {
    [sym__semicolon] = ACTIONS(855),
    [anon_sym_LBRACE] = ACTIONS(855),
    [anon_sym_RBRACE] = ACTIONS(855),
    [anon_sym_AT] = ACTIONS(857),
    [anon_sym_static] = ACTIONS(857),
    [anon_sym_class] = ACTIONS(857),
    [anon_sym_public] = ACTIONS(857),
    [anon_sym_protected] = ACTIONS(857),
    [anon_sym_private] = ACTIONS(857),
    [anon_sym_abstract] = ACTIONS(857),
    [anon_sym_final] = ACTIONS(857),
    [anon_sym_strictfp] = ACTIONS(857),
    [anon_sym_default] = ACTIONS(857),
    [anon_sym_ATinterface] = ACTIONS(855),
    [anon_sym_interface] = ACTIONS(857),
    [sym_identifier] = ACTIONS(859),
    [sym_comment] = ACTIONS(42),
  },
  [287] = {
    [sym_type_parameters] = STATE(406),
    [sym_superclass] = STATE(375),
    [sym_super_interfaces] = STATE(376),
    [sym_class_body] = STATE(377),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(591),
    [anon_sym_extends] = ACTIONS(203),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [288] = {
    [sym_annotation_type_body] = STATE(407),
    [anon_sym_LBRACE] = ACTIONS(593),
    [sym_comment] = ACTIONS(42),
  },
  [289] = {
    [sym_type_parameters] = STATE(408),
    [sym_extends_interfaces] = STATE(404),
    [sym_interface_body] = STATE(405),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(595),
    [anon_sym_extends] = ACTIONS(597),
    [sym_comment] = ACTIONS(42),
  },
  [290] = {
    [anon_sym_LBRACK] = ACTIONS(861),
    [anon_sym_AT] = ACTIONS(861),
    [sym_comment] = ACTIONS(42),
  },
  [291] = {
    [anon_sym_LBRACK] = ACTIONS(863),
    [anon_sym_AT] = ACTIONS(863),
    [sym_comment] = ACTIONS(42),
  },
  [292] = {
    [anon_sym_LBRACK] = ACTIONS(865),
    [anon_sym_AT] = ACTIONS(865),
    [sym_comment] = ACTIONS(42),
  },
  [293] = {
    [sym_package_or_type_name] = STATE(410),
    [sym_identifier] = ACTIONS(867),
    [sym_comment] = ACTIONS(42),
  },
  [294] = {
    [aux_sym_type_arguments_repeat1] = STATE(413),
    [anon_sym_GT] = ACTIONS(869),
    [anon_sym_COMMA] = ACTIONS(871),
    [sym_comment] = ACTIONS(42),
  },
  [295] = {
    [anon_sym_GT] = ACTIONS(873),
    [anon_sym_COMMA] = ACTIONS(873),
    [sym_comment] = ACTIONS(42),
  },
  [296] = {
    [sym_dims] = STATE(414),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [aux_sym_class_or_interface_type_repeat1] = STATE(362),
    [aux_sym_dims_repeat1] = STATE(363),
    [anon_sym_GT] = ACTIONS(875),
    [anon_sym_COMMA] = ACTIONS(875),
    [anon_sym_LBRACK] = ACTIONS(791),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(42),
  },
  [297] = {
    [sym_dims] = STATE(414),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [aux_sym_class_or_interface_type_repeat1] = STATE(362),
    [aux_sym_dims_repeat1] = STATE(363),
    [anon_sym_LBRACK] = ACTIONS(791),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(42),
  },
  [298] = {
    [anon_sym_boolean] = ACTIONS(395),
    [anon_sym_byte] = ACTIONS(395),
    [anon_sym_short] = ACTIONS(395),
    [anon_sym_int] = ACTIONS(395),
    [anon_sym_long] = ACTIONS(395),
    [anon_sym_char] = ACTIONS(395),
    [anon_sym_float] = ACTIONS(395),
    [anon_sym_double] = ACTIONS(395),
    [anon_sym_AT] = ACTIONS(123),
    [sym_identifier] = ACTIONS(877),
    [sym_comment] = ACTIONS(42),
  },
  [299] = {
    [anon_sym_boolean] = ACTIONS(397),
    [anon_sym_byte] = ACTIONS(397),
    [anon_sym_short] = ACTIONS(397),
    [anon_sym_int] = ACTIONS(397),
    [anon_sym_long] = ACTIONS(397),
    [anon_sym_char] = ACTIONS(397),
    [anon_sym_float] = ACTIONS(397),
    [anon_sym_double] = ACTIONS(397),
    [anon_sym_AT] = ACTIONS(125),
    [sym_identifier] = ACTIONS(431),
    [sym_comment] = ACTIONS(42),
  },
  [300] = {
    [sym_integral_type] = STATE(415),
    [sym_floating_point_type] = STATE(415),
    [sym__annotation] = STATE(416),
    [sym_normal_annotation] = STATE(299),
    [sym_marker_annotation] = STATE(299),
    [sym_single_element_annotation] = STATE(299),
    [anon_sym_boolean] = ACTIONS(879),
    [anon_sym_byte] = ACTIONS(621),
    [anon_sym_short] = ACTIONS(621),
    [anon_sym_int] = ACTIONS(621),
    [anon_sym_long] = ACTIONS(621),
    [anon_sym_char] = ACTIONS(621),
    [anon_sym_float] = ACTIONS(623),
    [anon_sym_double] = ACTIONS(623),
    [anon_sym_AT] = ACTIONS(625),
    [sym_identifier] = ACTIONS(881),
    [sym_comment] = ACTIONS(42),
  },
  [301] = {
    [sym_type_arguments] = STATE(417),
    [anon_sym_GT] = ACTIONS(883),
    [anon_sym_LT] = ACTIONS(461),
    [anon_sym_AMP] = ACTIONS(883),
    [anon_sym_LBRACE] = ACTIONS(883),
    [anon_sym_COMMA] = ACTIONS(883),
    [anon_sym_DOT] = ACTIONS(883),
    [anon_sym_LBRACK] = ACTIONS(883),
    [anon_sym_AT] = ACTIONS(883),
    [anon_sym_implements] = ACTIONS(883),
    [sym_comment] = ACTIONS(42),
  },
  [302] = {
    [sym__annotation] = STATE(184),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(885),
    [sym_comment] = ACTIONS(42),
  },
  [303] = {
    [anon_sym_GT] = ACTIONS(887),
    [anon_sym_AMP] = ACTIONS(887),
    [anon_sym_LBRACE] = ACTIONS(887),
    [anon_sym_COMMA] = ACTIONS(887),
    [anon_sym_DOT] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(887),
    [anon_sym_AT] = ACTIONS(887),
    [anon_sym_implements] = ACTIONS(887),
    [sym_comment] = ACTIONS(42),
  },
  [304] = {
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [aux_sym_class_or_interface_type_repeat1] = STATE(419),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(885),
    [sym_comment] = ACTIONS(42),
  },
  [305] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(420),
    [anon_sym_GT] = ACTIONS(887),
    [anon_sym_AMP] = ACTIONS(887),
    [anon_sym_LBRACE] = ACTIONS(887),
    [anon_sym_COMMA] = ACTIONS(887),
    [anon_sym_DOT] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(887),
    [anon_sym_AT] = ACTIONS(887),
    [anon_sym_implements] = ACTIONS(887),
    [sym_comment] = ACTIONS(42),
  },
  [306] = {
    [anon_sym_LBRACE] = ACTIONS(889),
    [anon_sym_COMMA] = ACTIONS(889),
    [sym_comment] = ACTIONS(42),
  },
  [307] = {
    [sym_class_or_interface_type] = STATE(421),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [aux_sym_class_or_interface_type_repeat1] = STATE(138),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(303),
    [sym_comment] = ACTIONS(42),
  },
  [308] = {
    [ts_builtin_sym_end] = ACTIONS(891),
    [sym_decimal_integer_literal] = ACTIONS(893),
    [sym_hex_integer_literal] = ACTIONS(893),
    [sym_octal_integer_literal] = ACTIONS(893),
    [sym_binary_integer_literal] = ACTIONS(893),
    [sym_decimal_floating_point_literal] = ACTIONS(893),
    [sym_hex_floating_point_literal] = ACTIONS(895),
    [anon_sym_true] = ACTIONS(891),
    [anon_sym_false] = ACTIONS(891),
    [anon_sym_SQUOTE] = ACTIONS(891),
    [sym_string_literal] = ACTIONS(891),
    [sym_null_literal] = ACTIONS(891),
    [anon_sym_BANG] = ACTIONS(891),
    [anon_sym_TILDE] = ACTIONS(891),
    [anon_sym_PLUS_PLUS] = ACTIONS(891),
    [anon_sym_DASH_DASH] = ACTIONS(891),
    [anon_sym_if] = ACTIONS(891),
    [anon_sym_RBRACE] = ACTIONS(891),
    [anon_sym_elseif] = ACTIONS(891),
    [anon_sym_AT] = ACTIONS(891),
    [anon_sym_open] = ACTIONS(891),
    [anon_sym_module] = ACTIONS(891),
    [anon_sym_static] = ACTIONS(891),
    [anon_sym_package] = ACTIONS(891),
    [anon_sym_import] = ACTIONS(891),
    [anon_sym_class] = ACTIONS(891),
    [anon_sym_public] = ACTIONS(891),
    [anon_sym_protected] = ACTIONS(891),
    [anon_sym_private] = ACTIONS(891),
    [anon_sym_abstract] = ACTIONS(891),
    [anon_sym_final] = ACTIONS(891),
    [anon_sym_strictfp] = ACTIONS(891),
    [anon_sym_default] = ACTIONS(891),
    [sym_comment] = ACTIONS(42),
  },
  [309] = {
    [sym__expression] = STATE(422),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
    [anon_sym_PLUS_PLUS] = ACTIONS(215),
    [anon_sym_DASH_DASH] = ACTIONS(215),
    [sym_comment] = ACTIONS(42),
  },
  [310] = {
    [sym_module_directive] = STATE(172),
    [anon_sym_RBRACE] = ACTIONS(897),
    [anon_sym_requires] = ACTIONS(257),
    [anon_sym_exports] = ACTIONS(259),
    [anon_sym_opens] = ACTIONS(259),
    [anon_sym_uses] = ACTIONS(261),
    [anon_sym_provides] = ACTIONS(263),
    [sym_comment] = ACTIONS(42),
  },
  [311] = {
    [sym_class_body] = STATE(424),
    [anon_sym_LBRACE] = ACTIONS(201),
    [sym_comment] = ACTIONS(42),
  },
  [312] = {
    [sym__expression] = STATE(35),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(657),
    [anon_sym_TILDE] = ACTIONS(657),
    [anon_sym_PLUS_PLUS] = ACTIONS(659),
    [anon_sym_DASH_DASH] = ACTIONS(659),
    [sym_comment] = ACTIONS(42),
  },
  [313] = {
    [sym__expression] = STATE(36),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(657),
    [anon_sym_TILDE] = ACTIONS(657),
    [anon_sym_PLUS_PLUS] = ACTIONS(659),
    [anon_sym_DASH_DASH] = ACTIONS(659),
    [sym_comment] = ACTIONS(42),
  },
  [314] = {
    [anon_sym_EQ] = ACTIONS(899),
    [anon_sym_PLUS_EQ] = ACTIONS(901),
    [anon_sym_DASH_EQ] = ACTIONS(901),
    [anon_sym_STAR_EQ] = ACTIONS(901),
    [anon_sym_SLASH_EQ] = ACTIONS(901),
    [anon_sym_AMP_EQ] = ACTIONS(901),
    [anon_sym_PIPE_EQ] = ACTIONS(901),
    [anon_sym_CARET_EQ] = ACTIONS(901),
    [anon_sym_PERCENT_EQ] = ACTIONS(901),
    [anon_sym_LT_LT_EQ] = ACTIONS(901),
    [anon_sym_GT_GT_EQ] = ACTIONS(901),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(901),
    [anon_sym_GT] = ACTIONS(903),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(169),
    [anon_sym_GT_EQ] = ACTIONS(905),
    [anon_sym_LT_EQ] = ACTIONS(905),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(907),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(171),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_LT_LT] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(171),
    [anon_sym_GT_GT_GT] = ACTIONS(171),
    [anon_sym_QMARK] = ACTIONS(169),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [sym_comment] = ACTIONS(42),
  },
  [315] = {
    [sym__expression] = STATE(434),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(909),
    [anon_sym_TILDE] = ACTIONS(909),
    [anon_sym_PLUS_PLUS] = ACTIONS(911),
    [anon_sym_DASH_DASH] = ACTIONS(911),
    [sym_comment] = ACTIONS(42),
  },
  [316] = {
    [sym__semicolon] = ACTIONS(913),
    [anon_sym_RPAREN] = ACTIONS(913),
    [anon_sym_RBRACE] = ACTIONS(913),
    [anon_sym_COMMA] = ACTIONS(913),
    [sym_comment] = ACTIONS(42),
  },
  [317] = {
    [anon_sym_RBRACE] = ACTIONS(915),
    [sym_comment] = ACTIONS(42),
  },
  [318] = {
    [aux_sym_element_value_array_initializer_repeat1] = STATE(437),
    [anon_sym_RBRACE] = ACTIONS(915),
    [anon_sym_COMMA] = ACTIONS(917),
    [sym_comment] = ACTIONS(42),
  },
  [319] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(919),
    [anon_sym_QMARK] = ACTIONS(921),
    [anon_sym_RBRACE] = ACTIONS(679),
    [anon_sym_COMMA] = ACTIONS(679),
    [sym_comment] = ACTIONS(42),
  },
  [320] = {
    [anon_sym_AMP_AMP] = ACTIONS(923),
    [anon_sym_PIPE_PIPE] = ACTIONS(683),
    [anon_sym_QMARK] = ACTIONS(683),
    [anon_sym_RBRACE] = ACTIONS(683),
    [anon_sym_COMMA] = ACTIONS(683),
    [sym_comment] = ACTIONS(42),
  },
  [321] = {
    [anon_sym_AMP_AMP] = ACTIONS(685),
    [anon_sym_PIPE_PIPE] = ACTIONS(685),
    [anon_sym_PIPE] = ACTIONS(925),
    [anon_sym_QMARK] = ACTIONS(685),
    [anon_sym_RBRACE] = ACTIONS(685),
    [anon_sym_COMMA] = ACTIONS(685),
    [sym_comment] = ACTIONS(42),
  },
  [322] = {
    [anon_sym_AMP_AMP] = ACTIONS(689),
    [anon_sym_PIPE_PIPE] = ACTIONS(689),
    [anon_sym_PIPE] = ACTIONS(691),
    [anon_sym_CARET] = ACTIONS(927),
    [anon_sym_QMARK] = ACTIONS(689),
    [anon_sym_RBRACE] = ACTIONS(689),
    [anon_sym_COMMA] = ACTIONS(689),
    [sym_comment] = ACTIONS(42),
  },
  [323] = {
    [anon_sym_LT] = ACTIONS(929),
    [anon_sym_EQ_EQ] = ACTIONS(701),
    [anon_sym_BANG_EQ] = ACTIONS(701),
    [anon_sym_AMP_AMP] = ACTIONS(703),
    [anon_sym_PIPE_PIPE] = ACTIONS(703),
    [anon_sym_PIPE] = ACTIONS(705),
    [anon_sym_CARET] = ACTIONS(703),
    [anon_sym_QMARK] = ACTIONS(703),
    [anon_sym_RBRACE] = ACTIONS(703),
    [anon_sym_COMMA] = ACTIONS(703),
    [sym_comment] = ACTIONS(42),
  },
  [324] = {
    [anon_sym_EQ_EQ] = ACTIONS(931),
    [anon_sym_BANG_EQ] = ACTIONS(931),
    [sym_comment] = ACTIONS(42),
  },
  [325] = {
    [anon_sym_LT] = ACTIONS(709),
    [anon_sym_EQ_EQ] = ACTIONS(711),
    [anon_sym_BANG_EQ] = ACTIONS(711),
    [anon_sym_AMP_AMP] = ACTIONS(711),
    [anon_sym_PIPE_PIPE] = ACTIONS(711),
    [anon_sym_PIPE] = ACTIONS(709),
    [anon_sym_CARET] = ACTIONS(711),
    [anon_sym_LT_LT] = ACTIONS(933),
    [anon_sym_GT_GT] = ACTIONS(935),
    [anon_sym_GT_GT_GT] = ACTIONS(933),
    [anon_sym_QMARK] = ACTIONS(711),
    [anon_sym_RBRACE] = ACTIONS(711),
    [anon_sym_COMMA] = ACTIONS(711),
    [sym_comment] = ACTIONS(42),
  },
  [326] = {
    [anon_sym_LT] = ACTIONS(717),
    [anon_sym_EQ_EQ] = ACTIONS(719),
    [anon_sym_BANG_EQ] = ACTIONS(719),
    [anon_sym_AMP_AMP] = ACTIONS(719),
    [anon_sym_PIPE_PIPE] = ACTIONS(719),
    [anon_sym_PLUS] = ACTIONS(937),
    [anon_sym_DASH] = ACTIONS(937),
    [anon_sym_PIPE] = ACTIONS(717),
    [anon_sym_CARET] = ACTIONS(719),
    [anon_sym_LT_LT] = ACTIONS(719),
    [anon_sym_GT_GT] = ACTIONS(717),
    [anon_sym_GT_GT_GT] = ACTIONS(719),
    [anon_sym_QMARK] = ACTIONS(719),
    [anon_sym_RBRACE] = ACTIONS(719),
    [anon_sym_COMMA] = ACTIONS(719),
    [sym_comment] = ACTIONS(42),
  },
  [327] = {
    [anon_sym_LT] = ACTIONS(723),
    [anon_sym_EQ_EQ] = ACTIONS(725),
    [anon_sym_BANG_EQ] = ACTIONS(725),
    [anon_sym_AMP_AMP] = ACTIONS(725),
    [anon_sym_PIPE_PIPE] = ACTIONS(725),
    [anon_sym_PLUS] = ACTIONS(725),
    [anon_sym_DASH] = ACTIONS(725),
    [anon_sym_STAR] = ACTIONS(939),
    [anon_sym_SLASH] = ACTIONS(941),
    [anon_sym_PIPE] = ACTIONS(723),
    [anon_sym_CARET] = ACTIONS(725),
    [anon_sym_PERCENT] = ACTIONS(939),
    [anon_sym_LT_LT] = ACTIONS(725),
    [anon_sym_GT_GT] = ACTIONS(723),
    [anon_sym_GT_GT_GT] = ACTIONS(725),
    [anon_sym_QMARK] = ACTIONS(725),
    [anon_sym_RBRACE] = ACTIONS(725),
    [anon_sym_COMMA] = ACTIONS(725),
    [sym_comment] = ACTIONS(42),
  },
  [328] = {
    [sym_unary_expression] = STATE(228),
    [sym_conditional_and_expression] = STATE(448),
    [sym_inclusive_or_expression] = STATE(232),
    [sym_exclusive_or_expression] = STATE(233),
    [sym_and_expression] = STATE(234),
    [sym_relational_expression] = STATE(235),
    [sym_equality_expression] = STATE(236),
    [sym_shift_expression] = STATE(237),
    [sym_additive_expression] = STATE(238),
    [sym_multiplicative_expression] = STATE(239),
    [anon_sym_BANG] = ACTIONS(485),
    [anon_sym_TILDE] = ACTIONS(485),
    [sym_comment] = ACTIONS(42),
  },
  [329] = {
    [sym__expression] = STATE(449),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
    [anon_sym_PLUS_PLUS] = ACTIONS(215),
    [anon_sym_DASH_DASH] = ACTIONS(215),
    [sym_comment] = ACTIONS(42),
  },
  [330] = {
    [sym_unary_expression] = STATE(228),
    [sym_inclusive_or_expression] = STATE(450),
    [sym_exclusive_or_expression] = STATE(233),
    [sym_and_expression] = STATE(234),
    [sym_relational_expression] = STATE(235),
    [sym_equality_expression] = STATE(236),
    [sym_shift_expression] = STATE(237),
    [sym_additive_expression] = STATE(238),
    [sym_multiplicative_expression] = STATE(239),
    [anon_sym_BANG] = ACTIONS(485),
    [anon_sym_TILDE] = ACTIONS(485),
    [sym_comment] = ACTIONS(42),
  },
  [331] = {
    [sym_unary_expression] = STATE(228),
    [sym_exclusive_or_expression] = STATE(451),
    [sym_and_expression] = STATE(234),
    [sym_relational_expression] = STATE(235),
    [sym_equality_expression] = STATE(236),
    [sym_shift_expression] = STATE(237),
    [sym_additive_expression] = STATE(238),
    [sym_multiplicative_expression] = STATE(239),
    [anon_sym_BANG] = ACTIONS(485),
    [anon_sym_TILDE] = ACTIONS(485),
    [sym_comment] = ACTIONS(42),
  },
  [332] = {
    [sym_unary_expression] = STATE(228),
    [sym_and_expression] = STATE(452),
    [sym_relational_expression] = STATE(235),
    [sym_equality_expression] = STATE(236),
    [sym_shift_expression] = STATE(237),
    [sym_additive_expression] = STATE(238),
    [sym_multiplicative_expression] = STATE(239),
    [anon_sym_BANG] = ACTIONS(485),
    [anon_sym_TILDE] = ACTIONS(485),
    [sym_comment] = ACTIONS(42),
  },
  [333] = {
    [sym_unary_expression] = STATE(228),
    [sym_shift_expression] = STATE(453),
    [sym_additive_expression] = STATE(238),
    [sym_multiplicative_expression] = STATE(239),
    [anon_sym_BANG] = ACTIONS(485),
    [anon_sym_TILDE] = ACTIONS(485),
    [sym_comment] = ACTIONS(42),
  },
  [334] = {
    [sym_unary_expression] = STATE(228),
    [sym_relational_expression] = STATE(454),
    [sym_shift_expression] = STATE(237),
    [sym_additive_expression] = STATE(238),
    [sym_multiplicative_expression] = STATE(239),
    [anon_sym_BANG] = ACTIONS(485),
    [anon_sym_TILDE] = ACTIONS(485),
    [sym_comment] = ACTIONS(42),
  },
  [335] = {
    [sym_unary_expression] = STATE(228),
    [sym_additive_expression] = STATE(455),
    [sym_multiplicative_expression] = STATE(239),
    [anon_sym_BANG] = ACTIONS(485),
    [anon_sym_TILDE] = ACTIONS(485),
    [sym_comment] = ACTIONS(42),
  },
  [336] = {
    [sym_unary_expression] = STATE(228),
    [sym_multiplicative_expression] = STATE(456),
    [anon_sym_BANG] = ACTIONS(485),
    [anon_sym_TILDE] = ACTIONS(485),
    [sym_comment] = ACTIONS(42),
  },
  [337] = {
    [sym_unary_expression] = STATE(457),
    [anon_sym_BANG] = ACTIONS(485),
    [anon_sym_TILDE] = ACTIONS(485),
    [sym_comment] = ACTIONS(42),
  },
  [338] = {
    [anon_sym_RPAREN] = ACTIONS(943),
    [anon_sym_COMMA] = ACTIONS(943),
    [sym_comment] = ACTIONS(42),
  },
  [339] = {
    [sym__semicolon] = ACTIONS(945),
    [anon_sym_COMMA] = ACTIONS(945),
    [anon_sym_DOT] = ACTIONS(945),
    [sym_comment] = ACTIONS(42),
  },
  [340] = {
    [anon_sym_RBRACE] = ACTIONS(947),
    [anon_sym_requires] = ACTIONS(947),
    [anon_sym_exports] = ACTIONS(947),
    [anon_sym_opens] = ACTIONS(947),
    [anon_sym_uses] = ACTIONS(947),
    [anon_sym_provides] = ACTIONS(947),
    [sym_comment] = ACTIONS(42),
  },
  [341] = {
    [sym__semicolon] = ACTIONS(949),
    [anon_sym_COMMA] = ACTIONS(949),
    [anon_sym_DOT] = ACTIONS(521),
    [sym_comment] = ACTIONS(42),
  },
  [342] = {
    [sym__semicolon] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(353),
    [anon_sym_to] = ACTIONS(355),
    [sym_identifier] = ACTIONS(951),
    [sym_comment] = ACTIONS(42),
  },
  [343] = {
    [aux_sym_module_directive_repeat2] = STATE(459),
    [sym__semicolon] = ACTIONS(953),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_DOT] = ACTIONS(521),
    [sym_comment] = ACTIONS(42),
  },
  [344] = {
    [sym__semicolon] = ACTIONS(953),
    [anon_sym_COMMA] = ACTIONS(753),
    [sym_comment] = ACTIONS(42),
  },
  [345] = {
    [sym_module_name] = STATE(460),
    [sym_identifier] = ACTIONS(749),
    [sym_comment] = ACTIONS(42),
  },
  [346] = {
    [aux_sym_module_directive_repeat3] = STATE(462),
    [sym__semicolon] = ACTIONS(953),
    [anon_sym_COMMA] = ACTIONS(955),
    [anon_sym_DOT] = ACTIONS(531),
    [sym_comment] = ACTIONS(42),
  },
  [347] = {
    [anon_sym_AT] = ACTIONS(341),
    [sym_identifier] = ACTIONS(957),
    [sym_comment] = ACTIONS(42),
  },
  [348] = {
    [anon_sym_EQ] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(959),
    [sym_comment] = ACTIONS(42),
  },
  [349] = {
    [anon_sym_RPAREN] = ACTIONS(959),
    [sym_comment] = ACTIONS(42),
  },
  [350] = {
    [anon_sym_RPAREN] = ACTIONS(961),
    [sym_comment] = ACTIONS(42),
  },
  [351] = {
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(353),
    [sym_identifier] = ACTIONS(355),
    [sym_comment] = ACTIONS(42),
  },
  [352] = {
    [sym_class_or_interface_type] = STATE(465),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [aux_sym_class_or_interface_type_repeat1] = STATE(138),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(303),
    [sym_comment] = ACTIONS(42),
  },
  [353] = {
    [anon_sym_GT] = ACTIONS(963),
    [anon_sym_AMP] = ACTIONS(965),
    [anon_sym_COMMA] = ACTIONS(963),
    [sym_comment] = ACTIONS(42),
  },
  [354] = {
    [anon_sym_GT] = ACTIONS(967),
    [anon_sym_COMMA] = ACTIONS(967),
    [sym_comment] = ACTIONS(42),
  },
  [355] = {
    [sym__expression] = STATE(35),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(781),
    [anon_sym_TILDE] = ACTIONS(781),
    [anon_sym_PLUS_PLUS] = ACTIONS(783),
    [anon_sym_DASH_DASH] = ACTIONS(783),
    [sym_comment] = ACTIONS(42),
  },
  [356] = {
    [sym__expression] = STATE(36),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(781),
    [anon_sym_TILDE] = ACTIONS(781),
    [anon_sym_PLUS_PLUS] = ACTIONS(783),
    [anon_sym_DASH_DASH] = ACTIONS(783),
    [sym_comment] = ACTIONS(42),
  },
  [357] = {
    [anon_sym_EQ] = ACTIONS(969),
    [anon_sym_PLUS_EQ] = ACTIONS(971),
    [anon_sym_DASH_EQ] = ACTIONS(971),
    [anon_sym_STAR_EQ] = ACTIONS(971),
    [anon_sym_SLASH_EQ] = ACTIONS(971),
    [anon_sym_AMP_EQ] = ACTIONS(971),
    [anon_sym_PIPE_EQ] = ACTIONS(971),
    [anon_sym_CARET_EQ] = ACTIONS(971),
    [anon_sym_PERCENT_EQ] = ACTIONS(971),
    [anon_sym_LT_LT_EQ] = ACTIONS(971),
    [anon_sym_GT_GT_EQ] = ACTIONS(971),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(971),
    [anon_sym_GT] = ACTIONS(973),
    [anon_sym_LT] = ACTIONS(973),
    [anon_sym_EQ_EQ] = ACTIONS(975),
    [anon_sym_GT_EQ] = ACTIONS(975),
    [anon_sym_LT_EQ] = ACTIONS(975),
    [anon_sym_BANG_EQ] = ACTIONS(975),
    [anon_sym_AMP_AMP] = ACTIONS(977),
    [anon_sym_PIPE_PIPE] = ACTIONS(979),
    [anon_sym_PLUS] = ACTIONS(981),
    [anon_sym_DASH] = ACTIONS(981),
    [anon_sym_STAR] = ACTIONS(983),
    [anon_sym_SLASH] = ACTIONS(983),
    [anon_sym_AMP] = ACTIONS(985),
    [anon_sym_PIPE] = ACTIONS(987),
    [anon_sym_CARET] = ACTIONS(987),
    [anon_sym_PERCENT] = ACTIONS(983),
    [anon_sym_LT_LT] = ACTIONS(983),
    [anon_sym_GT_GT] = ACTIONS(983),
    [anon_sym_GT_GT_GT] = ACTIONS(983),
    [anon_sym_QMARK] = ACTIONS(989),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(991),
    [sym_comment] = ACTIONS(42),
  },
  [358] = {
    [sym__literal] = STATE(477),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(478),
    [sym_element_value_pair] = STATE(98),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(237),
    [anon_sym_false] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(993),
    [sym_identifier] = ACTIONS(995),
    [sym_comment] = ACTIONS(42),
  },
  [359] = {
    [sym_identifier] = ACTIONS(997),
    [sym_comment] = ACTIONS(42),
  },
  [360] = {
    [anon_sym_RBRACK] = ACTIONS(999),
    [sym_comment] = ACTIONS(42),
  },
  [361] = {
    [sym__semicolon] = ACTIONS(1001),
    [anon_sym_EQ] = ACTIONS(1001),
    [anon_sym_RPAREN] = ACTIONS(1001),
    [anon_sym_COMMA] = ACTIONS(1001),
    [sym_comment] = ACTIONS(42),
  },
  [362] = {
    [sym__annotation] = STATE(58),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [anon_sym_LBRACK] = ACTIONS(1003),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(42),
  },
  [363] = {
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [aux_sym_class_or_interface_type_repeat1] = STATE(482),
    [sym__semicolon] = ACTIONS(1005),
    [anon_sym_EQ] = ACTIONS(1005),
    [anon_sym_GT] = ACTIONS(1005),
    [anon_sym_RPAREN] = ACTIONS(1005),
    [anon_sym_LBRACE] = ACTIONS(1005),
    [anon_sym_COMMA] = ACTIONS(1005),
    [anon_sym_LBRACK] = ACTIONS(1003),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_default] = ACTIONS(1005),
    [anon_sym_throws] = ACTIONS(1005),
    [sym_comment] = ACTIONS(42),
  },
  [364] = {
    [sym_variable_declarator] = STATE(483),
    [sym_variable_declarator_id] = STATE(268),
    [sym_identifier] = ACTIONS(1007),
    [sym_comment] = ACTIONS(42),
  },
  [365] = {
    [sym__semicolon] = ACTIONS(1009),
    [anon_sym_COMMA] = ACTIONS(1011),
    [sym_comment] = ACTIONS(42),
  },
  [366] = {
    [sym__semicolon] = ACTIONS(1013),
    [anon_sym_RPAREN] = ACTIONS(1013),
    [anon_sym_COMMA] = ACTIONS(1013),
    [sym_comment] = ACTIONS(42),
  },
  [367] = {
    [anon_sym_if] = ACTIONS(1015),
    [anon_sym_RBRACE] = ACTIONS(1015),
    [anon_sym_AT] = ACTIONS(1015),
    [anon_sym_static] = ACTIONS(1015),
    [anon_sym_class] = ACTIONS(1015),
    [anon_sym_public] = ACTIONS(1015),
    [anon_sym_protected] = ACTIONS(1015),
    [anon_sym_private] = ACTIONS(1015),
    [anon_sym_abstract] = ACTIONS(1015),
    [anon_sym_final] = ACTIONS(1015),
    [anon_sym_strictfp] = ACTIONS(1015),
    [anon_sym_default] = ACTIONS(1015),
    [sym_comment] = ACTIONS(42),
  },
  [368] = {
    [anon_sym_AT] = ACTIONS(957),
    [anon_sym_static] = ACTIONS(957),
    [anon_sym_class] = ACTIONS(957),
    [anon_sym_public] = ACTIONS(957),
    [anon_sym_protected] = ACTIONS(957),
    [anon_sym_private] = ACTIONS(957),
    [anon_sym_abstract] = ACTIONS(957),
    [anon_sym_final] = ACTIONS(957),
    [anon_sym_strictfp] = ACTIONS(957),
    [anon_sym_default] = ACTIONS(957),
    [anon_sym_ATinterface] = ACTIONS(341),
    [anon_sym_interface] = ACTIONS(957),
    [sym_identifier] = ACTIONS(1017),
    [sym_comment] = ACTIONS(42),
  },
  [369] = {
    [anon_sym_EQ] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(1019),
    [sym_comment] = ACTIONS(42),
  },
  [370] = {
    [anon_sym_RPAREN] = ACTIONS(1019),
    [sym_comment] = ACTIONS(42),
  },
  [371] = {
    [anon_sym_RPAREN] = ACTIONS(1021),
    [sym_comment] = ACTIONS(42),
  },
  [372] = {
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(355),
    [anon_sym_static] = ACTIONS(355),
    [anon_sym_class] = ACTIONS(355),
    [anon_sym_public] = ACTIONS(355),
    [anon_sym_protected] = ACTIONS(355),
    [anon_sym_private] = ACTIONS(355),
    [anon_sym_abstract] = ACTIONS(355),
    [anon_sym_final] = ACTIONS(355),
    [anon_sym_strictfp] = ACTIONS(355),
    [anon_sym_default] = ACTIONS(355),
    [anon_sym_ATinterface] = ACTIONS(353),
    [anon_sym_interface] = ACTIONS(355),
    [sym_identifier] = ACTIONS(951),
    [sym_comment] = ACTIONS(42),
  },
  [373] = {
    [sym__semicolon] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_AT] = ACTIONS(419),
    [anon_sym_static] = ACTIONS(419),
    [anon_sym_class] = ACTIONS(419),
    [anon_sym_public] = ACTIONS(419),
    [anon_sym_protected] = ACTIONS(419),
    [anon_sym_private] = ACTIONS(419),
    [anon_sym_abstract] = ACTIONS(419),
    [anon_sym_final] = ACTIONS(419),
    [anon_sym_strictfp] = ACTIONS(419),
    [anon_sym_default] = ACTIONS(419),
    [anon_sym_ATinterface] = ACTIONS(417),
    [anon_sym_interface] = ACTIONS(419),
    [sym_identifier] = ACTIONS(421),
    [sym_comment] = ACTIONS(42),
  },
  [374] = {
    [sym__annotation] = STATE(124),
    [sym_normal_annotation] = STATE(128),
    [sym_marker_annotation] = STATE(128),
    [sym_single_element_annotation] = STATE(128),
    [sym_class_declaration] = STATE(120),
    [sym_normal_class_declaration] = STATE(129),
    [sym_modifier] = STATE(130),
    [sym_class_body_declaration] = STATE(205),
    [sym_class_member_declaration] = STATE(132),
    [sym_interface_declaration] = STATE(120),
    [sym_annotation_type_declaration] = STATE(133),
    [sym_normal_interface_declaration] = STATE(133),
    [sym_block] = STATE(132),
    [aux_sym_normal_class_declaration_repeat1] = STATE(134),
    [sym__semicolon] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(1023),
    [anon_sym_AT] = ACTIONS(293),
    [anon_sym_static] = ACTIONS(295),
    [anon_sym_class] = ACTIONS(297),
    [anon_sym_public] = ACTIONS(295),
    [anon_sym_protected] = ACTIONS(295),
    [anon_sym_private] = ACTIONS(295),
    [anon_sym_abstract] = ACTIONS(295),
    [anon_sym_final] = ACTIONS(295),
    [anon_sym_strictfp] = ACTIONS(295),
    [anon_sym_default] = ACTIONS(295),
    [anon_sym_ATinterface] = ACTIONS(299),
    [anon_sym_interface] = ACTIONS(301),
    [sym_comment] = ACTIONS(42),
  },
  [375] = {
    [sym_super_interfaces] = STATE(488),
    [sym_class_body] = STATE(489),
    [anon_sym_LBRACE] = ACTIONS(591),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [376] = {
    [sym_class_body] = STATE(489),
    [anon_sym_LBRACE] = ACTIONS(591),
    [sym_comment] = ACTIONS(42),
  },
  [377] = {
    [sym__semicolon] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(475),
    [anon_sym_RBRACE] = ACTIONS(475),
    [anon_sym_AT] = ACTIONS(477),
    [anon_sym_static] = ACTIONS(477),
    [anon_sym_class] = ACTIONS(477),
    [anon_sym_public] = ACTIONS(477),
    [anon_sym_protected] = ACTIONS(477),
    [anon_sym_private] = ACTIONS(477),
    [anon_sym_abstract] = ACTIONS(477),
    [anon_sym_final] = ACTIONS(477),
    [anon_sym_strictfp] = ACTIONS(477),
    [anon_sym_default] = ACTIONS(477),
    [anon_sym_ATinterface] = ACTIONS(475),
    [anon_sym_interface] = ACTIONS(477),
    [sym_identifier] = ACTIONS(479),
    [sym_comment] = ACTIONS(42),
  },
  [378] = {
    [sym__semicolon] = ACTIONS(1025),
    [anon_sym_LBRACE] = ACTIONS(1025),
    [anon_sym_RBRACE] = ACTIONS(1025),
    [anon_sym_AT] = ACTIONS(1027),
    [anon_sym_static] = ACTIONS(1027),
    [anon_sym_class] = ACTIONS(1027),
    [anon_sym_public] = ACTIONS(1027),
    [anon_sym_protected] = ACTIONS(1027),
    [anon_sym_private] = ACTIONS(1027),
    [anon_sym_abstract] = ACTIONS(1027),
    [anon_sym_final] = ACTIONS(1027),
    [anon_sym_strictfp] = ACTIONS(1027),
    [anon_sym_default] = ACTIONS(1027),
    [anon_sym_ATinterface] = ACTIONS(1025),
    [anon_sym_interface] = ACTIONS(1027),
    [sym_identifier] = ACTIONS(1029),
    [sym_comment] = ACTIONS(42),
  },
  [379] = {
    [sym_dims] = STATE(361),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [aux_sym_class_or_interface_type_repeat1] = STATE(362),
    [aux_sym_dims_repeat1] = STATE(363),
    [sym__semicolon] = ACTIONS(789),
    [anon_sym_EQ] = ACTIONS(789),
    [anon_sym_LPAREN] = ACTIONS(1031),
    [anon_sym_COMMA] = ACTIONS(789),
    [anon_sym_LBRACK] = ACTIONS(791),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(42),
  },
  [380] = {
    [anon_sym_RBRACE] = ACTIONS(1033),
    [anon_sym_AT] = ACTIONS(1035),
    [anon_sym_static] = ACTIONS(1035),
    [anon_sym_class] = ACTIONS(1035),
    [anon_sym_public] = ACTIONS(1035),
    [anon_sym_protected] = ACTIONS(1035),
    [anon_sym_private] = ACTIONS(1035),
    [anon_sym_abstract] = ACTIONS(1035),
    [anon_sym_final] = ACTIONS(1035),
    [anon_sym_strictfp] = ACTIONS(1035),
    [anon_sym_default] = ACTIONS(1035),
    [anon_sym_ATinterface] = ACTIONS(1033),
    [anon_sym_interface] = ACTIONS(1035),
    [sym_identifier] = ACTIONS(1037),
    [sym_comment] = ACTIONS(42),
  },
  [381] = {
    [anon_sym_RBRACE] = ACTIONS(1039),
    [anon_sym_AT] = ACTIONS(1041),
    [anon_sym_static] = ACTIONS(1041),
    [anon_sym_class] = ACTIONS(1041),
    [anon_sym_public] = ACTIONS(1041),
    [anon_sym_protected] = ACTIONS(1041),
    [anon_sym_private] = ACTIONS(1041),
    [anon_sym_abstract] = ACTIONS(1041),
    [anon_sym_final] = ACTIONS(1041),
    [anon_sym_strictfp] = ACTIONS(1041),
    [anon_sym_default] = ACTIONS(1041),
    [anon_sym_ATinterface] = ACTIONS(1039),
    [anon_sym_interface] = ACTIONS(1041),
    [sym_identifier] = ACTIONS(1043),
    [sym_comment] = ACTIONS(42),
  },
  [382] = {
    [sym__semicolon] = ACTIONS(1045),
    [sym_comment] = ACTIONS(42),
  },
  [383] = {
    [sym__annotation] = STATE(124),
    [sym_normal_annotation] = STATE(128),
    [sym_marker_annotation] = STATE(128),
    [sym_single_element_annotation] = STATE(128),
    [sym_modifier] = STATE(203),
    [sym_variable_declarator_list] = STATE(493),
    [sym_variable_declarator] = STATE(267),
    [sym_variable_declarator_id] = STATE(268),
    [anon_sym_AT] = ACTIONS(293),
    [anon_sym_static] = ACTIONS(825),
    [anon_sym_class] = ACTIONS(1047),
    [anon_sym_public] = ACTIONS(825),
    [anon_sym_protected] = ACTIONS(825),
    [anon_sym_private] = ACTIONS(825),
    [anon_sym_abstract] = ACTIONS(825),
    [anon_sym_final] = ACTIONS(825),
    [anon_sym_strictfp] = ACTIONS(825),
    [anon_sym_default] = ACTIONS(825),
    [anon_sym_ATinterface] = ACTIONS(453),
    [anon_sym_interface] = ACTIONS(1049),
    [sym_identifier] = ACTIONS(1051),
    [sym_comment] = ACTIONS(42),
  },
  [384] = {
    [sym__annotation] = STATE(124),
    [sym_normal_annotation] = STATE(128),
    [sym_marker_annotation] = STATE(128),
    [sym_single_element_annotation] = STATE(128),
    [sym_class_declaration] = STATE(380),
    [sym_normal_class_declaration] = STATE(129),
    [sym_modifier] = STATE(130),
    [sym_interface_declaration] = STATE(380),
    [sym_annotation_type_declaration] = STATE(133),
    [sym_annotation_type_member_declaration] = STATE(495),
    [sym_annotation_type_element_declaration] = STATE(380),
    [sym_normal_interface_declaration] = STATE(133),
    [sym_constant_declaration] = STATE(380),
    [sym_variable_declarator_list] = STATE(382),
    [sym_variable_declarator] = STATE(267),
    [sym_variable_declarator_id] = STATE(268),
    [aux_sym_normal_class_declaration_repeat1] = STATE(383),
    [anon_sym_RBRACE] = ACTIONS(1053),
    [anon_sym_AT] = ACTIONS(293),
    [anon_sym_static] = ACTIONS(825),
    [anon_sym_class] = ACTIONS(827),
    [anon_sym_public] = ACTIONS(825),
    [anon_sym_protected] = ACTIONS(825),
    [anon_sym_private] = ACTIONS(825),
    [anon_sym_abstract] = ACTIONS(825),
    [anon_sym_final] = ACTIONS(825),
    [anon_sym_strictfp] = ACTIONS(825),
    [anon_sym_default] = ACTIONS(825),
    [anon_sym_ATinterface] = ACTIONS(299),
    [anon_sym_interface] = ACTIONS(829),
    [sym_identifier] = ACTIONS(831),
    [sym_comment] = ACTIONS(42),
  },
  [385] = {
    [sym__semicolon] = ACTIONS(1055),
    [anon_sym_LT] = ACTIONS(1055),
    [anon_sym_RBRACE] = ACTIONS(1055),
    [anon_sym_AT] = ACTIONS(1057),
    [anon_sym_static] = ACTIONS(1057),
    [anon_sym_class] = ACTIONS(1057),
    [anon_sym_public] = ACTIONS(1057),
    [anon_sym_protected] = ACTIONS(1057),
    [anon_sym_private] = ACTIONS(1057),
    [anon_sym_abstract] = ACTIONS(1057),
    [anon_sym_final] = ACTIONS(1057),
    [anon_sym_strictfp] = ACTIONS(1057),
    [anon_sym_default] = ACTIONS(1057),
    [anon_sym_ATinterface] = ACTIONS(1055),
    [anon_sym_interface] = ACTIONS(1057),
    [sym_result] = ACTIONS(1057),
    [sym_identifier] = ACTIONS(1059),
    [sym_comment] = ACTIONS(42),
  },
  [386] = {
    [sym__semicolon] = ACTIONS(1061),
    [anon_sym_LBRACE] = ACTIONS(1061),
    [anon_sym_RBRACE] = ACTIONS(1061),
    [anon_sym_AT] = ACTIONS(1063),
    [anon_sym_static] = ACTIONS(1063),
    [anon_sym_class] = ACTIONS(1063),
    [anon_sym_public] = ACTIONS(1063),
    [anon_sym_protected] = ACTIONS(1063),
    [anon_sym_private] = ACTIONS(1063),
    [anon_sym_abstract] = ACTIONS(1063),
    [anon_sym_final] = ACTIONS(1063),
    [anon_sym_strictfp] = ACTIONS(1063),
    [anon_sym_default] = ACTIONS(1063),
    [anon_sym_ATinterface] = ACTIONS(1061),
    [anon_sym_interface] = ACTIONS(1063),
    [sym_identifier] = ACTIONS(1065),
    [sym_comment] = ACTIONS(42),
  },
  [387] = {
    [sym_package_or_type_name] = STATE(497),
    [sym_identifier] = ACTIONS(1067),
    [sym_comment] = ACTIONS(42),
  },
  [388] = {
    [anon_sym_LT] = ACTIONS(64),
    [anon_sym_AT] = ACTIONS(66),
    [anon_sym_static] = ACTIONS(66),
    [anon_sym_class] = ACTIONS(66),
    [anon_sym_public] = ACTIONS(66),
    [anon_sym_protected] = ACTIONS(66),
    [anon_sym_private] = ACTIONS(66),
    [anon_sym_abstract] = ACTIONS(66),
    [anon_sym_final] = ACTIONS(66),
    [anon_sym_strictfp] = ACTIONS(66),
    [anon_sym_default] = ACTIONS(66),
    [anon_sym_ATinterface] = ACTIONS(64),
    [anon_sym_interface] = ACTIONS(66),
    [sym_result] = ACTIONS(66),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(42),
  },
  [389] = {
    [sym_identifier] = ACTIONS(1069),
    [sym_comment] = ACTIONS(42),
  },
  [390] = {
    [sym_identifier] = ACTIONS(1071),
    [sym_comment] = ACTIONS(42),
  },
  [391] = {
    [sym_identifier] = ACTIONS(1073),
    [sym_comment] = ACTIONS(42),
  },
  [392] = {
    [sym_method_declarator] = STATE(502),
    [sym_identifier] = ACTIONS(1075),
    [sym_comment] = ACTIONS(42),
  },
  [393] = {
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_AT] = ACTIONS(397),
    [anon_sym_static] = ACTIONS(397),
    [anon_sym_class] = ACTIONS(397),
    [anon_sym_public] = ACTIONS(397),
    [anon_sym_protected] = ACTIONS(397),
    [anon_sym_private] = ACTIONS(397),
    [anon_sym_abstract] = ACTIONS(397),
    [anon_sym_final] = ACTIONS(397),
    [anon_sym_strictfp] = ACTIONS(397),
    [anon_sym_default] = ACTIONS(397),
    [anon_sym_ATinterface] = ACTIONS(125),
    [anon_sym_interface] = ACTIONS(397),
    [sym_result] = ACTIONS(397),
    [sym_identifier] = ACTIONS(431),
    [sym_comment] = ACTIONS(42),
  },
  [394] = {
    [sym__semicolon] = ACTIONS(145),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(145),
    [anon_sym_AT] = ACTIONS(147),
    [anon_sym_static] = ACTIONS(147),
    [anon_sym_class] = ACTIONS(147),
    [anon_sym_public] = ACTIONS(147),
    [anon_sym_protected] = ACTIONS(147),
    [anon_sym_private] = ACTIONS(147),
    [anon_sym_abstract] = ACTIONS(147),
    [anon_sym_final] = ACTIONS(147),
    [anon_sym_strictfp] = ACTIONS(147),
    [anon_sym_default] = ACTIONS(147),
    [anon_sym_ATinterface] = ACTIONS(145),
    [anon_sym_interface] = ACTIONS(147),
    [sym_result] = ACTIONS(147),
    [sym_identifier] = ACTIONS(149),
    [sym_comment] = ACTIONS(42),
  },
  [395] = {
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_AT] = ACTIONS(433),
    [anon_sym_static] = ACTIONS(433),
    [anon_sym_class] = ACTIONS(433),
    [anon_sym_public] = ACTIONS(433),
    [anon_sym_protected] = ACTIONS(433),
    [anon_sym_private] = ACTIONS(433),
    [anon_sym_abstract] = ACTIONS(433),
    [anon_sym_final] = ACTIONS(433),
    [anon_sym_strictfp] = ACTIONS(433),
    [anon_sym_default] = ACTIONS(433),
    [anon_sym_ATinterface] = ACTIONS(151),
    [anon_sym_interface] = ACTIONS(433),
    [sym_result] = ACTIONS(433),
    [sym_identifier] = ACTIONS(435),
    [sym_comment] = ACTIONS(42),
  },
  [396] = {
    [sym__annotation] = STATE(504),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [aux_sym_class_or_interface_type_repeat1] = STATE(505),
    [anon_sym_AT] = ACTIONS(28),
    [sym_result] = ACTIONS(1077),
    [sym_comment] = ACTIONS(42),
  },
  [397] = {
    [sym__semicolon] = ACTIONS(445),
    [anon_sym_LT] = ACTIONS(445),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_AT] = ACTIONS(447),
    [anon_sym_static] = ACTIONS(447),
    [anon_sym_class] = ACTIONS(447),
    [anon_sym_public] = ACTIONS(447),
    [anon_sym_protected] = ACTIONS(447),
    [anon_sym_private] = ACTIONS(447),
    [anon_sym_abstract] = ACTIONS(447),
    [anon_sym_final] = ACTIONS(447),
    [anon_sym_strictfp] = ACTIONS(447),
    [anon_sym_default] = ACTIONS(447),
    [anon_sym_ATinterface] = ACTIONS(445),
    [anon_sym_interface] = ACTIONS(447),
    [sym_result] = ACTIONS(447),
    [sym_identifier] = ACTIONS(449),
    [sym_comment] = ACTIONS(42),
  },
  [398] = {
    [sym__semicolon] = ACTIONS(1079),
    [anon_sym_LT] = ACTIONS(1079),
    [anon_sym_RBRACE] = ACTIONS(1079),
    [anon_sym_AT] = ACTIONS(1081),
    [anon_sym_static] = ACTIONS(1081),
    [anon_sym_class] = ACTIONS(1081),
    [anon_sym_public] = ACTIONS(1081),
    [anon_sym_protected] = ACTIONS(1081),
    [anon_sym_private] = ACTIONS(1081),
    [anon_sym_abstract] = ACTIONS(1081),
    [anon_sym_final] = ACTIONS(1081),
    [anon_sym_strictfp] = ACTIONS(1081),
    [anon_sym_default] = ACTIONS(1081),
    [anon_sym_ATinterface] = ACTIONS(1079),
    [anon_sym_interface] = ACTIONS(1081),
    [sym_result] = ACTIONS(1081),
    [sym_identifier] = ACTIONS(1083),
    [sym_comment] = ACTIONS(42),
  },
  [399] = {
    [sym__semicolon] = ACTIONS(1085),
    [sym_comment] = ACTIONS(42),
  },
  [400] = {
    [sym_method_body] = STATE(508),
    [sym_block] = STATE(507),
    [sym__semicolon] = ACTIONS(1087),
    [anon_sym_LBRACE] = ACTIONS(289),
    [sym_comment] = ACTIONS(42),
  },
  [401] = {
    [sym__annotation] = STATE(388),
    [sym_normal_annotation] = STATE(393),
    [sym_marker_annotation] = STATE(393),
    [sym_single_element_annotation] = STATE(393),
    [sym_modifier] = STATE(512),
    [sym_type_parameters] = STATE(396),
    [sym_variable_declarator_list] = STATE(513),
    [sym_variable_declarator] = STATE(267),
    [sym_variable_declarator_id] = STATE(268),
    [sym_method_header] = STATE(514),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(843),
    [anon_sym_static] = ACTIONS(845),
    [anon_sym_class] = ACTIONS(1089),
    [anon_sym_public] = ACTIONS(845),
    [anon_sym_protected] = ACTIONS(845),
    [anon_sym_private] = ACTIONS(845),
    [anon_sym_abstract] = ACTIONS(845),
    [anon_sym_final] = ACTIONS(845),
    [anon_sym_strictfp] = ACTIONS(845),
    [anon_sym_default] = ACTIONS(845),
    [anon_sym_ATinterface] = ACTIONS(1091),
    [anon_sym_interface] = ACTIONS(1093),
    [sym_result] = ACTIONS(853),
    [sym_identifier] = ACTIONS(577),
    [sym_comment] = ACTIONS(42),
  },
  [402] = {
    [sym__annotation] = STATE(388),
    [sym_normal_annotation] = STATE(393),
    [sym_marker_annotation] = STATE(393),
    [sym_single_element_annotation] = STATE(393),
    [sym_class_declaration] = STATE(385),
    [sym_normal_class_declaration] = STATE(394),
    [sym_modifier] = STATE(395),
    [sym_type_parameters] = STATE(396),
    [sym_interface_declaration] = STATE(385),
    [sym_annotation_type_declaration] = STATE(397),
    [sym_normal_interface_declaration] = STATE(397),
    [sym_interface_member_declaration] = STATE(516),
    [sym_constant_declaration] = STATE(385),
    [sym_variable_declarator_list] = STATE(399),
    [sym_variable_declarator] = STATE(267),
    [sym_variable_declarator_id] = STATE(268),
    [sym_interface_method_declaration] = STATE(385),
    [sym_method_header] = STATE(400),
    [aux_sym_normal_class_declaration_repeat1] = STATE(401),
    [sym__semicolon] = ACTIONS(839),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(1095),
    [anon_sym_AT] = ACTIONS(843),
    [anon_sym_static] = ACTIONS(845),
    [anon_sym_class] = ACTIONS(847),
    [anon_sym_public] = ACTIONS(845),
    [anon_sym_protected] = ACTIONS(845),
    [anon_sym_private] = ACTIONS(845),
    [anon_sym_abstract] = ACTIONS(845),
    [anon_sym_final] = ACTIONS(845),
    [anon_sym_strictfp] = ACTIONS(845),
    [anon_sym_default] = ACTIONS(845),
    [anon_sym_ATinterface] = ACTIONS(849),
    [anon_sym_interface] = ACTIONS(851),
    [sym_result] = ACTIONS(853),
    [sym_identifier] = ACTIONS(577),
    [sym_comment] = ACTIONS(42),
  },
  [403] = {
    [anon_sym_LBRACE] = ACTIONS(1097),
    [sym_comment] = ACTIONS(42),
  },
  [404] = {
    [sym_interface_body] = STATE(517),
    [anon_sym_LBRACE] = ACTIONS(595),
    [sym_comment] = ACTIONS(42),
  },
  [405] = {
    [sym__semicolon] = ACTIONS(1099),
    [anon_sym_LBRACE] = ACTIONS(1099),
    [anon_sym_RBRACE] = ACTIONS(1099),
    [anon_sym_AT] = ACTIONS(1101),
    [anon_sym_static] = ACTIONS(1101),
    [anon_sym_class] = ACTIONS(1101),
    [anon_sym_public] = ACTIONS(1101),
    [anon_sym_protected] = ACTIONS(1101),
    [anon_sym_private] = ACTIONS(1101),
    [anon_sym_abstract] = ACTIONS(1101),
    [anon_sym_final] = ACTIONS(1101),
    [anon_sym_strictfp] = ACTIONS(1101),
    [anon_sym_default] = ACTIONS(1101),
    [anon_sym_ATinterface] = ACTIONS(1099),
    [anon_sym_interface] = ACTIONS(1101),
    [sym_identifier] = ACTIONS(1103),
    [sym_comment] = ACTIONS(42),
  },
  [406] = {
    [sym_superclass] = STATE(518),
    [sym_super_interfaces] = STATE(488),
    [sym_class_body] = STATE(489),
    [anon_sym_LBRACE] = ACTIONS(591),
    [anon_sym_extends] = ACTIONS(203),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [407] = {
    [sym__semicolon] = ACTIONS(1105),
    [anon_sym_LBRACE] = ACTIONS(1105),
    [anon_sym_RBRACE] = ACTIONS(1105),
    [anon_sym_AT] = ACTIONS(1107),
    [anon_sym_static] = ACTIONS(1107),
    [anon_sym_class] = ACTIONS(1107),
    [anon_sym_public] = ACTIONS(1107),
    [anon_sym_protected] = ACTIONS(1107),
    [anon_sym_private] = ACTIONS(1107),
    [anon_sym_abstract] = ACTIONS(1107),
    [anon_sym_final] = ACTIONS(1107),
    [anon_sym_strictfp] = ACTIONS(1107),
    [anon_sym_default] = ACTIONS(1107),
    [anon_sym_ATinterface] = ACTIONS(1105),
    [anon_sym_interface] = ACTIONS(1107),
    [sym_identifier] = ACTIONS(1109),
    [sym_comment] = ACTIONS(42),
  },
  [408] = {
    [sym_extends_interfaces] = STATE(519),
    [sym_interface_body] = STATE(517),
    [anon_sym_LBRACE] = ACTIONS(595),
    [anon_sym_extends] = ACTIONS(597),
    [sym_comment] = ACTIONS(42),
  },
  [409] = {
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_boolean] = ACTIONS(179),
    [anon_sym_byte] = ACTIONS(179),
    [anon_sym_short] = ACTIONS(179),
    [anon_sym_int] = ACTIONS(179),
    [anon_sym_long] = ACTIONS(179),
    [anon_sym_char] = ACTIONS(179),
    [anon_sym_float] = ACTIONS(179),
    [anon_sym_double] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(177),
    [sym_identifier] = ACTIONS(523),
    [sym_comment] = ACTIONS(42),
  },
  [410] = {
    [anon_sym_LPAREN] = ACTIONS(1111),
    [anon_sym_DOT] = ACTIONS(1113),
    [anon_sym_boolean] = ACTIONS(551),
    [anon_sym_byte] = ACTIONS(551),
    [anon_sym_short] = ACTIONS(551),
    [anon_sym_int] = ACTIONS(551),
    [anon_sym_long] = ACTIONS(551),
    [anon_sym_char] = ACTIONS(551),
    [anon_sym_float] = ACTIONS(551),
    [anon_sym_double] = ACTIONS(551),
    [anon_sym_AT] = ACTIONS(181),
    [sym_identifier] = ACTIONS(589),
    [sym_comment] = ACTIONS(42),
  },
  [411] = {
    [anon_sym_GT] = ACTIONS(1115),
    [anon_sym_AMP] = ACTIONS(1115),
    [anon_sym_LBRACE] = ACTIONS(1115),
    [anon_sym_COMMA] = ACTIONS(1115),
    [anon_sym_DOT] = ACTIONS(1115),
    [anon_sym_LBRACK] = ACTIONS(1115),
    [anon_sym_AT] = ACTIONS(1115),
    [anon_sym_implements] = ACTIONS(1115),
    [sym_comment] = ACTIONS(42),
  },
  [412] = {
    [sym_type_argument] = STATE(522),
    [sym_reference_type] = STATE(295),
    [sym_class_or_interface_type] = STATE(296),
    [sym_primitive_type] = STATE(297),
    [sym_integral_type] = STATE(290),
    [sym_floating_point_type] = STATE(290),
    [sym__annotation] = STATE(298),
    [sym_normal_annotation] = STATE(299),
    [sym_marker_annotation] = STATE(299),
    [sym_single_element_annotation] = STATE(299),
    [aux_sym_class_or_interface_type_repeat1] = STATE(300),
    [anon_sym_boolean] = ACTIONS(619),
    [anon_sym_byte] = ACTIONS(621),
    [anon_sym_short] = ACTIONS(621),
    [anon_sym_int] = ACTIONS(621),
    [anon_sym_long] = ACTIONS(621),
    [anon_sym_char] = ACTIONS(621),
    [anon_sym_float] = ACTIONS(623),
    [anon_sym_double] = ACTIONS(623),
    [anon_sym_AT] = ACTIONS(625),
    [sym_identifier] = ACTIONS(627),
    [sym_comment] = ACTIONS(42),
  },
  [413] = {
    [anon_sym_GT] = ACTIONS(1117),
    [anon_sym_COMMA] = ACTIONS(1119),
    [sym_comment] = ACTIONS(42),
  },
  [414] = {
    [anon_sym_GT] = ACTIONS(1121),
    [anon_sym_COMMA] = ACTIONS(1121),
    [sym_comment] = ACTIONS(42),
  },
  [415] = {
    [anon_sym_LBRACK] = ACTIONS(1123),
    [anon_sym_AT] = ACTIONS(1123),
    [sym_comment] = ACTIONS(42),
  },
  [416] = {
    [anon_sym_boolean] = ACTIONS(561),
    [anon_sym_byte] = ACTIONS(561),
    [anon_sym_short] = ACTIONS(561),
    [anon_sym_int] = ACTIONS(561),
    [anon_sym_long] = ACTIONS(561),
    [anon_sym_char] = ACTIONS(561),
    [anon_sym_float] = ACTIONS(561),
    [anon_sym_double] = ACTIONS(561),
    [anon_sym_AT] = ACTIONS(227),
    [sym_identifier] = ACTIONS(1125),
    [sym_comment] = ACTIONS(42),
  },
  [417] = {
    [anon_sym_GT] = ACTIONS(1127),
    [anon_sym_AMP] = ACTIONS(1127),
    [anon_sym_LBRACE] = ACTIONS(1127),
    [anon_sym_COMMA] = ACTIONS(1127),
    [anon_sym_DOT] = ACTIONS(1127),
    [anon_sym_LBRACK] = ACTIONS(1127),
    [anon_sym_AT] = ACTIONS(1127),
    [anon_sym_implements] = ACTIONS(1127),
    [sym_comment] = ACTIONS(42),
  },
  [418] = {
    [sym_type_arguments] = STATE(525),
    [anon_sym_GT] = ACTIONS(1127),
    [anon_sym_LT] = ACTIONS(461),
    [anon_sym_AMP] = ACTIONS(1127),
    [anon_sym_LBRACE] = ACTIONS(1127),
    [anon_sym_COMMA] = ACTIONS(1127),
    [anon_sym_DOT] = ACTIONS(1127),
    [anon_sym_LBRACK] = ACTIONS(1127),
    [anon_sym_AT] = ACTIONS(1127),
    [anon_sym_implements] = ACTIONS(1127),
    [sym_comment] = ACTIONS(42),
  },
  [419] = {
    [sym__annotation] = STATE(184),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(1129),
    [sym_comment] = ACTIONS(42),
  },
  [420] = {
    [anon_sym_GT] = ACTIONS(1131),
    [anon_sym_AMP] = ACTIONS(1131),
    [anon_sym_LBRACE] = ACTIONS(1131),
    [anon_sym_COMMA] = ACTIONS(1131),
    [anon_sym_DOT] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(1131),
    [anon_sym_AT] = ACTIONS(1131),
    [anon_sym_implements] = ACTIONS(1131),
    [sym_comment] = ACTIONS(42),
  },
  [421] = {
    [anon_sym_LBRACE] = ACTIONS(1133),
    [anon_sym_COMMA] = ACTIONS(1133),
    [sym_comment] = ACTIONS(42),
  },
  [422] = {
    [anon_sym_EQ] = ACTIONS(649),
    [anon_sym_PLUS_EQ] = ACTIONS(647),
    [anon_sym_DASH_EQ] = ACTIONS(647),
    [anon_sym_STAR_EQ] = ACTIONS(647),
    [anon_sym_SLASH_EQ] = ACTIONS(647),
    [anon_sym_AMP_EQ] = ACTIONS(647),
    [anon_sym_PIPE_EQ] = ACTIONS(647),
    [anon_sym_CARET_EQ] = ACTIONS(647),
    [anon_sym_PERCENT_EQ] = ACTIONS(647),
    [anon_sym_LT_LT_EQ] = ACTIONS(647),
    [anon_sym_GT_GT_EQ] = ACTIONS(647),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(647),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_CARET] = ACTIONS(335),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_GT_GT_GT] = ACTIONS(331),
    [anon_sym_QMARK] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(647),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [423] = {
    [ts_builtin_sym_end] = ACTIONS(1135),
    [sym_decimal_integer_literal] = ACTIONS(1137),
    [sym_hex_integer_literal] = ACTIONS(1137),
    [sym_octal_integer_literal] = ACTIONS(1137),
    [sym_binary_integer_literal] = ACTIONS(1137),
    [sym_decimal_floating_point_literal] = ACTIONS(1137),
    [sym_hex_floating_point_literal] = ACTIONS(1139),
    [anon_sym_true] = ACTIONS(1135),
    [anon_sym_false] = ACTIONS(1135),
    [anon_sym_SQUOTE] = ACTIONS(1135),
    [sym_string_literal] = ACTIONS(1135),
    [sym_null_literal] = ACTIONS(1135),
    [anon_sym_BANG] = ACTIONS(1135),
    [anon_sym_TILDE] = ACTIONS(1135),
    [anon_sym_PLUS_PLUS] = ACTIONS(1135),
    [anon_sym_DASH_DASH] = ACTIONS(1135),
    [anon_sym_if] = ACTIONS(1135),
    [anon_sym_RBRACE] = ACTIONS(1135),
    [anon_sym_elseif] = ACTIONS(1135),
    [anon_sym_AT] = ACTIONS(1135),
    [anon_sym_open] = ACTIONS(1135),
    [anon_sym_module] = ACTIONS(1135),
    [anon_sym_static] = ACTIONS(1135),
    [anon_sym_package] = ACTIONS(1135),
    [anon_sym_import] = ACTIONS(1135),
    [anon_sym_class] = ACTIONS(1135),
    [anon_sym_public] = ACTIONS(1135),
    [anon_sym_protected] = ACTIONS(1135),
    [anon_sym_private] = ACTIONS(1135),
    [anon_sym_abstract] = ACTIONS(1135),
    [anon_sym_final] = ACTIONS(1135),
    [anon_sym_strictfp] = ACTIONS(1135),
    [anon_sym_default] = ACTIONS(1135),
    [sym_comment] = ACTIONS(42),
  },
  [424] = {
    [ts_builtin_sym_end] = ACTIONS(1141),
    [sym_decimal_integer_literal] = ACTIONS(1143),
    [sym_hex_integer_literal] = ACTIONS(1143),
    [sym_octal_integer_literal] = ACTIONS(1143),
    [sym_binary_integer_literal] = ACTIONS(1143),
    [sym_decimal_floating_point_literal] = ACTIONS(1143),
    [sym_hex_floating_point_literal] = ACTIONS(1145),
    [anon_sym_true] = ACTIONS(1141),
    [anon_sym_false] = ACTIONS(1141),
    [anon_sym_SQUOTE] = ACTIONS(1141),
    [sym_string_literal] = ACTIONS(1141),
    [sym_null_literal] = ACTIONS(1141),
    [anon_sym_BANG] = ACTIONS(1141),
    [anon_sym_TILDE] = ACTIONS(1141),
    [anon_sym_PLUS_PLUS] = ACTIONS(1141),
    [anon_sym_DASH_DASH] = ACTIONS(1141),
    [anon_sym_if] = ACTIONS(1141),
    [anon_sym_RBRACE] = ACTIONS(1141),
    [anon_sym_elseif] = ACTIONS(1141),
    [anon_sym_AT] = ACTIONS(1141),
    [anon_sym_open] = ACTIONS(1141),
    [anon_sym_module] = ACTIONS(1141),
    [anon_sym_static] = ACTIONS(1141),
    [anon_sym_package] = ACTIONS(1141),
    [anon_sym_import] = ACTIONS(1141),
    [anon_sym_class] = ACTIONS(1141),
    [anon_sym_public] = ACTIONS(1141),
    [anon_sym_protected] = ACTIONS(1141),
    [anon_sym_private] = ACTIONS(1141),
    [anon_sym_abstract] = ACTIONS(1141),
    [anon_sym_final] = ACTIONS(1141),
    [anon_sym_strictfp] = ACTIONS(1141),
    [anon_sym_default] = ACTIONS(1141),
    [sym_comment] = ACTIONS(42),
  },
  [425] = {
    [sym__expression] = STATE(527),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(657),
    [anon_sym_TILDE] = ACTIONS(657),
    [anon_sym_PLUS_PLUS] = ACTIONS(659),
    [anon_sym_DASH_DASH] = ACTIONS(659),
    [sym_comment] = ACTIONS(42),
  },
  [426] = {
    [sym__expression] = STATE(528),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(657),
    [anon_sym_TILDE] = ACTIONS(657),
    [anon_sym_PLUS_PLUS] = ACTIONS(659),
    [anon_sym_DASH_DASH] = ACTIONS(659),
    [sym_comment] = ACTIONS(42),
  },
  [427] = {
    [sym__expression] = STATE(529),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(657),
    [anon_sym_TILDE] = ACTIONS(657),
    [anon_sym_PLUS_PLUS] = ACTIONS(659),
    [anon_sym_DASH_DASH] = ACTIONS(659),
    [sym_comment] = ACTIONS(42),
  },
  [428] = {
    [sym__expression] = STATE(530),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(657),
    [anon_sym_TILDE] = ACTIONS(657),
    [anon_sym_PLUS_PLUS] = ACTIONS(659),
    [anon_sym_DASH_DASH] = ACTIONS(659),
    [sym_comment] = ACTIONS(42),
  },
  [429] = {
    [sym__expression] = STATE(531),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(657),
    [anon_sym_TILDE] = ACTIONS(657),
    [anon_sym_PLUS_PLUS] = ACTIONS(659),
    [anon_sym_DASH_DASH] = ACTIONS(659),
    [sym_comment] = ACTIONS(42),
  },
  [430] = {
    [sym__expression] = STATE(87),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(657),
    [anon_sym_TILDE] = ACTIONS(657),
    [anon_sym_PLUS_PLUS] = ACTIONS(659),
    [anon_sym_DASH_DASH] = ACTIONS(659),
    [sym_comment] = ACTIONS(42),
  },
  [431] = {
    [sym__expression] = STATE(532),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
    [anon_sym_PLUS_PLUS] = ACTIONS(215),
    [anon_sym_DASH_DASH] = ACTIONS(215),
    [sym_comment] = ACTIONS(42),
  },
  [432] = {
    [sym__expression] = STATE(35),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(909),
    [anon_sym_TILDE] = ACTIONS(909),
    [anon_sym_PLUS_PLUS] = ACTIONS(911),
    [anon_sym_DASH_DASH] = ACTIONS(911),
    [sym_comment] = ACTIONS(42),
  },
  [433] = {
    [sym__expression] = STATE(36),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(909),
    [anon_sym_TILDE] = ACTIONS(909),
    [anon_sym_PLUS_PLUS] = ACTIONS(911),
    [anon_sym_DASH_DASH] = ACTIONS(911),
    [sym_comment] = ACTIONS(42),
  },
  [434] = {
    [anon_sym_EQ] = ACTIONS(1147),
    [anon_sym_PLUS_EQ] = ACTIONS(1149),
    [anon_sym_DASH_EQ] = ACTIONS(1149),
    [anon_sym_STAR_EQ] = ACTIONS(1149),
    [anon_sym_SLASH_EQ] = ACTIONS(1149),
    [anon_sym_AMP_EQ] = ACTIONS(1149),
    [anon_sym_PIPE_EQ] = ACTIONS(1149),
    [anon_sym_CARET_EQ] = ACTIONS(1149),
    [anon_sym_PERCENT_EQ] = ACTIONS(1149),
    [anon_sym_LT_LT_EQ] = ACTIONS(1149),
    [anon_sym_GT_GT_EQ] = ACTIONS(1149),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1149),
    [anon_sym_GT] = ACTIONS(1151),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(169),
    [anon_sym_GT_EQ] = ACTIONS(1153),
    [anon_sym_LT_EQ] = ACTIONS(1153),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(1155),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(171),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_LT_LT] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(171),
    [anon_sym_GT_GT_GT] = ACTIONS(171),
    [anon_sym_QMARK] = ACTIONS(169),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [sym_comment] = ACTIONS(42),
  },
  [435] = {
    [sym__semicolon] = ACTIONS(1157),
    [anon_sym_RPAREN] = ACTIONS(1157),
    [anon_sym_RBRACE] = ACTIONS(1157),
    [anon_sym_COMMA] = ACTIONS(1157),
    [sym_comment] = ACTIONS(42),
  },
  [436] = {
    [sym__literal] = STATE(227),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(228),
    [sym__annotation] = STATE(227),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [sym_element_value] = STATE(541),
    [sym_element_value_array_initializer] = STATE(227),
    [sym_conditional_expression] = STATE(227),
    [sym_conditional_or_expression] = STATE(319),
    [sym_conditional_and_expression] = STATE(320),
    [sym_inclusive_or_expression] = STATE(321),
    [sym_exclusive_or_expression] = STATE(322),
    [sym_and_expression] = STATE(234),
    [sym_relational_expression] = STATE(323),
    [sym_equality_expression] = STATE(324),
    [sym_shift_expression] = STATE(325),
    [sym_additive_expression] = STATE(326),
    [sym_multiplicative_expression] = STATE(327),
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
    [anon_sym_BANG] = ACTIONS(661),
    [anon_sym_TILDE] = ACTIONS(661),
    [anon_sym_LBRACE] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(1159),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(42),
  },
  [437] = {
    [anon_sym_RBRACE] = ACTIONS(1159),
    [anon_sym_COMMA] = ACTIONS(1161),
    [sym_comment] = ACTIONS(42),
  },
  [438] = {
    [sym_unary_expression] = STATE(228),
    [sym_conditional_and_expression] = STATE(543),
    [sym_inclusive_or_expression] = STATE(321),
    [sym_exclusive_or_expression] = STATE(322),
    [sym_and_expression] = STATE(234),
    [sym_relational_expression] = STATE(323),
    [sym_equality_expression] = STATE(324),
    [sym_shift_expression] = STATE(325),
    [sym_additive_expression] = STATE(326),
    [sym_multiplicative_expression] = STATE(327),
    [anon_sym_BANG] = ACTIONS(661),
    [anon_sym_TILDE] = ACTIONS(661),
    [sym_comment] = ACTIONS(42),
  },
  [439] = {
    [sym__expression] = STATE(544),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
    [anon_sym_PLUS_PLUS] = ACTIONS(215),
    [anon_sym_DASH_DASH] = ACTIONS(215),
    [sym_comment] = ACTIONS(42),
  },
  [440] = {
    [sym_unary_expression] = STATE(228),
    [sym_inclusive_or_expression] = STATE(545),
    [sym_exclusive_or_expression] = STATE(322),
    [sym_and_expression] = STATE(234),
    [sym_relational_expression] = STATE(323),
    [sym_equality_expression] = STATE(324),
    [sym_shift_expression] = STATE(325),
    [sym_additive_expression] = STATE(326),
    [sym_multiplicative_expression] = STATE(327),
    [anon_sym_BANG] = ACTIONS(661),
    [anon_sym_TILDE] = ACTIONS(661),
    [sym_comment] = ACTIONS(42),
  },
  [441] = {
    [sym_unary_expression] = STATE(228),
    [sym_exclusive_or_expression] = STATE(546),
    [sym_and_expression] = STATE(234),
    [sym_relational_expression] = STATE(323),
    [sym_equality_expression] = STATE(324),
    [sym_shift_expression] = STATE(325),
    [sym_additive_expression] = STATE(326),
    [sym_multiplicative_expression] = STATE(327),
    [anon_sym_BANG] = ACTIONS(661),
    [anon_sym_TILDE] = ACTIONS(661),
    [sym_comment] = ACTIONS(42),
  },
  [442] = {
    [sym_unary_expression] = STATE(228),
    [sym_and_expression] = STATE(452),
    [sym_relational_expression] = STATE(323),
    [sym_equality_expression] = STATE(324),
    [sym_shift_expression] = STATE(325),
    [sym_additive_expression] = STATE(326),
    [sym_multiplicative_expression] = STATE(327),
    [anon_sym_BANG] = ACTIONS(661),
    [anon_sym_TILDE] = ACTIONS(661),
    [sym_comment] = ACTIONS(42),
  },
  [443] = {
    [sym_unary_expression] = STATE(228),
    [sym_shift_expression] = STATE(547),
    [sym_additive_expression] = STATE(326),
    [sym_multiplicative_expression] = STATE(327),
    [anon_sym_BANG] = ACTIONS(661),
    [anon_sym_TILDE] = ACTIONS(661),
    [sym_comment] = ACTIONS(42),
  },
  [444] = {
    [sym_unary_expression] = STATE(228),
    [sym_relational_expression] = STATE(548),
    [sym_shift_expression] = STATE(325),
    [sym_additive_expression] = STATE(326),
    [sym_multiplicative_expression] = STATE(327),
    [anon_sym_BANG] = ACTIONS(661),
    [anon_sym_TILDE] = ACTIONS(661),
    [sym_comment] = ACTIONS(42),
  },
  [445] = {
    [sym_unary_expression] = STATE(228),
    [sym_additive_expression] = STATE(549),
    [sym_multiplicative_expression] = STATE(327),
    [anon_sym_BANG] = ACTIONS(661),
    [anon_sym_TILDE] = ACTIONS(661),
    [sym_comment] = ACTIONS(42),
  },
  [446] = {
    [sym_unary_expression] = STATE(228),
    [sym_multiplicative_expression] = STATE(550),
    [anon_sym_BANG] = ACTIONS(661),
    [anon_sym_TILDE] = ACTIONS(661),
    [sym_comment] = ACTIONS(42),
  },
  [447] = {
    [sym_unary_expression] = STATE(457),
    [anon_sym_BANG] = ACTIONS(661),
    [anon_sym_TILDE] = ACTIONS(661),
    [sym_comment] = ACTIONS(42),
  },
  [448] = {
    [anon_sym_AMP_AMP] = ACTIONS(681),
    [anon_sym_PIPE_PIPE] = ACTIONS(1163),
    [anon_sym_QMARK] = ACTIONS(1163),
    [anon_sym_RPAREN] = ACTIONS(1163),
    [anon_sym_COMMA] = ACTIONS(1163),
    [sym_comment] = ACTIONS(42),
  },
  [449] = {
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PLUS_EQ] = ACTIONS(319),
    [anon_sym_DASH_EQ] = ACTIONS(319),
    [anon_sym_STAR_EQ] = ACTIONS(319),
    [anon_sym_SLASH_EQ] = ACTIONS(319),
    [anon_sym_AMP_EQ] = ACTIONS(319),
    [anon_sym_PIPE_EQ] = ACTIONS(319),
    [anon_sym_CARET_EQ] = ACTIONS(319),
    [anon_sym_PERCENT_EQ] = ACTIONS(319),
    [anon_sym_LT_LT_EQ] = ACTIONS(319),
    [anon_sym_GT_GT_EQ] = ACTIONS(319),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_CARET] = ACTIONS(335),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_GT_GT_GT] = ACTIONS(331),
    [anon_sym_QMARK] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(1165),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [450] = {
    [anon_sym_AMP_AMP] = ACTIONS(1167),
    [anon_sym_PIPE_PIPE] = ACTIONS(1167),
    [anon_sym_PIPE] = ACTIONS(687),
    [anon_sym_QMARK] = ACTIONS(1167),
    [anon_sym_RPAREN] = ACTIONS(1167),
    [anon_sym_COMMA] = ACTIONS(1167),
    [sym_comment] = ACTIONS(42),
  },
  [451] = {
    [anon_sym_AMP_AMP] = ACTIONS(1169),
    [anon_sym_PIPE_PIPE] = ACTIONS(1169),
    [anon_sym_PIPE] = ACTIONS(1171),
    [anon_sym_CARET] = ACTIONS(693),
    [anon_sym_QMARK] = ACTIONS(1169),
    [anon_sym_RPAREN] = ACTIONS(1169),
    [anon_sym_COMMA] = ACTIONS(1169),
    [sym_comment] = ACTIONS(42),
  },
  [452] = {
    [sym__semicolon] = ACTIONS(1173),
    [anon_sym_AMP_AMP] = ACTIONS(1173),
    [anon_sym_PIPE_PIPE] = ACTIONS(1173),
    [anon_sym_PIPE] = ACTIONS(1175),
    [anon_sym_CARET] = ACTIONS(1173),
    [anon_sym_QMARK] = ACTIONS(1173),
    [anon_sym_RPAREN] = ACTIONS(1173),
    [anon_sym_RBRACE] = ACTIONS(1173),
    [anon_sym_COMMA] = ACTIONS(1173),
    [sym_comment] = ACTIONS(42),
  },
  [453] = {
    [anon_sym_LT] = ACTIONS(1177),
    [anon_sym_EQ_EQ] = ACTIONS(1179),
    [anon_sym_BANG_EQ] = ACTIONS(1179),
    [anon_sym_AMP_AMP] = ACTIONS(1179),
    [anon_sym_PIPE_PIPE] = ACTIONS(1179),
    [anon_sym_PIPE] = ACTIONS(1177),
    [anon_sym_CARET] = ACTIONS(1179),
    [anon_sym_LT_LT] = ACTIONS(713),
    [anon_sym_GT_GT] = ACTIONS(715),
    [anon_sym_GT_GT_GT] = ACTIONS(713),
    [anon_sym_QMARK] = ACTIONS(1179),
    [anon_sym_RPAREN] = ACTIONS(1179),
    [anon_sym_COMMA] = ACTIONS(1179),
    [sym_comment] = ACTIONS(42),
  },
  [454] = {
    [anon_sym_LT] = ACTIONS(699),
    [anon_sym_EQ_EQ] = ACTIONS(1181),
    [anon_sym_BANG_EQ] = ACTIONS(1181),
    [anon_sym_AMP_AMP] = ACTIONS(1183),
    [anon_sym_PIPE_PIPE] = ACTIONS(1183),
    [anon_sym_PIPE] = ACTIONS(1185),
    [anon_sym_CARET] = ACTIONS(1183),
    [anon_sym_QMARK] = ACTIONS(1183),
    [anon_sym_RPAREN] = ACTIONS(1183),
    [anon_sym_COMMA] = ACTIONS(1183),
    [sym_comment] = ACTIONS(42),
  },
  [455] = {
    [anon_sym_LT] = ACTIONS(1187),
    [anon_sym_EQ_EQ] = ACTIONS(1189),
    [anon_sym_BANG_EQ] = ACTIONS(1189),
    [anon_sym_AMP_AMP] = ACTIONS(1189),
    [anon_sym_PIPE_PIPE] = ACTIONS(1189),
    [anon_sym_PLUS] = ACTIONS(721),
    [anon_sym_DASH] = ACTIONS(721),
    [anon_sym_PIPE] = ACTIONS(1187),
    [anon_sym_CARET] = ACTIONS(1189),
    [anon_sym_LT_LT] = ACTIONS(1189),
    [anon_sym_GT_GT] = ACTIONS(1187),
    [anon_sym_GT_GT_GT] = ACTIONS(1189),
    [anon_sym_QMARK] = ACTIONS(1189),
    [anon_sym_RPAREN] = ACTIONS(1189),
    [anon_sym_COMMA] = ACTIONS(1189),
    [sym_comment] = ACTIONS(42),
  },
  [456] = {
    [anon_sym_LT] = ACTIONS(1191),
    [anon_sym_EQ_EQ] = ACTIONS(1193),
    [anon_sym_BANG_EQ] = ACTIONS(1193),
    [anon_sym_AMP_AMP] = ACTIONS(1193),
    [anon_sym_PIPE_PIPE] = ACTIONS(1193),
    [anon_sym_PLUS] = ACTIONS(1193),
    [anon_sym_DASH] = ACTIONS(1193),
    [anon_sym_STAR] = ACTIONS(727),
    [anon_sym_SLASH] = ACTIONS(729),
    [anon_sym_PIPE] = ACTIONS(1191),
    [anon_sym_CARET] = ACTIONS(1193),
    [anon_sym_PERCENT] = ACTIONS(727),
    [anon_sym_LT_LT] = ACTIONS(1193),
    [anon_sym_GT_GT] = ACTIONS(1191),
    [anon_sym_GT_GT_GT] = ACTIONS(1193),
    [anon_sym_QMARK] = ACTIONS(1193),
    [anon_sym_RPAREN] = ACTIONS(1193),
    [anon_sym_COMMA] = ACTIONS(1193),
    [sym_comment] = ACTIONS(42),
  },
  [457] = {
    [sym__semicolon] = ACTIONS(1195),
    [anon_sym_LT] = ACTIONS(1197),
    [anon_sym_EQ_EQ] = ACTIONS(1195),
    [anon_sym_BANG_EQ] = ACTIONS(1195),
    [anon_sym_AMP_AMP] = ACTIONS(1195),
    [anon_sym_PIPE_PIPE] = ACTIONS(1195),
    [anon_sym_PLUS] = ACTIONS(1195),
    [anon_sym_DASH] = ACTIONS(1195),
    [anon_sym_STAR] = ACTIONS(1195),
    [anon_sym_SLASH] = ACTIONS(1197),
    [anon_sym_PIPE] = ACTIONS(1197),
    [anon_sym_CARET] = ACTIONS(1195),
    [anon_sym_PERCENT] = ACTIONS(1195),
    [anon_sym_LT_LT] = ACTIONS(1195),
    [anon_sym_GT_GT] = ACTIONS(1197),
    [anon_sym_GT_GT_GT] = ACTIONS(1195),
    [anon_sym_QMARK] = ACTIONS(1195),
    [anon_sym_RPAREN] = ACTIONS(1195),
    [anon_sym_RBRACE] = ACTIONS(1195),
    [anon_sym_COMMA] = ACTIONS(1195),
    [sym_comment] = ACTIONS(42),
  },
  [458] = {
    [anon_sym_RBRACE] = ACTIONS(1199),
    [anon_sym_requires] = ACTIONS(1199),
    [anon_sym_exports] = ACTIONS(1199),
    [anon_sym_opens] = ACTIONS(1199),
    [anon_sym_uses] = ACTIONS(1199),
    [anon_sym_provides] = ACTIONS(1199),
    [sym_comment] = ACTIONS(42),
  },
  [459] = {
    [sym__semicolon] = ACTIONS(1201),
    [anon_sym_COMMA] = ACTIONS(753),
    [sym_comment] = ACTIONS(42),
  },
  [460] = {
    [sym__semicolon] = ACTIONS(1203),
    [anon_sym_COMMA] = ACTIONS(1203),
    [anon_sym_DOT] = ACTIONS(521),
    [sym_comment] = ACTIONS(42),
  },
  [461] = {
    [sym_package_or_type_name] = STATE(553),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(42),
  },
  [462] = {
    [sym__semicolon] = ACTIONS(1201),
    [anon_sym_COMMA] = ACTIONS(1205),
    [sym_comment] = ACTIONS(42),
  },
  [463] = {
    [anon_sym_AT] = ACTIONS(489),
    [sym_identifier] = ACTIONS(1207),
    [sym_comment] = ACTIONS(42),
  },
  [464] = {
    [anon_sym_AT] = ACTIONS(491),
    [sym_identifier] = ACTIONS(1209),
    [sym_comment] = ACTIONS(42),
  },
  [465] = {
    [anon_sym_GT] = ACTIONS(1211),
    [anon_sym_AMP] = ACTIONS(1211),
    [anon_sym_COMMA] = ACTIONS(1211),
    [sym_comment] = ACTIONS(42),
  },
  [466] = {
    [sym_class_or_interface_type] = STATE(555),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [aux_sym_class_or_interface_type_repeat1] = STATE(138),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(303),
    [sym_comment] = ACTIONS(42),
  },
  [467] = {
    [sym__expression] = STATE(556),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(781),
    [anon_sym_TILDE] = ACTIONS(781),
    [anon_sym_PLUS_PLUS] = ACTIONS(783),
    [anon_sym_DASH_DASH] = ACTIONS(783),
    [sym_comment] = ACTIONS(42),
  },
  [468] = {
    [sym__expression] = STATE(557),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(781),
    [anon_sym_TILDE] = ACTIONS(781),
    [anon_sym_PLUS_PLUS] = ACTIONS(783),
    [anon_sym_DASH_DASH] = ACTIONS(783),
    [sym_comment] = ACTIONS(42),
  },
  [469] = {
    [sym__expression] = STATE(558),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(781),
    [anon_sym_TILDE] = ACTIONS(781),
    [anon_sym_PLUS_PLUS] = ACTIONS(783),
    [anon_sym_DASH_DASH] = ACTIONS(783),
    [sym_comment] = ACTIONS(42),
  },
  [470] = {
    [sym__expression] = STATE(559),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(781),
    [anon_sym_TILDE] = ACTIONS(781),
    [anon_sym_PLUS_PLUS] = ACTIONS(783),
    [anon_sym_DASH_DASH] = ACTIONS(783),
    [sym_comment] = ACTIONS(42),
  },
  [471] = {
    [sym__expression] = STATE(560),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(781),
    [anon_sym_TILDE] = ACTIONS(781),
    [anon_sym_PLUS_PLUS] = ACTIONS(783),
    [anon_sym_DASH_DASH] = ACTIONS(783),
    [sym_comment] = ACTIONS(42),
  },
  [472] = {
    [sym__expression] = STATE(87),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(781),
    [anon_sym_TILDE] = ACTIONS(781),
    [anon_sym_PLUS_PLUS] = ACTIONS(783),
    [anon_sym_DASH_DASH] = ACTIONS(783),
    [sym_comment] = ACTIONS(42),
  },
  [473] = {
    [sym__expression] = STATE(561),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
    [anon_sym_PLUS_PLUS] = ACTIONS(215),
    [anon_sym_DASH_DASH] = ACTIONS(215),
    [sym_comment] = ACTIONS(42),
  },
  [474] = {
    [sym__statement] = STATE(562),
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
    [sym_else_if_clause] = STATE(565),
    [sym_else_clause] = STATE(562),
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
    [sym_modifier] = STATE(28),
    [aux_sym_if_then_statement_repeat1] = STATE(566),
    [aux_sym_class_or_interface_type_repeat1] = STATE(30),
    [aux_sym_normal_class_declaration_repeat1] = STATE(31),
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
    [anon_sym_if] = ACTIONS(1213),
    [anon_sym_LBRACE] = ACTIONS(1215),
    [anon_sym_RBRACE] = ACTIONS(1215),
    [anon_sym_elseif] = ACTIONS(1217),
    [anon_sym_else] = ACTIONS(1219),
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
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [sym_comment] = ACTIONS(42),
  },
  [475] = {
    [anon_sym_AT] = ACTIONS(341),
    [anon_sym_static] = ACTIONS(957),
    [anon_sym_class] = ACTIONS(957),
    [anon_sym_public] = ACTIONS(957),
    [anon_sym_protected] = ACTIONS(957),
    [anon_sym_private] = ACTIONS(957),
    [anon_sym_abstract] = ACTIONS(957),
    [anon_sym_final] = ACTIONS(957),
    [anon_sym_strictfp] = ACTIONS(957),
    [anon_sym_default] = ACTIONS(957),
    [sym_identifier] = ACTIONS(1017),
    [sym_comment] = ACTIONS(42),
  },
  [476] = {
    [anon_sym_EQ] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(1221),
    [sym_comment] = ACTIONS(42),
  },
  [477] = {
    [anon_sym_RPAREN] = ACTIONS(1221),
    [sym_comment] = ACTIONS(42),
  },
  [478] = {
    [anon_sym_RPAREN] = ACTIONS(1223),
    [sym_comment] = ACTIONS(42),
  },
  [479] = {
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(353),
    [anon_sym_static] = ACTIONS(355),
    [anon_sym_class] = ACTIONS(355),
    [anon_sym_public] = ACTIONS(355),
    [anon_sym_protected] = ACTIONS(355),
    [anon_sym_private] = ACTIONS(355),
    [anon_sym_abstract] = ACTIONS(355),
    [anon_sym_final] = ACTIONS(355),
    [anon_sym_strictfp] = ACTIONS(355),
    [anon_sym_default] = ACTIONS(355),
    [sym_identifier] = ACTIONS(951),
    [sym_comment] = ACTIONS(42),
  },
  [480] = {
    [sym__semicolon] = ACTIONS(1225),
    [anon_sym_EQ] = ACTIONS(1225),
    [anon_sym_GT] = ACTIONS(1225),
    [anon_sym_RPAREN] = ACTIONS(1225),
    [anon_sym_LBRACE] = ACTIONS(1225),
    [anon_sym_COMMA] = ACTIONS(1225),
    [anon_sym_LBRACK] = ACTIONS(1225),
    [anon_sym_AT] = ACTIONS(1225),
    [anon_sym_default] = ACTIONS(1225),
    [anon_sym_throws] = ACTIONS(1225),
    [sym_comment] = ACTIONS(42),
  },
  [481] = {
    [anon_sym_RBRACK] = ACTIONS(1227),
    [sym_comment] = ACTIONS(42),
  },
  [482] = {
    [sym__annotation] = STATE(58),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [anon_sym_LBRACK] = ACTIONS(1229),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(42),
  },
  [483] = {
    [sym__semicolon] = ACTIONS(1231),
    [anon_sym_COMMA] = ACTIONS(1231),
    [sym_comment] = ACTIONS(42),
  },
  [484] = {
    [sym_variable_declarator] = STATE(571),
    [sym_variable_declarator_id] = STATE(268),
    [sym_identifier] = ACTIONS(1007),
    [sym_comment] = ACTIONS(42),
  },
  [485] = {
    [anon_sym_AT] = ACTIONS(1207),
    [anon_sym_static] = ACTIONS(1207),
    [anon_sym_class] = ACTIONS(1207),
    [anon_sym_public] = ACTIONS(1207),
    [anon_sym_protected] = ACTIONS(1207),
    [anon_sym_private] = ACTIONS(1207),
    [anon_sym_abstract] = ACTIONS(1207),
    [anon_sym_final] = ACTIONS(1207),
    [anon_sym_strictfp] = ACTIONS(1207),
    [anon_sym_default] = ACTIONS(1207),
    [anon_sym_ATinterface] = ACTIONS(489),
    [anon_sym_interface] = ACTIONS(1207),
    [sym_identifier] = ACTIONS(1233),
    [sym_comment] = ACTIONS(42),
  },
  [486] = {
    [anon_sym_AT] = ACTIONS(1209),
    [anon_sym_static] = ACTIONS(1209),
    [anon_sym_class] = ACTIONS(1209),
    [anon_sym_public] = ACTIONS(1209),
    [anon_sym_protected] = ACTIONS(1209),
    [anon_sym_private] = ACTIONS(1209),
    [anon_sym_abstract] = ACTIONS(1209),
    [anon_sym_final] = ACTIONS(1209),
    [anon_sym_strictfp] = ACTIONS(1209),
    [anon_sym_default] = ACTIONS(1209),
    [anon_sym_ATinterface] = ACTIONS(491),
    [anon_sym_interface] = ACTIONS(1209),
    [sym_identifier] = ACTIONS(1235),
    [sym_comment] = ACTIONS(42),
  },
  [487] = {
    [sym__semicolon] = ACTIONS(609),
    [anon_sym_LBRACE] = ACTIONS(609),
    [anon_sym_RBRACE] = ACTIONS(609),
    [anon_sym_AT] = ACTIONS(611),
    [anon_sym_static] = ACTIONS(611),
    [anon_sym_class] = ACTIONS(611),
    [anon_sym_public] = ACTIONS(611),
    [anon_sym_protected] = ACTIONS(611),
    [anon_sym_private] = ACTIONS(611),
    [anon_sym_abstract] = ACTIONS(611),
    [anon_sym_final] = ACTIONS(611),
    [anon_sym_strictfp] = ACTIONS(611),
    [anon_sym_default] = ACTIONS(611),
    [anon_sym_ATinterface] = ACTIONS(609),
    [anon_sym_interface] = ACTIONS(611),
    [sym_identifier] = ACTIONS(613),
    [sym_comment] = ACTIONS(42),
  },
  [488] = {
    [sym_class_body] = STATE(572),
    [anon_sym_LBRACE] = ACTIONS(591),
    [sym_comment] = ACTIONS(42),
  },
  [489] = {
    [sym__semicolon] = ACTIONS(639),
    [anon_sym_LBRACE] = ACTIONS(639),
    [anon_sym_RBRACE] = ACTIONS(639),
    [anon_sym_AT] = ACTIONS(641),
    [anon_sym_static] = ACTIONS(641),
    [anon_sym_class] = ACTIONS(641),
    [anon_sym_public] = ACTIONS(641),
    [anon_sym_protected] = ACTIONS(641),
    [anon_sym_private] = ACTIONS(641),
    [anon_sym_abstract] = ACTIONS(641),
    [anon_sym_final] = ACTIONS(641),
    [anon_sym_strictfp] = ACTIONS(641),
    [anon_sym_default] = ACTIONS(641),
    [anon_sym_ATinterface] = ACTIONS(639),
    [anon_sym_interface] = ACTIONS(641),
    [sym_identifier] = ACTIONS(643),
    [sym_comment] = ACTIONS(42),
  },
  [490] = {
    [anon_sym_RPAREN] = ACTIONS(1237),
    [sym_comment] = ACTIONS(42),
  },
  [491] = {
    [anon_sym_RBRACE] = ACTIONS(1239),
    [anon_sym_AT] = ACTIONS(1241),
    [anon_sym_static] = ACTIONS(1241),
    [anon_sym_class] = ACTIONS(1241),
    [anon_sym_public] = ACTIONS(1241),
    [anon_sym_protected] = ACTIONS(1241),
    [anon_sym_private] = ACTIONS(1241),
    [anon_sym_abstract] = ACTIONS(1241),
    [anon_sym_final] = ACTIONS(1241),
    [anon_sym_strictfp] = ACTIONS(1241),
    [anon_sym_default] = ACTIONS(1241),
    [anon_sym_ATinterface] = ACTIONS(1239),
    [anon_sym_interface] = ACTIONS(1241),
    [sym_identifier] = ACTIONS(1243),
    [sym_comment] = ACTIONS(42),
  },
  [492] = {
    [sym_dims] = STATE(361),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [aux_sym_class_or_interface_type_repeat1] = STATE(362),
    [aux_sym_dims_repeat1] = STATE(363),
    [sym__semicolon] = ACTIONS(789),
    [anon_sym_EQ] = ACTIONS(789),
    [anon_sym_LPAREN] = ACTIONS(1245),
    [anon_sym_COMMA] = ACTIONS(789),
    [anon_sym_LBRACK] = ACTIONS(791),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(42),
  },
  [493] = {
    [sym__semicolon] = ACTIONS(1247),
    [sym_comment] = ACTIONS(42),
  },
  [494] = {
    [sym__semicolon] = ACTIONS(1249),
    [anon_sym_LBRACE] = ACTIONS(1249),
    [anon_sym_RBRACE] = ACTIONS(1249),
    [anon_sym_AT] = ACTIONS(1251),
    [anon_sym_static] = ACTIONS(1251),
    [anon_sym_class] = ACTIONS(1251),
    [anon_sym_public] = ACTIONS(1251),
    [anon_sym_protected] = ACTIONS(1251),
    [anon_sym_private] = ACTIONS(1251),
    [anon_sym_abstract] = ACTIONS(1251),
    [anon_sym_final] = ACTIONS(1251),
    [anon_sym_strictfp] = ACTIONS(1251),
    [anon_sym_default] = ACTIONS(1251),
    [anon_sym_ATinterface] = ACTIONS(1249),
    [anon_sym_interface] = ACTIONS(1251),
    [sym_identifier] = ACTIONS(1253),
    [sym_comment] = ACTIONS(42),
  },
  [495] = {
    [anon_sym_RBRACE] = ACTIONS(1255),
    [anon_sym_AT] = ACTIONS(1257),
    [anon_sym_static] = ACTIONS(1257),
    [anon_sym_class] = ACTIONS(1257),
    [anon_sym_public] = ACTIONS(1257),
    [anon_sym_protected] = ACTIONS(1257),
    [anon_sym_private] = ACTIONS(1257),
    [anon_sym_abstract] = ACTIONS(1257),
    [anon_sym_final] = ACTIONS(1257),
    [anon_sym_strictfp] = ACTIONS(1257),
    [anon_sym_default] = ACTIONS(1257),
    [anon_sym_ATinterface] = ACTIONS(1255),
    [anon_sym_interface] = ACTIONS(1257),
    [sym_identifier] = ACTIONS(1259),
    [sym_comment] = ACTIONS(42),
  },
  [496] = {
    [anon_sym_LT] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(179),
    [anon_sym_static] = ACTIONS(179),
    [anon_sym_class] = ACTIONS(179),
    [anon_sym_public] = ACTIONS(179),
    [anon_sym_protected] = ACTIONS(179),
    [anon_sym_private] = ACTIONS(179),
    [anon_sym_abstract] = ACTIONS(179),
    [anon_sym_final] = ACTIONS(179),
    [anon_sym_strictfp] = ACTIONS(179),
    [anon_sym_default] = ACTIONS(179),
    [anon_sym_ATinterface] = ACTIONS(177),
    [anon_sym_interface] = ACTIONS(179),
    [sym_result] = ACTIONS(179),
    [sym_identifier] = ACTIONS(523),
    [sym_comment] = ACTIONS(42),
  },
  [497] = {
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(1261),
    [anon_sym_DOT] = ACTIONS(1263),
    [anon_sym_AT] = ACTIONS(551),
    [anon_sym_static] = ACTIONS(551),
    [anon_sym_class] = ACTIONS(551),
    [anon_sym_public] = ACTIONS(551),
    [anon_sym_protected] = ACTIONS(551),
    [anon_sym_private] = ACTIONS(551),
    [anon_sym_abstract] = ACTIONS(551),
    [anon_sym_final] = ACTIONS(551),
    [anon_sym_strictfp] = ACTIONS(551),
    [anon_sym_default] = ACTIONS(551),
    [anon_sym_ATinterface] = ACTIONS(181),
    [anon_sym_interface] = ACTIONS(551),
    [sym_result] = ACTIONS(551),
    [sym_identifier] = ACTIONS(589),
    [sym_comment] = ACTIONS(42),
  },
  [498] = {
    [sym_type_parameters] = STATE(579),
    [sym_superclass] = STATE(580),
    [sym_super_interfaces] = STATE(581),
    [sym_class_body] = STATE(582),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(1265),
    [anon_sym_extends] = ACTIONS(203),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [499] = {
    [sym_annotation_type_body] = STATE(584),
    [anon_sym_LBRACE] = ACTIONS(1267),
    [sym_comment] = ACTIONS(42),
  },
  [500] = {
    [sym_type_parameters] = STATE(586),
    [sym_extends_interfaces] = STATE(587),
    [sym_interface_body] = STATE(588),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(1269),
    [anon_sym_extends] = ACTIONS(597),
    [sym_comment] = ACTIONS(42),
  },
  [501] = {
    [anon_sym_LPAREN] = ACTIONS(1271),
    [sym_comment] = ACTIONS(42),
  },
  [502] = {
    [sym_throws] = STATE(591),
    [sym__semicolon] = ACTIONS(1273),
    [anon_sym_LBRACE] = ACTIONS(1273),
    [anon_sym_throws] = ACTIONS(1275),
    [sym_comment] = ACTIONS(42),
  },
  [503] = {
    [sym_method_declarator] = STATE(592),
    [sym_identifier] = ACTIONS(1075),
    [sym_comment] = ACTIONS(42),
  },
  [504] = {
    [anon_sym_AT] = ACTIONS(123),
    [sym_result] = ACTIONS(123),
    [sym_comment] = ACTIONS(42),
  },
  [505] = {
    [sym__annotation] = STATE(58),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [anon_sym_AT] = ACTIONS(28),
    [sym_result] = ACTIONS(1277),
    [sym_comment] = ACTIONS(42),
  },
  [506] = {
    [sym__semicolon] = ACTIONS(1239),
    [anon_sym_LT] = ACTIONS(1239),
    [anon_sym_RBRACE] = ACTIONS(1239),
    [anon_sym_AT] = ACTIONS(1241),
    [anon_sym_static] = ACTIONS(1241),
    [anon_sym_class] = ACTIONS(1241),
    [anon_sym_public] = ACTIONS(1241),
    [anon_sym_protected] = ACTIONS(1241),
    [anon_sym_private] = ACTIONS(1241),
    [anon_sym_abstract] = ACTIONS(1241),
    [anon_sym_final] = ACTIONS(1241),
    [anon_sym_strictfp] = ACTIONS(1241),
    [anon_sym_default] = ACTIONS(1241),
    [anon_sym_ATinterface] = ACTIONS(1239),
    [anon_sym_interface] = ACTIONS(1241),
    [sym_result] = ACTIONS(1241),
    [sym_identifier] = ACTIONS(1243),
    [sym_comment] = ACTIONS(42),
  },
  [507] = {
    [sym__semicolon] = ACTIONS(1279),
    [anon_sym_LT] = ACTIONS(1279),
    [anon_sym_RBRACE] = ACTIONS(1279),
    [anon_sym_AT] = ACTIONS(1281),
    [anon_sym_static] = ACTIONS(1281),
    [anon_sym_class] = ACTIONS(1281),
    [anon_sym_public] = ACTIONS(1281),
    [anon_sym_protected] = ACTIONS(1281),
    [anon_sym_private] = ACTIONS(1281),
    [anon_sym_abstract] = ACTIONS(1281),
    [anon_sym_final] = ACTIONS(1281),
    [anon_sym_strictfp] = ACTIONS(1281),
    [anon_sym_default] = ACTIONS(1281),
    [anon_sym_ATinterface] = ACTIONS(1279),
    [anon_sym_interface] = ACTIONS(1281),
    [sym_result] = ACTIONS(1281),
    [sym_identifier] = ACTIONS(1283),
    [sym_comment] = ACTIONS(42),
  },
  [508] = {
    [sym__semicolon] = ACTIONS(1285),
    [anon_sym_LT] = ACTIONS(1285),
    [anon_sym_RBRACE] = ACTIONS(1285),
    [anon_sym_AT] = ACTIONS(1287),
    [anon_sym_static] = ACTIONS(1287),
    [anon_sym_class] = ACTIONS(1287),
    [anon_sym_public] = ACTIONS(1287),
    [anon_sym_protected] = ACTIONS(1287),
    [anon_sym_private] = ACTIONS(1287),
    [anon_sym_abstract] = ACTIONS(1287),
    [anon_sym_final] = ACTIONS(1287),
    [anon_sym_strictfp] = ACTIONS(1287),
    [anon_sym_default] = ACTIONS(1287),
    [anon_sym_ATinterface] = ACTIONS(1285),
    [anon_sym_interface] = ACTIONS(1287),
    [sym_result] = ACTIONS(1287),
    [sym_identifier] = ACTIONS(1289),
    [sym_comment] = ACTIONS(42),
  },
  [509] = {
    [sym_identifier] = ACTIONS(1291),
    [sym_comment] = ACTIONS(42),
  },
  [510] = {
    [sym_identifier] = ACTIONS(1293),
    [sym_comment] = ACTIONS(42),
  },
  [511] = {
    [sym_identifier] = ACTIONS(1295),
    [sym_comment] = ACTIONS(42),
  },
  [512] = {
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(605),
    [anon_sym_static] = ACTIONS(605),
    [anon_sym_class] = ACTIONS(605),
    [anon_sym_public] = ACTIONS(605),
    [anon_sym_protected] = ACTIONS(605),
    [anon_sym_private] = ACTIONS(605),
    [anon_sym_abstract] = ACTIONS(605),
    [anon_sym_final] = ACTIONS(605),
    [anon_sym_strictfp] = ACTIONS(605),
    [anon_sym_default] = ACTIONS(605),
    [anon_sym_ATinterface] = ACTIONS(231),
    [anon_sym_interface] = ACTIONS(605),
    [sym_result] = ACTIONS(605),
    [sym_identifier] = ACTIONS(607),
    [sym_comment] = ACTIONS(42),
  },
  [513] = {
    [sym__semicolon] = ACTIONS(1297),
    [sym_comment] = ACTIONS(42),
  },
  [514] = {
    [sym_method_body] = STATE(598),
    [sym_block] = STATE(507),
    [sym__semicolon] = ACTIONS(1087),
    [anon_sym_LBRACE] = ACTIONS(289),
    [sym_comment] = ACTIONS(42),
  },
  [515] = {
    [sym__semicolon] = ACTIONS(1299),
    [anon_sym_LBRACE] = ACTIONS(1299),
    [anon_sym_RBRACE] = ACTIONS(1299),
    [anon_sym_AT] = ACTIONS(1301),
    [anon_sym_static] = ACTIONS(1301),
    [anon_sym_class] = ACTIONS(1301),
    [anon_sym_public] = ACTIONS(1301),
    [anon_sym_protected] = ACTIONS(1301),
    [anon_sym_private] = ACTIONS(1301),
    [anon_sym_abstract] = ACTIONS(1301),
    [anon_sym_final] = ACTIONS(1301),
    [anon_sym_strictfp] = ACTIONS(1301),
    [anon_sym_default] = ACTIONS(1301),
    [anon_sym_ATinterface] = ACTIONS(1299),
    [anon_sym_interface] = ACTIONS(1301),
    [sym_identifier] = ACTIONS(1303),
    [sym_comment] = ACTIONS(42),
  },
  [516] = {
    [sym__semicolon] = ACTIONS(1305),
    [anon_sym_LT] = ACTIONS(1305),
    [anon_sym_RBRACE] = ACTIONS(1305),
    [anon_sym_AT] = ACTIONS(1307),
    [anon_sym_static] = ACTIONS(1307),
    [anon_sym_class] = ACTIONS(1307),
    [anon_sym_public] = ACTIONS(1307),
    [anon_sym_protected] = ACTIONS(1307),
    [anon_sym_private] = ACTIONS(1307),
    [anon_sym_abstract] = ACTIONS(1307),
    [anon_sym_final] = ACTIONS(1307),
    [anon_sym_strictfp] = ACTIONS(1307),
    [anon_sym_default] = ACTIONS(1307),
    [anon_sym_ATinterface] = ACTIONS(1305),
    [anon_sym_interface] = ACTIONS(1307),
    [sym_result] = ACTIONS(1307),
    [sym_identifier] = ACTIONS(1309),
    [sym_comment] = ACTIONS(42),
  },
  [517] = {
    [sym__semicolon] = ACTIONS(1311),
    [anon_sym_LBRACE] = ACTIONS(1311),
    [anon_sym_RBRACE] = ACTIONS(1311),
    [anon_sym_AT] = ACTIONS(1313),
    [anon_sym_static] = ACTIONS(1313),
    [anon_sym_class] = ACTIONS(1313),
    [anon_sym_public] = ACTIONS(1313),
    [anon_sym_protected] = ACTIONS(1313),
    [anon_sym_private] = ACTIONS(1313),
    [anon_sym_abstract] = ACTIONS(1313),
    [anon_sym_final] = ACTIONS(1313),
    [anon_sym_strictfp] = ACTIONS(1313),
    [anon_sym_default] = ACTIONS(1313),
    [anon_sym_ATinterface] = ACTIONS(1311),
    [anon_sym_interface] = ACTIONS(1313),
    [sym_identifier] = ACTIONS(1315),
    [sym_comment] = ACTIONS(42),
  },
  [518] = {
    [sym_super_interfaces] = STATE(599),
    [sym_class_body] = STATE(572),
    [anon_sym_LBRACE] = ACTIONS(591),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [519] = {
    [sym_interface_body] = STATE(600),
    [anon_sym_LBRACE] = ACTIONS(595),
    [sym_comment] = ACTIONS(42),
  },
  [520] = {
    [sym__literal] = STATE(603),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(604),
    [sym_element_value_pair] = STATE(98),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(237),
    [anon_sym_false] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(1317),
    [sym_identifier] = ACTIONS(1319),
    [sym_comment] = ACTIONS(42),
  },
  [521] = {
    [sym_identifier] = ACTIONS(1321),
    [sym_comment] = ACTIONS(42),
  },
  [522] = {
    [anon_sym_GT] = ACTIONS(1323),
    [anon_sym_COMMA] = ACTIONS(1323),
    [sym_comment] = ACTIONS(42),
  },
  [523] = {
    [anon_sym_GT] = ACTIONS(1325),
    [anon_sym_AMP] = ACTIONS(1325),
    [anon_sym_LBRACE] = ACTIONS(1325),
    [anon_sym_COMMA] = ACTIONS(1325),
    [anon_sym_DOT] = ACTIONS(1325),
    [anon_sym_LBRACK] = ACTIONS(1325),
    [anon_sym_AT] = ACTIONS(1325),
    [anon_sym_implements] = ACTIONS(1325),
    [sym_comment] = ACTIONS(42),
  },
  [524] = {
    [sym_type_argument] = STATE(606),
    [sym_reference_type] = STATE(295),
    [sym_class_or_interface_type] = STATE(296),
    [sym_primitive_type] = STATE(297),
    [sym_integral_type] = STATE(290),
    [sym_floating_point_type] = STATE(290),
    [sym__annotation] = STATE(298),
    [sym_normal_annotation] = STATE(299),
    [sym_marker_annotation] = STATE(299),
    [sym_single_element_annotation] = STATE(299),
    [aux_sym_class_or_interface_type_repeat1] = STATE(300),
    [anon_sym_boolean] = ACTIONS(619),
    [anon_sym_byte] = ACTIONS(621),
    [anon_sym_short] = ACTIONS(621),
    [anon_sym_int] = ACTIONS(621),
    [anon_sym_long] = ACTIONS(621),
    [anon_sym_char] = ACTIONS(621),
    [anon_sym_float] = ACTIONS(623),
    [anon_sym_double] = ACTIONS(623),
    [anon_sym_AT] = ACTIONS(625),
    [sym_identifier] = ACTIONS(627),
    [sym_comment] = ACTIONS(42),
  },
  [525] = {
    [anon_sym_GT] = ACTIONS(1327),
    [anon_sym_AMP] = ACTIONS(1327),
    [anon_sym_LBRACE] = ACTIONS(1327),
    [anon_sym_COMMA] = ACTIONS(1327),
    [anon_sym_DOT] = ACTIONS(1327),
    [anon_sym_LBRACK] = ACTIONS(1327),
    [anon_sym_AT] = ACTIONS(1327),
    [anon_sym_implements] = ACTIONS(1327),
    [sym_comment] = ACTIONS(42),
  },
  [526] = {
    [sym_type_arguments] = STATE(607),
    [anon_sym_GT] = ACTIONS(1327),
    [anon_sym_LT] = ACTIONS(461),
    [anon_sym_AMP] = ACTIONS(1327),
    [anon_sym_LBRACE] = ACTIONS(1327),
    [anon_sym_COMMA] = ACTIONS(1327),
    [anon_sym_DOT] = ACTIONS(1327),
    [anon_sym_LBRACK] = ACTIONS(1327),
    [anon_sym_AT] = ACTIONS(1327),
    [anon_sym_implements] = ACTIONS(1327),
    [sym_comment] = ACTIONS(42),
  },
  [527] = {
    [anon_sym_EQ] = ACTIONS(899),
    [anon_sym_PLUS_EQ] = ACTIONS(901),
    [anon_sym_DASH_EQ] = ACTIONS(901),
    [anon_sym_STAR_EQ] = ACTIONS(901),
    [anon_sym_SLASH_EQ] = ACTIONS(901),
    [anon_sym_AMP_EQ] = ACTIONS(901),
    [anon_sym_PIPE_EQ] = ACTIONS(901),
    [anon_sym_CARET_EQ] = ACTIONS(901),
    [anon_sym_PERCENT_EQ] = ACTIONS(901),
    [anon_sym_LT_LT_EQ] = ACTIONS(901),
    [anon_sym_GT_GT_EQ] = ACTIONS(901),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(901),
    [anon_sym_GT] = ACTIONS(903),
    [anon_sym_LT] = ACTIONS(903),
    [anon_sym_EQ_EQ] = ACTIONS(905),
    [anon_sym_GT_EQ] = ACTIONS(905),
    [anon_sym_LT_EQ] = ACTIONS(905),
    [anon_sym_BANG_EQ] = ACTIONS(905),
    [anon_sym_AMP_AMP] = ACTIONS(1329),
    [anon_sym_PIPE_PIPE] = ACTIONS(1331),
    [anon_sym_PLUS] = ACTIONS(1333),
    [anon_sym_DASH] = ACTIONS(1333),
    [anon_sym_STAR] = ACTIONS(1335),
    [anon_sym_SLASH] = ACTIONS(1335),
    [anon_sym_AMP] = ACTIONS(907),
    [anon_sym_PIPE] = ACTIONS(1337),
    [anon_sym_CARET] = ACTIONS(1337),
    [anon_sym_PERCENT] = ACTIONS(1335),
    [anon_sym_LT_LT] = ACTIONS(1335),
    [anon_sym_GT_GT] = ACTIONS(1335),
    [anon_sym_GT_GT_GT] = ACTIONS(1335),
    [anon_sym_QMARK] = ACTIONS(1339),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_COMMA] = ACTIONS(311),
    [sym_comment] = ACTIONS(42),
  },
  [528] = {
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(315),
    [anon_sym_LT] = ACTIONS(315),
    [anon_sym_EQ_EQ] = ACTIONS(313),
    [anon_sym_GT_EQ] = ACTIONS(313),
    [anon_sym_LT_EQ] = ACTIONS(313),
    [anon_sym_BANG_EQ] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(1335),
    [anon_sym_SLASH] = ACTIONS(1335),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(1335),
    [anon_sym_LT_LT] = ACTIONS(1335),
    [anon_sym_GT_GT] = ACTIONS(1335),
    [anon_sym_GT_GT_GT] = ACTIONS(1335),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(313),
    [sym_comment] = ACTIONS(42),
  },
  [529] = {
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(903),
    [anon_sym_LT] = ACTIONS(903),
    [anon_sym_EQ_EQ] = ACTIONS(905),
    [anon_sym_GT_EQ] = ACTIONS(905),
    [anon_sym_LT_EQ] = ACTIONS(905),
    [anon_sym_BANG_EQ] = ACTIONS(905),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(1333),
    [anon_sym_DASH] = ACTIONS(1333),
    [anon_sym_STAR] = ACTIONS(1335),
    [anon_sym_SLASH] = ACTIONS(1335),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(1335),
    [anon_sym_LT_LT] = ACTIONS(1335),
    [anon_sym_GT_GT] = ACTIONS(1335),
    [anon_sym_GT_GT_GT] = ACTIONS(1335),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(313),
    [sym_comment] = ACTIONS(42),
  },
  [530] = {
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(903),
    [anon_sym_LT] = ACTIONS(903),
    [anon_sym_EQ_EQ] = ACTIONS(905),
    [anon_sym_GT_EQ] = ACTIONS(905),
    [anon_sym_LT_EQ] = ACTIONS(905),
    [anon_sym_BANG_EQ] = ACTIONS(905),
    [anon_sym_AMP_AMP] = ACTIONS(1329),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(1333),
    [anon_sym_DASH] = ACTIONS(1333),
    [anon_sym_STAR] = ACTIONS(1335),
    [anon_sym_SLASH] = ACTIONS(1335),
    [anon_sym_AMP] = ACTIONS(907),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(1335),
    [anon_sym_LT_LT] = ACTIONS(1335),
    [anon_sym_GT_GT] = ACTIONS(1335),
    [anon_sym_GT_GT_GT] = ACTIONS(1335),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(313),
    [sym_comment] = ACTIONS(42),
  },
  [531] = {
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(903),
    [anon_sym_LT] = ACTIONS(903),
    [anon_sym_EQ_EQ] = ACTIONS(905),
    [anon_sym_GT_EQ] = ACTIONS(905),
    [anon_sym_LT_EQ] = ACTIONS(905),
    [anon_sym_BANG_EQ] = ACTIONS(905),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(1335),
    [anon_sym_SLASH] = ACTIONS(1335),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(1335),
    [anon_sym_LT_LT] = ACTIONS(1335),
    [anon_sym_GT_GT] = ACTIONS(1335),
    [anon_sym_GT_GT_GT] = ACTIONS(1335),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(313),
    [sym_comment] = ACTIONS(42),
  },
  [532] = {
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PLUS_EQ] = ACTIONS(319),
    [anon_sym_DASH_EQ] = ACTIONS(319),
    [anon_sym_STAR_EQ] = ACTIONS(319),
    [anon_sym_SLASH_EQ] = ACTIONS(319),
    [anon_sym_AMP_EQ] = ACTIONS(319),
    [anon_sym_PIPE_EQ] = ACTIONS(319),
    [anon_sym_CARET_EQ] = ACTIONS(319),
    [anon_sym_PERCENT_EQ] = ACTIONS(319),
    [anon_sym_LT_LT_EQ] = ACTIONS(319),
    [anon_sym_GT_GT_EQ] = ACTIONS(319),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_CARET] = ACTIONS(335),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_GT_GT_GT] = ACTIONS(331),
    [anon_sym_QMARK] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(1341),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [533] = {
    [sym__expression] = STATE(609),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(909),
    [anon_sym_TILDE] = ACTIONS(909),
    [anon_sym_PLUS_PLUS] = ACTIONS(911),
    [anon_sym_DASH_DASH] = ACTIONS(911),
    [sym_comment] = ACTIONS(42),
  },
  [534] = {
    [sym__expression] = STATE(610),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(909),
    [anon_sym_TILDE] = ACTIONS(909),
    [anon_sym_PLUS_PLUS] = ACTIONS(911),
    [anon_sym_DASH_DASH] = ACTIONS(911),
    [sym_comment] = ACTIONS(42),
  },
  [535] = {
    [sym__expression] = STATE(611),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(909),
    [anon_sym_TILDE] = ACTIONS(909),
    [anon_sym_PLUS_PLUS] = ACTIONS(911),
    [anon_sym_DASH_DASH] = ACTIONS(911),
    [sym_comment] = ACTIONS(42),
  },
  [536] = {
    [sym__expression] = STATE(612),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(909),
    [anon_sym_TILDE] = ACTIONS(909),
    [anon_sym_PLUS_PLUS] = ACTIONS(911),
    [anon_sym_DASH_DASH] = ACTIONS(911),
    [sym_comment] = ACTIONS(42),
  },
  [537] = {
    [sym__expression] = STATE(613),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(909),
    [anon_sym_TILDE] = ACTIONS(909),
    [anon_sym_PLUS_PLUS] = ACTIONS(911),
    [anon_sym_DASH_DASH] = ACTIONS(911),
    [sym_comment] = ACTIONS(42),
  },
  [538] = {
    [sym__expression] = STATE(87),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(909),
    [anon_sym_TILDE] = ACTIONS(909),
    [anon_sym_PLUS_PLUS] = ACTIONS(911),
    [anon_sym_DASH_DASH] = ACTIONS(911),
    [sym_comment] = ACTIONS(42),
  },
  [539] = {
    [sym__expression] = STATE(614),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
    [anon_sym_PLUS_PLUS] = ACTIONS(215),
    [anon_sym_DASH_DASH] = ACTIONS(215),
    [sym_comment] = ACTIONS(42),
  },
  [540] = {
    [sym__semicolon] = ACTIONS(1343),
    [anon_sym_RPAREN] = ACTIONS(1343),
    [anon_sym_RBRACE] = ACTIONS(1343),
    [anon_sym_COMMA] = ACTIONS(1343),
    [sym_comment] = ACTIONS(42),
  },
  [541] = {
    [anon_sym_RBRACE] = ACTIONS(1345),
    [anon_sym_COMMA] = ACTIONS(1345),
    [sym_comment] = ACTIONS(42),
  },
  [542] = {
    [sym__literal] = STATE(227),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(228),
    [sym__annotation] = STATE(227),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [sym_element_value] = STATE(616),
    [sym_element_value_array_initializer] = STATE(227),
    [sym_conditional_expression] = STATE(227),
    [sym_conditional_or_expression] = STATE(319),
    [sym_conditional_and_expression] = STATE(320),
    [sym_inclusive_or_expression] = STATE(321),
    [sym_exclusive_or_expression] = STATE(322),
    [sym_and_expression] = STATE(234),
    [sym_relational_expression] = STATE(323),
    [sym_equality_expression] = STATE(324),
    [sym_shift_expression] = STATE(325),
    [sym_additive_expression] = STATE(326),
    [sym_multiplicative_expression] = STATE(327),
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
    [anon_sym_BANG] = ACTIONS(661),
    [anon_sym_TILDE] = ACTIONS(661),
    [anon_sym_LBRACE] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(1347),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(42),
  },
  [543] = {
    [anon_sym_AMP_AMP] = ACTIONS(923),
    [anon_sym_PIPE_PIPE] = ACTIONS(1163),
    [anon_sym_QMARK] = ACTIONS(1163),
    [anon_sym_RBRACE] = ACTIONS(1163),
    [anon_sym_COMMA] = ACTIONS(1163),
    [sym_comment] = ACTIONS(42),
  },
  [544] = {
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PLUS_EQ] = ACTIONS(319),
    [anon_sym_DASH_EQ] = ACTIONS(319),
    [anon_sym_STAR_EQ] = ACTIONS(319),
    [anon_sym_SLASH_EQ] = ACTIONS(319),
    [anon_sym_AMP_EQ] = ACTIONS(319),
    [anon_sym_PIPE_EQ] = ACTIONS(319),
    [anon_sym_CARET_EQ] = ACTIONS(319),
    [anon_sym_PERCENT_EQ] = ACTIONS(319),
    [anon_sym_LT_LT_EQ] = ACTIONS(319),
    [anon_sym_GT_GT_EQ] = ACTIONS(319),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_CARET] = ACTIONS(335),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_GT_GT_GT] = ACTIONS(331),
    [anon_sym_QMARK] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(1349),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [545] = {
    [anon_sym_AMP_AMP] = ACTIONS(1167),
    [anon_sym_PIPE_PIPE] = ACTIONS(1167),
    [anon_sym_PIPE] = ACTIONS(925),
    [anon_sym_QMARK] = ACTIONS(1167),
    [anon_sym_RBRACE] = ACTIONS(1167),
    [anon_sym_COMMA] = ACTIONS(1167),
    [sym_comment] = ACTIONS(42),
  },
  [546] = {
    [anon_sym_AMP_AMP] = ACTIONS(1169),
    [anon_sym_PIPE_PIPE] = ACTIONS(1169),
    [anon_sym_PIPE] = ACTIONS(1171),
    [anon_sym_CARET] = ACTIONS(927),
    [anon_sym_QMARK] = ACTIONS(1169),
    [anon_sym_RBRACE] = ACTIONS(1169),
    [anon_sym_COMMA] = ACTIONS(1169),
    [sym_comment] = ACTIONS(42),
  },
  [547] = {
    [anon_sym_LT] = ACTIONS(1177),
    [anon_sym_EQ_EQ] = ACTIONS(1179),
    [anon_sym_BANG_EQ] = ACTIONS(1179),
    [anon_sym_AMP_AMP] = ACTIONS(1179),
    [anon_sym_PIPE_PIPE] = ACTIONS(1179),
    [anon_sym_PIPE] = ACTIONS(1177),
    [anon_sym_CARET] = ACTIONS(1179),
    [anon_sym_LT_LT] = ACTIONS(933),
    [anon_sym_GT_GT] = ACTIONS(935),
    [anon_sym_GT_GT_GT] = ACTIONS(933),
    [anon_sym_QMARK] = ACTIONS(1179),
    [anon_sym_RBRACE] = ACTIONS(1179),
    [anon_sym_COMMA] = ACTIONS(1179),
    [sym_comment] = ACTIONS(42),
  },
  [548] = {
    [anon_sym_LT] = ACTIONS(929),
    [anon_sym_EQ_EQ] = ACTIONS(1181),
    [anon_sym_BANG_EQ] = ACTIONS(1181),
    [anon_sym_AMP_AMP] = ACTIONS(1183),
    [anon_sym_PIPE_PIPE] = ACTIONS(1183),
    [anon_sym_PIPE] = ACTIONS(1185),
    [anon_sym_CARET] = ACTIONS(1183),
    [anon_sym_QMARK] = ACTIONS(1183),
    [anon_sym_RBRACE] = ACTIONS(1183),
    [anon_sym_COMMA] = ACTIONS(1183),
    [sym_comment] = ACTIONS(42),
  },
  [549] = {
    [anon_sym_LT] = ACTIONS(1187),
    [anon_sym_EQ_EQ] = ACTIONS(1189),
    [anon_sym_BANG_EQ] = ACTIONS(1189),
    [anon_sym_AMP_AMP] = ACTIONS(1189),
    [anon_sym_PIPE_PIPE] = ACTIONS(1189),
    [anon_sym_PLUS] = ACTIONS(937),
    [anon_sym_DASH] = ACTIONS(937),
    [anon_sym_PIPE] = ACTIONS(1187),
    [anon_sym_CARET] = ACTIONS(1189),
    [anon_sym_LT_LT] = ACTIONS(1189),
    [anon_sym_GT_GT] = ACTIONS(1187),
    [anon_sym_GT_GT_GT] = ACTIONS(1189),
    [anon_sym_QMARK] = ACTIONS(1189),
    [anon_sym_RBRACE] = ACTIONS(1189),
    [anon_sym_COMMA] = ACTIONS(1189),
    [sym_comment] = ACTIONS(42),
  },
  [550] = {
    [anon_sym_LT] = ACTIONS(1191),
    [anon_sym_EQ_EQ] = ACTIONS(1193),
    [anon_sym_BANG_EQ] = ACTIONS(1193),
    [anon_sym_AMP_AMP] = ACTIONS(1193),
    [anon_sym_PIPE_PIPE] = ACTIONS(1193),
    [anon_sym_PLUS] = ACTIONS(1193),
    [anon_sym_DASH] = ACTIONS(1193),
    [anon_sym_STAR] = ACTIONS(939),
    [anon_sym_SLASH] = ACTIONS(941),
    [anon_sym_PIPE] = ACTIONS(1191),
    [anon_sym_CARET] = ACTIONS(1193),
    [anon_sym_PERCENT] = ACTIONS(939),
    [anon_sym_LT_LT] = ACTIONS(1193),
    [anon_sym_GT_GT] = ACTIONS(1191),
    [anon_sym_GT_GT_GT] = ACTIONS(1193),
    [anon_sym_QMARK] = ACTIONS(1193),
    [anon_sym_RBRACE] = ACTIONS(1193),
    [anon_sym_COMMA] = ACTIONS(1193),
    [sym_comment] = ACTIONS(42),
  },
  [551] = {
    [sym_unary_expression] = STATE(228),
    [sym_conditional_expression] = STATE(618),
    [sym_conditional_or_expression] = STATE(230),
    [sym_conditional_and_expression] = STATE(231),
    [sym_inclusive_or_expression] = STATE(232),
    [sym_exclusive_or_expression] = STATE(233),
    [sym_and_expression] = STATE(234),
    [sym_relational_expression] = STATE(235),
    [sym_equality_expression] = STATE(236),
    [sym_shift_expression] = STATE(237),
    [sym_additive_expression] = STATE(238),
    [sym_multiplicative_expression] = STATE(239),
    [anon_sym_BANG] = ACTIONS(485),
    [anon_sym_TILDE] = ACTIONS(485),
    [sym_comment] = ACTIONS(42),
  },
  [552] = {
    [anon_sym_RBRACE] = ACTIONS(1351),
    [anon_sym_requires] = ACTIONS(1351),
    [anon_sym_exports] = ACTIONS(1351),
    [anon_sym_opens] = ACTIONS(1351),
    [anon_sym_uses] = ACTIONS(1351),
    [anon_sym_provides] = ACTIONS(1351),
    [sym_comment] = ACTIONS(42),
  },
  [553] = {
    [sym__semicolon] = ACTIONS(1353),
    [anon_sym_COMMA] = ACTIONS(1353),
    [anon_sym_DOT] = ACTIONS(531),
    [sym_comment] = ACTIONS(42),
  },
  [554] = {
    [sym_package_or_type_name] = STATE(619),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(42),
  },
  [555] = {
    [anon_sym_GT] = ACTIONS(1355),
    [anon_sym_AMP] = ACTIONS(1355),
    [anon_sym_COMMA] = ACTIONS(1355),
    [sym_comment] = ACTIONS(42),
  },
  [556] = {
    [anon_sym_EQ] = ACTIONS(969),
    [anon_sym_PLUS_EQ] = ACTIONS(971),
    [anon_sym_DASH_EQ] = ACTIONS(971),
    [anon_sym_STAR_EQ] = ACTIONS(971),
    [anon_sym_SLASH_EQ] = ACTIONS(971),
    [anon_sym_AMP_EQ] = ACTIONS(971),
    [anon_sym_PIPE_EQ] = ACTIONS(971),
    [anon_sym_CARET_EQ] = ACTIONS(971),
    [anon_sym_PERCENT_EQ] = ACTIONS(971),
    [anon_sym_LT_LT_EQ] = ACTIONS(971),
    [anon_sym_GT_GT_EQ] = ACTIONS(971),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(971),
    [anon_sym_GT] = ACTIONS(973),
    [anon_sym_LT] = ACTIONS(973),
    [anon_sym_EQ_EQ] = ACTIONS(975),
    [anon_sym_GT_EQ] = ACTIONS(975),
    [anon_sym_LT_EQ] = ACTIONS(975),
    [anon_sym_BANG_EQ] = ACTIONS(975),
    [anon_sym_AMP_AMP] = ACTIONS(977),
    [anon_sym_PIPE_PIPE] = ACTIONS(979),
    [anon_sym_PLUS] = ACTIONS(981),
    [anon_sym_DASH] = ACTIONS(981),
    [anon_sym_STAR] = ACTIONS(983),
    [anon_sym_SLASH] = ACTIONS(983),
    [anon_sym_AMP] = ACTIONS(985),
    [anon_sym_PIPE] = ACTIONS(987),
    [anon_sym_CARET] = ACTIONS(987),
    [anon_sym_PERCENT] = ACTIONS(983),
    [anon_sym_LT_LT] = ACTIONS(983),
    [anon_sym_GT_GT] = ACTIONS(983),
    [anon_sym_GT_GT_GT] = ACTIONS(983),
    [anon_sym_QMARK] = ACTIONS(989),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(311),
    [sym_comment] = ACTIONS(42),
  },
  [557] = {
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(315),
    [anon_sym_LT] = ACTIONS(315),
    [anon_sym_EQ_EQ] = ACTIONS(313),
    [anon_sym_GT_EQ] = ACTIONS(313),
    [anon_sym_LT_EQ] = ACTIONS(313),
    [anon_sym_BANG_EQ] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(983),
    [anon_sym_SLASH] = ACTIONS(983),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(983),
    [anon_sym_LT_LT] = ACTIONS(983),
    [anon_sym_GT_GT] = ACTIONS(983),
    [anon_sym_GT_GT_GT] = ACTIONS(983),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(313),
    [sym_comment] = ACTIONS(42),
  },
  [558] = {
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(973),
    [anon_sym_LT] = ACTIONS(973),
    [anon_sym_EQ_EQ] = ACTIONS(975),
    [anon_sym_GT_EQ] = ACTIONS(975),
    [anon_sym_LT_EQ] = ACTIONS(975),
    [anon_sym_BANG_EQ] = ACTIONS(975),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(981),
    [anon_sym_DASH] = ACTIONS(981),
    [anon_sym_STAR] = ACTIONS(983),
    [anon_sym_SLASH] = ACTIONS(983),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(983),
    [anon_sym_LT_LT] = ACTIONS(983),
    [anon_sym_GT_GT] = ACTIONS(983),
    [anon_sym_GT_GT_GT] = ACTIONS(983),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(313),
    [sym_comment] = ACTIONS(42),
  },
  [559] = {
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(973),
    [anon_sym_LT] = ACTIONS(973),
    [anon_sym_EQ_EQ] = ACTIONS(975),
    [anon_sym_GT_EQ] = ACTIONS(975),
    [anon_sym_LT_EQ] = ACTIONS(975),
    [anon_sym_BANG_EQ] = ACTIONS(975),
    [anon_sym_AMP_AMP] = ACTIONS(977),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(981),
    [anon_sym_DASH] = ACTIONS(981),
    [anon_sym_STAR] = ACTIONS(983),
    [anon_sym_SLASH] = ACTIONS(983),
    [anon_sym_AMP] = ACTIONS(985),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(983),
    [anon_sym_LT_LT] = ACTIONS(983),
    [anon_sym_GT_GT] = ACTIONS(983),
    [anon_sym_GT_GT_GT] = ACTIONS(983),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(313),
    [sym_comment] = ACTIONS(42),
  },
  [560] = {
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(973),
    [anon_sym_LT] = ACTIONS(973),
    [anon_sym_EQ_EQ] = ACTIONS(975),
    [anon_sym_GT_EQ] = ACTIONS(975),
    [anon_sym_LT_EQ] = ACTIONS(975),
    [anon_sym_BANG_EQ] = ACTIONS(975),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(983),
    [anon_sym_SLASH] = ACTIONS(983),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(983),
    [anon_sym_LT_LT] = ACTIONS(983),
    [anon_sym_GT_GT] = ACTIONS(983),
    [anon_sym_GT_GT_GT] = ACTIONS(983),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(313),
    [sym_comment] = ACTIONS(42),
  },
  [561] = {
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PLUS_EQ] = ACTIONS(319),
    [anon_sym_DASH_EQ] = ACTIONS(319),
    [anon_sym_STAR_EQ] = ACTIONS(319),
    [anon_sym_SLASH_EQ] = ACTIONS(319),
    [anon_sym_AMP_EQ] = ACTIONS(319),
    [anon_sym_PIPE_EQ] = ACTIONS(319),
    [anon_sym_CARET_EQ] = ACTIONS(319),
    [anon_sym_PERCENT_EQ] = ACTIONS(319),
    [anon_sym_LT_LT_EQ] = ACTIONS(319),
    [anon_sym_GT_GT_EQ] = ACTIONS(319),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_CARET] = ACTIONS(335),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_GT_GT_GT] = ACTIONS(331),
    [anon_sym_QMARK] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(1357),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [562] = {
    [anon_sym_if] = ACTIONS(1359),
    [anon_sym_RBRACE] = ACTIONS(1359),
    [anon_sym_AT] = ACTIONS(1359),
    [anon_sym_static] = ACTIONS(1359),
    [anon_sym_class] = ACTIONS(1359),
    [anon_sym_public] = ACTIONS(1359),
    [anon_sym_protected] = ACTIONS(1359),
    [anon_sym_private] = ACTIONS(1359),
    [anon_sym_abstract] = ACTIONS(1359),
    [anon_sym_final] = ACTIONS(1359),
    [anon_sym_strictfp] = ACTIONS(1359),
    [anon_sym_default] = ACTIONS(1359),
    [sym_comment] = ACTIONS(42),
  },
  [563] = {
    [anon_sym_LPAREN] = ACTIONS(1361),
    [sym_comment] = ACTIONS(42),
  },
  [564] = {
    [sym__statement] = STATE(623),
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
    [sym_modifier] = STATE(28),
    [aux_sym_class_or_interface_type_repeat1] = STATE(30),
    [aux_sym_normal_class_declaration_repeat1] = STATE(31),
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
    [anon_sym_LBRACE] = ACTIONS(1363),
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
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [sym_comment] = ACTIONS(42),
  },
  [565] = {
    [anon_sym_if] = ACTIONS(1365),
    [anon_sym_RBRACE] = ACTIONS(1365),
    [anon_sym_elseif] = ACTIONS(1365),
    [anon_sym_AT] = ACTIONS(1365),
    [anon_sym_static] = ACTIONS(1365),
    [anon_sym_class] = ACTIONS(1365),
    [anon_sym_public] = ACTIONS(1365),
    [anon_sym_protected] = ACTIONS(1365),
    [anon_sym_private] = ACTIONS(1365),
    [anon_sym_abstract] = ACTIONS(1365),
    [anon_sym_final] = ACTIONS(1365),
    [anon_sym_strictfp] = ACTIONS(1365),
    [anon_sym_default] = ACTIONS(1365),
    [sym_comment] = ACTIONS(42),
  },
  [566] = {
    [sym_else_if_clause] = STATE(624),
    [anon_sym_if] = ACTIONS(1359),
    [anon_sym_RBRACE] = ACTIONS(1359),
    [anon_sym_elseif] = ACTIONS(1217),
    [anon_sym_AT] = ACTIONS(1359),
    [anon_sym_static] = ACTIONS(1359),
    [anon_sym_class] = ACTIONS(1359),
    [anon_sym_public] = ACTIONS(1359),
    [anon_sym_protected] = ACTIONS(1359),
    [anon_sym_private] = ACTIONS(1359),
    [anon_sym_abstract] = ACTIONS(1359),
    [anon_sym_final] = ACTIONS(1359),
    [anon_sym_strictfp] = ACTIONS(1359),
    [anon_sym_default] = ACTIONS(1359),
    [sym_comment] = ACTIONS(42),
  },
  [567] = {
    [anon_sym_AT] = ACTIONS(489),
    [anon_sym_static] = ACTIONS(1207),
    [anon_sym_class] = ACTIONS(1207),
    [anon_sym_public] = ACTIONS(1207),
    [anon_sym_protected] = ACTIONS(1207),
    [anon_sym_private] = ACTIONS(1207),
    [anon_sym_abstract] = ACTIONS(1207),
    [anon_sym_final] = ACTIONS(1207),
    [anon_sym_strictfp] = ACTIONS(1207),
    [anon_sym_default] = ACTIONS(1207),
    [sym_identifier] = ACTIONS(1233),
    [sym_comment] = ACTIONS(42),
  },
  [568] = {
    [anon_sym_AT] = ACTIONS(491),
    [anon_sym_static] = ACTIONS(1209),
    [anon_sym_class] = ACTIONS(1209),
    [anon_sym_public] = ACTIONS(1209),
    [anon_sym_protected] = ACTIONS(1209),
    [anon_sym_private] = ACTIONS(1209),
    [anon_sym_abstract] = ACTIONS(1209),
    [anon_sym_final] = ACTIONS(1209),
    [anon_sym_strictfp] = ACTIONS(1209),
    [anon_sym_default] = ACTIONS(1209),
    [sym_identifier] = ACTIONS(1235),
    [sym_comment] = ACTIONS(42),
  },
  [569] = {
    [sym__semicolon] = ACTIONS(1367),
    [anon_sym_EQ] = ACTIONS(1367),
    [anon_sym_GT] = ACTIONS(1367),
    [anon_sym_RPAREN] = ACTIONS(1367),
    [anon_sym_LBRACE] = ACTIONS(1367),
    [anon_sym_COMMA] = ACTIONS(1367),
    [anon_sym_LBRACK] = ACTIONS(1367),
    [anon_sym_AT] = ACTIONS(1367),
    [anon_sym_default] = ACTIONS(1367),
    [anon_sym_throws] = ACTIONS(1367),
    [sym_comment] = ACTIONS(42),
  },
  [570] = {
    [anon_sym_RBRACK] = ACTIONS(1369),
    [sym_comment] = ACTIONS(42),
  },
  [571] = {
    [sym__semicolon] = ACTIONS(1371),
    [anon_sym_COMMA] = ACTIONS(1371),
    [sym_comment] = ACTIONS(42),
  },
  [572] = {
    [sym__semicolon] = ACTIONS(891),
    [anon_sym_LBRACE] = ACTIONS(891),
    [anon_sym_RBRACE] = ACTIONS(891),
    [anon_sym_AT] = ACTIONS(893),
    [anon_sym_static] = ACTIONS(893),
    [anon_sym_class] = ACTIONS(893),
    [anon_sym_public] = ACTIONS(893),
    [anon_sym_protected] = ACTIONS(893),
    [anon_sym_private] = ACTIONS(893),
    [anon_sym_abstract] = ACTIONS(893),
    [anon_sym_final] = ACTIONS(893),
    [anon_sym_strictfp] = ACTIONS(893),
    [anon_sym_default] = ACTIONS(893),
    [anon_sym_ATinterface] = ACTIONS(891),
    [anon_sym_interface] = ACTIONS(893),
    [sym_identifier] = ACTIONS(895),
    [sym_comment] = ACTIONS(42),
  },
  [573] = {
    [sym_dims] = STATE(628),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [sym_default_value] = STATE(629),
    [aux_sym_class_or_interface_type_repeat1] = STATE(362),
    [aux_sym_dims_repeat1] = STATE(363),
    [sym__semicolon] = ACTIONS(1373),
    [anon_sym_LBRACK] = ACTIONS(791),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_default] = ACTIONS(1375),
    [sym_comment] = ACTIONS(42),
  },
  [574] = {
    [anon_sym_RPAREN] = ACTIONS(1377),
    [sym_comment] = ACTIONS(42),
  },
  [575] = {
    [anon_sym_RBRACE] = ACTIONS(1379),
    [anon_sym_AT] = ACTIONS(1381),
    [anon_sym_static] = ACTIONS(1381),
    [anon_sym_class] = ACTIONS(1381),
    [anon_sym_public] = ACTIONS(1381),
    [anon_sym_protected] = ACTIONS(1381),
    [anon_sym_private] = ACTIONS(1381),
    [anon_sym_abstract] = ACTIONS(1381),
    [anon_sym_final] = ACTIONS(1381),
    [anon_sym_strictfp] = ACTIONS(1381),
    [anon_sym_default] = ACTIONS(1381),
    [anon_sym_ATinterface] = ACTIONS(1379),
    [anon_sym_interface] = ACTIONS(1381),
    [sym_identifier] = ACTIONS(1383),
    [sym_comment] = ACTIONS(42),
  },
  [576] = {
    [sym__literal] = STATE(633),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(634),
    [sym_element_value_pair] = STATE(98),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(237),
    [anon_sym_false] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(1385),
    [sym_identifier] = ACTIONS(1387),
    [sym_comment] = ACTIONS(42),
  },
  [577] = {
    [sym_identifier] = ACTIONS(1389),
    [sym_comment] = ACTIONS(42),
  },
  [578] = {
    [sym__annotation] = STATE(124),
    [sym_normal_annotation] = STATE(128),
    [sym_marker_annotation] = STATE(128),
    [sym_single_element_annotation] = STATE(128),
    [sym_class_declaration] = STATE(120),
    [sym_normal_class_declaration] = STATE(129),
    [sym_modifier] = STATE(130),
    [sym_class_body_declaration] = STATE(131),
    [sym_class_member_declaration] = STATE(132),
    [sym_interface_declaration] = STATE(120),
    [sym_annotation_type_declaration] = STATE(133),
    [sym_normal_interface_declaration] = STATE(133),
    [sym_block] = STATE(132),
    [aux_sym_normal_class_declaration_repeat1] = STATE(134),
    [aux_sym_class_body_repeat1] = STATE(637),
    [sym__semicolon] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(1391),
    [anon_sym_AT] = ACTIONS(293),
    [anon_sym_static] = ACTIONS(295),
    [anon_sym_class] = ACTIONS(297),
    [anon_sym_public] = ACTIONS(295),
    [anon_sym_protected] = ACTIONS(295),
    [anon_sym_private] = ACTIONS(295),
    [anon_sym_abstract] = ACTIONS(295),
    [anon_sym_final] = ACTIONS(295),
    [anon_sym_strictfp] = ACTIONS(295),
    [anon_sym_default] = ACTIONS(295),
    [anon_sym_ATinterface] = ACTIONS(299),
    [anon_sym_interface] = ACTIONS(301),
    [sym_comment] = ACTIONS(42),
  },
  [579] = {
    [sym_superclass] = STATE(638),
    [sym_super_interfaces] = STATE(639),
    [sym_class_body] = STATE(640),
    [anon_sym_LBRACE] = ACTIONS(1265),
    [anon_sym_extends] = ACTIONS(203),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [580] = {
    [sym_super_interfaces] = STATE(639),
    [sym_class_body] = STATE(640),
    [anon_sym_LBRACE] = ACTIONS(1265),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [581] = {
    [sym_class_body] = STATE(640),
    [anon_sym_LBRACE] = ACTIONS(1265),
    [sym_comment] = ACTIONS(42),
  },
  [582] = {
    [sym__semicolon] = ACTIONS(305),
    [anon_sym_LT] = ACTIONS(305),
    [anon_sym_RBRACE] = ACTIONS(305),
    [anon_sym_AT] = ACTIONS(307),
    [anon_sym_static] = ACTIONS(307),
    [anon_sym_class] = ACTIONS(307),
    [anon_sym_public] = ACTIONS(307),
    [anon_sym_protected] = ACTIONS(307),
    [anon_sym_private] = ACTIONS(307),
    [anon_sym_abstract] = ACTIONS(307),
    [anon_sym_final] = ACTIONS(307),
    [anon_sym_strictfp] = ACTIONS(307),
    [anon_sym_default] = ACTIONS(307),
    [anon_sym_ATinterface] = ACTIONS(305),
    [anon_sym_interface] = ACTIONS(307),
    [sym_result] = ACTIONS(307),
    [sym_identifier] = ACTIONS(309),
    [sym_comment] = ACTIONS(42),
  },
  [583] = {
    [sym__annotation] = STATE(124),
    [sym_normal_annotation] = STATE(128),
    [sym_marker_annotation] = STATE(128),
    [sym_single_element_annotation] = STATE(128),
    [sym_class_declaration] = STATE(380),
    [sym_normal_class_declaration] = STATE(129),
    [sym_modifier] = STATE(130),
    [sym_interface_declaration] = STATE(380),
    [sym_annotation_type_declaration] = STATE(133),
    [sym_annotation_type_member_declaration] = STATE(381),
    [sym_annotation_type_element_declaration] = STATE(380),
    [sym_normal_interface_declaration] = STATE(133),
    [sym_constant_declaration] = STATE(380),
    [sym_variable_declarator_list] = STATE(382),
    [sym_variable_declarator] = STATE(267),
    [sym_variable_declarator_id] = STATE(268),
    [aux_sym_normal_class_declaration_repeat1] = STATE(383),
    [aux_sym_annotation_type_body_repeat1] = STATE(642),
    [anon_sym_RBRACE] = ACTIONS(1393),
    [anon_sym_AT] = ACTIONS(293),
    [anon_sym_static] = ACTIONS(825),
    [anon_sym_class] = ACTIONS(827),
    [anon_sym_public] = ACTIONS(825),
    [anon_sym_protected] = ACTIONS(825),
    [anon_sym_private] = ACTIONS(825),
    [anon_sym_abstract] = ACTIONS(825),
    [anon_sym_final] = ACTIONS(825),
    [anon_sym_strictfp] = ACTIONS(825),
    [anon_sym_default] = ACTIONS(825),
    [anon_sym_ATinterface] = ACTIONS(299),
    [anon_sym_interface] = ACTIONS(829),
    [sym_identifier] = ACTIONS(831),
    [sym_comment] = ACTIONS(42),
  },
  [584] = {
    [sym__semicolon] = ACTIONS(833),
    [anon_sym_LT] = ACTIONS(833),
    [anon_sym_RBRACE] = ACTIONS(833),
    [anon_sym_AT] = ACTIONS(835),
    [anon_sym_static] = ACTIONS(835),
    [anon_sym_class] = ACTIONS(835),
    [anon_sym_public] = ACTIONS(835),
    [anon_sym_protected] = ACTIONS(835),
    [anon_sym_private] = ACTIONS(835),
    [anon_sym_abstract] = ACTIONS(835),
    [anon_sym_final] = ACTIONS(835),
    [anon_sym_strictfp] = ACTIONS(835),
    [anon_sym_default] = ACTIONS(835),
    [anon_sym_ATinterface] = ACTIONS(833),
    [anon_sym_interface] = ACTIONS(835),
    [sym_result] = ACTIONS(835),
    [sym_identifier] = ACTIONS(837),
    [sym_comment] = ACTIONS(42),
  },
  [585] = {
    [sym__annotation] = STATE(388),
    [sym_normal_annotation] = STATE(393),
    [sym_marker_annotation] = STATE(393),
    [sym_single_element_annotation] = STATE(393),
    [sym_class_declaration] = STATE(385),
    [sym_normal_class_declaration] = STATE(394),
    [sym_modifier] = STATE(395),
    [sym_type_parameters] = STATE(396),
    [sym_interface_declaration] = STATE(385),
    [sym_annotation_type_declaration] = STATE(397),
    [sym_normal_interface_declaration] = STATE(397),
    [sym_interface_member_declaration] = STATE(398),
    [sym_constant_declaration] = STATE(385),
    [sym_variable_declarator_list] = STATE(399),
    [sym_variable_declarator] = STATE(267),
    [sym_variable_declarator_id] = STATE(268),
    [sym_interface_method_declaration] = STATE(385),
    [sym_method_header] = STATE(400),
    [aux_sym_normal_class_declaration_repeat1] = STATE(401),
    [aux_sym_interface_body_repeat1] = STATE(644),
    [sym__semicolon] = ACTIONS(839),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(1395),
    [anon_sym_AT] = ACTIONS(843),
    [anon_sym_static] = ACTIONS(845),
    [anon_sym_class] = ACTIONS(847),
    [anon_sym_public] = ACTIONS(845),
    [anon_sym_protected] = ACTIONS(845),
    [anon_sym_private] = ACTIONS(845),
    [anon_sym_abstract] = ACTIONS(845),
    [anon_sym_final] = ACTIONS(845),
    [anon_sym_strictfp] = ACTIONS(845),
    [anon_sym_default] = ACTIONS(845),
    [anon_sym_ATinterface] = ACTIONS(849),
    [anon_sym_interface] = ACTIONS(851),
    [sym_result] = ACTIONS(853),
    [sym_identifier] = ACTIONS(577),
    [sym_comment] = ACTIONS(42),
  },
  [586] = {
    [sym_extends_interfaces] = STATE(645),
    [sym_interface_body] = STATE(646),
    [anon_sym_LBRACE] = ACTIONS(1269),
    [anon_sym_extends] = ACTIONS(597),
    [sym_comment] = ACTIONS(42),
  },
  [587] = {
    [sym_interface_body] = STATE(646),
    [anon_sym_LBRACE] = ACTIONS(1269),
    [sym_comment] = ACTIONS(42),
  },
  [588] = {
    [sym__semicolon] = ACTIONS(855),
    [anon_sym_LT] = ACTIONS(855),
    [anon_sym_RBRACE] = ACTIONS(855),
    [anon_sym_AT] = ACTIONS(857),
    [anon_sym_static] = ACTIONS(857),
    [anon_sym_class] = ACTIONS(857),
    [anon_sym_public] = ACTIONS(857),
    [anon_sym_protected] = ACTIONS(857),
    [anon_sym_private] = ACTIONS(857),
    [anon_sym_abstract] = ACTIONS(857),
    [anon_sym_final] = ACTIONS(857),
    [anon_sym_strictfp] = ACTIONS(857),
    [anon_sym_default] = ACTIONS(857),
    [anon_sym_ATinterface] = ACTIONS(855),
    [anon_sym_interface] = ACTIONS(857),
    [sym_result] = ACTIONS(857),
    [sym_identifier] = ACTIONS(859),
    [sym_comment] = ACTIONS(42),
  },
  [589] = {
    [sym__annotation] = STATE(653),
    [sym_normal_annotation] = STATE(654),
    [sym_marker_annotation] = STATE(654),
    [sym_single_element_annotation] = STATE(654),
    [sym_modifier] = STATE(655),
    [sym_variable_declarator_id] = STATE(656),
    [sym_formal_parameter_list] = STATE(657),
    [sym_formal_parameter] = STATE(658),
    [sym_receiver_parameter] = STATE(659),
    [sym_last_formal_parameter] = STATE(660),
    [aux_sym_class_or_interface_type_repeat1] = STATE(661),
    [aux_sym_normal_class_declaration_repeat1] = STATE(662),
    [anon_sym_RPAREN] = ACTIONS(1397),
    [anon_sym_AT] = ACTIONS(1399),
    [anon_sym_static] = ACTIONS(1401),
    [anon_sym_public] = ACTIONS(1401),
    [anon_sym_protected] = ACTIONS(1401),
    [anon_sym_private] = ACTIONS(1401),
    [anon_sym_abstract] = ACTIONS(1401),
    [anon_sym_final] = ACTIONS(1401),
    [anon_sym_strictfp] = ACTIONS(1401),
    [anon_sym_default] = ACTIONS(1401),
    [anon_sym_this] = ACTIONS(1403),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1405),
    [sym_identifier] = ACTIONS(1407),
    [sym_comment] = ACTIONS(42),
  },
  [590] = {
    [sym_class_or_interface_type] = STATE(664),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [sym_exception_type_list] = STATE(665),
    [sym_exception_type] = STATE(666),
    [aux_sym_class_or_interface_type_repeat1] = STATE(667),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(1409),
    [sym_comment] = ACTIONS(42),
  },
  [591] = {
    [sym__semicolon] = ACTIONS(1411),
    [anon_sym_LBRACE] = ACTIONS(1411),
    [sym_comment] = ACTIONS(42),
  },
  [592] = {
    [sym_throws] = STATE(668),
    [sym__semicolon] = ACTIONS(1411),
    [anon_sym_LBRACE] = ACTIONS(1411),
    [anon_sym_throws] = ACTIONS(1275),
    [sym_comment] = ACTIONS(42),
  },
  [593] = {
    [sym_method_declarator] = STATE(669),
    [sym_identifier] = ACTIONS(1075),
    [sym_comment] = ACTIONS(42),
  },
  [594] = {
    [sym_type_parameters] = STATE(670),
    [sym_superclass] = STATE(638),
    [sym_super_interfaces] = STATE(639),
    [sym_class_body] = STATE(640),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(1265),
    [anon_sym_extends] = ACTIONS(203),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [595] = {
    [sym_annotation_type_body] = STATE(671),
    [anon_sym_LBRACE] = ACTIONS(1267),
    [sym_comment] = ACTIONS(42),
  },
  [596] = {
    [sym_type_parameters] = STATE(672),
    [sym_extends_interfaces] = STATE(645),
    [sym_interface_body] = STATE(646),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(1269),
    [anon_sym_extends] = ACTIONS(597),
    [sym_comment] = ACTIONS(42),
  },
  [597] = {
    [sym__semicolon] = ACTIONS(1379),
    [anon_sym_LT] = ACTIONS(1379),
    [anon_sym_RBRACE] = ACTIONS(1379),
    [anon_sym_AT] = ACTIONS(1381),
    [anon_sym_static] = ACTIONS(1381),
    [anon_sym_class] = ACTIONS(1381),
    [anon_sym_public] = ACTIONS(1381),
    [anon_sym_protected] = ACTIONS(1381),
    [anon_sym_private] = ACTIONS(1381),
    [anon_sym_abstract] = ACTIONS(1381),
    [anon_sym_final] = ACTIONS(1381),
    [anon_sym_strictfp] = ACTIONS(1381),
    [anon_sym_default] = ACTIONS(1381),
    [anon_sym_ATinterface] = ACTIONS(1379),
    [anon_sym_interface] = ACTIONS(1381),
    [sym_result] = ACTIONS(1381),
    [sym_identifier] = ACTIONS(1383),
    [sym_comment] = ACTIONS(42),
  },
  [598] = {
    [sym__semicolon] = ACTIONS(1413),
    [anon_sym_LT] = ACTIONS(1413),
    [anon_sym_RBRACE] = ACTIONS(1413),
    [anon_sym_AT] = ACTIONS(1415),
    [anon_sym_static] = ACTIONS(1415),
    [anon_sym_class] = ACTIONS(1415),
    [anon_sym_public] = ACTIONS(1415),
    [anon_sym_protected] = ACTIONS(1415),
    [anon_sym_private] = ACTIONS(1415),
    [anon_sym_abstract] = ACTIONS(1415),
    [anon_sym_final] = ACTIONS(1415),
    [anon_sym_strictfp] = ACTIONS(1415),
    [anon_sym_default] = ACTIONS(1415),
    [anon_sym_ATinterface] = ACTIONS(1413),
    [anon_sym_interface] = ACTIONS(1415),
    [sym_result] = ACTIONS(1415),
    [sym_identifier] = ACTIONS(1417),
    [sym_comment] = ACTIONS(42),
  },
  [599] = {
    [sym_class_body] = STATE(673),
    [anon_sym_LBRACE] = ACTIONS(591),
    [sym_comment] = ACTIONS(42),
  },
  [600] = {
    [sym__semicolon] = ACTIONS(1419),
    [anon_sym_LBRACE] = ACTIONS(1419),
    [anon_sym_RBRACE] = ACTIONS(1419),
    [anon_sym_AT] = ACTIONS(1421),
    [anon_sym_static] = ACTIONS(1421),
    [anon_sym_class] = ACTIONS(1421),
    [anon_sym_public] = ACTIONS(1421),
    [anon_sym_protected] = ACTIONS(1421),
    [anon_sym_private] = ACTIONS(1421),
    [anon_sym_abstract] = ACTIONS(1421),
    [anon_sym_final] = ACTIONS(1421),
    [anon_sym_strictfp] = ACTIONS(1421),
    [anon_sym_default] = ACTIONS(1421),
    [anon_sym_ATinterface] = ACTIONS(1419),
    [anon_sym_interface] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(1423),
    [sym_comment] = ACTIONS(42),
  },
  [601] = {
    [anon_sym_boolean] = ACTIONS(957),
    [anon_sym_byte] = ACTIONS(957),
    [anon_sym_short] = ACTIONS(957),
    [anon_sym_int] = ACTIONS(957),
    [anon_sym_long] = ACTIONS(957),
    [anon_sym_char] = ACTIONS(957),
    [anon_sym_float] = ACTIONS(957),
    [anon_sym_double] = ACTIONS(957),
    [anon_sym_AT] = ACTIONS(341),
    [sym_identifier] = ACTIONS(1017),
    [sym_comment] = ACTIONS(42),
  },
  [602] = {
    [anon_sym_EQ] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(1425),
    [sym_comment] = ACTIONS(42),
  },
  [603] = {
    [anon_sym_RPAREN] = ACTIONS(1425),
    [sym_comment] = ACTIONS(42),
  },
  [604] = {
    [anon_sym_RPAREN] = ACTIONS(1427),
    [sym_comment] = ACTIONS(42),
  },
  [605] = {
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(353),
    [anon_sym_boolean] = ACTIONS(355),
    [anon_sym_byte] = ACTIONS(355),
    [anon_sym_short] = ACTIONS(355),
    [anon_sym_int] = ACTIONS(355),
    [anon_sym_long] = ACTIONS(355),
    [anon_sym_char] = ACTIONS(355),
    [anon_sym_float] = ACTIONS(355),
    [anon_sym_double] = ACTIONS(355),
    [anon_sym_AT] = ACTIONS(353),
    [sym_identifier] = ACTIONS(951),
    [sym_comment] = ACTIONS(42),
  },
  [606] = {
    [anon_sym_GT] = ACTIONS(1429),
    [anon_sym_COMMA] = ACTIONS(1429),
    [sym_comment] = ACTIONS(42),
  },
  [607] = {
    [anon_sym_GT] = ACTIONS(1431),
    [anon_sym_AMP] = ACTIONS(1431),
    [anon_sym_LBRACE] = ACTIONS(1431),
    [anon_sym_COMMA] = ACTIONS(1431),
    [anon_sym_DOT] = ACTIONS(1431),
    [anon_sym_LBRACK] = ACTIONS(1431),
    [anon_sym_AT] = ACTIONS(1431),
    [anon_sym_implements] = ACTIONS(1431),
    [sym_comment] = ACTIONS(42),
  },
  [608] = {
    [sym__expression] = STATE(676),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(657),
    [anon_sym_TILDE] = ACTIONS(657),
    [anon_sym_PLUS_PLUS] = ACTIONS(659),
    [anon_sym_DASH_DASH] = ACTIONS(659),
    [sym_comment] = ACTIONS(42),
  },
  [609] = {
    [anon_sym_EQ] = ACTIONS(1147),
    [anon_sym_PLUS_EQ] = ACTIONS(1149),
    [anon_sym_DASH_EQ] = ACTIONS(1149),
    [anon_sym_STAR_EQ] = ACTIONS(1149),
    [anon_sym_SLASH_EQ] = ACTIONS(1149),
    [anon_sym_AMP_EQ] = ACTIONS(1149),
    [anon_sym_PIPE_EQ] = ACTIONS(1149),
    [anon_sym_CARET_EQ] = ACTIONS(1149),
    [anon_sym_PERCENT_EQ] = ACTIONS(1149),
    [anon_sym_LT_LT_EQ] = ACTIONS(1149),
    [anon_sym_GT_GT_EQ] = ACTIONS(1149),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1149),
    [anon_sym_GT] = ACTIONS(1151),
    [anon_sym_LT] = ACTIONS(1151),
    [anon_sym_EQ_EQ] = ACTIONS(1153),
    [anon_sym_GT_EQ] = ACTIONS(1153),
    [anon_sym_LT_EQ] = ACTIONS(1153),
    [anon_sym_BANG_EQ] = ACTIONS(1153),
    [anon_sym_AMP_AMP] = ACTIONS(1433),
    [anon_sym_PIPE_PIPE] = ACTIONS(1435),
    [anon_sym_PLUS] = ACTIONS(1437),
    [anon_sym_DASH] = ACTIONS(1437),
    [anon_sym_STAR] = ACTIONS(1439),
    [anon_sym_SLASH] = ACTIONS(1439),
    [anon_sym_AMP] = ACTIONS(1155),
    [anon_sym_PIPE] = ACTIONS(1441),
    [anon_sym_CARET] = ACTIONS(1441),
    [anon_sym_PERCENT] = ACTIONS(1439),
    [anon_sym_LT_LT] = ACTIONS(1439),
    [anon_sym_GT_GT] = ACTIONS(1439),
    [anon_sym_GT_GT_GT] = ACTIONS(1439),
    [anon_sym_QMARK] = ACTIONS(1443),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_COMMA] = ACTIONS(311),
    [sym_comment] = ACTIONS(42),
  },
  [610] = {
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(315),
    [anon_sym_LT] = ACTIONS(315),
    [anon_sym_EQ_EQ] = ACTIONS(313),
    [anon_sym_GT_EQ] = ACTIONS(313),
    [anon_sym_LT_EQ] = ACTIONS(313),
    [anon_sym_BANG_EQ] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(1439),
    [anon_sym_SLASH] = ACTIONS(1439),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(1439),
    [anon_sym_LT_LT] = ACTIONS(1439),
    [anon_sym_GT_GT] = ACTIONS(1439),
    [anon_sym_GT_GT_GT] = ACTIONS(1439),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(313),
    [sym_comment] = ACTIONS(42),
  },
  [611] = {
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(1151),
    [anon_sym_LT] = ACTIONS(1151),
    [anon_sym_EQ_EQ] = ACTIONS(1153),
    [anon_sym_GT_EQ] = ACTIONS(1153),
    [anon_sym_LT_EQ] = ACTIONS(1153),
    [anon_sym_BANG_EQ] = ACTIONS(1153),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(1437),
    [anon_sym_DASH] = ACTIONS(1437),
    [anon_sym_STAR] = ACTIONS(1439),
    [anon_sym_SLASH] = ACTIONS(1439),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(1439),
    [anon_sym_LT_LT] = ACTIONS(1439),
    [anon_sym_GT_GT] = ACTIONS(1439),
    [anon_sym_GT_GT_GT] = ACTIONS(1439),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(313),
    [sym_comment] = ACTIONS(42),
  },
  [612] = {
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(1151),
    [anon_sym_LT] = ACTIONS(1151),
    [anon_sym_EQ_EQ] = ACTIONS(1153),
    [anon_sym_GT_EQ] = ACTIONS(1153),
    [anon_sym_LT_EQ] = ACTIONS(1153),
    [anon_sym_BANG_EQ] = ACTIONS(1153),
    [anon_sym_AMP_AMP] = ACTIONS(1433),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(1437),
    [anon_sym_DASH] = ACTIONS(1437),
    [anon_sym_STAR] = ACTIONS(1439),
    [anon_sym_SLASH] = ACTIONS(1439),
    [anon_sym_AMP] = ACTIONS(1155),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(1439),
    [anon_sym_LT_LT] = ACTIONS(1439),
    [anon_sym_GT_GT] = ACTIONS(1439),
    [anon_sym_GT_GT_GT] = ACTIONS(1439),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(313),
    [sym_comment] = ACTIONS(42),
  },
  [613] = {
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(1151),
    [anon_sym_LT] = ACTIONS(1151),
    [anon_sym_EQ_EQ] = ACTIONS(1153),
    [anon_sym_GT_EQ] = ACTIONS(1153),
    [anon_sym_LT_EQ] = ACTIONS(1153),
    [anon_sym_BANG_EQ] = ACTIONS(1153),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(1439),
    [anon_sym_SLASH] = ACTIONS(1439),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(1439),
    [anon_sym_LT_LT] = ACTIONS(1439),
    [anon_sym_GT_GT] = ACTIONS(1439),
    [anon_sym_GT_GT_GT] = ACTIONS(1439),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(313),
    [sym_comment] = ACTIONS(42),
  },
  [614] = {
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PLUS_EQ] = ACTIONS(319),
    [anon_sym_DASH_EQ] = ACTIONS(319),
    [anon_sym_STAR_EQ] = ACTIONS(319),
    [anon_sym_SLASH_EQ] = ACTIONS(319),
    [anon_sym_AMP_EQ] = ACTIONS(319),
    [anon_sym_PIPE_EQ] = ACTIONS(319),
    [anon_sym_CARET_EQ] = ACTIONS(319),
    [anon_sym_PERCENT_EQ] = ACTIONS(319),
    [anon_sym_LT_LT_EQ] = ACTIONS(319),
    [anon_sym_GT_GT_EQ] = ACTIONS(319),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_CARET] = ACTIONS(335),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_GT_GT_GT] = ACTIONS(331),
    [anon_sym_QMARK] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(1445),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [615] = {
    [sym__semicolon] = ACTIONS(1447),
    [anon_sym_RPAREN] = ACTIONS(1447),
    [anon_sym_RBRACE] = ACTIONS(1447),
    [anon_sym_COMMA] = ACTIONS(1447),
    [sym_comment] = ACTIONS(42),
  },
  [616] = {
    [anon_sym_RBRACE] = ACTIONS(1449),
    [anon_sym_COMMA] = ACTIONS(1449),
    [sym_comment] = ACTIONS(42),
  },
  [617] = {
    [sym_unary_expression] = STATE(228),
    [sym_conditional_expression] = STATE(618),
    [sym_conditional_or_expression] = STATE(319),
    [sym_conditional_and_expression] = STATE(320),
    [sym_inclusive_or_expression] = STATE(321),
    [sym_exclusive_or_expression] = STATE(322),
    [sym_and_expression] = STATE(234),
    [sym_relational_expression] = STATE(323),
    [sym_equality_expression] = STATE(324),
    [sym_shift_expression] = STATE(325),
    [sym_additive_expression] = STATE(326),
    [sym_multiplicative_expression] = STATE(327),
    [anon_sym_BANG] = ACTIONS(661),
    [anon_sym_TILDE] = ACTIONS(661),
    [sym_comment] = ACTIONS(42),
  },
  [618] = {
    [sym__semicolon] = ACTIONS(1451),
    [anon_sym_RPAREN] = ACTIONS(1451),
    [anon_sym_RBRACE] = ACTIONS(1451),
    [anon_sym_COMMA] = ACTIONS(1451),
    [sym_comment] = ACTIONS(42),
  },
  [619] = {
    [sym__semicolon] = ACTIONS(1453),
    [anon_sym_COMMA] = ACTIONS(1453),
    [anon_sym_DOT] = ACTIONS(531),
    [sym_comment] = ACTIONS(42),
  },
  [620] = {
    [sym__expression] = STATE(678),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(781),
    [anon_sym_TILDE] = ACTIONS(781),
    [anon_sym_PLUS_PLUS] = ACTIONS(783),
    [anon_sym_DASH_DASH] = ACTIONS(783),
    [sym_comment] = ACTIONS(42),
  },
  [621] = {
    [sym__expression] = STATE(679),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(781),
    [anon_sym_TILDE] = ACTIONS(781),
    [anon_sym_PLUS_PLUS] = ACTIONS(783),
    [anon_sym_DASH_DASH] = ACTIONS(783),
    [sym_comment] = ACTIONS(42),
  },
  [622] = {
    [sym__statement] = STATE(680),
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
    [sym_modifier] = STATE(28),
    [aux_sym_class_or_interface_type_repeat1] = STATE(30),
    [aux_sym_normal_class_declaration_repeat1] = STATE(31),
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
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [sym_comment] = ACTIONS(42),
  },
  [623] = {
    [anon_sym_if] = ACTIONS(1455),
    [anon_sym_RBRACE] = ACTIONS(1455),
    [anon_sym_AT] = ACTIONS(1455),
    [anon_sym_static] = ACTIONS(1455),
    [anon_sym_class] = ACTIONS(1455),
    [anon_sym_public] = ACTIONS(1455),
    [anon_sym_protected] = ACTIONS(1455),
    [anon_sym_private] = ACTIONS(1455),
    [anon_sym_abstract] = ACTIONS(1455),
    [anon_sym_final] = ACTIONS(1455),
    [anon_sym_strictfp] = ACTIONS(1455),
    [anon_sym_default] = ACTIONS(1455),
    [sym_comment] = ACTIONS(42),
  },
  [624] = {
    [anon_sym_if] = ACTIONS(1457),
    [anon_sym_RBRACE] = ACTIONS(1457),
    [anon_sym_elseif] = ACTIONS(1457),
    [anon_sym_AT] = ACTIONS(1457),
    [anon_sym_static] = ACTIONS(1457),
    [anon_sym_class] = ACTIONS(1457),
    [anon_sym_public] = ACTIONS(1457),
    [anon_sym_protected] = ACTIONS(1457),
    [anon_sym_private] = ACTIONS(1457),
    [anon_sym_abstract] = ACTIONS(1457),
    [anon_sym_final] = ACTIONS(1457),
    [anon_sym_strictfp] = ACTIONS(1457),
    [anon_sym_default] = ACTIONS(1457),
    [sym_comment] = ACTIONS(42),
  },
  [625] = {
    [sym__semicolon] = ACTIONS(1459),
    [anon_sym_EQ] = ACTIONS(1459),
    [anon_sym_GT] = ACTIONS(1459),
    [anon_sym_RPAREN] = ACTIONS(1459),
    [anon_sym_LBRACE] = ACTIONS(1459),
    [anon_sym_COMMA] = ACTIONS(1459),
    [anon_sym_LBRACK] = ACTIONS(1459),
    [anon_sym_AT] = ACTIONS(1459),
    [anon_sym_default] = ACTIONS(1459),
    [anon_sym_throws] = ACTIONS(1459),
    [sym_comment] = ACTIONS(42),
  },
  [626] = {
    [anon_sym_RBRACE] = ACTIONS(1461),
    [anon_sym_AT] = ACTIONS(1463),
    [anon_sym_static] = ACTIONS(1463),
    [anon_sym_class] = ACTIONS(1463),
    [anon_sym_public] = ACTIONS(1463),
    [anon_sym_protected] = ACTIONS(1463),
    [anon_sym_private] = ACTIONS(1463),
    [anon_sym_abstract] = ACTIONS(1463),
    [anon_sym_final] = ACTIONS(1463),
    [anon_sym_strictfp] = ACTIONS(1463),
    [anon_sym_default] = ACTIONS(1463),
    [anon_sym_ATinterface] = ACTIONS(1461),
    [anon_sym_interface] = ACTIONS(1463),
    [sym_identifier] = ACTIONS(1465),
    [sym_comment] = ACTIONS(42),
  },
  [627] = {
    [sym__literal] = STATE(227),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(228),
    [sym__annotation] = STATE(227),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [sym_element_value] = STATE(682),
    [sym_element_value_array_initializer] = STATE(227),
    [sym_conditional_expression] = STATE(227),
    [sym_conditional_or_expression] = STATE(683),
    [sym_conditional_and_expression] = STATE(684),
    [sym_inclusive_or_expression] = STATE(685),
    [sym_exclusive_or_expression] = STATE(686),
    [sym_and_expression] = STATE(234),
    [sym_relational_expression] = STATE(687),
    [sym_equality_expression] = STATE(688),
    [sym_shift_expression] = STATE(689),
    [sym_additive_expression] = STATE(690),
    [sym_multiplicative_expression] = STATE(691),
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
    [anon_sym_BANG] = ACTIONS(1467),
    [anon_sym_TILDE] = ACTIONS(1467),
    [anon_sym_LBRACE] = ACTIONS(487),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(42),
  },
  [628] = {
    [sym_default_value] = STATE(693),
    [sym__semicolon] = ACTIONS(1469),
    [anon_sym_default] = ACTIONS(1375),
    [sym_comment] = ACTIONS(42),
  },
  [629] = {
    [sym__semicolon] = ACTIONS(1469),
    [sym_comment] = ACTIONS(42),
  },
  [630] = {
    [sym_dims] = STATE(694),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [sym_default_value] = STATE(693),
    [aux_sym_class_or_interface_type_repeat1] = STATE(362),
    [aux_sym_dims_repeat1] = STATE(363),
    [sym__semicolon] = ACTIONS(1469),
    [anon_sym_LBRACK] = ACTIONS(791),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_default] = ACTIONS(1375),
    [sym_comment] = ACTIONS(42),
  },
  [631] = {
    [anon_sym_LT] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(957),
    [anon_sym_static] = ACTIONS(957),
    [anon_sym_class] = ACTIONS(957),
    [anon_sym_public] = ACTIONS(957),
    [anon_sym_protected] = ACTIONS(957),
    [anon_sym_private] = ACTIONS(957),
    [anon_sym_abstract] = ACTIONS(957),
    [anon_sym_final] = ACTIONS(957),
    [anon_sym_strictfp] = ACTIONS(957),
    [anon_sym_default] = ACTIONS(957),
    [anon_sym_ATinterface] = ACTIONS(341),
    [anon_sym_interface] = ACTIONS(957),
    [sym_result] = ACTIONS(957),
    [sym_identifier] = ACTIONS(1017),
    [sym_comment] = ACTIONS(42),
  },
  [632] = {
    [anon_sym_EQ] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(1471),
    [sym_comment] = ACTIONS(42),
  },
  [633] = {
    [anon_sym_RPAREN] = ACTIONS(1471),
    [sym_comment] = ACTIONS(42),
  },
  [634] = {
    [anon_sym_RPAREN] = ACTIONS(1473),
    [sym_comment] = ACTIONS(42),
  },
  [635] = {
    [anon_sym_LT] = ACTIONS(353),
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(355),
    [anon_sym_static] = ACTIONS(355),
    [anon_sym_class] = ACTIONS(355),
    [anon_sym_public] = ACTIONS(355),
    [anon_sym_protected] = ACTIONS(355),
    [anon_sym_private] = ACTIONS(355),
    [anon_sym_abstract] = ACTIONS(355),
    [anon_sym_final] = ACTIONS(355),
    [anon_sym_strictfp] = ACTIONS(355),
    [anon_sym_default] = ACTIONS(355),
    [anon_sym_ATinterface] = ACTIONS(353),
    [anon_sym_interface] = ACTIONS(355),
    [sym_result] = ACTIONS(355),
    [sym_identifier] = ACTIONS(951),
    [sym_comment] = ACTIONS(42),
  },
  [636] = {
    [sym__semicolon] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_AT] = ACTIONS(419),
    [anon_sym_static] = ACTIONS(419),
    [anon_sym_class] = ACTIONS(419),
    [anon_sym_public] = ACTIONS(419),
    [anon_sym_protected] = ACTIONS(419),
    [anon_sym_private] = ACTIONS(419),
    [anon_sym_abstract] = ACTIONS(419),
    [anon_sym_final] = ACTIONS(419),
    [anon_sym_strictfp] = ACTIONS(419),
    [anon_sym_default] = ACTIONS(419),
    [anon_sym_ATinterface] = ACTIONS(417),
    [anon_sym_interface] = ACTIONS(419),
    [sym_result] = ACTIONS(419),
    [sym_identifier] = ACTIONS(421),
    [sym_comment] = ACTIONS(42),
  },
  [637] = {
    [sym__annotation] = STATE(124),
    [sym_normal_annotation] = STATE(128),
    [sym_marker_annotation] = STATE(128),
    [sym_single_element_annotation] = STATE(128),
    [sym_class_declaration] = STATE(120),
    [sym_normal_class_declaration] = STATE(129),
    [sym_modifier] = STATE(130),
    [sym_class_body_declaration] = STATE(205),
    [sym_class_member_declaration] = STATE(132),
    [sym_interface_declaration] = STATE(120),
    [sym_annotation_type_declaration] = STATE(133),
    [sym_normal_interface_declaration] = STATE(133),
    [sym_block] = STATE(132),
    [aux_sym_normal_class_declaration_repeat1] = STATE(134),
    [sym__semicolon] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(1475),
    [anon_sym_AT] = ACTIONS(293),
    [anon_sym_static] = ACTIONS(295),
    [anon_sym_class] = ACTIONS(297),
    [anon_sym_public] = ACTIONS(295),
    [anon_sym_protected] = ACTIONS(295),
    [anon_sym_private] = ACTIONS(295),
    [anon_sym_abstract] = ACTIONS(295),
    [anon_sym_final] = ACTIONS(295),
    [anon_sym_strictfp] = ACTIONS(295),
    [anon_sym_default] = ACTIONS(295),
    [anon_sym_ATinterface] = ACTIONS(299),
    [anon_sym_interface] = ACTIONS(301),
    [sym_comment] = ACTIONS(42),
  },
  [638] = {
    [sym_super_interfaces] = STATE(698),
    [sym_class_body] = STATE(699),
    [anon_sym_LBRACE] = ACTIONS(1265),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [639] = {
    [sym_class_body] = STATE(699),
    [anon_sym_LBRACE] = ACTIONS(1265),
    [sym_comment] = ACTIONS(42),
  },
  [640] = {
    [sym__semicolon] = ACTIONS(475),
    [anon_sym_LT] = ACTIONS(475),
    [anon_sym_RBRACE] = ACTIONS(475),
    [anon_sym_AT] = ACTIONS(477),
    [anon_sym_static] = ACTIONS(477),
    [anon_sym_class] = ACTIONS(477),
    [anon_sym_public] = ACTIONS(477),
    [anon_sym_protected] = ACTIONS(477),
    [anon_sym_private] = ACTIONS(477),
    [anon_sym_abstract] = ACTIONS(477),
    [anon_sym_final] = ACTIONS(477),
    [anon_sym_strictfp] = ACTIONS(477),
    [anon_sym_default] = ACTIONS(477),
    [anon_sym_ATinterface] = ACTIONS(475),
    [anon_sym_interface] = ACTIONS(477),
    [sym_result] = ACTIONS(477),
    [sym_identifier] = ACTIONS(479),
    [sym_comment] = ACTIONS(42),
  },
  [641] = {
    [sym__semicolon] = ACTIONS(1025),
    [anon_sym_LT] = ACTIONS(1025),
    [anon_sym_RBRACE] = ACTIONS(1025),
    [anon_sym_AT] = ACTIONS(1027),
    [anon_sym_static] = ACTIONS(1027),
    [anon_sym_class] = ACTIONS(1027),
    [anon_sym_public] = ACTIONS(1027),
    [anon_sym_protected] = ACTIONS(1027),
    [anon_sym_private] = ACTIONS(1027),
    [anon_sym_abstract] = ACTIONS(1027),
    [anon_sym_final] = ACTIONS(1027),
    [anon_sym_strictfp] = ACTIONS(1027),
    [anon_sym_default] = ACTIONS(1027),
    [anon_sym_ATinterface] = ACTIONS(1025),
    [anon_sym_interface] = ACTIONS(1027),
    [sym_result] = ACTIONS(1027),
    [sym_identifier] = ACTIONS(1029),
    [sym_comment] = ACTIONS(42),
  },
  [642] = {
    [sym__annotation] = STATE(124),
    [sym_normal_annotation] = STATE(128),
    [sym_marker_annotation] = STATE(128),
    [sym_single_element_annotation] = STATE(128),
    [sym_class_declaration] = STATE(380),
    [sym_normal_class_declaration] = STATE(129),
    [sym_modifier] = STATE(130),
    [sym_interface_declaration] = STATE(380),
    [sym_annotation_type_declaration] = STATE(133),
    [sym_annotation_type_member_declaration] = STATE(495),
    [sym_annotation_type_element_declaration] = STATE(380),
    [sym_normal_interface_declaration] = STATE(133),
    [sym_constant_declaration] = STATE(380),
    [sym_variable_declarator_list] = STATE(382),
    [sym_variable_declarator] = STATE(267),
    [sym_variable_declarator_id] = STATE(268),
    [aux_sym_normal_class_declaration_repeat1] = STATE(383),
    [anon_sym_RBRACE] = ACTIONS(1477),
    [anon_sym_AT] = ACTIONS(293),
    [anon_sym_static] = ACTIONS(825),
    [anon_sym_class] = ACTIONS(827),
    [anon_sym_public] = ACTIONS(825),
    [anon_sym_protected] = ACTIONS(825),
    [anon_sym_private] = ACTIONS(825),
    [anon_sym_abstract] = ACTIONS(825),
    [anon_sym_final] = ACTIONS(825),
    [anon_sym_strictfp] = ACTIONS(825),
    [anon_sym_default] = ACTIONS(825),
    [anon_sym_ATinterface] = ACTIONS(299),
    [anon_sym_interface] = ACTIONS(829),
    [sym_identifier] = ACTIONS(831),
    [sym_comment] = ACTIONS(42),
  },
  [643] = {
    [sym__semicolon] = ACTIONS(1061),
    [anon_sym_LT] = ACTIONS(1061),
    [anon_sym_RBRACE] = ACTIONS(1061),
    [anon_sym_AT] = ACTIONS(1063),
    [anon_sym_static] = ACTIONS(1063),
    [anon_sym_class] = ACTIONS(1063),
    [anon_sym_public] = ACTIONS(1063),
    [anon_sym_protected] = ACTIONS(1063),
    [anon_sym_private] = ACTIONS(1063),
    [anon_sym_abstract] = ACTIONS(1063),
    [anon_sym_final] = ACTIONS(1063),
    [anon_sym_strictfp] = ACTIONS(1063),
    [anon_sym_default] = ACTIONS(1063),
    [anon_sym_ATinterface] = ACTIONS(1061),
    [anon_sym_interface] = ACTIONS(1063),
    [sym_result] = ACTIONS(1063),
    [sym_identifier] = ACTIONS(1065),
    [sym_comment] = ACTIONS(42),
  },
  [644] = {
    [sym__annotation] = STATE(388),
    [sym_normal_annotation] = STATE(393),
    [sym_marker_annotation] = STATE(393),
    [sym_single_element_annotation] = STATE(393),
    [sym_class_declaration] = STATE(385),
    [sym_normal_class_declaration] = STATE(394),
    [sym_modifier] = STATE(395),
    [sym_type_parameters] = STATE(396),
    [sym_interface_declaration] = STATE(385),
    [sym_annotation_type_declaration] = STATE(397),
    [sym_normal_interface_declaration] = STATE(397),
    [sym_interface_member_declaration] = STATE(516),
    [sym_constant_declaration] = STATE(385),
    [sym_variable_declarator_list] = STATE(399),
    [sym_variable_declarator] = STATE(267),
    [sym_variable_declarator_id] = STATE(268),
    [sym_interface_method_declaration] = STATE(385),
    [sym_method_header] = STATE(400),
    [aux_sym_normal_class_declaration_repeat1] = STATE(401),
    [sym__semicolon] = ACTIONS(839),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(1479),
    [anon_sym_AT] = ACTIONS(843),
    [anon_sym_static] = ACTIONS(845),
    [anon_sym_class] = ACTIONS(847),
    [anon_sym_public] = ACTIONS(845),
    [anon_sym_protected] = ACTIONS(845),
    [anon_sym_private] = ACTIONS(845),
    [anon_sym_abstract] = ACTIONS(845),
    [anon_sym_final] = ACTIONS(845),
    [anon_sym_strictfp] = ACTIONS(845),
    [anon_sym_default] = ACTIONS(845),
    [anon_sym_ATinterface] = ACTIONS(849),
    [anon_sym_interface] = ACTIONS(851),
    [sym_result] = ACTIONS(853),
    [sym_identifier] = ACTIONS(577),
    [sym_comment] = ACTIONS(42),
  },
  [645] = {
    [sym_interface_body] = STATE(702),
    [anon_sym_LBRACE] = ACTIONS(1269),
    [sym_comment] = ACTIONS(42),
  },
  [646] = {
    [sym__semicolon] = ACTIONS(1099),
    [anon_sym_LT] = ACTIONS(1099),
    [anon_sym_RBRACE] = ACTIONS(1099),
    [anon_sym_AT] = ACTIONS(1101),
    [anon_sym_static] = ACTIONS(1101),
    [anon_sym_class] = ACTIONS(1101),
    [anon_sym_public] = ACTIONS(1101),
    [anon_sym_protected] = ACTIONS(1101),
    [anon_sym_private] = ACTIONS(1101),
    [anon_sym_abstract] = ACTIONS(1101),
    [anon_sym_final] = ACTIONS(1101),
    [anon_sym_strictfp] = ACTIONS(1101),
    [anon_sym_default] = ACTIONS(1101),
    [anon_sym_ATinterface] = ACTIONS(1099),
    [anon_sym_interface] = ACTIONS(1101),
    [sym_result] = ACTIONS(1101),
    [sym_identifier] = ACTIONS(1103),
    [sym_comment] = ACTIONS(42),
  },
  [647] = {
    [sym_dims] = STATE(703),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [aux_sym_class_or_interface_type_repeat1] = STATE(362),
    [aux_sym_dims_repeat1] = STATE(363),
    [sym__semicolon] = ACTIONS(1481),
    [anon_sym_LBRACE] = ACTIONS(1481),
    [anon_sym_LBRACK] = ACTIONS(791),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_throws] = ACTIONS(1481),
    [sym_comment] = ACTIONS(42),
  },
  [648] = {
    [sym_package_or_type_name] = STATE(705),
    [sym_identifier] = ACTIONS(1483),
    [sym_comment] = ACTIONS(42),
  },
  [649] = {
    [anon_sym_AT] = ACTIONS(64),
    [anon_sym_static] = ACTIONS(66),
    [anon_sym_public] = ACTIONS(66),
    [anon_sym_protected] = ACTIONS(66),
    [anon_sym_private] = ACTIONS(66),
    [anon_sym_abstract] = ACTIONS(66),
    [anon_sym_final] = ACTIONS(66),
    [anon_sym_strictfp] = ACTIONS(66),
    [anon_sym_default] = ACTIONS(66),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(42),
  },
  [650] = {
    [anon_sym_RPAREN] = ACTIONS(1485),
    [anon_sym_COMMA] = ACTIONS(1485),
    [sym_comment] = ACTIONS(42),
  },
  [651] = {
    [sym_variable_declarator] = STATE(706),
    [sym_variable_declarator_id] = STATE(268),
    [sym_identifier] = ACTIONS(1007),
    [sym_comment] = ACTIONS(42),
  },
  [652] = {
    [sym_dims] = STATE(361),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [aux_sym_class_or_interface_type_repeat1] = STATE(362),
    [aux_sym_dims_repeat1] = STATE(363),
    [anon_sym_RPAREN] = ACTIONS(789),
    [anon_sym_COMMA] = ACTIONS(789),
    [anon_sym_DOT] = ACTIONS(1487),
    [anon_sym_LBRACK] = ACTIONS(791),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(42),
  },
  [653] = {
    [anon_sym_AT] = ACTIONS(120),
    [anon_sym_static] = ACTIONS(66),
    [anon_sym_public] = ACTIONS(66),
    [anon_sym_protected] = ACTIONS(66),
    [anon_sym_private] = ACTIONS(66),
    [anon_sym_abstract] = ACTIONS(66),
    [anon_sym_final] = ACTIONS(66),
    [anon_sym_strictfp] = ACTIONS(66),
    [anon_sym_default] = ACTIONS(66),
    [anon_sym_this] = ACTIONS(395),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(120),
    [sym_identifier] = ACTIONS(1489),
    [sym_comment] = ACTIONS(42),
  },
  [654] = {
    [anon_sym_AT] = ACTIONS(125),
    [anon_sym_static] = ACTIONS(397),
    [anon_sym_public] = ACTIONS(397),
    [anon_sym_protected] = ACTIONS(397),
    [anon_sym_private] = ACTIONS(397),
    [anon_sym_abstract] = ACTIONS(397),
    [anon_sym_final] = ACTIONS(397),
    [anon_sym_strictfp] = ACTIONS(397),
    [anon_sym_default] = ACTIONS(397),
    [anon_sym_this] = ACTIONS(397),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(125),
    [sym_identifier] = ACTIONS(431),
    [sym_comment] = ACTIONS(42),
  },
  [655] = {
    [anon_sym_AT] = ACTIONS(151),
    [anon_sym_static] = ACTIONS(433),
    [anon_sym_public] = ACTIONS(433),
    [anon_sym_protected] = ACTIONS(433),
    [anon_sym_private] = ACTIONS(433),
    [anon_sym_abstract] = ACTIONS(433),
    [anon_sym_final] = ACTIONS(433),
    [anon_sym_strictfp] = ACTIONS(433),
    [anon_sym_default] = ACTIONS(433),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(151),
    [sym_identifier] = ACTIONS(435),
    [sym_comment] = ACTIONS(42),
  },
  [656] = {
    [anon_sym_RPAREN] = ACTIONS(1492),
    [anon_sym_COMMA] = ACTIONS(1492),
    [sym_comment] = ACTIONS(42),
  },
  [657] = {
    [anon_sym_RPAREN] = ACTIONS(1494),
    [sym_comment] = ACTIONS(42),
  },
  [658] = {
    [aux_sym_formal_parameters_repeat1] = STATE(710),
    [anon_sym_RPAREN] = ACTIONS(1496),
    [anon_sym_COMMA] = ACTIONS(1498),
    [sym_comment] = ACTIONS(42),
  },
  [659] = {
    [aux_sym_formal_parameters_repeat1] = STATE(710),
    [anon_sym_RPAREN] = ACTIONS(1500),
    [anon_sym_COMMA] = ACTIONS(1498),
    [sym_comment] = ACTIONS(42),
  },
  [660] = {
    [anon_sym_RPAREN] = ACTIONS(1500),
    [sym_comment] = ACTIONS(42),
  },
  [661] = {
    [sym__annotation] = STATE(715),
    [sym_normal_annotation] = STATE(716),
    [sym_marker_annotation] = STATE(716),
    [sym_single_element_annotation] = STATE(716),
    [anon_sym_AT] = ACTIONS(1502),
    [anon_sym_this] = ACTIONS(1504),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1506),
    [sym_identifier] = ACTIONS(1508),
    [sym_comment] = ACTIONS(42),
  },
  [662] = {
    [sym__annotation] = STATE(718),
    [sym_normal_annotation] = STATE(719),
    [sym_marker_annotation] = STATE(719),
    [sym_single_element_annotation] = STATE(719),
    [sym_modifier] = STATE(720),
    [sym_variable_declarator_id] = STATE(721),
    [aux_sym_class_or_interface_type_repeat1] = STATE(722),
    [anon_sym_AT] = ACTIONS(1510),
    [anon_sym_static] = ACTIONS(1401),
    [anon_sym_public] = ACTIONS(1401),
    [anon_sym_protected] = ACTIONS(1401),
    [anon_sym_private] = ACTIONS(1401),
    [anon_sym_abstract] = ACTIONS(1401),
    [anon_sym_final] = ACTIONS(1401),
    [anon_sym_strictfp] = ACTIONS(1401),
    [anon_sym_default] = ACTIONS(1401),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1506),
    [sym_identifier] = ACTIONS(577),
    [sym_comment] = ACTIONS(42),
  },
  [663] = {
    [sym_type_arguments] = STATE(725),
    [aux_sym_class_or_interface_type_repeat2] = STATE(726),
    [anon_sym_LT] = ACTIONS(1512),
    [anon_sym_DOT] = ACTIONS(1514),
    [anon_sym_AT] = ACTIONS(459),
    [sym_identifier] = ACTIONS(1516),
    [sym_comment] = ACTIONS(42),
  },
  [664] = {
    [sym_type_variable] = STATE(728),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [aux_sym_class_or_interface_type_repeat1] = STATE(729),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(1518),
    [sym_comment] = ACTIONS(42),
  },
  [665] = {
    [sym__semicolon] = ACTIONS(1520),
    [anon_sym_LBRACE] = ACTIONS(1520),
    [sym_comment] = ACTIONS(42),
  },
  [666] = {
    [aux_sym_exception_type_list_repeat1] = STATE(731),
    [sym__semicolon] = ACTIONS(1522),
    [anon_sym_LBRACE] = ACTIONS(1522),
    [anon_sym_COMMA] = ACTIONS(1524),
    [sym_comment] = ACTIONS(42),
  },
  [667] = {
    [sym__annotation] = STATE(184),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(1526),
    [sym_comment] = ACTIONS(42),
  },
  [668] = {
    [sym__semicolon] = ACTIONS(1528),
    [anon_sym_LBRACE] = ACTIONS(1528),
    [sym_comment] = ACTIONS(42),
  },
  [669] = {
    [sym_throws] = STATE(733),
    [sym__semicolon] = ACTIONS(1528),
    [anon_sym_LBRACE] = ACTIONS(1528),
    [anon_sym_throws] = ACTIONS(1275),
    [sym_comment] = ACTIONS(42),
  },
  [670] = {
    [sym_superclass] = STATE(734),
    [sym_super_interfaces] = STATE(698),
    [sym_class_body] = STATE(699),
    [anon_sym_LBRACE] = ACTIONS(1265),
    [anon_sym_extends] = ACTIONS(203),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [671] = {
    [sym__semicolon] = ACTIONS(1105),
    [anon_sym_LT] = ACTIONS(1105),
    [anon_sym_RBRACE] = ACTIONS(1105),
    [anon_sym_AT] = ACTIONS(1107),
    [anon_sym_static] = ACTIONS(1107),
    [anon_sym_class] = ACTIONS(1107),
    [anon_sym_public] = ACTIONS(1107),
    [anon_sym_protected] = ACTIONS(1107),
    [anon_sym_private] = ACTIONS(1107),
    [anon_sym_abstract] = ACTIONS(1107),
    [anon_sym_final] = ACTIONS(1107),
    [anon_sym_strictfp] = ACTIONS(1107),
    [anon_sym_default] = ACTIONS(1107),
    [anon_sym_ATinterface] = ACTIONS(1105),
    [anon_sym_interface] = ACTIONS(1107),
    [sym_result] = ACTIONS(1107),
    [sym_identifier] = ACTIONS(1109),
    [sym_comment] = ACTIONS(42),
  },
  [672] = {
    [sym_extends_interfaces] = STATE(735),
    [sym_interface_body] = STATE(702),
    [anon_sym_LBRACE] = ACTIONS(1269),
    [anon_sym_extends] = ACTIONS(597),
    [sym_comment] = ACTIONS(42),
  },
  [673] = {
    [sym__semicolon] = ACTIONS(1141),
    [anon_sym_LBRACE] = ACTIONS(1141),
    [anon_sym_RBRACE] = ACTIONS(1141),
    [anon_sym_AT] = ACTIONS(1143),
    [anon_sym_static] = ACTIONS(1143),
    [anon_sym_class] = ACTIONS(1143),
    [anon_sym_public] = ACTIONS(1143),
    [anon_sym_protected] = ACTIONS(1143),
    [anon_sym_private] = ACTIONS(1143),
    [anon_sym_abstract] = ACTIONS(1143),
    [anon_sym_final] = ACTIONS(1143),
    [anon_sym_strictfp] = ACTIONS(1143),
    [anon_sym_default] = ACTIONS(1143),
    [anon_sym_ATinterface] = ACTIONS(1141),
    [anon_sym_interface] = ACTIONS(1143),
    [sym_identifier] = ACTIONS(1145),
    [sym_comment] = ACTIONS(42),
  },
  [674] = {
    [anon_sym_boolean] = ACTIONS(1207),
    [anon_sym_byte] = ACTIONS(1207),
    [anon_sym_short] = ACTIONS(1207),
    [anon_sym_int] = ACTIONS(1207),
    [anon_sym_long] = ACTIONS(1207),
    [anon_sym_char] = ACTIONS(1207),
    [anon_sym_float] = ACTIONS(1207),
    [anon_sym_double] = ACTIONS(1207),
    [anon_sym_AT] = ACTIONS(489),
    [sym_identifier] = ACTIONS(1233),
    [sym_comment] = ACTIONS(42),
  },
  [675] = {
    [anon_sym_boolean] = ACTIONS(1209),
    [anon_sym_byte] = ACTIONS(1209),
    [anon_sym_short] = ACTIONS(1209),
    [anon_sym_int] = ACTIONS(1209),
    [anon_sym_long] = ACTIONS(1209),
    [anon_sym_char] = ACTIONS(1209),
    [anon_sym_float] = ACTIONS(1209),
    [anon_sym_double] = ACTIONS(1209),
    [anon_sym_AT] = ACTIONS(491),
    [sym_identifier] = ACTIONS(1235),
    [sym_comment] = ACTIONS(42),
  },
  [676] = {
    [anon_sym_EQ] = ACTIONS(649),
    [anon_sym_PLUS_EQ] = ACTIONS(647),
    [anon_sym_DASH_EQ] = ACTIONS(647),
    [anon_sym_STAR_EQ] = ACTIONS(647),
    [anon_sym_SLASH_EQ] = ACTIONS(647),
    [anon_sym_AMP_EQ] = ACTIONS(647),
    [anon_sym_PIPE_EQ] = ACTIONS(647),
    [anon_sym_CARET_EQ] = ACTIONS(647),
    [anon_sym_PERCENT_EQ] = ACTIONS(647),
    [anon_sym_LT_LT_EQ] = ACTIONS(647),
    [anon_sym_GT_GT_EQ] = ACTIONS(647),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(647),
    [anon_sym_GT] = ACTIONS(903),
    [anon_sym_LT] = ACTIONS(903),
    [anon_sym_EQ_EQ] = ACTIONS(905),
    [anon_sym_GT_EQ] = ACTIONS(905),
    [anon_sym_LT_EQ] = ACTIONS(905),
    [anon_sym_BANG_EQ] = ACTIONS(905),
    [anon_sym_AMP_AMP] = ACTIONS(1329),
    [anon_sym_PIPE_PIPE] = ACTIONS(1331),
    [anon_sym_PLUS] = ACTIONS(1333),
    [anon_sym_DASH] = ACTIONS(1333),
    [anon_sym_STAR] = ACTIONS(1335),
    [anon_sym_SLASH] = ACTIONS(1335),
    [anon_sym_AMP] = ACTIONS(907),
    [anon_sym_PIPE] = ACTIONS(1337),
    [anon_sym_CARET] = ACTIONS(1337),
    [anon_sym_PERCENT] = ACTIONS(1335),
    [anon_sym_LT_LT] = ACTIONS(1335),
    [anon_sym_GT_GT] = ACTIONS(1335),
    [anon_sym_GT_GT_GT] = ACTIONS(1335),
    [anon_sym_QMARK] = ACTIONS(1339),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(647),
    [anon_sym_COMMA] = ACTIONS(647),
    [sym_comment] = ACTIONS(42),
  },
  [677] = {
    [sym__expression] = STATE(736),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(909),
    [anon_sym_TILDE] = ACTIONS(909),
    [anon_sym_PLUS_PLUS] = ACTIONS(911),
    [anon_sym_DASH_DASH] = ACTIONS(911),
    [sym_comment] = ACTIONS(42),
  },
  [678] = {
    [anon_sym_EQ] = ACTIONS(649),
    [anon_sym_PLUS_EQ] = ACTIONS(647),
    [anon_sym_DASH_EQ] = ACTIONS(647),
    [anon_sym_STAR_EQ] = ACTIONS(647),
    [anon_sym_SLASH_EQ] = ACTIONS(647),
    [anon_sym_AMP_EQ] = ACTIONS(647),
    [anon_sym_PIPE_EQ] = ACTIONS(647),
    [anon_sym_CARET_EQ] = ACTIONS(647),
    [anon_sym_PERCENT_EQ] = ACTIONS(647),
    [anon_sym_LT_LT_EQ] = ACTIONS(647),
    [anon_sym_GT_GT_EQ] = ACTIONS(647),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(647),
    [anon_sym_GT] = ACTIONS(973),
    [anon_sym_LT] = ACTIONS(973),
    [anon_sym_EQ_EQ] = ACTIONS(975),
    [anon_sym_GT_EQ] = ACTIONS(975),
    [anon_sym_LT_EQ] = ACTIONS(975),
    [anon_sym_BANG_EQ] = ACTIONS(975),
    [anon_sym_AMP_AMP] = ACTIONS(977),
    [anon_sym_PIPE_PIPE] = ACTIONS(979),
    [anon_sym_PLUS] = ACTIONS(981),
    [anon_sym_DASH] = ACTIONS(981),
    [anon_sym_STAR] = ACTIONS(983),
    [anon_sym_SLASH] = ACTIONS(983),
    [anon_sym_AMP] = ACTIONS(985),
    [anon_sym_PIPE] = ACTIONS(987),
    [anon_sym_CARET] = ACTIONS(987),
    [anon_sym_PERCENT] = ACTIONS(983),
    [anon_sym_LT_LT] = ACTIONS(983),
    [anon_sym_GT_GT] = ACTIONS(983),
    [anon_sym_GT_GT_GT] = ACTIONS(983),
    [anon_sym_QMARK] = ACTIONS(989),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(647),
    [sym_comment] = ACTIONS(42),
  },
  [679] = {
    [anon_sym_EQ] = ACTIONS(969),
    [anon_sym_PLUS_EQ] = ACTIONS(971),
    [anon_sym_DASH_EQ] = ACTIONS(971),
    [anon_sym_STAR_EQ] = ACTIONS(971),
    [anon_sym_SLASH_EQ] = ACTIONS(971),
    [anon_sym_AMP_EQ] = ACTIONS(971),
    [anon_sym_PIPE_EQ] = ACTIONS(971),
    [anon_sym_CARET_EQ] = ACTIONS(971),
    [anon_sym_PERCENT_EQ] = ACTIONS(971),
    [anon_sym_LT_LT_EQ] = ACTIONS(971),
    [anon_sym_GT_GT_EQ] = ACTIONS(971),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(971),
    [anon_sym_GT] = ACTIONS(973),
    [anon_sym_LT] = ACTIONS(973),
    [anon_sym_EQ_EQ] = ACTIONS(975),
    [anon_sym_GT_EQ] = ACTIONS(975),
    [anon_sym_LT_EQ] = ACTIONS(975),
    [anon_sym_BANG_EQ] = ACTIONS(975),
    [anon_sym_AMP_AMP] = ACTIONS(977),
    [anon_sym_PIPE_PIPE] = ACTIONS(979),
    [anon_sym_PLUS] = ACTIONS(981),
    [anon_sym_DASH] = ACTIONS(981),
    [anon_sym_STAR] = ACTIONS(983),
    [anon_sym_SLASH] = ACTIONS(983),
    [anon_sym_AMP] = ACTIONS(985),
    [anon_sym_PIPE] = ACTIONS(987),
    [anon_sym_CARET] = ACTIONS(987),
    [anon_sym_PERCENT] = ACTIONS(983),
    [anon_sym_LT_LT] = ACTIONS(983),
    [anon_sym_GT_GT] = ACTIONS(983),
    [anon_sym_GT_GT_GT] = ACTIONS(983),
    [anon_sym_QMARK] = ACTIONS(989),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(1530),
    [sym_comment] = ACTIONS(42),
  },
  [680] = {
    [anon_sym_RBRACE] = ACTIONS(1532),
    [sym_comment] = ACTIONS(42),
  },
  [681] = {
    [sym__expression] = STATE(739),
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
  [682] = {
    [sym__semicolon] = ACTIONS(1534),
    [sym_comment] = ACTIONS(42),
  },
  [683] = {
    [sym__semicolon] = ACTIONS(679),
    [anon_sym_PIPE_PIPE] = ACTIONS(1536),
    [anon_sym_QMARK] = ACTIONS(1538),
    [sym_comment] = ACTIONS(42),
  },
  [684] = {
    [sym__semicolon] = ACTIONS(683),
    [anon_sym_AMP_AMP] = ACTIONS(1540),
    [anon_sym_PIPE_PIPE] = ACTIONS(683),
    [anon_sym_QMARK] = ACTIONS(683),
    [sym_comment] = ACTIONS(42),
  },
  [685] = {
    [sym__semicolon] = ACTIONS(685),
    [anon_sym_AMP_AMP] = ACTIONS(685),
    [anon_sym_PIPE_PIPE] = ACTIONS(685),
    [anon_sym_PIPE] = ACTIONS(1542),
    [anon_sym_QMARK] = ACTIONS(685),
    [sym_comment] = ACTIONS(42),
  },
  [686] = {
    [sym__semicolon] = ACTIONS(689),
    [anon_sym_AMP_AMP] = ACTIONS(689),
    [anon_sym_PIPE_PIPE] = ACTIONS(689),
    [anon_sym_PIPE] = ACTIONS(691),
    [anon_sym_CARET] = ACTIONS(1544),
    [anon_sym_QMARK] = ACTIONS(689),
    [sym_comment] = ACTIONS(42),
  },
  [687] = {
    [sym__semicolon] = ACTIONS(703),
    [anon_sym_LT] = ACTIONS(1546),
    [anon_sym_EQ_EQ] = ACTIONS(701),
    [anon_sym_BANG_EQ] = ACTIONS(701),
    [anon_sym_AMP_AMP] = ACTIONS(703),
    [anon_sym_PIPE_PIPE] = ACTIONS(703),
    [anon_sym_PIPE] = ACTIONS(705),
    [anon_sym_CARET] = ACTIONS(703),
    [anon_sym_QMARK] = ACTIONS(703),
    [sym_comment] = ACTIONS(42),
  },
  [688] = {
    [anon_sym_EQ_EQ] = ACTIONS(1548),
    [anon_sym_BANG_EQ] = ACTIONS(1548),
    [sym_comment] = ACTIONS(42),
  },
  [689] = {
    [sym__semicolon] = ACTIONS(711),
    [anon_sym_LT] = ACTIONS(709),
    [anon_sym_EQ_EQ] = ACTIONS(711),
    [anon_sym_BANG_EQ] = ACTIONS(711),
    [anon_sym_AMP_AMP] = ACTIONS(711),
    [anon_sym_PIPE_PIPE] = ACTIONS(711),
    [anon_sym_PIPE] = ACTIONS(709),
    [anon_sym_CARET] = ACTIONS(711),
    [anon_sym_LT_LT] = ACTIONS(1550),
    [anon_sym_GT_GT] = ACTIONS(1552),
    [anon_sym_GT_GT_GT] = ACTIONS(1550),
    [anon_sym_QMARK] = ACTIONS(711),
    [sym_comment] = ACTIONS(42),
  },
  [690] = {
    [sym__semicolon] = ACTIONS(719),
    [anon_sym_LT] = ACTIONS(717),
    [anon_sym_EQ_EQ] = ACTIONS(719),
    [anon_sym_BANG_EQ] = ACTIONS(719),
    [anon_sym_AMP_AMP] = ACTIONS(719),
    [anon_sym_PIPE_PIPE] = ACTIONS(719),
    [anon_sym_PLUS] = ACTIONS(1554),
    [anon_sym_DASH] = ACTIONS(1554),
    [anon_sym_PIPE] = ACTIONS(717),
    [anon_sym_CARET] = ACTIONS(719),
    [anon_sym_LT_LT] = ACTIONS(719),
    [anon_sym_GT_GT] = ACTIONS(717),
    [anon_sym_GT_GT_GT] = ACTIONS(719),
    [anon_sym_QMARK] = ACTIONS(719),
    [sym_comment] = ACTIONS(42),
  },
  [691] = {
    [sym__semicolon] = ACTIONS(725),
    [anon_sym_LT] = ACTIONS(723),
    [anon_sym_EQ_EQ] = ACTIONS(725),
    [anon_sym_BANG_EQ] = ACTIONS(725),
    [anon_sym_AMP_AMP] = ACTIONS(725),
    [anon_sym_PIPE_PIPE] = ACTIONS(725),
    [anon_sym_PLUS] = ACTIONS(725),
    [anon_sym_DASH] = ACTIONS(725),
    [anon_sym_STAR] = ACTIONS(1556),
    [anon_sym_SLASH] = ACTIONS(1558),
    [anon_sym_PIPE] = ACTIONS(723),
    [anon_sym_CARET] = ACTIONS(725),
    [anon_sym_PERCENT] = ACTIONS(1556),
    [anon_sym_LT_LT] = ACTIONS(725),
    [anon_sym_GT_GT] = ACTIONS(723),
    [anon_sym_GT_GT_GT] = ACTIONS(725),
    [anon_sym_QMARK] = ACTIONS(725),
    [sym_comment] = ACTIONS(42),
  },
  [692] = {
    [anon_sym_RBRACE] = ACTIONS(1560),
    [anon_sym_AT] = ACTIONS(1562),
    [anon_sym_static] = ACTIONS(1562),
    [anon_sym_class] = ACTIONS(1562),
    [anon_sym_public] = ACTIONS(1562),
    [anon_sym_protected] = ACTIONS(1562),
    [anon_sym_private] = ACTIONS(1562),
    [anon_sym_abstract] = ACTIONS(1562),
    [anon_sym_final] = ACTIONS(1562),
    [anon_sym_strictfp] = ACTIONS(1562),
    [anon_sym_default] = ACTIONS(1562),
    [anon_sym_ATinterface] = ACTIONS(1560),
    [anon_sym_interface] = ACTIONS(1562),
    [sym_identifier] = ACTIONS(1564),
    [sym_comment] = ACTIONS(42),
  },
  [693] = {
    [sym__semicolon] = ACTIONS(1566),
    [sym_comment] = ACTIONS(42),
  },
  [694] = {
    [sym_default_value] = STATE(751),
    [sym__semicolon] = ACTIONS(1566),
    [anon_sym_default] = ACTIONS(1375),
    [sym_comment] = ACTIONS(42),
  },
  [695] = {
    [anon_sym_LT] = ACTIONS(489),
    [anon_sym_AT] = ACTIONS(1207),
    [anon_sym_static] = ACTIONS(1207),
    [anon_sym_class] = ACTIONS(1207),
    [anon_sym_public] = ACTIONS(1207),
    [anon_sym_protected] = ACTIONS(1207),
    [anon_sym_private] = ACTIONS(1207),
    [anon_sym_abstract] = ACTIONS(1207),
    [anon_sym_final] = ACTIONS(1207),
    [anon_sym_strictfp] = ACTIONS(1207),
    [anon_sym_default] = ACTIONS(1207),
    [anon_sym_ATinterface] = ACTIONS(489),
    [anon_sym_interface] = ACTIONS(1207),
    [sym_result] = ACTIONS(1207),
    [sym_identifier] = ACTIONS(1233),
    [sym_comment] = ACTIONS(42),
  },
  [696] = {
    [anon_sym_LT] = ACTIONS(491),
    [anon_sym_AT] = ACTIONS(1209),
    [anon_sym_static] = ACTIONS(1209),
    [anon_sym_class] = ACTIONS(1209),
    [anon_sym_public] = ACTIONS(1209),
    [anon_sym_protected] = ACTIONS(1209),
    [anon_sym_private] = ACTIONS(1209),
    [anon_sym_abstract] = ACTIONS(1209),
    [anon_sym_final] = ACTIONS(1209),
    [anon_sym_strictfp] = ACTIONS(1209),
    [anon_sym_default] = ACTIONS(1209),
    [anon_sym_ATinterface] = ACTIONS(491),
    [anon_sym_interface] = ACTIONS(1209),
    [sym_result] = ACTIONS(1209),
    [sym_identifier] = ACTIONS(1235),
    [sym_comment] = ACTIONS(42),
  },
  [697] = {
    [sym__semicolon] = ACTIONS(609),
    [anon_sym_LT] = ACTIONS(609),
    [anon_sym_RBRACE] = ACTIONS(609),
    [anon_sym_AT] = ACTIONS(611),
    [anon_sym_static] = ACTIONS(611),
    [anon_sym_class] = ACTIONS(611),
    [anon_sym_public] = ACTIONS(611),
    [anon_sym_protected] = ACTIONS(611),
    [anon_sym_private] = ACTIONS(611),
    [anon_sym_abstract] = ACTIONS(611),
    [anon_sym_final] = ACTIONS(611),
    [anon_sym_strictfp] = ACTIONS(611),
    [anon_sym_default] = ACTIONS(611),
    [anon_sym_ATinterface] = ACTIONS(609),
    [anon_sym_interface] = ACTIONS(611),
    [sym_result] = ACTIONS(611),
    [sym_identifier] = ACTIONS(613),
    [sym_comment] = ACTIONS(42),
  },
  [698] = {
    [sym_class_body] = STATE(752),
    [anon_sym_LBRACE] = ACTIONS(1265),
    [sym_comment] = ACTIONS(42),
  },
  [699] = {
    [sym__semicolon] = ACTIONS(639),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_RBRACE] = ACTIONS(639),
    [anon_sym_AT] = ACTIONS(641),
    [anon_sym_static] = ACTIONS(641),
    [anon_sym_class] = ACTIONS(641),
    [anon_sym_public] = ACTIONS(641),
    [anon_sym_protected] = ACTIONS(641),
    [anon_sym_private] = ACTIONS(641),
    [anon_sym_abstract] = ACTIONS(641),
    [anon_sym_final] = ACTIONS(641),
    [anon_sym_strictfp] = ACTIONS(641),
    [anon_sym_default] = ACTIONS(641),
    [anon_sym_ATinterface] = ACTIONS(639),
    [anon_sym_interface] = ACTIONS(641),
    [sym_result] = ACTIONS(641),
    [sym_identifier] = ACTIONS(643),
    [sym_comment] = ACTIONS(42),
  },
  [700] = {
    [sym__semicolon] = ACTIONS(1249),
    [anon_sym_LT] = ACTIONS(1249),
    [anon_sym_RBRACE] = ACTIONS(1249),
    [anon_sym_AT] = ACTIONS(1251),
    [anon_sym_static] = ACTIONS(1251),
    [anon_sym_class] = ACTIONS(1251),
    [anon_sym_public] = ACTIONS(1251),
    [anon_sym_protected] = ACTIONS(1251),
    [anon_sym_private] = ACTIONS(1251),
    [anon_sym_abstract] = ACTIONS(1251),
    [anon_sym_final] = ACTIONS(1251),
    [anon_sym_strictfp] = ACTIONS(1251),
    [anon_sym_default] = ACTIONS(1251),
    [anon_sym_ATinterface] = ACTIONS(1249),
    [anon_sym_interface] = ACTIONS(1251),
    [sym_result] = ACTIONS(1251),
    [sym_identifier] = ACTIONS(1253),
    [sym_comment] = ACTIONS(42),
  },
  [701] = {
    [sym__semicolon] = ACTIONS(1299),
    [anon_sym_LT] = ACTIONS(1299),
    [anon_sym_RBRACE] = ACTIONS(1299),
    [anon_sym_AT] = ACTIONS(1301),
    [anon_sym_static] = ACTIONS(1301),
    [anon_sym_class] = ACTIONS(1301),
    [anon_sym_public] = ACTIONS(1301),
    [anon_sym_protected] = ACTIONS(1301),
    [anon_sym_private] = ACTIONS(1301),
    [anon_sym_abstract] = ACTIONS(1301),
    [anon_sym_final] = ACTIONS(1301),
    [anon_sym_strictfp] = ACTIONS(1301),
    [anon_sym_default] = ACTIONS(1301),
    [anon_sym_ATinterface] = ACTIONS(1299),
    [anon_sym_interface] = ACTIONS(1301),
    [sym_result] = ACTIONS(1301),
    [sym_identifier] = ACTIONS(1303),
    [sym_comment] = ACTIONS(42),
  },
  [702] = {
    [sym__semicolon] = ACTIONS(1311),
    [anon_sym_LT] = ACTIONS(1311),
    [anon_sym_RBRACE] = ACTIONS(1311),
    [anon_sym_AT] = ACTIONS(1313),
    [anon_sym_static] = ACTIONS(1313),
    [anon_sym_class] = ACTIONS(1313),
    [anon_sym_public] = ACTIONS(1313),
    [anon_sym_protected] = ACTIONS(1313),
    [anon_sym_private] = ACTIONS(1313),
    [anon_sym_abstract] = ACTIONS(1313),
    [anon_sym_final] = ACTIONS(1313),
    [anon_sym_strictfp] = ACTIONS(1313),
    [anon_sym_default] = ACTIONS(1313),
    [anon_sym_ATinterface] = ACTIONS(1311),
    [anon_sym_interface] = ACTIONS(1313),
    [sym_result] = ACTIONS(1313),
    [sym_identifier] = ACTIONS(1315),
    [sym_comment] = ACTIONS(42),
  },
  [703] = {
    [sym__semicolon] = ACTIONS(1568),
    [anon_sym_LBRACE] = ACTIONS(1568),
    [anon_sym_throws] = ACTIONS(1568),
    [sym_comment] = ACTIONS(42),
  },
  [704] = {
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(177),
    [anon_sym_static] = ACTIONS(179),
    [anon_sym_public] = ACTIONS(179),
    [anon_sym_protected] = ACTIONS(179),
    [anon_sym_private] = ACTIONS(179),
    [anon_sym_abstract] = ACTIONS(179),
    [anon_sym_final] = ACTIONS(179),
    [anon_sym_strictfp] = ACTIONS(179),
    [anon_sym_default] = ACTIONS(179),
    [anon_sym_this] = ACTIONS(179),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(177),
    [sym_identifier] = ACTIONS(523),
    [sym_comment] = ACTIONS(42),
  },
  [705] = {
    [anon_sym_LPAREN] = ACTIONS(1570),
    [anon_sym_DOT] = ACTIONS(1572),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_static] = ACTIONS(551),
    [anon_sym_public] = ACTIONS(551),
    [anon_sym_protected] = ACTIONS(551),
    [anon_sym_private] = ACTIONS(551),
    [anon_sym_abstract] = ACTIONS(551),
    [anon_sym_final] = ACTIONS(551),
    [anon_sym_strictfp] = ACTIONS(551),
    [anon_sym_default] = ACTIONS(551),
    [anon_sym_this] = ACTIONS(551),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(181),
    [sym_identifier] = ACTIONS(589),
    [sym_comment] = ACTIONS(42),
  },
  [706] = {
    [anon_sym_RPAREN] = ACTIONS(1574),
    [sym_comment] = ACTIONS(42),
  },
  [707] = {
    [anon_sym_this] = ACTIONS(1576),
    [sym_comment] = ACTIONS(42),
  },
  [708] = {
    [sym_dims] = STATE(756),
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [aux_sym_class_or_interface_type_repeat1] = STATE(362),
    [aux_sym_dims_repeat1] = STATE(363),
    [sym__semicolon] = ACTIONS(1568),
    [anon_sym_LBRACE] = ACTIONS(1568),
    [anon_sym_LBRACK] = ACTIONS(791),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_throws] = ACTIONS(1568),
    [sym_comment] = ACTIONS(42),
  },
  [709] = {
    [sym__annotation] = STATE(718),
    [sym_normal_annotation] = STATE(719),
    [sym_marker_annotation] = STATE(719),
    [sym_single_element_annotation] = STATE(719),
    [sym_modifier] = STATE(655),
    [sym_variable_declarator_id] = STATE(656),
    [sym_formal_parameter] = STATE(757),
    [sym_last_formal_parameter] = STATE(758),
    [aux_sym_class_or_interface_type_repeat1] = STATE(759),
    [aux_sym_normal_class_declaration_repeat1] = STATE(662),
    [anon_sym_AT] = ACTIONS(1510),
    [anon_sym_static] = ACTIONS(1401),
    [anon_sym_public] = ACTIONS(1401),
    [anon_sym_protected] = ACTIONS(1401),
    [anon_sym_private] = ACTIONS(1401),
    [anon_sym_abstract] = ACTIONS(1401),
    [anon_sym_final] = ACTIONS(1401),
    [anon_sym_strictfp] = ACTIONS(1401),
    [anon_sym_default] = ACTIONS(1401),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1405),
    [sym_identifier] = ACTIONS(577),
    [sym_comment] = ACTIONS(42),
  },
  [710] = {
    [anon_sym_COMMA] = ACTIONS(1578),
    [sym_comment] = ACTIONS(42),
  },
  [711] = {
    [sym_package_or_type_name] = STATE(762),
    [sym_identifier] = ACTIONS(1580),
    [sym_comment] = ACTIONS(42),
  },
  [712] = {
    [anon_sym_RPAREN] = ACTIONS(1582),
    [anon_sym_COMMA] = ACTIONS(1582),
    [sym_comment] = ACTIONS(42),
  },
  [713] = {
    [sym_variable_declarator] = STATE(763),
    [sym_variable_declarator_id] = STATE(268),
    [sym_identifier] = ACTIONS(1007),
    [sym_comment] = ACTIONS(42),
  },
  [714] = {
    [anon_sym_DOT] = ACTIONS(1584),
    [sym_comment] = ACTIONS(42),
  },
  [715] = {
    [anon_sym_AT] = ACTIONS(227),
    [anon_sym_this] = ACTIONS(561),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(227),
    [sym_identifier] = ACTIONS(1125),
    [sym_comment] = ACTIONS(42),
  },
  [716] = {
    [anon_sym_AT] = ACTIONS(125),
    [anon_sym_this] = ACTIONS(397),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(125),
    [sym_identifier] = ACTIONS(431),
    [sym_comment] = ACTIONS(42),
  },
  [717] = {
    [sym_package_or_type_name] = STATE(766),
    [sym_identifier] = ACTIONS(1586),
    [sym_comment] = ACTIONS(42),
  },
  [718] = {
    [anon_sym_AT] = ACTIONS(120),
    [anon_sym_static] = ACTIONS(66),
    [anon_sym_public] = ACTIONS(66),
    [anon_sym_protected] = ACTIONS(66),
    [anon_sym_private] = ACTIONS(66),
    [anon_sym_abstract] = ACTIONS(66),
    [anon_sym_final] = ACTIONS(66),
    [anon_sym_strictfp] = ACTIONS(66),
    [anon_sym_default] = ACTIONS(66),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(120),
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(42),
  },
  [719] = {
    [anon_sym_AT] = ACTIONS(125),
    [anon_sym_static] = ACTIONS(397),
    [anon_sym_public] = ACTIONS(397),
    [anon_sym_protected] = ACTIONS(397),
    [anon_sym_private] = ACTIONS(397),
    [anon_sym_abstract] = ACTIONS(397),
    [anon_sym_final] = ACTIONS(397),
    [anon_sym_strictfp] = ACTIONS(397),
    [anon_sym_default] = ACTIONS(397),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(125),
    [sym_identifier] = ACTIONS(431),
    [sym_comment] = ACTIONS(42),
  },
  [720] = {
    [anon_sym_AT] = ACTIONS(231),
    [anon_sym_static] = ACTIONS(605),
    [anon_sym_public] = ACTIONS(605),
    [anon_sym_protected] = ACTIONS(605),
    [anon_sym_private] = ACTIONS(605),
    [anon_sym_abstract] = ACTIONS(605),
    [anon_sym_final] = ACTIONS(605),
    [anon_sym_strictfp] = ACTIONS(605),
    [anon_sym_default] = ACTIONS(605),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(231),
    [sym_identifier] = ACTIONS(607),
    [sym_comment] = ACTIONS(42),
  },
  [721] = {
    [anon_sym_RPAREN] = ACTIONS(1588),
    [anon_sym_COMMA] = ACTIONS(1588),
    [sym_comment] = ACTIONS(42),
  },
  [722] = {
    [sym__annotation] = STATE(58),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1590),
    [sym_comment] = ACTIONS(42),
  },
  [723] = {
    [sym_type_argument] = STATE(768),
    [sym_reference_type] = STATE(295),
    [sym_class_or_interface_type] = STATE(296),
    [sym_primitive_type] = STATE(297),
    [sym_integral_type] = STATE(290),
    [sym_floating_point_type] = STATE(290),
    [sym__annotation] = STATE(298),
    [sym_normal_annotation] = STATE(299),
    [sym_marker_annotation] = STATE(299),
    [sym_single_element_annotation] = STATE(299),
    [aux_sym_class_or_interface_type_repeat1] = STATE(300),
    [anon_sym_boolean] = ACTIONS(619),
    [anon_sym_byte] = ACTIONS(621),
    [anon_sym_short] = ACTIONS(621),
    [anon_sym_int] = ACTIONS(621),
    [anon_sym_long] = ACTIONS(621),
    [anon_sym_char] = ACTIONS(621),
    [anon_sym_float] = ACTIONS(623),
    [anon_sym_double] = ACTIONS(623),
    [anon_sym_AT] = ACTIONS(625),
    [sym_identifier] = ACTIONS(627),
    [sym_comment] = ACTIONS(42),
  },
  [724] = {
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [aux_sym_class_or_interface_type_repeat1] = STATE(770),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(1592),
    [sym_comment] = ACTIONS(42),
  },
  [725] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(771),
    [anon_sym_DOT] = ACTIONS(1514),
    [anon_sym_AT] = ACTIONS(631),
    [sym_identifier] = ACTIONS(1594),
    [sym_comment] = ACTIONS(42),
  },
  [726] = {
    [anon_sym_DOT] = ACTIONS(1596),
    [anon_sym_AT] = ACTIONS(631),
    [sym_identifier] = ACTIONS(1594),
    [sym_comment] = ACTIONS(42),
  },
  [727] = {
    [sym__semicolon] = ACTIONS(1598),
    [anon_sym_LBRACE] = ACTIONS(1598),
    [anon_sym_COMMA] = ACTIONS(1598),
    [sym_comment] = ACTIONS(42),
  },
  [728] = {
    [sym__semicolon] = ACTIONS(1600),
    [anon_sym_LBRACE] = ACTIONS(1600),
    [anon_sym_COMMA] = ACTIONS(1600),
    [sym_comment] = ACTIONS(42),
  },
  [729] = {
    [sym__annotation] = STATE(184),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(1602),
    [sym_comment] = ACTIONS(42),
  },
  [730] = {
    [sym__semicolon] = ACTIONS(1604),
    [anon_sym_LBRACE] = ACTIONS(1604),
    [anon_sym_COMMA] = ACTIONS(1604),
    [sym_comment] = ACTIONS(42),
  },
  [731] = {
    [sym__semicolon] = ACTIONS(1606),
    [anon_sym_LBRACE] = ACTIONS(1606),
    [anon_sym_COMMA] = ACTIONS(1608),
    [sym_comment] = ACTIONS(42),
  },
  [732] = {
    [sym_type_arguments] = STATE(775),
    [aux_sym_class_or_interface_type_repeat2] = STATE(771),
    [anon_sym_LT] = ACTIONS(1512),
    [anon_sym_DOT] = ACTIONS(1514),
    [anon_sym_AT] = ACTIONS(631),
    [sym_identifier] = ACTIONS(1594),
    [sym_comment] = ACTIONS(42),
  },
  [733] = {
    [sym__semicolon] = ACTIONS(1610),
    [anon_sym_LBRACE] = ACTIONS(1610),
    [sym_comment] = ACTIONS(42),
  },
  [734] = {
    [sym_super_interfaces] = STATE(776),
    [sym_class_body] = STATE(752),
    [anon_sym_LBRACE] = ACTIONS(1265),
    [anon_sym_implements] = ACTIONS(205),
    [sym_comment] = ACTIONS(42),
  },
  [735] = {
    [sym_interface_body] = STATE(777),
    [anon_sym_LBRACE] = ACTIONS(1269),
    [sym_comment] = ACTIONS(42),
  },
  [736] = {
    [anon_sym_EQ] = ACTIONS(649),
    [anon_sym_PLUS_EQ] = ACTIONS(647),
    [anon_sym_DASH_EQ] = ACTIONS(647),
    [anon_sym_STAR_EQ] = ACTIONS(647),
    [anon_sym_SLASH_EQ] = ACTIONS(647),
    [anon_sym_AMP_EQ] = ACTIONS(647),
    [anon_sym_PIPE_EQ] = ACTIONS(647),
    [anon_sym_CARET_EQ] = ACTIONS(647),
    [anon_sym_PERCENT_EQ] = ACTIONS(647),
    [anon_sym_LT_LT_EQ] = ACTIONS(647),
    [anon_sym_GT_GT_EQ] = ACTIONS(647),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(647),
    [anon_sym_GT] = ACTIONS(1151),
    [anon_sym_LT] = ACTIONS(1151),
    [anon_sym_EQ_EQ] = ACTIONS(1153),
    [anon_sym_GT_EQ] = ACTIONS(1153),
    [anon_sym_LT_EQ] = ACTIONS(1153),
    [anon_sym_BANG_EQ] = ACTIONS(1153),
    [anon_sym_AMP_AMP] = ACTIONS(1433),
    [anon_sym_PIPE_PIPE] = ACTIONS(1435),
    [anon_sym_PLUS] = ACTIONS(1437),
    [anon_sym_DASH] = ACTIONS(1437),
    [anon_sym_STAR] = ACTIONS(1439),
    [anon_sym_SLASH] = ACTIONS(1439),
    [anon_sym_AMP] = ACTIONS(1155),
    [anon_sym_PIPE] = ACTIONS(1441),
    [anon_sym_CARET] = ACTIONS(1441),
    [anon_sym_PERCENT] = ACTIONS(1439),
    [anon_sym_LT_LT] = ACTIONS(1439),
    [anon_sym_GT_GT] = ACTIONS(1439),
    [anon_sym_GT_GT_GT] = ACTIONS(1439),
    [anon_sym_QMARK] = ACTIONS(1443),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(647),
    [anon_sym_COMMA] = ACTIONS(647),
    [sym_comment] = ACTIONS(42),
  },
  [737] = {
    [sym__statement] = STATE(779),
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
    [sym_modifier] = STATE(28),
    [aux_sym_class_or_interface_type_repeat1] = STATE(30),
    [aux_sym_normal_class_declaration_repeat1] = STATE(31),
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
    [anon_sym_LBRACE] = ACTIONS(1612),
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
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [sym_comment] = ACTIONS(42),
  },
  [738] = {
    [anon_sym_if] = ACTIONS(1614),
    [anon_sym_RBRACE] = ACTIONS(1614),
    [anon_sym_AT] = ACTIONS(1614),
    [anon_sym_static] = ACTIONS(1614),
    [anon_sym_class] = ACTIONS(1614),
    [anon_sym_public] = ACTIONS(1614),
    [anon_sym_protected] = ACTIONS(1614),
    [anon_sym_private] = ACTIONS(1614),
    [anon_sym_abstract] = ACTIONS(1614),
    [anon_sym_final] = ACTIONS(1614),
    [anon_sym_strictfp] = ACTIONS(1614),
    [anon_sym_default] = ACTIONS(1614),
    [sym_comment] = ACTIONS(42),
  },
  [739] = {
    [sym__semicolon] = ACTIONS(169),
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_PLUS_EQ] = ACTIONS(90),
    [anon_sym_DASH_EQ] = ACTIONS(90),
    [anon_sym_STAR_EQ] = ACTIONS(90),
    [anon_sym_SLASH_EQ] = ACTIONS(90),
    [anon_sym_AMP_EQ] = ACTIONS(90),
    [anon_sym_PIPE_EQ] = ACTIONS(90),
    [anon_sym_CARET_EQ] = ACTIONS(90),
    [anon_sym_PERCENT_EQ] = ACTIONS(90),
    [anon_sym_LT_LT_EQ] = ACTIONS(90),
    [anon_sym_GT_GT_EQ] = ACTIONS(90),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(90),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(169),
    [anon_sym_GT_EQ] = ACTIONS(94),
    [anon_sym_LT_EQ] = ACTIONS(94),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(171),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_LT_LT] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(171),
    [anon_sym_GT_GT_GT] = ACTIONS(171),
    [anon_sym_QMARK] = ACTIONS(169),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [740] = {
    [sym_unary_expression] = STATE(228),
    [sym_conditional_and_expression] = STATE(780),
    [sym_inclusive_or_expression] = STATE(685),
    [sym_exclusive_or_expression] = STATE(686),
    [sym_and_expression] = STATE(234),
    [sym_relational_expression] = STATE(687),
    [sym_equality_expression] = STATE(688),
    [sym_shift_expression] = STATE(689),
    [sym_additive_expression] = STATE(690),
    [sym_multiplicative_expression] = STATE(691),
    [anon_sym_BANG] = ACTIONS(1467),
    [anon_sym_TILDE] = ACTIONS(1467),
    [sym_comment] = ACTIONS(42),
  },
  [741] = {
    [sym__expression] = STATE(781),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_ternary_expression] = STATE(20),
    [sym_unary_expression] = STATE(21),
    [sym_update_expression] = STATE(20),
    [anon_sym_BANG] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
    [anon_sym_PLUS_PLUS] = ACTIONS(215),
    [anon_sym_DASH_DASH] = ACTIONS(215),
    [sym_comment] = ACTIONS(42),
  },
  [742] = {
    [sym_unary_expression] = STATE(228),
    [sym_inclusive_or_expression] = STATE(782),
    [sym_exclusive_or_expression] = STATE(686),
    [sym_and_expression] = STATE(234),
    [sym_relational_expression] = STATE(687),
    [sym_equality_expression] = STATE(688),
    [sym_shift_expression] = STATE(689),
    [sym_additive_expression] = STATE(690),
    [sym_multiplicative_expression] = STATE(691),
    [anon_sym_BANG] = ACTIONS(1467),
    [anon_sym_TILDE] = ACTIONS(1467),
    [sym_comment] = ACTIONS(42),
  },
  [743] = {
    [sym_unary_expression] = STATE(228),
    [sym_exclusive_or_expression] = STATE(783),
    [sym_and_expression] = STATE(234),
    [sym_relational_expression] = STATE(687),
    [sym_equality_expression] = STATE(688),
    [sym_shift_expression] = STATE(689),
    [sym_additive_expression] = STATE(690),
    [sym_multiplicative_expression] = STATE(691),
    [anon_sym_BANG] = ACTIONS(1467),
    [anon_sym_TILDE] = ACTIONS(1467),
    [sym_comment] = ACTIONS(42),
  },
  [744] = {
    [sym_unary_expression] = STATE(228),
    [sym_and_expression] = STATE(452),
    [sym_relational_expression] = STATE(687),
    [sym_equality_expression] = STATE(688),
    [sym_shift_expression] = STATE(689),
    [sym_additive_expression] = STATE(690),
    [sym_multiplicative_expression] = STATE(691),
    [anon_sym_BANG] = ACTIONS(1467),
    [anon_sym_TILDE] = ACTIONS(1467),
    [sym_comment] = ACTIONS(42),
  },
  [745] = {
    [sym_unary_expression] = STATE(228),
    [sym_shift_expression] = STATE(784),
    [sym_additive_expression] = STATE(690),
    [sym_multiplicative_expression] = STATE(691),
    [anon_sym_BANG] = ACTIONS(1467),
    [anon_sym_TILDE] = ACTIONS(1467),
    [sym_comment] = ACTIONS(42),
  },
  [746] = {
    [sym_unary_expression] = STATE(228),
    [sym_relational_expression] = STATE(785),
    [sym_shift_expression] = STATE(689),
    [sym_additive_expression] = STATE(690),
    [sym_multiplicative_expression] = STATE(691),
    [anon_sym_BANG] = ACTIONS(1467),
    [anon_sym_TILDE] = ACTIONS(1467),
    [sym_comment] = ACTIONS(42),
  },
  [747] = {
    [sym_unary_expression] = STATE(228),
    [sym_additive_expression] = STATE(786),
    [sym_multiplicative_expression] = STATE(691),
    [anon_sym_BANG] = ACTIONS(1467),
    [anon_sym_TILDE] = ACTIONS(1467),
    [sym_comment] = ACTIONS(42),
  },
  [748] = {
    [sym_unary_expression] = STATE(228),
    [sym_multiplicative_expression] = STATE(787),
    [anon_sym_BANG] = ACTIONS(1467),
    [anon_sym_TILDE] = ACTIONS(1467),
    [sym_comment] = ACTIONS(42),
  },
  [749] = {
    [sym_unary_expression] = STATE(457),
    [anon_sym_BANG] = ACTIONS(1467),
    [anon_sym_TILDE] = ACTIONS(1467),
    [sym_comment] = ACTIONS(42),
  },
  [750] = {
    [anon_sym_RBRACE] = ACTIONS(1616),
    [anon_sym_AT] = ACTIONS(1618),
    [anon_sym_static] = ACTIONS(1618),
    [anon_sym_class] = ACTIONS(1618),
    [anon_sym_public] = ACTIONS(1618),
    [anon_sym_protected] = ACTIONS(1618),
    [anon_sym_private] = ACTIONS(1618),
    [anon_sym_abstract] = ACTIONS(1618),
    [anon_sym_final] = ACTIONS(1618),
    [anon_sym_strictfp] = ACTIONS(1618),
    [anon_sym_default] = ACTIONS(1618),
    [anon_sym_ATinterface] = ACTIONS(1616),
    [anon_sym_interface] = ACTIONS(1618),
    [sym_identifier] = ACTIONS(1620),
    [sym_comment] = ACTIONS(42),
  },
  [751] = {
    [sym__semicolon] = ACTIONS(1622),
    [sym_comment] = ACTIONS(42),
  },
  [752] = {
    [sym__semicolon] = ACTIONS(891),
    [anon_sym_LT] = ACTIONS(891),
    [anon_sym_RBRACE] = ACTIONS(891),
    [anon_sym_AT] = ACTIONS(893),
    [anon_sym_static] = ACTIONS(893),
    [anon_sym_class] = ACTIONS(893),
    [anon_sym_public] = ACTIONS(893),
    [anon_sym_protected] = ACTIONS(893),
    [anon_sym_private] = ACTIONS(893),
    [anon_sym_abstract] = ACTIONS(893),
    [anon_sym_final] = ACTIONS(893),
    [anon_sym_strictfp] = ACTIONS(893),
    [anon_sym_default] = ACTIONS(893),
    [anon_sym_ATinterface] = ACTIONS(891),
    [anon_sym_interface] = ACTIONS(893),
    [sym_result] = ACTIONS(893),
    [sym_identifier] = ACTIONS(895),
    [sym_comment] = ACTIONS(42),
  },
  [753] = {
    [sym__literal] = STATE(791),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(792),
    [sym_element_value_pair] = STATE(98),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(237),
    [anon_sym_false] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(1624),
    [sym_identifier] = ACTIONS(1626),
    [sym_comment] = ACTIONS(42),
  },
  [754] = {
    [sym_identifier] = ACTIONS(1628),
    [sym_comment] = ACTIONS(42),
  },
  [755] = {
    [anon_sym_RPAREN] = ACTIONS(1630),
    [anon_sym_COMMA] = ACTIONS(1630),
    [sym_comment] = ACTIONS(42),
  },
  [756] = {
    [sym__semicolon] = ACTIONS(1632),
    [anon_sym_LBRACE] = ACTIONS(1632),
    [anon_sym_throws] = ACTIONS(1632),
    [sym_comment] = ACTIONS(42),
  },
  [757] = {
    [anon_sym_RPAREN] = ACTIONS(1496),
    [anon_sym_COMMA] = ACTIONS(1634),
    [sym_comment] = ACTIONS(42),
  },
  [758] = {
    [anon_sym_RPAREN] = ACTIONS(1636),
    [sym_comment] = ACTIONS(42),
  },
  [759] = {
    [sym__annotation] = STATE(58),
    [sym_normal_annotation] = STATE(23),
    [sym_marker_annotation] = STATE(23),
    [sym_single_element_annotation] = STATE(23),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1506),
    [sym_comment] = ACTIONS(42),
  },
  [760] = {
    [sym__annotation] = STATE(718),
    [sym_normal_annotation] = STATE(719),
    [sym_marker_annotation] = STATE(719),
    [sym_single_element_annotation] = STATE(719),
    [sym_modifier] = STATE(655),
    [sym_variable_declarator_id] = STATE(656),
    [sym_formal_parameter] = STATE(794),
    [sym_last_formal_parameter] = STATE(795),
    [aux_sym_class_or_interface_type_repeat1] = STATE(759),
    [aux_sym_normal_class_declaration_repeat1] = STATE(662),
    [anon_sym_AT] = ACTIONS(1510),
    [anon_sym_static] = ACTIONS(1401),
    [anon_sym_public] = ACTIONS(1401),
    [anon_sym_protected] = ACTIONS(1401),
    [anon_sym_private] = ACTIONS(1401),
    [anon_sym_abstract] = ACTIONS(1401),
    [anon_sym_final] = ACTIONS(1401),
    [anon_sym_strictfp] = ACTIONS(1401),
    [anon_sym_default] = ACTIONS(1401),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1405),
    [sym_identifier] = ACTIONS(577),
    [sym_comment] = ACTIONS(42),
  },
  [761] = {
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(177),
    [anon_sym_this] = ACTIONS(179),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(177),
    [sym_identifier] = ACTIONS(523),
    [sym_comment] = ACTIONS(42),
  },
  [762] = {
    [anon_sym_LPAREN] = ACTIONS(1638),
    [anon_sym_DOT] = ACTIONS(1640),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_this] = ACTIONS(551),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(181),
    [sym_identifier] = ACTIONS(589),
    [sym_comment] = ACTIONS(42),
  },
  [763] = {
    [anon_sym_RPAREN] = ACTIONS(1642),
    [sym_comment] = ACTIONS(42),
  },
  [764] = {
    [anon_sym_this] = ACTIONS(1644),
    [sym_comment] = ACTIONS(42),
  },
  [765] = {
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(177),
    [anon_sym_static] = ACTIONS(179),
    [anon_sym_public] = ACTIONS(179),
    [anon_sym_protected] = ACTIONS(179),
    [anon_sym_private] = ACTIONS(179),
    [anon_sym_abstract] = ACTIONS(179),
    [anon_sym_final] = ACTIONS(179),
    [anon_sym_strictfp] = ACTIONS(179),
    [anon_sym_default] = ACTIONS(179),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(177),
    [sym_identifier] = ACTIONS(523),
    [sym_comment] = ACTIONS(42),
  },
  [766] = {
    [anon_sym_LPAREN] = ACTIONS(1646),
    [anon_sym_DOT] = ACTIONS(1648),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_static] = ACTIONS(551),
    [anon_sym_public] = ACTIONS(551),
    [anon_sym_protected] = ACTIONS(551),
    [anon_sym_private] = ACTIONS(551),
    [anon_sym_abstract] = ACTIONS(551),
    [anon_sym_final] = ACTIONS(551),
    [anon_sym_strictfp] = ACTIONS(551),
    [anon_sym_default] = ACTIONS(551),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(181),
    [sym_identifier] = ACTIONS(589),
    [sym_comment] = ACTIONS(42),
  },
  [767] = {
    [sym_variable_declarator] = STATE(801),
    [sym_variable_declarator_id] = STATE(268),
    [sym_identifier] = ACTIONS(1007),
    [sym_comment] = ACTIONS(42),
  },
  [768] = {
    [aux_sym_type_arguments_repeat1] = STATE(803),
    [anon_sym_GT] = ACTIONS(1650),
    [anon_sym_COMMA] = ACTIONS(871),
    [sym_comment] = ACTIONS(42),
  },
  [769] = {
    [sym_type_arguments] = STATE(804),
    [anon_sym_LT] = ACTIONS(1512),
    [anon_sym_DOT] = ACTIONS(883),
    [anon_sym_AT] = ACTIONS(883),
    [sym_identifier] = ACTIONS(1652),
    [sym_comment] = ACTIONS(42),
  },
  [770] = {
    [sym__annotation] = STATE(184),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(1654),
    [sym_comment] = ACTIONS(42),
  },
  [771] = {
    [anon_sym_DOT] = ACTIONS(1596),
    [anon_sym_AT] = ACTIONS(887),
    [sym_identifier] = ACTIONS(1656),
    [sym_comment] = ACTIONS(42),
  },
  [772] = {
    [sym__annotation] = STATE(115),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [aux_sym_class_or_interface_type_repeat1] = STATE(806),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(1654),
    [sym_comment] = ACTIONS(42),
  },
  [773] = {
    [sym__semicolon] = ACTIONS(1658),
    [anon_sym_LBRACE] = ACTIONS(1658),
    [anon_sym_COMMA] = ACTIONS(1658),
    [sym_comment] = ACTIONS(42),
  },
  [774] = {
    [sym__semicolon] = ACTIONS(1660),
    [anon_sym_LBRACE] = ACTIONS(1660),
    [anon_sym_COMMA] = ACTIONS(1660),
    [sym_comment] = ACTIONS(42),
  },
  [775] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(807),
    [anon_sym_DOT] = ACTIONS(1514),
    [anon_sym_AT] = ACTIONS(887),
    [sym_identifier] = ACTIONS(1656),
    [sym_comment] = ACTIONS(42),
  },
  [776] = {
    [sym_class_body] = STATE(808),
    [anon_sym_LBRACE] = ACTIONS(1265),
    [sym_comment] = ACTIONS(42),
  },
  [777] = {
    [sym__semicolon] = ACTIONS(1419),
    [anon_sym_LT] = ACTIONS(1419),
    [anon_sym_RBRACE] = ACTIONS(1419),
    [anon_sym_AT] = ACTIONS(1421),
    [anon_sym_static] = ACTIONS(1421),
    [anon_sym_class] = ACTIONS(1421),
    [anon_sym_public] = ACTIONS(1421),
    [anon_sym_protected] = ACTIONS(1421),
    [anon_sym_private] = ACTIONS(1421),
    [anon_sym_abstract] = ACTIONS(1421),
    [anon_sym_final] = ACTIONS(1421),
    [anon_sym_strictfp] = ACTIONS(1421),
    [anon_sym_default] = ACTIONS(1421),
    [anon_sym_ATinterface] = ACTIONS(1419),
    [anon_sym_interface] = ACTIONS(1421),
    [sym_result] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(1423),
    [sym_comment] = ACTIONS(42),
  },
  [778] = {
    [sym__statement] = STATE(809),
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
    [sym_modifier] = STATE(28),
    [aux_sym_class_or_interface_type_repeat1] = STATE(30),
    [aux_sym_normal_class_declaration_repeat1] = STATE(31),
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
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [sym_comment] = ACTIONS(42),
  },
  [779] = {
    [anon_sym_if] = ACTIONS(1662),
    [anon_sym_RBRACE] = ACTIONS(1662),
    [anon_sym_elseif] = ACTIONS(1662),
    [anon_sym_AT] = ACTIONS(1662),
    [anon_sym_static] = ACTIONS(1662),
    [anon_sym_class] = ACTIONS(1662),
    [anon_sym_public] = ACTIONS(1662),
    [anon_sym_protected] = ACTIONS(1662),
    [anon_sym_private] = ACTIONS(1662),
    [anon_sym_abstract] = ACTIONS(1662),
    [anon_sym_final] = ACTIONS(1662),
    [anon_sym_strictfp] = ACTIONS(1662),
    [anon_sym_default] = ACTIONS(1662),
    [sym_comment] = ACTIONS(42),
  },
  [780] = {
    [sym__semicolon] = ACTIONS(1163),
    [anon_sym_AMP_AMP] = ACTIONS(1540),
    [anon_sym_PIPE_PIPE] = ACTIONS(1163),
    [anon_sym_QMARK] = ACTIONS(1163),
    [sym_comment] = ACTIONS(42),
  },
  [781] = {
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PLUS_EQ] = ACTIONS(319),
    [anon_sym_DASH_EQ] = ACTIONS(319),
    [anon_sym_STAR_EQ] = ACTIONS(319),
    [anon_sym_SLASH_EQ] = ACTIONS(319),
    [anon_sym_AMP_EQ] = ACTIONS(319),
    [anon_sym_PIPE_EQ] = ACTIONS(319),
    [anon_sym_CARET_EQ] = ACTIONS(319),
    [anon_sym_PERCENT_EQ] = ACTIONS(319),
    [anon_sym_LT_LT_EQ] = ACTIONS(319),
    [anon_sym_GT_GT_EQ] = ACTIONS(319),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_CARET] = ACTIONS(335),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_GT_GT_GT] = ACTIONS(331),
    [anon_sym_QMARK] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(1664),
    [anon_sym_PLUS_PLUS] = ACTIONS(110),
    [anon_sym_DASH_DASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(42),
  },
  [782] = {
    [sym__semicolon] = ACTIONS(1167),
    [anon_sym_AMP_AMP] = ACTIONS(1167),
    [anon_sym_PIPE_PIPE] = ACTIONS(1167),
    [anon_sym_PIPE] = ACTIONS(1542),
    [anon_sym_QMARK] = ACTIONS(1167),
    [sym_comment] = ACTIONS(42),
  },
  [783] = {
    [sym__semicolon] = ACTIONS(1169),
    [anon_sym_AMP_AMP] = ACTIONS(1169),
    [anon_sym_PIPE_PIPE] = ACTIONS(1169),
    [anon_sym_PIPE] = ACTIONS(1171),
    [anon_sym_CARET] = ACTIONS(1544),
    [anon_sym_QMARK] = ACTIONS(1169),
    [sym_comment] = ACTIONS(42),
  },
  [784] = {
    [sym__semicolon] = ACTIONS(1179),
    [anon_sym_LT] = ACTIONS(1177),
    [anon_sym_EQ_EQ] = ACTIONS(1179),
    [anon_sym_BANG_EQ] = ACTIONS(1179),
    [anon_sym_AMP_AMP] = ACTIONS(1179),
    [anon_sym_PIPE_PIPE] = ACTIONS(1179),
    [anon_sym_PIPE] = ACTIONS(1177),
    [anon_sym_CARET] = ACTIONS(1179),
    [anon_sym_LT_LT] = ACTIONS(1550),
    [anon_sym_GT_GT] = ACTIONS(1552),
    [anon_sym_GT_GT_GT] = ACTIONS(1550),
    [anon_sym_QMARK] = ACTIONS(1179),
    [sym_comment] = ACTIONS(42),
  },
  [785] = {
    [sym__semicolon] = ACTIONS(1183),
    [anon_sym_LT] = ACTIONS(1546),
    [anon_sym_EQ_EQ] = ACTIONS(1181),
    [anon_sym_BANG_EQ] = ACTIONS(1181),
    [anon_sym_AMP_AMP] = ACTIONS(1183),
    [anon_sym_PIPE_PIPE] = ACTIONS(1183),
    [anon_sym_PIPE] = ACTIONS(1185),
    [anon_sym_CARET] = ACTIONS(1183),
    [anon_sym_QMARK] = ACTIONS(1183),
    [sym_comment] = ACTIONS(42),
  },
  [786] = {
    [sym__semicolon] = ACTIONS(1189),
    [anon_sym_LT] = ACTIONS(1187),
    [anon_sym_EQ_EQ] = ACTIONS(1189),
    [anon_sym_BANG_EQ] = ACTIONS(1189),
    [anon_sym_AMP_AMP] = ACTIONS(1189),
    [anon_sym_PIPE_PIPE] = ACTIONS(1189),
    [anon_sym_PLUS] = ACTIONS(1554),
    [anon_sym_DASH] = ACTIONS(1554),
    [anon_sym_PIPE] = ACTIONS(1187),
    [anon_sym_CARET] = ACTIONS(1189),
    [anon_sym_LT_LT] = ACTIONS(1189),
    [anon_sym_GT_GT] = ACTIONS(1187),
    [anon_sym_GT_GT_GT] = ACTIONS(1189),
    [anon_sym_QMARK] = ACTIONS(1189),
    [sym_comment] = ACTIONS(42),
  },
  [787] = {
    [sym__semicolon] = ACTIONS(1193),
    [anon_sym_LT] = ACTIONS(1191),
    [anon_sym_EQ_EQ] = ACTIONS(1193),
    [anon_sym_BANG_EQ] = ACTIONS(1193),
    [anon_sym_AMP_AMP] = ACTIONS(1193),
    [anon_sym_PIPE_PIPE] = ACTIONS(1193),
    [anon_sym_PLUS] = ACTIONS(1193),
    [anon_sym_DASH] = ACTIONS(1193),
    [anon_sym_STAR] = ACTIONS(1556),
    [anon_sym_SLASH] = ACTIONS(1558),
    [anon_sym_PIPE] = ACTIONS(1191),
    [anon_sym_CARET] = ACTIONS(1193),
    [anon_sym_PERCENT] = ACTIONS(1556),
    [anon_sym_LT_LT] = ACTIONS(1193),
    [anon_sym_GT_GT] = ACTIONS(1191),
    [anon_sym_GT_GT_GT] = ACTIONS(1193),
    [anon_sym_QMARK] = ACTIONS(1193),
    [sym_comment] = ACTIONS(42),
  },
  [788] = {
    [anon_sym_RBRACE] = ACTIONS(1666),
    [anon_sym_AT] = ACTIONS(1668),
    [anon_sym_static] = ACTIONS(1668),
    [anon_sym_class] = ACTIONS(1668),
    [anon_sym_public] = ACTIONS(1668),
    [anon_sym_protected] = ACTIONS(1668),
    [anon_sym_private] = ACTIONS(1668),
    [anon_sym_abstract] = ACTIONS(1668),
    [anon_sym_final] = ACTIONS(1668),
    [anon_sym_strictfp] = ACTIONS(1668),
    [anon_sym_default] = ACTIONS(1668),
    [anon_sym_ATinterface] = ACTIONS(1666),
    [anon_sym_interface] = ACTIONS(1668),
    [sym_identifier] = ACTIONS(1670),
    [sym_comment] = ACTIONS(42),
  },
  [789] = {
    [anon_sym_AT] = ACTIONS(341),
    [anon_sym_static] = ACTIONS(957),
    [anon_sym_public] = ACTIONS(957),
    [anon_sym_protected] = ACTIONS(957),
    [anon_sym_private] = ACTIONS(957),
    [anon_sym_abstract] = ACTIONS(957),
    [anon_sym_final] = ACTIONS(957),
    [anon_sym_strictfp] = ACTIONS(957),
    [anon_sym_default] = ACTIONS(957),
    [anon_sym_this] = ACTIONS(957),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(341),
    [sym_identifier] = ACTIONS(1017),
    [sym_comment] = ACTIONS(42),
  },
  [790] = {
    [anon_sym_EQ] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(1672),
    [sym_comment] = ACTIONS(42),
  },
  [791] = {
    [anon_sym_RPAREN] = ACTIONS(1672),
    [sym_comment] = ACTIONS(42),
  },
  [792] = {
    [anon_sym_RPAREN] = ACTIONS(1674),
    [sym_comment] = ACTIONS(42),
  },
  [793] = {
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(355),
    [anon_sym_AT] = ACTIONS(353),
    [anon_sym_static] = ACTIONS(355),
    [anon_sym_public] = ACTIONS(355),
    [anon_sym_protected] = ACTIONS(355),
    [anon_sym_private] = ACTIONS(355),
    [anon_sym_abstract] = ACTIONS(355),
    [anon_sym_final] = ACTIONS(355),
    [anon_sym_strictfp] = ACTIONS(355),
    [anon_sym_default] = ACTIONS(355),
    [anon_sym_this] = ACTIONS(355),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(353),
    [sym_identifier] = ACTIONS(951),
    [sym_comment] = ACTIONS(42),
  },
  [794] = {
    [anon_sym_RPAREN] = ACTIONS(1496),
    [anon_sym_COMMA] = ACTIONS(1676),
    [sym_comment] = ACTIONS(42),
  },
  [795] = {
    [anon_sym_RPAREN] = ACTIONS(1678),
    [sym_comment] = ACTIONS(42),
  },
  [796] = {
    [sym__literal] = STATE(815),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(816),
    [sym_element_value_pair] = STATE(98),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(237),
    [anon_sym_false] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(1680),
    [sym_identifier] = ACTIONS(1682),
    [sym_comment] = ACTIONS(42),
  },
  [797] = {
    [sym_identifier] = ACTIONS(1684),
    [sym_comment] = ACTIONS(42),
  },
  [798] = {
    [anon_sym_RPAREN] = ACTIONS(1686),
    [anon_sym_COMMA] = ACTIONS(1686),
    [sym_comment] = ACTIONS(42),
  },
  [799] = {
    [sym__literal] = STATE(820),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(821),
    [sym_element_value_pair] = STATE(98),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(237),
    [anon_sym_false] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(1688),
    [sym_identifier] = ACTIONS(1690),
    [sym_comment] = ACTIONS(42),
  },
  [800] = {
    [sym_identifier] = ACTIONS(1692),
    [sym_comment] = ACTIONS(42),
  },
  [801] = {
    [anon_sym_RPAREN] = ACTIONS(1694),
    [sym_comment] = ACTIONS(42),
  },
  [802] = {
    [anon_sym_DOT] = ACTIONS(1115),
    [anon_sym_AT] = ACTIONS(1115),
    [sym_identifier] = ACTIONS(1696),
    [sym_comment] = ACTIONS(42),
  },
  [803] = {
    [anon_sym_GT] = ACTIONS(1698),
    [anon_sym_COMMA] = ACTIONS(1119),
    [sym_comment] = ACTIONS(42),
  },
  [804] = {
    [anon_sym_DOT] = ACTIONS(1127),
    [anon_sym_AT] = ACTIONS(1127),
    [sym_identifier] = ACTIONS(1700),
    [sym_comment] = ACTIONS(42),
  },
  [805] = {
    [sym_type_arguments] = STATE(824),
    [anon_sym_LT] = ACTIONS(1512),
    [anon_sym_DOT] = ACTIONS(1127),
    [anon_sym_AT] = ACTIONS(1127),
    [sym_identifier] = ACTIONS(1700),
    [sym_comment] = ACTIONS(42),
  },
  [806] = {
    [sym__annotation] = STATE(184),
    [sym_normal_annotation] = STATE(116),
    [sym_marker_annotation] = STATE(116),
    [sym_single_element_annotation] = STATE(116),
    [anon_sym_AT] = ACTIONS(283),
    [sym_identifier] = ACTIONS(1702),
    [sym_comment] = ACTIONS(42),
  },
  [807] = {
    [anon_sym_DOT] = ACTIONS(1596),
    [anon_sym_AT] = ACTIONS(1131),
    [sym_identifier] = ACTIONS(1704),
    [sym_comment] = ACTIONS(42),
  },
  [808] = {
    [sym__semicolon] = ACTIONS(1141),
    [anon_sym_LT] = ACTIONS(1141),
    [anon_sym_RBRACE] = ACTIONS(1141),
    [anon_sym_AT] = ACTIONS(1143),
    [anon_sym_static] = ACTIONS(1143),
    [anon_sym_class] = ACTIONS(1143),
    [anon_sym_public] = ACTIONS(1143),
    [anon_sym_protected] = ACTIONS(1143),
    [anon_sym_private] = ACTIONS(1143),
    [anon_sym_abstract] = ACTIONS(1143),
    [anon_sym_final] = ACTIONS(1143),
    [anon_sym_strictfp] = ACTIONS(1143),
    [anon_sym_default] = ACTIONS(1143),
    [anon_sym_ATinterface] = ACTIONS(1141),
    [anon_sym_interface] = ACTIONS(1143),
    [sym_result] = ACTIONS(1143),
    [sym_identifier] = ACTIONS(1145),
    [sym_comment] = ACTIONS(42),
  },
  [809] = {
    [anon_sym_RBRACE] = ACTIONS(1706),
    [sym_comment] = ACTIONS(42),
  },
  [810] = {
    [sym_unary_expression] = STATE(228),
    [sym_conditional_expression] = STATE(618),
    [sym_conditional_or_expression] = STATE(683),
    [sym_conditional_and_expression] = STATE(684),
    [sym_inclusive_or_expression] = STATE(685),
    [sym_exclusive_or_expression] = STATE(686),
    [sym_and_expression] = STATE(234),
    [sym_relational_expression] = STATE(687),
    [sym_equality_expression] = STATE(688),
    [sym_shift_expression] = STATE(689),
    [sym_additive_expression] = STATE(690),
    [sym_multiplicative_expression] = STATE(691),
    [anon_sym_BANG] = ACTIONS(1467),
    [anon_sym_TILDE] = ACTIONS(1467),
    [sym_comment] = ACTIONS(42),
  },
  [811] = {
    [anon_sym_AT] = ACTIONS(489),
    [anon_sym_static] = ACTIONS(1207),
    [anon_sym_public] = ACTIONS(1207),
    [anon_sym_protected] = ACTIONS(1207),
    [anon_sym_private] = ACTIONS(1207),
    [anon_sym_abstract] = ACTIONS(1207),
    [anon_sym_final] = ACTIONS(1207),
    [anon_sym_strictfp] = ACTIONS(1207),
    [anon_sym_default] = ACTIONS(1207),
    [anon_sym_this] = ACTIONS(1207),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(489),
    [sym_identifier] = ACTIONS(1233),
    [sym_comment] = ACTIONS(42),
  },
  [812] = {
    [anon_sym_AT] = ACTIONS(491),
    [anon_sym_static] = ACTIONS(1209),
    [anon_sym_public] = ACTIONS(1209),
    [anon_sym_protected] = ACTIONS(1209),
    [anon_sym_private] = ACTIONS(1209),
    [anon_sym_abstract] = ACTIONS(1209),
    [anon_sym_final] = ACTIONS(1209),
    [anon_sym_strictfp] = ACTIONS(1209),
    [anon_sym_default] = ACTIONS(1209),
    [anon_sym_this] = ACTIONS(1209),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(491),
    [sym_identifier] = ACTIONS(1235),
    [sym_comment] = ACTIONS(42),
  },
  [813] = {
    [anon_sym_AT] = ACTIONS(341),
    [anon_sym_this] = ACTIONS(957),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(341),
    [sym_identifier] = ACTIONS(1017),
    [sym_comment] = ACTIONS(42),
  },
  [814] = {
    [anon_sym_EQ] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(1708),
    [sym_comment] = ACTIONS(42),
  },
  [815] = {
    [anon_sym_RPAREN] = ACTIONS(1708),
    [sym_comment] = ACTIONS(42),
  },
  [816] = {
    [anon_sym_RPAREN] = ACTIONS(1710),
    [sym_comment] = ACTIONS(42),
  },
  [817] = {
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(355),
    [anon_sym_AT] = ACTIONS(353),
    [anon_sym_this] = ACTIONS(355),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(353),
    [sym_identifier] = ACTIONS(951),
    [sym_comment] = ACTIONS(42),
  },
  [818] = {
    [anon_sym_AT] = ACTIONS(341),
    [anon_sym_static] = ACTIONS(957),
    [anon_sym_public] = ACTIONS(957),
    [anon_sym_protected] = ACTIONS(957),
    [anon_sym_private] = ACTIONS(957),
    [anon_sym_abstract] = ACTIONS(957),
    [anon_sym_final] = ACTIONS(957),
    [anon_sym_strictfp] = ACTIONS(957),
    [anon_sym_default] = ACTIONS(957),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(341),
    [sym_identifier] = ACTIONS(1017),
    [sym_comment] = ACTIONS(42),
  },
  [819] = {
    [anon_sym_EQ] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(1712),
    [sym_comment] = ACTIONS(42),
  },
  [820] = {
    [anon_sym_RPAREN] = ACTIONS(1712),
    [sym_comment] = ACTIONS(42),
  },
  [821] = {
    [anon_sym_RPAREN] = ACTIONS(1714),
    [sym_comment] = ACTIONS(42),
  },
  [822] = {
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(355),
    [anon_sym_AT] = ACTIONS(353),
    [anon_sym_static] = ACTIONS(355),
    [anon_sym_public] = ACTIONS(355),
    [anon_sym_protected] = ACTIONS(355),
    [anon_sym_private] = ACTIONS(355),
    [anon_sym_abstract] = ACTIONS(355),
    [anon_sym_final] = ACTIONS(355),
    [anon_sym_strictfp] = ACTIONS(355),
    [anon_sym_default] = ACTIONS(355),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(353),
    [sym_identifier] = ACTIONS(951),
    [sym_comment] = ACTIONS(42),
  },
  [823] = {
    [anon_sym_DOT] = ACTIONS(1325),
    [anon_sym_AT] = ACTIONS(1325),
    [sym_identifier] = ACTIONS(1716),
    [sym_comment] = ACTIONS(42),
  },
  [824] = {
    [anon_sym_DOT] = ACTIONS(1327),
    [anon_sym_AT] = ACTIONS(1327),
    [sym_identifier] = ACTIONS(1718),
    [sym_comment] = ACTIONS(42),
  },
  [825] = {
    [sym_type_arguments] = STATE(831),
    [anon_sym_LT] = ACTIONS(1512),
    [anon_sym_DOT] = ACTIONS(1327),
    [anon_sym_AT] = ACTIONS(1327),
    [sym_identifier] = ACTIONS(1718),
    [sym_comment] = ACTIONS(42),
  },
  [826] = {
    [anon_sym_if] = ACTIONS(1720),
    [anon_sym_RBRACE] = ACTIONS(1720),
    [anon_sym_elseif] = ACTIONS(1720),
    [anon_sym_AT] = ACTIONS(1720),
    [anon_sym_static] = ACTIONS(1720),
    [anon_sym_class] = ACTIONS(1720),
    [anon_sym_public] = ACTIONS(1720),
    [anon_sym_protected] = ACTIONS(1720),
    [anon_sym_private] = ACTIONS(1720),
    [anon_sym_abstract] = ACTIONS(1720),
    [anon_sym_final] = ACTIONS(1720),
    [anon_sym_strictfp] = ACTIONS(1720),
    [anon_sym_default] = ACTIONS(1720),
    [sym_comment] = ACTIONS(42),
  },
  [827] = {
    [anon_sym_AT] = ACTIONS(489),
    [anon_sym_this] = ACTIONS(1207),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(489),
    [sym_identifier] = ACTIONS(1233),
    [sym_comment] = ACTIONS(42),
  },
  [828] = {
    [anon_sym_AT] = ACTIONS(491),
    [anon_sym_this] = ACTIONS(1209),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(491),
    [sym_identifier] = ACTIONS(1235),
    [sym_comment] = ACTIONS(42),
  },
  [829] = {
    [anon_sym_AT] = ACTIONS(489),
    [anon_sym_static] = ACTIONS(1207),
    [anon_sym_public] = ACTIONS(1207),
    [anon_sym_protected] = ACTIONS(1207),
    [anon_sym_private] = ACTIONS(1207),
    [anon_sym_abstract] = ACTIONS(1207),
    [anon_sym_final] = ACTIONS(1207),
    [anon_sym_strictfp] = ACTIONS(1207),
    [anon_sym_default] = ACTIONS(1207),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(489),
    [sym_identifier] = ACTIONS(1233),
    [sym_comment] = ACTIONS(42),
  },
  [830] = {
    [anon_sym_AT] = ACTIONS(491),
    [anon_sym_static] = ACTIONS(1209),
    [anon_sym_public] = ACTIONS(1209),
    [anon_sym_protected] = ACTIONS(1209),
    [anon_sym_private] = ACTIONS(1209),
    [anon_sym_abstract] = ACTIONS(1209),
    [anon_sym_final] = ACTIONS(1209),
    [anon_sym_strictfp] = ACTIONS(1209),
    [anon_sym_default] = ACTIONS(1209),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(491),
    [sym_identifier] = ACTIONS(1235),
    [sym_comment] = ACTIONS(42),
  },
  [831] = {
    [anon_sym_DOT] = ACTIONS(1431),
    [anon_sym_AT] = ACTIONS(1431),
    [sym_identifier] = ACTIONS(1722),
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
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_modifier, 1, .fragile = true),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1, .fragile = true),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1, .fragile = true),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 1),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 1),
  [120] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true), REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__annotation, 1),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 1),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_statement, 1),
  [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 1),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 1),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 1),
  [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 1),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 1),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 2),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 1),
  [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unary_expression, 2),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unary_expression, 2),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_update_expression, 2),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_update_expression, 2),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_or_type_name, 1),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_marker_annotation, 2),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 1),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 2),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [235] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 2),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
  [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 2),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 3),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 3),
  [269] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 3),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_type_import_declaration, 3),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_type_import_declaration, 3),
  [279] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_type_import_declaration, 3),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 3),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 3),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 3),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3, .fragile = true),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 3),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(145),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 1),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_or_type_name, 3),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 2),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 4),
  [367] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [371] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat1, 1),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 4),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 4),
  [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 4),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__annotation, 1),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 1),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_member_declaration, 1),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_member_declaration, 1),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body, 2),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body, 2),
  [421] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body, 2),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
  [431] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__annotation, 1),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_normal_class_declaration_repeat1, 1),
  [435] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 1),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 1),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_body_repeat1, 1),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body_declaration, 1),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body_declaration, 1),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 1),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 1),
  [449] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 1),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 1),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_superclass, 2),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_type_list, 1),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_super_interfaces, 2),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 4),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 4),
  [479] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 4),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 2),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 5),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 5),
  [503] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 5),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 3),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_requires_modifier, 1),
  [511] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_requires_modifier, 1),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 1),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_directive_repeat1, 1),
  [517] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat1, 1),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
  [523] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat1, 2),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_import_on_declaraction, 5),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_import_on_declaraction, 5),
  [545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_import_on_declaraction, 5),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_marker_annotation, 2),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 2),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameters, 3),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 2),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 2),
  [569] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(263),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statement, 1),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [577] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(265),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statements, 1),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
  [589] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_marker_annotation, 2),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(287),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(288),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(289),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_normal_class_declaration_repeat1, 2),
  [607] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 2),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body, 3),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body, 3),
  [613] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body, 3),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 2),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_body_repeat1, 2),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(290),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
  [627] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(136),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(301),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 2),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_type_list, 2),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(307),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 5),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 5),
  [643] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 5),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 5),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 5),
  [655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 5),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value, 1),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 1),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 1),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair, 3),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(329),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 1),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 1),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 1),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(331),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 1),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 1),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 1),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 1),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(333),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 1),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 1),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 1),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 1),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 1),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 1),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 1),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 1),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 1),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 2),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 6),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 6),
  [737] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 6),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 3),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(339),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [745] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(342),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [759] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_static_import_declaration, 6),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_static_import_declaration, 6),
  [765] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_static_import_declaration, 6),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
  [769] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(348),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_bound, 2),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 3),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(358),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_id, 1),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(360),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_local_variable_declaration, 2),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_list, 1),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(364),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(366),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 3),
  [807] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_block_statements_repeat1, 1),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statements, 2),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_local_variable_declaration_statement, 2),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [817] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(369),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(372),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [831] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(379),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 3),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_declaration, 3),
  [837] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 3),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(387),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(388),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(389),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(390),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(391),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(392),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 3),
  [857] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 3),
  [859] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 3),
  [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 1),
  [863] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integral_type, 1),
  [865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_type, 1),
  [867] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(409),
  [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
  [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
  [873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_argument, 1),
  [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reference_type, 1),
  [877] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(415),
  [881] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(210),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2),
  [885] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(418),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 3),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [891] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 6),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 6),
  [895] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 6),
  [897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(423),
  [899] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(425),
  [901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(425),
  [903] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(426),
  [905] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(426),
  [907] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(427),
  [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(432),
  [911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(433),
  [913] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 2),
  [915] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(435),
  [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(436),
  [919] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(438),
  [921] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
  [923] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(440),
  [925] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(441),
  [927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(442),
  [929] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
  [931] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(444),
  [933] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
  [935] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(445),
  [937] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(446),
  [939] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(447),
  [941] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(447),
  [943] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 3),
  [945] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 3),
  [947] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 4),
  [949] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 2),
  [951] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [953] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(458),
  [955] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(461),
  [957] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_annotation, 4),
  [959] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(463),
  [961] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(464),
  [963] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_bound, 3),
  [965] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(466),
  [967] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
  [969] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(467),
  [971] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(467),
  [973] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(468),
  [975] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(468),
  [977] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(469),
  [979] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(470),
  [981] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(471),
  [983] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(472),
  [985] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(469),
  [987] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(470),
  [989] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(473),
  [991] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(474),
  [993] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
  [995] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(476),
  [997] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(479),
  [999] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(480),
  [1001] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_id, 2),
  [1003] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(481),
  [1005] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims, 1),
  [1007] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(265),
  [1009] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_list, 2),
  [1011] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(484),
  [1013] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
  [1015] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_block_statements_repeat1, 2),
  [1017] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [1019] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(485),
  [1021] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(486),
  [1023] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(487),
  [1025] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 2),
  [1027] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_body, 2),
  [1029] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 2),
  [1031] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(490),
  [1033] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_member_declaration, 1),
  [1035] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_member_declaration, 1),
  [1037] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_member_declaration, 1),
  [1039] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [1041] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [1043] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [1045] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(491),
  [1047] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [1049] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [1051] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(492),
  [1053] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
  [1055] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_member_declaration, 1),
  [1057] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_member_declaration, 1),
  [1059] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_member_declaration, 1),
  [1061] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 2),
  [1063] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_body, 2),
  [1065] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 2),
  [1067] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(496),
  [1069] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(498),
  [1071] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(499),
  [1073] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(500),
  [1075] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(501),
  [1077] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(503),
  [1079] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [1081] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [1083] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [1085] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(506),
  [1087] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(507),
  [1089] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(509),
  [1091] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(510),
  [1093] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(511),
  [1095] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(515),
  [1097] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_extends_interfaces, 2),
  [1099] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 4),
  [1101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 4),
  [1103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 4),
  [1105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 4),
  [1107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_declaration, 4),
  [1109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 4),
  [1111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(520),
  [1113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(521),
  [1115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 3),
  [1117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(523),
  [1119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(524),
  [1121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reference_type, 2),
  [1123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 2),
  [1125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [1127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3),
  [1129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(526),
  [1131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 4),
  [1133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_type_list_repeat1, 3),
  [1135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [1137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 7),
  [1139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [1141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 7),
  [1143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 7),
  [1145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 7),
  [1147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(533),
  [1149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(533),
  [1151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(534),
  [1153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(534),
  [1155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(535),
  [1157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 3),
  [1159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(540),
  [1161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(542),
  [1163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 3),
  [1165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(551),
  [1167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 3),
  [1169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 3),
  [1171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 3),
  [1173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 3),
  [1175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 3),
  [1177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [1179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [1181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 3),
  [1183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 3),
  [1185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 3),
  [1187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 3),
  [1189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 3),
  [1191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 3),
  [1193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 3),
  [1195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 3),
  [1197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 3),
  [1199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 5),
  [1201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(552),
  [1203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 3),
  [1205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(554),
  [1207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_element_annotation, 5),
  [1209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_annotation, 5),
  [1211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [1213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_then_statement, 4, .fragile = true),
  [1215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(562),
  [1217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(563),
  [1219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(564),
  [1221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(567),
  [1223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(568),
  [1225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 2),
  [1227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(569),
  [1229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(570),
  [1231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declarator_list_repeat1, 2),
  [1233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [1235] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [1237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(573),
  [1239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 2),
  [1241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constant_declaration, 2),
  [1243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 2),
  [1245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(574),
  [1247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(575),
  [1249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 3),
  [1251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_body, 3),
  [1253] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 3),
  [1255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [1257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [1259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [1261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(576),
  [1263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(577),
  [1265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(578),
  [1267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(583),
  [1269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(585),
  [1271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(589),
  [1273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 2),
  [1275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(590),
  [1277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(593),
  [1279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_body, 1),
  [1281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_body, 1),
  [1283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_body, 1),
  [1285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_method_declaration, 2),
  [1287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_method_declaration, 2),
  [1289] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_method_declaration, 2),
  [1291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(594),
  [1293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(595),
  [1295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(596),
  [1297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(597),
  [1299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 3),
  [1301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_body, 3),
  [1303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 3),
  [1305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [1307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [1309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [1311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 5),
  [1313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 5),
  [1315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 5),
  [1317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(601),
  [1319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(602),
  [1321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(605),
  [1323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [1325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 4),
  [1327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 4),
  [1329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
  [1331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
  [1333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(429),
  [1335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(430),
  [1337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(428),
  [1339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(431),
  [1341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(608),
  [1343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 4),
  [1345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 2),
  [1347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(615),
  [1349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(617),
  [1351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 6),
  [1353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat3, 2),
  [1355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_bound_repeat1, 3),
  [1357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(620),
  [1359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_then_statement, 5),
  [1361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(621),
  [1363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(622),
  [1365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_then_statement_repeat1, 1),
  [1367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 3),
  [1369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(625),
  [1371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declarator_list_repeat1, 3),
  [1373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(626),
  [1375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(627),
  [1377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(630),
  [1379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 3),
  [1381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constant_declaration, 3),
  [1383] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 3),
  [1385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(631),
  [1387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(632),
  [1389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(635),
  [1391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(636),
  [1393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(641),
  [1395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(643),
  [1397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(647),
  [1399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(648),
  [1401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(649),
  [1403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(650),
  [1405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(651),
  [1407] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(652),
  [1409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(663),
  [1411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 3),
  [1413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_method_declaration, 3),
  [1415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_method_declaration, 3),
  [1417] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_method_declaration, 3),
  [1419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 6),
  [1421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 6),
  [1423] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 6),
  [1425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(674),
  [1427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(675),
  [1429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_arguments_repeat1, 3),
  [1431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 5),
  [1433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(535),
  [1435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(536),
  [1437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(537),
  [1439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(538),
  [1441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(536),
  [1443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(539),
  [1445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(677),
  [1447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 5),
  [1449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 3),
  [1451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 5),
  [1453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat3, 3),
  [1455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 2),
  [1457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_then_statement_repeat1, 2),
  [1459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 4),
  [1461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 4),
  [1463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 4),
  [1465] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 4),
  [1467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(681),
  [1469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(692),
  [1471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(695),
  [1473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(696),
  [1475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(697),
  [1477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(700),
  [1479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(701),
  [1481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 3),
  [1483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(704),
  [1485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 1),
  [1487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(707),
  [1489] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true), REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [1492] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter, 1),
  [1494] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(708),
  [1496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 1),
  [1498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(709),
  [1500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter_list, 1),
  [1502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(711),
  [1504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(712),
  [1506] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(713),
  [1508] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(714),
  [1510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(717),
  [1512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(723),
  [1514] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(724),
  [1516] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 1),
  [1518] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(727),
  [1520] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_throws, 2),
  [1522] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type_list, 1),
  [1524] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(730),
  [1526] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(732),
  [1528] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 4),
  [1530] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(737),
  [1532] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(738),
  [1534] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_value, 2),
  [1536] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(740),
  [1538] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(741),
  [1540] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(742),
  [1542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(743),
  [1544] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(744),
  [1546] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(745),
  [1548] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(746),
  [1550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(747),
  [1552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(747),
  [1554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(748),
  [1556] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(749),
  [1558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(749),
  [1560] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 5),
  [1562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 5),
  [1564] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 5),
  [1566] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(750),
  [1568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 4),
  [1570] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(753),
  [1572] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(754),
  [1574] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 2),
  [1576] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(755),
  [1578] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(760),
  [1580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(761),
  [1582] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 2),
  [1584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(764),
  [1586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(765),
  [1588] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter, 2),
  [1590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(767),
  [1592] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(769),
  [1594] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 2),
  [1596] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(772),
  [1598] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_variable, 1),
  [1600] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type, 2),
  [1602] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(773),
  [1604] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exception_type_list_repeat1, 1),
  [1606] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type_list, 2),
  [1608] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(774),
  [1610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 5),
  [1612] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(778),
  [1614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 4),
  [1616] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 6),
  [1618] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 6),
  [1620] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 6),
  [1622] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(788),
  [1624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(789),
  [1626] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(790),
  [1628] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(793),
  [1630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 3),
  [1632] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 5),
  [1634] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [1636] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter_list, 3),
  [1638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(796),
  [1640] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(797),
  [1642] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 3),
  [1644] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(798),
  [1646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(799),
  [1648] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(800),
  [1650] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(802),
  [1652] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2),
  [1654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(805),
  [1656] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 3),
  [1658] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_variable, 2),
  [1660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exception_type_list_repeat1, 2),
  [1662] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_if_clause, 5),
  [1664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(810),
  [1666] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 7),
  [1668] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 7),
  [1670] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 7),
  [1672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(811),
  [1674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(812),
  [1676] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_formal_parameters_repeat1, 3),
  [1678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter_list, 4),
  [1680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(813),
  [1682] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(814),
  [1684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(817),
  [1686] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 4),
  [1688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(818),
  [1690] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(819),
  [1692] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(822),
  [1694] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 4),
  [1696] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_arguments, 3),
  [1698] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(823),
  [1700] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3),
  [1702] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(825),
  [1704] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 4),
  [1706] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(826),
  [1708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(827),
  [1710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(828),
  [1712] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(829),
  [1714] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(830),
  [1716] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_arguments, 4),
  [1718] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 4),
  [1720] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_if_clause, 7),
  [1722] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 5),
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
