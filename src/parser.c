#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 862
#define SYMBOL_COUNT 231
#define ALIAS_COUNT 0
#define TOKEN_COUNT 105
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
  anon_sym_interface = 98,
  sym_result = 99,
  anon_sym_this = 100,
  anon_sym_DOT_DOT_DOT = 101,
  anon_sym_throws = 102,
  sym_identifier = 103,
  sym_comment = 104,
  sym_program = 105,
  sym__statement = 106,
  sym__literal = 107,
  sym_integer_literal = 108,
  sym_floating_point_literal = 109,
  sym_boolean_literal = 110,
  sym_character_literal = 111,
  sym__expression = 112,
  sym_assignment_expression = 113,
  sym_binary_expression = 114,
  sym_ternary_expression = 115,
  sym_unary_expression = 116,
  sym_update_expression = 117,
  sym_statement = 118,
  sym_if_then_statement = 119,
  sym_else_if_clause = 120,
  sym_else_clause = 121,
  sym_type_arguments = 122,
  sym_type_argument = 123,
  sym_reference_type = 124,
  sym_class_or_interface_type = 125,
  sym_type_variable = 126,
  sym_dims = 127,
  sym_primitive_type = 128,
  sym_integral_type = 129,
  sym_floating_point_type = 130,
  sym__annotation = 131,
  sym_normal_annotation = 132,
  sym_marker_annotation = 133,
  sym_single_element_annotation = 134,
  sym_element_value_pair_list = 135,
  sym_element_value_pair = 136,
  sym_element_value = 137,
  sym_element_value_array_initializer = 138,
  sym_conditional_expression = 139,
  sym_conditional_or_expression = 140,
  sym_conditional_and_expression = 141,
  sym_inclusive_or_expression = 142,
  sym_exclusive_or_expression = 143,
  sym_and_expression = 144,
  sym_relational_expression = 145,
  sym_equality_expression = 146,
  sym_shift_expression = 147,
  sym_additive_expression = 148,
  sym_multiplicative_expression = 149,
  sym__declaration = 150,
  sym_module_declaration = 151,
  sym_module_identifier = 152,
  sym_module_directive = 153,
  sym_requires_modifier = 154,
  sym_module_name = 155,
  sym_package_declaration = 156,
  sym_package_or_type_name = 157,
  sym_import_statement = 158,
  sym_single_type_import_declaration = 159,
  sym_type_import_on_declaraction = 160,
  sym_single_static_import_declaration = 161,
  sym_static_import_on_demand_declaration = 162,
  sym_class_declaration = 163,
  sym_normal_class_declaration = 164,
  sym_modifier = 165,
  sym_type_parameters = 166,
  sym_type_parameter_list = 167,
  sym_type_parameter = 168,
  sym_type_bound = 169,
  sym_superclass = 170,
  sym_super_interfaces = 171,
  sym_interface_type_list = 172,
  sym_class_body = 173,
  sym_class_body_declaration = 174,
  sym_class_member_declaration = 175,
  sym_interface_declaration = 176,
  sym_annotation_type_declaration = 177,
  sym_annotation_type_body = 178,
  sym_annotation_type_member_declaration = 179,
  sym_annotation_type_element_declaration = 180,
  sym_default_value = 181,
  sym_normal_interface_declaration = 182,
  sym_extends_interfaces = 183,
  sym_interface_body = 184,
  sym_interface_member_declaration = 185,
  sym_constant_declaration = 186,
  sym_variable_declarator_list = 187,
  sym_variable_declarator = 188,
  sym_variable_declarator_id = 189,
  sym_interface_method_declaration = 190,
  sym_method_header = 191,
  sym_method_declarator = 192,
  sym_formal_parameter_list = 193,
  sym_formal_parameter = 194,
  sym_receiver_parameter = 195,
  sym_last_formal_parameter = 196,
  sym_throws = 197,
  sym_exception_type_list = 198,
  sym_exception_type = 199,
  sym_method_body = 200,
  sym_block = 201,
  sym_block_statements = 202,
  sym_block_statement = 203,
  sym_local_variable_declaration_statement = 204,
  sym_local_variable_declaration = 205,
  aux_sym_program_repeat1 = 206,
  aux_sym_character_literal_repeat1 = 207,
  aux_sym_if_then_statement_repeat1 = 208,
  aux_sym_type_arguments_repeat1 = 209,
  aux_sym_class_or_interface_type_repeat1 = 210,
  aux_sym_class_or_interface_type_repeat2 = 211,
  aux_sym_dims_repeat1 = 212,
  aux_sym_element_value_pair_list_repeat1 = 213,
  aux_sym_element_value_array_initializer_repeat1 = 214,
  aux_sym_module_declaration_repeat1 = 215,
  aux_sym_module_identifier_repeat1 = 216,
  aux_sym_module_directive_repeat1 = 217,
  aux_sym_module_directive_repeat2 = 218,
  aux_sym_module_directive_repeat3 = 219,
  aux_sym_normal_class_declaration_repeat1 = 220,
  aux_sym_type_parameter_list_repeat1 = 221,
  aux_sym_type_bound_repeat1 = 222,
  aux_sym_interface_type_list_repeat1 = 223,
  aux_sym_class_body_repeat1 = 224,
  aux_sym_annotation_type_body_repeat1 = 225,
  aux_sym_interface_body_repeat1 = 226,
  aux_sym_variable_declarator_list_repeat1 = 227,
  aux_sym_formal_parameters_repeat1 = 228,
  aux_sym_exception_type_list_repeat1 = 229,
  aux_sym_block_statements_repeat1 = 230,
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
        ADVANCE(73);
      if (lookahead == '\\')
        ADVANCE(74);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 'a')
        ADVANCE(78);
      if (lookahead == 'b')
        ADVANCE(86);
      if (lookahead == 'c')
        ADVANCE(96);
      if (lookahead == 'd')
        ADVANCE(104);
      if (lookahead == 'f')
        ADVANCE(116);
      if (lookahead == 'i')
        ADVANCE(129);
      if (lookahead == 'l')
        ADVANCE(138);
      if (lookahead == 'n')
        ADVANCE(142);
      if (lookahead == 'p')
        ADVANCE(146);
      if (lookahead == 's')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(181);
      if (lookahead == 'v')
        ADVANCE(197);
      if (lookahead == '{')
        ADVANCE(201);
      if (lookahead == '|')
        ADVANCE(202);
      if (lookahead == '}')
        ADVANCE(205);
      if (lookahead == '~')
        ADVANCE(206);
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
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SLASH);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(87);
      if (lookahead == 'y')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(97);
      if (lookahead == 'l')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_char);
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
      if (lookahead == 's')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(105);
      if (lookahead == 'o')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(117);
      if (lookahead == 'i')
        ADVANCE(121);
      if (lookahead == 'l')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(139);
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
      if (lookahead == 'g')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_null_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(147);
      if (lookahead == 'u')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(148);
      if (lookahead == 'o')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(166);
      if (lookahead == 't')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(171);
      if (lookahead == 'r')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_strictfp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(182);
      if (lookahead == 'o')
        ADVANCE(185);
      if (lookahead == 'r')
        ADVANCE(186);
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
      if (lookahead == 's')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_to);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(187);
      if (lookahead == 'u')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_transitive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_result);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(203);
      if (lookahead == '|')
        ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 207:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(208);
      if (lookahead == '\"')
        ADVANCE(209);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '.')
        ADVANCE(214);
      if (lookahead == '/')
        ADVANCE(222);
      if (lookahead == '0')
        ADVANCE(223);
      if (lookahead == '@')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(230);
      if (lookahead == 'c')
        ADVANCE(238);
      if (lookahead == 'd')
        ADVANCE(243);
      if (lookahead == 'e')
        ADVANCE(250);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(266);
      if (lookahead == 'm')
        ADVANCE(281);
      if (lookahead == 'n')
        ADVANCE(287);
      if (lookahead == 'o')
        ADVANCE(291);
      if (lookahead == 'p')
        ADVANCE(295);
      if (lookahead == 's')
        ADVANCE(320);
      if (lookahead == 't')
        ADVANCE(332);
      if (lookahead == '{')
        ADVANCE(201);
      if (lookahead == '}')
        ADVANCE(205);
      if (lookahead == '~')
        ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(207);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(229);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 209:
      if (lookahead == '\"')
        ADVANCE(210);
      if (lookahead == '\\')
        ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 211:
      if (lookahead == '\n')
        ADVANCE(209);
      if (lookahead != 0)
        ADVANCE(209);
      END_STATE();
    case 212:
      if (lookahead == '+')
        ADVANCE(16);
      END_STATE();
    case 213:
      if (lookahead == '-')
        ADVANCE(20);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(216);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(217);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(215);
      END_STATE();
    case 216:
      if (lookahead == '_')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(215);
      END_STATE();
    case 217:
      if (lookahead == '+')
        ADVANCE(218);
      if (lookahead == '-')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(219);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(220);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(219);
      END_STATE();
    case 220:
      if (lookahead == '_')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(219);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 222:
      if (lookahead == '*')
        ADVANCE(26);
      if (lookahead == '/')
        ADVANCE(29);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(224);
      if (lookahead == 'B')
        ADVANCE(225);
      if (lookahead == 'O')
        ADVANCE(34);
      if (lookahead == 'X')
        ADVANCE(227);
      if (lookahead == '_')
        ADVANCE(228);
      if (lookahead == 'b')
        ADVANCE(225);
      if (lookahead == 'o')
        ADVANCE(34);
      if (lookahead == 'x')
        ADVANCE(227);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(217);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(229);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(217);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(215);
      END_STATE();
    case 225:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(225);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(226);
      END_STATE();
    case 227:
      if (lookahead == '.')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(51);
      END_STATE();
    case 228:
      if (lookahead == '_')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(224);
      if (lookahead == '_')
        ADVANCE(228);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(217);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(229);
      END_STATE();
    case 230:
      if (lookahead == 'b')
        ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 's')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 't')
        ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == 'r')
        ADVANCE(234);
      END_STATE();
    case 234:
      if (lookahead == 'a')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == 'c')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 't')
        ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 238:
      if (lookahead == 'l')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == 'a')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 's')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == 's')
        ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 243:
      if (lookahead == 'e')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == 'f')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 'a')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'u')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'l')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 't')
        ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 250:
      if (lookahead == 'l')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == 's')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 'e')
        ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 'i')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == 'f')
        ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 257:
      if (lookahead == 'a')
        ADVANCE(258);
      if (lookahead == 'i')
        ADVANCE(262);
      END_STATE();
    case 258:
      if (lookahead == 'l')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 's')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 'e')
        ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 262:
      if (lookahead == 'n')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'a')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 'l')
        ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 266:
      if (lookahead == 'f')
        ADVANCE(267);
      if (lookahead == 'm')
        ADVANCE(268);
      if (lookahead == 'n')
        ADVANCE(273);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 268:
      if (lookahead == 'p')
        ADVANCE(269);
      END_STATE();
    case 269:
      if (lookahead == 'o')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'r')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 't')
        ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 273:
      if (lookahead == 't')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == 'e')
        ADVANCE(275);
      END_STATE();
    case 275:
      if (lookahead == 'r')
        ADVANCE(276);
      END_STATE();
    case 276:
      if (lookahead == 'f')
        ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 'a')
        ADVANCE(278);
      END_STATE();
    case 278:
      if (lookahead == 'c')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'e')
        ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 281:
      if (lookahead == 'o')
        ADVANCE(282);
      END_STATE();
    case 282:
      if (lookahead == 'd')
        ADVANCE(283);
      END_STATE();
    case 283:
      if (lookahead == 'u')
        ADVANCE(284);
      END_STATE();
    case 284:
      if (lookahead == 'l')
        ADVANCE(285);
      END_STATE();
    case 285:
      if (lookahead == 'e')
        ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 287:
      if (lookahead == 'u')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 'l')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == 'l')
        ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 291:
      if (lookahead == 'p')
        ADVANCE(292);
      END_STATE();
    case 292:
      if (lookahead == 'e')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 'n')
        ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 295:
      if (lookahead == 'a')
        ADVANCE(296);
      if (lookahead == 'r')
        ADVANCE(302);
      if (lookahead == 'u')
        ADVANCE(315);
      END_STATE();
    case 296:
      if (lookahead == 'c')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 'k')
        ADVANCE(298);
      END_STATE();
    case 298:
      if (lookahead == 'a')
        ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead == 'g')
        ADVANCE(300);
      END_STATE();
    case 300:
      if (lookahead == 'e')
        ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 302:
      if (lookahead == 'i')
        ADVANCE(303);
      if (lookahead == 'o')
        ADVANCE(308);
      END_STATE();
    case 303:
      if (lookahead == 'v')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'a')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 't')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 'e')
        ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_private);
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
      if (lookahead == 'c')
        ADVANCE(311);
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
      if (lookahead == 'd')
        ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 315:
      if (lookahead == 'b')
        ADVANCE(316);
      END_STATE();
    case 316:
      if (lookahead == 'l')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == 'i')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == 'c')
        ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 320:
      if (lookahead == 't')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == 'a')
        ADVANCE(322);
      if (lookahead == 'r')
        ADVANCE(326);
      END_STATE();
    case 322:
      if (lookahead == 't')
        ADVANCE(323);
      END_STATE();
    case 323:
      if (lookahead == 'i')
        ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == 'c')
        ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_static);
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
      if (lookahead == 't')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == 'f')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 'p')
        ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_strictfp);
      END_STATE();
    case 332:
      if (lookahead == 'r')
        ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 'u')
        ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == 'e')
        ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(222);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == '@')
        ADVANCE(72);
      if (lookahead == 'i')
        ADVANCE(337);
      if (lookahead == '}')
        ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 340:
      if (lookahead == '\n')
        SKIP(340);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(341);
      if (lookahead == '\\')
        ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(345);
      if (lookahead != 0)
        ADVANCE(345);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(26);
      if (lookahead == '/')
        ADVANCE(29);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(343);
      if (lookahead != 0)
        ADVANCE(344);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '*')
        ADVANCE(347);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(222);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == '<')
        ADVANCE(349);
      if (lookahead == '@')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(222);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == '<')
        ADVANCE(349);
      if (lookahead == '@')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(78);
      if (lookahead == 'c')
        ADVANCE(351);
      if (lookahead == 'd')
        ADVANCE(352);
      if (lookahead == 'f')
        ADVANCE(353);
      if (lookahead == 'i')
        ADVANCE(337);
      if (lookahead == 'p')
        ADVANCE(146);
      if (lookahead == 's')
        ADVANCE(354);
      if (lookahead == 'v')
        ADVANCE(197);
      if (lookahead == '}')
        ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(222);
      if (lookahead == 's')
        ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 358:
      if (lookahead == '!')
        ADVANCE(359);
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
        ADVANCE(72);
      if (lookahead == '[')
        ADVANCE(73);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 'a')
        ADVANCE(230);
      if (lookahead == 'c')
        ADVANCE(238);
      if (lookahead == 'd')
        ADVANCE(243);
      if (lookahead == 'e')
        ADVANCE(360);
      if (lookahead == 'f')
        ADVANCE(372);
      if (lookahead == 'i')
        ADVANCE(373);
      if (lookahead == 'm')
        ADVANCE(281);
      if (lookahead == 'o')
        ADVANCE(383);
      if (lookahead == 'p')
        ADVANCE(388);
      if (lookahead == 'r')
        ADVANCE(396);
      if (lookahead == 's')
        ADVANCE(320);
      if (lookahead == 't')
        ADVANCE(404);
      if (lookahead == 'u')
        ADVANCE(412);
      if (lookahead == 'v')
        ADVANCE(416);
      if (lookahead == 'w')
        ADVANCE(420);
      if (lookahead == '{')
        ADVANCE(201);
      if (lookahead == '|')
        ADVANCE(202);
      if (lookahead == '}')
        ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(358);
      END_STATE();
    case 359:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 360:
      if (lookahead == 'x')
        ADVANCE(361);
      END_STATE();
    case 361:
      if (lookahead == 'p')
        ADVANCE(362);
      if (lookahead == 't')
        ADVANCE(367);
      END_STATE();
    case 362:
      if (lookahead == 'o')
        ADVANCE(363);
      END_STATE();
    case 363:
      if (lookahead == 'r')
        ADVANCE(364);
      END_STATE();
    case 364:
      if (lookahead == 't')
        ADVANCE(365);
      END_STATE();
    case 365:
      if (lookahead == 's')
        ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_exports);
      END_STATE();
    case 367:
      if (lookahead == 'e')
        ADVANCE(368);
      END_STATE();
    case 368:
      if (lookahead == 'n')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead == 'd')
        ADVANCE(370);
      END_STATE();
    case 370:
      if (lookahead == 's')
        ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 372:
      if (lookahead == 'i')
        ADVANCE(262);
      END_STATE();
    case 373:
      if (lookahead == 'm')
        ADVANCE(374);
      if (lookahead == 'n')
        ADVANCE(273);
      END_STATE();
    case 374:
      if (lookahead == 'p')
        ADVANCE(375);
      END_STATE();
    case 375:
      if (lookahead == 'l')
        ADVANCE(376);
      END_STATE();
    case 376:
      if (lookahead == 'e')
        ADVANCE(377);
      END_STATE();
    case 377:
      if (lookahead == 'm')
        ADVANCE(378);
      END_STATE();
    case 378:
      if (lookahead == 'e')
        ADVANCE(379);
      END_STATE();
    case 379:
      if (lookahead == 'n')
        ADVANCE(380);
      END_STATE();
    case 380:
      if (lookahead == 't')
        ADVANCE(381);
      END_STATE();
    case 381:
      if (lookahead == 's')
        ADVANCE(382);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 383:
      if (lookahead == 'p')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == 'e')
        ADVANCE(385);
      END_STATE();
    case 385:
      if (lookahead == 'n')
        ADVANCE(386);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_open);
      if (lookahead == 's')
        ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_opens);
      END_STATE();
    case 388:
      if (lookahead == 'a')
        ADVANCE(296);
      if (lookahead == 'r')
        ADVANCE(389);
      if (lookahead == 'u')
        ADVANCE(315);
      END_STATE();
    case 389:
      if (lookahead == 'i')
        ADVANCE(303);
      if (lookahead == 'o')
        ADVANCE(390);
      END_STATE();
    case 390:
      if (lookahead == 't')
        ADVANCE(309);
      if (lookahead == 'v')
        ADVANCE(391);
      END_STATE();
    case 391:
      if (lookahead == 'i')
        ADVANCE(392);
      END_STATE();
    case 392:
      if (lookahead == 'd')
        ADVANCE(393);
      END_STATE();
    case 393:
      if (lookahead == 'e')
        ADVANCE(394);
      END_STATE();
    case 394:
      if (lookahead == 's')
        ADVANCE(395);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_provides);
      END_STATE();
    case 396:
      if (lookahead == 'e')
        ADVANCE(397);
      END_STATE();
    case 397:
      if (lookahead == 'q')
        ADVANCE(398);
      END_STATE();
    case 398:
      if (lookahead == 'u')
        ADVANCE(399);
      END_STATE();
    case 399:
      if (lookahead == 'i')
        ADVANCE(400);
      END_STATE();
    case 400:
      if (lookahead == 'r')
        ADVANCE(401);
      END_STATE();
    case 401:
      if (lookahead == 'e')
        ADVANCE(402);
      END_STATE();
    case 402:
      if (lookahead == 's')
        ADVANCE(403);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 404:
      if (lookahead == 'h')
        ADVANCE(405);
      END_STATE();
    case 405:
      if (lookahead == 'i')
        ADVANCE(406);
      if (lookahead == 'r')
        ADVANCE(408);
      END_STATE();
    case 406:
      if (lookahead == 's')
        ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 408:
      if (lookahead == 'o')
        ADVANCE(409);
      END_STATE();
    case 409:
      if (lookahead == 'w')
        ADVANCE(410);
      END_STATE();
    case 410:
      if (lookahead == 's')
        ADVANCE(411);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_throws);
      END_STATE();
    case 412:
      if (lookahead == 's')
        ADVANCE(413);
      END_STATE();
    case 413:
      if (lookahead == 'e')
        ADVANCE(414);
      END_STATE();
    case 414:
      if (lookahead == 's')
        ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 416:
      if (lookahead == 'o')
        ADVANCE(417);
      END_STATE();
    case 417:
      if (lookahead == 'i')
        ADVANCE(418);
      END_STATE();
    case 418:
      if (lookahead == 'd')
        ADVANCE(419);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_result);
      END_STATE();
    case 420:
      if (lookahead == 'i')
        ADVANCE(421);
      END_STATE();
    case 421:
      if (lookahead == 't')
        ADVANCE(422);
      END_STATE();
    case 422:
      if (lookahead == 'h')
        ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 424:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(208);
      if (lookahead == '\"')
        ADVANCE(209);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '.')
        ADVANCE(214);
      if (lookahead == '/')
        ADVANCE(222);
      if (lookahead == '0')
        ADVANCE(223);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == '@')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(230);
      if (lookahead == 'c')
        ADVANCE(238);
      if (lookahead == 'd')
        ADVANCE(243);
      if (lookahead == 'e')
        ADVANCE(425);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(266);
      if (lookahead == 'm')
        ADVANCE(281);
      if (lookahead == 'n')
        ADVANCE(287);
      if (lookahead == 'o')
        ADVANCE(291);
      if (lookahead == 'p')
        ADVANCE(295);
      if (lookahead == 's')
        ADVANCE(320);
      if (lookahead == 't')
        ADVANCE(332);
      if (lookahead == '{')
        ADVANCE(201);
      if (lookahead == '}')
        ADVANCE(205);
      if (lookahead == '~')
        ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(424);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(229);
      END_STATE();
    case 425:
      if (lookahead == 'l')
        ADVANCE(426);
      END_STATE();
    case 426:
      if (lookahead == 's')
        ADVANCE(427);
      END_STATE();
    case 427:
      if (lookahead == 'e')
        ADVANCE(428);
      END_STATE();
    case 428:
      if (lookahead == ' ')
        ADVANCE(254);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\"')
        ADVANCE(209);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(214);
      if (lookahead == '/')
        ADVANCE(222);
      if (lookahead == '0')
        ADVANCE(430);
      if (lookahead == 'f')
        ADVANCE(437);
      if (lookahead == 'n')
        ADVANCE(142);
      if (lookahead == 't')
        ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(429);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(436);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(224);
      if (lookahead == 'B')
        ADVANCE(431);
      if (lookahead == 'O')
        ADVANCE(32);
      if (lookahead == 'X')
        ADVANCE(37);
      if (lookahead == '_')
        ADVANCE(228);
      if (lookahead == 'b')
        ADVANCE(431);
      if (lookahead == 'o')
        ADVANCE(32);
      if (lookahead == 'x')
        ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(433);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(436);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(432);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(225);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(432);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+')
        ADVANCE(218);
      if (lookahead == '-')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(220);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(224);
      if (lookahead == '_')
        ADVANCE(228);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(433);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(436);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(222);
      if (lookahead == '@')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(78);
      if (lookahead == 'c')
        ADVANCE(351);
      if (lookahead == 'd')
        ADVANCE(352);
      if (lookahead == 'f')
        ADVANCE(353);
      if (lookahead == 'i')
        ADVANCE(337);
      if (lookahead == 'p')
        ADVANCE(146);
      if (lookahead == 's')
        ADVANCE(354);
      if (lookahead == '}')
        ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(222);
      if (lookahead == 's')
        ADVANCE(356);
      if (lookahead == 't')
        ADVANCE(442);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 444:
      if (lookahead == '&')
        ADVANCE(445);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(222);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == '<')
        ADVANCE(349);
      if (lookahead == '=')
        ADVANCE(446);
      if (lookahead == '>')
        ADVANCE(447);
      if (lookahead == '@')
        ADVANCE(72);
      if (lookahead == '[')
        ADVANCE(73);
      if (lookahead == 'd')
        ADVANCE(243);
      if (lookahead == 'e')
        ADVANCE(448);
      if (lookahead == 'i')
        ADVANCE(450);
      if (lookahead == 't')
        ADVANCE(451);
      if (lookahead == '{')
        ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 448:
      if (lookahead == 'x')
        ADVANCE(449);
      END_STATE();
    case 449:
      if (lookahead == 't')
        ADVANCE(367);
      END_STATE();
    case 450:
      if (lookahead == 'm')
        ADVANCE(374);
      END_STATE();
    case 451:
      if (lookahead == 'h')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'r')
        ADVANCE(408);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(222);
      if (lookahead == '@')
        ADVANCE(72);
      if (lookahead == '[')
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(222);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == 't')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(222);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == '<')
        ADVANCE(349);
      if (lookahead == '@')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(78);
      if (lookahead == 'c')
        ADVANCE(351);
      if (lookahead == 'd')
        ADVANCE(352);
      if (lookahead == 'f')
        ADVANCE(353);
      if (lookahead == 'i')
        ADVANCE(337);
      if (lookahead == 'p')
        ADVANCE(146);
      if (lookahead == 's')
        ADVANCE(354);
      if (lookahead == 'v')
        ADVANCE(197);
      if (lookahead == '{')
        ADVANCE(201);
      if (lookahead == '}')
        ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(222);
      if (lookahead == '@')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(78);
      if (lookahead == 'c')
        ADVANCE(351);
      if (lookahead == 'd')
        ADVANCE(352);
      if (lookahead == 'f')
        ADVANCE(353);
      if (lookahead == 'p')
        ADVANCE(146);
      if (lookahead == 's')
        ADVANCE(354);
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(222);
      if (lookahead == '@')
        ADVANCE(72);
      if (lookahead == 'b')
        ADVANCE(86);
      if (lookahead == 'c')
        ADVANCE(459);
      if (lookahead == 'd')
        ADVANCE(460);
      if (lookahead == 'f')
        ADVANCE(461);
      if (lookahead == 'i')
        ADVANCE(462);
      if (lookahead == 'l')
        ADVANCE(138);
      if (lookahead == 's')
        ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 466:
      if (lookahead == '!')
        ADVANCE(359);
      if (lookahead == '%')
        ADVANCE(467);
      if (lookahead == '&')
        ADVANCE(468);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(347);
      if (lookahead == '+')
        ADVANCE(469);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(470);
      if (lookahead == '/')
        ADVANCE(471);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == '<')
        ADVANCE(472);
      if (lookahead == '=')
        ADVANCE(474);
      if (lookahead == '>')
        ADVANCE(475);
      if (lookahead == '?')
        ADVANCE(71);
      if (lookahead == '^')
        ADVANCE(478);
      if (lookahead == '|')
        ADVANCE(479);
      if (lookahead == '}')
        ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 468:
      if (lookahead == '&')
        ADVANCE(8);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(26);
      if (lookahead == '/')
        ADVANCE(29);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(473);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 474:
      if (lookahead == '=')
        ADVANCE(64);
      END_STATE();
    case 475:
      if (lookahead == '>')
        ADVANCE(476);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>')
        ADVANCE(477);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(204);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(222);
      if (lookahead == '@')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(78);
      if (lookahead == 'd')
        ADVANCE(352);
      if (lookahead == 'f')
        ADVANCE(353);
      if (lookahead == 'p')
        ADVANCE(146);
      if (lookahead == 's')
        ADVANCE(354);
      if (lookahead == 't')
        ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(222);
      if (lookahead == '@')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(78);
      if (lookahead == 'd')
        ADVANCE(352);
      if (lookahead == 'f')
        ADVANCE(353);
      if (lookahead == 'p')
        ADVANCE(146);
      if (lookahead == 's')
        ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(222);
      if (lookahead == '@')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(483);
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
  [1] = {.lex_state = 207},
  [2] = {.lex_state = 336},
  [3] = {.lex_state = 336},
  [4] = {.lex_state = 336},
  [5] = {.lex_state = 340},
  [6] = {.lex_state = 336},
  [7] = {.lex_state = 207},
  [8] = {.lex_state = 207},
  [9] = {.lex_state = 336},
  [10] = {.lex_state = 207},
  [11] = {.lex_state = 346},
  [12] = {.lex_state = 350},
  [13] = {.lex_state = 346},
  [14] = {.lex_state = 355},
  [15] = {.lex_state = 346},
  [16] = {.lex_state = 346},
  [17] = {.lex_state = 207},
  [18] = {.lex_state = 207},
  [19] = {.lex_state = 336},
  [20] = {.lex_state = 358},
  [21] = {.lex_state = 358},
  [22] = {.lex_state = 358},
  [23] = {.lex_state = 207},
  [24] = {.lex_state = 358},
  [25] = {.lex_state = 207},
  [26] = {.lex_state = 207},
  [27] = {.lex_state = 207},
  [28] = {.lex_state = 424},
  [29] = {.lex_state = 350},
  [30] = {.lex_state = 424},
  [31] = {.lex_state = 207},
  [32] = {.lex_state = 207},
  [33] = {.lex_state = 207},
  [34] = {.lex_state = 336},
  [35] = {.lex_state = 340},
  [36] = {.lex_state = 340},
  [37] = {.lex_state = 358},
  [38] = {.lex_state = 358},
  [39] = {.lex_state = 346},
  [40] = {.lex_state = 358},
  [41] = {.lex_state = 358},
  [42] = {.lex_state = 346},
  [43] = {.lex_state = 358},
  [44] = {.lex_state = 207},
  [45] = {.lex_state = 336},
  [46] = {.lex_state = 346},
  [47] = {.lex_state = 336},
  [48] = {.lex_state = 358},
  [49] = {.lex_state = 358},
  [50] = {.lex_state = 207},
  [51] = {.lex_state = 207},
  [52] = {.lex_state = 207},
  [53] = {.lex_state = 207},
  [54] = {.lex_state = 207},
  [55] = {.lex_state = 207},
  [56] = {.lex_state = 207},
  [57] = {.lex_state = 207},
  [58] = {.lex_state = 358},
  [59] = {.lex_state = 207},
  [60] = {.lex_state = 346},
  [61] = {.lex_state = 207},
  [62] = {.lex_state = 346},
  [63] = {.lex_state = 358},
  [64] = {.lex_state = 336},
  [65] = {.lex_state = 346},
  [66] = {.lex_state = 346},
  [67] = {.lex_state = 350},
  [68] = {.lex_state = 336},
  [69] = {.lex_state = 340},
  [70] = {.lex_state = 207},
  [71] = {.lex_state = 429},
  [72] = {.lex_state = 346},
  [73] = {.lex_state = 207},
  [74] = {.lex_state = 346},
  [75] = {.lex_state = 358},
  [76] = {.lex_state = 358},
  [77] = {.lex_state = 207},
  [78] = {.lex_state = 336},
  [79] = {.lex_state = 336},
  [80] = {.lex_state = 207},
  [81] = {.lex_state = 346},
  [82] = {.lex_state = 346},
  [83] = {.lex_state = 358},
  [84] = {.lex_state = 346},
  [85] = {.lex_state = 346},
  [86] = {.lex_state = 358},
  [87] = {.lex_state = 358},
  [88] = {.lex_state = 207},
  [89] = {.lex_state = 424},
  [90] = {.lex_state = 350},
  [91] = {.lex_state = 346},
  [92] = {.lex_state = 358},
  [93] = {.lex_state = 207},
  [94] = {.lex_state = 424},
  [95] = {.lex_state = 358},
  [96] = {.lex_state = 358},
  [97] = {.lex_state = 358},
  [98] = {.lex_state = 358},
  [99] = {.lex_state = 358},
  [100] = {.lex_state = 358},
  [101] = {.lex_state = 207},
  [102] = {.lex_state = 207},
  [103] = {.lex_state = 358},
  [104] = {.lex_state = 346},
  [105] = {.lex_state = 336},
  [106] = {.lex_state = 346},
  [107] = {.lex_state = 358},
  [108] = {.lex_state = 358},
  [109] = {.lex_state = 440},
  [110] = {.lex_state = 424},
  [111] = {.lex_state = 358},
  [112] = {.lex_state = 358},
  [113] = {.lex_state = 207},
  [114] = {.lex_state = 207},
  [115] = {.lex_state = 207},
  [116] = {.lex_state = 358},
  [117] = {.lex_state = 358},
  [118] = {.lex_state = 358},
  [119] = {.lex_state = 346},
  [120] = {.lex_state = 207},
  [121] = {.lex_state = 441},
  [122] = {.lex_state = 346},
  [123] = {.lex_state = 346},
  [124] = {.lex_state = 346},
  [125] = {.lex_state = 358},
  [126] = {.lex_state = 358},
  [127] = {.lex_state = 207},
  [128] = {.lex_state = 346},
  [129] = {.lex_state = 336},
  [130] = {.lex_state = 346},
  [131] = {.lex_state = 444},
  [132] = {.lex_state = 453},
  [133] = {.lex_state = 346},
  [134] = {.lex_state = 444},
  [135] = {.lex_state = 444},
  [136] = {.lex_state = 346},
  [137] = {.lex_state = 358},
  [138] = {.lex_state = 207},
  [139] = {.lex_state = 424},
  [140] = {.lex_state = 358},
  [141] = {.lex_state = 358},
  [142] = {.lex_state = 358},
  [143] = {.lex_state = 444},
  [144] = {.lex_state = 358},
  [145] = {.lex_state = 346},
  [146] = {.lex_state = 207},
  [147] = {.lex_state = 207},
  [148] = {.lex_state = 358},
  [149] = {.lex_state = 207},
  [150] = {.lex_state = 424},
  [151] = {.lex_state = 350},
  [152] = {.lex_state = 424},
  [153] = {.lex_state = 336},
  [154] = {.lex_state = 346},
  [155] = {.lex_state = 346},
  [156] = {.lex_state = 346},
  [157] = {.lex_state = 358},
  [158] = {.lex_state = 350},
  [159] = {.lex_state = 350},
  [160] = {.lex_state = 350},
  [161] = {.lex_state = 350},
  [162] = {.lex_state = 350},
  [163] = {.lex_state = 336},
  [164] = {.lex_state = 336},
  [165] = {.lex_state = 358},
  [166] = {.lex_state = 358},
  [167] = {.lex_state = 350},
  [168] = {.lex_state = 350},
  [169] = {.lex_state = 207},
  [170] = {.lex_state = 207},
  [171] = {.lex_state = 424},
  [172] = {.lex_state = 207},
  [173] = {.lex_state = 207},
  [174] = {.lex_state = 207},
  [175] = {.lex_state = 207},
  [176] = {.lex_state = 207},
  [177] = {.lex_state = 207},
  [178] = {.lex_state = 207},
  [179] = {.lex_state = 207},
  [180] = {.lex_state = 207},
  [181] = {.lex_state = 336},
  [182] = {.lex_state = 207},
  [183] = {.lex_state = 358},
  [184] = {.lex_state = 358},
  [185] = {.lex_state = 424},
  [186] = {.lex_state = 336},
  [187] = {.lex_state = 440},
  [188] = {.lex_state = 346},
  [189] = {.lex_state = 346},
  [190] = {.lex_state = 358},
  [191] = {.lex_state = 440},
  [192] = {.lex_state = 440},
  [193] = {.lex_state = 440},
  [194] = {.lex_state = 440},
  [195] = {.lex_state = 440},
  [196] = {.lex_state = 440},
  [197] = {.lex_state = 336},
  [198] = {.lex_state = 440},
  [199] = {.lex_state = 440},
  [200] = {.lex_state = 207},
  [201] = {.lex_state = 358},
  [202] = {.lex_state = 358},
  [203] = {.lex_state = 346},
  [204] = {.lex_state = 207},
  [205] = {.lex_state = 207},
  [206] = {.lex_state = 358},
  [207] = {.lex_state = 358},
  [208] = {.lex_state = 441},
  [209] = {.lex_state = 336},
  [210] = {.lex_state = 441},
  [211] = {.lex_state = 336},
  [212] = {.lex_state = 441},
  [213] = {.lex_state = 454},
  [214] = {.lex_state = 454},
  [215] = {.lex_state = 336},
  [216] = {.lex_state = 358},
  [217] = {.lex_state = 358},
  [218] = {.lex_state = 336},
  [219] = {.lex_state = 336},
  [220] = {.lex_state = 207},
  [221] = {.lex_state = 346},
  [222] = {.lex_state = 346},
  [223] = {.lex_state = 346},
  [224] = {.lex_state = 444},
  [225] = {.lex_state = 358},
  [226] = {.lex_state = 346},
  [227] = {.lex_state = 444},
  [228] = {.lex_state = 444},
  [229] = {.lex_state = 346},
  [230] = {.lex_state = 336},
  [231] = {.lex_state = 456},
  [232] = {.lex_state = 346},
  [233] = {.lex_state = 457},
  [234] = {.lex_state = 207},
  [235] = {.lex_state = 207},
  [236] = {.lex_state = 457},
  [237] = {.lex_state = 457},
  [238] = {.lex_state = 207},
  [239] = {.lex_state = 207},
  [240] = {.lex_state = 336},
  [241] = {.lex_state = 207},
  [242] = {.lex_state = 424},
  [243] = {.lex_state = 358},
  [244] = {.lex_state = 458},
  [245] = {.lex_state = 346},
  [246] = {.lex_state = 444},
  [247] = {.lex_state = 444},
  [248] = {.lex_state = 444},
  [249] = {.lex_state = 346},
  [250] = {.lex_state = 207},
  [251] = {.lex_state = 207},
  [252] = {.lex_state = 424},
  [253] = {.lex_state = 346},
  [254] = {.lex_state = 350},
  [255] = {.lex_state = 350},
  [256] = {.lex_state = 358},
  [257] = {.lex_state = 358},
  [258] = {.lex_state = 336},
  [259] = {.lex_state = 358},
  [260] = {.lex_state = 358},
  [261] = {.lex_state = 358},
  [262] = {.lex_state = 358},
  [263] = {.lex_state = 444},
  [264] = {.lex_state = 346},
  [265] = {.lex_state = 350},
  [266] = {.lex_state = 350},
  [267] = {.lex_state = 350},
  [268] = {.lex_state = 346},
  [269] = {.lex_state = 336},
  [270] = {.lex_state = 336},
  [271] = {.lex_state = 350},
  [272] = {.lex_state = 350},
  [273] = {.lex_state = 336},
  [274] = {.lex_state = 346},
  [275] = {.lex_state = 346},
  [276] = {.lex_state = 336},
  [277] = {.lex_state = 358},
  [278] = {.lex_state = 424},
  [279] = {.lex_state = 350},
  [280] = {.lex_state = 424},
  [281] = {.lex_state = 358},
  [282] = {.lex_state = 358},
  [283] = {.lex_state = 358},
  [284] = {.lex_state = 358},
  [285] = {.lex_state = 358},
  [286] = {.lex_state = 358},
  [287] = {.lex_state = 358},
  [288] = {.lex_state = 358},
  [289] = {.lex_state = 207},
  [290] = {.lex_state = 424},
  [291] = {.lex_state = 358},
  [292] = {.lex_state = 207},
  [293] = {.lex_state = 346},
  [294] = {.lex_state = 440},
  [295] = {.lex_state = 440},
  [296] = {.lex_state = 358},
  [297] = {.lex_state = 358},
  [298] = {.lex_state = 207},
  [299] = {.lex_state = 440},
  [300] = {.lex_state = 336},
  [301] = {.lex_state = 346},
  [302] = {.lex_state = 346},
  [303] = {.lex_state = 358},
  [304] = {.lex_state = 440},
  [305] = {.lex_state = 336},
  [306] = {.lex_state = 424},
  [307] = {.lex_state = 440},
  [308] = {.lex_state = 207},
  [309] = {.lex_state = 207},
  [310] = {.lex_state = 336},
  [311] = {.lex_state = 466},
  [312] = {.lex_state = 207},
  [313] = {.lex_state = 358},
  [314] = {.lex_state = 358},
  [315] = {.lex_state = 358},
  [316] = {.lex_state = 358},
  [317] = {.lex_state = 358},
  [318] = {.lex_state = 358},
  [319] = {.lex_state = 358},
  [320] = {.lex_state = 358},
  [321] = {.lex_state = 466},
  [322] = {.lex_state = 466},
  [323] = {.lex_state = 358},
  [324] = {.lex_state = 207},
  [325] = {.lex_state = 346},
  [326] = {.lex_state = 207},
  [327] = {.lex_state = 358},
  [328] = {.lex_state = 346},
  [329] = {.lex_state = 441},
  [330] = {.lex_state = 336},
  [331] = {.lex_state = 346},
  [332] = {.lex_state = 346},
  [333] = {.lex_state = 346},
  [334] = {.lex_state = 336},
  [335] = {.lex_state = 336},
  [336] = {.lex_state = 346},
  [337] = {.lex_state = 207},
  [338] = {.lex_state = 207},
  [339] = {.lex_state = 429},
  [340] = {.lex_state = 346},
  [341] = {.lex_state = 444},
  [342] = {.lex_state = 444},
  [343] = {.lex_state = 346},
  [344] = {.lex_state = 444},
  [345] = {.lex_state = 207},
  [346] = {.lex_state = 457},
  [347] = {.lex_state = 457},
  [348] = {.lex_state = 336},
  [349] = {.lex_state = 456},
  [350] = {.lex_state = 207},
  [351] = {.lex_state = 207},
  [352] = {.lex_state = 207},
  [353] = {.lex_state = 358},
  [354] = {.lex_state = 358},
  [355] = {.lex_state = 358},
  [356] = {.lex_state = 346},
  [357] = {.lex_state = 444},
  [358] = {.lex_state = 444},
  [359] = {.lex_state = 444},
  [360] = {.lex_state = 358},
  [361] = {.lex_state = 458},
  [362] = {.lex_state = 458},
  [363] = {.lex_state = 458},
  [364] = {.lex_state = 444},
  [365] = {.lex_state = 346},
  [366] = {.lex_state = 444},
  [367] = {.lex_state = 346},
  [368] = {.lex_state = 444},
  [369] = {.lex_state = 207},
  [370] = {.lex_state = 346},
  [371] = {.lex_state = 424},
  [372] = {.lex_state = 207},
  [373] = {.lex_state = 429},
  [374] = {.lex_state = 346},
  [375] = {.lex_state = 358},
  [376] = {.lex_state = 358},
  [377] = {.lex_state = 358},
  [378] = {.lex_state = 207},
  [379] = {.lex_state = 350},
  [380] = {.lex_state = 350},
  [381] = {.lex_state = 358},
  [382] = {.lex_state = 207},
  [383] = {.lex_state = 350},
  [384] = {.lex_state = 480},
  [385] = {.lex_state = 346},
  [386] = {.lex_state = 358},
  [387] = {.lex_state = 444},
  [388] = {.lex_state = 358},
  [389] = {.lex_state = 358},
  [390] = {.lex_state = 358},
  [391] = {.lex_state = 346},
  [392] = {.lex_state = 336},
  [393] = {.lex_state = 346},
  [394] = {.lex_state = 346},
  [395] = {.lex_state = 358},
  [396] = {.lex_state = 358},
  [397] = {.lex_state = 350},
  [398] = {.lex_state = 350},
  [399] = {.lex_state = 207},
  [400] = {.lex_state = 358},
  [401] = {.lex_state = 207},
  [402] = {.lex_state = 424},
  [403] = {.lex_state = 207},
  [404] = {.lex_state = 429},
  [405] = {.lex_state = 346},
  [406] = {.lex_state = 358},
  [407] = {.lex_state = 358},
  [408] = {.lex_state = 358},
  [409] = {.lex_state = 207},
  [410] = {.lex_state = 440},
  [411] = {.lex_state = 350},
  [412] = {.lex_state = 358},
  [413] = {.lex_state = 207},
  [414] = {.lex_state = 440},
  [415] = {.lex_state = 358},
  [416] = {.lex_state = 346},
  [417] = {.lex_state = 358},
  [418] = {.lex_state = 358},
  [419] = {.lex_state = 207},
  [420] = {.lex_state = 440},
  [421] = {.lex_state = 207},
  [422] = {.lex_state = 207},
  [423] = {.lex_state = 358},
  [424] = {.lex_state = 207},
  [425] = {.lex_state = 336},
  [426] = {.lex_state = 207},
  [427] = {.lex_state = 207},
  [428] = {.lex_state = 358},
  [429] = {.lex_state = 358},
  [430] = {.lex_state = 358},
  [431] = {.lex_state = 358},
  [432] = {.lex_state = 358},
  [433] = {.lex_state = 358},
  [434] = {.lex_state = 358},
  [435] = {.lex_state = 466},
  [436] = {.lex_state = 466},
  [437] = {.lex_state = 207},
  [438] = {.lex_state = 207},
  [439] = {.lex_state = 207},
  [440] = {.lex_state = 207},
  [441] = {.lex_state = 207},
  [442] = {.lex_state = 207},
  [443] = {.lex_state = 207},
  [444] = {.lex_state = 207},
  [445] = {.lex_state = 207},
  [446] = {.lex_state = 207},
  [447] = {.lex_state = 207},
  [448] = {.lex_state = 336},
  [449] = {.lex_state = 358},
  [450] = {.lex_state = 336},
  [451] = {.lex_state = 454},
  [452] = {.lex_state = 336},
  [453] = {.lex_state = 336},
  [454] = {.lex_state = 346},
  [455] = {.lex_state = 336},
  [456] = {.lex_state = 346},
  [457] = {.lex_state = 358},
  [458] = {.lex_state = 207},
  [459] = {.lex_state = 207},
  [460] = {.lex_state = 346},
  [461] = {.lex_state = 346},
  [462] = {.lex_state = 444},
  [463] = {.lex_state = 444},
  [464] = {.lex_state = 207},
  [465] = {.lex_state = 207},
  [466] = {.lex_state = 358},
  [467] = {.lex_state = 429},
  [468] = {.lex_state = 346},
  [469] = {.lex_state = 207},
  [470] = {.lex_state = 458},
  [471] = {.lex_state = 458},
  [472] = {.lex_state = 444},
  [473] = {.lex_state = 458},
  [474] = {.lex_state = 444},
  [475] = {.lex_state = 444},
  [476] = {.lex_state = 358},
  [477] = {.lex_state = 458},
  [478] = {.lex_state = 444},
  [479] = {.lex_state = 444},
  [480] = {.lex_state = 346},
  [481] = {.lex_state = 444},
  [482] = {.lex_state = 207},
  [483] = {.lex_state = 440},
  [484] = {.lex_state = 350},
  [485] = {.lex_state = 350},
  [486] = {.lex_state = 358},
  [487] = {.lex_state = 207},
  [488] = {.lex_state = 207},
  [489] = {.lex_state = 350},
  [490] = {.lex_state = 350},
  [491] = {.lex_state = 358},
  [492] = {.lex_state = 358},
  [493] = {.lex_state = 207},
  [494] = {.lex_state = 350},
  [495] = {.lex_state = 350},
  [496] = {.lex_state = 350},
  [497] = {.lex_state = 207},
  [498] = {.lex_state = 350},
  [499] = {.lex_state = 358},
  [500] = {.lex_state = 346},
  [501] = {.lex_state = 482},
  [502] = {.lex_state = 207},
  [503] = {.lex_state = 346},
  [504] = {.lex_state = 358},
  [505] = {.lex_state = 480},
  [506] = {.lex_state = 480},
  [507] = {.lex_state = 482},
  [508] = {.lex_state = 207},
  [509] = {.lex_state = 207},
  [510] = {.lex_state = 207},
  [511] = {.lex_state = 207},
  [512] = {.lex_state = 207},
  [513] = {.lex_state = 483},
  [514] = {.lex_state = 482},
  [515] = {.lex_state = 346},
  [516] = {.lex_state = 346},
  [517] = {.lex_state = 358},
  [518] = {.lex_state = 358},
  [519] = {.lex_state = 346},
  [520] = {.lex_state = 444},
  [521] = {.lex_state = 358},
  [522] = {.lex_state = 358},
  [523] = {.lex_state = 358},
  [524] = {.lex_state = 336},
  [525] = {.lex_state = 207},
  [526] = {.lex_state = 358},
  [527] = {.lex_state = 358},
  [528] = {.lex_state = 358},
  [529] = {.lex_state = 207},
  [530] = {.lex_state = 424},
  [531] = {.lex_state = 440},
  [532] = {.lex_state = 440},
  [533] = {.lex_state = 440},
  [534] = {.lex_state = 358},
  [535] = {.lex_state = 207},
  [536] = {.lex_state = 207},
  [537] = {.lex_state = 440},
  [538] = {.lex_state = 440},
  [539] = {.lex_state = 358},
  [540] = {.lex_state = 358},
  [541] = {.lex_state = 207},
  [542] = {.lex_state = 440},
  [543] = {.lex_state = 440},
  [544] = {.lex_state = 350},
  [545] = {.lex_state = 207},
  [546] = {.lex_state = 440},
  [547] = {.lex_state = 440},
  [548] = {.lex_state = 207},
  [549] = {.lex_state = 350},
  [550] = {.lex_state = 336},
  [551] = {.lex_state = 207},
  [552] = {.lex_state = 358},
  [553] = {.lex_state = 358},
  [554] = {.lex_state = 358},
  [555] = {.lex_state = 207},
  [556] = {.lex_state = 207},
  [557] = {.lex_state = 207},
  [558] = {.lex_state = 207},
  [559] = {.lex_state = 207},
  [560] = {.lex_state = 207},
  [561] = {.lex_state = 207},
  [562] = {.lex_state = 207},
  [563] = {.lex_state = 207},
  [564] = {.lex_state = 358},
  [565] = {.lex_state = 336},
  [566] = {.lex_state = 207},
  [567] = {.lex_state = 207},
  [568] = {.lex_state = 207},
  [569] = {.lex_state = 207},
  [570] = {.lex_state = 207},
  [571] = {.lex_state = 207},
  [572] = {.lex_state = 207},
  [573] = {.lex_state = 207},
  [574] = {.lex_state = 207},
  [575] = {.lex_state = 207},
  [576] = {.lex_state = 207},
  [577] = {.lex_state = 207},
  [578] = {.lex_state = 358},
  [579] = {.lex_state = 358},
  [580] = {.lex_state = 358},
  [581] = {.lex_state = 358},
  [582] = {.lex_state = 358},
  [583] = {.lex_state = 358},
  [584] = {.lex_state = 358},
  [585] = {.lex_state = 466},
  [586] = {.lex_state = 466},
  [587] = {.lex_state = 466},
  [588] = {.lex_state = 358},
  [589] = {.lex_state = 336},
  [590] = {.lex_state = 336},
  [591] = {.lex_state = 346},
  [592] = {.lex_state = 336},
  [593] = {.lex_state = 346},
  [594] = {.lex_state = 346},
  [595] = {.lex_state = 444},
  [596] = {.lex_state = 346},
  [597] = {.lex_state = 207},
  [598] = {.lex_state = 207},
  [599] = {.lex_state = 207},
  [600] = {.lex_state = 207},
  [601] = {.lex_state = 207},
  [602] = {.lex_state = 207},
  [603] = {.lex_state = 207},
  [604] = {.lex_state = 207},
  [605] = {.lex_state = 457},
  [606] = {.lex_state = 358},
  [607] = {.lex_state = 207},
  [608] = {.lex_state = 207},
  [609] = {.lex_state = 457},
  [610] = {.lex_state = 429},
  [611] = {.lex_state = 346},
  [612] = {.lex_state = 444},
  [613] = {.lex_state = 444},
  [614] = {.lex_state = 458},
  [615] = {.lex_state = 444},
  [616] = {.lex_state = 444},
  [617] = {.lex_state = 350},
  [618] = {.lex_state = 440},
  [619] = {.lex_state = 350},
  [620] = {.lex_state = 350},
  [621] = {.lex_state = 350},
  [622] = {.lex_state = 207},
  [623] = {.lex_state = 350},
  [624] = {.lex_state = 350},
  [625] = {.lex_state = 350},
  [626] = {.lex_state = 358},
  [627] = {.lex_state = 480},
  [628] = {.lex_state = 480},
  [629] = {.lex_state = 207},
  [630] = {.lex_state = 358},
  [631] = {.lex_state = 358},
  [632] = {.lex_state = 482},
  [633] = {.lex_state = 207},
  [634] = {.lex_state = 346},
  [635] = {.lex_state = 207},
  [636] = {.lex_state = 346},
  [637] = {.lex_state = 336},
  [638] = {.lex_state = 483},
  [639] = {.lex_state = 483},
  [640] = {.lex_state = 346},
  [641] = {.lex_state = 482},
  [642] = {.lex_state = 482},
  [643] = {.lex_state = 482},
  [644] = {.lex_state = 207},
  [645] = {.lex_state = 336},
  [646] = {.lex_state = 458},
  [647] = {.lex_state = 346},
  [648] = {.lex_state = 346},
  [649] = {.lex_state = 346},
  [650] = {.lex_state = 358},
  [651] = {.lex_state = 358},
  [652] = {.lex_state = 346},
  [653] = {.lex_state = 358},
  [654] = {.lex_state = 358},
  [655] = {.lex_state = 346},
  [656] = {.lex_state = 444},
  [657] = {.lex_state = 358},
  [658] = {.lex_state = 350},
  [659] = {.lex_state = 358},
  [660] = {.lex_state = 207},
  [661] = {.lex_state = 440},
  [662] = {.lex_state = 440},
  [663] = {.lex_state = 440},
  [664] = {.lex_state = 440},
  [665] = {.lex_state = 440},
  [666] = {.lex_state = 207},
  [667] = {.lex_state = 440},
  [668] = {.lex_state = 440},
  [669] = {.lex_state = 440},
  [670] = {.lex_state = 207},
  [671] = {.lex_state = 336},
  [672] = {.lex_state = 358},
  [673] = {.lex_state = 358},
  [674] = {.lex_state = 358},
  [675] = {.lex_state = 358},
  [676] = {.lex_state = 358},
  [677] = {.lex_state = 358},
  [678] = {.lex_state = 358},
  [679] = {.lex_state = 466},
  [680] = {.lex_state = 466},
  [681] = {.lex_state = 440},
  [682] = {.lex_state = 336},
  [683] = {.lex_state = 440},
  [684] = {.lex_state = 358},
  [685] = {.lex_state = 207},
  [686] = {.lex_state = 350},
  [687] = {.lex_state = 358},
  [688] = {.lex_state = 358},
  [689] = {.lex_state = 358},
  [690] = {.lex_state = 358},
  [691] = {.lex_state = 358},
  [692] = {.lex_state = 358},
  [693] = {.lex_state = 207},
  [694] = {.lex_state = 207},
  [695] = {.lex_state = 207},
  [696] = {.lex_state = 207},
  [697] = {.lex_state = 207},
  [698] = {.lex_state = 207},
  [699] = {.lex_state = 207},
  [700] = {.lex_state = 336},
  [701] = {.lex_state = 207},
  [702] = {.lex_state = 207},
  [703] = {.lex_state = 358},
  [704] = {.lex_state = 358},
  [705] = {.lex_state = 358},
  [706] = {.lex_state = 358},
  [707] = {.lex_state = 358},
  [708] = {.lex_state = 358},
  [709] = {.lex_state = 466},
  [710] = {.lex_state = 466},
  [711] = {.lex_state = 207},
  [712] = {.lex_state = 358},
  [713] = {.lex_state = 336},
  [714] = {.lex_state = 346},
  [715] = {.lex_state = 444},
  [716] = {.lex_state = 358},
  [717] = {.lex_state = 358},
  [718] = {.lex_state = 358},
  [719] = {.lex_state = 358},
  [720] = {.lex_state = 358},
  [721] = {.lex_state = 358},
  [722] = {.lex_state = 207},
  [723] = {.lex_state = 336},
  [724] = {.lex_state = 207},
  [725] = {.lex_state = 207},
  [726] = {.lex_state = 207},
  [727] = {.lex_state = 457},
  [728] = {.lex_state = 457},
  [729] = {.lex_state = 458},
  [730] = {.lex_state = 358},
  [731] = {.lex_state = 207},
  [732] = {.lex_state = 207},
  [733] = {.lex_state = 458},
  [734] = {.lex_state = 444},
  [735] = {.lex_state = 444},
  [736] = {.lex_state = 350},
  [737] = {.lex_state = 350},
  [738] = {.lex_state = 429},
  [739] = {.lex_state = 346},
  [740] = {.lex_state = 207},
  [741] = {.lex_state = 358},
  [742] = {.lex_state = 207},
  [743] = {.lex_state = 207},
  [744] = {.lex_state = 336},
  [745] = {.lex_state = 482},
  [746] = {.lex_state = 483},
  [747] = {.lex_state = 483},
  [748] = {.lex_state = 207},
  [749] = {.lex_state = 358},
  [750] = {.lex_state = 482},
  [751] = {.lex_state = 482},
  [752] = {.lex_state = 346},
  [753] = {.lex_state = 444},
  [754] = {.lex_state = 346},
  [755] = {.lex_state = 346},
  [756] = {.lex_state = 346},
  [757] = {.lex_state = 346},
  [758] = {.lex_state = 358},
  [759] = {.lex_state = 358},
  [760] = {.lex_state = 346},
  [761] = {.lex_state = 207},
  [762] = {.lex_state = 350},
  [763] = {.lex_state = 440},
  [764] = {.lex_state = 440},
  [765] = {.lex_state = 358},
  [766] = {.lex_state = 207},
  [767] = {.lex_state = 207},
  [768] = {.lex_state = 207},
  [769] = {.lex_state = 207},
  [770] = {.lex_state = 207},
  [771] = {.lex_state = 207},
  [772] = {.lex_state = 207},
  [773] = {.lex_state = 207},
  [774] = {.lex_state = 207},
  [775] = {.lex_state = 207},
  [776] = {.lex_state = 440},
  [777] = {.lex_state = 207},
  [778] = {.lex_state = 440},
  [779] = {.lex_state = 336},
  [780] = {.lex_state = 207},
  [781] = {.lex_state = 358},
  [782] = {.lex_state = 358},
  [783] = {.lex_state = 358},
  [784] = {.lex_state = 358},
  [785] = {.lex_state = 358},
  [786] = {.lex_state = 358},
  [787] = {.lex_state = 336},
  [788] = {.lex_state = 207},
  [789] = {.lex_state = 207},
  [790] = {.lex_state = 336},
  [791] = {.lex_state = 336},
  [792] = {.lex_state = 207},
  [793] = {.lex_state = 207},
  [794] = {.lex_state = 207},
  [795] = {.lex_state = 207},
  [796] = {.lex_state = 207},
  [797] = {.lex_state = 458},
  [798] = {.lex_state = 458},
  [799] = {.lex_state = 480},
  [800] = {.lex_state = 358},
  [801] = {.lex_state = 207},
  [802] = {.lex_state = 207},
  [803] = {.lex_state = 480},
  [804] = {.lex_state = 207},
  [805] = {.lex_state = 207},
  [806] = {.lex_state = 429},
  [807] = {.lex_state = 346},
  [808] = {.lex_state = 207},
  [809] = {.lex_state = 429},
  [810] = {.lex_state = 346},
  [811] = {.lex_state = 207},
  [812] = {.lex_state = 346},
  [813] = {.lex_state = 444},
  [814] = {.lex_state = 346},
  [815] = {.lex_state = 346},
  [816] = {.lex_state = 346},
  [817] = {.lex_state = 346},
  [818] = {.lex_state = 350},
  [819] = {.lex_state = 358},
  [820] = {.lex_state = 358},
  [821] = {.lex_state = 358},
  [822] = {.lex_state = 358},
  [823] = {.lex_state = 358},
  [824] = {.lex_state = 358},
  [825] = {.lex_state = 466},
  [826] = {.lex_state = 466},
  [827] = {.lex_state = 440},
  [828] = {.lex_state = 440},
  [829] = {.lex_state = 358},
  [830] = {.lex_state = 207},
  [831] = {.lex_state = 358},
  [832] = {.lex_state = 358},
  [833] = {.lex_state = 207},
  [834] = {.lex_state = 480},
  [835] = {.lex_state = 480},
  [836] = {.lex_state = 483},
  [837] = {.lex_state = 358},
  [838] = {.lex_state = 207},
  [839] = {.lex_state = 207},
  [840] = {.lex_state = 483},
  [841] = {.lex_state = 482},
  [842] = {.lex_state = 358},
  [843] = {.lex_state = 207},
  [844] = {.lex_state = 207},
  [845] = {.lex_state = 482},
  [846] = {.lex_state = 346},
  [847] = {.lex_state = 346},
  [848] = {.lex_state = 346},
  [849] = {.lex_state = 207},
  [850] = {.lex_state = 358},
  [851] = {.lex_state = 207},
  [852] = {.lex_state = 207},
  [853] = {.lex_state = 483},
  [854] = {.lex_state = 483},
  [855] = {.lex_state = 482},
  [856] = {.lex_state = 482},
  [857] = {.lex_state = 346},
  [858] = {.lex_state = 207},
  [859] = {.lex_state = 207},
  [860] = {.lex_state = 207},
  [861] = {.lex_state = 207},
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
    [anon_sym_AT] = ACTIONS(1),
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
    [anon_sym_interface] = ACTIONS(3),
    [sym_result] = ACTIONS(3),
    [anon_sym_this] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_program] = STATE(17),
    [sym__statement] = STATE(18),
    [sym__literal] = STATE(19),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(20),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [sym__annotation] = STATE(23),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym__declaration] = STATE(25),
    [sym_module_declaration] = STATE(26),
    [sym_package_declaration] = STATE(26),
    [sym_import_statement] = STATE(26),
    [sym_single_type_import_declaration] = STATE(27),
    [sym_type_import_on_declaraction] = STATE(27),
    [sym_single_static_import_declaration] = STATE(27),
    [sym_static_import_on_demand_declaration] = STATE(27),
    [sym_class_declaration] = STATE(26),
    [sym_normal_class_declaration] = STATE(28),
    [sym_modifier] = STATE(29),
    [sym_interface_declaration] = STATE(26),
    [sym_annotation_type_declaration] = STATE(30),
    [sym_normal_interface_declaration] = STATE(30),
    [aux_sym_program_repeat1] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(32),
    [aux_sym_normal_class_declaration_repeat1] = STATE(33),
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
    [anon_sym_interface] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
  },
  [2] = {
    [sym__semicolon] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(46),
    [anon_sym_RBRACE] = ACTIONS(46),
    [anon_sym_COMMA] = ACTIONS(46),
    [sym_comment] = ACTIONS(44),
  },
  [3] = {
    [sym__semicolon] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(48),
    [anon_sym_RBRACE] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(48),
    [sym_comment] = ACTIONS(44),
  },
  [4] = {
    [sym__semicolon] = ACTIONS(50),
    [anon_sym_RPAREN] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(50),
    [anon_sym_COMMA] = ACTIONS(50),
    [sym_comment] = ACTIONS(44),
  },
  [5] = {
    [aux_sym_character_literal_repeat1] = STATE(36),
    [anon_sym_SQUOTE] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(54),
    [sym_comment] = ACTIONS(56),
  },
  [6] = {
    [sym__semicolon] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(58),
    [sym_comment] = ACTIONS(44),
  },
  [7] = {
    [sym__expression] = STATE(37),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(44),
  },
  [8] = {
    [sym__expression] = STATE(38),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(44),
  },
  [9] = {
    [sym_package_or_type_name] = STATE(41),
    [anon_sym_interface] = ACTIONS(60),
    [sym_identifier] = ACTIONS(62),
    [sym_comment] = ACTIONS(44),
  },
  [10] = {
    [anon_sym_module] = ACTIONS(64),
    [sym_comment] = ACTIONS(44),
  },
  [11] = {
    [sym_module_identifier] = STATE(44),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(44),
  },
  [12] = {
    [anon_sym_LT] = ACTIONS(68),
    [anon_sym_AT] = ACTIONS(68),
    [anon_sym_static] = ACTIONS(70),
    [anon_sym_class] = ACTIONS(70),
    [anon_sym_public] = ACTIONS(70),
    [anon_sym_protected] = ACTIONS(70),
    [anon_sym_private] = ACTIONS(70),
    [anon_sym_abstract] = ACTIONS(70),
    [anon_sym_final] = ACTIONS(70),
    [anon_sym_strictfp] = ACTIONS(70),
    [anon_sym_default] = ACTIONS(70),
    [anon_sym_interface] = ACTIONS(70),
    [sym_result] = ACTIONS(70),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(44),
  },
  [13] = {
    [sym_identifier] = ACTIONS(74),
    [sym_comment] = ACTIONS(44),
  },
  [14] = {
    [sym_package_or_type_name] = STATE(47),
    [anon_sym_static] = ACTIONS(76),
    [sym_identifier] = ACTIONS(62),
    [sym_comment] = ACTIONS(44),
  },
  [15] = {
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(44),
  },
  [16] = {
    [sym_identifier] = ACTIONS(80),
    [sym_comment] = ACTIONS(44),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym_comment] = ACTIONS(44),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_decimal_integer_literal] = ACTIONS(86),
    [sym_hex_integer_literal] = ACTIONS(86),
    [sym_octal_integer_literal] = ACTIONS(86),
    [sym_binary_integer_literal] = ACTIONS(86),
    [sym_decimal_floating_point_literal] = ACTIONS(86),
    [sym_hex_floating_point_literal] = ACTIONS(88),
    [anon_sym_true] = ACTIONS(84),
    [anon_sym_false] = ACTIONS(84),
    [anon_sym_SQUOTE] = ACTIONS(84),
    [sym_string_literal] = ACTIONS(84),
    [sym_null_literal] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(84),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [anon_sym_AT] = ACTIONS(84),
    [anon_sym_open] = ACTIONS(84),
    [anon_sym_module] = ACTIONS(84),
    [anon_sym_static] = ACTIONS(84),
    [anon_sym_package] = ACTIONS(84),
    [anon_sym_import] = ACTIONS(84),
    [anon_sym_class] = ACTIONS(84),
    [anon_sym_public] = ACTIONS(84),
    [anon_sym_protected] = ACTIONS(84),
    [anon_sym_private] = ACTIONS(84),
    [anon_sym_abstract] = ACTIONS(84),
    [anon_sym_final] = ACTIONS(84),
    [anon_sym_strictfp] = ACTIONS(84),
    [anon_sym_default] = ACTIONS(84),
    [anon_sym_interface] = ACTIONS(84),
    [sym_comment] = ACTIONS(44),
  },
  [19] = {
    [sym__semicolon] = ACTIONS(90),
    [sym_comment] = ACTIONS(44),
  },
  [20] = {
    [sym__semicolon] = ACTIONS(90),
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_PLUS_EQ] = ACTIONS(94),
    [anon_sym_DASH_EQ] = ACTIONS(94),
    [anon_sym_STAR_EQ] = ACTIONS(94),
    [anon_sym_SLASH_EQ] = ACTIONS(94),
    [anon_sym_AMP_EQ] = ACTIONS(94),
    [anon_sym_PIPE_EQ] = ACTIONS(94),
    [anon_sym_CARET_EQ] = ACTIONS(94),
    [anon_sym_PERCENT_EQ] = ACTIONS(94),
    [anon_sym_LT_LT_EQ] = ACTIONS(94),
    [anon_sym_GT_GT_EQ] = ACTIONS(94),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(94),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_EQ_EQ] = ACTIONS(98),
    [anon_sym_GT_EQ] = ACTIONS(98),
    [anon_sym_LT_EQ] = ACTIONS(98),
    [anon_sym_BANG_EQ] = ACTIONS(98),
    [anon_sym_AMP_AMP] = ACTIONS(100),
    [anon_sym_PIPE_PIPE] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_AMP] = ACTIONS(108),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(110),
    [anon_sym_PERCENT] = ACTIONS(106),
    [anon_sym_LT_LT] = ACTIONS(106),
    [anon_sym_GT_GT] = ACTIONS(106),
    [anon_sym_GT_GT_GT] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(112),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
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
    [sym_comment] = ACTIONS(44),
  },
  [22] = {
    [sym__semicolon] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_PLUS_EQ] = ACTIONS(120),
    [anon_sym_DASH_EQ] = ACTIONS(120),
    [anon_sym_STAR_EQ] = ACTIONS(120),
    [anon_sym_SLASH_EQ] = ACTIONS(120),
    [anon_sym_AMP_EQ] = ACTIONS(120),
    [anon_sym_PIPE_EQ] = ACTIONS(120),
    [anon_sym_CARET_EQ] = ACTIONS(120),
    [anon_sym_PERCENT_EQ] = ACTIONS(120),
    [anon_sym_LT_LT_EQ] = ACTIONS(120),
    [anon_sym_GT_GT_EQ] = ACTIONS(120),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_AMP_AMP] = ACTIONS(120),
    [anon_sym_PIPE_PIPE] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(122),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_LT_LT] = ACTIONS(122),
    [anon_sym_GT_GT] = ACTIONS(122),
    [anon_sym_GT_GT_GT] = ACTIONS(122),
    [anon_sym_QMARK] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_PLUS_PLUS] = ACTIONS(120),
    [anon_sym_DASH_DASH] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [sym_comment] = ACTIONS(44),
  },
  [23] = {
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym_open] = ACTIONS(127),
    [anon_sym_module] = ACTIONS(127),
    [anon_sym_static] = ACTIONS(68),
    [anon_sym_package] = ACTIONS(127),
    [anon_sym_class] = ACTIONS(68),
    [anon_sym_public] = ACTIONS(68),
    [anon_sym_protected] = ACTIONS(68),
    [anon_sym_private] = ACTIONS(68),
    [anon_sym_abstract] = ACTIONS(68),
    [anon_sym_final] = ACTIONS(68),
    [anon_sym_strictfp] = ACTIONS(68),
    [anon_sym_default] = ACTIONS(68),
    [anon_sym_interface] = ACTIONS(68),
    [sym_comment] = ACTIONS(44),
  },
  [24] = {
    [sym__semicolon] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(129),
    [anon_sym_open] = ACTIONS(129),
    [anon_sym_module] = ACTIONS(129),
    [anon_sym_static] = ACTIONS(129),
    [anon_sym_package] = ACTIONS(129),
    [anon_sym_class] = ACTIONS(129),
    [anon_sym_public] = ACTIONS(129),
    [anon_sym_protected] = ACTIONS(129),
    [anon_sym_private] = ACTIONS(129),
    [anon_sym_abstract] = ACTIONS(129),
    [anon_sym_final] = ACTIONS(129),
    [anon_sym_strictfp] = ACTIONS(129),
    [anon_sym_default] = ACTIONS(129),
    [anon_sym_interface] = ACTIONS(129),
    [sym_result] = ACTIONS(129),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(129),
    [sym_comment] = ACTIONS(44),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_decimal_integer_literal] = ACTIONS(133),
    [sym_hex_integer_literal] = ACTIONS(133),
    [sym_octal_integer_literal] = ACTIONS(133),
    [sym_binary_integer_literal] = ACTIONS(133),
    [sym_decimal_floating_point_literal] = ACTIONS(133),
    [sym_hex_floating_point_literal] = ACTIONS(135),
    [anon_sym_true] = ACTIONS(131),
    [anon_sym_false] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [sym_string_literal] = ACTIONS(131),
    [sym_null_literal] = ACTIONS(131),
    [anon_sym_BANG] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_PLUS_PLUS] = ACTIONS(131),
    [anon_sym_DASH_DASH] = ACTIONS(131),
    [anon_sym_if] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_elseif] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(131),
    [anon_sym_open] = ACTIONS(131),
    [anon_sym_module] = ACTIONS(131),
    [anon_sym_static] = ACTIONS(131),
    [anon_sym_package] = ACTIONS(131),
    [anon_sym_import] = ACTIONS(131),
    [anon_sym_class] = ACTIONS(131),
    [anon_sym_public] = ACTIONS(131),
    [anon_sym_protected] = ACTIONS(131),
    [anon_sym_private] = ACTIONS(131),
    [anon_sym_abstract] = ACTIONS(131),
    [anon_sym_final] = ACTIONS(131),
    [anon_sym_strictfp] = ACTIONS(131),
    [anon_sym_default] = ACTIONS(131),
    [anon_sym_interface] = ACTIONS(131),
    [sym_comment] = ACTIONS(44),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_decimal_integer_literal] = ACTIONS(139),
    [sym_hex_integer_literal] = ACTIONS(139),
    [sym_octal_integer_literal] = ACTIONS(139),
    [sym_binary_integer_literal] = ACTIONS(139),
    [sym_decimal_floating_point_literal] = ACTIONS(139),
    [sym_hex_floating_point_literal] = ACTIONS(141),
    [anon_sym_true] = ACTIONS(137),
    [anon_sym_false] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [sym_string_literal] = ACTIONS(137),
    [sym_null_literal] = ACTIONS(137),
    [anon_sym_BANG] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_PLUS_PLUS] = ACTIONS(137),
    [anon_sym_DASH_DASH] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_elseif] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(137),
    [anon_sym_open] = ACTIONS(137),
    [anon_sym_module] = ACTIONS(137),
    [anon_sym_static] = ACTIONS(137),
    [anon_sym_package] = ACTIONS(137),
    [anon_sym_import] = ACTIONS(137),
    [anon_sym_class] = ACTIONS(137),
    [anon_sym_public] = ACTIONS(137),
    [anon_sym_protected] = ACTIONS(137),
    [anon_sym_private] = ACTIONS(137),
    [anon_sym_abstract] = ACTIONS(137),
    [anon_sym_final] = ACTIONS(137),
    [anon_sym_strictfp] = ACTIONS(137),
    [anon_sym_default] = ACTIONS(137),
    [anon_sym_interface] = ACTIONS(137),
    [sym_comment] = ACTIONS(44),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_decimal_integer_literal] = ACTIONS(145),
    [sym_hex_integer_literal] = ACTIONS(145),
    [sym_octal_integer_literal] = ACTIONS(145),
    [sym_binary_integer_literal] = ACTIONS(145),
    [sym_decimal_floating_point_literal] = ACTIONS(145),
    [sym_hex_floating_point_literal] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(143),
    [anon_sym_false] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [sym_string_literal] = ACTIONS(143),
    [sym_null_literal] = ACTIONS(143),
    [anon_sym_BANG] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_PLUS_PLUS] = ACTIONS(143),
    [anon_sym_DASH_DASH] = ACTIONS(143),
    [anon_sym_if] = ACTIONS(143),
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_elseif] = ACTIONS(143),
    [anon_sym_AT] = ACTIONS(143),
    [anon_sym_open] = ACTIONS(143),
    [anon_sym_module] = ACTIONS(143),
    [anon_sym_static] = ACTIONS(143),
    [anon_sym_package] = ACTIONS(143),
    [anon_sym_import] = ACTIONS(143),
    [anon_sym_class] = ACTIONS(143),
    [anon_sym_public] = ACTIONS(143),
    [anon_sym_protected] = ACTIONS(143),
    [anon_sym_private] = ACTIONS(143),
    [anon_sym_abstract] = ACTIONS(143),
    [anon_sym_final] = ACTIONS(143),
    [anon_sym_strictfp] = ACTIONS(143),
    [anon_sym_default] = ACTIONS(143),
    [anon_sym_interface] = ACTIONS(143),
    [sym_comment] = ACTIONS(44),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym__semicolon] = ACTIONS(149),
    [sym_decimal_integer_literal] = ACTIONS(151),
    [sym_hex_integer_literal] = ACTIONS(151),
    [sym_octal_integer_literal] = ACTIONS(151),
    [sym_binary_integer_literal] = ACTIONS(151),
    [sym_decimal_floating_point_literal] = ACTIONS(151),
    [sym_hex_floating_point_literal] = ACTIONS(153),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_false] = ACTIONS(149),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [sym_string_literal] = ACTIONS(149),
    [sym_null_literal] = ACTIONS(149),
    [anon_sym_BANG] = ACTIONS(149),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_PLUS_PLUS] = ACTIONS(149),
    [anon_sym_DASH_DASH] = ACTIONS(149),
    [anon_sym_if] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_elseif] = ACTIONS(149),
    [anon_sym_AT] = ACTIONS(149),
    [anon_sym_open] = ACTIONS(149),
    [anon_sym_module] = ACTIONS(149),
    [anon_sym_static] = ACTIONS(149),
    [anon_sym_package] = ACTIONS(149),
    [anon_sym_import] = ACTIONS(149),
    [anon_sym_class] = ACTIONS(149),
    [anon_sym_public] = ACTIONS(149),
    [anon_sym_protected] = ACTIONS(149),
    [anon_sym_private] = ACTIONS(149),
    [anon_sym_abstract] = ACTIONS(149),
    [anon_sym_final] = ACTIONS(149),
    [anon_sym_strictfp] = ACTIONS(149),
    [anon_sym_default] = ACTIONS(149),
    [anon_sym_interface] = ACTIONS(149),
    [sym_comment] = ACTIONS(44),
  },
  [29] = {
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym_AT] = ACTIONS(155),
    [anon_sym_static] = ACTIONS(157),
    [anon_sym_class] = ACTIONS(157),
    [anon_sym_public] = ACTIONS(157),
    [anon_sym_protected] = ACTIONS(157),
    [anon_sym_private] = ACTIONS(157),
    [anon_sym_abstract] = ACTIONS(157),
    [anon_sym_final] = ACTIONS(157),
    [anon_sym_strictfp] = ACTIONS(157),
    [anon_sym_default] = ACTIONS(157),
    [anon_sym_interface] = ACTIONS(157),
    [sym_result] = ACTIONS(157),
    [sym_identifier] = ACTIONS(159),
    [sym_comment] = ACTIONS(44),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym__semicolon] = ACTIONS(161),
    [sym_decimal_integer_literal] = ACTIONS(163),
    [sym_hex_integer_literal] = ACTIONS(163),
    [sym_octal_integer_literal] = ACTIONS(163),
    [sym_binary_integer_literal] = ACTIONS(163),
    [sym_decimal_floating_point_literal] = ACTIONS(163),
    [sym_hex_floating_point_literal] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_false] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [sym_string_literal] = ACTIONS(161),
    [sym_null_literal] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(161),
    [anon_sym_TILDE] = ACTIONS(161),
    [anon_sym_PLUS_PLUS] = ACTIONS(161),
    [anon_sym_DASH_DASH] = ACTIONS(161),
    [anon_sym_if] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_elseif] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(161),
    [anon_sym_open] = ACTIONS(161),
    [anon_sym_module] = ACTIONS(161),
    [anon_sym_static] = ACTIONS(161),
    [anon_sym_package] = ACTIONS(161),
    [anon_sym_import] = ACTIONS(161),
    [anon_sym_class] = ACTIONS(161),
    [anon_sym_public] = ACTIONS(161),
    [anon_sym_protected] = ACTIONS(161),
    [anon_sym_private] = ACTIONS(161),
    [anon_sym_abstract] = ACTIONS(161),
    [anon_sym_final] = ACTIONS(161),
    [anon_sym_strictfp] = ACTIONS(161),
    [anon_sym_default] = ACTIONS(161),
    [anon_sym_interface] = ACTIONS(161),
    [sym_comment] = ACTIONS(44),
  },
  [31] = {
    [sym__statement] = STATE(59),
    [sym__literal] = STATE(19),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(20),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [sym__annotation] = STATE(23),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym__declaration] = STATE(25),
    [sym_module_declaration] = STATE(26),
    [sym_package_declaration] = STATE(26),
    [sym_import_statement] = STATE(26),
    [sym_single_type_import_declaration] = STATE(27),
    [sym_type_import_on_declaraction] = STATE(27),
    [sym_single_static_import_declaration] = STATE(27),
    [sym_static_import_on_demand_declaration] = STATE(27),
    [sym_class_declaration] = STATE(26),
    [sym_normal_class_declaration] = STATE(28),
    [sym_modifier] = STATE(29),
    [sym_interface_declaration] = STATE(26),
    [sym_annotation_type_declaration] = STATE(30),
    [sym_normal_interface_declaration] = STATE(30),
    [aux_sym_class_or_interface_type_repeat1] = STATE(32),
    [aux_sym_normal_class_declaration_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(167),
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
    [anon_sym_interface] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
  },
  [32] = {
    [sym__annotation] = STATE(63),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [anon_sym_AT] = ACTIONS(169),
    [anon_sym_open] = ACTIONS(171),
    [anon_sym_module] = ACTIONS(64),
    [anon_sym_package] = ACTIONS(173),
    [sym_comment] = ACTIONS(44),
  },
  [33] = {
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym_modifier] = STATE(67),
    [anon_sym_AT] = ACTIONS(175),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(177),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(179),
    [sym_comment] = ACTIONS(44),
  },
  [34] = {
    [sym__semicolon] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [sym_comment] = ACTIONS(44),
  },
  [35] = {
    [anon_sym_SQUOTE] = ACTIONS(183),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(183),
    [sym_comment] = ACTIONS(56),
  },
  [36] = {
    [anon_sym_SQUOTE] = ACTIONS(185),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(187),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(187),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(187),
    [sym_comment] = ACTIONS(56),
  },
  [37] = {
    [sym__semicolon] = ACTIONS(189),
    [anon_sym_EQ] = ACTIONS(191),
    [anon_sym_PLUS_EQ] = ACTIONS(189),
    [anon_sym_DASH_EQ] = ACTIONS(189),
    [anon_sym_STAR_EQ] = ACTIONS(189),
    [anon_sym_SLASH_EQ] = ACTIONS(189),
    [anon_sym_AMP_EQ] = ACTIONS(189),
    [anon_sym_PIPE_EQ] = ACTIONS(189),
    [anon_sym_CARET_EQ] = ACTIONS(189),
    [anon_sym_PERCENT_EQ] = ACTIONS(189),
    [anon_sym_LT_LT_EQ] = ACTIONS(189),
    [anon_sym_GT_GT_EQ] = ACTIONS(189),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(189),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(191),
    [anon_sym_EQ_EQ] = ACTIONS(189),
    [anon_sym_GT_EQ] = ACTIONS(189),
    [anon_sym_LT_EQ] = ACTIONS(189),
    [anon_sym_BANG_EQ] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [anon_sym_AMP] = ACTIONS(191),
    [anon_sym_PIPE] = ACTIONS(191),
    [anon_sym_CARET] = ACTIONS(191),
    [anon_sym_PERCENT] = ACTIONS(191),
    [anon_sym_LT_LT] = ACTIONS(191),
    [anon_sym_GT_GT] = ACTIONS(191),
    [anon_sym_GT_GT_GT] = ACTIONS(191),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(189),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [sym_comment] = ACTIONS(44),
  },
  [38] = {
    [sym__semicolon] = ACTIONS(193),
    [anon_sym_EQ] = ACTIONS(195),
    [anon_sym_PLUS_EQ] = ACTIONS(193),
    [anon_sym_DASH_EQ] = ACTIONS(193),
    [anon_sym_STAR_EQ] = ACTIONS(193),
    [anon_sym_SLASH_EQ] = ACTIONS(193),
    [anon_sym_AMP_EQ] = ACTIONS(193),
    [anon_sym_PIPE_EQ] = ACTIONS(193),
    [anon_sym_CARET_EQ] = ACTIONS(193),
    [anon_sym_PERCENT_EQ] = ACTIONS(193),
    [anon_sym_LT_LT_EQ] = ACTIONS(193),
    [anon_sym_GT_GT_EQ] = ACTIONS(193),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_EQ_EQ] = ACTIONS(193),
    [anon_sym_GT_EQ] = ACTIONS(193),
    [anon_sym_LT_EQ] = ACTIONS(193),
    [anon_sym_BANG_EQ] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(193),
    [anon_sym_PIPE_PIPE] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [anon_sym_AMP] = ACTIONS(195),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_CARET] = ACTIONS(195),
    [anon_sym_PERCENT] = ACTIONS(195),
    [anon_sym_LT_LT] = ACTIONS(195),
    [anon_sym_GT_GT] = ACTIONS(195),
    [anon_sym_GT_GT_GT] = ACTIONS(195),
    [anon_sym_QMARK] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_PLUS_PLUS] = ACTIONS(193),
    [anon_sym_DASH_DASH] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(193),
    [sym_comment] = ACTIONS(44),
  },
  [39] = {
    [sym_identifier] = ACTIONS(197),
    [sym_comment] = ACTIONS(44),
  },
  [40] = {
    [sym__semicolon] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_open] = ACTIONS(199),
    [anon_sym_module] = ACTIONS(199),
    [anon_sym_with] = ACTIONS(199),
    [anon_sym_static] = ACTIONS(199),
    [anon_sym_package] = ACTIONS(199),
    [anon_sym_class] = ACTIONS(199),
    [anon_sym_public] = ACTIONS(199),
    [anon_sym_protected] = ACTIONS(199),
    [anon_sym_private] = ACTIONS(199),
    [anon_sym_abstract] = ACTIONS(199),
    [anon_sym_final] = ACTIONS(199),
    [anon_sym_strictfp] = ACTIONS(199),
    [anon_sym_default] = ACTIONS(199),
    [anon_sym_interface] = ACTIONS(199),
    [sym_result] = ACTIONS(199),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(199),
    [sym_comment] = ACTIONS(44),
  },
  [41] = {
    [sym__semicolon] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_AT] = ACTIONS(203),
    [anon_sym_open] = ACTIONS(203),
    [anon_sym_module] = ACTIONS(203),
    [anon_sym_static] = ACTIONS(203),
    [anon_sym_package] = ACTIONS(203),
    [anon_sym_class] = ACTIONS(203),
    [anon_sym_public] = ACTIONS(203),
    [anon_sym_protected] = ACTIONS(203),
    [anon_sym_private] = ACTIONS(203),
    [anon_sym_abstract] = ACTIONS(203),
    [anon_sym_final] = ACTIONS(203),
    [anon_sym_strictfp] = ACTIONS(203),
    [anon_sym_default] = ACTIONS(203),
    [anon_sym_interface] = ACTIONS(203),
    [sym_result] = ACTIONS(203),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(203),
    [sym_comment] = ACTIONS(44),
  },
  [42] = {
    [sym_module_identifier] = STATE(73),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(44),
  },
  [43] = {
    [aux_sym_module_identifier_repeat1] = STATE(75),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(211),
    [sym_comment] = ACTIONS(44),
  },
  [44] = {
    [anon_sym_LBRACE] = ACTIONS(213),
    [sym_comment] = ACTIONS(44),
  },
  [45] = {
    [aux_sym_module_identifier_repeat1] = STATE(78),
    [sym__semicolon] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(211),
    [sym_comment] = ACTIONS(44),
  },
  [46] = {
    [sym_package_or_type_name] = STATE(79),
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(44),
  },
  [47] = {
    [sym__semicolon] = ACTIONS(219),
    [anon_sym_DOT] = ACTIONS(221),
    [sym_comment] = ACTIONS(44),
  },
  [48] = {
    [sym_type_parameters] = STATE(86),
    [sym_superclass] = STATE(87),
    [sym_super_interfaces] = STATE(88),
    [sym_class_body] = STATE(89),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_extends] = ACTIONS(227),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [49] = {
    [sym_type_parameters] = STATE(92),
    [sym_extends_interfaces] = STATE(93),
    [sym_interface_body] = STATE(94),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_extends] = ACTIONS(233),
    [sym_comment] = ACTIONS(44),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [sym_decimal_integer_literal] = ACTIONS(237),
    [sym_hex_integer_literal] = ACTIONS(237),
    [sym_octal_integer_literal] = ACTIONS(237),
    [sym_binary_integer_literal] = ACTIONS(237),
    [sym_decimal_floating_point_literal] = ACTIONS(237),
    [sym_hex_floating_point_literal] = ACTIONS(239),
    [anon_sym_true] = ACTIONS(235),
    [anon_sym_false] = ACTIONS(235),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [sym_string_literal] = ACTIONS(235),
    [sym_null_literal] = ACTIONS(235),
    [anon_sym_BANG] = ACTIONS(235),
    [anon_sym_TILDE] = ACTIONS(235),
    [anon_sym_PLUS_PLUS] = ACTIONS(235),
    [anon_sym_DASH_DASH] = ACTIONS(235),
    [anon_sym_if] = ACTIONS(235),
    [anon_sym_RBRACE] = ACTIONS(235),
    [anon_sym_elseif] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(235),
    [anon_sym_open] = ACTIONS(235),
    [anon_sym_module] = ACTIONS(235),
    [anon_sym_static] = ACTIONS(235),
    [anon_sym_package] = ACTIONS(235),
    [anon_sym_import] = ACTIONS(235),
    [anon_sym_class] = ACTIONS(235),
    [anon_sym_public] = ACTIONS(235),
    [anon_sym_protected] = ACTIONS(235),
    [anon_sym_private] = ACTIONS(235),
    [anon_sym_abstract] = ACTIONS(235),
    [anon_sym_final] = ACTIONS(235),
    [anon_sym_strictfp] = ACTIONS(235),
    [anon_sym_default] = ACTIONS(235),
    [anon_sym_interface] = ACTIONS(235),
    [sym_comment] = ACTIONS(44),
  },
  [51] = {
    [sym__expression] = STATE(95),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(44),
  },
  [52] = {
    [sym__expression] = STATE(96),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(44),
  },
  [53] = {
    [sym__expression] = STATE(97),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(44),
  },
  [54] = {
    [sym__expression] = STATE(98),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(44),
  },
  [55] = {
    [sym__expression] = STATE(99),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(44),
  },
  [56] = {
    [sym__expression] = STATE(100),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(44),
  },
  [57] = {
    [sym__expression] = STATE(103),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_PLUS_PLUS] = ACTIONS(243),
    [anon_sym_DASH_DASH] = ACTIONS(243),
    [sym_comment] = ACTIONS(44),
  },
  [58] = {
    [sym__semicolon] = ACTIONS(193),
    [anon_sym_EQ] = ACTIONS(195),
    [anon_sym_PLUS_EQ] = ACTIONS(193),
    [anon_sym_DASH_EQ] = ACTIONS(193),
    [anon_sym_STAR_EQ] = ACTIONS(193),
    [anon_sym_SLASH_EQ] = ACTIONS(193),
    [anon_sym_AMP_EQ] = ACTIONS(193),
    [anon_sym_PIPE_EQ] = ACTIONS(193),
    [anon_sym_CARET_EQ] = ACTIONS(193),
    [anon_sym_PERCENT_EQ] = ACTIONS(193),
    [anon_sym_LT_LT_EQ] = ACTIONS(193),
    [anon_sym_GT_GT_EQ] = ACTIONS(193),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_EQ_EQ] = ACTIONS(193),
    [anon_sym_GT_EQ] = ACTIONS(193),
    [anon_sym_LT_EQ] = ACTIONS(193),
    [anon_sym_BANG_EQ] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(193),
    [anon_sym_PIPE_PIPE] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [anon_sym_AMP] = ACTIONS(195),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_CARET] = ACTIONS(195),
    [anon_sym_PERCENT] = ACTIONS(195),
    [anon_sym_LT_LT] = ACTIONS(195),
    [anon_sym_GT_GT] = ACTIONS(195),
    [anon_sym_GT_GT_GT] = ACTIONS(195),
    [anon_sym_QMARK] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_PLUS_PLUS] = ACTIONS(193),
    [anon_sym_DASH_DASH] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(193),
    [sym_comment] = ACTIONS(44),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [sym_decimal_integer_literal] = ACTIONS(247),
    [sym_hex_integer_literal] = ACTIONS(247),
    [sym_octal_integer_literal] = ACTIONS(247),
    [sym_binary_integer_literal] = ACTIONS(247),
    [sym_decimal_floating_point_literal] = ACTIONS(247),
    [sym_hex_floating_point_literal] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(245),
    [anon_sym_false] = ACTIONS(245),
    [anon_sym_SQUOTE] = ACTIONS(245),
    [sym_string_literal] = ACTIONS(245),
    [sym_null_literal] = ACTIONS(245),
    [anon_sym_BANG] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(245),
    [anon_sym_PLUS_PLUS] = ACTIONS(245),
    [anon_sym_DASH_DASH] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(245),
    [anon_sym_open] = ACTIONS(245),
    [anon_sym_module] = ACTIONS(245),
    [anon_sym_static] = ACTIONS(245),
    [anon_sym_package] = ACTIONS(245),
    [anon_sym_import] = ACTIONS(245),
    [anon_sym_class] = ACTIONS(245),
    [anon_sym_public] = ACTIONS(245),
    [anon_sym_protected] = ACTIONS(245),
    [anon_sym_private] = ACTIONS(245),
    [anon_sym_abstract] = ACTIONS(245),
    [anon_sym_final] = ACTIONS(245),
    [anon_sym_strictfp] = ACTIONS(245),
    [anon_sym_default] = ACTIONS(245),
    [anon_sym_interface] = ACTIONS(245),
    [sym_comment] = ACTIONS(44),
  },
  [60] = {
    [sym_package_or_type_name] = STATE(41),
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(44),
  },
  [61] = {
    [anon_sym_module] = ACTIONS(251),
    [sym_comment] = ACTIONS(44),
  },
  [62] = {
    [sym_identifier] = ACTIONS(253),
    [sym_comment] = ACTIONS(44),
  },
  [63] = {
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_AT] = ACTIONS(255),
    [anon_sym_open] = ACTIONS(255),
    [anon_sym_module] = ACTIONS(255),
    [anon_sym_package] = ACTIONS(255),
    [sym_result] = ACTIONS(255),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(255),
    [sym_comment] = ACTIONS(44),
  },
  [64] = {
    [sym_package_or_type_name] = STATE(41),
    [anon_sym_interface] = ACTIONS(257),
    [sym_identifier] = ACTIONS(62),
    [sym_comment] = ACTIONS(44),
  },
  [65] = {
    [sym_identifier] = ACTIONS(259),
    [sym_comment] = ACTIONS(44),
  },
  [66] = {
    [sym_identifier] = ACTIONS(261),
    [sym_comment] = ACTIONS(44),
  },
  [67] = {
    [anon_sym_LT] = ACTIONS(263),
    [anon_sym_AT] = ACTIONS(263),
    [anon_sym_static] = ACTIONS(265),
    [anon_sym_class] = ACTIONS(265),
    [anon_sym_public] = ACTIONS(265),
    [anon_sym_protected] = ACTIONS(265),
    [anon_sym_private] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(265),
    [anon_sym_final] = ACTIONS(265),
    [anon_sym_strictfp] = ACTIONS(265),
    [anon_sym_default] = ACTIONS(265),
    [anon_sym_interface] = ACTIONS(265),
    [sym_result] = ACTIONS(265),
    [sym_identifier] = ACTIONS(267),
    [sym_comment] = ACTIONS(44),
  },
  [68] = {
    [sym__semicolon] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_RBRACE] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [sym_comment] = ACTIONS(44),
  },
  [69] = {
    [anon_sym_SQUOTE] = ACTIONS(271),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(271),
    [sym_comment] = ACTIONS(56),
  },
  [70] = {
    [sym_annotation_type_body] = STATE(110),
    [anon_sym_LBRACE] = ACTIONS(273),
    [sym_comment] = ACTIONS(44),
  },
  [71] = {
    [sym__literal] = STATE(113),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(114),
    [sym_element_value_pair] = STATE(115),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(275),
    [anon_sym_false] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(279),
    [sym_identifier] = ACTIONS(281),
    [sym_comment] = ACTIONS(44),
  },
  [72] = {
    [sym_identifier] = ACTIONS(283),
    [sym_comment] = ACTIONS(44),
  },
  [73] = {
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(44),
  },
  [74] = {
    [sym_identifier] = ACTIONS(287),
    [sym_comment] = ACTIONS(44),
  },
  [75] = {
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_DOT] = ACTIONS(291),
    [sym_comment] = ACTIONS(44),
  },
  [76] = {
    [sym_module_directive] = STATE(125),
    [aux_sym_module_declaration_repeat1] = STATE(126),
    [anon_sym_RBRACE] = ACTIONS(293),
    [anon_sym_requires] = ACTIONS(295),
    [anon_sym_exports] = ACTIONS(297),
    [anon_sym_opens] = ACTIONS(297),
    [anon_sym_uses] = ACTIONS(299),
    [anon_sym_provides] = ACTIONS(301),
    [sym_comment] = ACTIONS(44),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [sym_decimal_integer_literal] = ACTIONS(305),
    [sym_hex_integer_literal] = ACTIONS(305),
    [sym_octal_integer_literal] = ACTIONS(305),
    [sym_binary_integer_literal] = ACTIONS(305),
    [sym_decimal_floating_point_literal] = ACTIONS(305),
    [sym_hex_floating_point_literal] = ACTIONS(307),
    [anon_sym_true] = ACTIONS(303),
    [anon_sym_false] = ACTIONS(303),
    [anon_sym_SQUOTE] = ACTIONS(303),
    [sym_string_literal] = ACTIONS(303),
    [sym_null_literal] = ACTIONS(303),
    [anon_sym_BANG] = ACTIONS(303),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_PLUS_PLUS] = ACTIONS(303),
    [anon_sym_DASH_DASH] = ACTIONS(303),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_RBRACE] = ACTIONS(303),
    [anon_sym_elseif] = ACTIONS(303),
    [anon_sym_AT] = ACTIONS(303),
    [anon_sym_open] = ACTIONS(303),
    [anon_sym_module] = ACTIONS(303),
    [anon_sym_static] = ACTIONS(303),
    [anon_sym_package] = ACTIONS(303),
    [anon_sym_import] = ACTIONS(303),
    [anon_sym_class] = ACTIONS(303),
    [anon_sym_public] = ACTIONS(303),
    [anon_sym_protected] = ACTIONS(303),
    [anon_sym_private] = ACTIONS(303),
    [anon_sym_abstract] = ACTIONS(303),
    [anon_sym_final] = ACTIONS(303),
    [anon_sym_strictfp] = ACTIONS(303),
    [anon_sym_default] = ACTIONS(303),
    [anon_sym_interface] = ACTIONS(303),
    [sym_comment] = ACTIONS(44),
  },
  [78] = {
    [sym__semicolon] = ACTIONS(309),
    [anon_sym_DOT] = ACTIONS(291),
    [sym_comment] = ACTIONS(44),
  },
  [79] = {
    [anon_sym_DOT] = ACTIONS(311),
    [sym_comment] = ACTIONS(44),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [sym_decimal_integer_literal] = ACTIONS(315),
    [sym_hex_integer_literal] = ACTIONS(315),
    [sym_octal_integer_literal] = ACTIONS(315),
    [sym_binary_integer_literal] = ACTIONS(315),
    [sym_decimal_floating_point_literal] = ACTIONS(315),
    [sym_hex_floating_point_literal] = ACTIONS(317),
    [anon_sym_true] = ACTIONS(313),
    [anon_sym_false] = ACTIONS(313),
    [anon_sym_SQUOTE] = ACTIONS(313),
    [sym_string_literal] = ACTIONS(313),
    [sym_null_literal] = ACTIONS(313),
    [anon_sym_BANG] = ACTIONS(313),
    [anon_sym_TILDE] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(313),
    [anon_sym_DASH_DASH] = ACTIONS(313),
    [anon_sym_if] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_elseif] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(313),
    [anon_sym_open] = ACTIONS(313),
    [anon_sym_module] = ACTIONS(313),
    [anon_sym_static] = ACTIONS(313),
    [anon_sym_package] = ACTIONS(313),
    [anon_sym_import] = ACTIONS(313),
    [anon_sym_class] = ACTIONS(313),
    [anon_sym_public] = ACTIONS(313),
    [anon_sym_protected] = ACTIONS(313),
    [anon_sym_private] = ACTIONS(313),
    [anon_sym_abstract] = ACTIONS(313),
    [anon_sym_final] = ACTIONS(313),
    [anon_sym_strictfp] = ACTIONS(313),
    [anon_sym_default] = ACTIONS(313),
    [anon_sym_interface] = ACTIONS(313),
    [sym_comment] = ACTIONS(44),
  },
  [81] = {
    [anon_sym_STAR] = ACTIONS(319),
    [sym_identifier] = ACTIONS(283),
    [sym_comment] = ACTIONS(44),
  },
  [82] = {
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [sym_type_parameter_list] = STATE(134),
    [sym_type_parameter] = STATE(135),
    [aux_sym_class_or_interface_type_repeat1] = STATE(136),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(323),
    [sym_comment] = ACTIONS(44),
  },
  [83] = {
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym_class_declaration] = STATE(137),
    [sym_normal_class_declaration] = STATE(28),
    [sym_modifier] = STATE(29),
    [sym_class_body_declaration] = STATE(140),
    [sym_class_member_declaration] = STATE(141),
    [sym_interface_declaration] = STATE(137),
    [sym_annotation_type_declaration] = STATE(30),
    [sym_normal_interface_declaration] = STATE(30),
    [sym_block] = STATE(141),
    [aux_sym_normal_class_declaration_repeat1] = STATE(33),
    [aux_sym_class_body_repeat1] = STATE(142),
    [sym__semicolon] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(329),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
  },
  [84] = {
    [sym_class_or_interface_type] = STATE(144),
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [aux_sym_class_or_interface_type_repeat1] = STATE(145),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(331),
    [sym_comment] = ACTIONS(44),
  },
  [85] = {
    [sym_class_or_interface_type] = STATE(146),
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [sym_interface_type_list] = STATE(147),
    [aux_sym_class_or_interface_type_repeat1] = STATE(145),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(331),
    [sym_comment] = ACTIONS(44),
  },
  [86] = {
    [sym_superclass] = STATE(148),
    [sym_super_interfaces] = STATE(149),
    [sym_class_body] = STATE(150),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_extends] = ACTIONS(227),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [87] = {
    [sym_super_interfaces] = STATE(149),
    [sym_class_body] = STATE(150),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [88] = {
    [sym_class_body] = STATE(150),
    [anon_sym_LBRACE] = ACTIONS(225),
    [sym_comment] = ACTIONS(44),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(333),
    [sym__semicolon] = ACTIONS(333),
    [sym_decimal_integer_literal] = ACTIONS(335),
    [sym_hex_integer_literal] = ACTIONS(335),
    [sym_octal_integer_literal] = ACTIONS(335),
    [sym_binary_integer_literal] = ACTIONS(335),
    [sym_decimal_floating_point_literal] = ACTIONS(335),
    [sym_hex_floating_point_literal] = ACTIONS(337),
    [anon_sym_true] = ACTIONS(333),
    [anon_sym_false] = ACTIONS(333),
    [anon_sym_SQUOTE] = ACTIONS(333),
    [sym_string_literal] = ACTIONS(333),
    [sym_null_literal] = ACTIONS(333),
    [anon_sym_BANG] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(333),
    [anon_sym_PLUS_PLUS] = ACTIONS(333),
    [anon_sym_DASH_DASH] = ACTIONS(333),
    [anon_sym_if] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(333),
    [anon_sym_RBRACE] = ACTIONS(333),
    [anon_sym_elseif] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_open] = ACTIONS(333),
    [anon_sym_module] = ACTIONS(333),
    [anon_sym_static] = ACTIONS(333),
    [anon_sym_package] = ACTIONS(333),
    [anon_sym_import] = ACTIONS(333),
    [anon_sym_class] = ACTIONS(333),
    [anon_sym_public] = ACTIONS(333),
    [anon_sym_protected] = ACTIONS(333),
    [anon_sym_private] = ACTIONS(333),
    [anon_sym_abstract] = ACTIONS(333),
    [anon_sym_final] = ACTIONS(333),
    [anon_sym_strictfp] = ACTIONS(333),
    [anon_sym_default] = ACTIONS(333),
    [anon_sym_interface] = ACTIONS(333),
    [sym_comment] = ACTIONS(44),
  },
  [90] = {
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(158),
    [sym_marker_annotation] = STATE(158),
    [sym_single_element_annotation] = STATE(158),
    [sym_class_declaration] = STATE(151),
    [sym_normal_class_declaration] = STATE(159),
    [sym_modifier] = STATE(29),
    [sym_type_parameters] = STATE(160),
    [sym_interface_declaration] = STATE(151),
    [sym_annotation_type_declaration] = STATE(161),
    [sym_normal_interface_declaration] = STATE(161),
    [sym_interface_member_declaration] = STATE(162),
    [sym_constant_declaration] = STATE(151),
    [sym_variable_declarator_list] = STATE(163),
    [sym_variable_declarator] = STATE(164),
    [sym_variable_declarator_id] = STATE(165),
    [sym_interface_method_declaration] = STATE(151),
    [sym_method_header] = STATE(166),
    [aux_sym_normal_class_declaration_repeat1] = STATE(167),
    [aux_sym_interface_body_repeat1] = STATE(168),
    [sym__semicolon] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(343),
    [anon_sym_static] = ACTIONS(345),
    [anon_sym_class] = ACTIONS(347),
    [anon_sym_public] = ACTIONS(345),
    [anon_sym_protected] = ACTIONS(345),
    [anon_sym_private] = ACTIONS(345),
    [anon_sym_abstract] = ACTIONS(345),
    [anon_sym_final] = ACTIONS(345),
    [anon_sym_strictfp] = ACTIONS(345),
    [anon_sym_default] = ACTIONS(345),
    [anon_sym_interface] = ACTIONS(349),
    [sym_result] = ACTIONS(351),
    [sym_identifier] = ACTIONS(353),
    [sym_comment] = ACTIONS(44),
  },
  [91] = {
    [sym_class_or_interface_type] = STATE(146),
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [sym_interface_type_list] = STATE(169),
    [aux_sym_class_or_interface_type_repeat1] = STATE(145),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(331),
    [sym_comment] = ACTIONS(44),
  },
  [92] = {
    [sym_extends_interfaces] = STATE(170),
    [sym_interface_body] = STATE(171),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_extends] = ACTIONS(233),
    [sym_comment] = ACTIONS(44),
  },
  [93] = {
    [sym_interface_body] = STATE(171),
    [anon_sym_LBRACE] = ACTIONS(231),
    [sym_comment] = ACTIONS(44),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [sym__semicolon] = ACTIONS(355),
    [sym_decimal_integer_literal] = ACTIONS(357),
    [sym_hex_integer_literal] = ACTIONS(357),
    [sym_octal_integer_literal] = ACTIONS(357),
    [sym_binary_integer_literal] = ACTIONS(357),
    [sym_decimal_floating_point_literal] = ACTIONS(357),
    [sym_hex_floating_point_literal] = ACTIONS(359),
    [anon_sym_true] = ACTIONS(355),
    [anon_sym_false] = ACTIONS(355),
    [anon_sym_SQUOTE] = ACTIONS(355),
    [sym_string_literal] = ACTIONS(355),
    [sym_null_literal] = ACTIONS(355),
    [anon_sym_BANG] = ACTIONS(355),
    [anon_sym_TILDE] = ACTIONS(355),
    [anon_sym_PLUS_PLUS] = ACTIONS(355),
    [anon_sym_DASH_DASH] = ACTIONS(355),
    [anon_sym_if] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(355),
    [anon_sym_RBRACE] = ACTIONS(355),
    [anon_sym_elseif] = ACTIONS(355),
    [anon_sym_AT] = ACTIONS(355),
    [anon_sym_open] = ACTIONS(355),
    [anon_sym_module] = ACTIONS(355),
    [anon_sym_static] = ACTIONS(355),
    [anon_sym_package] = ACTIONS(355),
    [anon_sym_import] = ACTIONS(355),
    [anon_sym_class] = ACTIONS(355),
    [anon_sym_public] = ACTIONS(355),
    [anon_sym_protected] = ACTIONS(355),
    [anon_sym_private] = ACTIONS(355),
    [anon_sym_abstract] = ACTIONS(355),
    [anon_sym_final] = ACTIONS(355),
    [anon_sym_strictfp] = ACTIONS(355),
    [anon_sym_default] = ACTIONS(355),
    [anon_sym_interface] = ACTIONS(355),
    [sym_comment] = ACTIONS(44),
  },
  [95] = {
    [sym__semicolon] = ACTIONS(361),
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_PLUS_EQ] = ACTIONS(94),
    [anon_sym_DASH_EQ] = ACTIONS(94),
    [anon_sym_STAR_EQ] = ACTIONS(94),
    [anon_sym_SLASH_EQ] = ACTIONS(94),
    [anon_sym_AMP_EQ] = ACTIONS(94),
    [anon_sym_PIPE_EQ] = ACTIONS(94),
    [anon_sym_CARET_EQ] = ACTIONS(94),
    [anon_sym_PERCENT_EQ] = ACTIONS(94),
    [anon_sym_LT_LT_EQ] = ACTIONS(94),
    [anon_sym_GT_GT_EQ] = ACTIONS(94),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(94),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_EQ_EQ] = ACTIONS(98),
    [anon_sym_GT_EQ] = ACTIONS(98),
    [anon_sym_LT_EQ] = ACTIONS(98),
    [anon_sym_BANG_EQ] = ACTIONS(98),
    [anon_sym_AMP_AMP] = ACTIONS(100),
    [anon_sym_PIPE_PIPE] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_AMP] = ACTIONS(108),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(110),
    [anon_sym_PERCENT] = ACTIONS(106),
    [anon_sym_LT_LT] = ACTIONS(106),
    [anon_sym_GT_GT] = ACTIONS(106),
    [anon_sym_GT_GT_GT] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(112),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [96] = {
    [sym__semicolon] = ACTIONS(363),
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(365),
    [anon_sym_EQ_EQ] = ACTIONS(363),
    [anon_sym_GT_EQ] = ACTIONS(363),
    [anon_sym_LT_EQ] = ACTIONS(363),
    [anon_sym_BANG_EQ] = ACTIONS(363),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(106),
    [anon_sym_LT_LT] = ACTIONS(106),
    [anon_sym_GT_GT] = ACTIONS(106),
    [anon_sym_GT_GT_GT] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [97] = {
    [sym__semicolon] = ACTIONS(363),
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_EQ_EQ] = ACTIONS(98),
    [anon_sym_GT_EQ] = ACTIONS(98),
    [anon_sym_LT_EQ] = ACTIONS(98),
    [anon_sym_BANG_EQ] = ACTIONS(98),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(106),
    [anon_sym_LT_LT] = ACTIONS(106),
    [anon_sym_GT_GT] = ACTIONS(106),
    [anon_sym_GT_GT_GT] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [98] = {
    [sym__semicolon] = ACTIONS(363),
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_EQ_EQ] = ACTIONS(98),
    [anon_sym_GT_EQ] = ACTIONS(98),
    [anon_sym_LT_EQ] = ACTIONS(98),
    [anon_sym_BANG_EQ] = ACTIONS(98),
    [anon_sym_AMP_AMP] = ACTIONS(100),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_AMP] = ACTIONS(108),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(106),
    [anon_sym_LT_LT] = ACTIONS(106),
    [anon_sym_GT_GT] = ACTIONS(106),
    [anon_sym_GT_GT_GT] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [99] = {
    [sym__semicolon] = ACTIONS(363),
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_EQ_EQ] = ACTIONS(98),
    [anon_sym_GT_EQ] = ACTIONS(98),
    [anon_sym_LT_EQ] = ACTIONS(98),
    [anon_sym_BANG_EQ] = ACTIONS(98),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(106),
    [anon_sym_LT_LT] = ACTIONS(106),
    [anon_sym_GT_GT] = ACTIONS(106),
    [anon_sym_GT_GT_GT] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [100] = {
    [sym__semicolon] = ACTIONS(363),
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(365),
    [anon_sym_EQ_EQ] = ACTIONS(363),
    [anon_sym_GT_EQ] = ACTIONS(363),
    [anon_sym_LT_EQ] = ACTIONS(363),
    [anon_sym_BANG_EQ] = ACTIONS(363),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(365),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_LT_LT] = ACTIONS(365),
    [anon_sym_GT_GT] = ACTIONS(365),
    [anon_sym_GT_GT_GT] = ACTIONS(365),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(363),
    [anon_sym_RBRACE] = ACTIONS(363),
    [anon_sym_COMMA] = ACTIONS(363),
    [sym_comment] = ACTIONS(44),
  },
  [101] = {
    [sym__expression] = STATE(37),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_PLUS_PLUS] = ACTIONS(243),
    [anon_sym_DASH_DASH] = ACTIONS(243),
    [sym_comment] = ACTIONS(44),
  },
  [102] = {
    [sym__expression] = STATE(38),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_PLUS_PLUS] = ACTIONS(243),
    [anon_sym_DASH_DASH] = ACTIONS(243),
    [sym_comment] = ACTIONS(44),
  },
  [103] = {
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_PLUS_EQ] = ACTIONS(369),
    [anon_sym_DASH_EQ] = ACTIONS(369),
    [anon_sym_STAR_EQ] = ACTIONS(369),
    [anon_sym_SLASH_EQ] = ACTIONS(369),
    [anon_sym_AMP_EQ] = ACTIONS(369),
    [anon_sym_PIPE_EQ] = ACTIONS(369),
    [anon_sym_CARET_EQ] = ACTIONS(369),
    [anon_sym_PERCENT_EQ] = ACTIONS(369),
    [anon_sym_LT_LT_EQ] = ACTIONS(369),
    [anon_sym_GT_GT_EQ] = ACTIONS(369),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(373),
    [anon_sym_GT_EQ] = ACTIONS(373),
    [anon_sym_LT_EQ] = ACTIONS(373),
    [anon_sym_BANG_EQ] = ACTIONS(373),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_CARET] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(381),
    [anon_sym_GT_GT] = ACTIONS(381),
    [anon_sym_GT_GT_GT] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(389),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [104] = {
    [sym_module_identifier] = STATE(180),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(44),
  },
  [105] = {
    [aux_sym_module_identifier_repeat1] = STATE(181),
    [sym__semicolon] = ACTIONS(309),
    [anon_sym_DOT] = ACTIONS(211),
    [sym_comment] = ACTIONS(44),
  },
  [106] = {
    [sym_identifier] = ACTIONS(391),
    [sym_comment] = ACTIONS(44),
  },
  [107] = {
    [sym_type_parameters] = STATE(183),
    [sym_superclass] = STATE(148),
    [sym_super_interfaces] = STATE(149),
    [sym_class_body] = STATE(150),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_extends] = ACTIONS(227),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [108] = {
    [sym_type_parameters] = STATE(184),
    [sym_extends_interfaces] = STATE(170),
    [sym_interface_body] = STATE(171),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_extends] = ACTIONS(233),
    [sym_comment] = ACTIONS(44),
  },
  [109] = {
    [sym__annotation] = STATE(187),
    [sym_normal_annotation] = STATE(191),
    [sym_marker_annotation] = STATE(191),
    [sym_single_element_annotation] = STATE(191),
    [sym_class_declaration] = STATE(192),
    [sym_normal_class_declaration] = STATE(193),
    [sym_modifier] = STATE(194),
    [sym_interface_declaration] = STATE(192),
    [sym_annotation_type_declaration] = STATE(195),
    [sym_annotation_type_member_declaration] = STATE(196),
    [sym_annotation_type_element_declaration] = STATE(192),
    [sym_normal_interface_declaration] = STATE(195),
    [sym_constant_declaration] = STATE(192),
    [sym_variable_declarator_list] = STATE(197),
    [sym_variable_declarator] = STATE(164),
    [sym_variable_declarator_id] = STATE(165),
    [aux_sym_normal_class_declaration_repeat1] = STATE(198),
    [aux_sym_annotation_type_body_repeat1] = STATE(199),
    [anon_sym_RBRACE] = ACTIONS(393),
    [anon_sym_AT] = ACTIONS(395),
    [anon_sym_static] = ACTIONS(397),
    [anon_sym_class] = ACTIONS(399),
    [anon_sym_public] = ACTIONS(397),
    [anon_sym_protected] = ACTIONS(397),
    [anon_sym_private] = ACTIONS(397),
    [anon_sym_abstract] = ACTIONS(397),
    [anon_sym_final] = ACTIONS(397),
    [anon_sym_strictfp] = ACTIONS(397),
    [anon_sym_default] = ACTIONS(397),
    [anon_sym_interface] = ACTIONS(401),
    [sym_identifier] = ACTIONS(403),
    [sym_comment] = ACTIONS(44),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(405),
    [sym__semicolon] = ACTIONS(405),
    [sym_decimal_integer_literal] = ACTIONS(407),
    [sym_hex_integer_literal] = ACTIONS(407),
    [sym_octal_integer_literal] = ACTIONS(407),
    [sym_binary_integer_literal] = ACTIONS(407),
    [sym_decimal_floating_point_literal] = ACTIONS(407),
    [sym_hex_floating_point_literal] = ACTIONS(409),
    [anon_sym_true] = ACTIONS(405),
    [anon_sym_false] = ACTIONS(405),
    [anon_sym_SQUOTE] = ACTIONS(405),
    [sym_string_literal] = ACTIONS(405),
    [sym_null_literal] = ACTIONS(405),
    [anon_sym_BANG] = ACTIONS(405),
    [anon_sym_TILDE] = ACTIONS(405),
    [anon_sym_PLUS_PLUS] = ACTIONS(405),
    [anon_sym_DASH_DASH] = ACTIONS(405),
    [anon_sym_if] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_RBRACE] = ACTIONS(405),
    [anon_sym_elseif] = ACTIONS(405),
    [anon_sym_AT] = ACTIONS(405),
    [anon_sym_open] = ACTIONS(405),
    [anon_sym_module] = ACTIONS(405),
    [anon_sym_static] = ACTIONS(405),
    [anon_sym_package] = ACTIONS(405),
    [anon_sym_import] = ACTIONS(405),
    [anon_sym_class] = ACTIONS(405),
    [anon_sym_public] = ACTIONS(405),
    [anon_sym_protected] = ACTIONS(405),
    [anon_sym_private] = ACTIONS(405),
    [anon_sym_abstract] = ACTIONS(405),
    [anon_sym_final] = ACTIONS(405),
    [anon_sym_strictfp] = ACTIONS(405),
    [anon_sym_default] = ACTIONS(405),
    [anon_sym_interface] = ACTIONS(405),
    [sym_comment] = ACTIONS(44),
  },
  [111] = {
    [sym__semicolon] = ACTIONS(411),
    [anon_sym_RPAREN] = ACTIONS(411),
    [anon_sym_RBRACE] = ACTIONS(411),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_LBRACK] = ACTIONS(411),
    [anon_sym_AT] = ACTIONS(411),
    [anon_sym_open] = ACTIONS(411),
    [anon_sym_module] = ACTIONS(411),
    [anon_sym_static] = ACTIONS(411),
    [anon_sym_package] = ACTIONS(411),
    [anon_sym_class] = ACTIONS(411),
    [anon_sym_public] = ACTIONS(411),
    [anon_sym_protected] = ACTIONS(411),
    [anon_sym_private] = ACTIONS(411),
    [anon_sym_abstract] = ACTIONS(411),
    [anon_sym_final] = ACTIONS(411),
    [anon_sym_strictfp] = ACTIONS(411),
    [anon_sym_default] = ACTIONS(411),
    [anon_sym_interface] = ACTIONS(411),
    [sym_result] = ACTIONS(411),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(411),
    [sym_comment] = ACTIONS(44),
  },
  [112] = {
    [anon_sym_EQ] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(415),
    [sym_comment] = ACTIONS(44),
  },
  [113] = {
    [anon_sym_RPAREN] = ACTIONS(415),
    [sym_comment] = ACTIONS(44),
  },
  [114] = {
    [anon_sym_RPAREN] = ACTIONS(417),
    [sym_comment] = ACTIONS(44),
  },
  [115] = {
    [aux_sym_element_value_pair_list_repeat1] = STATE(204),
    [anon_sym_RPAREN] = ACTIONS(419),
    [anon_sym_COMMA] = ACTIONS(421),
    [sym_comment] = ACTIONS(44),
  },
  [116] = {
    [sym__semicolon] = ACTIONS(423),
    [anon_sym_LPAREN] = ACTIONS(423),
    [anon_sym_RPAREN] = ACTIONS(423),
    [anon_sym_RBRACE] = ACTIONS(423),
    [anon_sym_COMMA] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_AT] = ACTIONS(423),
    [anon_sym_open] = ACTIONS(423),
    [anon_sym_module] = ACTIONS(423),
    [anon_sym_with] = ACTIONS(423),
    [anon_sym_static] = ACTIONS(423),
    [anon_sym_package] = ACTIONS(423),
    [anon_sym_class] = ACTIONS(423),
    [anon_sym_public] = ACTIONS(423),
    [anon_sym_protected] = ACTIONS(423),
    [anon_sym_private] = ACTIONS(423),
    [anon_sym_abstract] = ACTIONS(423),
    [anon_sym_final] = ACTIONS(423),
    [anon_sym_strictfp] = ACTIONS(423),
    [anon_sym_default] = ACTIONS(423),
    [anon_sym_interface] = ACTIONS(423),
    [sym_result] = ACTIONS(423),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(423),
    [sym_comment] = ACTIONS(44),
  },
  [117] = {
    [sym_module_directive] = STATE(125),
    [aux_sym_module_declaration_repeat1] = STATE(206),
    [anon_sym_RBRACE] = ACTIONS(427),
    [anon_sym_requires] = ACTIONS(295),
    [anon_sym_exports] = ACTIONS(297),
    [anon_sym_opens] = ACTIONS(297),
    [anon_sym_uses] = ACTIONS(299),
    [anon_sym_provides] = ACTIONS(301),
    [sym_comment] = ACTIONS(44),
  },
  [118] = {
    [sym__semicolon] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_DOT] = ACTIONS(429),
    [sym_comment] = ACTIONS(44),
  },
  [119] = {
    [sym_identifier] = ACTIONS(431),
    [sym_comment] = ACTIONS(44),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(433),
    [sym_decimal_integer_literal] = ACTIONS(435),
    [sym_hex_integer_literal] = ACTIONS(435),
    [sym_octal_integer_literal] = ACTIONS(435),
    [sym_binary_integer_literal] = ACTIONS(435),
    [sym_decimal_floating_point_literal] = ACTIONS(435),
    [sym_hex_floating_point_literal] = ACTIONS(437),
    [anon_sym_true] = ACTIONS(433),
    [anon_sym_false] = ACTIONS(433),
    [anon_sym_SQUOTE] = ACTIONS(433),
    [sym_string_literal] = ACTIONS(433),
    [sym_null_literal] = ACTIONS(433),
    [anon_sym_BANG] = ACTIONS(433),
    [anon_sym_TILDE] = ACTIONS(433),
    [anon_sym_PLUS_PLUS] = ACTIONS(433),
    [anon_sym_DASH_DASH] = ACTIONS(433),
    [anon_sym_if] = ACTIONS(433),
    [anon_sym_RBRACE] = ACTIONS(433),
    [anon_sym_elseif] = ACTIONS(433),
    [anon_sym_AT] = ACTIONS(433),
    [anon_sym_open] = ACTIONS(433),
    [anon_sym_module] = ACTIONS(433),
    [anon_sym_static] = ACTIONS(433),
    [anon_sym_package] = ACTIONS(433),
    [anon_sym_import] = ACTIONS(433),
    [anon_sym_class] = ACTIONS(433),
    [anon_sym_public] = ACTIONS(433),
    [anon_sym_protected] = ACTIONS(433),
    [anon_sym_private] = ACTIONS(433),
    [anon_sym_abstract] = ACTIONS(433),
    [anon_sym_final] = ACTIONS(433),
    [anon_sym_strictfp] = ACTIONS(433),
    [anon_sym_default] = ACTIONS(433),
    [anon_sym_interface] = ACTIONS(433),
    [sym_comment] = ACTIONS(44),
  },
  [121] = {
    [sym_requires_modifier] = STATE(210),
    [sym_module_name] = STATE(211),
    [aux_sym_module_directive_repeat1] = STATE(212),
    [anon_sym_transitive] = ACTIONS(439),
    [anon_sym_static] = ACTIONS(439),
    [sym_identifier] = ACTIONS(441),
    [sym_comment] = ACTIONS(44),
  },
  [122] = {
    [sym_package_or_type_name] = STATE(214),
    [sym_identifier] = ACTIONS(443),
    [sym_comment] = ACTIONS(44),
  },
  [123] = {
    [sym_package_or_type_name] = STATE(215),
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(44),
  },
  [124] = {
    [sym_package_or_type_name] = STATE(216),
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(44),
  },
  [125] = {
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_requires] = ACTIONS(445),
    [anon_sym_exports] = ACTIONS(445),
    [anon_sym_opens] = ACTIONS(445),
    [anon_sym_uses] = ACTIONS(445),
    [anon_sym_provides] = ACTIONS(445),
    [sym_comment] = ACTIONS(44),
  },
  [126] = {
    [sym_module_directive] = STATE(217),
    [anon_sym_RBRACE] = ACTIONS(427),
    [anon_sym_requires] = ACTIONS(295),
    [anon_sym_exports] = ACTIONS(297),
    [anon_sym_opens] = ACTIONS(297),
    [anon_sym_uses] = ACTIONS(299),
    [anon_sym_provides] = ACTIONS(301),
    [sym_comment] = ACTIONS(44),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [sym_decimal_integer_literal] = ACTIONS(449),
    [sym_hex_integer_literal] = ACTIONS(449),
    [sym_octal_integer_literal] = ACTIONS(449),
    [sym_binary_integer_literal] = ACTIONS(449),
    [sym_decimal_floating_point_literal] = ACTIONS(449),
    [sym_hex_floating_point_literal] = ACTIONS(451),
    [anon_sym_true] = ACTIONS(447),
    [anon_sym_false] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(447),
    [sym_string_literal] = ACTIONS(447),
    [sym_null_literal] = ACTIONS(447),
    [anon_sym_BANG] = ACTIONS(447),
    [anon_sym_TILDE] = ACTIONS(447),
    [anon_sym_PLUS_PLUS] = ACTIONS(447),
    [anon_sym_DASH_DASH] = ACTIONS(447),
    [anon_sym_if] = ACTIONS(447),
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_elseif] = ACTIONS(447),
    [anon_sym_AT] = ACTIONS(447),
    [anon_sym_open] = ACTIONS(447),
    [anon_sym_module] = ACTIONS(447),
    [anon_sym_static] = ACTIONS(447),
    [anon_sym_package] = ACTIONS(447),
    [anon_sym_import] = ACTIONS(447),
    [anon_sym_class] = ACTIONS(447),
    [anon_sym_public] = ACTIONS(447),
    [anon_sym_protected] = ACTIONS(447),
    [anon_sym_private] = ACTIONS(447),
    [anon_sym_abstract] = ACTIONS(447),
    [anon_sym_final] = ACTIONS(447),
    [anon_sym_strictfp] = ACTIONS(447),
    [anon_sym_default] = ACTIONS(447),
    [anon_sym_interface] = ACTIONS(447),
    [sym_comment] = ACTIONS(44),
  },
  [128] = {
    [anon_sym_STAR] = ACTIONS(453),
    [sym_identifier] = ACTIONS(455),
    [sym_comment] = ACTIONS(44),
  },
  [129] = {
    [sym__semicolon] = ACTIONS(457),
    [sym_comment] = ACTIONS(44),
  },
  [130] = {
    [sym_package_or_type_name] = STATE(222),
    [sym_identifier] = ACTIONS(459),
    [sym_comment] = ACTIONS(44),
  },
  [131] = {
    [sym_type_bound] = STATE(224),
    [anon_sym_GT] = ACTIONS(461),
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_extends] = ACTIONS(463),
    [sym_comment] = ACTIONS(44),
  },
  [132] = {
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_AT] = ACTIONS(127),
    [sym_identifier] = ACTIONS(465),
    [sym_comment] = ACTIONS(44),
  },
  [133] = {
    [anon_sym_AT] = ACTIONS(129),
    [sym_identifier] = ACTIONS(467),
    [sym_comment] = ACTIONS(44),
  },
  [134] = {
    [anon_sym_GT] = ACTIONS(469),
    [sym_comment] = ACTIONS(44),
  },
  [135] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(227),
    [anon_sym_GT] = ACTIONS(471),
    [anon_sym_COMMA] = ACTIONS(473),
    [sym_comment] = ACTIONS(44),
  },
  [136] = {
    [sym__annotation] = STATE(229),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(475),
    [sym_comment] = ACTIONS(44),
  },
  [137] = {
    [sym__semicolon] = ACTIONS(477),
    [anon_sym_LBRACE] = ACTIONS(477),
    [anon_sym_RBRACE] = ACTIONS(477),
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
    [anon_sym_interface] = ACTIONS(477),
    [sym_comment] = ACTIONS(44),
  },
  [138] = {
    [sym_statement] = STATE(234),
    [sym_if_then_statement] = STATE(235),
    [sym__annotation] = STATE(233),
    [sym_normal_annotation] = STATE(236),
    [sym_marker_annotation] = STATE(236),
    [sym_single_element_annotation] = STATE(236),
    [sym_class_declaration] = STATE(234),
    [sym_normal_class_declaration] = STATE(28),
    [sym_modifier] = STATE(237),
    [sym_block_statements] = STATE(238),
    [sym_block_statement] = STATE(239),
    [sym_local_variable_declaration_statement] = STATE(234),
    [sym_local_variable_declaration] = STATE(240),
    [aux_sym_normal_class_declaration_repeat1] = STATE(241),
    [anon_sym_if] = ACTIONS(479),
    [anon_sym_RBRACE] = ACTIONS(481),
    [anon_sym_AT] = ACTIONS(483),
    [anon_sym_static] = ACTIONS(485),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(485),
    [anon_sym_protected] = ACTIONS(485),
    [anon_sym_private] = ACTIONS(485),
    [anon_sym_abstract] = ACTIONS(485),
    [anon_sym_final] = ACTIONS(485),
    [anon_sym_strictfp] = ACTIONS(485),
    [anon_sym_default] = ACTIONS(485),
    [sym_comment] = ACTIONS(44),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(487),
    [sym__semicolon] = ACTIONS(487),
    [sym_decimal_integer_literal] = ACTIONS(489),
    [sym_hex_integer_literal] = ACTIONS(489),
    [sym_octal_integer_literal] = ACTIONS(489),
    [sym_binary_integer_literal] = ACTIONS(489),
    [sym_decimal_floating_point_literal] = ACTIONS(489),
    [sym_hex_floating_point_literal] = ACTIONS(491),
    [anon_sym_true] = ACTIONS(487),
    [anon_sym_false] = ACTIONS(487),
    [anon_sym_SQUOTE] = ACTIONS(487),
    [sym_string_literal] = ACTIONS(487),
    [sym_null_literal] = ACTIONS(487),
    [anon_sym_BANG] = ACTIONS(487),
    [anon_sym_TILDE] = ACTIONS(487),
    [anon_sym_PLUS_PLUS] = ACTIONS(487),
    [anon_sym_DASH_DASH] = ACTIONS(487),
    [anon_sym_if] = ACTIONS(487),
    [anon_sym_LBRACE] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(487),
    [anon_sym_elseif] = ACTIONS(487),
    [anon_sym_AT] = ACTIONS(487),
    [anon_sym_open] = ACTIONS(487),
    [anon_sym_module] = ACTIONS(487),
    [anon_sym_static] = ACTIONS(487),
    [anon_sym_package] = ACTIONS(487),
    [anon_sym_import] = ACTIONS(487),
    [anon_sym_class] = ACTIONS(487),
    [anon_sym_public] = ACTIONS(487),
    [anon_sym_protected] = ACTIONS(487),
    [anon_sym_private] = ACTIONS(487),
    [anon_sym_abstract] = ACTIONS(487),
    [anon_sym_final] = ACTIONS(487),
    [anon_sym_strictfp] = ACTIONS(487),
    [anon_sym_default] = ACTIONS(487),
    [anon_sym_interface] = ACTIONS(487),
    [sym_comment] = ACTIONS(44),
  },
  [140] = {
    [sym__semicolon] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_RBRACE] = ACTIONS(493),
    [anon_sym_AT] = ACTIONS(493),
    [anon_sym_static] = ACTIONS(493),
    [anon_sym_class] = ACTIONS(493),
    [anon_sym_public] = ACTIONS(493),
    [anon_sym_protected] = ACTIONS(493),
    [anon_sym_private] = ACTIONS(493),
    [anon_sym_abstract] = ACTIONS(493),
    [anon_sym_final] = ACTIONS(493),
    [anon_sym_strictfp] = ACTIONS(493),
    [anon_sym_default] = ACTIONS(493),
    [anon_sym_interface] = ACTIONS(493),
    [sym_comment] = ACTIONS(44),
  },
  [141] = {
    [sym__semicolon] = ACTIONS(495),
    [anon_sym_LBRACE] = ACTIONS(495),
    [anon_sym_RBRACE] = ACTIONS(495),
    [anon_sym_AT] = ACTIONS(495),
    [anon_sym_static] = ACTIONS(495),
    [anon_sym_class] = ACTIONS(495),
    [anon_sym_public] = ACTIONS(495),
    [anon_sym_protected] = ACTIONS(495),
    [anon_sym_private] = ACTIONS(495),
    [anon_sym_abstract] = ACTIONS(495),
    [anon_sym_final] = ACTIONS(495),
    [anon_sym_strictfp] = ACTIONS(495),
    [anon_sym_default] = ACTIONS(495),
    [anon_sym_interface] = ACTIONS(495),
    [sym_comment] = ACTIONS(44),
  },
  [142] = {
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym_class_declaration] = STATE(137),
    [sym_normal_class_declaration] = STATE(28),
    [sym_modifier] = STATE(29),
    [sym_class_body_declaration] = STATE(243),
    [sym_class_member_declaration] = STATE(141),
    [sym_interface_declaration] = STATE(137),
    [sym_annotation_type_declaration] = STATE(30),
    [sym_normal_interface_declaration] = STATE(30),
    [sym_block] = STATE(141),
    [aux_sym_normal_class_declaration_repeat1] = STATE(33),
    [sym__semicolon] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
  },
  [143] = {
    [sym_type_arguments] = STATE(246),
    [aux_sym_class_or_interface_type_repeat2] = STATE(247),
    [anon_sym_GT] = ACTIONS(499),
    [anon_sym_LT] = ACTIONS(501),
    [anon_sym_AMP] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(499),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_DOT] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_AT] = ACTIONS(499),
    [anon_sym_implements] = ACTIONS(499),
    [sym_comment] = ACTIONS(44),
  },
  [144] = {
    [anon_sym_LBRACE] = ACTIONS(505),
    [anon_sym_implements] = ACTIONS(505),
    [sym_comment] = ACTIONS(44),
  },
  [145] = {
    [sym__annotation] = STATE(229),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(507),
    [sym_comment] = ACTIONS(44),
  },
  [146] = {
    [aux_sym_interface_type_list_repeat1] = STATE(250),
    [anon_sym_LBRACE] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(511),
    [sym_comment] = ACTIONS(44),
  },
  [147] = {
    [anon_sym_LBRACE] = ACTIONS(513),
    [sym_comment] = ACTIONS(44),
  },
  [148] = {
    [sym_super_interfaces] = STATE(251),
    [sym_class_body] = STATE(252),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [149] = {
    [sym_class_body] = STATE(252),
    [anon_sym_LBRACE] = ACTIONS(225),
    [sym_comment] = ACTIONS(44),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(515),
    [sym__semicolon] = ACTIONS(515),
    [sym_decimal_integer_literal] = ACTIONS(517),
    [sym_hex_integer_literal] = ACTIONS(517),
    [sym_octal_integer_literal] = ACTIONS(517),
    [sym_binary_integer_literal] = ACTIONS(517),
    [sym_decimal_floating_point_literal] = ACTIONS(517),
    [sym_hex_floating_point_literal] = ACTIONS(519),
    [anon_sym_true] = ACTIONS(515),
    [anon_sym_false] = ACTIONS(515),
    [anon_sym_SQUOTE] = ACTIONS(515),
    [sym_string_literal] = ACTIONS(515),
    [sym_null_literal] = ACTIONS(515),
    [anon_sym_BANG] = ACTIONS(515),
    [anon_sym_TILDE] = ACTIONS(515),
    [anon_sym_PLUS_PLUS] = ACTIONS(515),
    [anon_sym_DASH_DASH] = ACTIONS(515),
    [anon_sym_if] = ACTIONS(515),
    [anon_sym_LBRACE] = ACTIONS(515),
    [anon_sym_RBRACE] = ACTIONS(515),
    [anon_sym_elseif] = ACTIONS(515),
    [anon_sym_AT] = ACTIONS(515),
    [anon_sym_open] = ACTIONS(515),
    [anon_sym_module] = ACTIONS(515),
    [anon_sym_static] = ACTIONS(515),
    [anon_sym_package] = ACTIONS(515),
    [anon_sym_import] = ACTIONS(515),
    [anon_sym_class] = ACTIONS(515),
    [anon_sym_public] = ACTIONS(515),
    [anon_sym_protected] = ACTIONS(515),
    [anon_sym_private] = ACTIONS(515),
    [anon_sym_abstract] = ACTIONS(515),
    [anon_sym_final] = ACTIONS(515),
    [anon_sym_strictfp] = ACTIONS(515),
    [anon_sym_default] = ACTIONS(515),
    [anon_sym_interface] = ACTIONS(515),
    [sym_comment] = ACTIONS(44),
  },
  [151] = {
    [sym__semicolon] = ACTIONS(521),
    [anon_sym_LT] = ACTIONS(521),
    [anon_sym_RBRACE] = ACTIONS(521),
    [anon_sym_AT] = ACTIONS(521),
    [anon_sym_static] = ACTIONS(523),
    [anon_sym_class] = ACTIONS(523),
    [anon_sym_public] = ACTIONS(523),
    [anon_sym_protected] = ACTIONS(523),
    [anon_sym_private] = ACTIONS(523),
    [anon_sym_abstract] = ACTIONS(523),
    [anon_sym_final] = ACTIONS(523),
    [anon_sym_strictfp] = ACTIONS(523),
    [anon_sym_default] = ACTIONS(523),
    [anon_sym_interface] = ACTIONS(523),
    [sym_result] = ACTIONS(523),
    [sym_identifier] = ACTIONS(525),
    [sym_comment] = ACTIONS(44),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(527),
    [sym__semicolon] = ACTIONS(527),
    [sym_decimal_integer_literal] = ACTIONS(529),
    [sym_hex_integer_literal] = ACTIONS(529),
    [sym_octal_integer_literal] = ACTIONS(529),
    [sym_binary_integer_literal] = ACTIONS(529),
    [sym_decimal_floating_point_literal] = ACTIONS(529),
    [sym_hex_floating_point_literal] = ACTIONS(531),
    [anon_sym_true] = ACTIONS(527),
    [anon_sym_false] = ACTIONS(527),
    [anon_sym_SQUOTE] = ACTIONS(527),
    [sym_string_literal] = ACTIONS(527),
    [sym_null_literal] = ACTIONS(527),
    [anon_sym_BANG] = ACTIONS(527),
    [anon_sym_TILDE] = ACTIONS(527),
    [anon_sym_PLUS_PLUS] = ACTIONS(527),
    [anon_sym_DASH_DASH] = ACTIONS(527),
    [anon_sym_if] = ACTIONS(527),
    [anon_sym_LBRACE] = ACTIONS(527),
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_elseif] = ACTIONS(527),
    [anon_sym_AT] = ACTIONS(527),
    [anon_sym_open] = ACTIONS(527),
    [anon_sym_module] = ACTIONS(527),
    [anon_sym_static] = ACTIONS(527),
    [anon_sym_package] = ACTIONS(527),
    [anon_sym_import] = ACTIONS(527),
    [anon_sym_class] = ACTIONS(527),
    [anon_sym_public] = ACTIONS(527),
    [anon_sym_protected] = ACTIONS(527),
    [anon_sym_private] = ACTIONS(527),
    [anon_sym_abstract] = ACTIONS(527),
    [anon_sym_final] = ACTIONS(527),
    [anon_sym_strictfp] = ACTIONS(527),
    [anon_sym_default] = ACTIONS(527),
    [anon_sym_interface] = ACTIONS(527),
    [sym_comment] = ACTIONS(44),
  },
  [153] = {
    [sym_package_or_type_name] = STATE(255),
    [anon_sym_interface] = ACTIONS(533),
    [sym_identifier] = ACTIONS(535),
    [sym_comment] = ACTIONS(44),
  },
  [154] = {
    [sym_identifier] = ACTIONS(537),
    [sym_comment] = ACTIONS(44),
  },
  [155] = {
    [sym_identifier] = ACTIONS(539),
    [sym_comment] = ACTIONS(44),
  },
  [156] = {
    [sym_method_declarator] = STATE(259),
    [sym_identifier] = ACTIONS(541),
    [sym_comment] = ACTIONS(44),
  },
  [157] = {
    [sym_dims] = STATE(261),
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [aux_sym_class_or_interface_type_repeat1] = STATE(262),
    [aux_sym_dims_repeat1] = STATE(263),
    [sym__semicolon] = ACTIONS(543),
    [anon_sym_EQ] = ACTIONS(543),
    [anon_sym_RPAREN] = ACTIONS(543),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_LBRACK] = ACTIONS(545),
    [anon_sym_AT] = ACTIONS(169),
    [sym_comment] = ACTIONS(44),
  },
  [158] = {
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(129),
    [anon_sym_static] = ACTIONS(467),
    [anon_sym_class] = ACTIONS(467),
    [anon_sym_public] = ACTIONS(467),
    [anon_sym_protected] = ACTIONS(467),
    [anon_sym_private] = ACTIONS(467),
    [anon_sym_abstract] = ACTIONS(467),
    [anon_sym_final] = ACTIONS(467),
    [anon_sym_strictfp] = ACTIONS(467),
    [anon_sym_default] = ACTIONS(467),
    [anon_sym_interface] = ACTIONS(467),
    [sym_result] = ACTIONS(467),
    [sym_identifier] = ACTIONS(547),
    [sym_comment] = ACTIONS(44),
  },
  [159] = {
    [sym__semicolon] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_AT] = ACTIONS(149),
    [anon_sym_static] = ACTIONS(151),
    [anon_sym_class] = ACTIONS(151),
    [anon_sym_public] = ACTIONS(151),
    [anon_sym_protected] = ACTIONS(151),
    [anon_sym_private] = ACTIONS(151),
    [anon_sym_abstract] = ACTIONS(151),
    [anon_sym_final] = ACTIONS(151),
    [anon_sym_strictfp] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_interface] = ACTIONS(151),
    [sym_result] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [sym_comment] = ACTIONS(44),
  },
  [160] = {
    [sym__annotation] = STATE(265),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [aux_sym_class_or_interface_type_repeat1] = STATE(266),
    [anon_sym_AT] = ACTIONS(169),
    [sym_result] = ACTIONS(549),
    [sym_comment] = ACTIONS(44),
  },
  [161] = {
    [sym__semicolon] = ACTIONS(161),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(161),
    [anon_sym_static] = ACTIONS(163),
    [anon_sym_class] = ACTIONS(163),
    [anon_sym_public] = ACTIONS(163),
    [anon_sym_protected] = ACTIONS(163),
    [anon_sym_private] = ACTIONS(163),
    [anon_sym_abstract] = ACTIONS(163),
    [anon_sym_final] = ACTIONS(163),
    [anon_sym_strictfp] = ACTIONS(163),
    [anon_sym_default] = ACTIONS(163),
    [anon_sym_interface] = ACTIONS(163),
    [sym_result] = ACTIONS(163),
    [sym_identifier] = ACTIONS(165),
    [sym_comment] = ACTIONS(44),
  },
  [162] = {
    [sym__semicolon] = ACTIONS(551),
    [anon_sym_LT] = ACTIONS(551),
    [anon_sym_RBRACE] = ACTIONS(551),
    [anon_sym_AT] = ACTIONS(551),
    [anon_sym_static] = ACTIONS(553),
    [anon_sym_class] = ACTIONS(553),
    [anon_sym_public] = ACTIONS(553),
    [anon_sym_protected] = ACTIONS(553),
    [anon_sym_private] = ACTIONS(553),
    [anon_sym_abstract] = ACTIONS(553),
    [anon_sym_final] = ACTIONS(553),
    [anon_sym_strictfp] = ACTIONS(553),
    [anon_sym_default] = ACTIONS(553),
    [anon_sym_interface] = ACTIONS(553),
    [sym_result] = ACTIONS(553),
    [sym_identifier] = ACTIONS(555),
    [sym_comment] = ACTIONS(44),
  },
  [163] = {
    [sym__semicolon] = ACTIONS(557),
    [sym_comment] = ACTIONS(44),
  },
  [164] = {
    [aux_sym_variable_declarator_list_repeat1] = STATE(269),
    [sym__semicolon] = ACTIONS(559),
    [anon_sym_COMMA] = ACTIONS(561),
    [sym_comment] = ACTIONS(44),
  },
  [165] = {
    [sym__semicolon] = ACTIONS(563),
    [anon_sym_EQ] = ACTIONS(565),
    [anon_sym_RPAREN] = ACTIONS(563),
    [anon_sym_COMMA] = ACTIONS(563),
    [sym_comment] = ACTIONS(44),
  },
  [166] = {
    [sym_method_body] = STATE(272),
    [sym_block] = STATE(271),
    [sym__semicolon] = ACTIONS(567),
    [anon_sym_LBRACE] = ACTIONS(327),
    [sym_comment] = ACTIONS(44),
  },
  [167] = {
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(158),
    [sym_marker_annotation] = STATE(158),
    [sym_single_element_annotation] = STATE(158),
    [sym_modifier] = STATE(67),
    [sym_type_parameters] = STATE(160),
    [sym_variable_declarator_list] = STATE(276),
    [sym_variable_declarator] = STATE(164),
    [sym_variable_declarator_id] = STATE(165),
    [sym_method_header] = STATE(277),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_AT] = ACTIONS(569),
    [anon_sym_static] = ACTIONS(345),
    [anon_sym_class] = ACTIONS(571),
    [anon_sym_public] = ACTIONS(345),
    [anon_sym_protected] = ACTIONS(345),
    [anon_sym_private] = ACTIONS(345),
    [anon_sym_abstract] = ACTIONS(345),
    [anon_sym_final] = ACTIONS(345),
    [anon_sym_strictfp] = ACTIONS(345),
    [anon_sym_default] = ACTIONS(345),
    [anon_sym_interface] = ACTIONS(573),
    [sym_result] = ACTIONS(351),
    [sym_identifier] = ACTIONS(353),
    [sym_comment] = ACTIONS(44),
  },
  [168] = {
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(158),
    [sym_marker_annotation] = STATE(158),
    [sym_single_element_annotation] = STATE(158),
    [sym_class_declaration] = STATE(151),
    [sym_normal_class_declaration] = STATE(159),
    [sym_modifier] = STATE(29),
    [sym_type_parameters] = STATE(160),
    [sym_interface_declaration] = STATE(151),
    [sym_annotation_type_declaration] = STATE(161),
    [sym_normal_interface_declaration] = STATE(161),
    [sym_interface_member_declaration] = STATE(279),
    [sym_constant_declaration] = STATE(151),
    [sym_variable_declarator_list] = STATE(163),
    [sym_variable_declarator] = STATE(164),
    [sym_variable_declarator_id] = STATE(165),
    [sym_interface_method_declaration] = STATE(151),
    [sym_method_header] = STATE(166),
    [aux_sym_normal_class_declaration_repeat1] = STATE(167),
    [sym__semicolon] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(575),
    [anon_sym_AT] = ACTIONS(343),
    [anon_sym_static] = ACTIONS(345),
    [anon_sym_class] = ACTIONS(347),
    [anon_sym_public] = ACTIONS(345),
    [anon_sym_protected] = ACTIONS(345),
    [anon_sym_private] = ACTIONS(345),
    [anon_sym_abstract] = ACTIONS(345),
    [anon_sym_final] = ACTIONS(345),
    [anon_sym_strictfp] = ACTIONS(345),
    [anon_sym_default] = ACTIONS(345),
    [anon_sym_interface] = ACTIONS(349),
    [sym_result] = ACTIONS(351),
    [sym_identifier] = ACTIONS(353),
    [sym_comment] = ACTIONS(44),
  },
  [169] = {
    [anon_sym_LBRACE] = ACTIONS(577),
    [sym_comment] = ACTIONS(44),
  },
  [170] = {
    [sym_interface_body] = STATE(280),
    [anon_sym_LBRACE] = ACTIONS(231),
    [sym_comment] = ACTIONS(44),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(579),
    [sym__semicolon] = ACTIONS(579),
    [sym_decimal_integer_literal] = ACTIONS(581),
    [sym_hex_integer_literal] = ACTIONS(581),
    [sym_octal_integer_literal] = ACTIONS(581),
    [sym_binary_integer_literal] = ACTIONS(581),
    [sym_decimal_floating_point_literal] = ACTIONS(581),
    [sym_hex_floating_point_literal] = ACTIONS(583),
    [anon_sym_true] = ACTIONS(579),
    [anon_sym_false] = ACTIONS(579),
    [anon_sym_SQUOTE] = ACTIONS(579),
    [sym_string_literal] = ACTIONS(579),
    [sym_null_literal] = ACTIONS(579),
    [anon_sym_BANG] = ACTIONS(579),
    [anon_sym_TILDE] = ACTIONS(579),
    [anon_sym_PLUS_PLUS] = ACTIONS(579),
    [anon_sym_DASH_DASH] = ACTIONS(579),
    [anon_sym_if] = ACTIONS(579),
    [anon_sym_LBRACE] = ACTIONS(579),
    [anon_sym_RBRACE] = ACTIONS(579),
    [anon_sym_elseif] = ACTIONS(579),
    [anon_sym_AT] = ACTIONS(579),
    [anon_sym_open] = ACTIONS(579),
    [anon_sym_module] = ACTIONS(579),
    [anon_sym_static] = ACTIONS(579),
    [anon_sym_package] = ACTIONS(579),
    [anon_sym_import] = ACTIONS(579),
    [anon_sym_class] = ACTIONS(579),
    [anon_sym_public] = ACTIONS(579),
    [anon_sym_protected] = ACTIONS(579),
    [anon_sym_private] = ACTIONS(579),
    [anon_sym_abstract] = ACTIONS(579),
    [anon_sym_final] = ACTIONS(579),
    [anon_sym_strictfp] = ACTIONS(579),
    [anon_sym_default] = ACTIONS(579),
    [anon_sym_interface] = ACTIONS(579),
    [sym_comment] = ACTIONS(44),
  },
  [172] = {
    [sym__expression] = STATE(281),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_PLUS_PLUS] = ACTIONS(243),
    [anon_sym_DASH_DASH] = ACTIONS(243),
    [sym_comment] = ACTIONS(44),
  },
  [173] = {
    [sym__expression] = STATE(282),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_PLUS_PLUS] = ACTIONS(243),
    [anon_sym_DASH_DASH] = ACTIONS(243),
    [sym_comment] = ACTIONS(44),
  },
  [174] = {
    [sym__expression] = STATE(283),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_PLUS_PLUS] = ACTIONS(243),
    [anon_sym_DASH_DASH] = ACTIONS(243),
    [sym_comment] = ACTIONS(44),
  },
  [175] = {
    [sym__expression] = STATE(284),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_PLUS_PLUS] = ACTIONS(243),
    [anon_sym_DASH_DASH] = ACTIONS(243),
    [sym_comment] = ACTIONS(44),
  },
  [176] = {
    [sym__expression] = STATE(285),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_PLUS_PLUS] = ACTIONS(243),
    [anon_sym_DASH_DASH] = ACTIONS(243),
    [sym_comment] = ACTIONS(44),
  },
  [177] = {
    [sym__expression] = STATE(100),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_PLUS_PLUS] = ACTIONS(243),
    [anon_sym_DASH_DASH] = ACTIONS(243),
    [sym_comment] = ACTIONS(44),
  },
  [178] = {
    [sym__expression] = STATE(286),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_PLUS_PLUS] = ACTIONS(243),
    [anon_sym_DASH_DASH] = ACTIONS(243),
    [sym_comment] = ACTIONS(44),
  },
  [179] = {
    [sym__expression] = STATE(287),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(44),
  },
  [180] = {
    [anon_sym_LBRACE] = ACTIONS(585),
    [sym_comment] = ACTIONS(44),
  },
  [181] = {
    [sym__semicolon] = ACTIONS(587),
    [anon_sym_DOT] = ACTIONS(291),
    [sym_comment] = ACTIONS(44),
  },
  [182] = {
    [sym_annotation_type_body] = STATE(290),
    [anon_sym_LBRACE] = ACTIONS(273),
    [sym_comment] = ACTIONS(44),
  },
  [183] = {
    [sym_superclass] = STATE(291),
    [sym_super_interfaces] = STATE(251),
    [sym_class_body] = STATE(252),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_extends] = ACTIONS(227),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [184] = {
    [sym_extends_interfaces] = STATE(292),
    [sym_interface_body] = STATE(280),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_extends] = ACTIONS(233),
    [sym_comment] = ACTIONS(44),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(589),
    [sym__semicolon] = ACTIONS(589),
    [sym_decimal_integer_literal] = ACTIONS(591),
    [sym_hex_integer_literal] = ACTIONS(591),
    [sym_octal_integer_literal] = ACTIONS(591),
    [sym_binary_integer_literal] = ACTIONS(591),
    [sym_decimal_floating_point_literal] = ACTIONS(591),
    [sym_hex_floating_point_literal] = ACTIONS(593),
    [anon_sym_true] = ACTIONS(589),
    [anon_sym_false] = ACTIONS(589),
    [anon_sym_SQUOTE] = ACTIONS(589),
    [sym_string_literal] = ACTIONS(589),
    [sym_null_literal] = ACTIONS(589),
    [anon_sym_BANG] = ACTIONS(589),
    [anon_sym_TILDE] = ACTIONS(589),
    [anon_sym_PLUS_PLUS] = ACTIONS(589),
    [anon_sym_DASH_DASH] = ACTIONS(589),
    [anon_sym_if] = ACTIONS(589),
    [anon_sym_LBRACE] = ACTIONS(589),
    [anon_sym_RBRACE] = ACTIONS(589),
    [anon_sym_elseif] = ACTIONS(589),
    [anon_sym_AT] = ACTIONS(589),
    [anon_sym_open] = ACTIONS(589),
    [anon_sym_module] = ACTIONS(589),
    [anon_sym_static] = ACTIONS(589),
    [anon_sym_package] = ACTIONS(589),
    [anon_sym_import] = ACTIONS(589),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(589),
    [anon_sym_protected] = ACTIONS(589),
    [anon_sym_private] = ACTIONS(589),
    [anon_sym_abstract] = ACTIONS(589),
    [anon_sym_final] = ACTIONS(589),
    [anon_sym_strictfp] = ACTIONS(589),
    [anon_sym_default] = ACTIONS(589),
    [anon_sym_interface] = ACTIONS(589),
    [sym_comment] = ACTIONS(44),
  },
  [186] = {
    [sym_package_or_type_name] = STATE(295),
    [anon_sym_interface] = ACTIONS(595),
    [sym_identifier] = ACTIONS(597),
    [sym_comment] = ACTIONS(44),
  },
  [187] = {
    [anon_sym_AT] = ACTIONS(68),
    [anon_sym_static] = ACTIONS(70),
    [anon_sym_class] = ACTIONS(70),
    [anon_sym_public] = ACTIONS(70),
    [anon_sym_protected] = ACTIONS(70),
    [anon_sym_private] = ACTIONS(70),
    [anon_sym_abstract] = ACTIONS(70),
    [anon_sym_final] = ACTIONS(70),
    [anon_sym_strictfp] = ACTIONS(70),
    [anon_sym_default] = ACTIONS(70),
    [anon_sym_interface] = ACTIONS(70),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(44),
  },
  [188] = {
    [sym_identifier] = ACTIONS(599),
    [sym_comment] = ACTIONS(44),
  },
  [189] = {
    [sym_identifier] = ACTIONS(601),
    [sym_comment] = ACTIONS(44),
  },
  [190] = {
    [sym_dims] = STATE(261),
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [aux_sym_class_or_interface_type_repeat1] = STATE(262),
    [aux_sym_dims_repeat1] = STATE(263),
    [sym__semicolon] = ACTIONS(543),
    [anon_sym_EQ] = ACTIONS(543),
    [anon_sym_LPAREN] = ACTIONS(603),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_LBRACK] = ACTIONS(545),
    [anon_sym_AT] = ACTIONS(169),
    [sym_comment] = ACTIONS(44),
  },
  [191] = {
    [anon_sym_AT] = ACTIONS(129),
    [anon_sym_static] = ACTIONS(467),
    [anon_sym_class] = ACTIONS(467),
    [anon_sym_public] = ACTIONS(467),
    [anon_sym_protected] = ACTIONS(467),
    [anon_sym_private] = ACTIONS(467),
    [anon_sym_abstract] = ACTIONS(467),
    [anon_sym_final] = ACTIONS(467),
    [anon_sym_strictfp] = ACTIONS(467),
    [anon_sym_default] = ACTIONS(467),
    [anon_sym_interface] = ACTIONS(467),
    [sym_identifier] = ACTIONS(547),
    [sym_comment] = ACTIONS(44),
  },
  [192] = {
    [anon_sym_RBRACE] = ACTIONS(605),
    [anon_sym_AT] = ACTIONS(605),
    [anon_sym_static] = ACTIONS(607),
    [anon_sym_class] = ACTIONS(607),
    [anon_sym_public] = ACTIONS(607),
    [anon_sym_protected] = ACTIONS(607),
    [anon_sym_private] = ACTIONS(607),
    [anon_sym_abstract] = ACTIONS(607),
    [anon_sym_final] = ACTIONS(607),
    [anon_sym_strictfp] = ACTIONS(607),
    [anon_sym_default] = ACTIONS(607),
    [anon_sym_interface] = ACTIONS(607),
    [sym_identifier] = ACTIONS(609),
    [sym_comment] = ACTIONS(44),
  },
  [193] = {
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_AT] = ACTIONS(149),
    [anon_sym_static] = ACTIONS(151),
    [anon_sym_class] = ACTIONS(151),
    [anon_sym_public] = ACTIONS(151),
    [anon_sym_protected] = ACTIONS(151),
    [anon_sym_private] = ACTIONS(151),
    [anon_sym_abstract] = ACTIONS(151),
    [anon_sym_final] = ACTIONS(151),
    [anon_sym_strictfp] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_interface] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [sym_comment] = ACTIONS(44),
  },
  [194] = {
    [anon_sym_AT] = ACTIONS(155),
    [anon_sym_static] = ACTIONS(157),
    [anon_sym_class] = ACTIONS(157),
    [anon_sym_public] = ACTIONS(157),
    [anon_sym_protected] = ACTIONS(157),
    [anon_sym_private] = ACTIONS(157),
    [anon_sym_abstract] = ACTIONS(157),
    [anon_sym_final] = ACTIONS(157),
    [anon_sym_strictfp] = ACTIONS(157),
    [anon_sym_default] = ACTIONS(157),
    [anon_sym_interface] = ACTIONS(157),
    [sym_identifier] = ACTIONS(159),
    [sym_comment] = ACTIONS(44),
  },
  [195] = {
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(161),
    [anon_sym_static] = ACTIONS(163),
    [anon_sym_class] = ACTIONS(163),
    [anon_sym_public] = ACTIONS(163),
    [anon_sym_protected] = ACTIONS(163),
    [anon_sym_private] = ACTIONS(163),
    [anon_sym_abstract] = ACTIONS(163),
    [anon_sym_final] = ACTIONS(163),
    [anon_sym_strictfp] = ACTIONS(163),
    [anon_sym_default] = ACTIONS(163),
    [anon_sym_interface] = ACTIONS(163),
    [sym_identifier] = ACTIONS(165),
    [sym_comment] = ACTIONS(44),
  },
  [196] = {
    [anon_sym_RBRACE] = ACTIONS(611),
    [anon_sym_AT] = ACTIONS(611),
    [anon_sym_static] = ACTIONS(613),
    [anon_sym_class] = ACTIONS(613),
    [anon_sym_public] = ACTIONS(613),
    [anon_sym_protected] = ACTIONS(613),
    [anon_sym_private] = ACTIONS(613),
    [anon_sym_abstract] = ACTIONS(613),
    [anon_sym_final] = ACTIONS(613),
    [anon_sym_strictfp] = ACTIONS(613),
    [anon_sym_default] = ACTIONS(613),
    [anon_sym_interface] = ACTIONS(613),
    [sym_identifier] = ACTIONS(615),
    [sym_comment] = ACTIONS(44),
  },
  [197] = {
    [sym__semicolon] = ACTIONS(617),
    [sym_comment] = ACTIONS(44),
  },
  [198] = {
    [sym__annotation] = STATE(187),
    [sym_normal_annotation] = STATE(191),
    [sym_marker_annotation] = STATE(191),
    [sym_single_element_annotation] = STATE(191),
    [sym_modifier] = STATE(304),
    [sym_variable_declarator_list] = STATE(305),
    [sym_variable_declarator] = STATE(164),
    [sym_variable_declarator_id] = STATE(165),
    [anon_sym_AT] = ACTIONS(619),
    [anon_sym_static] = ACTIONS(397),
    [anon_sym_class] = ACTIONS(621),
    [anon_sym_public] = ACTIONS(397),
    [anon_sym_protected] = ACTIONS(397),
    [anon_sym_private] = ACTIONS(397),
    [anon_sym_abstract] = ACTIONS(397),
    [anon_sym_final] = ACTIONS(397),
    [anon_sym_strictfp] = ACTIONS(397),
    [anon_sym_default] = ACTIONS(397),
    [anon_sym_interface] = ACTIONS(623),
    [sym_identifier] = ACTIONS(625),
    [sym_comment] = ACTIONS(44),
  },
  [199] = {
    [sym__annotation] = STATE(187),
    [sym_normal_annotation] = STATE(191),
    [sym_marker_annotation] = STATE(191),
    [sym_single_element_annotation] = STATE(191),
    [sym_class_declaration] = STATE(192),
    [sym_normal_class_declaration] = STATE(193),
    [sym_modifier] = STATE(194),
    [sym_interface_declaration] = STATE(192),
    [sym_annotation_type_declaration] = STATE(195),
    [sym_annotation_type_member_declaration] = STATE(307),
    [sym_annotation_type_element_declaration] = STATE(192),
    [sym_normal_interface_declaration] = STATE(195),
    [sym_constant_declaration] = STATE(192),
    [sym_variable_declarator_list] = STATE(197),
    [sym_variable_declarator] = STATE(164),
    [sym_variable_declarator_id] = STATE(165),
    [aux_sym_normal_class_declaration_repeat1] = STATE(198),
    [anon_sym_RBRACE] = ACTIONS(627),
    [anon_sym_AT] = ACTIONS(395),
    [anon_sym_static] = ACTIONS(397),
    [anon_sym_class] = ACTIONS(399),
    [anon_sym_public] = ACTIONS(397),
    [anon_sym_protected] = ACTIONS(397),
    [anon_sym_private] = ACTIONS(397),
    [anon_sym_abstract] = ACTIONS(397),
    [anon_sym_final] = ACTIONS(397),
    [anon_sym_strictfp] = ACTIONS(397),
    [anon_sym_default] = ACTIONS(397),
    [anon_sym_interface] = ACTIONS(401),
    [sym_identifier] = ACTIONS(403),
    [sym_comment] = ACTIONS(44),
  },
  [200] = {
    [sym__literal] = STATE(310),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(311),
    [sym__annotation] = STATE(310),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym_element_value] = STATE(312),
    [sym_element_value_array_initializer] = STATE(310),
    [sym_conditional_expression] = STATE(310),
    [sym_conditional_or_expression] = STATE(313),
    [sym_conditional_and_expression] = STATE(314),
    [sym_inclusive_or_expression] = STATE(315),
    [sym_exclusive_or_expression] = STATE(316),
    [sym_and_expression] = STATE(317),
    [sym_relational_expression] = STATE(318),
    [sym_equality_expression] = STATE(319),
    [sym_shift_expression] = STATE(320),
    [sym_additive_expression] = STATE(321),
    [sym_multiplicative_expression] = STATE(322),
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
    [anon_sym_BANG] = ACTIONS(629),
    [anon_sym_TILDE] = ACTIONS(629),
    [anon_sym_LBRACE] = ACTIONS(631),
    [anon_sym_AT] = ACTIONS(169),
    [sym_comment] = ACTIONS(44),
  },
  [201] = {
    [sym__semicolon] = ACTIONS(633),
    [anon_sym_RPAREN] = ACTIONS(633),
    [anon_sym_RBRACE] = ACTIONS(633),
    [anon_sym_COMMA] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(633),
    [anon_sym_AT] = ACTIONS(633),
    [anon_sym_open] = ACTIONS(633),
    [anon_sym_module] = ACTIONS(633),
    [anon_sym_static] = ACTIONS(633),
    [anon_sym_package] = ACTIONS(633),
    [anon_sym_class] = ACTIONS(633),
    [anon_sym_public] = ACTIONS(633),
    [anon_sym_protected] = ACTIONS(633),
    [anon_sym_private] = ACTIONS(633),
    [anon_sym_abstract] = ACTIONS(633),
    [anon_sym_final] = ACTIONS(633),
    [anon_sym_strictfp] = ACTIONS(633),
    [anon_sym_default] = ACTIONS(633),
    [anon_sym_interface] = ACTIONS(633),
    [sym_result] = ACTIONS(633),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(633),
    [sym_comment] = ACTIONS(44),
  },
  [202] = {
    [sym__semicolon] = ACTIONS(635),
    [anon_sym_RPAREN] = ACTIONS(635),
    [anon_sym_RBRACE] = ACTIONS(635),
    [anon_sym_COMMA] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(635),
    [anon_sym_AT] = ACTIONS(635),
    [anon_sym_open] = ACTIONS(635),
    [anon_sym_module] = ACTIONS(635),
    [anon_sym_static] = ACTIONS(635),
    [anon_sym_package] = ACTIONS(635),
    [anon_sym_class] = ACTIONS(635),
    [anon_sym_public] = ACTIONS(635),
    [anon_sym_protected] = ACTIONS(635),
    [anon_sym_private] = ACTIONS(635),
    [anon_sym_abstract] = ACTIONS(635),
    [anon_sym_final] = ACTIONS(635),
    [anon_sym_strictfp] = ACTIONS(635),
    [anon_sym_default] = ACTIONS(635),
    [anon_sym_interface] = ACTIONS(635),
    [sym_result] = ACTIONS(635),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(635),
    [sym_comment] = ACTIONS(44),
  },
  [203] = {
    [sym_element_value_pair] = STATE(324),
    [sym_identifier] = ACTIONS(637),
    [sym_comment] = ACTIONS(44),
  },
  [204] = {
    [anon_sym_RPAREN] = ACTIONS(639),
    [anon_sym_COMMA] = ACTIONS(641),
    [sym_comment] = ACTIONS(44),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(643),
    [sym_decimal_integer_literal] = ACTIONS(645),
    [sym_hex_integer_literal] = ACTIONS(645),
    [sym_octal_integer_literal] = ACTIONS(645),
    [sym_binary_integer_literal] = ACTIONS(645),
    [sym_decimal_floating_point_literal] = ACTIONS(645),
    [sym_hex_floating_point_literal] = ACTIONS(647),
    [anon_sym_true] = ACTIONS(643),
    [anon_sym_false] = ACTIONS(643),
    [anon_sym_SQUOTE] = ACTIONS(643),
    [sym_string_literal] = ACTIONS(643),
    [sym_null_literal] = ACTIONS(643),
    [anon_sym_BANG] = ACTIONS(643),
    [anon_sym_TILDE] = ACTIONS(643),
    [anon_sym_PLUS_PLUS] = ACTIONS(643),
    [anon_sym_DASH_DASH] = ACTIONS(643),
    [anon_sym_if] = ACTIONS(643),
    [anon_sym_RBRACE] = ACTIONS(643),
    [anon_sym_elseif] = ACTIONS(643),
    [anon_sym_AT] = ACTIONS(643),
    [anon_sym_open] = ACTIONS(643),
    [anon_sym_module] = ACTIONS(643),
    [anon_sym_static] = ACTIONS(643),
    [anon_sym_package] = ACTIONS(643),
    [anon_sym_import] = ACTIONS(643),
    [anon_sym_class] = ACTIONS(643),
    [anon_sym_public] = ACTIONS(643),
    [anon_sym_protected] = ACTIONS(643),
    [anon_sym_private] = ACTIONS(643),
    [anon_sym_abstract] = ACTIONS(643),
    [anon_sym_final] = ACTIONS(643),
    [anon_sym_strictfp] = ACTIONS(643),
    [anon_sym_default] = ACTIONS(643),
    [anon_sym_interface] = ACTIONS(643),
    [sym_comment] = ACTIONS(44),
  },
  [206] = {
    [sym_module_directive] = STATE(217),
    [anon_sym_RBRACE] = ACTIONS(649),
    [anon_sym_requires] = ACTIONS(295),
    [anon_sym_exports] = ACTIONS(297),
    [anon_sym_opens] = ACTIONS(297),
    [anon_sym_uses] = ACTIONS(299),
    [anon_sym_provides] = ACTIONS(301),
    [sym_comment] = ACTIONS(44),
  },
  [207] = {
    [sym__semicolon] = ACTIONS(651),
    [anon_sym_LBRACE] = ACTIONS(651),
    [anon_sym_DOT] = ACTIONS(651),
    [sym_comment] = ACTIONS(44),
  },
  [208] = {
    [anon_sym_transitive] = ACTIONS(653),
    [anon_sym_static] = ACTIONS(653),
    [sym_identifier] = ACTIONS(655),
    [sym_comment] = ACTIONS(44),
  },
  [209] = {
    [sym__semicolon] = ACTIONS(657),
    [anon_sym_COMMA] = ACTIONS(657),
    [anon_sym_DOT] = ACTIONS(657),
    [sym_comment] = ACTIONS(44),
  },
  [210] = {
    [anon_sym_transitive] = ACTIONS(659),
    [anon_sym_static] = ACTIONS(659),
    [sym_identifier] = ACTIONS(661),
    [sym_comment] = ACTIONS(44),
  },
  [211] = {
    [sym__semicolon] = ACTIONS(663),
    [anon_sym_DOT] = ACTIONS(665),
    [sym_comment] = ACTIONS(44),
  },
  [212] = {
    [sym_requires_modifier] = STATE(329),
    [sym_module_name] = STATE(330),
    [anon_sym_transitive] = ACTIONS(439),
    [anon_sym_static] = ACTIONS(439),
    [sym_identifier] = ACTIONS(441),
    [sym_comment] = ACTIONS(44),
  },
  [213] = {
    [sym__semicolon] = ACTIONS(199),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(199),
    [anon_sym_to] = ACTIONS(201),
    [sym_identifier] = ACTIONS(667),
    [sym_comment] = ACTIONS(44),
  },
  [214] = {
    [sym_module_name] = STATE(334),
    [aux_sym_module_directive_repeat2] = STATE(335),
    [sym__semicolon] = ACTIONS(663),
    [anon_sym_COMMA] = ACTIONS(669),
    [anon_sym_DOT] = ACTIONS(671),
    [anon_sym_to] = ACTIONS(673),
    [sym_identifier] = ACTIONS(441),
    [sym_comment] = ACTIONS(44),
  },
  [215] = {
    [sym__semicolon] = ACTIONS(663),
    [anon_sym_DOT] = ACTIONS(675),
    [sym_comment] = ACTIONS(44),
  },
  [216] = {
    [anon_sym_DOT] = ACTIONS(675),
    [anon_sym_with] = ACTIONS(677),
    [sym_comment] = ACTIONS(44),
  },
  [217] = {
    [anon_sym_RBRACE] = ACTIONS(679),
    [anon_sym_requires] = ACTIONS(679),
    [anon_sym_exports] = ACTIONS(679),
    [anon_sym_opens] = ACTIONS(679),
    [anon_sym_uses] = ACTIONS(679),
    [anon_sym_provides] = ACTIONS(679),
    [sym_comment] = ACTIONS(44),
  },
  [218] = {
    [sym__semicolon] = ACTIONS(681),
    [sym_comment] = ACTIONS(44),
  },
  [219] = {
    [sym__semicolon] = ACTIONS(683),
    [anon_sym_DOT] = ACTIONS(423),
    [sym_comment] = ACTIONS(44),
  },
  [220] = {
    [ts_builtin_sym_end] = ACTIONS(685),
    [sym_decimal_integer_literal] = ACTIONS(687),
    [sym_hex_integer_literal] = ACTIONS(687),
    [sym_octal_integer_literal] = ACTIONS(687),
    [sym_binary_integer_literal] = ACTIONS(687),
    [sym_decimal_floating_point_literal] = ACTIONS(687),
    [sym_hex_floating_point_literal] = ACTIONS(689),
    [anon_sym_true] = ACTIONS(685),
    [anon_sym_false] = ACTIONS(685),
    [anon_sym_SQUOTE] = ACTIONS(685),
    [sym_string_literal] = ACTIONS(685),
    [sym_null_literal] = ACTIONS(685),
    [anon_sym_BANG] = ACTIONS(685),
    [anon_sym_TILDE] = ACTIONS(685),
    [anon_sym_PLUS_PLUS] = ACTIONS(685),
    [anon_sym_DASH_DASH] = ACTIONS(685),
    [anon_sym_if] = ACTIONS(685),
    [anon_sym_RBRACE] = ACTIONS(685),
    [anon_sym_elseif] = ACTIONS(685),
    [anon_sym_AT] = ACTIONS(685),
    [anon_sym_open] = ACTIONS(685),
    [anon_sym_module] = ACTIONS(685),
    [anon_sym_static] = ACTIONS(685),
    [anon_sym_package] = ACTIONS(685),
    [anon_sym_import] = ACTIONS(685),
    [anon_sym_class] = ACTIONS(685),
    [anon_sym_public] = ACTIONS(685),
    [anon_sym_protected] = ACTIONS(685),
    [anon_sym_private] = ACTIONS(685),
    [anon_sym_abstract] = ACTIONS(685),
    [anon_sym_final] = ACTIONS(685),
    [anon_sym_strictfp] = ACTIONS(685),
    [anon_sym_default] = ACTIONS(685),
    [anon_sym_interface] = ACTIONS(685),
    [sym_comment] = ACTIONS(44),
  },
  [221] = {
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(199),
    [sym_identifier] = ACTIONS(201),
    [sym_comment] = ACTIONS(44),
  },
  [222] = {
    [anon_sym_LPAREN] = ACTIONS(691),
    [anon_sym_DOT] = ACTIONS(693),
    [anon_sym_AT] = ACTIONS(203),
    [sym_identifier] = ACTIONS(695),
    [sym_comment] = ACTIONS(44),
  },
  [223] = {
    [sym_class_or_interface_type] = STATE(341),
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [aux_sym_class_or_interface_type_repeat1] = STATE(145),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(331),
    [sym_comment] = ACTIONS(44),
  },
  [224] = {
    [anon_sym_GT] = ACTIONS(697),
    [anon_sym_COMMA] = ACTIONS(697),
    [sym_comment] = ACTIONS(44),
  },
  [225] = {
    [anon_sym_LBRACE] = ACTIONS(699),
    [anon_sym_AT] = ACTIONS(699),
    [anon_sym_extends] = ACTIONS(699),
    [anon_sym_implements] = ACTIONS(699),
    [sym_result] = ACTIONS(699),
    [sym_comment] = ACTIONS(44),
  },
  [226] = {
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [sym_type_parameter] = STATE(342),
    [aux_sym_class_or_interface_type_repeat1] = STATE(136),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(323),
    [sym_comment] = ACTIONS(44),
  },
  [227] = {
    [anon_sym_GT] = ACTIONS(701),
    [anon_sym_COMMA] = ACTIONS(703),
    [sym_comment] = ACTIONS(44),
  },
  [228] = {
    [sym_type_bound] = STATE(344),
    [anon_sym_GT] = ACTIONS(697),
    [anon_sym_COMMA] = ACTIONS(697),
    [anon_sym_extends] = ACTIONS(463),
    [sym_comment] = ACTIONS(44),
  },
  [229] = {
    [anon_sym_AT] = ACTIONS(255),
    [sym_identifier] = ACTIONS(705),
    [sym_comment] = ACTIONS(44),
  },
  [230] = {
    [anon_sym_LPAREN] = ACTIONS(707),
    [sym_comment] = ACTIONS(44),
  },
  [231] = {
    [sym__semicolon] = ACTIONS(709),
    [anon_sym_LT] = ACTIONS(709),
    [anon_sym_LBRACE] = ACTIONS(709),
    [anon_sym_RBRACE] = ACTIONS(709),
    [anon_sym_AT] = ACTIONS(709),
    [anon_sym_static] = ACTIONS(711),
    [anon_sym_class] = ACTIONS(711),
    [anon_sym_public] = ACTIONS(711),
    [anon_sym_protected] = ACTIONS(711),
    [anon_sym_private] = ACTIONS(711),
    [anon_sym_abstract] = ACTIONS(711),
    [anon_sym_final] = ACTIONS(711),
    [anon_sym_strictfp] = ACTIONS(711),
    [anon_sym_default] = ACTIONS(711),
    [anon_sym_interface] = ACTIONS(711),
    [sym_result] = ACTIONS(711),
    [sym_identifier] = ACTIONS(713),
    [sym_comment] = ACTIONS(44),
  },
  [232] = {
    [sym_package_or_type_name] = STATE(347),
    [sym_identifier] = ACTIONS(715),
    [sym_comment] = ACTIONS(44),
  },
  [233] = {
    [anon_sym_AT] = ACTIONS(68),
    [anon_sym_static] = ACTIONS(70),
    [anon_sym_class] = ACTIONS(70),
    [anon_sym_public] = ACTIONS(70),
    [anon_sym_protected] = ACTIONS(70),
    [anon_sym_private] = ACTIONS(70),
    [anon_sym_abstract] = ACTIONS(70),
    [anon_sym_final] = ACTIONS(70),
    [anon_sym_strictfp] = ACTIONS(70),
    [anon_sym_default] = ACTIONS(70),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(44),
  },
  [234] = {
    [anon_sym_if] = ACTIONS(717),
    [anon_sym_RBRACE] = ACTIONS(717),
    [anon_sym_AT] = ACTIONS(717),
    [anon_sym_static] = ACTIONS(717),
    [anon_sym_class] = ACTIONS(717),
    [anon_sym_public] = ACTIONS(717),
    [anon_sym_protected] = ACTIONS(717),
    [anon_sym_private] = ACTIONS(717),
    [anon_sym_abstract] = ACTIONS(717),
    [anon_sym_final] = ACTIONS(717),
    [anon_sym_strictfp] = ACTIONS(717),
    [anon_sym_default] = ACTIONS(717),
    [sym_comment] = ACTIONS(44),
  },
  [235] = {
    [anon_sym_if] = ACTIONS(719),
    [anon_sym_RBRACE] = ACTIONS(719),
    [anon_sym_AT] = ACTIONS(719),
    [anon_sym_static] = ACTIONS(719),
    [anon_sym_class] = ACTIONS(719),
    [anon_sym_public] = ACTIONS(719),
    [anon_sym_protected] = ACTIONS(719),
    [anon_sym_private] = ACTIONS(719),
    [anon_sym_abstract] = ACTIONS(719),
    [anon_sym_final] = ACTIONS(719),
    [anon_sym_strictfp] = ACTIONS(719),
    [anon_sym_default] = ACTIONS(719),
    [sym_comment] = ACTIONS(44),
  },
  [236] = {
    [anon_sym_AT] = ACTIONS(129),
    [anon_sym_static] = ACTIONS(467),
    [anon_sym_class] = ACTIONS(467),
    [anon_sym_public] = ACTIONS(467),
    [anon_sym_protected] = ACTIONS(467),
    [anon_sym_private] = ACTIONS(467),
    [anon_sym_abstract] = ACTIONS(467),
    [anon_sym_final] = ACTIONS(467),
    [anon_sym_strictfp] = ACTIONS(467),
    [anon_sym_default] = ACTIONS(467),
    [sym_identifier] = ACTIONS(547),
    [sym_comment] = ACTIONS(44),
  },
  [237] = {
    [sym_variable_declarator_list] = STATE(348),
    [sym_variable_declarator] = STATE(164),
    [sym_variable_declarator_id] = STATE(165),
    [anon_sym_AT] = ACTIONS(155),
    [anon_sym_static] = ACTIONS(157),
    [anon_sym_class] = ACTIONS(157),
    [anon_sym_public] = ACTIONS(157),
    [anon_sym_protected] = ACTIONS(157),
    [anon_sym_private] = ACTIONS(157),
    [anon_sym_abstract] = ACTIONS(157),
    [anon_sym_final] = ACTIONS(157),
    [anon_sym_strictfp] = ACTIONS(157),
    [anon_sym_default] = ACTIONS(157),
    [sym_identifier] = ACTIONS(353),
    [sym_comment] = ACTIONS(44),
  },
  [238] = {
    [anon_sym_RBRACE] = ACTIONS(721),
    [sym_comment] = ACTIONS(44),
  },
  [239] = {
    [sym_statement] = STATE(234),
    [sym_if_then_statement] = STATE(235),
    [sym__annotation] = STATE(233),
    [sym_normal_annotation] = STATE(236),
    [sym_marker_annotation] = STATE(236),
    [sym_single_element_annotation] = STATE(236),
    [sym_class_declaration] = STATE(234),
    [sym_normal_class_declaration] = STATE(28),
    [sym_modifier] = STATE(237),
    [sym_block_statement] = STATE(350),
    [sym_local_variable_declaration_statement] = STATE(234),
    [sym_local_variable_declaration] = STATE(240),
    [aux_sym_normal_class_declaration_repeat1] = STATE(241),
    [aux_sym_block_statements_repeat1] = STATE(351),
    [anon_sym_if] = ACTIONS(479),
    [anon_sym_RBRACE] = ACTIONS(723),
    [anon_sym_AT] = ACTIONS(483),
    [anon_sym_static] = ACTIONS(485),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(485),
    [anon_sym_protected] = ACTIONS(485),
    [anon_sym_private] = ACTIONS(485),
    [anon_sym_abstract] = ACTIONS(485),
    [anon_sym_final] = ACTIONS(485),
    [anon_sym_strictfp] = ACTIONS(485),
    [anon_sym_default] = ACTIONS(485),
    [sym_comment] = ACTIONS(44),
  },
  [240] = {
    [sym__semicolon] = ACTIONS(725),
    [sym_comment] = ACTIONS(44),
  },
  [241] = {
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym_modifier] = STATE(67),
    [anon_sym_AT] = ACTIONS(169),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(177),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [sym_comment] = ACTIONS(44),
  },
  [242] = {
    [ts_builtin_sym_end] = ACTIONS(727),
    [sym__semicolon] = ACTIONS(727),
    [sym_decimal_integer_literal] = ACTIONS(729),
    [sym_hex_integer_literal] = ACTIONS(729),
    [sym_octal_integer_literal] = ACTIONS(729),
    [sym_binary_integer_literal] = ACTIONS(729),
    [sym_decimal_floating_point_literal] = ACTIONS(729),
    [sym_hex_floating_point_literal] = ACTIONS(731),
    [anon_sym_true] = ACTIONS(727),
    [anon_sym_false] = ACTIONS(727),
    [anon_sym_SQUOTE] = ACTIONS(727),
    [sym_string_literal] = ACTIONS(727),
    [sym_null_literal] = ACTIONS(727),
    [anon_sym_BANG] = ACTIONS(727),
    [anon_sym_TILDE] = ACTIONS(727),
    [anon_sym_PLUS_PLUS] = ACTIONS(727),
    [anon_sym_DASH_DASH] = ACTIONS(727),
    [anon_sym_if] = ACTIONS(727),
    [anon_sym_LBRACE] = ACTIONS(727),
    [anon_sym_RBRACE] = ACTIONS(727),
    [anon_sym_elseif] = ACTIONS(727),
    [anon_sym_AT] = ACTIONS(727),
    [anon_sym_open] = ACTIONS(727),
    [anon_sym_module] = ACTIONS(727),
    [anon_sym_static] = ACTIONS(727),
    [anon_sym_package] = ACTIONS(727),
    [anon_sym_import] = ACTIONS(727),
    [anon_sym_class] = ACTIONS(727),
    [anon_sym_public] = ACTIONS(727),
    [anon_sym_protected] = ACTIONS(727),
    [anon_sym_private] = ACTIONS(727),
    [anon_sym_abstract] = ACTIONS(727),
    [anon_sym_final] = ACTIONS(727),
    [anon_sym_strictfp] = ACTIONS(727),
    [anon_sym_default] = ACTIONS(727),
    [anon_sym_interface] = ACTIONS(727),
    [sym_comment] = ACTIONS(44),
  },
  [243] = {
    [sym__semicolon] = ACTIONS(733),
    [anon_sym_LBRACE] = ACTIONS(733),
    [anon_sym_RBRACE] = ACTIONS(733),
    [anon_sym_AT] = ACTIONS(733),
    [anon_sym_static] = ACTIONS(733),
    [anon_sym_class] = ACTIONS(733),
    [anon_sym_public] = ACTIONS(733),
    [anon_sym_protected] = ACTIONS(733),
    [anon_sym_private] = ACTIONS(733),
    [anon_sym_abstract] = ACTIONS(733),
    [anon_sym_final] = ACTIONS(733),
    [anon_sym_strictfp] = ACTIONS(733),
    [anon_sym_default] = ACTIONS(733),
    [anon_sym_interface] = ACTIONS(733),
    [sym_comment] = ACTIONS(44),
  },
  [244] = {
    [sym_type_argument] = STATE(357),
    [sym_reference_type] = STATE(358),
    [sym_class_or_interface_type] = STATE(359),
    [sym_primitive_type] = STATE(360),
    [sym_integral_type] = STATE(353),
    [sym_floating_point_type] = STATE(353),
    [sym__annotation] = STATE(361),
    [sym_normal_annotation] = STATE(362),
    [sym_marker_annotation] = STATE(362),
    [sym_single_element_annotation] = STATE(362),
    [aux_sym_class_or_interface_type_repeat1] = STATE(363),
    [anon_sym_boolean] = ACTIONS(735),
    [anon_sym_byte] = ACTIONS(737),
    [anon_sym_short] = ACTIONS(737),
    [anon_sym_int] = ACTIONS(737),
    [anon_sym_long] = ACTIONS(737),
    [anon_sym_char] = ACTIONS(737),
    [anon_sym_float] = ACTIONS(739),
    [anon_sym_double] = ACTIONS(739),
    [anon_sym_AT] = ACTIONS(741),
    [sym_identifier] = ACTIONS(743),
    [sym_comment] = ACTIONS(44),
  },
  [245] = {
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [aux_sym_class_or_interface_type_repeat1] = STATE(365),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(745),
    [sym_comment] = ACTIONS(44),
  },
  [246] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(366),
    [anon_sym_GT] = ACTIONS(747),
    [anon_sym_AMP] = ACTIONS(747),
    [anon_sym_LBRACE] = ACTIONS(747),
    [anon_sym_COMMA] = ACTIONS(747),
    [anon_sym_DOT] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(747),
    [anon_sym_AT] = ACTIONS(747),
    [anon_sym_implements] = ACTIONS(747),
    [sym_comment] = ACTIONS(44),
  },
  [247] = {
    [anon_sym_GT] = ACTIONS(747),
    [anon_sym_AMP] = ACTIONS(747),
    [anon_sym_LBRACE] = ACTIONS(747),
    [anon_sym_COMMA] = ACTIONS(747),
    [anon_sym_DOT] = ACTIONS(749),
    [anon_sym_LBRACK] = ACTIONS(747),
    [anon_sym_AT] = ACTIONS(747),
    [anon_sym_implements] = ACTIONS(747),
    [sym_comment] = ACTIONS(44),
  },
  [248] = {
    [sym_type_arguments] = STATE(368),
    [aux_sym_class_or_interface_type_repeat2] = STATE(366),
    [anon_sym_GT] = ACTIONS(747),
    [anon_sym_LT] = ACTIONS(501),
    [anon_sym_AMP] = ACTIONS(747),
    [anon_sym_LBRACE] = ACTIONS(747),
    [anon_sym_COMMA] = ACTIONS(747),
    [anon_sym_DOT] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(747),
    [anon_sym_AT] = ACTIONS(747),
    [anon_sym_implements] = ACTIONS(747),
    [sym_comment] = ACTIONS(44),
  },
  [249] = {
    [sym_class_or_interface_type] = STATE(369),
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [aux_sym_class_or_interface_type_repeat1] = STATE(145),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(331),
    [sym_comment] = ACTIONS(44),
  },
  [250] = {
    [anon_sym_LBRACE] = ACTIONS(751),
    [anon_sym_COMMA] = ACTIONS(753),
    [sym_comment] = ACTIONS(44),
  },
  [251] = {
    [sym_class_body] = STATE(371),
    [anon_sym_LBRACE] = ACTIONS(225),
    [sym_comment] = ACTIONS(44),
  },
  [252] = {
    [ts_builtin_sym_end] = ACTIONS(755),
    [sym__semicolon] = ACTIONS(755),
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
    [anon_sym_LBRACE] = ACTIONS(755),
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
    [anon_sym_interface] = ACTIONS(755),
    [sym_comment] = ACTIONS(44),
  },
  [253] = {
    [sym_identifier] = ACTIONS(761),
    [sym_comment] = ACTIONS(44),
  },
  [254] = {
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_static] = ACTIONS(201),
    [anon_sym_class] = ACTIONS(201),
    [anon_sym_public] = ACTIONS(201),
    [anon_sym_protected] = ACTIONS(201),
    [anon_sym_private] = ACTIONS(201),
    [anon_sym_abstract] = ACTIONS(201),
    [anon_sym_final] = ACTIONS(201),
    [anon_sym_strictfp] = ACTIONS(201),
    [anon_sym_default] = ACTIONS(201),
    [anon_sym_interface] = ACTIONS(201),
    [sym_result] = ACTIONS(201),
    [sym_identifier] = ACTIONS(667),
    [sym_comment] = ACTIONS(44),
  },
  [255] = {
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(763),
    [anon_sym_DOT] = ACTIONS(765),
    [anon_sym_AT] = ACTIONS(203),
    [anon_sym_static] = ACTIONS(695),
    [anon_sym_class] = ACTIONS(695),
    [anon_sym_public] = ACTIONS(695),
    [anon_sym_protected] = ACTIONS(695),
    [anon_sym_private] = ACTIONS(695),
    [anon_sym_abstract] = ACTIONS(695),
    [anon_sym_final] = ACTIONS(695),
    [anon_sym_strictfp] = ACTIONS(695),
    [anon_sym_default] = ACTIONS(695),
    [anon_sym_interface] = ACTIONS(695),
    [sym_result] = ACTIONS(695),
    [sym_identifier] = ACTIONS(767),
    [sym_comment] = ACTIONS(44),
  },
  [256] = {
    [sym_type_parameters] = STATE(376),
    [sym_superclass] = STATE(377),
    [sym_super_interfaces] = STATE(378),
    [sym_class_body] = STATE(379),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(769),
    [anon_sym_extends] = ACTIONS(227),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [257] = {
    [sym_type_parameters] = STATE(381),
    [sym_extends_interfaces] = STATE(382),
    [sym_interface_body] = STATE(383),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(771),
    [anon_sym_extends] = ACTIONS(233),
    [sym_comment] = ACTIONS(44),
  },
  [258] = {
    [anon_sym_LPAREN] = ACTIONS(773),
    [sym_comment] = ACTIONS(44),
  },
  [259] = {
    [sym_throws] = STATE(386),
    [sym__semicolon] = ACTIONS(775),
    [anon_sym_LBRACE] = ACTIONS(775),
    [anon_sym_throws] = ACTIONS(777),
    [sym_comment] = ACTIONS(44),
  },
  [260] = {
    [anon_sym_RBRACK] = ACTIONS(779),
    [sym_comment] = ACTIONS(44),
  },
  [261] = {
    [sym__semicolon] = ACTIONS(781),
    [anon_sym_EQ] = ACTIONS(781),
    [anon_sym_RPAREN] = ACTIONS(781),
    [anon_sym_COMMA] = ACTIONS(781),
    [sym_comment] = ACTIONS(44),
  },
  [262] = {
    [sym__annotation] = STATE(63),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [anon_sym_LBRACK] = ACTIONS(783),
    [anon_sym_AT] = ACTIONS(169),
    [sym_comment] = ACTIONS(44),
  },
  [263] = {
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [aux_sym_class_or_interface_type_repeat1] = STATE(389),
    [sym__semicolon] = ACTIONS(785),
    [anon_sym_EQ] = ACTIONS(785),
    [anon_sym_GT] = ACTIONS(785),
    [anon_sym_RPAREN] = ACTIONS(785),
    [anon_sym_LBRACE] = ACTIONS(785),
    [anon_sym_COMMA] = ACTIONS(785),
    [anon_sym_LBRACK] = ACTIONS(783),
    [anon_sym_AT] = ACTIONS(169),
    [anon_sym_default] = ACTIONS(785),
    [anon_sym_throws] = ACTIONS(785),
    [sym_comment] = ACTIONS(44),
  },
  [264] = {
    [sym_method_declarator] = STATE(390),
    [sym_identifier] = ACTIONS(541),
    [sym_comment] = ACTIONS(44),
  },
  [265] = {
    [anon_sym_AT] = ACTIONS(127),
    [sym_result] = ACTIONS(127),
    [sym_comment] = ACTIONS(44),
  },
  [266] = {
    [sym__annotation] = STATE(63),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [anon_sym_AT] = ACTIONS(169),
    [sym_result] = ACTIONS(787),
    [sym_comment] = ACTIONS(44),
  },
  [267] = {
    [sym__semicolon] = ACTIONS(789),
    [anon_sym_LT] = ACTIONS(789),
    [anon_sym_RBRACE] = ACTIONS(789),
    [anon_sym_AT] = ACTIONS(789),
    [anon_sym_static] = ACTIONS(791),
    [anon_sym_class] = ACTIONS(791),
    [anon_sym_public] = ACTIONS(791),
    [anon_sym_protected] = ACTIONS(791),
    [anon_sym_private] = ACTIONS(791),
    [anon_sym_abstract] = ACTIONS(791),
    [anon_sym_final] = ACTIONS(791),
    [anon_sym_strictfp] = ACTIONS(791),
    [anon_sym_default] = ACTIONS(791),
    [anon_sym_interface] = ACTIONS(791),
    [sym_result] = ACTIONS(791),
    [sym_identifier] = ACTIONS(793),
    [sym_comment] = ACTIONS(44),
  },
  [268] = {
    [sym_variable_declarator] = STATE(392),
    [sym_variable_declarator_id] = STATE(165),
    [sym_identifier] = ACTIONS(795),
    [sym_comment] = ACTIONS(44),
  },
  [269] = {
    [sym__semicolon] = ACTIONS(797),
    [anon_sym_COMMA] = ACTIONS(799),
    [sym_comment] = ACTIONS(44),
  },
  [270] = {
    [sym__semicolon] = ACTIONS(801),
    [anon_sym_RPAREN] = ACTIONS(801),
    [anon_sym_COMMA] = ACTIONS(801),
    [sym_comment] = ACTIONS(44),
  },
  [271] = {
    [sym__semicolon] = ACTIONS(803),
    [anon_sym_LT] = ACTIONS(803),
    [anon_sym_RBRACE] = ACTIONS(803),
    [anon_sym_AT] = ACTIONS(803),
    [anon_sym_static] = ACTIONS(805),
    [anon_sym_class] = ACTIONS(805),
    [anon_sym_public] = ACTIONS(805),
    [anon_sym_protected] = ACTIONS(805),
    [anon_sym_private] = ACTIONS(805),
    [anon_sym_abstract] = ACTIONS(805),
    [anon_sym_final] = ACTIONS(805),
    [anon_sym_strictfp] = ACTIONS(805),
    [anon_sym_default] = ACTIONS(805),
    [anon_sym_interface] = ACTIONS(805),
    [sym_result] = ACTIONS(805),
    [sym_identifier] = ACTIONS(807),
    [sym_comment] = ACTIONS(44),
  },
  [272] = {
    [sym__semicolon] = ACTIONS(809),
    [anon_sym_LT] = ACTIONS(809),
    [anon_sym_RBRACE] = ACTIONS(809),
    [anon_sym_AT] = ACTIONS(809),
    [anon_sym_static] = ACTIONS(811),
    [anon_sym_class] = ACTIONS(811),
    [anon_sym_public] = ACTIONS(811),
    [anon_sym_protected] = ACTIONS(811),
    [anon_sym_private] = ACTIONS(811),
    [anon_sym_abstract] = ACTIONS(811),
    [anon_sym_final] = ACTIONS(811),
    [anon_sym_strictfp] = ACTIONS(811),
    [anon_sym_default] = ACTIONS(811),
    [anon_sym_interface] = ACTIONS(811),
    [sym_result] = ACTIONS(811),
    [sym_identifier] = ACTIONS(813),
    [sym_comment] = ACTIONS(44),
  },
  [273] = {
    [sym_package_or_type_name] = STATE(255),
    [anon_sym_interface] = ACTIONS(815),
    [sym_identifier] = ACTIONS(535),
    [sym_comment] = ACTIONS(44),
  },
  [274] = {
    [sym_identifier] = ACTIONS(817),
    [sym_comment] = ACTIONS(44),
  },
  [275] = {
    [sym_identifier] = ACTIONS(819),
    [sym_comment] = ACTIONS(44),
  },
  [276] = {
    [sym__semicolon] = ACTIONS(821),
    [sym_comment] = ACTIONS(44),
  },
  [277] = {
    [sym_method_body] = STATE(398),
    [sym_block] = STATE(271),
    [sym__semicolon] = ACTIONS(567),
    [anon_sym_LBRACE] = ACTIONS(327),
    [sym_comment] = ACTIONS(44),
  },
  [278] = {
    [ts_builtin_sym_end] = ACTIONS(823),
    [sym__semicolon] = ACTIONS(823),
    [sym_decimal_integer_literal] = ACTIONS(825),
    [sym_hex_integer_literal] = ACTIONS(825),
    [sym_octal_integer_literal] = ACTIONS(825),
    [sym_binary_integer_literal] = ACTIONS(825),
    [sym_decimal_floating_point_literal] = ACTIONS(825),
    [sym_hex_floating_point_literal] = ACTIONS(827),
    [anon_sym_true] = ACTIONS(823),
    [anon_sym_false] = ACTIONS(823),
    [anon_sym_SQUOTE] = ACTIONS(823),
    [sym_string_literal] = ACTIONS(823),
    [sym_null_literal] = ACTIONS(823),
    [anon_sym_BANG] = ACTIONS(823),
    [anon_sym_TILDE] = ACTIONS(823),
    [anon_sym_PLUS_PLUS] = ACTIONS(823),
    [anon_sym_DASH_DASH] = ACTIONS(823),
    [anon_sym_if] = ACTIONS(823),
    [anon_sym_LBRACE] = ACTIONS(823),
    [anon_sym_RBRACE] = ACTIONS(823),
    [anon_sym_elseif] = ACTIONS(823),
    [anon_sym_AT] = ACTIONS(823),
    [anon_sym_open] = ACTIONS(823),
    [anon_sym_module] = ACTIONS(823),
    [anon_sym_static] = ACTIONS(823),
    [anon_sym_package] = ACTIONS(823),
    [anon_sym_import] = ACTIONS(823),
    [anon_sym_class] = ACTIONS(823),
    [anon_sym_public] = ACTIONS(823),
    [anon_sym_protected] = ACTIONS(823),
    [anon_sym_private] = ACTIONS(823),
    [anon_sym_abstract] = ACTIONS(823),
    [anon_sym_final] = ACTIONS(823),
    [anon_sym_strictfp] = ACTIONS(823),
    [anon_sym_default] = ACTIONS(823),
    [anon_sym_interface] = ACTIONS(823),
    [sym_comment] = ACTIONS(44),
  },
  [279] = {
    [sym__semicolon] = ACTIONS(829),
    [anon_sym_LT] = ACTIONS(829),
    [anon_sym_RBRACE] = ACTIONS(829),
    [anon_sym_AT] = ACTIONS(829),
    [anon_sym_static] = ACTIONS(831),
    [anon_sym_class] = ACTIONS(831),
    [anon_sym_public] = ACTIONS(831),
    [anon_sym_protected] = ACTIONS(831),
    [anon_sym_private] = ACTIONS(831),
    [anon_sym_abstract] = ACTIONS(831),
    [anon_sym_final] = ACTIONS(831),
    [anon_sym_strictfp] = ACTIONS(831),
    [anon_sym_default] = ACTIONS(831),
    [anon_sym_interface] = ACTIONS(831),
    [sym_result] = ACTIONS(831),
    [sym_identifier] = ACTIONS(833),
    [sym_comment] = ACTIONS(44),
  },
  [280] = {
    [ts_builtin_sym_end] = ACTIONS(835),
    [sym__semicolon] = ACTIONS(835),
    [sym_decimal_integer_literal] = ACTIONS(837),
    [sym_hex_integer_literal] = ACTIONS(837),
    [sym_octal_integer_literal] = ACTIONS(837),
    [sym_binary_integer_literal] = ACTIONS(837),
    [sym_decimal_floating_point_literal] = ACTIONS(837),
    [sym_hex_floating_point_literal] = ACTIONS(839),
    [anon_sym_true] = ACTIONS(835),
    [anon_sym_false] = ACTIONS(835),
    [anon_sym_SQUOTE] = ACTIONS(835),
    [sym_string_literal] = ACTIONS(835),
    [sym_null_literal] = ACTIONS(835),
    [anon_sym_BANG] = ACTIONS(835),
    [anon_sym_TILDE] = ACTIONS(835),
    [anon_sym_PLUS_PLUS] = ACTIONS(835),
    [anon_sym_DASH_DASH] = ACTIONS(835),
    [anon_sym_if] = ACTIONS(835),
    [anon_sym_LBRACE] = ACTIONS(835),
    [anon_sym_RBRACE] = ACTIONS(835),
    [anon_sym_elseif] = ACTIONS(835),
    [anon_sym_AT] = ACTIONS(835),
    [anon_sym_open] = ACTIONS(835),
    [anon_sym_module] = ACTIONS(835),
    [anon_sym_static] = ACTIONS(835),
    [anon_sym_package] = ACTIONS(835),
    [anon_sym_import] = ACTIONS(835),
    [anon_sym_class] = ACTIONS(835),
    [anon_sym_public] = ACTIONS(835),
    [anon_sym_protected] = ACTIONS(835),
    [anon_sym_private] = ACTIONS(835),
    [anon_sym_abstract] = ACTIONS(835),
    [anon_sym_final] = ACTIONS(835),
    [anon_sym_strictfp] = ACTIONS(835),
    [anon_sym_default] = ACTIONS(835),
    [anon_sym_interface] = ACTIONS(835),
    [sym_comment] = ACTIONS(44),
  },
  [281] = {
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_PLUS_EQ] = ACTIONS(369),
    [anon_sym_DASH_EQ] = ACTIONS(369),
    [anon_sym_STAR_EQ] = ACTIONS(369),
    [anon_sym_SLASH_EQ] = ACTIONS(369),
    [anon_sym_AMP_EQ] = ACTIONS(369),
    [anon_sym_PIPE_EQ] = ACTIONS(369),
    [anon_sym_CARET_EQ] = ACTIONS(369),
    [anon_sym_PERCENT_EQ] = ACTIONS(369),
    [anon_sym_LT_LT_EQ] = ACTIONS(369),
    [anon_sym_GT_GT_EQ] = ACTIONS(369),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(373),
    [anon_sym_GT_EQ] = ACTIONS(373),
    [anon_sym_LT_EQ] = ACTIONS(373),
    [anon_sym_BANG_EQ] = ACTIONS(373),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_CARET] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(381),
    [anon_sym_GT_GT] = ACTIONS(381),
    [anon_sym_GT_GT_GT] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(361),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [282] = {
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(365),
    [anon_sym_EQ_EQ] = ACTIONS(363),
    [anon_sym_GT_EQ] = ACTIONS(363),
    [anon_sym_LT_EQ] = ACTIONS(363),
    [anon_sym_BANG_EQ] = ACTIONS(363),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(381),
    [anon_sym_GT_GT] = ACTIONS(381),
    [anon_sym_GT_GT_GT] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [283] = {
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(373),
    [anon_sym_GT_EQ] = ACTIONS(373),
    [anon_sym_LT_EQ] = ACTIONS(373),
    [anon_sym_BANG_EQ] = ACTIONS(373),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(381),
    [anon_sym_GT_GT] = ACTIONS(381),
    [anon_sym_GT_GT_GT] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [284] = {
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(373),
    [anon_sym_GT_EQ] = ACTIONS(373),
    [anon_sym_LT_EQ] = ACTIONS(373),
    [anon_sym_BANG_EQ] = ACTIONS(373),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(381),
    [anon_sym_GT_GT] = ACTIONS(381),
    [anon_sym_GT_GT_GT] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [285] = {
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(373),
    [anon_sym_GT_EQ] = ACTIONS(373),
    [anon_sym_LT_EQ] = ACTIONS(373),
    [anon_sym_BANG_EQ] = ACTIONS(373),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(381),
    [anon_sym_GT_GT] = ACTIONS(381),
    [anon_sym_GT_GT_GT] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [286] = {
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_PLUS_EQ] = ACTIONS(369),
    [anon_sym_DASH_EQ] = ACTIONS(369),
    [anon_sym_STAR_EQ] = ACTIONS(369),
    [anon_sym_SLASH_EQ] = ACTIONS(369),
    [anon_sym_AMP_EQ] = ACTIONS(369),
    [anon_sym_PIPE_EQ] = ACTIONS(369),
    [anon_sym_CARET_EQ] = ACTIONS(369),
    [anon_sym_PERCENT_EQ] = ACTIONS(369),
    [anon_sym_LT_LT_EQ] = ACTIONS(369),
    [anon_sym_GT_GT_EQ] = ACTIONS(369),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(373),
    [anon_sym_GT_EQ] = ACTIONS(373),
    [anon_sym_LT_EQ] = ACTIONS(373),
    [anon_sym_BANG_EQ] = ACTIONS(373),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_CARET] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(381),
    [anon_sym_GT_GT] = ACTIONS(381),
    [anon_sym_GT_GT_GT] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(841),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [287] = {
    [sym__semicolon] = ACTIONS(843),
    [anon_sym_EQ] = ACTIONS(845),
    [anon_sym_PLUS_EQ] = ACTIONS(843),
    [anon_sym_DASH_EQ] = ACTIONS(843),
    [anon_sym_STAR_EQ] = ACTIONS(843),
    [anon_sym_SLASH_EQ] = ACTIONS(843),
    [anon_sym_AMP_EQ] = ACTIONS(843),
    [anon_sym_PIPE_EQ] = ACTIONS(843),
    [anon_sym_CARET_EQ] = ACTIONS(843),
    [anon_sym_PERCENT_EQ] = ACTIONS(843),
    [anon_sym_LT_LT_EQ] = ACTIONS(843),
    [anon_sym_GT_GT_EQ] = ACTIONS(843),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(843),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_EQ_EQ] = ACTIONS(98),
    [anon_sym_GT_EQ] = ACTIONS(98),
    [anon_sym_LT_EQ] = ACTIONS(98),
    [anon_sym_BANG_EQ] = ACTIONS(98),
    [anon_sym_AMP_AMP] = ACTIONS(100),
    [anon_sym_PIPE_PIPE] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_AMP] = ACTIONS(108),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(110),
    [anon_sym_PERCENT] = ACTIONS(106),
    [anon_sym_LT_LT] = ACTIONS(106),
    [anon_sym_GT_GT] = ACTIONS(106),
    [anon_sym_GT_GT_GT] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(112),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [288] = {
    [sym_module_directive] = STATE(125),
    [aux_sym_module_declaration_repeat1] = STATE(400),
    [anon_sym_RBRACE] = ACTIONS(649),
    [anon_sym_requires] = ACTIONS(295),
    [anon_sym_exports] = ACTIONS(297),
    [anon_sym_opens] = ACTIONS(297),
    [anon_sym_uses] = ACTIONS(299),
    [anon_sym_provides] = ACTIONS(301),
    [sym_comment] = ACTIONS(44),
  },
  [289] = {
    [ts_builtin_sym_end] = ACTIONS(847),
    [sym_decimal_integer_literal] = ACTIONS(849),
    [sym_hex_integer_literal] = ACTIONS(849),
    [sym_octal_integer_literal] = ACTIONS(849),
    [sym_binary_integer_literal] = ACTIONS(849),
    [sym_decimal_floating_point_literal] = ACTIONS(849),
    [sym_hex_floating_point_literal] = ACTIONS(851),
    [anon_sym_true] = ACTIONS(847),
    [anon_sym_false] = ACTIONS(847),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [sym_string_literal] = ACTIONS(847),
    [sym_null_literal] = ACTIONS(847),
    [anon_sym_BANG] = ACTIONS(847),
    [anon_sym_TILDE] = ACTIONS(847),
    [anon_sym_PLUS_PLUS] = ACTIONS(847),
    [anon_sym_DASH_DASH] = ACTIONS(847),
    [anon_sym_if] = ACTIONS(847),
    [anon_sym_RBRACE] = ACTIONS(847),
    [anon_sym_elseif] = ACTIONS(847),
    [anon_sym_AT] = ACTIONS(847),
    [anon_sym_open] = ACTIONS(847),
    [anon_sym_module] = ACTIONS(847),
    [anon_sym_static] = ACTIONS(847),
    [anon_sym_package] = ACTIONS(847),
    [anon_sym_import] = ACTIONS(847),
    [anon_sym_class] = ACTIONS(847),
    [anon_sym_public] = ACTIONS(847),
    [anon_sym_protected] = ACTIONS(847),
    [anon_sym_private] = ACTIONS(847),
    [anon_sym_abstract] = ACTIONS(847),
    [anon_sym_final] = ACTIONS(847),
    [anon_sym_strictfp] = ACTIONS(847),
    [anon_sym_default] = ACTIONS(847),
    [anon_sym_interface] = ACTIONS(847),
    [sym_comment] = ACTIONS(44),
  },
  [290] = {
    [ts_builtin_sym_end] = ACTIONS(853),
    [sym__semicolon] = ACTIONS(853),
    [sym_decimal_integer_literal] = ACTIONS(855),
    [sym_hex_integer_literal] = ACTIONS(855),
    [sym_octal_integer_literal] = ACTIONS(855),
    [sym_binary_integer_literal] = ACTIONS(855),
    [sym_decimal_floating_point_literal] = ACTIONS(855),
    [sym_hex_floating_point_literal] = ACTIONS(857),
    [anon_sym_true] = ACTIONS(853),
    [anon_sym_false] = ACTIONS(853),
    [anon_sym_SQUOTE] = ACTIONS(853),
    [sym_string_literal] = ACTIONS(853),
    [sym_null_literal] = ACTIONS(853),
    [anon_sym_BANG] = ACTIONS(853),
    [anon_sym_TILDE] = ACTIONS(853),
    [anon_sym_PLUS_PLUS] = ACTIONS(853),
    [anon_sym_DASH_DASH] = ACTIONS(853),
    [anon_sym_if] = ACTIONS(853),
    [anon_sym_LBRACE] = ACTIONS(853),
    [anon_sym_RBRACE] = ACTIONS(853),
    [anon_sym_elseif] = ACTIONS(853),
    [anon_sym_AT] = ACTIONS(853),
    [anon_sym_open] = ACTIONS(853),
    [anon_sym_module] = ACTIONS(853),
    [anon_sym_static] = ACTIONS(853),
    [anon_sym_package] = ACTIONS(853),
    [anon_sym_import] = ACTIONS(853),
    [anon_sym_class] = ACTIONS(853),
    [anon_sym_public] = ACTIONS(853),
    [anon_sym_protected] = ACTIONS(853),
    [anon_sym_private] = ACTIONS(853),
    [anon_sym_abstract] = ACTIONS(853),
    [anon_sym_final] = ACTIONS(853),
    [anon_sym_strictfp] = ACTIONS(853),
    [anon_sym_default] = ACTIONS(853),
    [anon_sym_interface] = ACTIONS(853),
    [sym_comment] = ACTIONS(44),
  },
  [291] = {
    [sym_super_interfaces] = STATE(401),
    [sym_class_body] = STATE(371),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [292] = {
    [sym_interface_body] = STATE(402),
    [anon_sym_LBRACE] = ACTIONS(231),
    [sym_comment] = ACTIONS(44),
  },
  [293] = {
    [sym_identifier] = ACTIONS(859),
    [sym_comment] = ACTIONS(44),
  },
  [294] = {
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_static] = ACTIONS(201),
    [anon_sym_class] = ACTIONS(201),
    [anon_sym_public] = ACTIONS(201),
    [anon_sym_protected] = ACTIONS(201),
    [anon_sym_private] = ACTIONS(201),
    [anon_sym_abstract] = ACTIONS(201),
    [anon_sym_final] = ACTIONS(201),
    [anon_sym_strictfp] = ACTIONS(201),
    [anon_sym_default] = ACTIONS(201),
    [anon_sym_interface] = ACTIONS(201),
    [sym_identifier] = ACTIONS(667),
    [sym_comment] = ACTIONS(44),
  },
  [295] = {
    [anon_sym_LPAREN] = ACTIONS(861),
    [anon_sym_DOT] = ACTIONS(863),
    [anon_sym_AT] = ACTIONS(203),
    [anon_sym_static] = ACTIONS(695),
    [anon_sym_class] = ACTIONS(695),
    [anon_sym_public] = ACTIONS(695),
    [anon_sym_protected] = ACTIONS(695),
    [anon_sym_private] = ACTIONS(695),
    [anon_sym_abstract] = ACTIONS(695),
    [anon_sym_final] = ACTIONS(695),
    [anon_sym_strictfp] = ACTIONS(695),
    [anon_sym_default] = ACTIONS(695),
    [anon_sym_interface] = ACTIONS(695),
    [sym_identifier] = ACTIONS(767),
    [sym_comment] = ACTIONS(44),
  },
  [296] = {
    [sym_type_parameters] = STATE(407),
    [sym_superclass] = STATE(408),
    [sym_super_interfaces] = STATE(409),
    [sym_class_body] = STATE(410),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(865),
    [anon_sym_extends] = ACTIONS(227),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [297] = {
    [sym_type_parameters] = STATE(412),
    [sym_extends_interfaces] = STATE(413),
    [sym_interface_body] = STATE(414),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(867),
    [anon_sym_extends] = ACTIONS(233),
    [sym_comment] = ACTIONS(44),
  },
  [298] = {
    [anon_sym_RPAREN] = ACTIONS(869),
    [sym_comment] = ACTIONS(44),
  },
  [299] = {
    [anon_sym_RBRACE] = ACTIONS(789),
    [anon_sym_AT] = ACTIONS(789),
    [anon_sym_static] = ACTIONS(791),
    [anon_sym_class] = ACTIONS(791),
    [anon_sym_public] = ACTIONS(791),
    [anon_sym_protected] = ACTIONS(791),
    [anon_sym_private] = ACTIONS(791),
    [anon_sym_abstract] = ACTIONS(791),
    [anon_sym_final] = ACTIONS(791),
    [anon_sym_strictfp] = ACTIONS(791),
    [anon_sym_default] = ACTIONS(791),
    [anon_sym_interface] = ACTIONS(791),
    [sym_identifier] = ACTIONS(793),
    [sym_comment] = ACTIONS(44),
  },
  [300] = {
    [sym_package_or_type_name] = STATE(295),
    [anon_sym_interface] = ACTIONS(871),
    [sym_identifier] = ACTIONS(597),
    [sym_comment] = ACTIONS(44),
  },
  [301] = {
    [sym_identifier] = ACTIONS(873),
    [sym_comment] = ACTIONS(44),
  },
  [302] = {
    [sym_identifier] = ACTIONS(875),
    [sym_comment] = ACTIONS(44),
  },
  [303] = {
    [sym_dims] = STATE(261),
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [aux_sym_class_or_interface_type_repeat1] = STATE(262),
    [aux_sym_dims_repeat1] = STATE(263),
    [sym__semicolon] = ACTIONS(543),
    [anon_sym_EQ] = ACTIONS(543),
    [anon_sym_LPAREN] = ACTIONS(877),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_LBRACK] = ACTIONS(545),
    [anon_sym_AT] = ACTIONS(169),
    [sym_comment] = ACTIONS(44),
  },
  [304] = {
    [anon_sym_AT] = ACTIONS(263),
    [anon_sym_static] = ACTIONS(265),
    [anon_sym_class] = ACTIONS(265),
    [anon_sym_public] = ACTIONS(265),
    [anon_sym_protected] = ACTIONS(265),
    [anon_sym_private] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(265),
    [anon_sym_final] = ACTIONS(265),
    [anon_sym_strictfp] = ACTIONS(265),
    [anon_sym_default] = ACTIONS(265),
    [anon_sym_interface] = ACTIONS(265),
    [sym_identifier] = ACTIONS(267),
    [sym_comment] = ACTIONS(44),
  },
  [305] = {
    [sym__semicolon] = ACTIONS(879),
    [sym_comment] = ACTIONS(44),
  },
  [306] = {
    [ts_builtin_sym_end] = ACTIONS(881),
    [sym__semicolon] = ACTIONS(881),
    [sym_decimal_integer_literal] = ACTIONS(883),
    [sym_hex_integer_literal] = ACTIONS(883),
    [sym_octal_integer_literal] = ACTIONS(883),
    [sym_binary_integer_literal] = ACTIONS(883),
    [sym_decimal_floating_point_literal] = ACTIONS(883),
    [sym_hex_floating_point_literal] = ACTIONS(885),
    [anon_sym_true] = ACTIONS(881),
    [anon_sym_false] = ACTIONS(881),
    [anon_sym_SQUOTE] = ACTIONS(881),
    [sym_string_literal] = ACTIONS(881),
    [sym_null_literal] = ACTIONS(881),
    [anon_sym_BANG] = ACTIONS(881),
    [anon_sym_TILDE] = ACTIONS(881),
    [anon_sym_PLUS_PLUS] = ACTIONS(881),
    [anon_sym_DASH_DASH] = ACTIONS(881),
    [anon_sym_if] = ACTIONS(881),
    [anon_sym_LBRACE] = ACTIONS(881),
    [anon_sym_RBRACE] = ACTIONS(881),
    [anon_sym_elseif] = ACTIONS(881),
    [anon_sym_AT] = ACTIONS(881),
    [anon_sym_open] = ACTIONS(881),
    [anon_sym_module] = ACTIONS(881),
    [anon_sym_static] = ACTIONS(881),
    [anon_sym_package] = ACTIONS(881),
    [anon_sym_import] = ACTIONS(881),
    [anon_sym_class] = ACTIONS(881),
    [anon_sym_public] = ACTIONS(881),
    [anon_sym_protected] = ACTIONS(881),
    [anon_sym_private] = ACTIONS(881),
    [anon_sym_abstract] = ACTIONS(881),
    [anon_sym_final] = ACTIONS(881),
    [anon_sym_strictfp] = ACTIONS(881),
    [anon_sym_default] = ACTIONS(881),
    [anon_sym_interface] = ACTIONS(881),
    [sym_comment] = ACTIONS(44),
  },
  [307] = {
    [anon_sym_RBRACE] = ACTIONS(887),
    [anon_sym_AT] = ACTIONS(887),
    [anon_sym_static] = ACTIONS(889),
    [anon_sym_class] = ACTIONS(889),
    [anon_sym_public] = ACTIONS(889),
    [anon_sym_protected] = ACTIONS(889),
    [anon_sym_private] = ACTIONS(889),
    [anon_sym_abstract] = ACTIONS(889),
    [anon_sym_final] = ACTIONS(889),
    [anon_sym_strictfp] = ACTIONS(889),
    [anon_sym_default] = ACTIONS(889),
    [anon_sym_interface] = ACTIONS(889),
    [sym_identifier] = ACTIONS(891),
    [sym_comment] = ACTIONS(44),
  },
  [308] = {
    [sym__expression] = STATE(423),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(893),
    [anon_sym_TILDE] = ACTIONS(893),
    [anon_sym_PLUS_PLUS] = ACTIONS(895),
    [anon_sym_DASH_DASH] = ACTIONS(895),
    [sym_comment] = ACTIONS(44),
  },
  [309] = {
    [sym__literal] = STATE(310),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(311),
    [sym__annotation] = STATE(310),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym_element_value] = STATE(427),
    [sym_element_value_array_initializer] = STATE(310),
    [sym_conditional_expression] = STATE(310),
    [sym_conditional_or_expression] = STATE(428),
    [sym_conditional_and_expression] = STATE(429),
    [sym_inclusive_or_expression] = STATE(430),
    [sym_exclusive_or_expression] = STATE(431),
    [sym_and_expression] = STATE(317),
    [sym_relational_expression] = STATE(432),
    [sym_equality_expression] = STATE(433),
    [sym_shift_expression] = STATE(434),
    [sym_additive_expression] = STATE(435),
    [sym_multiplicative_expression] = STATE(436),
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
    [anon_sym_BANG] = ACTIONS(897),
    [anon_sym_TILDE] = ACTIONS(897),
    [anon_sym_LBRACE] = ACTIONS(631),
    [anon_sym_RBRACE] = ACTIONS(899),
    [anon_sym_COMMA] = ACTIONS(901),
    [anon_sym_AT] = ACTIONS(169),
    [sym_comment] = ACTIONS(44),
  },
  [310] = {
    [sym__semicolon] = ACTIONS(903),
    [anon_sym_RPAREN] = ACTIONS(903),
    [anon_sym_RBRACE] = ACTIONS(903),
    [anon_sym_COMMA] = ACTIONS(903),
    [sym_comment] = ACTIONS(44),
  },
  [311] = {
    [sym__semicolon] = ACTIONS(905),
    [anon_sym_LT] = ACTIONS(907),
    [anon_sym_EQ_EQ] = ACTIONS(905),
    [anon_sym_BANG_EQ] = ACTIONS(905),
    [anon_sym_AMP_AMP] = ACTIONS(905),
    [anon_sym_PIPE_PIPE] = ACTIONS(905),
    [anon_sym_PLUS] = ACTIONS(905),
    [anon_sym_DASH] = ACTIONS(905),
    [anon_sym_STAR] = ACTIONS(905),
    [anon_sym_SLASH] = ACTIONS(907),
    [anon_sym_PIPE] = ACTIONS(907),
    [anon_sym_CARET] = ACTIONS(905),
    [anon_sym_PERCENT] = ACTIONS(905),
    [anon_sym_LT_LT] = ACTIONS(905),
    [anon_sym_GT_GT] = ACTIONS(907),
    [anon_sym_GT_GT_GT] = ACTIONS(905),
    [anon_sym_QMARK] = ACTIONS(905),
    [anon_sym_RPAREN] = ACTIONS(905),
    [anon_sym_RBRACE] = ACTIONS(905),
    [anon_sym_COMMA] = ACTIONS(905),
    [sym_comment] = ACTIONS(44),
  },
  [312] = {
    [anon_sym_RPAREN] = ACTIONS(909),
    [anon_sym_COMMA] = ACTIONS(909),
    [sym_comment] = ACTIONS(44),
  },
  [313] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(911),
    [anon_sym_QMARK] = ACTIONS(913),
    [anon_sym_RPAREN] = ACTIONS(915),
    [anon_sym_COMMA] = ACTIONS(915),
    [sym_comment] = ACTIONS(44),
  },
  [314] = {
    [anon_sym_AMP_AMP] = ACTIONS(917),
    [anon_sym_PIPE_PIPE] = ACTIONS(919),
    [anon_sym_QMARK] = ACTIONS(919),
    [anon_sym_RPAREN] = ACTIONS(919),
    [anon_sym_COMMA] = ACTIONS(919),
    [sym_comment] = ACTIONS(44),
  },
  [315] = {
    [anon_sym_AMP_AMP] = ACTIONS(921),
    [anon_sym_PIPE_PIPE] = ACTIONS(921),
    [anon_sym_PIPE] = ACTIONS(923),
    [anon_sym_QMARK] = ACTIONS(921),
    [anon_sym_RPAREN] = ACTIONS(921),
    [anon_sym_COMMA] = ACTIONS(921),
    [sym_comment] = ACTIONS(44),
  },
  [316] = {
    [anon_sym_AMP_AMP] = ACTIONS(925),
    [anon_sym_PIPE_PIPE] = ACTIONS(925),
    [anon_sym_PIPE] = ACTIONS(927),
    [anon_sym_CARET] = ACTIONS(929),
    [anon_sym_QMARK] = ACTIONS(925),
    [anon_sym_RPAREN] = ACTIONS(925),
    [anon_sym_COMMA] = ACTIONS(925),
    [sym_comment] = ACTIONS(44),
  },
  [317] = {
    [sym__semicolon] = ACTIONS(931),
    [anon_sym_AMP_AMP] = ACTIONS(931),
    [anon_sym_PIPE_PIPE] = ACTIONS(931),
    [anon_sym_PIPE] = ACTIONS(933),
    [anon_sym_CARET] = ACTIONS(931),
    [anon_sym_QMARK] = ACTIONS(931),
    [anon_sym_RPAREN] = ACTIONS(931),
    [anon_sym_RBRACE] = ACTIONS(931),
    [anon_sym_COMMA] = ACTIONS(931),
    [sym_comment] = ACTIONS(44),
  },
  [318] = {
    [anon_sym_LT] = ACTIONS(935),
    [anon_sym_EQ_EQ] = ACTIONS(937),
    [anon_sym_BANG_EQ] = ACTIONS(937),
    [anon_sym_AMP_AMP] = ACTIONS(939),
    [anon_sym_PIPE_PIPE] = ACTIONS(939),
    [anon_sym_PIPE] = ACTIONS(941),
    [anon_sym_CARET] = ACTIONS(939),
    [anon_sym_QMARK] = ACTIONS(939),
    [anon_sym_RPAREN] = ACTIONS(939),
    [anon_sym_COMMA] = ACTIONS(939),
    [sym_comment] = ACTIONS(44),
  },
  [319] = {
    [anon_sym_EQ_EQ] = ACTIONS(943),
    [anon_sym_BANG_EQ] = ACTIONS(943),
    [sym_comment] = ACTIONS(44),
  },
  [320] = {
    [anon_sym_LT] = ACTIONS(945),
    [anon_sym_EQ_EQ] = ACTIONS(947),
    [anon_sym_BANG_EQ] = ACTIONS(947),
    [anon_sym_AMP_AMP] = ACTIONS(947),
    [anon_sym_PIPE_PIPE] = ACTIONS(947),
    [anon_sym_PIPE] = ACTIONS(945),
    [anon_sym_CARET] = ACTIONS(947),
    [anon_sym_LT_LT] = ACTIONS(949),
    [anon_sym_GT_GT] = ACTIONS(951),
    [anon_sym_GT_GT_GT] = ACTIONS(949),
    [anon_sym_QMARK] = ACTIONS(947),
    [anon_sym_RPAREN] = ACTIONS(947),
    [anon_sym_COMMA] = ACTIONS(947),
    [sym_comment] = ACTIONS(44),
  },
  [321] = {
    [anon_sym_LT] = ACTIONS(953),
    [anon_sym_EQ_EQ] = ACTIONS(955),
    [anon_sym_BANG_EQ] = ACTIONS(955),
    [anon_sym_AMP_AMP] = ACTIONS(955),
    [anon_sym_PIPE_PIPE] = ACTIONS(955),
    [anon_sym_PLUS] = ACTIONS(957),
    [anon_sym_DASH] = ACTIONS(957),
    [anon_sym_PIPE] = ACTIONS(953),
    [anon_sym_CARET] = ACTIONS(955),
    [anon_sym_LT_LT] = ACTIONS(955),
    [anon_sym_GT_GT] = ACTIONS(953),
    [anon_sym_GT_GT_GT] = ACTIONS(955),
    [anon_sym_QMARK] = ACTIONS(955),
    [anon_sym_RPAREN] = ACTIONS(955),
    [anon_sym_COMMA] = ACTIONS(955),
    [sym_comment] = ACTIONS(44),
  },
  [322] = {
    [anon_sym_LT] = ACTIONS(959),
    [anon_sym_EQ_EQ] = ACTIONS(961),
    [anon_sym_BANG_EQ] = ACTIONS(961),
    [anon_sym_AMP_AMP] = ACTIONS(961),
    [anon_sym_PIPE_PIPE] = ACTIONS(961),
    [anon_sym_PLUS] = ACTIONS(961),
    [anon_sym_DASH] = ACTIONS(961),
    [anon_sym_STAR] = ACTIONS(963),
    [anon_sym_SLASH] = ACTIONS(965),
    [anon_sym_PIPE] = ACTIONS(959),
    [anon_sym_CARET] = ACTIONS(961),
    [anon_sym_PERCENT] = ACTIONS(963),
    [anon_sym_LT_LT] = ACTIONS(961),
    [anon_sym_GT_GT] = ACTIONS(959),
    [anon_sym_GT_GT_GT] = ACTIONS(961),
    [anon_sym_QMARK] = ACTIONS(961),
    [anon_sym_RPAREN] = ACTIONS(961),
    [anon_sym_COMMA] = ACTIONS(961),
    [sym_comment] = ACTIONS(44),
  },
  [323] = {
    [anon_sym_EQ] = ACTIONS(413),
    [sym_comment] = ACTIONS(44),
  },
  [324] = {
    [anon_sym_RPAREN] = ACTIONS(967),
    [anon_sym_COMMA] = ACTIONS(967),
    [sym_comment] = ACTIONS(44),
  },
  [325] = {
    [sym_element_value_pair] = STATE(447),
    [sym_identifier] = ACTIONS(637),
    [sym_comment] = ACTIONS(44),
  },
  [326] = {
    [ts_builtin_sym_end] = ACTIONS(969),
    [sym_decimal_integer_literal] = ACTIONS(971),
    [sym_hex_integer_literal] = ACTIONS(971),
    [sym_octal_integer_literal] = ACTIONS(971),
    [sym_binary_integer_literal] = ACTIONS(971),
    [sym_decimal_floating_point_literal] = ACTIONS(971),
    [sym_hex_floating_point_literal] = ACTIONS(973),
    [anon_sym_true] = ACTIONS(969),
    [anon_sym_false] = ACTIONS(969),
    [anon_sym_SQUOTE] = ACTIONS(969),
    [sym_string_literal] = ACTIONS(969),
    [sym_null_literal] = ACTIONS(969),
    [anon_sym_BANG] = ACTIONS(969),
    [anon_sym_TILDE] = ACTIONS(969),
    [anon_sym_PLUS_PLUS] = ACTIONS(969),
    [anon_sym_DASH_DASH] = ACTIONS(969),
    [anon_sym_if] = ACTIONS(969),
    [anon_sym_RBRACE] = ACTIONS(969),
    [anon_sym_elseif] = ACTIONS(969),
    [anon_sym_AT] = ACTIONS(969),
    [anon_sym_open] = ACTIONS(969),
    [anon_sym_module] = ACTIONS(969),
    [anon_sym_static] = ACTIONS(969),
    [anon_sym_package] = ACTIONS(969),
    [anon_sym_import] = ACTIONS(969),
    [anon_sym_class] = ACTIONS(969),
    [anon_sym_public] = ACTIONS(969),
    [anon_sym_protected] = ACTIONS(969),
    [anon_sym_private] = ACTIONS(969),
    [anon_sym_abstract] = ACTIONS(969),
    [anon_sym_final] = ACTIONS(969),
    [anon_sym_strictfp] = ACTIONS(969),
    [anon_sym_default] = ACTIONS(969),
    [anon_sym_interface] = ACTIONS(969),
    [sym_comment] = ACTIONS(44),
  },
  [327] = {
    [anon_sym_RBRACE] = ACTIONS(975),
    [anon_sym_requires] = ACTIONS(975),
    [anon_sym_exports] = ACTIONS(975),
    [anon_sym_opens] = ACTIONS(975),
    [anon_sym_uses] = ACTIONS(975),
    [anon_sym_provides] = ACTIONS(975),
    [sym_comment] = ACTIONS(44),
  },
  [328] = {
    [sym_identifier] = ACTIONS(977),
    [sym_comment] = ACTIONS(44),
  },
  [329] = {
    [anon_sym_transitive] = ACTIONS(979),
    [anon_sym_static] = ACTIONS(979),
    [sym_identifier] = ACTIONS(981),
    [sym_comment] = ACTIONS(44),
  },
  [330] = {
    [sym__semicolon] = ACTIONS(983),
    [anon_sym_DOT] = ACTIONS(665),
    [sym_comment] = ACTIONS(44),
  },
  [331] = {
    [sym_module_name] = STATE(450),
    [sym_identifier] = ACTIONS(985),
    [sym_comment] = ACTIONS(44),
  },
  [332] = {
    [sym_identifier] = ACTIONS(987),
    [sym_comment] = ACTIONS(44),
  },
  [333] = {
    [sym_module_name] = STATE(452),
    [aux_sym_module_directive_repeat2] = STATE(453),
    [sym__semicolon] = ACTIONS(983),
    [anon_sym_COMMA] = ACTIONS(669),
    [sym_identifier] = ACTIONS(985),
    [sym_comment] = ACTIONS(44),
  },
  [334] = {
    [aux_sym_module_directive_repeat2] = STATE(453),
    [sym__semicolon] = ACTIONS(983),
    [anon_sym_COMMA] = ACTIONS(669),
    [anon_sym_DOT] = ACTIONS(665),
    [sym_comment] = ACTIONS(44),
  },
  [335] = {
    [sym__semicolon] = ACTIONS(983),
    [anon_sym_COMMA] = ACTIONS(989),
    [sym_comment] = ACTIONS(44),
  },
  [336] = {
    [sym_package_or_type_name] = STATE(455),
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(44),
  },
  [337] = {
    [ts_builtin_sym_end] = ACTIONS(991),
    [sym_decimal_integer_literal] = ACTIONS(993),
    [sym_hex_integer_literal] = ACTIONS(993),
    [sym_octal_integer_literal] = ACTIONS(993),
    [sym_binary_integer_literal] = ACTIONS(993),
    [sym_decimal_floating_point_literal] = ACTIONS(993),
    [sym_hex_floating_point_literal] = ACTIONS(995),
    [anon_sym_true] = ACTIONS(991),
    [anon_sym_false] = ACTIONS(991),
    [anon_sym_SQUOTE] = ACTIONS(991),
    [sym_string_literal] = ACTIONS(991),
    [sym_null_literal] = ACTIONS(991),
    [anon_sym_BANG] = ACTIONS(991),
    [anon_sym_TILDE] = ACTIONS(991),
    [anon_sym_PLUS_PLUS] = ACTIONS(991),
    [anon_sym_DASH_DASH] = ACTIONS(991),
    [anon_sym_if] = ACTIONS(991),
    [anon_sym_RBRACE] = ACTIONS(991),
    [anon_sym_elseif] = ACTIONS(991),
    [anon_sym_AT] = ACTIONS(991),
    [anon_sym_open] = ACTIONS(991),
    [anon_sym_module] = ACTIONS(991),
    [anon_sym_static] = ACTIONS(991),
    [anon_sym_package] = ACTIONS(991),
    [anon_sym_import] = ACTIONS(991),
    [anon_sym_class] = ACTIONS(991),
    [anon_sym_public] = ACTIONS(991),
    [anon_sym_protected] = ACTIONS(991),
    [anon_sym_private] = ACTIONS(991),
    [anon_sym_abstract] = ACTIONS(991),
    [anon_sym_final] = ACTIONS(991),
    [anon_sym_strictfp] = ACTIONS(991),
    [anon_sym_default] = ACTIONS(991),
    [anon_sym_interface] = ACTIONS(991),
    [sym_comment] = ACTIONS(44),
  },
  [338] = {
    [ts_builtin_sym_end] = ACTIONS(997),
    [sym_decimal_integer_literal] = ACTIONS(999),
    [sym_hex_integer_literal] = ACTIONS(999),
    [sym_octal_integer_literal] = ACTIONS(999),
    [sym_binary_integer_literal] = ACTIONS(999),
    [sym_decimal_floating_point_literal] = ACTIONS(999),
    [sym_hex_floating_point_literal] = ACTIONS(1001),
    [anon_sym_true] = ACTIONS(997),
    [anon_sym_false] = ACTIONS(997),
    [anon_sym_SQUOTE] = ACTIONS(997),
    [sym_string_literal] = ACTIONS(997),
    [sym_null_literal] = ACTIONS(997),
    [anon_sym_BANG] = ACTIONS(997),
    [anon_sym_TILDE] = ACTIONS(997),
    [anon_sym_PLUS_PLUS] = ACTIONS(997),
    [anon_sym_DASH_DASH] = ACTIONS(997),
    [anon_sym_if] = ACTIONS(997),
    [anon_sym_RBRACE] = ACTIONS(997),
    [anon_sym_elseif] = ACTIONS(997),
    [anon_sym_AT] = ACTIONS(997),
    [anon_sym_open] = ACTIONS(997),
    [anon_sym_module] = ACTIONS(997),
    [anon_sym_static] = ACTIONS(997),
    [anon_sym_package] = ACTIONS(997),
    [anon_sym_import] = ACTIONS(997),
    [anon_sym_class] = ACTIONS(997),
    [anon_sym_public] = ACTIONS(997),
    [anon_sym_protected] = ACTIONS(997),
    [anon_sym_private] = ACTIONS(997),
    [anon_sym_abstract] = ACTIONS(997),
    [anon_sym_final] = ACTIONS(997),
    [anon_sym_strictfp] = ACTIONS(997),
    [anon_sym_default] = ACTIONS(997),
    [anon_sym_interface] = ACTIONS(997),
    [sym_comment] = ACTIONS(44),
  },
  [339] = {
    [sym__literal] = STATE(458),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(459),
    [sym_element_value_pair] = STATE(115),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(275),
    [anon_sym_false] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(1003),
    [sym_identifier] = ACTIONS(1005),
    [sym_comment] = ACTIONS(44),
  },
  [340] = {
    [sym_identifier] = ACTIONS(1007),
    [sym_comment] = ACTIONS(44),
  },
  [341] = {
    [aux_sym_type_bound_repeat1] = STATE(462),
    [anon_sym_GT] = ACTIONS(1009),
    [anon_sym_AMP] = ACTIONS(1011),
    [anon_sym_COMMA] = ACTIONS(1009),
    [sym_comment] = ACTIONS(44),
  },
  [342] = {
    [anon_sym_GT] = ACTIONS(1013),
    [anon_sym_COMMA] = ACTIONS(1013),
    [sym_comment] = ACTIONS(44),
  },
  [343] = {
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [sym_type_parameter] = STATE(463),
    [aux_sym_class_or_interface_type_repeat1] = STATE(136),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(323),
    [sym_comment] = ACTIONS(44),
  },
  [344] = {
    [anon_sym_GT] = ACTIONS(1015),
    [anon_sym_COMMA] = ACTIONS(1015),
    [sym_comment] = ACTIONS(44),
  },
  [345] = {
    [sym__expression] = STATE(466),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1017),
    [anon_sym_TILDE] = ACTIONS(1017),
    [anon_sym_PLUS_PLUS] = ACTIONS(1019),
    [anon_sym_DASH_DASH] = ACTIONS(1019),
    [sym_comment] = ACTIONS(44),
  },
  [346] = {
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_static] = ACTIONS(201),
    [anon_sym_class] = ACTIONS(201),
    [anon_sym_public] = ACTIONS(201),
    [anon_sym_protected] = ACTIONS(201),
    [anon_sym_private] = ACTIONS(201),
    [anon_sym_abstract] = ACTIONS(201),
    [anon_sym_final] = ACTIONS(201),
    [anon_sym_strictfp] = ACTIONS(201),
    [anon_sym_default] = ACTIONS(201),
    [sym_identifier] = ACTIONS(667),
    [sym_comment] = ACTIONS(44),
  },
  [347] = {
    [anon_sym_LPAREN] = ACTIONS(1021),
    [anon_sym_DOT] = ACTIONS(1023),
    [anon_sym_AT] = ACTIONS(203),
    [anon_sym_static] = ACTIONS(695),
    [anon_sym_class] = ACTIONS(695),
    [anon_sym_public] = ACTIONS(695),
    [anon_sym_protected] = ACTIONS(695),
    [anon_sym_private] = ACTIONS(695),
    [anon_sym_abstract] = ACTIONS(695),
    [anon_sym_final] = ACTIONS(695),
    [anon_sym_strictfp] = ACTIONS(695),
    [anon_sym_default] = ACTIONS(695),
    [sym_identifier] = ACTIONS(767),
    [sym_comment] = ACTIONS(44),
  },
  [348] = {
    [sym__semicolon] = ACTIONS(1025),
    [sym_comment] = ACTIONS(44),
  },
  [349] = {
    [sym__semicolon] = ACTIONS(1027),
    [anon_sym_LT] = ACTIONS(1027),
    [anon_sym_LBRACE] = ACTIONS(1027),
    [anon_sym_RBRACE] = ACTIONS(1027),
    [anon_sym_AT] = ACTIONS(1027),
    [anon_sym_static] = ACTIONS(1029),
    [anon_sym_class] = ACTIONS(1029),
    [anon_sym_public] = ACTIONS(1029),
    [anon_sym_protected] = ACTIONS(1029),
    [anon_sym_private] = ACTIONS(1029),
    [anon_sym_abstract] = ACTIONS(1029),
    [anon_sym_final] = ACTIONS(1029),
    [anon_sym_strictfp] = ACTIONS(1029),
    [anon_sym_default] = ACTIONS(1029),
    [anon_sym_interface] = ACTIONS(1029),
    [sym_result] = ACTIONS(1029),
    [sym_identifier] = ACTIONS(1031),
    [sym_comment] = ACTIONS(44),
  },
  [350] = {
    [anon_sym_if] = ACTIONS(1033),
    [anon_sym_RBRACE] = ACTIONS(1033),
    [anon_sym_AT] = ACTIONS(1033),
    [anon_sym_static] = ACTIONS(1033),
    [anon_sym_class] = ACTIONS(1033),
    [anon_sym_public] = ACTIONS(1033),
    [anon_sym_protected] = ACTIONS(1033),
    [anon_sym_private] = ACTIONS(1033),
    [anon_sym_abstract] = ACTIONS(1033),
    [anon_sym_final] = ACTIONS(1033),
    [anon_sym_strictfp] = ACTIONS(1033),
    [anon_sym_default] = ACTIONS(1033),
    [sym_comment] = ACTIONS(44),
  },
  [351] = {
    [sym_statement] = STATE(234),
    [sym_if_then_statement] = STATE(235),
    [sym__annotation] = STATE(233),
    [sym_normal_annotation] = STATE(236),
    [sym_marker_annotation] = STATE(236),
    [sym_single_element_annotation] = STATE(236),
    [sym_class_declaration] = STATE(234),
    [sym_normal_class_declaration] = STATE(28),
    [sym_modifier] = STATE(237),
    [sym_block_statement] = STATE(469),
    [sym_local_variable_declaration_statement] = STATE(234),
    [sym_local_variable_declaration] = STATE(240),
    [aux_sym_normal_class_declaration_repeat1] = STATE(241),
    [anon_sym_if] = ACTIONS(479),
    [anon_sym_RBRACE] = ACTIONS(1035),
    [anon_sym_AT] = ACTIONS(483),
    [anon_sym_static] = ACTIONS(485),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(485),
    [anon_sym_protected] = ACTIONS(485),
    [anon_sym_private] = ACTIONS(485),
    [anon_sym_abstract] = ACTIONS(485),
    [anon_sym_final] = ACTIONS(485),
    [anon_sym_strictfp] = ACTIONS(485),
    [anon_sym_default] = ACTIONS(485),
    [sym_comment] = ACTIONS(44),
  },
  [352] = {
    [anon_sym_if] = ACTIONS(1037),
    [anon_sym_RBRACE] = ACTIONS(1037),
    [anon_sym_AT] = ACTIONS(1037),
    [anon_sym_static] = ACTIONS(1037),
    [anon_sym_class] = ACTIONS(1037),
    [anon_sym_public] = ACTIONS(1037),
    [anon_sym_protected] = ACTIONS(1037),
    [anon_sym_private] = ACTIONS(1037),
    [anon_sym_abstract] = ACTIONS(1037),
    [anon_sym_final] = ACTIONS(1037),
    [anon_sym_strictfp] = ACTIONS(1037),
    [anon_sym_default] = ACTIONS(1037),
    [sym_comment] = ACTIONS(44),
  },
  [353] = {
    [anon_sym_LBRACK] = ACTIONS(1039),
    [anon_sym_AT] = ACTIONS(1039),
    [sym_comment] = ACTIONS(44),
  },
  [354] = {
    [anon_sym_LBRACK] = ACTIONS(1041),
    [anon_sym_AT] = ACTIONS(1041),
    [sym_comment] = ACTIONS(44),
  },
  [355] = {
    [anon_sym_LBRACK] = ACTIONS(1043),
    [anon_sym_AT] = ACTIONS(1043),
    [sym_comment] = ACTIONS(44),
  },
  [356] = {
    [sym_package_or_type_name] = STATE(471),
    [sym_identifier] = ACTIONS(1045),
    [sym_comment] = ACTIONS(44),
  },
  [357] = {
    [aux_sym_type_arguments_repeat1] = STATE(474),
    [anon_sym_GT] = ACTIONS(1047),
    [anon_sym_COMMA] = ACTIONS(1049),
    [sym_comment] = ACTIONS(44),
  },
  [358] = {
    [anon_sym_GT] = ACTIONS(1051),
    [anon_sym_COMMA] = ACTIONS(1051),
    [sym_comment] = ACTIONS(44),
  },
  [359] = {
    [sym_dims] = STATE(475),
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [aux_sym_class_or_interface_type_repeat1] = STATE(262),
    [aux_sym_dims_repeat1] = STATE(263),
    [anon_sym_GT] = ACTIONS(1053),
    [anon_sym_COMMA] = ACTIONS(1053),
    [anon_sym_LBRACK] = ACTIONS(545),
    [anon_sym_AT] = ACTIONS(169),
    [sym_comment] = ACTIONS(44),
  },
  [360] = {
    [sym_dims] = STATE(475),
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [aux_sym_class_or_interface_type_repeat1] = STATE(262),
    [aux_sym_dims_repeat1] = STATE(263),
    [anon_sym_LBRACK] = ACTIONS(545),
    [anon_sym_AT] = ACTIONS(169),
    [sym_comment] = ACTIONS(44),
  },
  [361] = {
    [anon_sym_boolean] = ACTIONS(465),
    [anon_sym_byte] = ACTIONS(465),
    [anon_sym_short] = ACTIONS(465),
    [anon_sym_int] = ACTIONS(465),
    [anon_sym_long] = ACTIONS(465),
    [anon_sym_char] = ACTIONS(465),
    [anon_sym_float] = ACTIONS(465),
    [anon_sym_double] = ACTIONS(465),
    [anon_sym_AT] = ACTIONS(127),
    [sym_identifier] = ACTIONS(1055),
    [sym_comment] = ACTIONS(44),
  },
  [362] = {
    [anon_sym_boolean] = ACTIONS(467),
    [anon_sym_byte] = ACTIONS(467),
    [anon_sym_short] = ACTIONS(467),
    [anon_sym_int] = ACTIONS(467),
    [anon_sym_long] = ACTIONS(467),
    [anon_sym_char] = ACTIONS(467),
    [anon_sym_float] = ACTIONS(467),
    [anon_sym_double] = ACTIONS(467),
    [anon_sym_AT] = ACTIONS(129),
    [sym_identifier] = ACTIONS(547),
    [sym_comment] = ACTIONS(44),
  },
  [363] = {
    [sym_integral_type] = STATE(476),
    [sym_floating_point_type] = STATE(476),
    [sym__annotation] = STATE(477),
    [sym_normal_annotation] = STATE(362),
    [sym_marker_annotation] = STATE(362),
    [sym_single_element_annotation] = STATE(362),
    [anon_sym_boolean] = ACTIONS(1057),
    [anon_sym_byte] = ACTIONS(737),
    [anon_sym_short] = ACTIONS(737),
    [anon_sym_int] = ACTIONS(737),
    [anon_sym_long] = ACTIONS(737),
    [anon_sym_char] = ACTIONS(737),
    [anon_sym_float] = ACTIONS(739),
    [anon_sym_double] = ACTIONS(739),
    [anon_sym_AT] = ACTIONS(741),
    [sym_identifier] = ACTIONS(1059),
    [sym_comment] = ACTIONS(44),
  },
  [364] = {
    [sym_type_arguments] = STATE(478),
    [anon_sym_GT] = ACTIONS(1061),
    [anon_sym_LT] = ACTIONS(501),
    [anon_sym_AMP] = ACTIONS(1061),
    [anon_sym_LBRACE] = ACTIONS(1061),
    [anon_sym_COMMA] = ACTIONS(1061),
    [anon_sym_DOT] = ACTIONS(1061),
    [anon_sym_LBRACK] = ACTIONS(1061),
    [anon_sym_AT] = ACTIONS(1061),
    [anon_sym_implements] = ACTIONS(1061),
    [sym_comment] = ACTIONS(44),
  },
  [365] = {
    [sym__annotation] = STATE(229),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(1063),
    [sym_comment] = ACTIONS(44),
  },
  [366] = {
    [anon_sym_GT] = ACTIONS(1065),
    [anon_sym_AMP] = ACTIONS(1065),
    [anon_sym_LBRACE] = ACTIONS(1065),
    [anon_sym_COMMA] = ACTIONS(1065),
    [anon_sym_DOT] = ACTIONS(749),
    [anon_sym_LBRACK] = ACTIONS(1065),
    [anon_sym_AT] = ACTIONS(1065),
    [anon_sym_implements] = ACTIONS(1065),
    [sym_comment] = ACTIONS(44),
  },
  [367] = {
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [aux_sym_class_or_interface_type_repeat1] = STATE(480),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(1063),
    [sym_comment] = ACTIONS(44),
  },
  [368] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(481),
    [anon_sym_GT] = ACTIONS(1065),
    [anon_sym_AMP] = ACTIONS(1065),
    [anon_sym_LBRACE] = ACTIONS(1065),
    [anon_sym_COMMA] = ACTIONS(1065),
    [anon_sym_DOT] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(1065),
    [anon_sym_AT] = ACTIONS(1065),
    [anon_sym_implements] = ACTIONS(1065),
    [sym_comment] = ACTIONS(44),
  },
  [369] = {
    [anon_sym_LBRACE] = ACTIONS(1067),
    [anon_sym_COMMA] = ACTIONS(1067),
    [sym_comment] = ACTIONS(44),
  },
  [370] = {
    [sym_class_or_interface_type] = STATE(482),
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [aux_sym_class_or_interface_type_repeat1] = STATE(145),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(331),
    [sym_comment] = ACTIONS(44),
  },
  [371] = {
    [ts_builtin_sym_end] = ACTIONS(1069),
    [sym__semicolon] = ACTIONS(1069),
    [sym_decimal_integer_literal] = ACTIONS(1071),
    [sym_hex_integer_literal] = ACTIONS(1071),
    [sym_octal_integer_literal] = ACTIONS(1071),
    [sym_binary_integer_literal] = ACTIONS(1071),
    [sym_decimal_floating_point_literal] = ACTIONS(1071),
    [sym_hex_floating_point_literal] = ACTIONS(1073),
    [anon_sym_true] = ACTIONS(1069),
    [anon_sym_false] = ACTIONS(1069),
    [anon_sym_SQUOTE] = ACTIONS(1069),
    [sym_string_literal] = ACTIONS(1069),
    [sym_null_literal] = ACTIONS(1069),
    [anon_sym_BANG] = ACTIONS(1069),
    [anon_sym_TILDE] = ACTIONS(1069),
    [anon_sym_PLUS_PLUS] = ACTIONS(1069),
    [anon_sym_DASH_DASH] = ACTIONS(1069),
    [anon_sym_if] = ACTIONS(1069),
    [anon_sym_LBRACE] = ACTIONS(1069),
    [anon_sym_RBRACE] = ACTIONS(1069),
    [anon_sym_elseif] = ACTIONS(1069),
    [anon_sym_AT] = ACTIONS(1069),
    [anon_sym_open] = ACTIONS(1069),
    [anon_sym_module] = ACTIONS(1069),
    [anon_sym_static] = ACTIONS(1069),
    [anon_sym_package] = ACTIONS(1069),
    [anon_sym_import] = ACTIONS(1069),
    [anon_sym_class] = ACTIONS(1069),
    [anon_sym_public] = ACTIONS(1069),
    [anon_sym_protected] = ACTIONS(1069),
    [anon_sym_private] = ACTIONS(1069),
    [anon_sym_abstract] = ACTIONS(1069),
    [anon_sym_final] = ACTIONS(1069),
    [anon_sym_strictfp] = ACTIONS(1069),
    [anon_sym_default] = ACTIONS(1069),
    [anon_sym_interface] = ACTIONS(1069),
    [sym_comment] = ACTIONS(44),
  },
  [372] = {
    [sym_annotation_type_body] = STATE(484),
    [anon_sym_LBRACE] = ACTIONS(1075),
    [sym_comment] = ACTIONS(44),
  },
  [373] = {
    [sym__literal] = STATE(487),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(488),
    [sym_element_value_pair] = STATE(115),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(275),
    [anon_sym_false] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(1077),
    [sym_identifier] = ACTIONS(1079),
    [sym_comment] = ACTIONS(44),
  },
  [374] = {
    [sym_identifier] = ACTIONS(1081),
    [sym_comment] = ACTIONS(44),
  },
  [375] = {
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym_class_declaration] = STATE(137),
    [sym_normal_class_declaration] = STATE(28),
    [sym_modifier] = STATE(29),
    [sym_class_body_declaration] = STATE(140),
    [sym_class_member_declaration] = STATE(141),
    [sym_interface_declaration] = STATE(137),
    [sym_annotation_type_declaration] = STATE(30),
    [sym_normal_interface_declaration] = STATE(30),
    [sym_block] = STATE(141),
    [aux_sym_normal_class_declaration_repeat1] = STATE(33),
    [aux_sym_class_body_repeat1] = STATE(491),
    [sym__semicolon] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(1083),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
  },
  [376] = {
    [sym_superclass] = STATE(492),
    [sym_super_interfaces] = STATE(493),
    [sym_class_body] = STATE(494),
    [anon_sym_LBRACE] = ACTIONS(769),
    [anon_sym_extends] = ACTIONS(227),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [377] = {
    [sym_super_interfaces] = STATE(493),
    [sym_class_body] = STATE(494),
    [anon_sym_LBRACE] = ACTIONS(769),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [378] = {
    [sym_class_body] = STATE(494),
    [anon_sym_LBRACE] = ACTIONS(769),
    [sym_comment] = ACTIONS(44),
  },
  [379] = {
    [sym__semicolon] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(333),
    [anon_sym_RBRACE] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_static] = ACTIONS(335),
    [anon_sym_class] = ACTIONS(335),
    [anon_sym_public] = ACTIONS(335),
    [anon_sym_protected] = ACTIONS(335),
    [anon_sym_private] = ACTIONS(335),
    [anon_sym_abstract] = ACTIONS(335),
    [anon_sym_final] = ACTIONS(335),
    [anon_sym_strictfp] = ACTIONS(335),
    [anon_sym_default] = ACTIONS(335),
    [anon_sym_interface] = ACTIONS(335),
    [sym_result] = ACTIONS(335),
    [sym_identifier] = ACTIONS(337),
    [sym_comment] = ACTIONS(44),
  },
  [380] = {
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(158),
    [sym_marker_annotation] = STATE(158),
    [sym_single_element_annotation] = STATE(158),
    [sym_class_declaration] = STATE(151),
    [sym_normal_class_declaration] = STATE(159),
    [sym_modifier] = STATE(29),
    [sym_type_parameters] = STATE(160),
    [sym_interface_declaration] = STATE(151),
    [sym_annotation_type_declaration] = STATE(161),
    [sym_normal_interface_declaration] = STATE(161),
    [sym_interface_member_declaration] = STATE(162),
    [sym_constant_declaration] = STATE(151),
    [sym_variable_declarator_list] = STATE(163),
    [sym_variable_declarator] = STATE(164),
    [sym_variable_declarator_id] = STATE(165),
    [sym_interface_method_declaration] = STATE(151),
    [sym_method_header] = STATE(166),
    [aux_sym_normal_class_declaration_repeat1] = STATE(167),
    [aux_sym_interface_body_repeat1] = STATE(496),
    [sym__semicolon] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(1085),
    [anon_sym_AT] = ACTIONS(343),
    [anon_sym_static] = ACTIONS(345),
    [anon_sym_class] = ACTIONS(347),
    [anon_sym_public] = ACTIONS(345),
    [anon_sym_protected] = ACTIONS(345),
    [anon_sym_private] = ACTIONS(345),
    [anon_sym_abstract] = ACTIONS(345),
    [anon_sym_final] = ACTIONS(345),
    [anon_sym_strictfp] = ACTIONS(345),
    [anon_sym_default] = ACTIONS(345),
    [anon_sym_interface] = ACTIONS(349),
    [sym_result] = ACTIONS(351),
    [sym_identifier] = ACTIONS(353),
    [sym_comment] = ACTIONS(44),
  },
  [381] = {
    [sym_extends_interfaces] = STATE(497),
    [sym_interface_body] = STATE(498),
    [anon_sym_LBRACE] = ACTIONS(771),
    [anon_sym_extends] = ACTIONS(233),
    [sym_comment] = ACTIONS(44),
  },
  [382] = {
    [sym_interface_body] = STATE(498),
    [anon_sym_LBRACE] = ACTIONS(771),
    [sym_comment] = ACTIONS(44),
  },
  [383] = {
    [sym__semicolon] = ACTIONS(355),
    [anon_sym_LT] = ACTIONS(355),
    [anon_sym_RBRACE] = ACTIONS(355),
    [anon_sym_AT] = ACTIONS(355),
    [anon_sym_static] = ACTIONS(357),
    [anon_sym_class] = ACTIONS(357),
    [anon_sym_public] = ACTIONS(357),
    [anon_sym_protected] = ACTIONS(357),
    [anon_sym_private] = ACTIONS(357),
    [anon_sym_abstract] = ACTIONS(357),
    [anon_sym_final] = ACTIONS(357),
    [anon_sym_strictfp] = ACTIONS(357),
    [anon_sym_default] = ACTIONS(357),
    [anon_sym_interface] = ACTIONS(357),
    [sym_result] = ACTIONS(357),
    [sym_identifier] = ACTIONS(359),
    [sym_comment] = ACTIONS(44),
  },
  [384] = {
    [sym__annotation] = STATE(505),
    [sym_normal_annotation] = STATE(506),
    [sym_marker_annotation] = STATE(506),
    [sym_single_element_annotation] = STATE(506),
    [sym_modifier] = STATE(507),
    [sym_variable_declarator_id] = STATE(508),
    [sym_formal_parameter_list] = STATE(509),
    [sym_formal_parameter] = STATE(510),
    [sym_receiver_parameter] = STATE(511),
    [sym_last_formal_parameter] = STATE(512),
    [aux_sym_class_or_interface_type_repeat1] = STATE(513),
    [aux_sym_normal_class_declaration_repeat1] = STATE(514),
    [anon_sym_RPAREN] = ACTIONS(1087),
    [anon_sym_AT] = ACTIONS(1089),
    [anon_sym_static] = ACTIONS(1091),
    [anon_sym_public] = ACTIONS(1091),
    [anon_sym_protected] = ACTIONS(1091),
    [anon_sym_private] = ACTIONS(1091),
    [anon_sym_abstract] = ACTIONS(1091),
    [anon_sym_final] = ACTIONS(1091),
    [anon_sym_strictfp] = ACTIONS(1091),
    [anon_sym_default] = ACTIONS(1091),
    [anon_sym_this] = ACTIONS(1093),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1095),
    [sym_identifier] = ACTIONS(1097),
    [sym_comment] = ACTIONS(44),
  },
  [385] = {
    [sym_class_or_interface_type] = STATE(516),
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [sym_exception_type_list] = STATE(517),
    [sym_exception_type] = STATE(518),
    [aux_sym_class_or_interface_type_repeat1] = STATE(519),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(1099),
    [sym_comment] = ACTIONS(44),
  },
  [386] = {
    [sym__semicolon] = ACTIONS(1101),
    [anon_sym_LBRACE] = ACTIONS(1101),
    [sym_comment] = ACTIONS(44),
  },
  [387] = {
    [sym__semicolon] = ACTIONS(1103),
    [anon_sym_EQ] = ACTIONS(1103),
    [anon_sym_GT] = ACTIONS(1103),
    [anon_sym_RPAREN] = ACTIONS(1103),
    [anon_sym_LBRACE] = ACTIONS(1103),
    [anon_sym_COMMA] = ACTIONS(1103),
    [anon_sym_LBRACK] = ACTIONS(1103),
    [anon_sym_AT] = ACTIONS(1103),
    [anon_sym_default] = ACTIONS(1103),
    [anon_sym_throws] = ACTIONS(1103),
    [sym_comment] = ACTIONS(44),
  },
  [388] = {
    [anon_sym_RBRACK] = ACTIONS(1105),
    [sym_comment] = ACTIONS(44),
  },
  [389] = {
    [sym__annotation] = STATE(63),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [anon_sym_LBRACK] = ACTIONS(1107),
    [anon_sym_AT] = ACTIONS(169),
    [sym_comment] = ACTIONS(44),
  },
  [390] = {
    [sym_throws] = STATE(522),
    [sym__semicolon] = ACTIONS(1101),
    [anon_sym_LBRACE] = ACTIONS(1101),
    [anon_sym_throws] = ACTIONS(777),
    [sym_comment] = ACTIONS(44),
  },
  [391] = {
    [sym_method_declarator] = STATE(523),
    [sym_identifier] = ACTIONS(541),
    [sym_comment] = ACTIONS(44),
  },
  [392] = {
    [sym__semicolon] = ACTIONS(1109),
    [anon_sym_COMMA] = ACTIONS(1109),
    [sym_comment] = ACTIONS(44),
  },
  [393] = {
    [sym_variable_declarator] = STATE(524),
    [sym_variable_declarator_id] = STATE(165),
    [sym_identifier] = ACTIONS(795),
    [sym_comment] = ACTIONS(44),
  },
  [394] = {
    [sym_identifier] = ACTIONS(1111),
    [sym_comment] = ACTIONS(44),
  },
  [395] = {
    [sym_type_parameters] = STATE(526),
    [sym_superclass] = STATE(492),
    [sym_super_interfaces] = STATE(493),
    [sym_class_body] = STATE(494),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(769),
    [anon_sym_extends] = ACTIONS(227),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [396] = {
    [sym_type_parameters] = STATE(527),
    [sym_extends_interfaces] = STATE(497),
    [sym_interface_body] = STATE(498),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(771),
    [anon_sym_extends] = ACTIONS(233),
    [sym_comment] = ACTIONS(44),
  },
  [397] = {
    [sym__semicolon] = ACTIONS(1113),
    [anon_sym_LT] = ACTIONS(1113),
    [anon_sym_RBRACE] = ACTIONS(1113),
    [anon_sym_AT] = ACTIONS(1113),
    [anon_sym_static] = ACTIONS(1115),
    [anon_sym_class] = ACTIONS(1115),
    [anon_sym_public] = ACTIONS(1115),
    [anon_sym_protected] = ACTIONS(1115),
    [anon_sym_private] = ACTIONS(1115),
    [anon_sym_abstract] = ACTIONS(1115),
    [anon_sym_final] = ACTIONS(1115),
    [anon_sym_strictfp] = ACTIONS(1115),
    [anon_sym_default] = ACTIONS(1115),
    [anon_sym_interface] = ACTIONS(1115),
    [sym_result] = ACTIONS(1115),
    [sym_identifier] = ACTIONS(1117),
    [sym_comment] = ACTIONS(44),
  },
  [398] = {
    [sym__semicolon] = ACTIONS(1119),
    [anon_sym_LT] = ACTIONS(1119),
    [anon_sym_RBRACE] = ACTIONS(1119),
    [anon_sym_AT] = ACTIONS(1119),
    [anon_sym_static] = ACTIONS(1121),
    [anon_sym_class] = ACTIONS(1121),
    [anon_sym_public] = ACTIONS(1121),
    [anon_sym_protected] = ACTIONS(1121),
    [anon_sym_private] = ACTIONS(1121),
    [anon_sym_abstract] = ACTIONS(1121),
    [anon_sym_final] = ACTIONS(1121),
    [anon_sym_strictfp] = ACTIONS(1121),
    [anon_sym_default] = ACTIONS(1121),
    [anon_sym_interface] = ACTIONS(1121),
    [sym_result] = ACTIONS(1121),
    [sym_identifier] = ACTIONS(1123),
    [sym_comment] = ACTIONS(44),
  },
  [399] = {
    [sym__expression] = STATE(528),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_PLUS_PLUS] = ACTIONS(243),
    [anon_sym_DASH_DASH] = ACTIONS(243),
    [sym_comment] = ACTIONS(44),
  },
  [400] = {
    [sym_module_directive] = STATE(217),
    [anon_sym_RBRACE] = ACTIONS(1125),
    [anon_sym_requires] = ACTIONS(295),
    [anon_sym_exports] = ACTIONS(297),
    [anon_sym_opens] = ACTIONS(297),
    [anon_sym_uses] = ACTIONS(299),
    [anon_sym_provides] = ACTIONS(301),
    [sym_comment] = ACTIONS(44),
  },
  [401] = {
    [sym_class_body] = STATE(530),
    [anon_sym_LBRACE] = ACTIONS(225),
    [sym_comment] = ACTIONS(44),
  },
  [402] = {
    [ts_builtin_sym_end] = ACTIONS(1127),
    [sym__semicolon] = ACTIONS(1127),
    [sym_decimal_integer_literal] = ACTIONS(1129),
    [sym_hex_integer_literal] = ACTIONS(1129),
    [sym_octal_integer_literal] = ACTIONS(1129),
    [sym_binary_integer_literal] = ACTIONS(1129),
    [sym_decimal_floating_point_literal] = ACTIONS(1129),
    [sym_hex_floating_point_literal] = ACTIONS(1131),
    [anon_sym_true] = ACTIONS(1127),
    [anon_sym_false] = ACTIONS(1127),
    [anon_sym_SQUOTE] = ACTIONS(1127),
    [sym_string_literal] = ACTIONS(1127),
    [sym_null_literal] = ACTIONS(1127),
    [anon_sym_BANG] = ACTIONS(1127),
    [anon_sym_TILDE] = ACTIONS(1127),
    [anon_sym_PLUS_PLUS] = ACTIONS(1127),
    [anon_sym_DASH_DASH] = ACTIONS(1127),
    [anon_sym_if] = ACTIONS(1127),
    [anon_sym_LBRACE] = ACTIONS(1127),
    [anon_sym_RBRACE] = ACTIONS(1127),
    [anon_sym_elseif] = ACTIONS(1127),
    [anon_sym_AT] = ACTIONS(1127),
    [anon_sym_open] = ACTIONS(1127),
    [anon_sym_module] = ACTIONS(1127),
    [anon_sym_static] = ACTIONS(1127),
    [anon_sym_package] = ACTIONS(1127),
    [anon_sym_import] = ACTIONS(1127),
    [anon_sym_class] = ACTIONS(1127),
    [anon_sym_public] = ACTIONS(1127),
    [anon_sym_protected] = ACTIONS(1127),
    [anon_sym_private] = ACTIONS(1127),
    [anon_sym_abstract] = ACTIONS(1127),
    [anon_sym_final] = ACTIONS(1127),
    [anon_sym_strictfp] = ACTIONS(1127),
    [anon_sym_default] = ACTIONS(1127),
    [anon_sym_interface] = ACTIONS(1127),
    [sym_comment] = ACTIONS(44),
  },
  [403] = {
    [sym_annotation_type_body] = STATE(532),
    [anon_sym_LBRACE] = ACTIONS(1133),
    [sym_comment] = ACTIONS(44),
  },
  [404] = {
    [sym__literal] = STATE(535),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(536),
    [sym_element_value_pair] = STATE(115),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(275),
    [anon_sym_false] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(1135),
    [sym_identifier] = ACTIONS(1137),
    [sym_comment] = ACTIONS(44),
  },
  [405] = {
    [sym_identifier] = ACTIONS(1139),
    [sym_comment] = ACTIONS(44),
  },
  [406] = {
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym_class_declaration] = STATE(137),
    [sym_normal_class_declaration] = STATE(28),
    [sym_modifier] = STATE(29),
    [sym_class_body_declaration] = STATE(140),
    [sym_class_member_declaration] = STATE(141),
    [sym_interface_declaration] = STATE(137),
    [sym_annotation_type_declaration] = STATE(30),
    [sym_normal_interface_declaration] = STATE(30),
    [sym_block] = STATE(141),
    [aux_sym_normal_class_declaration_repeat1] = STATE(33),
    [aux_sym_class_body_repeat1] = STATE(539),
    [sym__semicolon] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(1141),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
  },
  [407] = {
    [sym_superclass] = STATE(540),
    [sym_super_interfaces] = STATE(541),
    [sym_class_body] = STATE(542),
    [anon_sym_LBRACE] = ACTIONS(865),
    [anon_sym_extends] = ACTIONS(227),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [408] = {
    [sym_super_interfaces] = STATE(541),
    [sym_class_body] = STATE(542),
    [anon_sym_LBRACE] = ACTIONS(865),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [409] = {
    [sym_class_body] = STATE(542),
    [anon_sym_LBRACE] = ACTIONS(865),
    [sym_comment] = ACTIONS(44),
  },
  [410] = {
    [anon_sym_RBRACE] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_static] = ACTIONS(335),
    [anon_sym_class] = ACTIONS(335),
    [anon_sym_public] = ACTIONS(335),
    [anon_sym_protected] = ACTIONS(335),
    [anon_sym_private] = ACTIONS(335),
    [anon_sym_abstract] = ACTIONS(335),
    [anon_sym_final] = ACTIONS(335),
    [anon_sym_strictfp] = ACTIONS(335),
    [anon_sym_default] = ACTIONS(335),
    [anon_sym_interface] = ACTIONS(335),
    [sym_identifier] = ACTIONS(337),
    [sym_comment] = ACTIONS(44),
  },
  [411] = {
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(158),
    [sym_marker_annotation] = STATE(158),
    [sym_single_element_annotation] = STATE(158),
    [sym_class_declaration] = STATE(151),
    [sym_normal_class_declaration] = STATE(159),
    [sym_modifier] = STATE(29),
    [sym_type_parameters] = STATE(160),
    [sym_interface_declaration] = STATE(151),
    [sym_annotation_type_declaration] = STATE(161),
    [sym_normal_interface_declaration] = STATE(161),
    [sym_interface_member_declaration] = STATE(162),
    [sym_constant_declaration] = STATE(151),
    [sym_variable_declarator_list] = STATE(163),
    [sym_variable_declarator] = STATE(164),
    [sym_variable_declarator_id] = STATE(165),
    [sym_interface_method_declaration] = STATE(151),
    [sym_method_header] = STATE(166),
    [aux_sym_normal_class_declaration_repeat1] = STATE(167),
    [aux_sym_interface_body_repeat1] = STATE(544),
    [sym__semicolon] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(1143),
    [anon_sym_AT] = ACTIONS(343),
    [anon_sym_static] = ACTIONS(345),
    [anon_sym_class] = ACTIONS(347),
    [anon_sym_public] = ACTIONS(345),
    [anon_sym_protected] = ACTIONS(345),
    [anon_sym_private] = ACTIONS(345),
    [anon_sym_abstract] = ACTIONS(345),
    [anon_sym_final] = ACTIONS(345),
    [anon_sym_strictfp] = ACTIONS(345),
    [anon_sym_default] = ACTIONS(345),
    [anon_sym_interface] = ACTIONS(349),
    [sym_result] = ACTIONS(351),
    [sym_identifier] = ACTIONS(353),
    [sym_comment] = ACTIONS(44),
  },
  [412] = {
    [sym_extends_interfaces] = STATE(545),
    [sym_interface_body] = STATE(546),
    [anon_sym_LBRACE] = ACTIONS(867),
    [anon_sym_extends] = ACTIONS(233),
    [sym_comment] = ACTIONS(44),
  },
  [413] = {
    [sym_interface_body] = STATE(546),
    [anon_sym_LBRACE] = ACTIONS(867),
    [sym_comment] = ACTIONS(44),
  },
  [414] = {
    [anon_sym_RBRACE] = ACTIONS(355),
    [anon_sym_AT] = ACTIONS(355),
    [anon_sym_static] = ACTIONS(357),
    [anon_sym_class] = ACTIONS(357),
    [anon_sym_public] = ACTIONS(357),
    [anon_sym_protected] = ACTIONS(357),
    [anon_sym_private] = ACTIONS(357),
    [anon_sym_abstract] = ACTIONS(357),
    [anon_sym_final] = ACTIONS(357),
    [anon_sym_strictfp] = ACTIONS(357),
    [anon_sym_default] = ACTIONS(357),
    [anon_sym_interface] = ACTIONS(357),
    [sym_identifier] = ACTIONS(359),
    [sym_comment] = ACTIONS(44),
  },
  [415] = {
    [sym_dims] = STATE(549),
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym_default_value] = STATE(550),
    [aux_sym_class_or_interface_type_repeat1] = STATE(262),
    [aux_sym_dims_repeat1] = STATE(263),
    [sym__semicolon] = ACTIONS(1145),
    [anon_sym_LBRACK] = ACTIONS(545),
    [anon_sym_AT] = ACTIONS(169),
    [anon_sym_default] = ACTIONS(1147),
    [sym_comment] = ACTIONS(44),
  },
  [416] = {
    [sym_identifier] = ACTIONS(1149),
    [sym_comment] = ACTIONS(44),
  },
  [417] = {
    [sym_type_parameters] = STATE(552),
    [sym_superclass] = STATE(540),
    [sym_super_interfaces] = STATE(541),
    [sym_class_body] = STATE(542),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(865),
    [anon_sym_extends] = ACTIONS(227),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [418] = {
    [sym_type_parameters] = STATE(553),
    [sym_extends_interfaces] = STATE(545),
    [sym_interface_body] = STATE(546),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(867),
    [anon_sym_extends] = ACTIONS(233),
    [sym_comment] = ACTIONS(44),
  },
  [419] = {
    [anon_sym_RPAREN] = ACTIONS(1151),
    [sym_comment] = ACTIONS(44),
  },
  [420] = {
    [anon_sym_RBRACE] = ACTIONS(1113),
    [anon_sym_AT] = ACTIONS(1113),
    [anon_sym_static] = ACTIONS(1115),
    [anon_sym_class] = ACTIONS(1115),
    [anon_sym_public] = ACTIONS(1115),
    [anon_sym_protected] = ACTIONS(1115),
    [anon_sym_private] = ACTIONS(1115),
    [anon_sym_abstract] = ACTIONS(1115),
    [anon_sym_final] = ACTIONS(1115),
    [anon_sym_strictfp] = ACTIONS(1115),
    [anon_sym_default] = ACTIONS(1115),
    [anon_sym_interface] = ACTIONS(1115),
    [sym_identifier] = ACTIONS(1117),
    [sym_comment] = ACTIONS(44),
  },
  [421] = {
    [sym__expression] = STATE(37),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(893),
    [anon_sym_TILDE] = ACTIONS(893),
    [anon_sym_PLUS_PLUS] = ACTIONS(895),
    [anon_sym_DASH_DASH] = ACTIONS(895),
    [sym_comment] = ACTIONS(44),
  },
  [422] = {
    [sym__expression] = STATE(38),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(893),
    [anon_sym_TILDE] = ACTIONS(893),
    [anon_sym_PLUS_PLUS] = ACTIONS(895),
    [anon_sym_DASH_DASH] = ACTIONS(895),
    [sym_comment] = ACTIONS(44),
  },
  [423] = {
    [anon_sym_EQ] = ACTIONS(1153),
    [anon_sym_PLUS_EQ] = ACTIONS(1155),
    [anon_sym_DASH_EQ] = ACTIONS(1155),
    [anon_sym_STAR_EQ] = ACTIONS(1155),
    [anon_sym_SLASH_EQ] = ACTIONS(1155),
    [anon_sym_AMP_EQ] = ACTIONS(1155),
    [anon_sym_PIPE_EQ] = ACTIONS(1155),
    [anon_sym_CARET_EQ] = ACTIONS(1155),
    [anon_sym_PERCENT_EQ] = ACTIONS(1155),
    [anon_sym_LT_LT_EQ] = ACTIONS(1155),
    [anon_sym_GT_GT_EQ] = ACTIONS(1155),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1155),
    [anon_sym_GT] = ACTIONS(1157),
    [anon_sym_LT] = ACTIONS(191),
    [anon_sym_EQ_EQ] = ACTIONS(189),
    [anon_sym_GT_EQ] = ACTIONS(1159),
    [anon_sym_LT_EQ] = ACTIONS(1159),
    [anon_sym_BANG_EQ] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [anon_sym_AMP] = ACTIONS(1161),
    [anon_sym_PIPE] = ACTIONS(191),
    [anon_sym_CARET] = ACTIONS(191),
    [anon_sym_PERCENT] = ACTIONS(191),
    [anon_sym_LT_LT] = ACTIONS(191),
    [anon_sym_GT_GT] = ACTIONS(191),
    [anon_sym_GT_GT_GT] = ACTIONS(191),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [sym_comment] = ACTIONS(44),
  },
  [424] = {
    [sym__expression] = STATE(564),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1163),
    [anon_sym_TILDE] = ACTIONS(1163),
    [anon_sym_PLUS_PLUS] = ACTIONS(1165),
    [anon_sym_DASH_DASH] = ACTIONS(1165),
    [sym_comment] = ACTIONS(44),
  },
  [425] = {
    [sym__semicolon] = ACTIONS(1167),
    [anon_sym_RPAREN] = ACTIONS(1167),
    [anon_sym_RBRACE] = ACTIONS(1167),
    [anon_sym_COMMA] = ACTIONS(1167),
    [sym_comment] = ACTIONS(44),
  },
  [426] = {
    [anon_sym_RBRACE] = ACTIONS(1169),
    [sym_comment] = ACTIONS(44),
  },
  [427] = {
    [aux_sym_element_value_array_initializer_repeat1] = STATE(567),
    [anon_sym_RBRACE] = ACTIONS(1169),
    [anon_sym_COMMA] = ACTIONS(1171),
    [sym_comment] = ACTIONS(44),
  },
  [428] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(1173),
    [anon_sym_QMARK] = ACTIONS(1175),
    [anon_sym_RBRACE] = ACTIONS(915),
    [anon_sym_COMMA] = ACTIONS(915),
    [sym_comment] = ACTIONS(44),
  },
  [429] = {
    [anon_sym_AMP_AMP] = ACTIONS(1177),
    [anon_sym_PIPE_PIPE] = ACTIONS(919),
    [anon_sym_QMARK] = ACTIONS(919),
    [anon_sym_RBRACE] = ACTIONS(919),
    [anon_sym_COMMA] = ACTIONS(919),
    [sym_comment] = ACTIONS(44),
  },
  [430] = {
    [anon_sym_AMP_AMP] = ACTIONS(921),
    [anon_sym_PIPE_PIPE] = ACTIONS(921),
    [anon_sym_PIPE] = ACTIONS(1179),
    [anon_sym_QMARK] = ACTIONS(921),
    [anon_sym_RBRACE] = ACTIONS(921),
    [anon_sym_COMMA] = ACTIONS(921),
    [sym_comment] = ACTIONS(44),
  },
  [431] = {
    [anon_sym_AMP_AMP] = ACTIONS(925),
    [anon_sym_PIPE_PIPE] = ACTIONS(925),
    [anon_sym_PIPE] = ACTIONS(927),
    [anon_sym_CARET] = ACTIONS(1181),
    [anon_sym_QMARK] = ACTIONS(925),
    [anon_sym_RBRACE] = ACTIONS(925),
    [anon_sym_COMMA] = ACTIONS(925),
    [sym_comment] = ACTIONS(44),
  },
  [432] = {
    [anon_sym_LT] = ACTIONS(1183),
    [anon_sym_EQ_EQ] = ACTIONS(937),
    [anon_sym_BANG_EQ] = ACTIONS(937),
    [anon_sym_AMP_AMP] = ACTIONS(939),
    [anon_sym_PIPE_PIPE] = ACTIONS(939),
    [anon_sym_PIPE] = ACTIONS(941),
    [anon_sym_CARET] = ACTIONS(939),
    [anon_sym_QMARK] = ACTIONS(939),
    [anon_sym_RBRACE] = ACTIONS(939),
    [anon_sym_COMMA] = ACTIONS(939),
    [sym_comment] = ACTIONS(44),
  },
  [433] = {
    [anon_sym_EQ_EQ] = ACTIONS(1185),
    [anon_sym_BANG_EQ] = ACTIONS(1185),
    [sym_comment] = ACTIONS(44),
  },
  [434] = {
    [anon_sym_LT] = ACTIONS(945),
    [anon_sym_EQ_EQ] = ACTIONS(947),
    [anon_sym_BANG_EQ] = ACTIONS(947),
    [anon_sym_AMP_AMP] = ACTIONS(947),
    [anon_sym_PIPE_PIPE] = ACTIONS(947),
    [anon_sym_PIPE] = ACTIONS(945),
    [anon_sym_CARET] = ACTIONS(947),
    [anon_sym_LT_LT] = ACTIONS(1187),
    [anon_sym_GT_GT] = ACTIONS(1189),
    [anon_sym_GT_GT_GT] = ACTIONS(1187),
    [anon_sym_QMARK] = ACTIONS(947),
    [anon_sym_RBRACE] = ACTIONS(947),
    [anon_sym_COMMA] = ACTIONS(947),
    [sym_comment] = ACTIONS(44),
  },
  [435] = {
    [anon_sym_LT] = ACTIONS(953),
    [anon_sym_EQ_EQ] = ACTIONS(955),
    [anon_sym_BANG_EQ] = ACTIONS(955),
    [anon_sym_AMP_AMP] = ACTIONS(955),
    [anon_sym_PIPE_PIPE] = ACTIONS(955),
    [anon_sym_PLUS] = ACTIONS(1191),
    [anon_sym_DASH] = ACTIONS(1191),
    [anon_sym_PIPE] = ACTIONS(953),
    [anon_sym_CARET] = ACTIONS(955),
    [anon_sym_LT_LT] = ACTIONS(955),
    [anon_sym_GT_GT] = ACTIONS(953),
    [anon_sym_GT_GT_GT] = ACTIONS(955),
    [anon_sym_QMARK] = ACTIONS(955),
    [anon_sym_RBRACE] = ACTIONS(955),
    [anon_sym_COMMA] = ACTIONS(955),
    [sym_comment] = ACTIONS(44),
  },
  [436] = {
    [anon_sym_LT] = ACTIONS(959),
    [anon_sym_EQ_EQ] = ACTIONS(961),
    [anon_sym_BANG_EQ] = ACTIONS(961),
    [anon_sym_AMP_AMP] = ACTIONS(961),
    [anon_sym_PIPE_PIPE] = ACTIONS(961),
    [anon_sym_PLUS] = ACTIONS(961),
    [anon_sym_DASH] = ACTIONS(961),
    [anon_sym_STAR] = ACTIONS(1193),
    [anon_sym_SLASH] = ACTIONS(1195),
    [anon_sym_PIPE] = ACTIONS(959),
    [anon_sym_CARET] = ACTIONS(961),
    [anon_sym_PERCENT] = ACTIONS(1193),
    [anon_sym_LT_LT] = ACTIONS(961),
    [anon_sym_GT_GT] = ACTIONS(959),
    [anon_sym_GT_GT_GT] = ACTIONS(961),
    [anon_sym_QMARK] = ACTIONS(961),
    [anon_sym_RBRACE] = ACTIONS(961),
    [anon_sym_COMMA] = ACTIONS(961),
    [sym_comment] = ACTIONS(44),
  },
  [437] = {
    [sym_unary_expression] = STATE(311),
    [sym_conditional_and_expression] = STATE(578),
    [sym_inclusive_or_expression] = STATE(315),
    [sym_exclusive_or_expression] = STATE(316),
    [sym_and_expression] = STATE(317),
    [sym_relational_expression] = STATE(318),
    [sym_equality_expression] = STATE(319),
    [sym_shift_expression] = STATE(320),
    [sym_additive_expression] = STATE(321),
    [sym_multiplicative_expression] = STATE(322),
    [anon_sym_BANG] = ACTIONS(629),
    [anon_sym_TILDE] = ACTIONS(629),
    [sym_comment] = ACTIONS(44),
  },
  [438] = {
    [sym__expression] = STATE(579),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_PLUS_PLUS] = ACTIONS(243),
    [anon_sym_DASH_DASH] = ACTIONS(243),
    [sym_comment] = ACTIONS(44),
  },
  [439] = {
    [sym_unary_expression] = STATE(311),
    [sym_inclusive_or_expression] = STATE(580),
    [sym_exclusive_or_expression] = STATE(316),
    [sym_and_expression] = STATE(317),
    [sym_relational_expression] = STATE(318),
    [sym_equality_expression] = STATE(319),
    [sym_shift_expression] = STATE(320),
    [sym_additive_expression] = STATE(321),
    [sym_multiplicative_expression] = STATE(322),
    [anon_sym_BANG] = ACTIONS(629),
    [anon_sym_TILDE] = ACTIONS(629),
    [sym_comment] = ACTIONS(44),
  },
  [440] = {
    [sym_unary_expression] = STATE(311),
    [sym_exclusive_or_expression] = STATE(581),
    [sym_and_expression] = STATE(317),
    [sym_relational_expression] = STATE(318),
    [sym_equality_expression] = STATE(319),
    [sym_shift_expression] = STATE(320),
    [sym_additive_expression] = STATE(321),
    [sym_multiplicative_expression] = STATE(322),
    [anon_sym_BANG] = ACTIONS(629),
    [anon_sym_TILDE] = ACTIONS(629),
    [sym_comment] = ACTIONS(44),
  },
  [441] = {
    [sym_unary_expression] = STATE(311),
    [sym_and_expression] = STATE(582),
    [sym_relational_expression] = STATE(318),
    [sym_equality_expression] = STATE(319),
    [sym_shift_expression] = STATE(320),
    [sym_additive_expression] = STATE(321),
    [sym_multiplicative_expression] = STATE(322),
    [anon_sym_BANG] = ACTIONS(629),
    [anon_sym_TILDE] = ACTIONS(629),
    [sym_comment] = ACTIONS(44),
  },
  [442] = {
    [sym_unary_expression] = STATE(311),
    [sym_shift_expression] = STATE(583),
    [sym_additive_expression] = STATE(321),
    [sym_multiplicative_expression] = STATE(322),
    [anon_sym_BANG] = ACTIONS(629),
    [anon_sym_TILDE] = ACTIONS(629),
    [sym_comment] = ACTIONS(44),
  },
  [443] = {
    [sym_unary_expression] = STATE(311),
    [sym_relational_expression] = STATE(584),
    [sym_shift_expression] = STATE(320),
    [sym_additive_expression] = STATE(321),
    [sym_multiplicative_expression] = STATE(322),
    [anon_sym_BANG] = ACTIONS(629),
    [anon_sym_TILDE] = ACTIONS(629),
    [sym_comment] = ACTIONS(44),
  },
  [444] = {
    [sym_unary_expression] = STATE(311),
    [sym_additive_expression] = STATE(585),
    [sym_multiplicative_expression] = STATE(322),
    [anon_sym_BANG] = ACTIONS(629),
    [anon_sym_TILDE] = ACTIONS(629),
    [sym_comment] = ACTIONS(44),
  },
  [445] = {
    [sym_unary_expression] = STATE(311),
    [sym_multiplicative_expression] = STATE(586),
    [anon_sym_BANG] = ACTIONS(629),
    [anon_sym_TILDE] = ACTIONS(629),
    [sym_comment] = ACTIONS(44),
  },
  [446] = {
    [sym_unary_expression] = STATE(587),
    [anon_sym_BANG] = ACTIONS(629),
    [anon_sym_TILDE] = ACTIONS(629),
    [sym_comment] = ACTIONS(44),
  },
  [447] = {
    [anon_sym_RPAREN] = ACTIONS(1197),
    [anon_sym_COMMA] = ACTIONS(1197),
    [sym_comment] = ACTIONS(44),
  },
  [448] = {
    [sym__semicolon] = ACTIONS(1199),
    [anon_sym_COMMA] = ACTIONS(1199),
    [anon_sym_DOT] = ACTIONS(1199),
    [sym_comment] = ACTIONS(44),
  },
  [449] = {
    [anon_sym_RBRACE] = ACTIONS(1201),
    [anon_sym_requires] = ACTIONS(1201),
    [anon_sym_exports] = ACTIONS(1201),
    [anon_sym_opens] = ACTIONS(1201),
    [anon_sym_uses] = ACTIONS(1201),
    [anon_sym_provides] = ACTIONS(1201),
    [sym_comment] = ACTIONS(44),
  },
  [450] = {
    [sym__semicolon] = ACTIONS(1203),
    [anon_sym_COMMA] = ACTIONS(1203),
    [anon_sym_DOT] = ACTIONS(665),
    [sym_comment] = ACTIONS(44),
  },
  [451] = {
    [sym__semicolon] = ACTIONS(423),
    [anon_sym_COMMA] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(423),
    [anon_sym_to] = ACTIONS(425),
    [sym_identifier] = ACTIONS(1205),
    [sym_comment] = ACTIONS(44),
  },
  [452] = {
    [aux_sym_module_directive_repeat2] = STATE(589),
    [sym__semicolon] = ACTIONS(1207),
    [anon_sym_COMMA] = ACTIONS(669),
    [anon_sym_DOT] = ACTIONS(665),
    [sym_comment] = ACTIONS(44),
  },
  [453] = {
    [sym__semicolon] = ACTIONS(1207),
    [anon_sym_COMMA] = ACTIONS(989),
    [sym_comment] = ACTIONS(44),
  },
  [454] = {
    [sym_module_name] = STATE(590),
    [sym_identifier] = ACTIONS(985),
    [sym_comment] = ACTIONS(44),
  },
  [455] = {
    [aux_sym_module_directive_repeat3] = STATE(592),
    [sym__semicolon] = ACTIONS(1207),
    [anon_sym_COMMA] = ACTIONS(1209),
    [anon_sym_DOT] = ACTIONS(675),
    [sym_comment] = ACTIONS(44),
  },
  [456] = {
    [anon_sym_AT] = ACTIONS(411),
    [sym_identifier] = ACTIONS(1211),
    [sym_comment] = ACTIONS(44),
  },
  [457] = {
    [anon_sym_EQ] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(1213),
    [sym_comment] = ACTIONS(44),
  },
  [458] = {
    [anon_sym_RPAREN] = ACTIONS(1213),
    [sym_comment] = ACTIONS(44),
  },
  [459] = {
    [anon_sym_RPAREN] = ACTIONS(1215),
    [sym_comment] = ACTIONS(44),
  },
  [460] = {
    [anon_sym_LPAREN] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(423),
    [anon_sym_AT] = ACTIONS(423),
    [sym_identifier] = ACTIONS(425),
    [sym_comment] = ACTIONS(44),
  },
  [461] = {
    [sym_class_or_interface_type] = STATE(595),
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [aux_sym_class_or_interface_type_repeat1] = STATE(145),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(331),
    [sym_comment] = ACTIONS(44),
  },
  [462] = {
    [anon_sym_GT] = ACTIONS(1217),
    [anon_sym_AMP] = ACTIONS(1219),
    [anon_sym_COMMA] = ACTIONS(1217),
    [sym_comment] = ACTIONS(44),
  },
  [463] = {
    [anon_sym_GT] = ACTIONS(1221),
    [anon_sym_COMMA] = ACTIONS(1221),
    [sym_comment] = ACTIONS(44),
  },
  [464] = {
    [sym__expression] = STATE(37),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1017),
    [anon_sym_TILDE] = ACTIONS(1017),
    [anon_sym_PLUS_PLUS] = ACTIONS(1019),
    [anon_sym_DASH_DASH] = ACTIONS(1019),
    [sym_comment] = ACTIONS(44),
  },
  [465] = {
    [sym__expression] = STATE(38),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1017),
    [anon_sym_TILDE] = ACTIONS(1017),
    [anon_sym_PLUS_PLUS] = ACTIONS(1019),
    [anon_sym_DASH_DASH] = ACTIONS(1019),
    [sym_comment] = ACTIONS(44),
  },
  [466] = {
    [anon_sym_EQ] = ACTIONS(1223),
    [anon_sym_PLUS_EQ] = ACTIONS(1225),
    [anon_sym_DASH_EQ] = ACTIONS(1225),
    [anon_sym_STAR_EQ] = ACTIONS(1225),
    [anon_sym_SLASH_EQ] = ACTIONS(1225),
    [anon_sym_AMP_EQ] = ACTIONS(1225),
    [anon_sym_PIPE_EQ] = ACTIONS(1225),
    [anon_sym_CARET_EQ] = ACTIONS(1225),
    [anon_sym_PERCENT_EQ] = ACTIONS(1225),
    [anon_sym_LT_LT_EQ] = ACTIONS(1225),
    [anon_sym_GT_GT_EQ] = ACTIONS(1225),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1225),
    [anon_sym_GT] = ACTIONS(1227),
    [anon_sym_LT] = ACTIONS(1227),
    [anon_sym_EQ_EQ] = ACTIONS(1229),
    [anon_sym_GT_EQ] = ACTIONS(1229),
    [anon_sym_LT_EQ] = ACTIONS(1229),
    [anon_sym_BANG_EQ] = ACTIONS(1229),
    [anon_sym_AMP_AMP] = ACTIONS(1231),
    [anon_sym_PIPE_PIPE] = ACTIONS(1233),
    [anon_sym_PLUS] = ACTIONS(1235),
    [anon_sym_DASH] = ACTIONS(1235),
    [anon_sym_STAR] = ACTIONS(1237),
    [anon_sym_SLASH] = ACTIONS(1237),
    [anon_sym_AMP] = ACTIONS(1239),
    [anon_sym_PIPE] = ACTIONS(1241),
    [anon_sym_CARET] = ACTIONS(1241),
    [anon_sym_PERCENT] = ACTIONS(1237),
    [anon_sym_LT_LT] = ACTIONS(1237),
    [anon_sym_GT_GT] = ACTIONS(1237),
    [anon_sym_GT_GT_GT] = ACTIONS(1237),
    [anon_sym_QMARK] = ACTIONS(1243),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(1245),
    [sym_comment] = ACTIONS(44),
  },
  [467] = {
    [sym__literal] = STATE(607),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(608),
    [sym_element_value_pair] = STATE(115),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(275),
    [anon_sym_false] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(1247),
    [sym_identifier] = ACTIONS(1249),
    [sym_comment] = ACTIONS(44),
  },
  [468] = {
    [sym_identifier] = ACTIONS(1251),
    [sym_comment] = ACTIONS(44),
  },
  [469] = {
    [anon_sym_if] = ACTIONS(1253),
    [anon_sym_RBRACE] = ACTIONS(1253),
    [anon_sym_AT] = ACTIONS(1253),
    [anon_sym_static] = ACTIONS(1253),
    [anon_sym_class] = ACTIONS(1253),
    [anon_sym_public] = ACTIONS(1253),
    [anon_sym_protected] = ACTIONS(1253),
    [anon_sym_private] = ACTIONS(1253),
    [anon_sym_abstract] = ACTIONS(1253),
    [anon_sym_final] = ACTIONS(1253),
    [anon_sym_strictfp] = ACTIONS(1253),
    [anon_sym_default] = ACTIONS(1253),
    [sym_comment] = ACTIONS(44),
  },
  [470] = {
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(199),
    [anon_sym_boolean] = ACTIONS(201),
    [anon_sym_byte] = ACTIONS(201),
    [anon_sym_short] = ACTIONS(201),
    [anon_sym_int] = ACTIONS(201),
    [anon_sym_long] = ACTIONS(201),
    [anon_sym_char] = ACTIONS(201),
    [anon_sym_float] = ACTIONS(201),
    [anon_sym_double] = ACTIONS(201),
    [anon_sym_AT] = ACTIONS(199),
    [sym_identifier] = ACTIONS(667),
    [sym_comment] = ACTIONS(44),
  },
  [471] = {
    [anon_sym_LPAREN] = ACTIONS(1255),
    [anon_sym_DOT] = ACTIONS(1257),
    [anon_sym_boolean] = ACTIONS(695),
    [anon_sym_byte] = ACTIONS(695),
    [anon_sym_short] = ACTIONS(695),
    [anon_sym_int] = ACTIONS(695),
    [anon_sym_long] = ACTIONS(695),
    [anon_sym_char] = ACTIONS(695),
    [anon_sym_float] = ACTIONS(695),
    [anon_sym_double] = ACTIONS(695),
    [anon_sym_AT] = ACTIONS(203),
    [sym_identifier] = ACTIONS(767),
    [sym_comment] = ACTIONS(44),
  },
  [472] = {
    [anon_sym_GT] = ACTIONS(1259),
    [anon_sym_AMP] = ACTIONS(1259),
    [anon_sym_LBRACE] = ACTIONS(1259),
    [anon_sym_COMMA] = ACTIONS(1259),
    [anon_sym_DOT] = ACTIONS(1259),
    [anon_sym_LBRACK] = ACTIONS(1259),
    [anon_sym_AT] = ACTIONS(1259),
    [anon_sym_implements] = ACTIONS(1259),
    [sym_comment] = ACTIONS(44),
  },
  [473] = {
    [sym_type_argument] = STATE(612),
    [sym_reference_type] = STATE(358),
    [sym_class_or_interface_type] = STATE(359),
    [sym_primitive_type] = STATE(360),
    [sym_integral_type] = STATE(353),
    [sym_floating_point_type] = STATE(353),
    [sym__annotation] = STATE(361),
    [sym_normal_annotation] = STATE(362),
    [sym_marker_annotation] = STATE(362),
    [sym_single_element_annotation] = STATE(362),
    [aux_sym_class_or_interface_type_repeat1] = STATE(363),
    [anon_sym_boolean] = ACTIONS(735),
    [anon_sym_byte] = ACTIONS(737),
    [anon_sym_short] = ACTIONS(737),
    [anon_sym_int] = ACTIONS(737),
    [anon_sym_long] = ACTIONS(737),
    [anon_sym_char] = ACTIONS(737),
    [anon_sym_float] = ACTIONS(739),
    [anon_sym_double] = ACTIONS(739),
    [anon_sym_AT] = ACTIONS(741),
    [sym_identifier] = ACTIONS(743),
    [sym_comment] = ACTIONS(44),
  },
  [474] = {
    [anon_sym_GT] = ACTIONS(1261),
    [anon_sym_COMMA] = ACTIONS(1263),
    [sym_comment] = ACTIONS(44),
  },
  [475] = {
    [anon_sym_GT] = ACTIONS(1265),
    [anon_sym_COMMA] = ACTIONS(1265),
    [sym_comment] = ACTIONS(44),
  },
  [476] = {
    [anon_sym_LBRACK] = ACTIONS(1267),
    [anon_sym_AT] = ACTIONS(1267),
    [sym_comment] = ACTIONS(44),
  },
  [477] = {
    [anon_sym_boolean] = ACTIONS(705),
    [anon_sym_byte] = ACTIONS(705),
    [anon_sym_short] = ACTIONS(705),
    [anon_sym_int] = ACTIONS(705),
    [anon_sym_long] = ACTIONS(705),
    [anon_sym_char] = ACTIONS(705),
    [anon_sym_float] = ACTIONS(705),
    [anon_sym_double] = ACTIONS(705),
    [anon_sym_AT] = ACTIONS(255),
    [sym_identifier] = ACTIONS(1269),
    [sym_comment] = ACTIONS(44),
  },
  [478] = {
    [anon_sym_GT] = ACTIONS(1271),
    [anon_sym_AMP] = ACTIONS(1271),
    [anon_sym_LBRACE] = ACTIONS(1271),
    [anon_sym_COMMA] = ACTIONS(1271),
    [anon_sym_DOT] = ACTIONS(1271),
    [anon_sym_LBRACK] = ACTIONS(1271),
    [anon_sym_AT] = ACTIONS(1271),
    [anon_sym_implements] = ACTIONS(1271),
    [sym_comment] = ACTIONS(44),
  },
  [479] = {
    [sym_type_arguments] = STATE(615),
    [anon_sym_GT] = ACTIONS(1271),
    [anon_sym_LT] = ACTIONS(501),
    [anon_sym_AMP] = ACTIONS(1271),
    [anon_sym_LBRACE] = ACTIONS(1271),
    [anon_sym_COMMA] = ACTIONS(1271),
    [anon_sym_DOT] = ACTIONS(1271),
    [anon_sym_LBRACK] = ACTIONS(1271),
    [anon_sym_AT] = ACTIONS(1271),
    [anon_sym_implements] = ACTIONS(1271),
    [sym_comment] = ACTIONS(44),
  },
  [480] = {
    [sym__annotation] = STATE(229),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(1273),
    [sym_comment] = ACTIONS(44),
  },
  [481] = {
    [anon_sym_GT] = ACTIONS(1275),
    [anon_sym_AMP] = ACTIONS(1275),
    [anon_sym_LBRACE] = ACTIONS(1275),
    [anon_sym_COMMA] = ACTIONS(1275),
    [anon_sym_DOT] = ACTIONS(749),
    [anon_sym_LBRACK] = ACTIONS(1275),
    [anon_sym_AT] = ACTIONS(1275),
    [anon_sym_implements] = ACTIONS(1275),
    [sym_comment] = ACTIONS(44),
  },
  [482] = {
    [anon_sym_LBRACE] = ACTIONS(1277),
    [anon_sym_COMMA] = ACTIONS(1277),
    [sym_comment] = ACTIONS(44),
  },
  [483] = {
    [sym__annotation] = STATE(187),
    [sym_normal_annotation] = STATE(191),
    [sym_marker_annotation] = STATE(191),
    [sym_single_element_annotation] = STATE(191),
    [sym_class_declaration] = STATE(192),
    [sym_normal_class_declaration] = STATE(193),
    [sym_modifier] = STATE(194),
    [sym_interface_declaration] = STATE(192),
    [sym_annotation_type_declaration] = STATE(195),
    [sym_annotation_type_member_declaration] = STATE(196),
    [sym_annotation_type_element_declaration] = STATE(192),
    [sym_normal_interface_declaration] = STATE(195),
    [sym_constant_declaration] = STATE(192),
    [sym_variable_declarator_list] = STATE(197),
    [sym_variable_declarator] = STATE(164),
    [sym_variable_declarator_id] = STATE(165),
    [aux_sym_normal_class_declaration_repeat1] = STATE(198),
    [aux_sym_annotation_type_body_repeat1] = STATE(618),
    [anon_sym_RBRACE] = ACTIONS(1279),
    [anon_sym_AT] = ACTIONS(395),
    [anon_sym_static] = ACTIONS(397),
    [anon_sym_class] = ACTIONS(399),
    [anon_sym_public] = ACTIONS(397),
    [anon_sym_protected] = ACTIONS(397),
    [anon_sym_private] = ACTIONS(397),
    [anon_sym_abstract] = ACTIONS(397),
    [anon_sym_final] = ACTIONS(397),
    [anon_sym_strictfp] = ACTIONS(397),
    [anon_sym_default] = ACTIONS(397),
    [anon_sym_interface] = ACTIONS(401),
    [sym_identifier] = ACTIONS(403),
    [sym_comment] = ACTIONS(44),
  },
  [484] = {
    [sym__semicolon] = ACTIONS(405),
    [anon_sym_LT] = ACTIONS(405),
    [anon_sym_RBRACE] = ACTIONS(405),
    [anon_sym_AT] = ACTIONS(405),
    [anon_sym_static] = ACTIONS(407),
    [anon_sym_class] = ACTIONS(407),
    [anon_sym_public] = ACTIONS(407),
    [anon_sym_protected] = ACTIONS(407),
    [anon_sym_private] = ACTIONS(407),
    [anon_sym_abstract] = ACTIONS(407),
    [anon_sym_final] = ACTIONS(407),
    [anon_sym_strictfp] = ACTIONS(407),
    [anon_sym_default] = ACTIONS(407),
    [anon_sym_interface] = ACTIONS(407),
    [sym_result] = ACTIONS(407),
    [sym_identifier] = ACTIONS(409),
    [sym_comment] = ACTIONS(44),
  },
  [485] = {
    [anon_sym_LT] = ACTIONS(411),
    [anon_sym_AT] = ACTIONS(411),
    [anon_sym_static] = ACTIONS(1211),
    [anon_sym_class] = ACTIONS(1211),
    [anon_sym_public] = ACTIONS(1211),
    [anon_sym_protected] = ACTIONS(1211),
    [anon_sym_private] = ACTIONS(1211),
    [anon_sym_abstract] = ACTIONS(1211),
    [anon_sym_final] = ACTIONS(1211),
    [anon_sym_strictfp] = ACTIONS(1211),
    [anon_sym_default] = ACTIONS(1211),
    [anon_sym_interface] = ACTIONS(1211),
    [sym_result] = ACTIONS(1211),
    [sym_identifier] = ACTIONS(1281),
    [sym_comment] = ACTIONS(44),
  },
  [486] = {
    [anon_sym_EQ] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(1283),
    [sym_comment] = ACTIONS(44),
  },
  [487] = {
    [anon_sym_RPAREN] = ACTIONS(1283),
    [sym_comment] = ACTIONS(44),
  },
  [488] = {
    [anon_sym_RPAREN] = ACTIONS(1285),
    [sym_comment] = ACTIONS(44),
  },
  [489] = {
    [anon_sym_LT] = ACTIONS(423),
    [anon_sym_LPAREN] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(423),
    [anon_sym_AT] = ACTIONS(423),
    [anon_sym_static] = ACTIONS(425),
    [anon_sym_class] = ACTIONS(425),
    [anon_sym_public] = ACTIONS(425),
    [anon_sym_protected] = ACTIONS(425),
    [anon_sym_private] = ACTIONS(425),
    [anon_sym_abstract] = ACTIONS(425),
    [anon_sym_final] = ACTIONS(425),
    [anon_sym_strictfp] = ACTIONS(425),
    [anon_sym_default] = ACTIONS(425),
    [anon_sym_interface] = ACTIONS(425),
    [sym_result] = ACTIONS(425),
    [sym_identifier] = ACTIONS(1205),
    [sym_comment] = ACTIONS(44),
  },
  [490] = {
    [sym__semicolon] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(487),
    [anon_sym_AT] = ACTIONS(487),
    [anon_sym_static] = ACTIONS(489),
    [anon_sym_class] = ACTIONS(489),
    [anon_sym_public] = ACTIONS(489),
    [anon_sym_protected] = ACTIONS(489),
    [anon_sym_private] = ACTIONS(489),
    [anon_sym_abstract] = ACTIONS(489),
    [anon_sym_final] = ACTIONS(489),
    [anon_sym_strictfp] = ACTIONS(489),
    [anon_sym_default] = ACTIONS(489),
    [anon_sym_interface] = ACTIONS(489),
    [sym_result] = ACTIONS(489),
    [sym_identifier] = ACTIONS(491),
    [sym_comment] = ACTIONS(44),
  },
  [491] = {
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym_class_declaration] = STATE(137),
    [sym_normal_class_declaration] = STATE(28),
    [sym_modifier] = STATE(29),
    [sym_class_body_declaration] = STATE(243),
    [sym_class_member_declaration] = STATE(141),
    [sym_interface_declaration] = STATE(137),
    [sym_annotation_type_declaration] = STATE(30),
    [sym_normal_interface_declaration] = STATE(30),
    [sym_block] = STATE(141),
    [aux_sym_normal_class_declaration_repeat1] = STATE(33),
    [sym__semicolon] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(1287),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
  },
  [492] = {
    [sym_super_interfaces] = STATE(622),
    [sym_class_body] = STATE(623),
    [anon_sym_LBRACE] = ACTIONS(769),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [493] = {
    [sym_class_body] = STATE(623),
    [anon_sym_LBRACE] = ACTIONS(769),
    [sym_comment] = ACTIONS(44),
  },
  [494] = {
    [sym__semicolon] = ACTIONS(515),
    [anon_sym_LT] = ACTIONS(515),
    [anon_sym_RBRACE] = ACTIONS(515),
    [anon_sym_AT] = ACTIONS(515),
    [anon_sym_static] = ACTIONS(517),
    [anon_sym_class] = ACTIONS(517),
    [anon_sym_public] = ACTIONS(517),
    [anon_sym_protected] = ACTIONS(517),
    [anon_sym_private] = ACTIONS(517),
    [anon_sym_abstract] = ACTIONS(517),
    [anon_sym_final] = ACTIONS(517),
    [anon_sym_strictfp] = ACTIONS(517),
    [anon_sym_default] = ACTIONS(517),
    [anon_sym_interface] = ACTIONS(517),
    [sym_result] = ACTIONS(517),
    [sym_identifier] = ACTIONS(519),
    [sym_comment] = ACTIONS(44),
  },
  [495] = {
    [sym__semicolon] = ACTIONS(527),
    [anon_sym_LT] = ACTIONS(527),
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_AT] = ACTIONS(527),
    [anon_sym_static] = ACTIONS(529),
    [anon_sym_class] = ACTIONS(529),
    [anon_sym_public] = ACTIONS(529),
    [anon_sym_protected] = ACTIONS(529),
    [anon_sym_private] = ACTIONS(529),
    [anon_sym_abstract] = ACTIONS(529),
    [anon_sym_final] = ACTIONS(529),
    [anon_sym_strictfp] = ACTIONS(529),
    [anon_sym_default] = ACTIONS(529),
    [anon_sym_interface] = ACTIONS(529),
    [sym_result] = ACTIONS(529),
    [sym_identifier] = ACTIONS(531),
    [sym_comment] = ACTIONS(44),
  },
  [496] = {
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(158),
    [sym_marker_annotation] = STATE(158),
    [sym_single_element_annotation] = STATE(158),
    [sym_class_declaration] = STATE(151),
    [sym_normal_class_declaration] = STATE(159),
    [sym_modifier] = STATE(29),
    [sym_type_parameters] = STATE(160),
    [sym_interface_declaration] = STATE(151),
    [sym_annotation_type_declaration] = STATE(161),
    [sym_normal_interface_declaration] = STATE(161),
    [sym_interface_member_declaration] = STATE(279),
    [sym_constant_declaration] = STATE(151),
    [sym_variable_declarator_list] = STATE(163),
    [sym_variable_declarator] = STATE(164),
    [sym_variable_declarator_id] = STATE(165),
    [sym_interface_method_declaration] = STATE(151),
    [sym_method_header] = STATE(166),
    [aux_sym_normal_class_declaration_repeat1] = STATE(167),
    [sym__semicolon] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(1289),
    [anon_sym_AT] = ACTIONS(343),
    [anon_sym_static] = ACTIONS(345),
    [anon_sym_class] = ACTIONS(347),
    [anon_sym_public] = ACTIONS(345),
    [anon_sym_protected] = ACTIONS(345),
    [anon_sym_private] = ACTIONS(345),
    [anon_sym_abstract] = ACTIONS(345),
    [anon_sym_final] = ACTIONS(345),
    [anon_sym_strictfp] = ACTIONS(345),
    [anon_sym_default] = ACTIONS(345),
    [anon_sym_interface] = ACTIONS(349),
    [sym_result] = ACTIONS(351),
    [sym_identifier] = ACTIONS(353),
    [sym_comment] = ACTIONS(44),
  },
  [497] = {
    [sym_interface_body] = STATE(625),
    [anon_sym_LBRACE] = ACTIONS(771),
    [sym_comment] = ACTIONS(44),
  },
  [498] = {
    [sym__semicolon] = ACTIONS(579),
    [anon_sym_LT] = ACTIONS(579),
    [anon_sym_RBRACE] = ACTIONS(579),
    [anon_sym_AT] = ACTIONS(579),
    [anon_sym_static] = ACTIONS(581),
    [anon_sym_class] = ACTIONS(581),
    [anon_sym_public] = ACTIONS(581),
    [anon_sym_protected] = ACTIONS(581),
    [anon_sym_private] = ACTIONS(581),
    [anon_sym_abstract] = ACTIONS(581),
    [anon_sym_final] = ACTIONS(581),
    [anon_sym_strictfp] = ACTIONS(581),
    [anon_sym_default] = ACTIONS(581),
    [anon_sym_interface] = ACTIONS(581),
    [sym_result] = ACTIONS(581),
    [sym_identifier] = ACTIONS(583),
    [sym_comment] = ACTIONS(44),
  },
  [499] = {
    [sym_dims] = STATE(626),
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [aux_sym_class_or_interface_type_repeat1] = STATE(262),
    [aux_sym_dims_repeat1] = STATE(263),
    [sym__semicolon] = ACTIONS(1291),
    [anon_sym_LBRACE] = ACTIONS(1291),
    [anon_sym_LBRACK] = ACTIONS(545),
    [anon_sym_AT] = ACTIONS(169),
    [anon_sym_throws] = ACTIONS(1291),
    [sym_comment] = ACTIONS(44),
  },
  [500] = {
    [sym_package_or_type_name] = STATE(628),
    [sym_identifier] = ACTIONS(1293),
    [sym_comment] = ACTIONS(44),
  },
  [501] = {
    [anon_sym_AT] = ACTIONS(68),
    [anon_sym_static] = ACTIONS(70),
    [anon_sym_public] = ACTIONS(70),
    [anon_sym_protected] = ACTIONS(70),
    [anon_sym_private] = ACTIONS(70),
    [anon_sym_abstract] = ACTIONS(70),
    [anon_sym_final] = ACTIONS(70),
    [anon_sym_strictfp] = ACTIONS(70),
    [anon_sym_default] = ACTIONS(70),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(68),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(44),
  },
  [502] = {
    [anon_sym_RPAREN] = ACTIONS(1295),
    [anon_sym_COMMA] = ACTIONS(1295),
    [sym_comment] = ACTIONS(44),
  },
  [503] = {
    [sym_variable_declarator] = STATE(629),
    [sym_variable_declarator_id] = STATE(165),
    [sym_identifier] = ACTIONS(795),
    [sym_comment] = ACTIONS(44),
  },
  [504] = {
    [sym_dims] = STATE(261),
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [aux_sym_class_or_interface_type_repeat1] = STATE(262),
    [aux_sym_dims_repeat1] = STATE(263),
    [anon_sym_RPAREN] = ACTIONS(543),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_DOT] = ACTIONS(1297),
    [anon_sym_LBRACK] = ACTIONS(545),
    [anon_sym_AT] = ACTIONS(169),
    [sym_comment] = ACTIONS(44),
  },
  [505] = {
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym_static] = ACTIONS(70),
    [anon_sym_public] = ACTIONS(70),
    [anon_sym_protected] = ACTIONS(70),
    [anon_sym_private] = ACTIONS(70),
    [anon_sym_abstract] = ACTIONS(70),
    [anon_sym_final] = ACTIONS(70),
    [anon_sym_strictfp] = ACTIONS(70),
    [anon_sym_default] = ACTIONS(70),
    [anon_sym_this] = ACTIONS(465),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(124),
    [sym_identifier] = ACTIONS(1299),
    [sym_comment] = ACTIONS(44),
  },
  [506] = {
    [anon_sym_AT] = ACTIONS(129),
    [anon_sym_static] = ACTIONS(467),
    [anon_sym_public] = ACTIONS(467),
    [anon_sym_protected] = ACTIONS(467),
    [anon_sym_private] = ACTIONS(467),
    [anon_sym_abstract] = ACTIONS(467),
    [anon_sym_final] = ACTIONS(467),
    [anon_sym_strictfp] = ACTIONS(467),
    [anon_sym_default] = ACTIONS(467),
    [anon_sym_this] = ACTIONS(467),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(129),
    [sym_identifier] = ACTIONS(547),
    [sym_comment] = ACTIONS(44),
  },
  [507] = {
    [anon_sym_AT] = ACTIONS(155),
    [anon_sym_static] = ACTIONS(157),
    [anon_sym_public] = ACTIONS(157),
    [anon_sym_protected] = ACTIONS(157),
    [anon_sym_private] = ACTIONS(157),
    [anon_sym_abstract] = ACTIONS(157),
    [anon_sym_final] = ACTIONS(157),
    [anon_sym_strictfp] = ACTIONS(157),
    [anon_sym_default] = ACTIONS(157),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(155),
    [sym_identifier] = ACTIONS(159),
    [sym_comment] = ACTIONS(44),
  },
  [508] = {
    [anon_sym_RPAREN] = ACTIONS(1302),
    [anon_sym_COMMA] = ACTIONS(1302),
    [sym_comment] = ACTIONS(44),
  },
  [509] = {
    [anon_sym_RPAREN] = ACTIONS(1304),
    [sym_comment] = ACTIONS(44),
  },
  [510] = {
    [aux_sym_formal_parameters_repeat1] = STATE(633),
    [anon_sym_RPAREN] = ACTIONS(1306),
    [anon_sym_COMMA] = ACTIONS(1308),
    [sym_comment] = ACTIONS(44),
  },
  [511] = {
    [aux_sym_formal_parameters_repeat1] = STATE(633),
    [anon_sym_RPAREN] = ACTIONS(1310),
    [anon_sym_COMMA] = ACTIONS(1308),
    [sym_comment] = ACTIONS(44),
  },
  [512] = {
    [anon_sym_RPAREN] = ACTIONS(1310),
    [sym_comment] = ACTIONS(44),
  },
  [513] = {
    [sym__annotation] = STATE(638),
    [sym_normal_annotation] = STATE(639),
    [sym_marker_annotation] = STATE(639),
    [sym_single_element_annotation] = STATE(639),
    [anon_sym_AT] = ACTIONS(1312),
    [anon_sym_this] = ACTIONS(1314),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1316),
    [sym_identifier] = ACTIONS(1318),
    [sym_comment] = ACTIONS(44),
  },
  [514] = {
    [sym__annotation] = STATE(641),
    [sym_normal_annotation] = STATE(642),
    [sym_marker_annotation] = STATE(642),
    [sym_single_element_annotation] = STATE(642),
    [sym_modifier] = STATE(643),
    [sym_variable_declarator_id] = STATE(644),
    [aux_sym_class_or_interface_type_repeat1] = STATE(645),
    [anon_sym_AT] = ACTIONS(1320),
    [anon_sym_static] = ACTIONS(1091),
    [anon_sym_public] = ACTIONS(1091),
    [anon_sym_protected] = ACTIONS(1091),
    [anon_sym_private] = ACTIONS(1091),
    [anon_sym_abstract] = ACTIONS(1091),
    [anon_sym_final] = ACTIONS(1091),
    [anon_sym_strictfp] = ACTIONS(1091),
    [anon_sym_default] = ACTIONS(1091),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1316),
    [sym_identifier] = ACTIONS(353),
    [sym_comment] = ACTIONS(44),
  },
  [515] = {
    [sym_type_arguments] = STATE(648),
    [aux_sym_class_or_interface_type_repeat2] = STATE(649),
    [anon_sym_LT] = ACTIONS(1322),
    [anon_sym_DOT] = ACTIONS(1324),
    [anon_sym_AT] = ACTIONS(499),
    [sym_identifier] = ACTIONS(1326),
    [sym_comment] = ACTIONS(44),
  },
  [516] = {
    [sym_type_variable] = STATE(651),
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [aux_sym_class_or_interface_type_repeat1] = STATE(652),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(1328),
    [sym_comment] = ACTIONS(44),
  },
  [517] = {
    [sym__semicolon] = ACTIONS(1330),
    [anon_sym_LBRACE] = ACTIONS(1330),
    [sym_comment] = ACTIONS(44),
  },
  [518] = {
    [aux_sym_exception_type_list_repeat1] = STATE(654),
    [sym__semicolon] = ACTIONS(1332),
    [anon_sym_LBRACE] = ACTIONS(1332),
    [anon_sym_COMMA] = ACTIONS(1334),
    [sym_comment] = ACTIONS(44),
  },
  [519] = {
    [sym__annotation] = STATE(229),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(1336),
    [sym_comment] = ACTIONS(44),
  },
  [520] = {
    [sym__semicolon] = ACTIONS(1338),
    [anon_sym_EQ] = ACTIONS(1338),
    [anon_sym_GT] = ACTIONS(1338),
    [anon_sym_RPAREN] = ACTIONS(1338),
    [anon_sym_LBRACE] = ACTIONS(1338),
    [anon_sym_COMMA] = ACTIONS(1338),
    [anon_sym_LBRACK] = ACTIONS(1338),
    [anon_sym_AT] = ACTIONS(1338),
    [anon_sym_default] = ACTIONS(1338),
    [anon_sym_throws] = ACTIONS(1338),
    [sym_comment] = ACTIONS(44),
  },
  [521] = {
    [anon_sym_RBRACK] = ACTIONS(1340),
    [sym_comment] = ACTIONS(44),
  },
  [522] = {
    [sym__semicolon] = ACTIONS(1342),
    [anon_sym_LBRACE] = ACTIONS(1342),
    [sym_comment] = ACTIONS(44),
  },
  [523] = {
    [sym_throws] = STATE(657),
    [sym__semicolon] = ACTIONS(1342),
    [anon_sym_LBRACE] = ACTIONS(1342),
    [anon_sym_throws] = ACTIONS(777),
    [sym_comment] = ACTIONS(44),
  },
  [524] = {
    [sym__semicolon] = ACTIONS(1344),
    [anon_sym_COMMA] = ACTIONS(1344),
    [sym_comment] = ACTIONS(44),
  },
  [525] = {
    [sym_annotation_type_body] = STATE(658),
    [anon_sym_LBRACE] = ACTIONS(1075),
    [sym_comment] = ACTIONS(44),
  },
  [526] = {
    [sym_superclass] = STATE(659),
    [sym_super_interfaces] = STATE(622),
    [sym_class_body] = STATE(623),
    [anon_sym_LBRACE] = ACTIONS(769),
    [anon_sym_extends] = ACTIONS(227),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [527] = {
    [sym_extends_interfaces] = STATE(660),
    [sym_interface_body] = STATE(625),
    [anon_sym_LBRACE] = ACTIONS(771),
    [anon_sym_extends] = ACTIONS(233),
    [sym_comment] = ACTIONS(44),
  },
  [528] = {
    [anon_sym_EQ] = ACTIONS(845),
    [anon_sym_PLUS_EQ] = ACTIONS(843),
    [anon_sym_DASH_EQ] = ACTIONS(843),
    [anon_sym_STAR_EQ] = ACTIONS(843),
    [anon_sym_SLASH_EQ] = ACTIONS(843),
    [anon_sym_AMP_EQ] = ACTIONS(843),
    [anon_sym_PIPE_EQ] = ACTIONS(843),
    [anon_sym_CARET_EQ] = ACTIONS(843),
    [anon_sym_PERCENT_EQ] = ACTIONS(843),
    [anon_sym_LT_LT_EQ] = ACTIONS(843),
    [anon_sym_GT_GT_EQ] = ACTIONS(843),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(843),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(373),
    [anon_sym_GT_EQ] = ACTIONS(373),
    [anon_sym_LT_EQ] = ACTIONS(373),
    [anon_sym_BANG_EQ] = ACTIONS(373),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_CARET] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(381),
    [anon_sym_GT_GT] = ACTIONS(381),
    [anon_sym_GT_GT_GT] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(843),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [529] = {
    [ts_builtin_sym_end] = ACTIONS(1346),
    [sym_decimal_integer_literal] = ACTIONS(1348),
    [sym_hex_integer_literal] = ACTIONS(1348),
    [sym_octal_integer_literal] = ACTIONS(1348),
    [sym_binary_integer_literal] = ACTIONS(1348),
    [sym_decimal_floating_point_literal] = ACTIONS(1348),
    [sym_hex_floating_point_literal] = ACTIONS(1350),
    [anon_sym_true] = ACTIONS(1346),
    [anon_sym_false] = ACTIONS(1346),
    [anon_sym_SQUOTE] = ACTIONS(1346),
    [sym_string_literal] = ACTIONS(1346),
    [sym_null_literal] = ACTIONS(1346),
    [anon_sym_BANG] = ACTIONS(1346),
    [anon_sym_TILDE] = ACTIONS(1346),
    [anon_sym_PLUS_PLUS] = ACTIONS(1346),
    [anon_sym_DASH_DASH] = ACTIONS(1346),
    [anon_sym_if] = ACTIONS(1346),
    [anon_sym_RBRACE] = ACTIONS(1346),
    [anon_sym_elseif] = ACTIONS(1346),
    [anon_sym_AT] = ACTIONS(1346),
    [anon_sym_open] = ACTIONS(1346),
    [anon_sym_module] = ACTIONS(1346),
    [anon_sym_static] = ACTIONS(1346),
    [anon_sym_package] = ACTIONS(1346),
    [anon_sym_import] = ACTIONS(1346),
    [anon_sym_class] = ACTIONS(1346),
    [anon_sym_public] = ACTIONS(1346),
    [anon_sym_protected] = ACTIONS(1346),
    [anon_sym_private] = ACTIONS(1346),
    [anon_sym_abstract] = ACTIONS(1346),
    [anon_sym_final] = ACTIONS(1346),
    [anon_sym_strictfp] = ACTIONS(1346),
    [anon_sym_default] = ACTIONS(1346),
    [anon_sym_interface] = ACTIONS(1346),
    [sym_comment] = ACTIONS(44),
  },
  [530] = {
    [ts_builtin_sym_end] = ACTIONS(1352),
    [sym__semicolon] = ACTIONS(1352),
    [sym_decimal_integer_literal] = ACTIONS(1354),
    [sym_hex_integer_literal] = ACTIONS(1354),
    [sym_octal_integer_literal] = ACTIONS(1354),
    [sym_binary_integer_literal] = ACTIONS(1354),
    [sym_decimal_floating_point_literal] = ACTIONS(1354),
    [sym_hex_floating_point_literal] = ACTIONS(1356),
    [anon_sym_true] = ACTIONS(1352),
    [anon_sym_false] = ACTIONS(1352),
    [anon_sym_SQUOTE] = ACTIONS(1352),
    [sym_string_literal] = ACTIONS(1352),
    [sym_null_literal] = ACTIONS(1352),
    [anon_sym_BANG] = ACTIONS(1352),
    [anon_sym_TILDE] = ACTIONS(1352),
    [anon_sym_PLUS_PLUS] = ACTIONS(1352),
    [anon_sym_DASH_DASH] = ACTIONS(1352),
    [anon_sym_if] = ACTIONS(1352),
    [anon_sym_LBRACE] = ACTIONS(1352),
    [anon_sym_RBRACE] = ACTIONS(1352),
    [anon_sym_elseif] = ACTIONS(1352),
    [anon_sym_AT] = ACTIONS(1352),
    [anon_sym_open] = ACTIONS(1352),
    [anon_sym_module] = ACTIONS(1352),
    [anon_sym_static] = ACTIONS(1352),
    [anon_sym_package] = ACTIONS(1352),
    [anon_sym_import] = ACTIONS(1352),
    [anon_sym_class] = ACTIONS(1352),
    [anon_sym_public] = ACTIONS(1352),
    [anon_sym_protected] = ACTIONS(1352),
    [anon_sym_private] = ACTIONS(1352),
    [anon_sym_abstract] = ACTIONS(1352),
    [anon_sym_final] = ACTIONS(1352),
    [anon_sym_strictfp] = ACTIONS(1352),
    [anon_sym_default] = ACTIONS(1352),
    [anon_sym_interface] = ACTIONS(1352),
    [sym_comment] = ACTIONS(44),
  },
  [531] = {
    [sym__annotation] = STATE(187),
    [sym_normal_annotation] = STATE(191),
    [sym_marker_annotation] = STATE(191),
    [sym_single_element_annotation] = STATE(191),
    [sym_class_declaration] = STATE(192),
    [sym_normal_class_declaration] = STATE(193),
    [sym_modifier] = STATE(194),
    [sym_interface_declaration] = STATE(192),
    [sym_annotation_type_declaration] = STATE(195),
    [sym_annotation_type_member_declaration] = STATE(196),
    [sym_annotation_type_element_declaration] = STATE(192),
    [sym_normal_interface_declaration] = STATE(195),
    [sym_constant_declaration] = STATE(192),
    [sym_variable_declarator_list] = STATE(197),
    [sym_variable_declarator] = STATE(164),
    [sym_variable_declarator_id] = STATE(165),
    [aux_sym_normal_class_declaration_repeat1] = STATE(198),
    [aux_sym_annotation_type_body_repeat1] = STATE(662),
    [anon_sym_RBRACE] = ACTIONS(1358),
    [anon_sym_AT] = ACTIONS(395),
    [anon_sym_static] = ACTIONS(397),
    [anon_sym_class] = ACTIONS(399),
    [anon_sym_public] = ACTIONS(397),
    [anon_sym_protected] = ACTIONS(397),
    [anon_sym_private] = ACTIONS(397),
    [anon_sym_abstract] = ACTIONS(397),
    [anon_sym_final] = ACTIONS(397),
    [anon_sym_strictfp] = ACTIONS(397),
    [anon_sym_default] = ACTIONS(397),
    [anon_sym_interface] = ACTIONS(401),
    [sym_identifier] = ACTIONS(403),
    [sym_comment] = ACTIONS(44),
  },
  [532] = {
    [anon_sym_RBRACE] = ACTIONS(405),
    [anon_sym_AT] = ACTIONS(405),
    [anon_sym_static] = ACTIONS(407),
    [anon_sym_class] = ACTIONS(407),
    [anon_sym_public] = ACTIONS(407),
    [anon_sym_protected] = ACTIONS(407),
    [anon_sym_private] = ACTIONS(407),
    [anon_sym_abstract] = ACTIONS(407),
    [anon_sym_final] = ACTIONS(407),
    [anon_sym_strictfp] = ACTIONS(407),
    [anon_sym_default] = ACTIONS(407),
    [anon_sym_interface] = ACTIONS(407),
    [sym_identifier] = ACTIONS(409),
    [sym_comment] = ACTIONS(44),
  },
  [533] = {
    [anon_sym_AT] = ACTIONS(411),
    [anon_sym_static] = ACTIONS(1211),
    [anon_sym_class] = ACTIONS(1211),
    [anon_sym_public] = ACTIONS(1211),
    [anon_sym_protected] = ACTIONS(1211),
    [anon_sym_private] = ACTIONS(1211),
    [anon_sym_abstract] = ACTIONS(1211),
    [anon_sym_final] = ACTIONS(1211),
    [anon_sym_strictfp] = ACTIONS(1211),
    [anon_sym_default] = ACTIONS(1211),
    [anon_sym_interface] = ACTIONS(1211),
    [sym_identifier] = ACTIONS(1281),
    [sym_comment] = ACTIONS(44),
  },
  [534] = {
    [anon_sym_EQ] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(1360),
    [sym_comment] = ACTIONS(44),
  },
  [535] = {
    [anon_sym_RPAREN] = ACTIONS(1360),
    [sym_comment] = ACTIONS(44),
  },
  [536] = {
    [anon_sym_RPAREN] = ACTIONS(1362),
    [sym_comment] = ACTIONS(44),
  },
  [537] = {
    [anon_sym_LPAREN] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(423),
    [anon_sym_AT] = ACTIONS(423),
    [anon_sym_static] = ACTIONS(425),
    [anon_sym_class] = ACTIONS(425),
    [anon_sym_public] = ACTIONS(425),
    [anon_sym_protected] = ACTIONS(425),
    [anon_sym_private] = ACTIONS(425),
    [anon_sym_abstract] = ACTIONS(425),
    [anon_sym_final] = ACTIONS(425),
    [anon_sym_strictfp] = ACTIONS(425),
    [anon_sym_default] = ACTIONS(425),
    [anon_sym_interface] = ACTIONS(425),
    [sym_identifier] = ACTIONS(1205),
    [sym_comment] = ACTIONS(44),
  },
  [538] = {
    [anon_sym_RBRACE] = ACTIONS(487),
    [anon_sym_AT] = ACTIONS(487),
    [anon_sym_static] = ACTIONS(489),
    [anon_sym_class] = ACTIONS(489),
    [anon_sym_public] = ACTIONS(489),
    [anon_sym_protected] = ACTIONS(489),
    [anon_sym_private] = ACTIONS(489),
    [anon_sym_abstract] = ACTIONS(489),
    [anon_sym_final] = ACTIONS(489),
    [anon_sym_strictfp] = ACTIONS(489),
    [anon_sym_default] = ACTIONS(489),
    [anon_sym_interface] = ACTIONS(489),
    [sym_identifier] = ACTIONS(491),
    [sym_comment] = ACTIONS(44),
  },
  [539] = {
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym_class_declaration] = STATE(137),
    [sym_normal_class_declaration] = STATE(28),
    [sym_modifier] = STATE(29),
    [sym_class_body_declaration] = STATE(243),
    [sym_class_member_declaration] = STATE(141),
    [sym_interface_declaration] = STATE(137),
    [sym_annotation_type_declaration] = STATE(30),
    [sym_normal_interface_declaration] = STATE(30),
    [sym_block] = STATE(141),
    [aux_sym_normal_class_declaration_repeat1] = STATE(33),
    [sym__semicolon] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(1364),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
  },
  [540] = {
    [sym_super_interfaces] = STATE(666),
    [sym_class_body] = STATE(667),
    [anon_sym_LBRACE] = ACTIONS(865),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [541] = {
    [sym_class_body] = STATE(667),
    [anon_sym_LBRACE] = ACTIONS(865),
    [sym_comment] = ACTIONS(44),
  },
  [542] = {
    [anon_sym_RBRACE] = ACTIONS(515),
    [anon_sym_AT] = ACTIONS(515),
    [anon_sym_static] = ACTIONS(517),
    [anon_sym_class] = ACTIONS(517),
    [anon_sym_public] = ACTIONS(517),
    [anon_sym_protected] = ACTIONS(517),
    [anon_sym_private] = ACTIONS(517),
    [anon_sym_abstract] = ACTIONS(517),
    [anon_sym_final] = ACTIONS(517),
    [anon_sym_strictfp] = ACTIONS(517),
    [anon_sym_default] = ACTIONS(517),
    [anon_sym_interface] = ACTIONS(517),
    [sym_identifier] = ACTIONS(519),
    [sym_comment] = ACTIONS(44),
  },
  [543] = {
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_AT] = ACTIONS(527),
    [anon_sym_static] = ACTIONS(529),
    [anon_sym_class] = ACTIONS(529),
    [anon_sym_public] = ACTIONS(529),
    [anon_sym_protected] = ACTIONS(529),
    [anon_sym_private] = ACTIONS(529),
    [anon_sym_abstract] = ACTIONS(529),
    [anon_sym_final] = ACTIONS(529),
    [anon_sym_strictfp] = ACTIONS(529),
    [anon_sym_default] = ACTIONS(529),
    [anon_sym_interface] = ACTIONS(529),
    [sym_identifier] = ACTIONS(531),
    [sym_comment] = ACTIONS(44),
  },
  [544] = {
    [sym__annotation] = STATE(12),
    [sym_normal_annotation] = STATE(158),
    [sym_marker_annotation] = STATE(158),
    [sym_single_element_annotation] = STATE(158),
    [sym_class_declaration] = STATE(151),
    [sym_normal_class_declaration] = STATE(159),
    [sym_modifier] = STATE(29),
    [sym_type_parameters] = STATE(160),
    [sym_interface_declaration] = STATE(151),
    [sym_annotation_type_declaration] = STATE(161),
    [sym_normal_interface_declaration] = STATE(161),
    [sym_interface_member_declaration] = STATE(279),
    [sym_constant_declaration] = STATE(151),
    [sym_variable_declarator_list] = STATE(163),
    [sym_variable_declarator] = STATE(164),
    [sym_variable_declarator_id] = STATE(165),
    [sym_interface_method_declaration] = STATE(151),
    [sym_method_header] = STATE(166),
    [aux_sym_normal_class_declaration_repeat1] = STATE(167),
    [sym__semicolon] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(1366),
    [anon_sym_AT] = ACTIONS(343),
    [anon_sym_static] = ACTIONS(345),
    [anon_sym_class] = ACTIONS(347),
    [anon_sym_public] = ACTIONS(345),
    [anon_sym_protected] = ACTIONS(345),
    [anon_sym_private] = ACTIONS(345),
    [anon_sym_abstract] = ACTIONS(345),
    [anon_sym_final] = ACTIONS(345),
    [anon_sym_strictfp] = ACTIONS(345),
    [anon_sym_default] = ACTIONS(345),
    [anon_sym_interface] = ACTIONS(349),
    [sym_result] = ACTIONS(351),
    [sym_identifier] = ACTIONS(353),
    [sym_comment] = ACTIONS(44),
  },
  [545] = {
    [sym_interface_body] = STATE(669),
    [anon_sym_LBRACE] = ACTIONS(867),
    [sym_comment] = ACTIONS(44),
  },
  [546] = {
    [anon_sym_RBRACE] = ACTIONS(579),
    [anon_sym_AT] = ACTIONS(579),
    [anon_sym_static] = ACTIONS(581),
    [anon_sym_class] = ACTIONS(581),
    [anon_sym_public] = ACTIONS(581),
    [anon_sym_protected] = ACTIONS(581),
    [anon_sym_private] = ACTIONS(581),
    [anon_sym_abstract] = ACTIONS(581),
    [anon_sym_final] = ACTIONS(581),
    [anon_sym_strictfp] = ACTIONS(581),
    [anon_sym_default] = ACTIONS(581),
    [anon_sym_interface] = ACTIONS(581),
    [sym_identifier] = ACTIONS(583),
    [sym_comment] = ACTIONS(44),
  },
  [547] = {
    [anon_sym_RBRACE] = ACTIONS(1368),
    [anon_sym_AT] = ACTIONS(1368),
    [anon_sym_static] = ACTIONS(1370),
    [anon_sym_class] = ACTIONS(1370),
    [anon_sym_public] = ACTIONS(1370),
    [anon_sym_protected] = ACTIONS(1370),
    [anon_sym_private] = ACTIONS(1370),
    [anon_sym_abstract] = ACTIONS(1370),
    [anon_sym_final] = ACTIONS(1370),
    [anon_sym_strictfp] = ACTIONS(1370),
    [anon_sym_default] = ACTIONS(1370),
    [anon_sym_interface] = ACTIONS(1370),
    [sym_identifier] = ACTIONS(1372),
    [sym_comment] = ACTIONS(44),
  },
  [548] = {
    [sym__literal] = STATE(310),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(311),
    [sym__annotation] = STATE(310),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym_element_value] = STATE(671),
    [sym_element_value_array_initializer] = STATE(310),
    [sym_conditional_expression] = STATE(310),
    [sym_conditional_or_expression] = STATE(672),
    [sym_conditional_and_expression] = STATE(673),
    [sym_inclusive_or_expression] = STATE(674),
    [sym_exclusive_or_expression] = STATE(675),
    [sym_and_expression] = STATE(317),
    [sym_relational_expression] = STATE(676),
    [sym_equality_expression] = STATE(677),
    [sym_shift_expression] = STATE(678),
    [sym_additive_expression] = STATE(679),
    [sym_multiplicative_expression] = STATE(680),
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
    [anon_sym_BANG] = ACTIONS(1374),
    [anon_sym_TILDE] = ACTIONS(1374),
    [anon_sym_LBRACE] = ACTIONS(631),
    [anon_sym_AT] = ACTIONS(169),
    [sym_comment] = ACTIONS(44),
  },
  [549] = {
    [sym_default_value] = STATE(682),
    [sym__semicolon] = ACTIONS(1376),
    [anon_sym_default] = ACTIONS(1147),
    [sym_comment] = ACTIONS(44),
  },
  [550] = {
    [sym__semicolon] = ACTIONS(1376),
    [sym_comment] = ACTIONS(44),
  },
  [551] = {
    [sym_annotation_type_body] = STATE(683),
    [anon_sym_LBRACE] = ACTIONS(1133),
    [sym_comment] = ACTIONS(44),
  },
  [552] = {
    [sym_superclass] = STATE(684),
    [sym_super_interfaces] = STATE(666),
    [sym_class_body] = STATE(667),
    [anon_sym_LBRACE] = ACTIONS(865),
    [anon_sym_extends] = ACTIONS(227),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [553] = {
    [sym_extends_interfaces] = STATE(685),
    [sym_interface_body] = STATE(669),
    [anon_sym_LBRACE] = ACTIONS(867),
    [anon_sym_extends] = ACTIONS(233),
    [sym_comment] = ACTIONS(44),
  },
  [554] = {
    [sym_dims] = STATE(686),
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym_default_value] = STATE(682),
    [aux_sym_class_or_interface_type_repeat1] = STATE(262),
    [aux_sym_dims_repeat1] = STATE(263),
    [sym__semicolon] = ACTIONS(1376),
    [anon_sym_LBRACK] = ACTIONS(545),
    [anon_sym_AT] = ACTIONS(169),
    [anon_sym_default] = ACTIONS(1147),
    [sym_comment] = ACTIONS(44),
  },
  [555] = {
    [sym__expression] = STATE(687),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(893),
    [anon_sym_TILDE] = ACTIONS(893),
    [anon_sym_PLUS_PLUS] = ACTIONS(895),
    [anon_sym_DASH_DASH] = ACTIONS(895),
    [sym_comment] = ACTIONS(44),
  },
  [556] = {
    [sym__expression] = STATE(688),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(893),
    [anon_sym_TILDE] = ACTIONS(893),
    [anon_sym_PLUS_PLUS] = ACTIONS(895),
    [anon_sym_DASH_DASH] = ACTIONS(895),
    [sym_comment] = ACTIONS(44),
  },
  [557] = {
    [sym__expression] = STATE(689),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(893),
    [anon_sym_TILDE] = ACTIONS(893),
    [anon_sym_PLUS_PLUS] = ACTIONS(895),
    [anon_sym_DASH_DASH] = ACTIONS(895),
    [sym_comment] = ACTIONS(44),
  },
  [558] = {
    [sym__expression] = STATE(690),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(893),
    [anon_sym_TILDE] = ACTIONS(893),
    [anon_sym_PLUS_PLUS] = ACTIONS(895),
    [anon_sym_DASH_DASH] = ACTIONS(895),
    [sym_comment] = ACTIONS(44),
  },
  [559] = {
    [sym__expression] = STATE(691),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(893),
    [anon_sym_TILDE] = ACTIONS(893),
    [anon_sym_PLUS_PLUS] = ACTIONS(895),
    [anon_sym_DASH_DASH] = ACTIONS(895),
    [sym_comment] = ACTIONS(44),
  },
  [560] = {
    [sym__expression] = STATE(100),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(893),
    [anon_sym_TILDE] = ACTIONS(893),
    [anon_sym_PLUS_PLUS] = ACTIONS(895),
    [anon_sym_DASH_DASH] = ACTIONS(895),
    [sym_comment] = ACTIONS(44),
  },
  [561] = {
    [sym__expression] = STATE(692),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_PLUS_PLUS] = ACTIONS(243),
    [anon_sym_DASH_DASH] = ACTIONS(243),
    [sym_comment] = ACTIONS(44),
  },
  [562] = {
    [sym__expression] = STATE(37),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1163),
    [anon_sym_TILDE] = ACTIONS(1163),
    [anon_sym_PLUS_PLUS] = ACTIONS(1165),
    [anon_sym_DASH_DASH] = ACTIONS(1165),
    [sym_comment] = ACTIONS(44),
  },
  [563] = {
    [sym__expression] = STATE(38),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1163),
    [anon_sym_TILDE] = ACTIONS(1163),
    [anon_sym_PLUS_PLUS] = ACTIONS(1165),
    [anon_sym_DASH_DASH] = ACTIONS(1165),
    [sym_comment] = ACTIONS(44),
  },
  [564] = {
    [anon_sym_EQ] = ACTIONS(1378),
    [anon_sym_PLUS_EQ] = ACTIONS(1380),
    [anon_sym_DASH_EQ] = ACTIONS(1380),
    [anon_sym_STAR_EQ] = ACTIONS(1380),
    [anon_sym_SLASH_EQ] = ACTIONS(1380),
    [anon_sym_AMP_EQ] = ACTIONS(1380),
    [anon_sym_PIPE_EQ] = ACTIONS(1380),
    [anon_sym_CARET_EQ] = ACTIONS(1380),
    [anon_sym_PERCENT_EQ] = ACTIONS(1380),
    [anon_sym_LT_LT_EQ] = ACTIONS(1380),
    [anon_sym_GT_GT_EQ] = ACTIONS(1380),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1380),
    [anon_sym_GT] = ACTIONS(1382),
    [anon_sym_LT] = ACTIONS(191),
    [anon_sym_EQ_EQ] = ACTIONS(189),
    [anon_sym_GT_EQ] = ACTIONS(1384),
    [anon_sym_LT_EQ] = ACTIONS(1384),
    [anon_sym_BANG_EQ] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [anon_sym_AMP] = ACTIONS(1386),
    [anon_sym_PIPE] = ACTIONS(191),
    [anon_sym_CARET] = ACTIONS(191),
    [anon_sym_PERCENT] = ACTIONS(191),
    [anon_sym_LT_LT] = ACTIONS(191),
    [anon_sym_GT_GT] = ACTIONS(191),
    [anon_sym_GT_GT_GT] = ACTIONS(191),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [sym_comment] = ACTIONS(44),
  },
  [565] = {
    [sym__semicolon] = ACTIONS(1388),
    [anon_sym_RPAREN] = ACTIONS(1388),
    [anon_sym_RBRACE] = ACTIONS(1388),
    [anon_sym_COMMA] = ACTIONS(1388),
    [sym_comment] = ACTIONS(44),
  },
  [566] = {
    [sym__literal] = STATE(310),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(311),
    [sym__annotation] = STATE(310),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym_element_value] = STATE(701),
    [sym_element_value_array_initializer] = STATE(310),
    [sym_conditional_expression] = STATE(310),
    [sym_conditional_or_expression] = STATE(428),
    [sym_conditional_and_expression] = STATE(429),
    [sym_inclusive_or_expression] = STATE(430),
    [sym_exclusive_or_expression] = STATE(431),
    [sym_and_expression] = STATE(317),
    [sym_relational_expression] = STATE(432),
    [sym_equality_expression] = STATE(433),
    [sym_shift_expression] = STATE(434),
    [sym_additive_expression] = STATE(435),
    [sym_multiplicative_expression] = STATE(436),
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
    [anon_sym_BANG] = ACTIONS(897),
    [anon_sym_TILDE] = ACTIONS(897),
    [anon_sym_LBRACE] = ACTIONS(631),
    [anon_sym_RBRACE] = ACTIONS(1390),
    [anon_sym_AT] = ACTIONS(169),
    [sym_comment] = ACTIONS(44),
  },
  [567] = {
    [anon_sym_RBRACE] = ACTIONS(1390),
    [anon_sym_COMMA] = ACTIONS(1392),
    [sym_comment] = ACTIONS(44),
  },
  [568] = {
    [sym_unary_expression] = STATE(311),
    [sym_conditional_and_expression] = STATE(703),
    [sym_inclusive_or_expression] = STATE(430),
    [sym_exclusive_or_expression] = STATE(431),
    [sym_and_expression] = STATE(317),
    [sym_relational_expression] = STATE(432),
    [sym_equality_expression] = STATE(433),
    [sym_shift_expression] = STATE(434),
    [sym_additive_expression] = STATE(435),
    [sym_multiplicative_expression] = STATE(436),
    [anon_sym_BANG] = ACTIONS(897),
    [anon_sym_TILDE] = ACTIONS(897),
    [sym_comment] = ACTIONS(44),
  },
  [569] = {
    [sym__expression] = STATE(704),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_PLUS_PLUS] = ACTIONS(243),
    [anon_sym_DASH_DASH] = ACTIONS(243),
    [sym_comment] = ACTIONS(44),
  },
  [570] = {
    [sym_unary_expression] = STATE(311),
    [sym_inclusive_or_expression] = STATE(705),
    [sym_exclusive_or_expression] = STATE(431),
    [sym_and_expression] = STATE(317),
    [sym_relational_expression] = STATE(432),
    [sym_equality_expression] = STATE(433),
    [sym_shift_expression] = STATE(434),
    [sym_additive_expression] = STATE(435),
    [sym_multiplicative_expression] = STATE(436),
    [anon_sym_BANG] = ACTIONS(897),
    [anon_sym_TILDE] = ACTIONS(897),
    [sym_comment] = ACTIONS(44),
  },
  [571] = {
    [sym_unary_expression] = STATE(311),
    [sym_exclusive_or_expression] = STATE(706),
    [sym_and_expression] = STATE(317),
    [sym_relational_expression] = STATE(432),
    [sym_equality_expression] = STATE(433),
    [sym_shift_expression] = STATE(434),
    [sym_additive_expression] = STATE(435),
    [sym_multiplicative_expression] = STATE(436),
    [anon_sym_BANG] = ACTIONS(897),
    [anon_sym_TILDE] = ACTIONS(897),
    [sym_comment] = ACTIONS(44),
  },
  [572] = {
    [sym_unary_expression] = STATE(311),
    [sym_and_expression] = STATE(582),
    [sym_relational_expression] = STATE(432),
    [sym_equality_expression] = STATE(433),
    [sym_shift_expression] = STATE(434),
    [sym_additive_expression] = STATE(435),
    [sym_multiplicative_expression] = STATE(436),
    [anon_sym_BANG] = ACTIONS(897),
    [anon_sym_TILDE] = ACTIONS(897),
    [sym_comment] = ACTIONS(44),
  },
  [573] = {
    [sym_unary_expression] = STATE(311),
    [sym_shift_expression] = STATE(707),
    [sym_additive_expression] = STATE(435),
    [sym_multiplicative_expression] = STATE(436),
    [anon_sym_BANG] = ACTIONS(897),
    [anon_sym_TILDE] = ACTIONS(897),
    [sym_comment] = ACTIONS(44),
  },
  [574] = {
    [sym_unary_expression] = STATE(311),
    [sym_relational_expression] = STATE(708),
    [sym_shift_expression] = STATE(434),
    [sym_additive_expression] = STATE(435),
    [sym_multiplicative_expression] = STATE(436),
    [anon_sym_BANG] = ACTIONS(897),
    [anon_sym_TILDE] = ACTIONS(897),
    [sym_comment] = ACTIONS(44),
  },
  [575] = {
    [sym_unary_expression] = STATE(311),
    [sym_additive_expression] = STATE(709),
    [sym_multiplicative_expression] = STATE(436),
    [anon_sym_BANG] = ACTIONS(897),
    [anon_sym_TILDE] = ACTIONS(897),
    [sym_comment] = ACTIONS(44),
  },
  [576] = {
    [sym_unary_expression] = STATE(311),
    [sym_multiplicative_expression] = STATE(710),
    [anon_sym_BANG] = ACTIONS(897),
    [anon_sym_TILDE] = ACTIONS(897),
    [sym_comment] = ACTIONS(44),
  },
  [577] = {
    [sym_unary_expression] = STATE(587),
    [anon_sym_BANG] = ACTIONS(897),
    [anon_sym_TILDE] = ACTIONS(897),
    [sym_comment] = ACTIONS(44),
  },
  [578] = {
    [anon_sym_AMP_AMP] = ACTIONS(917),
    [anon_sym_PIPE_PIPE] = ACTIONS(1394),
    [anon_sym_QMARK] = ACTIONS(1394),
    [anon_sym_RPAREN] = ACTIONS(1394),
    [anon_sym_COMMA] = ACTIONS(1394),
    [sym_comment] = ACTIONS(44),
  },
  [579] = {
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_PLUS_EQ] = ACTIONS(369),
    [anon_sym_DASH_EQ] = ACTIONS(369),
    [anon_sym_STAR_EQ] = ACTIONS(369),
    [anon_sym_SLASH_EQ] = ACTIONS(369),
    [anon_sym_AMP_EQ] = ACTIONS(369),
    [anon_sym_PIPE_EQ] = ACTIONS(369),
    [anon_sym_CARET_EQ] = ACTIONS(369),
    [anon_sym_PERCENT_EQ] = ACTIONS(369),
    [anon_sym_LT_LT_EQ] = ACTIONS(369),
    [anon_sym_GT_GT_EQ] = ACTIONS(369),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(373),
    [anon_sym_GT_EQ] = ACTIONS(373),
    [anon_sym_LT_EQ] = ACTIONS(373),
    [anon_sym_BANG_EQ] = ACTIONS(373),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_CARET] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(381),
    [anon_sym_GT_GT] = ACTIONS(381),
    [anon_sym_GT_GT_GT] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(1396),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [580] = {
    [anon_sym_AMP_AMP] = ACTIONS(1398),
    [anon_sym_PIPE_PIPE] = ACTIONS(1398),
    [anon_sym_PIPE] = ACTIONS(923),
    [anon_sym_QMARK] = ACTIONS(1398),
    [anon_sym_RPAREN] = ACTIONS(1398),
    [anon_sym_COMMA] = ACTIONS(1398),
    [sym_comment] = ACTIONS(44),
  },
  [581] = {
    [anon_sym_AMP_AMP] = ACTIONS(1400),
    [anon_sym_PIPE_PIPE] = ACTIONS(1400),
    [anon_sym_PIPE] = ACTIONS(1402),
    [anon_sym_CARET] = ACTIONS(929),
    [anon_sym_QMARK] = ACTIONS(1400),
    [anon_sym_RPAREN] = ACTIONS(1400),
    [anon_sym_COMMA] = ACTIONS(1400),
    [sym_comment] = ACTIONS(44),
  },
  [582] = {
    [sym__semicolon] = ACTIONS(1404),
    [anon_sym_AMP_AMP] = ACTIONS(1404),
    [anon_sym_PIPE_PIPE] = ACTIONS(1404),
    [anon_sym_PIPE] = ACTIONS(1406),
    [anon_sym_CARET] = ACTIONS(1404),
    [anon_sym_QMARK] = ACTIONS(1404),
    [anon_sym_RPAREN] = ACTIONS(1404),
    [anon_sym_RBRACE] = ACTIONS(1404),
    [anon_sym_COMMA] = ACTIONS(1404),
    [sym_comment] = ACTIONS(44),
  },
  [583] = {
    [anon_sym_LT] = ACTIONS(1408),
    [anon_sym_EQ_EQ] = ACTIONS(1410),
    [anon_sym_BANG_EQ] = ACTIONS(1410),
    [anon_sym_AMP_AMP] = ACTIONS(1410),
    [anon_sym_PIPE_PIPE] = ACTIONS(1410),
    [anon_sym_PIPE] = ACTIONS(1408),
    [anon_sym_CARET] = ACTIONS(1410),
    [anon_sym_LT_LT] = ACTIONS(949),
    [anon_sym_GT_GT] = ACTIONS(951),
    [anon_sym_GT_GT_GT] = ACTIONS(949),
    [anon_sym_QMARK] = ACTIONS(1410),
    [anon_sym_RPAREN] = ACTIONS(1410),
    [anon_sym_COMMA] = ACTIONS(1410),
    [sym_comment] = ACTIONS(44),
  },
  [584] = {
    [anon_sym_LT] = ACTIONS(935),
    [anon_sym_EQ_EQ] = ACTIONS(1412),
    [anon_sym_BANG_EQ] = ACTIONS(1412),
    [anon_sym_AMP_AMP] = ACTIONS(1414),
    [anon_sym_PIPE_PIPE] = ACTIONS(1414),
    [anon_sym_PIPE] = ACTIONS(1416),
    [anon_sym_CARET] = ACTIONS(1414),
    [anon_sym_QMARK] = ACTIONS(1414),
    [anon_sym_RPAREN] = ACTIONS(1414),
    [anon_sym_COMMA] = ACTIONS(1414),
    [sym_comment] = ACTIONS(44),
  },
  [585] = {
    [anon_sym_LT] = ACTIONS(1418),
    [anon_sym_EQ_EQ] = ACTIONS(1420),
    [anon_sym_BANG_EQ] = ACTIONS(1420),
    [anon_sym_AMP_AMP] = ACTIONS(1420),
    [anon_sym_PIPE_PIPE] = ACTIONS(1420),
    [anon_sym_PLUS] = ACTIONS(957),
    [anon_sym_DASH] = ACTIONS(957),
    [anon_sym_PIPE] = ACTIONS(1418),
    [anon_sym_CARET] = ACTIONS(1420),
    [anon_sym_LT_LT] = ACTIONS(1420),
    [anon_sym_GT_GT] = ACTIONS(1418),
    [anon_sym_GT_GT_GT] = ACTIONS(1420),
    [anon_sym_QMARK] = ACTIONS(1420),
    [anon_sym_RPAREN] = ACTIONS(1420),
    [anon_sym_COMMA] = ACTIONS(1420),
    [sym_comment] = ACTIONS(44),
  },
  [586] = {
    [anon_sym_LT] = ACTIONS(1422),
    [anon_sym_EQ_EQ] = ACTIONS(1424),
    [anon_sym_BANG_EQ] = ACTIONS(1424),
    [anon_sym_AMP_AMP] = ACTIONS(1424),
    [anon_sym_PIPE_PIPE] = ACTIONS(1424),
    [anon_sym_PLUS] = ACTIONS(1424),
    [anon_sym_DASH] = ACTIONS(1424),
    [anon_sym_STAR] = ACTIONS(963),
    [anon_sym_SLASH] = ACTIONS(965),
    [anon_sym_PIPE] = ACTIONS(1422),
    [anon_sym_CARET] = ACTIONS(1424),
    [anon_sym_PERCENT] = ACTIONS(963),
    [anon_sym_LT_LT] = ACTIONS(1424),
    [anon_sym_GT_GT] = ACTIONS(1422),
    [anon_sym_GT_GT_GT] = ACTIONS(1424),
    [anon_sym_QMARK] = ACTIONS(1424),
    [anon_sym_RPAREN] = ACTIONS(1424),
    [anon_sym_COMMA] = ACTIONS(1424),
    [sym_comment] = ACTIONS(44),
  },
  [587] = {
    [sym__semicolon] = ACTIONS(1426),
    [anon_sym_LT] = ACTIONS(1428),
    [anon_sym_EQ_EQ] = ACTIONS(1426),
    [anon_sym_BANG_EQ] = ACTIONS(1426),
    [anon_sym_AMP_AMP] = ACTIONS(1426),
    [anon_sym_PIPE_PIPE] = ACTIONS(1426),
    [anon_sym_PLUS] = ACTIONS(1426),
    [anon_sym_DASH] = ACTIONS(1426),
    [anon_sym_STAR] = ACTIONS(1426),
    [anon_sym_SLASH] = ACTIONS(1428),
    [anon_sym_PIPE] = ACTIONS(1428),
    [anon_sym_CARET] = ACTIONS(1426),
    [anon_sym_PERCENT] = ACTIONS(1426),
    [anon_sym_LT_LT] = ACTIONS(1426),
    [anon_sym_GT_GT] = ACTIONS(1428),
    [anon_sym_GT_GT_GT] = ACTIONS(1426),
    [anon_sym_QMARK] = ACTIONS(1426),
    [anon_sym_RPAREN] = ACTIONS(1426),
    [anon_sym_RBRACE] = ACTIONS(1426),
    [anon_sym_COMMA] = ACTIONS(1426),
    [sym_comment] = ACTIONS(44),
  },
  [588] = {
    [anon_sym_RBRACE] = ACTIONS(1430),
    [anon_sym_requires] = ACTIONS(1430),
    [anon_sym_exports] = ACTIONS(1430),
    [anon_sym_opens] = ACTIONS(1430),
    [anon_sym_uses] = ACTIONS(1430),
    [anon_sym_provides] = ACTIONS(1430),
    [sym_comment] = ACTIONS(44),
  },
  [589] = {
    [sym__semicolon] = ACTIONS(1432),
    [anon_sym_COMMA] = ACTIONS(989),
    [sym_comment] = ACTIONS(44),
  },
  [590] = {
    [sym__semicolon] = ACTIONS(1434),
    [anon_sym_COMMA] = ACTIONS(1434),
    [anon_sym_DOT] = ACTIONS(665),
    [sym_comment] = ACTIONS(44),
  },
  [591] = {
    [sym_package_or_type_name] = STATE(713),
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(44),
  },
  [592] = {
    [sym__semicolon] = ACTIONS(1432),
    [anon_sym_COMMA] = ACTIONS(1436),
    [sym_comment] = ACTIONS(44),
  },
  [593] = {
    [anon_sym_AT] = ACTIONS(633),
    [sym_identifier] = ACTIONS(1438),
    [sym_comment] = ACTIONS(44),
  },
  [594] = {
    [anon_sym_AT] = ACTIONS(635),
    [sym_identifier] = ACTIONS(1440),
    [sym_comment] = ACTIONS(44),
  },
  [595] = {
    [anon_sym_GT] = ACTIONS(1442),
    [anon_sym_AMP] = ACTIONS(1442),
    [anon_sym_COMMA] = ACTIONS(1442),
    [sym_comment] = ACTIONS(44),
  },
  [596] = {
    [sym_class_or_interface_type] = STATE(715),
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [aux_sym_class_or_interface_type_repeat1] = STATE(145),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(331),
    [sym_comment] = ACTIONS(44),
  },
  [597] = {
    [sym__expression] = STATE(716),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1017),
    [anon_sym_TILDE] = ACTIONS(1017),
    [anon_sym_PLUS_PLUS] = ACTIONS(1019),
    [anon_sym_DASH_DASH] = ACTIONS(1019),
    [sym_comment] = ACTIONS(44),
  },
  [598] = {
    [sym__expression] = STATE(717),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1017),
    [anon_sym_TILDE] = ACTIONS(1017),
    [anon_sym_PLUS_PLUS] = ACTIONS(1019),
    [anon_sym_DASH_DASH] = ACTIONS(1019),
    [sym_comment] = ACTIONS(44),
  },
  [599] = {
    [sym__expression] = STATE(718),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1017),
    [anon_sym_TILDE] = ACTIONS(1017),
    [anon_sym_PLUS_PLUS] = ACTIONS(1019),
    [anon_sym_DASH_DASH] = ACTIONS(1019),
    [sym_comment] = ACTIONS(44),
  },
  [600] = {
    [sym__expression] = STATE(719),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1017),
    [anon_sym_TILDE] = ACTIONS(1017),
    [anon_sym_PLUS_PLUS] = ACTIONS(1019),
    [anon_sym_DASH_DASH] = ACTIONS(1019),
    [sym_comment] = ACTIONS(44),
  },
  [601] = {
    [sym__expression] = STATE(720),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1017),
    [anon_sym_TILDE] = ACTIONS(1017),
    [anon_sym_PLUS_PLUS] = ACTIONS(1019),
    [anon_sym_DASH_DASH] = ACTIONS(1019),
    [sym_comment] = ACTIONS(44),
  },
  [602] = {
    [sym__expression] = STATE(100),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1017),
    [anon_sym_TILDE] = ACTIONS(1017),
    [anon_sym_PLUS_PLUS] = ACTIONS(1019),
    [anon_sym_DASH_DASH] = ACTIONS(1019),
    [sym_comment] = ACTIONS(44),
  },
  [603] = {
    [sym__expression] = STATE(721),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_PLUS_PLUS] = ACTIONS(243),
    [anon_sym_DASH_DASH] = ACTIONS(243),
    [sym_comment] = ACTIONS(44),
  },
  [604] = {
    [sym__statement] = STATE(722),
    [sym__literal] = STATE(19),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(20),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [sym_else_if_clause] = STATE(725),
    [sym_else_clause] = STATE(722),
    [sym__annotation] = STATE(23),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym__declaration] = STATE(25),
    [sym_module_declaration] = STATE(26),
    [sym_package_declaration] = STATE(26),
    [sym_import_statement] = STATE(26),
    [sym_single_type_import_declaration] = STATE(27),
    [sym_type_import_on_declaraction] = STATE(27),
    [sym_single_static_import_declaration] = STATE(27),
    [sym_static_import_on_demand_declaration] = STATE(27),
    [sym_class_declaration] = STATE(26),
    [sym_normal_class_declaration] = STATE(28),
    [sym_modifier] = STATE(29),
    [sym_interface_declaration] = STATE(26),
    [sym_annotation_type_declaration] = STATE(30),
    [sym_normal_interface_declaration] = STATE(30),
    [aux_sym_if_then_statement_repeat1] = STATE(726),
    [aux_sym_class_or_interface_type_repeat1] = STATE(32),
    [aux_sym_normal_class_declaration_repeat1] = STATE(33),
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
    [anon_sym_if] = ACTIONS(1444),
    [anon_sym_LBRACE] = ACTIONS(1446),
    [anon_sym_RBRACE] = ACTIONS(1446),
    [anon_sym_elseif] = ACTIONS(1448),
    [anon_sym_else] = ACTIONS(1450),
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
    [anon_sym_interface] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
  },
  [605] = {
    [anon_sym_AT] = ACTIONS(411),
    [anon_sym_static] = ACTIONS(1211),
    [anon_sym_class] = ACTIONS(1211),
    [anon_sym_public] = ACTIONS(1211),
    [anon_sym_protected] = ACTIONS(1211),
    [anon_sym_private] = ACTIONS(1211),
    [anon_sym_abstract] = ACTIONS(1211),
    [anon_sym_final] = ACTIONS(1211),
    [anon_sym_strictfp] = ACTIONS(1211),
    [anon_sym_default] = ACTIONS(1211),
    [sym_identifier] = ACTIONS(1281),
    [sym_comment] = ACTIONS(44),
  },
  [606] = {
    [anon_sym_EQ] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(1452),
    [sym_comment] = ACTIONS(44),
  },
  [607] = {
    [anon_sym_RPAREN] = ACTIONS(1452),
    [sym_comment] = ACTIONS(44),
  },
  [608] = {
    [anon_sym_RPAREN] = ACTIONS(1454),
    [sym_comment] = ACTIONS(44),
  },
  [609] = {
    [anon_sym_LPAREN] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(423),
    [anon_sym_AT] = ACTIONS(423),
    [anon_sym_static] = ACTIONS(425),
    [anon_sym_class] = ACTIONS(425),
    [anon_sym_public] = ACTIONS(425),
    [anon_sym_protected] = ACTIONS(425),
    [anon_sym_private] = ACTIONS(425),
    [anon_sym_abstract] = ACTIONS(425),
    [anon_sym_final] = ACTIONS(425),
    [anon_sym_strictfp] = ACTIONS(425),
    [anon_sym_default] = ACTIONS(425),
    [sym_identifier] = ACTIONS(1205),
    [sym_comment] = ACTIONS(44),
  },
  [610] = {
    [sym__literal] = STATE(731),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(732),
    [sym_element_value_pair] = STATE(115),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(275),
    [anon_sym_false] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(1456),
    [sym_identifier] = ACTIONS(1458),
    [sym_comment] = ACTIONS(44),
  },
  [611] = {
    [sym_identifier] = ACTIONS(1460),
    [sym_comment] = ACTIONS(44),
  },
  [612] = {
    [anon_sym_GT] = ACTIONS(1462),
    [anon_sym_COMMA] = ACTIONS(1462),
    [sym_comment] = ACTIONS(44),
  },
  [613] = {
    [anon_sym_GT] = ACTIONS(1464),
    [anon_sym_AMP] = ACTIONS(1464),
    [anon_sym_LBRACE] = ACTIONS(1464),
    [anon_sym_COMMA] = ACTIONS(1464),
    [anon_sym_DOT] = ACTIONS(1464),
    [anon_sym_LBRACK] = ACTIONS(1464),
    [anon_sym_AT] = ACTIONS(1464),
    [anon_sym_implements] = ACTIONS(1464),
    [sym_comment] = ACTIONS(44),
  },
  [614] = {
    [sym_type_argument] = STATE(734),
    [sym_reference_type] = STATE(358),
    [sym_class_or_interface_type] = STATE(359),
    [sym_primitive_type] = STATE(360),
    [sym_integral_type] = STATE(353),
    [sym_floating_point_type] = STATE(353),
    [sym__annotation] = STATE(361),
    [sym_normal_annotation] = STATE(362),
    [sym_marker_annotation] = STATE(362),
    [sym_single_element_annotation] = STATE(362),
    [aux_sym_class_or_interface_type_repeat1] = STATE(363),
    [anon_sym_boolean] = ACTIONS(735),
    [anon_sym_byte] = ACTIONS(737),
    [anon_sym_short] = ACTIONS(737),
    [anon_sym_int] = ACTIONS(737),
    [anon_sym_long] = ACTIONS(737),
    [anon_sym_char] = ACTIONS(737),
    [anon_sym_float] = ACTIONS(739),
    [anon_sym_double] = ACTIONS(739),
    [anon_sym_AT] = ACTIONS(741),
    [sym_identifier] = ACTIONS(743),
    [sym_comment] = ACTIONS(44),
  },
  [615] = {
    [anon_sym_GT] = ACTIONS(1466),
    [anon_sym_AMP] = ACTIONS(1466),
    [anon_sym_LBRACE] = ACTIONS(1466),
    [anon_sym_COMMA] = ACTIONS(1466),
    [anon_sym_DOT] = ACTIONS(1466),
    [anon_sym_LBRACK] = ACTIONS(1466),
    [anon_sym_AT] = ACTIONS(1466),
    [anon_sym_implements] = ACTIONS(1466),
    [sym_comment] = ACTIONS(44),
  },
  [616] = {
    [sym_type_arguments] = STATE(735),
    [anon_sym_GT] = ACTIONS(1466),
    [anon_sym_LT] = ACTIONS(501),
    [anon_sym_AMP] = ACTIONS(1466),
    [anon_sym_LBRACE] = ACTIONS(1466),
    [anon_sym_COMMA] = ACTIONS(1466),
    [anon_sym_DOT] = ACTIONS(1466),
    [anon_sym_LBRACK] = ACTIONS(1466),
    [anon_sym_AT] = ACTIONS(1466),
    [anon_sym_implements] = ACTIONS(1466),
    [sym_comment] = ACTIONS(44),
  },
  [617] = {
    [sym__semicolon] = ACTIONS(589),
    [anon_sym_LT] = ACTIONS(589),
    [anon_sym_RBRACE] = ACTIONS(589),
    [anon_sym_AT] = ACTIONS(589),
    [anon_sym_static] = ACTIONS(591),
    [anon_sym_class] = ACTIONS(591),
    [anon_sym_public] = ACTIONS(591),
    [anon_sym_protected] = ACTIONS(591),
    [anon_sym_private] = ACTIONS(591),
    [anon_sym_abstract] = ACTIONS(591),
    [anon_sym_final] = ACTIONS(591),
    [anon_sym_strictfp] = ACTIONS(591),
    [anon_sym_default] = ACTIONS(591),
    [anon_sym_interface] = ACTIONS(591),
    [sym_result] = ACTIONS(591),
    [sym_identifier] = ACTIONS(593),
    [sym_comment] = ACTIONS(44),
  },
  [618] = {
    [sym__annotation] = STATE(187),
    [sym_normal_annotation] = STATE(191),
    [sym_marker_annotation] = STATE(191),
    [sym_single_element_annotation] = STATE(191),
    [sym_class_declaration] = STATE(192),
    [sym_normal_class_declaration] = STATE(193),
    [sym_modifier] = STATE(194),
    [sym_interface_declaration] = STATE(192),
    [sym_annotation_type_declaration] = STATE(195),
    [sym_annotation_type_member_declaration] = STATE(307),
    [sym_annotation_type_element_declaration] = STATE(192),
    [sym_normal_interface_declaration] = STATE(195),
    [sym_constant_declaration] = STATE(192),
    [sym_variable_declarator_list] = STATE(197),
    [sym_variable_declarator] = STATE(164),
    [sym_variable_declarator_id] = STATE(165),
    [aux_sym_normal_class_declaration_repeat1] = STATE(198),
    [anon_sym_RBRACE] = ACTIONS(1468),
    [anon_sym_AT] = ACTIONS(395),
    [anon_sym_static] = ACTIONS(397),
    [anon_sym_class] = ACTIONS(399),
    [anon_sym_public] = ACTIONS(397),
    [anon_sym_protected] = ACTIONS(397),
    [anon_sym_private] = ACTIONS(397),
    [anon_sym_abstract] = ACTIONS(397),
    [anon_sym_final] = ACTIONS(397),
    [anon_sym_strictfp] = ACTIONS(397),
    [anon_sym_default] = ACTIONS(397),
    [anon_sym_interface] = ACTIONS(401),
    [sym_identifier] = ACTIONS(403),
    [sym_comment] = ACTIONS(44),
  },
  [619] = {
    [anon_sym_LT] = ACTIONS(633),
    [anon_sym_AT] = ACTIONS(633),
    [anon_sym_static] = ACTIONS(1438),
    [anon_sym_class] = ACTIONS(1438),
    [anon_sym_public] = ACTIONS(1438),
    [anon_sym_protected] = ACTIONS(1438),
    [anon_sym_private] = ACTIONS(1438),
    [anon_sym_abstract] = ACTIONS(1438),
    [anon_sym_final] = ACTIONS(1438),
    [anon_sym_strictfp] = ACTIONS(1438),
    [anon_sym_default] = ACTIONS(1438),
    [anon_sym_interface] = ACTIONS(1438),
    [sym_result] = ACTIONS(1438),
    [sym_identifier] = ACTIONS(1470),
    [sym_comment] = ACTIONS(44),
  },
  [620] = {
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_AT] = ACTIONS(635),
    [anon_sym_static] = ACTIONS(1440),
    [anon_sym_class] = ACTIONS(1440),
    [anon_sym_public] = ACTIONS(1440),
    [anon_sym_protected] = ACTIONS(1440),
    [anon_sym_private] = ACTIONS(1440),
    [anon_sym_abstract] = ACTIONS(1440),
    [anon_sym_final] = ACTIONS(1440),
    [anon_sym_strictfp] = ACTIONS(1440),
    [anon_sym_default] = ACTIONS(1440),
    [anon_sym_interface] = ACTIONS(1440),
    [sym_result] = ACTIONS(1440),
    [sym_identifier] = ACTIONS(1472),
    [sym_comment] = ACTIONS(44),
  },
  [621] = {
    [sym__semicolon] = ACTIONS(727),
    [anon_sym_LT] = ACTIONS(727),
    [anon_sym_RBRACE] = ACTIONS(727),
    [anon_sym_AT] = ACTIONS(727),
    [anon_sym_static] = ACTIONS(729),
    [anon_sym_class] = ACTIONS(729),
    [anon_sym_public] = ACTIONS(729),
    [anon_sym_protected] = ACTIONS(729),
    [anon_sym_private] = ACTIONS(729),
    [anon_sym_abstract] = ACTIONS(729),
    [anon_sym_final] = ACTIONS(729),
    [anon_sym_strictfp] = ACTIONS(729),
    [anon_sym_default] = ACTIONS(729),
    [anon_sym_interface] = ACTIONS(729),
    [sym_result] = ACTIONS(729),
    [sym_identifier] = ACTIONS(731),
    [sym_comment] = ACTIONS(44),
  },
  [622] = {
    [sym_class_body] = STATE(737),
    [anon_sym_LBRACE] = ACTIONS(769),
    [sym_comment] = ACTIONS(44),
  },
  [623] = {
    [sym__semicolon] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_RBRACE] = ACTIONS(755),
    [anon_sym_AT] = ACTIONS(755),
    [anon_sym_static] = ACTIONS(757),
    [anon_sym_class] = ACTIONS(757),
    [anon_sym_public] = ACTIONS(757),
    [anon_sym_protected] = ACTIONS(757),
    [anon_sym_private] = ACTIONS(757),
    [anon_sym_abstract] = ACTIONS(757),
    [anon_sym_final] = ACTIONS(757),
    [anon_sym_strictfp] = ACTIONS(757),
    [anon_sym_default] = ACTIONS(757),
    [anon_sym_interface] = ACTIONS(757),
    [sym_result] = ACTIONS(757),
    [sym_identifier] = ACTIONS(759),
    [sym_comment] = ACTIONS(44),
  },
  [624] = {
    [sym__semicolon] = ACTIONS(823),
    [anon_sym_LT] = ACTIONS(823),
    [anon_sym_RBRACE] = ACTIONS(823),
    [anon_sym_AT] = ACTIONS(823),
    [anon_sym_static] = ACTIONS(825),
    [anon_sym_class] = ACTIONS(825),
    [anon_sym_public] = ACTIONS(825),
    [anon_sym_protected] = ACTIONS(825),
    [anon_sym_private] = ACTIONS(825),
    [anon_sym_abstract] = ACTIONS(825),
    [anon_sym_final] = ACTIONS(825),
    [anon_sym_strictfp] = ACTIONS(825),
    [anon_sym_default] = ACTIONS(825),
    [anon_sym_interface] = ACTIONS(825),
    [sym_result] = ACTIONS(825),
    [sym_identifier] = ACTIONS(827),
    [sym_comment] = ACTIONS(44),
  },
  [625] = {
    [sym__semicolon] = ACTIONS(835),
    [anon_sym_LT] = ACTIONS(835),
    [anon_sym_RBRACE] = ACTIONS(835),
    [anon_sym_AT] = ACTIONS(835),
    [anon_sym_static] = ACTIONS(837),
    [anon_sym_class] = ACTIONS(837),
    [anon_sym_public] = ACTIONS(837),
    [anon_sym_protected] = ACTIONS(837),
    [anon_sym_private] = ACTIONS(837),
    [anon_sym_abstract] = ACTIONS(837),
    [anon_sym_final] = ACTIONS(837),
    [anon_sym_strictfp] = ACTIONS(837),
    [anon_sym_default] = ACTIONS(837),
    [anon_sym_interface] = ACTIONS(837),
    [sym_result] = ACTIONS(837),
    [sym_identifier] = ACTIONS(839),
    [sym_comment] = ACTIONS(44),
  },
  [626] = {
    [sym__semicolon] = ACTIONS(1474),
    [anon_sym_LBRACE] = ACTIONS(1474),
    [anon_sym_throws] = ACTIONS(1474),
    [sym_comment] = ACTIONS(44),
  },
  [627] = {
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_static] = ACTIONS(201),
    [anon_sym_public] = ACTIONS(201),
    [anon_sym_protected] = ACTIONS(201),
    [anon_sym_private] = ACTIONS(201),
    [anon_sym_abstract] = ACTIONS(201),
    [anon_sym_final] = ACTIONS(201),
    [anon_sym_strictfp] = ACTIONS(201),
    [anon_sym_default] = ACTIONS(201),
    [anon_sym_this] = ACTIONS(201),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(199),
    [sym_identifier] = ACTIONS(667),
    [sym_comment] = ACTIONS(44),
  },
  [628] = {
    [anon_sym_LPAREN] = ACTIONS(1476),
    [anon_sym_DOT] = ACTIONS(1478),
    [anon_sym_AT] = ACTIONS(203),
    [anon_sym_static] = ACTIONS(695),
    [anon_sym_public] = ACTIONS(695),
    [anon_sym_protected] = ACTIONS(695),
    [anon_sym_private] = ACTIONS(695),
    [anon_sym_abstract] = ACTIONS(695),
    [anon_sym_final] = ACTIONS(695),
    [anon_sym_strictfp] = ACTIONS(695),
    [anon_sym_default] = ACTIONS(695),
    [anon_sym_this] = ACTIONS(695),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(203),
    [sym_identifier] = ACTIONS(767),
    [sym_comment] = ACTIONS(44),
  },
  [629] = {
    [anon_sym_RPAREN] = ACTIONS(1480),
    [sym_comment] = ACTIONS(44),
  },
  [630] = {
    [anon_sym_this] = ACTIONS(1482),
    [sym_comment] = ACTIONS(44),
  },
  [631] = {
    [sym_dims] = STATE(741),
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [aux_sym_class_or_interface_type_repeat1] = STATE(262),
    [aux_sym_dims_repeat1] = STATE(263),
    [sym__semicolon] = ACTIONS(1474),
    [anon_sym_LBRACE] = ACTIONS(1474),
    [anon_sym_LBRACK] = ACTIONS(545),
    [anon_sym_AT] = ACTIONS(169),
    [anon_sym_throws] = ACTIONS(1474),
    [sym_comment] = ACTIONS(44),
  },
  [632] = {
    [sym__annotation] = STATE(641),
    [sym_normal_annotation] = STATE(642),
    [sym_marker_annotation] = STATE(642),
    [sym_single_element_annotation] = STATE(642),
    [sym_modifier] = STATE(507),
    [sym_variable_declarator_id] = STATE(508),
    [sym_formal_parameter] = STATE(742),
    [sym_last_formal_parameter] = STATE(743),
    [aux_sym_class_or_interface_type_repeat1] = STATE(744),
    [aux_sym_normal_class_declaration_repeat1] = STATE(514),
    [anon_sym_AT] = ACTIONS(1320),
    [anon_sym_static] = ACTIONS(1091),
    [anon_sym_public] = ACTIONS(1091),
    [anon_sym_protected] = ACTIONS(1091),
    [anon_sym_private] = ACTIONS(1091),
    [anon_sym_abstract] = ACTIONS(1091),
    [anon_sym_final] = ACTIONS(1091),
    [anon_sym_strictfp] = ACTIONS(1091),
    [anon_sym_default] = ACTIONS(1091),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1095),
    [sym_identifier] = ACTIONS(353),
    [sym_comment] = ACTIONS(44),
  },
  [633] = {
    [anon_sym_COMMA] = ACTIONS(1484),
    [sym_comment] = ACTIONS(44),
  },
  [634] = {
    [sym_package_or_type_name] = STATE(747),
    [sym_identifier] = ACTIONS(1486),
    [sym_comment] = ACTIONS(44),
  },
  [635] = {
    [anon_sym_RPAREN] = ACTIONS(1488),
    [anon_sym_COMMA] = ACTIONS(1488),
    [sym_comment] = ACTIONS(44),
  },
  [636] = {
    [sym_variable_declarator] = STATE(748),
    [sym_variable_declarator_id] = STATE(165),
    [sym_identifier] = ACTIONS(795),
    [sym_comment] = ACTIONS(44),
  },
  [637] = {
    [anon_sym_DOT] = ACTIONS(1490),
    [sym_comment] = ACTIONS(44),
  },
  [638] = {
    [anon_sym_AT] = ACTIONS(255),
    [anon_sym_this] = ACTIONS(705),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(255),
    [sym_identifier] = ACTIONS(1269),
    [sym_comment] = ACTIONS(44),
  },
  [639] = {
    [anon_sym_AT] = ACTIONS(129),
    [anon_sym_this] = ACTIONS(467),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(129),
    [sym_identifier] = ACTIONS(547),
    [sym_comment] = ACTIONS(44),
  },
  [640] = {
    [sym_package_or_type_name] = STATE(751),
    [sym_identifier] = ACTIONS(1492),
    [sym_comment] = ACTIONS(44),
  },
  [641] = {
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym_static] = ACTIONS(70),
    [anon_sym_public] = ACTIONS(70),
    [anon_sym_protected] = ACTIONS(70),
    [anon_sym_private] = ACTIONS(70),
    [anon_sym_abstract] = ACTIONS(70),
    [anon_sym_final] = ACTIONS(70),
    [anon_sym_strictfp] = ACTIONS(70),
    [anon_sym_default] = ACTIONS(70),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(124),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(44),
  },
  [642] = {
    [anon_sym_AT] = ACTIONS(129),
    [anon_sym_static] = ACTIONS(467),
    [anon_sym_public] = ACTIONS(467),
    [anon_sym_protected] = ACTIONS(467),
    [anon_sym_private] = ACTIONS(467),
    [anon_sym_abstract] = ACTIONS(467),
    [anon_sym_final] = ACTIONS(467),
    [anon_sym_strictfp] = ACTIONS(467),
    [anon_sym_default] = ACTIONS(467),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(129),
    [sym_identifier] = ACTIONS(547),
    [sym_comment] = ACTIONS(44),
  },
  [643] = {
    [anon_sym_AT] = ACTIONS(263),
    [anon_sym_static] = ACTIONS(265),
    [anon_sym_public] = ACTIONS(265),
    [anon_sym_protected] = ACTIONS(265),
    [anon_sym_private] = ACTIONS(265),
    [anon_sym_abstract] = ACTIONS(265),
    [anon_sym_final] = ACTIONS(265),
    [anon_sym_strictfp] = ACTIONS(265),
    [anon_sym_default] = ACTIONS(265),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(263),
    [sym_identifier] = ACTIONS(267),
    [sym_comment] = ACTIONS(44),
  },
  [644] = {
    [anon_sym_RPAREN] = ACTIONS(1494),
    [anon_sym_COMMA] = ACTIONS(1494),
    [sym_comment] = ACTIONS(44),
  },
  [645] = {
    [sym__annotation] = STATE(63),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [anon_sym_AT] = ACTIONS(169),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1496),
    [sym_comment] = ACTIONS(44),
  },
  [646] = {
    [sym_type_argument] = STATE(753),
    [sym_reference_type] = STATE(358),
    [sym_class_or_interface_type] = STATE(359),
    [sym_primitive_type] = STATE(360),
    [sym_integral_type] = STATE(353),
    [sym_floating_point_type] = STATE(353),
    [sym__annotation] = STATE(361),
    [sym_normal_annotation] = STATE(362),
    [sym_marker_annotation] = STATE(362),
    [sym_single_element_annotation] = STATE(362),
    [aux_sym_class_or_interface_type_repeat1] = STATE(363),
    [anon_sym_boolean] = ACTIONS(735),
    [anon_sym_byte] = ACTIONS(737),
    [anon_sym_short] = ACTIONS(737),
    [anon_sym_int] = ACTIONS(737),
    [anon_sym_long] = ACTIONS(737),
    [anon_sym_char] = ACTIONS(737),
    [anon_sym_float] = ACTIONS(739),
    [anon_sym_double] = ACTIONS(739),
    [anon_sym_AT] = ACTIONS(741),
    [sym_identifier] = ACTIONS(743),
    [sym_comment] = ACTIONS(44),
  },
  [647] = {
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [aux_sym_class_or_interface_type_repeat1] = STATE(755),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(1498),
    [sym_comment] = ACTIONS(44),
  },
  [648] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(756),
    [anon_sym_DOT] = ACTIONS(1324),
    [anon_sym_AT] = ACTIONS(747),
    [sym_identifier] = ACTIONS(1500),
    [sym_comment] = ACTIONS(44),
  },
  [649] = {
    [anon_sym_DOT] = ACTIONS(1502),
    [anon_sym_AT] = ACTIONS(747),
    [sym_identifier] = ACTIONS(1500),
    [sym_comment] = ACTIONS(44),
  },
  [650] = {
    [sym__semicolon] = ACTIONS(1504),
    [anon_sym_LBRACE] = ACTIONS(1504),
    [anon_sym_COMMA] = ACTIONS(1504),
    [sym_comment] = ACTIONS(44),
  },
  [651] = {
    [sym__semicolon] = ACTIONS(1506),
    [anon_sym_LBRACE] = ACTIONS(1506),
    [anon_sym_COMMA] = ACTIONS(1506),
    [sym_comment] = ACTIONS(44),
  },
  [652] = {
    [sym__annotation] = STATE(229),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(1508),
    [sym_comment] = ACTIONS(44),
  },
  [653] = {
    [sym__semicolon] = ACTIONS(1510),
    [anon_sym_LBRACE] = ACTIONS(1510),
    [anon_sym_COMMA] = ACTIONS(1510),
    [sym_comment] = ACTIONS(44),
  },
  [654] = {
    [sym__semicolon] = ACTIONS(1512),
    [anon_sym_LBRACE] = ACTIONS(1512),
    [anon_sym_COMMA] = ACTIONS(1514),
    [sym_comment] = ACTIONS(44),
  },
  [655] = {
    [sym_type_arguments] = STATE(760),
    [aux_sym_class_or_interface_type_repeat2] = STATE(756),
    [anon_sym_LT] = ACTIONS(1322),
    [anon_sym_DOT] = ACTIONS(1324),
    [anon_sym_AT] = ACTIONS(747),
    [sym_identifier] = ACTIONS(1500),
    [sym_comment] = ACTIONS(44),
  },
  [656] = {
    [sym__semicolon] = ACTIONS(1516),
    [anon_sym_EQ] = ACTIONS(1516),
    [anon_sym_GT] = ACTIONS(1516),
    [anon_sym_RPAREN] = ACTIONS(1516),
    [anon_sym_LBRACE] = ACTIONS(1516),
    [anon_sym_COMMA] = ACTIONS(1516),
    [anon_sym_LBRACK] = ACTIONS(1516),
    [anon_sym_AT] = ACTIONS(1516),
    [anon_sym_default] = ACTIONS(1516),
    [anon_sym_throws] = ACTIONS(1516),
    [sym_comment] = ACTIONS(44),
  },
  [657] = {
    [sym__semicolon] = ACTIONS(1518),
    [anon_sym_LBRACE] = ACTIONS(1518),
    [sym_comment] = ACTIONS(44),
  },
  [658] = {
    [sym__semicolon] = ACTIONS(853),
    [anon_sym_LT] = ACTIONS(853),
    [anon_sym_RBRACE] = ACTIONS(853),
    [anon_sym_AT] = ACTIONS(853),
    [anon_sym_static] = ACTIONS(855),
    [anon_sym_class] = ACTIONS(855),
    [anon_sym_public] = ACTIONS(855),
    [anon_sym_protected] = ACTIONS(855),
    [anon_sym_private] = ACTIONS(855),
    [anon_sym_abstract] = ACTIONS(855),
    [anon_sym_final] = ACTIONS(855),
    [anon_sym_strictfp] = ACTIONS(855),
    [anon_sym_default] = ACTIONS(855),
    [anon_sym_interface] = ACTIONS(855),
    [sym_result] = ACTIONS(855),
    [sym_identifier] = ACTIONS(857),
    [sym_comment] = ACTIONS(44),
  },
  [659] = {
    [sym_super_interfaces] = STATE(761),
    [sym_class_body] = STATE(737),
    [anon_sym_LBRACE] = ACTIONS(769),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [660] = {
    [sym_interface_body] = STATE(762),
    [anon_sym_LBRACE] = ACTIONS(771),
    [sym_comment] = ACTIONS(44),
  },
  [661] = {
    [anon_sym_RBRACE] = ACTIONS(589),
    [anon_sym_AT] = ACTIONS(589),
    [anon_sym_static] = ACTIONS(591),
    [anon_sym_class] = ACTIONS(591),
    [anon_sym_public] = ACTIONS(591),
    [anon_sym_protected] = ACTIONS(591),
    [anon_sym_private] = ACTIONS(591),
    [anon_sym_abstract] = ACTIONS(591),
    [anon_sym_final] = ACTIONS(591),
    [anon_sym_strictfp] = ACTIONS(591),
    [anon_sym_default] = ACTIONS(591),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(593),
    [sym_comment] = ACTIONS(44),
  },
  [662] = {
    [sym__annotation] = STATE(187),
    [sym_normal_annotation] = STATE(191),
    [sym_marker_annotation] = STATE(191),
    [sym_single_element_annotation] = STATE(191),
    [sym_class_declaration] = STATE(192),
    [sym_normal_class_declaration] = STATE(193),
    [sym_modifier] = STATE(194),
    [sym_interface_declaration] = STATE(192),
    [sym_annotation_type_declaration] = STATE(195),
    [sym_annotation_type_member_declaration] = STATE(307),
    [sym_annotation_type_element_declaration] = STATE(192),
    [sym_normal_interface_declaration] = STATE(195),
    [sym_constant_declaration] = STATE(192),
    [sym_variable_declarator_list] = STATE(197),
    [sym_variable_declarator] = STATE(164),
    [sym_variable_declarator_id] = STATE(165),
    [aux_sym_normal_class_declaration_repeat1] = STATE(198),
    [anon_sym_RBRACE] = ACTIONS(1520),
    [anon_sym_AT] = ACTIONS(395),
    [anon_sym_static] = ACTIONS(397),
    [anon_sym_class] = ACTIONS(399),
    [anon_sym_public] = ACTIONS(397),
    [anon_sym_protected] = ACTIONS(397),
    [anon_sym_private] = ACTIONS(397),
    [anon_sym_abstract] = ACTIONS(397),
    [anon_sym_final] = ACTIONS(397),
    [anon_sym_strictfp] = ACTIONS(397),
    [anon_sym_default] = ACTIONS(397),
    [anon_sym_interface] = ACTIONS(401),
    [sym_identifier] = ACTIONS(403),
    [sym_comment] = ACTIONS(44),
  },
  [663] = {
    [anon_sym_AT] = ACTIONS(633),
    [anon_sym_static] = ACTIONS(1438),
    [anon_sym_class] = ACTIONS(1438),
    [anon_sym_public] = ACTIONS(1438),
    [anon_sym_protected] = ACTIONS(1438),
    [anon_sym_private] = ACTIONS(1438),
    [anon_sym_abstract] = ACTIONS(1438),
    [anon_sym_final] = ACTIONS(1438),
    [anon_sym_strictfp] = ACTIONS(1438),
    [anon_sym_default] = ACTIONS(1438),
    [anon_sym_interface] = ACTIONS(1438),
    [sym_identifier] = ACTIONS(1470),
    [sym_comment] = ACTIONS(44),
  },
  [664] = {
    [anon_sym_AT] = ACTIONS(635),
    [anon_sym_static] = ACTIONS(1440),
    [anon_sym_class] = ACTIONS(1440),
    [anon_sym_public] = ACTIONS(1440),
    [anon_sym_protected] = ACTIONS(1440),
    [anon_sym_private] = ACTIONS(1440),
    [anon_sym_abstract] = ACTIONS(1440),
    [anon_sym_final] = ACTIONS(1440),
    [anon_sym_strictfp] = ACTIONS(1440),
    [anon_sym_default] = ACTIONS(1440),
    [anon_sym_interface] = ACTIONS(1440),
    [sym_identifier] = ACTIONS(1472),
    [sym_comment] = ACTIONS(44),
  },
  [665] = {
    [anon_sym_RBRACE] = ACTIONS(727),
    [anon_sym_AT] = ACTIONS(727),
    [anon_sym_static] = ACTIONS(729),
    [anon_sym_class] = ACTIONS(729),
    [anon_sym_public] = ACTIONS(729),
    [anon_sym_protected] = ACTIONS(729),
    [anon_sym_private] = ACTIONS(729),
    [anon_sym_abstract] = ACTIONS(729),
    [anon_sym_final] = ACTIONS(729),
    [anon_sym_strictfp] = ACTIONS(729),
    [anon_sym_default] = ACTIONS(729),
    [anon_sym_interface] = ACTIONS(729),
    [sym_identifier] = ACTIONS(731),
    [sym_comment] = ACTIONS(44),
  },
  [666] = {
    [sym_class_body] = STATE(764),
    [anon_sym_LBRACE] = ACTIONS(865),
    [sym_comment] = ACTIONS(44),
  },
  [667] = {
    [anon_sym_RBRACE] = ACTIONS(755),
    [anon_sym_AT] = ACTIONS(755),
    [anon_sym_static] = ACTIONS(757),
    [anon_sym_class] = ACTIONS(757),
    [anon_sym_public] = ACTIONS(757),
    [anon_sym_protected] = ACTIONS(757),
    [anon_sym_private] = ACTIONS(757),
    [anon_sym_abstract] = ACTIONS(757),
    [anon_sym_final] = ACTIONS(757),
    [anon_sym_strictfp] = ACTIONS(757),
    [anon_sym_default] = ACTIONS(757),
    [anon_sym_interface] = ACTIONS(757),
    [sym_identifier] = ACTIONS(759),
    [sym_comment] = ACTIONS(44),
  },
  [668] = {
    [anon_sym_RBRACE] = ACTIONS(823),
    [anon_sym_AT] = ACTIONS(823),
    [anon_sym_static] = ACTIONS(825),
    [anon_sym_class] = ACTIONS(825),
    [anon_sym_public] = ACTIONS(825),
    [anon_sym_protected] = ACTIONS(825),
    [anon_sym_private] = ACTIONS(825),
    [anon_sym_abstract] = ACTIONS(825),
    [anon_sym_final] = ACTIONS(825),
    [anon_sym_strictfp] = ACTIONS(825),
    [anon_sym_default] = ACTIONS(825),
    [anon_sym_interface] = ACTIONS(825),
    [sym_identifier] = ACTIONS(827),
    [sym_comment] = ACTIONS(44),
  },
  [669] = {
    [anon_sym_RBRACE] = ACTIONS(835),
    [anon_sym_AT] = ACTIONS(835),
    [anon_sym_static] = ACTIONS(837),
    [anon_sym_class] = ACTIONS(837),
    [anon_sym_public] = ACTIONS(837),
    [anon_sym_protected] = ACTIONS(837),
    [anon_sym_private] = ACTIONS(837),
    [anon_sym_abstract] = ACTIONS(837),
    [anon_sym_final] = ACTIONS(837),
    [anon_sym_strictfp] = ACTIONS(837),
    [anon_sym_default] = ACTIONS(837),
    [anon_sym_interface] = ACTIONS(837),
    [sym_identifier] = ACTIONS(839),
    [sym_comment] = ACTIONS(44),
  },
  [670] = {
    [sym__expression] = STATE(765),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(44),
  },
  [671] = {
    [sym__semicolon] = ACTIONS(1522),
    [sym_comment] = ACTIONS(44),
  },
  [672] = {
    [sym__semicolon] = ACTIONS(915),
    [anon_sym_PIPE_PIPE] = ACTIONS(1524),
    [anon_sym_QMARK] = ACTIONS(1526),
    [sym_comment] = ACTIONS(44),
  },
  [673] = {
    [sym__semicolon] = ACTIONS(919),
    [anon_sym_AMP_AMP] = ACTIONS(1528),
    [anon_sym_PIPE_PIPE] = ACTIONS(919),
    [anon_sym_QMARK] = ACTIONS(919),
    [sym_comment] = ACTIONS(44),
  },
  [674] = {
    [sym__semicolon] = ACTIONS(921),
    [anon_sym_AMP_AMP] = ACTIONS(921),
    [anon_sym_PIPE_PIPE] = ACTIONS(921),
    [anon_sym_PIPE] = ACTIONS(1530),
    [anon_sym_QMARK] = ACTIONS(921),
    [sym_comment] = ACTIONS(44),
  },
  [675] = {
    [sym__semicolon] = ACTIONS(925),
    [anon_sym_AMP_AMP] = ACTIONS(925),
    [anon_sym_PIPE_PIPE] = ACTIONS(925),
    [anon_sym_PIPE] = ACTIONS(927),
    [anon_sym_CARET] = ACTIONS(1532),
    [anon_sym_QMARK] = ACTIONS(925),
    [sym_comment] = ACTIONS(44),
  },
  [676] = {
    [sym__semicolon] = ACTIONS(939),
    [anon_sym_LT] = ACTIONS(1534),
    [anon_sym_EQ_EQ] = ACTIONS(937),
    [anon_sym_BANG_EQ] = ACTIONS(937),
    [anon_sym_AMP_AMP] = ACTIONS(939),
    [anon_sym_PIPE_PIPE] = ACTIONS(939),
    [anon_sym_PIPE] = ACTIONS(941),
    [anon_sym_CARET] = ACTIONS(939),
    [anon_sym_QMARK] = ACTIONS(939),
    [sym_comment] = ACTIONS(44),
  },
  [677] = {
    [anon_sym_EQ_EQ] = ACTIONS(1536),
    [anon_sym_BANG_EQ] = ACTIONS(1536),
    [sym_comment] = ACTIONS(44),
  },
  [678] = {
    [sym__semicolon] = ACTIONS(947),
    [anon_sym_LT] = ACTIONS(945),
    [anon_sym_EQ_EQ] = ACTIONS(947),
    [anon_sym_BANG_EQ] = ACTIONS(947),
    [anon_sym_AMP_AMP] = ACTIONS(947),
    [anon_sym_PIPE_PIPE] = ACTIONS(947),
    [anon_sym_PIPE] = ACTIONS(945),
    [anon_sym_CARET] = ACTIONS(947),
    [anon_sym_LT_LT] = ACTIONS(1538),
    [anon_sym_GT_GT] = ACTIONS(1540),
    [anon_sym_GT_GT_GT] = ACTIONS(1538),
    [anon_sym_QMARK] = ACTIONS(947),
    [sym_comment] = ACTIONS(44),
  },
  [679] = {
    [sym__semicolon] = ACTIONS(955),
    [anon_sym_LT] = ACTIONS(953),
    [anon_sym_EQ_EQ] = ACTIONS(955),
    [anon_sym_BANG_EQ] = ACTIONS(955),
    [anon_sym_AMP_AMP] = ACTIONS(955),
    [anon_sym_PIPE_PIPE] = ACTIONS(955),
    [anon_sym_PLUS] = ACTIONS(1542),
    [anon_sym_DASH] = ACTIONS(1542),
    [anon_sym_PIPE] = ACTIONS(953),
    [anon_sym_CARET] = ACTIONS(955),
    [anon_sym_LT_LT] = ACTIONS(955),
    [anon_sym_GT_GT] = ACTIONS(953),
    [anon_sym_GT_GT_GT] = ACTIONS(955),
    [anon_sym_QMARK] = ACTIONS(955),
    [sym_comment] = ACTIONS(44),
  },
  [680] = {
    [sym__semicolon] = ACTIONS(961),
    [anon_sym_LT] = ACTIONS(959),
    [anon_sym_EQ_EQ] = ACTIONS(961),
    [anon_sym_BANG_EQ] = ACTIONS(961),
    [anon_sym_AMP_AMP] = ACTIONS(961),
    [anon_sym_PIPE_PIPE] = ACTIONS(961),
    [anon_sym_PLUS] = ACTIONS(961),
    [anon_sym_DASH] = ACTIONS(961),
    [anon_sym_STAR] = ACTIONS(1544),
    [anon_sym_SLASH] = ACTIONS(1546),
    [anon_sym_PIPE] = ACTIONS(959),
    [anon_sym_CARET] = ACTIONS(961),
    [anon_sym_PERCENT] = ACTIONS(1544),
    [anon_sym_LT_LT] = ACTIONS(961),
    [anon_sym_GT_GT] = ACTIONS(959),
    [anon_sym_GT_GT_GT] = ACTIONS(961),
    [anon_sym_QMARK] = ACTIONS(961),
    [sym_comment] = ACTIONS(44),
  },
  [681] = {
    [anon_sym_RBRACE] = ACTIONS(1548),
    [anon_sym_AT] = ACTIONS(1548),
    [anon_sym_static] = ACTIONS(1550),
    [anon_sym_class] = ACTIONS(1550),
    [anon_sym_public] = ACTIONS(1550),
    [anon_sym_protected] = ACTIONS(1550),
    [anon_sym_private] = ACTIONS(1550),
    [anon_sym_abstract] = ACTIONS(1550),
    [anon_sym_final] = ACTIONS(1550),
    [anon_sym_strictfp] = ACTIONS(1550),
    [anon_sym_default] = ACTIONS(1550),
    [anon_sym_interface] = ACTIONS(1550),
    [sym_identifier] = ACTIONS(1552),
    [sym_comment] = ACTIONS(44),
  },
  [682] = {
    [sym__semicolon] = ACTIONS(1554),
    [sym_comment] = ACTIONS(44),
  },
  [683] = {
    [anon_sym_RBRACE] = ACTIONS(853),
    [anon_sym_AT] = ACTIONS(853),
    [anon_sym_static] = ACTIONS(855),
    [anon_sym_class] = ACTIONS(855),
    [anon_sym_public] = ACTIONS(855),
    [anon_sym_protected] = ACTIONS(855),
    [anon_sym_private] = ACTIONS(855),
    [anon_sym_abstract] = ACTIONS(855),
    [anon_sym_final] = ACTIONS(855),
    [anon_sym_strictfp] = ACTIONS(855),
    [anon_sym_default] = ACTIONS(855),
    [anon_sym_interface] = ACTIONS(855),
    [sym_identifier] = ACTIONS(857),
    [sym_comment] = ACTIONS(44),
  },
  [684] = {
    [sym_super_interfaces] = STATE(777),
    [sym_class_body] = STATE(764),
    [anon_sym_LBRACE] = ACTIONS(865),
    [anon_sym_implements] = ACTIONS(229),
    [sym_comment] = ACTIONS(44),
  },
  [685] = {
    [sym_interface_body] = STATE(778),
    [anon_sym_LBRACE] = ACTIONS(867),
    [sym_comment] = ACTIONS(44),
  },
  [686] = {
    [sym_default_value] = STATE(779),
    [sym__semicolon] = ACTIONS(1554),
    [anon_sym_default] = ACTIONS(1147),
    [sym_comment] = ACTIONS(44),
  },
  [687] = {
    [anon_sym_EQ] = ACTIONS(1153),
    [anon_sym_PLUS_EQ] = ACTIONS(1155),
    [anon_sym_DASH_EQ] = ACTIONS(1155),
    [anon_sym_STAR_EQ] = ACTIONS(1155),
    [anon_sym_SLASH_EQ] = ACTIONS(1155),
    [anon_sym_AMP_EQ] = ACTIONS(1155),
    [anon_sym_PIPE_EQ] = ACTIONS(1155),
    [anon_sym_CARET_EQ] = ACTIONS(1155),
    [anon_sym_PERCENT_EQ] = ACTIONS(1155),
    [anon_sym_LT_LT_EQ] = ACTIONS(1155),
    [anon_sym_GT_GT_EQ] = ACTIONS(1155),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1155),
    [anon_sym_GT] = ACTIONS(1157),
    [anon_sym_LT] = ACTIONS(1157),
    [anon_sym_EQ_EQ] = ACTIONS(1159),
    [anon_sym_GT_EQ] = ACTIONS(1159),
    [anon_sym_LT_EQ] = ACTIONS(1159),
    [anon_sym_BANG_EQ] = ACTIONS(1159),
    [anon_sym_AMP_AMP] = ACTIONS(1556),
    [anon_sym_PIPE_PIPE] = ACTIONS(1558),
    [anon_sym_PLUS] = ACTIONS(1560),
    [anon_sym_DASH] = ACTIONS(1560),
    [anon_sym_STAR] = ACTIONS(1562),
    [anon_sym_SLASH] = ACTIONS(1562),
    [anon_sym_AMP] = ACTIONS(1161),
    [anon_sym_PIPE] = ACTIONS(1564),
    [anon_sym_CARET] = ACTIONS(1564),
    [anon_sym_PERCENT] = ACTIONS(1562),
    [anon_sym_LT_LT] = ACTIONS(1562),
    [anon_sym_GT_GT] = ACTIONS(1562),
    [anon_sym_GT_GT_GT] = ACTIONS(1562),
    [anon_sym_QMARK] = ACTIONS(1566),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_COMMA] = ACTIONS(361),
    [sym_comment] = ACTIONS(44),
  },
  [688] = {
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(365),
    [anon_sym_EQ_EQ] = ACTIONS(363),
    [anon_sym_GT_EQ] = ACTIONS(363),
    [anon_sym_LT_EQ] = ACTIONS(363),
    [anon_sym_BANG_EQ] = ACTIONS(363),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(1562),
    [anon_sym_SLASH] = ACTIONS(1562),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(1562),
    [anon_sym_LT_LT] = ACTIONS(1562),
    [anon_sym_GT_GT] = ACTIONS(1562),
    [anon_sym_GT_GT_GT] = ACTIONS(1562),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(363),
    [anon_sym_COMMA] = ACTIONS(363),
    [sym_comment] = ACTIONS(44),
  },
  [689] = {
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(1157),
    [anon_sym_LT] = ACTIONS(1157),
    [anon_sym_EQ_EQ] = ACTIONS(1159),
    [anon_sym_GT_EQ] = ACTIONS(1159),
    [anon_sym_LT_EQ] = ACTIONS(1159),
    [anon_sym_BANG_EQ] = ACTIONS(1159),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(1560),
    [anon_sym_DASH] = ACTIONS(1560),
    [anon_sym_STAR] = ACTIONS(1562),
    [anon_sym_SLASH] = ACTIONS(1562),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(1562),
    [anon_sym_LT_LT] = ACTIONS(1562),
    [anon_sym_GT_GT] = ACTIONS(1562),
    [anon_sym_GT_GT_GT] = ACTIONS(1562),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(363),
    [anon_sym_COMMA] = ACTIONS(363),
    [sym_comment] = ACTIONS(44),
  },
  [690] = {
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(1157),
    [anon_sym_LT] = ACTIONS(1157),
    [anon_sym_EQ_EQ] = ACTIONS(1159),
    [anon_sym_GT_EQ] = ACTIONS(1159),
    [anon_sym_LT_EQ] = ACTIONS(1159),
    [anon_sym_BANG_EQ] = ACTIONS(1159),
    [anon_sym_AMP_AMP] = ACTIONS(1556),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(1560),
    [anon_sym_DASH] = ACTIONS(1560),
    [anon_sym_STAR] = ACTIONS(1562),
    [anon_sym_SLASH] = ACTIONS(1562),
    [anon_sym_AMP] = ACTIONS(1161),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(1562),
    [anon_sym_LT_LT] = ACTIONS(1562),
    [anon_sym_GT_GT] = ACTIONS(1562),
    [anon_sym_GT_GT_GT] = ACTIONS(1562),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(363),
    [anon_sym_COMMA] = ACTIONS(363),
    [sym_comment] = ACTIONS(44),
  },
  [691] = {
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(1157),
    [anon_sym_LT] = ACTIONS(1157),
    [anon_sym_EQ_EQ] = ACTIONS(1159),
    [anon_sym_GT_EQ] = ACTIONS(1159),
    [anon_sym_LT_EQ] = ACTIONS(1159),
    [anon_sym_BANG_EQ] = ACTIONS(1159),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(1562),
    [anon_sym_SLASH] = ACTIONS(1562),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(1562),
    [anon_sym_LT_LT] = ACTIONS(1562),
    [anon_sym_GT_GT] = ACTIONS(1562),
    [anon_sym_GT_GT_GT] = ACTIONS(1562),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(363),
    [anon_sym_COMMA] = ACTIONS(363),
    [sym_comment] = ACTIONS(44),
  },
  [692] = {
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_PLUS_EQ] = ACTIONS(369),
    [anon_sym_DASH_EQ] = ACTIONS(369),
    [anon_sym_STAR_EQ] = ACTIONS(369),
    [anon_sym_SLASH_EQ] = ACTIONS(369),
    [anon_sym_AMP_EQ] = ACTIONS(369),
    [anon_sym_PIPE_EQ] = ACTIONS(369),
    [anon_sym_CARET_EQ] = ACTIONS(369),
    [anon_sym_PERCENT_EQ] = ACTIONS(369),
    [anon_sym_LT_LT_EQ] = ACTIONS(369),
    [anon_sym_GT_GT_EQ] = ACTIONS(369),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(373),
    [anon_sym_GT_EQ] = ACTIONS(373),
    [anon_sym_LT_EQ] = ACTIONS(373),
    [anon_sym_BANG_EQ] = ACTIONS(373),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_CARET] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(381),
    [anon_sym_GT_GT] = ACTIONS(381),
    [anon_sym_GT_GT_GT] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(1568),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [693] = {
    [sym__expression] = STATE(781),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1163),
    [anon_sym_TILDE] = ACTIONS(1163),
    [anon_sym_PLUS_PLUS] = ACTIONS(1165),
    [anon_sym_DASH_DASH] = ACTIONS(1165),
    [sym_comment] = ACTIONS(44),
  },
  [694] = {
    [sym__expression] = STATE(782),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1163),
    [anon_sym_TILDE] = ACTIONS(1163),
    [anon_sym_PLUS_PLUS] = ACTIONS(1165),
    [anon_sym_DASH_DASH] = ACTIONS(1165),
    [sym_comment] = ACTIONS(44),
  },
  [695] = {
    [sym__expression] = STATE(783),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1163),
    [anon_sym_TILDE] = ACTIONS(1163),
    [anon_sym_PLUS_PLUS] = ACTIONS(1165),
    [anon_sym_DASH_DASH] = ACTIONS(1165),
    [sym_comment] = ACTIONS(44),
  },
  [696] = {
    [sym__expression] = STATE(784),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1163),
    [anon_sym_TILDE] = ACTIONS(1163),
    [anon_sym_PLUS_PLUS] = ACTIONS(1165),
    [anon_sym_DASH_DASH] = ACTIONS(1165),
    [sym_comment] = ACTIONS(44),
  },
  [697] = {
    [sym__expression] = STATE(785),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1163),
    [anon_sym_TILDE] = ACTIONS(1163),
    [anon_sym_PLUS_PLUS] = ACTIONS(1165),
    [anon_sym_DASH_DASH] = ACTIONS(1165),
    [sym_comment] = ACTIONS(44),
  },
  [698] = {
    [sym__expression] = STATE(100),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1163),
    [anon_sym_TILDE] = ACTIONS(1163),
    [anon_sym_PLUS_PLUS] = ACTIONS(1165),
    [anon_sym_DASH_DASH] = ACTIONS(1165),
    [sym_comment] = ACTIONS(44),
  },
  [699] = {
    [sym__expression] = STATE(786),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_PLUS_PLUS] = ACTIONS(243),
    [anon_sym_DASH_DASH] = ACTIONS(243),
    [sym_comment] = ACTIONS(44),
  },
  [700] = {
    [sym__semicolon] = ACTIONS(1570),
    [anon_sym_RPAREN] = ACTIONS(1570),
    [anon_sym_RBRACE] = ACTIONS(1570),
    [anon_sym_COMMA] = ACTIONS(1570),
    [sym_comment] = ACTIONS(44),
  },
  [701] = {
    [anon_sym_RBRACE] = ACTIONS(1572),
    [anon_sym_COMMA] = ACTIONS(1572),
    [sym_comment] = ACTIONS(44),
  },
  [702] = {
    [sym__literal] = STATE(310),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(311),
    [sym__annotation] = STATE(310),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym_element_value] = STATE(788),
    [sym_element_value_array_initializer] = STATE(310),
    [sym_conditional_expression] = STATE(310),
    [sym_conditional_or_expression] = STATE(428),
    [sym_conditional_and_expression] = STATE(429),
    [sym_inclusive_or_expression] = STATE(430),
    [sym_exclusive_or_expression] = STATE(431),
    [sym_and_expression] = STATE(317),
    [sym_relational_expression] = STATE(432),
    [sym_equality_expression] = STATE(433),
    [sym_shift_expression] = STATE(434),
    [sym_additive_expression] = STATE(435),
    [sym_multiplicative_expression] = STATE(436),
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
    [anon_sym_BANG] = ACTIONS(897),
    [anon_sym_TILDE] = ACTIONS(897),
    [anon_sym_LBRACE] = ACTIONS(631),
    [anon_sym_RBRACE] = ACTIONS(1574),
    [anon_sym_AT] = ACTIONS(169),
    [sym_comment] = ACTIONS(44),
  },
  [703] = {
    [anon_sym_AMP_AMP] = ACTIONS(1177),
    [anon_sym_PIPE_PIPE] = ACTIONS(1394),
    [anon_sym_QMARK] = ACTIONS(1394),
    [anon_sym_RBRACE] = ACTIONS(1394),
    [anon_sym_COMMA] = ACTIONS(1394),
    [sym_comment] = ACTIONS(44),
  },
  [704] = {
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_PLUS_EQ] = ACTIONS(369),
    [anon_sym_DASH_EQ] = ACTIONS(369),
    [anon_sym_STAR_EQ] = ACTIONS(369),
    [anon_sym_SLASH_EQ] = ACTIONS(369),
    [anon_sym_AMP_EQ] = ACTIONS(369),
    [anon_sym_PIPE_EQ] = ACTIONS(369),
    [anon_sym_CARET_EQ] = ACTIONS(369),
    [anon_sym_PERCENT_EQ] = ACTIONS(369),
    [anon_sym_LT_LT_EQ] = ACTIONS(369),
    [anon_sym_GT_GT_EQ] = ACTIONS(369),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(373),
    [anon_sym_GT_EQ] = ACTIONS(373),
    [anon_sym_LT_EQ] = ACTIONS(373),
    [anon_sym_BANG_EQ] = ACTIONS(373),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_CARET] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(381),
    [anon_sym_GT_GT] = ACTIONS(381),
    [anon_sym_GT_GT_GT] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(1576),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [705] = {
    [anon_sym_AMP_AMP] = ACTIONS(1398),
    [anon_sym_PIPE_PIPE] = ACTIONS(1398),
    [anon_sym_PIPE] = ACTIONS(1179),
    [anon_sym_QMARK] = ACTIONS(1398),
    [anon_sym_RBRACE] = ACTIONS(1398),
    [anon_sym_COMMA] = ACTIONS(1398),
    [sym_comment] = ACTIONS(44),
  },
  [706] = {
    [anon_sym_AMP_AMP] = ACTIONS(1400),
    [anon_sym_PIPE_PIPE] = ACTIONS(1400),
    [anon_sym_PIPE] = ACTIONS(1402),
    [anon_sym_CARET] = ACTIONS(1181),
    [anon_sym_QMARK] = ACTIONS(1400),
    [anon_sym_RBRACE] = ACTIONS(1400),
    [anon_sym_COMMA] = ACTIONS(1400),
    [sym_comment] = ACTIONS(44),
  },
  [707] = {
    [anon_sym_LT] = ACTIONS(1408),
    [anon_sym_EQ_EQ] = ACTIONS(1410),
    [anon_sym_BANG_EQ] = ACTIONS(1410),
    [anon_sym_AMP_AMP] = ACTIONS(1410),
    [anon_sym_PIPE_PIPE] = ACTIONS(1410),
    [anon_sym_PIPE] = ACTIONS(1408),
    [anon_sym_CARET] = ACTIONS(1410),
    [anon_sym_LT_LT] = ACTIONS(1187),
    [anon_sym_GT_GT] = ACTIONS(1189),
    [anon_sym_GT_GT_GT] = ACTIONS(1187),
    [anon_sym_QMARK] = ACTIONS(1410),
    [anon_sym_RBRACE] = ACTIONS(1410),
    [anon_sym_COMMA] = ACTIONS(1410),
    [sym_comment] = ACTIONS(44),
  },
  [708] = {
    [anon_sym_LT] = ACTIONS(1183),
    [anon_sym_EQ_EQ] = ACTIONS(1412),
    [anon_sym_BANG_EQ] = ACTIONS(1412),
    [anon_sym_AMP_AMP] = ACTIONS(1414),
    [anon_sym_PIPE_PIPE] = ACTIONS(1414),
    [anon_sym_PIPE] = ACTIONS(1416),
    [anon_sym_CARET] = ACTIONS(1414),
    [anon_sym_QMARK] = ACTIONS(1414),
    [anon_sym_RBRACE] = ACTIONS(1414),
    [anon_sym_COMMA] = ACTIONS(1414),
    [sym_comment] = ACTIONS(44),
  },
  [709] = {
    [anon_sym_LT] = ACTIONS(1418),
    [anon_sym_EQ_EQ] = ACTIONS(1420),
    [anon_sym_BANG_EQ] = ACTIONS(1420),
    [anon_sym_AMP_AMP] = ACTIONS(1420),
    [anon_sym_PIPE_PIPE] = ACTIONS(1420),
    [anon_sym_PLUS] = ACTIONS(1191),
    [anon_sym_DASH] = ACTIONS(1191),
    [anon_sym_PIPE] = ACTIONS(1418),
    [anon_sym_CARET] = ACTIONS(1420),
    [anon_sym_LT_LT] = ACTIONS(1420),
    [anon_sym_GT_GT] = ACTIONS(1418),
    [anon_sym_GT_GT_GT] = ACTIONS(1420),
    [anon_sym_QMARK] = ACTIONS(1420),
    [anon_sym_RBRACE] = ACTIONS(1420),
    [anon_sym_COMMA] = ACTIONS(1420),
    [sym_comment] = ACTIONS(44),
  },
  [710] = {
    [anon_sym_LT] = ACTIONS(1422),
    [anon_sym_EQ_EQ] = ACTIONS(1424),
    [anon_sym_BANG_EQ] = ACTIONS(1424),
    [anon_sym_AMP_AMP] = ACTIONS(1424),
    [anon_sym_PIPE_PIPE] = ACTIONS(1424),
    [anon_sym_PLUS] = ACTIONS(1424),
    [anon_sym_DASH] = ACTIONS(1424),
    [anon_sym_STAR] = ACTIONS(1193),
    [anon_sym_SLASH] = ACTIONS(1195),
    [anon_sym_PIPE] = ACTIONS(1422),
    [anon_sym_CARET] = ACTIONS(1424),
    [anon_sym_PERCENT] = ACTIONS(1193),
    [anon_sym_LT_LT] = ACTIONS(1424),
    [anon_sym_GT_GT] = ACTIONS(1422),
    [anon_sym_GT_GT_GT] = ACTIONS(1424),
    [anon_sym_QMARK] = ACTIONS(1424),
    [anon_sym_RBRACE] = ACTIONS(1424),
    [anon_sym_COMMA] = ACTIONS(1424),
    [sym_comment] = ACTIONS(44),
  },
  [711] = {
    [sym_unary_expression] = STATE(311),
    [sym_conditional_expression] = STATE(790),
    [sym_conditional_or_expression] = STATE(313),
    [sym_conditional_and_expression] = STATE(314),
    [sym_inclusive_or_expression] = STATE(315),
    [sym_exclusive_or_expression] = STATE(316),
    [sym_and_expression] = STATE(317),
    [sym_relational_expression] = STATE(318),
    [sym_equality_expression] = STATE(319),
    [sym_shift_expression] = STATE(320),
    [sym_additive_expression] = STATE(321),
    [sym_multiplicative_expression] = STATE(322),
    [anon_sym_BANG] = ACTIONS(629),
    [anon_sym_TILDE] = ACTIONS(629),
    [sym_comment] = ACTIONS(44),
  },
  [712] = {
    [anon_sym_RBRACE] = ACTIONS(1578),
    [anon_sym_requires] = ACTIONS(1578),
    [anon_sym_exports] = ACTIONS(1578),
    [anon_sym_opens] = ACTIONS(1578),
    [anon_sym_uses] = ACTIONS(1578),
    [anon_sym_provides] = ACTIONS(1578),
    [sym_comment] = ACTIONS(44),
  },
  [713] = {
    [sym__semicolon] = ACTIONS(1580),
    [anon_sym_COMMA] = ACTIONS(1580),
    [anon_sym_DOT] = ACTIONS(675),
    [sym_comment] = ACTIONS(44),
  },
  [714] = {
    [sym_package_or_type_name] = STATE(791),
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(44),
  },
  [715] = {
    [anon_sym_GT] = ACTIONS(1582),
    [anon_sym_AMP] = ACTIONS(1582),
    [anon_sym_COMMA] = ACTIONS(1582),
    [sym_comment] = ACTIONS(44),
  },
  [716] = {
    [anon_sym_EQ] = ACTIONS(1223),
    [anon_sym_PLUS_EQ] = ACTIONS(1225),
    [anon_sym_DASH_EQ] = ACTIONS(1225),
    [anon_sym_STAR_EQ] = ACTIONS(1225),
    [anon_sym_SLASH_EQ] = ACTIONS(1225),
    [anon_sym_AMP_EQ] = ACTIONS(1225),
    [anon_sym_PIPE_EQ] = ACTIONS(1225),
    [anon_sym_CARET_EQ] = ACTIONS(1225),
    [anon_sym_PERCENT_EQ] = ACTIONS(1225),
    [anon_sym_LT_LT_EQ] = ACTIONS(1225),
    [anon_sym_GT_GT_EQ] = ACTIONS(1225),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1225),
    [anon_sym_GT] = ACTIONS(1227),
    [anon_sym_LT] = ACTIONS(1227),
    [anon_sym_EQ_EQ] = ACTIONS(1229),
    [anon_sym_GT_EQ] = ACTIONS(1229),
    [anon_sym_LT_EQ] = ACTIONS(1229),
    [anon_sym_BANG_EQ] = ACTIONS(1229),
    [anon_sym_AMP_AMP] = ACTIONS(1231),
    [anon_sym_PIPE_PIPE] = ACTIONS(1233),
    [anon_sym_PLUS] = ACTIONS(1235),
    [anon_sym_DASH] = ACTIONS(1235),
    [anon_sym_STAR] = ACTIONS(1237),
    [anon_sym_SLASH] = ACTIONS(1237),
    [anon_sym_AMP] = ACTIONS(1239),
    [anon_sym_PIPE] = ACTIONS(1241),
    [anon_sym_CARET] = ACTIONS(1241),
    [anon_sym_PERCENT] = ACTIONS(1237),
    [anon_sym_LT_LT] = ACTIONS(1237),
    [anon_sym_GT_GT] = ACTIONS(1237),
    [anon_sym_GT_GT_GT] = ACTIONS(1237),
    [anon_sym_QMARK] = ACTIONS(1243),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(361),
    [sym_comment] = ACTIONS(44),
  },
  [717] = {
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(365),
    [anon_sym_EQ_EQ] = ACTIONS(363),
    [anon_sym_GT_EQ] = ACTIONS(363),
    [anon_sym_LT_EQ] = ACTIONS(363),
    [anon_sym_BANG_EQ] = ACTIONS(363),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(1237),
    [anon_sym_SLASH] = ACTIONS(1237),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(1237),
    [anon_sym_LT_LT] = ACTIONS(1237),
    [anon_sym_GT_GT] = ACTIONS(1237),
    [anon_sym_GT_GT_GT] = ACTIONS(1237),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(363),
    [sym_comment] = ACTIONS(44),
  },
  [718] = {
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(1227),
    [anon_sym_LT] = ACTIONS(1227),
    [anon_sym_EQ_EQ] = ACTIONS(1229),
    [anon_sym_GT_EQ] = ACTIONS(1229),
    [anon_sym_LT_EQ] = ACTIONS(1229),
    [anon_sym_BANG_EQ] = ACTIONS(1229),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(1235),
    [anon_sym_DASH] = ACTIONS(1235),
    [anon_sym_STAR] = ACTIONS(1237),
    [anon_sym_SLASH] = ACTIONS(1237),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(1237),
    [anon_sym_LT_LT] = ACTIONS(1237),
    [anon_sym_GT_GT] = ACTIONS(1237),
    [anon_sym_GT_GT_GT] = ACTIONS(1237),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(363),
    [sym_comment] = ACTIONS(44),
  },
  [719] = {
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(1227),
    [anon_sym_LT] = ACTIONS(1227),
    [anon_sym_EQ_EQ] = ACTIONS(1229),
    [anon_sym_GT_EQ] = ACTIONS(1229),
    [anon_sym_LT_EQ] = ACTIONS(1229),
    [anon_sym_BANG_EQ] = ACTIONS(1229),
    [anon_sym_AMP_AMP] = ACTIONS(1231),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(1235),
    [anon_sym_DASH] = ACTIONS(1235),
    [anon_sym_STAR] = ACTIONS(1237),
    [anon_sym_SLASH] = ACTIONS(1237),
    [anon_sym_AMP] = ACTIONS(1239),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(1237),
    [anon_sym_LT_LT] = ACTIONS(1237),
    [anon_sym_GT_GT] = ACTIONS(1237),
    [anon_sym_GT_GT_GT] = ACTIONS(1237),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(363),
    [sym_comment] = ACTIONS(44),
  },
  [720] = {
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(1227),
    [anon_sym_LT] = ACTIONS(1227),
    [anon_sym_EQ_EQ] = ACTIONS(1229),
    [anon_sym_GT_EQ] = ACTIONS(1229),
    [anon_sym_LT_EQ] = ACTIONS(1229),
    [anon_sym_BANG_EQ] = ACTIONS(1229),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(1237),
    [anon_sym_SLASH] = ACTIONS(1237),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(1237),
    [anon_sym_LT_LT] = ACTIONS(1237),
    [anon_sym_GT_GT] = ACTIONS(1237),
    [anon_sym_GT_GT_GT] = ACTIONS(1237),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(363),
    [sym_comment] = ACTIONS(44),
  },
  [721] = {
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_PLUS_EQ] = ACTIONS(369),
    [anon_sym_DASH_EQ] = ACTIONS(369),
    [anon_sym_STAR_EQ] = ACTIONS(369),
    [anon_sym_SLASH_EQ] = ACTIONS(369),
    [anon_sym_AMP_EQ] = ACTIONS(369),
    [anon_sym_PIPE_EQ] = ACTIONS(369),
    [anon_sym_CARET_EQ] = ACTIONS(369),
    [anon_sym_PERCENT_EQ] = ACTIONS(369),
    [anon_sym_LT_LT_EQ] = ACTIONS(369),
    [anon_sym_GT_GT_EQ] = ACTIONS(369),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(373),
    [anon_sym_GT_EQ] = ACTIONS(373),
    [anon_sym_LT_EQ] = ACTIONS(373),
    [anon_sym_BANG_EQ] = ACTIONS(373),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_CARET] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(381),
    [anon_sym_GT_GT] = ACTIONS(381),
    [anon_sym_GT_GT_GT] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(1584),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [722] = {
    [anon_sym_if] = ACTIONS(1586),
    [anon_sym_RBRACE] = ACTIONS(1586),
    [anon_sym_AT] = ACTIONS(1586),
    [anon_sym_static] = ACTIONS(1586),
    [anon_sym_class] = ACTIONS(1586),
    [anon_sym_public] = ACTIONS(1586),
    [anon_sym_protected] = ACTIONS(1586),
    [anon_sym_private] = ACTIONS(1586),
    [anon_sym_abstract] = ACTIONS(1586),
    [anon_sym_final] = ACTIONS(1586),
    [anon_sym_strictfp] = ACTIONS(1586),
    [anon_sym_default] = ACTIONS(1586),
    [sym_comment] = ACTIONS(44),
  },
  [723] = {
    [anon_sym_LPAREN] = ACTIONS(1588),
    [sym_comment] = ACTIONS(44),
  },
  [724] = {
    [sym__statement] = STATE(795),
    [sym__literal] = STATE(19),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(20),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [sym__annotation] = STATE(23),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym__declaration] = STATE(25),
    [sym_module_declaration] = STATE(26),
    [sym_package_declaration] = STATE(26),
    [sym_import_statement] = STATE(26),
    [sym_single_type_import_declaration] = STATE(27),
    [sym_type_import_on_declaraction] = STATE(27),
    [sym_single_static_import_declaration] = STATE(27),
    [sym_static_import_on_demand_declaration] = STATE(27),
    [sym_class_declaration] = STATE(26),
    [sym_normal_class_declaration] = STATE(28),
    [sym_modifier] = STATE(29),
    [sym_interface_declaration] = STATE(26),
    [sym_annotation_type_declaration] = STATE(30),
    [sym_normal_interface_declaration] = STATE(30),
    [aux_sym_class_or_interface_type_repeat1] = STATE(32),
    [aux_sym_normal_class_declaration_repeat1] = STATE(33),
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
    [anon_sym_LBRACE] = ACTIONS(1590),
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
    [anon_sym_interface] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
  },
  [725] = {
    [anon_sym_if] = ACTIONS(1592),
    [anon_sym_RBRACE] = ACTIONS(1592),
    [anon_sym_elseif] = ACTIONS(1592),
    [anon_sym_AT] = ACTIONS(1592),
    [anon_sym_static] = ACTIONS(1592),
    [anon_sym_class] = ACTIONS(1592),
    [anon_sym_public] = ACTIONS(1592),
    [anon_sym_protected] = ACTIONS(1592),
    [anon_sym_private] = ACTIONS(1592),
    [anon_sym_abstract] = ACTIONS(1592),
    [anon_sym_final] = ACTIONS(1592),
    [anon_sym_strictfp] = ACTIONS(1592),
    [anon_sym_default] = ACTIONS(1592),
    [sym_comment] = ACTIONS(44),
  },
  [726] = {
    [sym_else_if_clause] = STATE(796),
    [anon_sym_if] = ACTIONS(1586),
    [anon_sym_RBRACE] = ACTIONS(1586),
    [anon_sym_elseif] = ACTIONS(1448),
    [anon_sym_AT] = ACTIONS(1586),
    [anon_sym_static] = ACTIONS(1586),
    [anon_sym_class] = ACTIONS(1586),
    [anon_sym_public] = ACTIONS(1586),
    [anon_sym_protected] = ACTIONS(1586),
    [anon_sym_private] = ACTIONS(1586),
    [anon_sym_abstract] = ACTIONS(1586),
    [anon_sym_final] = ACTIONS(1586),
    [anon_sym_strictfp] = ACTIONS(1586),
    [anon_sym_default] = ACTIONS(1586),
    [sym_comment] = ACTIONS(44),
  },
  [727] = {
    [anon_sym_AT] = ACTIONS(633),
    [anon_sym_static] = ACTIONS(1438),
    [anon_sym_class] = ACTIONS(1438),
    [anon_sym_public] = ACTIONS(1438),
    [anon_sym_protected] = ACTIONS(1438),
    [anon_sym_private] = ACTIONS(1438),
    [anon_sym_abstract] = ACTIONS(1438),
    [anon_sym_final] = ACTIONS(1438),
    [anon_sym_strictfp] = ACTIONS(1438),
    [anon_sym_default] = ACTIONS(1438),
    [sym_identifier] = ACTIONS(1470),
    [sym_comment] = ACTIONS(44),
  },
  [728] = {
    [anon_sym_AT] = ACTIONS(635),
    [anon_sym_static] = ACTIONS(1440),
    [anon_sym_class] = ACTIONS(1440),
    [anon_sym_public] = ACTIONS(1440),
    [anon_sym_protected] = ACTIONS(1440),
    [anon_sym_private] = ACTIONS(1440),
    [anon_sym_abstract] = ACTIONS(1440),
    [anon_sym_final] = ACTIONS(1440),
    [anon_sym_strictfp] = ACTIONS(1440),
    [anon_sym_default] = ACTIONS(1440),
    [sym_identifier] = ACTIONS(1472),
    [sym_comment] = ACTIONS(44),
  },
  [729] = {
    [anon_sym_boolean] = ACTIONS(1211),
    [anon_sym_byte] = ACTIONS(1211),
    [anon_sym_short] = ACTIONS(1211),
    [anon_sym_int] = ACTIONS(1211),
    [anon_sym_long] = ACTIONS(1211),
    [anon_sym_char] = ACTIONS(1211),
    [anon_sym_float] = ACTIONS(1211),
    [anon_sym_double] = ACTIONS(1211),
    [anon_sym_AT] = ACTIONS(411),
    [sym_identifier] = ACTIONS(1281),
    [sym_comment] = ACTIONS(44),
  },
  [730] = {
    [anon_sym_EQ] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(1594),
    [sym_comment] = ACTIONS(44),
  },
  [731] = {
    [anon_sym_RPAREN] = ACTIONS(1594),
    [sym_comment] = ACTIONS(44),
  },
  [732] = {
    [anon_sym_RPAREN] = ACTIONS(1596),
    [sym_comment] = ACTIONS(44),
  },
  [733] = {
    [anon_sym_LPAREN] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(423),
    [anon_sym_boolean] = ACTIONS(425),
    [anon_sym_byte] = ACTIONS(425),
    [anon_sym_short] = ACTIONS(425),
    [anon_sym_int] = ACTIONS(425),
    [anon_sym_long] = ACTIONS(425),
    [anon_sym_char] = ACTIONS(425),
    [anon_sym_float] = ACTIONS(425),
    [anon_sym_double] = ACTIONS(425),
    [anon_sym_AT] = ACTIONS(423),
    [sym_identifier] = ACTIONS(1205),
    [sym_comment] = ACTIONS(44),
  },
  [734] = {
    [anon_sym_GT] = ACTIONS(1598),
    [anon_sym_COMMA] = ACTIONS(1598),
    [sym_comment] = ACTIONS(44),
  },
  [735] = {
    [anon_sym_GT] = ACTIONS(1600),
    [anon_sym_AMP] = ACTIONS(1600),
    [anon_sym_LBRACE] = ACTIONS(1600),
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_DOT] = ACTIONS(1600),
    [anon_sym_LBRACK] = ACTIONS(1600),
    [anon_sym_AT] = ACTIONS(1600),
    [anon_sym_implements] = ACTIONS(1600),
    [sym_comment] = ACTIONS(44),
  },
  [736] = {
    [sym__semicolon] = ACTIONS(881),
    [anon_sym_LT] = ACTIONS(881),
    [anon_sym_RBRACE] = ACTIONS(881),
    [anon_sym_AT] = ACTIONS(881),
    [anon_sym_static] = ACTIONS(883),
    [anon_sym_class] = ACTIONS(883),
    [anon_sym_public] = ACTIONS(883),
    [anon_sym_protected] = ACTIONS(883),
    [anon_sym_private] = ACTIONS(883),
    [anon_sym_abstract] = ACTIONS(883),
    [anon_sym_final] = ACTIONS(883),
    [anon_sym_strictfp] = ACTIONS(883),
    [anon_sym_default] = ACTIONS(883),
    [anon_sym_interface] = ACTIONS(883),
    [sym_result] = ACTIONS(883),
    [sym_identifier] = ACTIONS(885),
    [sym_comment] = ACTIONS(44),
  },
  [737] = {
    [sym__semicolon] = ACTIONS(1069),
    [anon_sym_LT] = ACTIONS(1069),
    [anon_sym_RBRACE] = ACTIONS(1069),
    [anon_sym_AT] = ACTIONS(1069),
    [anon_sym_static] = ACTIONS(1071),
    [anon_sym_class] = ACTIONS(1071),
    [anon_sym_public] = ACTIONS(1071),
    [anon_sym_protected] = ACTIONS(1071),
    [anon_sym_private] = ACTIONS(1071),
    [anon_sym_abstract] = ACTIONS(1071),
    [anon_sym_final] = ACTIONS(1071),
    [anon_sym_strictfp] = ACTIONS(1071),
    [anon_sym_default] = ACTIONS(1071),
    [anon_sym_interface] = ACTIONS(1071),
    [sym_result] = ACTIONS(1071),
    [sym_identifier] = ACTIONS(1073),
    [sym_comment] = ACTIONS(44),
  },
  [738] = {
    [sym__literal] = STATE(801),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(802),
    [sym_element_value_pair] = STATE(115),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(275),
    [anon_sym_false] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(1602),
    [sym_identifier] = ACTIONS(1604),
    [sym_comment] = ACTIONS(44),
  },
  [739] = {
    [sym_identifier] = ACTIONS(1606),
    [sym_comment] = ACTIONS(44),
  },
  [740] = {
    [anon_sym_RPAREN] = ACTIONS(1608),
    [anon_sym_COMMA] = ACTIONS(1608),
    [sym_comment] = ACTIONS(44),
  },
  [741] = {
    [sym__semicolon] = ACTIONS(1610),
    [anon_sym_LBRACE] = ACTIONS(1610),
    [anon_sym_throws] = ACTIONS(1610),
    [sym_comment] = ACTIONS(44),
  },
  [742] = {
    [anon_sym_RPAREN] = ACTIONS(1306),
    [anon_sym_COMMA] = ACTIONS(1612),
    [sym_comment] = ACTIONS(44),
  },
  [743] = {
    [anon_sym_RPAREN] = ACTIONS(1614),
    [sym_comment] = ACTIONS(44),
  },
  [744] = {
    [sym__annotation] = STATE(63),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [anon_sym_AT] = ACTIONS(169),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1316),
    [sym_comment] = ACTIONS(44),
  },
  [745] = {
    [sym__annotation] = STATE(641),
    [sym_normal_annotation] = STATE(642),
    [sym_marker_annotation] = STATE(642),
    [sym_single_element_annotation] = STATE(642),
    [sym_modifier] = STATE(507),
    [sym_variable_declarator_id] = STATE(508),
    [sym_formal_parameter] = STATE(804),
    [sym_last_formal_parameter] = STATE(805),
    [aux_sym_class_or_interface_type_repeat1] = STATE(744),
    [aux_sym_normal_class_declaration_repeat1] = STATE(514),
    [anon_sym_AT] = ACTIONS(1320),
    [anon_sym_static] = ACTIONS(1091),
    [anon_sym_public] = ACTIONS(1091),
    [anon_sym_protected] = ACTIONS(1091),
    [anon_sym_private] = ACTIONS(1091),
    [anon_sym_abstract] = ACTIONS(1091),
    [anon_sym_final] = ACTIONS(1091),
    [anon_sym_strictfp] = ACTIONS(1091),
    [anon_sym_default] = ACTIONS(1091),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1095),
    [sym_identifier] = ACTIONS(353),
    [sym_comment] = ACTIONS(44),
  },
  [746] = {
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_this] = ACTIONS(201),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(199),
    [sym_identifier] = ACTIONS(667),
    [sym_comment] = ACTIONS(44),
  },
  [747] = {
    [anon_sym_LPAREN] = ACTIONS(1616),
    [anon_sym_DOT] = ACTIONS(1618),
    [anon_sym_AT] = ACTIONS(203),
    [anon_sym_this] = ACTIONS(695),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(203),
    [sym_identifier] = ACTIONS(767),
    [sym_comment] = ACTIONS(44),
  },
  [748] = {
    [anon_sym_RPAREN] = ACTIONS(1620),
    [sym_comment] = ACTIONS(44),
  },
  [749] = {
    [anon_sym_this] = ACTIONS(1622),
    [sym_comment] = ACTIONS(44),
  },
  [750] = {
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_static] = ACTIONS(201),
    [anon_sym_public] = ACTIONS(201),
    [anon_sym_protected] = ACTIONS(201),
    [anon_sym_private] = ACTIONS(201),
    [anon_sym_abstract] = ACTIONS(201),
    [anon_sym_final] = ACTIONS(201),
    [anon_sym_strictfp] = ACTIONS(201),
    [anon_sym_default] = ACTIONS(201),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(199),
    [sym_identifier] = ACTIONS(667),
    [sym_comment] = ACTIONS(44),
  },
  [751] = {
    [anon_sym_LPAREN] = ACTIONS(1624),
    [anon_sym_DOT] = ACTIONS(1626),
    [anon_sym_AT] = ACTIONS(203),
    [anon_sym_static] = ACTIONS(695),
    [anon_sym_public] = ACTIONS(695),
    [anon_sym_protected] = ACTIONS(695),
    [anon_sym_private] = ACTIONS(695),
    [anon_sym_abstract] = ACTIONS(695),
    [anon_sym_final] = ACTIONS(695),
    [anon_sym_strictfp] = ACTIONS(695),
    [anon_sym_default] = ACTIONS(695),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(203),
    [sym_identifier] = ACTIONS(767),
    [sym_comment] = ACTIONS(44),
  },
  [752] = {
    [sym_variable_declarator] = STATE(811),
    [sym_variable_declarator_id] = STATE(165),
    [sym_identifier] = ACTIONS(795),
    [sym_comment] = ACTIONS(44),
  },
  [753] = {
    [aux_sym_type_arguments_repeat1] = STATE(813),
    [anon_sym_GT] = ACTIONS(1628),
    [anon_sym_COMMA] = ACTIONS(1049),
    [sym_comment] = ACTIONS(44),
  },
  [754] = {
    [sym_type_arguments] = STATE(814),
    [anon_sym_LT] = ACTIONS(1322),
    [anon_sym_DOT] = ACTIONS(1061),
    [anon_sym_AT] = ACTIONS(1061),
    [sym_identifier] = ACTIONS(1630),
    [sym_comment] = ACTIONS(44),
  },
  [755] = {
    [sym__annotation] = STATE(229),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(1632),
    [sym_comment] = ACTIONS(44),
  },
  [756] = {
    [anon_sym_DOT] = ACTIONS(1502),
    [anon_sym_AT] = ACTIONS(1065),
    [sym_identifier] = ACTIONS(1634),
    [sym_comment] = ACTIONS(44),
  },
  [757] = {
    [sym__annotation] = STATE(132),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [aux_sym_class_or_interface_type_repeat1] = STATE(816),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(1632),
    [sym_comment] = ACTIONS(44),
  },
  [758] = {
    [sym__semicolon] = ACTIONS(1636),
    [anon_sym_LBRACE] = ACTIONS(1636),
    [anon_sym_COMMA] = ACTIONS(1636),
    [sym_comment] = ACTIONS(44),
  },
  [759] = {
    [sym__semicolon] = ACTIONS(1638),
    [anon_sym_LBRACE] = ACTIONS(1638),
    [anon_sym_COMMA] = ACTIONS(1638),
    [sym_comment] = ACTIONS(44),
  },
  [760] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(817),
    [anon_sym_DOT] = ACTIONS(1324),
    [anon_sym_AT] = ACTIONS(1065),
    [sym_identifier] = ACTIONS(1634),
    [sym_comment] = ACTIONS(44),
  },
  [761] = {
    [sym_class_body] = STATE(818),
    [anon_sym_LBRACE] = ACTIONS(769),
    [sym_comment] = ACTIONS(44),
  },
  [762] = {
    [sym__semicolon] = ACTIONS(1127),
    [anon_sym_LT] = ACTIONS(1127),
    [anon_sym_RBRACE] = ACTIONS(1127),
    [anon_sym_AT] = ACTIONS(1127),
    [anon_sym_static] = ACTIONS(1129),
    [anon_sym_class] = ACTIONS(1129),
    [anon_sym_public] = ACTIONS(1129),
    [anon_sym_protected] = ACTIONS(1129),
    [anon_sym_private] = ACTIONS(1129),
    [anon_sym_abstract] = ACTIONS(1129),
    [anon_sym_final] = ACTIONS(1129),
    [anon_sym_strictfp] = ACTIONS(1129),
    [anon_sym_default] = ACTIONS(1129),
    [anon_sym_interface] = ACTIONS(1129),
    [sym_result] = ACTIONS(1129),
    [sym_identifier] = ACTIONS(1131),
    [sym_comment] = ACTIONS(44),
  },
  [763] = {
    [anon_sym_RBRACE] = ACTIONS(881),
    [anon_sym_AT] = ACTIONS(881),
    [anon_sym_static] = ACTIONS(883),
    [anon_sym_class] = ACTIONS(883),
    [anon_sym_public] = ACTIONS(883),
    [anon_sym_protected] = ACTIONS(883),
    [anon_sym_private] = ACTIONS(883),
    [anon_sym_abstract] = ACTIONS(883),
    [anon_sym_final] = ACTIONS(883),
    [anon_sym_strictfp] = ACTIONS(883),
    [anon_sym_default] = ACTIONS(883),
    [anon_sym_interface] = ACTIONS(883),
    [sym_identifier] = ACTIONS(885),
    [sym_comment] = ACTIONS(44),
  },
  [764] = {
    [anon_sym_RBRACE] = ACTIONS(1069),
    [anon_sym_AT] = ACTIONS(1069),
    [anon_sym_static] = ACTIONS(1071),
    [anon_sym_class] = ACTIONS(1071),
    [anon_sym_public] = ACTIONS(1071),
    [anon_sym_protected] = ACTIONS(1071),
    [anon_sym_private] = ACTIONS(1071),
    [anon_sym_abstract] = ACTIONS(1071),
    [anon_sym_final] = ACTIONS(1071),
    [anon_sym_strictfp] = ACTIONS(1071),
    [anon_sym_default] = ACTIONS(1071),
    [anon_sym_interface] = ACTIONS(1071),
    [sym_identifier] = ACTIONS(1073),
    [sym_comment] = ACTIONS(44),
  },
  [765] = {
    [sym__semicolon] = ACTIONS(189),
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_PLUS_EQ] = ACTIONS(94),
    [anon_sym_DASH_EQ] = ACTIONS(94),
    [anon_sym_STAR_EQ] = ACTIONS(94),
    [anon_sym_SLASH_EQ] = ACTIONS(94),
    [anon_sym_AMP_EQ] = ACTIONS(94),
    [anon_sym_PIPE_EQ] = ACTIONS(94),
    [anon_sym_CARET_EQ] = ACTIONS(94),
    [anon_sym_PERCENT_EQ] = ACTIONS(94),
    [anon_sym_LT_LT_EQ] = ACTIONS(94),
    [anon_sym_GT_GT_EQ] = ACTIONS(94),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(94),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(191),
    [anon_sym_EQ_EQ] = ACTIONS(189),
    [anon_sym_GT_EQ] = ACTIONS(98),
    [anon_sym_LT_EQ] = ACTIONS(98),
    [anon_sym_BANG_EQ] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [anon_sym_AMP] = ACTIONS(108),
    [anon_sym_PIPE] = ACTIONS(191),
    [anon_sym_CARET] = ACTIONS(191),
    [anon_sym_PERCENT] = ACTIONS(191),
    [anon_sym_LT_LT] = ACTIONS(191),
    [anon_sym_GT_GT] = ACTIONS(191),
    [anon_sym_GT_GT_GT] = ACTIONS(191),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [766] = {
    [sym_unary_expression] = STATE(311),
    [sym_conditional_and_expression] = STATE(819),
    [sym_inclusive_or_expression] = STATE(674),
    [sym_exclusive_or_expression] = STATE(675),
    [sym_and_expression] = STATE(317),
    [sym_relational_expression] = STATE(676),
    [sym_equality_expression] = STATE(677),
    [sym_shift_expression] = STATE(678),
    [sym_additive_expression] = STATE(679),
    [sym_multiplicative_expression] = STATE(680),
    [anon_sym_BANG] = ACTIONS(1374),
    [anon_sym_TILDE] = ACTIONS(1374),
    [sym_comment] = ACTIONS(44),
  },
  [767] = {
    [sym__expression] = STATE(820),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_PLUS_PLUS] = ACTIONS(243),
    [anon_sym_DASH_DASH] = ACTIONS(243),
    [sym_comment] = ACTIONS(44),
  },
  [768] = {
    [sym_unary_expression] = STATE(311),
    [sym_inclusive_or_expression] = STATE(821),
    [sym_exclusive_or_expression] = STATE(675),
    [sym_and_expression] = STATE(317),
    [sym_relational_expression] = STATE(676),
    [sym_equality_expression] = STATE(677),
    [sym_shift_expression] = STATE(678),
    [sym_additive_expression] = STATE(679),
    [sym_multiplicative_expression] = STATE(680),
    [anon_sym_BANG] = ACTIONS(1374),
    [anon_sym_TILDE] = ACTIONS(1374),
    [sym_comment] = ACTIONS(44),
  },
  [769] = {
    [sym_unary_expression] = STATE(311),
    [sym_exclusive_or_expression] = STATE(822),
    [sym_and_expression] = STATE(317),
    [sym_relational_expression] = STATE(676),
    [sym_equality_expression] = STATE(677),
    [sym_shift_expression] = STATE(678),
    [sym_additive_expression] = STATE(679),
    [sym_multiplicative_expression] = STATE(680),
    [anon_sym_BANG] = ACTIONS(1374),
    [anon_sym_TILDE] = ACTIONS(1374),
    [sym_comment] = ACTIONS(44),
  },
  [770] = {
    [sym_unary_expression] = STATE(311),
    [sym_and_expression] = STATE(582),
    [sym_relational_expression] = STATE(676),
    [sym_equality_expression] = STATE(677),
    [sym_shift_expression] = STATE(678),
    [sym_additive_expression] = STATE(679),
    [sym_multiplicative_expression] = STATE(680),
    [anon_sym_BANG] = ACTIONS(1374),
    [anon_sym_TILDE] = ACTIONS(1374),
    [sym_comment] = ACTIONS(44),
  },
  [771] = {
    [sym_unary_expression] = STATE(311),
    [sym_shift_expression] = STATE(823),
    [sym_additive_expression] = STATE(679),
    [sym_multiplicative_expression] = STATE(680),
    [anon_sym_BANG] = ACTIONS(1374),
    [anon_sym_TILDE] = ACTIONS(1374),
    [sym_comment] = ACTIONS(44),
  },
  [772] = {
    [sym_unary_expression] = STATE(311),
    [sym_relational_expression] = STATE(824),
    [sym_shift_expression] = STATE(678),
    [sym_additive_expression] = STATE(679),
    [sym_multiplicative_expression] = STATE(680),
    [anon_sym_BANG] = ACTIONS(1374),
    [anon_sym_TILDE] = ACTIONS(1374),
    [sym_comment] = ACTIONS(44),
  },
  [773] = {
    [sym_unary_expression] = STATE(311),
    [sym_additive_expression] = STATE(825),
    [sym_multiplicative_expression] = STATE(680),
    [anon_sym_BANG] = ACTIONS(1374),
    [anon_sym_TILDE] = ACTIONS(1374),
    [sym_comment] = ACTIONS(44),
  },
  [774] = {
    [sym_unary_expression] = STATE(311),
    [sym_multiplicative_expression] = STATE(826),
    [anon_sym_BANG] = ACTIONS(1374),
    [anon_sym_TILDE] = ACTIONS(1374),
    [sym_comment] = ACTIONS(44),
  },
  [775] = {
    [sym_unary_expression] = STATE(587),
    [anon_sym_BANG] = ACTIONS(1374),
    [anon_sym_TILDE] = ACTIONS(1374),
    [sym_comment] = ACTIONS(44),
  },
  [776] = {
    [anon_sym_RBRACE] = ACTIONS(1640),
    [anon_sym_AT] = ACTIONS(1640),
    [anon_sym_static] = ACTIONS(1642),
    [anon_sym_class] = ACTIONS(1642),
    [anon_sym_public] = ACTIONS(1642),
    [anon_sym_protected] = ACTIONS(1642),
    [anon_sym_private] = ACTIONS(1642),
    [anon_sym_abstract] = ACTIONS(1642),
    [anon_sym_final] = ACTIONS(1642),
    [anon_sym_strictfp] = ACTIONS(1642),
    [anon_sym_default] = ACTIONS(1642),
    [anon_sym_interface] = ACTIONS(1642),
    [sym_identifier] = ACTIONS(1644),
    [sym_comment] = ACTIONS(44),
  },
  [777] = {
    [sym_class_body] = STATE(827),
    [anon_sym_LBRACE] = ACTIONS(865),
    [sym_comment] = ACTIONS(44),
  },
  [778] = {
    [anon_sym_RBRACE] = ACTIONS(1127),
    [anon_sym_AT] = ACTIONS(1127),
    [anon_sym_static] = ACTIONS(1129),
    [anon_sym_class] = ACTIONS(1129),
    [anon_sym_public] = ACTIONS(1129),
    [anon_sym_protected] = ACTIONS(1129),
    [anon_sym_private] = ACTIONS(1129),
    [anon_sym_abstract] = ACTIONS(1129),
    [anon_sym_final] = ACTIONS(1129),
    [anon_sym_strictfp] = ACTIONS(1129),
    [anon_sym_default] = ACTIONS(1129),
    [anon_sym_interface] = ACTIONS(1129),
    [sym_identifier] = ACTIONS(1131),
    [sym_comment] = ACTIONS(44),
  },
  [779] = {
    [sym__semicolon] = ACTIONS(1646),
    [sym_comment] = ACTIONS(44),
  },
  [780] = {
    [sym__expression] = STATE(829),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(893),
    [anon_sym_TILDE] = ACTIONS(893),
    [anon_sym_PLUS_PLUS] = ACTIONS(895),
    [anon_sym_DASH_DASH] = ACTIONS(895),
    [sym_comment] = ACTIONS(44),
  },
  [781] = {
    [anon_sym_EQ] = ACTIONS(1378),
    [anon_sym_PLUS_EQ] = ACTIONS(1380),
    [anon_sym_DASH_EQ] = ACTIONS(1380),
    [anon_sym_STAR_EQ] = ACTIONS(1380),
    [anon_sym_SLASH_EQ] = ACTIONS(1380),
    [anon_sym_AMP_EQ] = ACTIONS(1380),
    [anon_sym_PIPE_EQ] = ACTIONS(1380),
    [anon_sym_CARET_EQ] = ACTIONS(1380),
    [anon_sym_PERCENT_EQ] = ACTIONS(1380),
    [anon_sym_LT_LT_EQ] = ACTIONS(1380),
    [anon_sym_GT_GT_EQ] = ACTIONS(1380),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1380),
    [anon_sym_GT] = ACTIONS(1382),
    [anon_sym_LT] = ACTIONS(1382),
    [anon_sym_EQ_EQ] = ACTIONS(1384),
    [anon_sym_GT_EQ] = ACTIONS(1384),
    [anon_sym_LT_EQ] = ACTIONS(1384),
    [anon_sym_BANG_EQ] = ACTIONS(1384),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1652),
    [anon_sym_DASH] = ACTIONS(1652),
    [anon_sym_STAR] = ACTIONS(1654),
    [anon_sym_SLASH] = ACTIONS(1654),
    [anon_sym_AMP] = ACTIONS(1386),
    [anon_sym_PIPE] = ACTIONS(1656),
    [anon_sym_CARET] = ACTIONS(1656),
    [anon_sym_PERCENT] = ACTIONS(1654),
    [anon_sym_LT_LT] = ACTIONS(1654),
    [anon_sym_GT_GT] = ACTIONS(1654),
    [anon_sym_GT_GT_GT] = ACTIONS(1654),
    [anon_sym_QMARK] = ACTIONS(1658),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RBRACE] = ACTIONS(361),
    [anon_sym_COMMA] = ACTIONS(361),
    [sym_comment] = ACTIONS(44),
  },
  [782] = {
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(365),
    [anon_sym_EQ_EQ] = ACTIONS(363),
    [anon_sym_GT_EQ] = ACTIONS(363),
    [anon_sym_LT_EQ] = ACTIONS(363),
    [anon_sym_BANG_EQ] = ACTIONS(363),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(1654),
    [anon_sym_SLASH] = ACTIONS(1654),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(1654),
    [anon_sym_LT_LT] = ACTIONS(1654),
    [anon_sym_GT_GT] = ACTIONS(1654),
    [anon_sym_GT_GT_GT] = ACTIONS(1654),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RBRACE] = ACTIONS(363),
    [anon_sym_COMMA] = ACTIONS(363),
    [sym_comment] = ACTIONS(44),
  },
  [783] = {
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(1382),
    [anon_sym_LT] = ACTIONS(1382),
    [anon_sym_EQ_EQ] = ACTIONS(1384),
    [anon_sym_GT_EQ] = ACTIONS(1384),
    [anon_sym_LT_EQ] = ACTIONS(1384),
    [anon_sym_BANG_EQ] = ACTIONS(1384),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(1652),
    [anon_sym_DASH] = ACTIONS(1652),
    [anon_sym_STAR] = ACTIONS(1654),
    [anon_sym_SLASH] = ACTIONS(1654),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(1654),
    [anon_sym_LT_LT] = ACTIONS(1654),
    [anon_sym_GT_GT] = ACTIONS(1654),
    [anon_sym_GT_GT_GT] = ACTIONS(1654),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RBRACE] = ACTIONS(363),
    [anon_sym_COMMA] = ACTIONS(363),
    [sym_comment] = ACTIONS(44),
  },
  [784] = {
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(1382),
    [anon_sym_LT] = ACTIONS(1382),
    [anon_sym_EQ_EQ] = ACTIONS(1384),
    [anon_sym_GT_EQ] = ACTIONS(1384),
    [anon_sym_LT_EQ] = ACTIONS(1384),
    [anon_sym_BANG_EQ] = ACTIONS(1384),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(1652),
    [anon_sym_DASH] = ACTIONS(1652),
    [anon_sym_STAR] = ACTIONS(1654),
    [anon_sym_SLASH] = ACTIONS(1654),
    [anon_sym_AMP] = ACTIONS(1386),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(1654),
    [anon_sym_LT_LT] = ACTIONS(1654),
    [anon_sym_GT_GT] = ACTIONS(1654),
    [anon_sym_GT_GT_GT] = ACTIONS(1654),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RBRACE] = ACTIONS(363),
    [anon_sym_COMMA] = ACTIONS(363),
    [sym_comment] = ACTIONS(44),
  },
  [785] = {
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(1382),
    [anon_sym_LT] = ACTIONS(1382),
    [anon_sym_EQ_EQ] = ACTIONS(1384),
    [anon_sym_GT_EQ] = ACTIONS(1384),
    [anon_sym_LT_EQ] = ACTIONS(1384),
    [anon_sym_BANG_EQ] = ACTIONS(1384),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(1654),
    [anon_sym_SLASH] = ACTIONS(1654),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(1654),
    [anon_sym_LT_LT] = ACTIONS(1654),
    [anon_sym_GT_GT] = ACTIONS(1654),
    [anon_sym_GT_GT_GT] = ACTIONS(1654),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RBRACE] = ACTIONS(363),
    [anon_sym_COMMA] = ACTIONS(363),
    [sym_comment] = ACTIONS(44),
  },
  [786] = {
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_PLUS_EQ] = ACTIONS(369),
    [anon_sym_DASH_EQ] = ACTIONS(369),
    [anon_sym_STAR_EQ] = ACTIONS(369),
    [anon_sym_SLASH_EQ] = ACTIONS(369),
    [anon_sym_AMP_EQ] = ACTIONS(369),
    [anon_sym_PIPE_EQ] = ACTIONS(369),
    [anon_sym_CARET_EQ] = ACTIONS(369),
    [anon_sym_PERCENT_EQ] = ACTIONS(369),
    [anon_sym_LT_LT_EQ] = ACTIONS(369),
    [anon_sym_GT_GT_EQ] = ACTIONS(369),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(373),
    [anon_sym_GT_EQ] = ACTIONS(373),
    [anon_sym_LT_EQ] = ACTIONS(373),
    [anon_sym_BANG_EQ] = ACTIONS(373),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_CARET] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(381),
    [anon_sym_GT_GT] = ACTIONS(381),
    [anon_sym_GT_GT_GT] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(1660),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [787] = {
    [sym__semicolon] = ACTIONS(1662),
    [anon_sym_RPAREN] = ACTIONS(1662),
    [anon_sym_RBRACE] = ACTIONS(1662),
    [anon_sym_COMMA] = ACTIONS(1662),
    [sym_comment] = ACTIONS(44),
  },
  [788] = {
    [anon_sym_RBRACE] = ACTIONS(1664),
    [anon_sym_COMMA] = ACTIONS(1664),
    [sym_comment] = ACTIONS(44),
  },
  [789] = {
    [sym_unary_expression] = STATE(311),
    [sym_conditional_expression] = STATE(790),
    [sym_conditional_or_expression] = STATE(428),
    [sym_conditional_and_expression] = STATE(429),
    [sym_inclusive_or_expression] = STATE(430),
    [sym_exclusive_or_expression] = STATE(431),
    [sym_and_expression] = STATE(317),
    [sym_relational_expression] = STATE(432),
    [sym_equality_expression] = STATE(433),
    [sym_shift_expression] = STATE(434),
    [sym_additive_expression] = STATE(435),
    [sym_multiplicative_expression] = STATE(436),
    [anon_sym_BANG] = ACTIONS(897),
    [anon_sym_TILDE] = ACTIONS(897),
    [sym_comment] = ACTIONS(44),
  },
  [790] = {
    [sym__semicolon] = ACTIONS(1666),
    [anon_sym_RPAREN] = ACTIONS(1666),
    [anon_sym_RBRACE] = ACTIONS(1666),
    [anon_sym_COMMA] = ACTIONS(1666),
    [sym_comment] = ACTIONS(44),
  },
  [791] = {
    [sym__semicolon] = ACTIONS(1668),
    [anon_sym_COMMA] = ACTIONS(1668),
    [anon_sym_DOT] = ACTIONS(675),
    [sym_comment] = ACTIONS(44),
  },
  [792] = {
    [sym__expression] = STATE(831),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1017),
    [anon_sym_TILDE] = ACTIONS(1017),
    [anon_sym_PLUS_PLUS] = ACTIONS(1019),
    [anon_sym_DASH_DASH] = ACTIONS(1019),
    [sym_comment] = ACTIONS(44),
  },
  [793] = {
    [sym__expression] = STATE(832),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1017),
    [anon_sym_TILDE] = ACTIONS(1017),
    [anon_sym_PLUS_PLUS] = ACTIONS(1019),
    [anon_sym_DASH_DASH] = ACTIONS(1019),
    [sym_comment] = ACTIONS(44),
  },
  [794] = {
    [sym__statement] = STATE(833),
    [sym__literal] = STATE(19),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(20),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [sym__annotation] = STATE(23),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym__declaration] = STATE(25),
    [sym_module_declaration] = STATE(26),
    [sym_package_declaration] = STATE(26),
    [sym_import_statement] = STATE(26),
    [sym_single_type_import_declaration] = STATE(27),
    [sym_type_import_on_declaraction] = STATE(27),
    [sym_single_static_import_declaration] = STATE(27),
    [sym_static_import_on_demand_declaration] = STATE(27),
    [sym_class_declaration] = STATE(26),
    [sym_normal_class_declaration] = STATE(28),
    [sym_modifier] = STATE(29),
    [sym_interface_declaration] = STATE(26),
    [sym_annotation_type_declaration] = STATE(30),
    [sym_normal_interface_declaration] = STATE(30),
    [aux_sym_class_or_interface_type_repeat1] = STATE(32),
    [aux_sym_normal_class_declaration_repeat1] = STATE(33),
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
    [anon_sym_interface] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
  },
  [795] = {
    [anon_sym_if] = ACTIONS(1670),
    [anon_sym_RBRACE] = ACTIONS(1670),
    [anon_sym_AT] = ACTIONS(1670),
    [anon_sym_static] = ACTIONS(1670),
    [anon_sym_class] = ACTIONS(1670),
    [anon_sym_public] = ACTIONS(1670),
    [anon_sym_protected] = ACTIONS(1670),
    [anon_sym_private] = ACTIONS(1670),
    [anon_sym_abstract] = ACTIONS(1670),
    [anon_sym_final] = ACTIONS(1670),
    [anon_sym_strictfp] = ACTIONS(1670),
    [anon_sym_default] = ACTIONS(1670),
    [sym_comment] = ACTIONS(44),
  },
  [796] = {
    [anon_sym_if] = ACTIONS(1672),
    [anon_sym_RBRACE] = ACTIONS(1672),
    [anon_sym_elseif] = ACTIONS(1672),
    [anon_sym_AT] = ACTIONS(1672),
    [anon_sym_static] = ACTIONS(1672),
    [anon_sym_class] = ACTIONS(1672),
    [anon_sym_public] = ACTIONS(1672),
    [anon_sym_protected] = ACTIONS(1672),
    [anon_sym_private] = ACTIONS(1672),
    [anon_sym_abstract] = ACTIONS(1672),
    [anon_sym_final] = ACTIONS(1672),
    [anon_sym_strictfp] = ACTIONS(1672),
    [anon_sym_default] = ACTIONS(1672),
    [sym_comment] = ACTIONS(44),
  },
  [797] = {
    [anon_sym_boolean] = ACTIONS(1438),
    [anon_sym_byte] = ACTIONS(1438),
    [anon_sym_short] = ACTIONS(1438),
    [anon_sym_int] = ACTIONS(1438),
    [anon_sym_long] = ACTIONS(1438),
    [anon_sym_char] = ACTIONS(1438),
    [anon_sym_float] = ACTIONS(1438),
    [anon_sym_double] = ACTIONS(1438),
    [anon_sym_AT] = ACTIONS(633),
    [sym_identifier] = ACTIONS(1470),
    [sym_comment] = ACTIONS(44),
  },
  [798] = {
    [anon_sym_boolean] = ACTIONS(1440),
    [anon_sym_byte] = ACTIONS(1440),
    [anon_sym_short] = ACTIONS(1440),
    [anon_sym_int] = ACTIONS(1440),
    [anon_sym_long] = ACTIONS(1440),
    [anon_sym_char] = ACTIONS(1440),
    [anon_sym_float] = ACTIONS(1440),
    [anon_sym_double] = ACTIONS(1440),
    [anon_sym_AT] = ACTIONS(635),
    [sym_identifier] = ACTIONS(1472),
    [sym_comment] = ACTIONS(44),
  },
  [799] = {
    [anon_sym_AT] = ACTIONS(411),
    [anon_sym_static] = ACTIONS(1211),
    [anon_sym_public] = ACTIONS(1211),
    [anon_sym_protected] = ACTIONS(1211),
    [anon_sym_private] = ACTIONS(1211),
    [anon_sym_abstract] = ACTIONS(1211),
    [anon_sym_final] = ACTIONS(1211),
    [anon_sym_strictfp] = ACTIONS(1211),
    [anon_sym_default] = ACTIONS(1211),
    [anon_sym_this] = ACTIONS(1211),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(411),
    [sym_identifier] = ACTIONS(1281),
    [sym_comment] = ACTIONS(44),
  },
  [800] = {
    [anon_sym_EQ] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(1674),
    [sym_comment] = ACTIONS(44),
  },
  [801] = {
    [anon_sym_RPAREN] = ACTIONS(1674),
    [sym_comment] = ACTIONS(44),
  },
  [802] = {
    [anon_sym_RPAREN] = ACTIONS(1676),
    [sym_comment] = ACTIONS(44),
  },
  [803] = {
    [anon_sym_LPAREN] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(425),
    [anon_sym_AT] = ACTIONS(423),
    [anon_sym_static] = ACTIONS(425),
    [anon_sym_public] = ACTIONS(425),
    [anon_sym_protected] = ACTIONS(425),
    [anon_sym_private] = ACTIONS(425),
    [anon_sym_abstract] = ACTIONS(425),
    [anon_sym_final] = ACTIONS(425),
    [anon_sym_strictfp] = ACTIONS(425),
    [anon_sym_default] = ACTIONS(425),
    [anon_sym_this] = ACTIONS(425),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(423),
    [sym_identifier] = ACTIONS(1205),
    [sym_comment] = ACTIONS(44),
  },
  [804] = {
    [anon_sym_RPAREN] = ACTIONS(1306),
    [anon_sym_COMMA] = ACTIONS(1678),
    [sym_comment] = ACTIONS(44),
  },
  [805] = {
    [anon_sym_RPAREN] = ACTIONS(1680),
    [sym_comment] = ACTIONS(44),
  },
  [806] = {
    [sym__literal] = STATE(838),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(839),
    [sym_element_value_pair] = STATE(115),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(275),
    [anon_sym_false] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(1682),
    [sym_identifier] = ACTIONS(1684),
    [sym_comment] = ACTIONS(44),
  },
  [807] = {
    [sym_identifier] = ACTIONS(1686),
    [sym_comment] = ACTIONS(44),
  },
  [808] = {
    [anon_sym_RPAREN] = ACTIONS(1688),
    [anon_sym_COMMA] = ACTIONS(1688),
    [sym_comment] = ACTIONS(44),
  },
  [809] = {
    [sym__literal] = STATE(843),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(844),
    [sym_element_value_pair] = STATE(115),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(275),
    [anon_sym_false] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(1690),
    [sym_identifier] = ACTIONS(1692),
    [sym_comment] = ACTIONS(44),
  },
  [810] = {
    [sym_identifier] = ACTIONS(1694),
    [sym_comment] = ACTIONS(44),
  },
  [811] = {
    [anon_sym_RPAREN] = ACTIONS(1696),
    [sym_comment] = ACTIONS(44),
  },
  [812] = {
    [anon_sym_DOT] = ACTIONS(1259),
    [anon_sym_AT] = ACTIONS(1259),
    [sym_identifier] = ACTIONS(1698),
    [sym_comment] = ACTIONS(44),
  },
  [813] = {
    [anon_sym_GT] = ACTIONS(1700),
    [anon_sym_COMMA] = ACTIONS(1263),
    [sym_comment] = ACTIONS(44),
  },
  [814] = {
    [anon_sym_DOT] = ACTIONS(1271),
    [anon_sym_AT] = ACTIONS(1271),
    [sym_identifier] = ACTIONS(1702),
    [sym_comment] = ACTIONS(44),
  },
  [815] = {
    [sym_type_arguments] = STATE(847),
    [anon_sym_LT] = ACTIONS(1322),
    [anon_sym_DOT] = ACTIONS(1271),
    [anon_sym_AT] = ACTIONS(1271),
    [sym_identifier] = ACTIONS(1702),
    [sym_comment] = ACTIONS(44),
  },
  [816] = {
    [sym__annotation] = STATE(229),
    [sym_normal_annotation] = STATE(133),
    [sym_marker_annotation] = STATE(133),
    [sym_single_element_annotation] = STATE(133),
    [anon_sym_AT] = ACTIONS(321),
    [sym_identifier] = ACTIONS(1704),
    [sym_comment] = ACTIONS(44),
  },
  [817] = {
    [anon_sym_DOT] = ACTIONS(1502),
    [anon_sym_AT] = ACTIONS(1275),
    [sym_identifier] = ACTIONS(1706),
    [sym_comment] = ACTIONS(44),
  },
  [818] = {
    [sym__semicolon] = ACTIONS(1352),
    [anon_sym_LT] = ACTIONS(1352),
    [anon_sym_RBRACE] = ACTIONS(1352),
    [anon_sym_AT] = ACTIONS(1352),
    [anon_sym_static] = ACTIONS(1354),
    [anon_sym_class] = ACTIONS(1354),
    [anon_sym_public] = ACTIONS(1354),
    [anon_sym_protected] = ACTIONS(1354),
    [anon_sym_private] = ACTIONS(1354),
    [anon_sym_abstract] = ACTIONS(1354),
    [anon_sym_final] = ACTIONS(1354),
    [anon_sym_strictfp] = ACTIONS(1354),
    [anon_sym_default] = ACTIONS(1354),
    [anon_sym_interface] = ACTIONS(1354),
    [sym_result] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(1356),
    [sym_comment] = ACTIONS(44),
  },
  [819] = {
    [sym__semicolon] = ACTIONS(1394),
    [anon_sym_AMP_AMP] = ACTIONS(1528),
    [anon_sym_PIPE_PIPE] = ACTIONS(1394),
    [anon_sym_QMARK] = ACTIONS(1394),
    [sym_comment] = ACTIONS(44),
  },
  [820] = {
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_PLUS_EQ] = ACTIONS(369),
    [anon_sym_DASH_EQ] = ACTIONS(369),
    [anon_sym_STAR_EQ] = ACTIONS(369),
    [anon_sym_SLASH_EQ] = ACTIONS(369),
    [anon_sym_AMP_EQ] = ACTIONS(369),
    [anon_sym_PIPE_EQ] = ACTIONS(369),
    [anon_sym_CARET_EQ] = ACTIONS(369),
    [anon_sym_PERCENT_EQ] = ACTIONS(369),
    [anon_sym_LT_LT_EQ] = ACTIONS(369),
    [anon_sym_GT_GT_EQ] = ACTIONS(369),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(373),
    [anon_sym_GT_EQ] = ACTIONS(373),
    [anon_sym_LT_EQ] = ACTIONS(373),
    [anon_sym_BANG_EQ] = ACTIONS(373),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_CARET] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(381),
    [anon_sym_GT_GT] = ACTIONS(381),
    [anon_sym_GT_GT_GT] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(1708),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(44),
  },
  [821] = {
    [sym__semicolon] = ACTIONS(1398),
    [anon_sym_AMP_AMP] = ACTIONS(1398),
    [anon_sym_PIPE_PIPE] = ACTIONS(1398),
    [anon_sym_PIPE] = ACTIONS(1530),
    [anon_sym_QMARK] = ACTIONS(1398),
    [sym_comment] = ACTIONS(44),
  },
  [822] = {
    [sym__semicolon] = ACTIONS(1400),
    [anon_sym_AMP_AMP] = ACTIONS(1400),
    [anon_sym_PIPE_PIPE] = ACTIONS(1400),
    [anon_sym_PIPE] = ACTIONS(1402),
    [anon_sym_CARET] = ACTIONS(1532),
    [anon_sym_QMARK] = ACTIONS(1400),
    [sym_comment] = ACTIONS(44),
  },
  [823] = {
    [sym__semicolon] = ACTIONS(1410),
    [anon_sym_LT] = ACTIONS(1408),
    [anon_sym_EQ_EQ] = ACTIONS(1410),
    [anon_sym_BANG_EQ] = ACTIONS(1410),
    [anon_sym_AMP_AMP] = ACTIONS(1410),
    [anon_sym_PIPE_PIPE] = ACTIONS(1410),
    [anon_sym_PIPE] = ACTIONS(1408),
    [anon_sym_CARET] = ACTIONS(1410),
    [anon_sym_LT_LT] = ACTIONS(1538),
    [anon_sym_GT_GT] = ACTIONS(1540),
    [anon_sym_GT_GT_GT] = ACTIONS(1538),
    [anon_sym_QMARK] = ACTIONS(1410),
    [sym_comment] = ACTIONS(44),
  },
  [824] = {
    [sym__semicolon] = ACTIONS(1414),
    [anon_sym_LT] = ACTIONS(1534),
    [anon_sym_EQ_EQ] = ACTIONS(1412),
    [anon_sym_BANG_EQ] = ACTIONS(1412),
    [anon_sym_AMP_AMP] = ACTIONS(1414),
    [anon_sym_PIPE_PIPE] = ACTIONS(1414),
    [anon_sym_PIPE] = ACTIONS(1416),
    [anon_sym_CARET] = ACTIONS(1414),
    [anon_sym_QMARK] = ACTIONS(1414),
    [sym_comment] = ACTIONS(44),
  },
  [825] = {
    [sym__semicolon] = ACTIONS(1420),
    [anon_sym_LT] = ACTIONS(1418),
    [anon_sym_EQ_EQ] = ACTIONS(1420),
    [anon_sym_BANG_EQ] = ACTIONS(1420),
    [anon_sym_AMP_AMP] = ACTIONS(1420),
    [anon_sym_PIPE_PIPE] = ACTIONS(1420),
    [anon_sym_PLUS] = ACTIONS(1542),
    [anon_sym_DASH] = ACTIONS(1542),
    [anon_sym_PIPE] = ACTIONS(1418),
    [anon_sym_CARET] = ACTIONS(1420),
    [anon_sym_LT_LT] = ACTIONS(1420),
    [anon_sym_GT_GT] = ACTIONS(1418),
    [anon_sym_GT_GT_GT] = ACTIONS(1420),
    [anon_sym_QMARK] = ACTIONS(1420),
    [sym_comment] = ACTIONS(44),
  },
  [826] = {
    [sym__semicolon] = ACTIONS(1424),
    [anon_sym_LT] = ACTIONS(1422),
    [anon_sym_EQ_EQ] = ACTIONS(1424),
    [anon_sym_BANG_EQ] = ACTIONS(1424),
    [anon_sym_AMP_AMP] = ACTIONS(1424),
    [anon_sym_PIPE_PIPE] = ACTIONS(1424),
    [anon_sym_PLUS] = ACTIONS(1424),
    [anon_sym_DASH] = ACTIONS(1424),
    [anon_sym_STAR] = ACTIONS(1544),
    [anon_sym_SLASH] = ACTIONS(1546),
    [anon_sym_PIPE] = ACTIONS(1422),
    [anon_sym_CARET] = ACTIONS(1424),
    [anon_sym_PERCENT] = ACTIONS(1544),
    [anon_sym_LT_LT] = ACTIONS(1424),
    [anon_sym_GT_GT] = ACTIONS(1422),
    [anon_sym_GT_GT_GT] = ACTIONS(1424),
    [anon_sym_QMARK] = ACTIONS(1424),
    [sym_comment] = ACTIONS(44),
  },
  [827] = {
    [anon_sym_RBRACE] = ACTIONS(1352),
    [anon_sym_AT] = ACTIONS(1352),
    [anon_sym_static] = ACTIONS(1354),
    [anon_sym_class] = ACTIONS(1354),
    [anon_sym_public] = ACTIONS(1354),
    [anon_sym_protected] = ACTIONS(1354),
    [anon_sym_private] = ACTIONS(1354),
    [anon_sym_abstract] = ACTIONS(1354),
    [anon_sym_final] = ACTIONS(1354),
    [anon_sym_strictfp] = ACTIONS(1354),
    [anon_sym_default] = ACTIONS(1354),
    [anon_sym_interface] = ACTIONS(1354),
    [sym_identifier] = ACTIONS(1356),
    [sym_comment] = ACTIONS(44),
  },
  [828] = {
    [anon_sym_RBRACE] = ACTIONS(1710),
    [anon_sym_AT] = ACTIONS(1710),
    [anon_sym_static] = ACTIONS(1712),
    [anon_sym_class] = ACTIONS(1712),
    [anon_sym_public] = ACTIONS(1712),
    [anon_sym_protected] = ACTIONS(1712),
    [anon_sym_private] = ACTIONS(1712),
    [anon_sym_abstract] = ACTIONS(1712),
    [anon_sym_final] = ACTIONS(1712),
    [anon_sym_strictfp] = ACTIONS(1712),
    [anon_sym_default] = ACTIONS(1712),
    [anon_sym_interface] = ACTIONS(1712),
    [sym_identifier] = ACTIONS(1714),
    [sym_comment] = ACTIONS(44),
  },
  [829] = {
    [anon_sym_EQ] = ACTIONS(845),
    [anon_sym_PLUS_EQ] = ACTIONS(843),
    [anon_sym_DASH_EQ] = ACTIONS(843),
    [anon_sym_STAR_EQ] = ACTIONS(843),
    [anon_sym_SLASH_EQ] = ACTIONS(843),
    [anon_sym_AMP_EQ] = ACTIONS(843),
    [anon_sym_PIPE_EQ] = ACTIONS(843),
    [anon_sym_CARET_EQ] = ACTIONS(843),
    [anon_sym_PERCENT_EQ] = ACTIONS(843),
    [anon_sym_LT_LT_EQ] = ACTIONS(843),
    [anon_sym_GT_GT_EQ] = ACTIONS(843),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(843),
    [anon_sym_GT] = ACTIONS(1157),
    [anon_sym_LT] = ACTIONS(1157),
    [anon_sym_EQ_EQ] = ACTIONS(1159),
    [anon_sym_GT_EQ] = ACTIONS(1159),
    [anon_sym_LT_EQ] = ACTIONS(1159),
    [anon_sym_BANG_EQ] = ACTIONS(1159),
    [anon_sym_AMP_AMP] = ACTIONS(1556),
    [anon_sym_PIPE_PIPE] = ACTIONS(1558),
    [anon_sym_PLUS] = ACTIONS(1560),
    [anon_sym_DASH] = ACTIONS(1560),
    [anon_sym_STAR] = ACTIONS(1562),
    [anon_sym_SLASH] = ACTIONS(1562),
    [anon_sym_AMP] = ACTIONS(1161),
    [anon_sym_PIPE] = ACTIONS(1564),
    [anon_sym_CARET] = ACTIONS(1564),
    [anon_sym_PERCENT] = ACTIONS(1562),
    [anon_sym_LT_LT] = ACTIONS(1562),
    [anon_sym_GT_GT] = ACTIONS(1562),
    [anon_sym_GT_GT_GT] = ACTIONS(1562),
    [anon_sym_QMARK] = ACTIONS(1566),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(843),
    [anon_sym_COMMA] = ACTIONS(843),
    [sym_comment] = ACTIONS(44),
  },
  [830] = {
    [sym__expression] = STATE(850),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [anon_sym_BANG] = ACTIONS(1163),
    [anon_sym_TILDE] = ACTIONS(1163),
    [anon_sym_PLUS_PLUS] = ACTIONS(1165),
    [anon_sym_DASH_DASH] = ACTIONS(1165),
    [sym_comment] = ACTIONS(44),
  },
  [831] = {
    [anon_sym_EQ] = ACTIONS(845),
    [anon_sym_PLUS_EQ] = ACTIONS(843),
    [anon_sym_DASH_EQ] = ACTIONS(843),
    [anon_sym_STAR_EQ] = ACTIONS(843),
    [anon_sym_SLASH_EQ] = ACTIONS(843),
    [anon_sym_AMP_EQ] = ACTIONS(843),
    [anon_sym_PIPE_EQ] = ACTIONS(843),
    [anon_sym_CARET_EQ] = ACTIONS(843),
    [anon_sym_PERCENT_EQ] = ACTIONS(843),
    [anon_sym_LT_LT_EQ] = ACTIONS(843),
    [anon_sym_GT_GT_EQ] = ACTIONS(843),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(843),
    [anon_sym_GT] = ACTIONS(1227),
    [anon_sym_LT] = ACTIONS(1227),
    [anon_sym_EQ_EQ] = ACTIONS(1229),
    [anon_sym_GT_EQ] = ACTIONS(1229),
    [anon_sym_LT_EQ] = ACTIONS(1229),
    [anon_sym_BANG_EQ] = ACTIONS(1229),
    [anon_sym_AMP_AMP] = ACTIONS(1231),
    [anon_sym_PIPE_PIPE] = ACTIONS(1233),
    [anon_sym_PLUS] = ACTIONS(1235),
    [anon_sym_DASH] = ACTIONS(1235),
    [anon_sym_STAR] = ACTIONS(1237),
    [anon_sym_SLASH] = ACTIONS(1237),
    [anon_sym_AMP] = ACTIONS(1239),
    [anon_sym_PIPE] = ACTIONS(1241),
    [anon_sym_CARET] = ACTIONS(1241),
    [anon_sym_PERCENT] = ACTIONS(1237),
    [anon_sym_LT_LT] = ACTIONS(1237),
    [anon_sym_GT_GT] = ACTIONS(1237),
    [anon_sym_GT_GT_GT] = ACTIONS(1237),
    [anon_sym_QMARK] = ACTIONS(1243),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(843),
    [sym_comment] = ACTIONS(44),
  },
  [832] = {
    [anon_sym_EQ] = ACTIONS(1223),
    [anon_sym_PLUS_EQ] = ACTIONS(1225),
    [anon_sym_DASH_EQ] = ACTIONS(1225),
    [anon_sym_STAR_EQ] = ACTIONS(1225),
    [anon_sym_SLASH_EQ] = ACTIONS(1225),
    [anon_sym_AMP_EQ] = ACTIONS(1225),
    [anon_sym_PIPE_EQ] = ACTIONS(1225),
    [anon_sym_CARET_EQ] = ACTIONS(1225),
    [anon_sym_PERCENT_EQ] = ACTIONS(1225),
    [anon_sym_LT_LT_EQ] = ACTIONS(1225),
    [anon_sym_GT_GT_EQ] = ACTIONS(1225),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1225),
    [anon_sym_GT] = ACTIONS(1227),
    [anon_sym_LT] = ACTIONS(1227),
    [anon_sym_EQ_EQ] = ACTIONS(1229),
    [anon_sym_GT_EQ] = ACTIONS(1229),
    [anon_sym_LT_EQ] = ACTIONS(1229),
    [anon_sym_BANG_EQ] = ACTIONS(1229),
    [anon_sym_AMP_AMP] = ACTIONS(1231),
    [anon_sym_PIPE_PIPE] = ACTIONS(1233),
    [anon_sym_PLUS] = ACTIONS(1235),
    [anon_sym_DASH] = ACTIONS(1235),
    [anon_sym_STAR] = ACTIONS(1237),
    [anon_sym_SLASH] = ACTIONS(1237),
    [anon_sym_AMP] = ACTIONS(1239),
    [anon_sym_PIPE] = ACTIONS(1241),
    [anon_sym_CARET] = ACTIONS(1241),
    [anon_sym_PERCENT] = ACTIONS(1237),
    [anon_sym_LT_LT] = ACTIONS(1237),
    [anon_sym_GT_GT] = ACTIONS(1237),
    [anon_sym_GT_GT_GT] = ACTIONS(1237),
    [anon_sym_QMARK] = ACTIONS(1243),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(1716),
    [sym_comment] = ACTIONS(44),
  },
  [833] = {
    [anon_sym_RBRACE] = ACTIONS(1718),
    [sym_comment] = ACTIONS(44),
  },
  [834] = {
    [anon_sym_AT] = ACTIONS(633),
    [anon_sym_static] = ACTIONS(1438),
    [anon_sym_public] = ACTIONS(1438),
    [anon_sym_protected] = ACTIONS(1438),
    [anon_sym_private] = ACTIONS(1438),
    [anon_sym_abstract] = ACTIONS(1438),
    [anon_sym_final] = ACTIONS(1438),
    [anon_sym_strictfp] = ACTIONS(1438),
    [anon_sym_default] = ACTIONS(1438),
    [anon_sym_this] = ACTIONS(1438),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(633),
    [sym_identifier] = ACTIONS(1470),
    [sym_comment] = ACTIONS(44),
  },
  [835] = {
    [anon_sym_AT] = ACTIONS(635),
    [anon_sym_static] = ACTIONS(1440),
    [anon_sym_public] = ACTIONS(1440),
    [anon_sym_protected] = ACTIONS(1440),
    [anon_sym_private] = ACTIONS(1440),
    [anon_sym_abstract] = ACTIONS(1440),
    [anon_sym_final] = ACTIONS(1440),
    [anon_sym_strictfp] = ACTIONS(1440),
    [anon_sym_default] = ACTIONS(1440),
    [anon_sym_this] = ACTIONS(1440),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(635),
    [sym_identifier] = ACTIONS(1472),
    [sym_comment] = ACTIONS(44),
  },
  [836] = {
    [anon_sym_AT] = ACTIONS(411),
    [anon_sym_this] = ACTIONS(1211),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(411),
    [sym_identifier] = ACTIONS(1281),
    [sym_comment] = ACTIONS(44),
  },
  [837] = {
    [anon_sym_EQ] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(1720),
    [sym_comment] = ACTIONS(44),
  },
  [838] = {
    [anon_sym_RPAREN] = ACTIONS(1720),
    [sym_comment] = ACTIONS(44),
  },
  [839] = {
    [anon_sym_RPAREN] = ACTIONS(1722),
    [sym_comment] = ACTIONS(44),
  },
  [840] = {
    [anon_sym_LPAREN] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(425),
    [anon_sym_AT] = ACTIONS(423),
    [anon_sym_this] = ACTIONS(425),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(423),
    [sym_identifier] = ACTIONS(1205),
    [sym_comment] = ACTIONS(44),
  },
  [841] = {
    [anon_sym_AT] = ACTIONS(411),
    [anon_sym_static] = ACTIONS(1211),
    [anon_sym_public] = ACTIONS(1211),
    [anon_sym_protected] = ACTIONS(1211),
    [anon_sym_private] = ACTIONS(1211),
    [anon_sym_abstract] = ACTIONS(1211),
    [anon_sym_final] = ACTIONS(1211),
    [anon_sym_strictfp] = ACTIONS(1211),
    [anon_sym_default] = ACTIONS(1211),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(411),
    [sym_identifier] = ACTIONS(1281),
    [sym_comment] = ACTIONS(44),
  },
  [842] = {
    [anon_sym_EQ] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(1724),
    [sym_comment] = ACTIONS(44),
  },
  [843] = {
    [anon_sym_RPAREN] = ACTIONS(1724),
    [sym_comment] = ACTIONS(44),
  },
  [844] = {
    [anon_sym_RPAREN] = ACTIONS(1726),
    [sym_comment] = ACTIONS(44),
  },
  [845] = {
    [anon_sym_LPAREN] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(425),
    [anon_sym_AT] = ACTIONS(423),
    [anon_sym_static] = ACTIONS(425),
    [anon_sym_public] = ACTIONS(425),
    [anon_sym_protected] = ACTIONS(425),
    [anon_sym_private] = ACTIONS(425),
    [anon_sym_abstract] = ACTIONS(425),
    [anon_sym_final] = ACTIONS(425),
    [anon_sym_strictfp] = ACTIONS(425),
    [anon_sym_default] = ACTIONS(425),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(423),
    [sym_identifier] = ACTIONS(1205),
    [sym_comment] = ACTIONS(44),
  },
  [846] = {
    [anon_sym_DOT] = ACTIONS(1464),
    [anon_sym_AT] = ACTIONS(1464),
    [sym_identifier] = ACTIONS(1728),
    [sym_comment] = ACTIONS(44),
  },
  [847] = {
    [anon_sym_DOT] = ACTIONS(1466),
    [anon_sym_AT] = ACTIONS(1466),
    [sym_identifier] = ACTIONS(1730),
    [sym_comment] = ACTIONS(44),
  },
  [848] = {
    [sym_type_arguments] = STATE(857),
    [anon_sym_LT] = ACTIONS(1322),
    [anon_sym_DOT] = ACTIONS(1466),
    [anon_sym_AT] = ACTIONS(1466),
    [sym_identifier] = ACTIONS(1730),
    [sym_comment] = ACTIONS(44),
  },
  [849] = {
    [sym_unary_expression] = STATE(311),
    [sym_conditional_expression] = STATE(790),
    [sym_conditional_or_expression] = STATE(672),
    [sym_conditional_and_expression] = STATE(673),
    [sym_inclusive_or_expression] = STATE(674),
    [sym_exclusive_or_expression] = STATE(675),
    [sym_and_expression] = STATE(317),
    [sym_relational_expression] = STATE(676),
    [sym_equality_expression] = STATE(677),
    [sym_shift_expression] = STATE(678),
    [sym_additive_expression] = STATE(679),
    [sym_multiplicative_expression] = STATE(680),
    [anon_sym_BANG] = ACTIONS(1374),
    [anon_sym_TILDE] = ACTIONS(1374),
    [sym_comment] = ACTIONS(44),
  },
  [850] = {
    [anon_sym_EQ] = ACTIONS(845),
    [anon_sym_PLUS_EQ] = ACTIONS(843),
    [anon_sym_DASH_EQ] = ACTIONS(843),
    [anon_sym_STAR_EQ] = ACTIONS(843),
    [anon_sym_SLASH_EQ] = ACTIONS(843),
    [anon_sym_AMP_EQ] = ACTIONS(843),
    [anon_sym_PIPE_EQ] = ACTIONS(843),
    [anon_sym_CARET_EQ] = ACTIONS(843),
    [anon_sym_PERCENT_EQ] = ACTIONS(843),
    [anon_sym_LT_LT_EQ] = ACTIONS(843),
    [anon_sym_GT_GT_EQ] = ACTIONS(843),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(843),
    [anon_sym_GT] = ACTIONS(1382),
    [anon_sym_LT] = ACTIONS(1382),
    [anon_sym_EQ_EQ] = ACTIONS(1384),
    [anon_sym_GT_EQ] = ACTIONS(1384),
    [anon_sym_LT_EQ] = ACTIONS(1384),
    [anon_sym_BANG_EQ] = ACTIONS(1384),
    [anon_sym_AMP_AMP] = ACTIONS(1648),
    [anon_sym_PIPE_PIPE] = ACTIONS(1650),
    [anon_sym_PLUS] = ACTIONS(1652),
    [anon_sym_DASH] = ACTIONS(1652),
    [anon_sym_STAR] = ACTIONS(1654),
    [anon_sym_SLASH] = ACTIONS(1654),
    [anon_sym_AMP] = ACTIONS(1386),
    [anon_sym_PIPE] = ACTIONS(1656),
    [anon_sym_CARET] = ACTIONS(1656),
    [anon_sym_PERCENT] = ACTIONS(1654),
    [anon_sym_LT_LT] = ACTIONS(1654),
    [anon_sym_GT_GT] = ACTIONS(1654),
    [anon_sym_GT_GT_GT] = ACTIONS(1654),
    [anon_sym_QMARK] = ACTIONS(1658),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RBRACE] = ACTIONS(843),
    [anon_sym_COMMA] = ACTIONS(843),
    [sym_comment] = ACTIONS(44),
  },
  [851] = {
    [sym__statement] = STATE(859),
    [sym__literal] = STATE(19),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(20),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [sym__annotation] = STATE(23),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym__declaration] = STATE(25),
    [sym_module_declaration] = STATE(26),
    [sym_package_declaration] = STATE(26),
    [sym_import_statement] = STATE(26),
    [sym_single_type_import_declaration] = STATE(27),
    [sym_type_import_on_declaraction] = STATE(27),
    [sym_single_static_import_declaration] = STATE(27),
    [sym_static_import_on_demand_declaration] = STATE(27),
    [sym_class_declaration] = STATE(26),
    [sym_normal_class_declaration] = STATE(28),
    [sym_modifier] = STATE(29),
    [sym_interface_declaration] = STATE(26),
    [sym_annotation_type_declaration] = STATE(30),
    [sym_normal_interface_declaration] = STATE(30),
    [aux_sym_class_or_interface_type_repeat1] = STATE(32),
    [aux_sym_normal_class_declaration_repeat1] = STATE(33),
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
    [anon_sym_LBRACE] = ACTIONS(1732),
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
    [anon_sym_interface] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
  },
  [852] = {
    [anon_sym_if] = ACTIONS(1734),
    [anon_sym_RBRACE] = ACTIONS(1734),
    [anon_sym_AT] = ACTIONS(1734),
    [anon_sym_static] = ACTIONS(1734),
    [anon_sym_class] = ACTIONS(1734),
    [anon_sym_public] = ACTIONS(1734),
    [anon_sym_protected] = ACTIONS(1734),
    [anon_sym_private] = ACTIONS(1734),
    [anon_sym_abstract] = ACTIONS(1734),
    [anon_sym_final] = ACTIONS(1734),
    [anon_sym_strictfp] = ACTIONS(1734),
    [anon_sym_default] = ACTIONS(1734),
    [sym_comment] = ACTIONS(44),
  },
  [853] = {
    [anon_sym_AT] = ACTIONS(633),
    [anon_sym_this] = ACTIONS(1438),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(633),
    [sym_identifier] = ACTIONS(1470),
    [sym_comment] = ACTIONS(44),
  },
  [854] = {
    [anon_sym_AT] = ACTIONS(635),
    [anon_sym_this] = ACTIONS(1440),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(635),
    [sym_identifier] = ACTIONS(1472),
    [sym_comment] = ACTIONS(44),
  },
  [855] = {
    [anon_sym_AT] = ACTIONS(633),
    [anon_sym_static] = ACTIONS(1438),
    [anon_sym_public] = ACTIONS(1438),
    [anon_sym_protected] = ACTIONS(1438),
    [anon_sym_private] = ACTIONS(1438),
    [anon_sym_abstract] = ACTIONS(1438),
    [anon_sym_final] = ACTIONS(1438),
    [anon_sym_strictfp] = ACTIONS(1438),
    [anon_sym_default] = ACTIONS(1438),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(633),
    [sym_identifier] = ACTIONS(1470),
    [sym_comment] = ACTIONS(44),
  },
  [856] = {
    [anon_sym_AT] = ACTIONS(635),
    [anon_sym_static] = ACTIONS(1440),
    [anon_sym_public] = ACTIONS(1440),
    [anon_sym_protected] = ACTIONS(1440),
    [anon_sym_private] = ACTIONS(1440),
    [anon_sym_abstract] = ACTIONS(1440),
    [anon_sym_final] = ACTIONS(1440),
    [anon_sym_strictfp] = ACTIONS(1440),
    [anon_sym_default] = ACTIONS(1440),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(635),
    [sym_identifier] = ACTIONS(1472),
    [sym_comment] = ACTIONS(44),
  },
  [857] = {
    [anon_sym_DOT] = ACTIONS(1600),
    [anon_sym_AT] = ACTIONS(1600),
    [sym_identifier] = ACTIONS(1736),
    [sym_comment] = ACTIONS(44),
  },
  [858] = {
    [sym__statement] = STATE(860),
    [sym__literal] = STATE(19),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(20),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_ternary_expression] = STATE(21),
    [sym_unary_expression] = STATE(22),
    [sym_update_expression] = STATE(21),
    [sym__annotation] = STATE(23),
    [sym_normal_annotation] = STATE(24),
    [sym_marker_annotation] = STATE(24),
    [sym_single_element_annotation] = STATE(24),
    [sym__declaration] = STATE(25),
    [sym_module_declaration] = STATE(26),
    [sym_package_declaration] = STATE(26),
    [sym_import_statement] = STATE(26),
    [sym_single_type_import_declaration] = STATE(27),
    [sym_type_import_on_declaraction] = STATE(27),
    [sym_single_static_import_declaration] = STATE(27),
    [sym_static_import_on_demand_declaration] = STATE(27),
    [sym_class_declaration] = STATE(26),
    [sym_normal_class_declaration] = STATE(28),
    [sym_modifier] = STATE(29),
    [sym_interface_declaration] = STATE(26),
    [sym_annotation_type_declaration] = STATE(30),
    [sym_normal_interface_declaration] = STATE(30),
    [aux_sym_class_or_interface_type_repeat1] = STATE(32),
    [aux_sym_normal_class_declaration_repeat1] = STATE(33),
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
    [anon_sym_interface] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
  },
  [859] = {
    [anon_sym_if] = ACTIONS(1738),
    [anon_sym_RBRACE] = ACTIONS(1738),
    [anon_sym_elseif] = ACTIONS(1738),
    [anon_sym_AT] = ACTIONS(1738),
    [anon_sym_static] = ACTIONS(1738),
    [anon_sym_class] = ACTIONS(1738),
    [anon_sym_public] = ACTIONS(1738),
    [anon_sym_protected] = ACTIONS(1738),
    [anon_sym_private] = ACTIONS(1738),
    [anon_sym_abstract] = ACTIONS(1738),
    [anon_sym_final] = ACTIONS(1738),
    [anon_sym_strictfp] = ACTIONS(1738),
    [anon_sym_default] = ACTIONS(1738),
    [sym_comment] = ACTIONS(44),
  },
  [860] = {
    [anon_sym_RBRACE] = ACTIONS(1740),
    [sym_comment] = ACTIONS(44),
  },
  [861] = {
    [anon_sym_if] = ACTIONS(1742),
    [anon_sym_RBRACE] = ACTIONS(1742),
    [anon_sym_elseif] = ACTIONS(1742),
    [anon_sym_AT] = ACTIONS(1742),
    [anon_sym_static] = ACTIONS(1742),
    [anon_sym_class] = ACTIONS(1742),
    [anon_sym_public] = ACTIONS(1742),
    [anon_sym_protected] = ACTIONS(1742),
    [anon_sym_private] = ACTIONS(1742),
    [anon_sym_abstract] = ACTIONS(1742),
    [anon_sym_final] = ACTIONS(1742),
    [anon_sym_strictfp] = ACTIONS(1742),
    [anon_sym_default] = ACTIONS(1742),
    [sym_comment] = ACTIONS(44),
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
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_literal, 1),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_modifier, 1, .fragile = true),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1, .fragile = true),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1, .fragile = true),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 1),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 1),
  [124] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true), REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__annotation, 1),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 1),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_statement, 1),
  [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 1),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 1),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 1),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 1),
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 1),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_normal_class_declaration_repeat1, 1),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 1),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 1),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 1),
  [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 1),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 2),
  [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 1),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unary_expression, 2),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unary_expression, 2),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_update_expression, 2),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_update_expression, 2),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_or_type_name, 1),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_marker_annotation, 2),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 1),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [239] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 2),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_normal_class_declaration_repeat1, 2),
  [267] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 2),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [271] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 2),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [281] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(112),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 2),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 3),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 3),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 3),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_type_import_declaration, 3),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_type_import_declaration, 3),
  [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_type_import_declaration, 3),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(143),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 3),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 3),
  [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 3),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [353] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(157),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 3),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 3),
  [359] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 3),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3, .fragile = true),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 3),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(188),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
  [403] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(190),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 4),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_declaration, 4),
  [409] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 4),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 1),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_or_type_name, 3),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 2),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 4),
  [437] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [441] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(209),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat1, 1),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 4),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 4),
  [451] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 4),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__annotation, 1),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 1),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_member_declaration, 1),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body, 2),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body, 2),
  [491] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body, 2),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 1),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body_declaration, 1),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 1),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_superclass, 2),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_type_list, 1),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_super_interfaces, 2),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 4),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 4),
  [519] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 4),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_member_declaration, 1),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_member_declaration, 1),
  [525] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_member_declaration, 1),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 2),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_body, 2),
  [531] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 2),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(253),
  [535] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(254),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(258),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_id, 1),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
  [547] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__annotation, 1),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [555] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_list, 1),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(274),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(275),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_extends_interfaces, 2),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 4),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 4),
  [583] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 4),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 2),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_body, 2),
  [593] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 2),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(293),
  [597] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(294),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_member_declaration, 1),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_member_declaration, 1),
  [609] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_member_declaration, 1),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(300),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(301),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(302),
  [625] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(303),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(308),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(323),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 2),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 5),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 5),
  [647] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 5),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 3),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_requires_modifier, 1),
  [655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_requires_modifier, 1),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 1),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_directive_repeat1, 1),
  [661] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat1, 1),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(327),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
  [667] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat1, 2),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_import_on_declaraction, 5),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_import_on_declaraction, 5),
  [689] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_import_on_declaraction, 5),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_marker_annotation, 2),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 2),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameters, 3),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 2),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 2),
  [713] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(346),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statement, 1),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statements, 1),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body, 3),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body, 3),
  [731] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body, 3),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 2),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(353),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(354),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(355),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
  [743] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(143),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 2),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_type_list, 2),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 5),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 5),
  [759] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 5),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(372),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(374),
  [767] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_marker_annotation, 2),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(380),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(384),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 2),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(387),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_id, 2),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(388),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims, 1),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(391),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 2),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constant_declaration, 2),
  [793] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 2),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_list, 2),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_body, 1),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_body, 1),
  [807] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_body, 1),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_method_declaration, 2),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_method_declaration, 2),
  [813] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_method_declaration, 2),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(394),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(395),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(396),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(397),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 3),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_body, 3),
  [827] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 3),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [833] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 5),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 5),
  [839] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 5),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(399),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 5),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 5),
  [851] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 5),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 5),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_declaration, 5),
  [857] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 5),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(403),
  [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(404),
  [863] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(405),
  [865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(406),
  [867] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
  [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
  [871] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(416),
  [873] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(417),
  [875] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(418),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(419),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(420),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 3),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_body, 3),
  [885] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 3),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [891] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(421),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(422),
  [897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(424),
  [899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(425),
  [901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(426),
  [903] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value, 1),
  [905] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 1),
  [907] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 1),
  [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair, 3),
  [911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(437),
  [913] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(438),
  [915] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 1),
  [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
  [919] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 1),
  [921] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 1),
  [923] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(440),
  [925] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 1),
  [927] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 1),
  [929] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(441),
  [931] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 1),
  [933] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 1),
  [935] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(442),
  [937] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 1),
  [939] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 1),
  [941] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 1),
  [943] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
  [945] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 1),
  [947] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 1),
  [949] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(444),
  [951] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(444),
  [953] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 1),
  [955] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 1),
  [957] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
  [959] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 1),
  [961] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 1),
  [963] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(446),
  [965] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(446),
  [967] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 2),
  [969] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 6),
  [971] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 6),
  [973] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 6),
  [975] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 3),
  [977] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(448),
  [979] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [981] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [983] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(449),
  [985] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
  [987] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(451),
  [989] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(454),
  [991] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [993] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [995] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [997] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_static_import_declaration, 6),
  [999] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_static_import_declaration, 6),
  [1001] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_static_import_declaration, 6),
  [1003] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(456),
  [1005] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(457),
  [1007] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(460),
  [1009] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_bound, 2),
  [1011] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(461),
  [1013] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
  [1015] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 3),
  [1017] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(464),
  [1019] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(465),
  [1021] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(467),
  [1023] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(468),
  [1025] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_local_variable_declaration, 2),
  [1027] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [1029] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 3),
  [1031] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [1033] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_block_statements_repeat1, 1),
  [1035] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statements, 2),
  [1037] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_local_variable_declaration_statement, 2),
  [1039] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 1),
  [1041] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integral_type, 1),
  [1043] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_type, 1),
  [1045] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(470),
  [1047] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(472),
  [1049] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(473),
  [1051] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_argument, 1),
  [1053] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reference_type, 1),
  [1055] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [1057] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(476),
  [1059] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(248),
  [1061] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2),
  [1063] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(479),
  [1065] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 3),
  [1067] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [1069] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 6),
  [1071] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 6),
  [1073] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 6),
  [1075] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(483),
  [1077] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(485),
  [1079] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(486),
  [1081] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(489),
  [1083] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(490),
  [1085] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(495),
  [1087] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(499),
  [1089] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(500),
  [1091] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(501),
  [1093] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(502),
  [1095] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(503),
  [1097] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(504),
  [1099] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(515),
  [1101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 3),
  [1103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 2),
  [1105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(520),
  [1107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(521),
  [1109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declarator_list_repeat1, 2),
  [1111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(525),
  [1113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 3),
  [1115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constant_declaration, 3),
  [1117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 3),
  [1119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_method_declaration, 3),
  [1121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_method_declaration, 3),
  [1123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_method_declaration, 3),
  [1125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(529),
  [1127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 6),
  [1129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 6),
  [1131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 6),
  [1133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(531),
  [1135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(533),
  [1137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(534),
  [1139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(537),
  [1141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(538),
  [1143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(543),
  [1145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(547),
  [1147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(548),
  [1149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(551),
  [1151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(554),
  [1153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(555),
  [1155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(555),
  [1157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(556),
  [1159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(556),
  [1161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(557),
  [1163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(562),
  [1165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(563),
  [1167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 2),
  [1169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(565),
  [1171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(566),
  [1173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(568),
  [1175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(569),
  [1177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(570),
  [1179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(571),
  [1181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(572),
  [1183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(573),
  [1185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(574),
  [1187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(575),
  [1189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(575),
  [1191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(576),
  [1193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(577),
  [1195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(577),
  [1197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 3),
  [1199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 3),
  [1201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 4),
  [1203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 2),
  [1205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [1207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(588),
  [1209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(591),
  [1211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_annotation, 4),
  [1213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(593),
  [1215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(594),
  [1217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_bound, 3),
  [1219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(596),
  [1221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
  [1223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(597),
  [1225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(597),
  [1227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(598),
  [1229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(598),
  [1231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(599),
  [1233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(600),
  [1235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(601),
  [1237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(602),
  [1239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(599),
  [1241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(600),
  [1243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(603),
  [1245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(604),
  [1247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(605),
  [1249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(606),
  [1251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(609),
  [1253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_block_statements_repeat1, 2),
  [1255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(610),
  [1257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(611),
  [1259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 3),
  [1261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(613),
  [1263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(614),
  [1265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reference_type, 2),
  [1267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 2),
  [1269] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [1271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3),
  [1273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(616),
  [1275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 4),
  [1277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_type_list_repeat1, 3),
  [1279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(617),
  [1281] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [1283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(619),
  [1285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(620),
  [1287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(621),
  [1289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(624),
  [1291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 3),
  [1293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(627),
  [1295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 1),
  [1297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(630),
  [1299] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true), REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [1302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter, 1),
  [1304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(631),
  [1306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 1),
  [1308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(632),
  [1310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter_list, 1),
  [1312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(634),
  [1314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(635),
  [1316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(636),
  [1318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(637),
  [1320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(640),
  [1322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(646),
  [1324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(647),
  [1326] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 1),
  [1328] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(650),
  [1330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_throws, 2),
  [1332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type_list, 1),
  [1334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(653),
  [1336] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(655),
  [1338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 3),
  [1340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(656),
  [1342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 4),
  [1344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declarator_list_repeat1, 3),
  [1346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [1348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 7),
  [1350] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [1352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 7),
  [1354] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 7),
  [1356] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 7),
  [1358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(661),
  [1360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(663),
  [1362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(664),
  [1364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(665),
  [1366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(668),
  [1368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 4),
  [1370] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 4),
  [1372] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 4),
  [1374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(670),
  [1376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(681),
  [1378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(693),
  [1380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(693),
  [1382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(694),
  [1384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(694),
  [1386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(695),
  [1388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 3),
  [1390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(700),
  [1392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(702),
  [1394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 3),
  [1396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(711),
  [1398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 3),
  [1400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 3),
  [1402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 3),
  [1404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 3),
  [1406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 3),
  [1408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [1410] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [1412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 3),
  [1414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 3),
  [1416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 3),
  [1418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 3),
  [1420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 3),
  [1422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 3),
  [1424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 3),
  [1426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 3),
  [1428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 3),
  [1430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 5),
  [1432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(712),
  [1434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 3),
  [1436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(714),
  [1438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_element_annotation, 5),
  [1440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_annotation, 5),
  [1442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [1444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_then_statement, 4, .fragile = true),
  [1446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(722),
  [1448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(723),
  [1450] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(724),
  [1452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(727),
  [1454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(728),
  [1456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(729),
  [1458] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(730),
  [1460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(733),
  [1462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [1464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 4),
  [1466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 4),
  [1468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(736),
  [1470] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [1472] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [1474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 4),
  [1476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(738),
  [1478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(739),
  [1480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 2),
  [1482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(740),
  [1484] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(745),
  [1486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(746),
  [1488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 2),
  [1490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(749),
  [1492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(750),
  [1494] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter, 2),
  [1496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(752),
  [1498] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(754),
  [1500] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 2),
  [1502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(757),
  [1504] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_variable, 1),
  [1506] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type, 2),
  [1508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(758),
  [1510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exception_type_list_repeat1, 1),
  [1512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type_list, 2),
  [1514] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(759),
  [1516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 4),
  [1518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 5),
  [1520] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(763),
  [1522] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_value, 2),
  [1524] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(766),
  [1526] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(767),
  [1528] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(768),
  [1530] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(769),
  [1532] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(770),
  [1534] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(771),
  [1536] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(772),
  [1538] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(773),
  [1540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(773),
  [1542] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(774),
  [1544] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(775),
  [1546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(775),
  [1548] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 5),
  [1550] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 5),
  [1552] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 5),
  [1554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(776),
  [1556] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(557),
  [1558] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(558),
  [1560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(559),
  [1562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(560),
  [1564] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(558),
  [1566] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(561),
  [1568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(780),
  [1570] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 4),
  [1572] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 2),
  [1574] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(787),
  [1576] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(789),
  [1578] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 6),
  [1580] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat3, 2),
  [1582] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_bound_repeat1, 3),
  [1584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(792),
  [1586] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_then_statement, 5),
  [1588] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(793),
  [1590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(794),
  [1592] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_then_statement_repeat1, 1),
  [1594] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(797),
  [1596] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(798),
  [1598] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_arguments_repeat1, 3),
  [1600] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 5),
  [1602] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(799),
  [1604] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(800),
  [1606] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(803),
  [1608] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 3),
  [1610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 5),
  [1612] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [1614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter_list, 3),
  [1616] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(806),
  [1618] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(807),
  [1620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 3),
  [1622] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(808),
  [1624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(809),
  [1626] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(810),
  [1628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(812),
  [1630] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2),
  [1632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(815),
  [1634] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 3),
  [1636] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_variable, 2),
  [1638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exception_type_list_repeat1, 2),
  [1640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 6),
  [1642] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 6),
  [1644] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 6),
  [1646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(828),
  [1648] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(695),
  [1650] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(696),
  [1652] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(697),
  [1654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(698),
  [1656] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(696),
  [1658] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(699),
  [1660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(830),
  [1662] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 5),
  [1664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 3),
  [1666] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 5),
  [1668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat3, 3),
  [1670] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 2),
  [1672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_then_statement_repeat1, 2),
  [1674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(834),
  [1676] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(835),
  [1678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_formal_parameters_repeat1, 3),
  [1680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter_list, 4),
  [1682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(836),
  [1684] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(837),
  [1686] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(840),
  [1688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 4),
  [1690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(841),
  [1692] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(842),
  [1694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(845),
  [1696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 4),
  [1698] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_arguments, 3),
  [1700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(846),
  [1702] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3),
  [1704] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(848),
  [1706] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 4),
  [1708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(849),
  [1710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 7),
  [1712] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 7),
  [1714] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 7),
  [1716] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(851),
  [1718] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(852),
  [1720] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(853),
  [1722] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(854),
  [1724] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(855),
  [1726] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(856),
  [1728] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_arguments, 4),
  [1730] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 4),
  [1732] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(858),
  [1734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 4),
  [1736] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 5),
  [1738] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_if_clause, 5),
  [1740] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(861),
  [1742] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_if_clause, 7),
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
