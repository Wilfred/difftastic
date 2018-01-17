#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 1111
#define SYMBOL_COUNT 274
#define ALIAS_COUNT 0
#define TOKEN_COUNT 111
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
  anon_sym_DASH_GT = 49,
  anon_sym_LPAREN = 50,
  anon_sym_RPAREN = 51,
  anon_sym_COMMA = 52,
  anon_sym_QMARK = 53,
  anon_sym_COLON = 54,
  anon_sym_BANG = 55,
  anon_sym_TILDE = 56,
  anon_sym_PLUS_PLUS = 57,
  anon_sym_DASH_DASH = 58,
  anon_sym_LBRACE = 59,
  anon_sym_RBRACE = 60,
  anon_sym_default = 61,
  anon_sym_if = 62,
  anon_sym_else = 63,
  anon_sym_DOT = 64,
  anon_sym_LBRACK = 65,
  anon_sym_RBRACK = 66,
  anon_sym_boolean = 67,
  anon_sym_void = 68,
  anon_sym_byte = 69,
  anon_sym_short = 70,
  anon_sym_int = 71,
  anon_sym_long = 72,
  anon_sym_char = 73,
  anon_sym_float = 74,
  anon_sym_double = 75,
  anon_sym_AT = 76,
  anon_sym_open = 77,
  anon_sym_module = 78,
  anon_sym_requires = 79,
  anon_sym_exports = 80,
  anon_sym_to = 81,
  anon_sym_opens = 82,
  anon_sym_uses = 83,
  anon_sym_provides = 84,
  anon_sym_with = 85,
  anon_sym_transitive = 86,
  anon_sym_static = 87,
  anon_sym_package = 88,
  anon_sym_import = 89,
  anon_sym_class = 90,
  anon_sym_public = 91,
  anon_sym_protected = 92,
  anon_sym_private = 93,
  anon_sym_abstract = 94,
  anon_sym_final = 95,
  anon_sym_strictfp = 96,
  anon_sym_synchronized = 97,
  anon_sym_native = 98,
  anon_sym_extends = 99,
  anon_sym_implements = 100,
  anon_sym_this = 101,
  anon_sym_super = 102,
  anon_sym_new = 103,
  anon_sym_LT_GT = 104,
  anon_sym_COLON_COLON = 105,
  anon_sym_interface = 106,
  anon_sym_DOT_DOT_DOT = 107,
  anon_sym_throws = 108,
  sym_identifier = 109,
  sym_comment = 110,
  sym_program = 111,
  sym__statement = 112,
  sym__literal = 113,
  sym_integer_literal = 114,
  sym_floating_point_literal = 115,
  sym_boolean_literal = 116,
  sym_character_literal = 117,
  sym__expression = 118,
  sym_binary_expression = 119,
  sym_lambda_expression = 120,
  sym__lambda_parameters = 121,
  sym_inferred_formal_parameter_list = 122,
  sym_lambda_body = 123,
  sym_ternary_expression = 124,
  sym_unary_expression = 125,
  sym_update_expression = 126,
  sym_statement = 127,
  sym_statement_no_short_if = 128,
  sym_if_then_statement = 129,
  sym_if_then_else_statement = 130,
  sym_if_then_else_statement_no_short_if = 131,
  sym_type_arguments = 132,
  sym_type_argument = 133,
  sym_reference_type = 134,
  sym_class_or_interface_type = 135,
  sym_type_variable = 136,
  sym_dims = 137,
  sym_primitive_type = 138,
  sym_integral_type = 139,
  sym_floating_point_type = 140,
  sym__annotation = 141,
  sym_normal_annotation = 142,
  sym_marker_annotation = 143,
  sym_single_element_annotation = 144,
  sym_element_value_pair_list = 145,
  sym_element_value_pair = 146,
  sym_element_value = 147,
  sym_element_value_array_initializer = 148,
  sym_conditional_expression = 149,
  sym_conditional_or_expression = 150,
  sym_conditional_and_expression = 151,
  sym_inclusive_or_expression = 152,
  sym_exclusive_or_expression = 153,
  sym_and_expression = 154,
  sym_relational_expression = 155,
  sym_equality_expression = 156,
  sym_shift_expression = 157,
  sym_additive_expression = 158,
  sym_multiplicative_expression = 159,
  sym__declaration = 160,
  sym_module_declaration = 161,
  sym_module_identifier = 162,
  sym_module_directive = 163,
  sym_requires_modifier = 164,
  sym_module_name = 165,
  sym_package_declaration = 166,
  sym_package_or_type_name = 167,
  sym_import_statement = 168,
  sym_single_type_import_declaration = 169,
  sym_type_import_on_declaraction = 170,
  sym_single_static_import_declaration = 171,
  sym_static_import_on_demand_declaration = 172,
  sym_class_declaration = 173,
  sym_normal_class_declaration = 174,
  sym_modifier = 175,
  sym_type_parameters = 176,
  sym_type_parameter_list = 177,
  sym_type_parameter = 178,
  sym_type_bound = 179,
  sym_superclass = 180,
  sym_super_interfaces = 181,
  sym_interface_type_list = 182,
  sym_class_body = 183,
  sym_class_body_declaration = 184,
  sym_constructor_declaration = 185,
  sym_constructor_declarator = 186,
  sym_constructor_body = 187,
  sym_explicit_constructor_invocation = 188,
  sym_ambiguous_name = 189,
  sym_class_member_declaration = 190,
  sym_primary = 191,
  sym_array_creation_expression = 192,
  sym_dims_exprs = 193,
  sym_dims_expr = 194,
  sym_primary_no_new_array = 195,
  sym_class_literal = 196,
  sym_class_instance_creation_expression = 197,
  sym_unqualified_class_instance_creation_expression = 198,
  sym_class_or_interface_type_to_instantiate = 199,
  sym_type_arguments_or_diamond = 200,
  sym_field_access = 201,
  sym_array_access = 202,
  sym_method_invocation = 203,
  sym_argument_list = 204,
  sym_method_reference = 205,
  sym_array_type = 206,
  sym_interface_declaration = 207,
  sym_annotation_type_declaration = 208,
  sym_annotation_type_body = 209,
  sym_annotation_type_member_declaration = 210,
  sym_annotation_type_element_declaration = 211,
  sym_default_value = 212,
  sym_normal_interface_declaration = 213,
  sym_extends_interfaces = 214,
  sym_interface_body = 215,
  sym_interface_member_declaration = 216,
  sym_constant_declaration = 217,
  sym_variable_declarator_list = 218,
  sym_variable_declarator = 219,
  sym_variable_declarator_id = 220,
  sym_variable_initializer = 221,
  sym_array_initializer = 222,
  sym_unann_type = 223,
  sym_unann_primitive_type = 224,
  sym_unann_class_or_interface_type = 225,
  sym_unann_array_type = 226,
  sym_method_header = 227,
  sym_method_declarator = 228,
  sym__formal_parameter_list = 229,
  sym_formal_parameter = 230,
  sym_receiver_parameter = 231,
  sym_last_formal_parameter = 232,
  sym_throws = 233,
  sym_exception_type_list = 234,
  sym_exception_type = 235,
  sym_method_body = 236,
  sym_block = 237,
  sym_block_statements = 238,
  sym_block_statement = 239,
  sym_local_variable_declaration_statement = 240,
  sym_local_variable_declaration = 241,
  sym_method_declaration = 242,
  sym_method_name = 243,
  aux_sym_program_repeat1 = 244,
  aux_sym_character_literal_repeat1 = 245,
  aux_sym_inferred_formal_parameter_list_repeat1 = 246,
  aux_sym_type_arguments_repeat1 = 247,
  aux_sym_class_or_interface_type_repeat1 = 248,
  aux_sym_class_or_interface_type_repeat2 = 249,
  aux_sym_dims_repeat1 = 250,
  aux_sym_element_value_pair_list_repeat1 = 251,
  aux_sym_element_value_array_initializer_repeat1 = 252,
  aux_sym_module_declaration_repeat1 = 253,
  aux_sym_module_identifier_repeat1 = 254,
  aux_sym_module_directive_repeat1 = 255,
  aux_sym_module_directive_repeat2 = 256,
  aux_sym_module_directive_repeat3 = 257,
  aux_sym_normal_class_declaration_repeat1 = 258,
  aux_sym_type_parameter_list_repeat1 = 259,
  aux_sym_type_bound_repeat1 = 260,
  aux_sym_interface_type_list_repeat1 = 261,
  aux_sym_class_body_repeat1 = 262,
  aux_sym_dims_exprs_repeat1 = 263,
  aux_sym_class_literal_repeat1 = 264,
  aux_sym_class_or_interface_type_to_instantiate_repeat1 = 265,
  aux_sym_argument_list_repeat1 = 266,
  aux_sym_annotation_type_body_repeat1 = 267,
  aux_sym_interface_body_repeat1 = 268,
  aux_sym_variable_declarator_list_repeat1 = 269,
  aux_sym_array_initializer_repeat1 = 270,
  aux_sym_formal_parameters_repeat1 = 271,
  aux_sym_exception_type_list_repeat1 = 272,
  aux_sym_block_statements_repeat1 = 273,
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
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_QMARK] = "?",
  [anon_sym_COLON] = ":",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_default] = "default",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_boolean] = "boolean",
  [anon_sym_void] = "void",
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
  [anon_sym_synchronized] = "synchronized",
  [anon_sym_native] = "native",
  [anon_sym_extends] = "extends",
  [anon_sym_implements] = "implements",
  [anon_sym_this] = "this",
  [anon_sym_super] = "super",
  [anon_sym_new] = "new",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_interface] = "interface",
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
  [sym_binary_expression] = "binary_expression",
  [sym_lambda_expression] = "lambda_expression",
  [sym__lambda_parameters] = "_lambda_parameters",
  [sym_inferred_formal_parameter_list] = "inferred_formal_parameter_list",
  [sym_lambda_body] = "lambda_body",
  [sym_ternary_expression] = "ternary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_update_expression] = "update_expression",
  [sym_statement] = "statement",
  [sym_statement_no_short_if] = "statement_no_short_if",
  [sym_if_then_statement] = "if_then_statement",
  [sym_if_then_else_statement] = "if_then_else_statement",
  [sym_if_then_else_statement_no_short_if] = "if_then_else_statement_no_short_if",
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
  [sym_constructor_declaration] = "constructor_declaration",
  [sym_constructor_declarator] = "constructor_declarator",
  [sym_constructor_body] = "constructor_body",
  [sym_explicit_constructor_invocation] = "explicit_constructor_invocation",
  [sym_ambiguous_name] = "ambiguous_name",
  [sym_class_member_declaration] = "class_member_declaration",
  [sym_primary] = "primary",
  [sym_array_creation_expression] = "array_creation_expression",
  [sym_dims_exprs] = "dims_exprs",
  [sym_dims_expr] = "dims_expr",
  [sym_primary_no_new_array] = "primary_no_new_array",
  [sym_class_literal] = "class_literal",
  [sym_class_instance_creation_expression] = "class_instance_creation_expression",
  [sym_unqualified_class_instance_creation_expression] = "unqualified_class_instance_creation_expression",
  [sym_class_or_interface_type_to_instantiate] = "class_or_interface_type_to_instantiate",
  [sym_type_arguments_or_diamond] = "type_arguments_or_diamond",
  [sym_field_access] = "field_access",
  [sym_array_access] = "array_access",
  [sym_method_invocation] = "method_invocation",
  [sym_argument_list] = "argument_list",
  [sym_method_reference] = "method_reference",
  [sym_array_type] = "array_type",
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
  [sym_variable_initializer] = "variable_initializer",
  [sym_array_initializer] = "array_initializer",
  [sym_unann_type] = "unann_type",
  [sym_unann_primitive_type] = "unann_primitive_type",
  [sym_unann_class_or_interface_type] = "unann_class_or_interface_type",
  [sym_unann_array_type] = "unann_array_type",
  [sym_method_header] = "method_header",
  [sym_method_declarator] = "method_declarator",
  [sym__formal_parameter_list] = "_formal_parameter_list",
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
  [sym_method_declaration] = "method_declaration",
  [sym_method_name] = "method_name",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_character_literal_repeat1] = "character_literal_repeat1",
  [aux_sym_inferred_formal_parameter_list_repeat1] = "inferred_formal_parameter_list_repeat1",
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
  [aux_sym_dims_exprs_repeat1] = "dims_exprs_repeat1",
  [aux_sym_class_literal_repeat1] = "class_literal_repeat1",
  [aux_sym_class_or_interface_type_to_instantiate_repeat1] = "class_or_interface_type_to_instantiate_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_annotation_type_body_repeat1] = "annotation_type_body_repeat1",
  [aux_sym_interface_body_repeat1] = "interface_body_repeat1",
  [aux_sym_variable_declarator_list_repeat1] = "variable_declarator_list_repeat1",
  [aux_sym_array_initializer_repeat1] = "array_initializer_repeat1",
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
  [anon_sym_DASH_GT] = {
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
  [anon_sym_COMMA] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
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
  [anon_sym_void] = {
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
  [anon_sym_synchronized] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_native] = {
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
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_super] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
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
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__lambda_parameters] = {
    .visible = false,
    .named = true,
  },
  [sym_inferred_formal_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda_body] = {
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
  [sym_statement_no_short_if] = {
    .visible = true,
    .named = true,
  },
  [sym_if_then_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_then_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_then_else_statement_no_short_if] = {
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
  [sym_constructor_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_body] = {
    .visible = true,
    .named = true,
  },
  [sym_explicit_constructor_invocation] = {
    .visible = true,
    .named = true,
  },
  [sym_ambiguous_name] = {
    .visible = true,
    .named = true,
  },
  [sym_class_member_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_array_creation_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dims_exprs] = {
    .visible = true,
    .named = true,
  },
  [sym_dims_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_no_new_array] = {
    .visible = true,
    .named = true,
  },
  [sym_class_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_class_instance_creation_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unqualified_class_instance_creation_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_class_or_interface_type_to_instantiate] = {
    .visible = true,
    .named = true,
  },
  [sym_type_arguments_or_diamond] = {
    .visible = true,
    .named = true,
  },
  [sym_field_access] = {
    .visible = true,
    .named = true,
  },
  [sym_array_access] = {
    .visible = true,
    .named = true,
  },
  [sym_method_invocation] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_method_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
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
  [sym_variable_initializer] = {
    .visible = true,
    .named = true,
  },
  [sym_array_initializer] = {
    .visible = true,
    .named = true,
  },
  [sym_unann_type] = {
    .visible = true,
    .named = true,
  },
  [sym_unann_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_unann_class_or_interface_type] = {
    .visible = true,
    .named = true,
  },
  [sym_unann_array_type] = {
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
  [sym__formal_parameter_list] = {
    .visible = false,
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
  [sym_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_method_name] = {
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
  [aux_sym_inferred_formal_parameter_list_repeat1] = {
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
  [aux_sym_dims_exprs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_or_interface_type_to_instantiate_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
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
  [aux_sym_array_initializer_repeat1] = {
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
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(26);
      if (lookahead == '0')
        ADVANCE(32);
      if (lookahead == ':')
        ADVANCE(58);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == '<')
        ADVANCE(61);
      if (lookahead == '=')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(68);
      if (lookahead == '?')
        ADVANCE(74);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(76);
      if (lookahead == '\\')
        ADVANCE(77);
      if (lookahead == ']')
        ADVANCE(78);
      if (lookahead == '^')
        ADVANCE(79);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'b')
        ADVANCE(89);
      if (lookahead == 'c')
        ADVANCE(99);
      if (lookahead == 'd')
        ADVANCE(107);
      if (lookahead == 'f')
        ADVANCE(119);
      if (lookahead == 'i')
        ADVANCE(132);
      if (lookahead == 'l')
        ADVANCE(147);
      if (lookahead == 'm')
        ADVANCE(151);
      if (lookahead == 'n')
        ADVANCE(157);
      if (lookahead == 'o')
        ADVANCE(168);
      if (lookahead == 'p')
        ADVANCE(172);
      if (lookahead == 's')
        ADVANCE(197);
      if (lookahead == 't')
        ADVANCE(228);
      if (lookahead == 'v')
        ADVANCE(244);
      if (lookahead == '{')
        ADVANCE(248);
      if (lookahead == '|')
        ADVANCE(249);
      if (lookahead == '}')
        ADVANCE(252);
      if (lookahead == '~')
        ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
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
      if (lookahead == '>')
        ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '.')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(27);
      if (lookahead == '/')
        ADVANCE(30);
      if (lookahead == '=')
        ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == '*')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '*')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead != 0)
        ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(33);
      if (lookahead == 'X')
        ADVANCE(38);
      if (lookahead == 'o')
        ADVANCE(33);
      if (lookahead == 'x')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(34);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == '_')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(34);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == '_')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '_')
        ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '+')
        ADVANCE(42);
      if (lookahead == '-')
        ADVANCE(42);
      if (lookahead == '_')
        ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(44);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '_')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(41);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '_')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(50);
      if (lookahead == '_')
        ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(50);
      if (lookahead == '_')
        ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+')
        ADVANCE(42);
      if (lookahead == '-')
        ADVANCE(42);
      if (lookahead == '.')
        ADVANCE(50);
      if (lookahead == '_')
        ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(50);
      if (lookahead == '_')
        ADVANCE(55);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(53);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == '_')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(52);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+')
        ADVANCE(42);
      if (lookahead == '-')
        ADVANCE(42);
      if (lookahead == '.')
        ADVANCE(50);
      if (lookahead == '_')
        ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(50);
      if (lookahead == '_')
        ADVANCE(55);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(56);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(57);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(62);
      if (lookahead == '=')
        ADVANCE(64);
      if (lookahead == '>')
        ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(69);
      if (lookahead == '>')
        ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=')
        ADVANCE(71);
      if (lookahead == '>')
        ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      if (lookahead == '=')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SLASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(90);
      if (lookahead == 'y')
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(100);
      if (lookahead == 'l')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(108);
      if (lookahead == 'o')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(120);
      if (lookahead == 'i')
        ADVANCE(124);
      if (lookahead == 'l')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(133);
      if (lookahead == 'm')
        ADVANCE(134);
      if (lookahead == 'n')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(163);
      if (lookahead == 'u')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_null_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_open);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(173);
      if (lookahead == 'r')
        ADVANCE(179);
      if (lookahead == 'u')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_package);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(180);
      if (lookahead == 'o')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(198);
      if (lookahead == 't')
        ADVANCE(202);
      if (lookahead == 'u')
        ADVANCE(213);
      if (lookahead == 'y')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == 'r')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_strictfp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_super);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(37);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(229);
      if (lookahead == 'o')
        ADVANCE(232);
      if (lookahead == 'r')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_to);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(234);
      if (lookahead == 'u')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_transitive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(250);
      if (lookahead == '|')
        ADVANCE(251);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(255);
      if (lookahead == '\"')
        ADVANCE(256);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == '0')
        ADVANCE(270);
      if (lookahead == '<')
        ADVANCE(282);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'b')
        ADVANCE(89);
      if (lookahead == 'c')
        ADVANCE(99);
      if (lookahead == 'd')
        ADVANCE(107);
      if (lookahead == 'f')
        ADVANCE(119);
      if (lookahead == 'i')
        ADVANCE(283);
      if (lookahead == 'l')
        ADVANCE(147);
      if (lookahead == 'm')
        ADVANCE(151);
      if (lookahead == 'n')
        ADVANCE(284);
      if (lookahead == 'o')
        ADVANCE(168);
      if (lookahead == 'p')
        ADVANCE(172);
      if (lookahead == 's')
        ADVANCE(285);
      if (lookahead == 't')
        ADVANCE(286);
      if (lookahead == '{')
        ADVANCE(248);
      if (lookahead == '}')
        ADVANCE(252);
      if (lookahead == '~')
        ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(254);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 256:
      if (lookahead == '\"')
        ADVANCE(257);
      if (lookahead == '\\')
        ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 258:
      if (lookahead == '\n')
        ADVANCE(256);
      if (lookahead != 0)
        ADVANCE(256);
      END_STATE();
    case 259:
      if (lookahead == '+')
        ADVANCE(16);
      END_STATE();
    case 260:
      if (lookahead == '-')
        ADVANCE(20);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(264);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(262);
      END_STATE();
    case 263:
      if (lookahead == '_')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(262);
      END_STATE();
    case 264:
      if (lookahead == '+')
        ADVANCE(265);
      if (lookahead == '-')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      END_STATE();
    case 267:
      if (lookahead == '_')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(266);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 269:
      if (lookahead == '*')
        ADVANCE(27);
      if (lookahead == '/')
        ADVANCE(30);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(271);
      if (lookahead == 'B')
        ADVANCE(272);
      if (lookahead == 'O')
        ADVANCE(33);
      if (lookahead == 'X')
        ADVANCE(38);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'b')
        ADVANCE(272);
      if (lookahead == 'o')
        ADVANCE(33);
      if (lookahead == 'x')
        ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(278);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(264);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(262);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(273);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(274);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(273);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 274:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(274);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(275);
      END_STATE();
    case 276:
      if (lookahead == '_')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(271);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(264);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+')
        ADVANCE(265);
      if (lookahead == '-')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(271);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(278);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(134);
      if (lookahead == 'n')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(158);
      if (lookahead == 'u')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(198);
      if (lookahead == 't')
        ADVANCE(202);
      if (lookahead == 'y')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 288:
      if (lookahead == '!')
        ADVANCE(289);
      if (lookahead == '%')
        ADVANCE(290);
      if (lookahead == '&')
        ADVANCE(291);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(292);
      if (lookahead == '+')
        ADVANCE(293);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(294);
      if (lookahead == '.')
        ADVANCE(295);
      if (lookahead == '/')
        ADVANCE(296);
      if (lookahead == ':')
        ADVANCE(58);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == '<')
        ADVANCE(297);
      if (lookahead == '=')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(299);
      if (lookahead == '?')
        ADVANCE(74);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(76);
      if (lookahead == ']')
        ADVANCE(78);
      if (lookahead == '^')
        ADVANCE(302);
      if (lookahead == 'a')
        ADVANCE(303);
      if (lookahead == 'c')
        ADVANCE(311);
      if (lookahead == 'd')
        ADVANCE(316);
      if (lookahead == 'e')
        ADVANCE(323);
      if (lookahead == 'f')
        ADVANCE(338);
      if (lookahead == 'i')
        ADVANCE(343);
      if (lookahead == 'm')
        ADVANCE(354);
      if (lookahead == 'n')
        ADVANCE(360);
      if (lookahead == 'o')
        ADVANCE(368);
      if (lookahead == 'p')
        ADVANCE(373);
      if (lookahead == 'r')
        ADVANCE(403);
      if (lookahead == 's')
        ADVANCE(411);
      if (lookahead == 't')
        ADVANCE(438);
      if (lookahead == 'u')
        ADVANCE(446);
      if (lookahead == 'w')
        ADVANCE(450);
      if (lookahead == '{')
        ADVANCE(248);
      if (lookahead == '|')
        ADVANCE(454);
      if (lookahead == '}')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(288);
      END_STATE();
    case 289:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(8);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(16);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(22);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(27);
      if (lookahead == '/')
        ADVANCE(30);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(298);
      if (lookahead == '=')
        ADVANCE(64);
      if (lookahead == '>')
        ADVANCE(65);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(69);
      if (lookahead == '>')
        ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>')
        ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 303:
      if (lookahead == 'b')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 's')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 't')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 'r')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'a')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 'c')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == 't')
        ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 311:
      if (lookahead == 'l')
        ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == 'a')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 's')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 's')
        ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 316:
      if (lookahead == 'e')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == 'f')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == 'a')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'u')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 'l')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == 't')
        ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 323:
      if (lookahead == 'l')
        ADVANCE(324);
      if (lookahead == 'x')
        ADVANCE(327);
      END_STATE();
    case 324:
      if (lookahead == 's')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 'e')
        ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 327:
      if (lookahead == 'p')
        ADVANCE(328);
      if (lookahead == 't')
        ADVANCE(333);
      END_STATE();
    case 328:
      if (lookahead == 'o')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == 'r')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 't')
        ADVANCE(331);
      END_STATE();
    case 331:
      if (lookahead == 's')
        ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_exports);
      END_STATE();
    case 333:
      if (lookahead == 'e')
        ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == 'n')
        ADVANCE(335);
      END_STATE();
    case 335:
      if (lookahead == 'd')
        ADVANCE(336);
      END_STATE();
    case 336:
      if (lookahead == 's')
        ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 338:
      if (lookahead == 'i')
        ADVANCE(339);
      END_STATE();
    case 339:
      if (lookahead == 'n')
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
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 343:
      if (lookahead == 'f')
        ADVANCE(344);
      if (lookahead == 'm')
        ADVANCE(345);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 345:
      if (lookahead == 'p')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'l')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'e')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == 'm')
        ADVANCE(349);
      END_STATE();
    case 349:
      if (lookahead == 'e')
        ADVANCE(350);
      END_STATE();
    case 350:
      if (lookahead == 'n')
        ADVANCE(351);
      END_STATE();
    case 351:
      if (lookahead == 't')
        ADVANCE(352);
      END_STATE();
    case 352:
      if (lookahead == 's')
        ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 354:
      if (lookahead == 'o')
        ADVANCE(355);
      END_STATE();
    case 355:
      if (lookahead == 'd')
        ADVANCE(356);
      END_STATE();
    case 356:
      if (lookahead == 'u')
        ADVANCE(357);
      END_STATE();
    case 357:
      if (lookahead == 'l')
        ADVANCE(358);
      END_STATE();
    case 358:
      if (lookahead == 'e')
        ADVANCE(359);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 360:
      if (lookahead == 'a')
        ADVANCE(361);
      if (lookahead == 'e')
        ADVANCE(366);
      END_STATE();
    case 361:
      if (lookahead == 't')
        ADVANCE(362);
      END_STATE();
    case 362:
      if (lookahead == 'i')
        ADVANCE(363);
      END_STATE();
    case 363:
      if (lookahead == 'v')
        ADVANCE(364);
      END_STATE();
    case 364:
      if (lookahead == 'e')
        ADVANCE(365);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 366:
      if (lookahead == 'w')
        ADVANCE(367);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 368:
      if (lookahead == 'p')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead == 'e')
        ADVANCE(370);
      END_STATE();
    case 370:
      if (lookahead == 'n')
        ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_open);
      if (lookahead == 's')
        ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_opens);
      END_STATE();
    case 373:
      if (lookahead == 'a')
        ADVANCE(374);
      if (lookahead == 'r')
        ADVANCE(380);
      if (lookahead == 'u')
        ADVANCE(398);
      END_STATE();
    case 374:
      if (lookahead == 'c')
        ADVANCE(375);
      END_STATE();
    case 375:
      if (lookahead == 'k')
        ADVANCE(376);
      END_STATE();
    case 376:
      if (lookahead == 'a')
        ADVANCE(377);
      END_STATE();
    case 377:
      if (lookahead == 'g')
        ADVANCE(378);
      END_STATE();
    case 378:
      if (lookahead == 'e')
        ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 380:
      if (lookahead == 'i')
        ADVANCE(381);
      if (lookahead == 'o')
        ADVANCE(386);
      END_STATE();
    case 381:
      if (lookahead == 'v')
        ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == 'a')
        ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == 't')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == 'e')
        ADVANCE(385);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 386:
      if (lookahead == 't')
        ADVANCE(387);
      if (lookahead == 'v')
        ADVANCE(393);
      END_STATE();
    case 387:
      if (lookahead == 'e')
        ADVANCE(388);
      END_STATE();
    case 388:
      if (lookahead == 'c')
        ADVANCE(389);
      END_STATE();
    case 389:
      if (lookahead == 't')
        ADVANCE(390);
      END_STATE();
    case 390:
      if (lookahead == 'e')
        ADVANCE(391);
      END_STATE();
    case 391:
      if (lookahead == 'd')
        ADVANCE(392);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 393:
      if (lookahead == 'i')
        ADVANCE(394);
      END_STATE();
    case 394:
      if (lookahead == 'd')
        ADVANCE(395);
      END_STATE();
    case 395:
      if (lookahead == 'e')
        ADVANCE(396);
      END_STATE();
    case 396:
      if (lookahead == 's')
        ADVANCE(397);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_provides);
      END_STATE();
    case 398:
      if (lookahead == 'b')
        ADVANCE(399);
      END_STATE();
    case 399:
      if (lookahead == 'l')
        ADVANCE(400);
      END_STATE();
    case 400:
      if (lookahead == 'i')
        ADVANCE(401);
      END_STATE();
    case 401:
      if (lookahead == 'c')
        ADVANCE(402);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 403:
      if (lookahead == 'e')
        ADVANCE(404);
      END_STATE();
    case 404:
      if (lookahead == 'q')
        ADVANCE(405);
      END_STATE();
    case 405:
      if (lookahead == 'u')
        ADVANCE(406);
      END_STATE();
    case 406:
      if (lookahead == 'i')
        ADVANCE(407);
      END_STATE();
    case 407:
      if (lookahead == 'r')
        ADVANCE(408);
      END_STATE();
    case 408:
      if (lookahead == 'e')
        ADVANCE(409);
      END_STATE();
    case 409:
      if (lookahead == 's')
        ADVANCE(410);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 411:
      if (lookahead == 't')
        ADVANCE(412);
      if (lookahead == 'u')
        ADVANCE(423);
      if (lookahead == 'y')
        ADVANCE(427);
      END_STATE();
    case 412:
      if (lookahead == 'a')
        ADVANCE(413);
      if (lookahead == 'r')
        ADVANCE(417);
      END_STATE();
    case 413:
      if (lookahead == 't')
        ADVANCE(414);
      END_STATE();
    case 414:
      if (lookahead == 'i')
        ADVANCE(415);
      END_STATE();
    case 415:
      if (lookahead == 'c')
        ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 417:
      if (lookahead == 'i')
        ADVANCE(418);
      END_STATE();
    case 418:
      if (lookahead == 'c')
        ADVANCE(419);
      END_STATE();
    case 419:
      if (lookahead == 't')
        ADVANCE(420);
      END_STATE();
    case 420:
      if (lookahead == 'f')
        ADVANCE(421);
      END_STATE();
    case 421:
      if (lookahead == 'p')
        ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_strictfp);
      END_STATE();
    case 423:
      if (lookahead == 'p')
        ADVANCE(424);
      END_STATE();
    case 424:
      if (lookahead == 'e')
        ADVANCE(425);
      END_STATE();
    case 425:
      if (lookahead == 'r')
        ADVANCE(426);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_super);
      END_STATE();
    case 427:
      if (lookahead == 'n')
        ADVANCE(428);
      END_STATE();
    case 428:
      if (lookahead == 'c')
        ADVANCE(429);
      END_STATE();
    case 429:
      if (lookahead == 'h')
        ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == 'r')
        ADVANCE(431);
      END_STATE();
    case 431:
      if (lookahead == 'o')
        ADVANCE(432);
      END_STATE();
    case 432:
      if (lookahead == 'n')
        ADVANCE(433);
      END_STATE();
    case 433:
      if (lookahead == 'i')
        ADVANCE(434);
      END_STATE();
    case 434:
      if (lookahead == 'z')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 'e')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == 'd')
        ADVANCE(437);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 438:
      if (lookahead == 'h')
        ADVANCE(439);
      END_STATE();
    case 439:
      if (lookahead == 'i')
        ADVANCE(440);
      if (lookahead == 'r')
        ADVANCE(442);
      END_STATE();
    case 440:
      if (lookahead == 's')
        ADVANCE(441);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 442:
      if (lookahead == 'o')
        ADVANCE(443);
      END_STATE();
    case 443:
      if (lookahead == 'w')
        ADVANCE(444);
      END_STATE();
    case 444:
      if (lookahead == 's')
        ADVANCE(445);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_throws);
      END_STATE();
    case 446:
      if (lookahead == 's')
        ADVANCE(447);
      END_STATE();
    case 447:
      if (lookahead == 'e')
        ADVANCE(448);
      END_STATE();
    case 448:
      if (lookahead == 's')
        ADVANCE(449);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 450:
      if (lookahead == 'i')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 't')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'h')
        ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(251);
      END_STATE();
    case 455:
      if (lookahead == '\n')
        SKIP(455);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(456);
      if (lookahead == '\\')
        ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(460);
      if (lookahead != 0)
        ADVANCE(460);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(27);
      if (lookahead == '/')
        ADVANCE(30);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(458);
      if (lookahead != 0)
        ADVANCE(459);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!')
        ADVANCE(255);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(292);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(462);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == '<')
        ADVANCE(282);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(76);
      if (lookahead == ']')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(248);
      if (lookahead == '}')
        ADVANCE(252);
      if (lookahead == '~')
        ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 462:
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(22);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(295);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'b')
        ADVANCE(89);
      if (lookahead == 'c')
        ADVANCE(464);
      if (lookahead == 'd')
        ADVANCE(107);
      if (lookahead == 'f')
        ADVANCE(465);
      if (lookahead == 'i')
        ADVANCE(466);
      if (lookahead == 'l')
        ADVANCE(147);
      if (lookahead == 'n')
        ADVANCE(469);
      if (lookahead == 'p')
        ADVANCE(470);
      if (lookahead == 's')
        ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(124);
      if (lookahead == 'l')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(179);
      if (lookahead == 'u')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(295);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == '<')
        ADVANCE(282);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'b')
        ADVANCE(89);
      if (lookahead == 'c')
        ADVANCE(99);
      if (lookahead == 'd')
        ADVANCE(107);
      if (lookahead == 'f')
        ADVANCE(465);
      if (lookahead == 'i')
        ADVANCE(472);
      if (lookahead == 'l')
        ADVANCE(147);
      if (lookahead == 'n')
        ADVANCE(469);
      if (lookahead == 'p')
        ADVANCE(470);
      if (lookahead == 's')
        ADVANCE(285);
      if (lookahead == '{')
        ADVANCE(248);
      if (lookahead == '}')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == 'i')
        ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == 's')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(295);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == '<')
        ADVANCE(282);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(76);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'b')
        ADVANCE(89);
      if (lookahead == 'c')
        ADVANCE(99);
      if (lookahead == 'd')
        ADVANCE(107);
      if (lookahead == 'f')
        ADVANCE(465);
      if (lookahead == 'i')
        ADVANCE(472);
      if (lookahead == 'l')
        ADVANCE(147);
      if (lookahead == 'm')
        ADVANCE(151);
      if (lookahead == 'n')
        ADVANCE(469);
      if (lookahead == 'o')
        ADVANCE(168);
      if (lookahead == 'p')
        ADVANCE(172);
      if (lookahead == 's')
        ADVANCE(285);
      if (lookahead == '}')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(295);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'b')
        ADVANCE(89);
      if (lookahead == 'c')
        ADVANCE(464);
      if (lookahead == 'd')
        ADVANCE(482);
      if (lookahead == 'f')
        ADVANCE(483);
      if (lookahead == 'i')
        ADVANCE(466);
      if (lookahead == 'l')
        ADVANCE(147);
      if (lookahead == 's')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 485:
      if (lookahead == '&')
        ADVANCE(486);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(295);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == ':')
        ADVANCE(487);
      if (lookahead == '<')
        ADVANCE(282);
      if (lookahead == '>')
        ADVANCE(488);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(76);
      if (lookahead == 'e')
        ADVANCE(489);
      if (lookahead == 'i')
        ADVANCE(491);
      if (lookahead == '{')
        ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 487:
      if (lookahead == ':')
        ADVANCE(59);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 489:
      if (lookahead == 'x')
        ADVANCE(490);
      END_STATE();
    case 490:
      if (lookahead == 't')
        ADVANCE(333);
      END_STATE();
    case 491:
      if (lookahead == 'm')
        ADVANCE(345);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == '<')
        ADVANCE(282);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(76);
      if (lookahead == 't')
        ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == '<')
        ADVANCE(282);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'b')
        ADVANCE(89);
      if (lookahead == 'c')
        ADVANCE(464);
      if (lookahead == 'd')
        ADVANCE(482);
      if (lookahead == 'f')
        ADVANCE(483);
      if (lookahead == 'i')
        ADVANCE(466);
      if (lookahead == 'l')
        ADVANCE(147);
      if (lookahead == 's')
        ADVANCE(484);
      if (lookahead == 'v')
        ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == ':')
        ADVANCE(487);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == '=')
        ADVANCE(496);
      if (lookahead == '>')
        ADVANCE(488);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(76);
      if (lookahead == '{')
        ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\"')
        ADVANCE(256);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == '0')
        ADVANCE(270);
      if (lookahead == 'f')
        ADVANCE(498);
      if (lookahead == 'n')
        ADVANCE(499);
      if (lookahead == 't')
        ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(497);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(256);
      if (lookahead == '%')
        ADVANCE(290);
      if (lookahead == '&')
        ADVANCE(291);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(292);
      if (lookahead == '+')
        ADVANCE(293);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(501);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(296);
      if (lookahead == '0')
        ADVANCE(270);
      if (lookahead == ':')
        ADVANCE(502);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == '<')
        ADVANCE(503);
      if (lookahead == '=')
        ADVANCE(504);
      if (lookahead == '>')
        ADVANCE(299);
      if (lookahead == '?')
        ADVANCE(74);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == ']')
        ADVANCE(78);
      if (lookahead == '^')
        ADVANCE(302);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'b')
        ADVANCE(89);
      if (lookahead == 'c')
        ADVANCE(99);
      if (lookahead == 'd')
        ADVANCE(107);
      if (lookahead == 'f')
        ADVANCE(119);
      if (lookahead == 'i')
        ADVANCE(283);
      if (lookahead == 'l')
        ADVANCE(147);
      if (lookahead == 'm')
        ADVANCE(151);
      if (lookahead == 'n')
        ADVANCE(284);
      if (lookahead == 'o')
        ADVANCE(168);
      if (lookahead == 'p')
        ADVANCE(172);
      if (lookahead == 's')
        ADVANCE(285);
      if (lookahead == 't')
        ADVANCE(286);
      if (lookahead == '{')
        ADVANCE(248);
      if (lookahead == '|')
        ADVANCE(454);
      if (lookahead == '}')
        ADVANCE(252);
      if (lookahead == '~')
        ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(500);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(20);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(298);
      if (lookahead == '=')
        ADVANCE(64);
      END_STATE();
    case 504:
      if (lookahead == '=')
        ADVANCE(67);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(295);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'b')
        ADVANCE(89);
      if (lookahead == 'c')
        ADVANCE(99);
      if (lookahead == 'd')
        ADVANCE(107);
      if (lookahead == 'f')
        ADVANCE(465);
      if (lookahead == 'i')
        ADVANCE(466);
      if (lookahead == 'l')
        ADVANCE(147);
      if (lookahead == 'n')
        ADVANCE(469);
      if (lookahead == 'p')
        ADVANCE(470);
      if (lookahead == 's')
        ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == 's')
        ADVANCE(478);
      if (lookahead == 't')
        ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '&')
        ADVANCE(486);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == ':')
        ADVANCE(487);
      if (lookahead == '>')
        ADVANCE(488);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(76);
      if (lookahead == '{')
        ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(295);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == 't')
        ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\"')
        ADVANCE(256);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == '0')
        ADVANCE(270);
      if (lookahead == '<')
        ADVANCE(282);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'b')
        ADVANCE(89);
      if (lookahead == 'c')
        ADVANCE(99);
      if (lookahead == 'd')
        ADVANCE(107);
      if (lookahead == 'f')
        ADVANCE(119);
      if (lookahead == 'i')
        ADVANCE(513);
      if (lookahead == 'l')
        ADVANCE(147);
      if (lookahead == 'n')
        ADVANCE(157);
      if (lookahead == 'p')
        ADVANCE(470);
      if (lookahead == 's')
        ADVANCE(197);
      if (lookahead == 't')
        ADVANCE(514);
      if (lookahead == 'v')
        ADVANCE(244);
      if (lookahead == '}')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(512);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(133);
      if (lookahead == 'n')
        ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(229);
      if (lookahead == 'r')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 515:
      if (lookahead == '!')
        ADVANCE(289);
      if (lookahead == '%')
        ADVANCE(290);
      if (lookahead == '&')
        ADVANCE(516);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(292);
      if (lookahead == '+')
        ADVANCE(517);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(518);
      if (lookahead == '/')
        ADVANCE(296);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == '<')
        ADVANCE(519);
      if (lookahead == '=')
        ADVANCE(504);
      if (lookahead == '>')
        ADVANCE(520);
      if (lookahead == '?')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(302);
      if (lookahead == '|')
        ADVANCE(454);
      if (lookahead == '}')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(515);
      END_STATE();
    case 516:
      if (lookahead == '&')
        ADVANCE(8);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(298);
      END_STATE();
    case 520:
      if (lookahead == '>')
        ADVANCE(300);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == '<')
        ADVANCE(282);
      if (lookahead == 'c')
        ADVANCE(522);
      if (lookahead == 's')
        ADVANCE(523);
      if (lookahead == 't')
        ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == '<')
        ADVANCE(282);
      if (lookahead == 'n')
        ADVANCE(525);
      if (lookahead == 's')
        ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(269);
      if (lookahead == 's')
        ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 254},
  [2] = {.lex_state = 288},
  [3] = {.lex_state = 288},
  [4] = {.lex_state = 288},
  [5] = {.lex_state = 455},
  [6] = {.lex_state = 288},
  [7] = {.lex_state = 461},
  [8] = {.lex_state = 463},
  [9] = {.lex_state = 461},
  [10] = {.lex_state = 461},
  [11] = {.lex_state = 471},
  [12] = {.lex_state = 461},
  [13] = {.lex_state = 461},
  [14] = {.lex_state = 461},
  [15] = {.lex_state = 473},
  [16] = {.lex_state = 254},
  [17] = {.lex_state = 461},
  [18] = {.lex_state = 461},
  [19] = {.lex_state = 477},
  [20] = {.lex_state = 461},
  [21] = {.lex_state = 461},
  [22] = {.lex_state = 461},
  [23] = {.lex_state = 254},
  [24] = {.lex_state = 254},
  [25] = {.lex_state = 288},
  [26] = {.lex_state = 288},
  [27] = {.lex_state = 288},
  [28] = {.lex_state = 288},
  [29] = {.lex_state = 288},
  [30] = {.lex_state = 480},
  [31] = {.lex_state = 480},
  [32] = {.lex_state = 254},
  [33] = {.lex_state = 254},
  [34] = {.lex_state = 254},
  [35] = {.lex_state = 254},
  [36] = {.lex_state = 471},
  [37] = {.lex_state = 481},
  [38] = {.lex_state = 254},
  [39] = {.lex_state = 461},
  [40] = {.lex_state = 461},
  [41] = {.lex_state = 461},
  [42] = {.lex_state = 461},
  [43] = {.lex_state = 288},
  [44] = {.lex_state = 254},
  [45] = {.lex_state = 254},
  [46] = {.lex_state = 471},
  [47] = {.lex_state = 288},
  [48] = {.lex_state = 455},
  [49] = {.lex_state = 455},
  [50] = {.lex_state = 461},
  [51] = {.lex_state = 485},
  [52] = {.lex_state = 461},
  [53] = {.lex_state = 461},
  [54] = {.lex_state = 485},
  [55] = {.lex_state = 485},
  [56] = {.lex_state = 461},
  [57] = {.lex_state = 461},
  [58] = {.lex_state = 463},
  [59] = {.lex_state = 492},
  [60] = {.lex_state = 492},
  [61] = {.lex_state = 492},
  [62] = {.lex_state = 461},
  [63] = {.lex_state = 492},
  [64] = {.lex_state = 254},
  [65] = {.lex_state = 463},
  [66] = {.lex_state = 463},
  [67] = {.lex_state = 463},
  [68] = {.lex_state = 492},
  [69] = {.lex_state = 492},
  [70] = {.lex_state = 492},
  [71] = {.lex_state = 492},
  [72] = {.lex_state = 254},
  [73] = {.lex_state = 254},
  [74] = {.lex_state = 254},
  [75] = {.lex_state = 481},
  [76] = {.lex_state = 463},
  [77] = {.lex_state = 288},
  [78] = {.lex_state = 288},
  [79] = {.lex_state = 288},
  [80] = {.lex_state = 461},
  [81] = {.lex_state = 480},
  [82] = {.lex_state = 480},
  [83] = {.lex_state = 461},
  [84] = {.lex_state = 288},
  [85] = {.lex_state = 254},
  [86] = {.lex_state = 288},
  [87] = {.lex_state = 461},
  [88] = {.lex_state = 288},
  [89] = {.lex_state = 288},
  [90] = {.lex_state = 288},
  [91] = {.lex_state = 494},
  [92] = {.lex_state = 461},
  [93] = {.lex_state = 254},
  [94] = {.lex_state = 461},
  [95] = {.lex_state = 461},
  [96] = {.lex_state = 461},
  [97] = {.lex_state = 461},
  [98] = {.lex_state = 461},
  [99] = {.lex_state = 461},
  [100] = {.lex_state = 288},
  [101] = {.lex_state = 461},
  [102] = {.lex_state = 461},
  [103] = {.lex_state = 461},
  [104] = {.lex_state = 481},
  [105] = {.lex_state = 481},
  [106] = {.lex_state = 461},
  [107] = {.lex_state = 481},
  [108] = {.lex_state = 254},
  [109] = {.lex_state = 288},
  [110] = {.lex_state = 288},
  [111] = {.lex_state = 461},
  [112] = {.lex_state = 461},
  [113] = {.lex_state = 288},
  [114] = {.lex_state = 495},
  [115] = {.lex_state = 461},
  [116] = {.lex_state = 254},
  [117] = {.lex_state = 288},
  [118] = {.lex_state = 254},
  [119] = {.lex_state = 254},
  [120] = {.lex_state = 254},
  [121] = {.lex_state = 461},
  [122] = {.lex_state = 288},
  [123] = {.lex_state = 473},
  [124] = {.lex_state = 461},
  [125] = {.lex_state = 461},
  [126] = {.lex_state = 471},
  [127] = {.lex_state = 471},
  [128] = {.lex_state = 288},
  [129] = {.lex_state = 288},
  [130] = {.lex_state = 455},
  [131] = {.lex_state = 461},
  [132] = {.lex_state = 461},
  [133] = {.lex_state = 461},
  [134] = {.lex_state = 485},
  [135] = {.lex_state = 481},
  [136] = {.lex_state = 461},
  [137] = {.lex_state = 485},
  [138] = {.lex_state = 485},
  [139] = {.lex_state = 461},
  [140] = {.lex_state = 254},
  [141] = {.lex_state = 461},
  [142] = {.lex_state = 463},
  [143] = {.lex_state = 463},
  [144] = {.lex_state = 494},
  [145] = {.lex_state = 492},
  [146] = {.lex_state = 288},
  [147] = {.lex_state = 254},
  [148] = {.lex_state = 461},
  [149] = {.lex_state = 288},
  [150] = {.lex_state = 254},
  [151] = {.lex_state = 288},
  [152] = {.lex_state = 492},
  [153] = {.lex_state = 288},
  [154] = {.lex_state = 492},
  [155] = {.lex_state = 461},
  [156] = {.lex_state = 463},
  [157] = {.lex_state = 254},
  [158] = {.lex_state = 481},
  [159] = {.lex_state = 492},
  [160] = {.lex_state = 463},
  [161] = {.lex_state = 461},
  [162] = {.lex_state = 254},
  [163] = {.lex_state = 497},
  [164] = {.lex_state = 461},
  [165] = {.lex_state = 254},
  [166] = {.lex_state = 461},
  [167] = {.lex_state = 288},
  [168] = {.lex_state = 288},
  [169] = {.lex_state = 254},
  [170] = {.lex_state = 288},
  [171] = {.lex_state = 288},
  [172] = {.lex_state = 254},
  [173] = {.lex_state = 461},
  [174] = {.lex_state = 461},
  [175] = {.lex_state = 471},
  [176] = {.lex_state = 461},
  [177] = {.lex_state = 461},
  [178] = {.lex_state = 288},
  [179] = {.lex_state = 288},
  [180] = {.lex_state = 254},
  [181] = {.lex_state = 254},
  [182] = {.lex_state = 471},
  [183] = {.lex_state = 461},
  [184] = {.lex_state = 288},
  [185] = {.lex_state = 254},
  [186] = {.lex_state = 254},
  [187] = {.lex_state = 288},
  [188] = {.lex_state = 485},
  [189] = {.lex_state = 485},
  [190] = {.lex_state = 485},
  [191] = {.lex_state = 485},
  [192] = {.lex_state = 288},
  [193] = {.lex_state = 481},
  [194] = {.lex_state = 288},
  [195] = {.lex_state = 288},
  [196] = {.lex_state = 288},
  [197] = {.lex_state = 288},
  [198] = {.lex_state = 288},
  [199] = {.lex_state = 461},
  [200] = {.lex_state = 461},
  [201] = {.lex_state = 288},
  [202] = {.lex_state = 461},
  [203] = {.lex_state = 461},
  [204] = {.lex_state = 288},
  [205] = {.lex_state = 288},
  [206] = {.lex_state = 481},
  [207] = {.lex_state = 481},
  [208] = {.lex_state = 288},
  [209] = {.lex_state = 461},
  [210] = {.lex_state = 463},
  [211] = {.lex_state = 461},
  [212] = {.lex_state = 288},
  [213] = {.lex_state = 495},
  [214] = {.lex_state = 288},
  [215] = {.lex_state = 288},
  [216] = {.lex_state = 461},
  [217] = {.lex_state = 461},
  [218] = {.lex_state = 500},
  [219] = {.lex_state = 505},
  [220] = {.lex_state = 254},
  [221] = {.lex_state = 461},
  [222] = {.lex_state = 461},
  [223] = {.lex_state = 288},
  [224] = {.lex_state = 288},
  [225] = {.lex_state = 505},
  [226] = {.lex_state = 288},
  [227] = {.lex_state = 505},
  [228] = {.lex_state = 254},
  [229] = {.lex_state = 288},
  [230] = {.lex_state = 288},
  [231] = {.lex_state = 254},
  [232] = {.lex_state = 461},
  [233] = {.lex_state = 288},
  [234] = {.lex_state = 461},
  [235] = {.lex_state = 471},
  [236] = {.lex_state = 471},
  [237] = {.lex_state = 288},
  [238] = {.lex_state = 288},
  [239] = {.lex_state = 254},
  [240] = {.lex_state = 497},
  [241] = {.lex_state = 461},
  [242] = {.lex_state = 485},
  [243] = {.lex_state = 461},
  [244] = {.lex_state = 485},
  [245] = {.lex_state = 461},
  [246] = {.lex_state = 485},
  [247] = {.lex_state = 461},
  [248] = {.lex_state = 254},
  [249] = {.lex_state = 497},
  [250] = {.lex_state = 461},
  [251] = {.lex_state = 485},
  [252] = {.lex_state = 288},
  [253] = {.lex_state = 254},
  [254] = {.lex_state = 288},
  [255] = {.lex_state = 288},
  [256] = {.lex_state = 288},
  [257] = {.lex_state = 492},
  [258] = {.lex_state = 288},
  [259] = {.lex_state = 288},
  [260] = {.lex_state = 492},
  [261] = {.lex_state = 461},
  [262] = {.lex_state = 461},
  [263] = {.lex_state = 254},
  [264] = {.lex_state = 254},
  [265] = {.lex_state = 463},
  [266] = {.lex_state = 254},
  [267] = {.lex_state = 288},
  [268] = {.lex_state = 461},
  [269] = {.lex_state = 254},
  [270] = {.lex_state = 471},
  [271] = {.lex_state = 254},
  [272] = {.lex_state = 480},
  [273] = {.lex_state = 288},
  [274] = {.lex_state = 254},
  [275] = {.lex_state = 254},
  [276] = {.lex_state = 254},
  [277] = {.lex_state = 480},
  [278] = {.lex_state = 288},
  [279] = {.lex_state = 288},
  [280] = {.lex_state = 461},
  [281] = {.lex_state = 254},
  [282] = {.lex_state = 506},
  [283] = {.lex_state = 461},
  [284] = {.lex_state = 461},
  [285] = {.lex_state = 461},
  [286] = {.lex_state = 288},
  [287] = {.lex_state = 288},
  [288] = {.lex_state = 254},
  [289] = {.lex_state = 461},
  [290] = {.lex_state = 288},
  [291] = {.lex_state = 485},
  [292] = {.lex_state = 471},
  [293] = {.lex_state = 288},
  [294] = {.lex_state = 254},
  [295] = {.lex_state = 473},
  [296] = {.lex_state = 461},
  [297] = {.lex_state = 461},
  [298] = {.lex_state = 461},
  [299] = {.lex_state = 471},
  [300] = {.lex_state = 481},
  [301] = {.lex_state = 471},
  [302] = {.lex_state = 471},
  [303] = {.lex_state = 288},
  [304] = {.lex_state = 471},
  [305] = {.lex_state = 288},
  [306] = {.lex_state = 471},
  [307] = {.lex_state = 471},
  [308] = {.lex_state = 288},
  [309] = {.lex_state = 288},
  [310] = {.lex_state = 461},
  [311] = {.lex_state = 254},
  [312] = {.lex_state = 254},
  [313] = {.lex_state = 288},
  [314] = {.lex_state = 254},
  [315] = {.lex_state = 254},
  [316] = {.lex_state = 471},
  [317] = {.lex_state = 254},
  [318] = {.lex_state = 471},
  [319] = {.lex_state = 461},
  [320] = {.lex_state = 471},
  [321] = {.lex_state = 471},
  [322] = {.lex_state = 254},
  [323] = {.lex_state = 254},
  [324] = {.lex_state = 254},
  [325] = {.lex_state = 461},
  [326] = {.lex_state = 485},
  [327] = {.lex_state = 485},
  [328] = {.lex_state = 509},
  [329] = {.lex_state = 494},
  [330] = {.lex_state = 485},
  [331] = {.lex_state = 485},
  [332] = {.lex_state = 288},
  [333] = {.lex_state = 485},
  [334] = {.lex_state = 461},
  [335] = {.lex_state = 461},
  [336] = {.lex_state = 461},
  [337] = {.lex_state = 461},
  [338] = {.lex_state = 461},
  [339] = {.lex_state = 461},
  [340] = {.lex_state = 461},
  [341] = {.lex_state = 461},
  [342] = {.lex_state = 461},
  [343] = {.lex_state = 461},
  [344] = {.lex_state = 461},
  [345] = {.lex_state = 461},
  [346] = {.lex_state = 461},
  [347] = {.lex_state = 288},
  [348] = {.lex_state = 497},
  [349] = {.lex_state = 461},
  [350] = {.lex_state = 288},
  [351] = {.lex_state = 288},
  [352] = {.lex_state = 288},
  [353] = {.lex_state = 254},
  [354] = {.lex_state = 461},
  [355] = {.lex_state = 461},
  [356] = {.lex_state = 288},
  [357] = {.lex_state = 288},
  [358] = {.lex_state = 461},
  [359] = {.lex_state = 495},
  [360] = {.lex_state = 288},
  [361] = {.lex_state = 461},
  [362] = {.lex_state = 461},
  [363] = {.lex_state = 461},
  [364] = {.lex_state = 505},
  [365] = {.lex_state = 505},
  [366] = {.lex_state = 288},
  [367] = {.lex_state = 461},
  [368] = {.lex_state = 500},
  [369] = {.lex_state = 288},
  [370] = {.lex_state = 288},
  [371] = {.lex_state = 288},
  [372] = {.lex_state = 461},
  [373] = {.lex_state = 254},
  [374] = {.lex_state = 288},
  [375] = {.lex_state = 254},
  [376] = {.lex_state = 497},
  [377] = {.lex_state = 461},
  [378] = {.lex_state = 288},
  [379] = {.lex_state = 288},
  [380] = {.lex_state = 461},
  [381] = {.lex_state = 288},
  [382] = {.lex_state = 254},
  [383] = {.lex_state = 254},
  [384] = {.lex_state = 461},
  [385] = {.lex_state = 461},
  [386] = {.lex_state = 485},
  [387] = {.lex_state = 485},
  [388] = {.lex_state = 461},
  [389] = {.lex_state = 463},
  [390] = {.lex_state = 288},
  [391] = {.lex_state = 254},
  [392] = {.lex_state = 254},
  [393] = {.lex_state = 463},
  [394] = {.lex_state = 492},
  [395] = {.lex_state = 485},
  [396] = {.lex_state = 288},
  [397] = {.lex_state = 254},
  [398] = {.lex_state = 492},
  [399] = {.lex_state = 288},
  [400] = {.lex_state = 492},
  [401] = {.lex_state = 492},
  [402] = {.lex_state = 254},
  [403] = {.lex_state = 254},
  [404] = {.lex_state = 288},
  [405] = {.lex_state = 254},
  [406] = {.lex_state = 254},
  [407] = {.lex_state = 471},
  [408] = {.lex_state = 471},
  [409] = {.lex_state = 461},
  [410] = {.lex_state = 471},
  [411] = {.lex_state = 471},
  [412] = {.lex_state = 254},
  [413] = {.lex_state = 480},
  [414] = {.lex_state = 480},
  [415] = {.lex_state = 461},
  [416] = {.lex_state = 254},
  [417] = {.lex_state = 254},
  [418] = {.lex_state = 288},
  [419] = {.lex_state = 288},
  [420] = {.lex_state = 506},
  [421] = {.lex_state = 288},
  [422] = {.lex_state = 506},
  [423] = {.lex_state = 288},
  [424] = {.lex_state = 506},
  [425] = {.lex_state = 510},
  [426] = {.lex_state = 510},
  [427] = {.lex_state = 288},
  [428] = {.lex_state = 288},
  [429] = {.lex_state = 288},
  [430] = {.lex_state = 288},
  [431] = {.lex_state = 288},
  [432] = {.lex_state = 288},
  [433] = {.lex_state = 254},
  [434] = {.lex_state = 288},
  [435] = {.lex_state = 471},
  [436] = {.lex_state = 254},
  [437] = {.lex_state = 461},
  [438] = {.lex_state = 288},
  [439] = {.lex_state = 288},
  [440] = {.lex_state = 463},
  [441] = {.lex_state = 461},
  [442] = {.lex_state = 512},
  [443] = {.lex_state = 471},
  [444] = {.lex_state = 254},
  [445] = {.lex_state = 471},
  [446] = {.lex_state = 471},
  [447] = {.lex_state = 473},
  [448] = {.lex_state = 461},
  [449] = {.lex_state = 461},
  [450] = {.lex_state = 288},
  [451] = {.lex_state = 288},
  [452] = {.lex_state = 254},
  [453] = {.lex_state = 471},
  [454] = {.lex_state = 494},
  [455] = {.lex_state = 461},
  [456] = {.lex_state = 288},
  [457] = {.lex_state = 288},
  [458] = {.lex_state = 288},
  [459] = {.lex_state = 461},
  [460] = {.lex_state = 254},
  [461] = {.lex_state = 254},
  [462] = {.lex_state = 254},
  [463] = {.lex_state = 288},
  [464] = {.lex_state = 288},
  [465] = {.lex_state = 288},
  [466] = {.lex_state = 461},
  [467] = {.lex_state = 254},
  [468] = {.lex_state = 471},
  [469] = {.lex_state = 254},
  [470] = {.lex_state = 485},
  [471] = {.lex_state = 461},
  [472] = {.lex_state = 485},
  [473] = {.lex_state = 461},
  [474] = {.lex_state = 485},
  [475] = {.lex_state = 509},
  [476] = {.lex_state = 494},
  [477] = {.lex_state = 485},
  [478] = {.lex_state = 288},
  [479] = {.lex_state = 288},
  [480] = {.lex_state = 288},
  [481] = {.lex_state = 288},
  [482] = {.lex_state = 288},
  [483] = {.lex_state = 288},
  [484] = {.lex_state = 288},
  [485] = {.lex_state = 288},
  [486] = {.lex_state = 288},
  [487] = {.lex_state = 288},
  [488] = {.lex_state = 288},
  [489] = {.lex_state = 481},
  [490] = {.lex_state = 288},
  [491] = {.lex_state = 254},
  [492] = {.lex_state = 254},
  [493] = {.lex_state = 481},
  [494] = {.lex_state = 288},
  [495] = {.lex_state = 288},
  [496] = {.lex_state = 288},
  [497] = {.lex_state = 288},
  [498] = {.lex_state = 288},
  [499] = {.lex_state = 288},
  [500] = {.lex_state = 461},
  [501] = {.lex_state = 461},
  [502] = {.lex_state = 461},
  [503] = {.lex_state = 288},
  [504] = {.lex_state = 288},
  [505] = {.lex_state = 461},
  [506] = {.lex_state = 288},
  [507] = {.lex_state = 288},
  [508] = {.lex_state = 461},
  [509] = {.lex_state = 495},
  [510] = {.lex_state = 461},
  [511] = {.lex_state = 461},
  [512] = {.lex_state = 461},
  [513] = {.lex_state = 288},
  [514] = {.lex_state = 497},
  [515] = {.lex_state = 461},
  [516] = {.lex_state = 471},
  [517] = {.lex_state = 288},
  [518] = {.lex_state = 288},
  [519] = {.lex_state = 254},
  [520] = {.lex_state = 288},
  [521] = {.lex_state = 288},
  [522] = {.lex_state = 288},
  [523] = {.lex_state = 288},
  [524] = {.lex_state = 288},
  [525] = {.lex_state = 254},
  [526] = {.lex_state = 254},
  [527] = {.lex_state = 471},
  [528] = {.lex_state = 288},
  [529] = {.lex_state = 254},
  [530] = {.lex_state = 254},
  [531] = {.lex_state = 471},
  [532] = {.lex_state = 288},
  [533] = {.lex_state = 254},
  [534] = {.lex_state = 461},
  [535] = {.lex_state = 461},
  [536] = {.lex_state = 485},
  [537] = {.lex_state = 461},
  [538] = {.lex_state = 463},
  [539] = {.lex_state = 463},
  [540] = {.lex_state = 492},
  [541] = {.lex_state = 492},
  [542] = {.lex_state = 492},
  [543] = {.lex_state = 254},
  [544] = {.lex_state = 288},
  [545] = {.lex_state = 461},
  [546] = {.lex_state = 254},
  [547] = {.lex_state = 471},
  [548] = {.lex_state = 461},
  [549] = {.lex_state = 254},
  [550] = {.lex_state = 288},
  [551] = {.lex_state = 515},
  [552] = {.lex_state = 254},
  [553] = {.lex_state = 288},
  [554] = {.lex_state = 288},
  [555] = {.lex_state = 288},
  [556] = {.lex_state = 288},
  [557] = {.lex_state = 288},
  [558] = {.lex_state = 288},
  [559] = {.lex_state = 288},
  [560] = {.lex_state = 288},
  [561] = {.lex_state = 515},
  [562] = {.lex_state = 515},
  [563] = {.lex_state = 288},
  [564] = {.lex_state = 254},
  [565] = {.lex_state = 461},
  [566] = {.lex_state = 254},
  [567] = {.lex_state = 288},
  [568] = {.lex_state = 461},
  [569] = {.lex_state = 506},
  [570] = {.lex_state = 288},
  [571] = {.lex_state = 461},
  [572] = {.lex_state = 461},
  [573] = {.lex_state = 461},
  [574] = {.lex_state = 288},
  [575] = {.lex_state = 288},
  [576] = {.lex_state = 461},
  [577] = {.lex_state = 461},
  [578] = {.lex_state = 254},
  [579] = {.lex_state = 254},
  [580] = {.lex_state = 471},
  [581] = {.lex_state = 254},
  [582] = {.lex_state = 471},
  [583] = {.lex_state = 288},
  [584] = {.lex_state = 288},
  [585] = {.lex_state = 254},
  [586] = {.lex_state = 471},
  [587] = {.lex_state = 471},
  [588] = {.lex_state = 288},
  [589] = {.lex_state = 254},
  [590] = {.lex_state = 471},
  [591] = {.lex_state = 254},
  [592] = {.lex_state = 463},
  [593] = {.lex_state = 461},
  [594] = {.lex_state = 471},
  [595] = {.lex_state = 288},
  [596] = {.lex_state = 288},
  [597] = {.lex_state = 288},
  [598] = {.lex_state = 288},
  [599] = {.lex_state = 494},
  [600] = {.lex_state = 288},
  [601] = {.lex_state = 288},
  [602] = {.lex_state = 288},
  [603] = {.lex_state = 288},
  [604] = {.lex_state = 288},
  [605] = {.lex_state = 505},
  [606] = {.lex_state = 288},
  [607] = {.lex_state = 288},
  [608] = {.lex_state = 288},
  [609] = {.lex_state = 288},
  [610] = {.lex_state = 288},
  [611] = {.lex_state = 288},
  [612] = {.lex_state = 288},
  [613] = {.lex_state = 288},
  [614] = {.lex_state = 254},
  [615] = {.lex_state = 254},
  [616] = {.lex_state = 481},
  [617] = {.lex_state = 471},
  [618] = {.lex_state = 461},
  [619] = {.lex_state = 288},
  [620] = {.lex_state = 288},
  [621] = {.lex_state = 254},
  [622] = {.lex_state = 471},
  [623] = {.lex_state = 485},
  [624] = {.lex_state = 288},
  [625] = {.lex_state = 461},
  [626] = {.lex_state = 288},
  [627] = {.lex_state = 461},
  [628] = {.lex_state = 288},
  [629] = {.lex_state = 254},
  [630] = {.lex_state = 461},
  [631] = {.lex_state = 254},
  [632] = {.lex_state = 471},
  [633] = {.lex_state = 461},
  [634] = {.lex_state = 288},
  [635] = {.lex_state = 288},
  [636] = {.lex_state = 485},
  [637] = {.lex_state = 485},
  [638] = {.lex_state = 461},
  [639] = {.lex_state = 485},
  [640] = {.lex_state = 485},
  [641] = {.lex_state = 461},
  [642] = {.lex_state = 461},
  [643] = {.lex_state = 481},
  [644] = {.lex_state = 481},
  [645] = {.lex_state = 288},
  [646] = {.lex_state = 288},
  [647] = {.lex_state = 288},
  [648] = {.lex_state = 288},
  [649] = {.lex_state = 461},
  [650] = {.lex_state = 461},
  [651] = {.lex_state = 461},
  [652] = {.lex_state = 461},
  [653] = {.lex_state = 288},
  [654] = {.lex_state = 288},
  [655] = {.lex_state = 461},
  [656] = {.lex_state = 461},
  [657] = {.lex_state = 461},
  [658] = {.lex_state = 461},
  [659] = {.lex_state = 461},
  [660] = {.lex_state = 461},
  [661] = {.lex_state = 288},
  [662] = {.lex_state = 461},
  [663] = {.lex_state = 505},
  [664] = {.lex_state = 288},
  [665] = {.lex_state = 254},
  [666] = {.lex_state = 254},
  [667] = {.lex_state = 505},
  [668] = {.lex_state = 288},
  [669] = {.lex_state = 471},
  [670] = {.lex_state = 288},
  [671] = {.lex_state = 254},
  [672] = {.lex_state = 288},
  [673] = {.lex_state = 288},
  [674] = {.lex_state = 288},
  [675] = {.lex_state = 471},
  [676] = {.lex_state = 471},
  [677] = {.lex_state = 254},
  [678] = {.lex_state = 254},
  [679] = {.lex_state = 485},
  [680] = {.lex_state = 254},
  [681] = {.lex_state = 288},
  [682] = {.lex_state = 461},
  [683] = {.lex_state = 461},
  [684] = {.lex_state = 288},
  [685] = {.lex_state = 254},
  [686] = {.lex_state = 461},
  [687] = {.lex_state = 288},
  [688] = {.lex_state = 254},
  [689] = {.lex_state = 288},
  [690] = {.lex_state = 288},
  [691] = {.lex_state = 288},
  [692] = {.lex_state = 288},
  [693] = {.lex_state = 288},
  [694] = {.lex_state = 288},
  [695] = {.lex_state = 288},
  [696] = {.lex_state = 515},
  [697] = {.lex_state = 515},
  [698] = {.lex_state = 254},
  [699] = {.lex_state = 461},
  [700] = {.lex_state = 254},
  [701] = {.lex_state = 254},
  [702] = {.lex_state = 254},
  [703] = {.lex_state = 254},
  [704] = {.lex_state = 254},
  [705] = {.lex_state = 254},
  [706] = {.lex_state = 254},
  [707] = {.lex_state = 254},
  [708] = {.lex_state = 254},
  [709] = {.lex_state = 288},
  [710] = {.lex_state = 288},
  [711] = {.lex_state = 288},
  [712] = {.lex_state = 510},
  [713] = {.lex_state = 288},
  [714] = {.lex_state = 288},
  [715] = {.lex_state = 461},
  [716] = {.lex_state = 288},
  [717] = {.lex_state = 288},
  [718] = {.lex_state = 471},
  [719] = {.lex_state = 471},
  [720] = {.lex_state = 471},
  [721] = {.lex_state = 471},
  [722] = {.lex_state = 288},
  [723] = {.lex_state = 254},
  [724] = {.lex_state = 471},
  [725] = {.lex_state = 471},
  [726] = {.lex_state = 471},
  [727] = {.lex_state = 254},
  [728] = {.lex_state = 471},
  [729] = {.lex_state = 288},
  [730] = {.lex_state = 254},
  [731] = {.lex_state = 288},
  [732] = {.lex_state = 254},
  [733] = {.lex_state = 288},
  [734] = {.lex_state = 288},
  [735] = {.lex_state = 461},
  [736] = {.lex_state = 461},
  [737] = {.lex_state = 461},
  [738] = {.lex_state = 288},
  [739] = {.lex_state = 461},
  [740] = {.lex_state = 288},
  [741] = {.lex_state = 288},
  [742] = {.lex_state = 254},
  [743] = {.lex_state = 481},
  [744] = {.lex_state = 254},
  [745] = {.lex_state = 461},
  [746] = {.lex_state = 288},
  [747] = {.lex_state = 288},
  [748] = {.lex_state = 288},
  [749] = {.lex_state = 288},
  [750] = {.lex_state = 288},
  [751] = {.lex_state = 521},
  [752] = {.lex_state = 471},
  [753] = {.lex_state = 254},
  [754] = {.lex_state = 524},
  [755] = {.lex_state = 461},
  [756] = {.lex_state = 524},
  [757] = {.lex_state = 288},
  [758] = {.lex_state = 461},
  [759] = {.lex_state = 254},
  [760] = {.lex_state = 288},
  [761] = {.lex_state = 288},
  [762] = {.lex_state = 471},
  [763] = {.lex_state = 288},
  [764] = {.lex_state = 485},
  [765] = {.lex_state = 288},
  [766] = {.lex_state = 461},
  [767] = {.lex_state = 288},
  [768] = {.lex_state = 254},
  [769] = {.lex_state = 288},
  [770] = {.lex_state = 461},
  [771] = {.lex_state = 471},
  [772] = {.lex_state = 485},
  [773] = {.lex_state = 485},
  [774] = {.lex_state = 288},
  [775] = {.lex_state = 288},
  [776] = {.lex_state = 288},
  [777] = {.lex_state = 288},
  [778] = {.lex_state = 461},
  [779] = {.lex_state = 461},
  [780] = {.lex_state = 461},
  [781] = {.lex_state = 461},
  [782] = {.lex_state = 288},
  [783] = {.lex_state = 288},
  [784] = {.lex_state = 288},
  [785] = {.lex_state = 288},
  [786] = {.lex_state = 254},
  [787] = {.lex_state = 288},
  [788] = {.lex_state = 288},
  [789] = {.lex_state = 288},
  [790] = {.lex_state = 288},
  [791] = {.lex_state = 505},
  [792] = {.lex_state = 505},
  [793] = {.lex_state = 288},
  [794] = {.lex_state = 254},
  [795] = {.lex_state = 288},
  [796] = {.lex_state = 288},
  [797] = {.lex_state = 254},
  [798] = {.lex_state = 254},
  [799] = {.lex_state = 288},
  [800] = {.lex_state = 254},
  [801] = {.lex_state = 461},
  [802] = {.lex_state = 461},
  [803] = {.lex_state = 461},
  [804] = {.lex_state = 461},
  [805] = {.lex_state = 461},
  [806] = {.lex_state = 461},
  [807] = {.lex_state = 288},
  [808] = {.lex_state = 461},
  [809] = {.lex_state = 461},
  [810] = {.lex_state = 288},
  [811] = {.lex_state = 254},
  [812] = {.lex_state = 254},
  [813] = {.lex_state = 254},
  [814] = {.lex_state = 461},
  [815] = {.lex_state = 254},
  [816] = {.lex_state = 254},
  [817] = {.lex_state = 254},
  [818] = {.lex_state = 254},
  [819] = {.lex_state = 254},
  [820] = {.lex_state = 254},
  [821] = {.lex_state = 254},
  [822] = {.lex_state = 254},
  [823] = {.lex_state = 288},
  [824] = {.lex_state = 288},
  [825] = {.lex_state = 288},
  [826] = {.lex_state = 288},
  [827] = {.lex_state = 288},
  [828] = {.lex_state = 288},
  [829] = {.lex_state = 288},
  [830] = {.lex_state = 515},
  [831] = {.lex_state = 515},
  [832] = {.lex_state = 515},
  [833] = {.lex_state = 288},
  [834] = {.lex_state = 288},
  [835] = {.lex_state = 288},
  [836] = {.lex_state = 461},
  [837] = {.lex_state = 288},
  [838] = {.lex_state = 471},
  [839] = {.lex_state = 471},
  [840] = {.lex_state = 471},
  [841] = {.lex_state = 254},
  [842] = {.lex_state = 471},
  [843] = {.lex_state = 471},
  [844] = {.lex_state = 471},
  [845] = {.lex_state = 288},
  [846] = {.lex_state = 288},
  [847] = {.lex_state = 288},
  [848] = {.lex_state = 254},
  [849] = {.lex_state = 288},
  [850] = {.lex_state = 288},
  [851] = {.lex_state = 288},
  [852] = {.lex_state = 254},
  [853] = {.lex_state = 288},
  [854] = {.lex_state = 288},
  [855] = {.lex_state = 461},
  [856] = {.lex_state = 461},
  [857] = {.lex_state = 254},
  [858] = {.lex_state = 288},
  [859] = {.lex_state = 254},
  [860] = {.lex_state = 288},
  [861] = {.lex_state = 288},
  [862] = {.lex_state = 254},
  [863] = {.lex_state = 461},
  [864] = {.lex_state = 254},
  [865] = {.lex_state = 288},
  [866] = {.lex_state = 461},
  [867] = {.lex_state = 288},
  [868] = {.lex_state = 461},
  [869] = {.lex_state = 461},
  [870] = {.lex_state = 461},
  [871] = {.lex_state = 288},
  [872] = {.lex_state = 288},
  [873] = {.lex_state = 288},
  [874] = {.lex_state = 461},
  [875] = {.lex_state = 288},
  [876] = {.lex_state = 288},
  [877] = {.lex_state = 288},
  [878] = {.lex_state = 461},
  [879] = {.lex_state = 288},
  [880] = {.lex_state = 288},
  [881] = {.lex_state = 461},
  [882] = {.lex_state = 471},
  [883] = {.lex_state = 494},
  [884] = {.lex_state = 254},
  [885] = {.lex_state = 461},
  [886] = {.lex_state = 288},
  [887] = {.lex_state = 526},
  [888] = {.lex_state = 288},
  [889] = {.lex_state = 288},
  [890] = {.lex_state = 288},
  [891] = {.lex_state = 288},
  [892] = {.lex_state = 254},
  [893] = {.lex_state = 471},
  [894] = {.lex_state = 288},
  [895] = {.lex_state = 254},
  [896] = {.lex_state = 288},
  [897] = {.lex_state = 288},
  [898] = {.lex_state = 288},
  [899] = {.lex_state = 485},
  [900] = {.lex_state = 288},
  [901] = {.lex_state = 461},
  [902] = {.lex_state = 461},
  [903] = {.lex_state = 461},
  [904] = {.lex_state = 288},
  [905] = {.lex_state = 461},
  [906] = {.lex_state = 288},
  [907] = {.lex_state = 254},
  [908] = {.lex_state = 471},
  [909] = {.lex_state = 254},
  [910] = {.lex_state = 288},
  [911] = {.lex_state = 288},
  [912] = {.lex_state = 288},
  [913] = {.lex_state = 288},
  [914] = {.lex_state = 288},
  [915] = {.lex_state = 288},
  [916] = {.lex_state = 288},
  [917] = {.lex_state = 288},
  [918] = {.lex_state = 461},
  [919] = {.lex_state = 461},
  [920] = {.lex_state = 461},
  [921] = {.lex_state = 461},
  [922] = {.lex_state = 461},
  [923] = {.lex_state = 461},
  [924] = {.lex_state = 288},
  [925] = {.lex_state = 254},
  [926] = {.lex_state = 254},
  [927] = {.lex_state = 288},
  [928] = {.lex_state = 288},
  [929] = {.lex_state = 288},
  [930] = {.lex_state = 288},
  [931] = {.lex_state = 288},
  [932] = {.lex_state = 288},
  [933] = {.lex_state = 515},
  [934] = {.lex_state = 515},
  [935] = {.lex_state = 461},
  [936] = {.lex_state = 288},
  [937] = {.lex_state = 288},
  [938] = {.lex_state = 461},
  [939] = {.lex_state = 471},
  [940] = {.lex_state = 471},
  [941] = {.lex_state = 288},
  [942] = {.lex_state = 288},
  [943] = {.lex_state = 461},
  [944] = {.lex_state = 254},
  [945] = {.lex_state = 288},
  [946] = {.lex_state = 288},
  [947] = {.lex_state = 288},
  [948] = {.lex_state = 461},
  [949] = {.lex_state = 461},
  [950] = {.lex_state = 254},
  [951] = {.lex_state = 461},
  [952] = {.lex_state = 461},
  [953] = {.lex_state = 288},
  [954] = {.lex_state = 461},
  [955] = {.lex_state = 288},
  [956] = {.lex_state = 288},
  [957] = {.lex_state = 254},
  [958] = {.lex_state = 288},
  [959] = {.lex_state = 288},
  [960] = {.lex_state = 254},
  [961] = {.lex_state = 461},
  [962] = {.lex_state = 461},
  [963] = {.lex_state = 461},
  [964] = {.lex_state = 461},
  [965] = {.lex_state = 461},
  [966] = {.lex_state = 461},
  [967] = {.lex_state = 288},
  [968] = {.lex_state = 461},
  [969] = {.lex_state = 288},
  [970] = {.lex_state = 288},
  [971] = {.lex_state = 461},
  [972] = {.lex_state = 461},
  [973] = {.lex_state = 461},
  [974] = {.lex_state = 254},
  [975] = {.lex_state = 485},
  [976] = {.lex_state = 461},
  [977] = {.lex_state = 254},
  [978] = {.lex_state = 288},
  [979] = {.lex_state = 288},
  [980] = {.lex_state = 254},
  [981] = {.lex_state = 471},
  [982] = {.lex_state = 461},
  [983] = {.lex_state = 288},
  [984] = {.lex_state = 288},
  [985] = {.lex_state = 288},
  [986] = {.lex_state = 288},
  [987] = {.lex_state = 461},
  [988] = {.lex_state = 288},
  [989] = {.lex_state = 288},
  [990] = {.lex_state = 288},
  [991] = {.lex_state = 288},
  [992] = {.lex_state = 288},
  [993] = {.lex_state = 288},
  [994] = {.lex_state = 288},
  [995] = {.lex_state = 288},
  [996] = {.lex_state = 515},
  [997] = {.lex_state = 515},
  [998] = {.lex_state = 471},
  [999] = {.lex_state = 288},
  [1000] = {.lex_state = 288},
  [1001] = {.lex_state = 461},
  [1002] = {.lex_state = 288},
  [1003] = {.lex_state = 288},
  [1004] = {.lex_state = 288},
  [1005] = {.lex_state = 288},
  [1006] = {.lex_state = 288},
  [1007] = {.lex_state = 288},
  [1008] = {.lex_state = 254},
  [1009] = {.lex_state = 461},
  [1010] = {.lex_state = 288},
  [1011] = {.lex_state = 288},
  [1012] = {.lex_state = 288},
  [1013] = {.lex_state = 461},
  [1014] = {.lex_state = 288},
  [1015] = {.lex_state = 288},
  [1016] = {.lex_state = 288},
  [1017] = {.lex_state = 461},
  [1018] = {.lex_state = 288},
  [1019] = {.lex_state = 461},
  [1020] = {.lex_state = 288},
  [1021] = {.lex_state = 254},
  [1022] = {.lex_state = 254},
  [1023] = {.lex_state = 288},
  [1024] = {.lex_state = 288},
  [1025] = {.lex_state = 254},
  [1026] = {.lex_state = 254},
  [1027] = {.lex_state = 288},
  [1028] = {.lex_state = 254},
  [1029] = {.lex_state = 288},
  [1030] = {.lex_state = 288},
  [1031] = {.lex_state = 288},
  [1032] = {.lex_state = 288},
  [1033] = {.lex_state = 288},
  [1034] = {.lex_state = 288},
  [1035] = {.lex_state = 288},
  [1036] = {.lex_state = 288},
  [1037] = {.lex_state = 461},
  [1038] = {.lex_state = 288},
  [1039] = {.lex_state = 461},
  [1040] = {.lex_state = 288},
  [1041] = {.lex_state = 254},
  [1042] = {.lex_state = 461},
  [1043] = {.lex_state = 526},
  [1044] = {.lex_state = 485},
  [1045] = {.lex_state = 254},
  [1046] = {.lex_state = 461},
  [1047] = {.lex_state = 471},
  [1048] = {.lex_state = 288},
  [1049] = {.lex_state = 288},
  [1050] = {.lex_state = 254},
  [1051] = {.lex_state = 461},
  [1052] = {.lex_state = 254},
  [1053] = {.lex_state = 254},
  [1054] = {.lex_state = 254},
  [1055] = {.lex_state = 254},
  [1056] = {.lex_state = 254},
  [1057] = {.lex_state = 254},
  [1058] = {.lex_state = 254},
  [1059] = {.lex_state = 254},
  [1060] = {.lex_state = 471},
  [1061] = {.lex_state = 288},
  [1062] = {.lex_state = 288},
  [1063] = {.lex_state = 461},
  [1064] = {.lex_state = 288},
  [1065] = {.lex_state = 288},
  [1066] = {.lex_state = 288},
  [1067] = {.lex_state = 288},
  [1068] = {.lex_state = 288},
  [1069] = {.lex_state = 461},
  [1070] = {.lex_state = 254},
  [1071] = {.lex_state = 288},
  [1072] = {.lex_state = 461},
  [1073] = {.lex_state = 461},
  [1074] = {.lex_state = 254},
  [1075] = {.lex_state = 288},
  [1076] = {.lex_state = 288},
  [1077] = {.lex_state = 254},
  [1078] = {.lex_state = 526},
  [1079] = {.lex_state = 288},
  [1080] = {.lex_state = 254},
  [1081] = {.lex_state = 288},
  [1082] = {.lex_state = 288},
  [1083] = {.lex_state = 288},
  [1084] = {.lex_state = 288},
  [1085] = {.lex_state = 288},
  [1086] = {.lex_state = 288},
  [1087] = {.lex_state = 288},
  [1088] = {.lex_state = 515},
  [1089] = {.lex_state = 515},
  [1090] = {.lex_state = 471},
  [1091] = {.lex_state = 288},
  [1092] = {.lex_state = 288},
  [1093] = {.lex_state = 288},
  [1094] = {.lex_state = 254},
  [1095] = {.lex_state = 461},
  [1096] = {.lex_state = 288},
  [1097] = {.lex_state = 288},
  [1098] = {.lex_state = 254},
  [1099] = {.lex_state = 461},
  [1100] = {.lex_state = 288},
  [1101] = {.lex_state = 288},
  [1102] = {.lex_state = 288},
  [1103] = {.lex_state = 461},
  [1104] = {.lex_state = 288},
  [1105] = {.lex_state = 254},
  [1106] = {.lex_state = 288},
  [1107] = {.lex_state = 254},
  [1108] = {.lex_state = 288},
  [1109] = {.lex_state = 288},
  [1110] = {.lex_state = 288},
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
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(3),
    [anon_sym_void] = ACTIONS(3),
    [anon_sym_byte] = ACTIONS(3),
    [anon_sym_short] = ACTIONS(3),
    [anon_sym_int] = ACTIONS(3),
    [anon_sym_long] = ACTIONS(3),
    [anon_sym_char] = ACTIONS(3),
    [anon_sym_float] = ACTIONS(3),
    [anon_sym_double] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(3),
    [anon_sym_to] = ACTIONS(3),
    [anon_sym_transitive] = ACTIONS(3),
    [anon_sym_static] = ACTIONS(3),
    [anon_sym_package] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(3),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_public] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(3),
    [anon_sym_private] = ACTIONS(3),
    [anon_sym_abstract] = ACTIONS(3),
    [anon_sym_final] = ACTIONS(3),
    [anon_sym_strictfp] = ACTIONS(3),
    [anon_sym_synchronized] = ACTIONS(3),
    [anon_sym_native] = ACTIONS(3),
    [anon_sym_this] = ACTIONS(3),
    [anon_sym_super] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(3),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_program] = STATE(23),
    [sym__statement] = STATE(24),
    [sym__literal] = STATE(25),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(26),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(30),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym__declaration] = STATE(32),
    [sym_module_declaration] = STATE(33),
    [sym_package_declaration] = STATE(33),
    [sym_import_statement] = STATE(33),
    [sym_single_type_import_declaration] = STATE(34),
    [sym_type_import_on_declaraction] = STATE(34),
    [sym_single_static_import_declaration] = STATE(34),
    [sym_static_import_on_demand_declaration] = STATE(34),
    [sym_class_declaration] = STATE(33),
    [sym_normal_class_declaration] = STATE(35),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(37),
    [sym_interface_declaration] = STATE(33),
    [sym_annotation_type_declaration] = STATE(38),
    [sym_normal_interface_declaration] = STATE(38),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(43),
    [sym_method_declaration] = STATE(33),
    [aux_sym_program_repeat1] = STATE(44),
    [aux_sym_class_or_interface_type_repeat1] = STATE(45),
    [aux_sym_normal_class_declaration_repeat1] = STATE(46),
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
    [sym_null_literal] = ACTIONS(24),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_PLUS_PLUS] = ACTIONS(32),
    [anon_sym_DASH_DASH] = ACTIONS(32),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(42),
    [anon_sym_open] = ACTIONS(44),
    [anon_sym_module] = ACTIONS(46),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_package] = ACTIONS(48),
    [anon_sym_import] = ACTIONS(50),
    [anon_sym_class] = ACTIONS(52),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(54),
    [sym_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(58),
  },
  [2] = {
    [sym__semicolon] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(60),
    [anon_sym_COMMA] = ACTIONS(60),
    [anon_sym_RBRACE] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(60),
    [anon_sym_COLON_COLON] = ACTIONS(60),
    [sym_comment] = ACTIONS(58),
  },
  [3] = {
    [sym__semicolon] = ACTIONS(62),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_COMMA] = ACTIONS(62),
    [anon_sym_RBRACE] = ACTIONS(62),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_COLON_COLON] = ACTIONS(62),
    [sym_comment] = ACTIONS(58),
  },
  [4] = {
    [sym__semicolon] = ACTIONS(64),
    [anon_sym_RPAREN] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(64),
    [anon_sym_RBRACE] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(64),
    [anon_sym_COLON_COLON] = ACTIONS(64),
    [sym_comment] = ACTIONS(58),
  },
  [5] = {
    [aux_sym_character_literal_repeat1] = STATE(49),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(68),
    [sym_comment] = ACTIONS(70),
  },
  [6] = {
    [sym__semicolon] = ACTIONS(72),
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_COMMA] = ACTIONS(72),
    [anon_sym_RBRACE] = ACTIONS(72),
    [anon_sym_DOT] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_COLON_COLON] = ACTIONS(72),
    [sym_comment] = ACTIONS(58),
  },
  [7] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [sym_type_parameter_list] = STATE(54),
    [sym_type_parameter] = STATE(55),
    [aux_sym_class_or_interface_type_repeat1] = STATE(56),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(58),
  },
  [8] = {
    [sym_inferred_formal_parameter_list] = STATE(64),
    [sym_integral_type] = STATE(59),
    [sym_floating_point_type] = STATE(59),
    [sym__annotation] = STATE(65),
    [sym_normal_annotation] = STATE(66),
    [sym_marker_annotation] = STATE(66),
    [sym_single_element_annotation] = STATE(66),
    [sym_modifier] = STATE(67),
    [sym_unann_type] = STATE(68),
    [sym_unann_primitive_type] = STATE(69),
    [sym_unann_class_or_interface_type] = STATE(70),
    [sym_unann_array_type] = STATE(71),
    [sym__formal_parameter_list] = STATE(64),
    [sym_formal_parameter] = STATE(72),
    [sym_receiver_parameter] = STATE(73),
    [sym_last_formal_parameter] = STATE(74),
    [aux_sym_class_or_interface_type_repeat1] = STATE(75),
    [aux_sym_normal_class_declaration_repeat1] = STATE(76),
    [anon_sym_COMMA] = ACTIONS(78),
    [anon_sym_default] = ACTIONS(80),
    [anon_sym_boolean] = ACTIONS(82),
    [anon_sym_byte] = ACTIONS(84),
    [anon_sym_short] = ACTIONS(84),
    [anon_sym_int] = ACTIONS(84),
    [anon_sym_long] = ACTIONS(84),
    [anon_sym_char] = ACTIONS(84),
    [anon_sym_float] = ACTIONS(86),
    [anon_sym_double] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(88),
    [anon_sym_static] = ACTIONS(80),
    [anon_sym_public] = ACTIONS(80),
    [anon_sym_protected] = ACTIONS(80),
    [anon_sym_private] = ACTIONS(80),
    [anon_sym_abstract] = ACTIONS(80),
    [anon_sym_final] = ACTIONS(80),
    [anon_sym_strictfp] = ACTIONS(80),
    [anon_sym_synchronized] = ACTIONS(80),
    [anon_sym_native] = ACTIONS(80),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(58),
  },
  [9] = {
    [sym__expression] = STATE(78),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_PLUS_PLUS] = ACTIONS(32),
    [anon_sym_DASH_DASH] = ACTIONS(32),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [10] = {
    [sym__expression] = STATE(79),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_PLUS_PLUS] = ACTIONS(32),
    [anon_sym_DASH_DASH] = ACTIONS(32),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [11] = {
    [anon_sym_LT] = ACTIONS(94),
    [anon_sym_default] = ACTIONS(96),
    [anon_sym_boolean] = ACTIONS(96),
    [anon_sym_byte] = ACTIONS(96),
    [anon_sym_short] = ACTIONS(96),
    [anon_sym_int] = ACTIONS(96),
    [anon_sym_long] = ACTIONS(96),
    [anon_sym_char] = ACTIONS(96),
    [anon_sym_float] = ACTIONS(96),
    [anon_sym_double] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(94),
    [anon_sym_static] = ACTIONS(96),
    [anon_sym_class] = ACTIONS(96),
    [anon_sym_public] = ACTIONS(96),
    [anon_sym_protected] = ACTIONS(96),
    [anon_sym_private] = ACTIONS(96),
    [anon_sym_abstract] = ACTIONS(96),
    [anon_sym_final] = ACTIONS(96),
    [anon_sym_strictfp] = ACTIONS(96),
    [anon_sym_synchronized] = ACTIONS(96),
    [anon_sym_native] = ACTIONS(96),
    [anon_sym_interface] = ACTIONS(96),
    [sym_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(58),
  },
  [12] = {
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(100),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(100),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(58),
  },
  [13] = {
    [anon_sym_DOT] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_AT] = ACTIONS(106),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(106),
    [sym_identifier] = ACTIONS(104),
    [sym_comment] = ACTIONS(58),
  },
  [14] = {
    [anon_sym_DOT] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_AT] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
    [sym_identifier] = ACTIONS(108),
    [sym_comment] = ACTIONS(58),
  },
  [15] = {
    [sym_package_or_type_name] = STATE(82),
    [anon_sym_interface] = ACTIONS(112),
    [sym_identifier] = ACTIONS(114),
    [sym_comment] = ACTIONS(58),
  },
  [16] = {
    [anon_sym_module] = ACTIONS(116),
    [sym_comment] = ACTIONS(58),
  },
  [17] = {
    [sym_module_identifier] = STATE(85),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(58),
  },
  [18] = {
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(58),
  },
  [19] = {
    [sym_package_or_type_name] = STATE(88),
    [anon_sym_static] = ACTIONS(122),
    [sym_identifier] = ACTIONS(114),
    [sym_comment] = ACTIONS(58),
  },
  [20] = {
    [sym_identifier] = ACTIONS(124),
    [sym_comment] = ACTIONS(58),
  },
  [21] = {
    [sym_identifier] = ACTIONS(126),
    [sym_comment] = ACTIONS(58),
  },
  [22] = {
    [sym_type_arguments] = STATE(92),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_DASH_GT] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(58),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [sym_comment] = ACTIONS(58),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(138),
    [sym_decimal_integer_literal] = ACTIONS(140),
    [sym_hex_integer_literal] = ACTIONS(140),
    [sym_octal_integer_literal] = ACTIONS(140),
    [sym_binary_integer_literal] = ACTIONS(140),
    [sym_decimal_floating_point_literal] = ACTIONS(140),
    [sym_hex_floating_point_literal] = ACTIONS(142),
    [anon_sym_true] = ACTIONS(140),
    [anon_sym_false] = ACTIONS(140),
    [anon_sym_SQUOTE] = ACTIONS(138),
    [sym_string_literal] = ACTIONS(138),
    [sym_null_literal] = ACTIONS(140),
    [anon_sym_LT] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_PLUS_PLUS] = ACTIONS(138),
    [anon_sym_DASH_DASH] = ACTIONS(138),
    [anon_sym_default] = ACTIONS(140),
    [anon_sym_boolean] = ACTIONS(140),
    [anon_sym_byte] = ACTIONS(140),
    [anon_sym_short] = ACTIONS(140),
    [anon_sym_int] = ACTIONS(140),
    [anon_sym_long] = ACTIONS(140),
    [anon_sym_char] = ACTIONS(140),
    [anon_sym_float] = ACTIONS(140),
    [anon_sym_double] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(138),
    [anon_sym_open] = ACTIONS(140),
    [anon_sym_module] = ACTIONS(140),
    [anon_sym_static] = ACTIONS(140),
    [anon_sym_package] = ACTIONS(140),
    [anon_sym_import] = ACTIONS(140),
    [anon_sym_class] = ACTIONS(140),
    [anon_sym_public] = ACTIONS(140),
    [anon_sym_protected] = ACTIONS(140),
    [anon_sym_private] = ACTIONS(140),
    [anon_sym_abstract] = ACTIONS(140),
    [anon_sym_final] = ACTIONS(140),
    [anon_sym_strictfp] = ACTIONS(140),
    [anon_sym_synchronized] = ACTIONS(140),
    [anon_sym_native] = ACTIONS(140),
    [anon_sym_interface] = ACTIONS(140),
    [sym_identifier] = ACTIONS(142),
    [sym_comment] = ACTIONS(58),
  },
  [25] = {
    [sym__semicolon] = ACTIONS(144),
    [sym_comment] = ACTIONS(58),
  },
  [26] = {
    [sym__semicolon] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(146),
    [anon_sym_EQ_EQ] = ACTIONS(148),
    [anon_sym_GT_EQ] = ACTIONS(148),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [anon_sym_BANG_EQ] = ACTIONS(148),
    [anon_sym_AMP_AMP] = ACTIONS(150),
    [anon_sym_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_STAR] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_PERCENT] = ACTIONS(156),
    [anon_sym_LT_LT] = ACTIONS(156),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_GT_GT_GT] = ACTIONS(156),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [27] = {
    [sym__semicolon] = ACTIONS(168),
    [anon_sym_GT] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(168),
    [anon_sym_GT_EQ] = ACTIONS(168),
    [anon_sym_LT_EQ] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(168),
    [anon_sym_AMP_AMP] = ACTIONS(168),
    [anon_sym_PIPE_PIPE] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_STAR] = ACTIONS(168),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_AMP] = ACTIONS(170),
    [anon_sym_PIPE] = ACTIONS(170),
    [anon_sym_CARET] = ACTIONS(168),
    [anon_sym_PERCENT] = ACTIONS(168),
    [anon_sym_LT_LT] = ACTIONS(168),
    [anon_sym_GT_GT] = ACTIONS(170),
    [anon_sym_GT_GT_GT] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_COMMA] = ACTIONS(168),
    [anon_sym_QMARK] = ACTIONS(168),
    [anon_sym_COLON] = ACTIONS(168),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(168),
    [anon_sym_RBRACE] = ACTIONS(168),
    [anon_sym_RBRACK] = ACTIONS(168),
    [sym_comment] = ACTIONS(58),
  },
  [28] = {
    [anon_sym_DASH_GT] = ACTIONS(172),
    [sym_comment] = ACTIONS(58),
  },
  [29] = {
    [sym__semicolon] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(176),
    [anon_sym_LT] = ACTIONS(176),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [anon_sym_BANG_EQ] = ACTIONS(174),
    [anon_sym_AMP_AMP] = ACTIONS(174),
    [anon_sym_PIPE_PIPE] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(176),
    [anon_sym_DASH] = ACTIONS(176),
    [anon_sym_STAR] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_AMP] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
    [anon_sym_LT_LT] = ACTIONS(174),
    [anon_sym_GT_GT] = ACTIONS(176),
    [anon_sym_GT_GT_GT] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_COMMA] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_PLUS_PLUS] = ACTIONS(174),
    [anon_sym_DASH_DASH] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(174),
    [anon_sym_RBRACK] = ACTIONS(174),
    [sym_comment] = ACTIONS(58),
  },
  [30] = {
    [anon_sym_LT] = ACTIONS(94),
    [anon_sym_default] = ACTIONS(96),
    [anon_sym_boolean] = ACTIONS(96),
    [anon_sym_byte] = ACTIONS(96),
    [anon_sym_short] = ACTIONS(96),
    [anon_sym_int] = ACTIONS(96),
    [anon_sym_long] = ACTIONS(96),
    [anon_sym_char] = ACTIONS(96),
    [anon_sym_float] = ACTIONS(96),
    [anon_sym_double] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_open] = ACTIONS(181),
    [anon_sym_module] = ACTIONS(181),
    [anon_sym_static] = ACTIONS(96),
    [anon_sym_package] = ACTIONS(181),
    [anon_sym_class] = ACTIONS(96),
    [anon_sym_public] = ACTIONS(96),
    [anon_sym_protected] = ACTIONS(96),
    [anon_sym_private] = ACTIONS(96),
    [anon_sym_abstract] = ACTIONS(96),
    [anon_sym_final] = ACTIONS(96),
    [anon_sym_strictfp] = ACTIONS(96),
    [anon_sym_synchronized] = ACTIONS(96),
    [anon_sym_native] = ACTIONS(96),
    [anon_sym_interface] = ACTIONS(96),
    [sym_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(58),
  },
  [31] = {
    [sym__semicolon] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_default] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_boolean] = ACTIONS(185),
    [anon_sym_byte] = ACTIONS(185),
    [anon_sym_short] = ACTIONS(185),
    [anon_sym_int] = ACTIONS(185),
    [anon_sym_long] = ACTIONS(185),
    [anon_sym_char] = ACTIONS(185),
    [anon_sym_float] = ACTIONS(185),
    [anon_sym_double] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(183),
    [anon_sym_open] = ACTIONS(185),
    [anon_sym_module] = ACTIONS(185),
    [anon_sym_static] = ACTIONS(185),
    [anon_sym_package] = ACTIONS(185),
    [anon_sym_class] = ACTIONS(185),
    [anon_sym_public] = ACTIONS(185),
    [anon_sym_protected] = ACTIONS(185),
    [anon_sym_private] = ACTIONS(185),
    [anon_sym_abstract] = ACTIONS(185),
    [anon_sym_final] = ACTIONS(185),
    [anon_sym_strictfp] = ACTIONS(185),
    [anon_sym_synchronized] = ACTIONS(185),
    [anon_sym_native] = ACTIONS(185),
    [anon_sym_interface] = ACTIONS(185),
    [sym_identifier] = ACTIONS(187),
    [sym_comment] = ACTIONS(58),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_decimal_integer_literal] = ACTIONS(191),
    [sym_hex_integer_literal] = ACTIONS(191),
    [sym_octal_integer_literal] = ACTIONS(191),
    [sym_binary_integer_literal] = ACTIONS(191),
    [sym_decimal_floating_point_literal] = ACTIONS(191),
    [sym_hex_floating_point_literal] = ACTIONS(193),
    [anon_sym_true] = ACTIONS(191),
    [anon_sym_false] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(189),
    [sym_string_literal] = ACTIONS(189),
    [sym_null_literal] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_BANG] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(189),
    [anon_sym_PLUS_PLUS] = ACTIONS(189),
    [anon_sym_DASH_DASH] = ACTIONS(189),
    [anon_sym_default] = ACTIONS(191),
    [anon_sym_boolean] = ACTIONS(191),
    [anon_sym_byte] = ACTIONS(191),
    [anon_sym_short] = ACTIONS(191),
    [anon_sym_int] = ACTIONS(191),
    [anon_sym_long] = ACTIONS(191),
    [anon_sym_char] = ACTIONS(191),
    [anon_sym_float] = ACTIONS(191),
    [anon_sym_double] = ACTIONS(191),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_open] = ACTIONS(191),
    [anon_sym_module] = ACTIONS(191),
    [anon_sym_static] = ACTIONS(191),
    [anon_sym_package] = ACTIONS(191),
    [anon_sym_import] = ACTIONS(191),
    [anon_sym_class] = ACTIONS(191),
    [anon_sym_public] = ACTIONS(191),
    [anon_sym_protected] = ACTIONS(191),
    [anon_sym_private] = ACTIONS(191),
    [anon_sym_abstract] = ACTIONS(191),
    [anon_sym_final] = ACTIONS(191),
    [anon_sym_strictfp] = ACTIONS(191),
    [anon_sym_synchronized] = ACTIONS(191),
    [anon_sym_native] = ACTIONS(191),
    [anon_sym_interface] = ACTIONS(191),
    [sym_identifier] = ACTIONS(193),
    [sym_comment] = ACTIONS(58),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_decimal_integer_literal] = ACTIONS(197),
    [sym_hex_integer_literal] = ACTIONS(197),
    [sym_octal_integer_literal] = ACTIONS(197),
    [sym_binary_integer_literal] = ACTIONS(197),
    [sym_decimal_floating_point_literal] = ACTIONS(197),
    [sym_hex_floating_point_literal] = ACTIONS(199),
    [anon_sym_true] = ACTIONS(197),
    [anon_sym_false] = ACTIONS(197),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [sym_string_literal] = ACTIONS(195),
    [sym_null_literal] = ACTIONS(197),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_BANG] = ACTIONS(195),
    [anon_sym_TILDE] = ACTIONS(195),
    [anon_sym_PLUS_PLUS] = ACTIONS(195),
    [anon_sym_DASH_DASH] = ACTIONS(195),
    [anon_sym_default] = ACTIONS(197),
    [anon_sym_boolean] = ACTIONS(197),
    [anon_sym_byte] = ACTIONS(197),
    [anon_sym_short] = ACTIONS(197),
    [anon_sym_int] = ACTIONS(197),
    [anon_sym_long] = ACTIONS(197),
    [anon_sym_char] = ACTIONS(197),
    [anon_sym_float] = ACTIONS(197),
    [anon_sym_double] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_open] = ACTIONS(197),
    [anon_sym_module] = ACTIONS(197),
    [anon_sym_static] = ACTIONS(197),
    [anon_sym_package] = ACTIONS(197),
    [anon_sym_import] = ACTIONS(197),
    [anon_sym_class] = ACTIONS(197),
    [anon_sym_public] = ACTIONS(197),
    [anon_sym_protected] = ACTIONS(197),
    [anon_sym_private] = ACTIONS(197),
    [anon_sym_abstract] = ACTIONS(197),
    [anon_sym_final] = ACTIONS(197),
    [anon_sym_strictfp] = ACTIONS(197),
    [anon_sym_synchronized] = ACTIONS(197),
    [anon_sym_native] = ACTIONS(197),
    [anon_sym_interface] = ACTIONS(197),
    [sym_identifier] = ACTIONS(199),
    [sym_comment] = ACTIONS(58),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_decimal_integer_literal] = ACTIONS(203),
    [sym_hex_integer_literal] = ACTIONS(203),
    [sym_octal_integer_literal] = ACTIONS(203),
    [sym_binary_integer_literal] = ACTIONS(203),
    [sym_decimal_floating_point_literal] = ACTIONS(203),
    [sym_hex_floating_point_literal] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_false] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_string_literal] = ACTIONS(201),
    [sym_null_literal] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_BANG] = ACTIONS(201),
    [anon_sym_TILDE] = ACTIONS(201),
    [anon_sym_PLUS_PLUS] = ACTIONS(201),
    [anon_sym_DASH_DASH] = ACTIONS(201),
    [anon_sym_default] = ACTIONS(203),
    [anon_sym_boolean] = ACTIONS(203),
    [anon_sym_byte] = ACTIONS(203),
    [anon_sym_short] = ACTIONS(203),
    [anon_sym_int] = ACTIONS(203),
    [anon_sym_long] = ACTIONS(203),
    [anon_sym_char] = ACTIONS(203),
    [anon_sym_float] = ACTIONS(203),
    [anon_sym_double] = ACTIONS(203),
    [anon_sym_AT] = ACTIONS(201),
    [anon_sym_open] = ACTIONS(203),
    [anon_sym_module] = ACTIONS(203),
    [anon_sym_static] = ACTIONS(203),
    [anon_sym_package] = ACTIONS(203),
    [anon_sym_import] = ACTIONS(203),
    [anon_sym_class] = ACTIONS(203),
    [anon_sym_public] = ACTIONS(203),
    [anon_sym_protected] = ACTIONS(203),
    [anon_sym_private] = ACTIONS(203),
    [anon_sym_abstract] = ACTIONS(203),
    [anon_sym_final] = ACTIONS(203),
    [anon_sym_strictfp] = ACTIONS(203),
    [anon_sym_synchronized] = ACTIONS(203),
    [anon_sym_native] = ACTIONS(203),
    [anon_sym_interface] = ACTIONS(203),
    [sym_identifier] = ACTIONS(205),
    [sym_comment] = ACTIONS(58),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_decimal_integer_literal] = ACTIONS(209),
    [sym_hex_integer_literal] = ACTIONS(209),
    [sym_octal_integer_literal] = ACTIONS(209),
    [sym_binary_integer_literal] = ACTIONS(209),
    [sym_decimal_floating_point_literal] = ACTIONS(209),
    [sym_hex_floating_point_literal] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(209),
    [anon_sym_false] = ACTIONS(209),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [sym_string_literal] = ACTIONS(207),
    [sym_null_literal] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_PLUS_PLUS] = ACTIONS(207),
    [anon_sym_DASH_DASH] = ACTIONS(207),
    [anon_sym_default] = ACTIONS(209),
    [anon_sym_boolean] = ACTIONS(209),
    [anon_sym_byte] = ACTIONS(209),
    [anon_sym_short] = ACTIONS(209),
    [anon_sym_int] = ACTIONS(209),
    [anon_sym_long] = ACTIONS(209),
    [anon_sym_char] = ACTIONS(209),
    [anon_sym_float] = ACTIONS(209),
    [anon_sym_double] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(207),
    [anon_sym_open] = ACTIONS(209),
    [anon_sym_module] = ACTIONS(209),
    [anon_sym_static] = ACTIONS(209),
    [anon_sym_package] = ACTIONS(209),
    [anon_sym_import] = ACTIONS(209),
    [anon_sym_class] = ACTIONS(209),
    [anon_sym_public] = ACTIONS(209),
    [anon_sym_protected] = ACTIONS(209),
    [anon_sym_private] = ACTIONS(209),
    [anon_sym_abstract] = ACTIONS(209),
    [anon_sym_final] = ACTIONS(209),
    [anon_sym_strictfp] = ACTIONS(209),
    [anon_sym_synchronized] = ACTIONS(209),
    [anon_sym_native] = ACTIONS(209),
    [anon_sym_interface] = ACTIONS(209),
    [sym_identifier] = ACTIONS(211),
    [sym_comment] = ACTIONS(58),
  },
  [36] = {
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_default] = ACTIONS(215),
    [anon_sym_boolean] = ACTIONS(215),
    [anon_sym_byte] = ACTIONS(215),
    [anon_sym_short] = ACTIONS(215),
    [anon_sym_int] = ACTIONS(215),
    [anon_sym_long] = ACTIONS(215),
    [anon_sym_char] = ACTIONS(215),
    [anon_sym_float] = ACTIONS(215),
    [anon_sym_double] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(213),
    [anon_sym_static] = ACTIONS(215),
    [anon_sym_class] = ACTIONS(215),
    [anon_sym_public] = ACTIONS(215),
    [anon_sym_protected] = ACTIONS(215),
    [anon_sym_private] = ACTIONS(215),
    [anon_sym_abstract] = ACTIONS(215),
    [anon_sym_final] = ACTIONS(215),
    [anon_sym_strictfp] = ACTIONS(215),
    [anon_sym_synchronized] = ACTIONS(215),
    [anon_sym_native] = ACTIONS(215),
    [anon_sym_interface] = ACTIONS(215),
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(58),
  },
  [37] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(104),
    [sym_normal_annotation] = STATE(105),
    [sym_marker_annotation] = STATE(105),
    [sym_single_element_annotation] = STATE(105),
    [sym_unann_type] = STATE(106),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [aux_sym_class_or_interface_type_repeat1] = STATE(107),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [sym_decimal_integer_literal] = ACTIONS(225),
    [sym_hex_integer_literal] = ACTIONS(225),
    [sym_octal_integer_literal] = ACTIONS(225),
    [sym_binary_integer_literal] = ACTIONS(225),
    [sym_decimal_floating_point_literal] = ACTIONS(225),
    [sym_hex_floating_point_literal] = ACTIONS(227),
    [anon_sym_true] = ACTIONS(225),
    [anon_sym_false] = ACTIONS(225),
    [anon_sym_SQUOTE] = ACTIONS(223),
    [sym_string_literal] = ACTIONS(223),
    [sym_null_literal] = ACTIONS(225),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_BANG] = ACTIONS(223),
    [anon_sym_TILDE] = ACTIONS(223),
    [anon_sym_PLUS_PLUS] = ACTIONS(223),
    [anon_sym_DASH_DASH] = ACTIONS(223),
    [anon_sym_default] = ACTIONS(225),
    [anon_sym_boolean] = ACTIONS(225),
    [anon_sym_byte] = ACTIONS(225),
    [anon_sym_short] = ACTIONS(225),
    [anon_sym_int] = ACTIONS(225),
    [anon_sym_long] = ACTIONS(225),
    [anon_sym_char] = ACTIONS(225),
    [anon_sym_float] = ACTIONS(225),
    [anon_sym_double] = ACTIONS(225),
    [anon_sym_AT] = ACTIONS(223),
    [anon_sym_open] = ACTIONS(225),
    [anon_sym_module] = ACTIONS(225),
    [anon_sym_static] = ACTIONS(225),
    [anon_sym_package] = ACTIONS(225),
    [anon_sym_import] = ACTIONS(225),
    [anon_sym_class] = ACTIONS(225),
    [anon_sym_public] = ACTIONS(225),
    [anon_sym_protected] = ACTIONS(225),
    [anon_sym_private] = ACTIONS(225),
    [anon_sym_abstract] = ACTIONS(225),
    [anon_sym_final] = ACTIONS(225),
    [anon_sym_strictfp] = ACTIONS(225),
    [anon_sym_synchronized] = ACTIONS(225),
    [anon_sym_native] = ACTIONS(225),
    [anon_sym_interface] = ACTIONS(225),
    [sym_identifier] = ACTIONS(227),
    [sym_comment] = ACTIONS(58),
  },
  [39] = {
    [sym_method_declarator] = STATE(109),
    [sym_identifier] = ACTIONS(229),
    [sym_comment] = ACTIONS(58),
  },
  [40] = {
    [sym_dims] = STATE(112),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(113),
    [aux_sym_dims_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(235),
    [sym_identifier] = ACTIONS(237),
    [sym_comment] = ACTIONS(58),
  },
  [41] = {
    [sym_dims] = STATE(112),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(113),
    [aux_sym_dims_repeat1] = STATE(114),
    [anon_sym_DOT] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(235),
    [sym_identifier] = ACTIONS(237),
    [sym_comment] = ACTIONS(58),
  },
  [42] = {
    [anon_sym_DOT_DOT_DOT] = ACTIONS(235),
    [sym_identifier] = ACTIONS(237),
    [sym_comment] = ACTIONS(58),
  },
  [43] = {
    [sym_method_body] = STATE(118),
    [sym_block] = STATE(116),
    [sym__semicolon] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(243),
    [sym_comment] = ACTIONS(58),
  },
  [44] = {
    [sym__statement] = STATE(119),
    [sym__literal] = STATE(25),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(26),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(30),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym__declaration] = STATE(32),
    [sym_module_declaration] = STATE(33),
    [sym_package_declaration] = STATE(33),
    [sym_import_statement] = STATE(33),
    [sym_single_type_import_declaration] = STATE(34),
    [sym_type_import_on_declaraction] = STATE(34),
    [sym_single_static_import_declaration] = STATE(34),
    [sym_static_import_on_demand_declaration] = STATE(34),
    [sym_class_declaration] = STATE(33),
    [sym_normal_class_declaration] = STATE(35),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(37),
    [sym_interface_declaration] = STATE(33),
    [sym_annotation_type_declaration] = STATE(38),
    [sym_normal_interface_declaration] = STATE(38),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(43),
    [sym_method_declaration] = STATE(33),
    [aux_sym_class_or_interface_type_repeat1] = STATE(45),
    [aux_sym_normal_class_declaration_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(245),
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
    [sym_null_literal] = ACTIONS(24),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_PLUS_PLUS] = ACTIONS(32),
    [anon_sym_DASH_DASH] = ACTIONS(32),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(42),
    [anon_sym_open] = ACTIONS(44),
    [anon_sym_module] = ACTIONS(46),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_package] = ACTIONS(48),
    [anon_sym_import] = ACTIONS(50),
    [anon_sym_class] = ACTIONS(52),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(54),
    [sym_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(58),
  },
  [45] = {
    [sym__annotation] = STATE(122),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_open] = ACTIONS(247),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_package] = ACTIONS(249),
    [sym_comment] = ACTIONS(58),
  },
  [46] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(126),
    [sym_marker_annotation] = STATE(126),
    [sym_single_element_annotation] = STATE(126),
    [sym_modifier] = STATE(127),
    [sym_type_parameters] = STATE(37),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(128),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(251),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(253),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(255),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [47] = {
    [sym__semicolon] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_RBRACE] = ACTIONS(257),
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(257),
    [anon_sym_COLON_COLON] = ACTIONS(257),
    [sym_comment] = ACTIONS(58),
  },
  [48] = {
    [anon_sym_SQUOTE] = ACTIONS(259),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(259),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(259),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(259),
    [sym_comment] = ACTIONS(70),
  },
  [49] = {
    [anon_sym_SQUOTE] = ACTIONS(261),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(263),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(263),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(263),
    [sym_comment] = ACTIONS(70),
  },
  [50] = {
    [sym_package_or_type_name] = STATE(132),
    [sym_identifier] = ACTIONS(265),
    [sym_comment] = ACTIONS(58),
  },
  [51] = {
    [sym_type_bound] = STATE(134),
    [anon_sym_GT] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_extends] = ACTIONS(269),
    [sym_comment] = ACTIONS(58),
  },
  [52] = {
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_AT] = ACTIONS(271),
    [sym_identifier] = ACTIONS(181),
    [sym_comment] = ACTIONS(58),
  },
  [53] = {
    [anon_sym_AT] = ACTIONS(183),
    [sym_identifier] = ACTIONS(185),
    [sym_comment] = ACTIONS(58),
  },
  [54] = {
    [anon_sym_GT] = ACTIONS(273),
    [sym_comment] = ACTIONS(58),
  },
  [55] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(137),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_COMMA] = ACTIONS(277),
    [sym_comment] = ACTIONS(58),
  },
  [56] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(279),
    [sym_comment] = ACTIONS(58),
  },
  [57] = {
    [aux_sym_inferred_formal_parameter_list_repeat1] = STATE(141),
    [anon_sym_RPAREN] = ACTIONS(281),
    [sym_identifier] = ACTIONS(283),
    [sym_comment] = ACTIONS(58),
  },
  [58] = {
    [anon_sym_default] = ACTIONS(96),
    [anon_sym_boolean] = ACTIONS(96),
    [anon_sym_byte] = ACTIONS(96),
    [anon_sym_short] = ACTIONS(96),
    [anon_sym_int] = ACTIONS(96),
    [anon_sym_long] = ACTIONS(96),
    [anon_sym_char] = ACTIONS(96),
    [anon_sym_float] = ACTIONS(96),
    [anon_sym_double] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(94),
    [anon_sym_static] = ACTIONS(96),
    [anon_sym_public] = ACTIONS(96),
    [anon_sym_protected] = ACTIONS(96),
    [anon_sym_private] = ACTIONS(96),
    [anon_sym_abstract] = ACTIONS(96),
    [anon_sym_final] = ACTIONS(96),
    [anon_sym_strictfp] = ACTIONS(96),
    [anon_sym_synchronized] = ACTIONS(96),
    [anon_sym_native] = ACTIONS(96),
    [sym_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(58),
  },
  [59] = {
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(100),
    [anon_sym_this] = ACTIONS(102),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(100),
    [sym_identifier] = ACTIONS(285),
    [sym_comment] = ACTIONS(58),
  },
  [60] = {
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_AT] = ACTIONS(106),
    [anon_sym_this] = ACTIONS(104),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(106),
    [sym_identifier] = ACTIONS(287),
    [sym_comment] = ACTIONS(58),
  },
  [61] = {
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_AT] = ACTIONS(110),
    [anon_sym_this] = ACTIONS(108),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
    [sym_identifier] = ACTIONS(289),
    [sym_comment] = ACTIONS(58),
  },
  [62] = {
    [sym_package_or_type_name] = STATE(143),
    [sym_identifier] = ACTIONS(291),
    [sym_comment] = ACTIONS(58),
  },
  [63] = {
    [sym_type_arguments] = STATE(145),
    [anon_sym_LT] = ACTIONS(293),
    [anon_sym_DOT] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(132),
    [anon_sym_this] = ACTIONS(134),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(132),
    [sym_identifier] = ACTIONS(295),
    [sym_comment] = ACTIONS(58),
  },
  [64] = {
    [anon_sym_RPAREN] = ACTIONS(297),
    [sym_comment] = ACTIONS(58),
  },
  [65] = {
    [anon_sym_default] = ACTIONS(96),
    [anon_sym_boolean] = ACTIONS(299),
    [anon_sym_byte] = ACTIONS(299),
    [anon_sym_short] = ACTIONS(299),
    [anon_sym_int] = ACTIONS(299),
    [anon_sym_long] = ACTIONS(299),
    [anon_sym_char] = ACTIONS(299),
    [anon_sym_float] = ACTIONS(299),
    [anon_sym_double] = ACTIONS(299),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_static] = ACTIONS(96),
    [anon_sym_public] = ACTIONS(96),
    [anon_sym_protected] = ACTIONS(96),
    [anon_sym_private] = ACTIONS(96),
    [anon_sym_abstract] = ACTIONS(96),
    [anon_sym_final] = ACTIONS(96),
    [anon_sym_strictfp] = ACTIONS(96),
    [anon_sym_synchronized] = ACTIONS(96),
    [anon_sym_native] = ACTIONS(96),
    [sym_identifier] = ACTIONS(302),
    [sym_comment] = ACTIONS(58),
  },
  [66] = {
    [anon_sym_default] = ACTIONS(185),
    [anon_sym_boolean] = ACTIONS(185),
    [anon_sym_byte] = ACTIONS(185),
    [anon_sym_short] = ACTIONS(185),
    [anon_sym_int] = ACTIONS(185),
    [anon_sym_long] = ACTIONS(185),
    [anon_sym_char] = ACTIONS(185),
    [anon_sym_float] = ACTIONS(185),
    [anon_sym_double] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(183),
    [anon_sym_static] = ACTIONS(185),
    [anon_sym_public] = ACTIONS(185),
    [anon_sym_protected] = ACTIONS(185),
    [anon_sym_private] = ACTIONS(185),
    [anon_sym_abstract] = ACTIONS(185),
    [anon_sym_final] = ACTIONS(185),
    [anon_sym_strictfp] = ACTIONS(185),
    [anon_sym_synchronized] = ACTIONS(185),
    [anon_sym_native] = ACTIONS(185),
    [sym_identifier] = ACTIONS(187),
    [sym_comment] = ACTIONS(58),
  },
  [67] = {
    [anon_sym_default] = ACTIONS(215),
    [anon_sym_boolean] = ACTIONS(215),
    [anon_sym_byte] = ACTIONS(215),
    [anon_sym_short] = ACTIONS(215),
    [anon_sym_int] = ACTIONS(215),
    [anon_sym_long] = ACTIONS(215),
    [anon_sym_char] = ACTIONS(215),
    [anon_sym_float] = ACTIONS(215),
    [anon_sym_double] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(213),
    [anon_sym_static] = ACTIONS(215),
    [anon_sym_public] = ACTIONS(215),
    [anon_sym_protected] = ACTIONS(215),
    [anon_sym_private] = ACTIONS(215),
    [anon_sym_abstract] = ACTIONS(215),
    [anon_sym_final] = ACTIONS(215),
    [anon_sym_strictfp] = ACTIONS(215),
    [anon_sym_synchronized] = ACTIONS(215),
    [anon_sym_native] = ACTIONS(215),
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(58),
  },
  [68] = {
    [sym_variable_declarator_id] = STATE(150),
    [anon_sym_this] = ACTIONS(305),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(307),
    [sym_identifier] = ACTIONS(309),
    [sym_comment] = ACTIONS(58),
  },
  [69] = {
    [sym_dims] = STATE(152),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(153),
    [aux_sym_dims_repeat1] = STATE(154),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_this] = ACTIONS(237),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(235),
    [sym_identifier] = ACTIONS(313),
    [sym_comment] = ACTIONS(58),
  },
  [70] = {
    [sym_dims] = STATE(152),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(153),
    [aux_sym_dims_repeat1] = STATE(154),
    [anon_sym_DOT] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_this] = ACTIONS(237),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(235),
    [sym_identifier] = ACTIONS(313),
    [sym_comment] = ACTIONS(58),
  },
  [71] = {
    [anon_sym_this] = ACTIONS(237),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(235),
    [sym_identifier] = ACTIONS(313),
    [sym_comment] = ACTIONS(58),
  },
  [72] = {
    [aux_sym_formal_parameters_repeat1] = STATE(157),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(319),
    [sym_comment] = ACTIONS(58),
  },
  [73] = {
    [aux_sym_formal_parameters_repeat1] = STATE(157),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(319),
    [sym_comment] = ACTIONS(58),
  },
  [74] = {
    [anon_sym_RPAREN] = ACTIONS(321),
    [sym_comment] = ACTIONS(58),
  },
  [75] = {
    [sym_integral_type] = STATE(59),
    [sym_floating_point_type] = STATE(59),
    [sym__annotation] = STATE(158),
    [sym_normal_annotation] = STATE(105),
    [sym_marker_annotation] = STATE(105),
    [sym_single_element_annotation] = STATE(105),
    [sym_unann_type] = STATE(159),
    [sym_unann_primitive_type] = STATE(69),
    [sym_unann_class_or_interface_type] = STATE(70),
    [sym_unann_array_type] = STATE(71),
    [anon_sym_boolean] = ACTIONS(82),
    [anon_sym_byte] = ACTIONS(84),
    [anon_sym_short] = ACTIONS(84),
    [anon_sym_int] = ACTIONS(84),
    [anon_sym_long] = ACTIONS(84),
    [anon_sym_char] = ACTIONS(84),
    [anon_sym_float] = ACTIONS(86),
    [anon_sym_double] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(58),
  },
  [76] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(58),
    [sym_normal_annotation] = STATE(66),
    [sym_marker_annotation] = STATE(66),
    [sym_single_element_annotation] = STATE(66),
    [sym_modifier] = STATE(160),
    [sym_unann_type] = STATE(161),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [anon_sym_default] = ACTIONS(80),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(88),
    [anon_sym_static] = ACTIONS(80),
    [anon_sym_public] = ACTIONS(80),
    [anon_sym_protected] = ACTIONS(80),
    [anon_sym_private] = ACTIONS(80),
    [anon_sym_abstract] = ACTIONS(80),
    [anon_sym_final] = ACTIONS(80),
    [anon_sym_strictfp] = ACTIONS(80),
    [anon_sym_synchronized] = ACTIONS(80),
    [anon_sym_native] = ACTIONS(80),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [77] = {
    [anon_sym_DASH_GT] = ACTIONS(130),
    [sym_comment] = ACTIONS(58),
  },
  [78] = {
    [sym__semicolon] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(323),
    [anon_sym_PIPE_PIPE] = ACTIONS(323),
    [anon_sym_PLUS] = ACTIONS(325),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_CARET] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(323),
    [anon_sym_LT_LT] = ACTIONS(323),
    [anon_sym_GT_GT] = ACTIONS(325),
    [anon_sym_GT_GT_GT] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_QMARK] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(323),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [sym_comment] = ACTIONS(58),
  },
  [79] = {
    [sym__semicolon] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_EQ_EQ] = ACTIONS(327),
    [anon_sym_GT_EQ] = ACTIONS(327),
    [anon_sym_LT_EQ] = ACTIONS(327),
    [anon_sym_BANG_EQ] = ACTIONS(327),
    [anon_sym_AMP_AMP] = ACTIONS(327),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(327),
    [anon_sym_SLASH] = ACTIONS(329),
    [anon_sym_AMP] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(329),
    [anon_sym_CARET] = ACTIONS(327),
    [anon_sym_PERCENT] = ACTIONS(327),
    [anon_sym_LT_LT] = ACTIONS(327),
    [anon_sym_GT_GT] = ACTIONS(329),
    [anon_sym_GT_GT_GT] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_QMARK] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(327),
    [anon_sym_PLUS_PLUS] = ACTIONS(327),
    [anon_sym_DASH_DASH] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [sym_comment] = ACTIONS(58),
  },
  [80] = {
    [sym_identifier] = ACTIONS(331),
    [sym_comment] = ACTIONS(58),
  },
  [81] = {
    [sym__semicolon] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(333),
    [anon_sym_LPAREN] = ACTIONS(333),
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_COMMA] = ACTIONS(333),
    [anon_sym_RBRACE] = ACTIONS(333),
    [anon_sym_default] = ACTIONS(335),
    [anon_sym_DOT] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_boolean] = ACTIONS(335),
    [anon_sym_byte] = ACTIONS(335),
    [anon_sym_short] = ACTIONS(335),
    [anon_sym_int] = ACTIONS(335),
    [anon_sym_long] = ACTIONS(335),
    [anon_sym_char] = ACTIONS(335),
    [anon_sym_float] = ACTIONS(335),
    [anon_sym_double] = ACTIONS(335),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_open] = ACTIONS(335),
    [anon_sym_module] = ACTIONS(335),
    [anon_sym_static] = ACTIONS(335),
    [anon_sym_package] = ACTIONS(335),
    [anon_sym_class] = ACTIONS(335),
    [anon_sym_public] = ACTIONS(335),
    [anon_sym_protected] = ACTIONS(335),
    [anon_sym_private] = ACTIONS(335),
    [anon_sym_abstract] = ACTIONS(335),
    [anon_sym_final] = ACTIONS(335),
    [anon_sym_strictfp] = ACTIONS(335),
    [anon_sym_synchronized] = ACTIONS(335),
    [anon_sym_native] = ACTIONS(335),
    [anon_sym_interface] = ACTIONS(335),
    [sym_identifier] = ACTIONS(337),
    [sym_comment] = ACTIONS(58),
  },
  [82] = {
    [sym__semicolon] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(339),
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_RBRACE] = ACTIONS(339),
    [anon_sym_default] = ACTIONS(343),
    [anon_sym_DOT] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(339),
    [anon_sym_boolean] = ACTIONS(343),
    [anon_sym_byte] = ACTIONS(343),
    [anon_sym_short] = ACTIONS(343),
    [anon_sym_int] = ACTIONS(343),
    [anon_sym_long] = ACTIONS(343),
    [anon_sym_char] = ACTIONS(343),
    [anon_sym_float] = ACTIONS(343),
    [anon_sym_double] = ACTIONS(343),
    [anon_sym_AT] = ACTIONS(339),
    [anon_sym_open] = ACTIONS(343),
    [anon_sym_module] = ACTIONS(343),
    [anon_sym_static] = ACTIONS(343),
    [anon_sym_package] = ACTIONS(343),
    [anon_sym_class] = ACTIONS(343),
    [anon_sym_public] = ACTIONS(343),
    [anon_sym_protected] = ACTIONS(343),
    [anon_sym_private] = ACTIONS(343),
    [anon_sym_abstract] = ACTIONS(343),
    [anon_sym_final] = ACTIONS(343),
    [anon_sym_strictfp] = ACTIONS(343),
    [anon_sym_synchronized] = ACTIONS(343),
    [anon_sym_native] = ACTIONS(343),
    [anon_sym_interface] = ACTIONS(343),
    [sym_identifier] = ACTIONS(347),
    [sym_comment] = ACTIONS(58),
  },
  [83] = {
    [sym_module_identifier] = STATE(165),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(58),
  },
  [84] = {
    [aux_sym_module_identifier_repeat1] = STATE(167),
    [anon_sym_LBRACE] = ACTIONS(349),
    [anon_sym_DOT] = ACTIONS(351),
    [sym_comment] = ACTIONS(58),
  },
  [85] = {
    [anon_sym_LBRACE] = ACTIONS(353),
    [sym_comment] = ACTIONS(58),
  },
  [86] = {
    [aux_sym_module_identifier_repeat1] = STATE(170),
    [sym__semicolon] = ACTIONS(355),
    [anon_sym_DOT] = ACTIONS(351),
    [sym_comment] = ACTIONS(58),
  },
  [87] = {
    [sym_package_or_type_name] = STATE(171),
    [sym_identifier] = ACTIONS(357),
    [sym_comment] = ACTIONS(58),
  },
  [88] = {
    [sym__semicolon] = ACTIONS(359),
    [anon_sym_DOT] = ACTIONS(361),
    [sym_comment] = ACTIONS(58),
  },
  [89] = {
    [sym_type_parameters] = STATE(178),
    [sym_superclass] = STATE(179),
    [sym_super_interfaces] = STATE(180),
    [sym_class_body] = STATE(181),
    [anon_sym_LT] = ACTIONS(363),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_extends] = ACTIONS(367),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [90] = {
    [sym_type_parameters] = STATE(184),
    [sym_extends_interfaces] = STATE(185),
    [sym_interface_body] = STATE(186),
    [anon_sym_LT] = ACTIONS(363),
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_extends] = ACTIONS(373),
    [sym_comment] = ACTIONS(58),
  },
  [91] = {
    [sym_type_argument] = STATE(189),
    [sym_reference_type] = STATE(190),
    [sym_class_or_interface_type] = STATE(191),
    [sym_primitive_type] = STATE(192),
    [sym_integral_type] = STATE(187),
    [sym_floating_point_type] = STATE(187),
    [sym__annotation] = STATE(104),
    [sym_normal_annotation] = STATE(105),
    [sym_marker_annotation] = STATE(105),
    [sym_single_element_annotation] = STATE(105),
    [aux_sym_class_or_interface_type_repeat1] = STATE(193),
    [anon_sym_boolean] = ACTIONS(375),
    [anon_sym_void] = ACTIONS(375),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(377),
    [sym_comment] = ACTIONS(58),
  },
  [92] = {
    [anon_sym_DOT] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_AT] = ACTIONS(381),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(381),
    [sym_identifier] = ACTIONS(379),
    [sym_comment] = ACTIONS(58),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(383),
    [sym_decimal_integer_literal] = ACTIONS(385),
    [sym_hex_integer_literal] = ACTIONS(385),
    [sym_octal_integer_literal] = ACTIONS(385),
    [sym_binary_integer_literal] = ACTIONS(385),
    [sym_decimal_floating_point_literal] = ACTIONS(385),
    [sym_hex_floating_point_literal] = ACTIONS(387),
    [anon_sym_true] = ACTIONS(385),
    [anon_sym_false] = ACTIONS(385),
    [anon_sym_SQUOTE] = ACTIONS(383),
    [sym_string_literal] = ACTIONS(383),
    [sym_null_literal] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(383),
    [anon_sym_LPAREN] = ACTIONS(383),
    [anon_sym_BANG] = ACTIONS(383),
    [anon_sym_TILDE] = ACTIONS(383),
    [anon_sym_PLUS_PLUS] = ACTIONS(383),
    [anon_sym_DASH_DASH] = ACTIONS(383),
    [anon_sym_default] = ACTIONS(385),
    [anon_sym_boolean] = ACTIONS(385),
    [anon_sym_byte] = ACTIONS(385),
    [anon_sym_short] = ACTIONS(385),
    [anon_sym_int] = ACTIONS(385),
    [anon_sym_long] = ACTIONS(385),
    [anon_sym_char] = ACTIONS(385),
    [anon_sym_float] = ACTIONS(385),
    [anon_sym_double] = ACTIONS(385),
    [anon_sym_AT] = ACTIONS(383),
    [anon_sym_open] = ACTIONS(385),
    [anon_sym_module] = ACTIONS(385),
    [anon_sym_static] = ACTIONS(385),
    [anon_sym_package] = ACTIONS(385),
    [anon_sym_import] = ACTIONS(385),
    [anon_sym_class] = ACTIONS(385),
    [anon_sym_public] = ACTIONS(385),
    [anon_sym_protected] = ACTIONS(385),
    [anon_sym_private] = ACTIONS(385),
    [anon_sym_abstract] = ACTIONS(385),
    [anon_sym_final] = ACTIONS(385),
    [anon_sym_strictfp] = ACTIONS(385),
    [anon_sym_synchronized] = ACTIONS(385),
    [anon_sym_native] = ACTIONS(385),
    [anon_sym_interface] = ACTIONS(385),
    [sym_identifier] = ACTIONS(387),
    [sym_comment] = ACTIONS(58),
  },
  [94] = {
    [sym__expression] = STATE(194),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_PLUS_PLUS] = ACTIONS(32),
    [anon_sym_DASH_DASH] = ACTIONS(32),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [95] = {
    [sym__expression] = STATE(195),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_PLUS_PLUS] = ACTIONS(32),
    [anon_sym_DASH_DASH] = ACTIONS(32),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [96] = {
    [sym__expression] = STATE(196),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_PLUS_PLUS] = ACTIONS(32),
    [anon_sym_DASH_DASH] = ACTIONS(32),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [97] = {
    [sym__expression] = STATE(197),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_PLUS_PLUS] = ACTIONS(32),
    [anon_sym_DASH_DASH] = ACTIONS(32),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [98] = {
    [sym__expression] = STATE(198),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_PLUS_PLUS] = ACTIONS(32),
    [anon_sym_DASH_DASH] = ACTIONS(32),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [99] = {
    [sym__expression] = STATE(201),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [100] = {
    [sym__semicolon] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_EQ_EQ] = ACTIONS(327),
    [anon_sym_GT_EQ] = ACTIONS(327),
    [anon_sym_LT_EQ] = ACTIONS(327),
    [anon_sym_BANG_EQ] = ACTIONS(327),
    [anon_sym_AMP_AMP] = ACTIONS(327),
    [anon_sym_PIPE_PIPE] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(327),
    [anon_sym_SLASH] = ACTIONS(329),
    [anon_sym_AMP] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(329),
    [anon_sym_CARET] = ACTIONS(327),
    [anon_sym_PERCENT] = ACTIONS(327),
    [anon_sym_LT_LT] = ACTIONS(327),
    [anon_sym_GT_GT] = ACTIONS(329),
    [anon_sym_GT_GT_GT] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_QMARK] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(327),
    [anon_sym_PLUS_PLUS] = ACTIONS(327),
    [anon_sym_DASH_DASH] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [sym_comment] = ACTIONS(58),
  },
  [101] = {
    [sym__expression] = STATE(204),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_lambda_body] = STATE(205),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_PLUS_PLUS] = ACTIONS(395),
    [anon_sym_DASH_DASH] = ACTIONS(395),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [102] = {
    [sym_package_or_type_name] = STATE(207),
    [sym_identifier] = ACTIONS(397),
    [sym_comment] = ACTIONS(58),
  },
  [103] = {
    [sym_type_arguments] = STATE(92),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(132),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(58),
  },
  [104] = {
    [anon_sym_boolean] = ACTIONS(181),
    [anon_sym_byte] = ACTIONS(181),
    [anon_sym_short] = ACTIONS(181),
    [anon_sym_int] = ACTIONS(181),
    [anon_sym_long] = ACTIONS(181),
    [anon_sym_char] = ACTIONS(181),
    [anon_sym_float] = ACTIONS(181),
    [anon_sym_double] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(271),
    [sym_identifier] = ACTIONS(399),
    [sym_comment] = ACTIONS(58),
  },
  [105] = {
    [anon_sym_boolean] = ACTIONS(185),
    [anon_sym_byte] = ACTIONS(185),
    [anon_sym_short] = ACTIONS(185),
    [anon_sym_int] = ACTIONS(185),
    [anon_sym_long] = ACTIONS(185),
    [anon_sym_char] = ACTIONS(185),
    [anon_sym_float] = ACTIONS(185),
    [anon_sym_double] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(183),
    [sym_identifier] = ACTIONS(187),
    [sym_comment] = ACTIONS(58),
  },
  [106] = {
    [sym_method_declarator] = STATE(208),
    [sym_identifier] = ACTIONS(229),
    [sym_comment] = ACTIONS(58),
  },
  [107] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(158),
    [sym_normal_annotation] = STATE(105),
    [sym_marker_annotation] = STATE(105),
    [sym_single_element_annotation] = STATE(105),
    [sym_unann_type] = STATE(209),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [108] = {
    [anon_sym_LPAREN] = ACTIONS(401),
    [sym_comment] = ACTIONS(58),
  },
  [109] = {
    [sym_throws] = STATE(212),
    [sym__semicolon] = ACTIONS(403),
    [anon_sym_LBRACE] = ACTIONS(403),
    [anon_sym_throws] = ACTIONS(405),
    [sym_comment] = ACTIONS(58),
  },
  [110] = {
    [anon_sym_RBRACK] = ACTIONS(407),
    [sym_comment] = ACTIONS(58),
  },
  [111] = {
    [sym_package_or_type_name] = STATE(82),
    [sym_identifier] = ACTIONS(357),
    [sym_comment] = ACTIONS(58),
  },
  [112] = {
    [anon_sym_DOT_DOT_DOT] = ACTIONS(409),
    [sym_identifier] = ACTIONS(411),
    [sym_comment] = ACTIONS(58),
  },
  [113] = {
    [sym__annotation] = STATE(122),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [114] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(215),
    [sym__semicolon] = ACTIONS(415),
    [anon_sym_EQ] = ACTIONS(415),
    [anon_sym_GT] = ACTIONS(415),
    [anon_sym_RPAREN] = ACTIONS(415),
    [anon_sym_COMMA] = ACTIONS(415),
    [anon_sym_LBRACE] = ACTIONS(415),
    [anon_sym_DOT] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_COLON_COLON] = ACTIONS(415),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(415),
    [sym_identifier] = ACTIONS(417),
    [sym_comment] = ACTIONS(58),
  },
  [115] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(217),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(419),
    [sym_comment] = ACTIONS(58),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(421),
    [sym_decimal_integer_literal] = ACTIONS(423),
    [sym_hex_integer_literal] = ACTIONS(423),
    [sym_octal_integer_literal] = ACTIONS(423),
    [sym_binary_integer_literal] = ACTIONS(423),
    [sym_decimal_floating_point_literal] = ACTIONS(423),
    [sym_hex_floating_point_literal] = ACTIONS(425),
    [anon_sym_true] = ACTIONS(423),
    [anon_sym_false] = ACTIONS(423),
    [anon_sym_SQUOTE] = ACTIONS(421),
    [sym_string_literal] = ACTIONS(421),
    [sym_null_literal] = ACTIONS(423),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_BANG] = ACTIONS(421),
    [anon_sym_TILDE] = ACTIONS(421),
    [anon_sym_PLUS_PLUS] = ACTIONS(421),
    [anon_sym_DASH_DASH] = ACTIONS(421),
    [anon_sym_default] = ACTIONS(423),
    [anon_sym_boolean] = ACTIONS(423),
    [anon_sym_byte] = ACTIONS(423),
    [anon_sym_short] = ACTIONS(423),
    [anon_sym_int] = ACTIONS(423),
    [anon_sym_long] = ACTIONS(423),
    [anon_sym_char] = ACTIONS(423),
    [anon_sym_float] = ACTIONS(423),
    [anon_sym_double] = ACTIONS(423),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_open] = ACTIONS(423),
    [anon_sym_module] = ACTIONS(423),
    [anon_sym_static] = ACTIONS(423),
    [anon_sym_package] = ACTIONS(423),
    [anon_sym_import] = ACTIONS(423),
    [anon_sym_class] = ACTIONS(423),
    [anon_sym_public] = ACTIONS(423),
    [anon_sym_protected] = ACTIONS(423),
    [anon_sym_private] = ACTIONS(423),
    [anon_sym_abstract] = ACTIONS(423),
    [anon_sym_final] = ACTIONS(423),
    [anon_sym_strictfp] = ACTIONS(423),
    [anon_sym_synchronized] = ACTIONS(423),
    [anon_sym_native] = ACTIONS(423),
    [anon_sym_interface] = ACTIONS(423),
    [sym_identifier] = ACTIONS(425),
    [sym_comment] = ACTIONS(58),
  },
  [117] = {
    [sym_statement] = STATE(223),
    [sym_if_then_statement] = STATE(224),
    [sym_if_then_else_statement] = STATE(224),
    [sym__annotation] = STATE(219),
    [sym_normal_annotation] = STATE(225),
    [sym_marker_annotation] = STATE(225),
    [sym_single_element_annotation] = STATE(225),
    [sym_class_declaration] = STATE(223),
    [sym_normal_class_declaration] = STATE(226),
    [sym_modifier] = STATE(227),
    [sym_block_statements] = STATE(228),
    [sym_block_statement] = STATE(229),
    [sym_local_variable_declaration_statement] = STATE(223),
    [sym_local_variable_declaration] = STATE(230),
    [aux_sym_normal_class_declaration_repeat1] = STATE(231),
    [anon_sym_RBRACE] = ACTIONS(427),
    [anon_sym_default] = ACTIONS(429),
    [anon_sym_if] = ACTIONS(431),
    [anon_sym_AT] = ACTIONS(433),
    [anon_sym_static] = ACTIONS(429),
    [anon_sym_class] = ACTIONS(435),
    [anon_sym_public] = ACTIONS(429),
    [anon_sym_protected] = ACTIONS(429),
    [anon_sym_private] = ACTIONS(429),
    [anon_sym_abstract] = ACTIONS(429),
    [anon_sym_final] = ACTIONS(429),
    [anon_sym_strictfp] = ACTIONS(429),
    [anon_sym_synchronized] = ACTIONS(429),
    [anon_sym_native] = ACTIONS(429),
    [sym_comment] = ACTIONS(58),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(437),
    [sym_decimal_integer_literal] = ACTIONS(439),
    [sym_hex_integer_literal] = ACTIONS(439),
    [sym_octal_integer_literal] = ACTIONS(439),
    [sym_binary_integer_literal] = ACTIONS(439),
    [sym_decimal_floating_point_literal] = ACTIONS(439),
    [sym_hex_floating_point_literal] = ACTIONS(441),
    [anon_sym_true] = ACTIONS(439),
    [anon_sym_false] = ACTIONS(439),
    [anon_sym_SQUOTE] = ACTIONS(437),
    [sym_string_literal] = ACTIONS(437),
    [sym_null_literal] = ACTIONS(439),
    [anon_sym_LT] = ACTIONS(437),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_BANG] = ACTIONS(437),
    [anon_sym_TILDE] = ACTIONS(437),
    [anon_sym_PLUS_PLUS] = ACTIONS(437),
    [anon_sym_DASH_DASH] = ACTIONS(437),
    [anon_sym_default] = ACTIONS(439),
    [anon_sym_boolean] = ACTIONS(439),
    [anon_sym_byte] = ACTIONS(439),
    [anon_sym_short] = ACTIONS(439),
    [anon_sym_int] = ACTIONS(439),
    [anon_sym_long] = ACTIONS(439),
    [anon_sym_char] = ACTIONS(439),
    [anon_sym_float] = ACTIONS(439),
    [anon_sym_double] = ACTIONS(439),
    [anon_sym_AT] = ACTIONS(437),
    [anon_sym_open] = ACTIONS(439),
    [anon_sym_module] = ACTIONS(439),
    [anon_sym_static] = ACTIONS(439),
    [anon_sym_package] = ACTIONS(439),
    [anon_sym_import] = ACTIONS(439),
    [anon_sym_class] = ACTIONS(439),
    [anon_sym_public] = ACTIONS(439),
    [anon_sym_protected] = ACTIONS(439),
    [anon_sym_private] = ACTIONS(439),
    [anon_sym_abstract] = ACTIONS(439),
    [anon_sym_final] = ACTIONS(439),
    [anon_sym_strictfp] = ACTIONS(439),
    [anon_sym_synchronized] = ACTIONS(439),
    [anon_sym_native] = ACTIONS(439),
    [anon_sym_interface] = ACTIONS(439),
    [sym_identifier] = ACTIONS(441),
    [sym_comment] = ACTIONS(58),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [sym_decimal_integer_literal] = ACTIONS(445),
    [sym_hex_integer_literal] = ACTIONS(445),
    [sym_octal_integer_literal] = ACTIONS(445),
    [sym_binary_integer_literal] = ACTIONS(445),
    [sym_decimal_floating_point_literal] = ACTIONS(445),
    [sym_hex_floating_point_literal] = ACTIONS(447),
    [anon_sym_true] = ACTIONS(445),
    [anon_sym_false] = ACTIONS(445),
    [anon_sym_SQUOTE] = ACTIONS(443),
    [sym_string_literal] = ACTIONS(443),
    [sym_null_literal] = ACTIONS(445),
    [anon_sym_LT] = ACTIONS(443),
    [anon_sym_LPAREN] = ACTIONS(443),
    [anon_sym_BANG] = ACTIONS(443),
    [anon_sym_TILDE] = ACTIONS(443),
    [anon_sym_PLUS_PLUS] = ACTIONS(443),
    [anon_sym_DASH_DASH] = ACTIONS(443),
    [anon_sym_default] = ACTIONS(445),
    [anon_sym_boolean] = ACTIONS(445),
    [anon_sym_byte] = ACTIONS(445),
    [anon_sym_short] = ACTIONS(445),
    [anon_sym_int] = ACTIONS(445),
    [anon_sym_long] = ACTIONS(445),
    [anon_sym_char] = ACTIONS(445),
    [anon_sym_float] = ACTIONS(445),
    [anon_sym_double] = ACTIONS(445),
    [anon_sym_AT] = ACTIONS(443),
    [anon_sym_open] = ACTIONS(445),
    [anon_sym_module] = ACTIONS(445),
    [anon_sym_static] = ACTIONS(445),
    [anon_sym_package] = ACTIONS(445),
    [anon_sym_import] = ACTIONS(445),
    [anon_sym_class] = ACTIONS(445),
    [anon_sym_public] = ACTIONS(445),
    [anon_sym_protected] = ACTIONS(445),
    [anon_sym_private] = ACTIONS(445),
    [anon_sym_abstract] = ACTIONS(445),
    [anon_sym_final] = ACTIONS(445),
    [anon_sym_strictfp] = ACTIONS(445),
    [anon_sym_synchronized] = ACTIONS(445),
    [anon_sym_native] = ACTIONS(445),
    [anon_sym_interface] = ACTIONS(445),
    [sym_identifier] = ACTIONS(447),
    [sym_comment] = ACTIONS(58),
  },
  [120] = {
    [anon_sym_module] = ACTIONS(449),
    [sym_comment] = ACTIONS(58),
  },
  [121] = {
    [sym_identifier] = ACTIONS(451),
    [sym_comment] = ACTIONS(58),
  },
  [122] = {
    [anon_sym_LBRACK] = ACTIONS(453),
    [anon_sym_AT] = ACTIONS(453),
    [anon_sym_open] = ACTIONS(453),
    [anon_sym_module] = ACTIONS(453),
    [anon_sym_package] = ACTIONS(453),
    [sym_comment] = ACTIONS(58),
  },
  [123] = {
    [sym_package_or_type_name] = STATE(236),
    [anon_sym_interface] = ACTIONS(455),
    [sym_identifier] = ACTIONS(457),
    [sym_comment] = ACTIONS(58),
  },
  [124] = {
    [sym_identifier] = ACTIONS(459),
    [sym_comment] = ACTIONS(58),
  },
  [125] = {
    [sym_identifier] = ACTIONS(461),
    [sym_comment] = ACTIONS(58),
  },
  [126] = {
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_default] = ACTIONS(185),
    [anon_sym_boolean] = ACTIONS(185),
    [anon_sym_byte] = ACTIONS(185),
    [anon_sym_short] = ACTIONS(185),
    [anon_sym_int] = ACTIONS(185),
    [anon_sym_long] = ACTIONS(185),
    [anon_sym_char] = ACTIONS(185),
    [anon_sym_float] = ACTIONS(185),
    [anon_sym_double] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(183),
    [anon_sym_static] = ACTIONS(185),
    [anon_sym_class] = ACTIONS(185),
    [anon_sym_public] = ACTIONS(185),
    [anon_sym_protected] = ACTIONS(185),
    [anon_sym_private] = ACTIONS(185),
    [anon_sym_abstract] = ACTIONS(185),
    [anon_sym_final] = ACTIONS(185),
    [anon_sym_strictfp] = ACTIONS(185),
    [anon_sym_synchronized] = ACTIONS(185),
    [anon_sym_native] = ACTIONS(185),
    [anon_sym_interface] = ACTIONS(185),
    [sym_identifier] = ACTIONS(187),
    [sym_comment] = ACTIONS(58),
  },
  [127] = {
    [anon_sym_LT] = ACTIONS(463),
    [anon_sym_default] = ACTIONS(465),
    [anon_sym_boolean] = ACTIONS(465),
    [anon_sym_byte] = ACTIONS(465),
    [anon_sym_short] = ACTIONS(465),
    [anon_sym_int] = ACTIONS(465),
    [anon_sym_long] = ACTIONS(465),
    [anon_sym_char] = ACTIONS(465),
    [anon_sym_float] = ACTIONS(465),
    [anon_sym_double] = ACTIONS(465),
    [anon_sym_AT] = ACTIONS(463),
    [anon_sym_static] = ACTIONS(465),
    [anon_sym_class] = ACTIONS(465),
    [anon_sym_public] = ACTIONS(465),
    [anon_sym_protected] = ACTIONS(465),
    [anon_sym_private] = ACTIONS(465),
    [anon_sym_abstract] = ACTIONS(465),
    [anon_sym_final] = ACTIONS(465),
    [anon_sym_strictfp] = ACTIONS(465),
    [anon_sym_synchronized] = ACTIONS(465),
    [anon_sym_native] = ACTIONS(465),
    [anon_sym_interface] = ACTIONS(465),
    [sym_identifier] = ACTIONS(467),
    [sym_comment] = ACTIONS(58),
  },
  [128] = {
    [sym_method_body] = STATE(239),
    [sym_block] = STATE(116),
    [sym__semicolon] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(243),
    [sym_comment] = ACTIONS(58),
  },
  [129] = {
    [sym__semicolon] = ACTIONS(469),
    [anon_sym_RPAREN] = ACTIONS(469),
    [anon_sym_COMMA] = ACTIONS(469),
    [anon_sym_RBRACE] = ACTIONS(469),
    [anon_sym_DOT] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(469),
    [anon_sym_COLON_COLON] = ACTIONS(469),
    [sym_comment] = ACTIONS(58),
  },
  [130] = {
    [anon_sym_SQUOTE] = ACTIONS(471),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(471),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(471),
    [sym_comment] = ACTIONS(70),
  },
  [131] = {
    [anon_sym_LPAREN] = ACTIONS(333),
    [anon_sym_DOT] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [sym_identifier] = ACTIONS(335),
    [sym_comment] = ACTIONS(58),
  },
  [132] = {
    [anon_sym_LPAREN] = ACTIONS(473),
    [anon_sym_DOT] = ACTIONS(475),
    [anon_sym_AT] = ACTIONS(339),
    [sym_identifier] = ACTIONS(343),
    [sym_comment] = ACTIONS(58),
  },
  [133] = {
    [sym_class_or_interface_type] = STATE(242),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(243),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(58),
  },
  [134] = {
    [anon_sym_GT] = ACTIONS(479),
    [anon_sym_COMMA] = ACTIONS(479),
    [sym_comment] = ACTIONS(58),
  },
  [135] = {
    [anon_sym_boolean] = ACTIONS(481),
    [anon_sym_byte] = ACTIONS(481),
    [anon_sym_short] = ACTIONS(481),
    [anon_sym_int] = ACTIONS(481),
    [anon_sym_long] = ACTIONS(481),
    [anon_sym_char] = ACTIONS(481),
    [anon_sym_float] = ACTIONS(481),
    [anon_sym_double] = ACTIONS(481),
    [anon_sym_AT] = ACTIONS(483),
    [sym_identifier] = ACTIONS(485),
    [sym_comment] = ACTIONS(58),
  },
  [136] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [sym_type_parameter] = STATE(244),
    [aux_sym_class_or_interface_type_repeat1] = STATE(56),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(58),
  },
  [137] = {
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_COMMA] = ACTIONS(489),
    [sym_comment] = ACTIONS(58),
  },
  [138] = {
    [sym_type_bound] = STATE(246),
    [anon_sym_GT] = ACTIONS(479),
    [anon_sym_COMMA] = ACTIONS(479),
    [anon_sym_extends] = ACTIONS(269),
    [sym_comment] = ACTIONS(58),
  },
  [139] = {
    [anon_sym_AT] = ACTIONS(453),
    [sym_identifier] = ACTIONS(491),
    [sym_comment] = ACTIONS(58),
  },
  [140] = {
    [anon_sym_COMMA] = ACTIONS(493),
    [sym_comment] = ACTIONS(58),
  },
  [141] = {
    [anon_sym_RPAREN] = ACTIONS(495),
    [sym_identifier] = ACTIONS(497),
    [sym_comment] = ACTIONS(58),
  },
  [142] = {
    [anon_sym_LPAREN] = ACTIONS(333),
    [anon_sym_default] = ACTIONS(335),
    [anon_sym_DOT] = ACTIONS(333),
    [anon_sym_boolean] = ACTIONS(335),
    [anon_sym_byte] = ACTIONS(335),
    [anon_sym_short] = ACTIONS(335),
    [anon_sym_int] = ACTIONS(335),
    [anon_sym_long] = ACTIONS(335),
    [anon_sym_char] = ACTIONS(335),
    [anon_sym_float] = ACTIONS(335),
    [anon_sym_double] = ACTIONS(335),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_static] = ACTIONS(335),
    [anon_sym_public] = ACTIONS(335),
    [anon_sym_protected] = ACTIONS(335),
    [anon_sym_private] = ACTIONS(335),
    [anon_sym_abstract] = ACTIONS(335),
    [anon_sym_final] = ACTIONS(335),
    [anon_sym_strictfp] = ACTIONS(335),
    [anon_sym_synchronized] = ACTIONS(335),
    [anon_sym_native] = ACTIONS(335),
    [sym_identifier] = ACTIONS(337),
    [sym_comment] = ACTIONS(58),
  },
  [143] = {
    [anon_sym_LPAREN] = ACTIONS(499),
    [anon_sym_default] = ACTIONS(343),
    [anon_sym_DOT] = ACTIONS(501),
    [anon_sym_boolean] = ACTIONS(343),
    [anon_sym_byte] = ACTIONS(343),
    [anon_sym_short] = ACTIONS(343),
    [anon_sym_int] = ACTIONS(343),
    [anon_sym_long] = ACTIONS(343),
    [anon_sym_char] = ACTIONS(343),
    [anon_sym_float] = ACTIONS(343),
    [anon_sym_double] = ACTIONS(343),
    [anon_sym_AT] = ACTIONS(339),
    [anon_sym_static] = ACTIONS(343),
    [anon_sym_public] = ACTIONS(343),
    [anon_sym_protected] = ACTIONS(343),
    [anon_sym_private] = ACTIONS(343),
    [anon_sym_abstract] = ACTIONS(343),
    [anon_sym_final] = ACTIONS(343),
    [anon_sym_strictfp] = ACTIONS(343),
    [anon_sym_synchronized] = ACTIONS(343),
    [anon_sym_native] = ACTIONS(343),
    [sym_identifier] = ACTIONS(347),
    [sym_comment] = ACTIONS(58),
  },
  [144] = {
    [sym_type_argument] = STATE(251),
    [sym_reference_type] = STATE(190),
    [sym_class_or_interface_type] = STATE(191),
    [sym_primitive_type] = STATE(192),
    [sym_integral_type] = STATE(187),
    [sym_floating_point_type] = STATE(187),
    [sym__annotation] = STATE(104),
    [sym_normal_annotation] = STATE(105),
    [sym_marker_annotation] = STATE(105),
    [sym_single_element_annotation] = STATE(105),
    [aux_sym_class_or_interface_type_repeat1] = STATE(193),
    [anon_sym_boolean] = ACTIONS(375),
    [anon_sym_void] = ACTIONS(375),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(377),
    [sym_comment] = ACTIONS(58),
  },
  [145] = {
    [anon_sym_DOT] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_AT] = ACTIONS(381),
    [anon_sym_this] = ACTIONS(379),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(381),
    [sym_identifier] = ACTIONS(503),
    [sym_comment] = ACTIONS(58),
  },
  [146] = {
    [anon_sym_DASH_GT] = ACTIONS(505),
    [sym_comment] = ACTIONS(58),
  },
  [147] = {
    [anon_sym_RPAREN] = ACTIONS(507),
    [anon_sym_COMMA] = ACTIONS(507),
    [sym_comment] = ACTIONS(58),
  },
  [148] = {
    [sym_variable_declarator] = STATE(253),
    [sym_variable_declarator_id] = STATE(254),
    [sym_identifier] = ACTIONS(509),
    [sym_comment] = ACTIONS(58),
  },
  [149] = {
    [sym_dims] = STATE(256),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(113),
    [aux_sym_dims_repeat1] = STATE(114),
    [anon_sym_RPAREN] = ACTIONS(511),
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_DOT] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [150] = {
    [anon_sym_RPAREN] = ACTIONS(515),
    [anon_sym_COMMA] = ACTIONS(515),
    [sym_comment] = ACTIONS(58),
  },
  [151] = {
    [anon_sym_RBRACK] = ACTIONS(517),
    [sym_comment] = ACTIONS(58),
  },
  [152] = {
    [anon_sym_this] = ACTIONS(411),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(409),
    [sym_identifier] = ACTIONS(519),
    [sym_comment] = ACTIONS(58),
  },
  [153] = {
    [sym__annotation] = STATE(122),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(521),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [154] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(259),
    [anon_sym_LBRACK] = ACTIONS(521),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_this] = ACTIONS(417),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(415),
    [sym_identifier] = ACTIONS(523),
    [sym_comment] = ACTIONS(58),
  },
  [155] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(261),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(525),
    [sym_comment] = ACTIONS(58),
  },
  [156] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(58),
    [sym_normal_annotation] = STATE(66),
    [sym_marker_annotation] = STATE(66),
    [sym_single_element_annotation] = STATE(66),
    [sym_modifier] = STATE(67),
    [sym_unann_type] = STATE(262),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_formal_parameter] = STATE(263),
    [sym_last_formal_parameter] = STATE(264),
    [aux_sym_normal_class_declaration_repeat1] = STATE(76),
    [anon_sym_default] = ACTIONS(80),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(88),
    [anon_sym_static] = ACTIONS(80),
    [anon_sym_public] = ACTIONS(80),
    [anon_sym_protected] = ACTIONS(80),
    [anon_sym_private] = ACTIONS(80),
    [anon_sym_abstract] = ACTIONS(80),
    [anon_sym_final] = ACTIONS(80),
    [anon_sym_strictfp] = ACTIONS(80),
    [anon_sym_synchronized] = ACTIONS(80),
    [anon_sym_native] = ACTIONS(80),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [157] = {
    [anon_sym_COMMA] = ACTIONS(527),
    [sym_comment] = ACTIONS(58),
  },
  [158] = {
    [anon_sym_boolean] = ACTIONS(491),
    [anon_sym_byte] = ACTIONS(491),
    [anon_sym_short] = ACTIONS(491),
    [anon_sym_int] = ACTIONS(491),
    [anon_sym_long] = ACTIONS(491),
    [anon_sym_char] = ACTIONS(491),
    [anon_sym_float] = ACTIONS(491),
    [anon_sym_double] = ACTIONS(491),
    [anon_sym_AT] = ACTIONS(453),
    [sym_identifier] = ACTIONS(529),
    [sym_comment] = ACTIONS(58),
  },
  [159] = {
    [anon_sym_this] = ACTIONS(531),
    [sym_identifier] = ACTIONS(533),
    [sym_comment] = ACTIONS(58),
  },
  [160] = {
    [anon_sym_default] = ACTIONS(465),
    [anon_sym_boolean] = ACTIONS(465),
    [anon_sym_byte] = ACTIONS(465),
    [anon_sym_short] = ACTIONS(465),
    [anon_sym_int] = ACTIONS(465),
    [anon_sym_long] = ACTIONS(465),
    [anon_sym_char] = ACTIONS(465),
    [anon_sym_float] = ACTIONS(465),
    [anon_sym_double] = ACTIONS(465),
    [anon_sym_AT] = ACTIONS(463),
    [anon_sym_static] = ACTIONS(465),
    [anon_sym_public] = ACTIONS(465),
    [anon_sym_protected] = ACTIONS(465),
    [anon_sym_private] = ACTIONS(465),
    [anon_sym_abstract] = ACTIONS(465),
    [anon_sym_final] = ACTIONS(465),
    [anon_sym_strictfp] = ACTIONS(465),
    [anon_sym_synchronized] = ACTIONS(465),
    [anon_sym_native] = ACTIONS(465),
    [sym_identifier] = ACTIONS(467),
    [sym_comment] = ACTIONS(58),
  },
  [161] = {
    [sym_variable_declarator_id] = STATE(269),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(535),
    [sym_identifier] = ACTIONS(509),
    [sym_comment] = ACTIONS(58),
  },
  [162] = {
    [sym_annotation_type_body] = STATE(271),
    [anon_sym_LBRACE] = ACTIONS(537),
    [sym_comment] = ACTIONS(58),
  },
  [163] = {
    [sym__literal] = STATE(274),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(275),
    [sym_element_value_pair] = STATE(276),
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
    [sym_null_literal] = ACTIONS(24),
    [anon_sym_RPAREN] = ACTIONS(539),
    [sym_identifier] = ACTIONS(541),
    [sym_comment] = ACTIONS(58),
  },
  [164] = {
    [sym_identifier] = ACTIONS(543),
    [sym_comment] = ACTIONS(58),
  },
  [165] = {
    [anon_sym_LBRACE] = ACTIONS(545),
    [sym_comment] = ACTIONS(58),
  },
  [166] = {
    [sym_identifier] = ACTIONS(547),
    [sym_comment] = ACTIONS(58),
  },
  [167] = {
    [anon_sym_LBRACE] = ACTIONS(549),
    [anon_sym_DOT] = ACTIONS(551),
    [sym_comment] = ACTIONS(58),
  },
  [168] = {
    [sym_module_directive] = STATE(286),
    [aux_sym_module_declaration_repeat1] = STATE(287),
    [anon_sym_RBRACE] = ACTIONS(553),
    [anon_sym_requires] = ACTIONS(555),
    [anon_sym_exports] = ACTIONS(557),
    [anon_sym_opens] = ACTIONS(557),
    [anon_sym_uses] = ACTIONS(559),
    [anon_sym_provides] = ACTIONS(561),
    [sym_comment] = ACTIONS(58),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(563),
    [sym_decimal_integer_literal] = ACTIONS(565),
    [sym_hex_integer_literal] = ACTIONS(565),
    [sym_octal_integer_literal] = ACTIONS(565),
    [sym_binary_integer_literal] = ACTIONS(565),
    [sym_decimal_floating_point_literal] = ACTIONS(565),
    [sym_hex_floating_point_literal] = ACTIONS(567),
    [anon_sym_true] = ACTIONS(565),
    [anon_sym_false] = ACTIONS(565),
    [anon_sym_SQUOTE] = ACTIONS(563),
    [sym_string_literal] = ACTIONS(563),
    [sym_null_literal] = ACTIONS(565),
    [anon_sym_LT] = ACTIONS(563),
    [anon_sym_LPAREN] = ACTIONS(563),
    [anon_sym_BANG] = ACTIONS(563),
    [anon_sym_TILDE] = ACTIONS(563),
    [anon_sym_PLUS_PLUS] = ACTIONS(563),
    [anon_sym_DASH_DASH] = ACTIONS(563),
    [anon_sym_default] = ACTIONS(565),
    [anon_sym_boolean] = ACTIONS(565),
    [anon_sym_byte] = ACTIONS(565),
    [anon_sym_short] = ACTIONS(565),
    [anon_sym_int] = ACTIONS(565),
    [anon_sym_long] = ACTIONS(565),
    [anon_sym_char] = ACTIONS(565),
    [anon_sym_float] = ACTIONS(565),
    [anon_sym_double] = ACTIONS(565),
    [anon_sym_AT] = ACTIONS(563),
    [anon_sym_open] = ACTIONS(565),
    [anon_sym_module] = ACTIONS(565),
    [anon_sym_static] = ACTIONS(565),
    [anon_sym_package] = ACTIONS(565),
    [anon_sym_import] = ACTIONS(565),
    [anon_sym_class] = ACTIONS(565),
    [anon_sym_public] = ACTIONS(565),
    [anon_sym_protected] = ACTIONS(565),
    [anon_sym_private] = ACTIONS(565),
    [anon_sym_abstract] = ACTIONS(565),
    [anon_sym_final] = ACTIONS(565),
    [anon_sym_strictfp] = ACTIONS(565),
    [anon_sym_synchronized] = ACTIONS(565),
    [anon_sym_native] = ACTIONS(565),
    [anon_sym_interface] = ACTIONS(565),
    [sym_identifier] = ACTIONS(567),
    [sym_comment] = ACTIONS(58),
  },
  [170] = {
    [sym__semicolon] = ACTIONS(569),
    [anon_sym_DOT] = ACTIONS(551),
    [sym_comment] = ACTIONS(58),
  },
  [171] = {
    [anon_sym_DOT] = ACTIONS(571),
    [sym_comment] = ACTIONS(58),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(573),
    [sym_decimal_integer_literal] = ACTIONS(575),
    [sym_hex_integer_literal] = ACTIONS(575),
    [sym_octal_integer_literal] = ACTIONS(575),
    [sym_binary_integer_literal] = ACTIONS(575),
    [sym_decimal_floating_point_literal] = ACTIONS(575),
    [sym_hex_floating_point_literal] = ACTIONS(577),
    [anon_sym_true] = ACTIONS(575),
    [anon_sym_false] = ACTIONS(575),
    [anon_sym_SQUOTE] = ACTIONS(573),
    [sym_string_literal] = ACTIONS(573),
    [sym_null_literal] = ACTIONS(575),
    [anon_sym_LT] = ACTIONS(573),
    [anon_sym_LPAREN] = ACTIONS(573),
    [anon_sym_BANG] = ACTIONS(573),
    [anon_sym_TILDE] = ACTIONS(573),
    [anon_sym_PLUS_PLUS] = ACTIONS(573),
    [anon_sym_DASH_DASH] = ACTIONS(573),
    [anon_sym_default] = ACTIONS(575),
    [anon_sym_boolean] = ACTIONS(575),
    [anon_sym_byte] = ACTIONS(575),
    [anon_sym_short] = ACTIONS(575),
    [anon_sym_int] = ACTIONS(575),
    [anon_sym_long] = ACTIONS(575),
    [anon_sym_char] = ACTIONS(575),
    [anon_sym_float] = ACTIONS(575),
    [anon_sym_double] = ACTIONS(575),
    [anon_sym_AT] = ACTIONS(573),
    [anon_sym_open] = ACTIONS(575),
    [anon_sym_module] = ACTIONS(575),
    [anon_sym_static] = ACTIONS(575),
    [anon_sym_package] = ACTIONS(575),
    [anon_sym_import] = ACTIONS(575),
    [anon_sym_class] = ACTIONS(575),
    [anon_sym_public] = ACTIONS(575),
    [anon_sym_protected] = ACTIONS(575),
    [anon_sym_private] = ACTIONS(575),
    [anon_sym_abstract] = ACTIONS(575),
    [anon_sym_final] = ACTIONS(575),
    [anon_sym_strictfp] = ACTIONS(575),
    [anon_sym_synchronized] = ACTIONS(575),
    [anon_sym_native] = ACTIONS(575),
    [anon_sym_interface] = ACTIONS(575),
    [sym_identifier] = ACTIONS(577),
    [sym_comment] = ACTIONS(58),
  },
  [173] = {
    [anon_sym_STAR] = ACTIONS(579),
    [sym_identifier] = ACTIONS(543),
    [sym_comment] = ACTIONS(58),
  },
  [174] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [sym_type_parameter_list] = STATE(291),
    [sym_type_parameter] = STATE(55),
    [aux_sym_class_or_interface_type_repeat1] = STATE(56),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(58),
  },
  [175] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(126),
    [sym_marker_annotation] = STATE(126),
    [sym_single_element_annotation] = STATE(126),
    [sym_class_declaration] = STATE(292),
    [sym_normal_class_declaration] = STATE(299),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(300),
    [sym_class_body_declaration] = STATE(301),
    [sym_constructor_declaration] = STATE(302),
    [sym_constructor_declarator] = STATE(303),
    [sym_class_member_declaration] = STATE(302),
    [sym_interface_declaration] = STATE(292),
    [sym_annotation_type_declaration] = STATE(304),
    [sym_normal_interface_declaration] = STATE(304),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(305),
    [sym_block] = STATE(302),
    [sym_method_declaration] = STATE(292),
    [aux_sym_normal_class_declaration_repeat1] = STATE(306),
    [aux_sym_class_body_repeat1] = STATE(307),
    [sym__semicolon] = ACTIONS(581),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(585),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(593),
    [sym_comment] = ACTIONS(58),
  },
  [176] = {
    [sym_class_or_interface_type] = STATE(309),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(310),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(595),
    [sym_comment] = ACTIONS(58),
  },
  [177] = {
    [sym_class_or_interface_type] = STATE(311),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [sym_interface_type_list] = STATE(312),
    [aux_sym_class_or_interface_type_repeat1] = STATE(243),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(58),
  },
  [178] = {
    [sym_superclass] = STATE(313),
    [sym_super_interfaces] = STATE(314),
    [sym_class_body] = STATE(315),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_extends] = ACTIONS(367),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [179] = {
    [sym_super_interfaces] = STATE(314),
    [sym_class_body] = STATE(315),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [180] = {
    [sym_class_body] = STATE(315),
    [anon_sym_LBRACE] = ACTIONS(365),
    [sym_comment] = ACTIONS(58),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(597),
    [sym_decimal_integer_literal] = ACTIONS(599),
    [sym_hex_integer_literal] = ACTIONS(599),
    [sym_octal_integer_literal] = ACTIONS(599),
    [sym_binary_integer_literal] = ACTIONS(599),
    [sym_decimal_floating_point_literal] = ACTIONS(599),
    [sym_hex_floating_point_literal] = ACTIONS(601),
    [anon_sym_true] = ACTIONS(599),
    [anon_sym_false] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(597),
    [sym_string_literal] = ACTIONS(597),
    [sym_null_literal] = ACTIONS(599),
    [anon_sym_LT] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(597),
    [anon_sym_BANG] = ACTIONS(597),
    [anon_sym_TILDE] = ACTIONS(597),
    [anon_sym_PLUS_PLUS] = ACTIONS(597),
    [anon_sym_DASH_DASH] = ACTIONS(597),
    [anon_sym_default] = ACTIONS(599),
    [anon_sym_boolean] = ACTIONS(599),
    [anon_sym_byte] = ACTIONS(599),
    [anon_sym_short] = ACTIONS(599),
    [anon_sym_int] = ACTIONS(599),
    [anon_sym_long] = ACTIONS(599),
    [anon_sym_char] = ACTIONS(599),
    [anon_sym_float] = ACTIONS(599),
    [anon_sym_double] = ACTIONS(599),
    [anon_sym_AT] = ACTIONS(597),
    [anon_sym_open] = ACTIONS(599),
    [anon_sym_module] = ACTIONS(599),
    [anon_sym_static] = ACTIONS(599),
    [anon_sym_package] = ACTIONS(599),
    [anon_sym_import] = ACTIONS(599),
    [anon_sym_class] = ACTIONS(599),
    [anon_sym_public] = ACTIONS(599),
    [anon_sym_protected] = ACTIONS(599),
    [anon_sym_private] = ACTIONS(599),
    [anon_sym_abstract] = ACTIONS(599),
    [anon_sym_final] = ACTIONS(599),
    [anon_sym_strictfp] = ACTIONS(599),
    [anon_sym_synchronized] = ACTIONS(599),
    [anon_sym_native] = ACTIONS(599),
    [anon_sym_interface] = ACTIONS(599),
    [sym_identifier] = ACTIONS(601),
    [sym_comment] = ACTIONS(58),
  },
  [182] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(126),
    [sym_marker_annotation] = STATE(126),
    [sym_single_element_annotation] = STATE(126),
    [sym_class_declaration] = STATE(316),
    [sym_normal_class_declaration] = STATE(299),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(37),
    [sym_interface_declaration] = STATE(316),
    [sym_annotation_type_declaration] = STATE(304),
    [sym_normal_interface_declaration] = STATE(304),
    [sym_interface_member_declaration] = STATE(318),
    [sym_constant_declaration] = STATE(316),
    [sym_unann_type] = STATE(319),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(305),
    [sym_method_declaration] = STATE(316),
    [aux_sym_normal_class_declaration_repeat1] = STATE(320),
    [aux_sym_interface_body_repeat1] = STATE(321),
    [sym__semicolon] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(605),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [183] = {
    [sym_class_or_interface_type] = STATE(311),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [sym_interface_type_list] = STATE(322),
    [aux_sym_class_or_interface_type_repeat1] = STATE(243),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(58),
  },
  [184] = {
    [sym_extends_interfaces] = STATE(323),
    [sym_interface_body] = STATE(324),
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_extends] = ACTIONS(373),
    [sym_comment] = ACTIONS(58),
  },
  [185] = {
    [sym_interface_body] = STATE(324),
    [anon_sym_LBRACE] = ACTIONS(371),
    [sym_comment] = ACTIONS(58),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(607),
    [sym_decimal_integer_literal] = ACTIONS(609),
    [sym_hex_integer_literal] = ACTIONS(609),
    [sym_octal_integer_literal] = ACTIONS(609),
    [sym_binary_integer_literal] = ACTIONS(609),
    [sym_decimal_floating_point_literal] = ACTIONS(609),
    [sym_hex_floating_point_literal] = ACTIONS(611),
    [anon_sym_true] = ACTIONS(609),
    [anon_sym_false] = ACTIONS(609),
    [anon_sym_SQUOTE] = ACTIONS(607),
    [sym_string_literal] = ACTIONS(607),
    [sym_null_literal] = ACTIONS(609),
    [anon_sym_LT] = ACTIONS(607),
    [anon_sym_LPAREN] = ACTIONS(607),
    [anon_sym_BANG] = ACTIONS(607),
    [anon_sym_TILDE] = ACTIONS(607),
    [anon_sym_PLUS_PLUS] = ACTIONS(607),
    [anon_sym_DASH_DASH] = ACTIONS(607),
    [anon_sym_default] = ACTIONS(609),
    [anon_sym_boolean] = ACTIONS(609),
    [anon_sym_byte] = ACTIONS(609),
    [anon_sym_short] = ACTIONS(609),
    [anon_sym_int] = ACTIONS(609),
    [anon_sym_long] = ACTIONS(609),
    [anon_sym_char] = ACTIONS(609),
    [anon_sym_float] = ACTIONS(609),
    [anon_sym_double] = ACTIONS(609),
    [anon_sym_AT] = ACTIONS(607),
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
    [anon_sym_synchronized] = ACTIONS(609),
    [anon_sym_native] = ACTIONS(609),
    [anon_sym_interface] = ACTIONS(609),
    [sym_identifier] = ACTIONS(611),
    [sym_comment] = ACTIONS(58),
  },
  [187] = {
    [anon_sym_LBRACK] = ACTIONS(613),
    [anon_sym_AT] = ACTIONS(613),
    [sym_comment] = ACTIONS(58),
  },
  [188] = {
    [sym_type_arguments] = STATE(326),
    [aux_sym_class_or_interface_type_repeat2] = STATE(327),
    [anon_sym_GT] = ACTIONS(615),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(615),
    [anon_sym_COMMA] = ACTIONS(615),
    [anon_sym_LBRACE] = ACTIONS(615),
    [anon_sym_DOT] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(615),
    [anon_sym_AT] = ACTIONS(615),
    [sym_comment] = ACTIONS(58),
  },
  [189] = {
    [aux_sym_type_arguments_repeat1] = STATE(330),
    [anon_sym_GT] = ACTIONS(619),
    [anon_sym_COMMA] = ACTIONS(621),
    [sym_comment] = ACTIONS(58),
  },
  [190] = {
    [anon_sym_GT] = ACTIONS(623),
    [anon_sym_COMMA] = ACTIONS(623),
    [sym_comment] = ACTIONS(58),
  },
  [191] = {
    [sym_dims] = STATE(331),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(113),
    [aux_sym_dims_repeat1] = STATE(114),
    [anon_sym_GT] = ACTIONS(625),
    [anon_sym_COMMA] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [192] = {
    [sym_dims] = STATE(331),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(113),
    [aux_sym_dims_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [193] = {
    [sym_integral_type] = STATE(332),
    [sym_floating_point_type] = STATE(332),
    [sym__annotation] = STATE(158),
    [sym_normal_annotation] = STATE(105),
    [sym_marker_annotation] = STATE(105),
    [sym_single_element_annotation] = STATE(105),
    [anon_sym_boolean] = ACTIONS(627),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(629),
    [sym_comment] = ACTIONS(58),
  },
  [194] = {
    [sym__semicolon] = ACTIONS(631),
    [anon_sym_GT] = ACTIONS(633),
    [anon_sym_LT] = ACTIONS(633),
    [anon_sym_EQ_EQ] = ACTIONS(631),
    [anon_sym_GT_EQ] = ACTIONS(631),
    [anon_sym_LT_EQ] = ACTIONS(631),
    [anon_sym_BANG_EQ] = ACTIONS(631),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(156),
    [anon_sym_LT_LT] = ACTIONS(156),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_GT_GT_GT] = ACTIONS(156),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [195] = {
    [sym__semicolon] = ACTIONS(631),
    [anon_sym_GT] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(146),
    [anon_sym_EQ_EQ] = ACTIONS(148),
    [anon_sym_GT_EQ] = ACTIONS(148),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [anon_sym_BANG_EQ] = ACTIONS(148),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_STAR] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(156),
    [anon_sym_LT_LT] = ACTIONS(156),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_GT_GT_GT] = ACTIONS(156),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [196] = {
    [sym__semicolon] = ACTIONS(631),
    [anon_sym_GT] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(146),
    [anon_sym_EQ_EQ] = ACTIONS(148),
    [anon_sym_GT_EQ] = ACTIONS(148),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [anon_sym_BANG_EQ] = ACTIONS(148),
    [anon_sym_AMP_AMP] = ACTIONS(150),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_STAR] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(156),
    [anon_sym_LT_LT] = ACTIONS(156),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_GT_GT_GT] = ACTIONS(156),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [197] = {
    [sym__semicolon] = ACTIONS(631),
    [anon_sym_GT] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(146),
    [anon_sym_EQ_EQ] = ACTIONS(148),
    [anon_sym_GT_EQ] = ACTIONS(148),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [anon_sym_BANG_EQ] = ACTIONS(148),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(156),
    [anon_sym_LT_LT] = ACTIONS(156),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_GT_GT_GT] = ACTIONS(156),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [198] = {
    [sym__semicolon] = ACTIONS(631),
    [anon_sym_GT] = ACTIONS(633),
    [anon_sym_LT] = ACTIONS(633),
    [anon_sym_EQ_EQ] = ACTIONS(631),
    [anon_sym_GT_EQ] = ACTIONS(631),
    [anon_sym_LT_EQ] = ACTIONS(631),
    [anon_sym_BANG_EQ] = ACTIONS(631),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(631),
    [anon_sym_SLASH] = ACTIONS(633),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(631),
    [anon_sym_LT_LT] = ACTIONS(631),
    [anon_sym_GT_GT] = ACTIONS(633),
    [anon_sym_GT_GT_GT] = ACTIONS(631),
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_COLON] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(631),
    [anon_sym_RBRACE] = ACTIONS(631),
    [anon_sym_RBRACK] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [199] = {
    [sym__expression] = STATE(78),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [200] = {
    [sym__expression] = STATE(79),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [201] = {
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_EQ_EQ] = ACTIONS(637),
    [anon_sym_GT_EQ] = ACTIONS(637),
    [anon_sym_LT_EQ] = ACTIONS(637),
    [anon_sym_BANG_EQ] = ACTIONS(637),
    [anon_sym_AMP_AMP] = ACTIONS(639),
    [anon_sym_PIPE_PIPE] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [anon_sym_STAR] = ACTIONS(645),
    [anon_sym_SLASH] = ACTIONS(647),
    [anon_sym_AMP] = ACTIONS(649),
    [anon_sym_PIPE] = ACTIONS(651),
    [anon_sym_CARET] = ACTIONS(641),
    [anon_sym_PERCENT] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_GT_GT_GT] = ACTIONS(645),
    [anon_sym_QMARK] = ACTIONS(653),
    [anon_sym_COLON] = ACTIONS(655),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [202] = {
    [sym__expression] = STATE(78),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_PLUS_PLUS] = ACTIONS(395),
    [anon_sym_DASH_DASH] = ACTIONS(395),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [203] = {
    [sym__expression] = STATE(79),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_PLUS_PLUS] = ACTIONS(395),
    [anon_sym_DASH_DASH] = ACTIONS(395),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [204] = {
    [sym_block] = STATE(347),
    [anon_sym_GT] = ACTIONS(657),
    [anon_sym_LT] = ACTIONS(657),
    [anon_sym_EQ_EQ] = ACTIONS(659),
    [anon_sym_GT_EQ] = ACTIONS(659),
    [anon_sym_LT_EQ] = ACTIONS(659),
    [anon_sym_BANG_EQ] = ACTIONS(659),
    [anon_sym_AMP_AMP] = ACTIONS(661),
    [anon_sym_PIPE_PIPE] = ACTIONS(663),
    [anon_sym_PLUS] = ACTIONS(665),
    [anon_sym_DASH] = ACTIONS(665),
    [anon_sym_STAR] = ACTIONS(667),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_AMP] = ACTIONS(671),
    [anon_sym_PIPE] = ACTIONS(673),
    [anon_sym_CARET] = ACTIONS(663),
    [anon_sym_PERCENT] = ACTIONS(667),
    [anon_sym_LT_LT] = ACTIONS(667),
    [anon_sym_GT_GT] = ACTIONS(669),
    [anon_sym_GT_GT_GT] = ACTIONS(667),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(243),
    [sym_comment] = ACTIONS(58),
  },
  [205] = {
    [sym__semicolon] = ACTIONS(677),
    [anon_sym_GT] = ACTIONS(679),
    [anon_sym_LT] = ACTIONS(679),
    [anon_sym_EQ_EQ] = ACTIONS(677),
    [anon_sym_GT_EQ] = ACTIONS(677),
    [anon_sym_LT_EQ] = ACTIONS(677),
    [anon_sym_BANG_EQ] = ACTIONS(677),
    [anon_sym_AMP_AMP] = ACTIONS(677),
    [anon_sym_PIPE_PIPE] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(679),
    [anon_sym_DASH] = ACTIONS(679),
    [anon_sym_STAR] = ACTIONS(677),
    [anon_sym_SLASH] = ACTIONS(679),
    [anon_sym_AMP] = ACTIONS(679),
    [anon_sym_PIPE] = ACTIONS(679),
    [anon_sym_CARET] = ACTIONS(677),
    [anon_sym_PERCENT] = ACTIONS(677),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_GT_GT] = ACTIONS(679),
    [anon_sym_GT_GT_GT] = ACTIONS(677),
    [anon_sym_RPAREN] = ACTIONS(677),
    [anon_sym_COMMA] = ACTIONS(677),
    [anon_sym_QMARK] = ACTIONS(677),
    [anon_sym_COLON] = ACTIONS(677),
    [anon_sym_PLUS_PLUS] = ACTIONS(677),
    [anon_sym_DASH_DASH] = ACTIONS(677),
    [anon_sym_LBRACE] = ACTIONS(677),
    [anon_sym_RBRACE] = ACTIONS(677),
    [anon_sym_RBRACK] = ACTIONS(677),
    [sym_comment] = ACTIONS(58),
  },
  [206] = {
    [anon_sym_LPAREN] = ACTIONS(333),
    [anon_sym_DOT] = ACTIONS(333),
    [anon_sym_boolean] = ACTIONS(335),
    [anon_sym_byte] = ACTIONS(335),
    [anon_sym_short] = ACTIONS(335),
    [anon_sym_int] = ACTIONS(335),
    [anon_sym_long] = ACTIONS(335),
    [anon_sym_char] = ACTIONS(335),
    [anon_sym_float] = ACTIONS(335),
    [anon_sym_double] = ACTIONS(335),
    [anon_sym_AT] = ACTIONS(333),
    [sym_identifier] = ACTIONS(337),
    [sym_comment] = ACTIONS(58),
  },
  [207] = {
    [anon_sym_LPAREN] = ACTIONS(681),
    [anon_sym_DOT] = ACTIONS(683),
    [anon_sym_boolean] = ACTIONS(343),
    [anon_sym_byte] = ACTIONS(343),
    [anon_sym_short] = ACTIONS(343),
    [anon_sym_int] = ACTIONS(343),
    [anon_sym_long] = ACTIONS(343),
    [anon_sym_char] = ACTIONS(343),
    [anon_sym_float] = ACTIONS(343),
    [anon_sym_double] = ACTIONS(343),
    [anon_sym_AT] = ACTIONS(339),
    [sym_identifier] = ACTIONS(347),
    [sym_comment] = ACTIONS(58),
  },
  [208] = {
    [sym_throws] = STATE(350),
    [sym__semicolon] = ACTIONS(685),
    [anon_sym_LBRACE] = ACTIONS(685),
    [anon_sym_throws] = ACTIONS(405),
    [sym_comment] = ACTIONS(58),
  },
  [209] = {
    [sym_method_declarator] = STATE(351),
    [sym_identifier] = ACTIONS(229),
    [sym_comment] = ACTIONS(58),
  },
  [210] = {
    [sym_integral_type] = STATE(59),
    [sym_floating_point_type] = STATE(59),
    [sym__annotation] = STATE(65),
    [sym_normal_annotation] = STATE(66),
    [sym_marker_annotation] = STATE(66),
    [sym_single_element_annotation] = STATE(66),
    [sym_modifier] = STATE(67),
    [sym_unann_type] = STATE(68),
    [sym_unann_primitive_type] = STATE(69),
    [sym_unann_class_or_interface_type] = STATE(70),
    [sym_unann_array_type] = STATE(71),
    [sym__formal_parameter_list] = STATE(353),
    [sym_formal_parameter] = STATE(72),
    [sym_receiver_parameter] = STATE(73),
    [sym_last_formal_parameter] = STATE(74),
    [aux_sym_class_or_interface_type_repeat1] = STATE(75),
    [aux_sym_normal_class_declaration_repeat1] = STATE(76),
    [anon_sym_RPAREN] = ACTIONS(687),
    [anon_sym_default] = ACTIONS(80),
    [anon_sym_boolean] = ACTIONS(82),
    [anon_sym_byte] = ACTIONS(84),
    [anon_sym_short] = ACTIONS(84),
    [anon_sym_int] = ACTIONS(84),
    [anon_sym_long] = ACTIONS(84),
    [anon_sym_char] = ACTIONS(84),
    [anon_sym_float] = ACTIONS(86),
    [anon_sym_double] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(88),
    [anon_sym_static] = ACTIONS(80),
    [anon_sym_public] = ACTIONS(80),
    [anon_sym_protected] = ACTIONS(80),
    [anon_sym_private] = ACTIONS(80),
    [anon_sym_abstract] = ACTIONS(80),
    [anon_sym_final] = ACTIONS(80),
    [anon_sym_strictfp] = ACTIONS(80),
    [anon_sym_synchronized] = ACTIONS(80),
    [anon_sym_native] = ACTIONS(80),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(58),
  },
  [211] = {
    [sym_class_or_interface_type] = STATE(355),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [sym_exception_type_list] = STATE(356),
    [sym_exception_type] = STATE(357),
    [aux_sym_class_or_interface_type_repeat1] = STATE(358),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(689),
    [sym_comment] = ACTIONS(58),
  },
  [212] = {
    [sym__semicolon] = ACTIONS(685),
    [anon_sym_LBRACE] = ACTIONS(685),
    [sym_comment] = ACTIONS(58),
  },
  [213] = {
    [sym__semicolon] = ACTIONS(691),
    [anon_sym_EQ] = ACTIONS(691),
    [anon_sym_GT] = ACTIONS(691),
    [anon_sym_RPAREN] = ACTIONS(691),
    [anon_sym_COMMA] = ACTIONS(691),
    [anon_sym_LBRACE] = ACTIONS(691),
    [anon_sym_DOT] = ACTIONS(693),
    [anon_sym_LBRACK] = ACTIONS(691),
    [anon_sym_AT] = ACTIONS(691),
    [anon_sym_COLON_COLON] = ACTIONS(691),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(691),
    [sym_identifier] = ACTIONS(693),
    [sym_comment] = ACTIONS(58),
  },
  [214] = {
    [anon_sym_RBRACK] = ACTIONS(695),
    [sym_comment] = ACTIONS(58),
  },
  [215] = {
    [sym__annotation] = STATE(122),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(697),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [216] = {
    [sym_type_arguments] = STATE(361),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(699),
    [anon_sym_LBRACK] = ACTIONS(701),
    [anon_sym_AT] = ACTIONS(701),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(701),
    [sym_identifier] = ACTIONS(699),
    [sym_comment] = ACTIONS(58),
  },
  [217] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(703),
    [sym_comment] = ACTIONS(58),
  },
  [218] = {
    [ts_builtin_sym_end] = ACTIONS(705),
    [sym__semicolon] = ACTIONS(705),
    [sym_decimal_integer_literal] = ACTIONS(707),
    [sym_hex_integer_literal] = ACTIONS(707),
    [sym_octal_integer_literal] = ACTIONS(707),
    [sym_binary_integer_literal] = ACTIONS(707),
    [sym_decimal_floating_point_literal] = ACTIONS(707),
    [sym_hex_floating_point_literal] = ACTIONS(709),
    [anon_sym_true] = ACTIONS(707),
    [anon_sym_false] = ACTIONS(707),
    [anon_sym_SQUOTE] = ACTIONS(705),
    [sym_string_literal] = ACTIONS(705),
    [sym_null_literal] = ACTIONS(707),
    [anon_sym_GT] = ACTIONS(707),
    [anon_sym_LT] = ACTIONS(707),
    [anon_sym_EQ_EQ] = ACTIONS(705),
    [anon_sym_GT_EQ] = ACTIONS(705),
    [anon_sym_LT_EQ] = ACTIONS(705),
    [anon_sym_BANG_EQ] = ACTIONS(705),
    [anon_sym_AMP_AMP] = ACTIONS(705),
    [anon_sym_PIPE_PIPE] = ACTIONS(705),
    [anon_sym_PLUS] = ACTIONS(707),
    [anon_sym_DASH] = ACTIONS(707),
    [anon_sym_STAR] = ACTIONS(705),
    [anon_sym_SLASH] = ACTIONS(707),
    [anon_sym_AMP] = ACTIONS(707),
    [anon_sym_PIPE] = ACTIONS(707),
    [anon_sym_CARET] = ACTIONS(705),
    [anon_sym_PERCENT] = ACTIONS(705),
    [anon_sym_LT_LT] = ACTIONS(705),
    [anon_sym_GT_GT] = ACTIONS(707),
    [anon_sym_GT_GT_GT] = ACTIONS(705),
    [anon_sym_LPAREN] = ACTIONS(705),
    [anon_sym_RPAREN] = ACTIONS(705),
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_QMARK] = ACTIONS(705),
    [anon_sym_COLON] = ACTIONS(705),
    [anon_sym_BANG] = ACTIONS(707),
    [anon_sym_TILDE] = ACTIONS(705),
    [anon_sym_PLUS_PLUS] = ACTIONS(705),
    [anon_sym_DASH_DASH] = ACTIONS(705),
    [anon_sym_LBRACE] = ACTIONS(705),
    [anon_sym_RBRACE] = ACTIONS(705),
    [anon_sym_default] = ACTIONS(707),
    [anon_sym_RBRACK] = ACTIONS(705),
    [anon_sym_boolean] = ACTIONS(707),
    [anon_sym_byte] = ACTIONS(707),
    [anon_sym_short] = ACTIONS(707),
    [anon_sym_int] = ACTIONS(707),
    [anon_sym_long] = ACTIONS(707),
    [anon_sym_char] = ACTIONS(707),
    [anon_sym_float] = ACTIONS(707),
    [anon_sym_double] = ACTIONS(707),
    [anon_sym_AT] = ACTIONS(705),
    [anon_sym_open] = ACTIONS(707),
    [anon_sym_module] = ACTIONS(707),
    [anon_sym_static] = ACTIONS(707),
    [anon_sym_package] = ACTIONS(707),
    [anon_sym_import] = ACTIONS(707),
    [anon_sym_class] = ACTIONS(707),
    [anon_sym_public] = ACTIONS(707),
    [anon_sym_protected] = ACTIONS(707),
    [anon_sym_private] = ACTIONS(707),
    [anon_sym_abstract] = ACTIONS(707),
    [anon_sym_final] = ACTIONS(707),
    [anon_sym_strictfp] = ACTIONS(707),
    [anon_sym_synchronized] = ACTIONS(707),
    [anon_sym_native] = ACTIONS(707),
    [anon_sym_interface] = ACTIONS(707),
    [sym_identifier] = ACTIONS(709),
    [sym_comment] = ACTIONS(58),
  },
  [219] = {
    [anon_sym_default] = ACTIONS(96),
    [anon_sym_boolean] = ACTIONS(96),
    [anon_sym_byte] = ACTIONS(96),
    [anon_sym_short] = ACTIONS(96),
    [anon_sym_int] = ACTIONS(96),
    [anon_sym_long] = ACTIONS(96),
    [anon_sym_char] = ACTIONS(96),
    [anon_sym_float] = ACTIONS(96),
    [anon_sym_double] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(94),
    [anon_sym_static] = ACTIONS(96),
    [anon_sym_class] = ACTIONS(96),
    [anon_sym_public] = ACTIONS(96),
    [anon_sym_protected] = ACTIONS(96),
    [anon_sym_private] = ACTIONS(96),
    [anon_sym_abstract] = ACTIONS(96),
    [anon_sym_final] = ACTIONS(96),
    [anon_sym_strictfp] = ACTIONS(96),
    [anon_sym_synchronized] = ACTIONS(96),
    [anon_sym_native] = ACTIONS(96),
    [sym_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(58),
  },
  [220] = {
    [anon_sym_LPAREN] = ACTIONS(711),
    [sym_comment] = ACTIONS(58),
  },
  [221] = {
    [sym_package_or_type_name] = STATE(365),
    [sym_identifier] = ACTIONS(713),
    [sym_comment] = ACTIONS(58),
  },
  [222] = {
    [sym_identifier] = ACTIONS(715),
    [sym_comment] = ACTIONS(58),
  },
  [223] = {
    [anon_sym_RBRACE] = ACTIONS(717),
    [anon_sym_default] = ACTIONS(717),
    [anon_sym_if] = ACTIONS(717),
    [anon_sym_AT] = ACTIONS(717),
    [anon_sym_static] = ACTIONS(717),
    [anon_sym_class] = ACTIONS(717),
    [anon_sym_public] = ACTIONS(717),
    [anon_sym_protected] = ACTIONS(717),
    [anon_sym_private] = ACTIONS(717),
    [anon_sym_abstract] = ACTIONS(717),
    [anon_sym_final] = ACTIONS(717),
    [anon_sym_strictfp] = ACTIONS(717),
    [anon_sym_synchronized] = ACTIONS(717),
    [anon_sym_native] = ACTIONS(717),
    [sym_comment] = ACTIONS(58),
  },
  [224] = {
    [anon_sym_RBRACE] = ACTIONS(719),
    [anon_sym_default] = ACTIONS(719),
    [anon_sym_if] = ACTIONS(719),
    [anon_sym_AT] = ACTIONS(719),
    [anon_sym_static] = ACTIONS(719),
    [anon_sym_class] = ACTIONS(719),
    [anon_sym_public] = ACTIONS(719),
    [anon_sym_protected] = ACTIONS(719),
    [anon_sym_private] = ACTIONS(719),
    [anon_sym_abstract] = ACTIONS(719),
    [anon_sym_final] = ACTIONS(719),
    [anon_sym_strictfp] = ACTIONS(719),
    [anon_sym_synchronized] = ACTIONS(719),
    [anon_sym_native] = ACTIONS(719),
    [sym_comment] = ACTIONS(58),
  },
  [225] = {
    [anon_sym_default] = ACTIONS(185),
    [anon_sym_boolean] = ACTIONS(185),
    [anon_sym_byte] = ACTIONS(185),
    [anon_sym_short] = ACTIONS(185),
    [anon_sym_int] = ACTIONS(185),
    [anon_sym_long] = ACTIONS(185),
    [anon_sym_char] = ACTIONS(185),
    [anon_sym_float] = ACTIONS(185),
    [anon_sym_double] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(183),
    [anon_sym_static] = ACTIONS(185),
    [anon_sym_class] = ACTIONS(185),
    [anon_sym_public] = ACTIONS(185),
    [anon_sym_protected] = ACTIONS(185),
    [anon_sym_private] = ACTIONS(185),
    [anon_sym_abstract] = ACTIONS(185),
    [anon_sym_final] = ACTIONS(185),
    [anon_sym_strictfp] = ACTIONS(185),
    [anon_sym_synchronized] = ACTIONS(185),
    [anon_sym_native] = ACTIONS(185),
    [sym_identifier] = ACTIONS(187),
    [sym_comment] = ACTIONS(58),
  },
  [226] = {
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_default] = ACTIONS(207),
    [anon_sym_if] = ACTIONS(207),
    [anon_sym_AT] = ACTIONS(207),
    [anon_sym_static] = ACTIONS(207),
    [anon_sym_class] = ACTIONS(207),
    [anon_sym_public] = ACTIONS(207),
    [anon_sym_protected] = ACTIONS(207),
    [anon_sym_private] = ACTIONS(207),
    [anon_sym_abstract] = ACTIONS(207),
    [anon_sym_final] = ACTIONS(207),
    [anon_sym_strictfp] = ACTIONS(207),
    [anon_sym_synchronized] = ACTIONS(207),
    [anon_sym_native] = ACTIONS(207),
    [sym_comment] = ACTIONS(58),
  },
  [227] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym_unann_type] = STATE(367),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [anon_sym_default] = ACTIONS(215),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(213),
    [anon_sym_static] = ACTIONS(215),
    [anon_sym_class] = ACTIONS(215),
    [anon_sym_public] = ACTIONS(215),
    [anon_sym_protected] = ACTIONS(215),
    [anon_sym_private] = ACTIONS(215),
    [anon_sym_abstract] = ACTIONS(215),
    [anon_sym_final] = ACTIONS(215),
    [anon_sym_strictfp] = ACTIONS(215),
    [anon_sym_synchronized] = ACTIONS(215),
    [anon_sym_native] = ACTIONS(215),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [228] = {
    [anon_sym_RBRACE] = ACTIONS(721),
    [sym_comment] = ACTIONS(58),
  },
  [229] = {
    [sym_statement] = STATE(223),
    [sym_if_then_statement] = STATE(224),
    [sym_if_then_else_statement] = STATE(224),
    [sym__annotation] = STATE(219),
    [sym_normal_annotation] = STATE(225),
    [sym_marker_annotation] = STATE(225),
    [sym_single_element_annotation] = STATE(225),
    [sym_class_declaration] = STATE(223),
    [sym_normal_class_declaration] = STATE(226),
    [sym_modifier] = STATE(227),
    [sym_block_statement] = STATE(369),
    [sym_local_variable_declaration_statement] = STATE(223),
    [sym_local_variable_declaration] = STATE(230),
    [aux_sym_normal_class_declaration_repeat1] = STATE(231),
    [aux_sym_block_statements_repeat1] = STATE(370),
    [anon_sym_RBRACE] = ACTIONS(723),
    [anon_sym_default] = ACTIONS(429),
    [anon_sym_if] = ACTIONS(431),
    [anon_sym_AT] = ACTIONS(433),
    [anon_sym_static] = ACTIONS(429),
    [anon_sym_class] = ACTIONS(435),
    [anon_sym_public] = ACTIONS(429),
    [anon_sym_protected] = ACTIONS(429),
    [anon_sym_private] = ACTIONS(429),
    [anon_sym_abstract] = ACTIONS(429),
    [anon_sym_final] = ACTIONS(429),
    [anon_sym_strictfp] = ACTIONS(429),
    [anon_sym_synchronized] = ACTIONS(429),
    [anon_sym_native] = ACTIONS(429),
    [sym_comment] = ACTIONS(58),
  },
  [230] = {
    [sym__semicolon] = ACTIONS(725),
    [sym_comment] = ACTIONS(58),
  },
  [231] = {
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_modifier] = STATE(127),
    [anon_sym_default] = ACTIONS(727),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_static] = ACTIONS(727),
    [anon_sym_class] = ACTIONS(729),
    [anon_sym_public] = ACTIONS(727),
    [anon_sym_protected] = ACTIONS(727),
    [anon_sym_private] = ACTIONS(727),
    [anon_sym_abstract] = ACTIONS(727),
    [anon_sym_final] = ACTIONS(727),
    [anon_sym_strictfp] = ACTIONS(727),
    [anon_sym_synchronized] = ACTIONS(727),
    [anon_sym_native] = ACTIONS(727),
    [sym_comment] = ACTIONS(58),
  },
  [232] = {
    [sym_module_identifier] = STATE(373),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(58),
  },
  [233] = {
    [aux_sym_module_identifier_repeat1] = STATE(374),
    [sym__semicolon] = ACTIONS(569),
    [anon_sym_DOT] = ACTIONS(351),
    [sym_comment] = ACTIONS(58),
  },
  [234] = {
    [sym_identifier] = ACTIONS(731),
    [sym_comment] = ACTIONS(58),
  },
  [235] = {
    [anon_sym_LT] = ACTIONS(333),
    [anon_sym_LPAREN] = ACTIONS(333),
    [anon_sym_default] = ACTIONS(335),
    [anon_sym_DOT] = ACTIONS(333),
    [anon_sym_boolean] = ACTIONS(335),
    [anon_sym_byte] = ACTIONS(335),
    [anon_sym_short] = ACTIONS(335),
    [anon_sym_int] = ACTIONS(335),
    [anon_sym_long] = ACTIONS(335),
    [anon_sym_char] = ACTIONS(335),
    [anon_sym_float] = ACTIONS(335),
    [anon_sym_double] = ACTIONS(335),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_static] = ACTIONS(335),
    [anon_sym_class] = ACTIONS(335),
    [anon_sym_public] = ACTIONS(335),
    [anon_sym_protected] = ACTIONS(335),
    [anon_sym_private] = ACTIONS(335),
    [anon_sym_abstract] = ACTIONS(335),
    [anon_sym_final] = ACTIONS(335),
    [anon_sym_strictfp] = ACTIONS(335),
    [anon_sym_synchronized] = ACTIONS(335),
    [anon_sym_native] = ACTIONS(335),
    [anon_sym_interface] = ACTIONS(335),
    [sym_identifier] = ACTIONS(337),
    [sym_comment] = ACTIONS(58),
  },
  [236] = {
    [anon_sym_LT] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(733),
    [anon_sym_default] = ACTIONS(343),
    [anon_sym_DOT] = ACTIONS(735),
    [anon_sym_boolean] = ACTIONS(343),
    [anon_sym_byte] = ACTIONS(343),
    [anon_sym_short] = ACTIONS(343),
    [anon_sym_int] = ACTIONS(343),
    [anon_sym_long] = ACTIONS(343),
    [anon_sym_char] = ACTIONS(343),
    [anon_sym_float] = ACTIONS(343),
    [anon_sym_double] = ACTIONS(343),
    [anon_sym_AT] = ACTIONS(339),
    [anon_sym_static] = ACTIONS(343),
    [anon_sym_class] = ACTIONS(343),
    [anon_sym_public] = ACTIONS(343),
    [anon_sym_protected] = ACTIONS(343),
    [anon_sym_private] = ACTIONS(343),
    [anon_sym_abstract] = ACTIONS(343),
    [anon_sym_final] = ACTIONS(343),
    [anon_sym_strictfp] = ACTIONS(343),
    [anon_sym_synchronized] = ACTIONS(343),
    [anon_sym_native] = ACTIONS(343),
    [anon_sym_interface] = ACTIONS(343),
    [sym_identifier] = ACTIONS(347),
    [sym_comment] = ACTIONS(58),
  },
  [237] = {
    [sym_type_parameters] = STATE(378),
    [sym_superclass] = STATE(313),
    [sym_super_interfaces] = STATE(314),
    [sym_class_body] = STATE(315),
    [anon_sym_LT] = ACTIONS(363),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_extends] = ACTIONS(367),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [238] = {
    [sym_type_parameters] = STATE(379),
    [sym_extends_interfaces] = STATE(323),
    [sym_interface_body] = STATE(324),
    [anon_sym_LT] = ACTIONS(363),
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_extends] = ACTIONS(373),
    [sym_comment] = ACTIONS(58),
  },
  [239] = {
    [ts_builtin_sym_end] = ACTIONS(737),
    [sym_decimal_integer_literal] = ACTIONS(739),
    [sym_hex_integer_literal] = ACTIONS(739),
    [sym_octal_integer_literal] = ACTIONS(739),
    [sym_binary_integer_literal] = ACTIONS(739),
    [sym_decimal_floating_point_literal] = ACTIONS(739),
    [sym_hex_floating_point_literal] = ACTIONS(741),
    [anon_sym_true] = ACTIONS(739),
    [anon_sym_false] = ACTIONS(739),
    [anon_sym_SQUOTE] = ACTIONS(737),
    [sym_string_literal] = ACTIONS(737),
    [sym_null_literal] = ACTIONS(739),
    [anon_sym_LT] = ACTIONS(737),
    [anon_sym_LPAREN] = ACTIONS(737),
    [anon_sym_BANG] = ACTIONS(737),
    [anon_sym_TILDE] = ACTIONS(737),
    [anon_sym_PLUS_PLUS] = ACTIONS(737),
    [anon_sym_DASH_DASH] = ACTIONS(737),
    [anon_sym_default] = ACTIONS(739),
    [anon_sym_boolean] = ACTIONS(739),
    [anon_sym_byte] = ACTIONS(739),
    [anon_sym_short] = ACTIONS(739),
    [anon_sym_int] = ACTIONS(739),
    [anon_sym_long] = ACTIONS(739),
    [anon_sym_char] = ACTIONS(739),
    [anon_sym_float] = ACTIONS(739),
    [anon_sym_double] = ACTIONS(739),
    [anon_sym_AT] = ACTIONS(737),
    [anon_sym_open] = ACTIONS(739),
    [anon_sym_module] = ACTIONS(739),
    [anon_sym_static] = ACTIONS(739),
    [anon_sym_package] = ACTIONS(739),
    [anon_sym_import] = ACTIONS(739),
    [anon_sym_class] = ACTIONS(739),
    [anon_sym_public] = ACTIONS(739),
    [anon_sym_protected] = ACTIONS(739),
    [anon_sym_private] = ACTIONS(739),
    [anon_sym_abstract] = ACTIONS(739),
    [anon_sym_final] = ACTIONS(739),
    [anon_sym_strictfp] = ACTIONS(739),
    [anon_sym_synchronized] = ACTIONS(739),
    [anon_sym_native] = ACTIONS(739),
    [anon_sym_interface] = ACTIONS(739),
    [sym_identifier] = ACTIONS(741),
    [sym_comment] = ACTIONS(58),
  },
  [240] = {
    [sym__literal] = STATE(382),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(383),
    [sym_element_value_pair] = STATE(276),
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
    [sym_null_literal] = ACTIONS(24),
    [anon_sym_RPAREN] = ACTIONS(743),
    [sym_identifier] = ACTIONS(745),
    [sym_comment] = ACTIONS(58),
  },
  [241] = {
    [sym_identifier] = ACTIONS(747),
    [sym_comment] = ACTIONS(58),
  },
  [242] = {
    [aux_sym_type_bound_repeat1] = STATE(386),
    [anon_sym_GT] = ACTIONS(749),
    [anon_sym_AMP] = ACTIONS(751),
    [anon_sym_COMMA] = ACTIONS(749),
    [sym_comment] = ACTIONS(58),
  },
  [243] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(753),
    [sym_comment] = ACTIONS(58),
  },
  [244] = {
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_COMMA] = ACTIONS(755),
    [sym_comment] = ACTIONS(58),
  },
  [245] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [sym_type_parameter] = STATE(387),
    [aux_sym_class_or_interface_type_repeat1] = STATE(56),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(58),
  },
  [246] = {
    [anon_sym_GT] = ACTIONS(757),
    [anon_sym_COMMA] = ACTIONS(757),
    [sym_comment] = ACTIONS(58),
  },
  [247] = {
    [anon_sym_RPAREN] = ACTIONS(759),
    [sym_identifier] = ACTIONS(761),
    [sym_comment] = ACTIONS(58),
  },
  [248] = {
    [anon_sym_COMMA] = ACTIONS(763),
    [sym_comment] = ACTIONS(58),
  },
  [249] = {
    [sym__literal] = STATE(391),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(392),
    [sym_element_value_pair] = STATE(276),
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
    [sym_null_literal] = ACTIONS(24),
    [anon_sym_RPAREN] = ACTIONS(765),
    [sym_identifier] = ACTIONS(767),
    [sym_comment] = ACTIONS(58),
  },
  [250] = {
    [sym_identifier] = ACTIONS(769),
    [sym_comment] = ACTIONS(58),
  },
  [251] = {
    [aux_sym_type_arguments_repeat1] = STATE(395),
    [anon_sym_GT] = ACTIONS(771),
    [anon_sym_COMMA] = ACTIONS(621),
    [sym_comment] = ACTIONS(58),
  },
  [252] = {
    [sym_dims] = STATE(256),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(113),
    [aux_sym_dims_repeat1] = STATE(114),
    [sym__semicolon] = ACTIONS(511),
    [anon_sym_EQ] = ACTIONS(511),
    [anon_sym_RPAREN] = ACTIONS(511),
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [253] = {
    [anon_sym_RPAREN] = ACTIONS(773),
    [sym_comment] = ACTIONS(58),
  },
  [254] = {
    [sym__semicolon] = ACTIONS(775),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(775),
    [anon_sym_COMMA] = ACTIONS(775),
    [sym_comment] = ACTIONS(58),
  },
  [255] = {
    [anon_sym_this] = ACTIONS(779),
    [sym_comment] = ACTIONS(58),
  },
  [256] = {
    [sym__semicolon] = ACTIONS(781),
    [anon_sym_EQ] = ACTIONS(781),
    [anon_sym_RPAREN] = ACTIONS(781),
    [anon_sym_COMMA] = ACTIONS(781),
    [sym_comment] = ACTIONS(58),
  },
  [257] = {
    [anon_sym_LBRACK] = ACTIONS(691),
    [anon_sym_AT] = ACTIONS(691),
    [anon_sym_this] = ACTIONS(693),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(691),
    [sym_identifier] = ACTIONS(783),
    [sym_comment] = ACTIONS(58),
  },
  [258] = {
    [anon_sym_RBRACK] = ACTIONS(785),
    [sym_comment] = ACTIONS(58),
  },
  [259] = {
    [sym__annotation] = STATE(122),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(787),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [260] = {
    [sym_type_arguments] = STATE(400),
    [anon_sym_LT] = ACTIONS(293),
    [anon_sym_DOT] = ACTIONS(699),
    [anon_sym_LBRACK] = ACTIONS(701),
    [anon_sym_AT] = ACTIONS(701),
    [anon_sym_this] = ACTIONS(699),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(701),
    [sym_identifier] = ACTIONS(789),
    [sym_comment] = ACTIONS(58),
  },
  [261] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(791),
    [sym_comment] = ACTIONS(58),
  },
  [262] = {
    [sym_variable_declarator_id] = STATE(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(307),
    [sym_identifier] = ACTIONS(509),
    [sym_comment] = ACTIONS(58),
  },
  [263] = {
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(793),
    [sym_comment] = ACTIONS(58),
  },
  [264] = {
    [anon_sym_RPAREN] = ACTIONS(795),
    [sym_comment] = ACTIONS(58),
  },
  [265] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(58),
    [sym_normal_annotation] = STATE(66),
    [sym_marker_annotation] = STATE(66),
    [sym_single_element_annotation] = STATE(66),
    [sym_modifier] = STATE(67),
    [sym_unann_type] = STATE(262),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_formal_parameter] = STATE(402),
    [sym_last_formal_parameter] = STATE(403),
    [aux_sym_normal_class_declaration_repeat1] = STATE(76),
    [anon_sym_default] = ACTIONS(80),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(88),
    [anon_sym_static] = ACTIONS(80),
    [anon_sym_public] = ACTIONS(80),
    [anon_sym_protected] = ACTIONS(80),
    [anon_sym_private] = ACTIONS(80),
    [anon_sym_abstract] = ACTIONS(80),
    [anon_sym_final] = ACTIONS(80),
    [anon_sym_strictfp] = ACTIONS(80),
    [anon_sym_synchronized] = ACTIONS(80),
    [anon_sym_native] = ACTIONS(80),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [266] = {
    [anon_sym_RPAREN] = ACTIONS(797),
    [anon_sym_COMMA] = ACTIONS(797),
    [sym_comment] = ACTIONS(58),
  },
  [267] = {
    [anon_sym_DOT] = ACTIONS(799),
    [sym_comment] = ACTIONS(58),
  },
  [268] = {
    [sym_variable_declarator] = STATE(405),
    [sym_variable_declarator_id] = STATE(254),
    [sym_identifier] = ACTIONS(509),
    [sym_comment] = ACTIONS(58),
  },
  [269] = {
    [anon_sym_RPAREN] = ACTIONS(801),
    [anon_sym_COMMA] = ACTIONS(801),
    [sym_comment] = ACTIONS(58),
  },
  [270] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(126),
    [sym_marker_annotation] = STATE(126),
    [sym_single_element_annotation] = STATE(126),
    [sym_class_declaration] = STATE(407),
    [sym_normal_class_declaration] = STATE(299),
    [sym_modifier] = STATE(36),
    [sym_interface_declaration] = STATE(407),
    [sym_annotation_type_declaration] = STATE(304),
    [sym_annotation_type_member_declaration] = STATE(408),
    [sym_annotation_type_element_declaration] = STATE(407),
    [sym_normal_interface_declaration] = STATE(304),
    [sym_constant_declaration] = STATE(407),
    [sym_unann_type] = STATE(409),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [aux_sym_normal_class_declaration_repeat1] = STATE(410),
    [aux_sym_annotation_type_body_repeat1] = STATE(411),
    [anon_sym_RBRACE] = ACTIONS(803),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [271] = {
    [ts_builtin_sym_end] = ACTIONS(805),
    [sym_decimal_integer_literal] = ACTIONS(807),
    [sym_hex_integer_literal] = ACTIONS(807),
    [sym_octal_integer_literal] = ACTIONS(807),
    [sym_binary_integer_literal] = ACTIONS(807),
    [sym_decimal_floating_point_literal] = ACTIONS(807),
    [sym_hex_floating_point_literal] = ACTIONS(809),
    [anon_sym_true] = ACTIONS(807),
    [anon_sym_false] = ACTIONS(807),
    [anon_sym_SQUOTE] = ACTIONS(805),
    [sym_string_literal] = ACTIONS(805),
    [sym_null_literal] = ACTIONS(807),
    [anon_sym_LT] = ACTIONS(805),
    [anon_sym_LPAREN] = ACTIONS(805),
    [anon_sym_BANG] = ACTIONS(805),
    [anon_sym_TILDE] = ACTIONS(805),
    [anon_sym_PLUS_PLUS] = ACTIONS(805),
    [anon_sym_DASH_DASH] = ACTIONS(805),
    [anon_sym_default] = ACTIONS(807),
    [anon_sym_boolean] = ACTIONS(807),
    [anon_sym_byte] = ACTIONS(807),
    [anon_sym_short] = ACTIONS(807),
    [anon_sym_int] = ACTIONS(807),
    [anon_sym_long] = ACTIONS(807),
    [anon_sym_char] = ACTIONS(807),
    [anon_sym_float] = ACTIONS(807),
    [anon_sym_double] = ACTIONS(807),
    [anon_sym_AT] = ACTIONS(805),
    [anon_sym_open] = ACTIONS(807),
    [anon_sym_module] = ACTIONS(807),
    [anon_sym_static] = ACTIONS(807),
    [anon_sym_package] = ACTIONS(807),
    [anon_sym_import] = ACTIONS(807),
    [anon_sym_class] = ACTIONS(807),
    [anon_sym_public] = ACTIONS(807),
    [anon_sym_protected] = ACTIONS(807),
    [anon_sym_private] = ACTIONS(807),
    [anon_sym_abstract] = ACTIONS(807),
    [anon_sym_final] = ACTIONS(807),
    [anon_sym_strictfp] = ACTIONS(807),
    [anon_sym_synchronized] = ACTIONS(807),
    [anon_sym_native] = ACTIONS(807),
    [anon_sym_interface] = ACTIONS(807),
    [sym_identifier] = ACTIONS(809),
    [sym_comment] = ACTIONS(58),
  },
  [272] = {
    [sym__semicolon] = ACTIONS(811),
    [anon_sym_LT] = ACTIONS(811),
    [anon_sym_RPAREN] = ACTIONS(811),
    [anon_sym_COMMA] = ACTIONS(811),
    [anon_sym_RBRACE] = ACTIONS(811),
    [anon_sym_default] = ACTIONS(813),
    [anon_sym_LBRACK] = ACTIONS(811),
    [anon_sym_boolean] = ACTIONS(813),
    [anon_sym_byte] = ACTIONS(813),
    [anon_sym_short] = ACTIONS(813),
    [anon_sym_int] = ACTIONS(813),
    [anon_sym_long] = ACTIONS(813),
    [anon_sym_char] = ACTIONS(813),
    [anon_sym_float] = ACTIONS(813),
    [anon_sym_double] = ACTIONS(813),
    [anon_sym_AT] = ACTIONS(811),
    [anon_sym_open] = ACTIONS(813),
    [anon_sym_module] = ACTIONS(813),
    [anon_sym_static] = ACTIONS(813),
    [anon_sym_package] = ACTIONS(813),
    [anon_sym_class] = ACTIONS(813),
    [anon_sym_public] = ACTIONS(813),
    [anon_sym_protected] = ACTIONS(813),
    [anon_sym_private] = ACTIONS(813),
    [anon_sym_abstract] = ACTIONS(813),
    [anon_sym_final] = ACTIONS(813),
    [anon_sym_strictfp] = ACTIONS(813),
    [anon_sym_synchronized] = ACTIONS(813),
    [anon_sym_native] = ACTIONS(813),
    [anon_sym_interface] = ACTIONS(813),
    [sym_identifier] = ACTIONS(815),
    [sym_comment] = ACTIONS(58),
  },
  [273] = {
    [anon_sym_EQ] = ACTIONS(817),
    [anon_sym_RPAREN] = ACTIONS(819),
    [sym_comment] = ACTIONS(58),
  },
  [274] = {
    [anon_sym_RPAREN] = ACTIONS(819),
    [sym_comment] = ACTIONS(58),
  },
  [275] = {
    [anon_sym_RPAREN] = ACTIONS(821),
    [sym_comment] = ACTIONS(58),
  },
  [276] = {
    [aux_sym_element_value_pair_list_repeat1] = STATE(416),
    [anon_sym_RPAREN] = ACTIONS(823),
    [anon_sym_COMMA] = ACTIONS(825),
    [sym_comment] = ACTIONS(58),
  },
  [277] = {
    [sym__semicolon] = ACTIONS(827),
    [anon_sym_LT] = ACTIONS(827),
    [anon_sym_LPAREN] = ACTIONS(827),
    [anon_sym_RPAREN] = ACTIONS(827),
    [anon_sym_COMMA] = ACTIONS(827),
    [anon_sym_RBRACE] = ACTIONS(827),
    [anon_sym_default] = ACTIONS(829),
    [anon_sym_DOT] = ACTIONS(827),
    [anon_sym_LBRACK] = ACTIONS(827),
    [anon_sym_boolean] = ACTIONS(829),
    [anon_sym_byte] = ACTIONS(829),
    [anon_sym_short] = ACTIONS(829),
    [anon_sym_int] = ACTIONS(829),
    [anon_sym_long] = ACTIONS(829),
    [anon_sym_char] = ACTIONS(829),
    [anon_sym_float] = ACTIONS(829),
    [anon_sym_double] = ACTIONS(829),
    [anon_sym_AT] = ACTIONS(827),
    [anon_sym_open] = ACTIONS(829),
    [anon_sym_module] = ACTIONS(829),
    [anon_sym_static] = ACTIONS(829),
    [anon_sym_package] = ACTIONS(829),
    [anon_sym_class] = ACTIONS(829),
    [anon_sym_public] = ACTIONS(829),
    [anon_sym_protected] = ACTIONS(829),
    [anon_sym_private] = ACTIONS(829),
    [anon_sym_abstract] = ACTIONS(829),
    [anon_sym_final] = ACTIONS(829),
    [anon_sym_strictfp] = ACTIONS(829),
    [anon_sym_synchronized] = ACTIONS(829),
    [anon_sym_native] = ACTIONS(829),
    [anon_sym_interface] = ACTIONS(829),
    [sym_identifier] = ACTIONS(831),
    [sym_comment] = ACTIONS(58),
  },
  [278] = {
    [sym_module_directive] = STATE(286),
    [aux_sym_module_declaration_repeat1] = STATE(418),
    [anon_sym_RBRACE] = ACTIONS(833),
    [anon_sym_requires] = ACTIONS(555),
    [anon_sym_exports] = ACTIONS(557),
    [anon_sym_opens] = ACTIONS(557),
    [anon_sym_uses] = ACTIONS(559),
    [anon_sym_provides] = ACTIONS(561),
    [sym_comment] = ACTIONS(58),
  },
  [279] = {
    [sym__semicolon] = ACTIONS(835),
    [anon_sym_LBRACE] = ACTIONS(835),
    [anon_sym_DOT] = ACTIONS(835),
    [sym_comment] = ACTIONS(58),
  },
  [280] = {
    [sym_identifier] = ACTIONS(837),
    [sym_comment] = ACTIONS(58),
  },
  [281] = {
    [ts_builtin_sym_end] = ACTIONS(839),
    [sym_decimal_integer_literal] = ACTIONS(841),
    [sym_hex_integer_literal] = ACTIONS(841),
    [sym_octal_integer_literal] = ACTIONS(841),
    [sym_binary_integer_literal] = ACTIONS(841),
    [sym_decimal_floating_point_literal] = ACTIONS(841),
    [sym_hex_floating_point_literal] = ACTIONS(843),
    [anon_sym_true] = ACTIONS(841),
    [anon_sym_false] = ACTIONS(841),
    [anon_sym_SQUOTE] = ACTIONS(839),
    [sym_string_literal] = ACTIONS(839),
    [sym_null_literal] = ACTIONS(841),
    [anon_sym_LT] = ACTIONS(839),
    [anon_sym_LPAREN] = ACTIONS(839),
    [anon_sym_BANG] = ACTIONS(839),
    [anon_sym_TILDE] = ACTIONS(839),
    [anon_sym_PLUS_PLUS] = ACTIONS(839),
    [anon_sym_DASH_DASH] = ACTIONS(839),
    [anon_sym_default] = ACTIONS(841),
    [anon_sym_boolean] = ACTIONS(841),
    [anon_sym_byte] = ACTIONS(841),
    [anon_sym_short] = ACTIONS(841),
    [anon_sym_int] = ACTIONS(841),
    [anon_sym_long] = ACTIONS(841),
    [anon_sym_char] = ACTIONS(841),
    [anon_sym_float] = ACTIONS(841),
    [anon_sym_double] = ACTIONS(841),
    [anon_sym_AT] = ACTIONS(839),
    [anon_sym_open] = ACTIONS(841),
    [anon_sym_module] = ACTIONS(841),
    [anon_sym_static] = ACTIONS(841),
    [anon_sym_package] = ACTIONS(841),
    [anon_sym_import] = ACTIONS(841),
    [anon_sym_class] = ACTIONS(841),
    [anon_sym_public] = ACTIONS(841),
    [anon_sym_protected] = ACTIONS(841),
    [anon_sym_private] = ACTIONS(841),
    [anon_sym_abstract] = ACTIONS(841),
    [anon_sym_final] = ACTIONS(841),
    [anon_sym_strictfp] = ACTIONS(841),
    [anon_sym_synchronized] = ACTIONS(841),
    [anon_sym_native] = ACTIONS(841),
    [anon_sym_interface] = ACTIONS(841),
    [sym_identifier] = ACTIONS(843),
    [sym_comment] = ACTIONS(58),
  },
  [282] = {
    [sym_requires_modifier] = STATE(422),
    [sym_module_name] = STATE(423),
    [aux_sym_module_directive_repeat1] = STATE(424),
    [anon_sym_transitive] = ACTIONS(845),
    [anon_sym_static] = ACTIONS(845),
    [sym_identifier] = ACTIONS(847),
    [sym_comment] = ACTIONS(58),
  },
  [283] = {
    [sym_package_or_type_name] = STATE(426),
    [sym_identifier] = ACTIONS(849),
    [sym_comment] = ACTIONS(58),
  },
  [284] = {
    [sym_package_or_type_name] = STATE(427),
    [sym_identifier] = ACTIONS(357),
    [sym_comment] = ACTIONS(58),
  },
  [285] = {
    [sym_package_or_type_name] = STATE(429),
    [sym_identifier] = ACTIONS(851),
    [sym_comment] = ACTIONS(58),
  },
  [286] = {
    [anon_sym_RBRACE] = ACTIONS(853),
    [anon_sym_requires] = ACTIONS(853),
    [anon_sym_exports] = ACTIONS(853),
    [anon_sym_opens] = ACTIONS(853),
    [anon_sym_uses] = ACTIONS(853),
    [anon_sym_provides] = ACTIONS(853),
    [sym_comment] = ACTIONS(58),
  },
  [287] = {
    [sym_module_directive] = STATE(430),
    [anon_sym_RBRACE] = ACTIONS(833),
    [anon_sym_requires] = ACTIONS(555),
    [anon_sym_exports] = ACTIONS(557),
    [anon_sym_opens] = ACTIONS(557),
    [anon_sym_uses] = ACTIONS(559),
    [anon_sym_provides] = ACTIONS(561),
    [sym_comment] = ACTIONS(58),
  },
  [288] = {
    [ts_builtin_sym_end] = ACTIONS(855),
    [sym_decimal_integer_literal] = ACTIONS(857),
    [sym_hex_integer_literal] = ACTIONS(857),
    [sym_octal_integer_literal] = ACTIONS(857),
    [sym_binary_integer_literal] = ACTIONS(857),
    [sym_decimal_floating_point_literal] = ACTIONS(857),
    [sym_hex_floating_point_literal] = ACTIONS(859),
    [anon_sym_true] = ACTIONS(857),
    [anon_sym_false] = ACTIONS(857),
    [anon_sym_SQUOTE] = ACTIONS(855),
    [sym_string_literal] = ACTIONS(855),
    [sym_null_literal] = ACTIONS(857),
    [anon_sym_LT] = ACTIONS(855),
    [anon_sym_LPAREN] = ACTIONS(855),
    [anon_sym_BANG] = ACTIONS(855),
    [anon_sym_TILDE] = ACTIONS(855),
    [anon_sym_PLUS_PLUS] = ACTIONS(855),
    [anon_sym_DASH_DASH] = ACTIONS(855),
    [anon_sym_default] = ACTIONS(857),
    [anon_sym_boolean] = ACTIONS(857),
    [anon_sym_byte] = ACTIONS(857),
    [anon_sym_short] = ACTIONS(857),
    [anon_sym_int] = ACTIONS(857),
    [anon_sym_long] = ACTIONS(857),
    [anon_sym_char] = ACTIONS(857),
    [anon_sym_float] = ACTIONS(857),
    [anon_sym_double] = ACTIONS(857),
    [anon_sym_AT] = ACTIONS(855),
    [anon_sym_open] = ACTIONS(857),
    [anon_sym_module] = ACTIONS(857),
    [anon_sym_static] = ACTIONS(857),
    [anon_sym_package] = ACTIONS(857),
    [anon_sym_import] = ACTIONS(857),
    [anon_sym_class] = ACTIONS(857),
    [anon_sym_public] = ACTIONS(857),
    [anon_sym_protected] = ACTIONS(857),
    [anon_sym_private] = ACTIONS(857),
    [anon_sym_abstract] = ACTIONS(857),
    [anon_sym_final] = ACTIONS(857),
    [anon_sym_strictfp] = ACTIONS(857),
    [anon_sym_synchronized] = ACTIONS(857),
    [anon_sym_native] = ACTIONS(857),
    [anon_sym_interface] = ACTIONS(857),
    [sym_identifier] = ACTIONS(859),
    [sym_comment] = ACTIONS(58),
  },
  [289] = {
    [anon_sym_STAR] = ACTIONS(861),
    [sym_identifier] = ACTIONS(863),
    [sym_comment] = ACTIONS(58),
  },
  [290] = {
    [sym__semicolon] = ACTIONS(865),
    [sym_comment] = ACTIONS(58),
  },
  [291] = {
    [anon_sym_GT] = ACTIONS(867),
    [sym_comment] = ACTIONS(58),
  },
  [292] = {
    [sym__semicolon] = ACTIONS(869),
    [anon_sym_LT] = ACTIONS(869),
    [anon_sym_LBRACE] = ACTIONS(869),
    [anon_sym_RBRACE] = ACTIONS(869),
    [anon_sym_default] = ACTIONS(871),
    [anon_sym_boolean] = ACTIONS(871),
    [anon_sym_byte] = ACTIONS(871),
    [anon_sym_short] = ACTIONS(871),
    [anon_sym_int] = ACTIONS(871),
    [anon_sym_long] = ACTIONS(871),
    [anon_sym_char] = ACTIONS(871),
    [anon_sym_float] = ACTIONS(871),
    [anon_sym_double] = ACTIONS(871),
    [anon_sym_AT] = ACTIONS(869),
    [anon_sym_static] = ACTIONS(871),
    [anon_sym_class] = ACTIONS(871),
    [anon_sym_public] = ACTIONS(871),
    [anon_sym_protected] = ACTIONS(871),
    [anon_sym_private] = ACTIONS(871),
    [anon_sym_abstract] = ACTIONS(871),
    [anon_sym_final] = ACTIONS(871),
    [anon_sym_strictfp] = ACTIONS(871),
    [anon_sym_synchronized] = ACTIONS(871),
    [anon_sym_native] = ACTIONS(871),
    [anon_sym_interface] = ACTIONS(871),
    [sym_identifier] = ACTIONS(873),
    [sym_comment] = ACTIONS(58),
  },
  [293] = {
    [sym_statement] = STATE(223),
    [sym_if_then_statement] = STATE(224),
    [sym_if_then_else_statement] = STATE(224),
    [sym__annotation] = STATE(219),
    [sym_normal_annotation] = STATE(225),
    [sym_marker_annotation] = STATE(225),
    [sym_single_element_annotation] = STATE(225),
    [sym_class_declaration] = STATE(223),
    [sym_normal_class_declaration] = STATE(226),
    [sym_modifier] = STATE(227),
    [sym_block_statements] = STATE(436),
    [sym_block_statement] = STATE(229),
    [sym_local_variable_declaration_statement] = STATE(223),
    [sym_local_variable_declaration] = STATE(230),
    [aux_sym_normal_class_declaration_repeat1] = STATE(231),
    [anon_sym_RBRACE] = ACTIONS(875),
    [anon_sym_default] = ACTIONS(429),
    [anon_sym_if] = ACTIONS(431),
    [anon_sym_AT] = ACTIONS(433),
    [anon_sym_static] = ACTIONS(429),
    [anon_sym_class] = ACTIONS(435),
    [anon_sym_public] = ACTIONS(429),
    [anon_sym_protected] = ACTIONS(429),
    [anon_sym_private] = ACTIONS(429),
    [anon_sym_abstract] = ACTIONS(429),
    [anon_sym_final] = ACTIONS(429),
    [anon_sym_strictfp] = ACTIONS(429),
    [anon_sym_synchronized] = ACTIONS(429),
    [anon_sym_native] = ACTIONS(429),
    [sym_comment] = ACTIONS(58),
  },
  [294] = {
    [ts_builtin_sym_end] = ACTIONS(877),
    [sym_decimal_integer_literal] = ACTIONS(879),
    [sym_hex_integer_literal] = ACTIONS(879),
    [sym_octal_integer_literal] = ACTIONS(879),
    [sym_binary_integer_literal] = ACTIONS(879),
    [sym_decimal_floating_point_literal] = ACTIONS(879),
    [sym_hex_floating_point_literal] = ACTIONS(881),
    [anon_sym_true] = ACTIONS(879),
    [anon_sym_false] = ACTIONS(879),
    [anon_sym_SQUOTE] = ACTIONS(877),
    [sym_string_literal] = ACTIONS(877),
    [sym_null_literal] = ACTIONS(879),
    [anon_sym_LT] = ACTIONS(877),
    [anon_sym_LPAREN] = ACTIONS(877),
    [anon_sym_BANG] = ACTIONS(877),
    [anon_sym_TILDE] = ACTIONS(877),
    [anon_sym_PLUS_PLUS] = ACTIONS(877),
    [anon_sym_DASH_DASH] = ACTIONS(877),
    [anon_sym_default] = ACTIONS(879),
    [anon_sym_boolean] = ACTIONS(879),
    [anon_sym_byte] = ACTIONS(879),
    [anon_sym_short] = ACTIONS(879),
    [anon_sym_int] = ACTIONS(879),
    [anon_sym_long] = ACTIONS(879),
    [anon_sym_char] = ACTIONS(879),
    [anon_sym_float] = ACTIONS(879),
    [anon_sym_double] = ACTIONS(879),
    [anon_sym_AT] = ACTIONS(877),
    [anon_sym_open] = ACTIONS(879),
    [anon_sym_module] = ACTIONS(879),
    [anon_sym_static] = ACTIONS(879),
    [anon_sym_package] = ACTIONS(879),
    [anon_sym_import] = ACTIONS(879),
    [anon_sym_class] = ACTIONS(879),
    [anon_sym_public] = ACTIONS(879),
    [anon_sym_protected] = ACTIONS(879),
    [anon_sym_private] = ACTIONS(879),
    [anon_sym_abstract] = ACTIONS(879),
    [anon_sym_final] = ACTIONS(879),
    [anon_sym_strictfp] = ACTIONS(879),
    [anon_sym_synchronized] = ACTIONS(879),
    [anon_sym_native] = ACTIONS(879),
    [anon_sym_interface] = ACTIONS(879),
    [sym_identifier] = ACTIONS(881),
    [sym_comment] = ACTIONS(58),
  },
  [295] = {
    [sym_package_or_type_name] = STATE(236),
    [anon_sym_interface] = ACTIONS(883),
    [sym_identifier] = ACTIONS(457),
    [sym_comment] = ACTIONS(58),
  },
  [296] = {
    [sym_identifier] = ACTIONS(885),
    [sym_comment] = ACTIONS(58),
  },
  [297] = {
    [sym_identifier] = ACTIONS(887),
    [sym_comment] = ACTIONS(58),
  },
  [298] = {
    [sym_type_arguments] = STATE(92),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(889),
    [anon_sym_DOT] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(58),
  },
  [299] = {
    [sym__semicolon] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_default] = ACTIONS(209),
    [anon_sym_boolean] = ACTIONS(209),
    [anon_sym_byte] = ACTIONS(209),
    [anon_sym_short] = ACTIONS(209),
    [anon_sym_int] = ACTIONS(209),
    [anon_sym_long] = ACTIONS(209),
    [anon_sym_char] = ACTIONS(209),
    [anon_sym_float] = ACTIONS(209),
    [anon_sym_double] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(207),
    [anon_sym_static] = ACTIONS(209),
    [anon_sym_class] = ACTIONS(209),
    [anon_sym_public] = ACTIONS(209),
    [anon_sym_protected] = ACTIONS(209),
    [anon_sym_private] = ACTIONS(209),
    [anon_sym_abstract] = ACTIONS(209),
    [anon_sym_final] = ACTIONS(209),
    [anon_sym_strictfp] = ACTIONS(209),
    [anon_sym_synchronized] = ACTIONS(209),
    [anon_sym_native] = ACTIONS(209),
    [anon_sym_interface] = ACTIONS(209),
    [sym_identifier] = ACTIONS(211),
    [sym_comment] = ACTIONS(58),
  },
  [300] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(104),
    [sym_normal_annotation] = STATE(105),
    [sym_marker_annotation] = STATE(105),
    [sym_single_element_annotation] = STATE(105),
    [sym_unann_type] = STATE(106),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [aux_sym_class_or_interface_type_repeat1] = STATE(107),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(891),
    [sym_comment] = ACTIONS(58),
  },
  [301] = {
    [sym__semicolon] = ACTIONS(893),
    [anon_sym_LT] = ACTIONS(893),
    [anon_sym_LBRACE] = ACTIONS(893),
    [anon_sym_RBRACE] = ACTIONS(893),
    [anon_sym_default] = ACTIONS(895),
    [anon_sym_boolean] = ACTIONS(895),
    [anon_sym_byte] = ACTIONS(895),
    [anon_sym_short] = ACTIONS(895),
    [anon_sym_int] = ACTIONS(895),
    [anon_sym_long] = ACTIONS(895),
    [anon_sym_char] = ACTIONS(895),
    [anon_sym_float] = ACTIONS(895),
    [anon_sym_double] = ACTIONS(895),
    [anon_sym_AT] = ACTIONS(893),
    [anon_sym_static] = ACTIONS(895),
    [anon_sym_class] = ACTIONS(895),
    [anon_sym_public] = ACTIONS(895),
    [anon_sym_protected] = ACTIONS(895),
    [anon_sym_private] = ACTIONS(895),
    [anon_sym_abstract] = ACTIONS(895),
    [anon_sym_final] = ACTIONS(895),
    [anon_sym_strictfp] = ACTIONS(895),
    [anon_sym_synchronized] = ACTIONS(895),
    [anon_sym_native] = ACTIONS(895),
    [anon_sym_interface] = ACTIONS(895),
    [sym_identifier] = ACTIONS(897),
    [sym_comment] = ACTIONS(58),
  },
  [302] = {
    [sym__semicolon] = ACTIONS(899),
    [anon_sym_LT] = ACTIONS(899),
    [anon_sym_LBRACE] = ACTIONS(899),
    [anon_sym_RBRACE] = ACTIONS(899),
    [anon_sym_default] = ACTIONS(901),
    [anon_sym_boolean] = ACTIONS(901),
    [anon_sym_byte] = ACTIONS(901),
    [anon_sym_short] = ACTIONS(901),
    [anon_sym_int] = ACTIONS(901),
    [anon_sym_long] = ACTIONS(901),
    [anon_sym_char] = ACTIONS(901),
    [anon_sym_float] = ACTIONS(901),
    [anon_sym_double] = ACTIONS(901),
    [anon_sym_AT] = ACTIONS(899),
    [anon_sym_static] = ACTIONS(901),
    [anon_sym_class] = ACTIONS(901),
    [anon_sym_public] = ACTIONS(901),
    [anon_sym_protected] = ACTIONS(901),
    [anon_sym_private] = ACTIONS(901),
    [anon_sym_abstract] = ACTIONS(901),
    [anon_sym_final] = ACTIONS(901),
    [anon_sym_strictfp] = ACTIONS(901),
    [anon_sym_synchronized] = ACTIONS(901),
    [anon_sym_native] = ACTIONS(901),
    [anon_sym_interface] = ACTIONS(901),
    [sym_identifier] = ACTIONS(903),
    [sym_comment] = ACTIONS(58),
  },
  [303] = {
    [sym_constructor_body] = STATE(443),
    [sym_throws] = STATE(444),
    [anon_sym_LBRACE] = ACTIONS(905),
    [anon_sym_throws] = ACTIONS(405),
    [sym_comment] = ACTIONS(58),
  },
  [304] = {
    [sym__semicolon] = ACTIONS(223),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_default] = ACTIONS(225),
    [anon_sym_boolean] = ACTIONS(225),
    [anon_sym_byte] = ACTIONS(225),
    [anon_sym_short] = ACTIONS(225),
    [anon_sym_int] = ACTIONS(225),
    [anon_sym_long] = ACTIONS(225),
    [anon_sym_char] = ACTIONS(225),
    [anon_sym_float] = ACTIONS(225),
    [anon_sym_double] = ACTIONS(225),
    [anon_sym_AT] = ACTIONS(223),
    [anon_sym_static] = ACTIONS(225),
    [anon_sym_class] = ACTIONS(225),
    [anon_sym_public] = ACTIONS(225),
    [anon_sym_protected] = ACTIONS(225),
    [anon_sym_private] = ACTIONS(225),
    [anon_sym_abstract] = ACTIONS(225),
    [anon_sym_final] = ACTIONS(225),
    [anon_sym_strictfp] = ACTIONS(225),
    [anon_sym_synchronized] = ACTIONS(225),
    [anon_sym_native] = ACTIONS(225),
    [anon_sym_interface] = ACTIONS(225),
    [sym_identifier] = ACTIONS(227),
    [sym_comment] = ACTIONS(58),
  },
  [305] = {
    [sym_method_body] = STATE(446),
    [sym_block] = STATE(445),
    [sym__semicolon] = ACTIONS(907),
    [anon_sym_LBRACE] = ACTIONS(583),
    [sym_comment] = ACTIONS(58),
  },
  [306] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(126),
    [sym_marker_annotation] = STATE(126),
    [sym_single_element_annotation] = STATE(126),
    [sym_modifier] = STATE(127),
    [sym_type_parameters] = STATE(300),
    [sym_constructor_declarator] = STATE(450),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(451),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(909),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(911),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(913),
    [sym_identifier] = ACTIONS(593),
    [sym_comment] = ACTIONS(58),
  },
  [307] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(126),
    [sym_marker_annotation] = STATE(126),
    [sym_single_element_annotation] = STATE(126),
    [sym_class_declaration] = STATE(292),
    [sym_normal_class_declaration] = STATE(299),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(300),
    [sym_class_body_declaration] = STATE(453),
    [sym_constructor_declaration] = STATE(302),
    [sym_constructor_declarator] = STATE(303),
    [sym_class_member_declaration] = STATE(302),
    [sym_interface_declaration] = STATE(292),
    [sym_annotation_type_declaration] = STATE(304),
    [sym_normal_interface_declaration] = STATE(304),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(305),
    [sym_block] = STATE(302),
    [sym_method_declaration] = STATE(292),
    [aux_sym_normal_class_declaration_repeat1] = STATE(306),
    [sym__semicolon] = ACTIONS(581),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(915),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(593),
    [sym_comment] = ACTIONS(58),
  },
  [308] = {
    [sym_type_arguments] = STATE(456),
    [aux_sym_class_or_interface_type_repeat2] = STATE(457),
    [anon_sym_LT] = ACTIONS(917),
    [anon_sym_LBRACE] = ACTIONS(615),
    [anon_sym_DOT] = ACTIONS(919),
    [anon_sym_implements] = ACTIONS(615),
    [sym_comment] = ACTIONS(58),
  },
  [309] = {
    [anon_sym_LBRACE] = ACTIONS(921),
    [anon_sym_implements] = ACTIONS(921),
    [sym_comment] = ACTIONS(58),
  },
  [310] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(923),
    [sym_comment] = ACTIONS(58),
  },
  [311] = {
    [aux_sym_interface_type_list_repeat1] = STATE(460),
    [anon_sym_COMMA] = ACTIONS(925),
    [anon_sym_LBRACE] = ACTIONS(927),
    [sym_comment] = ACTIONS(58),
  },
  [312] = {
    [anon_sym_LBRACE] = ACTIONS(929),
    [sym_comment] = ACTIONS(58),
  },
  [313] = {
    [sym_super_interfaces] = STATE(461),
    [sym_class_body] = STATE(462),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [314] = {
    [sym_class_body] = STATE(462),
    [anon_sym_LBRACE] = ACTIONS(365),
    [sym_comment] = ACTIONS(58),
  },
  [315] = {
    [ts_builtin_sym_end] = ACTIONS(931),
    [sym_decimal_integer_literal] = ACTIONS(933),
    [sym_hex_integer_literal] = ACTIONS(933),
    [sym_octal_integer_literal] = ACTIONS(933),
    [sym_binary_integer_literal] = ACTIONS(933),
    [sym_decimal_floating_point_literal] = ACTIONS(933),
    [sym_hex_floating_point_literal] = ACTIONS(935),
    [anon_sym_true] = ACTIONS(933),
    [anon_sym_false] = ACTIONS(933),
    [anon_sym_SQUOTE] = ACTIONS(931),
    [sym_string_literal] = ACTIONS(931),
    [sym_null_literal] = ACTIONS(933),
    [anon_sym_LT] = ACTIONS(931),
    [anon_sym_LPAREN] = ACTIONS(931),
    [anon_sym_BANG] = ACTIONS(931),
    [anon_sym_TILDE] = ACTIONS(931),
    [anon_sym_PLUS_PLUS] = ACTIONS(931),
    [anon_sym_DASH_DASH] = ACTIONS(931),
    [anon_sym_default] = ACTIONS(933),
    [anon_sym_boolean] = ACTIONS(933),
    [anon_sym_byte] = ACTIONS(933),
    [anon_sym_short] = ACTIONS(933),
    [anon_sym_int] = ACTIONS(933),
    [anon_sym_long] = ACTIONS(933),
    [anon_sym_char] = ACTIONS(933),
    [anon_sym_float] = ACTIONS(933),
    [anon_sym_double] = ACTIONS(933),
    [anon_sym_AT] = ACTIONS(931),
    [anon_sym_open] = ACTIONS(933),
    [anon_sym_module] = ACTIONS(933),
    [anon_sym_static] = ACTIONS(933),
    [anon_sym_package] = ACTIONS(933),
    [anon_sym_import] = ACTIONS(933),
    [anon_sym_class] = ACTIONS(933),
    [anon_sym_public] = ACTIONS(933),
    [anon_sym_protected] = ACTIONS(933),
    [anon_sym_private] = ACTIONS(933),
    [anon_sym_abstract] = ACTIONS(933),
    [anon_sym_final] = ACTIONS(933),
    [anon_sym_strictfp] = ACTIONS(933),
    [anon_sym_synchronized] = ACTIONS(933),
    [anon_sym_native] = ACTIONS(933),
    [anon_sym_interface] = ACTIONS(933),
    [sym_identifier] = ACTIONS(935),
    [sym_comment] = ACTIONS(58),
  },
  [316] = {
    [sym__semicolon] = ACTIONS(937),
    [anon_sym_LT] = ACTIONS(937),
    [anon_sym_RBRACE] = ACTIONS(937),
    [anon_sym_default] = ACTIONS(939),
    [anon_sym_boolean] = ACTIONS(939),
    [anon_sym_byte] = ACTIONS(939),
    [anon_sym_short] = ACTIONS(939),
    [anon_sym_int] = ACTIONS(939),
    [anon_sym_long] = ACTIONS(939),
    [anon_sym_char] = ACTIONS(939),
    [anon_sym_float] = ACTIONS(939),
    [anon_sym_double] = ACTIONS(939),
    [anon_sym_AT] = ACTIONS(937),
    [anon_sym_static] = ACTIONS(939),
    [anon_sym_class] = ACTIONS(939),
    [anon_sym_public] = ACTIONS(939),
    [anon_sym_protected] = ACTIONS(939),
    [anon_sym_private] = ACTIONS(939),
    [anon_sym_abstract] = ACTIONS(939),
    [anon_sym_final] = ACTIONS(939),
    [anon_sym_strictfp] = ACTIONS(939),
    [anon_sym_synchronized] = ACTIONS(939),
    [anon_sym_native] = ACTIONS(939),
    [anon_sym_interface] = ACTIONS(939),
    [sym_identifier] = ACTIONS(941),
    [sym_comment] = ACTIONS(58),
  },
  [317] = {
    [ts_builtin_sym_end] = ACTIONS(943),
    [sym_decimal_integer_literal] = ACTIONS(945),
    [sym_hex_integer_literal] = ACTIONS(945),
    [sym_octal_integer_literal] = ACTIONS(945),
    [sym_binary_integer_literal] = ACTIONS(945),
    [sym_decimal_floating_point_literal] = ACTIONS(945),
    [sym_hex_floating_point_literal] = ACTIONS(947),
    [anon_sym_true] = ACTIONS(945),
    [anon_sym_false] = ACTIONS(945),
    [anon_sym_SQUOTE] = ACTIONS(943),
    [sym_string_literal] = ACTIONS(943),
    [sym_null_literal] = ACTIONS(945),
    [anon_sym_LT] = ACTIONS(943),
    [anon_sym_LPAREN] = ACTIONS(943),
    [anon_sym_BANG] = ACTIONS(943),
    [anon_sym_TILDE] = ACTIONS(943),
    [anon_sym_PLUS_PLUS] = ACTIONS(943),
    [anon_sym_DASH_DASH] = ACTIONS(943),
    [anon_sym_default] = ACTIONS(945),
    [anon_sym_boolean] = ACTIONS(945),
    [anon_sym_byte] = ACTIONS(945),
    [anon_sym_short] = ACTIONS(945),
    [anon_sym_int] = ACTIONS(945),
    [anon_sym_long] = ACTIONS(945),
    [anon_sym_char] = ACTIONS(945),
    [anon_sym_float] = ACTIONS(945),
    [anon_sym_double] = ACTIONS(945),
    [anon_sym_AT] = ACTIONS(943),
    [anon_sym_open] = ACTIONS(945),
    [anon_sym_module] = ACTIONS(945),
    [anon_sym_static] = ACTIONS(945),
    [anon_sym_package] = ACTIONS(945),
    [anon_sym_import] = ACTIONS(945),
    [anon_sym_class] = ACTIONS(945),
    [anon_sym_public] = ACTIONS(945),
    [anon_sym_protected] = ACTIONS(945),
    [anon_sym_private] = ACTIONS(945),
    [anon_sym_abstract] = ACTIONS(945),
    [anon_sym_final] = ACTIONS(945),
    [anon_sym_strictfp] = ACTIONS(945),
    [anon_sym_synchronized] = ACTIONS(945),
    [anon_sym_native] = ACTIONS(945),
    [anon_sym_interface] = ACTIONS(945),
    [sym_identifier] = ACTIONS(947),
    [sym_comment] = ACTIONS(58),
  },
  [318] = {
    [sym__semicolon] = ACTIONS(949),
    [anon_sym_LT] = ACTIONS(949),
    [anon_sym_RBRACE] = ACTIONS(949),
    [anon_sym_default] = ACTIONS(951),
    [anon_sym_boolean] = ACTIONS(951),
    [anon_sym_byte] = ACTIONS(951),
    [anon_sym_short] = ACTIONS(951),
    [anon_sym_int] = ACTIONS(951),
    [anon_sym_long] = ACTIONS(951),
    [anon_sym_char] = ACTIONS(951),
    [anon_sym_float] = ACTIONS(951),
    [anon_sym_double] = ACTIONS(951),
    [anon_sym_AT] = ACTIONS(949),
    [anon_sym_static] = ACTIONS(951),
    [anon_sym_class] = ACTIONS(951),
    [anon_sym_public] = ACTIONS(951),
    [anon_sym_protected] = ACTIONS(951),
    [anon_sym_private] = ACTIONS(951),
    [anon_sym_abstract] = ACTIONS(951),
    [anon_sym_final] = ACTIONS(951),
    [anon_sym_strictfp] = ACTIONS(951),
    [anon_sym_synchronized] = ACTIONS(951),
    [anon_sym_native] = ACTIONS(951),
    [anon_sym_interface] = ACTIONS(951),
    [sym_identifier] = ACTIONS(953),
    [sym_comment] = ACTIONS(58),
  },
  [319] = {
    [sym_variable_declarator_list] = STATE(464),
    [sym_variable_declarator] = STATE(465),
    [sym_variable_declarator_id] = STATE(254),
    [sym_method_declarator] = STATE(109),
    [sym_identifier] = ACTIONS(955),
    [sym_comment] = ACTIONS(58),
  },
  [320] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(126),
    [sym_marker_annotation] = STATE(126),
    [sym_single_element_annotation] = STATE(126),
    [sym_modifier] = STATE(127),
    [sym_type_parameters] = STATE(37),
    [sym_unann_type] = STATE(466),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(451),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(909),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(911),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(913),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [321] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(126),
    [sym_marker_annotation] = STATE(126),
    [sym_single_element_annotation] = STATE(126),
    [sym_class_declaration] = STATE(316),
    [sym_normal_class_declaration] = STATE(299),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(37),
    [sym_interface_declaration] = STATE(316),
    [sym_annotation_type_declaration] = STATE(304),
    [sym_normal_interface_declaration] = STATE(304),
    [sym_interface_member_declaration] = STATE(468),
    [sym_constant_declaration] = STATE(316),
    [sym_unann_type] = STATE(319),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(305),
    [sym_method_declaration] = STATE(316),
    [aux_sym_normal_class_declaration_repeat1] = STATE(320),
    [sym__semicolon] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(957),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [322] = {
    [anon_sym_LBRACE] = ACTIONS(959),
    [sym_comment] = ACTIONS(58),
  },
  [323] = {
    [sym_interface_body] = STATE(469),
    [anon_sym_LBRACE] = ACTIONS(371),
    [sym_comment] = ACTIONS(58),
  },
  [324] = {
    [ts_builtin_sym_end] = ACTIONS(961),
    [sym_decimal_integer_literal] = ACTIONS(963),
    [sym_hex_integer_literal] = ACTIONS(963),
    [sym_octal_integer_literal] = ACTIONS(963),
    [sym_binary_integer_literal] = ACTIONS(963),
    [sym_decimal_floating_point_literal] = ACTIONS(963),
    [sym_hex_floating_point_literal] = ACTIONS(965),
    [anon_sym_true] = ACTIONS(963),
    [anon_sym_false] = ACTIONS(963),
    [anon_sym_SQUOTE] = ACTIONS(961),
    [sym_string_literal] = ACTIONS(961),
    [sym_null_literal] = ACTIONS(963),
    [anon_sym_LT] = ACTIONS(961),
    [anon_sym_LPAREN] = ACTIONS(961),
    [anon_sym_BANG] = ACTIONS(961),
    [anon_sym_TILDE] = ACTIONS(961),
    [anon_sym_PLUS_PLUS] = ACTIONS(961),
    [anon_sym_DASH_DASH] = ACTIONS(961),
    [anon_sym_default] = ACTIONS(963),
    [anon_sym_boolean] = ACTIONS(963),
    [anon_sym_byte] = ACTIONS(963),
    [anon_sym_short] = ACTIONS(963),
    [anon_sym_int] = ACTIONS(963),
    [anon_sym_long] = ACTIONS(963),
    [anon_sym_char] = ACTIONS(963),
    [anon_sym_float] = ACTIONS(963),
    [anon_sym_double] = ACTIONS(963),
    [anon_sym_AT] = ACTIONS(961),
    [anon_sym_open] = ACTIONS(963),
    [anon_sym_module] = ACTIONS(963),
    [anon_sym_static] = ACTIONS(963),
    [anon_sym_package] = ACTIONS(963),
    [anon_sym_import] = ACTIONS(963),
    [anon_sym_class] = ACTIONS(963),
    [anon_sym_public] = ACTIONS(963),
    [anon_sym_protected] = ACTIONS(963),
    [anon_sym_private] = ACTIONS(963),
    [anon_sym_abstract] = ACTIONS(963),
    [anon_sym_final] = ACTIONS(963),
    [anon_sym_strictfp] = ACTIONS(963),
    [anon_sym_synchronized] = ACTIONS(963),
    [anon_sym_native] = ACTIONS(963),
    [anon_sym_interface] = ACTIONS(963),
    [sym_identifier] = ACTIONS(965),
    [sym_comment] = ACTIONS(58),
  },
  [325] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(471),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(967),
    [sym_comment] = ACTIONS(58),
  },
  [326] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(472),
    [anon_sym_GT] = ACTIONS(969),
    [anon_sym_AMP] = ACTIONS(969),
    [anon_sym_COMMA] = ACTIONS(969),
    [anon_sym_LBRACE] = ACTIONS(969),
    [anon_sym_DOT] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(969),
    [anon_sym_AT] = ACTIONS(969),
    [anon_sym_COLON_COLON] = ACTIONS(969),
    [sym_comment] = ACTIONS(58),
  },
  [327] = {
    [anon_sym_GT] = ACTIONS(969),
    [anon_sym_AMP] = ACTIONS(969),
    [anon_sym_COMMA] = ACTIONS(969),
    [anon_sym_LBRACE] = ACTIONS(969),
    [anon_sym_DOT] = ACTIONS(971),
    [anon_sym_LBRACK] = ACTIONS(969),
    [anon_sym_AT] = ACTIONS(969),
    [anon_sym_COLON_COLON] = ACTIONS(969),
    [sym_comment] = ACTIONS(58),
  },
  [328] = {
    [anon_sym_GT] = ACTIONS(973),
    [anon_sym_AMP] = ACTIONS(973),
    [anon_sym_LPAREN] = ACTIONS(973),
    [anon_sym_COMMA] = ACTIONS(973),
    [anon_sym_LBRACE] = ACTIONS(973),
    [anon_sym_DOT] = ACTIONS(975),
    [anon_sym_LBRACK] = ACTIONS(973),
    [anon_sym_AT] = ACTIONS(973),
    [anon_sym_COLON_COLON] = ACTIONS(973),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(973),
    [sym_identifier] = ACTIONS(975),
    [sym_comment] = ACTIONS(58),
  },
  [329] = {
    [sym_type_argument] = STATE(474),
    [sym_reference_type] = STATE(190),
    [sym_class_or_interface_type] = STATE(191),
    [sym_primitive_type] = STATE(192),
    [sym_integral_type] = STATE(187),
    [sym_floating_point_type] = STATE(187),
    [sym__annotation] = STATE(104),
    [sym_normal_annotation] = STATE(105),
    [sym_marker_annotation] = STATE(105),
    [sym_single_element_annotation] = STATE(105),
    [aux_sym_class_or_interface_type_repeat1] = STATE(193),
    [anon_sym_boolean] = ACTIONS(375),
    [anon_sym_void] = ACTIONS(375),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(377),
    [sym_comment] = ACTIONS(58),
  },
  [330] = {
    [anon_sym_GT] = ACTIONS(977),
    [anon_sym_COMMA] = ACTIONS(979),
    [sym_comment] = ACTIONS(58),
  },
  [331] = {
    [anon_sym_GT] = ACTIONS(981),
    [anon_sym_COMMA] = ACTIONS(981),
    [sym_comment] = ACTIONS(58),
  },
  [332] = {
    [anon_sym_LBRACK] = ACTIONS(983),
    [anon_sym_AT] = ACTIONS(983),
    [sym_comment] = ACTIONS(58),
  },
  [333] = {
    [sym_type_arguments] = STATE(477),
    [aux_sym_class_or_interface_type_repeat2] = STATE(472),
    [anon_sym_GT] = ACTIONS(969),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(969),
    [anon_sym_COMMA] = ACTIONS(969),
    [anon_sym_LBRACE] = ACTIONS(969),
    [anon_sym_DOT] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(969),
    [anon_sym_AT] = ACTIONS(969),
    [anon_sym_COLON_COLON] = ACTIONS(969),
    [sym_comment] = ACTIONS(58),
  },
  [334] = {
    [sym__expression] = STATE(478),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [335] = {
    [sym__expression] = STATE(479),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [336] = {
    [sym__expression] = STATE(480),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [337] = {
    [sym__expression] = STATE(481),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [338] = {
    [sym__expression] = STATE(198),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [339] = {
    [sym__expression] = STATE(482),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [340] = {
    [sym__expression] = STATE(483),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_PLUS_PLUS] = ACTIONS(32),
    [anon_sym_DASH_DASH] = ACTIONS(32),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [341] = {
    [sym__expression] = STATE(484),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_PLUS_PLUS] = ACTIONS(395),
    [anon_sym_DASH_DASH] = ACTIONS(395),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [342] = {
    [sym__expression] = STATE(485),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_PLUS_PLUS] = ACTIONS(395),
    [anon_sym_DASH_DASH] = ACTIONS(395),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [343] = {
    [sym__expression] = STATE(486),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_PLUS_PLUS] = ACTIONS(395),
    [anon_sym_DASH_DASH] = ACTIONS(395),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [344] = {
    [sym__expression] = STATE(487),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_PLUS_PLUS] = ACTIONS(395),
    [anon_sym_DASH_DASH] = ACTIONS(395),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [345] = {
    [sym__expression] = STATE(198),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_PLUS_PLUS] = ACTIONS(395),
    [anon_sym_DASH_DASH] = ACTIONS(395),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [346] = {
    [sym__expression] = STATE(488),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [347] = {
    [sym__semicolon] = ACTIONS(985),
    [anon_sym_GT] = ACTIONS(987),
    [anon_sym_LT] = ACTIONS(987),
    [anon_sym_EQ_EQ] = ACTIONS(985),
    [anon_sym_GT_EQ] = ACTIONS(985),
    [anon_sym_LT_EQ] = ACTIONS(985),
    [anon_sym_BANG_EQ] = ACTIONS(985),
    [anon_sym_AMP_AMP] = ACTIONS(985),
    [anon_sym_PIPE_PIPE] = ACTIONS(985),
    [anon_sym_PLUS] = ACTIONS(987),
    [anon_sym_DASH] = ACTIONS(987),
    [anon_sym_STAR] = ACTIONS(985),
    [anon_sym_SLASH] = ACTIONS(987),
    [anon_sym_AMP] = ACTIONS(987),
    [anon_sym_PIPE] = ACTIONS(987),
    [anon_sym_CARET] = ACTIONS(985),
    [anon_sym_PERCENT] = ACTIONS(985),
    [anon_sym_LT_LT] = ACTIONS(985),
    [anon_sym_GT_GT] = ACTIONS(987),
    [anon_sym_GT_GT_GT] = ACTIONS(985),
    [anon_sym_RPAREN] = ACTIONS(985),
    [anon_sym_COMMA] = ACTIONS(985),
    [anon_sym_QMARK] = ACTIONS(985),
    [anon_sym_COLON] = ACTIONS(985),
    [anon_sym_PLUS_PLUS] = ACTIONS(985),
    [anon_sym_DASH_DASH] = ACTIONS(985),
    [anon_sym_LBRACE] = ACTIONS(985),
    [anon_sym_RBRACE] = ACTIONS(985),
    [anon_sym_RBRACK] = ACTIONS(985),
    [sym_comment] = ACTIONS(58),
  },
  [348] = {
    [sym__literal] = STATE(491),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(492),
    [sym_element_value_pair] = STATE(276),
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
    [sym_null_literal] = ACTIONS(24),
    [anon_sym_RPAREN] = ACTIONS(989),
    [sym_identifier] = ACTIONS(991),
    [sym_comment] = ACTIONS(58),
  },
  [349] = {
    [sym_identifier] = ACTIONS(993),
    [sym_comment] = ACTIONS(58),
  },
  [350] = {
    [sym__semicolon] = ACTIONS(995),
    [anon_sym_LBRACE] = ACTIONS(995),
    [sym_comment] = ACTIONS(58),
  },
  [351] = {
    [sym_throws] = STATE(494),
    [sym__semicolon] = ACTIONS(995),
    [anon_sym_LBRACE] = ACTIONS(995),
    [anon_sym_throws] = ACTIONS(405),
    [sym_comment] = ACTIONS(58),
  },
  [352] = {
    [sym_dims] = STATE(496),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(497),
    [aux_sym_dims_repeat1] = STATE(498),
    [sym__semicolon] = ACTIONS(997),
    [anon_sym_LBRACE] = ACTIONS(997),
    [anon_sym_LBRACK] = ACTIONS(999),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_throws] = ACTIONS(997),
    [sym_comment] = ACTIONS(58),
  },
  [353] = {
    [anon_sym_RPAREN] = ACTIONS(1001),
    [sym_comment] = ACTIONS(58),
  },
  [354] = {
    [sym_type_arguments] = STATE(501),
    [aux_sym_class_or_interface_type_repeat2] = STATE(502),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(1003),
    [anon_sym_AT] = ACTIONS(615),
    [sym_identifier] = ACTIONS(1005),
    [sym_comment] = ACTIONS(58),
  },
  [355] = {
    [sym_type_variable] = STATE(504),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(505),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1007),
    [sym_comment] = ACTIONS(58),
  },
  [356] = {
    [sym__semicolon] = ACTIONS(1009),
    [anon_sym_LBRACE] = ACTIONS(1009),
    [sym_comment] = ACTIONS(58),
  },
  [357] = {
    [aux_sym_exception_type_list_repeat1] = STATE(507),
    [sym__semicolon] = ACTIONS(1011),
    [anon_sym_COMMA] = ACTIONS(1013),
    [anon_sym_LBRACE] = ACTIONS(1011),
    [sym_comment] = ACTIONS(58),
  },
  [358] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1015),
    [sym_comment] = ACTIONS(58),
  },
  [359] = {
    [sym__semicolon] = ACTIONS(1017),
    [anon_sym_EQ] = ACTIONS(1017),
    [anon_sym_GT] = ACTIONS(1017),
    [anon_sym_RPAREN] = ACTIONS(1017),
    [anon_sym_COMMA] = ACTIONS(1017),
    [anon_sym_LBRACE] = ACTIONS(1017),
    [anon_sym_DOT] = ACTIONS(1019),
    [anon_sym_LBRACK] = ACTIONS(1017),
    [anon_sym_AT] = ACTIONS(1017),
    [anon_sym_COLON_COLON] = ACTIONS(1017),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1017),
    [sym_identifier] = ACTIONS(1019),
    [sym_comment] = ACTIONS(58),
  },
  [360] = {
    [anon_sym_RBRACK] = ACTIONS(1021),
    [sym_comment] = ACTIONS(58),
  },
  [361] = {
    [anon_sym_DOT] = ACTIONS(1023),
    [anon_sym_LBRACK] = ACTIONS(1025),
    [anon_sym_AT] = ACTIONS(1025),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1025),
    [sym_identifier] = ACTIONS(1023),
    [sym_comment] = ACTIONS(58),
  },
  [362] = {
    [sym_type_arguments] = STATE(510),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(1023),
    [anon_sym_LBRACK] = ACTIONS(1025),
    [anon_sym_AT] = ACTIONS(1025),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1025),
    [sym_identifier] = ACTIONS(1023),
    [sym_comment] = ACTIONS(58),
  },
  [363] = {
    [sym__expression] = STATE(513),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1027),
    [anon_sym_TILDE] = ACTIONS(1027),
    [anon_sym_PLUS_PLUS] = ACTIONS(1029),
    [anon_sym_DASH_DASH] = ACTIONS(1029),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [364] = {
    [anon_sym_LPAREN] = ACTIONS(333),
    [anon_sym_default] = ACTIONS(335),
    [anon_sym_DOT] = ACTIONS(333),
    [anon_sym_boolean] = ACTIONS(335),
    [anon_sym_byte] = ACTIONS(335),
    [anon_sym_short] = ACTIONS(335),
    [anon_sym_int] = ACTIONS(335),
    [anon_sym_long] = ACTIONS(335),
    [anon_sym_char] = ACTIONS(335),
    [anon_sym_float] = ACTIONS(335),
    [anon_sym_double] = ACTIONS(335),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_static] = ACTIONS(335),
    [anon_sym_class] = ACTIONS(335),
    [anon_sym_public] = ACTIONS(335),
    [anon_sym_protected] = ACTIONS(335),
    [anon_sym_private] = ACTIONS(335),
    [anon_sym_abstract] = ACTIONS(335),
    [anon_sym_final] = ACTIONS(335),
    [anon_sym_strictfp] = ACTIONS(335),
    [anon_sym_synchronized] = ACTIONS(335),
    [anon_sym_native] = ACTIONS(335),
    [sym_identifier] = ACTIONS(337),
    [sym_comment] = ACTIONS(58),
  },
  [365] = {
    [anon_sym_LPAREN] = ACTIONS(1031),
    [anon_sym_default] = ACTIONS(343),
    [anon_sym_DOT] = ACTIONS(1033),
    [anon_sym_boolean] = ACTIONS(343),
    [anon_sym_byte] = ACTIONS(343),
    [anon_sym_short] = ACTIONS(343),
    [anon_sym_int] = ACTIONS(343),
    [anon_sym_long] = ACTIONS(343),
    [anon_sym_char] = ACTIONS(343),
    [anon_sym_float] = ACTIONS(343),
    [anon_sym_double] = ACTIONS(343),
    [anon_sym_AT] = ACTIONS(339),
    [anon_sym_static] = ACTIONS(343),
    [anon_sym_class] = ACTIONS(343),
    [anon_sym_public] = ACTIONS(343),
    [anon_sym_protected] = ACTIONS(343),
    [anon_sym_private] = ACTIONS(343),
    [anon_sym_abstract] = ACTIONS(343),
    [anon_sym_final] = ACTIONS(343),
    [anon_sym_strictfp] = ACTIONS(343),
    [anon_sym_synchronized] = ACTIONS(343),
    [anon_sym_native] = ACTIONS(343),
    [sym_identifier] = ACTIONS(347),
    [sym_comment] = ACTIONS(58),
  },
  [366] = {
    [sym_type_parameters] = STATE(517),
    [sym_superclass] = STATE(518),
    [sym_super_interfaces] = STATE(519),
    [sym_class_body] = STATE(520),
    [anon_sym_LT] = ACTIONS(363),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [anon_sym_extends] = ACTIONS(367),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [367] = {
    [sym_variable_declarator_list] = STATE(521),
    [sym_variable_declarator] = STATE(465),
    [sym_variable_declarator_id] = STATE(254),
    [sym_identifier] = ACTIONS(509),
    [sym_comment] = ACTIONS(58),
  },
  [368] = {
    [ts_builtin_sym_end] = ACTIONS(1037),
    [sym__semicolon] = ACTIONS(1037),
    [sym_decimal_integer_literal] = ACTIONS(1039),
    [sym_hex_integer_literal] = ACTIONS(1039),
    [sym_octal_integer_literal] = ACTIONS(1039),
    [sym_binary_integer_literal] = ACTIONS(1039),
    [sym_decimal_floating_point_literal] = ACTIONS(1039),
    [sym_hex_floating_point_literal] = ACTIONS(1041),
    [anon_sym_true] = ACTIONS(1039),
    [anon_sym_false] = ACTIONS(1039),
    [anon_sym_SQUOTE] = ACTIONS(1037),
    [sym_string_literal] = ACTIONS(1037),
    [sym_null_literal] = ACTIONS(1039),
    [anon_sym_GT] = ACTIONS(1039),
    [anon_sym_LT] = ACTIONS(1039),
    [anon_sym_EQ_EQ] = ACTIONS(1037),
    [anon_sym_GT_EQ] = ACTIONS(1037),
    [anon_sym_LT_EQ] = ACTIONS(1037),
    [anon_sym_BANG_EQ] = ACTIONS(1037),
    [anon_sym_AMP_AMP] = ACTIONS(1037),
    [anon_sym_PIPE_PIPE] = ACTIONS(1037),
    [anon_sym_PLUS] = ACTIONS(1039),
    [anon_sym_DASH] = ACTIONS(1039),
    [anon_sym_STAR] = ACTIONS(1037),
    [anon_sym_SLASH] = ACTIONS(1039),
    [anon_sym_AMP] = ACTIONS(1039),
    [anon_sym_PIPE] = ACTIONS(1039),
    [anon_sym_CARET] = ACTIONS(1037),
    [anon_sym_PERCENT] = ACTIONS(1037),
    [anon_sym_LT_LT] = ACTIONS(1037),
    [anon_sym_GT_GT] = ACTIONS(1039),
    [anon_sym_GT_GT_GT] = ACTIONS(1037),
    [anon_sym_LPAREN] = ACTIONS(1037),
    [anon_sym_RPAREN] = ACTIONS(1037),
    [anon_sym_COMMA] = ACTIONS(1037),
    [anon_sym_QMARK] = ACTIONS(1037),
    [anon_sym_COLON] = ACTIONS(1037),
    [anon_sym_BANG] = ACTIONS(1039),
    [anon_sym_TILDE] = ACTIONS(1037),
    [anon_sym_PLUS_PLUS] = ACTIONS(1037),
    [anon_sym_DASH_DASH] = ACTIONS(1037),
    [anon_sym_LBRACE] = ACTIONS(1037),
    [anon_sym_RBRACE] = ACTIONS(1037),
    [anon_sym_default] = ACTIONS(1039),
    [anon_sym_RBRACK] = ACTIONS(1037),
    [anon_sym_boolean] = ACTIONS(1039),
    [anon_sym_byte] = ACTIONS(1039),
    [anon_sym_short] = ACTIONS(1039),
    [anon_sym_int] = ACTIONS(1039),
    [anon_sym_long] = ACTIONS(1039),
    [anon_sym_char] = ACTIONS(1039),
    [anon_sym_float] = ACTIONS(1039),
    [anon_sym_double] = ACTIONS(1039),
    [anon_sym_AT] = ACTIONS(1037),
    [anon_sym_open] = ACTIONS(1039),
    [anon_sym_module] = ACTIONS(1039),
    [anon_sym_static] = ACTIONS(1039),
    [anon_sym_package] = ACTIONS(1039),
    [anon_sym_import] = ACTIONS(1039),
    [anon_sym_class] = ACTIONS(1039),
    [anon_sym_public] = ACTIONS(1039),
    [anon_sym_protected] = ACTIONS(1039),
    [anon_sym_private] = ACTIONS(1039),
    [anon_sym_abstract] = ACTIONS(1039),
    [anon_sym_final] = ACTIONS(1039),
    [anon_sym_strictfp] = ACTIONS(1039),
    [anon_sym_synchronized] = ACTIONS(1039),
    [anon_sym_native] = ACTIONS(1039),
    [anon_sym_interface] = ACTIONS(1039),
    [sym_identifier] = ACTIONS(1041),
    [sym_comment] = ACTIONS(58),
  },
  [369] = {
    [anon_sym_RBRACE] = ACTIONS(1043),
    [anon_sym_default] = ACTIONS(1043),
    [anon_sym_if] = ACTIONS(1043),
    [anon_sym_AT] = ACTIONS(1043),
    [anon_sym_static] = ACTIONS(1043),
    [anon_sym_class] = ACTIONS(1043),
    [anon_sym_public] = ACTIONS(1043),
    [anon_sym_protected] = ACTIONS(1043),
    [anon_sym_private] = ACTIONS(1043),
    [anon_sym_abstract] = ACTIONS(1043),
    [anon_sym_final] = ACTIONS(1043),
    [anon_sym_strictfp] = ACTIONS(1043),
    [anon_sym_synchronized] = ACTIONS(1043),
    [anon_sym_native] = ACTIONS(1043),
    [sym_comment] = ACTIONS(58),
  },
  [370] = {
    [sym_statement] = STATE(223),
    [sym_if_then_statement] = STATE(224),
    [sym_if_then_else_statement] = STATE(224),
    [sym__annotation] = STATE(219),
    [sym_normal_annotation] = STATE(225),
    [sym_marker_annotation] = STATE(225),
    [sym_single_element_annotation] = STATE(225),
    [sym_class_declaration] = STATE(223),
    [sym_normal_class_declaration] = STATE(226),
    [sym_modifier] = STATE(227),
    [sym_block_statement] = STATE(522),
    [sym_local_variable_declaration_statement] = STATE(223),
    [sym_local_variable_declaration] = STATE(230),
    [aux_sym_normal_class_declaration_repeat1] = STATE(231),
    [anon_sym_RBRACE] = ACTIONS(1045),
    [anon_sym_default] = ACTIONS(429),
    [anon_sym_if] = ACTIONS(431),
    [anon_sym_AT] = ACTIONS(433),
    [anon_sym_static] = ACTIONS(429),
    [anon_sym_class] = ACTIONS(435),
    [anon_sym_public] = ACTIONS(429),
    [anon_sym_protected] = ACTIONS(429),
    [anon_sym_private] = ACTIONS(429),
    [anon_sym_abstract] = ACTIONS(429),
    [anon_sym_final] = ACTIONS(429),
    [anon_sym_strictfp] = ACTIONS(429),
    [anon_sym_synchronized] = ACTIONS(429),
    [anon_sym_native] = ACTIONS(429),
    [sym_comment] = ACTIONS(58),
  },
  [371] = {
    [anon_sym_RBRACE] = ACTIONS(1047),
    [anon_sym_default] = ACTIONS(1047),
    [anon_sym_if] = ACTIONS(1047),
    [anon_sym_AT] = ACTIONS(1047),
    [anon_sym_static] = ACTIONS(1047),
    [anon_sym_class] = ACTIONS(1047),
    [anon_sym_public] = ACTIONS(1047),
    [anon_sym_protected] = ACTIONS(1047),
    [anon_sym_private] = ACTIONS(1047),
    [anon_sym_abstract] = ACTIONS(1047),
    [anon_sym_final] = ACTIONS(1047),
    [anon_sym_strictfp] = ACTIONS(1047),
    [anon_sym_synchronized] = ACTIONS(1047),
    [anon_sym_native] = ACTIONS(1047),
    [sym_comment] = ACTIONS(58),
  },
  [372] = {
    [sym_identifier] = ACTIONS(1049),
    [sym_comment] = ACTIONS(58),
  },
  [373] = {
    [anon_sym_LBRACE] = ACTIONS(1051),
    [sym_comment] = ACTIONS(58),
  },
  [374] = {
    [sym__semicolon] = ACTIONS(1053),
    [anon_sym_DOT] = ACTIONS(551),
    [sym_comment] = ACTIONS(58),
  },
  [375] = {
    [sym_annotation_type_body] = STATE(526),
    [anon_sym_LBRACE] = ACTIONS(537),
    [sym_comment] = ACTIONS(58),
  },
  [376] = {
    [sym__literal] = STATE(529),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(530),
    [sym_element_value_pair] = STATE(276),
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
    [sym_null_literal] = ACTIONS(24),
    [anon_sym_RPAREN] = ACTIONS(1055),
    [sym_identifier] = ACTIONS(1057),
    [sym_comment] = ACTIONS(58),
  },
  [377] = {
    [sym_identifier] = ACTIONS(1059),
    [sym_comment] = ACTIONS(58),
  },
  [378] = {
    [sym_superclass] = STATE(532),
    [sym_super_interfaces] = STATE(461),
    [sym_class_body] = STATE(462),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_extends] = ACTIONS(367),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [379] = {
    [sym_extends_interfaces] = STATE(533),
    [sym_interface_body] = STATE(469),
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_extends] = ACTIONS(373),
    [sym_comment] = ACTIONS(58),
  },
  [380] = {
    [anon_sym_AT] = ACTIONS(811),
    [sym_identifier] = ACTIONS(813),
    [sym_comment] = ACTIONS(58),
  },
  [381] = {
    [anon_sym_EQ] = ACTIONS(817),
    [anon_sym_RPAREN] = ACTIONS(1061),
    [sym_comment] = ACTIONS(58),
  },
  [382] = {
    [anon_sym_RPAREN] = ACTIONS(1061),
    [sym_comment] = ACTIONS(58),
  },
  [383] = {
    [anon_sym_RPAREN] = ACTIONS(1063),
    [sym_comment] = ACTIONS(58),
  },
  [384] = {
    [anon_sym_LPAREN] = ACTIONS(827),
    [anon_sym_DOT] = ACTIONS(827),
    [anon_sym_AT] = ACTIONS(827),
    [sym_identifier] = ACTIONS(829),
    [sym_comment] = ACTIONS(58),
  },
  [385] = {
    [sym_class_or_interface_type] = STATE(536),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(243),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(58),
  },
  [386] = {
    [anon_sym_GT] = ACTIONS(1065),
    [anon_sym_AMP] = ACTIONS(1067),
    [anon_sym_COMMA] = ACTIONS(1065),
    [sym_comment] = ACTIONS(58),
  },
  [387] = {
    [anon_sym_GT] = ACTIONS(1069),
    [anon_sym_COMMA] = ACTIONS(1069),
    [sym_comment] = ACTIONS(58),
  },
  [388] = {
    [anon_sym_RPAREN] = ACTIONS(1071),
    [sym_identifier] = ACTIONS(1073),
    [sym_comment] = ACTIONS(58),
  },
  [389] = {
    [anon_sym_default] = ACTIONS(813),
    [anon_sym_boolean] = ACTIONS(813),
    [anon_sym_byte] = ACTIONS(813),
    [anon_sym_short] = ACTIONS(813),
    [anon_sym_int] = ACTIONS(813),
    [anon_sym_long] = ACTIONS(813),
    [anon_sym_char] = ACTIONS(813),
    [anon_sym_float] = ACTIONS(813),
    [anon_sym_double] = ACTIONS(813),
    [anon_sym_AT] = ACTIONS(811),
    [anon_sym_static] = ACTIONS(813),
    [anon_sym_public] = ACTIONS(813),
    [anon_sym_protected] = ACTIONS(813),
    [anon_sym_private] = ACTIONS(813),
    [anon_sym_abstract] = ACTIONS(813),
    [anon_sym_final] = ACTIONS(813),
    [anon_sym_strictfp] = ACTIONS(813),
    [anon_sym_synchronized] = ACTIONS(813),
    [anon_sym_native] = ACTIONS(813),
    [sym_identifier] = ACTIONS(815),
    [sym_comment] = ACTIONS(58),
  },
  [390] = {
    [anon_sym_EQ] = ACTIONS(817),
    [anon_sym_RPAREN] = ACTIONS(1075),
    [sym_comment] = ACTIONS(58),
  },
  [391] = {
    [anon_sym_RPAREN] = ACTIONS(1075),
    [sym_comment] = ACTIONS(58),
  },
  [392] = {
    [anon_sym_RPAREN] = ACTIONS(1077),
    [sym_comment] = ACTIONS(58),
  },
  [393] = {
    [anon_sym_LPAREN] = ACTIONS(827),
    [anon_sym_default] = ACTIONS(829),
    [anon_sym_DOT] = ACTIONS(827),
    [anon_sym_boolean] = ACTIONS(829),
    [anon_sym_byte] = ACTIONS(829),
    [anon_sym_short] = ACTIONS(829),
    [anon_sym_int] = ACTIONS(829),
    [anon_sym_long] = ACTIONS(829),
    [anon_sym_char] = ACTIONS(829),
    [anon_sym_float] = ACTIONS(829),
    [anon_sym_double] = ACTIONS(829),
    [anon_sym_AT] = ACTIONS(827),
    [anon_sym_static] = ACTIONS(829),
    [anon_sym_public] = ACTIONS(829),
    [anon_sym_protected] = ACTIONS(829),
    [anon_sym_private] = ACTIONS(829),
    [anon_sym_abstract] = ACTIONS(829),
    [anon_sym_final] = ACTIONS(829),
    [anon_sym_strictfp] = ACTIONS(829),
    [anon_sym_synchronized] = ACTIONS(829),
    [anon_sym_native] = ACTIONS(829),
    [sym_identifier] = ACTIONS(831),
    [sym_comment] = ACTIONS(58),
  },
  [394] = {
    [anon_sym_DOT] = ACTIONS(975),
    [anon_sym_LBRACK] = ACTIONS(973),
    [anon_sym_AT] = ACTIONS(973),
    [anon_sym_this] = ACTIONS(975),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(973),
    [sym_identifier] = ACTIONS(1079),
    [sym_comment] = ACTIONS(58),
  },
  [395] = {
    [anon_sym_GT] = ACTIONS(1081),
    [anon_sym_COMMA] = ACTIONS(979),
    [sym_comment] = ACTIONS(58),
  },
  [396] = {
    [sym__semicolon] = ACTIONS(1083),
    [anon_sym_RPAREN] = ACTIONS(1083),
    [anon_sym_COMMA] = ACTIONS(1083),
    [sym_comment] = ACTIONS(58),
  },
  [397] = {
    [anon_sym_RPAREN] = ACTIONS(1085),
    [anon_sym_COMMA] = ACTIONS(1085),
    [sym_comment] = ACTIONS(58),
  },
  [398] = {
    [anon_sym_LBRACK] = ACTIONS(1017),
    [anon_sym_AT] = ACTIONS(1017),
    [anon_sym_this] = ACTIONS(1019),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1017),
    [sym_identifier] = ACTIONS(1087),
    [sym_comment] = ACTIONS(58),
  },
  [399] = {
    [anon_sym_RBRACK] = ACTIONS(1089),
    [sym_comment] = ACTIONS(58),
  },
  [400] = {
    [anon_sym_DOT] = ACTIONS(1023),
    [anon_sym_LBRACK] = ACTIONS(1025),
    [anon_sym_AT] = ACTIONS(1025),
    [anon_sym_this] = ACTIONS(1023),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1025),
    [sym_identifier] = ACTIONS(1091),
    [sym_comment] = ACTIONS(58),
  },
  [401] = {
    [sym_type_arguments] = STATE(542),
    [anon_sym_LT] = ACTIONS(293),
    [anon_sym_DOT] = ACTIONS(1023),
    [anon_sym_LBRACK] = ACTIONS(1025),
    [anon_sym_AT] = ACTIONS(1025),
    [anon_sym_this] = ACTIONS(1023),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1025),
    [sym_identifier] = ACTIONS(1091),
    [sym_comment] = ACTIONS(58),
  },
  [402] = {
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(1093),
    [sym_comment] = ACTIONS(58),
  },
  [403] = {
    [anon_sym_RPAREN] = ACTIONS(1095),
    [sym_comment] = ACTIONS(58),
  },
  [404] = {
    [anon_sym_this] = ACTIONS(1097),
    [sym_comment] = ACTIONS(58),
  },
  [405] = {
    [anon_sym_RPAREN] = ACTIONS(1099),
    [sym_comment] = ACTIONS(58),
  },
  [406] = {
    [ts_builtin_sym_end] = ACTIONS(1101),
    [sym_decimal_integer_literal] = ACTIONS(1103),
    [sym_hex_integer_literal] = ACTIONS(1103),
    [sym_octal_integer_literal] = ACTIONS(1103),
    [sym_binary_integer_literal] = ACTIONS(1103),
    [sym_decimal_floating_point_literal] = ACTIONS(1103),
    [sym_hex_floating_point_literal] = ACTIONS(1105),
    [anon_sym_true] = ACTIONS(1103),
    [anon_sym_false] = ACTIONS(1103),
    [anon_sym_SQUOTE] = ACTIONS(1101),
    [sym_string_literal] = ACTIONS(1101),
    [sym_null_literal] = ACTIONS(1103),
    [anon_sym_LT] = ACTIONS(1101),
    [anon_sym_LPAREN] = ACTIONS(1101),
    [anon_sym_BANG] = ACTIONS(1101),
    [anon_sym_TILDE] = ACTIONS(1101),
    [anon_sym_PLUS_PLUS] = ACTIONS(1101),
    [anon_sym_DASH_DASH] = ACTIONS(1101),
    [anon_sym_default] = ACTIONS(1103),
    [anon_sym_boolean] = ACTIONS(1103),
    [anon_sym_byte] = ACTIONS(1103),
    [anon_sym_short] = ACTIONS(1103),
    [anon_sym_int] = ACTIONS(1103),
    [anon_sym_long] = ACTIONS(1103),
    [anon_sym_char] = ACTIONS(1103),
    [anon_sym_float] = ACTIONS(1103),
    [anon_sym_double] = ACTIONS(1103),
    [anon_sym_AT] = ACTIONS(1101),
    [anon_sym_open] = ACTIONS(1103),
    [anon_sym_module] = ACTIONS(1103),
    [anon_sym_static] = ACTIONS(1103),
    [anon_sym_package] = ACTIONS(1103),
    [anon_sym_import] = ACTIONS(1103),
    [anon_sym_class] = ACTIONS(1103),
    [anon_sym_public] = ACTIONS(1103),
    [anon_sym_protected] = ACTIONS(1103),
    [anon_sym_private] = ACTIONS(1103),
    [anon_sym_abstract] = ACTIONS(1103),
    [anon_sym_final] = ACTIONS(1103),
    [anon_sym_strictfp] = ACTIONS(1103),
    [anon_sym_synchronized] = ACTIONS(1103),
    [anon_sym_native] = ACTIONS(1103),
    [anon_sym_interface] = ACTIONS(1103),
    [sym_identifier] = ACTIONS(1105),
    [sym_comment] = ACTIONS(58),
  },
  [407] = {
    [anon_sym_RBRACE] = ACTIONS(1107),
    [anon_sym_default] = ACTIONS(1109),
    [anon_sym_boolean] = ACTIONS(1109),
    [anon_sym_byte] = ACTIONS(1109),
    [anon_sym_short] = ACTIONS(1109),
    [anon_sym_int] = ACTIONS(1109),
    [anon_sym_long] = ACTIONS(1109),
    [anon_sym_char] = ACTIONS(1109),
    [anon_sym_float] = ACTIONS(1109),
    [anon_sym_double] = ACTIONS(1109),
    [anon_sym_AT] = ACTIONS(1107),
    [anon_sym_static] = ACTIONS(1109),
    [anon_sym_class] = ACTIONS(1109),
    [anon_sym_public] = ACTIONS(1109),
    [anon_sym_protected] = ACTIONS(1109),
    [anon_sym_private] = ACTIONS(1109),
    [anon_sym_abstract] = ACTIONS(1109),
    [anon_sym_final] = ACTIONS(1109),
    [anon_sym_strictfp] = ACTIONS(1109),
    [anon_sym_synchronized] = ACTIONS(1109),
    [anon_sym_native] = ACTIONS(1109),
    [anon_sym_interface] = ACTIONS(1109),
    [sym_identifier] = ACTIONS(1111),
    [sym_comment] = ACTIONS(58),
  },
  [408] = {
    [anon_sym_RBRACE] = ACTIONS(1113),
    [anon_sym_default] = ACTIONS(1115),
    [anon_sym_boolean] = ACTIONS(1115),
    [anon_sym_byte] = ACTIONS(1115),
    [anon_sym_short] = ACTIONS(1115),
    [anon_sym_int] = ACTIONS(1115),
    [anon_sym_long] = ACTIONS(1115),
    [anon_sym_char] = ACTIONS(1115),
    [anon_sym_float] = ACTIONS(1115),
    [anon_sym_double] = ACTIONS(1115),
    [anon_sym_AT] = ACTIONS(1113),
    [anon_sym_static] = ACTIONS(1115),
    [anon_sym_class] = ACTIONS(1115),
    [anon_sym_public] = ACTIONS(1115),
    [anon_sym_protected] = ACTIONS(1115),
    [anon_sym_private] = ACTIONS(1115),
    [anon_sym_abstract] = ACTIONS(1115),
    [anon_sym_final] = ACTIONS(1115),
    [anon_sym_strictfp] = ACTIONS(1115),
    [anon_sym_synchronized] = ACTIONS(1115),
    [anon_sym_native] = ACTIONS(1115),
    [anon_sym_interface] = ACTIONS(1115),
    [sym_identifier] = ACTIONS(1117),
    [sym_comment] = ACTIONS(58),
  },
  [409] = {
    [sym_variable_declarator_list] = STATE(464),
    [sym_variable_declarator] = STATE(465),
    [sym_variable_declarator_id] = STATE(254),
    [sym_identifier] = ACTIONS(1119),
    [sym_comment] = ACTIONS(58),
  },
  [410] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(126),
    [sym_marker_annotation] = STATE(126),
    [sym_single_element_annotation] = STATE(126),
    [sym_modifier] = STATE(127),
    [sym_unann_type] = STATE(545),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(909),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(911),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(913),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [411] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(126),
    [sym_marker_annotation] = STATE(126),
    [sym_single_element_annotation] = STATE(126),
    [sym_class_declaration] = STATE(407),
    [sym_normal_class_declaration] = STATE(299),
    [sym_modifier] = STATE(36),
    [sym_interface_declaration] = STATE(407),
    [sym_annotation_type_declaration] = STATE(304),
    [sym_annotation_type_member_declaration] = STATE(547),
    [sym_annotation_type_element_declaration] = STATE(407),
    [sym_normal_interface_declaration] = STATE(304),
    [sym_constant_declaration] = STATE(407),
    [sym_unann_type] = STATE(409),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [aux_sym_normal_class_declaration_repeat1] = STATE(410),
    [anon_sym_RBRACE] = ACTIONS(1121),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [412] = {
    [sym__literal] = STATE(550),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(551),
    [sym__annotation] = STATE(550),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_element_value] = STATE(552),
    [sym_element_value_array_initializer] = STATE(550),
    [sym_conditional_expression] = STATE(550),
    [sym_conditional_or_expression] = STATE(553),
    [sym_conditional_and_expression] = STATE(554),
    [sym_inclusive_or_expression] = STATE(555),
    [sym_exclusive_or_expression] = STATE(556),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(558),
    [sym_equality_expression] = STATE(559),
    [sym_shift_expression] = STATE(560),
    [sym_additive_expression] = STATE(561),
    [sym_multiplicative_expression] = STATE(562),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1123),
    [anon_sym_false] = ACTIONS(1123),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(1125),
    [anon_sym_TILDE] = ACTIONS(1125),
    [anon_sym_LBRACE] = ACTIONS(1127),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [413] = {
    [sym__semicolon] = ACTIONS(1129),
    [anon_sym_LT] = ACTIONS(1129),
    [anon_sym_RPAREN] = ACTIONS(1129),
    [anon_sym_COMMA] = ACTIONS(1129),
    [anon_sym_RBRACE] = ACTIONS(1129),
    [anon_sym_default] = ACTIONS(1131),
    [anon_sym_LBRACK] = ACTIONS(1129),
    [anon_sym_boolean] = ACTIONS(1131),
    [anon_sym_byte] = ACTIONS(1131),
    [anon_sym_short] = ACTIONS(1131),
    [anon_sym_int] = ACTIONS(1131),
    [anon_sym_long] = ACTIONS(1131),
    [anon_sym_char] = ACTIONS(1131),
    [anon_sym_float] = ACTIONS(1131),
    [anon_sym_double] = ACTIONS(1131),
    [anon_sym_AT] = ACTIONS(1129),
    [anon_sym_open] = ACTIONS(1131),
    [anon_sym_module] = ACTIONS(1131),
    [anon_sym_static] = ACTIONS(1131),
    [anon_sym_package] = ACTIONS(1131),
    [anon_sym_class] = ACTIONS(1131),
    [anon_sym_public] = ACTIONS(1131),
    [anon_sym_protected] = ACTIONS(1131),
    [anon_sym_private] = ACTIONS(1131),
    [anon_sym_abstract] = ACTIONS(1131),
    [anon_sym_final] = ACTIONS(1131),
    [anon_sym_strictfp] = ACTIONS(1131),
    [anon_sym_synchronized] = ACTIONS(1131),
    [anon_sym_native] = ACTIONS(1131),
    [anon_sym_interface] = ACTIONS(1131),
    [sym_identifier] = ACTIONS(1133),
    [sym_comment] = ACTIONS(58),
  },
  [414] = {
    [sym__semicolon] = ACTIONS(1135),
    [anon_sym_LT] = ACTIONS(1135),
    [anon_sym_RPAREN] = ACTIONS(1135),
    [anon_sym_COMMA] = ACTIONS(1135),
    [anon_sym_RBRACE] = ACTIONS(1135),
    [anon_sym_default] = ACTIONS(1137),
    [anon_sym_LBRACK] = ACTIONS(1135),
    [anon_sym_boolean] = ACTIONS(1137),
    [anon_sym_byte] = ACTIONS(1137),
    [anon_sym_short] = ACTIONS(1137),
    [anon_sym_int] = ACTIONS(1137),
    [anon_sym_long] = ACTIONS(1137),
    [anon_sym_char] = ACTIONS(1137),
    [anon_sym_float] = ACTIONS(1137),
    [anon_sym_double] = ACTIONS(1137),
    [anon_sym_AT] = ACTIONS(1135),
    [anon_sym_open] = ACTIONS(1137),
    [anon_sym_module] = ACTIONS(1137),
    [anon_sym_static] = ACTIONS(1137),
    [anon_sym_package] = ACTIONS(1137),
    [anon_sym_class] = ACTIONS(1137),
    [anon_sym_public] = ACTIONS(1137),
    [anon_sym_protected] = ACTIONS(1137),
    [anon_sym_private] = ACTIONS(1137),
    [anon_sym_abstract] = ACTIONS(1137),
    [anon_sym_final] = ACTIONS(1137),
    [anon_sym_strictfp] = ACTIONS(1137),
    [anon_sym_synchronized] = ACTIONS(1137),
    [anon_sym_native] = ACTIONS(1137),
    [anon_sym_interface] = ACTIONS(1137),
    [sym_identifier] = ACTIONS(1139),
    [sym_comment] = ACTIONS(58),
  },
  [415] = {
    [sym_element_value_pair] = STATE(564),
    [sym_identifier] = ACTIONS(1141),
    [sym_comment] = ACTIONS(58),
  },
  [416] = {
    [anon_sym_RPAREN] = ACTIONS(1143),
    [anon_sym_COMMA] = ACTIONS(1145),
    [sym_comment] = ACTIONS(58),
  },
  [417] = {
    [ts_builtin_sym_end] = ACTIONS(1147),
    [sym_decimal_integer_literal] = ACTIONS(1149),
    [sym_hex_integer_literal] = ACTIONS(1149),
    [sym_octal_integer_literal] = ACTIONS(1149),
    [sym_binary_integer_literal] = ACTIONS(1149),
    [sym_decimal_floating_point_literal] = ACTIONS(1149),
    [sym_hex_floating_point_literal] = ACTIONS(1151),
    [anon_sym_true] = ACTIONS(1149),
    [anon_sym_false] = ACTIONS(1149),
    [anon_sym_SQUOTE] = ACTIONS(1147),
    [sym_string_literal] = ACTIONS(1147),
    [sym_null_literal] = ACTIONS(1149),
    [anon_sym_LT] = ACTIONS(1147),
    [anon_sym_LPAREN] = ACTIONS(1147),
    [anon_sym_BANG] = ACTIONS(1147),
    [anon_sym_TILDE] = ACTIONS(1147),
    [anon_sym_PLUS_PLUS] = ACTIONS(1147),
    [anon_sym_DASH_DASH] = ACTIONS(1147),
    [anon_sym_default] = ACTIONS(1149),
    [anon_sym_boolean] = ACTIONS(1149),
    [anon_sym_byte] = ACTIONS(1149),
    [anon_sym_short] = ACTIONS(1149),
    [anon_sym_int] = ACTIONS(1149),
    [anon_sym_long] = ACTIONS(1149),
    [anon_sym_char] = ACTIONS(1149),
    [anon_sym_float] = ACTIONS(1149),
    [anon_sym_double] = ACTIONS(1149),
    [anon_sym_AT] = ACTIONS(1147),
    [anon_sym_open] = ACTIONS(1149),
    [anon_sym_module] = ACTIONS(1149),
    [anon_sym_static] = ACTIONS(1149),
    [anon_sym_package] = ACTIONS(1149),
    [anon_sym_import] = ACTIONS(1149),
    [anon_sym_class] = ACTIONS(1149),
    [anon_sym_public] = ACTIONS(1149),
    [anon_sym_protected] = ACTIONS(1149),
    [anon_sym_private] = ACTIONS(1149),
    [anon_sym_abstract] = ACTIONS(1149),
    [anon_sym_final] = ACTIONS(1149),
    [anon_sym_strictfp] = ACTIONS(1149),
    [anon_sym_synchronized] = ACTIONS(1149),
    [anon_sym_native] = ACTIONS(1149),
    [anon_sym_interface] = ACTIONS(1149),
    [sym_identifier] = ACTIONS(1151),
    [sym_comment] = ACTIONS(58),
  },
  [418] = {
    [sym_module_directive] = STATE(430),
    [anon_sym_RBRACE] = ACTIONS(1153),
    [anon_sym_requires] = ACTIONS(555),
    [anon_sym_exports] = ACTIONS(557),
    [anon_sym_opens] = ACTIONS(557),
    [anon_sym_uses] = ACTIONS(559),
    [anon_sym_provides] = ACTIONS(561),
    [sym_comment] = ACTIONS(58),
  },
  [419] = {
    [sym__semicolon] = ACTIONS(1155),
    [anon_sym_LBRACE] = ACTIONS(1155),
    [anon_sym_DOT] = ACTIONS(1155),
    [sym_comment] = ACTIONS(58),
  },
  [420] = {
    [anon_sym_transitive] = ACTIONS(1157),
    [anon_sym_static] = ACTIONS(1157),
    [sym_identifier] = ACTIONS(1159),
    [sym_comment] = ACTIONS(58),
  },
  [421] = {
    [sym__semicolon] = ACTIONS(1161),
    [anon_sym_COMMA] = ACTIONS(1161),
    [anon_sym_DOT] = ACTIONS(1161),
    [sym_comment] = ACTIONS(58),
  },
  [422] = {
    [anon_sym_transitive] = ACTIONS(1163),
    [anon_sym_static] = ACTIONS(1163),
    [sym_identifier] = ACTIONS(1165),
    [sym_comment] = ACTIONS(58),
  },
  [423] = {
    [sym__semicolon] = ACTIONS(1167),
    [anon_sym_DOT] = ACTIONS(1169),
    [sym_comment] = ACTIONS(58),
  },
  [424] = {
    [sym_requires_modifier] = STATE(569),
    [sym_module_name] = STATE(570),
    [anon_sym_transitive] = ACTIONS(845),
    [anon_sym_static] = ACTIONS(845),
    [sym_identifier] = ACTIONS(847),
    [sym_comment] = ACTIONS(58),
  },
  [425] = {
    [sym__semicolon] = ACTIONS(333),
    [anon_sym_COMMA] = ACTIONS(333),
    [anon_sym_DOT] = ACTIONS(333),
    [anon_sym_to] = ACTIONS(335),
    [sym_identifier] = ACTIONS(337),
    [sym_comment] = ACTIONS(58),
  },
  [426] = {
    [sym_module_name] = STATE(574),
    [aux_sym_module_directive_repeat2] = STATE(575),
    [sym__semicolon] = ACTIONS(1167),
    [anon_sym_COMMA] = ACTIONS(1171),
    [anon_sym_DOT] = ACTIONS(1173),
    [anon_sym_to] = ACTIONS(1175),
    [sym_identifier] = ACTIONS(847),
    [sym_comment] = ACTIONS(58),
  },
  [427] = {
    [sym__semicolon] = ACTIONS(1167),
    [anon_sym_DOT] = ACTIONS(345),
    [sym_comment] = ACTIONS(58),
  },
  [428] = {
    [anon_sym_DOT] = ACTIONS(333),
    [anon_sym_with] = ACTIONS(333),
    [sym_comment] = ACTIONS(58),
  },
  [429] = {
    [anon_sym_DOT] = ACTIONS(1177),
    [anon_sym_with] = ACTIONS(1179),
    [sym_comment] = ACTIONS(58),
  },
  [430] = {
    [anon_sym_RBRACE] = ACTIONS(1181),
    [anon_sym_requires] = ACTIONS(1181),
    [anon_sym_exports] = ACTIONS(1181),
    [anon_sym_opens] = ACTIONS(1181),
    [anon_sym_uses] = ACTIONS(1181),
    [anon_sym_provides] = ACTIONS(1181),
    [sym_comment] = ACTIONS(58),
  },
  [431] = {
    [sym__semicolon] = ACTIONS(1183),
    [sym_comment] = ACTIONS(58),
  },
  [432] = {
    [sym__semicolon] = ACTIONS(1185),
    [anon_sym_DOT] = ACTIONS(827),
    [sym_comment] = ACTIONS(58),
  },
  [433] = {
    [ts_builtin_sym_end] = ACTIONS(1187),
    [sym_decimal_integer_literal] = ACTIONS(1189),
    [sym_hex_integer_literal] = ACTIONS(1189),
    [sym_octal_integer_literal] = ACTIONS(1189),
    [sym_binary_integer_literal] = ACTIONS(1189),
    [sym_decimal_floating_point_literal] = ACTIONS(1189),
    [sym_hex_floating_point_literal] = ACTIONS(1191),
    [anon_sym_true] = ACTIONS(1189),
    [anon_sym_false] = ACTIONS(1189),
    [anon_sym_SQUOTE] = ACTIONS(1187),
    [sym_string_literal] = ACTIONS(1187),
    [sym_null_literal] = ACTIONS(1189),
    [anon_sym_LT] = ACTIONS(1187),
    [anon_sym_LPAREN] = ACTIONS(1187),
    [anon_sym_BANG] = ACTIONS(1187),
    [anon_sym_TILDE] = ACTIONS(1187),
    [anon_sym_PLUS_PLUS] = ACTIONS(1187),
    [anon_sym_DASH_DASH] = ACTIONS(1187),
    [anon_sym_default] = ACTIONS(1189),
    [anon_sym_boolean] = ACTIONS(1189),
    [anon_sym_byte] = ACTIONS(1189),
    [anon_sym_short] = ACTIONS(1189),
    [anon_sym_int] = ACTIONS(1189),
    [anon_sym_long] = ACTIONS(1189),
    [anon_sym_char] = ACTIONS(1189),
    [anon_sym_float] = ACTIONS(1189),
    [anon_sym_double] = ACTIONS(1189),
    [anon_sym_AT] = ACTIONS(1187),
    [anon_sym_open] = ACTIONS(1189),
    [anon_sym_module] = ACTIONS(1189),
    [anon_sym_static] = ACTIONS(1189),
    [anon_sym_package] = ACTIONS(1189),
    [anon_sym_import] = ACTIONS(1189),
    [anon_sym_class] = ACTIONS(1189),
    [anon_sym_public] = ACTIONS(1189),
    [anon_sym_protected] = ACTIONS(1189),
    [anon_sym_private] = ACTIONS(1189),
    [anon_sym_abstract] = ACTIONS(1189),
    [anon_sym_final] = ACTIONS(1189),
    [anon_sym_strictfp] = ACTIONS(1189),
    [anon_sym_synchronized] = ACTIONS(1189),
    [anon_sym_native] = ACTIONS(1189),
    [anon_sym_interface] = ACTIONS(1189),
    [sym_identifier] = ACTIONS(1191),
    [sym_comment] = ACTIONS(58),
  },
  [434] = {
    [anon_sym_LBRACE] = ACTIONS(483),
    [anon_sym_extends] = ACTIONS(483),
    [anon_sym_implements] = ACTIONS(483),
    [sym_comment] = ACTIONS(58),
  },
  [435] = {
    [sym__semicolon] = ACTIONS(705),
    [anon_sym_LT] = ACTIONS(705),
    [anon_sym_LBRACE] = ACTIONS(705),
    [anon_sym_RBRACE] = ACTIONS(705),
    [anon_sym_default] = ACTIONS(707),
    [anon_sym_boolean] = ACTIONS(707),
    [anon_sym_byte] = ACTIONS(707),
    [anon_sym_short] = ACTIONS(707),
    [anon_sym_int] = ACTIONS(707),
    [anon_sym_long] = ACTIONS(707),
    [anon_sym_char] = ACTIONS(707),
    [anon_sym_float] = ACTIONS(707),
    [anon_sym_double] = ACTIONS(707),
    [anon_sym_AT] = ACTIONS(705),
    [anon_sym_static] = ACTIONS(707),
    [anon_sym_class] = ACTIONS(707),
    [anon_sym_public] = ACTIONS(707),
    [anon_sym_protected] = ACTIONS(707),
    [anon_sym_private] = ACTIONS(707),
    [anon_sym_abstract] = ACTIONS(707),
    [anon_sym_final] = ACTIONS(707),
    [anon_sym_strictfp] = ACTIONS(707),
    [anon_sym_synchronized] = ACTIONS(707),
    [anon_sym_native] = ACTIONS(707),
    [anon_sym_interface] = ACTIONS(707),
    [sym_identifier] = ACTIONS(709),
    [sym_comment] = ACTIONS(58),
  },
  [436] = {
    [anon_sym_RBRACE] = ACTIONS(1193),
    [sym_comment] = ACTIONS(58),
  },
  [437] = {
    [sym_identifier] = ACTIONS(1195),
    [sym_comment] = ACTIONS(58),
  },
  [438] = {
    [sym_type_parameters] = STATE(583),
    [sym_superclass] = STATE(584),
    [sym_super_interfaces] = STATE(585),
    [sym_class_body] = STATE(586),
    [anon_sym_LT] = ACTIONS(363),
    [anon_sym_LBRACE] = ACTIONS(1197),
    [anon_sym_extends] = ACTIONS(367),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [439] = {
    [sym_type_parameters] = STATE(588),
    [sym_extends_interfaces] = STATE(589),
    [sym_interface_body] = STATE(590),
    [anon_sym_LT] = ACTIONS(363),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [anon_sym_extends] = ACTIONS(373),
    [sym_comment] = ACTIONS(58),
  },
  [440] = {
    [sym_integral_type] = STATE(59),
    [sym_floating_point_type] = STATE(59),
    [sym__annotation] = STATE(65),
    [sym_normal_annotation] = STATE(66),
    [sym_marker_annotation] = STATE(66),
    [sym_single_element_annotation] = STATE(66),
    [sym_modifier] = STATE(67),
    [sym_unann_type] = STATE(68),
    [sym_unann_primitive_type] = STATE(69),
    [sym_unann_class_or_interface_type] = STATE(70),
    [sym_unann_array_type] = STATE(71),
    [sym__formal_parameter_list] = STATE(591),
    [sym_formal_parameter] = STATE(72),
    [sym_receiver_parameter] = STATE(73),
    [sym_last_formal_parameter] = STATE(74),
    [aux_sym_class_or_interface_type_repeat1] = STATE(75),
    [aux_sym_normal_class_declaration_repeat1] = STATE(76),
    [anon_sym_default] = ACTIONS(80),
    [anon_sym_boolean] = ACTIONS(82),
    [anon_sym_byte] = ACTIONS(84),
    [anon_sym_short] = ACTIONS(84),
    [anon_sym_int] = ACTIONS(84),
    [anon_sym_long] = ACTIONS(84),
    [anon_sym_char] = ACTIONS(84),
    [anon_sym_float] = ACTIONS(86),
    [anon_sym_double] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(88),
    [anon_sym_static] = ACTIONS(80),
    [anon_sym_public] = ACTIONS(80),
    [anon_sym_protected] = ACTIONS(80),
    [anon_sym_private] = ACTIONS(80),
    [anon_sym_abstract] = ACTIONS(80),
    [anon_sym_final] = ACTIONS(80),
    [anon_sym_strictfp] = ACTIONS(80),
    [anon_sym_synchronized] = ACTIONS(80),
    [anon_sym_native] = ACTIONS(80),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(58),
  },
  [441] = {
    [sym_type_arguments] = STATE(92),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(1201),
    [anon_sym_DOT] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(58),
  },
  [442] = {
    [sym__literal] = STATE(601),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_statement] = STATE(223),
    [sym_if_then_statement] = STATE(224),
    [sym_if_then_else_statement] = STATE(224),
    [sym_type_arguments] = STATE(602),
    [sym_class_or_interface_type] = STATE(603),
    [sym_type_variable] = STATE(604),
    [sym_primitive_type] = STATE(604),
    [sym_integral_type] = STATE(595),
    [sym_floating_point_type] = STATE(595),
    [sym__annotation] = STATE(605),
    [sym_normal_annotation] = STATE(225),
    [sym_marker_annotation] = STATE(225),
    [sym_single_element_annotation] = STATE(225),
    [sym_package_or_type_name] = STATE(606),
    [sym_class_declaration] = STATE(223),
    [sym_normal_class_declaration] = STATE(226),
    [sym_modifier] = STATE(227),
    [sym_explicit_constructor_invocation] = STATE(607),
    [sym_ambiguous_name] = STATE(608),
    [sym_primary] = STATE(609),
    [sym_array_creation_expression] = STATE(610),
    [sym_primary_no_new_array] = STATE(611),
    [sym_class_literal] = STATE(601),
    [sym_class_instance_creation_expression] = STATE(601),
    [sym_unqualified_class_instance_creation_expression] = STATE(612),
    [sym_field_access] = STATE(601),
    [sym_array_access] = STATE(601),
    [sym_method_invocation] = STATE(601),
    [sym_method_reference] = STATE(601),
    [sym_array_type] = STATE(613),
    [sym_block_statements] = STATE(614),
    [sym_block_statement] = STATE(229),
    [sym_local_variable_declaration_statement] = STATE(223),
    [sym_local_variable_declaration] = STATE(230),
    [sym_method_name] = STATE(615),
    [aux_sym_class_or_interface_type_repeat1] = STATE(616),
    [aux_sym_normal_class_declaration_repeat1] = STATE(231),
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
    [sym_null_literal] = ACTIONS(24),
    [anon_sym_LT] = ACTIONS(917),
    [anon_sym_LPAREN] = ACTIONS(1203),
    [anon_sym_RBRACE] = ACTIONS(1205),
    [anon_sym_default] = ACTIONS(1207),
    [anon_sym_if] = ACTIONS(1209),
    [anon_sym_boolean] = ACTIONS(1211),
    [anon_sym_void] = ACTIONS(1213),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(433),
    [anon_sym_static] = ACTIONS(1207),
    [anon_sym_class] = ACTIONS(1215),
    [anon_sym_public] = ACTIONS(1207),
    [anon_sym_protected] = ACTIONS(1207),
    [anon_sym_private] = ACTIONS(1207),
    [anon_sym_abstract] = ACTIONS(1207),
    [anon_sym_final] = ACTIONS(1207),
    [anon_sym_strictfp] = ACTIONS(1207),
    [anon_sym_synchronized] = ACTIONS(1207),
    [anon_sym_native] = ACTIONS(1207),
    [anon_sym_this] = ACTIONS(1217),
    [anon_sym_super] = ACTIONS(1219),
    [anon_sym_new] = ACTIONS(1221),
    [sym_identifier] = ACTIONS(1223),
    [sym_comment] = ACTIONS(58),
  },
  [443] = {
    [sym__semicolon] = ACTIONS(1225),
    [anon_sym_LT] = ACTIONS(1225),
    [anon_sym_LBRACE] = ACTIONS(1225),
    [anon_sym_RBRACE] = ACTIONS(1225),
    [anon_sym_default] = ACTIONS(1227),
    [anon_sym_boolean] = ACTIONS(1227),
    [anon_sym_byte] = ACTIONS(1227),
    [anon_sym_short] = ACTIONS(1227),
    [anon_sym_int] = ACTIONS(1227),
    [anon_sym_long] = ACTIONS(1227),
    [anon_sym_char] = ACTIONS(1227),
    [anon_sym_float] = ACTIONS(1227),
    [anon_sym_double] = ACTIONS(1227),
    [anon_sym_AT] = ACTIONS(1225),
    [anon_sym_static] = ACTIONS(1227),
    [anon_sym_class] = ACTIONS(1227),
    [anon_sym_public] = ACTIONS(1227),
    [anon_sym_protected] = ACTIONS(1227),
    [anon_sym_private] = ACTIONS(1227),
    [anon_sym_abstract] = ACTIONS(1227),
    [anon_sym_final] = ACTIONS(1227),
    [anon_sym_strictfp] = ACTIONS(1227),
    [anon_sym_synchronized] = ACTIONS(1227),
    [anon_sym_native] = ACTIONS(1227),
    [anon_sym_interface] = ACTIONS(1227),
    [sym_identifier] = ACTIONS(1229),
    [sym_comment] = ACTIONS(58),
  },
  [444] = {
    [sym_constructor_body] = STATE(617),
    [anon_sym_LBRACE] = ACTIONS(905),
    [sym_comment] = ACTIONS(58),
  },
  [445] = {
    [sym__semicolon] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_LBRACE] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(421),
    [anon_sym_default] = ACTIONS(423),
    [anon_sym_boolean] = ACTIONS(423),
    [anon_sym_byte] = ACTIONS(423),
    [anon_sym_short] = ACTIONS(423),
    [anon_sym_int] = ACTIONS(423),
    [anon_sym_long] = ACTIONS(423),
    [anon_sym_char] = ACTIONS(423),
    [anon_sym_float] = ACTIONS(423),
    [anon_sym_double] = ACTIONS(423),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_static] = ACTIONS(423),
    [anon_sym_class] = ACTIONS(423),
    [anon_sym_public] = ACTIONS(423),
    [anon_sym_protected] = ACTIONS(423),
    [anon_sym_private] = ACTIONS(423),
    [anon_sym_abstract] = ACTIONS(423),
    [anon_sym_final] = ACTIONS(423),
    [anon_sym_strictfp] = ACTIONS(423),
    [anon_sym_synchronized] = ACTIONS(423),
    [anon_sym_native] = ACTIONS(423),
    [anon_sym_interface] = ACTIONS(423),
    [sym_identifier] = ACTIONS(425),
    [sym_comment] = ACTIONS(58),
  },
  [446] = {
    [sym__semicolon] = ACTIONS(437),
    [anon_sym_LT] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(437),
    [anon_sym_RBRACE] = ACTIONS(437),
    [anon_sym_default] = ACTIONS(439),
    [anon_sym_boolean] = ACTIONS(439),
    [anon_sym_byte] = ACTIONS(439),
    [anon_sym_short] = ACTIONS(439),
    [anon_sym_int] = ACTIONS(439),
    [anon_sym_long] = ACTIONS(439),
    [anon_sym_char] = ACTIONS(439),
    [anon_sym_float] = ACTIONS(439),
    [anon_sym_double] = ACTIONS(439),
    [anon_sym_AT] = ACTIONS(437),
    [anon_sym_static] = ACTIONS(439),
    [anon_sym_class] = ACTIONS(439),
    [anon_sym_public] = ACTIONS(439),
    [anon_sym_protected] = ACTIONS(439),
    [anon_sym_private] = ACTIONS(439),
    [anon_sym_abstract] = ACTIONS(439),
    [anon_sym_final] = ACTIONS(439),
    [anon_sym_strictfp] = ACTIONS(439),
    [anon_sym_synchronized] = ACTIONS(439),
    [anon_sym_native] = ACTIONS(439),
    [anon_sym_interface] = ACTIONS(439),
    [sym_identifier] = ACTIONS(441),
    [sym_comment] = ACTIONS(58),
  },
  [447] = {
    [sym_package_or_type_name] = STATE(236),
    [anon_sym_interface] = ACTIONS(1231),
    [sym_identifier] = ACTIONS(457),
    [sym_comment] = ACTIONS(58),
  },
  [448] = {
    [sym_identifier] = ACTIONS(1233),
    [sym_comment] = ACTIONS(58),
  },
  [449] = {
    [sym_identifier] = ACTIONS(1235),
    [sym_comment] = ACTIONS(58),
  },
  [450] = {
    [sym_constructor_body] = STATE(617),
    [sym_throws] = STATE(621),
    [anon_sym_LBRACE] = ACTIONS(905),
    [anon_sym_throws] = ACTIONS(405),
    [sym_comment] = ACTIONS(58),
  },
  [451] = {
    [sym_method_body] = STATE(622),
    [sym_block] = STATE(445),
    [sym__semicolon] = ACTIONS(907),
    [anon_sym_LBRACE] = ACTIONS(583),
    [sym_comment] = ACTIONS(58),
  },
  [452] = {
    [ts_builtin_sym_end] = ACTIONS(1237),
    [sym_decimal_integer_literal] = ACTIONS(1239),
    [sym_hex_integer_literal] = ACTIONS(1239),
    [sym_octal_integer_literal] = ACTIONS(1239),
    [sym_binary_integer_literal] = ACTIONS(1239),
    [sym_decimal_floating_point_literal] = ACTIONS(1239),
    [sym_hex_floating_point_literal] = ACTIONS(1241),
    [anon_sym_true] = ACTIONS(1239),
    [anon_sym_false] = ACTIONS(1239),
    [anon_sym_SQUOTE] = ACTIONS(1237),
    [sym_string_literal] = ACTIONS(1237),
    [sym_null_literal] = ACTIONS(1239),
    [anon_sym_LT] = ACTIONS(1237),
    [anon_sym_LPAREN] = ACTIONS(1237),
    [anon_sym_BANG] = ACTIONS(1237),
    [anon_sym_TILDE] = ACTIONS(1237),
    [anon_sym_PLUS_PLUS] = ACTIONS(1237),
    [anon_sym_DASH_DASH] = ACTIONS(1237),
    [anon_sym_default] = ACTIONS(1239),
    [anon_sym_boolean] = ACTIONS(1239),
    [anon_sym_byte] = ACTIONS(1239),
    [anon_sym_short] = ACTIONS(1239),
    [anon_sym_int] = ACTIONS(1239),
    [anon_sym_long] = ACTIONS(1239),
    [anon_sym_char] = ACTIONS(1239),
    [anon_sym_float] = ACTIONS(1239),
    [anon_sym_double] = ACTIONS(1239),
    [anon_sym_AT] = ACTIONS(1237),
    [anon_sym_open] = ACTIONS(1239),
    [anon_sym_module] = ACTIONS(1239),
    [anon_sym_static] = ACTIONS(1239),
    [anon_sym_package] = ACTIONS(1239),
    [anon_sym_import] = ACTIONS(1239),
    [anon_sym_class] = ACTIONS(1239),
    [anon_sym_public] = ACTIONS(1239),
    [anon_sym_protected] = ACTIONS(1239),
    [anon_sym_private] = ACTIONS(1239),
    [anon_sym_abstract] = ACTIONS(1239),
    [anon_sym_final] = ACTIONS(1239),
    [anon_sym_strictfp] = ACTIONS(1239),
    [anon_sym_synchronized] = ACTIONS(1239),
    [anon_sym_native] = ACTIONS(1239),
    [anon_sym_interface] = ACTIONS(1239),
    [sym_identifier] = ACTIONS(1241),
    [sym_comment] = ACTIONS(58),
  },
  [453] = {
    [sym__semicolon] = ACTIONS(1243),
    [anon_sym_LT] = ACTIONS(1243),
    [anon_sym_LBRACE] = ACTIONS(1243),
    [anon_sym_RBRACE] = ACTIONS(1243),
    [anon_sym_default] = ACTIONS(1245),
    [anon_sym_boolean] = ACTIONS(1245),
    [anon_sym_byte] = ACTIONS(1245),
    [anon_sym_short] = ACTIONS(1245),
    [anon_sym_int] = ACTIONS(1245),
    [anon_sym_long] = ACTIONS(1245),
    [anon_sym_char] = ACTIONS(1245),
    [anon_sym_float] = ACTIONS(1245),
    [anon_sym_double] = ACTIONS(1245),
    [anon_sym_AT] = ACTIONS(1243),
    [anon_sym_static] = ACTIONS(1245),
    [anon_sym_class] = ACTIONS(1245),
    [anon_sym_public] = ACTIONS(1245),
    [anon_sym_protected] = ACTIONS(1245),
    [anon_sym_private] = ACTIONS(1245),
    [anon_sym_abstract] = ACTIONS(1245),
    [anon_sym_final] = ACTIONS(1245),
    [anon_sym_strictfp] = ACTIONS(1245),
    [anon_sym_synchronized] = ACTIONS(1245),
    [anon_sym_native] = ACTIONS(1245),
    [anon_sym_interface] = ACTIONS(1245),
    [sym_identifier] = ACTIONS(1247),
    [sym_comment] = ACTIONS(58),
  },
  [454] = {
    [sym_type_argument] = STATE(623),
    [sym_reference_type] = STATE(190),
    [sym_class_or_interface_type] = STATE(191),
    [sym_primitive_type] = STATE(192),
    [sym_integral_type] = STATE(187),
    [sym_floating_point_type] = STATE(187),
    [sym__annotation] = STATE(104),
    [sym_normal_annotation] = STATE(105),
    [sym_marker_annotation] = STATE(105),
    [sym_single_element_annotation] = STATE(105),
    [aux_sym_class_or_interface_type_repeat1] = STATE(193),
    [anon_sym_boolean] = ACTIONS(375),
    [anon_sym_void] = ACTIONS(375),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(377),
    [sym_comment] = ACTIONS(58),
  },
  [455] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(625),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1249),
    [sym_comment] = ACTIONS(58),
  },
  [456] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(626),
    [anon_sym_LBRACE] = ACTIONS(969),
    [anon_sym_DOT] = ACTIONS(919),
    [anon_sym_implements] = ACTIONS(969),
    [sym_comment] = ACTIONS(58),
  },
  [457] = {
    [anon_sym_LBRACE] = ACTIONS(969),
    [anon_sym_DOT] = ACTIONS(1251),
    [anon_sym_implements] = ACTIONS(969),
    [sym_comment] = ACTIONS(58),
  },
  [458] = {
    [sym_type_arguments] = STATE(628),
    [aux_sym_class_or_interface_type_repeat2] = STATE(626),
    [anon_sym_LT] = ACTIONS(917),
    [anon_sym_LBRACE] = ACTIONS(969),
    [anon_sym_DOT] = ACTIONS(919),
    [anon_sym_implements] = ACTIONS(969),
    [sym_comment] = ACTIONS(58),
  },
  [459] = {
    [sym_class_or_interface_type] = STATE(629),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(243),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(58),
  },
  [460] = {
    [anon_sym_COMMA] = ACTIONS(1253),
    [anon_sym_LBRACE] = ACTIONS(1255),
    [sym_comment] = ACTIONS(58),
  },
  [461] = {
    [sym_class_body] = STATE(631),
    [anon_sym_LBRACE] = ACTIONS(365),
    [sym_comment] = ACTIONS(58),
  },
  [462] = {
    [ts_builtin_sym_end] = ACTIONS(1257),
    [sym_decimal_integer_literal] = ACTIONS(1259),
    [sym_hex_integer_literal] = ACTIONS(1259),
    [sym_octal_integer_literal] = ACTIONS(1259),
    [sym_binary_integer_literal] = ACTIONS(1259),
    [sym_decimal_floating_point_literal] = ACTIONS(1259),
    [sym_hex_floating_point_literal] = ACTIONS(1261),
    [anon_sym_true] = ACTIONS(1259),
    [anon_sym_false] = ACTIONS(1259),
    [anon_sym_SQUOTE] = ACTIONS(1257),
    [sym_string_literal] = ACTIONS(1257),
    [sym_null_literal] = ACTIONS(1259),
    [anon_sym_LT] = ACTIONS(1257),
    [anon_sym_LPAREN] = ACTIONS(1257),
    [anon_sym_BANG] = ACTIONS(1257),
    [anon_sym_TILDE] = ACTIONS(1257),
    [anon_sym_PLUS_PLUS] = ACTIONS(1257),
    [anon_sym_DASH_DASH] = ACTIONS(1257),
    [anon_sym_default] = ACTIONS(1259),
    [anon_sym_boolean] = ACTIONS(1259),
    [anon_sym_byte] = ACTIONS(1259),
    [anon_sym_short] = ACTIONS(1259),
    [anon_sym_int] = ACTIONS(1259),
    [anon_sym_long] = ACTIONS(1259),
    [anon_sym_char] = ACTIONS(1259),
    [anon_sym_float] = ACTIONS(1259),
    [anon_sym_double] = ACTIONS(1259),
    [anon_sym_AT] = ACTIONS(1257),
    [anon_sym_open] = ACTIONS(1259),
    [anon_sym_module] = ACTIONS(1259),
    [anon_sym_static] = ACTIONS(1259),
    [anon_sym_package] = ACTIONS(1259),
    [anon_sym_import] = ACTIONS(1259),
    [anon_sym_class] = ACTIONS(1259),
    [anon_sym_public] = ACTIONS(1259),
    [anon_sym_protected] = ACTIONS(1259),
    [anon_sym_private] = ACTIONS(1259),
    [anon_sym_abstract] = ACTIONS(1259),
    [anon_sym_final] = ACTIONS(1259),
    [anon_sym_strictfp] = ACTIONS(1259),
    [anon_sym_synchronized] = ACTIONS(1259),
    [anon_sym_native] = ACTIONS(1259),
    [anon_sym_interface] = ACTIONS(1259),
    [sym_identifier] = ACTIONS(1261),
    [sym_comment] = ACTIONS(58),
  },
  [463] = {
    [sym_dims] = STATE(256),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(113),
    [aux_sym_dims_repeat1] = STATE(114),
    [sym__semicolon] = ACTIONS(511),
    [anon_sym_EQ] = ACTIONS(511),
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [464] = {
    [sym__semicolon] = ACTIONS(1263),
    [sym_comment] = ACTIONS(58),
  },
  [465] = {
    [aux_sym_variable_declarator_list_repeat1] = STATE(634),
    [sym__semicolon] = ACTIONS(1265),
    [anon_sym_COMMA] = ACTIONS(1267),
    [sym_comment] = ACTIONS(58),
  },
  [466] = {
    [sym_variable_declarator_list] = STATE(635),
    [sym_variable_declarator] = STATE(465),
    [sym_variable_declarator_id] = STATE(254),
    [sym_method_declarator] = STATE(109),
    [sym_identifier] = ACTIONS(955),
    [sym_comment] = ACTIONS(58),
  },
  [467] = {
    [ts_builtin_sym_end] = ACTIONS(1269),
    [sym_decimal_integer_literal] = ACTIONS(1271),
    [sym_hex_integer_literal] = ACTIONS(1271),
    [sym_octal_integer_literal] = ACTIONS(1271),
    [sym_binary_integer_literal] = ACTIONS(1271),
    [sym_decimal_floating_point_literal] = ACTIONS(1271),
    [sym_hex_floating_point_literal] = ACTIONS(1273),
    [anon_sym_true] = ACTIONS(1271),
    [anon_sym_false] = ACTIONS(1271),
    [anon_sym_SQUOTE] = ACTIONS(1269),
    [sym_string_literal] = ACTIONS(1269),
    [sym_null_literal] = ACTIONS(1271),
    [anon_sym_LT] = ACTIONS(1269),
    [anon_sym_LPAREN] = ACTIONS(1269),
    [anon_sym_BANG] = ACTIONS(1269),
    [anon_sym_TILDE] = ACTIONS(1269),
    [anon_sym_PLUS_PLUS] = ACTIONS(1269),
    [anon_sym_DASH_DASH] = ACTIONS(1269),
    [anon_sym_default] = ACTIONS(1271),
    [anon_sym_boolean] = ACTIONS(1271),
    [anon_sym_byte] = ACTIONS(1271),
    [anon_sym_short] = ACTIONS(1271),
    [anon_sym_int] = ACTIONS(1271),
    [anon_sym_long] = ACTIONS(1271),
    [anon_sym_char] = ACTIONS(1271),
    [anon_sym_float] = ACTIONS(1271),
    [anon_sym_double] = ACTIONS(1271),
    [anon_sym_AT] = ACTIONS(1269),
    [anon_sym_open] = ACTIONS(1271),
    [anon_sym_module] = ACTIONS(1271),
    [anon_sym_static] = ACTIONS(1271),
    [anon_sym_package] = ACTIONS(1271),
    [anon_sym_import] = ACTIONS(1271),
    [anon_sym_class] = ACTIONS(1271),
    [anon_sym_public] = ACTIONS(1271),
    [anon_sym_protected] = ACTIONS(1271),
    [anon_sym_private] = ACTIONS(1271),
    [anon_sym_abstract] = ACTIONS(1271),
    [anon_sym_final] = ACTIONS(1271),
    [anon_sym_strictfp] = ACTIONS(1271),
    [anon_sym_synchronized] = ACTIONS(1271),
    [anon_sym_native] = ACTIONS(1271),
    [anon_sym_interface] = ACTIONS(1271),
    [sym_identifier] = ACTIONS(1273),
    [sym_comment] = ACTIONS(58),
  },
  [468] = {
    [sym__semicolon] = ACTIONS(1275),
    [anon_sym_LT] = ACTIONS(1275),
    [anon_sym_RBRACE] = ACTIONS(1275),
    [anon_sym_default] = ACTIONS(1277),
    [anon_sym_boolean] = ACTIONS(1277),
    [anon_sym_byte] = ACTIONS(1277),
    [anon_sym_short] = ACTIONS(1277),
    [anon_sym_int] = ACTIONS(1277),
    [anon_sym_long] = ACTIONS(1277),
    [anon_sym_char] = ACTIONS(1277),
    [anon_sym_float] = ACTIONS(1277),
    [anon_sym_double] = ACTIONS(1277),
    [anon_sym_AT] = ACTIONS(1275),
    [anon_sym_static] = ACTIONS(1277),
    [anon_sym_class] = ACTIONS(1277),
    [anon_sym_public] = ACTIONS(1277),
    [anon_sym_protected] = ACTIONS(1277),
    [anon_sym_private] = ACTIONS(1277),
    [anon_sym_abstract] = ACTIONS(1277),
    [anon_sym_final] = ACTIONS(1277),
    [anon_sym_strictfp] = ACTIONS(1277),
    [anon_sym_synchronized] = ACTIONS(1277),
    [anon_sym_native] = ACTIONS(1277),
    [anon_sym_interface] = ACTIONS(1277),
    [sym_identifier] = ACTIONS(1279),
    [sym_comment] = ACTIONS(58),
  },
  [469] = {
    [ts_builtin_sym_end] = ACTIONS(1281),
    [sym_decimal_integer_literal] = ACTIONS(1283),
    [sym_hex_integer_literal] = ACTIONS(1283),
    [sym_octal_integer_literal] = ACTIONS(1283),
    [sym_binary_integer_literal] = ACTIONS(1283),
    [sym_decimal_floating_point_literal] = ACTIONS(1283),
    [sym_hex_floating_point_literal] = ACTIONS(1285),
    [anon_sym_true] = ACTIONS(1283),
    [anon_sym_false] = ACTIONS(1283),
    [anon_sym_SQUOTE] = ACTIONS(1281),
    [sym_string_literal] = ACTIONS(1281),
    [sym_null_literal] = ACTIONS(1283),
    [anon_sym_LT] = ACTIONS(1281),
    [anon_sym_LPAREN] = ACTIONS(1281),
    [anon_sym_BANG] = ACTIONS(1281),
    [anon_sym_TILDE] = ACTIONS(1281),
    [anon_sym_PLUS_PLUS] = ACTIONS(1281),
    [anon_sym_DASH_DASH] = ACTIONS(1281),
    [anon_sym_default] = ACTIONS(1283),
    [anon_sym_boolean] = ACTIONS(1283),
    [anon_sym_byte] = ACTIONS(1283),
    [anon_sym_short] = ACTIONS(1283),
    [anon_sym_int] = ACTIONS(1283),
    [anon_sym_long] = ACTIONS(1283),
    [anon_sym_char] = ACTIONS(1283),
    [anon_sym_float] = ACTIONS(1283),
    [anon_sym_double] = ACTIONS(1283),
    [anon_sym_AT] = ACTIONS(1281),
    [anon_sym_open] = ACTIONS(1283),
    [anon_sym_module] = ACTIONS(1283),
    [anon_sym_static] = ACTIONS(1283),
    [anon_sym_package] = ACTIONS(1283),
    [anon_sym_import] = ACTIONS(1283),
    [anon_sym_class] = ACTIONS(1283),
    [anon_sym_public] = ACTIONS(1283),
    [anon_sym_protected] = ACTIONS(1283),
    [anon_sym_private] = ACTIONS(1283),
    [anon_sym_abstract] = ACTIONS(1283),
    [anon_sym_final] = ACTIONS(1283),
    [anon_sym_strictfp] = ACTIONS(1283),
    [anon_sym_synchronized] = ACTIONS(1283),
    [anon_sym_native] = ACTIONS(1283),
    [anon_sym_interface] = ACTIONS(1283),
    [sym_identifier] = ACTIONS(1285),
    [sym_comment] = ACTIONS(58),
  },
  [470] = {
    [sym_type_arguments] = STATE(636),
    [anon_sym_GT] = ACTIONS(1287),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(1287),
    [anon_sym_COMMA] = ACTIONS(1287),
    [anon_sym_LBRACE] = ACTIONS(1287),
    [anon_sym_DOT] = ACTIONS(1287),
    [anon_sym_LBRACK] = ACTIONS(1287),
    [anon_sym_AT] = ACTIONS(1287),
    [anon_sym_COLON_COLON] = ACTIONS(1287),
    [sym_comment] = ACTIONS(58),
  },
  [471] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1289),
    [sym_comment] = ACTIONS(58),
  },
  [472] = {
    [anon_sym_GT] = ACTIONS(1291),
    [anon_sym_AMP] = ACTIONS(1291),
    [anon_sym_COMMA] = ACTIONS(1291),
    [anon_sym_LBRACE] = ACTIONS(1291),
    [anon_sym_DOT] = ACTIONS(971),
    [anon_sym_LBRACK] = ACTIONS(1291),
    [anon_sym_AT] = ACTIONS(1291),
    [anon_sym_COLON_COLON] = ACTIONS(1291),
    [sym_comment] = ACTIONS(58),
  },
  [473] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(638),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1289),
    [sym_comment] = ACTIONS(58),
  },
  [474] = {
    [anon_sym_GT] = ACTIONS(1293),
    [anon_sym_COMMA] = ACTIONS(1293),
    [sym_comment] = ACTIONS(58),
  },
  [475] = {
    [anon_sym_GT] = ACTIONS(1295),
    [anon_sym_AMP] = ACTIONS(1295),
    [anon_sym_LPAREN] = ACTIONS(1295),
    [anon_sym_COMMA] = ACTIONS(1295),
    [anon_sym_LBRACE] = ACTIONS(1295),
    [anon_sym_DOT] = ACTIONS(1297),
    [anon_sym_LBRACK] = ACTIONS(1295),
    [anon_sym_AT] = ACTIONS(1295),
    [anon_sym_COLON_COLON] = ACTIONS(1295),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1295),
    [sym_identifier] = ACTIONS(1297),
    [sym_comment] = ACTIONS(58),
  },
  [476] = {
    [sym_type_argument] = STATE(639),
    [sym_reference_type] = STATE(190),
    [sym_class_or_interface_type] = STATE(191),
    [sym_primitive_type] = STATE(192),
    [sym_integral_type] = STATE(187),
    [sym_floating_point_type] = STATE(187),
    [sym__annotation] = STATE(104),
    [sym_normal_annotation] = STATE(105),
    [sym_marker_annotation] = STATE(105),
    [sym_single_element_annotation] = STATE(105),
    [aux_sym_class_or_interface_type_repeat1] = STATE(193),
    [anon_sym_boolean] = ACTIONS(375),
    [anon_sym_void] = ACTIONS(375),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(377),
    [sym_comment] = ACTIONS(58),
  },
  [477] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(640),
    [anon_sym_GT] = ACTIONS(1291),
    [anon_sym_AMP] = ACTIONS(1291),
    [anon_sym_COMMA] = ACTIONS(1291),
    [anon_sym_LBRACE] = ACTIONS(1291),
    [anon_sym_DOT] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(1291),
    [anon_sym_AT] = ACTIONS(1291),
    [anon_sym_COLON_COLON] = ACTIONS(1291),
    [sym_comment] = ACTIONS(58),
  },
  [478] = {
    [anon_sym_GT] = ACTIONS(633),
    [anon_sym_LT] = ACTIONS(633),
    [anon_sym_EQ_EQ] = ACTIONS(631),
    [anon_sym_GT_EQ] = ACTIONS(631),
    [anon_sym_LT_EQ] = ACTIONS(631),
    [anon_sym_BANG_EQ] = ACTIONS(631),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(645),
    [anon_sym_SLASH] = ACTIONS(647),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_GT_GT_GT] = ACTIONS(645),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_COLON] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [479] = {
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_EQ_EQ] = ACTIONS(637),
    [anon_sym_GT_EQ] = ACTIONS(637),
    [anon_sym_LT_EQ] = ACTIONS(637),
    [anon_sym_BANG_EQ] = ACTIONS(637),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [anon_sym_STAR] = ACTIONS(645),
    [anon_sym_SLASH] = ACTIONS(647),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_GT_GT_GT] = ACTIONS(645),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_COLON] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [480] = {
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_EQ_EQ] = ACTIONS(637),
    [anon_sym_GT_EQ] = ACTIONS(637),
    [anon_sym_LT_EQ] = ACTIONS(637),
    [anon_sym_BANG_EQ] = ACTIONS(637),
    [anon_sym_AMP_AMP] = ACTIONS(639),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [anon_sym_STAR] = ACTIONS(645),
    [anon_sym_SLASH] = ACTIONS(647),
    [anon_sym_AMP] = ACTIONS(649),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_GT_GT_GT] = ACTIONS(645),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_COLON] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [481] = {
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_EQ_EQ] = ACTIONS(637),
    [anon_sym_GT_EQ] = ACTIONS(637),
    [anon_sym_LT_EQ] = ACTIONS(637),
    [anon_sym_BANG_EQ] = ACTIONS(637),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(645),
    [anon_sym_SLASH] = ACTIONS(647),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_GT_GT_GT] = ACTIONS(645),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_COLON] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [482] = {
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_EQ_EQ] = ACTIONS(637),
    [anon_sym_GT_EQ] = ACTIONS(637),
    [anon_sym_LT_EQ] = ACTIONS(637),
    [anon_sym_BANG_EQ] = ACTIONS(637),
    [anon_sym_AMP_AMP] = ACTIONS(639),
    [anon_sym_PIPE_PIPE] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [anon_sym_STAR] = ACTIONS(645),
    [anon_sym_SLASH] = ACTIONS(647),
    [anon_sym_AMP] = ACTIONS(649),
    [anon_sym_PIPE] = ACTIONS(651),
    [anon_sym_CARET] = ACTIONS(641),
    [anon_sym_PERCENT] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_GT_GT_GT] = ACTIONS(645),
    [anon_sym_QMARK] = ACTIONS(653),
    [anon_sym_COLON] = ACTIONS(1299),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [483] = {
    [sym__semicolon] = ACTIONS(1301),
    [anon_sym_GT] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(146),
    [anon_sym_EQ_EQ] = ACTIONS(148),
    [anon_sym_GT_EQ] = ACTIONS(148),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [anon_sym_BANG_EQ] = ACTIONS(148),
    [anon_sym_AMP_AMP] = ACTIONS(150),
    [anon_sym_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_STAR] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_PERCENT] = ACTIONS(156),
    [anon_sym_LT_LT] = ACTIONS(156),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_GT_GT_GT] = ACTIONS(156),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [484] = {
    [anon_sym_GT] = ACTIONS(633),
    [anon_sym_LT] = ACTIONS(633),
    [anon_sym_EQ_EQ] = ACTIONS(631),
    [anon_sym_GT_EQ] = ACTIONS(631),
    [anon_sym_LT_EQ] = ACTIONS(631),
    [anon_sym_BANG_EQ] = ACTIONS(631),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(667),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(667),
    [anon_sym_LT_LT] = ACTIONS(667),
    [anon_sym_GT_GT] = ACTIONS(669),
    [anon_sym_GT_GT_GT] = ACTIONS(667),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [485] = {
    [anon_sym_GT] = ACTIONS(657),
    [anon_sym_LT] = ACTIONS(657),
    [anon_sym_EQ_EQ] = ACTIONS(659),
    [anon_sym_GT_EQ] = ACTIONS(659),
    [anon_sym_LT_EQ] = ACTIONS(659),
    [anon_sym_BANG_EQ] = ACTIONS(659),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(665),
    [anon_sym_DASH] = ACTIONS(665),
    [anon_sym_STAR] = ACTIONS(667),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(667),
    [anon_sym_LT_LT] = ACTIONS(667),
    [anon_sym_GT_GT] = ACTIONS(669),
    [anon_sym_GT_GT_GT] = ACTIONS(667),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [486] = {
    [anon_sym_GT] = ACTIONS(657),
    [anon_sym_LT] = ACTIONS(657),
    [anon_sym_EQ_EQ] = ACTIONS(659),
    [anon_sym_GT_EQ] = ACTIONS(659),
    [anon_sym_LT_EQ] = ACTIONS(659),
    [anon_sym_BANG_EQ] = ACTIONS(659),
    [anon_sym_AMP_AMP] = ACTIONS(661),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(665),
    [anon_sym_DASH] = ACTIONS(665),
    [anon_sym_STAR] = ACTIONS(667),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_AMP] = ACTIONS(671),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(667),
    [anon_sym_LT_LT] = ACTIONS(667),
    [anon_sym_GT_GT] = ACTIONS(669),
    [anon_sym_GT_GT_GT] = ACTIONS(667),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [487] = {
    [anon_sym_GT] = ACTIONS(657),
    [anon_sym_LT] = ACTIONS(657),
    [anon_sym_EQ_EQ] = ACTIONS(659),
    [anon_sym_GT_EQ] = ACTIONS(659),
    [anon_sym_LT_EQ] = ACTIONS(659),
    [anon_sym_BANG_EQ] = ACTIONS(659),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(667),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(667),
    [anon_sym_LT_LT] = ACTIONS(667),
    [anon_sym_GT_GT] = ACTIONS(669),
    [anon_sym_GT_GT_GT] = ACTIONS(667),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [488] = {
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_EQ_EQ] = ACTIONS(637),
    [anon_sym_GT_EQ] = ACTIONS(637),
    [anon_sym_LT_EQ] = ACTIONS(637),
    [anon_sym_BANG_EQ] = ACTIONS(637),
    [anon_sym_AMP_AMP] = ACTIONS(639),
    [anon_sym_PIPE_PIPE] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [anon_sym_STAR] = ACTIONS(645),
    [anon_sym_SLASH] = ACTIONS(647),
    [anon_sym_AMP] = ACTIONS(649),
    [anon_sym_PIPE] = ACTIONS(651),
    [anon_sym_CARET] = ACTIONS(641),
    [anon_sym_PERCENT] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_GT_GT_GT] = ACTIONS(645),
    [anon_sym_QMARK] = ACTIONS(653),
    [anon_sym_COLON] = ACTIONS(1303),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [489] = {
    [anon_sym_boolean] = ACTIONS(813),
    [anon_sym_byte] = ACTIONS(813),
    [anon_sym_short] = ACTIONS(813),
    [anon_sym_int] = ACTIONS(813),
    [anon_sym_long] = ACTIONS(813),
    [anon_sym_char] = ACTIONS(813),
    [anon_sym_float] = ACTIONS(813),
    [anon_sym_double] = ACTIONS(813),
    [anon_sym_AT] = ACTIONS(811),
    [sym_identifier] = ACTIONS(815),
    [sym_comment] = ACTIONS(58),
  },
  [490] = {
    [anon_sym_EQ] = ACTIONS(817),
    [anon_sym_RPAREN] = ACTIONS(1305),
    [sym_comment] = ACTIONS(58),
  },
  [491] = {
    [anon_sym_RPAREN] = ACTIONS(1305),
    [sym_comment] = ACTIONS(58),
  },
  [492] = {
    [anon_sym_RPAREN] = ACTIONS(1307),
    [sym_comment] = ACTIONS(58),
  },
  [493] = {
    [anon_sym_LPAREN] = ACTIONS(827),
    [anon_sym_DOT] = ACTIONS(827),
    [anon_sym_boolean] = ACTIONS(829),
    [anon_sym_byte] = ACTIONS(829),
    [anon_sym_short] = ACTIONS(829),
    [anon_sym_int] = ACTIONS(829),
    [anon_sym_long] = ACTIONS(829),
    [anon_sym_char] = ACTIONS(829),
    [anon_sym_float] = ACTIONS(829),
    [anon_sym_double] = ACTIONS(829),
    [anon_sym_AT] = ACTIONS(827),
    [sym_identifier] = ACTIONS(831),
    [sym_comment] = ACTIONS(58),
  },
  [494] = {
    [sym__semicolon] = ACTIONS(1309),
    [anon_sym_LBRACE] = ACTIONS(1309),
    [sym_comment] = ACTIONS(58),
  },
  [495] = {
    [anon_sym_RBRACK] = ACTIONS(1311),
    [sym_comment] = ACTIONS(58),
  },
  [496] = {
    [sym__semicolon] = ACTIONS(1313),
    [anon_sym_LBRACE] = ACTIONS(1313),
    [anon_sym_throws] = ACTIONS(1313),
    [sym_comment] = ACTIONS(58),
  },
  [497] = {
    [sym__annotation] = STATE(122),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(1315),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [498] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(647),
    [sym__semicolon] = ACTIONS(415),
    [anon_sym_LBRACE] = ACTIONS(415),
    [anon_sym_default] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(1315),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_throws] = ACTIONS(415),
    [sym_comment] = ACTIONS(58),
  },
  [499] = {
    [sym_dims] = STATE(648),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(497),
    [aux_sym_dims_repeat1] = STATE(498),
    [sym__semicolon] = ACTIONS(1313),
    [anon_sym_LBRACE] = ACTIONS(1313),
    [anon_sym_LBRACK] = ACTIONS(999),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_throws] = ACTIONS(1313),
    [sym_comment] = ACTIONS(58),
  },
  [500] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(650),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1317),
    [sym_comment] = ACTIONS(58),
  },
  [501] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(651),
    [anon_sym_DOT] = ACTIONS(1003),
    [anon_sym_AT] = ACTIONS(969),
    [sym_identifier] = ACTIONS(1319),
    [sym_comment] = ACTIONS(58),
  },
  [502] = {
    [anon_sym_DOT] = ACTIONS(1321),
    [anon_sym_AT] = ACTIONS(969),
    [sym_identifier] = ACTIONS(1319),
    [sym_comment] = ACTIONS(58),
  },
  [503] = {
    [sym__semicolon] = ACTIONS(1323),
    [anon_sym_COMMA] = ACTIONS(1323),
    [anon_sym_LBRACE] = ACTIONS(1323),
    [sym_comment] = ACTIONS(58),
  },
  [504] = {
    [sym__semicolon] = ACTIONS(1325),
    [anon_sym_COMMA] = ACTIONS(1325),
    [anon_sym_LBRACE] = ACTIONS(1325),
    [sym_comment] = ACTIONS(58),
  },
  [505] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1327),
    [sym_comment] = ACTIONS(58),
  },
  [506] = {
    [sym__semicolon] = ACTIONS(1329),
    [anon_sym_COMMA] = ACTIONS(1329),
    [anon_sym_LBRACE] = ACTIONS(1329),
    [sym_comment] = ACTIONS(58),
  },
  [507] = {
    [sym__semicolon] = ACTIONS(1331),
    [anon_sym_COMMA] = ACTIONS(1333),
    [anon_sym_LBRACE] = ACTIONS(1331),
    [sym_comment] = ACTIONS(58),
  },
  [508] = {
    [sym_type_arguments] = STATE(655),
    [aux_sym_class_or_interface_type_repeat2] = STATE(651),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(1003),
    [anon_sym_AT] = ACTIONS(969),
    [sym_identifier] = ACTIONS(1319),
    [sym_comment] = ACTIONS(58),
  },
  [509] = {
    [sym__semicolon] = ACTIONS(1335),
    [anon_sym_EQ] = ACTIONS(1335),
    [anon_sym_GT] = ACTIONS(1335),
    [anon_sym_RPAREN] = ACTIONS(1335),
    [anon_sym_COMMA] = ACTIONS(1335),
    [anon_sym_LBRACE] = ACTIONS(1335),
    [anon_sym_DOT] = ACTIONS(1337),
    [anon_sym_LBRACK] = ACTIONS(1335),
    [anon_sym_AT] = ACTIONS(1335),
    [anon_sym_COLON_COLON] = ACTIONS(1335),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1335),
    [sym_identifier] = ACTIONS(1337),
    [sym_comment] = ACTIONS(58),
  },
  [510] = {
    [anon_sym_DOT] = ACTIONS(1339),
    [anon_sym_LBRACK] = ACTIONS(1341),
    [anon_sym_AT] = ACTIONS(1341),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1341),
    [sym_identifier] = ACTIONS(1339),
    [sym_comment] = ACTIONS(58),
  },
  [511] = {
    [sym__expression] = STATE(78),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1027),
    [anon_sym_TILDE] = ACTIONS(1027),
    [anon_sym_PLUS_PLUS] = ACTIONS(1029),
    [anon_sym_DASH_DASH] = ACTIONS(1029),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [512] = {
    [sym__expression] = STATE(79),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1027),
    [anon_sym_TILDE] = ACTIONS(1027),
    [anon_sym_PLUS_PLUS] = ACTIONS(1029),
    [anon_sym_DASH_DASH] = ACTIONS(1029),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [513] = {
    [anon_sym_GT] = ACTIONS(1343),
    [anon_sym_LT] = ACTIONS(1343),
    [anon_sym_EQ_EQ] = ACTIONS(1345),
    [anon_sym_GT_EQ] = ACTIONS(1345),
    [anon_sym_LT_EQ] = ACTIONS(1345),
    [anon_sym_BANG_EQ] = ACTIONS(1345),
    [anon_sym_AMP_AMP] = ACTIONS(1347),
    [anon_sym_PIPE_PIPE] = ACTIONS(1349),
    [anon_sym_PLUS] = ACTIONS(1351),
    [anon_sym_DASH] = ACTIONS(1351),
    [anon_sym_STAR] = ACTIONS(1353),
    [anon_sym_SLASH] = ACTIONS(1355),
    [anon_sym_AMP] = ACTIONS(1357),
    [anon_sym_PIPE] = ACTIONS(1359),
    [anon_sym_CARET] = ACTIONS(1349),
    [anon_sym_PERCENT] = ACTIONS(1353),
    [anon_sym_LT_LT] = ACTIONS(1353),
    [anon_sym_GT_GT] = ACTIONS(1355),
    [anon_sym_GT_GT_GT] = ACTIONS(1353),
    [anon_sym_RPAREN] = ACTIONS(1361),
    [anon_sym_QMARK] = ACTIONS(1363),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [514] = {
    [sym__literal] = STATE(665),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(666),
    [sym_element_value_pair] = STATE(276),
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
    [sym_null_literal] = ACTIONS(24),
    [anon_sym_RPAREN] = ACTIONS(1365),
    [sym_identifier] = ACTIONS(1367),
    [sym_comment] = ACTIONS(58),
  },
  [515] = {
    [sym_identifier] = ACTIONS(1369),
    [sym_comment] = ACTIONS(58),
  },
  [516] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(126),
    [sym_marker_annotation] = STATE(126),
    [sym_single_element_annotation] = STATE(126),
    [sym_class_declaration] = STATE(292),
    [sym_normal_class_declaration] = STATE(299),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(300),
    [sym_class_body_declaration] = STATE(301),
    [sym_constructor_declaration] = STATE(302),
    [sym_constructor_declarator] = STATE(303),
    [sym_class_member_declaration] = STATE(302),
    [sym_interface_declaration] = STATE(292),
    [sym_annotation_type_declaration] = STATE(304),
    [sym_normal_interface_declaration] = STATE(304),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(305),
    [sym_block] = STATE(302),
    [sym_method_declaration] = STATE(292),
    [aux_sym_normal_class_declaration_repeat1] = STATE(306),
    [aux_sym_class_body_repeat1] = STATE(669),
    [sym__semicolon] = ACTIONS(581),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(1371),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(593),
    [sym_comment] = ACTIONS(58),
  },
  [517] = {
    [sym_superclass] = STATE(670),
    [sym_super_interfaces] = STATE(671),
    [sym_class_body] = STATE(672),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [anon_sym_extends] = ACTIONS(367),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [518] = {
    [sym_super_interfaces] = STATE(671),
    [sym_class_body] = STATE(672),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [519] = {
    [sym_class_body] = STATE(672),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [sym_comment] = ACTIONS(58),
  },
  [520] = {
    [anon_sym_RBRACE] = ACTIONS(597),
    [anon_sym_default] = ACTIONS(597),
    [anon_sym_if] = ACTIONS(597),
    [anon_sym_AT] = ACTIONS(597),
    [anon_sym_static] = ACTIONS(597),
    [anon_sym_class] = ACTIONS(597),
    [anon_sym_public] = ACTIONS(597),
    [anon_sym_protected] = ACTIONS(597),
    [anon_sym_private] = ACTIONS(597),
    [anon_sym_abstract] = ACTIONS(597),
    [anon_sym_final] = ACTIONS(597),
    [anon_sym_strictfp] = ACTIONS(597),
    [anon_sym_synchronized] = ACTIONS(597),
    [anon_sym_native] = ACTIONS(597),
    [sym_comment] = ACTIONS(58),
  },
  [521] = {
    [sym__semicolon] = ACTIONS(1373),
    [sym_comment] = ACTIONS(58),
  },
  [522] = {
    [anon_sym_RBRACE] = ACTIONS(1375),
    [anon_sym_default] = ACTIONS(1375),
    [anon_sym_if] = ACTIONS(1375),
    [anon_sym_AT] = ACTIONS(1375),
    [anon_sym_static] = ACTIONS(1375),
    [anon_sym_class] = ACTIONS(1375),
    [anon_sym_public] = ACTIONS(1375),
    [anon_sym_protected] = ACTIONS(1375),
    [anon_sym_private] = ACTIONS(1375),
    [anon_sym_abstract] = ACTIONS(1375),
    [anon_sym_final] = ACTIONS(1375),
    [anon_sym_strictfp] = ACTIONS(1375),
    [anon_sym_synchronized] = ACTIONS(1375),
    [anon_sym_native] = ACTIONS(1375),
    [sym_comment] = ACTIONS(58),
  },
  [523] = {
    [sym_type_parameters] = STATE(673),
    [sym_superclass] = STATE(670),
    [sym_super_interfaces] = STATE(671),
    [sym_class_body] = STATE(672),
    [anon_sym_LT] = ACTIONS(363),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [anon_sym_extends] = ACTIONS(367),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [524] = {
    [sym_module_directive] = STATE(286),
    [aux_sym_module_declaration_repeat1] = STATE(674),
    [anon_sym_RBRACE] = ACTIONS(1153),
    [anon_sym_requires] = ACTIONS(555),
    [anon_sym_exports] = ACTIONS(557),
    [anon_sym_opens] = ACTIONS(557),
    [anon_sym_uses] = ACTIONS(559),
    [anon_sym_provides] = ACTIONS(561),
    [sym_comment] = ACTIONS(58),
  },
  [525] = {
    [ts_builtin_sym_end] = ACTIONS(1377),
    [sym_decimal_integer_literal] = ACTIONS(1379),
    [sym_hex_integer_literal] = ACTIONS(1379),
    [sym_octal_integer_literal] = ACTIONS(1379),
    [sym_binary_integer_literal] = ACTIONS(1379),
    [sym_decimal_floating_point_literal] = ACTIONS(1379),
    [sym_hex_floating_point_literal] = ACTIONS(1381),
    [anon_sym_true] = ACTIONS(1379),
    [anon_sym_false] = ACTIONS(1379),
    [anon_sym_SQUOTE] = ACTIONS(1377),
    [sym_string_literal] = ACTIONS(1377),
    [sym_null_literal] = ACTIONS(1379),
    [anon_sym_LT] = ACTIONS(1377),
    [anon_sym_LPAREN] = ACTIONS(1377),
    [anon_sym_BANG] = ACTIONS(1377),
    [anon_sym_TILDE] = ACTIONS(1377),
    [anon_sym_PLUS_PLUS] = ACTIONS(1377),
    [anon_sym_DASH_DASH] = ACTIONS(1377),
    [anon_sym_default] = ACTIONS(1379),
    [anon_sym_boolean] = ACTIONS(1379),
    [anon_sym_byte] = ACTIONS(1379),
    [anon_sym_short] = ACTIONS(1379),
    [anon_sym_int] = ACTIONS(1379),
    [anon_sym_long] = ACTIONS(1379),
    [anon_sym_char] = ACTIONS(1379),
    [anon_sym_float] = ACTIONS(1379),
    [anon_sym_double] = ACTIONS(1379),
    [anon_sym_AT] = ACTIONS(1377),
    [anon_sym_open] = ACTIONS(1379),
    [anon_sym_module] = ACTIONS(1379),
    [anon_sym_static] = ACTIONS(1379),
    [anon_sym_package] = ACTIONS(1379),
    [anon_sym_import] = ACTIONS(1379),
    [anon_sym_class] = ACTIONS(1379),
    [anon_sym_public] = ACTIONS(1379),
    [anon_sym_protected] = ACTIONS(1379),
    [anon_sym_private] = ACTIONS(1379),
    [anon_sym_abstract] = ACTIONS(1379),
    [anon_sym_final] = ACTIONS(1379),
    [anon_sym_strictfp] = ACTIONS(1379),
    [anon_sym_synchronized] = ACTIONS(1379),
    [anon_sym_native] = ACTIONS(1379),
    [anon_sym_interface] = ACTIONS(1379),
    [sym_identifier] = ACTIONS(1381),
    [sym_comment] = ACTIONS(58),
  },
  [526] = {
    [ts_builtin_sym_end] = ACTIONS(1383),
    [sym_decimal_integer_literal] = ACTIONS(1385),
    [sym_hex_integer_literal] = ACTIONS(1385),
    [sym_octal_integer_literal] = ACTIONS(1385),
    [sym_binary_integer_literal] = ACTIONS(1385),
    [sym_decimal_floating_point_literal] = ACTIONS(1385),
    [sym_hex_floating_point_literal] = ACTIONS(1387),
    [anon_sym_true] = ACTIONS(1385),
    [anon_sym_false] = ACTIONS(1385),
    [anon_sym_SQUOTE] = ACTIONS(1383),
    [sym_string_literal] = ACTIONS(1383),
    [sym_null_literal] = ACTIONS(1385),
    [anon_sym_LT] = ACTIONS(1383),
    [anon_sym_LPAREN] = ACTIONS(1383),
    [anon_sym_BANG] = ACTIONS(1383),
    [anon_sym_TILDE] = ACTIONS(1383),
    [anon_sym_PLUS_PLUS] = ACTIONS(1383),
    [anon_sym_DASH_DASH] = ACTIONS(1383),
    [anon_sym_default] = ACTIONS(1385),
    [anon_sym_boolean] = ACTIONS(1385),
    [anon_sym_byte] = ACTIONS(1385),
    [anon_sym_short] = ACTIONS(1385),
    [anon_sym_int] = ACTIONS(1385),
    [anon_sym_long] = ACTIONS(1385),
    [anon_sym_char] = ACTIONS(1385),
    [anon_sym_float] = ACTIONS(1385),
    [anon_sym_double] = ACTIONS(1385),
    [anon_sym_AT] = ACTIONS(1383),
    [anon_sym_open] = ACTIONS(1385),
    [anon_sym_module] = ACTIONS(1385),
    [anon_sym_static] = ACTIONS(1385),
    [anon_sym_package] = ACTIONS(1385),
    [anon_sym_import] = ACTIONS(1385),
    [anon_sym_class] = ACTIONS(1385),
    [anon_sym_public] = ACTIONS(1385),
    [anon_sym_protected] = ACTIONS(1385),
    [anon_sym_private] = ACTIONS(1385),
    [anon_sym_abstract] = ACTIONS(1385),
    [anon_sym_final] = ACTIONS(1385),
    [anon_sym_strictfp] = ACTIONS(1385),
    [anon_sym_synchronized] = ACTIONS(1385),
    [anon_sym_native] = ACTIONS(1385),
    [anon_sym_interface] = ACTIONS(1385),
    [sym_identifier] = ACTIONS(1387),
    [sym_comment] = ACTIONS(58),
  },
  [527] = {
    [anon_sym_LT] = ACTIONS(811),
    [anon_sym_default] = ACTIONS(813),
    [anon_sym_boolean] = ACTIONS(813),
    [anon_sym_byte] = ACTIONS(813),
    [anon_sym_short] = ACTIONS(813),
    [anon_sym_int] = ACTIONS(813),
    [anon_sym_long] = ACTIONS(813),
    [anon_sym_char] = ACTIONS(813),
    [anon_sym_float] = ACTIONS(813),
    [anon_sym_double] = ACTIONS(813),
    [anon_sym_AT] = ACTIONS(811),
    [anon_sym_static] = ACTIONS(813),
    [anon_sym_class] = ACTIONS(813),
    [anon_sym_public] = ACTIONS(813),
    [anon_sym_protected] = ACTIONS(813),
    [anon_sym_private] = ACTIONS(813),
    [anon_sym_abstract] = ACTIONS(813),
    [anon_sym_final] = ACTIONS(813),
    [anon_sym_strictfp] = ACTIONS(813),
    [anon_sym_synchronized] = ACTIONS(813),
    [anon_sym_native] = ACTIONS(813),
    [anon_sym_interface] = ACTIONS(813),
    [sym_identifier] = ACTIONS(815),
    [sym_comment] = ACTIONS(58),
  },
  [528] = {
    [anon_sym_EQ] = ACTIONS(817),
    [anon_sym_RPAREN] = ACTIONS(1389),
    [sym_comment] = ACTIONS(58),
  },
  [529] = {
    [anon_sym_RPAREN] = ACTIONS(1389),
    [sym_comment] = ACTIONS(58),
  },
  [530] = {
    [anon_sym_RPAREN] = ACTIONS(1391),
    [sym_comment] = ACTIONS(58),
  },
  [531] = {
    [anon_sym_LT] = ACTIONS(827),
    [anon_sym_LPAREN] = ACTIONS(827),
    [anon_sym_default] = ACTIONS(829),
    [anon_sym_DOT] = ACTIONS(827),
    [anon_sym_boolean] = ACTIONS(829),
    [anon_sym_byte] = ACTIONS(829),
    [anon_sym_short] = ACTIONS(829),
    [anon_sym_int] = ACTIONS(829),
    [anon_sym_long] = ACTIONS(829),
    [anon_sym_char] = ACTIONS(829),
    [anon_sym_float] = ACTIONS(829),
    [anon_sym_double] = ACTIONS(829),
    [anon_sym_AT] = ACTIONS(827),
    [anon_sym_static] = ACTIONS(829),
    [anon_sym_class] = ACTIONS(829),
    [anon_sym_public] = ACTIONS(829),
    [anon_sym_protected] = ACTIONS(829),
    [anon_sym_private] = ACTIONS(829),
    [anon_sym_abstract] = ACTIONS(829),
    [anon_sym_final] = ACTIONS(829),
    [anon_sym_strictfp] = ACTIONS(829),
    [anon_sym_synchronized] = ACTIONS(829),
    [anon_sym_native] = ACTIONS(829),
    [anon_sym_interface] = ACTIONS(829),
    [sym_identifier] = ACTIONS(831),
    [sym_comment] = ACTIONS(58),
  },
  [532] = {
    [sym_super_interfaces] = STATE(677),
    [sym_class_body] = STATE(631),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [533] = {
    [sym_interface_body] = STATE(678),
    [anon_sym_LBRACE] = ACTIONS(371),
    [sym_comment] = ACTIONS(58),
  },
  [534] = {
    [anon_sym_AT] = ACTIONS(1129),
    [sym_identifier] = ACTIONS(1131),
    [sym_comment] = ACTIONS(58),
  },
  [535] = {
    [anon_sym_AT] = ACTIONS(1135),
    [sym_identifier] = ACTIONS(1137),
    [sym_comment] = ACTIONS(58),
  },
  [536] = {
    [anon_sym_GT] = ACTIONS(1393),
    [anon_sym_AMP] = ACTIONS(1393),
    [anon_sym_COMMA] = ACTIONS(1393),
    [sym_comment] = ACTIONS(58),
  },
  [537] = {
    [sym_class_or_interface_type] = STATE(679),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(243),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(58),
  },
  [538] = {
    [anon_sym_default] = ACTIONS(1131),
    [anon_sym_boolean] = ACTIONS(1131),
    [anon_sym_byte] = ACTIONS(1131),
    [anon_sym_short] = ACTIONS(1131),
    [anon_sym_int] = ACTIONS(1131),
    [anon_sym_long] = ACTIONS(1131),
    [anon_sym_char] = ACTIONS(1131),
    [anon_sym_float] = ACTIONS(1131),
    [anon_sym_double] = ACTIONS(1131),
    [anon_sym_AT] = ACTIONS(1129),
    [anon_sym_static] = ACTIONS(1131),
    [anon_sym_public] = ACTIONS(1131),
    [anon_sym_protected] = ACTIONS(1131),
    [anon_sym_private] = ACTIONS(1131),
    [anon_sym_abstract] = ACTIONS(1131),
    [anon_sym_final] = ACTIONS(1131),
    [anon_sym_strictfp] = ACTIONS(1131),
    [anon_sym_synchronized] = ACTIONS(1131),
    [anon_sym_native] = ACTIONS(1131),
    [sym_identifier] = ACTIONS(1133),
    [sym_comment] = ACTIONS(58),
  },
  [539] = {
    [anon_sym_default] = ACTIONS(1137),
    [anon_sym_boolean] = ACTIONS(1137),
    [anon_sym_byte] = ACTIONS(1137),
    [anon_sym_short] = ACTIONS(1137),
    [anon_sym_int] = ACTIONS(1137),
    [anon_sym_long] = ACTIONS(1137),
    [anon_sym_char] = ACTIONS(1137),
    [anon_sym_float] = ACTIONS(1137),
    [anon_sym_double] = ACTIONS(1137),
    [anon_sym_AT] = ACTIONS(1135),
    [anon_sym_static] = ACTIONS(1137),
    [anon_sym_public] = ACTIONS(1137),
    [anon_sym_protected] = ACTIONS(1137),
    [anon_sym_private] = ACTIONS(1137),
    [anon_sym_abstract] = ACTIONS(1137),
    [anon_sym_final] = ACTIONS(1137),
    [anon_sym_strictfp] = ACTIONS(1137),
    [anon_sym_synchronized] = ACTIONS(1137),
    [anon_sym_native] = ACTIONS(1137),
    [sym_identifier] = ACTIONS(1139),
    [sym_comment] = ACTIONS(58),
  },
  [540] = {
    [anon_sym_DOT] = ACTIONS(1297),
    [anon_sym_LBRACK] = ACTIONS(1295),
    [anon_sym_AT] = ACTIONS(1295),
    [anon_sym_this] = ACTIONS(1297),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1295),
    [sym_identifier] = ACTIONS(1395),
    [sym_comment] = ACTIONS(58),
  },
  [541] = {
    [anon_sym_LBRACK] = ACTIONS(1335),
    [anon_sym_AT] = ACTIONS(1335),
    [anon_sym_this] = ACTIONS(1337),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1335),
    [sym_identifier] = ACTIONS(1397),
    [sym_comment] = ACTIONS(58),
  },
  [542] = {
    [anon_sym_DOT] = ACTIONS(1339),
    [anon_sym_LBRACK] = ACTIONS(1341),
    [anon_sym_AT] = ACTIONS(1341),
    [anon_sym_this] = ACTIONS(1339),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1341),
    [sym_identifier] = ACTIONS(1399),
    [sym_comment] = ACTIONS(58),
  },
  [543] = {
    [anon_sym_RPAREN] = ACTIONS(1401),
    [anon_sym_COMMA] = ACTIONS(1401),
    [sym_comment] = ACTIONS(58),
  },
  [544] = {
    [sym_dims] = STATE(256),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(113),
    [aux_sym_dims_repeat1] = STATE(114),
    [sym__semicolon] = ACTIONS(511),
    [anon_sym_EQ] = ACTIONS(511),
    [anon_sym_LPAREN] = ACTIONS(1403),
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [545] = {
    [sym_variable_declarator_list] = STATE(635),
    [sym_variable_declarator] = STATE(465),
    [sym_variable_declarator_id] = STATE(254),
    [sym_identifier] = ACTIONS(1405),
    [sym_comment] = ACTIONS(58),
  },
  [546] = {
    [ts_builtin_sym_end] = ACTIONS(1407),
    [sym_decimal_integer_literal] = ACTIONS(1409),
    [sym_hex_integer_literal] = ACTIONS(1409),
    [sym_octal_integer_literal] = ACTIONS(1409),
    [sym_binary_integer_literal] = ACTIONS(1409),
    [sym_decimal_floating_point_literal] = ACTIONS(1409),
    [sym_hex_floating_point_literal] = ACTIONS(1411),
    [anon_sym_true] = ACTIONS(1409),
    [anon_sym_false] = ACTIONS(1409),
    [anon_sym_SQUOTE] = ACTIONS(1407),
    [sym_string_literal] = ACTIONS(1407),
    [sym_null_literal] = ACTIONS(1409),
    [anon_sym_LT] = ACTIONS(1407),
    [anon_sym_LPAREN] = ACTIONS(1407),
    [anon_sym_BANG] = ACTIONS(1407),
    [anon_sym_TILDE] = ACTIONS(1407),
    [anon_sym_PLUS_PLUS] = ACTIONS(1407),
    [anon_sym_DASH_DASH] = ACTIONS(1407),
    [anon_sym_default] = ACTIONS(1409),
    [anon_sym_boolean] = ACTIONS(1409),
    [anon_sym_byte] = ACTIONS(1409),
    [anon_sym_short] = ACTIONS(1409),
    [anon_sym_int] = ACTIONS(1409),
    [anon_sym_long] = ACTIONS(1409),
    [anon_sym_char] = ACTIONS(1409),
    [anon_sym_float] = ACTIONS(1409),
    [anon_sym_double] = ACTIONS(1409),
    [anon_sym_AT] = ACTIONS(1407),
    [anon_sym_open] = ACTIONS(1409),
    [anon_sym_module] = ACTIONS(1409),
    [anon_sym_static] = ACTIONS(1409),
    [anon_sym_package] = ACTIONS(1409),
    [anon_sym_import] = ACTIONS(1409),
    [anon_sym_class] = ACTIONS(1409),
    [anon_sym_public] = ACTIONS(1409),
    [anon_sym_protected] = ACTIONS(1409),
    [anon_sym_private] = ACTIONS(1409),
    [anon_sym_abstract] = ACTIONS(1409),
    [anon_sym_final] = ACTIONS(1409),
    [anon_sym_strictfp] = ACTIONS(1409),
    [anon_sym_synchronized] = ACTIONS(1409),
    [anon_sym_native] = ACTIONS(1409),
    [anon_sym_interface] = ACTIONS(1409),
    [sym_identifier] = ACTIONS(1411),
    [sym_comment] = ACTIONS(58),
  },
  [547] = {
    [anon_sym_RBRACE] = ACTIONS(1413),
    [anon_sym_default] = ACTIONS(1415),
    [anon_sym_boolean] = ACTIONS(1415),
    [anon_sym_byte] = ACTIONS(1415),
    [anon_sym_short] = ACTIONS(1415),
    [anon_sym_int] = ACTIONS(1415),
    [anon_sym_long] = ACTIONS(1415),
    [anon_sym_char] = ACTIONS(1415),
    [anon_sym_float] = ACTIONS(1415),
    [anon_sym_double] = ACTIONS(1415),
    [anon_sym_AT] = ACTIONS(1413),
    [anon_sym_static] = ACTIONS(1415),
    [anon_sym_class] = ACTIONS(1415),
    [anon_sym_public] = ACTIONS(1415),
    [anon_sym_protected] = ACTIONS(1415),
    [anon_sym_private] = ACTIONS(1415),
    [anon_sym_abstract] = ACTIONS(1415),
    [anon_sym_final] = ACTIONS(1415),
    [anon_sym_strictfp] = ACTIONS(1415),
    [anon_sym_synchronized] = ACTIONS(1415),
    [anon_sym_native] = ACTIONS(1415),
    [anon_sym_interface] = ACTIONS(1415),
    [sym_identifier] = ACTIONS(1417),
    [sym_comment] = ACTIONS(58),
  },
  [548] = {
    [sym__expression] = STATE(684),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [549] = {
    [sym__literal] = STATE(550),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(551),
    [sym__annotation] = STATE(550),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_element_value] = STATE(688),
    [sym_element_value_array_initializer] = STATE(550),
    [sym_conditional_expression] = STATE(550),
    [sym_conditional_or_expression] = STATE(689),
    [sym_conditional_and_expression] = STATE(690),
    [sym_inclusive_or_expression] = STATE(691),
    [sym_exclusive_or_expression] = STATE(692),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(693),
    [sym_equality_expression] = STATE(694),
    [sym_shift_expression] = STATE(695),
    [sym_additive_expression] = STATE(696),
    [sym_multiplicative_expression] = STATE(697),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1123),
    [anon_sym_false] = ACTIONS(1123),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_COMMA] = ACTIONS(1423),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [anon_sym_LBRACE] = ACTIONS(1127),
    [anon_sym_RBRACE] = ACTIONS(1427),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [550] = {
    [sym__semicolon] = ACTIONS(1429),
    [anon_sym_RPAREN] = ACTIONS(1429),
    [anon_sym_COMMA] = ACTIONS(1429),
    [anon_sym_RBRACE] = ACTIONS(1429),
    [sym_comment] = ACTIONS(58),
  },
  [551] = {
    [sym__semicolon] = ACTIONS(1431),
    [anon_sym_LT] = ACTIONS(1433),
    [anon_sym_EQ_EQ] = ACTIONS(1431),
    [anon_sym_BANG_EQ] = ACTIONS(1431),
    [anon_sym_AMP_AMP] = ACTIONS(1431),
    [anon_sym_PIPE_PIPE] = ACTIONS(1431),
    [anon_sym_PLUS] = ACTIONS(1431),
    [anon_sym_DASH] = ACTIONS(1431),
    [anon_sym_STAR] = ACTIONS(1431),
    [anon_sym_SLASH] = ACTIONS(1433),
    [anon_sym_PIPE] = ACTIONS(1433),
    [anon_sym_CARET] = ACTIONS(1431),
    [anon_sym_PERCENT] = ACTIONS(1431),
    [anon_sym_LT_LT] = ACTIONS(1431),
    [anon_sym_GT_GT] = ACTIONS(1433),
    [anon_sym_GT_GT_GT] = ACTIONS(1431),
    [anon_sym_RPAREN] = ACTIONS(1431),
    [anon_sym_COMMA] = ACTIONS(1431),
    [anon_sym_QMARK] = ACTIONS(1431),
    [anon_sym_RBRACE] = ACTIONS(1431),
    [sym_comment] = ACTIONS(58),
  },
  [552] = {
    [anon_sym_RPAREN] = ACTIONS(1435),
    [anon_sym_COMMA] = ACTIONS(1435),
    [sym_comment] = ACTIONS(58),
  },
  [553] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(1437),
    [anon_sym_RPAREN] = ACTIONS(1439),
    [anon_sym_COMMA] = ACTIONS(1439),
    [anon_sym_QMARK] = ACTIONS(1441),
    [sym_comment] = ACTIONS(58),
  },
  [554] = {
    [anon_sym_AMP_AMP] = ACTIONS(1443),
    [anon_sym_PIPE_PIPE] = ACTIONS(1445),
    [anon_sym_RPAREN] = ACTIONS(1445),
    [anon_sym_COMMA] = ACTIONS(1445),
    [anon_sym_QMARK] = ACTIONS(1445),
    [sym_comment] = ACTIONS(58),
  },
  [555] = {
    [anon_sym_AMP_AMP] = ACTIONS(1447),
    [anon_sym_PIPE_PIPE] = ACTIONS(1447),
    [anon_sym_PIPE] = ACTIONS(1449),
    [anon_sym_RPAREN] = ACTIONS(1447),
    [anon_sym_COMMA] = ACTIONS(1447),
    [anon_sym_QMARK] = ACTIONS(1447),
    [sym_comment] = ACTIONS(58),
  },
  [556] = {
    [anon_sym_AMP_AMP] = ACTIONS(1451),
    [anon_sym_PIPE_PIPE] = ACTIONS(1451),
    [anon_sym_PIPE] = ACTIONS(1453),
    [anon_sym_CARET] = ACTIONS(1455),
    [anon_sym_RPAREN] = ACTIONS(1451),
    [anon_sym_COMMA] = ACTIONS(1451),
    [anon_sym_QMARK] = ACTIONS(1451),
    [sym_comment] = ACTIONS(58),
  },
  [557] = {
    [sym__semicolon] = ACTIONS(1457),
    [anon_sym_AMP_AMP] = ACTIONS(1457),
    [anon_sym_PIPE_PIPE] = ACTIONS(1457),
    [anon_sym_PIPE] = ACTIONS(1459),
    [anon_sym_CARET] = ACTIONS(1457),
    [anon_sym_RPAREN] = ACTIONS(1457),
    [anon_sym_COMMA] = ACTIONS(1457),
    [anon_sym_QMARK] = ACTIONS(1457),
    [anon_sym_RBRACE] = ACTIONS(1457),
    [sym_comment] = ACTIONS(58),
  },
  [558] = {
    [anon_sym_LT] = ACTIONS(1461),
    [anon_sym_EQ_EQ] = ACTIONS(1463),
    [anon_sym_BANG_EQ] = ACTIONS(1463),
    [anon_sym_AMP_AMP] = ACTIONS(1465),
    [anon_sym_PIPE_PIPE] = ACTIONS(1465),
    [anon_sym_PIPE] = ACTIONS(1467),
    [anon_sym_CARET] = ACTIONS(1465),
    [anon_sym_RPAREN] = ACTIONS(1465),
    [anon_sym_COMMA] = ACTIONS(1465),
    [anon_sym_QMARK] = ACTIONS(1465),
    [sym_comment] = ACTIONS(58),
  },
  [559] = {
    [anon_sym_EQ_EQ] = ACTIONS(1469),
    [anon_sym_BANG_EQ] = ACTIONS(1469),
    [sym_comment] = ACTIONS(58),
  },
  [560] = {
    [anon_sym_LT] = ACTIONS(1471),
    [anon_sym_EQ_EQ] = ACTIONS(1473),
    [anon_sym_BANG_EQ] = ACTIONS(1473),
    [anon_sym_AMP_AMP] = ACTIONS(1473),
    [anon_sym_PIPE_PIPE] = ACTIONS(1473),
    [anon_sym_PIPE] = ACTIONS(1471),
    [anon_sym_CARET] = ACTIONS(1473),
    [anon_sym_LT_LT] = ACTIONS(1475),
    [anon_sym_GT_GT] = ACTIONS(1477),
    [anon_sym_GT_GT_GT] = ACTIONS(1475),
    [anon_sym_RPAREN] = ACTIONS(1473),
    [anon_sym_COMMA] = ACTIONS(1473),
    [anon_sym_QMARK] = ACTIONS(1473),
    [sym_comment] = ACTIONS(58),
  },
  [561] = {
    [anon_sym_LT] = ACTIONS(1479),
    [anon_sym_EQ_EQ] = ACTIONS(1481),
    [anon_sym_BANG_EQ] = ACTIONS(1481),
    [anon_sym_AMP_AMP] = ACTIONS(1481),
    [anon_sym_PIPE_PIPE] = ACTIONS(1481),
    [anon_sym_PLUS] = ACTIONS(1483),
    [anon_sym_DASH] = ACTIONS(1483),
    [anon_sym_PIPE] = ACTIONS(1479),
    [anon_sym_CARET] = ACTIONS(1481),
    [anon_sym_LT_LT] = ACTIONS(1481),
    [anon_sym_GT_GT] = ACTIONS(1479),
    [anon_sym_GT_GT_GT] = ACTIONS(1481),
    [anon_sym_RPAREN] = ACTIONS(1481),
    [anon_sym_COMMA] = ACTIONS(1481),
    [anon_sym_QMARK] = ACTIONS(1481),
    [sym_comment] = ACTIONS(58),
  },
  [562] = {
    [anon_sym_LT] = ACTIONS(1485),
    [anon_sym_EQ_EQ] = ACTIONS(1487),
    [anon_sym_BANG_EQ] = ACTIONS(1487),
    [anon_sym_AMP_AMP] = ACTIONS(1487),
    [anon_sym_PIPE_PIPE] = ACTIONS(1487),
    [anon_sym_PLUS] = ACTIONS(1487),
    [anon_sym_DASH] = ACTIONS(1487),
    [anon_sym_STAR] = ACTIONS(1489),
    [anon_sym_SLASH] = ACTIONS(1491),
    [anon_sym_PIPE] = ACTIONS(1485),
    [anon_sym_CARET] = ACTIONS(1487),
    [anon_sym_PERCENT] = ACTIONS(1489),
    [anon_sym_LT_LT] = ACTIONS(1487),
    [anon_sym_GT_GT] = ACTIONS(1485),
    [anon_sym_GT_GT_GT] = ACTIONS(1487),
    [anon_sym_RPAREN] = ACTIONS(1487),
    [anon_sym_COMMA] = ACTIONS(1487),
    [anon_sym_QMARK] = ACTIONS(1487),
    [sym_comment] = ACTIONS(58),
  },
  [563] = {
    [anon_sym_EQ] = ACTIONS(817),
    [sym_comment] = ACTIONS(58),
  },
  [564] = {
    [anon_sym_RPAREN] = ACTIONS(1493),
    [anon_sym_COMMA] = ACTIONS(1493),
    [sym_comment] = ACTIONS(58),
  },
  [565] = {
    [sym_element_value_pair] = STATE(708),
    [sym_identifier] = ACTIONS(1141),
    [sym_comment] = ACTIONS(58),
  },
  [566] = {
    [ts_builtin_sym_end] = ACTIONS(1495),
    [sym_decimal_integer_literal] = ACTIONS(1497),
    [sym_hex_integer_literal] = ACTIONS(1497),
    [sym_octal_integer_literal] = ACTIONS(1497),
    [sym_binary_integer_literal] = ACTIONS(1497),
    [sym_decimal_floating_point_literal] = ACTIONS(1497),
    [sym_hex_floating_point_literal] = ACTIONS(1499),
    [anon_sym_true] = ACTIONS(1497),
    [anon_sym_false] = ACTIONS(1497),
    [anon_sym_SQUOTE] = ACTIONS(1495),
    [sym_string_literal] = ACTIONS(1495),
    [sym_null_literal] = ACTIONS(1497),
    [anon_sym_LT] = ACTIONS(1495),
    [anon_sym_LPAREN] = ACTIONS(1495),
    [anon_sym_BANG] = ACTIONS(1495),
    [anon_sym_TILDE] = ACTIONS(1495),
    [anon_sym_PLUS_PLUS] = ACTIONS(1495),
    [anon_sym_DASH_DASH] = ACTIONS(1495),
    [anon_sym_default] = ACTIONS(1497),
    [anon_sym_boolean] = ACTIONS(1497),
    [anon_sym_byte] = ACTIONS(1497),
    [anon_sym_short] = ACTIONS(1497),
    [anon_sym_int] = ACTIONS(1497),
    [anon_sym_long] = ACTIONS(1497),
    [anon_sym_char] = ACTIONS(1497),
    [anon_sym_float] = ACTIONS(1497),
    [anon_sym_double] = ACTIONS(1497),
    [anon_sym_AT] = ACTIONS(1495),
    [anon_sym_open] = ACTIONS(1497),
    [anon_sym_module] = ACTIONS(1497),
    [anon_sym_static] = ACTIONS(1497),
    [anon_sym_package] = ACTIONS(1497),
    [anon_sym_import] = ACTIONS(1497),
    [anon_sym_class] = ACTIONS(1497),
    [anon_sym_public] = ACTIONS(1497),
    [anon_sym_protected] = ACTIONS(1497),
    [anon_sym_private] = ACTIONS(1497),
    [anon_sym_abstract] = ACTIONS(1497),
    [anon_sym_final] = ACTIONS(1497),
    [anon_sym_strictfp] = ACTIONS(1497),
    [anon_sym_synchronized] = ACTIONS(1497),
    [anon_sym_native] = ACTIONS(1497),
    [anon_sym_interface] = ACTIONS(1497),
    [sym_identifier] = ACTIONS(1499),
    [sym_comment] = ACTIONS(58),
  },
  [567] = {
    [anon_sym_RBRACE] = ACTIONS(1501),
    [anon_sym_requires] = ACTIONS(1501),
    [anon_sym_exports] = ACTIONS(1501),
    [anon_sym_opens] = ACTIONS(1501),
    [anon_sym_uses] = ACTIONS(1501),
    [anon_sym_provides] = ACTIONS(1501),
    [sym_comment] = ACTIONS(58),
  },
  [568] = {
    [sym_identifier] = ACTIONS(1503),
    [sym_comment] = ACTIONS(58),
  },
  [569] = {
    [anon_sym_transitive] = ACTIONS(1505),
    [anon_sym_static] = ACTIONS(1505),
    [sym_identifier] = ACTIONS(1507),
    [sym_comment] = ACTIONS(58),
  },
  [570] = {
    [sym__semicolon] = ACTIONS(1509),
    [anon_sym_DOT] = ACTIONS(1169),
    [sym_comment] = ACTIONS(58),
  },
  [571] = {
    [sym_module_name] = STATE(711),
    [sym_identifier] = ACTIONS(1511),
    [sym_comment] = ACTIONS(58),
  },
  [572] = {
    [sym_identifier] = ACTIONS(1513),
    [sym_comment] = ACTIONS(58),
  },
  [573] = {
    [sym_module_name] = STATE(713),
    [aux_sym_module_directive_repeat2] = STATE(714),
    [sym__semicolon] = ACTIONS(1509),
    [anon_sym_COMMA] = ACTIONS(1171),
    [sym_identifier] = ACTIONS(1511),
    [sym_comment] = ACTIONS(58),
  },
  [574] = {
    [aux_sym_module_directive_repeat2] = STATE(714),
    [sym__semicolon] = ACTIONS(1509),
    [anon_sym_COMMA] = ACTIONS(1171),
    [anon_sym_DOT] = ACTIONS(1169),
    [sym_comment] = ACTIONS(58),
  },
  [575] = {
    [sym__semicolon] = ACTIONS(1509),
    [anon_sym_COMMA] = ACTIONS(1515),
    [sym_comment] = ACTIONS(58),
  },
  [576] = {
    [sym_identifier] = ACTIONS(1517),
    [sym_comment] = ACTIONS(58),
  },
  [577] = {
    [sym_package_or_type_name] = STATE(717),
    [sym_identifier] = ACTIONS(357),
    [sym_comment] = ACTIONS(58),
  },
  [578] = {
    [ts_builtin_sym_end] = ACTIONS(1519),
    [sym_decimal_integer_literal] = ACTIONS(1521),
    [sym_hex_integer_literal] = ACTIONS(1521),
    [sym_octal_integer_literal] = ACTIONS(1521),
    [sym_binary_integer_literal] = ACTIONS(1521),
    [sym_decimal_floating_point_literal] = ACTIONS(1521),
    [sym_hex_floating_point_literal] = ACTIONS(1523),
    [anon_sym_true] = ACTIONS(1521),
    [anon_sym_false] = ACTIONS(1521),
    [anon_sym_SQUOTE] = ACTIONS(1519),
    [sym_string_literal] = ACTIONS(1519),
    [sym_null_literal] = ACTIONS(1521),
    [anon_sym_LT] = ACTIONS(1519),
    [anon_sym_LPAREN] = ACTIONS(1519),
    [anon_sym_BANG] = ACTIONS(1519),
    [anon_sym_TILDE] = ACTIONS(1519),
    [anon_sym_PLUS_PLUS] = ACTIONS(1519),
    [anon_sym_DASH_DASH] = ACTIONS(1519),
    [anon_sym_default] = ACTIONS(1521),
    [anon_sym_boolean] = ACTIONS(1521),
    [anon_sym_byte] = ACTIONS(1521),
    [anon_sym_short] = ACTIONS(1521),
    [anon_sym_int] = ACTIONS(1521),
    [anon_sym_long] = ACTIONS(1521),
    [anon_sym_char] = ACTIONS(1521),
    [anon_sym_float] = ACTIONS(1521),
    [anon_sym_double] = ACTIONS(1521),
    [anon_sym_AT] = ACTIONS(1519),
    [anon_sym_open] = ACTIONS(1521),
    [anon_sym_module] = ACTIONS(1521),
    [anon_sym_static] = ACTIONS(1521),
    [anon_sym_package] = ACTIONS(1521),
    [anon_sym_import] = ACTIONS(1521),
    [anon_sym_class] = ACTIONS(1521),
    [anon_sym_public] = ACTIONS(1521),
    [anon_sym_protected] = ACTIONS(1521),
    [anon_sym_private] = ACTIONS(1521),
    [anon_sym_abstract] = ACTIONS(1521),
    [anon_sym_final] = ACTIONS(1521),
    [anon_sym_strictfp] = ACTIONS(1521),
    [anon_sym_synchronized] = ACTIONS(1521),
    [anon_sym_native] = ACTIONS(1521),
    [anon_sym_interface] = ACTIONS(1521),
    [sym_identifier] = ACTIONS(1523),
    [sym_comment] = ACTIONS(58),
  },
  [579] = {
    [ts_builtin_sym_end] = ACTIONS(1525),
    [sym_decimal_integer_literal] = ACTIONS(1527),
    [sym_hex_integer_literal] = ACTIONS(1527),
    [sym_octal_integer_literal] = ACTIONS(1527),
    [sym_binary_integer_literal] = ACTIONS(1527),
    [sym_decimal_floating_point_literal] = ACTIONS(1527),
    [sym_hex_floating_point_literal] = ACTIONS(1529),
    [anon_sym_true] = ACTIONS(1527),
    [anon_sym_false] = ACTIONS(1527),
    [anon_sym_SQUOTE] = ACTIONS(1525),
    [sym_string_literal] = ACTIONS(1525),
    [sym_null_literal] = ACTIONS(1527),
    [anon_sym_LT] = ACTIONS(1525),
    [anon_sym_LPAREN] = ACTIONS(1525),
    [anon_sym_BANG] = ACTIONS(1525),
    [anon_sym_TILDE] = ACTIONS(1525),
    [anon_sym_PLUS_PLUS] = ACTIONS(1525),
    [anon_sym_DASH_DASH] = ACTIONS(1525),
    [anon_sym_default] = ACTIONS(1527),
    [anon_sym_boolean] = ACTIONS(1527),
    [anon_sym_byte] = ACTIONS(1527),
    [anon_sym_short] = ACTIONS(1527),
    [anon_sym_int] = ACTIONS(1527),
    [anon_sym_long] = ACTIONS(1527),
    [anon_sym_char] = ACTIONS(1527),
    [anon_sym_float] = ACTIONS(1527),
    [anon_sym_double] = ACTIONS(1527),
    [anon_sym_AT] = ACTIONS(1525),
    [anon_sym_open] = ACTIONS(1527),
    [anon_sym_module] = ACTIONS(1527),
    [anon_sym_static] = ACTIONS(1527),
    [anon_sym_package] = ACTIONS(1527),
    [anon_sym_import] = ACTIONS(1527),
    [anon_sym_class] = ACTIONS(1527),
    [anon_sym_public] = ACTIONS(1527),
    [anon_sym_protected] = ACTIONS(1527),
    [anon_sym_private] = ACTIONS(1527),
    [anon_sym_abstract] = ACTIONS(1527),
    [anon_sym_final] = ACTIONS(1527),
    [anon_sym_strictfp] = ACTIONS(1527),
    [anon_sym_synchronized] = ACTIONS(1527),
    [anon_sym_native] = ACTIONS(1527),
    [anon_sym_interface] = ACTIONS(1527),
    [sym_identifier] = ACTIONS(1529),
    [sym_comment] = ACTIONS(58),
  },
  [580] = {
    [sym__semicolon] = ACTIONS(1037),
    [anon_sym_LT] = ACTIONS(1037),
    [anon_sym_LBRACE] = ACTIONS(1037),
    [anon_sym_RBRACE] = ACTIONS(1037),
    [anon_sym_default] = ACTIONS(1039),
    [anon_sym_boolean] = ACTIONS(1039),
    [anon_sym_byte] = ACTIONS(1039),
    [anon_sym_short] = ACTIONS(1039),
    [anon_sym_int] = ACTIONS(1039),
    [anon_sym_long] = ACTIONS(1039),
    [anon_sym_char] = ACTIONS(1039),
    [anon_sym_float] = ACTIONS(1039),
    [anon_sym_double] = ACTIONS(1039),
    [anon_sym_AT] = ACTIONS(1037),
    [anon_sym_static] = ACTIONS(1039),
    [anon_sym_class] = ACTIONS(1039),
    [anon_sym_public] = ACTIONS(1039),
    [anon_sym_protected] = ACTIONS(1039),
    [anon_sym_private] = ACTIONS(1039),
    [anon_sym_abstract] = ACTIONS(1039),
    [anon_sym_final] = ACTIONS(1039),
    [anon_sym_strictfp] = ACTIONS(1039),
    [anon_sym_synchronized] = ACTIONS(1039),
    [anon_sym_native] = ACTIONS(1039),
    [anon_sym_interface] = ACTIONS(1039),
    [sym_identifier] = ACTIONS(1041),
    [sym_comment] = ACTIONS(58),
  },
  [581] = {
    [sym_annotation_type_body] = STATE(719),
    [anon_sym_LBRACE] = ACTIONS(1531),
    [sym_comment] = ACTIONS(58),
  },
  [582] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(126),
    [sym_marker_annotation] = STATE(126),
    [sym_single_element_annotation] = STATE(126),
    [sym_class_declaration] = STATE(292),
    [sym_normal_class_declaration] = STATE(299),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(300),
    [sym_class_body_declaration] = STATE(301),
    [sym_constructor_declaration] = STATE(302),
    [sym_constructor_declarator] = STATE(303),
    [sym_class_member_declaration] = STATE(302),
    [sym_interface_declaration] = STATE(292),
    [sym_annotation_type_declaration] = STATE(304),
    [sym_normal_interface_declaration] = STATE(304),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(305),
    [sym_block] = STATE(302),
    [sym_method_declaration] = STATE(292),
    [aux_sym_normal_class_declaration_repeat1] = STATE(306),
    [aux_sym_class_body_repeat1] = STATE(721),
    [sym__semicolon] = ACTIONS(581),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(1533),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(593),
    [sym_comment] = ACTIONS(58),
  },
  [583] = {
    [sym_superclass] = STATE(722),
    [sym_super_interfaces] = STATE(723),
    [sym_class_body] = STATE(724),
    [anon_sym_LBRACE] = ACTIONS(1197),
    [anon_sym_extends] = ACTIONS(367),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [584] = {
    [sym_super_interfaces] = STATE(723),
    [sym_class_body] = STATE(724),
    [anon_sym_LBRACE] = ACTIONS(1197),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [585] = {
    [sym_class_body] = STATE(724),
    [anon_sym_LBRACE] = ACTIONS(1197),
    [sym_comment] = ACTIONS(58),
  },
  [586] = {
    [sym__semicolon] = ACTIONS(597),
    [anon_sym_LT] = ACTIONS(597),
    [anon_sym_LBRACE] = ACTIONS(597),
    [anon_sym_RBRACE] = ACTIONS(597),
    [anon_sym_default] = ACTIONS(599),
    [anon_sym_boolean] = ACTIONS(599),
    [anon_sym_byte] = ACTIONS(599),
    [anon_sym_short] = ACTIONS(599),
    [anon_sym_int] = ACTIONS(599),
    [anon_sym_long] = ACTIONS(599),
    [anon_sym_char] = ACTIONS(599),
    [anon_sym_float] = ACTIONS(599),
    [anon_sym_double] = ACTIONS(599),
    [anon_sym_AT] = ACTIONS(597),
    [anon_sym_static] = ACTIONS(599),
    [anon_sym_class] = ACTIONS(599),
    [anon_sym_public] = ACTIONS(599),
    [anon_sym_protected] = ACTIONS(599),
    [anon_sym_private] = ACTIONS(599),
    [anon_sym_abstract] = ACTIONS(599),
    [anon_sym_final] = ACTIONS(599),
    [anon_sym_strictfp] = ACTIONS(599),
    [anon_sym_synchronized] = ACTIONS(599),
    [anon_sym_native] = ACTIONS(599),
    [anon_sym_interface] = ACTIONS(599),
    [sym_identifier] = ACTIONS(601),
    [sym_comment] = ACTIONS(58),
  },
  [587] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(126),
    [sym_marker_annotation] = STATE(126),
    [sym_single_element_annotation] = STATE(126),
    [sym_class_declaration] = STATE(316),
    [sym_normal_class_declaration] = STATE(299),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(37),
    [sym_interface_declaration] = STATE(316),
    [sym_annotation_type_declaration] = STATE(304),
    [sym_normal_interface_declaration] = STATE(304),
    [sym_interface_member_declaration] = STATE(318),
    [sym_constant_declaration] = STATE(316),
    [sym_unann_type] = STATE(319),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(305),
    [sym_method_declaration] = STATE(316),
    [aux_sym_normal_class_declaration_repeat1] = STATE(320),
    [aux_sym_interface_body_repeat1] = STATE(726),
    [sym__semicolon] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(1535),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [588] = {
    [sym_extends_interfaces] = STATE(727),
    [sym_interface_body] = STATE(728),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [anon_sym_extends] = ACTIONS(373),
    [sym_comment] = ACTIONS(58),
  },
  [589] = {
    [sym_interface_body] = STATE(728),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [sym_comment] = ACTIONS(58),
  },
  [590] = {
    [sym__semicolon] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(607),
    [anon_sym_LBRACE] = ACTIONS(607),
    [anon_sym_RBRACE] = ACTIONS(607),
    [anon_sym_default] = ACTIONS(609),
    [anon_sym_boolean] = ACTIONS(609),
    [anon_sym_byte] = ACTIONS(609),
    [anon_sym_short] = ACTIONS(609),
    [anon_sym_int] = ACTIONS(609),
    [anon_sym_long] = ACTIONS(609),
    [anon_sym_char] = ACTIONS(609),
    [anon_sym_float] = ACTIONS(609),
    [anon_sym_double] = ACTIONS(609),
    [anon_sym_AT] = ACTIONS(607),
    [anon_sym_static] = ACTIONS(609),
    [anon_sym_class] = ACTIONS(609),
    [anon_sym_public] = ACTIONS(609),
    [anon_sym_protected] = ACTIONS(609),
    [anon_sym_private] = ACTIONS(609),
    [anon_sym_abstract] = ACTIONS(609),
    [anon_sym_final] = ACTIONS(609),
    [anon_sym_strictfp] = ACTIONS(609),
    [anon_sym_synchronized] = ACTIONS(609),
    [anon_sym_native] = ACTIONS(609),
    [anon_sym_interface] = ACTIONS(609),
    [sym_identifier] = ACTIONS(611),
    [sym_comment] = ACTIONS(58),
  },
  [591] = {
    [anon_sym_RPAREN] = ACTIONS(1537),
    [sym_comment] = ACTIONS(58),
  },
  [592] = {
    [sym_integral_type] = STATE(59),
    [sym_floating_point_type] = STATE(59),
    [sym__annotation] = STATE(65),
    [sym_normal_annotation] = STATE(66),
    [sym_marker_annotation] = STATE(66),
    [sym_single_element_annotation] = STATE(66),
    [sym_modifier] = STATE(67),
    [sym_unann_type] = STATE(68),
    [sym_unann_primitive_type] = STATE(69),
    [sym_unann_class_or_interface_type] = STATE(70),
    [sym_unann_array_type] = STATE(71),
    [sym__formal_parameter_list] = STATE(730),
    [sym_formal_parameter] = STATE(72),
    [sym_receiver_parameter] = STATE(73),
    [sym_last_formal_parameter] = STATE(74),
    [aux_sym_class_or_interface_type_repeat1] = STATE(75),
    [aux_sym_normal_class_declaration_repeat1] = STATE(76),
    [anon_sym_default] = ACTIONS(80),
    [anon_sym_boolean] = ACTIONS(82),
    [anon_sym_byte] = ACTIONS(84),
    [anon_sym_short] = ACTIONS(84),
    [anon_sym_int] = ACTIONS(84),
    [anon_sym_long] = ACTIONS(84),
    [anon_sym_char] = ACTIONS(84),
    [anon_sym_float] = ACTIONS(86),
    [anon_sym_double] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(88),
    [anon_sym_static] = ACTIONS(80),
    [anon_sym_public] = ACTIONS(80),
    [anon_sym_protected] = ACTIONS(80),
    [anon_sym_private] = ACTIONS(80),
    [anon_sym_abstract] = ACTIONS(80),
    [anon_sym_final] = ACTIONS(80),
    [anon_sym_strictfp] = ACTIONS(80),
    [anon_sym_synchronized] = ACTIONS(80),
    [anon_sym_native] = ACTIONS(80),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(58),
  },
  [593] = {
    [sym__expression] = STATE(731),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1027),
    [anon_sym_TILDE] = ACTIONS(1027),
    [anon_sym_PLUS_PLUS] = ACTIONS(1029),
    [anon_sym_DASH_DASH] = ACTIONS(1029),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [594] = {
    [sym__semicolon] = ACTIONS(1539),
    [anon_sym_LT] = ACTIONS(1539),
    [anon_sym_LBRACE] = ACTIONS(1539),
    [anon_sym_RBRACE] = ACTIONS(1539),
    [anon_sym_default] = ACTIONS(1541),
    [anon_sym_boolean] = ACTIONS(1541),
    [anon_sym_byte] = ACTIONS(1541),
    [anon_sym_short] = ACTIONS(1541),
    [anon_sym_int] = ACTIONS(1541),
    [anon_sym_long] = ACTIONS(1541),
    [anon_sym_char] = ACTIONS(1541),
    [anon_sym_float] = ACTIONS(1541),
    [anon_sym_double] = ACTIONS(1541),
    [anon_sym_AT] = ACTIONS(1539),
    [anon_sym_static] = ACTIONS(1541),
    [anon_sym_class] = ACTIONS(1541),
    [anon_sym_public] = ACTIONS(1541),
    [anon_sym_protected] = ACTIONS(1541),
    [anon_sym_private] = ACTIONS(1541),
    [anon_sym_abstract] = ACTIONS(1541),
    [anon_sym_final] = ACTIONS(1541),
    [anon_sym_strictfp] = ACTIONS(1541),
    [anon_sym_synchronized] = ACTIONS(1541),
    [anon_sym_native] = ACTIONS(1541),
    [anon_sym_interface] = ACTIONS(1541),
    [sym_identifier] = ACTIONS(1543),
    [sym_comment] = ACTIONS(58),
  },
  [595] = {
    [aux_sym_class_literal_repeat1] = STATE(734),
    [anon_sym_DOT] = ACTIONS(1545),
    [anon_sym_LBRACK] = ACTIONS(1547),
    [anon_sym_AT] = ACTIONS(613),
    [sym_comment] = ACTIONS(58),
  },
  [596] = {
    [anon_sym_DOT] = ACTIONS(1545),
    [anon_sym_LBRACK] = ACTIONS(613),
    [anon_sym_AT] = ACTIONS(613),
    [sym_comment] = ACTIONS(58),
  },
  [597] = {
    [anon_sym_LPAREN] = ACTIONS(1550),
    [anon_sym_DOT] = ACTIONS(1552),
    [anon_sym_LBRACK] = ACTIONS(1552),
    [anon_sym_COLON_COLON] = ACTIONS(1552),
    [sym_comment] = ACTIONS(58),
  },
  [598] = {
    [anon_sym_LPAREN] = ACTIONS(1550),
    [anon_sym_DOT] = ACTIONS(1554),
    [anon_sym_COLON_COLON] = ACTIONS(1556),
    [sym_comment] = ACTIONS(58),
  },
  [599] = {
    [sym_type_arguments] = STATE(739),
    [sym_class_or_interface_type] = STATE(740),
    [sym_primitive_type] = STATE(741),
    [sym_integral_type] = STATE(187),
    [sym_floating_point_type] = STATE(187),
    [sym__annotation] = STATE(104),
    [sym_normal_annotation] = STATE(105),
    [sym_marker_annotation] = STATE(105),
    [sym_single_element_annotation] = STATE(105),
    [sym_class_or_interface_type_to_instantiate] = STATE(742),
    [aux_sym_class_or_interface_type_repeat1] = STATE(743),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_boolean] = ACTIONS(375),
    [anon_sym_void] = ACTIONS(375),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(1558),
    [sym_comment] = ACTIONS(58),
  },
  [600] = {
    [sym_type_arguments] = STATE(326),
    [aux_sym_class_or_interface_type_repeat2] = STATE(327),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(1560),
    [anon_sym_DOT] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(615),
    [anon_sym_COLON_COLON] = ACTIONS(615),
    [sym_comment] = ACTIONS(58),
  },
  [601] = {
    [anon_sym_DOT] = ACTIONS(1552),
    [anon_sym_LBRACK] = ACTIONS(1552),
    [anon_sym_COLON_COLON] = ACTIONS(1552),
    [sym_comment] = ACTIONS(58),
  },
  [602] = {
    [anon_sym_this] = ACTIONS(1562),
    [anon_sym_super] = ACTIONS(1562),
    [sym_comment] = ACTIONS(58),
  },
  [603] = {
    [sym_dims] = STATE(747),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_dims_exprs] = STATE(748),
    [sym_dims_expr] = STATE(749),
    [aux_sym_class_or_interface_type_repeat1] = STATE(750),
    [aux_sym_dims_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(1564),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_COLON_COLON] = ACTIONS(1566),
    [sym_comment] = ACTIONS(58),
  },
  [604] = {
    [sym_dims] = STATE(747),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(113),
    [aux_sym_dims_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [605] = {
    [anon_sym_default] = ACTIONS(96),
    [anon_sym_boolean] = ACTIONS(299),
    [anon_sym_byte] = ACTIONS(299),
    [anon_sym_short] = ACTIONS(299),
    [anon_sym_int] = ACTIONS(299),
    [anon_sym_long] = ACTIONS(299),
    [anon_sym_char] = ACTIONS(299),
    [anon_sym_float] = ACTIONS(299),
    [anon_sym_double] = ACTIONS(299),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_static] = ACTIONS(96),
    [anon_sym_class] = ACTIONS(96),
    [anon_sym_public] = ACTIONS(96),
    [anon_sym_protected] = ACTIONS(96),
    [anon_sym_private] = ACTIONS(96),
    [anon_sym_abstract] = ACTIONS(96),
    [anon_sym_final] = ACTIONS(96),
    [anon_sym_strictfp] = ACTIONS(96),
    [anon_sym_synchronized] = ACTIONS(96),
    [anon_sym_native] = ACTIONS(96),
    [sym_identifier] = ACTIONS(302),
    [sym_comment] = ACTIONS(58),
  },
  [606] = {
    [aux_sym_class_literal_repeat1] = STATE(734),
    [anon_sym_DOT] = ACTIONS(1568),
    [anon_sym_LBRACK] = ACTIONS(1570),
    [sym_comment] = ACTIONS(58),
  },
  [607] = {
    [sym_statement] = STATE(223),
    [sym_if_then_statement] = STATE(224),
    [sym_if_then_else_statement] = STATE(224),
    [sym__annotation] = STATE(219),
    [sym_normal_annotation] = STATE(225),
    [sym_marker_annotation] = STATE(225),
    [sym_single_element_annotation] = STATE(225),
    [sym_class_declaration] = STATE(223),
    [sym_normal_class_declaration] = STATE(226),
    [sym_modifier] = STATE(227),
    [sym_block_statements] = STATE(753),
    [sym_block_statement] = STATE(229),
    [sym_local_variable_declaration_statement] = STATE(223),
    [sym_local_variable_declaration] = STATE(230),
    [aux_sym_normal_class_declaration_repeat1] = STATE(231),
    [anon_sym_RBRACE] = ACTIONS(1572),
    [anon_sym_default] = ACTIONS(429),
    [anon_sym_if] = ACTIONS(431),
    [anon_sym_AT] = ACTIONS(433),
    [anon_sym_static] = ACTIONS(429),
    [anon_sym_class] = ACTIONS(435),
    [anon_sym_public] = ACTIONS(429),
    [anon_sym_protected] = ACTIONS(429),
    [anon_sym_private] = ACTIONS(429),
    [anon_sym_abstract] = ACTIONS(429),
    [anon_sym_final] = ACTIONS(429),
    [anon_sym_strictfp] = ACTIONS(429),
    [anon_sym_synchronized] = ACTIONS(429),
    [anon_sym_native] = ACTIONS(429),
    [sym_comment] = ACTIONS(58),
  },
  [608] = {
    [anon_sym_DOT] = ACTIONS(1574),
    [anon_sym_LBRACK] = ACTIONS(1576),
    [anon_sym_COLON_COLON] = ACTIONS(1556),
    [sym_comment] = ACTIONS(58),
  },
  [609] = {
    [anon_sym_DOT] = ACTIONS(1578),
    [anon_sym_COLON_COLON] = ACTIONS(1556),
    [sym_comment] = ACTIONS(58),
  },
  [610] = {
    [anon_sym_DOT] = ACTIONS(1580),
    [anon_sym_COLON_COLON] = ACTIONS(1580),
    [sym_comment] = ACTIONS(58),
  },
  [611] = {
    [anon_sym_DOT] = ACTIONS(1580),
    [anon_sym_LBRACK] = ACTIONS(1576),
    [anon_sym_COLON_COLON] = ACTIONS(1580),
    [sym_comment] = ACTIONS(58),
  },
  [612] = {
    [anon_sym_DOT] = ACTIONS(1582),
    [anon_sym_LBRACK] = ACTIONS(1582),
    [anon_sym_COLON_COLON] = ACTIONS(1582),
    [sym_comment] = ACTIONS(58),
  },
  [613] = {
    [anon_sym_COLON_COLON] = ACTIONS(1584),
    [sym_comment] = ACTIONS(58),
  },
  [614] = {
    [anon_sym_RBRACE] = ACTIONS(1572),
    [sym_comment] = ACTIONS(58),
  },
  [615] = {
    [anon_sym_LPAREN] = ACTIONS(1586),
    [sym_comment] = ACTIONS(58),
  },
  [616] = {
    [sym_integral_type] = STATE(332),
    [sym_floating_point_type] = STATE(332),
    [sym__annotation] = STATE(158),
    [sym_normal_annotation] = STATE(105),
    [sym_marker_annotation] = STATE(105),
    [sym_single_element_annotation] = STATE(105),
    [anon_sym_boolean] = ACTIONS(627),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(629),
    [sym_comment] = ACTIONS(58),
  },
  [617] = {
    [sym__semicolon] = ACTIONS(1588),
    [anon_sym_LT] = ACTIONS(1588),
    [anon_sym_LBRACE] = ACTIONS(1588),
    [anon_sym_RBRACE] = ACTIONS(1588),
    [anon_sym_default] = ACTIONS(1590),
    [anon_sym_boolean] = ACTIONS(1590),
    [anon_sym_byte] = ACTIONS(1590),
    [anon_sym_short] = ACTIONS(1590),
    [anon_sym_int] = ACTIONS(1590),
    [anon_sym_long] = ACTIONS(1590),
    [anon_sym_char] = ACTIONS(1590),
    [anon_sym_float] = ACTIONS(1590),
    [anon_sym_double] = ACTIONS(1590),
    [anon_sym_AT] = ACTIONS(1588),
    [anon_sym_static] = ACTIONS(1590),
    [anon_sym_class] = ACTIONS(1590),
    [anon_sym_public] = ACTIONS(1590),
    [anon_sym_protected] = ACTIONS(1590),
    [anon_sym_private] = ACTIONS(1590),
    [anon_sym_abstract] = ACTIONS(1590),
    [anon_sym_final] = ACTIONS(1590),
    [anon_sym_strictfp] = ACTIONS(1590),
    [anon_sym_synchronized] = ACTIONS(1590),
    [anon_sym_native] = ACTIONS(1590),
    [anon_sym_interface] = ACTIONS(1590),
    [sym_identifier] = ACTIONS(1592),
    [sym_comment] = ACTIONS(58),
  },
  [618] = {
    [sym_identifier] = ACTIONS(1594),
    [sym_comment] = ACTIONS(58),
  },
  [619] = {
    [sym_type_parameters] = STATE(760),
    [sym_superclass] = STATE(722),
    [sym_super_interfaces] = STATE(723),
    [sym_class_body] = STATE(724),
    [anon_sym_LT] = ACTIONS(363),
    [anon_sym_LBRACE] = ACTIONS(1197),
    [anon_sym_extends] = ACTIONS(367),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [620] = {
    [sym_type_parameters] = STATE(761),
    [sym_extends_interfaces] = STATE(727),
    [sym_interface_body] = STATE(728),
    [anon_sym_LT] = ACTIONS(363),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [anon_sym_extends] = ACTIONS(373),
    [sym_comment] = ACTIONS(58),
  },
  [621] = {
    [sym_constructor_body] = STATE(762),
    [anon_sym_LBRACE] = ACTIONS(905),
    [sym_comment] = ACTIONS(58),
  },
  [622] = {
    [sym__semicolon] = ACTIONS(737),
    [anon_sym_LT] = ACTIONS(737),
    [anon_sym_LBRACE] = ACTIONS(737),
    [anon_sym_RBRACE] = ACTIONS(737),
    [anon_sym_default] = ACTIONS(739),
    [anon_sym_boolean] = ACTIONS(739),
    [anon_sym_byte] = ACTIONS(739),
    [anon_sym_short] = ACTIONS(739),
    [anon_sym_int] = ACTIONS(739),
    [anon_sym_long] = ACTIONS(739),
    [anon_sym_char] = ACTIONS(739),
    [anon_sym_float] = ACTIONS(739),
    [anon_sym_double] = ACTIONS(739),
    [anon_sym_AT] = ACTIONS(737),
    [anon_sym_static] = ACTIONS(739),
    [anon_sym_class] = ACTIONS(739),
    [anon_sym_public] = ACTIONS(739),
    [anon_sym_protected] = ACTIONS(739),
    [anon_sym_private] = ACTIONS(739),
    [anon_sym_abstract] = ACTIONS(739),
    [anon_sym_final] = ACTIONS(739),
    [anon_sym_strictfp] = ACTIONS(739),
    [anon_sym_synchronized] = ACTIONS(739),
    [anon_sym_native] = ACTIONS(739),
    [anon_sym_interface] = ACTIONS(739),
    [sym_identifier] = ACTIONS(741),
    [sym_comment] = ACTIONS(58),
  },
  [623] = {
    [aux_sym_type_arguments_repeat1] = STATE(764),
    [anon_sym_GT] = ACTIONS(1596),
    [anon_sym_COMMA] = ACTIONS(621),
    [sym_comment] = ACTIONS(58),
  },
  [624] = {
    [sym_type_arguments] = STATE(636),
    [anon_sym_LT] = ACTIONS(917),
    [anon_sym_LBRACE] = ACTIONS(1287),
    [anon_sym_DOT] = ACTIONS(1287),
    [anon_sym_implements] = ACTIONS(1287),
    [sym_comment] = ACTIONS(58),
  },
  [625] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1598),
    [sym_comment] = ACTIONS(58),
  },
  [626] = {
    [anon_sym_LBRACE] = ACTIONS(1291),
    [anon_sym_DOT] = ACTIONS(1251),
    [anon_sym_implements] = ACTIONS(1291),
    [sym_comment] = ACTIONS(58),
  },
  [627] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(766),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1598),
    [sym_comment] = ACTIONS(58),
  },
  [628] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(767),
    [anon_sym_LBRACE] = ACTIONS(1291),
    [anon_sym_DOT] = ACTIONS(919),
    [anon_sym_implements] = ACTIONS(1291),
    [sym_comment] = ACTIONS(58),
  },
  [629] = {
    [anon_sym_COMMA] = ACTIONS(1600),
    [anon_sym_LBRACE] = ACTIONS(1600),
    [sym_comment] = ACTIONS(58),
  },
  [630] = {
    [sym_class_or_interface_type] = STATE(768),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(243),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(58),
  },
  [631] = {
    [ts_builtin_sym_end] = ACTIONS(1602),
    [sym_decimal_integer_literal] = ACTIONS(1604),
    [sym_hex_integer_literal] = ACTIONS(1604),
    [sym_octal_integer_literal] = ACTIONS(1604),
    [sym_binary_integer_literal] = ACTIONS(1604),
    [sym_decimal_floating_point_literal] = ACTIONS(1604),
    [sym_hex_floating_point_literal] = ACTIONS(1606),
    [anon_sym_true] = ACTIONS(1604),
    [anon_sym_false] = ACTIONS(1604),
    [anon_sym_SQUOTE] = ACTIONS(1602),
    [sym_string_literal] = ACTIONS(1602),
    [sym_null_literal] = ACTIONS(1604),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LPAREN] = ACTIONS(1602),
    [anon_sym_BANG] = ACTIONS(1602),
    [anon_sym_TILDE] = ACTIONS(1602),
    [anon_sym_PLUS_PLUS] = ACTIONS(1602),
    [anon_sym_DASH_DASH] = ACTIONS(1602),
    [anon_sym_default] = ACTIONS(1604),
    [anon_sym_boolean] = ACTIONS(1604),
    [anon_sym_byte] = ACTIONS(1604),
    [anon_sym_short] = ACTIONS(1604),
    [anon_sym_int] = ACTIONS(1604),
    [anon_sym_long] = ACTIONS(1604),
    [anon_sym_char] = ACTIONS(1604),
    [anon_sym_float] = ACTIONS(1604),
    [anon_sym_double] = ACTIONS(1604),
    [anon_sym_AT] = ACTIONS(1602),
    [anon_sym_open] = ACTIONS(1604),
    [anon_sym_module] = ACTIONS(1604),
    [anon_sym_static] = ACTIONS(1604),
    [anon_sym_package] = ACTIONS(1604),
    [anon_sym_import] = ACTIONS(1604),
    [anon_sym_class] = ACTIONS(1604),
    [anon_sym_public] = ACTIONS(1604),
    [anon_sym_protected] = ACTIONS(1604),
    [anon_sym_private] = ACTIONS(1604),
    [anon_sym_abstract] = ACTIONS(1604),
    [anon_sym_final] = ACTIONS(1604),
    [anon_sym_strictfp] = ACTIONS(1604),
    [anon_sym_synchronized] = ACTIONS(1604),
    [anon_sym_native] = ACTIONS(1604),
    [anon_sym_interface] = ACTIONS(1604),
    [sym_identifier] = ACTIONS(1606),
    [sym_comment] = ACTIONS(58),
  },
  [632] = {
    [sym__semicolon] = ACTIONS(1608),
    [anon_sym_LT] = ACTIONS(1608),
    [anon_sym_RBRACE] = ACTIONS(1608),
    [anon_sym_default] = ACTIONS(1610),
    [anon_sym_boolean] = ACTIONS(1610),
    [anon_sym_byte] = ACTIONS(1610),
    [anon_sym_short] = ACTIONS(1610),
    [anon_sym_int] = ACTIONS(1610),
    [anon_sym_long] = ACTIONS(1610),
    [anon_sym_char] = ACTIONS(1610),
    [anon_sym_float] = ACTIONS(1610),
    [anon_sym_double] = ACTIONS(1610),
    [anon_sym_AT] = ACTIONS(1608),
    [anon_sym_static] = ACTIONS(1610),
    [anon_sym_class] = ACTIONS(1610),
    [anon_sym_public] = ACTIONS(1610),
    [anon_sym_protected] = ACTIONS(1610),
    [anon_sym_private] = ACTIONS(1610),
    [anon_sym_abstract] = ACTIONS(1610),
    [anon_sym_final] = ACTIONS(1610),
    [anon_sym_strictfp] = ACTIONS(1610),
    [anon_sym_synchronized] = ACTIONS(1610),
    [anon_sym_native] = ACTIONS(1610),
    [anon_sym_interface] = ACTIONS(1610),
    [sym_identifier] = ACTIONS(1612),
    [sym_comment] = ACTIONS(58),
  },
  [633] = {
    [sym_variable_declarator] = STATE(769),
    [sym_variable_declarator_id] = STATE(254),
    [sym_identifier] = ACTIONS(509),
    [sym_comment] = ACTIONS(58),
  },
  [634] = {
    [sym__semicolon] = ACTIONS(1614),
    [anon_sym_COMMA] = ACTIONS(1616),
    [sym_comment] = ACTIONS(58),
  },
  [635] = {
    [sym__semicolon] = ACTIONS(1618),
    [sym_comment] = ACTIONS(58),
  },
  [636] = {
    [anon_sym_GT] = ACTIONS(1620),
    [anon_sym_AMP] = ACTIONS(1620),
    [anon_sym_COMMA] = ACTIONS(1620),
    [anon_sym_LBRACE] = ACTIONS(1620),
    [anon_sym_DOT] = ACTIONS(1620),
    [anon_sym_LBRACK] = ACTIONS(1620),
    [anon_sym_AT] = ACTIONS(1620),
    [anon_sym_implements] = ACTIONS(1620),
    [anon_sym_COLON_COLON] = ACTIONS(1620),
    [sym_comment] = ACTIONS(58),
  },
  [637] = {
    [sym_type_arguments] = STATE(772),
    [anon_sym_GT] = ACTIONS(1620),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(1620),
    [anon_sym_COMMA] = ACTIONS(1620),
    [anon_sym_LBRACE] = ACTIONS(1620),
    [anon_sym_DOT] = ACTIONS(1620),
    [anon_sym_LBRACK] = ACTIONS(1620),
    [anon_sym_AT] = ACTIONS(1620),
    [anon_sym_COLON_COLON] = ACTIONS(1620),
    [sym_comment] = ACTIONS(58),
  },
  [638] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1622),
    [sym_comment] = ACTIONS(58),
  },
  [639] = {
    [anon_sym_GT] = ACTIONS(1624),
    [anon_sym_COMMA] = ACTIONS(1624),
    [sym_comment] = ACTIONS(58),
  },
  [640] = {
    [anon_sym_GT] = ACTIONS(1626),
    [anon_sym_AMP] = ACTIONS(1626),
    [anon_sym_COMMA] = ACTIONS(1626),
    [anon_sym_LBRACE] = ACTIONS(1626),
    [anon_sym_DOT] = ACTIONS(971),
    [anon_sym_LBRACK] = ACTIONS(1626),
    [anon_sym_AT] = ACTIONS(1626),
    [anon_sym_COLON_COLON] = ACTIONS(1626),
    [sym_comment] = ACTIONS(58),
  },
  [641] = {
    [sym__expression] = STATE(774),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [642] = {
    [sym__expression] = STATE(775),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_PLUS_PLUS] = ACTIONS(395),
    [anon_sym_DASH_DASH] = ACTIONS(395),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [643] = {
    [anon_sym_boolean] = ACTIONS(1131),
    [anon_sym_byte] = ACTIONS(1131),
    [anon_sym_short] = ACTIONS(1131),
    [anon_sym_int] = ACTIONS(1131),
    [anon_sym_long] = ACTIONS(1131),
    [anon_sym_char] = ACTIONS(1131),
    [anon_sym_float] = ACTIONS(1131),
    [anon_sym_double] = ACTIONS(1131),
    [anon_sym_AT] = ACTIONS(1129),
    [sym_identifier] = ACTIONS(1133),
    [sym_comment] = ACTIONS(58),
  },
  [644] = {
    [anon_sym_boolean] = ACTIONS(1137),
    [anon_sym_byte] = ACTIONS(1137),
    [anon_sym_short] = ACTIONS(1137),
    [anon_sym_int] = ACTIONS(1137),
    [anon_sym_long] = ACTIONS(1137),
    [anon_sym_char] = ACTIONS(1137),
    [anon_sym_float] = ACTIONS(1137),
    [anon_sym_double] = ACTIONS(1137),
    [anon_sym_AT] = ACTIONS(1135),
    [sym_identifier] = ACTIONS(1139),
    [sym_comment] = ACTIONS(58),
  },
  [645] = {
    [sym__semicolon] = ACTIONS(691),
    [anon_sym_LBRACE] = ACTIONS(691),
    [anon_sym_default] = ACTIONS(691),
    [anon_sym_LBRACK] = ACTIONS(691),
    [anon_sym_AT] = ACTIONS(691),
    [anon_sym_throws] = ACTIONS(691),
    [sym_comment] = ACTIONS(58),
  },
  [646] = {
    [anon_sym_RBRACK] = ACTIONS(1628),
    [sym_comment] = ACTIONS(58),
  },
  [647] = {
    [sym__annotation] = STATE(122),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(1630),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [648] = {
    [sym__semicolon] = ACTIONS(1632),
    [anon_sym_LBRACE] = ACTIONS(1632),
    [anon_sym_throws] = ACTIONS(1632),
    [sym_comment] = ACTIONS(58),
  },
  [649] = {
    [sym_type_arguments] = STATE(778),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(1287),
    [anon_sym_AT] = ACTIONS(1287),
    [sym_identifier] = ACTIONS(1634),
    [sym_comment] = ACTIONS(58),
  },
  [650] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1636),
    [sym_comment] = ACTIONS(58),
  },
  [651] = {
    [anon_sym_DOT] = ACTIONS(1321),
    [anon_sym_AT] = ACTIONS(1291),
    [sym_identifier] = ACTIONS(1638),
    [sym_comment] = ACTIONS(58),
  },
  [652] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(780),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1636),
    [sym_comment] = ACTIONS(58),
  },
  [653] = {
    [sym__semicolon] = ACTIONS(1640),
    [anon_sym_COMMA] = ACTIONS(1640),
    [anon_sym_LBRACE] = ACTIONS(1640),
    [sym_comment] = ACTIONS(58),
  },
  [654] = {
    [sym__semicolon] = ACTIONS(1642),
    [anon_sym_COMMA] = ACTIONS(1642),
    [anon_sym_LBRACE] = ACTIONS(1642),
    [sym_comment] = ACTIONS(58),
  },
  [655] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(781),
    [anon_sym_DOT] = ACTIONS(1003),
    [anon_sym_AT] = ACTIONS(1291),
    [sym_identifier] = ACTIONS(1638),
    [sym_comment] = ACTIONS(58),
  },
  [656] = {
    [sym__expression] = STATE(782),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1027),
    [anon_sym_TILDE] = ACTIONS(1027),
    [anon_sym_PLUS_PLUS] = ACTIONS(1029),
    [anon_sym_DASH_DASH] = ACTIONS(1029),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [657] = {
    [sym__expression] = STATE(783),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1027),
    [anon_sym_TILDE] = ACTIONS(1027),
    [anon_sym_PLUS_PLUS] = ACTIONS(1029),
    [anon_sym_DASH_DASH] = ACTIONS(1029),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [658] = {
    [sym__expression] = STATE(784),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1027),
    [anon_sym_TILDE] = ACTIONS(1027),
    [anon_sym_PLUS_PLUS] = ACTIONS(1029),
    [anon_sym_DASH_DASH] = ACTIONS(1029),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [659] = {
    [sym__expression] = STATE(785),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1027),
    [anon_sym_TILDE] = ACTIONS(1027),
    [anon_sym_PLUS_PLUS] = ACTIONS(1029),
    [anon_sym_DASH_DASH] = ACTIONS(1029),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [660] = {
    [sym__expression] = STATE(198),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1027),
    [anon_sym_TILDE] = ACTIONS(1027),
    [anon_sym_PLUS_PLUS] = ACTIONS(1029),
    [anon_sym_DASH_DASH] = ACTIONS(1029),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [661] = {
    [sym_statement] = STATE(787),
    [sym_statement_no_short_if] = STATE(788),
    [sym_if_then_statement] = STATE(224),
    [sym_if_then_else_statement] = STATE(224),
    [sym_if_then_else_statement_no_short_if] = STATE(789),
    [anon_sym_if] = ACTIONS(1644),
    [sym_comment] = ACTIONS(58),
  },
  [662] = {
    [sym__expression] = STATE(790),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [663] = {
    [anon_sym_default] = ACTIONS(813),
    [anon_sym_boolean] = ACTIONS(813),
    [anon_sym_byte] = ACTIONS(813),
    [anon_sym_short] = ACTIONS(813),
    [anon_sym_int] = ACTIONS(813),
    [anon_sym_long] = ACTIONS(813),
    [anon_sym_char] = ACTIONS(813),
    [anon_sym_float] = ACTIONS(813),
    [anon_sym_double] = ACTIONS(813),
    [anon_sym_AT] = ACTIONS(811),
    [anon_sym_static] = ACTIONS(813),
    [anon_sym_class] = ACTIONS(813),
    [anon_sym_public] = ACTIONS(813),
    [anon_sym_protected] = ACTIONS(813),
    [anon_sym_private] = ACTIONS(813),
    [anon_sym_abstract] = ACTIONS(813),
    [anon_sym_final] = ACTIONS(813),
    [anon_sym_strictfp] = ACTIONS(813),
    [anon_sym_synchronized] = ACTIONS(813),
    [anon_sym_native] = ACTIONS(813),
    [sym_identifier] = ACTIONS(815),
    [sym_comment] = ACTIONS(58),
  },
  [664] = {
    [anon_sym_EQ] = ACTIONS(817),
    [anon_sym_RPAREN] = ACTIONS(1646),
    [sym_comment] = ACTIONS(58),
  },
  [665] = {
    [anon_sym_RPAREN] = ACTIONS(1646),
    [sym_comment] = ACTIONS(58),
  },
  [666] = {
    [anon_sym_RPAREN] = ACTIONS(1648),
    [sym_comment] = ACTIONS(58),
  },
  [667] = {
    [anon_sym_LPAREN] = ACTIONS(827),
    [anon_sym_default] = ACTIONS(829),
    [anon_sym_DOT] = ACTIONS(827),
    [anon_sym_boolean] = ACTIONS(829),
    [anon_sym_byte] = ACTIONS(829),
    [anon_sym_short] = ACTIONS(829),
    [anon_sym_int] = ACTIONS(829),
    [anon_sym_long] = ACTIONS(829),
    [anon_sym_char] = ACTIONS(829),
    [anon_sym_float] = ACTIONS(829),
    [anon_sym_double] = ACTIONS(829),
    [anon_sym_AT] = ACTIONS(827),
    [anon_sym_static] = ACTIONS(829),
    [anon_sym_class] = ACTIONS(829),
    [anon_sym_public] = ACTIONS(829),
    [anon_sym_protected] = ACTIONS(829),
    [anon_sym_private] = ACTIONS(829),
    [anon_sym_abstract] = ACTIONS(829),
    [anon_sym_final] = ACTIONS(829),
    [anon_sym_strictfp] = ACTIONS(829),
    [anon_sym_synchronized] = ACTIONS(829),
    [anon_sym_native] = ACTIONS(829),
    [sym_identifier] = ACTIONS(831),
    [sym_comment] = ACTIONS(58),
  },
  [668] = {
    [anon_sym_RBRACE] = ACTIONS(877),
    [anon_sym_default] = ACTIONS(877),
    [anon_sym_if] = ACTIONS(877),
    [anon_sym_DOT] = ACTIONS(877),
    [anon_sym_LBRACK] = ACTIONS(877),
    [anon_sym_AT] = ACTIONS(877),
    [anon_sym_static] = ACTIONS(877),
    [anon_sym_class] = ACTIONS(877),
    [anon_sym_public] = ACTIONS(877),
    [anon_sym_protected] = ACTIONS(877),
    [anon_sym_private] = ACTIONS(877),
    [anon_sym_abstract] = ACTIONS(877),
    [anon_sym_final] = ACTIONS(877),
    [anon_sym_strictfp] = ACTIONS(877),
    [anon_sym_synchronized] = ACTIONS(877),
    [anon_sym_native] = ACTIONS(877),
    [anon_sym_COLON_COLON] = ACTIONS(877),
    [sym_comment] = ACTIONS(58),
  },
  [669] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(126),
    [sym_marker_annotation] = STATE(126),
    [sym_single_element_annotation] = STATE(126),
    [sym_class_declaration] = STATE(292),
    [sym_normal_class_declaration] = STATE(299),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(300),
    [sym_class_body_declaration] = STATE(453),
    [sym_constructor_declaration] = STATE(302),
    [sym_constructor_declarator] = STATE(303),
    [sym_class_member_declaration] = STATE(302),
    [sym_interface_declaration] = STATE(292),
    [sym_annotation_type_declaration] = STATE(304),
    [sym_normal_interface_declaration] = STATE(304),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(305),
    [sym_block] = STATE(302),
    [sym_method_declaration] = STATE(292),
    [aux_sym_normal_class_declaration_repeat1] = STATE(306),
    [sym__semicolon] = ACTIONS(581),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(1650),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(593),
    [sym_comment] = ACTIONS(58),
  },
  [670] = {
    [sym_super_interfaces] = STATE(794),
    [sym_class_body] = STATE(795),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [671] = {
    [sym_class_body] = STATE(795),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [sym_comment] = ACTIONS(58),
  },
  [672] = {
    [anon_sym_RBRACE] = ACTIONS(931),
    [anon_sym_default] = ACTIONS(931),
    [anon_sym_if] = ACTIONS(931),
    [anon_sym_AT] = ACTIONS(931),
    [anon_sym_static] = ACTIONS(931),
    [anon_sym_class] = ACTIONS(931),
    [anon_sym_public] = ACTIONS(931),
    [anon_sym_protected] = ACTIONS(931),
    [anon_sym_private] = ACTIONS(931),
    [anon_sym_abstract] = ACTIONS(931),
    [anon_sym_final] = ACTIONS(931),
    [anon_sym_strictfp] = ACTIONS(931),
    [anon_sym_synchronized] = ACTIONS(931),
    [anon_sym_native] = ACTIONS(931),
    [sym_comment] = ACTIONS(58),
  },
  [673] = {
    [sym_superclass] = STATE(796),
    [sym_super_interfaces] = STATE(794),
    [sym_class_body] = STATE(795),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [anon_sym_extends] = ACTIONS(367),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [674] = {
    [sym_module_directive] = STATE(430),
    [anon_sym_RBRACE] = ACTIONS(1652),
    [anon_sym_requires] = ACTIONS(555),
    [anon_sym_exports] = ACTIONS(557),
    [anon_sym_opens] = ACTIONS(557),
    [anon_sym_uses] = ACTIONS(559),
    [anon_sym_provides] = ACTIONS(561),
    [sym_comment] = ACTIONS(58),
  },
  [675] = {
    [anon_sym_LT] = ACTIONS(1129),
    [anon_sym_default] = ACTIONS(1131),
    [anon_sym_boolean] = ACTIONS(1131),
    [anon_sym_byte] = ACTIONS(1131),
    [anon_sym_short] = ACTIONS(1131),
    [anon_sym_int] = ACTIONS(1131),
    [anon_sym_long] = ACTIONS(1131),
    [anon_sym_char] = ACTIONS(1131),
    [anon_sym_float] = ACTIONS(1131),
    [anon_sym_double] = ACTIONS(1131),
    [anon_sym_AT] = ACTIONS(1129),
    [anon_sym_static] = ACTIONS(1131),
    [anon_sym_class] = ACTIONS(1131),
    [anon_sym_public] = ACTIONS(1131),
    [anon_sym_protected] = ACTIONS(1131),
    [anon_sym_private] = ACTIONS(1131),
    [anon_sym_abstract] = ACTIONS(1131),
    [anon_sym_final] = ACTIONS(1131),
    [anon_sym_strictfp] = ACTIONS(1131),
    [anon_sym_synchronized] = ACTIONS(1131),
    [anon_sym_native] = ACTIONS(1131),
    [anon_sym_interface] = ACTIONS(1131),
    [sym_identifier] = ACTIONS(1133),
    [sym_comment] = ACTIONS(58),
  },
  [676] = {
    [anon_sym_LT] = ACTIONS(1135),
    [anon_sym_default] = ACTIONS(1137),
    [anon_sym_boolean] = ACTIONS(1137),
    [anon_sym_byte] = ACTIONS(1137),
    [anon_sym_short] = ACTIONS(1137),
    [anon_sym_int] = ACTIONS(1137),
    [anon_sym_long] = ACTIONS(1137),
    [anon_sym_char] = ACTIONS(1137),
    [anon_sym_float] = ACTIONS(1137),
    [anon_sym_double] = ACTIONS(1137),
    [anon_sym_AT] = ACTIONS(1135),
    [anon_sym_static] = ACTIONS(1137),
    [anon_sym_class] = ACTIONS(1137),
    [anon_sym_public] = ACTIONS(1137),
    [anon_sym_protected] = ACTIONS(1137),
    [anon_sym_private] = ACTIONS(1137),
    [anon_sym_abstract] = ACTIONS(1137),
    [anon_sym_final] = ACTIONS(1137),
    [anon_sym_strictfp] = ACTIONS(1137),
    [anon_sym_synchronized] = ACTIONS(1137),
    [anon_sym_native] = ACTIONS(1137),
    [anon_sym_interface] = ACTIONS(1137),
    [sym_identifier] = ACTIONS(1139),
    [sym_comment] = ACTIONS(58),
  },
  [677] = {
    [sym_class_body] = STATE(798),
    [anon_sym_LBRACE] = ACTIONS(365),
    [sym_comment] = ACTIONS(58),
  },
  [678] = {
    [ts_builtin_sym_end] = ACTIONS(1654),
    [sym_decimal_integer_literal] = ACTIONS(1656),
    [sym_hex_integer_literal] = ACTIONS(1656),
    [sym_octal_integer_literal] = ACTIONS(1656),
    [sym_binary_integer_literal] = ACTIONS(1656),
    [sym_decimal_floating_point_literal] = ACTIONS(1656),
    [sym_hex_floating_point_literal] = ACTIONS(1658),
    [anon_sym_true] = ACTIONS(1656),
    [anon_sym_false] = ACTIONS(1656),
    [anon_sym_SQUOTE] = ACTIONS(1654),
    [sym_string_literal] = ACTIONS(1654),
    [sym_null_literal] = ACTIONS(1656),
    [anon_sym_LT] = ACTIONS(1654),
    [anon_sym_LPAREN] = ACTIONS(1654),
    [anon_sym_BANG] = ACTIONS(1654),
    [anon_sym_TILDE] = ACTIONS(1654),
    [anon_sym_PLUS_PLUS] = ACTIONS(1654),
    [anon_sym_DASH_DASH] = ACTIONS(1654),
    [anon_sym_default] = ACTIONS(1656),
    [anon_sym_boolean] = ACTIONS(1656),
    [anon_sym_byte] = ACTIONS(1656),
    [anon_sym_short] = ACTIONS(1656),
    [anon_sym_int] = ACTIONS(1656),
    [anon_sym_long] = ACTIONS(1656),
    [anon_sym_char] = ACTIONS(1656),
    [anon_sym_float] = ACTIONS(1656),
    [anon_sym_double] = ACTIONS(1656),
    [anon_sym_AT] = ACTIONS(1654),
    [anon_sym_open] = ACTIONS(1656),
    [anon_sym_module] = ACTIONS(1656),
    [anon_sym_static] = ACTIONS(1656),
    [anon_sym_package] = ACTIONS(1656),
    [anon_sym_import] = ACTIONS(1656),
    [anon_sym_class] = ACTIONS(1656),
    [anon_sym_public] = ACTIONS(1656),
    [anon_sym_protected] = ACTIONS(1656),
    [anon_sym_private] = ACTIONS(1656),
    [anon_sym_abstract] = ACTIONS(1656),
    [anon_sym_final] = ACTIONS(1656),
    [anon_sym_strictfp] = ACTIONS(1656),
    [anon_sym_synchronized] = ACTIONS(1656),
    [anon_sym_native] = ACTIONS(1656),
    [anon_sym_interface] = ACTIONS(1656),
    [sym_identifier] = ACTIONS(1658),
    [sym_comment] = ACTIONS(58),
  },
  [679] = {
    [anon_sym_GT] = ACTIONS(1660),
    [anon_sym_AMP] = ACTIONS(1660),
    [anon_sym_COMMA] = ACTIONS(1660),
    [sym_comment] = ACTIONS(58),
  },
  [680] = {
    [anon_sym_RPAREN] = ACTIONS(1662),
    [sym_comment] = ACTIONS(58),
  },
  [681] = {
    [sym_dims] = STATE(256),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(113),
    [aux_sym_dims_repeat1] = STATE(114),
    [sym__semicolon] = ACTIONS(511),
    [anon_sym_EQ] = ACTIONS(511),
    [anon_sym_LPAREN] = ACTIONS(1664),
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [682] = {
    [sym__expression] = STATE(78),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [683] = {
    [sym__expression] = STATE(79),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [684] = {
    [anon_sym_GT] = ACTIONS(1666),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(1668),
    [anon_sym_LT_EQ] = ACTIONS(1668),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(323),
    [anon_sym_PIPE_PIPE] = ACTIONS(323),
    [anon_sym_PLUS] = ACTIONS(325),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(1670),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_CARET] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(323),
    [anon_sym_LT_LT] = ACTIONS(323),
    [anon_sym_GT_GT] = ACTIONS(325),
    [anon_sym_GT_GT_GT] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_QMARK] = ACTIONS(323),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [685] = {
    [anon_sym_RBRACE] = ACTIONS(1672),
    [sym_comment] = ACTIONS(58),
  },
  [686] = {
    [sym__expression] = STATE(810),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1674),
    [anon_sym_TILDE] = ACTIONS(1674),
    [anon_sym_PLUS_PLUS] = ACTIONS(1676),
    [anon_sym_DASH_DASH] = ACTIONS(1676),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [687] = {
    [sym__semicolon] = ACTIONS(1678),
    [anon_sym_RPAREN] = ACTIONS(1678),
    [anon_sym_COMMA] = ACTIONS(1678),
    [anon_sym_RBRACE] = ACTIONS(1678),
    [sym_comment] = ACTIONS(58),
  },
  [688] = {
    [aux_sym_element_value_array_initializer_repeat1] = STATE(812),
    [anon_sym_COMMA] = ACTIONS(1680),
    [anon_sym_RBRACE] = ACTIONS(1672),
    [sym_comment] = ACTIONS(58),
  },
  [689] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(1682),
    [anon_sym_COMMA] = ACTIONS(1439),
    [anon_sym_QMARK] = ACTIONS(1684),
    [anon_sym_RBRACE] = ACTIONS(1439),
    [sym_comment] = ACTIONS(58),
  },
  [690] = {
    [anon_sym_AMP_AMP] = ACTIONS(1686),
    [anon_sym_PIPE_PIPE] = ACTIONS(1445),
    [anon_sym_COMMA] = ACTIONS(1445),
    [anon_sym_QMARK] = ACTIONS(1445),
    [anon_sym_RBRACE] = ACTIONS(1445),
    [sym_comment] = ACTIONS(58),
  },
  [691] = {
    [anon_sym_AMP_AMP] = ACTIONS(1447),
    [anon_sym_PIPE_PIPE] = ACTIONS(1447),
    [anon_sym_PIPE] = ACTIONS(1688),
    [anon_sym_COMMA] = ACTIONS(1447),
    [anon_sym_QMARK] = ACTIONS(1447),
    [anon_sym_RBRACE] = ACTIONS(1447),
    [sym_comment] = ACTIONS(58),
  },
  [692] = {
    [anon_sym_AMP_AMP] = ACTIONS(1451),
    [anon_sym_PIPE_PIPE] = ACTIONS(1451),
    [anon_sym_PIPE] = ACTIONS(1453),
    [anon_sym_CARET] = ACTIONS(1690),
    [anon_sym_COMMA] = ACTIONS(1451),
    [anon_sym_QMARK] = ACTIONS(1451),
    [anon_sym_RBRACE] = ACTIONS(1451),
    [sym_comment] = ACTIONS(58),
  },
  [693] = {
    [anon_sym_LT] = ACTIONS(1692),
    [anon_sym_EQ_EQ] = ACTIONS(1463),
    [anon_sym_BANG_EQ] = ACTIONS(1463),
    [anon_sym_AMP_AMP] = ACTIONS(1465),
    [anon_sym_PIPE_PIPE] = ACTIONS(1465),
    [anon_sym_PIPE] = ACTIONS(1467),
    [anon_sym_CARET] = ACTIONS(1465),
    [anon_sym_COMMA] = ACTIONS(1465),
    [anon_sym_QMARK] = ACTIONS(1465),
    [anon_sym_RBRACE] = ACTIONS(1465),
    [sym_comment] = ACTIONS(58),
  },
  [694] = {
    [anon_sym_EQ_EQ] = ACTIONS(1694),
    [anon_sym_BANG_EQ] = ACTIONS(1694),
    [sym_comment] = ACTIONS(58),
  },
  [695] = {
    [anon_sym_LT] = ACTIONS(1471),
    [anon_sym_EQ_EQ] = ACTIONS(1473),
    [anon_sym_BANG_EQ] = ACTIONS(1473),
    [anon_sym_AMP_AMP] = ACTIONS(1473),
    [anon_sym_PIPE_PIPE] = ACTIONS(1473),
    [anon_sym_PIPE] = ACTIONS(1471),
    [anon_sym_CARET] = ACTIONS(1473),
    [anon_sym_LT_LT] = ACTIONS(1696),
    [anon_sym_GT_GT] = ACTIONS(1698),
    [anon_sym_GT_GT_GT] = ACTIONS(1696),
    [anon_sym_COMMA] = ACTIONS(1473),
    [anon_sym_QMARK] = ACTIONS(1473),
    [anon_sym_RBRACE] = ACTIONS(1473),
    [sym_comment] = ACTIONS(58),
  },
  [696] = {
    [anon_sym_LT] = ACTIONS(1479),
    [anon_sym_EQ_EQ] = ACTIONS(1481),
    [anon_sym_BANG_EQ] = ACTIONS(1481),
    [anon_sym_AMP_AMP] = ACTIONS(1481),
    [anon_sym_PIPE_PIPE] = ACTIONS(1481),
    [anon_sym_PLUS] = ACTIONS(1700),
    [anon_sym_DASH] = ACTIONS(1700),
    [anon_sym_PIPE] = ACTIONS(1479),
    [anon_sym_CARET] = ACTIONS(1481),
    [anon_sym_LT_LT] = ACTIONS(1481),
    [anon_sym_GT_GT] = ACTIONS(1479),
    [anon_sym_GT_GT_GT] = ACTIONS(1481),
    [anon_sym_COMMA] = ACTIONS(1481),
    [anon_sym_QMARK] = ACTIONS(1481),
    [anon_sym_RBRACE] = ACTIONS(1481),
    [sym_comment] = ACTIONS(58),
  },
  [697] = {
    [anon_sym_LT] = ACTIONS(1485),
    [anon_sym_EQ_EQ] = ACTIONS(1487),
    [anon_sym_BANG_EQ] = ACTIONS(1487),
    [anon_sym_AMP_AMP] = ACTIONS(1487),
    [anon_sym_PIPE_PIPE] = ACTIONS(1487),
    [anon_sym_PLUS] = ACTIONS(1487),
    [anon_sym_DASH] = ACTIONS(1487),
    [anon_sym_STAR] = ACTIONS(1702),
    [anon_sym_SLASH] = ACTIONS(1704),
    [anon_sym_PIPE] = ACTIONS(1485),
    [anon_sym_CARET] = ACTIONS(1487),
    [anon_sym_PERCENT] = ACTIONS(1702),
    [anon_sym_LT_LT] = ACTIONS(1487),
    [anon_sym_GT_GT] = ACTIONS(1485),
    [anon_sym_GT_GT_GT] = ACTIONS(1487),
    [anon_sym_COMMA] = ACTIONS(1487),
    [anon_sym_QMARK] = ACTIONS(1487),
    [anon_sym_RBRACE] = ACTIONS(1487),
    [sym_comment] = ACTIONS(58),
  },
  [698] = {
    [sym_unary_expression] = STATE(551),
    [sym_conditional_and_expression] = STATE(823),
    [sym_inclusive_or_expression] = STATE(555),
    [sym_exclusive_or_expression] = STATE(556),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(558),
    [sym_equality_expression] = STATE(559),
    [sym_shift_expression] = STATE(560),
    [sym_additive_expression] = STATE(561),
    [sym_multiplicative_expression] = STATE(562),
    [anon_sym_BANG] = ACTIONS(1125),
    [anon_sym_TILDE] = ACTIONS(1125),
    [sym_comment] = ACTIONS(58),
  },
  [699] = {
    [sym__expression] = STATE(824),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [700] = {
    [sym_unary_expression] = STATE(551),
    [sym_inclusive_or_expression] = STATE(825),
    [sym_exclusive_or_expression] = STATE(556),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(558),
    [sym_equality_expression] = STATE(559),
    [sym_shift_expression] = STATE(560),
    [sym_additive_expression] = STATE(561),
    [sym_multiplicative_expression] = STATE(562),
    [anon_sym_BANG] = ACTIONS(1125),
    [anon_sym_TILDE] = ACTIONS(1125),
    [sym_comment] = ACTIONS(58),
  },
  [701] = {
    [sym_unary_expression] = STATE(551),
    [sym_exclusive_or_expression] = STATE(826),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(558),
    [sym_equality_expression] = STATE(559),
    [sym_shift_expression] = STATE(560),
    [sym_additive_expression] = STATE(561),
    [sym_multiplicative_expression] = STATE(562),
    [anon_sym_BANG] = ACTIONS(1125),
    [anon_sym_TILDE] = ACTIONS(1125),
    [sym_comment] = ACTIONS(58),
  },
  [702] = {
    [sym_unary_expression] = STATE(551),
    [sym_and_expression] = STATE(827),
    [sym_relational_expression] = STATE(558),
    [sym_equality_expression] = STATE(559),
    [sym_shift_expression] = STATE(560),
    [sym_additive_expression] = STATE(561),
    [sym_multiplicative_expression] = STATE(562),
    [anon_sym_BANG] = ACTIONS(1125),
    [anon_sym_TILDE] = ACTIONS(1125),
    [sym_comment] = ACTIONS(58),
  },
  [703] = {
    [sym_unary_expression] = STATE(551),
    [sym_shift_expression] = STATE(828),
    [sym_additive_expression] = STATE(561),
    [sym_multiplicative_expression] = STATE(562),
    [anon_sym_BANG] = ACTIONS(1125),
    [anon_sym_TILDE] = ACTIONS(1125),
    [sym_comment] = ACTIONS(58),
  },
  [704] = {
    [sym_unary_expression] = STATE(551),
    [sym_relational_expression] = STATE(829),
    [sym_shift_expression] = STATE(560),
    [sym_additive_expression] = STATE(561),
    [sym_multiplicative_expression] = STATE(562),
    [anon_sym_BANG] = ACTIONS(1125),
    [anon_sym_TILDE] = ACTIONS(1125),
    [sym_comment] = ACTIONS(58),
  },
  [705] = {
    [sym_unary_expression] = STATE(551),
    [sym_additive_expression] = STATE(830),
    [sym_multiplicative_expression] = STATE(562),
    [anon_sym_BANG] = ACTIONS(1125),
    [anon_sym_TILDE] = ACTIONS(1125),
    [sym_comment] = ACTIONS(58),
  },
  [706] = {
    [sym_unary_expression] = STATE(551),
    [sym_multiplicative_expression] = STATE(831),
    [anon_sym_BANG] = ACTIONS(1125),
    [anon_sym_TILDE] = ACTIONS(1125),
    [sym_comment] = ACTIONS(58),
  },
  [707] = {
    [sym_unary_expression] = STATE(832),
    [anon_sym_BANG] = ACTIONS(1125),
    [anon_sym_TILDE] = ACTIONS(1125),
    [sym_comment] = ACTIONS(58),
  },
  [708] = {
    [anon_sym_RPAREN] = ACTIONS(1706),
    [anon_sym_COMMA] = ACTIONS(1706),
    [sym_comment] = ACTIONS(58),
  },
  [709] = {
    [sym__semicolon] = ACTIONS(1708),
    [anon_sym_COMMA] = ACTIONS(1708),
    [anon_sym_DOT] = ACTIONS(1708),
    [sym_comment] = ACTIONS(58),
  },
  [710] = {
    [anon_sym_RBRACE] = ACTIONS(1710),
    [anon_sym_requires] = ACTIONS(1710),
    [anon_sym_exports] = ACTIONS(1710),
    [anon_sym_opens] = ACTIONS(1710),
    [anon_sym_uses] = ACTIONS(1710),
    [anon_sym_provides] = ACTIONS(1710),
    [sym_comment] = ACTIONS(58),
  },
  [711] = {
    [sym__semicolon] = ACTIONS(1712),
    [anon_sym_COMMA] = ACTIONS(1712),
    [anon_sym_DOT] = ACTIONS(1169),
    [sym_comment] = ACTIONS(58),
  },
  [712] = {
    [sym__semicolon] = ACTIONS(827),
    [anon_sym_COMMA] = ACTIONS(827),
    [anon_sym_DOT] = ACTIONS(827),
    [anon_sym_to] = ACTIONS(829),
    [sym_identifier] = ACTIONS(831),
    [sym_comment] = ACTIONS(58),
  },
  [713] = {
    [aux_sym_module_directive_repeat2] = STATE(834),
    [sym__semicolon] = ACTIONS(1714),
    [anon_sym_COMMA] = ACTIONS(1171),
    [anon_sym_DOT] = ACTIONS(1169),
    [sym_comment] = ACTIONS(58),
  },
  [714] = {
    [sym__semicolon] = ACTIONS(1714),
    [anon_sym_COMMA] = ACTIONS(1515),
    [sym_comment] = ACTIONS(58),
  },
  [715] = {
    [sym_module_name] = STATE(835),
    [sym_identifier] = ACTIONS(1511),
    [sym_comment] = ACTIONS(58),
  },
  [716] = {
    [anon_sym_DOT] = ACTIONS(827),
    [anon_sym_with] = ACTIONS(827),
    [sym_comment] = ACTIONS(58),
  },
  [717] = {
    [aux_sym_module_directive_repeat3] = STATE(837),
    [sym__semicolon] = ACTIONS(1714),
    [anon_sym_COMMA] = ACTIONS(1716),
    [anon_sym_DOT] = ACTIONS(345),
    [sym_comment] = ACTIONS(58),
  },
  [718] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(126),
    [sym_marker_annotation] = STATE(126),
    [sym_single_element_annotation] = STATE(126),
    [sym_class_declaration] = STATE(407),
    [sym_normal_class_declaration] = STATE(299),
    [sym_modifier] = STATE(36),
    [sym_interface_declaration] = STATE(407),
    [sym_annotation_type_declaration] = STATE(304),
    [sym_annotation_type_member_declaration] = STATE(408),
    [sym_annotation_type_element_declaration] = STATE(407),
    [sym_normal_interface_declaration] = STATE(304),
    [sym_constant_declaration] = STATE(407),
    [sym_unann_type] = STATE(409),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [aux_sym_normal_class_declaration_repeat1] = STATE(410),
    [aux_sym_annotation_type_body_repeat1] = STATE(839),
    [anon_sym_RBRACE] = ACTIONS(1718),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [719] = {
    [sym__semicolon] = ACTIONS(805),
    [anon_sym_LT] = ACTIONS(805),
    [anon_sym_LBRACE] = ACTIONS(805),
    [anon_sym_RBRACE] = ACTIONS(805),
    [anon_sym_default] = ACTIONS(807),
    [anon_sym_boolean] = ACTIONS(807),
    [anon_sym_byte] = ACTIONS(807),
    [anon_sym_short] = ACTIONS(807),
    [anon_sym_int] = ACTIONS(807),
    [anon_sym_long] = ACTIONS(807),
    [anon_sym_char] = ACTIONS(807),
    [anon_sym_float] = ACTIONS(807),
    [anon_sym_double] = ACTIONS(807),
    [anon_sym_AT] = ACTIONS(805),
    [anon_sym_static] = ACTIONS(807),
    [anon_sym_class] = ACTIONS(807),
    [anon_sym_public] = ACTIONS(807),
    [anon_sym_protected] = ACTIONS(807),
    [anon_sym_private] = ACTIONS(807),
    [anon_sym_abstract] = ACTIONS(807),
    [anon_sym_final] = ACTIONS(807),
    [anon_sym_strictfp] = ACTIONS(807),
    [anon_sym_synchronized] = ACTIONS(807),
    [anon_sym_native] = ACTIONS(807),
    [anon_sym_interface] = ACTIONS(807),
    [sym_identifier] = ACTIONS(809),
    [sym_comment] = ACTIONS(58),
  },
  [720] = {
    [sym__semicolon] = ACTIONS(877),
    [anon_sym_LT] = ACTIONS(877),
    [anon_sym_LBRACE] = ACTIONS(877),
    [anon_sym_RBRACE] = ACTIONS(877),
    [anon_sym_default] = ACTIONS(879),
    [anon_sym_boolean] = ACTIONS(879),
    [anon_sym_byte] = ACTIONS(879),
    [anon_sym_short] = ACTIONS(879),
    [anon_sym_int] = ACTIONS(879),
    [anon_sym_long] = ACTIONS(879),
    [anon_sym_char] = ACTIONS(879),
    [anon_sym_float] = ACTIONS(879),
    [anon_sym_double] = ACTIONS(879),
    [anon_sym_AT] = ACTIONS(877),
    [anon_sym_static] = ACTIONS(879),
    [anon_sym_class] = ACTIONS(879),
    [anon_sym_public] = ACTIONS(879),
    [anon_sym_protected] = ACTIONS(879),
    [anon_sym_private] = ACTIONS(879),
    [anon_sym_abstract] = ACTIONS(879),
    [anon_sym_final] = ACTIONS(879),
    [anon_sym_strictfp] = ACTIONS(879),
    [anon_sym_synchronized] = ACTIONS(879),
    [anon_sym_native] = ACTIONS(879),
    [anon_sym_interface] = ACTIONS(879),
    [sym_identifier] = ACTIONS(881),
    [sym_comment] = ACTIONS(58),
  },
  [721] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(126),
    [sym_marker_annotation] = STATE(126),
    [sym_single_element_annotation] = STATE(126),
    [sym_class_declaration] = STATE(292),
    [sym_normal_class_declaration] = STATE(299),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(300),
    [sym_class_body_declaration] = STATE(453),
    [sym_constructor_declaration] = STATE(302),
    [sym_constructor_declarator] = STATE(303),
    [sym_class_member_declaration] = STATE(302),
    [sym_interface_declaration] = STATE(292),
    [sym_annotation_type_declaration] = STATE(304),
    [sym_normal_interface_declaration] = STATE(304),
    [sym_unann_type] = STATE(39),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(305),
    [sym_block] = STATE(302),
    [sym_method_declaration] = STATE(292),
    [aux_sym_normal_class_declaration_repeat1] = STATE(306),
    [sym__semicolon] = ACTIONS(581),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(1720),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(593),
    [sym_comment] = ACTIONS(58),
  },
  [722] = {
    [sym_super_interfaces] = STATE(841),
    [sym_class_body] = STATE(842),
    [anon_sym_LBRACE] = ACTIONS(1197),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [723] = {
    [sym_class_body] = STATE(842),
    [anon_sym_LBRACE] = ACTIONS(1197),
    [sym_comment] = ACTIONS(58),
  },
  [724] = {
    [sym__semicolon] = ACTIONS(931),
    [anon_sym_LT] = ACTIONS(931),
    [anon_sym_LBRACE] = ACTIONS(931),
    [anon_sym_RBRACE] = ACTIONS(931),
    [anon_sym_default] = ACTIONS(933),
    [anon_sym_boolean] = ACTIONS(933),
    [anon_sym_byte] = ACTIONS(933),
    [anon_sym_short] = ACTIONS(933),
    [anon_sym_int] = ACTIONS(933),
    [anon_sym_long] = ACTIONS(933),
    [anon_sym_char] = ACTIONS(933),
    [anon_sym_float] = ACTIONS(933),
    [anon_sym_double] = ACTIONS(933),
    [anon_sym_AT] = ACTIONS(931),
    [anon_sym_static] = ACTIONS(933),
    [anon_sym_class] = ACTIONS(933),
    [anon_sym_public] = ACTIONS(933),
    [anon_sym_protected] = ACTIONS(933),
    [anon_sym_private] = ACTIONS(933),
    [anon_sym_abstract] = ACTIONS(933),
    [anon_sym_final] = ACTIONS(933),
    [anon_sym_strictfp] = ACTIONS(933),
    [anon_sym_synchronized] = ACTIONS(933),
    [anon_sym_native] = ACTIONS(933),
    [anon_sym_interface] = ACTIONS(933),
    [sym_identifier] = ACTIONS(935),
    [sym_comment] = ACTIONS(58),
  },
  [725] = {
    [sym__semicolon] = ACTIONS(943),
    [anon_sym_LT] = ACTIONS(943),
    [anon_sym_LBRACE] = ACTIONS(943),
    [anon_sym_RBRACE] = ACTIONS(943),
    [anon_sym_default] = ACTIONS(945),
    [anon_sym_boolean] = ACTIONS(945),
    [anon_sym_byte] = ACTIONS(945),
    [anon_sym_short] = ACTIONS(945),
    [anon_sym_int] = ACTIONS(945),
    [anon_sym_long] = ACTIONS(945),
    [anon_sym_char] = ACTIONS(945),
    [anon_sym_float] = ACTIONS(945),
    [anon_sym_double] = ACTIONS(945),
    [anon_sym_AT] = ACTIONS(943),
    [anon_sym_static] = ACTIONS(945),
    [anon_sym_class] = ACTIONS(945),
    [anon_sym_public] = ACTIONS(945),
    [anon_sym_protected] = ACTIONS(945),
    [anon_sym_private] = ACTIONS(945),
    [anon_sym_abstract] = ACTIONS(945),
    [anon_sym_final] = ACTIONS(945),
    [anon_sym_strictfp] = ACTIONS(945),
    [anon_sym_synchronized] = ACTIONS(945),
    [anon_sym_native] = ACTIONS(945),
    [anon_sym_interface] = ACTIONS(945),
    [sym_identifier] = ACTIONS(947),
    [sym_comment] = ACTIONS(58),
  },
  [726] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(126),
    [sym_marker_annotation] = STATE(126),
    [sym_single_element_annotation] = STATE(126),
    [sym_class_declaration] = STATE(316),
    [sym_normal_class_declaration] = STATE(299),
    [sym_modifier] = STATE(36),
    [sym_type_parameters] = STATE(37),
    [sym_interface_declaration] = STATE(316),
    [sym_annotation_type_declaration] = STATE(304),
    [sym_normal_interface_declaration] = STATE(304),
    [sym_interface_member_declaration] = STATE(468),
    [sym_constant_declaration] = STATE(316),
    [sym_unann_type] = STATE(319),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [sym_method_header] = STATE(305),
    [sym_method_declaration] = STATE(316),
    [aux_sym_normal_class_declaration_repeat1] = STATE(320),
    [sym__semicolon] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(1722),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [727] = {
    [sym_interface_body] = STATE(844),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [sym_comment] = ACTIONS(58),
  },
  [728] = {
    [sym__semicolon] = ACTIONS(961),
    [anon_sym_LT] = ACTIONS(961),
    [anon_sym_LBRACE] = ACTIONS(961),
    [anon_sym_RBRACE] = ACTIONS(961),
    [anon_sym_default] = ACTIONS(963),
    [anon_sym_boolean] = ACTIONS(963),
    [anon_sym_byte] = ACTIONS(963),
    [anon_sym_short] = ACTIONS(963),
    [anon_sym_int] = ACTIONS(963),
    [anon_sym_long] = ACTIONS(963),
    [anon_sym_char] = ACTIONS(963),
    [anon_sym_float] = ACTIONS(963),
    [anon_sym_double] = ACTIONS(963),
    [anon_sym_AT] = ACTIONS(961),
    [anon_sym_static] = ACTIONS(963),
    [anon_sym_class] = ACTIONS(963),
    [anon_sym_public] = ACTIONS(963),
    [anon_sym_protected] = ACTIONS(963),
    [anon_sym_private] = ACTIONS(963),
    [anon_sym_abstract] = ACTIONS(963),
    [anon_sym_final] = ACTIONS(963),
    [anon_sym_strictfp] = ACTIONS(963),
    [anon_sym_synchronized] = ACTIONS(963),
    [anon_sym_native] = ACTIONS(963),
    [anon_sym_interface] = ACTIONS(963),
    [sym_identifier] = ACTIONS(965),
    [sym_comment] = ACTIONS(58),
  },
  [729] = {
    [anon_sym_LBRACE] = ACTIONS(1724),
    [anon_sym_throws] = ACTIONS(1724),
    [sym_comment] = ACTIONS(58),
  },
  [730] = {
    [anon_sym_RPAREN] = ACTIONS(1726),
    [sym_comment] = ACTIONS(58),
  },
  [731] = {
    [anon_sym_GT] = ACTIONS(1343),
    [anon_sym_LT] = ACTIONS(1343),
    [anon_sym_EQ_EQ] = ACTIONS(1345),
    [anon_sym_GT_EQ] = ACTIONS(1345),
    [anon_sym_LT_EQ] = ACTIONS(1345),
    [anon_sym_BANG_EQ] = ACTIONS(1345),
    [anon_sym_AMP_AMP] = ACTIONS(1347),
    [anon_sym_PIPE_PIPE] = ACTIONS(1349),
    [anon_sym_PLUS] = ACTIONS(1351),
    [anon_sym_DASH] = ACTIONS(1351),
    [anon_sym_STAR] = ACTIONS(1353),
    [anon_sym_SLASH] = ACTIONS(1355),
    [anon_sym_AMP] = ACTIONS(1357),
    [anon_sym_PIPE] = ACTIONS(1359),
    [anon_sym_CARET] = ACTIONS(1349),
    [anon_sym_PERCENT] = ACTIONS(1353),
    [anon_sym_LT_LT] = ACTIONS(1353),
    [anon_sym_GT_GT] = ACTIONS(1355),
    [anon_sym_GT_GT_GT] = ACTIONS(1353),
    [anon_sym_RPAREN] = ACTIONS(1728),
    [anon_sym_QMARK] = ACTIONS(1363),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [732] = {
    [anon_sym_class] = ACTIONS(1730),
    [sym_comment] = ACTIONS(58),
  },
  [733] = {
    [anon_sym_DOT] = ACTIONS(1732),
    [anon_sym_LBRACK] = ACTIONS(1732),
    [sym_comment] = ACTIONS(58),
  },
  [734] = {
    [anon_sym_DOT] = ACTIONS(1734),
    [anon_sym_LBRACK] = ACTIONS(1736),
    [sym_comment] = ACTIONS(58),
  },
  [735] = {
    [sym__expression] = STATE(851),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(852),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(1738),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [736] = {
    [sym_identifier] = ACTIONS(1740),
    [sym_comment] = ACTIONS(58),
  },
  [737] = {
    [sym_type_arguments] = STATE(855),
    [anon_sym_LT] = ACTIONS(128),
    [sym_identifier] = ACTIONS(1742),
    [sym_comment] = ACTIONS(58),
  },
  [738] = {
    [sym_type_arguments] = STATE(858),
    [sym_type_arguments_or_diamond] = STATE(859),
    [aux_sym_class_or_interface_type_repeat2] = STATE(327),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(860),
    [anon_sym_LT] = ACTIONS(1744),
    [anon_sym_LPAREN] = ACTIONS(1746),
    [anon_sym_DOT] = ACTIONS(1748),
    [anon_sym_LBRACK] = ACTIONS(615),
    [anon_sym_AT] = ACTIONS(615),
    [anon_sym_LT_GT] = ACTIONS(1750),
    [sym_comment] = ACTIONS(58),
  },
  [739] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [sym_class_or_interface_type_to_instantiate] = STATE(862),
    [aux_sym_class_or_interface_type_repeat1] = STATE(863),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1752),
    [sym_comment] = ACTIONS(58),
  },
  [740] = {
    [sym_dims] = STATE(864),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(113),
    [aux_sym_dims_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [741] = {
    [sym_dims] = STATE(864),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_dims_exprs] = STATE(865),
    [sym_dims_expr] = STATE(749),
    [aux_sym_class_or_interface_type_repeat1] = STATE(750),
    [aux_sym_dims_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(1564),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [742] = {
    [anon_sym_LPAREN] = ACTIONS(1754),
    [sym_comment] = ACTIONS(58),
  },
  [743] = {
    [sym_integral_type] = STATE(332),
    [sym_floating_point_type] = STATE(332),
    [sym__annotation] = STATE(158),
    [sym_normal_annotation] = STATE(105),
    [sym_marker_annotation] = STATE(105),
    [sym_single_element_annotation] = STATE(105),
    [anon_sym_boolean] = ACTIONS(627),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(1756),
    [sym_comment] = ACTIONS(58),
  },
  [744] = {
    [anon_sym_LPAREN] = ACTIONS(1758),
    [sym_comment] = ACTIONS(58),
  },
  [745] = {
    [sym__expression] = STATE(871),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1760),
    [anon_sym_TILDE] = ACTIONS(1760),
    [anon_sym_PLUS_PLUS] = ACTIONS(1762),
    [anon_sym_DASH_DASH] = ACTIONS(1762),
    [anon_sym_RBRACK] = ACTIONS(407),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [746] = {
    [sym_type_arguments] = STATE(872),
    [anon_sym_LT] = ACTIONS(917),
    [anon_sym_new] = ACTIONS(1764),
    [sym_comment] = ACTIONS(58),
  },
  [747] = {
    [anon_sym_COLON_COLON] = ACTIONS(1766),
    [sym_comment] = ACTIONS(58),
  },
  [748] = {
    [sym_dims] = STATE(873),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(113),
    [aux_sym_dims_repeat1] = STATE(114),
    [anon_sym_DOT] = ACTIONS(1768),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_COLON_COLON] = ACTIONS(1768),
    [sym_comment] = ACTIONS(58),
  },
  [749] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_dims_expr] = STATE(875),
    [aux_sym_class_or_interface_type_repeat1] = STATE(876),
    [aux_sym_dims_exprs_repeat1] = STATE(877),
    [anon_sym_DOT] = ACTIONS(1770),
    [anon_sym_LBRACK] = ACTIONS(1772),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_COLON_COLON] = ACTIONS(1770),
    [sym_comment] = ACTIONS(58),
  },
  [750] = {
    [sym__annotation] = STATE(122),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(1774),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [751] = {
    [sym_type_arguments] = STATE(881),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_class] = ACTIONS(1776),
    [anon_sym_this] = ACTIONS(1778),
    [anon_sym_super] = ACTIONS(1780),
    [sym_identifier] = ACTIONS(1782),
    [sym_comment] = ACTIONS(58),
  },
  [752] = {
    [sym__semicolon] = ACTIONS(1784),
    [anon_sym_LT] = ACTIONS(1784),
    [anon_sym_LBRACE] = ACTIONS(1784),
    [anon_sym_RBRACE] = ACTIONS(1784),
    [anon_sym_default] = ACTIONS(1786),
    [anon_sym_boolean] = ACTIONS(1786),
    [anon_sym_byte] = ACTIONS(1786),
    [anon_sym_short] = ACTIONS(1786),
    [anon_sym_int] = ACTIONS(1786),
    [anon_sym_long] = ACTIONS(1786),
    [anon_sym_char] = ACTIONS(1786),
    [anon_sym_float] = ACTIONS(1786),
    [anon_sym_double] = ACTIONS(1786),
    [anon_sym_AT] = ACTIONS(1784),
    [anon_sym_static] = ACTIONS(1786),
    [anon_sym_class] = ACTIONS(1786),
    [anon_sym_public] = ACTIONS(1786),
    [anon_sym_protected] = ACTIONS(1786),
    [anon_sym_private] = ACTIONS(1786),
    [anon_sym_abstract] = ACTIONS(1786),
    [anon_sym_final] = ACTIONS(1786),
    [anon_sym_strictfp] = ACTIONS(1786),
    [anon_sym_synchronized] = ACTIONS(1786),
    [anon_sym_native] = ACTIONS(1786),
    [anon_sym_interface] = ACTIONS(1786),
    [sym_identifier] = ACTIONS(1788),
    [sym_comment] = ACTIONS(58),
  },
  [753] = {
    [anon_sym_RBRACE] = ACTIONS(1790),
    [sym_comment] = ACTIONS(58),
  },
  [754] = {
    [sym_type_arguments] = STATE(887),
    [sym_unqualified_class_instance_creation_expression] = STATE(888),
    [anon_sym_LT] = ACTIONS(1792),
    [anon_sym_super] = ACTIONS(1794),
    [anon_sym_new] = ACTIONS(1796),
    [sym_identifier] = ACTIONS(1798),
    [sym_comment] = ACTIONS(58),
  },
  [755] = {
    [sym__expression] = STATE(889),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1760),
    [anon_sym_TILDE] = ACTIONS(1760),
    [anon_sym_PLUS_PLUS] = ACTIONS(1762),
    [anon_sym_DASH_DASH] = ACTIONS(1762),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [756] = {
    [sym_type_arguments] = STATE(881),
    [sym_unqualified_class_instance_creation_expression] = STATE(888),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_super] = ACTIONS(1794),
    [anon_sym_new] = ACTIONS(1796),
    [sym_identifier] = ACTIONS(1800),
    [sym_comment] = ACTIONS(58),
  },
  [757] = {
    [anon_sym_new] = ACTIONS(1764),
    [sym_comment] = ACTIONS(58),
  },
  [758] = {
    [sym__expression] = STATE(851),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(892),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(1802),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [759] = {
    [sym_annotation_type_body] = STATE(893),
    [anon_sym_LBRACE] = ACTIONS(1531),
    [sym_comment] = ACTIONS(58),
  },
  [760] = {
    [sym_superclass] = STATE(894),
    [sym_super_interfaces] = STATE(841),
    [sym_class_body] = STATE(842),
    [anon_sym_LBRACE] = ACTIONS(1197),
    [anon_sym_extends] = ACTIONS(367),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [761] = {
    [sym_extends_interfaces] = STATE(895),
    [sym_interface_body] = STATE(844),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [anon_sym_extends] = ACTIONS(373),
    [sym_comment] = ACTIONS(58),
  },
  [762] = {
    [sym__semicolon] = ACTIONS(1804),
    [anon_sym_LT] = ACTIONS(1804),
    [anon_sym_LBRACE] = ACTIONS(1804),
    [anon_sym_RBRACE] = ACTIONS(1804),
    [anon_sym_default] = ACTIONS(1806),
    [anon_sym_boolean] = ACTIONS(1806),
    [anon_sym_byte] = ACTIONS(1806),
    [anon_sym_short] = ACTIONS(1806),
    [anon_sym_int] = ACTIONS(1806),
    [anon_sym_long] = ACTIONS(1806),
    [anon_sym_char] = ACTIONS(1806),
    [anon_sym_float] = ACTIONS(1806),
    [anon_sym_double] = ACTIONS(1806),
    [anon_sym_AT] = ACTIONS(1804),
    [anon_sym_static] = ACTIONS(1806),
    [anon_sym_class] = ACTIONS(1806),
    [anon_sym_public] = ACTIONS(1806),
    [anon_sym_protected] = ACTIONS(1806),
    [anon_sym_private] = ACTIONS(1806),
    [anon_sym_abstract] = ACTIONS(1806),
    [anon_sym_final] = ACTIONS(1806),
    [anon_sym_strictfp] = ACTIONS(1806),
    [anon_sym_synchronized] = ACTIONS(1806),
    [anon_sym_native] = ACTIONS(1806),
    [anon_sym_interface] = ACTIONS(1806),
    [sym_identifier] = ACTIONS(1808),
    [sym_comment] = ACTIONS(58),
  },
  [763] = {
    [anon_sym_LBRACE] = ACTIONS(973),
    [anon_sym_DOT] = ACTIONS(973),
    [anon_sym_implements] = ACTIONS(973),
    [anon_sym_this] = ACTIONS(973),
    [anon_sym_super] = ACTIONS(973),
    [anon_sym_new] = ACTIONS(973),
    [sym_comment] = ACTIONS(58),
  },
  [764] = {
    [anon_sym_GT] = ACTIONS(1810),
    [anon_sym_COMMA] = ACTIONS(979),
    [sym_comment] = ACTIONS(58),
  },
  [765] = {
    [sym_type_arguments] = STATE(772),
    [anon_sym_LT] = ACTIONS(917),
    [anon_sym_LBRACE] = ACTIONS(1620),
    [anon_sym_DOT] = ACTIONS(1620),
    [anon_sym_implements] = ACTIONS(1620),
    [sym_comment] = ACTIONS(58),
  },
  [766] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1812),
    [sym_comment] = ACTIONS(58),
  },
  [767] = {
    [anon_sym_LBRACE] = ACTIONS(1626),
    [anon_sym_DOT] = ACTIONS(1251),
    [anon_sym_implements] = ACTIONS(1626),
    [sym_comment] = ACTIONS(58),
  },
  [768] = {
    [anon_sym_COMMA] = ACTIONS(1814),
    [anon_sym_LBRACE] = ACTIONS(1814),
    [sym_comment] = ACTIONS(58),
  },
  [769] = {
    [sym__semicolon] = ACTIONS(1816),
    [anon_sym_COMMA] = ACTIONS(1816),
    [sym_comment] = ACTIONS(58),
  },
  [770] = {
    [sym_variable_declarator] = STATE(898),
    [sym_variable_declarator_id] = STATE(254),
    [sym_identifier] = ACTIONS(509),
    [sym_comment] = ACTIONS(58),
  },
  [771] = {
    [sym__semicolon] = ACTIONS(1818),
    [anon_sym_LT] = ACTIONS(1818),
    [anon_sym_RBRACE] = ACTIONS(1818),
    [anon_sym_default] = ACTIONS(1820),
    [anon_sym_boolean] = ACTIONS(1820),
    [anon_sym_byte] = ACTIONS(1820),
    [anon_sym_short] = ACTIONS(1820),
    [anon_sym_int] = ACTIONS(1820),
    [anon_sym_long] = ACTIONS(1820),
    [anon_sym_char] = ACTIONS(1820),
    [anon_sym_float] = ACTIONS(1820),
    [anon_sym_double] = ACTIONS(1820),
    [anon_sym_AT] = ACTIONS(1818),
    [anon_sym_static] = ACTIONS(1820),
    [anon_sym_class] = ACTIONS(1820),
    [anon_sym_public] = ACTIONS(1820),
    [anon_sym_protected] = ACTIONS(1820),
    [anon_sym_private] = ACTIONS(1820),
    [anon_sym_abstract] = ACTIONS(1820),
    [anon_sym_final] = ACTIONS(1820),
    [anon_sym_strictfp] = ACTIONS(1820),
    [anon_sym_synchronized] = ACTIONS(1820),
    [anon_sym_native] = ACTIONS(1820),
    [anon_sym_interface] = ACTIONS(1820),
    [sym_identifier] = ACTIONS(1822),
    [sym_comment] = ACTIONS(58),
  },
  [772] = {
    [anon_sym_GT] = ACTIONS(1824),
    [anon_sym_AMP] = ACTIONS(1824),
    [anon_sym_COMMA] = ACTIONS(1824),
    [anon_sym_LBRACE] = ACTIONS(1824),
    [anon_sym_DOT] = ACTIONS(1824),
    [anon_sym_LBRACK] = ACTIONS(1824),
    [anon_sym_AT] = ACTIONS(1824),
    [anon_sym_implements] = ACTIONS(1824),
    [anon_sym_COLON_COLON] = ACTIONS(1824),
    [sym_comment] = ACTIONS(58),
  },
  [773] = {
    [sym_type_arguments] = STATE(899),
    [anon_sym_GT] = ACTIONS(1824),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(1824),
    [anon_sym_COMMA] = ACTIONS(1824),
    [anon_sym_LBRACE] = ACTIONS(1824),
    [anon_sym_DOT] = ACTIONS(1824),
    [anon_sym_LBRACK] = ACTIONS(1824),
    [anon_sym_AT] = ACTIONS(1824),
    [anon_sym_COLON_COLON] = ACTIONS(1824),
    [sym_comment] = ACTIONS(58),
  },
  [774] = {
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_EQ_EQ] = ACTIONS(637),
    [anon_sym_GT_EQ] = ACTIONS(637),
    [anon_sym_LT_EQ] = ACTIONS(637),
    [anon_sym_BANG_EQ] = ACTIONS(637),
    [anon_sym_AMP_AMP] = ACTIONS(639),
    [anon_sym_PIPE_PIPE] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [anon_sym_STAR] = ACTIONS(645),
    [anon_sym_SLASH] = ACTIONS(647),
    [anon_sym_AMP] = ACTIONS(649),
    [anon_sym_PIPE] = ACTIONS(651),
    [anon_sym_CARET] = ACTIONS(641),
    [anon_sym_PERCENT] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_GT_GT_GT] = ACTIONS(645),
    [anon_sym_QMARK] = ACTIONS(653),
    [anon_sym_COLON] = ACTIONS(1301),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [775] = {
    [anon_sym_GT] = ACTIONS(657),
    [anon_sym_LT] = ACTIONS(657),
    [anon_sym_EQ_EQ] = ACTIONS(659),
    [anon_sym_GT_EQ] = ACTIONS(659),
    [anon_sym_LT_EQ] = ACTIONS(659),
    [anon_sym_BANG_EQ] = ACTIONS(659),
    [anon_sym_AMP_AMP] = ACTIONS(661),
    [anon_sym_PIPE_PIPE] = ACTIONS(663),
    [anon_sym_PLUS] = ACTIONS(665),
    [anon_sym_DASH] = ACTIONS(665),
    [anon_sym_STAR] = ACTIONS(667),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_AMP] = ACTIONS(671),
    [anon_sym_PIPE] = ACTIONS(673),
    [anon_sym_CARET] = ACTIONS(663),
    [anon_sym_PERCENT] = ACTIONS(667),
    [anon_sym_LT_LT] = ACTIONS(667),
    [anon_sym_GT_GT] = ACTIONS(669),
    [anon_sym_GT_GT_GT] = ACTIONS(667),
    [anon_sym_QMARK] = ACTIONS(675),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(1301),
    [sym_comment] = ACTIONS(58),
  },
  [776] = {
    [sym__semicolon] = ACTIONS(1017),
    [anon_sym_LBRACE] = ACTIONS(1017),
    [anon_sym_default] = ACTIONS(1017),
    [anon_sym_LBRACK] = ACTIONS(1017),
    [anon_sym_AT] = ACTIONS(1017),
    [anon_sym_throws] = ACTIONS(1017),
    [sym_comment] = ACTIONS(58),
  },
  [777] = {
    [anon_sym_RBRACK] = ACTIONS(1826),
    [sym_comment] = ACTIONS(58),
  },
  [778] = {
    [anon_sym_DOT] = ACTIONS(1620),
    [anon_sym_AT] = ACTIONS(1620),
    [sym_identifier] = ACTIONS(1828),
    [sym_comment] = ACTIONS(58),
  },
  [779] = {
    [sym_type_arguments] = STATE(901),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(1620),
    [anon_sym_AT] = ACTIONS(1620),
    [sym_identifier] = ACTIONS(1828),
    [sym_comment] = ACTIONS(58),
  },
  [780] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1830),
    [sym_comment] = ACTIONS(58),
  },
  [781] = {
    [anon_sym_DOT] = ACTIONS(1321),
    [anon_sym_AT] = ACTIONS(1626),
    [sym_identifier] = ACTIONS(1832),
    [sym_comment] = ACTIONS(58),
  },
  [782] = {
    [anon_sym_GT] = ACTIONS(633),
    [anon_sym_LT] = ACTIONS(633),
    [anon_sym_EQ_EQ] = ACTIONS(631),
    [anon_sym_GT_EQ] = ACTIONS(631),
    [anon_sym_LT_EQ] = ACTIONS(631),
    [anon_sym_BANG_EQ] = ACTIONS(631),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(1353),
    [anon_sym_SLASH] = ACTIONS(1355),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(1353),
    [anon_sym_LT_LT] = ACTIONS(1353),
    [anon_sym_GT_GT] = ACTIONS(1355),
    [anon_sym_GT_GT_GT] = ACTIONS(1353),
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [783] = {
    [anon_sym_GT] = ACTIONS(1343),
    [anon_sym_LT] = ACTIONS(1343),
    [anon_sym_EQ_EQ] = ACTIONS(1345),
    [anon_sym_GT_EQ] = ACTIONS(1345),
    [anon_sym_LT_EQ] = ACTIONS(1345),
    [anon_sym_BANG_EQ] = ACTIONS(1345),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(1351),
    [anon_sym_DASH] = ACTIONS(1351),
    [anon_sym_STAR] = ACTIONS(1353),
    [anon_sym_SLASH] = ACTIONS(1355),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(1353),
    [anon_sym_LT_LT] = ACTIONS(1353),
    [anon_sym_GT_GT] = ACTIONS(1355),
    [anon_sym_GT_GT_GT] = ACTIONS(1353),
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [784] = {
    [anon_sym_GT] = ACTIONS(1343),
    [anon_sym_LT] = ACTIONS(1343),
    [anon_sym_EQ_EQ] = ACTIONS(1345),
    [anon_sym_GT_EQ] = ACTIONS(1345),
    [anon_sym_LT_EQ] = ACTIONS(1345),
    [anon_sym_BANG_EQ] = ACTIONS(1345),
    [anon_sym_AMP_AMP] = ACTIONS(1347),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(1351),
    [anon_sym_DASH] = ACTIONS(1351),
    [anon_sym_STAR] = ACTIONS(1353),
    [anon_sym_SLASH] = ACTIONS(1355),
    [anon_sym_AMP] = ACTIONS(1357),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(1353),
    [anon_sym_LT_LT] = ACTIONS(1353),
    [anon_sym_GT_GT] = ACTIONS(1355),
    [anon_sym_GT_GT_GT] = ACTIONS(1353),
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [785] = {
    [anon_sym_GT] = ACTIONS(1343),
    [anon_sym_LT] = ACTIONS(1343),
    [anon_sym_EQ_EQ] = ACTIONS(1345),
    [anon_sym_GT_EQ] = ACTIONS(1345),
    [anon_sym_LT_EQ] = ACTIONS(1345),
    [anon_sym_BANG_EQ] = ACTIONS(1345),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(1353),
    [anon_sym_SLASH] = ACTIONS(1355),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(1353),
    [anon_sym_LT_LT] = ACTIONS(1353),
    [anon_sym_GT_GT] = ACTIONS(1355),
    [anon_sym_GT_GT_GT] = ACTIONS(1353),
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [786] = {
    [anon_sym_LPAREN] = ACTIONS(1834),
    [sym_comment] = ACTIONS(58),
  },
  [787] = {
    [anon_sym_RBRACE] = ACTIONS(1836),
    [anon_sym_default] = ACTIONS(1836),
    [anon_sym_if] = ACTIONS(1836),
    [anon_sym_AT] = ACTIONS(1836),
    [anon_sym_static] = ACTIONS(1836),
    [anon_sym_class] = ACTIONS(1836),
    [anon_sym_public] = ACTIONS(1836),
    [anon_sym_protected] = ACTIONS(1836),
    [anon_sym_private] = ACTIONS(1836),
    [anon_sym_abstract] = ACTIONS(1836),
    [anon_sym_final] = ACTIONS(1836),
    [anon_sym_strictfp] = ACTIONS(1836),
    [anon_sym_synchronized] = ACTIONS(1836),
    [anon_sym_native] = ACTIONS(1836),
    [sym_comment] = ACTIONS(58),
  },
  [788] = {
    [anon_sym_else] = ACTIONS(1838),
    [sym_comment] = ACTIONS(58),
  },
  [789] = {
    [anon_sym_else] = ACTIONS(1840),
    [sym_comment] = ACTIONS(58),
  },
  [790] = {
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_EQ_EQ] = ACTIONS(637),
    [anon_sym_GT_EQ] = ACTIONS(637),
    [anon_sym_LT_EQ] = ACTIONS(637),
    [anon_sym_BANG_EQ] = ACTIONS(637),
    [anon_sym_AMP_AMP] = ACTIONS(639),
    [anon_sym_PIPE_PIPE] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [anon_sym_STAR] = ACTIONS(645),
    [anon_sym_SLASH] = ACTIONS(647),
    [anon_sym_AMP] = ACTIONS(649),
    [anon_sym_PIPE] = ACTIONS(651),
    [anon_sym_CARET] = ACTIONS(641),
    [anon_sym_PERCENT] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_GT_GT_GT] = ACTIONS(645),
    [anon_sym_QMARK] = ACTIONS(653),
    [anon_sym_COLON] = ACTIONS(1842),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [791] = {
    [anon_sym_default] = ACTIONS(1131),
    [anon_sym_boolean] = ACTIONS(1131),
    [anon_sym_byte] = ACTIONS(1131),
    [anon_sym_short] = ACTIONS(1131),
    [anon_sym_int] = ACTIONS(1131),
    [anon_sym_long] = ACTIONS(1131),
    [anon_sym_char] = ACTIONS(1131),
    [anon_sym_float] = ACTIONS(1131),
    [anon_sym_double] = ACTIONS(1131),
    [anon_sym_AT] = ACTIONS(1129),
    [anon_sym_static] = ACTIONS(1131),
    [anon_sym_class] = ACTIONS(1131),
    [anon_sym_public] = ACTIONS(1131),
    [anon_sym_protected] = ACTIONS(1131),
    [anon_sym_private] = ACTIONS(1131),
    [anon_sym_abstract] = ACTIONS(1131),
    [anon_sym_final] = ACTIONS(1131),
    [anon_sym_strictfp] = ACTIONS(1131),
    [anon_sym_synchronized] = ACTIONS(1131),
    [anon_sym_native] = ACTIONS(1131),
    [sym_identifier] = ACTIONS(1133),
    [sym_comment] = ACTIONS(58),
  },
  [792] = {
    [anon_sym_default] = ACTIONS(1137),
    [anon_sym_boolean] = ACTIONS(1137),
    [anon_sym_byte] = ACTIONS(1137),
    [anon_sym_short] = ACTIONS(1137),
    [anon_sym_int] = ACTIONS(1137),
    [anon_sym_long] = ACTIONS(1137),
    [anon_sym_char] = ACTIONS(1137),
    [anon_sym_float] = ACTIONS(1137),
    [anon_sym_double] = ACTIONS(1137),
    [anon_sym_AT] = ACTIONS(1135),
    [anon_sym_static] = ACTIONS(1137),
    [anon_sym_class] = ACTIONS(1137),
    [anon_sym_public] = ACTIONS(1137),
    [anon_sym_protected] = ACTIONS(1137),
    [anon_sym_private] = ACTIONS(1137),
    [anon_sym_abstract] = ACTIONS(1137),
    [anon_sym_final] = ACTIONS(1137),
    [anon_sym_strictfp] = ACTIONS(1137),
    [anon_sym_synchronized] = ACTIONS(1137),
    [anon_sym_native] = ACTIONS(1137),
    [sym_identifier] = ACTIONS(1139),
    [sym_comment] = ACTIONS(58),
  },
  [793] = {
    [anon_sym_RBRACE] = ACTIONS(1237),
    [anon_sym_default] = ACTIONS(1237),
    [anon_sym_if] = ACTIONS(1237),
    [anon_sym_DOT] = ACTIONS(1237),
    [anon_sym_LBRACK] = ACTIONS(1237),
    [anon_sym_AT] = ACTIONS(1237),
    [anon_sym_static] = ACTIONS(1237),
    [anon_sym_class] = ACTIONS(1237),
    [anon_sym_public] = ACTIONS(1237),
    [anon_sym_protected] = ACTIONS(1237),
    [anon_sym_private] = ACTIONS(1237),
    [anon_sym_abstract] = ACTIONS(1237),
    [anon_sym_final] = ACTIONS(1237),
    [anon_sym_strictfp] = ACTIONS(1237),
    [anon_sym_synchronized] = ACTIONS(1237),
    [anon_sym_native] = ACTIONS(1237),
    [anon_sym_COLON_COLON] = ACTIONS(1237),
    [sym_comment] = ACTIONS(58),
  },
  [794] = {
    [sym_class_body] = STATE(906),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [sym_comment] = ACTIONS(58),
  },
  [795] = {
    [anon_sym_RBRACE] = ACTIONS(1257),
    [anon_sym_default] = ACTIONS(1257),
    [anon_sym_if] = ACTIONS(1257),
    [anon_sym_AT] = ACTIONS(1257),
    [anon_sym_static] = ACTIONS(1257),
    [anon_sym_class] = ACTIONS(1257),
    [anon_sym_public] = ACTIONS(1257),
    [anon_sym_protected] = ACTIONS(1257),
    [anon_sym_private] = ACTIONS(1257),
    [anon_sym_abstract] = ACTIONS(1257),
    [anon_sym_final] = ACTIONS(1257),
    [anon_sym_strictfp] = ACTIONS(1257),
    [anon_sym_synchronized] = ACTIONS(1257),
    [anon_sym_native] = ACTIONS(1257),
    [sym_comment] = ACTIONS(58),
  },
  [796] = {
    [sym_super_interfaces] = STATE(907),
    [sym_class_body] = STATE(906),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [797] = {
    [ts_builtin_sym_end] = ACTIONS(1844),
    [sym_decimal_integer_literal] = ACTIONS(1846),
    [sym_hex_integer_literal] = ACTIONS(1846),
    [sym_octal_integer_literal] = ACTIONS(1846),
    [sym_binary_integer_literal] = ACTIONS(1846),
    [sym_decimal_floating_point_literal] = ACTIONS(1846),
    [sym_hex_floating_point_literal] = ACTIONS(1848),
    [anon_sym_true] = ACTIONS(1846),
    [anon_sym_false] = ACTIONS(1846),
    [anon_sym_SQUOTE] = ACTIONS(1844),
    [sym_string_literal] = ACTIONS(1844),
    [sym_null_literal] = ACTIONS(1846),
    [anon_sym_LT] = ACTIONS(1844),
    [anon_sym_LPAREN] = ACTIONS(1844),
    [anon_sym_BANG] = ACTIONS(1844),
    [anon_sym_TILDE] = ACTIONS(1844),
    [anon_sym_PLUS_PLUS] = ACTIONS(1844),
    [anon_sym_DASH_DASH] = ACTIONS(1844),
    [anon_sym_default] = ACTIONS(1846),
    [anon_sym_boolean] = ACTIONS(1846),
    [anon_sym_byte] = ACTIONS(1846),
    [anon_sym_short] = ACTIONS(1846),
    [anon_sym_int] = ACTIONS(1846),
    [anon_sym_long] = ACTIONS(1846),
    [anon_sym_char] = ACTIONS(1846),
    [anon_sym_float] = ACTIONS(1846),
    [anon_sym_double] = ACTIONS(1846),
    [anon_sym_AT] = ACTIONS(1844),
    [anon_sym_open] = ACTIONS(1846),
    [anon_sym_module] = ACTIONS(1846),
    [anon_sym_static] = ACTIONS(1846),
    [anon_sym_package] = ACTIONS(1846),
    [anon_sym_import] = ACTIONS(1846),
    [anon_sym_class] = ACTIONS(1846),
    [anon_sym_public] = ACTIONS(1846),
    [anon_sym_protected] = ACTIONS(1846),
    [anon_sym_private] = ACTIONS(1846),
    [anon_sym_abstract] = ACTIONS(1846),
    [anon_sym_final] = ACTIONS(1846),
    [anon_sym_strictfp] = ACTIONS(1846),
    [anon_sym_synchronized] = ACTIONS(1846),
    [anon_sym_native] = ACTIONS(1846),
    [anon_sym_interface] = ACTIONS(1846),
    [sym_identifier] = ACTIONS(1848),
    [sym_comment] = ACTIONS(58),
  },
  [798] = {
    [ts_builtin_sym_end] = ACTIONS(1850),
    [sym_decimal_integer_literal] = ACTIONS(1852),
    [sym_hex_integer_literal] = ACTIONS(1852),
    [sym_octal_integer_literal] = ACTIONS(1852),
    [sym_binary_integer_literal] = ACTIONS(1852),
    [sym_decimal_floating_point_literal] = ACTIONS(1852),
    [sym_hex_floating_point_literal] = ACTIONS(1854),
    [anon_sym_true] = ACTIONS(1852),
    [anon_sym_false] = ACTIONS(1852),
    [anon_sym_SQUOTE] = ACTIONS(1850),
    [sym_string_literal] = ACTIONS(1850),
    [sym_null_literal] = ACTIONS(1852),
    [anon_sym_LT] = ACTIONS(1850),
    [anon_sym_LPAREN] = ACTIONS(1850),
    [anon_sym_BANG] = ACTIONS(1850),
    [anon_sym_TILDE] = ACTIONS(1850),
    [anon_sym_PLUS_PLUS] = ACTIONS(1850),
    [anon_sym_DASH_DASH] = ACTIONS(1850),
    [anon_sym_default] = ACTIONS(1852),
    [anon_sym_boolean] = ACTIONS(1852),
    [anon_sym_byte] = ACTIONS(1852),
    [anon_sym_short] = ACTIONS(1852),
    [anon_sym_int] = ACTIONS(1852),
    [anon_sym_long] = ACTIONS(1852),
    [anon_sym_char] = ACTIONS(1852),
    [anon_sym_float] = ACTIONS(1852),
    [anon_sym_double] = ACTIONS(1852),
    [anon_sym_AT] = ACTIONS(1850),
    [anon_sym_open] = ACTIONS(1852),
    [anon_sym_module] = ACTIONS(1852),
    [anon_sym_static] = ACTIONS(1852),
    [anon_sym_package] = ACTIONS(1852),
    [anon_sym_import] = ACTIONS(1852),
    [anon_sym_class] = ACTIONS(1852),
    [anon_sym_public] = ACTIONS(1852),
    [anon_sym_protected] = ACTIONS(1852),
    [anon_sym_private] = ACTIONS(1852),
    [anon_sym_abstract] = ACTIONS(1852),
    [anon_sym_final] = ACTIONS(1852),
    [anon_sym_strictfp] = ACTIONS(1852),
    [anon_sym_synchronized] = ACTIONS(1852),
    [anon_sym_native] = ACTIONS(1852),
    [anon_sym_interface] = ACTIONS(1852),
    [sym_identifier] = ACTIONS(1854),
    [sym_comment] = ACTIONS(58),
  },
  [799] = {
    [sym_dims] = STATE(910),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_default_value] = STATE(911),
    [aux_sym_class_or_interface_type_repeat1] = STATE(497),
    [aux_sym_dims_repeat1] = STATE(498),
    [sym__semicolon] = ACTIONS(1856),
    [anon_sym_default] = ACTIONS(1858),
    [anon_sym_LBRACK] = ACTIONS(999),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [800] = {
    [anon_sym_RPAREN] = ACTIONS(1860),
    [sym_comment] = ACTIONS(58),
  },
  [801] = {
    [sym__expression] = STATE(913),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [802] = {
    [sym__expression] = STATE(914),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [803] = {
    [sym__expression] = STATE(915),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [804] = {
    [sym__expression] = STATE(916),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [805] = {
    [sym__expression] = STATE(198),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [806] = {
    [sym__expression] = STATE(917),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [807] = {
    [sym__semicolon] = ACTIONS(1862),
    [anon_sym_RPAREN] = ACTIONS(1862),
    [anon_sym_COMMA] = ACTIONS(1862),
    [anon_sym_RBRACE] = ACTIONS(1862),
    [sym_comment] = ACTIONS(58),
  },
  [808] = {
    [sym__expression] = STATE(78),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1674),
    [anon_sym_TILDE] = ACTIONS(1674),
    [anon_sym_PLUS_PLUS] = ACTIONS(1676),
    [anon_sym_DASH_DASH] = ACTIONS(1676),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [809] = {
    [sym__expression] = STATE(79),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1674),
    [anon_sym_TILDE] = ACTIONS(1674),
    [anon_sym_PLUS_PLUS] = ACTIONS(1676),
    [anon_sym_DASH_DASH] = ACTIONS(1676),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [810] = {
    [anon_sym_GT] = ACTIONS(1864),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(1866),
    [anon_sym_LT_EQ] = ACTIONS(1866),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(323),
    [anon_sym_PIPE_PIPE] = ACTIONS(323),
    [anon_sym_PLUS] = ACTIONS(325),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(1868),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_CARET] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(323),
    [anon_sym_LT_LT] = ACTIONS(323),
    [anon_sym_GT_GT] = ACTIONS(325),
    [anon_sym_GT_GT_GT] = ACTIONS(323),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_QMARK] = ACTIONS(323),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(323),
    [sym_comment] = ACTIONS(58),
  },
  [811] = {
    [sym__literal] = STATE(550),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(551),
    [sym__annotation] = STATE(550),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_element_value] = STATE(925),
    [sym_element_value_array_initializer] = STATE(550),
    [sym_conditional_expression] = STATE(550),
    [sym_conditional_or_expression] = STATE(689),
    [sym_conditional_and_expression] = STATE(690),
    [sym_inclusive_or_expression] = STATE(691),
    [sym_exclusive_or_expression] = STATE(692),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(693),
    [sym_equality_expression] = STATE(694),
    [sym_shift_expression] = STATE(695),
    [sym_additive_expression] = STATE(696),
    [sym_multiplicative_expression] = STATE(697),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1123),
    [anon_sym_false] = ACTIONS(1123),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [anon_sym_LBRACE] = ACTIONS(1127),
    [anon_sym_RBRACE] = ACTIONS(1870),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [812] = {
    [anon_sym_COMMA] = ACTIONS(1872),
    [anon_sym_RBRACE] = ACTIONS(1870),
    [sym_comment] = ACTIONS(58),
  },
  [813] = {
    [sym_unary_expression] = STATE(551),
    [sym_conditional_and_expression] = STATE(927),
    [sym_inclusive_or_expression] = STATE(691),
    [sym_exclusive_or_expression] = STATE(692),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(693),
    [sym_equality_expression] = STATE(694),
    [sym_shift_expression] = STATE(695),
    [sym_additive_expression] = STATE(696),
    [sym_multiplicative_expression] = STATE(697),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [sym_comment] = ACTIONS(58),
  },
  [814] = {
    [sym__expression] = STATE(928),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [815] = {
    [sym_unary_expression] = STATE(551),
    [sym_inclusive_or_expression] = STATE(929),
    [sym_exclusive_or_expression] = STATE(692),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(693),
    [sym_equality_expression] = STATE(694),
    [sym_shift_expression] = STATE(695),
    [sym_additive_expression] = STATE(696),
    [sym_multiplicative_expression] = STATE(697),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [sym_comment] = ACTIONS(58),
  },
  [816] = {
    [sym_unary_expression] = STATE(551),
    [sym_exclusive_or_expression] = STATE(930),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(693),
    [sym_equality_expression] = STATE(694),
    [sym_shift_expression] = STATE(695),
    [sym_additive_expression] = STATE(696),
    [sym_multiplicative_expression] = STATE(697),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [sym_comment] = ACTIONS(58),
  },
  [817] = {
    [sym_unary_expression] = STATE(551),
    [sym_and_expression] = STATE(827),
    [sym_relational_expression] = STATE(693),
    [sym_equality_expression] = STATE(694),
    [sym_shift_expression] = STATE(695),
    [sym_additive_expression] = STATE(696),
    [sym_multiplicative_expression] = STATE(697),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [sym_comment] = ACTIONS(58),
  },
  [818] = {
    [sym_unary_expression] = STATE(551),
    [sym_shift_expression] = STATE(931),
    [sym_additive_expression] = STATE(696),
    [sym_multiplicative_expression] = STATE(697),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [sym_comment] = ACTIONS(58),
  },
  [819] = {
    [sym_unary_expression] = STATE(551),
    [sym_relational_expression] = STATE(932),
    [sym_shift_expression] = STATE(695),
    [sym_additive_expression] = STATE(696),
    [sym_multiplicative_expression] = STATE(697),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [sym_comment] = ACTIONS(58),
  },
  [820] = {
    [sym_unary_expression] = STATE(551),
    [sym_additive_expression] = STATE(933),
    [sym_multiplicative_expression] = STATE(697),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [sym_comment] = ACTIONS(58),
  },
  [821] = {
    [sym_unary_expression] = STATE(551),
    [sym_multiplicative_expression] = STATE(934),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [sym_comment] = ACTIONS(58),
  },
  [822] = {
    [sym_unary_expression] = STATE(832),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [sym_comment] = ACTIONS(58),
  },
  [823] = {
    [anon_sym_AMP_AMP] = ACTIONS(1443),
    [anon_sym_PIPE_PIPE] = ACTIONS(1874),
    [anon_sym_RPAREN] = ACTIONS(1874),
    [anon_sym_COMMA] = ACTIONS(1874),
    [anon_sym_QMARK] = ACTIONS(1874),
    [sym_comment] = ACTIONS(58),
  },
  [824] = {
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_EQ_EQ] = ACTIONS(637),
    [anon_sym_GT_EQ] = ACTIONS(637),
    [anon_sym_LT_EQ] = ACTIONS(637),
    [anon_sym_BANG_EQ] = ACTIONS(637),
    [anon_sym_AMP_AMP] = ACTIONS(639),
    [anon_sym_PIPE_PIPE] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [anon_sym_STAR] = ACTIONS(645),
    [anon_sym_SLASH] = ACTIONS(647),
    [anon_sym_AMP] = ACTIONS(649),
    [anon_sym_PIPE] = ACTIONS(651),
    [anon_sym_CARET] = ACTIONS(641),
    [anon_sym_PERCENT] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_GT_GT_GT] = ACTIONS(645),
    [anon_sym_QMARK] = ACTIONS(653),
    [anon_sym_COLON] = ACTIONS(1876),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [825] = {
    [anon_sym_AMP_AMP] = ACTIONS(1878),
    [anon_sym_PIPE_PIPE] = ACTIONS(1878),
    [anon_sym_PIPE] = ACTIONS(1449),
    [anon_sym_RPAREN] = ACTIONS(1878),
    [anon_sym_COMMA] = ACTIONS(1878),
    [anon_sym_QMARK] = ACTIONS(1878),
    [sym_comment] = ACTIONS(58),
  },
  [826] = {
    [anon_sym_AMP_AMP] = ACTIONS(1880),
    [anon_sym_PIPE_PIPE] = ACTIONS(1880),
    [anon_sym_PIPE] = ACTIONS(1882),
    [anon_sym_CARET] = ACTIONS(1455),
    [anon_sym_RPAREN] = ACTIONS(1880),
    [anon_sym_COMMA] = ACTIONS(1880),
    [anon_sym_QMARK] = ACTIONS(1880),
    [sym_comment] = ACTIONS(58),
  },
  [827] = {
    [sym__semicolon] = ACTIONS(1884),
    [anon_sym_AMP_AMP] = ACTIONS(1884),
    [anon_sym_PIPE_PIPE] = ACTIONS(1884),
    [anon_sym_PIPE] = ACTIONS(1886),
    [anon_sym_CARET] = ACTIONS(1884),
    [anon_sym_RPAREN] = ACTIONS(1884),
    [anon_sym_COMMA] = ACTIONS(1884),
    [anon_sym_QMARK] = ACTIONS(1884),
    [anon_sym_RBRACE] = ACTIONS(1884),
    [sym_comment] = ACTIONS(58),
  },
  [828] = {
    [anon_sym_LT] = ACTIONS(1888),
    [anon_sym_EQ_EQ] = ACTIONS(1890),
    [anon_sym_BANG_EQ] = ACTIONS(1890),
    [anon_sym_AMP_AMP] = ACTIONS(1890),
    [anon_sym_PIPE_PIPE] = ACTIONS(1890),
    [anon_sym_PIPE] = ACTIONS(1888),
    [anon_sym_CARET] = ACTIONS(1890),
    [anon_sym_LT_LT] = ACTIONS(1475),
    [anon_sym_GT_GT] = ACTIONS(1477),
    [anon_sym_GT_GT_GT] = ACTIONS(1475),
    [anon_sym_RPAREN] = ACTIONS(1890),
    [anon_sym_COMMA] = ACTIONS(1890),
    [anon_sym_QMARK] = ACTIONS(1890),
    [sym_comment] = ACTIONS(58),
  },
  [829] = {
    [anon_sym_LT] = ACTIONS(1461),
    [anon_sym_EQ_EQ] = ACTIONS(1892),
    [anon_sym_BANG_EQ] = ACTIONS(1892),
    [anon_sym_AMP_AMP] = ACTIONS(1894),
    [anon_sym_PIPE_PIPE] = ACTIONS(1894),
    [anon_sym_PIPE] = ACTIONS(1896),
    [anon_sym_CARET] = ACTIONS(1894),
    [anon_sym_RPAREN] = ACTIONS(1894),
    [anon_sym_COMMA] = ACTIONS(1894),
    [anon_sym_QMARK] = ACTIONS(1894),
    [sym_comment] = ACTIONS(58),
  },
  [830] = {
    [anon_sym_LT] = ACTIONS(1898),
    [anon_sym_EQ_EQ] = ACTIONS(1900),
    [anon_sym_BANG_EQ] = ACTIONS(1900),
    [anon_sym_AMP_AMP] = ACTIONS(1900),
    [anon_sym_PIPE_PIPE] = ACTIONS(1900),
    [anon_sym_PLUS] = ACTIONS(1483),
    [anon_sym_DASH] = ACTIONS(1483),
    [anon_sym_PIPE] = ACTIONS(1898),
    [anon_sym_CARET] = ACTIONS(1900),
    [anon_sym_LT_LT] = ACTIONS(1900),
    [anon_sym_GT_GT] = ACTIONS(1898),
    [anon_sym_GT_GT_GT] = ACTIONS(1900),
    [anon_sym_RPAREN] = ACTIONS(1900),
    [anon_sym_COMMA] = ACTIONS(1900),
    [anon_sym_QMARK] = ACTIONS(1900),
    [sym_comment] = ACTIONS(58),
  },
  [831] = {
    [anon_sym_LT] = ACTIONS(1902),
    [anon_sym_EQ_EQ] = ACTIONS(1904),
    [anon_sym_BANG_EQ] = ACTIONS(1904),
    [anon_sym_AMP_AMP] = ACTIONS(1904),
    [anon_sym_PIPE_PIPE] = ACTIONS(1904),
    [anon_sym_PLUS] = ACTIONS(1904),
    [anon_sym_DASH] = ACTIONS(1904),
    [anon_sym_STAR] = ACTIONS(1489),
    [anon_sym_SLASH] = ACTIONS(1491),
    [anon_sym_PIPE] = ACTIONS(1902),
    [anon_sym_CARET] = ACTIONS(1904),
    [anon_sym_PERCENT] = ACTIONS(1489),
    [anon_sym_LT_LT] = ACTIONS(1904),
    [anon_sym_GT_GT] = ACTIONS(1902),
    [anon_sym_GT_GT_GT] = ACTIONS(1904),
    [anon_sym_RPAREN] = ACTIONS(1904),
    [anon_sym_COMMA] = ACTIONS(1904),
    [anon_sym_QMARK] = ACTIONS(1904),
    [sym_comment] = ACTIONS(58),
  },
  [832] = {
    [sym__semicolon] = ACTIONS(1906),
    [anon_sym_LT] = ACTIONS(1908),
    [anon_sym_EQ_EQ] = ACTIONS(1906),
    [anon_sym_BANG_EQ] = ACTIONS(1906),
    [anon_sym_AMP_AMP] = ACTIONS(1906),
    [anon_sym_PIPE_PIPE] = ACTIONS(1906),
    [anon_sym_PLUS] = ACTIONS(1906),
    [anon_sym_DASH] = ACTIONS(1906),
    [anon_sym_STAR] = ACTIONS(1906),
    [anon_sym_SLASH] = ACTIONS(1908),
    [anon_sym_PIPE] = ACTIONS(1908),
    [anon_sym_CARET] = ACTIONS(1906),
    [anon_sym_PERCENT] = ACTIONS(1906),
    [anon_sym_LT_LT] = ACTIONS(1906),
    [anon_sym_GT_GT] = ACTIONS(1908),
    [anon_sym_GT_GT_GT] = ACTIONS(1906),
    [anon_sym_RPAREN] = ACTIONS(1906),
    [anon_sym_COMMA] = ACTIONS(1906),
    [anon_sym_QMARK] = ACTIONS(1906),
    [anon_sym_RBRACE] = ACTIONS(1906),
    [sym_comment] = ACTIONS(58),
  },
  [833] = {
    [anon_sym_RBRACE] = ACTIONS(1910),
    [anon_sym_requires] = ACTIONS(1910),
    [anon_sym_exports] = ACTIONS(1910),
    [anon_sym_opens] = ACTIONS(1910),
    [anon_sym_uses] = ACTIONS(1910),
    [anon_sym_provides] = ACTIONS(1910),
    [sym_comment] = ACTIONS(58),
  },
  [834] = {
    [sym__semicolon] = ACTIONS(1912),
    [anon_sym_COMMA] = ACTIONS(1515),
    [sym_comment] = ACTIONS(58),
  },
  [835] = {
    [sym__semicolon] = ACTIONS(1914),
    [anon_sym_COMMA] = ACTIONS(1914),
    [anon_sym_DOT] = ACTIONS(1169),
    [sym_comment] = ACTIONS(58),
  },
  [836] = {
    [sym_package_or_type_name] = STATE(937),
    [sym_identifier] = ACTIONS(357),
    [sym_comment] = ACTIONS(58),
  },
  [837] = {
    [sym__semicolon] = ACTIONS(1912),
    [anon_sym_COMMA] = ACTIONS(1916),
    [sym_comment] = ACTIONS(58),
  },
  [838] = {
    [sym__semicolon] = ACTIONS(1101),
    [anon_sym_LT] = ACTIONS(1101),
    [anon_sym_LBRACE] = ACTIONS(1101),
    [anon_sym_RBRACE] = ACTIONS(1101),
    [anon_sym_default] = ACTIONS(1103),
    [anon_sym_boolean] = ACTIONS(1103),
    [anon_sym_byte] = ACTIONS(1103),
    [anon_sym_short] = ACTIONS(1103),
    [anon_sym_int] = ACTIONS(1103),
    [anon_sym_long] = ACTIONS(1103),
    [anon_sym_char] = ACTIONS(1103),
    [anon_sym_float] = ACTIONS(1103),
    [anon_sym_double] = ACTIONS(1103),
    [anon_sym_AT] = ACTIONS(1101),
    [anon_sym_static] = ACTIONS(1103),
    [anon_sym_class] = ACTIONS(1103),
    [anon_sym_public] = ACTIONS(1103),
    [anon_sym_protected] = ACTIONS(1103),
    [anon_sym_private] = ACTIONS(1103),
    [anon_sym_abstract] = ACTIONS(1103),
    [anon_sym_final] = ACTIONS(1103),
    [anon_sym_strictfp] = ACTIONS(1103),
    [anon_sym_synchronized] = ACTIONS(1103),
    [anon_sym_native] = ACTIONS(1103),
    [anon_sym_interface] = ACTIONS(1103),
    [sym_identifier] = ACTIONS(1105),
    [sym_comment] = ACTIONS(58),
  },
  [839] = {
    [sym_integral_type] = STATE(12),
    [sym_floating_point_type] = STATE(12),
    [sym__annotation] = STATE(11),
    [sym_normal_annotation] = STATE(126),
    [sym_marker_annotation] = STATE(126),
    [sym_single_element_annotation] = STATE(126),
    [sym_class_declaration] = STATE(407),
    [sym_normal_class_declaration] = STATE(299),
    [sym_modifier] = STATE(36),
    [sym_interface_declaration] = STATE(407),
    [sym_annotation_type_declaration] = STATE(304),
    [sym_annotation_type_member_declaration] = STATE(547),
    [sym_annotation_type_element_declaration] = STATE(407),
    [sym_normal_interface_declaration] = STATE(304),
    [sym_constant_declaration] = STATE(407),
    [sym_unann_type] = STATE(409),
    [sym_unann_primitive_type] = STATE(40),
    [sym_unann_class_or_interface_type] = STATE(41),
    [sym_unann_array_type] = STATE(42),
    [aux_sym_normal_class_declaration_repeat1] = STATE(410),
    [anon_sym_RBRACE] = ACTIONS(1918),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_boolean] = ACTIONS(36),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(587),
    [anon_sym_static] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(589),
    [anon_sym_public] = ACTIONS(34),
    [anon_sym_protected] = ACTIONS(34),
    [anon_sym_private] = ACTIONS(34),
    [anon_sym_abstract] = ACTIONS(34),
    [anon_sym_final] = ACTIONS(34),
    [anon_sym_strictfp] = ACTIONS(34),
    [anon_sym_synchronized] = ACTIONS(34),
    [anon_sym_native] = ACTIONS(34),
    [anon_sym_interface] = ACTIONS(591),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(58),
  },
  [840] = {
    [sym__semicolon] = ACTIONS(1237),
    [anon_sym_LT] = ACTIONS(1237),
    [anon_sym_LBRACE] = ACTIONS(1237),
    [anon_sym_RBRACE] = ACTIONS(1237),
    [anon_sym_default] = ACTIONS(1239),
    [anon_sym_boolean] = ACTIONS(1239),
    [anon_sym_byte] = ACTIONS(1239),
    [anon_sym_short] = ACTIONS(1239),
    [anon_sym_int] = ACTIONS(1239),
    [anon_sym_long] = ACTIONS(1239),
    [anon_sym_char] = ACTIONS(1239),
    [anon_sym_float] = ACTIONS(1239),
    [anon_sym_double] = ACTIONS(1239),
    [anon_sym_AT] = ACTIONS(1237),
    [anon_sym_static] = ACTIONS(1239),
    [anon_sym_class] = ACTIONS(1239),
    [anon_sym_public] = ACTIONS(1239),
    [anon_sym_protected] = ACTIONS(1239),
    [anon_sym_private] = ACTIONS(1239),
    [anon_sym_abstract] = ACTIONS(1239),
    [anon_sym_final] = ACTIONS(1239),
    [anon_sym_strictfp] = ACTIONS(1239),
    [anon_sym_synchronized] = ACTIONS(1239),
    [anon_sym_native] = ACTIONS(1239),
    [anon_sym_interface] = ACTIONS(1239),
    [sym_identifier] = ACTIONS(1241),
    [sym_comment] = ACTIONS(58),
  },
  [841] = {
    [sym_class_body] = STATE(940),
    [anon_sym_LBRACE] = ACTIONS(1197),
    [sym_comment] = ACTIONS(58),
  },
  [842] = {
    [sym__semicolon] = ACTIONS(1257),
    [anon_sym_LT] = ACTIONS(1257),
    [anon_sym_LBRACE] = ACTIONS(1257),
    [anon_sym_RBRACE] = ACTIONS(1257),
    [anon_sym_default] = ACTIONS(1259),
    [anon_sym_boolean] = ACTIONS(1259),
    [anon_sym_byte] = ACTIONS(1259),
    [anon_sym_short] = ACTIONS(1259),
    [anon_sym_int] = ACTIONS(1259),
    [anon_sym_long] = ACTIONS(1259),
    [anon_sym_char] = ACTIONS(1259),
    [anon_sym_float] = ACTIONS(1259),
    [anon_sym_double] = ACTIONS(1259),
    [anon_sym_AT] = ACTIONS(1257),
    [anon_sym_static] = ACTIONS(1259),
    [anon_sym_class] = ACTIONS(1259),
    [anon_sym_public] = ACTIONS(1259),
    [anon_sym_protected] = ACTIONS(1259),
    [anon_sym_private] = ACTIONS(1259),
    [anon_sym_abstract] = ACTIONS(1259),
    [anon_sym_final] = ACTIONS(1259),
    [anon_sym_strictfp] = ACTIONS(1259),
    [anon_sym_synchronized] = ACTIONS(1259),
    [anon_sym_native] = ACTIONS(1259),
    [anon_sym_interface] = ACTIONS(1259),
    [sym_identifier] = ACTIONS(1261),
    [sym_comment] = ACTIONS(58),
  },
  [843] = {
    [sym__semicolon] = ACTIONS(1269),
    [anon_sym_LT] = ACTIONS(1269),
    [anon_sym_LBRACE] = ACTIONS(1269),
    [anon_sym_RBRACE] = ACTIONS(1269),
    [anon_sym_default] = ACTIONS(1271),
    [anon_sym_boolean] = ACTIONS(1271),
    [anon_sym_byte] = ACTIONS(1271),
    [anon_sym_short] = ACTIONS(1271),
    [anon_sym_int] = ACTIONS(1271),
    [anon_sym_long] = ACTIONS(1271),
    [anon_sym_char] = ACTIONS(1271),
    [anon_sym_float] = ACTIONS(1271),
    [anon_sym_double] = ACTIONS(1271),
    [anon_sym_AT] = ACTIONS(1269),
    [anon_sym_static] = ACTIONS(1271),
    [anon_sym_class] = ACTIONS(1271),
    [anon_sym_public] = ACTIONS(1271),
    [anon_sym_protected] = ACTIONS(1271),
    [anon_sym_private] = ACTIONS(1271),
    [anon_sym_abstract] = ACTIONS(1271),
    [anon_sym_final] = ACTIONS(1271),
    [anon_sym_strictfp] = ACTIONS(1271),
    [anon_sym_synchronized] = ACTIONS(1271),
    [anon_sym_native] = ACTIONS(1271),
    [anon_sym_interface] = ACTIONS(1271),
    [sym_identifier] = ACTIONS(1273),
    [sym_comment] = ACTIONS(58),
  },
  [844] = {
    [sym__semicolon] = ACTIONS(1281),
    [anon_sym_LT] = ACTIONS(1281),
    [anon_sym_LBRACE] = ACTIONS(1281),
    [anon_sym_RBRACE] = ACTIONS(1281),
    [anon_sym_default] = ACTIONS(1283),
    [anon_sym_boolean] = ACTIONS(1283),
    [anon_sym_byte] = ACTIONS(1283),
    [anon_sym_short] = ACTIONS(1283),
    [anon_sym_int] = ACTIONS(1283),
    [anon_sym_long] = ACTIONS(1283),
    [anon_sym_char] = ACTIONS(1283),
    [anon_sym_float] = ACTIONS(1283),
    [anon_sym_double] = ACTIONS(1283),
    [anon_sym_AT] = ACTIONS(1281),
    [anon_sym_static] = ACTIONS(1283),
    [anon_sym_class] = ACTIONS(1283),
    [anon_sym_public] = ACTIONS(1283),
    [anon_sym_protected] = ACTIONS(1283),
    [anon_sym_private] = ACTIONS(1283),
    [anon_sym_abstract] = ACTIONS(1283),
    [anon_sym_final] = ACTIONS(1283),
    [anon_sym_strictfp] = ACTIONS(1283),
    [anon_sym_synchronized] = ACTIONS(1283),
    [anon_sym_native] = ACTIONS(1283),
    [anon_sym_interface] = ACTIONS(1283),
    [sym_identifier] = ACTIONS(1285),
    [sym_comment] = ACTIONS(58),
  },
  [845] = {
    [anon_sym_LBRACE] = ACTIONS(1920),
    [anon_sym_throws] = ACTIONS(1920),
    [sym_comment] = ACTIONS(58),
  },
  [846] = {
    [anon_sym_DOT] = ACTIONS(1922),
    [anon_sym_LBRACK] = ACTIONS(1922),
    [anon_sym_COLON_COLON] = ACTIONS(1922),
    [sym_comment] = ACTIONS(58),
  },
  [847] = {
    [anon_sym_DOT] = ACTIONS(1924),
    [anon_sym_LBRACK] = ACTIONS(1924),
    [anon_sym_COLON_COLON] = ACTIONS(1924),
    [sym_comment] = ACTIONS(58),
  },
  [848] = {
    [anon_sym_class] = ACTIONS(1926),
    [sym_comment] = ACTIONS(58),
  },
  [849] = {
    [anon_sym_DOT] = ACTIONS(1928),
    [anon_sym_LBRACK] = ACTIONS(1928),
    [sym_comment] = ACTIONS(58),
  },
  [850] = {
    [sym__semicolon] = ACTIONS(1930),
    [sym_comment] = ACTIONS(58),
  },
  [851] = {
    [aux_sym_argument_list_repeat1] = STATE(944),
    [anon_sym_GT] = ACTIONS(1666),
    [anon_sym_LT] = ACTIONS(1666),
    [anon_sym_EQ_EQ] = ACTIONS(1668),
    [anon_sym_GT_EQ] = ACTIONS(1668),
    [anon_sym_LT_EQ] = ACTIONS(1668),
    [anon_sym_BANG_EQ] = ACTIONS(1668),
    [anon_sym_AMP_AMP] = ACTIONS(1932),
    [anon_sym_PIPE_PIPE] = ACTIONS(1934),
    [anon_sym_PLUS] = ACTIONS(1936),
    [anon_sym_DASH] = ACTIONS(1936),
    [anon_sym_STAR] = ACTIONS(1938),
    [anon_sym_SLASH] = ACTIONS(1940),
    [anon_sym_AMP] = ACTIONS(1670),
    [anon_sym_PIPE] = ACTIONS(1942),
    [anon_sym_CARET] = ACTIONS(1934),
    [anon_sym_PERCENT] = ACTIONS(1938),
    [anon_sym_LT_LT] = ACTIONS(1938),
    [anon_sym_GT_GT] = ACTIONS(1940),
    [anon_sym_GT_GT_GT] = ACTIONS(1938),
    [anon_sym_RPAREN] = ACTIONS(1944),
    [anon_sym_COMMA] = ACTIONS(1946),
    [anon_sym_QMARK] = ACTIONS(1948),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [852] = {
    [anon_sym_RPAREN] = ACTIONS(1950),
    [sym_comment] = ACTIONS(58),
  },
  [853] = {
    [anon_sym_DOT] = ACTIONS(1952),
    [anon_sym_LBRACK] = ACTIONS(1952),
    [anon_sym_COLON_COLON] = ACTIONS(1952),
    [sym_comment] = ACTIONS(58),
  },
  [854] = {
    [anon_sym_DOT] = ACTIONS(1954),
    [anon_sym_LBRACK] = ACTIONS(1954),
    [anon_sym_COLON_COLON] = ACTIONS(1954),
    [sym_comment] = ACTIONS(58),
  },
  [855] = {
    [sym_identifier] = ACTIONS(1956),
    [sym_comment] = ACTIONS(58),
  },
  [856] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(948),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1958),
    [sym_comment] = ACTIONS(58),
  },
  [857] = {
    [anon_sym_LPAREN] = ACTIONS(1960),
    [sym_comment] = ACTIONS(58),
  },
  [858] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(472),
    [anon_sym_LPAREN] = ACTIONS(1960),
    [anon_sym_DOT] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(969),
    [anon_sym_AT] = ACTIONS(969),
    [sym_comment] = ACTIONS(58),
  },
  [859] = {
    [anon_sym_LPAREN] = ACTIONS(1962),
    [sym_comment] = ACTIONS(58),
  },
  [860] = {
    [sym_type_arguments] = STATE(857),
    [sym_type_arguments_or_diamond] = STATE(950),
    [anon_sym_LT] = ACTIONS(1744),
    [anon_sym_LPAREN] = ACTIONS(1962),
    [anon_sym_DOT] = ACTIONS(1964),
    [anon_sym_LT_GT] = ACTIONS(1750),
    [sym_comment] = ACTIONS(58),
  },
  [861] = {
    [sym_type_arguments] = STATE(857),
    [sym_type_arguments_or_diamond] = STATE(859),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(860),
    [anon_sym_LT] = ACTIONS(1744),
    [anon_sym_LPAREN] = ACTIONS(1746),
    [anon_sym_DOT] = ACTIONS(1966),
    [anon_sym_LT_GT] = ACTIONS(1750),
    [sym_comment] = ACTIONS(58),
  },
  [862] = {
    [anon_sym_LPAREN] = ACTIONS(1968),
    [sym_comment] = ACTIONS(58),
  },
  [863] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1970),
    [sym_comment] = ACTIONS(58),
  },
  [864] = {
    [sym_array_initializer] = STATE(955),
    [anon_sym_LBRACE] = ACTIONS(1972),
    [sym_comment] = ACTIONS(58),
  },
  [865] = {
    [sym_dims] = STATE(955),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(113),
    [aux_sym_dims_repeat1] = STATE(114),
    [anon_sym_DOT] = ACTIONS(1974),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_COLON_COLON] = ACTIONS(1974),
    [sym_comment] = ACTIONS(58),
  },
  [866] = {
    [sym__expression] = STATE(851),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(957),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(1976),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [867] = {
    [sym_type_arguments] = STATE(958),
    [sym_type_arguments_or_diamond] = STATE(950),
    [aux_sym_class_or_interface_type_repeat2] = STATE(472),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(959),
    [anon_sym_LT] = ACTIONS(1744),
    [anon_sym_LPAREN] = ACTIONS(1962),
    [anon_sym_DOT] = ACTIONS(1748),
    [anon_sym_LBRACK] = ACTIONS(969),
    [anon_sym_AT] = ACTIONS(969),
    [anon_sym_LT_GT] = ACTIONS(1750),
    [sym_comment] = ACTIONS(58),
  },
  [868] = {
    [sym__expression] = STATE(851),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(960),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(1950),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [869] = {
    [sym__expression] = STATE(78),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1760),
    [anon_sym_TILDE] = ACTIONS(1760),
    [anon_sym_PLUS_PLUS] = ACTIONS(1762),
    [anon_sym_DASH_DASH] = ACTIONS(1762),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [870] = {
    [sym__expression] = STATE(79),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1760),
    [anon_sym_TILDE] = ACTIONS(1760),
    [anon_sym_PLUS_PLUS] = ACTIONS(1762),
    [anon_sym_DASH_DASH] = ACTIONS(1762),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [871] = {
    [anon_sym_GT] = ACTIONS(1978),
    [anon_sym_LT] = ACTIONS(1978),
    [anon_sym_EQ_EQ] = ACTIONS(1980),
    [anon_sym_GT_EQ] = ACTIONS(1980),
    [anon_sym_LT_EQ] = ACTIONS(1980),
    [anon_sym_BANG_EQ] = ACTIONS(1980),
    [anon_sym_AMP_AMP] = ACTIONS(1982),
    [anon_sym_PIPE_PIPE] = ACTIONS(1984),
    [anon_sym_PLUS] = ACTIONS(1986),
    [anon_sym_DASH] = ACTIONS(1986),
    [anon_sym_STAR] = ACTIONS(1988),
    [anon_sym_SLASH] = ACTIONS(1990),
    [anon_sym_AMP] = ACTIONS(1992),
    [anon_sym_PIPE] = ACTIONS(1994),
    [anon_sym_CARET] = ACTIONS(1984),
    [anon_sym_PERCENT] = ACTIONS(1988),
    [anon_sym_LT_LT] = ACTIONS(1988),
    [anon_sym_GT_GT] = ACTIONS(1990),
    [anon_sym_GT_GT_GT] = ACTIONS(1988),
    [anon_sym_QMARK] = ACTIONS(1996),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(1998),
    [sym_comment] = ACTIONS(58),
  },
  [872] = {
    [anon_sym_new] = ACTIONS(2000),
    [sym_comment] = ACTIONS(58),
  },
  [873] = {
    [anon_sym_DOT] = ACTIONS(1974),
    [anon_sym_COLON_COLON] = ACTIONS(1974),
    [sym_comment] = ACTIONS(58),
  },
  [874] = {
    [sym__expression] = STATE(871),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1760),
    [anon_sym_TILDE] = ACTIONS(1760),
    [anon_sym_PLUS_PLUS] = ACTIONS(1762),
    [anon_sym_DASH_DASH] = ACTIONS(1762),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [875] = {
    [anon_sym_DOT] = ACTIONS(2002),
    [anon_sym_LBRACK] = ACTIONS(2002),
    [anon_sym_AT] = ACTIONS(2002),
    [anon_sym_COLON_COLON] = ACTIONS(2002),
    [sym_comment] = ACTIONS(58),
  },
  [876] = {
    [sym__annotation] = STATE(122),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(2004),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [877] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_dims_expr] = STATE(969),
    [aux_sym_class_or_interface_type_repeat1] = STATE(876),
    [anon_sym_DOT] = ACTIONS(2006),
    [anon_sym_LBRACK] = ACTIONS(1772),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_COLON_COLON] = ACTIONS(2006),
    [sym_comment] = ACTIONS(58),
  },
  [878] = {
    [sym__expression] = STATE(970),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1760),
    [anon_sym_TILDE] = ACTIONS(1760),
    [anon_sym_PLUS_PLUS] = ACTIONS(1762),
    [anon_sym_DASH_DASH] = ACTIONS(1762),
    [anon_sym_RBRACK] = ACTIONS(695),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [879] = {
    [anon_sym_DOT] = ACTIONS(2008),
    [anon_sym_COLON_COLON] = ACTIONS(2010),
    [sym_comment] = ACTIONS(58),
  },
  [880] = {
    [anon_sym_LPAREN] = ACTIONS(2012),
    [anon_sym_DOT] = ACTIONS(827),
    [anon_sym_LBRACK] = ACTIONS(827),
    [sym_comment] = ACTIONS(58),
  },
  [881] = {
    [sym_identifier] = ACTIONS(2014),
    [sym_comment] = ACTIONS(58),
  },
  [882] = {
    [sym__semicolon] = ACTIONS(2016),
    [anon_sym_LT] = ACTIONS(2016),
    [anon_sym_LBRACE] = ACTIONS(2016),
    [anon_sym_RBRACE] = ACTIONS(2016),
    [anon_sym_default] = ACTIONS(2018),
    [anon_sym_boolean] = ACTIONS(2018),
    [anon_sym_byte] = ACTIONS(2018),
    [anon_sym_short] = ACTIONS(2018),
    [anon_sym_int] = ACTIONS(2018),
    [anon_sym_long] = ACTIONS(2018),
    [anon_sym_char] = ACTIONS(2018),
    [anon_sym_float] = ACTIONS(2018),
    [anon_sym_double] = ACTIONS(2018),
    [anon_sym_AT] = ACTIONS(2016),
    [anon_sym_static] = ACTIONS(2018),
    [anon_sym_class] = ACTIONS(2018),
    [anon_sym_public] = ACTIONS(2018),
    [anon_sym_protected] = ACTIONS(2018),
    [anon_sym_private] = ACTIONS(2018),
    [anon_sym_abstract] = ACTIONS(2018),
    [anon_sym_final] = ACTIONS(2018),
    [anon_sym_strictfp] = ACTIONS(2018),
    [anon_sym_synchronized] = ACTIONS(2018),
    [anon_sym_native] = ACTIONS(2018),
    [anon_sym_interface] = ACTIONS(2018),
    [sym_identifier] = ACTIONS(2020),
    [sym_comment] = ACTIONS(58),
  },
  [883] = {
    [sym_type_argument] = STATE(975),
    [sym_reference_type] = STATE(190),
    [sym_class_or_interface_type] = STATE(191),
    [sym_primitive_type] = STATE(192),
    [sym_integral_type] = STATE(187),
    [sym_floating_point_type] = STATE(187),
    [sym__annotation] = STATE(104),
    [sym_normal_annotation] = STATE(105),
    [sym_marker_annotation] = STATE(105),
    [sym_single_element_annotation] = STATE(105),
    [aux_sym_class_or_interface_type_repeat1] = STATE(193),
    [anon_sym_boolean] = ACTIONS(375),
    [anon_sym_void] = ACTIONS(375),
    [anon_sym_byte] = ACTIONS(38),
    [anon_sym_short] = ACTIONS(38),
    [anon_sym_int] = ACTIONS(38),
    [anon_sym_long] = ACTIONS(38),
    [anon_sym_char] = ACTIONS(38),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_double] = ACTIONS(40),
    [anon_sym_AT] = ACTIONS(219),
    [sym_identifier] = ACTIONS(377),
    [sym_comment] = ACTIONS(58),
  },
  [884] = {
    [anon_sym_LPAREN] = ACTIONS(2022),
    [sym_comment] = ACTIONS(58),
  },
  [885] = {
    [sym_type_arguments] = STATE(739),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [sym_class_or_interface_type_to_instantiate] = STATE(742),
    [aux_sym_class_or_interface_type_repeat1] = STATE(863),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(1752),
    [sym_comment] = ACTIONS(58),
  },
  [886] = {
    [anon_sym_LPAREN] = ACTIONS(2012),
    [anon_sym_DOT] = ACTIONS(2024),
    [anon_sym_LBRACK] = ACTIONS(2024),
    [anon_sym_COLON_COLON] = ACTIONS(2024),
    [sym_comment] = ACTIONS(58),
  },
  [887] = {
    [anon_sym_super] = ACTIONS(2026),
    [sym_identifier] = ACTIONS(2028),
    [sym_comment] = ACTIONS(58),
  },
  [888] = {
    [anon_sym_DOT] = ACTIONS(2030),
    [anon_sym_LBRACK] = ACTIONS(2030),
    [anon_sym_COLON_COLON] = ACTIONS(2030),
    [sym_comment] = ACTIONS(58),
  },
  [889] = {
    [anon_sym_GT] = ACTIONS(1978),
    [anon_sym_LT] = ACTIONS(1978),
    [anon_sym_EQ_EQ] = ACTIONS(1980),
    [anon_sym_GT_EQ] = ACTIONS(1980),
    [anon_sym_LT_EQ] = ACTIONS(1980),
    [anon_sym_BANG_EQ] = ACTIONS(1980),
    [anon_sym_AMP_AMP] = ACTIONS(1982),
    [anon_sym_PIPE_PIPE] = ACTIONS(1984),
    [anon_sym_PLUS] = ACTIONS(1986),
    [anon_sym_DASH] = ACTIONS(1986),
    [anon_sym_STAR] = ACTIONS(1988),
    [anon_sym_SLASH] = ACTIONS(1990),
    [anon_sym_AMP] = ACTIONS(1992),
    [anon_sym_PIPE] = ACTIONS(1994),
    [anon_sym_CARET] = ACTIONS(1984),
    [anon_sym_PERCENT] = ACTIONS(1988),
    [anon_sym_LT_LT] = ACTIONS(1988),
    [anon_sym_GT_GT] = ACTIONS(1990),
    [anon_sym_GT_GT_GT] = ACTIONS(1988),
    [anon_sym_QMARK] = ACTIONS(1996),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(2032),
    [sym_comment] = ACTIONS(58),
  },
  [890] = {
    [anon_sym_LPAREN] = ACTIONS(2012),
    [anon_sym_DOT] = ACTIONS(1952),
    [anon_sym_LBRACK] = ACTIONS(1952),
    [anon_sym_COLON_COLON] = ACTIONS(1952),
    [sym_comment] = ACTIONS(58),
  },
  [891] = {
    [anon_sym_DOT] = ACTIONS(2034),
    [anon_sym_LBRACK] = ACTIONS(2034),
    [anon_sym_COLON_COLON] = ACTIONS(2034),
    [sym_comment] = ACTIONS(58),
  },
  [892] = {
    [anon_sym_RPAREN] = ACTIONS(2036),
    [sym_comment] = ACTIONS(58),
  },
  [893] = {
    [sym__semicolon] = ACTIONS(1383),
    [anon_sym_LT] = ACTIONS(1383),
    [anon_sym_LBRACE] = ACTIONS(1383),
    [anon_sym_RBRACE] = ACTIONS(1383),
    [anon_sym_default] = ACTIONS(1385),
    [anon_sym_boolean] = ACTIONS(1385),
    [anon_sym_byte] = ACTIONS(1385),
    [anon_sym_short] = ACTIONS(1385),
    [anon_sym_int] = ACTIONS(1385),
    [anon_sym_long] = ACTIONS(1385),
    [anon_sym_char] = ACTIONS(1385),
    [anon_sym_float] = ACTIONS(1385),
    [anon_sym_double] = ACTIONS(1385),
    [anon_sym_AT] = ACTIONS(1383),
    [anon_sym_static] = ACTIONS(1385),
    [anon_sym_class] = ACTIONS(1385),
    [anon_sym_public] = ACTIONS(1385),
    [anon_sym_protected] = ACTIONS(1385),
    [anon_sym_private] = ACTIONS(1385),
    [anon_sym_abstract] = ACTIONS(1385),
    [anon_sym_final] = ACTIONS(1385),
    [anon_sym_strictfp] = ACTIONS(1385),
    [anon_sym_synchronized] = ACTIONS(1385),
    [anon_sym_native] = ACTIONS(1385),
    [anon_sym_interface] = ACTIONS(1385),
    [sym_identifier] = ACTIONS(1387),
    [sym_comment] = ACTIONS(58),
  },
  [894] = {
    [sym_super_interfaces] = STATE(980),
    [sym_class_body] = STATE(940),
    [anon_sym_LBRACE] = ACTIONS(1197),
    [anon_sym_implements] = ACTIONS(369),
    [sym_comment] = ACTIONS(58),
  },
  [895] = {
    [sym_interface_body] = STATE(981),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [sym_comment] = ACTIONS(58),
  },
  [896] = {
    [anon_sym_LBRACE] = ACTIONS(1295),
    [anon_sym_DOT] = ACTIONS(1295),
    [anon_sym_implements] = ACTIONS(1295),
    [anon_sym_this] = ACTIONS(1295),
    [anon_sym_super] = ACTIONS(1295),
    [anon_sym_new] = ACTIONS(1295),
    [sym_comment] = ACTIONS(58),
  },
  [897] = {
    [sym_type_arguments] = STATE(899),
    [anon_sym_LT] = ACTIONS(917),
    [anon_sym_LBRACE] = ACTIONS(1824),
    [anon_sym_DOT] = ACTIONS(1824),
    [anon_sym_implements] = ACTIONS(1824),
    [sym_comment] = ACTIONS(58),
  },
  [898] = {
    [sym__semicolon] = ACTIONS(2038),
    [anon_sym_COMMA] = ACTIONS(2038),
    [sym_comment] = ACTIONS(58),
  },
  [899] = {
    [anon_sym_GT] = ACTIONS(2040),
    [anon_sym_AMP] = ACTIONS(2040),
    [anon_sym_COMMA] = ACTIONS(2040),
    [anon_sym_LBRACE] = ACTIONS(2040),
    [anon_sym_DOT] = ACTIONS(2040),
    [anon_sym_LBRACK] = ACTIONS(2040),
    [anon_sym_AT] = ACTIONS(2040),
    [anon_sym_implements] = ACTIONS(2040),
    [anon_sym_COLON_COLON] = ACTIONS(2040),
    [sym_comment] = ACTIONS(58),
  },
  [900] = {
    [sym__semicolon] = ACTIONS(1335),
    [anon_sym_LBRACE] = ACTIONS(1335),
    [anon_sym_default] = ACTIONS(1335),
    [anon_sym_LBRACK] = ACTIONS(1335),
    [anon_sym_AT] = ACTIONS(1335),
    [anon_sym_throws] = ACTIONS(1335),
    [sym_comment] = ACTIONS(58),
  },
  [901] = {
    [anon_sym_DOT] = ACTIONS(1824),
    [anon_sym_AT] = ACTIONS(1824),
    [sym_identifier] = ACTIONS(2042),
    [sym_comment] = ACTIONS(58),
  },
  [902] = {
    [sym_type_arguments] = STATE(982),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(1824),
    [anon_sym_AT] = ACTIONS(1824),
    [sym_identifier] = ACTIONS(2042),
    [sym_comment] = ACTIONS(58),
  },
  [903] = {
    [sym__expression] = STATE(983),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1027),
    [anon_sym_TILDE] = ACTIONS(1027),
    [anon_sym_PLUS_PLUS] = ACTIONS(1029),
    [anon_sym_DASH_DASH] = ACTIONS(1029),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [904] = {
    [sym_statement] = STATE(984),
    [sym_if_then_statement] = STATE(224),
    [sym_if_then_else_statement] = STATE(224),
    [anon_sym_if] = ACTIONS(431),
    [sym_comment] = ACTIONS(58),
  },
  [905] = {
    [sym__expression] = STATE(985),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1027),
    [anon_sym_TILDE] = ACTIONS(1027),
    [anon_sym_PLUS_PLUS] = ACTIONS(1029),
    [anon_sym_DASH_DASH] = ACTIONS(1029),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [906] = {
    [anon_sym_RBRACE] = ACTIONS(1602),
    [anon_sym_default] = ACTIONS(1602),
    [anon_sym_if] = ACTIONS(1602),
    [anon_sym_AT] = ACTIONS(1602),
    [anon_sym_static] = ACTIONS(1602),
    [anon_sym_class] = ACTIONS(1602),
    [anon_sym_public] = ACTIONS(1602),
    [anon_sym_protected] = ACTIONS(1602),
    [anon_sym_private] = ACTIONS(1602),
    [anon_sym_abstract] = ACTIONS(1602),
    [anon_sym_final] = ACTIONS(1602),
    [anon_sym_strictfp] = ACTIONS(1602),
    [anon_sym_synchronized] = ACTIONS(1602),
    [anon_sym_native] = ACTIONS(1602),
    [sym_comment] = ACTIONS(58),
  },
  [907] = {
    [sym_class_body] = STATE(986),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [sym_comment] = ACTIONS(58),
  },
  [908] = {
    [anon_sym_RBRACE] = ACTIONS(2044),
    [anon_sym_default] = ACTIONS(2046),
    [anon_sym_boolean] = ACTIONS(2046),
    [anon_sym_byte] = ACTIONS(2046),
    [anon_sym_short] = ACTIONS(2046),
    [anon_sym_int] = ACTIONS(2046),
    [anon_sym_long] = ACTIONS(2046),
    [anon_sym_char] = ACTIONS(2046),
    [anon_sym_float] = ACTIONS(2046),
    [anon_sym_double] = ACTIONS(2046),
    [anon_sym_AT] = ACTIONS(2044),
    [anon_sym_static] = ACTIONS(2046),
    [anon_sym_class] = ACTIONS(2046),
    [anon_sym_public] = ACTIONS(2046),
    [anon_sym_protected] = ACTIONS(2046),
    [anon_sym_private] = ACTIONS(2046),
    [anon_sym_abstract] = ACTIONS(2046),
    [anon_sym_final] = ACTIONS(2046),
    [anon_sym_strictfp] = ACTIONS(2046),
    [anon_sym_synchronized] = ACTIONS(2046),
    [anon_sym_native] = ACTIONS(2046),
    [anon_sym_interface] = ACTIONS(2046),
    [sym_identifier] = ACTIONS(2048),
    [sym_comment] = ACTIONS(58),
  },
  [909] = {
    [sym__literal] = STATE(550),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(551),
    [sym__annotation] = STATE(550),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_element_value] = STATE(988),
    [sym_element_value_array_initializer] = STATE(550),
    [sym_conditional_expression] = STATE(550),
    [sym_conditional_or_expression] = STATE(989),
    [sym_conditional_and_expression] = STATE(990),
    [sym_inclusive_or_expression] = STATE(991),
    [sym_exclusive_or_expression] = STATE(992),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(993),
    [sym_equality_expression] = STATE(994),
    [sym_shift_expression] = STATE(995),
    [sym_additive_expression] = STATE(996),
    [sym_multiplicative_expression] = STATE(997),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1123),
    [anon_sym_false] = ACTIONS(1123),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(2050),
    [anon_sym_TILDE] = ACTIONS(2050),
    [anon_sym_LBRACE] = ACTIONS(1127),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [910] = {
    [sym_default_value] = STATE(999),
    [sym__semicolon] = ACTIONS(2052),
    [anon_sym_default] = ACTIONS(1858),
    [sym_comment] = ACTIONS(58),
  },
  [911] = {
    [sym__semicolon] = ACTIONS(2052),
    [sym_comment] = ACTIONS(58),
  },
  [912] = {
    [sym_dims] = STATE(1000),
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_default_value] = STATE(999),
    [aux_sym_class_or_interface_type_repeat1] = STATE(497),
    [aux_sym_dims_repeat1] = STATE(498),
    [sym__semicolon] = ACTIONS(2052),
    [anon_sym_default] = ACTIONS(1858),
    [anon_sym_LBRACK] = ACTIONS(999),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [913] = {
    [anon_sym_GT] = ACTIONS(633),
    [anon_sym_LT] = ACTIONS(633),
    [anon_sym_EQ_EQ] = ACTIONS(631),
    [anon_sym_GT_EQ] = ACTIONS(631),
    [anon_sym_LT_EQ] = ACTIONS(631),
    [anon_sym_BANG_EQ] = ACTIONS(631),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(1938),
    [anon_sym_SLASH] = ACTIONS(1940),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(1938),
    [anon_sym_LT_LT] = ACTIONS(1938),
    [anon_sym_GT_GT] = ACTIONS(1940),
    [anon_sym_GT_GT_GT] = ACTIONS(1938),
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [914] = {
    [anon_sym_GT] = ACTIONS(1666),
    [anon_sym_LT] = ACTIONS(1666),
    [anon_sym_EQ_EQ] = ACTIONS(1668),
    [anon_sym_GT_EQ] = ACTIONS(1668),
    [anon_sym_LT_EQ] = ACTIONS(1668),
    [anon_sym_BANG_EQ] = ACTIONS(1668),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(1936),
    [anon_sym_DASH] = ACTIONS(1936),
    [anon_sym_STAR] = ACTIONS(1938),
    [anon_sym_SLASH] = ACTIONS(1940),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(1938),
    [anon_sym_LT_LT] = ACTIONS(1938),
    [anon_sym_GT_GT] = ACTIONS(1940),
    [anon_sym_GT_GT_GT] = ACTIONS(1938),
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [915] = {
    [anon_sym_GT] = ACTIONS(1666),
    [anon_sym_LT] = ACTIONS(1666),
    [anon_sym_EQ_EQ] = ACTIONS(1668),
    [anon_sym_GT_EQ] = ACTIONS(1668),
    [anon_sym_LT_EQ] = ACTIONS(1668),
    [anon_sym_BANG_EQ] = ACTIONS(1668),
    [anon_sym_AMP_AMP] = ACTIONS(1932),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(1936),
    [anon_sym_DASH] = ACTIONS(1936),
    [anon_sym_STAR] = ACTIONS(1938),
    [anon_sym_SLASH] = ACTIONS(1940),
    [anon_sym_AMP] = ACTIONS(1670),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(1938),
    [anon_sym_LT_LT] = ACTIONS(1938),
    [anon_sym_GT_GT] = ACTIONS(1940),
    [anon_sym_GT_GT_GT] = ACTIONS(1938),
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [916] = {
    [anon_sym_GT] = ACTIONS(1666),
    [anon_sym_LT] = ACTIONS(1666),
    [anon_sym_EQ_EQ] = ACTIONS(1668),
    [anon_sym_GT_EQ] = ACTIONS(1668),
    [anon_sym_LT_EQ] = ACTIONS(1668),
    [anon_sym_BANG_EQ] = ACTIONS(1668),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(1938),
    [anon_sym_SLASH] = ACTIONS(1940),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(1938),
    [anon_sym_LT_LT] = ACTIONS(1938),
    [anon_sym_GT_GT] = ACTIONS(1940),
    [anon_sym_GT_GT_GT] = ACTIONS(1938),
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [917] = {
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_EQ_EQ] = ACTIONS(637),
    [anon_sym_GT_EQ] = ACTIONS(637),
    [anon_sym_LT_EQ] = ACTIONS(637),
    [anon_sym_BANG_EQ] = ACTIONS(637),
    [anon_sym_AMP_AMP] = ACTIONS(639),
    [anon_sym_PIPE_PIPE] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [anon_sym_STAR] = ACTIONS(645),
    [anon_sym_SLASH] = ACTIONS(647),
    [anon_sym_AMP] = ACTIONS(649),
    [anon_sym_PIPE] = ACTIONS(651),
    [anon_sym_CARET] = ACTIONS(641),
    [anon_sym_PERCENT] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_GT_GT_GT] = ACTIONS(645),
    [anon_sym_QMARK] = ACTIONS(653),
    [anon_sym_COLON] = ACTIONS(2054),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [918] = {
    [sym__expression] = STATE(1002),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1674),
    [anon_sym_TILDE] = ACTIONS(1674),
    [anon_sym_PLUS_PLUS] = ACTIONS(1676),
    [anon_sym_DASH_DASH] = ACTIONS(1676),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [919] = {
    [sym__expression] = STATE(1003),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1674),
    [anon_sym_TILDE] = ACTIONS(1674),
    [anon_sym_PLUS_PLUS] = ACTIONS(1676),
    [anon_sym_DASH_DASH] = ACTIONS(1676),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [920] = {
    [sym__expression] = STATE(1004),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1674),
    [anon_sym_TILDE] = ACTIONS(1674),
    [anon_sym_PLUS_PLUS] = ACTIONS(1676),
    [anon_sym_DASH_DASH] = ACTIONS(1676),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [921] = {
    [sym__expression] = STATE(1005),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1674),
    [anon_sym_TILDE] = ACTIONS(1674),
    [anon_sym_PLUS_PLUS] = ACTIONS(1676),
    [anon_sym_DASH_DASH] = ACTIONS(1676),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [922] = {
    [sym__expression] = STATE(198),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1674),
    [anon_sym_TILDE] = ACTIONS(1674),
    [anon_sym_PLUS_PLUS] = ACTIONS(1676),
    [anon_sym_DASH_DASH] = ACTIONS(1676),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [923] = {
    [sym__expression] = STATE(1006),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [924] = {
    [sym__semicolon] = ACTIONS(2056),
    [anon_sym_RPAREN] = ACTIONS(2056),
    [anon_sym_COMMA] = ACTIONS(2056),
    [anon_sym_RBRACE] = ACTIONS(2056),
    [sym_comment] = ACTIONS(58),
  },
  [925] = {
    [anon_sym_COMMA] = ACTIONS(2058),
    [anon_sym_RBRACE] = ACTIONS(2058),
    [sym_comment] = ACTIONS(58),
  },
  [926] = {
    [sym__literal] = STATE(550),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(551),
    [sym__annotation] = STATE(550),
    [sym_normal_annotation] = STATE(31),
    [sym_marker_annotation] = STATE(31),
    [sym_single_element_annotation] = STATE(31),
    [sym_element_value] = STATE(1008),
    [sym_element_value_array_initializer] = STATE(550),
    [sym_conditional_expression] = STATE(550),
    [sym_conditional_or_expression] = STATE(689),
    [sym_conditional_and_expression] = STATE(690),
    [sym_inclusive_or_expression] = STATE(691),
    [sym_exclusive_or_expression] = STATE(692),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(693),
    [sym_equality_expression] = STATE(694),
    [sym_shift_expression] = STATE(695),
    [sym_additive_expression] = STATE(696),
    [sym_multiplicative_expression] = STATE(697),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1123),
    [anon_sym_false] = ACTIONS(1123),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [anon_sym_LBRACE] = ACTIONS(1127),
    [anon_sym_RBRACE] = ACTIONS(2060),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(58),
  },
  [927] = {
    [anon_sym_AMP_AMP] = ACTIONS(1686),
    [anon_sym_PIPE_PIPE] = ACTIONS(1874),
    [anon_sym_COMMA] = ACTIONS(1874),
    [anon_sym_QMARK] = ACTIONS(1874),
    [anon_sym_RBRACE] = ACTIONS(1874),
    [sym_comment] = ACTIONS(58),
  },
  [928] = {
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_EQ_EQ] = ACTIONS(637),
    [anon_sym_GT_EQ] = ACTIONS(637),
    [anon_sym_LT_EQ] = ACTIONS(637),
    [anon_sym_BANG_EQ] = ACTIONS(637),
    [anon_sym_AMP_AMP] = ACTIONS(639),
    [anon_sym_PIPE_PIPE] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [anon_sym_STAR] = ACTIONS(645),
    [anon_sym_SLASH] = ACTIONS(647),
    [anon_sym_AMP] = ACTIONS(649),
    [anon_sym_PIPE] = ACTIONS(651),
    [anon_sym_CARET] = ACTIONS(641),
    [anon_sym_PERCENT] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_GT_GT_GT] = ACTIONS(645),
    [anon_sym_QMARK] = ACTIONS(653),
    [anon_sym_COLON] = ACTIONS(2062),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [929] = {
    [anon_sym_AMP_AMP] = ACTIONS(1878),
    [anon_sym_PIPE_PIPE] = ACTIONS(1878),
    [anon_sym_PIPE] = ACTIONS(1688),
    [anon_sym_COMMA] = ACTIONS(1878),
    [anon_sym_QMARK] = ACTIONS(1878),
    [anon_sym_RBRACE] = ACTIONS(1878),
    [sym_comment] = ACTIONS(58),
  },
  [930] = {
    [anon_sym_AMP_AMP] = ACTIONS(1880),
    [anon_sym_PIPE_PIPE] = ACTIONS(1880),
    [anon_sym_PIPE] = ACTIONS(1882),
    [anon_sym_CARET] = ACTIONS(1690),
    [anon_sym_COMMA] = ACTIONS(1880),
    [anon_sym_QMARK] = ACTIONS(1880),
    [anon_sym_RBRACE] = ACTIONS(1880),
    [sym_comment] = ACTIONS(58),
  },
  [931] = {
    [anon_sym_LT] = ACTIONS(1888),
    [anon_sym_EQ_EQ] = ACTIONS(1890),
    [anon_sym_BANG_EQ] = ACTIONS(1890),
    [anon_sym_AMP_AMP] = ACTIONS(1890),
    [anon_sym_PIPE_PIPE] = ACTIONS(1890),
    [anon_sym_PIPE] = ACTIONS(1888),
    [anon_sym_CARET] = ACTIONS(1890),
    [anon_sym_LT_LT] = ACTIONS(1696),
    [anon_sym_GT_GT] = ACTIONS(1698),
    [anon_sym_GT_GT_GT] = ACTIONS(1696),
    [anon_sym_COMMA] = ACTIONS(1890),
    [anon_sym_QMARK] = ACTIONS(1890),
    [anon_sym_RBRACE] = ACTIONS(1890),
    [sym_comment] = ACTIONS(58),
  },
  [932] = {
    [anon_sym_LT] = ACTIONS(1692),
    [anon_sym_EQ_EQ] = ACTIONS(1892),
    [anon_sym_BANG_EQ] = ACTIONS(1892),
    [anon_sym_AMP_AMP] = ACTIONS(1894),
    [anon_sym_PIPE_PIPE] = ACTIONS(1894),
    [anon_sym_PIPE] = ACTIONS(1896),
    [anon_sym_CARET] = ACTIONS(1894),
    [anon_sym_COMMA] = ACTIONS(1894),
    [anon_sym_QMARK] = ACTIONS(1894),
    [anon_sym_RBRACE] = ACTIONS(1894),
    [sym_comment] = ACTIONS(58),
  },
  [933] = {
    [anon_sym_LT] = ACTIONS(1898),
    [anon_sym_EQ_EQ] = ACTIONS(1900),
    [anon_sym_BANG_EQ] = ACTIONS(1900),
    [anon_sym_AMP_AMP] = ACTIONS(1900),
    [anon_sym_PIPE_PIPE] = ACTIONS(1900),
    [anon_sym_PLUS] = ACTIONS(1700),
    [anon_sym_DASH] = ACTIONS(1700),
    [anon_sym_PIPE] = ACTIONS(1898),
    [anon_sym_CARET] = ACTIONS(1900),
    [anon_sym_LT_LT] = ACTIONS(1900),
    [anon_sym_GT_GT] = ACTIONS(1898),
    [anon_sym_GT_GT_GT] = ACTIONS(1900),
    [anon_sym_COMMA] = ACTIONS(1900),
    [anon_sym_QMARK] = ACTIONS(1900),
    [anon_sym_RBRACE] = ACTIONS(1900),
    [sym_comment] = ACTIONS(58),
  },
  [934] = {
    [anon_sym_LT] = ACTIONS(1902),
    [anon_sym_EQ_EQ] = ACTIONS(1904),
    [anon_sym_BANG_EQ] = ACTIONS(1904),
    [anon_sym_AMP_AMP] = ACTIONS(1904),
    [anon_sym_PIPE_PIPE] = ACTIONS(1904),
    [anon_sym_PLUS] = ACTIONS(1904),
    [anon_sym_DASH] = ACTIONS(1904),
    [anon_sym_STAR] = ACTIONS(1702),
    [anon_sym_SLASH] = ACTIONS(1704),
    [anon_sym_PIPE] = ACTIONS(1902),
    [anon_sym_CARET] = ACTIONS(1904),
    [anon_sym_PERCENT] = ACTIONS(1702),
    [anon_sym_LT_LT] = ACTIONS(1904),
    [anon_sym_GT_GT] = ACTIONS(1902),
    [anon_sym_GT_GT_GT] = ACTIONS(1904),
    [anon_sym_COMMA] = ACTIONS(1904),
    [anon_sym_QMARK] = ACTIONS(1904),
    [anon_sym_RBRACE] = ACTIONS(1904),
    [sym_comment] = ACTIONS(58),
  },
  [935] = {
    [sym_lambda_expression] = STATE(1010),
    [sym__lambda_parameters] = STATE(28),
    [sym_unary_expression] = STATE(551),
    [sym_conditional_expression] = STATE(1010),
    [sym_conditional_or_expression] = STATE(553),
    [sym_conditional_and_expression] = STATE(554),
    [sym_inclusive_or_expression] = STATE(555),
    [sym_exclusive_or_expression] = STATE(556),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(558),
    [sym_equality_expression] = STATE(559),
    [sym_shift_expression] = STATE(560),
    [sym_additive_expression] = STATE(561),
    [sym_multiplicative_expression] = STATE(562),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1125),
    [anon_sym_TILDE] = ACTIONS(1125),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [936] = {
    [anon_sym_RBRACE] = ACTIONS(2064),
    [anon_sym_requires] = ACTIONS(2064),
    [anon_sym_exports] = ACTIONS(2064),
    [anon_sym_opens] = ACTIONS(2064),
    [anon_sym_uses] = ACTIONS(2064),
    [anon_sym_provides] = ACTIONS(2064),
    [sym_comment] = ACTIONS(58),
  },
  [937] = {
    [sym__semicolon] = ACTIONS(2066),
    [anon_sym_COMMA] = ACTIONS(2066),
    [anon_sym_DOT] = ACTIONS(345),
    [sym_comment] = ACTIONS(58),
  },
  [938] = {
    [sym_package_or_type_name] = STATE(1011),
    [sym_identifier] = ACTIONS(357),
    [sym_comment] = ACTIONS(58),
  },
  [939] = {
    [sym__semicolon] = ACTIONS(1407),
    [anon_sym_LT] = ACTIONS(1407),
    [anon_sym_LBRACE] = ACTIONS(1407),
    [anon_sym_RBRACE] = ACTIONS(1407),
    [anon_sym_default] = ACTIONS(1409),
    [anon_sym_boolean] = ACTIONS(1409),
    [anon_sym_byte] = ACTIONS(1409),
    [anon_sym_short] = ACTIONS(1409),
    [anon_sym_int] = ACTIONS(1409),
    [anon_sym_long] = ACTIONS(1409),
    [anon_sym_char] = ACTIONS(1409),
    [anon_sym_float] = ACTIONS(1409),
    [anon_sym_double] = ACTIONS(1409),
    [anon_sym_AT] = ACTIONS(1407),
    [anon_sym_static] = ACTIONS(1409),
    [anon_sym_class] = ACTIONS(1409),
    [anon_sym_public] = ACTIONS(1409),
    [anon_sym_protected] = ACTIONS(1409),
    [anon_sym_private] = ACTIONS(1409),
    [anon_sym_abstract] = ACTIONS(1409),
    [anon_sym_final] = ACTIONS(1409),
    [anon_sym_strictfp] = ACTIONS(1409),
    [anon_sym_synchronized] = ACTIONS(1409),
    [anon_sym_native] = ACTIONS(1409),
    [anon_sym_interface] = ACTIONS(1409),
    [sym_identifier] = ACTIONS(1411),
    [sym_comment] = ACTIONS(58),
  },
  [940] = {
    [sym__semicolon] = ACTIONS(1602),
    [anon_sym_LT] = ACTIONS(1602),
    [anon_sym_LBRACE] = ACTIONS(1602),
    [anon_sym_RBRACE] = ACTIONS(1602),
    [anon_sym_default] = ACTIONS(1604),
    [anon_sym_boolean] = ACTIONS(1604),
    [anon_sym_byte] = ACTIONS(1604),
    [anon_sym_short] = ACTIONS(1604),
    [anon_sym_int] = ACTIONS(1604),
    [anon_sym_long] = ACTIONS(1604),
    [anon_sym_char] = ACTIONS(1604),
    [anon_sym_float] = ACTIONS(1604),
    [anon_sym_double] = ACTIONS(1604),
    [anon_sym_AT] = ACTIONS(1602),
    [anon_sym_static] = ACTIONS(1604),
    [anon_sym_class] = ACTIONS(1604),
    [anon_sym_public] = ACTIONS(1604),
    [anon_sym_protected] = ACTIONS(1604),
    [anon_sym_private] = ACTIONS(1604),
    [anon_sym_abstract] = ACTIONS(1604),
    [anon_sym_final] = ACTIONS(1604),
    [anon_sym_strictfp] = ACTIONS(1604),
    [anon_sym_synchronized] = ACTIONS(1604),
    [anon_sym_native] = ACTIONS(1604),
    [anon_sym_interface] = ACTIONS(1604),
    [sym_identifier] = ACTIONS(1606),
    [sym_comment] = ACTIONS(58),
  },
  [941] = {
    [anon_sym_DOT] = ACTIONS(2068),
    [anon_sym_LBRACK] = ACTIONS(2068),
    [anon_sym_COLON_COLON] = ACTIONS(2068),
    [sym_comment] = ACTIONS(58),
  },
  [942] = {
    [anon_sym_RBRACE] = ACTIONS(2070),
    [anon_sym_default] = ACTIONS(2070),
    [anon_sym_if] = ACTIONS(2070),
    [anon_sym_AT] = ACTIONS(2070),
    [anon_sym_static] = ACTIONS(2070),
    [anon_sym_class] = ACTIONS(2070),
    [anon_sym_public] = ACTIONS(2070),
    [anon_sym_protected] = ACTIONS(2070),
    [anon_sym_private] = ACTIONS(2070),
    [anon_sym_abstract] = ACTIONS(2070),
    [anon_sym_final] = ACTIONS(2070),
    [anon_sym_strictfp] = ACTIONS(2070),
    [anon_sym_synchronized] = ACTIONS(2070),
    [anon_sym_native] = ACTIONS(2070),
    [sym_comment] = ACTIONS(58),
  },
  [943] = {
    [sym__expression] = STATE(1012),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [944] = {
    [anon_sym_RPAREN] = ACTIONS(2072),
    [anon_sym_COMMA] = ACTIONS(2074),
    [sym_comment] = ACTIONS(58),
  },
  [945] = {
    [sym__semicolon] = ACTIONS(2076),
    [sym_comment] = ACTIONS(58),
  },
  [946] = {
    [anon_sym_DOT] = ACTIONS(2078),
    [anon_sym_LBRACK] = ACTIONS(2078),
    [anon_sym_COLON_COLON] = ACTIONS(2078),
    [sym_comment] = ACTIONS(58),
  },
  [947] = {
    [sym_type_arguments] = STATE(636),
    [anon_sym_LT] = ACTIONS(2080),
    [anon_sym_LPAREN] = ACTIONS(2083),
    [anon_sym_DOT] = ACTIONS(2085),
    [anon_sym_LBRACK] = ACTIONS(1287),
    [anon_sym_AT] = ACTIONS(1287),
    [anon_sym_LT_GT] = ACTIONS(2083),
    [sym_comment] = ACTIONS(58),
  },
  [948] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(2088),
    [sym_comment] = ACTIONS(58),
  },
  [949] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(1017),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(2090),
    [sym_comment] = ACTIONS(58),
  },
  [950] = {
    [anon_sym_LPAREN] = ACTIONS(2092),
    [sym_comment] = ACTIONS(58),
  },
  [951] = {
    [sym__annotation] = STATE(52),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(1019),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(2094),
    [sym_comment] = ACTIONS(58),
  },
  [952] = {
    [sym__expression] = STATE(851),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1021),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2096),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [953] = {
    [sym_type_arguments] = STATE(857),
    [sym_type_arguments_or_diamond] = STATE(950),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(959),
    [anon_sym_LT] = ACTIONS(1744),
    [anon_sym_LPAREN] = ACTIONS(1962),
    [anon_sym_DOT] = ACTIONS(1966),
    [anon_sym_LT_GT] = ACTIONS(1750),
    [sym_comment] = ACTIONS(58),
  },
  [954] = {
    [sym__expression] = STATE(1024),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_variable_initializer] = STATE(1025),
    [sym_array_initializer] = STATE(1026),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_COMMA] = ACTIONS(2098),
    [anon_sym_BANG] = ACTIONS(1674),
    [anon_sym_TILDE] = ACTIONS(1674),
    [anon_sym_PLUS_PLUS] = ACTIONS(1676),
    [anon_sym_DASH_DASH] = ACTIONS(1676),
    [anon_sym_LBRACE] = ACTIONS(1972),
    [anon_sym_RBRACE] = ACTIONS(2100),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [955] = {
    [anon_sym_DOT] = ACTIONS(2102),
    [anon_sym_COLON_COLON] = ACTIONS(2102),
    [sym_comment] = ACTIONS(58),
  },
  [956] = {
    [sym_class_body] = STATE(1027),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [anon_sym_DOT] = ACTIONS(2104),
    [anon_sym_LBRACK] = ACTIONS(2104),
    [anon_sym_COLON_COLON] = ACTIONS(2104),
    [sym_comment] = ACTIONS(58),
  },
  [957] = {
    [anon_sym_RPAREN] = ACTIONS(2096),
    [sym_comment] = ACTIONS(58),
  },
  [958] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(640),
    [anon_sym_LPAREN] = ACTIONS(1960),
    [anon_sym_DOT] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(1291),
    [anon_sym_AT] = ACTIONS(1291),
    [sym_comment] = ACTIONS(58),
  },
  [959] = {
    [sym_type_arguments] = STATE(857),
    [sym_type_arguments_or_diamond] = STATE(1028),
    [anon_sym_LT] = ACTIONS(1744),
    [anon_sym_LPAREN] = ACTIONS(2092),
    [anon_sym_DOT] = ACTIONS(1964),
    [anon_sym_LT_GT] = ACTIONS(1750),
    [sym_comment] = ACTIONS(58),
  },
  [960] = {
    [anon_sym_RPAREN] = ACTIONS(2106),
    [sym_comment] = ACTIONS(58),
  },
  [961] = {
    [sym__expression] = STATE(1030),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1760),
    [anon_sym_TILDE] = ACTIONS(1760),
    [anon_sym_PLUS_PLUS] = ACTIONS(1762),
    [anon_sym_DASH_DASH] = ACTIONS(1762),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [962] = {
    [sym__expression] = STATE(1031),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1760),
    [anon_sym_TILDE] = ACTIONS(1760),
    [anon_sym_PLUS_PLUS] = ACTIONS(1762),
    [anon_sym_DASH_DASH] = ACTIONS(1762),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [963] = {
    [sym__expression] = STATE(1032),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1760),
    [anon_sym_TILDE] = ACTIONS(1760),
    [anon_sym_PLUS_PLUS] = ACTIONS(1762),
    [anon_sym_DASH_DASH] = ACTIONS(1762),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [964] = {
    [sym__expression] = STATE(1033),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1760),
    [anon_sym_TILDE] = ACTIONS(1760),
    [anon_sym_PLUS_PLUS] = ACTIONS(1762),
    [anon_sym_DASH_DASH] = ACTIONS(1762),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [965] = {
    [sym__expression] = STATE(198),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1760),
    [anon_sym_TILDE] = ACTIONS(1760),
    [anon_sym_PLUS_PLUS] = ACTIONS(1762),
    [anon_sym_DASH_DASH] = ACTIONS(1762),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [966] = {
    [sym__expression] = STATE(1034),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [967] = {
    [anon_sym_DOT] = ACTIONS(2108),
    [anon_sym_LBRACK] = ACTIONS(2108),
    [anon_sym_AT] = ACTIONS(2108),
    [anon_sym_COLON_COLON] = ACTIONS(2108),
    [sym_comment] = ACTIONS(58),
  },
  [968] = {
    [sym__expression] = STATE(970),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1760),
    [anon_sym_TILDE] = ACTIONS(1760),
    [anon_sym_PLUS_PLUS] = ACTIONS(1762),
    [anon_sym_DASH_DASH] = ACTIONS(1762),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [969] = {
    [anon_sym_DOT] = ACTIONS(2110),
    [anon_sym_LBRACK] = ACTIONS(2110),
    [anon_sym_AT] = ACTIONS(2110),
    [anon_sym_COLON_COLON] = ACTIONS(2110),
    [sym_comment] = ACTIONS(58),
  },
  [970] = {
    [anon_sym_GT] = ACTIONS(1978),
    [anon_sym_LT] = ACTIONS(1978),
    [anon_sym_EQ_EQ] = ACTIONS(1980),
    [anon_sym_GT_EQ] = ACTIONS(1980),
    [anon_sym_LT_EQ] = ACTIONS(1980),
    [anon_sym_BANG_EQ] = ACTIONS(1980),
    [anon_sym_AMP_AMP] = ACTIONS(1982),
    [anon_sym_PIPE_PIPE] = ACTIONS(1984),
    [anon_sym_PLUS] = ACTIONS(1986),
    [anon_sym_DASH] = ACTIONS(1986),
    [anon_sym_STAR] = ACTIONS(1988),
    [anon_sym_SLASH] = ACTIONS(1990),
    [anon_sym_AMP] = ACTIONS(1992),
    [anon_sym_PIPE] = ACTIONS(1994),
    [anon_sym_CARET] = ACTIONS(1984),
    [anon_sym_PERCENT] = ACTIONS(1988),
    [anon_sym_LT_LT] = ACTIONS(1988),
    [anon_sym_GT_GT] = ACTIONS(1990),
    [anon_sym_GT_GT_GT] = ACTIONS(1988),
    [anon_sym_QMARK] = ACTIONS(1996),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(2112),
    [sym_comment] = ACTIONS(58),
  },
  [971] = {
    [sym_type_arguments] = STATE(1037),
    [anon_sym_LT] = ACTIONS(128),
    [sym_identifier] = ACTIONS(2114),
    [sym_comment] = ACTIONS(58),
  },
  [972] = {
    [sym_type_arguments] = STATE(1039),
    [anon_sym_LT] = ACTIONS(128),
    [sym_identifier] = ACTIONS(2116),
    [sym_comment] = ACTIONS(58),
  },
  [973] = {
    [sym__expression] = STATE(851),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1041),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2118),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [974] = {
    [anon_sym_LPAREN] = ACTIONS(2120),
    [sym_comment] = ACTIONS(58),
  },
  [975] = {
    [aux_sym_type_arguments_repeat1] = STATE(1044),
    [anon_sym_GT] = ACTIONS(2122),
    [anon_sym_COMMA] = ACTIONS(621),
    [sym_comment] = ACTIONS(58),
  },
  [976] = {
    [sym__expression] = STATE(851),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1045),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2106),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [977] = {
    [anon_sym_LPAREN] = ACTIONS(2124),
    [sym_comment] = ACTIONS(58),
  },
  [978] = {
    [anon_sym_DOT] = ACTIONS(2126),
    [anon_sym_LBRACK] = ACTIONS(2126),
    [anon_sym_COLON_COLON] = ACTIONS(2126),
    [sym_comment] = ACTIONS(58),
  },
  [979] = {
    [anon_sym_DOT] = ACTIONS(2128),
    [anon_sym_LBRACK] = ACTIONS(2128),
    [anon_sym_COLON_COLON] = ACTIONS(2128),
    [sym_comment] = ACTIONS(58),
  },
  [980] = {
    [sym_class_body] = STATE(1047),
    [anon_sym_LBRACE] = ACTIONS(1197),
    [sym_comment] = ACTIONS(58),
  },
  [981] = {
    [sym__semicolon] = ACTIONS(1654),
    [anon_sym_LT] = ACTIONS(1654),
    [anon_sym_LBRACE] = ACTIONS(1654),
    [anon_sym_RBRACE] = ACTIONS(1654),
    [anon_sym_default] = ACTIONS(1656),
    [anon_sym_boolean] = ACTIONS(1656),
    [anon_sym_byte] = ACTIONS(1656),
    [anon_sym_short] = ACTIONS(1656),
    [anon_sym_int] = ACTIONS(1656),
    [anon_sym_long] = ACTIONS(1656),
    [anon_sym_char] = ACTIONS(1656),
    [anon_sym_float] = ACTIONS(1656),
    [anon_sym_double] = ACTIONS(1656),
    [anon_sym_AT] = ACTIONS(1654),
    [anon_sym_static] = ACTIONS(1656),
    [anon_sym_class] = ACTIONS(1656),
    [anon_sym_public] = ACTIONS(1656),
    [anon_sym_protected] = ACTIONS(1656),
    [anon_sym_private] = ACTIONS(1656),
    [anon_sym_abstract] = ACTIONS(1656),
    [anon_sym_final] = ACTIONS(1656),
    [anon_sym_strictfp] = ACTIONS(1656),
    [anon_sym_synchronized] = ACTIONS(1656),
    [anon_sym_native] = ACTIONS(1656),
    [anon_sym_interface] = ACTIONS(1656),
    [sym_identifier] = ACTIONS(1658),
    [sym_comment] = ACTIONS(58),
  },
  [982] = {
    [anon_sym_DOT] = ACTIONS(2040),
    [anon_sym_AT] = ACTIONS(2040),
    [sym_identifier] = ACTIONS(2130),
    [sym_comment] = ACTIONS(58),
  },
  [983] = {
    [anon_sym_GT] = ACTIONS(1343),
    [anon_sym_LT] = ACTIONS(1343),
    [anon_sym_EQ_EQ] = ACTIONS(1345),
    [anon_sym_GT_EQ] = ACTIONS(1345),
    [anon_sym_LT_EQ] = ACTIONS(1345),
    [anon_sym_BANG_EQ] = ACTIONS(1345),
    [anon_sym_AMP_AMP] = ACTIONS(1347),
    [anon_sym_PIPE_PIPE] = ACTIONS(1349),
    [anon_sym_PLUS] = ACTIONS(1351),
    [anon_sym_DASH] = ACTIONS(1351),
    [anon_sym_STAR] = ACTIONS(1353),
    [anon_sym_SLASH] = ACTIONS(1355),
    [anon_sym_AMP] = ACTIONS(1357),
    [anon_sym_PIPE] = ACTIONS(1359),
    [anon_sym_CARET] = ACTIONS(1349),
    [anon_sym_PERCENT] = ACTIONS(1353),
    [anon_sym_LT_LT] = ACTIONS(1353),
    [anon_sym_GT_GT] = ACTIONS(1355),
    [anon_sym_GT_GT_GT] = ACTIONS(1353),
    [anon_sym_RPAREN] = ACTIONS(2132),
    [anon_sym_QMARK] = ACTIONS(1363),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [984] = {
    [anon_sym_RBRACE] = ACTIONS(2134),
    [anon_sym_default] = ACTIONS(2134),
    [anon_sym_if] = ACTIONS(2134),
    [anon_sym_AT] = ACTIONS(2134),
    [anon_sym_static] = ACTIONS(2134),
    [anon_sym_class] = ACTIONS(2134),
    [anon_sym_public] = ACTIONS(2134),
    [anon_sym_protected] = ACTIONS(2134),
    [anon_sym_private] = ACTIONS(2134),
    [anon_sym_abstract] = ACTIONS(2134),
    [anon_sym_final] = ACTIONS(2134),
    [anon_sym_strictfp] = ACTIONS(2134),
    [anon_sym_synchronized] = ACTIONS(2134),
    [anon_sym_native] = ACTIONS(2134),
    [sym_comment] = ACTIONS(58),
  },
  [985] = {
    [anon_sym_GT] = ACTIONS(1343),
    [anon_sym_LT] = ACTIONS(1343),
    [anon_sym_EQ_EQ] = ACTIONS(1345),
    [anon_sym_GT_EQ] = ACTIONS(1345),
    [anon_sym_LT_EQ] = ACTIONS(1345),
    [anon_sym_BANG_EQ] = ACTIONS(1345),
    [anon_sym_AMP_AMP] = ACTIONS(1347),
    [anon_sym_PIPE_PIPE] = ACTIONS(1349),
    [anon_sym_PLUS] = ACTIONS(1351),
    [anon_sym_DASH] = ACTIONS(1351),
    [anon_sym_STAR] = ACTIONS(1353),
    [anon_sym_SLASH] = ACTIONS(1355),
    [anon_sym_AMP] = ACTIONS(1357),
    [anon_sym_PIPE] = ACTIONS(1359),
    [anon_sym_CARET] = ACTIONS(1349),
    [anon_sym_PERCENT] = ACTIONS(1353),
    [anon_sym_LT_LT] = ACTIONS(1353),
    [anon_sym_GT_GT] = ACTIONS(1355),
    [anon_sym_GT_GT_GT] = ACTIONS(1353),
    [anon_sym_RPAREN] = ACTIONS(1301),
    [anon_sym_QMARK] = ACTIONS(1363),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [986] = {
    [anon_sym_RBRACE] = ACTIONS(1850),
    [anon_sym_default] = ACTIONS(1850),
    [anon_sym_if] = ACTIONS(1850),
    [anon_sym_AT] = ACTIONS(1850),
    [anon_sym_static] = ACTIONS(1850),
    [anon_sym_class] = ACTIONS(1850),
    [anon_sym_public] = ACTIONS(1850),
    [anon_sym_protected] = ACTIONS(1850),
    [anon_sym_private] = ACTIONS(1850),
    [anon_sym_abstract] = ACTIONS(1850),
    [anon_sym_final] = ACTIONS(1850),
    [anon_sym_strictfp] = ACTIONS(1850),
    [anon_sym_synchronized] = ACTIONS(1850),
    [anon_sym_native] = ACTIONS(1850),
    [sym_comment] = ACTIONS(58),
  },
  [987] = {
    [sym__expression] = STATE(1049),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_PLUS_PLUS] = ACTIONS(32),
    [anon_sym_DASH_DASH] = ACTIONS(32),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [988] = {
    [sym__semicolon] = ACTIONS(2136),
    [sym_comment] = ACTIONS(58),
  },
  [989] = {
    [sym__semicolon] = ACTIONS(1439),
    [anon_sym_PIPE_PIPE] = ACTIONS(2138),
    [anon_sym_QMARK] = ACTIONS(2140),
    [sym_comment] = ACTIONS(58),
  },
  [990] = {
    [sym__semicolon] = ACTIONS(1445),
    [anon_sym_AMP_AMP] = ACTIONS(2142),
    [anon_sym_PIPE_PIPE] = ACTIONS(1445),
    [anon_sym_QMARK] = ACTIONS(1445),
    [sym_comment] = ACTIONS(58),
  },
  [991] = {
    [sym__semicolon] = ACTIONS(1447),
    [anon_sym_AMP_AMP] = ACTIONS(1447),
    [anon_sym_PIPE_PIPE] = ACTIONS(1447),
    [anon_sym_PIPE] = ACTIONS(2144),
    [anon_sym_QMARK] = ACTIONS(1447),
    [sym_comment] = ACTIONS(58),
  },
  [992] = {
    [sym__semicolon] = ACTIONS(1451),
    [anon_sym_AMP_AMP] = ACTIONS(1451),
    [anon_sym_PIPE_PIPE] = ACTIONS(1451),
    [anon_sym_PIPE] = ACTIONS(1453),
    [anon_sym_CARET] = ACTIONS(2146),
    [anon_sym_QMARK] = ACTIONS(1451),
    [sym_comment] = ACTIONS(58),
  },
  [993] = {
    [sym__semicolon] = ACTIONS(1465),
    [anon_sym_LT] = ACTIONS(2148),
    [anon_sym_EQ_EQ] = ACTIONS(1463),
    [anon_sym_BANG_EQ] = ACTIONS(1463),
    [anon_sym_AMP_AMP] = ACTIONS(1465),
    [anon_sym_PIPE_PIPE] = ACTIONS(1465),
    [anon_sym_PIPE] = ACTIONS(1467),
    [anon_sym_CARET] = ACTIONS(1465),
    [anon_sym_QMARK] = ACTIONS(1465),
    [sym_comment] = ACTIONS(58),
  },
  [994] = {
    [anon_sym_EQ_EQ] = ACTIONS(2150),
    [anon_sym_BANG_EQ] = ACTIONS(2150),
    [sym_comment] = ACTIONS(58),
  },
  [995] = {
    [sym__semicolon] = ACTIONS(1473),
    [anon_sym_LT] = ACTIONS(1471),
    [anon_sym_EQ_EQ] = ACTIONS(1473),
    [anon_sym_BANG_EQ] = ACTIONS(1473),
    [anon_sym_AMP_AMP] = ACTIONS(1473),
    [anon_sym_PIPE_PIPE] = ACTIONS(1473),
    [anon_sym_PIPE] = ACTIONS(1471),
    [anon_sym_CARET] = ACTIONS(1473),
    [anon_sym_LT_LT] = ACTIONS(2152),
    [anon_sym_GT_GT] = ACTIONS(2154),
    [anon_sym_GT_GT_GT] = ACTIONS(2152),
    [anon_sym_QMARK] = ACTIONS(1473),
    [sym_comment] = ACTIONS(58),
  },
  [996] = {
    [sym__semicolon] = ACTIONS(1481),
    [anon_sym_LT] = ACTIONS(1479),
    [anon_sym_EQ_EQ] = ACTIONS(1481),
    [anon_sym_BANG_EQ] = ACTIONS(1481),
    [anon_sym_AMP_AMP] = ACTIONS(1481),
    [anon_sym_PIPE_PIPE] = ACTIONS(1481),
    [anon_sym_PLUS] = ACTIONS(2156),
    [anon_sym_DASH] = ACTIONS(2156),
    [anon_sym_PIPE] = ACTIONS(1479),
    [anon_sym_CARET] = ACTIONS(1481),
    [anon_sym_LT_LT] = ACTIONS(1481),
    [anon_sym_GT_GT] = ACTIONS(1479),
    [anon_sym_GT_GT_GT] = ACTIONS(1481),
    [anon_sym_QMARK] = ACTIONS(1481),
    [sym_comment] = ACTIONS(58),
  },
  [997] = {
    [sym__semicolon] = ACTIONS(1487),
    [anon_sym_LT] = ACTIONS(1485),
    [anon_sym_EQ_EQ] = ACTIONS(1487),
    [anon_sym_BANG_EQ] = ACTIONS(1487),
    [anon_sym_AMP_AMP] = ACTIONS(1487),
    [anon_sym_PIPE_PIPE] = ACTIONS(1487),
    [anon_sym_PLUS] = ACTIONS(1487),
    [anon_sym_DASH] = ACTIONS(1487),
    [anon_sym_STAR] = ACTIONS(2158),
    [anon_sym_SLASH] = ACTIONS(2160),
    [anon_sym_PIPE] = ACTIONS(1485),
    [anon_sym_CARET] = ACTIONS(1487),
    [anon_sym_PERCENT] = ACTIONS(2158),
    [anon_sym_LT_LT] = ACTIONS(1487),
    [anon_sym_GT_GT] = ACTIONS(1485),
    [anon_sym_GT_GT_GT] = ACTIONS(1487),
    [anon_sym_QMARK] = ACTIONS(1487),
    [sym_comment] = ACTIONS(58),
  },
  [998] = {
    [anon_sym_RBRACE] = ACTIONS(2162),
    [anon_sym_default] = ACTIONS(2164),
    [anon_sym_boolean] = ACTIONS(2164),
    [anon_sym_byte] = ACTIONS(2164),
    [anon_sym_short] = ACTIONS(2164),
    [anon_sym_int] = ACTIONS(2164),
    [anon_sym_long] = ACTIONS(2164),
    [anon_sym_char] = ACTIONS(2164),
    [anon_sym_float] = ACTIONS(2164),
    [anon_sym_double] = ACTIONS(2164),
    [anon_sym_AT] = ACTIONS(2162),
    [anon_sym_static] = ACTIONS(2164),
    [anon_sym_class] = ACTIONS(2164),
    [anon_sym_public] = ACTIONS(2164),
    [anon_sym_protected] = ACTIONS(2164),
    [anon_sym_private] = ACTIONS(2164),
    [anon_sym_abstract] = ACTIONS(2164),
    [anon_sym_final] = ACTIONS(2164),
    [anon_sym_strictfp] = ACTIONS(2164),
    [anon_sym_synchronized] = ACTIONS(2164),
    [anon_sym_native] = ACTIONS(2164),
    [anon_sym_interface] = ACTIONS(2164),
    [sym_identifier] = ACTIONS(2166),
    [sym_comment] = ACTIONS(58),
  },
  [999] = {
    [sym__semicolon] = ACTIONS(2168),
    [sym_comment] = ACTIONS(58),
  },
  [1000] = {
    [sym_default_value] = STATE(1061),
    [sym__semicolon] = ACTIONS(2168),
    [anon_sym_default] = ACTIONS(1858),
    [sym_comment] = ACTIONS(58),
  },
  [1001] = {
    [sym__expression] = STATE(1062),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1002] = {
    [anon_sym_GT] = ACTIONS(633),
    [anon_sym_LT] = ACTIONS(633),
    [anon_sym_EQ_EQ] = ACTIONS(631),
    [anon_sym_GT_EQ] = ACTIONS(631),
    [anon_sym_LT_EQ] = ACTIONS(631),
    [anon_sym_BANG_EQ] = ACTIONS(631),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(2170),
    [anon_sym_SLASH] = ACTIONS(2172),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(2170),
    [anon_sym_LT_LT] = ACTIONS(2170),
    [anon_sym_GT_GT] = ACTIONS(2172),
    [anon_sym_GT_GT_GT] = ACTIONS(2170),
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [1003] = {
    [anon_sym_GT] = ACTIONS(1864),
    [anon_sym_LT] = ACTIONS(1864),
    [anon_sym_EQ_EQ] = ACTIONS(1866),
    [anon_sym_GT_EQ] = ACTIONS(1866),
    [anon_sym_LT_EQ] = ACTIONS(1866),
    [anon_sym_BANG_EQ] = ACTIONS(1866),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(2174),
    [anon_sym_DASH] = ACTIONS(2174),
    [anon_sym_STAR] = ACTIONS(2170),
    [anon_sym_SLASH] = ACTIONS(2172),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(2170),
    [anon_sym_LT_LT] = ACTIONS(2170),
    [anon_sym_GT_GT] = ACTIONS(2172),
    [anon_sym_GT_GT_GT] = ACTIONS(2170),
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [1004] = {
    [anon_sym_GT] = ACTIONS(1864),
    [anon_sym_LT] = ACTIONS(1864),
    [anon_sym_EQ_EQ] = ACTIONS(1866),
    [anon_sym_GT_EQ] = ACTIONS(1866),
    [anon_sym_LT_EQ] = ACTIONS(1866),
    [anon_sym_BANG_EQ] = ACTIONS(1866),
    [anon_sym_AMP_AMP] = ACTIONS(2176),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(2174),
    [anon_sym_DASH] = ACTIONS(2174),
    [anon_sym_STAR] = ACTIONS(2170),
    [anon_sym_SLASH] = ACTIONS(2172),
    [anon_sym_AMP] = ACTIONS(1868),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(2170),
    [anon_sym_LT_LT] = ACTIONS(2170),
    [anon_sym_GT_GT] = ACTIONS(2172),
    [anon_sym_GT_GT_GT] = ACTIONS(2170),
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [1005] = {
    [anon_sym_GT] = ACTIONS(1864),
    [anon_sym_LT] = ACTIONS(1864),
    [anon_sym_EQ_EQ] = ACTIONS(1866),
    [anon_sym_GT_EQ] = ACTIONS(1866),
    [anon_sym_LT_EQ] = ACTIONS(1866),
    [anon_sym_BANG_EQ] = ACTIONS(1866),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(2170),
    [anon_sym_SLASH] = ACTIONS(2172),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(2170),
    [anon_sym_LT_LT] = ACTIONS(2170),
    [anon_sym_GT_GT] = ACTIONS(2172),
    [anon_sym_GT_GT_GT] = ACTIONS(2170),
    [anon_sym_COMMA] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [1006] = {
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_EQ_EQ] = ACTIONS(637),
    [anon_sym_GT_EQ] = ACTIONS(637),
    [anon_sym_LT_EQ] = ACTIONS(637),
    [anon_sym_BANG_EQ] = ACTIONS(637),
    [anon_sym_AMP_AMP] = ACTIONS(639),
    [anon_sym_PIPE_PIPE] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [anon_sym_STAR] = ACTIONS(645),
    [anon_sym_SLASH] = ACTIONS(647),
    [anon_sym_AMP] = ACTIONS(649),
    [anon_sym_PIPE] = ACTIONS(651),
    [anon_sym_CARET] = ACTIONS(641),
    [anon_sym_PERCENT] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_GT_GT_GT] = ACTIONS(645),
    [anon_sym_QMARK] = ACTIONS(653),
    [anon_sym_COLON] = ACTIONS(2178),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1007] = {
    [sym__semicolon] = ACTIONS(2180),
    [anon_sym_RPAREN] = ACTIONS(2180),
    [anon_sym_COMMA] = ACTIONS(2180),
    [anon_sym_RBRACE] = ACTIONS(2180),
    [sym_comment] = ACTIONS(58),
  },
  [1008] = {
    [anon_sym_COMMA] = ACTIONS(2182),
    [anon_sym_RBRACE] = ACTIONS(2182),
    [sym_comment] = ACTIONS(58),
  },
  [1009] = {
    [sym_lambda_expression] = STATE(1010),
    [sym__lambda_parameters] = STATE(28),
    [sym_unary_expression] = STATE(551),
    [sym_conditional_expression] = STATE(1010),
    [sym_conditional_or_expression] = STATE(689),
    [sym_conditional_and_expression] = STATE(690),
    [sym_inclusive_or_expression] = STATE(691),
    [sym_exclusive_or_expression] = STATE(692),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(693),
    [sym_equality_expression] = STATE(694),
    [sym_shift_expression] = STATE(695),
    [sym_additive_expression] = STATE(696),
    [sym_multiplicative_expression] = STATE(697),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1425),
    [anon_sym_TILDE] = ACTIONS(1425),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1010] = {
    [sym__semicolon] = ACTIONS(2184),
    [anon_sym_RPAREN] = ACTIONS(2184),
    [anon_sym_COMMA] = ACTIONS(2184),
    [anon_sym_RBRACE] = ACTIONS(2184),
    [sym_comment] = ACTIONS(58),
  },
  [1011] = {
    [sym__semicolon] = ACTIONS(2186),
    [anon_sym_COMMA] = ACTIONS(2186),
    [anon_sym_DOT] = ACTIONS(345),
    [sym_comment] = ACTIONS(58),
  },
  [1012] = {
    [anon_sym_GT] = ACTIONS(1666),
    [anon_sym_LT] = ACTIONS(1666),
    [anon_sym_EQ_EQ] = ACTIONS(1668),
    [anon_sym_GT_EQ] = ACTIONS(1668),
    [anon_sym_LT_EQ] = ACTIONS(1668),
    [anon_sym_BANG_EQ] = ACTIONS(1668),
    [anon_sym_AMP_AMP] = ACTIONS(1932),
    [anon_sym_PIPE_PIPE] = ACTIONS(1934),
    [anon_sym_PLUS] = ACTIONS(1936),
    [anon_sym_DASH] = ACTIONS(1936),
    [anon_sym_STAR] = ACTIONS(1938),
    [anon_sym_SLASH] = ACTIONS(1940),
    [anon_sym_AMP] = ACTIONS(1670),
    [anon_sym_PIPE] = ACTIONS(1942),
    [anon_sym_CARET] = ACTIONS(1934),
    [anon_sym_PERCENT] = ACTIONS(1938),
    [anon_sym_LT_LT] = ACTIONS(1938),
    [anon_sym_GT_GT] = ACTIONS(1940),
    [anon_sym_GT_GT_GT] = ACTIONS(1938),
    [anon_sym_RPAREN] = ACTIONS(2188),
    [anon_sym_COMMA] = ACTIONS(2188),
    [anon_sym_QMARK] = ACTIONS(1948),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1013] = {
    [sym__expression] = STATE(1064),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1014] = {
    [anon_sym_RBRACE] = ACTIONS(2190),
    [anon_sym_default] = ACTIONS(2190),
    [anon_sym_if] = ACTIONS(2190),
    [anon_sym_AT] = ACTIONS(2190),
    [anon_sym_static] = ACTIONS(2190),
    [anon_sym_class] = ACTIONS(2190),
    [anon_sym_public] = ACTIONS(2190),
    [anon_sym_protected] = ACTIONS(2190),
    [anon_sym_private] = ACTIONS(2190),
    [anon_sym_abstract] = ACTIONS(2190),
    [anon_sym_final] = ACTIONS(2190),
    [anon_sym_strictfp] = ACTIONS(2190),
    [anon_sym_synchronized] = ACTIONS(2190),
    [anon_sym_native] = ACTIONS(2190),
    [sym_comment] = ACTIONS(58),
  },
  [1015] = {
    [sym_type_arguments] = STATE(772),
    [anon_sym_LT] = ACTIONS(2192),
    [anon_sym_LPAREN] = ACTIONS(2195),
    [anon_sym_DOT] = ACTIONS(2197),
    [anon_sym_LBRACK] = ACTIONS(1620),
    [anon_sym_AT] = ACTIONS(1620),
    [anon_sym_LT_GT] = ACTIONS(2195),
    [sym_comment] = ACTIONS(58),
  },
  [1016] = {
    [anon_sym_LT] = ACTIONS(2200),
    [anon_sym_LPAREN] = ACTIONS(2195),
    [anon_sym_DOT] = ACTIONS(2195),
    [anon_sym_LT_GT] = ACTIONS(2195),
    [sym_comment] = ACTIONS(58),
  },
  [1017] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(2202),
    [sym_comment] = ACTIONS(58),
  },
  [1018] = {
    [anon_sym_LT] = ACTIONS(2204),
    [anon_sym_LPAREN] = ACTIONS(2083),
    [anon_sym_DOT] = ACTIONS(2083),
    [anon_sym_LT_GT] = ACTIONS(2083),
    [sym_comment] = ACTIONS(58),
  },
  [1019] = {
    [sym__annotation] = STATE(139),
    [sym_normal_annotation] = STATE(53),
    [sym_marker_annotation] = STATE(53),
    [sym_single_element_annotation] = STATE(53),
    [anon_sym_AT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(2090),
    [sym_comment] = ACTIONS(58),
  },
  [1020] = {
    [sym_class_body] = STATE(1066),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [anon_sym_DOT] = ACTIONS(2206),
    [anon_sym_LBRACK] = ACTIONS(2206),
    [anon_sym_COLON_COLON] = ACTIONS(2206),
    [sym_comment] = ACTIONS(58),
  },
  [1021] = {
    [anon_sym_RPAREN] = ACTIONS(2208),
    [sym_comment] = ACTIONS(58),
  },
  [1022] = {
    [anon_sym_RBRACE] = ACTIONS(2210),
    [sym_comment] = ACTIONS(58),
  },
  [1023] = {
    [anon_sym_COMMA] = ACTIONS(2212),
    [anon_sym_RBRACE] = ACTIONS(2212),
    [anon_sym_DOT] = ACTIONS(2212),
    [anon_sym_COLON_COLON] = ACTIONS(2212),
    [sym_comment] = ACTIONS(58),
  },
  [1024] = {
    [anon_sym_GT] = ACTIONS(1864),
    [anon_sym_LT] = ACTIONS(1864),
    [anon_sym_EQ_EQ] = ACTIONS(1866),
    [anon_sym_GT_EQ] = ACTIONS(1866),
    [anon_sym_LT_EQ] = ACTIONS(1866),
    [anon_sym_BANG_EQ] = ACTIONS(1866),
    [anon_sym_AMP_AMP] = ACTIONS(2176),
    [anon_sym_PIPE_PIPE] = ACTIONS(2214),
    [anon_sym_PLUS] = ACTIONS(2174),
    [anon_sym_DASH] = ACTIONS(2174),
    [anon_sym_STAR] = ACTIONS(2170),
    [anon_sym_SLASH] = ACTIONS(2172),
    [anon_sym_AMP] = ACTIONS(1868),
    [anon_sym_PIPE] = ACTIONS(2216),
    [anon_sym_CARET] = ACTIONS(2214),
    [anon_sym_PERCENT] = ACTIONS(2170),
    [anon_sym_LT_LT] = ACTIONS(2170),
    [anon_sym_GT_GT] = ACTIONS(2172),
    [anon_sym_GT_GT_GT] = ACTIONS(2170),
    [anon_sym_COMMA] = ACTIONS(2218),
    [anon_sym_QMARK] = ACTIONS(2220),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(2218),
    [sym_comment] = ACTIONS(58),
  },
  [1025] = {
    [aux_sym_array_initializer_repeat1] = STATE(1070),
    [anon_sym_COMMA] = ACTIONS(2222),
    [anon_sym_RBRACE] = ACTIONS(2210),
    [sym_comment] = ACTIONS(58),
  },
  [1026] = {
    [anon_sym_COMMA] = ACTIONS(2218),
    [anon_sym_RBRACE] = ACTIONS(2218),
    [sym_comment] = ACTIONS(58),
  },
  [1027] = {
    [anon_sym_DOT] = ACTIONS(2206),
    [anon_sym_LBRACK] = ACTIONS(2206),
    [anon_sym_COLON_COLON] = ACTIONS(2206),
    [sym_comment] = ACTIONS(58),
  },
  [1028] = {
    [anon_sym_LPAREN] = ACTIONS(2224),
    [sym_comment] = ACTIONS(58),
  },
  [1029] = {
    [sym__semicolon] = ACTIONS(2226),
    [sym_comment] = ACTIONS(58),
  },
  [1030] = {
    [anon_sym_GT] = ACTIONS(633),
    [anon_sym_LT] = ACTIONS(633),
    [anon_sym_EQ_EQ] = ACTIONS(631),
    [anon_sym_GT_EQ] = ACTIONS(631),
    [anon_sym_LT_EQ] = ACTIONS(631),
    [anon_sym_BANG_EQ] = ACTIONS(631),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(1988),
    [anon_sym_SLASH] = ACTIONS(1990),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(1988),
    [anon_sym_LT_LT] = ACTIONS(1988),
    [anon_sym_GT_GT] = ACTIONS(1990),
    [anon_sym_GT_GT_GT] = ACTIONS(1988),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [1031] = {
    [anon_sym_GT] = ACTIONS(1978),
    [anon_sym_LT] = ACTIONS(1978),
    [anon_sym_EQ_EQ] = ACTIONS(1980),
    [anon_sym_GT_EQ] = ACTIONS(1980),
    [anon_sym_LT_EQ] = ACTIONS(1980),
    [anon_sym_BANG_EQ] = ACTIONS(1980),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(1986),
    [anon_sym_DASH] = ACTIONS(1986),
    [anon_sym_STAR] = ACTIONS(1988),
    [anon_sym_SLASH] = ACTIONS(1990),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(1988),
    [anon_sym_LT_LT] = ACTIONS(1988),
    [anon_sym_GT_GT] = ACTIONS(1990),
    [anon_sym_GT_GT_GT] = ACTIONS(1988),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [1032] = {
    [anon_sym_GT] = ACTIONS(1978),
    [anon_sym_LT] = ACTIONS(1978),
    [anon_sym_EQ_EQ] = ACTIONS(1980),
    [anon_sym_GT_EQ] = ACTIONS(1980),
    [anon_sym_LT_EQ] = ACTIONS(1980),
    [anon_sym_BANG_EQ] = ACTIONS(1980),
    [anon_sym_AMP_AMP] = ACTIONS(1982),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(1986),
    [anon_sym_DASH] = ACTIONS(1986),
    [anon_sym_STAR] = ACTIONS(1988),
    [anon_sym_SLASH] = ACTIONS(1990),
    [anon_sym_AMP] = ACTIONS(1992),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(1988),
    [anon_sym_LT_LT] = ACTIONS(1988),
    [anon_sym_GT_GT] = ACTIONS(1990),
    [anon_sym_GT_GT_GT] = ACTIONS(1988),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [1033] = {
    [anon_sym_GT] = ACTIONS(1978),
    [anon_sym_LT] = ACTIONS(1978),
    [anon_sym_EQ_EQ] = ACTIONS(1980),
    [anon_sym_GT_EQ] = ACTIONS(1980),
    [anon_sym_LT_EQ] = ACTIONS(1980),
    [anon_sym_BANG_EQ] = ACTIONS(1980),
    [anon_sym_AMP_AMP] = ACTIONS(631),
    [anon_sym_PIPE_PIPE] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(1988),
    [anon_sym_SLASH] = ACTIONS(1990),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(1988),
    [anon_sym_LT_LT] = ACTIONS(1988),
    [anon_sym_GT_GT] = ACTIONS(1990),
    [anon_sym_GT_GT_GT] = ACTIONS(1988),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(631),
    [sym_comment] = ACTIONS(58),
  },
  [1034] = {
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_EQ_EQ] = ACTIONS(637),
    [anon_sym_GT_EQ] = ACTIONS(637),
    [anon_sym_LT_EQ] = ACTIONS(637),
    [anon_sym_BANG_EQ] = ACTIONS(637),
    [anon_sym_AMP_AMP] = ACTIONS(639),
    [anon_sym_PIPE_PIPE] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [anon_sym_STAR] = ACTIONS(645),
    [anon_sym_SLASH] = ACTIONS(647),
    [anon_sym_AMP] = ACTIONS(649),
    [anon_sym_PIPE] = ACTIONS(651),
    [anon_sym_CARET] = ACTIONS(641),
    [anon_sym_PERCENT] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_GT_GT_GT] = ACTIONS(645),
    [anon_sym_QMARK] = ACTIONS(653),
    [anon_sym_COLON] = ACTIONS(2228),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1035] = {
    [anon_sym_DOT] = ACTIONS(2230),
    [anon_sym_LBRACK] = ACTIONS(2230),
    [anon_sym_AT] = ACTIONS(2230),
    [anon_sym_COLON_COLON] = ACTIONS(2230),
    [sym_comment] = ACTIONS(58),
  },
  [1036] = {
    [anon_sym_LPAREN] = ACTIONS(2232),
    [anon_sym_DOT] = ACTIONS(2234),
    [anon_sym_LBRACK] = ACTIONS(2234),
    [anon_sym_COLON_COLON] = ACTIONS(2234),
    [sym_comment] = ACTIONS(58),
  },
  [1037] = {
    [sym_identifier] = ACTIONS(2236),
    [sym_comment] = ACTIONS(58),
  },
  [1038] = {
    [anon_sym_DOT] = ACTIONS(2238),
    [anon_sym_LBRACK] = ACTIONS(2238),
    [anon_sym_COLON_COLON] = ACTIONS(2238),
    [sym_comment] = ACTIONS(58),
  },
  [1039] = {
    [sym_identifier] = ACTIONS(2240),
    [sym_comment] = ACTIONS(58),
  },
  [1040] = {
    [anon_sym_DOT] = ACTIONS(2242),
    [anon_sym_LBRACK] = ACTIONS(2242),
    [anon_sym_COLON_COLON] = ACTIONS(2242),
    [sym_comment] = ACTIONS(58),
  },
  [1041] = {
    [anon_sym_RPAREN] = ACTIONS(2244),
    [sym_comment] = ACTIONS(58),
  },
  [1042] = {
    [sym__expression] = STATE(851),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1077),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2244),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1043] = {
    [anon_sym_super] = ACTIONS(975),
    [sym_identifier] = ACTIONS(1079),
    [sym_comment] = ACTIONS(58),
  },
  [1044] = {
    [anon_sym_GT] = ACTIONS(2246),
    [anon_sym_COMMA] = ACTIONS(979),
    [sym_comment] = ACTIONS(58),
  },
  [1045] = {
    [anon_sym_RPAREN] = ACTIONS(2248),
    [sym_comment] = ACTIONS(58),
  },
  [1046] = {
    [sym__expression] = STATE(851),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1080),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2248),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1047] = {
    [sym__semicolon] = ACTIONS(1850),
    [anon_sym_LT] = ACTIONS(1850),
    [anon_sym_LBRACE] = ACTIONS(1850),
    [anon_sym_RBRACE] = ACTIONS(1850),
    [anon_sym_default] = ACTIONS(1852),
    [anon_sym_boolean] = ACTIONS(1852),
    [anon_sym_byte] = ACTIONS(1852),
    [anon_sym_short] = ACTIONS(1852),
    [anon_sym_int] = ACTIONS(1852),
    [anon_sym_long] = ACTIONS(1852),
    [anon_sym_char] = ACTIONS(1852),
    [anon_sym_float] = ACTIONS(1852),
    [anon_sym_double] = ACTIONS(1852),
    [anon_sym_AT] = ACTIONS(1850),
    [anon_sym_static] = ACTIONS(1852),
    [anon_sym_class] = ACTIONS(1852),
    [anon_sym_public] = ACTIONS(1852),
    [anon_sym_protected] = ACTIONS(1852),
    [anon_sym_private] = ACTIONS(1852),
    [anon_sym_abstract] = ACTIONS(1852),
    [anon_sym_final] = ACTIONS(1852),
    [anon_sym_strictfp] = ACTIONS(1852),
    [anon_sym_synchronized] = ACTIONS(1852),
    [anon_sym_native] = ACTIONS(1852),
    [anon_sym_interface] = ACTIONS(1852),
    [sym_identifier] = ACTIONS(1854),
    [sym_comment] = ACTIONS(58),
  },
  [1048] = {
    [sym_statement] = STATE(787),
    [sym_statement_no_short_if] = STATE(1081),
    [sym_if_then_statement] = STATE(224),
    [sym_if_then_else_statement] = STATE(224),
    [sym_if_then_else_statement_no_short_if] = STATE(789),
    [anon_sym_if] = ACTIONS(1644),
    [sym_comment] = ACTIONS(58),
  },
  [1049] = {
    [sym__semicolon] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(148),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(323),
    [anon_sym_PIPE_PIPE] = ACTIONS(323),
    [anon_sym_PLUS] = ACTIONS(325),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_CARET] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(323),
    [anon_sym_LT_LT] = ACTIONS(323),
    [anon_sym_GT_GT] = ACTIONS(325),
    [anon_sym_GT_GT_GT] = ACTIONS(323),
    [anon_sym_QMARK] = ACTIONS(323),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1050] = {
    [sym_unary_expression] = STATE(551),
    [sym_conditional_and_expression] = STATE(1082),
    [sym_inclusive_or_expression] = STATE(991),
    [sym_exclusive_or_expression] = STATE(992),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(993),
    [sym_equality_expression] = STATE(994),
    [sym_shift_expression] = STATE(995),
    [sym_additive_expression] = STATE(996),
    [sym_multiplicative_expression] = STATE(997),
    [anon_sym_BANG] = ACTIONS(2050),
    [anon_sym_TILDE] = ACTIONS(2050),
    [sym_comment] = ACTIONS(58),
  },
  [1051] = {
    [sym__expression] = STATE(1083),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_DASH_DASH] = ACTIONS(391),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1052] = {
    [sym_unary_expression] = STATE(551),
    [sym_inclusive_or_expression] = STATE(1084),
    [sym_exclusive_or_expression] = STATE(992),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(993),
    [sym_equality_expression] = STATE(994),
    [sym_shift_expression] = STATE(995),
    [sym_additive_expression] = STATE(996),
    [sym_multiplicative_expression] = STATE(997),
    [anon_sym_BANG] = ACTIONS(2050),
    [anon_sym_TILDE] = ACTIONS(2050),
    [sym_comment] = ACTIONS(58),
  },
  [1053] = {
    [sym_unary_expression] = STATE(551),
    [sym_exclusive_or_expression] = STATE(1085),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(993),
    [sym_equality_expression] = STATE(994),
    [sym_shift_expression] = STATE(995),
    [sym_additive_expression] = STATE(996),
    [sym_multiplicative_expression] = STATE(997),
    [anon_sym_BANG] = ACTIONS(2050),
    [anon_sym_TILDE] = ACTIONS(2050),
    [sym_comment] = ACTIONS(58),
  },
  [1054] = {
    [sym_unary_expression] = STATE(551),
    [sym_and_expression] = STATE(827),
    [sym_relational_expression] = STATE(993),
    [sym_equality_expression] = STATE(994),
    [sym_shift_expression] = STATE(995),
    [sym_additive_expression] = STATE(996),
    [sym_multiplicative_expression] = STATE(997),
    [anon_sym_BANG] = ACTIONS(2050),
    [anon_sym_TILDE] = ACTIONS(2050),
    [sym_comment] = ACTIONS(58),
  },
  [1055] = {
    [sym_unary_expression] = STATE(551),
    [sym_shift_expression] = STATE(1086),
    [sym_additive_expression] = STATE(996),
    [sym_multiplicative_expression] = STATE(997),
    [anon_sym_BANG] = ACTIONS(2050),
    [anon_sym_TILDE] = ACTIONS(2050),
    [sym_comment] = ACTIONS(58),
  },
  [1056] = {
    [sym_unary_expression] = STATE(551),
    [sym_relational_expression] = STATE(1087),
    [sym_shift_expression] = STATE(995),
    [sym_additive_expression] = STATE(996),
    [sym_multiplicative_expression] = STATE(997),
    [anon_sym_BANG] = ACTIONS(2050),
    [anon_sym_TILDE] = ACTIONS(2050),
    [sym_comment] = ACTIONS(58),
  },
  [1057] = {
    [sym_unary_expression] = STATE(551),
    [sym_additive_expression] = STATE(1088),
    [sym_multiplicative_expression] = STATE(997),
    [anon_sym_BANG] = ACTIONS(2050),
    [anon_sym_TILDE] = ACTIONS(2050),
    [sym_comment] = ACTIONS(58),
  },
  [1058] = {
    [sym_unary_expression] = STATE(551),
    [sym_multiplicative_expression] = STATE(1089),
    [anon_sym_BANG] = ACTIONS(2050),
    [anon_sym_TILDE] = ACTIONS(2050),
    [sym_comment] = ACTIONS(58),
  },
  [1059] = {
    [sym_unary_expression] = STATE(832),
    [anon_sym_BANG] = ACTIONS(2050),
    [anon_sym_TILDE] = ACTIONS(2050),
    [sym_comment] = ACTIONS(58),
  },
  [1060] = {
    [anon_sym_RBRACE] = ACTIONS(2250),
    [anon_sym_default] = ACTIONS(2252),
    [anon_sym_boolean] = ACTIONS(2252),
    [anon_sym_byte] = ACTIONS(2252),
    [anon_sym_short] = ACTIONS(2252),
    [anon_sym_int] = ACTIONS(2252),
    [anon_sym_long] = ACTIONS(2252),
    [anon_sym_char] = ACTIONS(2252),
    [anon_sym_float] = ACTIONS(2252),
    [anon_sym_double] = ACTIONS(2252),
    [anon_sym_AT] = ACTIONS(2250),
    [anon_sym_static] = ACTIONS(2252),
    [anon_sym_class] = ACTIONS(2252),
    [anon_sym_public] = ACTIONS(2252),
    [anon_sym_protected] = ACTIONS(2252),
    [anon_sym_private] = ACTIONS(2252),
    [anon_sym_abstract] = ACTIONS(2252),
    [anon_sym_final] = ACTIONS(2252),
    [anon_sym_strictfp] = ACTIONS(2252),
    [anon_sym_synchronized] = ACTIONS(2252),
    [anon_sym_native] = ACTIONS(2252),
    [anon_sym_interface] = ACTIONS(2252),
    [sym_identifier] = ACTIONS(2254),
    [sym_comment] = ACTIONS(58),
  },
  [1061] = {
    [sym__semicolon] = ACTIONS(2256),
    [sym_comment] = ACTIONS(58),
  },
  [1062] = {
    [anon_sym_GT] = ACTIONS(1666),
    [anon_sym_LT] = ACTIONS(1666),
    [anon_sym_EQ_EQ] = ACTIONS(1668),
    [anon_sym_GT_EQ] = ACTIONS(1668),
    [anon_sym_LT_EQ] = ACTIONS(1668),
    [anon_sym_BANG_EQ] = ACTIONS(1668),
    [anon_sym_AMP_AMP] = ACTIONS(1932),
    [anon_sym_PIPE_PIPE] = ACTIONS(1934),
    [anon_sym_PLUS] = ACTIONS(1936),
    [anon_sym_DASH] = ACTIONS(1936),
    [anon_sym_STAR] = ACTIONS(1938),
    [anon_sym_SLASH] = ACTIONS(1940),
    [anon_sym_AMP] = ACTIONS(1670),
    [anon_sym_PIPE] = ACTIONS(1942),
    [anon_sym_CARET] = ACTIONS(1934),
    [anon_sym_PERCENT] = ACTIONS(1938),
    [anon_sym_LT_LT] = ACTIONS(1938),
    [anon_sym_GT_GT] = ACTIONS(1940),
    [anon_sym_GT_GT_GT] = ACTIONS(1938),
    [anon_sym_RPAREN] = ACTIONS(1301),
    [anon_sym_COMMA] = ACTIONS(1301),
    [anon_sym_QMARK] = ACTIONS(1948),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1063] = {
    [sym__expression] = STATE(1091),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1674),
    [anon_sym_TILDE] = ACTIONS(1674),
    [anon_sym_PLUS_PLUS] = ACTIONS(1676),
    [anon_sym_DASH_DASH] = ACTIONS(1676),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1064] = {
    [anon_sym_GT] = ACTIONS(1666),
    [anon_sym_LT] = ACTIONS(1666),
    [anon_sym_EQ_EQ] = ACTIONS(1668),
    [anon_sym_GT_EQ] = ACTIONS(1668),
    [anon_sym_LT_EQ] = ACTIONS(1668),
    [anon_sym_BANG_EQ] = ACTIONS(1668),
    [anon_sym_AMP_AMP] = ACTIONS(1932),
    [anon_sym_PIPE_PIPE] = ACTIONS(1934),
    [anon_sym_PLUS] = ACTIONS(1936),
    [anon_sym_DASH] = ACTIONS(1936),
    [anon_sym_STAR] = ACTIONS(1938),
    [anon_sym_SLASH] = ACTIONS(1940),
    [anon_sym_AMP] = ACTIONS(1670),
    [anon_sym_PIPE] = ACTIONS(1942),
    [anon_sym_CARET] = ACTIONS(1934),
    [anon_sym_PERCENT] = ACTIONS(1938),
    [anon_sym_LT_LT] = ACTIONS(1938),
    [anon_sym_GT_GT] = ACTIONS(1940),
    [anon_sym_GT_GT_GT] = ACTIONS(1938),
    [anon_sym_RPAREN] = ACTIONS(2258),
    [anon_sym_COMMA] = ACTIONS(2258),
    [anon_sym_QMARK] = ACTIONS(1948),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1065] = {
    [anon_sym_LT] = ACTIONS(2260),
    [anon_sym_LPAREN] = ACTIONS(2262),
    [anon_sym_DOT] = ACTIONS(2262),
    [anon_sym_LT_GT] = ACTIONS(2262),
    [sym_comment] = ACTIONS(58),
  },
  [1066] = {
    [anon_sym_DOT] = ACTIONS(2264),
    [anon_sym_LBRACK] = ACTIONS(2264),
    [anon_sym_COLON_COLON] = ACTIONS(2264),
    [sym_comment] = ACTIONS(58),
  },
  [1067] = {
    [sym_class_body] = STATE(1092),
    [anon_sym_LBRACE] = ACTIONS(1035),
    [anon_sym_DOT] = ACTIONS(2264),
    [anon_sym_LBRACK] = ACTIONS(2264),
    [anon_sym_COLON_COLON] = ACTIONS(2264),
    [sym_comment] = ACTIONS(58),
  },
  [1068] = {
    [anon_sym_COMMA] = ACTIONS(2266),
    [anon_sym_RBRACE] = ACTIONS(2266),
    [anon_sym_DOT] = ACTIONS(2266),
    [anon_sym_COLON_COLON] = ACTIONS(2266),
    [sym_comment] = ACTIONS(58),
  },
  [1069] = {
    [sym__expression] = STATE(1024),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_variable_initializer] = STATE(1094),
    [sym_array_initializer] = STATE(1026),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1674),
    [anon_sym_TILDE] = ACTIONS(1674),
    [anon_sym_PLUS_PLUS] = ACTIONS(1676),
    [anon_sym_DASH_DASH] = ACTIONS(1676),
    [anon_sym_LBRACE] = ACTIONS(1972),
    [anon_sym_RBRACE] = ACTIONS(2268),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1070] = {
    [anon_sym_COMMA] = ACTIONS(2270),
    [anon_sym_RBRACE] = ACTIONS(2268),
    [sym_comment] = ACTIONS(58),
  },
  [1071] = {
    [anon_sym_RBRACE] = ACTIONS(2272),
    [anon_sym_default] = ACTIONS(2272),
    [anon_sym_if] = ACTIONS(2272),
    [anon_sym_AT] = ACTIONS(2272),
    [anon_sym_static] = ACTIONS(2272),
    [anon_sym_class] = ACTIONS(2272),
    [anon_sym_public] = ACTIONS(2272),
    [anon_sym_protected] = ACTIONS(2272),
    [anon_sym_private] = ACTIONS(2272),
    [anon_sym_abstract] = ACTIONS(2272),
    [anon_sym_final] = ACTIONS(2272),
    [anon_sym_strictfp] = ACTIONS(2272),
    [anon_sym_synchronized] = ACTIONS(2272),
    [anon_sym_native] = ACTIONS(2272),
    [sym_comment] = ACTIONS(58),
  },
  [1072] = {
    [sym__expression] = STATE(1096),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1760),
    [anon_sym_TILDE] = ACTIONS(1760),
    [anon_sym_PLUS_PLUS] = ACTIONS(1762),
    [anon_sym_DASH_DASH] = ACTIONS(1762),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1073] = {
    [sym__expression] = STATE(851),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1098),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2274),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1074] = {
    [anon_sym_LPAREN] = ACTIONS(2276),
    [sym_comment] = ACTIONS(58),
  },
  [1075] = {
    [anon_sym_DOT] = ACTIONS(2278),
    [anon_sym_LBRACK] = ACTIONS(2278),
    [anon_sym_COLON_COLON] = ACTIONS(2278),
    [sym_comment] = ACTIONS(58),
  },
  [1076] = {
    [anon_sym_DOT] = ACTIONS(2280),
    [anon_sym_LBRACK] = ACTIONS(2280),
    [anon_sym_COLON_COLON] = ACTIONS(2280),
    [sym_comment] = ACTIONS(58),
  },
  [1077] = {
    [anon_sym_RPAREN] = ACTIONS(2274),
    [sym_comment] = ACTIONS(58),
  },
  [1078] = {
    [anon_sym_super] = ACTIONS(1297),
    [sym_identifier] = ACTIONS(1395),
    [sym_comment] = ACTIONS(58),
  },
  [1079] = {
    [sym__semicolon] = ACTIONS(2282),
    [sym_comment] = ACTIONS(58),
  },
  [1080] = {
    [anon_sym_RPAREN] = ACTIONS(2284),
    [sym_comment] = ACTIONS(58),
  },
  [1081] = {
    [anon_sym_else] = ACTIONS(2286),
    [sym_comment] = ACTIONS(58),
  },
  [1082] = {
    [sym__semicolon] = ACTIONS(1874),
    [anon_sym_AMP_AMP] = ACTIONS(2142),
    [anon_sym_PIPE_PIPE] = ACTIONS(1874),
    [anon_sym_QMARK] = ACTIONS(1874),
    [sym_comment] = ACTIONS(58),
  },
  [1083] = {
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_EQ_EQ] = ACTIONS(637),
    [anon_sym_GT_EQ] = ACTIONS(637),
    [anon_sym_LT_EQ] = ACTIONS(637),
    [anon_sym_BANG_EQ] = ACTIONS(637),
    [anon_sym_AMP_AMP] = ACTIONS(639),
    [anon_sym_PIPE_PIPE] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [anon_sym_STAR] = ACTIONS(645),
    [anon_sym_SLASH] = ACTIONS(647),
    [anon_sym_AMP] = ACTIONS(649),
    [anon_sym_PIPE] = ACTIONS(651),
    [anon_sym_CARET] = ACTIONS(641),
    [anon_sym_PERCENT] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_GT_GT_GT] = ACTIONS(645),
    [anon_sym_QMARK] = ACTIONS(653),
    [anon_sym_COLON] = ACTIONS(2288),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [sym_comment] = ACTIONS(58),
  },
  [1084] = {
    [sym__semicolon] = ACTIONS(1878),
    [anon_sym_AMP_AMP] = ACTIONS(1878),
    [anon_sym_PIPE_PIPE] = ACTIONS(1878),
    [anon_sym_PIPE] = ACTIONS(2144),
    [anon_sym_QMARK] = ACTIONS(1878),
    [sym_comment] = ACTIONS(58),
  },
  [1085] = {
    [sym__semicolon] = ACTIONS(1880),
    [anon_sym_AMP_AMP] = ACTIONS(1880),
    [anon_sym_PIPE_PIPE] = ACTIONS(1880),
    [anon_sym_PIPE] = ACTIONS(1882),
    [anon_sym_CARET] = ACTIONS(2146),
    [anon_sym_QMARK] = ACTIONS(1880),
    [sym_comment] = ACTIONS(58),
  },
  [1086] = {
    [sym__semicolon] = ACTIONS(1890),
    [anon_sym_LT] = ACTIONS(1888),
    [anon_sym_EQ_EQ] = ACTIONS(1890),
    [anon_sym_BANG_EQ] = ACTIONS(1890),
    [anon_sym_AMP_AMP] = ACTIONS(1890),
    [anon_sym_PIPE_PIPE] = ACTIONS(1890),
    [anon_sym_PIPE] = ACTIONS(1888),
    [anon_sym_CARET] = ACTIONS(1890),
    [anon_sym_LT_LT] = ACTIONS(2152),
    [anon_sym_GT_GT] = ACTIONS(2154),
    [anon_sym_GT_GT_GT] = ACTIONS(2152),
    [anon_sym_QMARK] = ACTIONS(1890),
    [sym_comment] = ACTIONS(58),
  },
  [1087] = {
    [sym__semicolon] = ACTIONS(1894),
    [anon_sym_LT] = ACTIONS(2148),
    [anon_sym_EQ_EQ] = ACTIONS(1892),
    [anon_sym_BANG_EQ] = ACTIONS(1892),
    [anon_sym_AMP_AMP] = ACTIONS(1894),
    [anon_sym_PIPE_PIPE] = ACTIONS(1894),
    [anon_sym_PIPE] = ACTIONS(1896),
    [anon_sym_CARET] = ACTIONS(1894),
    [anon_sym_QMARK] = ACTIONS(1894),
    [sym_comment] = ACTIONS(58),
  },
  [1088] = {
    [sym__semicolon] = ACTIONS(1900),
    [anon_sym_LT] = ACTIONS(1898),
    [anon_sym_EQ_EQ] = ACTIONS(1900),
    [anon_sym_BANG_EQ] = ACTIONS(1900),
    [anon_sym_AMP_AMP] = ACTIONS(1900),
    [anon_sym_PIPE_PIPE] = ACTIONS(1900),
    [anon_sym_PLUS] = ACTIONS(2156),
    [anon_sym_DASH] = ACTIONS(2156),
    [anon_sym_PIPE] = ACTIONS(1898),
    [anon_sym_CARET] = ACTIONS(1900),
    [anon_sym_LT_LT] = ACTIONS(1900),
    [anon_sym_GT_GT] = ACTIONS(1898),
    [anon_sym_GT_GT_GT] = ACTIONS(1900),
    [anon_sym_QMARK] = ACTIONS(1900),
    [sym_comment] = ACTIONS(58),
  },
  [1089] = {
    [sym__semicolon] = ACTIONS(1904),
    [anon_sym_LT] = ACTIONS(1902),
    [anon_sym_EQ_EQ] = ACTIONS(1904),
    [anon_sym_BANG_EQ] = ACTIONS(1904),
    [anon_sym_AMP_AMP] = ACTIONS(1904),
    [anon_sym_PIPE_PIPE] = ACTIONS(1904),
    [anon_sym_PLUS] = ACTIONS(1904),
    [anon_sym_DASH] = ACTIONS(1904),
    [anon_sym_STAR] = ACTIONS(2158),
    [anon_sym_SLASH] = ACTIONS(2160),
    [anon_sym_PIPE] = ACTIONS(1902),
    [anon_sym_CARET] = ACTIONS(1904),
    [anon_sym_PERCENT] = ACTIONS(2158),
    [anon_sym_LT_LT] = ACTIONS(1904),
    [anon_sym_GT_GT] = ACTIONS(1902),
    [anon_sym_GT_GT_GT] = ACTIONS(1904),
    [anon_sym_QMARK] = ACTIONS(1904),
    [sym_comment] = ACTIONS(58),
  },
  [1090] = {
    [anon_sym_RBRACE] = ACTIONS(2290),
    [anon_sym_default] = ACTIONS(2292),
    [anon_sym_boolean] = ACTIONS(2292),
    [anon_sym_byte] = ACTIONS(2292),
    [anon_sym_short] = ACTIONS(2292),
    [anon_sym_int] = ACTIONS(2292),
    [anon_sym_long] = ACTIONS(2292),
    [anon_sym_char] = ACTIONS(2292),
    [anon_sym_float] = ACTIONS(2292),
    [anon_sym_double] = ACTIONS(2292),
    [anon_sym_AT] = ACTIONS(2290),
    [anon_sym_static] = ACTIONS(2292),
    [anon_sym_class] = ACTIONS(2292),
    [anon_sym_public] = ACTIONS(2292),
    [anon_sym_protected] = ACTIONS(2292),
    [anon_sym_private] = ACTIONS(2292),
    [anon_sym_abstract] = ACTIONS(2292),
    [anon_sym_final] = ACTIONS(2292),
    [anon_sym_strictfp] = ACTIONS(2292),
    [anon_sym_synchronized] = ACTIONS(2292),
    [anon_sym_native] = ACTIONS(2292),
    [anon_sym_interface] = ACTIONS(2292),
    [sym_identifier] = ACTIONS(2294),
    [sym_comment] = ACTIONS(58),
  },
  [1091] = {
    [anon_sym_GT] = ACTIONS(1864),
    [anon_sym_LT] = ACTIONS(1864),
    [anon_sym_EQ_EQ] = ACTIONS(1866),
    [anon_sym_GT_EQ] = ACTIONS(1866),
    [anon_sym_LT_EQ] = ACTIONS(1866),
    [anon_sym_BANG_EQ] = ACTIONS(1866),
    [anon_sym_AMP_AMP] = ACTIONS(2176),
    [anon_sym_PIPE_PIPE] = ACTIONS(2214),
    [anon_sym_PLUS] = ACTIONS(2174),
    [anon_sym_DASH] = ACTIONS(2174),
    [anon_sym_STAR] = ACTIONS(2170),
    [anon_sym_SLASH] = ACTIONS(2172),
    [anon_sym_AMP] = ACTIONS(1868),
    [anon_sym_PIPE] = ACTIONS(2216),
    [anon_sym_CARET] = ACTIONS(2214),
    [anon_sym_PERCENT] = ACTIONS(2170),
    [anon_sym_LT_LT] = ACTIONS(2170),
    [anon_sym_GT_GT] = ACTIONS(2172),
    [anon_sym_GT_GT_GT] = ACTIONS(2170),
    [anon_sym_COMMA] = ACTIONS(1301),
    [anon_sym_QMARK] = ACTIONS(2220),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(1301),
    [sym_comment] = ACTIONS(58),
  },
  [1092] = {
    [anon_sym_DOT] = ACTIONS(2296),
    [anon_sym_LBRACK] = ACTIONS(2296),
    [anon_sym_COLON_COLON] = ACTIONS(2296),
    [sym_comment] = ACTIONS(58),
  },
  [1093] = {
    [anon_sym_COMMA] = ACTIONS(2298),
    [anon_sym_RBRACE] = ACTIONS(2298),
    [anon_sym_DOT] = ACTIONS(2298),
    [anon_sym_COLON_COLON] = ACTIONS(2298),
    [sym_comment] = ACTIONS(58),
  },
  [1094] = {
    [anon_sym_COMMA] = ACTIONS(2300),
    [anon_sym_RBRACE] = ACTIONS(2300),
    [sym_comment] = ACTIONS(58),
  },
  [1095] = {
    [sym__expression] = STATE(1024),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_variable_initializer] = STATE(1105),
    [sym_array_initializer] = STATE(1026),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1674),
    [anon_sym_TILDE] = ACTIONS(1674),
    [anon_sym_PLUS_PLUS] = ACTIONS(1676),
    [anon_sym_DASH_DASH] = ACTIONS(1676),
    [anon_sym_LBRACE] = ACTIONS(1972),
    [anon_sym_RBRACE] = ACTIONS(2302),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1096] = {
    [anon_sym_GT] = ACTIONS(1978),
    [anon_sym_LT] = ACTIONS(1978),
    [anon_sym_EQ_EQ] = ACTIONS(1980),
    [anon_sym_GT_EQ] = ACTIONS(1980),
    [anon_sym_LT_EQ] = ACTIONS(1980),
    [anon_sym_BANG_EQ] = ACTIONS(1980),
    [anon_sym_AMP_AMP] = ACTIONS(1982),
    [anon_sym_PIPE_PIPE] = ACTIONS(1984),
    [anon_sym_PLUS] = ACTIONS(1986),
    [anon_sym_DASH] = ACTIONS(1986),
    [anon_sym_STAR] = ACTIONS(1988),
    [anon_sym_SLASH] = ACTIONS(1990),
    [anon_sym_AMP] = ACTIONS(1992),
    [anon_sym_PIPE] = ACTIONS(1994),
    [anon_sym_CARET] = ACTIONS(1984),
    [anon_sym_PERCENT] = ACTIONS(1988),
    [anon_sym_LT_LT] = ACTIONS(1988),
    [anon_sym_GT_GT] = ACTIONS(1990),
    [anon_sym_GT_GT_GT] = ACTIONS(1988),
    [anon_sym_QMARK] = ACTIONS(1996),
    [anon_sym_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(1301),
    [sym_comment] = ACTIONS(58),
  },
  [1097] = {
    [anon_sym_DOT] = ACTIONS(2304),
    [anon_sym_LBRACK] = ACTIONS(2304),
    [anon_sym_COLON_COLON] = ACTIONS(2304),
    [sym_comment] = ACTIONS(58),
  },
  [1098] = {
    [anon_sym_RPAREN] = ACTIONS(2306),
    [sym_comment] = ACTIONS(58),
  },
  [1099] = {
    [sym__expression] = STATE(851),
    [sym_binary_expression] = STATE(27),
    [sym_lambda_expression] = STATE(27),
    [sym__lambda_parameters] = STATE(28),
    [sym_ternary_expression] = STATE(27),
    [sym_unary_expression] = STATE(29),
    [sym_update_expression] = STATE(27),
    [sym_argument_list] = STATE(1107),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2306),
    [anon_sym_BANG] = ACTIONS(1419),
    [anon_sym_TILDE] = ACTIONS(1419),
    [anon_sym_PLUS_PLUS] = ACTIONS(1421),
    [anon_sym_DASH_DASH] = ACTIONS(1421),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1100] = {
    [anon_sym_RBRACE] = ACTIONS(2308),
    [anon_sym_default] = ACTIONS(2308),
    [anon_sym_if] = ACTIONS(2308),
    [anon_sym_AT] = ACTIONS(2308),
    [anon_sym_static] = ACTIONS(2308),
    [anon_sym_class] = ACTIONS(2308),
    [anon_sym_public] = ACTIONS(2308),
    [anon_sym_protected] = ACTIONS(2308),
    [anon_sym_private] = ACTIONS(2308),
    [anon_sym_abstract] = ACTIONS(2308),
    [anon_sym_final] = ACTIONS(2308),
    [anon_sym_strictfp] = ACTIONS(2308),
    [anon_sym_synchronized] = ACTIONS(2308),
    [anon_sym_native] = ACTIONS(2308),
    [sym_comment] = ACTIONS(58),
  },
  [1101] = {
    [sym__semicolon] = ACTIONS(2310),
    [sym_comment] = ACTIONS(58),
  },
  [1102] = {
    [sym_statement] = STATE(984),
    [sym_statement_no_short_if] = STATE(1109),
    [sym_if_then_statement] = STATE(224),
    [sym_if_then_else_statement] = STATE(224),
    [sym_if_then_else_statement_no_short_if] = STATE(789),
    [anon_sym_if] = ACTIONS(1644),
    [sym_comment] = ACTIONS(58),
  },
  [1103] = {
    [sym_lambda_expression] = STATE(1010),
    [sym__lambda_parameters] = STATE(28),
    [sym_unary_expression] = STATE(551),
    [sym_conditional_expression] = STATE(1010),
    [sym_conditional_or_expression] = STATE(989),
    [sym_conditional_and_expression] = STATE(990),
    [sym_inclusive_or_expression] = STATE(991),
    [sym_exclusive_or_expression] = STATE(992),
    [sym_and_expression] = STATE(557),
    [sym_relational_expression] = STATE(993),
    [sym_equality_expression] = STATE(994),
    [sym_shift_expression] = STATE(995),
    [sym_additive_expression] = STATE(996),
    [sym_multiplicative_expression] = STATE(997),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(2050),
    [anon_sym_TILDE] = ACTIONS(2050),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(58),
  },
  [1104] = {
    [anon_sym_COMMA] = ACTIONS(2312),
    [anon_sym_RBRACE] = ACTIONS(2312),
    [anon_sym_DOT] = ACTIONS(2312),
    [anon_sym_COLON_COLON] = ACTIONS(2312),
    [sym_comment] = ACTIONS(58),
  },
  [1105] = {
    [anon_sym_COMMA] = ACTIONS(2314),
    [anon_sym_RBRACE] = ACTIONS(2314),
    [sym_comment] = ACTIONS(58),
  },
  [1106] = {
    [anon_sym_DOT] = ACTIONS(2316),
    [anon_sym_LBRACK] = ACTIONS(2316),
    [anon_sym_COLON_COLON] = ACTIONS(2316),
    [sym_comment] = ACTIONS(58),
  },
  [1107] = {
    [anon_sym_RPAREN] = ACTIONS(2318),
    [sym_comment] = ACTIONS(58),
  },
  [1108] = {
    [anon_sym_RBRACE] = ACTIONS(2320),
    [anon_sym_default] = ACTIONS(2320),
    [anon_sym_if] = ACTIONS(2320),
    [anon_sym_AT] = ACTIONS(2320),
    [anon_sym_static] = ACTIONS(2320),
    [anon_sym_class] = ACTIONS(2320),
    [anon_sym_public] = ACTIONS(2320),
    [anon_sym_protected] = ACTIONS(2320),
    [anon_sym_private] = ACTIONS(2320),
    [anon_sym_abstract] = ACTIONS(2320),
    [anon_sym_final] = ACTIONS(2320),
    [anon_sym_strictfp] = ACTIONS(2320),
    [anon_sym_synchronized] = ACTIONS(2320),
    [anon_sym_native] = ACTIONS(2320),
    [sym_comment] = ACTIONS(58),
  },
  [1109] = {
    [anon_sym_else] = ACTIONS(2322),
    [sym_comment] = ACTIONS(58),
  },
  [1110] = {
    [anon_sym_DOT] = ACTIONS(2324),
    [anon_sym_LBRACK] = ACTIONS(2324),
    [anon_sym_COLON_COLON] = ACTIONS(2324),
    [sym_comment] = ACTIONS(58),
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
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_literal, 1),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(60),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(61),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_modifier, 1, .fragile = true),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unann_primitive_type, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unann_primitive_type, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integral_type, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integral_type, 1),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_floating_point_type, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_type, 1),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__lambda_parameters, 1),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unann_class_or_interface_type, 1),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unann_class_or_interface_type, 1),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1, .fragile = true),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1, .fragile = true),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 1),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 1),
  [178] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true), REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__annotation, 1),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__annotation, 1),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__annotation, 1),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 1),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_statement, 1),
  [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 1),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 1),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 1),
  [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 1),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 1),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_normal_class_declaration_repeat1, 1),
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 1),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(103),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 1),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 1),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 1),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unann_type, 1),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unann_type, 1),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 2),
  [259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 1),
  [261] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(129),
  [263] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(130),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 1),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inferred_formal_parameter_list, 1),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(140),
  [285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_unann_primitive_type, 1),
  [287] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integral_type, 1),
  [289] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_floating_point_type, 1),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [295] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_unann_class_or_interface_type, 1),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
  [299] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_modifier, 1, .fragile = true), REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [302] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true), REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(149),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_unann_type, 1),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 1),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 1),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unary_expression, 2),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unary_expression, 2),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_update_expression, 2),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_update_expression, 2),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_or_type_name, 1),
  [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_marker_annotation, 2),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_marker_annotation, 2),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_marker_annotation, 2),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 1),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [377] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(188),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unann_class_or_interface_type, 2),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unann_class_or_interface_type, 2),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 2),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unann_array_type, 2),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unann_array_type, 2),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims, 1),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_dims, 1),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_body, 1),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_body, 1),
  [425] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_body, 1),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 2),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_declaration, 2),
  [441] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 2),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [447] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [457] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(235),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 2),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_normal_class_declaration_repeat1, 2),
  [467] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 2),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [471] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 2),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(188),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 2),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameters, 3),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameters, 3),
  [485] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_parameters, 3),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 2),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inferred_formal_parameter_list, 2),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [503] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_unann_class_or_interface_type, 2),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__lambda_parameters, 3),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 2),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_id, 1),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter, 2),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
  [519] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_unann_array_type, 2),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
  [523] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_dims, 1),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
  [529] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
  [533] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(267),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
  [541] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(273),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 2),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 3),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 3),
  [567] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 3),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_type_import_declaration, 3),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_type_import_declaration, 3),
  [577] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_type_import_declaration, 3),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
  [593] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(298),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 3),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 3),
  [601] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 3),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 3),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 3),
  [611] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 3),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 1, .fragile = true),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 1, .fragile = true),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(329),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_argument, 1),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reference_type, 1),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(332),
  [629] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(333),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 3),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(334),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(338),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(336),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(341),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(344),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(345),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(342),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(343),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_lambda_expression, 3),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_lambda_expression, 3),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 3),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(354),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 2),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_dims_repeat1, 2),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(360),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unann_class_or_interface_type, 3),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unann_class_or_interface_type, 3),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(362),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 2),
  [709] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(366),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statement, 1),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statements, 1),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(371),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(372),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(375),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(376),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(377),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 3),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_declaration, 3),
  [741] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 3),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(380),
  [745] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(381),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(384),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_bound, 2),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 3),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_inferred_formal_parameter_list_repeat1, 2),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_inferred_formal_parameter_list_repeat1, 2),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(388),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(389),
  [767] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(390),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(393),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 3),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(397),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_id, 2),
  [783] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 2),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(398),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(399),
  [789] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_unann_class_or_interface_type, 3),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(401),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 3),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 3),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(404),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter, 3),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(406),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 4),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_declaration, 4),
  [809] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 4),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_annotation, 4),
  [815] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(413),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(414),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 1),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_or_type_name, 3),
  [831] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 2),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(419),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 4),
  [843] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(420),
  [847] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(421),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(425),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(428),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat1, 1),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 4),
  [857] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 4),
  [859] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 4),
  [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(431),
  [863] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(432),
  [865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(433),
  [867] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(434),
  [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_member_declaration, 1),
  [871] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_member_declaration, 1),
  [873] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_member_declaration, 1),
  [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(435),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body, 2),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body, 2),
  [881] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body, 2),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(437),
  [885] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(438),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(439),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(440),
  [891] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(441),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 1),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_body_repeat1, 1),
  [897] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 1),
  [899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body_declaration, 1),
  [901] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body_declaration, 1),
  [903] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body_declaration, 1),
  [905] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(442),
  [907] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
  [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(447),
  [911] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(448),
  [913] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(449),
  [915] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(452),
  [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(454),
  [919] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(455),
  [921] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_superclass, 2),
  [923] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(458),
  [925] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(459),
  [927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_type_list, 1),
  [929] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_super_interfaces, 2),
  [931] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 4),
  [933] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 4),
  [935] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 4),
  [937] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_member_declaration, 1),
  [939] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_member_declaration, 1),
  [941] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_member_declaration, 1),
  [943] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 2),
  [945] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_body, 2),
  [947] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 2),
  [949] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [951] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [953] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [955] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(463),
  [957] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(467),
  [959] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_extends_interfaces, 2),
  [961] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 4),
  [963] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 4),
  [965] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 4),
  [967] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(470),
  [969] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 2),
  [971] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(473),
  [973] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 3),
  [975] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_arguments, 3),
  [977] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
  [979] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(476),
  [981] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reference_type, 2),
  [983] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 2),
  [985] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_lambda_body, 2),
  [987] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_lambda_body, 2),
  [989] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(489),
  [991] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(490),
  [993] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(493),
  [995] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 4),
  [997] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 3),
  [999] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(495),
  [1001] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(499),
  [1003] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(500),
  [1005] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 1, .fragile = true),
  [1007] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(503),
  [1009] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_throws, 2),
  [1011] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type_list, 1),
  [1013] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(506),
  [1015] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(508),
  [1017] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 3),
  [1019] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_dims_repeat1, 3),
  [1021] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(509),
  [1023] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unann_class_or_interface_type, 4),
  [1025] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unann_class_or_interface_type, 4),
  [1027] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(511),
  [1029] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(512),
  [1031] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(514),
  [1033] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(515),
  [1035] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(516),
  [1037] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [1039] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 3),
  [1041] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [1043] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_block_statements_repeat1, 1),
  [1045] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statements, 2),
  [1047] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_local_variable_declaration_statement, 2),
  [1049] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(523),
  [1051] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(524),
  [1053] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(525),
  [1055] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(527),
  [1057] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(528),
  [1059] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(531),
  [1061] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(534),
  [1063] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(535),
  [1065] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_bound, 3),
  [1067] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(537),
  [1069] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
  [1071] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_inferred_formal_parameter_list_repeat1, 3),
  [1073] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_inferred_formal_parameter_list_repeat1, 3),
  [1075] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(538),
  [1077] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(539),
  [1079] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 3),
  [1081] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(540),
  [1083] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
  [1085] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 4),
  [1087] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 3),
  [1089] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(541),
  [1091] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_unann_class_or_interface_type, 4),
  [1093] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_formal_parameters_repeat1, 3),
  [1095] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 4),
  [1097] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(543),
  [1099] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 4),
  [1101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 2),
  [1103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_body, 2),
  [1105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 2),
  [1107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_member_declaration, 1),
  [1109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_member_declaration, 1),
  [1111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_member_declaration, 1),
  [1113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [1115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [1117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [1119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(544),
  [1121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(546),
  [1123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [1125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(548),
  [1127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(549),
  [1129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [1131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_element_annotation, 5),
  [1133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [1135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [1137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_annotation, 5),
  [1139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [1141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(563),
  [1143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 2),
  [1145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(565),
  [1147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 5),
  [1149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 5),
  [1151] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 5),
  [1153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(566),
  [1155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 3),
  [1157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_requires_modifier, 1),
  [1159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_requires_modifier, 1),
  [1161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 1),
  [1163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_directive_repeat1, 1),
  [1165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat1, 1),
  [1167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(567),
  [1169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(568),
  [1171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(571),
  [1173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(572),
  [1175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(573),
  [1177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(576),
  [1179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(577),
  [1181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat1, 2),
  [1183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(578),
  [1185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(579),
  [1187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_import_on_declaraction, 5),
  [1189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_import_on_declaraction, 5),
  [1191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_import_on_declaraction, 5),
  [1193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(580),
  [1195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(581),
  [1197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(582),
  [1199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(587),
  [1201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(592),
  [1203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(593),
  [1205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(594),
  [1207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [1209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [1211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(595),
  [1213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(596),
  [1215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [1217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(597),
  [1219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(598),
  [1221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(599),
  [1223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(600),
  [1225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 2),
  [1227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_declaration, 2),
  [1229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 2),
  [1231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(618),
  [1233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(619),
  [1235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(620),
  [1237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body, 3),
  [1239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body, 3),
  [1241] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body, 3),
  [1243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 2),
  [1245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_body_repeat1, 2),
  [1247] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 2),
  [1249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(624),
  [1251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(627),
  [1253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(630),
  [1255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_type_list, 2),
  [1257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 5),
  [1259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 5),
  [1261] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 5),
  [1263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(632),
  [1265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_list, 1),
  [1267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(633),
  [1269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 3),
  [1271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_body, 3),
  [1273] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 3),
  [1275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [1277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [1279] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [1281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 5),
  [1283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 5),
  [1285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 5),
  [1287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2, .fragile = true),
  [1289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(637),
  [1291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 3),
  [1293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [1295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 4),
  [1297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_arguments, 4),
  [1299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(641),
  [1301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [1303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(642),
  [1305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(643),
  [1307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(644),
  [1309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 5),
  [1311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(645),
  [1313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 4),
  [1315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(646),
  [1317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(649),
  [1319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 2),
  [1321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(652),
  [1323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_variable, 1, .fragile = true),
  [1325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type, 2),
  [1327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(653),
  [1329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exception_type_list_repeat1, 1),
  [1331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type_list, 2),
  [1333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(654),
  [1335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 4),
  [1337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_dims_repeat1, 4),
  [1339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unann_class_or_interface_type, 5),
  [1341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unann_class_or_interface_type, 5),
  [1343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(656),
  [1345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(656),
  [1347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(657),
  [1349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(658),
  [1351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(659),
  [1353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(660),
  [1355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(660),
  [1357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(657),
  [1359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(658),
  [1361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(661),
  [1363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(662),
  [1365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(663),
  [1367] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(664),
  [1369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(667),
  [1371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(668),
  [1373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_local_variable_declaration, 3),
  [1375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_block_statements_repeat1, 2),
  [1377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 5),
  [1379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 5),
  [1381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 5),
  [1383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 5),
  [1385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_declaration, 5),
  [1387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 5),
  [1389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(675),
  [1391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(676),
  [1393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [1395] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 4),
  [1397] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 4),
  [1399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_unann_class_or_interface_type, 5),
  [1401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 5),
  [1403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(680),
  [1405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(681),
  [1407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 3),
  [1409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_body, 3),
  [1411] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 3),
  [1413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [1415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [1417] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [1419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(682),
  [1421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(683),
  [1423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(685),
  [1425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(686),
  [1427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(687),
  [1429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value, 1),
  [1431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 1),
  [1433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 1),
  [1435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair, 3),
  [1437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(698),
  [1439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 1),
  [1441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(699),
  [1443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(700),
  [1445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 1),
  [1447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 1),
  [1449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(701),
  [1451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 1),
  [1453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 1),
  [1455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(702),
  [1457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 1),
  [1459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 1),
  [1461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(703),
  [1463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 1),
  [1465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 1),
  [1467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 1),
  [1469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(704),
  [1471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 1),
  [1473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 1),
  [1475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(705),
  [1477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(705),
  [1479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 1),
  [1481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 1),
  [1483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(706),
  [1485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 1),
  [1487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 1),
  [1489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(707),
  [1491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(707),
  [1493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 2),
  [1495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 6),
  [1497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 6),
  [1499] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 6),
  [1501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 3),
  [1503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(709),
  [1505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [1507] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [1509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(710),
  [1511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(421),
  [1513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(712),
  [1515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(715),
  [1517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(716),
  [1519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [1521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [1523] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [1525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_static_import_declaration, 6),
  [1527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_static_import_declaration, 6),
  [1529] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_static_import_declaration, 6),
  [1531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(718),
  [1533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(720),
  [1535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(725),
  [1537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(729),
  [1539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 2),
  [1541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_body, 2),
  [1543] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 2),
  [1545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(732),
  [1547] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 1, .fragile = true), SHIFT(733),
  [1550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(735),
  [1552] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primary_no_new_array, 1),
  [1554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(736),
  [1556] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(737),
  [1558] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(738),
  [1560] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_name, 1),
  [1562] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(744),
  [1564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(745),
  [1566] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(746),
  [1568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(751),
  [1570] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(733),
  [1572] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(752),
  [1574] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(754),
  [1576] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(755),
  [1578] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(756),
  [1580] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primary, 1),
  [1582] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_instance_creation_expression, 1),
  [1584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(757),
  [1586] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(758),
  [1588] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 3),
  [1590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_declaration, 3),
  [1592] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 3),
  [1594] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(759),
  [1596] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(763),
  [1598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(765),
  [1600] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [1602] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 6),
  [1604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 6),
  [1606] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 6),
  [1608] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 3),
  [1610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constant_declaration, 3),
  [1612] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 3),
  [1614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_list, 2),
  [1616] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(770),
  [1618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(771),
  [1620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3, .fragile = true),
  [1622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(773),
  [1624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_arguments_repeat1, 3),
  [1626] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 4),
  [1628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(776),
  [1630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(777),
  [1632] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 5),
  [1634] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2, .fragile = true),
  [1636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(779),
  [1638] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 3),
  [1640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_variable, 2, .fragile = true),
  [1642] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exception_type_list_repeat1, 2),
  [1644] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(786),
  [1646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(791),
  [1648] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(792),
  [1650] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(793),
  [1652] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(797),
  [1654] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 6),
  [1656] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 6),
  [1658] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 6),
  [1660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_bound_repeat1, 3),
  [1662] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(799),
  [1664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(800),
  [1666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(801),
  [1668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(801),
  [1670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(802),
  [1672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(807),
  [1674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(808),
  [1676] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(809),
  [1678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 2),
  [1680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(811),
  [1682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(813),
  [1684] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(814),
  [1686] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(815),
  [1688] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(816),
  [1690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(817),
  [1692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(818),
  [1694] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(819),
  [1696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(820),
  [1698] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(820),
  [1700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(821),
  [1702] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(822),
  [1704] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(822),
  [1706] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 3),
  [1708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 3),
  [1710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 4),
  [1712] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 2),
  [1714] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(833),
  [1716] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(836),
  [1718] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(838),
  [1720] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(840),
  [1722] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(843),
  [1724] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declarator, 4),
  [1726] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(845),
  [1728] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(846),
  [1730] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(847),
  [1732] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_literal_repeat1, 1),
  [1734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(848),
  [1736] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(849),
  [1738] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(850),
  [1740] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(853),
  [1742] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(854),
  [1744] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
  [1746] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 1),
  [1748] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(856),
  [1750] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(857),
  [1752] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(861),
  [1754] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(866),
  [1756] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(867),
  [1758] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(868),
  [1760] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(869),
  [1762] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(870),
  [1764] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(854),
  [1766] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_type, 2),
  [1768] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 2),
  [1770] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_exprs, 1, .fragile = true),
  [1772] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(874),
  [1774] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(878),
  [1776] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(847),
  [1778] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(846),
  [1780] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(879),
  [1782] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(880),
  [1784] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 3),
  [1786] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_body, 3),
  [1788] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 3),
  [1790] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(882),
  [1792] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(883),
  [1794] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(884),
  [1796] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(885),
  [1798] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(886),
  [1800] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(890),
  [1802] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(891),
  [1804] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 4),
  [1806] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_declaration, 4),
  [1808] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 4),
  [1810] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(896),
  [1812] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(897),
  [1814] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_type_list_repeat1, 3),
  [1816] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declarator_list_repeat1, 2),
  [1818] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 4),
  [1820] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constant_declaration, 4),
  [1822] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 4),
  [1824] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 4),
  [1826] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(900),
  [1828] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3, .fragile = true),
  [1830] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(902),
  [1832] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 4),
  [1834] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(903),
  [1836] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_then_statement, 5),
  [1838] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(904),
  [1840] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_no_short_if, 1),
  [1842] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(905),
  [1844] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [1846] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 7),
  [1848] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [1850] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 7),
  [1852] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 7),
  [1854] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 7),
  [1856] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(908),
  [1858] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(909),
  [1860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(912),
  [1862] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 3),
  [1864] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(918),
  [1866] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(918),
  [1868] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(919),
  [1870] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(924),
  [1872] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(926),
  [1874] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 3),
  [1876] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(935),
  [1878] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 3),
  [1880] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 3),
  [1882] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 3),
  [1884] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 3),
  [1886] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 3),
  [1888] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [1890] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [1892] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 3),
  [1894] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 3),
  [1896] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 3),
  [1898] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 3),
  [1900] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 3),
  [1902] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 3),
  [1904] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 3),
  [1906] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 3),
  [1908] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 3),
  [1910] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 5),
  [1912] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(936),
  [1914] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 3),
  [1916] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(938),
  [1918] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(939),
  [1920] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declarator, 5),
  [1922] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primary_no_new_array, 3),
  [1924] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_literal, 3),
  [1926] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(941),
  [1928] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_literal_repeat1, 2),
  [1930] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(942),
  [1932] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(802),
  [1934] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(803),
  [1936] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(804),
  [1938] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(805),
  [1940] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(805),
  [1942] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(803),
  [1944] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 1),
  [1946] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(943),
  [1948] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(806),
  [1950] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(945),
  [1952] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_access, 3),
  [1954] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 3),
  [1956] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(946),
  [1958] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(947),
  [1960] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments_or_diamond, 1),
  [1962] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 2),
  [1964] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(949),
  [1966] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(951),
  [1968] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(952),
  [1970] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(953),
  [1972] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(954),
  [1974] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 3),
  [1976] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(956),
  [1978] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(961),
  [1980] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(961),
  [1982] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(962),
  [1984] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(963),
  [1986] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(964),
  [1988] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(965),
  [1990] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(965),
  [1992] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(962),
  [1994] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(963),
  [1996] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(966),
  [1998] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(967),
  [2000] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(946),
  [2002] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_exprs_repeat1, 1),
  [2004] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(968),
  [2006] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_exprs, 2, .fragile = true),
  [2008] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(971),
  [2010] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(972),
  [2012] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(973),
  [2014] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(974),
  [2016] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 4),
  [2018] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_body, 4),
  [2020] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 4),
  [2022] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(976),
  [2024] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ambiguous_name, 3),
  [2026] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(977),
  [2028] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(974),
  [2030] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_instance_creation_expression, 3),
  [2032] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(978),
  [2034] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 3),
  [2036] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(979),
  [2038] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declarator_list_repeat1, 3),
  [2040] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 5),
  [2042] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 4),
  [2044] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 5),
  [2046] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 5),
  [2048] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 5),
  [2050] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(987),
  [2052] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(998),
  [2054] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1001),
  [2056] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 4),
  [2058] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 2),
  [2060] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1007),
  [2062] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1009),
  [2064] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 6),
  [2066] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat3, 2),
  [2068] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_literal, 4),
  [2070] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 4),
  [2072] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2),
  [2074] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1013),
  [2076] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1014),
  [2078] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 4),
  [2080] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true), SHIFT(91),
  [2083] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true),
  [2085] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2, .fragile = true), REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true),
  [2088] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1015),
  [2090] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1016),
  [2092] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 3),
  [2094] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1018),
  [2096] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1020),
  [2098] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1022),
  [2100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1023),
  [2102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 4),
  [2104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 4),
  [2106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1029),
  [2108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_expr, 3),
  [2110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_exprs_repeat1, 2),
  [2112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1035),
  [2114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1036),
  [2116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1038),
  [2118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1040),
  [2120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1042),
  [2122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1043),
  [2124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1046),
  [2126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_access, 4),
  [2128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 4),
  [2130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 5),
  [2132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1048),
  [2134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_then_else_statement, 7),
  [2136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_value, 2),
  [2138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1050),
  [2140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1051),
  [2142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1052),
  [2144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1053),
  [2146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1054),
  [2148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1055),
  [2150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1056),
  [2152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1057),
  [2154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1057),
  [2156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1058),
  [2158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1059),
  [2160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1059),
  [2162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 6),
  [2164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 6),
  [2166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 6),
  [2168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1060),
  [2170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(922),
  [2172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(922),
  [2174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(921),
  [2176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(919),
  [2178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1063),
  [2180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 5),
  [2182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 3),
  [2184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 5),
  [2186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat3, 3),
  [2188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [2190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 5),
  [2192] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true), SHIFT(91),
  [2195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true),
  [2197] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3, .fragile = true), REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true),
  [2200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true),
  [2202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1065),
  [2204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true),
  [2206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 5),
  [2208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1067),
  [2210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1068),
  [2212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 2),
  [2214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(920),
  [2216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(920),
  [2218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_initializer, 1),
  [2220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(923),
  [2222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1069),
  [2224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 4),
  [2226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1071),
  [2228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1072),
  [2230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_expr, 4),
  [2232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1073),
  [2234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_access, 5),
  [2236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1074),
  [2238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 5),
  [2240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1075),
  [2242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 5),
  [2244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1076),
  [2246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1078),
  [2248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1079),
  [2250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 7),
  [2252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 7),
  [2254] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 7),
  [2256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1090),
  [2258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 3),
  [2260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 4),
  [2262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 4),
  [2264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 6),
  [2266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 3),
  [2268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1093),
  [2270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1095),
  [2272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 6),
  [2274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1097),
  [2276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1099),
  [2278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 6),
  [2280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 6),
  [2282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1100),
  [2284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1101),
  [2286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1102),
  [2288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1103),
  [2290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 8),
  [2292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 8),
  [2294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 8),
  [2296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 7),
  [2298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 4),
  [2300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_initializer_repeat1, 2),
  [2302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1104),
  [2304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 7),
  [2306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1106),
  [2308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 7),
  [2310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1108),
  [2312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 5),
  [2314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_initializer_repeat1, 3),
  [2316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 8),
  [2318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1110),
  [2320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 8),
  [2322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_then_else_statement_no_short_if, 7),
  [2324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 9),
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
