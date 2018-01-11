#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 1238
#define SYMBOL_COUNT 270
#define ALIAS_COUNT 0
#define TOKEN_COUNT 110
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
  anon_sym_if = 59,
  anon_sym_LBRACE = 60,
  anon_sym_RBRACE = 61,
  anon_sym_elseif = 62,
  anon_sym_else = 63,
  anon_sym_DOT = 64,
  anon_sym_LBRACK = 65,
  anon_sym_RBRACK = 66,
  anon_sym_boolean = 67,
  anon_sym_byte = 68,
  anon_sym_short = 69,
  anon_sym_int = 70,
  anon_sym_long = 71,
  anon_sym_char = 72,
  anon_sym_float = 73,
  anon_sym_double = 74,
  anon_sym_AT = 75,
  anon_sym_open = 76,
  anon_sym_module = 77,
  anon_sym_requires = 78,
  anon_sym_exports = 79,
  anon_sym_to = 80,
  anon_sym_opens = 81,
  anon_sym_uses = 82,
  anon_sym_provides = 83,
  anon_sym_with = 84,
  anon_sym_transitive = 85,
  anon_sym_static = 86,
  anon_sym_package = 87,
  anon_sym_import = 88,
  anon_sym_class = 89,
  anon_sym_public = 90,
  anon_sym_protected = 91,
  anon_sym_private = 92,
  anon_sym_abstract = 93,
  anon_sym_final = 94,
  anon_sym_strictfp = 95,
  anon_sym_default = 96,
  anon_sym_extends = 97,
  anon_sym_implements = 98,
  anon_sym_this = 99,
  anon_sym_super = 100,
  anon_sym_new = 101,
  anon_sym_void = 102,
  anon_sym_LT_GT = 103,
  anon_sym_COLON_COLON = 104,
  anon_sym_interface = 105,
  anon_sym_DOT_DOT_DOT = 106,
  anon_sym_throws = 107,
  sym_identifier = 108,
  sym_comment = 109,
  sym_program = 110,
  sym__statement = 111,
  sym__literal = 112,
  sym_integer_literal = 113,
  sym_floating_point_literal = 114,
  sym_boolean_literal = 115,
  sym_character_literal = 116,
  sym__expression = 117,
  sym_assignment_expression = 118,
  sym_binary_expression = 119,
  sym_lambda_expression = 120,
  sym_lambda_parameters = 121,
  sym_inferred_formal_parameter_list = 122,
  sym_lambda_body = 123,
  sym_ternary_expression = 124,
  sym_unary_expression = 125,
  sym_update_expression = 126,
  sym_statement = 127,
  sym_if_then_statement = 128,
  sym_else_if_clause = 129,
  sym_else_clause = 130,
  sym_type_arguments = 131,
  sym_type_argument = 132,
  sym_reference_type = 133,
  sym_class_or_interface_type = 134,
  sym_type_variable = 135,
  sym_dims = 136,
  sym_primitive_type = 137,
  sym_integral_type = 138,
  sym_floating_point_type = 139,
  sym__annotation = 140,
  sym_normal_annotation = 141,
  sym_marker_annotation = 142,
  sym_single_element_annotation = 143,
  sym_element_value_pair_list = 144,
  sym_element_value_pair = 145,
  sym_element_value = 146,
  sym_element_value_array_initializer = 147,
  sym_conditional_expression = 148,
  sym_conditional_or_expression = 149,
  sym_conditional_and_expression = 150,
  sym_inclusive_or_expression = 151,
  sym_exclusive_or_expression = 152,
  sym_and_expression = 153,
  sym_relational_expression = 154,
  sym_equality_expression = 155,
  sym_shift_expression = 156,
  sym_additive_expression = 157,
  sym_multiplicative_expression = 158,
  sym__declaration = 159,
  sym_module_declaration = 160,
  sym_module_identifier = 161,
  sym_module_directive = 162,
  sym_requires_modifier = 163,
  sym_module_name = 164,
  sym_package_declaration = 165,
  sym_package_or_type_name = 166,
  sym_import_statement = 167,
  sym_type_import_on_declaraction = 168,
  sym_single_static_import_declaration = 169,
  sym_static_import_on_demand_declaration = 170,
  sym_class_declaration = 171,
  sym_normal_class_declaration = 172,
  sym_modifier = 173,
  sym_type_parameters = 174,
  sym_type_parameter_list = 175,
  sym_type_parameter = 176,
  sym_type_bound = 177,
  sym_superclass = 178,
  sym_super_interfaces = 179,
  sym_interface_type_list = 180,
  sym_class_body = 181,
  sym_class_body_declaration = 182,
  sym_constructor_declaration = 183,
  sym_constructor_declarator = 184,
  sym_constructor_body = 185,
  sym_explicit_constructor_invocation = 186,
  sym_ambiguous_name = 187,
  sym_class_member_declaration = 188,
  sym_primary = 189,
  sym_array_creation_expression = 190,
  sym_dims_exprs = 191,
  sym_dims_expr = 192,
  sym_primary_no_new_array = 193,
  sym_class_literal = 194,
  sym_class_instance_creation_expression = 195,
  sym_unqualified_class_instance_creation_expression = 196,
  sym_class_or_interface_type_to_instantiate = 197,
  sym_type_arguments_or_diamond = 198,
  sym_field_access = 199,
  sym_array_access = 200,
  sym_method_invocation = 201,
  sym_argument_list = 202,
  sym_method_reference = 203,
  sym_array_type = 204,
  sym_interface_declaration = 205,
  sym_annotation_type_declaration = 206,
  sym_annotation_type_body = 207,
  sym_annotation_type_member_declaration = 208,
  sym_annotation_type_element_declaration = 209,
  sym_default_value = 210,
  sym_normal_interface_declaration = 211,
  sym_extends_interfaces = 212,
  sym_interface_body = 213,
  sym_interface_member_declaration = 214,
  sym_constant_declaration = 215,
  sym_variable_declarator_list = 216,
  sym_variable_declarator = 217,
  sym_variable_declarator_id = 218,
  sym_variable_initializer = 219,
  sym_array_initializer = 220,
  sym_interface_method_declaration = 221,
  sym_method_header = 222,
  sym_result = 223,
  sym_method_declarator = 224,
  sym_formal_parameter_list = 225,
  sym_formal_parameter = 226,
  sym_receiver_parameter = 227,
  sym_last_formal_parameter = 228,
  sym_throws = 229,
  sym_exception_type_list = 230,
  sym_exception_type = 231,
  sym_method_body = 232,
  sym_block = 233,
  sym_block_statements = 234,
  sym_block_statement = 235,
  sym_local_variable_declaration_statement = 236,
  sym_local_variable_declaration = 237,
  sym_method_name = 238,
  aux_sym_program_repeat1 = 239,
  aux_sym_character_literal_repeat1 = 240,
  aux_sym_inferred_formal_parameter_list_repeat1 = 241,
  aux_sym_if_then_statement_repeat1 = 242,
  aux_sym_type_arguments_repeat1 = 243,
  aux_sym_class_or_interface_type_repeat1 = 244,
  aux_sym_class_or_interface_type_repeat2 = 245,
  aux_sym_dims_repeat1 = 246,
  aux_sym_element_value_pair_list_repeat1 = 247,
  aux_sym_element_value_array_initializer_repeat1 = 248,
  aux_sym_module_declaration_repeat1 = 249,
  aux_sym_module_identifier_repeat1 = 250,
  aux_sym_module_directive_repeat1 = 251,
  aux_sym_module_directive_repeat2 = 252,
  aux_sym_module_directive_repeat3 = 253,
  aux_sym_normal_class_declaration_repeat1 = 254,
  aux_sym_type_parameter_list_repeat1 = 255,
  aux_sym_type_bound_repeat1 = 256,
  aux_sym_interface_type_list_repeat1 = 257,
  aux_sym_class_body_repeat1 = 258,
  aux_sym_dims_exprs_repeat1 = 259,
  aux_sym_class_literal_repeat1 = 260,
  aux_sym_class_or_interface_type_to_instantiate_repeat1 = 261,
  aux_sym_argument_list_repeat1 = 262,
  aux_sym_annotation_type_body_repeat1 = 263,
  aux_sym_interface_body_repeat1 = 264,
  aux_sym_variable_declarator_list_repeat1 = 265,
  aux_sym_array_initializer_repeat1 = 266,
  aux_sym_formal_parameters_repeat1 = 267,
  aux_sym_exception_type_list_repeat1 = 268,
  aux_sym_block_statements_repeat1 = 269,
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
  [anon_sym_if] = "if",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_elseif] = "else if",
  [anon_sym_else] = "else",
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
  [anon_sym_this] = "this",
  [anon_sym_super] = "super",
  [anon_sym_new] = "new",
  [anon_sym_void] = "void",
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
  [sym_assignment_expression] = "assignment_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_lambda_expression] = "lambda_expression",
  [sym_lambda_parameters] = "lambda_parameters",
  [sym_inferred_formal_parameter_list] = "inferred_formal_parameter_list",
  [sym_lambda_body] = "lambda_body",
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
  [sym_interface_method_declaration] = "interface_method_declaration",
  [sym_method_header] = "method_header",
  [sym_result] = "result",
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
  [sym_method_name] = "method_name",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_character_literal_repeat1] = "character_literal_repeat1",
  [aux_sym_inferred_formal_parameter_list_repeat1] = "inferred_formal_parameter_list_repeat1",
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
  [anon_sym_if] = {
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
  [anon_sym_void] = {
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
  [sym_assignment_expression] = {
    .visible = true,
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
  [sym_lambda_parameters] = {
    .visible = true,
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
  [sym_interface_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_method_header] = {
    .visible = true,
    .named = true,
  },
  [sym_result] = {
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
      if (lookahead == 'e')
        ADVANCE(119);
      if (lookahead == 'f')
        ADVANCE(126);
      if (lookahead == 'i')
        ADVANCE(139);
      if (lookahead == 'l')
        ADVANCE(154);
      if (lookahead == 'm')
        ADVANCE(158);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(170);
      if (lookahead == 'p')
        ADVANCE(174);
      if (lookahead == 's')
        ADVANCE(199);
      if (lookahead == 't')
        ADVANCE(219);
      if (lookahead == 'v')
        ADVANCE(235);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '|')
        ADVANCE(240);
      if (lookahead == '}')
        ADVANCE(243);
      if (lookahead == '~')
        ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'l')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 123:
      if (lookahead == 'i')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'f')
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_elseif);
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
        ADVANCE(37);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_final);
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
      if (lookahead == 'a')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(140);
      if (lookahead == 'm')
        ADVANCE(141);
      if (lookahead == 'n')
        ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(165);
      if (lookahead == 'u')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_null_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_open);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(175);
      if (lookahead == 'r')
        ADVANCE(181);
      if (lookahead == 'u')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_package);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(182);
      if (lookahead == 'o')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(200);
      if (lookahead == 't')
        ADVANCE(204);
      if (lookahead == 'u')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(205);
      if (lookahead == 'r')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(213);
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
      ACCEPT_TOKEN(anon_sym_strictfp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_super);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(220);
      if (lookahead == 'o')
        ADVANCE(223);
      if (lookahead == 'r')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_to);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(225);
      if (lookahead == 'u')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(229);
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
      if (lookahead == 'v')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_transitive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
      if (lookahead == 'd')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(241);
      if (lookahead == '|')
        ADVANCE(242);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(246);
      if (lookahead == '\"')
        ADVANCE(247);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(250);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '.')
        ADVANCE(252);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == '0')
        ADVANCE(261);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'c')
        ADVANCE(273);
      if (lookahead == 'd')
        ADVANCE(274);
      if (lookahead == 'f')
        ADVANCE(275);
      if (lookahead == 'i')
        ADVANCE(276);
      if (lookahead == 'm')
        ADVANCE(158);
      if (lookahead == 'n')
        ADVANCE(279);
      if (lookahead == 'o')
        ADVANCE(170);
      if (lookahead == 'p')
        ADVANCE(174);
      if (lookahead == 's')
        ADVANCE(280);
      if (lookahead == 't')
        ADVANCE(281);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '}')
        ADVANCE(243);
      if (lookahead == '~')
        ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(245);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 247:
      if (lookahead == '\"')
        ADVANCE(248);
      if (lookahead == '\\')
        ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 249:
      if (lookahead == '\n')
        ADVANCE(247);
      if (lookahead != 0)
        ADVANCE(247);
      END_STATE();
    case 250:
      if (lookahead == '+')
        ADVANCE(16);
      END_STATE();
    case 251:
      if (lookahead == '-')
        ADVANCE(20);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(254);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(253);
      END_STATE();
    case 254:
      if (lookahead == '_')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(253);
      END_STATE();
    case 255:
      if (lookahead == '+')
        ADVANCE(256);
      if (lookahead == '-')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(257);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(258);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(257);
      END_STATE();
    case 258:
      if (lookahead == '_')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(257);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 260:
      if (lookahead == '*')
        ADVANCE(27);
      if (lookahead == '/')
        ADVANCE(30);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(262);
      if (lookahead == 'B')
        ADVANCE(263);
      if (lookahead == 'O')
        ADVANCE(33);
      if (lookahead == 'X')
        ADVANCE(38);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'b')
        ADVANCE(263);
      if (lookahead == 'o')
        ADVANCE(33);
      if (lookahead == 'x')
        ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(253);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(264);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(265);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(264);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 265:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(265);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(266);
      END_STATE();
    case 267:
      if (lookahead == '_')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(262);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(255);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+')
        ADVANCE(256);
      if (lookahead == '-')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(258);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(262);
      if (lookahead == '_')
        ADVANCE(267);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(127);
      if (lookahead == 'i')
        ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(141);
      if (lookahead == 'n')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 283:
      if (lookahead == '!')
        ADVANCE(284);
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
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(26);
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
      if (lookahead == ']')
        ADVANCE(78);
      if (lookahead == '^')
        ADVANCE(79);
      if (lookahead == 'a')
        ADVANCE(285);
      if (lookahead == 'c')
        ADVANCE(293);
      if (lookahead == 'd')
        ADVANCE(298);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(320);
      if (lookahead == 'i')
        ADVANCE(325);
      if (lookahead == 'm')
        ADVANCE(344);
      if (lookahead == 'n')
        ADVANCE(350);
      if (lookahead == 'o')
        ADVANCE(353);
      if (lookahead == 'p')
        ADVANCE(358);
      if (lookahead == 'r')
        ADVANCE(388);
      if (lookahead == 's')
        ADVANCE(396);
      if (lookahead == 't')
        ADVANCE(412);
      if (lookahead == 'u')
        ADVANCE(420);
      if (lookahead == 'v')
        ADVANCE(424);
      if (lookahead == 'w')
        ADVANCE(428);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '|')
        ADVANCE(240);
      if (lookahead == '}')
        ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(283);
      END_STATE();
    case 284:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 285:
      if (lookahead == 'b')
        ADVANCE(286);
      END_STATE();
    case 286:
      if (lookahead == 's')
        ADVANCE(287);
      END_STATE();
    case 287:
      if (lookahead == 't')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 'r')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == 'a')
        ADVANCE(290);
      END_STATE();
    case 290:
      if (lookahead == 'c')
        ADVANCE(291);
      END_STATE();
    case 291:
      if (lookahead == 't')
        ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 293:
      if (lookahead == 'l')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == 'a')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == 's')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 's')
        ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 298:
      if (lookahead == 'e')
        ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead == 'f')
        ADVANCE(300);
      END_STATE();
    case 300:
      if (lookahead == 'a')
        ADVANCE(301);
      END_STATE();
    case 301:
      if (lookahead == 'u')
        ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == 'l')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == 't')
        ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 305:
      if (lookahead == 'l')
        ADVANCE(306);
      if (lookahead == 'x')
        ADVANCE(309);
      END_STATE();
    case 306:
      if (lookahead == 's')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'e')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == ' ')
        ADVANCE(123);
      END_STATE();
    case 309:
      if (lookahead == 'p')
        ADVANCE(310);
      if (lookahead == 't')
        ADVANCE(315);
      END_STATE();
    case 310:
      if (lookahead == 'o')
        ADVANCE(311);
      END_STATE();
    case 311:
      if (lookahead == 'r')
        ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == 't')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 's')
        ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_exports);
      END_STATE();
    case 315:
      if (lookahead == 'e')
        ADVANCE(316);
      END_STATE();
    case 316:
      if (lookahead == 'n')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == 'd')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == 's')
        ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 320:
      if (lookahead == 'i')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == 'n')
        ADVANCE(322);
      END_STATE();
    case 322:
      if (lookahead == 'a')
        ADVANCE(323);
      END_STATE();
    case 323:
      if (lookahead == 'l')
        ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 325:
      if (lookahead == 'f')
        ADVANCE(326);
      if (lookahead == 'm')
        ADVANCE(327);
      if (lookahead == 'n')
        ADVANCE(336);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 327:
      if (lookahead == 'p')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 'l')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == 'e')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 'm')
        ADVANCE(331);
      END_STATE();
    case 331:
      if (lookahead == 'e')
        ADVANCE(332);
      END_STATE();
    case 332:
      if (lookahead == 'n')
        ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 't')
        ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == 's')
        ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 336:
      if (lookahead == 't')
        ADVANCE(337);
      END_STATE();
    case 337:
      if (lookahead == 'e')
        ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == 'r')
        ADVANCE(339);
      END_STATE();
    case 339:
      if (lookahead == 'f')
        ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == 'a')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 'c')
        ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == 'e')
        ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 344:
      if (lookahead == 'o')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'd')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'u')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'l')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == 'e')
        ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 350:
      if (lookahead == 'e')
        ADVANCE(351);
      END_STATE();
    case 351:
      if (lookahead == 'w')
        ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 353:
      if (lookahead == 'p')
        ADVANCE(354);
      END_STATE();
    case 354:
      if (lookahead == 'e')
        ADVANCE(355);
      END_STATE();
    case 355:
      if (lookahead == 'n')
        ADVANCE(356);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_open);
      if (lookahead == 's')
        ADVANCE(357);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_opens);
      END_STATE();
    case 358:
      if (lookahead == 'a')
        ADVANCE(359);
      if (lookahead == 'r')
        ADVANCE(365);
      if (lookahead == 'u')
        ADVANCE(383);
      END_STATE();
    case 359:
      if (lookahead == 'c')
        ADVANCE(360);
      END_STATE();
    case 360:
      if (lookahead == 'k')
        ADVANCE(361);
      END_STATE();
    case 361:
      if (lookahead == 'a')
        ADVANCE(362);
      END_STATE();
    case 362:
      if (lookahead == 'g')
        ADVANCE(363);
      END_STATE();
    case 363:
      if (lookahead == 'e')
        ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 365:
      if (lookahead == 'i')
        ADVANCE(366);
      if (lookahead == 'o')
        ADVANCE(371);
      END_STATE();
    case 366:
      if (lookahead == 'v')
        ADVANCE(367);
      END_STATE();
    case 367:
      if (lookahead == 'a')
        ADVANCE(368);
      END_STATE();
    case 368:
      if (lookahead == 't')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead == 'e')
        ADVANCE(370);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 371:
      if (lookahead == 't')
        ADVANCE(372);
      if (lookahead == 'v')
        ADVANCE(378);
      END_STATE();
    case 372:
      if (lookahead == 'e')
        ADVANCE(373);
      END_STATE();
    case 373:
      if (lookahead == 'c')
        ADVANCE(374);
      END_STATE();
    case 374:
      if (lookahead == 't')
        ADVANCE(375);
      END_STATE();
    case 375:
      if (lookahead == 'e')
        ADVANCE(376);
      END_STATE();
    case 376:
      if (lookahead == 'd')
        ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 378:
      if (lookahead == 'i')
        ADVANCE(379);
      END_STATE();
    case 379:
      if (lookahead == 'd')
        ADVANCE(380);
      END_STATE();
    case 380:
      if (lookahead == 'e')
        ADVANCE(381);
      END_STATE();
    case 381:
      if (lookahead == 's')
        ADVANCE(382);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_provides);
      END_STATE();
    case 383:
      if (lookahead == 'b')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == 'l')
        ADVANCE(385);
      END_STATE();
    case 385:
      if (lookahead == 'i')
        ADVANCE(386);
      END_STATE();
    case 386:
      if (lookahead == 'c')
        ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 388:
      if (lookahead == 'e')
        ADVANCE(389);
      END_STATE();
    case 389:
      if (lookahead == 'q')
        ADVANCE(390);
      END_STATE();
    case 390:
      if (lookahead == 'u')
        ADVANCE(391);
      END_STATE();
    case 391:
      if (lookahead == 'i')
        ADVANCE(392);
      END_STATE();
    case 392:
      if (lookahead == 'r')
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
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 396:
      if (lookahead == 't')
        ADVANCE(397);
      if (lookahead == 'u')
        ADVANCE(408);
      END_STATE();
    case 397:
      if (lookahead == 'a')
        ADVANCE(398);
      if (lookahead == 'r')
        ADVANCE(402);
      END_STATE();
    case 398:
      if (lookahead == 't')
        ADVANCE(399);
      END_STATE();
    case 399:
      if (lookahead == 'i')
        ADVANCE(400);
      END_STATE();
    case 400:
      if (lookahead == 'c')
        ADVANCE(401);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 402:
      if (lookahead == 'i')
        ADVANCE(403);
      END_STATE();
    case 403:
      if (lookahead == 'c')
        ADVANCE(404);
      END_STATE();
    case 404:
      if (lookahead == 't')
        ADVANCE(405);
      END_STATE();
    case 405:
      if (lookahead == 'f')
        ADVANCE(406);
      END_STATE();
    case 406:
      if (lookahead == 'p')
        ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_strictfp);
      END_STATE();
    case 408:
      if (lookahead == 'p')
        ADVANCE(409);
      END_STATE();
    case 409:
      if (lookahead == 'e')
        ADVANCE(410);
      END_STATE();
    case 410:
      if (lookahead == 'r')
        ADVANCE(411);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_super);
      END_STATE();
    case 412:
      if (lookahead == 'h')
        ADVANCE(413);
      END_STATE();
    case 413:
      if (lookahead == 'i')
        ADVANCE(414);
      if (lookahead == 'r')
        ADVANCE(416);
      END_STATE();
    case 414:
      if (lookahead == 's')
        ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 416:
      if (lookahead == 'o')
        ADVANCE(417);
      END_STATE();
    case 417:
      if (lookahead == 'w')
        ADVANCE(418);
      END_STATE();
    case 418:
      if (lookahead == 's')
        ADVANCE(419);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_throws);
      END_STATE();
    case 420:
      if (lookahead == 's')
        ADVANCE(421);
      END_STATE();
    case 421:
      if (lookahead == 'e')
        ADVANCE(422);
      END_STATE();
    case 422:
      if (lookahead == 's')
        ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 424:
      if (lookahead == 'o')
        ADVANCE(425);
      END_STATE();
    case 425:
      if (lookahead == 'i')
        ADVANCE(426);
      END_STATE();
    case 426:
      if (lookahead == 'd')
        ADVANCE(427);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 428:
      if (lookahead == 'i')
        ADVANCE(429);
      END_STATE();
    case 429:
      if (lookahead == 't')
        ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == 'h')
        ADVANCE(431);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 432:
      if (lookahead == '\n')
        SKIP(432);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(433);
      if (lookahead == '\\')
        ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(437);
      if (lookahead != 0)
        ADVANCE(437);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(27);
      if (lookahead == '/')
        ADVANCE(30);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(435);
      if (lookahead != 0)
        ADVANCE(436);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'd')
        ADVANCE(274);
      if (lookahead == 'f')
        ADVANCE(439);
      if (lookahead == 'p')
        ADVANCE(440);
      if (lookahead == 's')
        ADVANCE(280);
      if (lookahead == 't')
        ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(181);
      if (lookahead == 'u')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!')
        ADVANCE(246);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(443);
      if (lookahead == '+')
        ADVANCE(250);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '.')
        ADVANCE(444);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == '<')
        ADVANCE(445);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == ']')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '}')
        ADVANCE(243);
      if (lookahead == '~')
        ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == 'i')
        ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(444);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == '<')
        ADVANCE(445);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'c')
        ADVANCE(273);
      if (lookahead == 'd')
        ADVANCE(274);
      if (lookahead == 'f')
        ADVANCE(439);
      if (lookahead == 'i')
        ADVANCE(447);
      if (lookahead == 'p')
        ADVANCE(440);
      if (lookahead == 's')
        ADVANCE(280);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '}')
        ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == 's')
        ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'd')
        ADVANCE(274);
      if (lookahead == 'f')
        ADVANCE(439);
      if (lookahead == 'p')
        ADVANCE(440);
      if (lookahead == 's')
        ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 't')
        ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 455:
      if (lookahead == '&')
        ADVANCE(456);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(444);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == ':')
        ADVANCE(457);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == '<')
        ADVANCE(445);
      if (lookahead == '=')
        ADVANCE(458);
      if (lookahead == '>')
        ADVANCE(459);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(76);
      if (lookahead == 'd')
        ADVANCE(298);
      if (lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'i')
        ADVANCE(462);
      if (lookahead == 'n')
        ADVANCE(350);
      if (lookahead == 's')
        ADVANCE(463);
      if (lookahead == 't')
        ADVANCE(412);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 457:
      if (lookahead == ':')
        ADVANCE(59);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 460:
      if (lookahead == 'x')
        ADVANCE(461);
      END_STATE();
    case 461:
      if (lookahead == 't')
        ADVANCE(315);
      END_STATE();
    case 462:
      if (lookahead == 'm')
        ADVANCE(327);
      END_STATE();
    case 463:
      if (lookahead == 'u')
        ADVANCE(408);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\"')
        ADVANCE(247);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(252);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == '0')
        ADVANCE(261);
      if (lookahead == 'f')
        ADVANCE(465);
      if (lookahead == 'n')
        ADVANCE(279);
      if (lookahead == 't')
        ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(464);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(444);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == '<')
        ADVANCE(445);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'c')
        ADVANCE(273);
      if (lookahead == 'd')
        ADVANCE(274);
      if (lookahead == 'f')
        ADVANCE(439);
      if (lookahead == 'i')
        ADVANCE(447);
      if (lookahead == 'p')
        ADVANCE(440);
      if (lookahead == 's')
        ADVANCE(280);
      if (lookahead == 'v')
        ADVANCE(235);
      if (lookahead == '}')
        ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == 's')
        ADVANCE(450);
      if (lookahead == 't')
        ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(444);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == 't')
        ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!')
        ADVANCE(284);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(473);
      if (lookahead == '/')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(474);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == '<')
        ADVANCE(475);
      if (lookahead == '=')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(68);
      if (lookahead == '?')
        ADVANCE(74);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == ']')
        ADVANCE(78);
      if (lookahead == '^')
        ADVANCE(79);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'c')
        ADVANCE(273);
      if (lookahead == 'd')
        ADVANCE(274);
      if (lookahead == 'f')
        ADVANCE(439);
      if (lookahead == 'i')
        ADVANCE(447);
      if (lookahead == 'p')
        ADVANCE(440);
      if (lookahead == 's')
        ADVANCE(280);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '|')
        ADVANCE(240);
      if (lookahead == '}')
        ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(472);
      if (('0' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(21);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(62);
      if (lookahead == '=')
        ADVANCE(64);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(444);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'c')
        ADVANCE(273);
      if (lookahead == 'd')
        ADVANCE(274);
      if (lookahead == 'f')
        ADVANCE(439);
      if (lookahead == 'p')
        ADVANCE(440);
      if (lookahead == 's')
        ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\"')
        ADVANCE(247);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(252);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == '0')
        ADVANCE(261);
      if (lookahead == '<')
        ADVANCE(445);
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
        ADVANCE(126);
      if (lookahead == 'i')
        ADVANCE(478);
      if (lookahead == 'l')
        ADVANCE(154);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'p')
        ADVANCE(440);
      if (lookahead == 's')
        ADVANCE(199);
      if (lookahead == 't')
        ADVANCE(481);
      if (lookahead == 'v')
        ADVANCE(235);
      if (lookahead == '}')
        ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(477);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(140);
      if (lookahead == 'n')
        ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(220);
      if (lookahead == 'r')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(444);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == '<')
        ADVANCE(445);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'b')
        ADVANCE(89);
      if (lookahead == 'c')
        ADVANCE(483);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == 'f')
        ADVANCE(485);
      if (lookahead == 'i')
        ADVANCE(486);
      if (lookahead == 'l')
        ADVANCE(154);
      if (lookahead == 's')
        ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 488:
      if (lookahead == '!')
        ADVANCE(284);
      if (lookahead == '%')
        ADVANCE(489);
      if (lookahead == '&')
        ADVANCE(490);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(443);
      if (lookahead == '+')
        ADVANCE(491);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(492);
      if (lookahead == '/')
        ADVANCE(493);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == '<')
        ADVANCE(494);
      if (lookahead == '=')
        ADVANCE(496);
      if (lookahead == '>')
        ADVANCE(497);
      if (lookahead == '?')
        ADVANCE(74);
      if (lookahead == '^')
        ADVANCE(500);
      if (lookahead == '|')
        ADVANCE(501);
      if (lookahead == '}')
        ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 490:
      if (lookahead == '&')
        ADVANCE(8);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(27);
      if (lookahead == '/')
        ADVANCE(30);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(495);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 496:
      if (lookahead == '=')
        ADVANCE(67);
      END_STATE();
    case 497:
      if (lookahead == '>')
        ADVANCE(498);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>')
        ADVANCE(499);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(242);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(444);
      if (lookahead == '/')
        ADVANCE(260);
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
        ADVANCE(503);
      if (lookahead == 'i')
        ADVANCE(486);
      if (lookahead == 'l')
        ADVANCE(154);
      if (lookahead == 'p')
        ADVANCE(440);
      if (lookahead == 's')
        ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'l')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(200);
      if (lookahead == 't')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(444);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == ':')
        ADVANCE(457);
      if (lookahead == ';')
        ADVANCE(60);
      if (lookahead == '<')
        ADVANCE(445);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(76);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'c')
        ADVANCE(273);
      if (lookahead == 'd')
        ADVANCE(274);
      if (lookahead == 'f')
        ADVANCE(439);
      if (lookahead == 'i')
        ADVANCE(447);
      if (lookahead == 'p')
        ADVANCE(440);
      if (lookahead == 's')
        ADVANCE(280);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '}')
        ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == '<')
        ADVANCE(445);
      if (lookahead == 'c')
        ADVANCE(273);
      if (lookahead == 's')
        ADVANCE(507);
      if (lookahead == 't')
        ADVANCE(441);
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
      if (lookahead == 'u')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == '<')
        ADVANCE(445);
      if (lookahead == 'n')
        ADVANCE(509);
      if (lookahead == 's')
        ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!')
        ADVANCE(246);
      if (lookahead == '\"')
        ADVANCE(247);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(250);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '.')
        ADVANCE(252);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == '0')
        ADVANCE(261);
      if (lookahead == '@')
        ADVANCE(75);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == 'c')
        ADVANCE(273);
      if (lookahead == 'd')
        ADVANCE(274);
      if (lookahead == 'e')
        ADVANCE(119);
      if (lookahead == 'f')
        ADVANCE(275);
      if (lookahead == 'i')
        ADVANCE(511);
      if (lookahead == 'm')
        ADVANCE(158);
      if (lookahead == 'n')
        ADVANCE(279);
      if (lookahead == 'o')
        ADVANCE(170);
      if (lookahead == 'p')
        ADVANCE(174);
      if (lookahead == 's')
        ADVANCE(280);
      if (lookahead == 't')
        ADVANCE(281);
      if (lookahead == '{')
        ADVANCE(239);
      if (lookahead == '}')
        ADVANCE(243);
      if (lookahead == '~')
        ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(510);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(140);
      if (lookahead == 'm')
        ADVANCE(141);
      if (lookahead == 'n')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(260);
      if (lookahead == 's')
        ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(512);
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
  [1] = {.lex_state = 245},
  [2] = {.lex_state = 283},
  [3] = {.lex_state = 283},
  [4] = {.lex_state = 283},
  [5] = {.lex_state = 432},
  [6] = {.lex_state = 283},
  [7] = {.lex_state = 438},
  [8] = {.lex_state = 442},
  [9] = {.lex_state = 442},
  [10] = {.lex_state = 446},
  [11] = {.lex_state = 245},
  [12] = {.lex_state = 442},
  [13] = {.lex_state = 448},
  [14] = {.lex_state = 442},
  [15] = {.lex_state = 449},
  [16] = {.lex_state = 442},
  [17] = {.lex_state = 442},
  [18] = {.lex_state = 283},
  [19] = {.lex_state = 245},
  [20] = {.lex_state = 245},
  [21] = {.lex_state = 283},
  [22] = {.lex_state = 283},
  [23] = {.lex_state = 283},
  [24] = {.lex_state = 283},
  [25] = {.lex_state = 283},
  [26] = {.lex_state = 245},
  [27] = {.lex_state = 283},
  [28] = {.lex_state = 245},
  [29] = {.lex_state = 245},
  [30] = {.lex_state = 245},
  [31] = {.lex_state = 245},
  [32] = {.lex_state = 448},
  [33] = {.lex_state = 245},
  [34] = {.lex_state = 245},
  [35] = {.lex_state = 245},
  [36] = {.lex_state = 245},
  [37] = {.lex_state = 283},
  [38] = {.lex_state = 432},
  [39] = {.lex_state = 432},
  [40] = {.lex_state = 442},
  [41] = {.lex_state = 442},
  [42] = {.lex_state = 452},
  [43] = {.lex_state = 283},
  [44] = {.lex_state = 442},
  [45] = {.lex_state = 283},
  [46] = {.lex_state = 245},
  [47] = {.lex_state = 438},
  [48] = {.lex_state = 438},
  [49] = {.lex_state = 452},
  [50] = {.lex_state = 283},
  [51] = {.lex_state = 283},
  [52] = {.lex_state = 283},
  [53] = {.lex_state = 283},
  [54] = {.lex_state = 453},
  [55] = {.lex_state = 452},
  [56] = {.lex_state = 283},
  [57] = {.lex_state = 283},
  [58] = {.lex_state = 442},
  [59] = {.lex_state = 283},
  [60] = {.lex_state = 283},
  [61] = {.lex_state = 442},
  [62] = {.lex_state = 283},
  [63] = {.lex_state = 245},
  [64] = {.lex_state = 283},
  [65] = {.lex_state = 442},
  [66] = {.lex_state = 283},
  [67] = {.lex_state = 283},
  [68] = {.lex_state = 283},
  [69] = {.lex_state = 245},
  [70] = {.lex_state = 442},
  [71] = {.lex_state = 442},
  [72] = {.lex_state = 442},
  [73] = {.lex_state = 442},
  [74] = {.lex_state = 442},
  [75] = {.lex_state = 442},
  [76] = {.lex_state = 442},
  [77] = {.lex_state = 283},
  [78] = {.lex_state = 442},
  [79] = {.lex_state = 245},
  [80] = {.lex_state = 442},
  [81] = {.lex_state = 245},
  [82] = {.lex_state = 442},
  [83] = {.lex_state = 283},
  [84] = {.lex_state = 446},
  [85] = {.lex_state = 442},
  [86] = {.lex_state = 442},
  [87] = {.lex_state = 448},
  [88] = {.lex_state = 283},
  [89] = {.lex_state = 432},
  [90] = {.lex_state = 245},
  [91] = {.lex_state = 442},
  [92] = {.lex_state = 438},
  [93] = {.lex_state = 438},
  [94] = {.lex_state = 283},
  [95] = {.lex_state = 283},
  [96] = {.lex_state = 283},
  [97] = {.lex_state = 283},
  [98] = {.lex_state = 283},
  [99] = {.lex_state = 283},
  [100] = {.lex_state = 454},
  [101] = {.lex_state = 283},
  [102] = {.lex_state = 455},
  [103] = {.lex_state = 283},
  [104] = {.lex_state = 452},
  [105] = {.lex_state = 245},
  [106] = {.lex_state = 442},
  [107] = {.lex_state = 283},
  [108] = {.lex_state = 442},
  [109] = {.lex_state = 283},
  [110] = {.lex_state = 453},
  [111] = {.lex_state = 453},
  [112] = {.lex_state = 442},
  [113] = {.lex_state = 452},
  [114] = {.lex_state = 452},
  [115] = {.lex_state = 452},
  [116] = {.lex_state = 283},
  [117] = {.lex_state = 283},
  [118] = {.lex_state = 245},
  [119] = {.lex_state = 464},
  [120] = {.lex_state = 442},
  [121] = {.lex_state = 245},
  [122] = {.lex_state = 442},
  [123] = {.lex_state = 283},
  [124] = {.lex_state = 283},
  [125] = {.lex_state = 245},
  [126] = {.lex_state = 283},
  [127] = {.lex_state = 283},
  [128] = {.lex_state = 245},
  [129] = {.lex_state = 442},
  [130] = {.lex_state = 442},
  [131] = {.lex_state = 448},
  [132] = {.lex_state = 442},
  [133] = {.lex_state = 442},
  [134] = {.lex_state = 283},
  [135] = {.lex_state = 283},
  [136] = {.lex_state = 245},
  [137] = {.lex_state = 245},
  [138] = {.lex_state = 466},
  [139] = {.lex_state = 442},
  [140] = {.lex_state = 283},
  [141] = {.lex_state = 245},
  [142] = {.lex_state = 245},
  [143] = {.lex_state = 283},
  [144] = {.lex_state = 283},
  [145] = {.lex_state = 283},
  [146] = {.lex_state = 283},
  [147] = {.lex_state = 283},
  [148] = {.lex_state = 283},
  [149] = {.lex_state = 442},
  [150] = {.lex_state = 442},
  [151] = {.lex_state = 283},
  [152] = {.lex_state = 442},
  [153] = {.lex_state = 442},
  [154] = {.lex_state = 283},
  [155] = {.lex_state = 283},
  [156] = {.lex_state = 442},
  [157] = {.lex_state = 283},
  [158] = {.lex_state = 442},
  [159] = {.lex_state = 283},
  [160] = {.lex_state = 283},
  [161] = {.lex_state = 442},
  [162] = {.lex_state = 245},
  [163] = {.lex_state = 464},
  [164] = {.lex_state = 442},
  [165] = {.lex_state = 283},
  [166] = {.lex_state = 283},
  [167] = {.lex_state = 455},
  [168] = {.lex_state = 283},
  [169] = {.lex_state = 283},
  [170] = {.lex_state = 283},
  [171] = {.lex_state = 283},
  [172] = {.lex_state = 283},
  [173] = {.lex_state = 452},
  [174] = {.lex_state = 453},
  [175] = {.lex_state = 453},
  [176] = {.lex_state = 283},
  [177] = {.lex_state = 283},
  [178] = {.lex_state = 452},
  [179] = {.lex_state = 452},
  [180] = {.lex_state = 442},
  [181] = {.lex_state = 448},
  [182] = {.lex_state = 245},
  [183] = {.lex_state = 283},
  [184] = {.lex_state = 283},
  [185] = {.lex_state = 245},
  [186] = {.lex_state = 245},
  [187] = {.lex_state = 245},
  [188] = {.lex_state = 283},
  [189] = {.lex_state = 283},
  [190] = {.lex_state = 283},
  [191] = {.lex_state = 442},
  [192] = {.lex_state = 245},
  [193] = {.lex_state = 467},
  [194] = {.lex_state = 442},
  [195] = {.lex_state = 442},
  [196] = {.lex_state = 442},
  [197] = {.lex_state = 283},
  [198] = {.lex_state = 283},
  [199] = {.lex_state = 245},
  [200] = {.lex_state = 442},
  [201] = {.lex_state = 283},
  [202] = {.lex_state = 442},
  [203] = {.lex_state = 455},
  [204] = {.lex_state = 442},
  [205] = {.lex_state = 455},
  [206] = {.lex_state = 455},
  [207] = {.lex_state = 442},
  [208] = {.lex_state = 448},
  [209] = {.lex_state = 442},
  [210] = {.lex_state = 283},
  [211] = {.lex_state = 245},
  [212] = {.lex_state = 446},
  [213] = {.lex_state = 442},
  [214] = {.lex_state = 442},
  [215] = {.lex_state = 438},
  [216] = {.lex_state = 448},
  [217] = {.lex_state = 448},
  [218] = {.lex_state = 442},
  [219] = {.lex_state = 448},
  [220] = {.lex_state = 448},
  [221] = {.lex_state = 283},
  [222] = {.lex_state = 448},
  [223] = {.lex_state = 448},
  [224] = {.lex_state = 448},
  [225] = {.lex_state = 455},
  [226] = {.lex_state = 283},
  [227] = {.lex_state = 442},
  [228] = {.lex_state = 245},
  [229] = {.lex_state = 245},
  [230] = {.lex_state = 283},
  [231] = {.lex_state = 245},
  [232] = {.lex_state = 245},
  [233] = {.lex_state = 466},
  [234] = {.lex_state = 245},
  [235] = {.lex_state = 446},
  [236] = {.lex_state = 466},
  [237] = {.lex_state = 442},
  [238] = {.lex_state = 442},
  [239] = {.lex_state = 442},
  [240] = {.lex_state = 466},
  [241] = {.lex_state = 466},
  [242] = {.lex_state = 466},
  [243] = {.lex_state = 283},
  [244] = {.lex_state = 466},
  [245] = {.lex_state = 466},
  [246] = {.lex_state = 283},
  [247] = {.lex_state = 283},
  [248] = {.lex_state = 283},
  [249] = {.lex_state = 442},
  [250] = {.lex_state = 466},
  [251] = {.lex_state = 466},
  [252] = {.lex_state = 245},
  [253] = {.lex_state = 245},
  [254] = {.lex_state = 245},
  [255] = {.lex_state = 442},
  [256] = {.lex_state = 442},
  [257] = {.lex_state = 442},
  [258] = {.lex_state = 442},
  [259] = {.lex_state = 442},
  [260] = {.lex_state = 442},
  [261] = {.lex_state = 442},
  [262] = {.lex_state = 442},
  [263] = {.lex_state = 442},
  [264] = {.lex_state = 442},
  [265] = {.lex_state = 442},
  [266] = {.lex_state = 442},
  [267] = {.lex_state = 442},
  [268] = {.lex_state = 442},
  [269] = {.lex_state = 442},
  [270] = {.lex_state = 283},
  [271] = {.lex_state = 245},
  [272] = {.lex_state = 283},
  [273] = {.lex_state = 245},
  [274] = {.lex_state = 283},
  [275] = {.lex_state = 283},
  [276] = {.lex_state = 442},
  [277] = {.lex_state = 438},
  [278] = {.lex_state = 283},
  [279] = {.lex_state = 245},
  [280] = {.lex_state = 245},
  [281] = {.lex_state = 438},
  [282] = {.lex_state = 455},
  [283] = {.lex_state = 283},
  [284] = {.lex_state = 283},
  [285] = {.lex_state = 283},
  [286] = {.lex_state = 464},
  [287] = {.lex_state = 442},
  [288] = {.lex_state = 283},
  [289] = {.lex_state = 464},
  [290] = {.lex_state = 442},
  [291] = {.lex_state = 283},
  [292] = {.lex_state = 245},
  [293] = {.lex_state = 283},
  [294] = {.lex_state = 448},
  [295] = {.lex_state = 448},
  [296] = {.lex_state = 283},
  [297] = {.lex_state = 448},
  [298] = {.lex_state = 448},
  [299] = {.lex_state = 245},
  [300] = {.lex_state = 283},
  [301] = {.lex_state = 283},
  [302] = {.lex_state = 442},
  [303] = {.lex_state = 245},
  [304] = {.lex_state = 245},
  [305] = {.lex_state = 283},
  [306] = {.lex_state = 283},
  [307] = {.lex_state = 467},
  [308] = {.lex_state = 283},
  [309] = {.lex_state = 467},
  [310] = {.lex_state = 283},
  [311] = {.lex_state = 467},
  [312] = {.lex_state = 470},
  [313] = {.lex_state = 470},
  [314] = {.lex_state = 283},
  [315] = {.lex_state = 283},
  [316] = {.lex_state = 283},
  [317] = {.lex_state = 283},
  [318] = {.lex_state = 283},
  [319] = {.lex_state = 245},
  [320] = {.lex_state = 442},
  [321] = {.lex_state = 442},
  [322] = {.lex_state = 442},
  [323] = {.lex_state = 455},
  [324] = {.lex_state = 283},
  [325] = {.lex_state = 442},
  [326] = {.lex_state = 455},
  [327] = {.lex_state = 455},
  [328] = {.lex_state = 442},
  [329] = {.lex_state = 455},
  [330] = {.lex_state = 245},
  [331] = {.lex_state = 472},
  [332] = {.lex_state = 442},
  [333] = {.lex_state = 476},
  [334] = {.lex_state = 442},
  [335] = {.lex_state = 283},
  [336] = {.lex_state = 283},
  [337] = {.lex_state = 476},
  [338] = {.lex_state = 283},
  [339] = {.lex_state = 476},
  [340] = {.lex_state = 245},
  [341] = {.lex_state = 283},
  [342] = {.lex_state = 283},
  [343] = {.lex_state = 245},
  [344] = {.lex_state = 442},
  [345] = {.lex_state = 448},
  [346] = {.lex_state = 448},
  [347] = {.lex_state = 283},
  [348] = {.lex_state = 283},
  [349] = {.lex_state = 283},
  [350] = {.lex_state = 438},
  [351] = {.lex_state = 477},
  [352] = {.lex_state = 442},
  [353] = {.lex_state = 448},
  [354] = {.lex_state = 245},
  [355] = {.lex_state = 446},
  [356] = {.lex_state = 442},
  [357] = {.lex_state = 442},
  [358] = {.lex_state = 283},
  [359] = {.lex_state = 245},
  [360] = {.lex_state = 448},
  [361] = {.lex_state = 482},
  [362] = {.lex_state = 442},
  [363] = {.lex_state = 455},
  [364] = {.lex_state = 455},
  [365] = {.lex_state = 455},
  [366] = {.lex_state = 442},
  [367] = {.lex_state = 245},
  [368] = {.lex_state = 245},
  [369] = {.lex_state = 245},
  [370] = {.lex_state = 442},
  [371] = {.lex_state = 466},
  [372] = {.lex_state = 466},
  [373] = {.lex_state = 283},
  [374] = {.lex_state = 283},
  [375] = {.lex_state = 283},
  [376] = {.lex_state = 442},
  [377] = {.lex_state = 283},
  [378] = {.lex_state = 466},
  [379] = {.lex_state = 442},
  [380] = {.lex_state = 283},
  [381] = {.lex_state = 466},
  [382] = {.lex_state = 283},
  [383] = {.lex_state = 466},
  [384] = {.lex_state = 245},
  [385] = {.lex_state = 283},
  [386] = {.lex_state = 446},
  [387] = {.lex_state = 442},
  [388] = {.lex_state = 442},
  [389] = {.lex_state = 466},
  [390] = {.lex_state = 283},
  [391] = {.lex_state = 283},
  [392] = {.lex_state = 245},
  [393] = {.lex_state = 466},
  [394] = {.lex_state = 245},
  [395] = {.lex_state = 283},
  [396] = {.lex_state = 283},
  [397] = {.lex_state = 283},
  [398] = {.lex_state = 283},
  [399] = {.lex_state = 283},
  [400] = {.lex_state = 283},
  [401] = {.lex_state = 283},
  [402] = {.lex_state = 283},
  [403] = {.lex_state = 283},
  [404] = {.lex_state = 283},
  [405] = {.lex_state = 283},
  [406] = {.lex_state = 283},
  [407] = {.lex_state = 283},
  [408] = {.lex_state = 283},
  [409] = {.lex_state = 245},
  [410] = {.lex_state = 245},
  [411] = {.lex_state = 283},
  [412] = {.lex_state = 245},
  [413] = {.lex_state = 438},
  [414] = {.lex_state = 438},
  [415] = {.lex_state = 455},
  [416] = {.lex_state = 453},
  [417] = {.lex_state = 283},
  [418] = {.lex_state = 245},
  [419] = {.lex_state = 245},
  [420] = {.lex_state = 453},
  [421] = {.lex_state = 452},
  [422] = {.lex_state = 283},
  [423] = {.lex_state = 245},
  [424] = {.lex_state = 245},
  [425] = {.lex_state = 452},
  [426] = {.lex_state = 245},
  [427] = {.lex_state = 448},
  [428] = {.lex_state = 283},
  [429] = {.lex_state = 283},
  [430] = {.lex_state = 245},
  [431] = {.lex_state = 448},
  [432] = {.lex_state = 442},
  [433] = {.lex_state = 245},
  [434] = {.lex_state = 283},
  [435] = {.lex_state = 488},
  [436] = {.lex_state = 245},
  [437] = {.lex_state = 283},
  [438] = {.lex_state = 283},
  [439] = {.lex_state = 283},
  [440] = {.lex_state = 283},
  [441] = {.lex_state = 283},
  [442] = {.lex_state = 283},
  [443] = {.lex_state = 283},
  [444] = {.lex_state = 283},
  [445] = {.lex_state = 488},
  [446] = {.lex_state = 488},
  [447] = {.lex_state = 283},
  [448] = {.lex_state = 245},
  [449] = {.lex_state = 442},
  [450] = {.lex_state = 245},
  [451] = {.lex_state = 283},
  [452] = {.lex_state = 442},
  [453] = {.lex_state = 467},
  [454] = {.lex_state = 283},
  [455] = {.lex_state = 442},
  [456] = {.lex_state = 442},
  [457] = {.lex_state = 442},
  [458] = {.lex_state = 283},
  [459] = {.lex_state = 283},
  [460] = {.lex_state = 442},
  [461] = {.lex_state = 245},
  [462] = {.lex_state = 245},
  [463] = {.lex_state = 464},
  [464] = {.lex_state = 442},
  [465] = {.lex_state = 455},
  [466] = {.lex_state = 455},
  [467] = {.lex_state = 442},
  [468] = {.lex_state = 455},
  [469] = {.lex_state = 442},
  [470] = {.lex_state = 442},
  [471] = {.lex_state = 476},
  [472] = {.lex_state = 476},
  [473] = {.lex_state = 283},
  [474] = {.lex_state = 283},
  [475] = {.lex_state = 472},
  [476] = {.lex_state = 283},
  [477] = {.lex_state = 283},
  [478] = {.lex_state = 283},
  [479] = {.lex_state = 442},
  [480] = {.lex_state = 245},
  [481] = {.lex_state = 464},
  [482] = {.lex_state = 442},
  [483] = {.lex_state = 448},
  [484] = {.lex_state = 283},
  [485] = {.lex_state = 283},
  [486] = {.lex_state = 245},
  [487] = {.lex_state = 448},
  [488] = {.lex_state = 466},
  [489] = {.lex_state = 283},
  [490] = {.lex_state = 245},
  [491] = {.lex_state = 448},
  [492] = {.lex_state = 283},
  [493] = {.lex_state = 442},
  [494] = {.lex_state = 448},
  [495] = {.lex_state = 283},
  [496] = {.lex_state = 283},
  [497] = {.lex_state = 283},
  [498] = {.lex_state = 442},
  [499] = {.lex_state = 283},
  [500] = {.lex_state = 283},
  [501] = {.lex_state = 482},
  [502] = {.lex_state = 283},
  [503] = {.lex_state = 283},
  [504] = {.lex_state = 283},
  [505] = {.lex_state = 283},
  [506] = {.lex_state = 283},
  [507] = {.lex_state = 283},
  [508] = {.lex_state = 502},
  [509] = {.lex_state = 502},
  [510] = {.lex_state = 283},
  [511] = {.lex_state = 283},
  [512] = {.lex_state = 283},
  [513] = {.lex_state = 283},
  [514] = {.lex_state = 283},
  [515] = {.lex_state = 283},
  [516] = {.lex_state = 283},
  [517] = {.lex_state = 283},
  [518] = {.lex_state = 245},
  [519] = {.lex_state = 245},
  [520] = {.lex_state = 482},
  [521] = {.lex_state = 442},
  [522] = {.lex_state = 442},
  [523] = {.lex_state = 283},
  [524] = {.lex_state = 283},
  [525] = {.lex_state = 442},
  [526] = {.lex_state = 448},
  [527] = {.lex_state = 442},
  [528] = {.lex_state = 283},
  [529] = {.lex_state = 283},
  [530] = {.lex_state = 245},
  [531] = {.lex_state = 283},
  [532] = {.lex_state = 442},
  [533] = {.lex_state = 455},
  [534] = {.lex_state = 455},
  [535] = {.lex_state = 455},
  [536] = {.lex_state = 283},
  [537] = {.lex_state = 482},
  [538] = {.lex_state = 482},
  [539] = {.lex_state = 482},
  [540] = {.lex_state = 455},
  [541] = {.lex_state = 442},
  [542] = {.lex_state = 455},
  [543] = {.lex_state = 442},
  [544] = {.lex_state = 455},
  [545] = {.lex_state = 245},
  [546] = {.lex_state = 442},
  [547] = {.lex_state = 245},
  [548] = {.lex_state = 245},
  [549] = {.lex_state = 464},
  [550] = {.lex_state = 442},
  [551] = {.lex_state = 448},
  [552] = {.lex_state = 283},
  [553] = {.lex_state = 283},
  [554] = {.lex_state = 245},
  [555] = {.lex_state = 466},
  [556] = {.lex_state = 466},
  [557] = {.lex_state = 283},
  [558] = {.lex_state = 245},
  [559] = {.lex_state = 466},
  [560] = {.lex_state = 283},
  [561] = {.lex_state = 442},
  [562] = {.lex_state = 283},
  [563] = {.lex_state = 442},
  [564] = {.lex_state = 466},
  [565] = {.lex_state = 245},
  [566] = {.lex_state = 438},
  [567] = {.lex_state = 283},
  [568] = {.lex_state = 442},
  [569] = {.lex_state = 283},
  [570] = {.lex_state = 283},
  [571] = {.lex_state = 466},
  [572] = {.lex_state = 466},
  [573] = {.lex_state = 442},
  [574] = {.lex_state = 442},
  [575] = {.lex_state = 283},
  [576] = {.lex_state = 245},
  [577] = {.lex_state = 245},
  [578] = {.lex_state = 453},
  [579] = {.lex_state = 453},
  [580] = {.lex_state = 452},
  [581] = {.lex_state = 452},
  [582] = {.lex_state = 283},
  [583] = {.lex_state = 245},
  [584] = {.lex_state = 448},
  [585] = {.lex_state = 442},
  [586] = {.lex_state = 442},
  [587] = {.lex_state = 283},
  [588] = {.lex_state = 245},
  [589] = {.lex_state = 442},
  [590] = {.lex_state = 283},
  [591] = {.lex_state = 245},
  [592] = {.lex_state = 283},
  [593] = {.lex_state = 283},
  [594] = {.lex_state = 283},
  [595] = {.lex_state = 283},
  [596] = {.lex_state = 283},
  [597] = {.lex_state = 283},
  [598] = {.lex_state = 283},
  [599] = {.lex_state = 488},
  [600] = {.lex_state = 488},
  [601] = {.lex_state = 245},
  [602] = {.lex_state = 442},
  [603] = {.lex_state = 245},
  [604] = {.lex_state = 245},
  [605] = {.lex_state = 245},
  [606] = {.lex_state = 245},
  [607] = {.lex_state = 245},
  [608] = {.lex_state = 245},
  [609] = {.lex_state = 245},
  [610] = {.lex_state = 245},
  [611] = {.lex_state = 245},
  [612] = {.lex_state = 283},
  [613] = {.lex_state = 283},
  [614] = {.lex_state = 283},
  [615] = {.lex_state = 470},
  [616] = {.lex_state = 283},
  [617] = {.lex_state = 283},
  [618] = {.lex_state = 442},
  [619] = {.lex_state = 283},
  [620] = {.lex_state = 442},
  [621] = {.lex_state = 283},
  [622] = {.lex_state = 245},
  [623] = {.lex_state = 245},
  [624] = {.lex_state = 442},
  [625] = {.lex_state = 442},
  [626] = {.lex_state = 455},
  [627] = {.lex_state = 455},
  [628] = {.lex_state = 442},
  [629] = {.lex_state = 442},
  [630] = {.lex_state = 283},
  [631] = {.lex_state = 464},
  [632] = {.lex_state = 442},
  [633] = {.lex_state = 448},
  [634] = {.lex_state = 283},
  [635] = {.lex_state = 283},
  [636] = {.lex_state = 245},
  [637] = {.lex_state = 283},
  [638] = {.lex_state = 283},
  [639] = {.lex_state = 283},
  [640] = {.lex_state = 448},
  [641] = {.lex_state = 448},
  [642] = {.lex_state = 448},
  [643] = {.lex_state = 283},
  [644] = {.lex_state = 245},
  [645] = {.lex_state = 245},
  [646] = {.lex_state = 448},
  [647] = {.lex_state = 505},
  [648] = {.lex_state = 448},
  [649] = {.lex_state = 283},
  [650] = {.lex_state = 245},
  [651] = {.lex_state = 448},
  [652] = {.lex_state = 448},
  [653] = {.lex_state = 466},
  [654] = {.lex_state = 245},
  [655] = {.lex_state = 448},
  [656] = {.lex_state = 283},
  [657] = {.lex_state = 245},
  [658] = {.lex_state = 283},
  [659] = {.lex_state = 283},
  [660] = {.lex_state = 502},
  [661] = {.lex_state = 502},
  [662] = {.lex_state = 442},
  [663] = {.lex_state = 442},
  [664] = {.lex_state = 442},
  [665] = {.lex_state = 482},
  [666] = {.lex_state = 283},
  [667] = {.lex_state = 442},
  [668] = {.lex_state = 283},
  [669] = {.lex_state = 283},
  [670] = {.lex_state = 245},
  [671] = {.lex_state = 482},
  [672] = {.lex_state = 245},
  [673] = {.lex_state = 442},
  [674] = {.lex_state = 283},
  [675] = {.lex_state = 283},
  [676] = {.lex_state = 283},
  [677] = {.lex_state = 283},
  [678] = {.lex_state = 283},
  [679] = {.lex_state = 506},
  [680] = {.lex_state = 448},
  [681] = {.lex_state = 245},
  [682] = {.lex_state = 508},
  [683] = {.lex_state = 442},
  [684] = {.lex_state = 508},
  [685] = {.lex_state = 283},
  [686] = {.lex_state = 442},
  [687] = {.lex_state = 283},
  [688] = {.lex_state = 482},
  [689] = {.lex_state = 442},
  [690] = {.lex_state = 442},
  [691] = {.lex_state = 442},
  [692] = {.lex_state = 283},
  [693] = {.lex_state = 283},
  [694] = {.lex_state = 442},
  [695] = {.lex_state = 283},
  [696] = {.lex_state = 283},
  [697] = {.lex_state = 442},
  [698] = {.lex_state = 245},
  [699] = {.lex_state = 283},
  [700] = {.lex_state = 283},
  [701] = {.lex_state = 448},
  [702] = {.lex_state = 482},
  [703] = {.lex_state = 482},
  [704] = {.lex_state = 455},
  [705] = {.lex_state = 482},
  [706] = {.lex_state = 455},
  [707] = {.lex_state = 455},
  [708] = {.lex_state = 455},
  [709] = {.lex_state = 455},
  [710] = {.lex_state = 442},
  [711] = {.lex_state = 455},
  [712] = {.lex_state = 245},
  [713] = {.lex_state = 448},
  [714] = {.lex_state = 466},
  [715] = {.lex_state = 466},
  [716] = {.lex_state = 283},
  [717] = {.lex_state = 245},
  [718] = {.lex_state = 245},
  [719] = {.lex_state = 466},
  [720] = {.lex_state = 466},
  [721] = {.lex_state = 448},
  [722] = {.lex_state = 283},
  [723] = {.lex_state = 245},
  [724] = {.lex_state = 466},
  [725] = {.lex_state = 466},
  [726] = {.lex_state = 466},
  [727] = {.lex_state = 245},
  [728] = {.lex_state = 466},
  [729] = {.lex_state = 283},
  [730] = {.lex_state = 283},
  [731] = {.lex_state = 283},
  [732] = {.lex_state = 466},
  [733] = {.lex_state = 283},
  [734] = {.lex_state = 245},
  [735] = {.lex_state = 245},
  [736] = {.lex_state = 283},
  [737] = {.lex_state = 283},
  [738] = {.lex_state = 283},
  [739] = {.lex_state = 283},
  [740] = {.lex_state = 245},
  [741] = {.lex_state = 245},
  [742] = {.lex_state = 448},
  [743] = {.lex_state = 245},
  [744] = {.lex_state = 283},
  [745] = {.lex_state = 283},
  [746] = {.lex_state = 283},
  [747] = {.lex_state = 442},
  [748] = {.lex_state = 442},
  [749] = {.lex_state = 442},
  [750] = {.lex_state = 442},
  [751] = {.lex_state = 442},
  [752] = {.lex_state = 442},
  [753] = {.lex_state = 442},
  [754] = {.lex_state = 283},
  [755] = {.lex_state = 442},
  [756] = {.lex_state = 442},
  [757] = {.lex_state = 283},
  [758] = {.lex_state = 245},
  [759] = {.lex_state = 245},
  [760] = {.lex_state = 245},
  [761] = {.lex_state = 442},
  [762] = {.lex_state = 245},
  [763] = {.lex_state = 245},
  [764] = {.lex_state = 245},
  [765] = {.lex_state = 245},
  [766] = {.lex_state = 245},
  [767] = {.lex_state = 245},
  [768] = {.lex_state = 245},
  [769] = {.lex_state = 245},
  [770] = {.lex_state = 283},
  [771] = {.lex_state = 283},
  [772] = {.lex_state = 283},
  [773] = {.lex_state = 283},
  [774] = {.lex_state = 283},
  [775] = {.lex_state = 283},
  [776] = {.lex_state = 283},
  [777] = {.lex_state = 488},
  [778] = {.lex_state = 488},
  [779] = {.lex_state = 488},
  [780] = {.lex_state = 283},
  [781] = {.lex_state = 283},
  [782] = {.lex_state = 283},
  [783] = {.lex_state = 442},
  [784] = {.lex_state = 283},
  [785] = {.lex_state = 442},
  [786] = {.lex_state = 442},
  [787] = {.lex_state = 455},
  [788] = {.lex_state = 442},
  [789] = {.lex_state = 442},
  [790] = {.lex_state = 442},
  [791] = {.lex_state = 442},
  [792] = {.lex_state = 442},
  [793] = {.lex_state = 442},
  [794] = {.lex_state = 442},
  [795] = {.lex_state = 510},
  [796] = {.lex_state = 442},
  [797] = {.lex_state = 476},
  [798] = {.lex_state = 283},
  [799] = {.lex_state = 245},
  [800] = {.lex_state = 245},
  [801] = {.lex_state = 476},
  [802] = {.lex_state = 283},
  [803] = {.lex_state = 448},
  [804] = {.lex_state = 283},
  [805] = {.lex_state = 245},
  [806] = {.lex_state = 283},
  [807] = {.lex_state = 283},
  [808] = {.lex_state = 448},
  [809] = {.lex_state = 448},
  [810] = {.lex_state = 448},
  [811] = {.lex_state = 448},
  [812] = {.lex_state = 505},
  [813] = {.lex_state = 245},
  [814] = {.lex_state = 448},
  [815] = {.lex_state = 448},
  [816] = {.lex_state = 448},
  [817] = {.lex_state = 283},
  [818] = {.lex_state = 283},
  [819] = {.lex_state = 245},
  [820] = {.lex_state = 283},
  [821] = {.lex_state = 464},
  [822] = {.lex_state = 442},
  [823] = {.lex_state = 283},
  [824] = {.lex_state = 283},
  [825] = {.lex_state = 245},
  [826] = {.lex_state = 283},
  [827] = {.lex_state = 283},
  [828] = {.lex_state = 442},
  [829] = {.lex_state = 455},
  [830] = {.lex_state = 442},
  [831] = {.lex_state = 245},
  [832] = {.lex_state = 283},
  [833] = {.lex_state = 245},
  [834] = {.lex_state = 283},
  [835] = {.lex_state = 283},
  [836] = {.lex_state = 245},
  [837] = {.lex_state = 442},
  [838] = {.lex_state = 245},
  [839] = {.lex_state = 283},
  [840] = {.lex_state = 442},
  [841] = {.lex_state = 283},
  [842] = {.lex_state = 442},
  [843] = {.lex_state = 442},
  [844] = {.lex_state = 442},
  [845] = {.lex_state = 283},
  [846] = {.lex_state = 283},
  [847] = {.lex_state = 283},
  [848] = {.lex_state = 442},
  [849] = {.lex_state = 283},
  [850] = {.lex_state = 283},
  [851] = {.lex_state = 283},
  [852] = {.lex_state = 442},
  [853] = {.lex_state = 283},
  [854] = {.lex_state = 283},
  [855] = {.lex_state = 442},
  [856] = {.lex_state = 448},
  [857] = {.lex_state = 482},
  [858] = {.lex_state = 245},
  [859] = {.lex_state = 442},
  [860] = {.lex_state = 283},
  [861] = {.lex_state = 512},
  [862] = {.lex_state = 283},
  [863] = {.lex_state = 283},
  [864] = {.lex_state = 283},
  [865] = {.lex_state = 283},
  [866] = {.lex_state = 245},
  [867] = {.lex_state = 442},
  [868] = {.lex_state = 442},
  [869] = {.lex_state = 442},
  [870] = {.lex_state = 442},
  [871] = {.lex_state = 283},
  [872] = {.lex_state = 283},
  [873] = {.lex_state = 442},
  [874] = {.lex_state = 448},
  [875] = {.lex_state = 283},
  [876] = {.lex_state = 245},
  [877] = {.lex_state = 464},
  [878] = {.lex_state = 442},
  [879] = {.lex_state = 455},
  [880] = {.lex_state = 455},
  [881] = {.lex_state = 482},
  [882] = {.lex_state = 455},
  [883] = {.lex_state = 455},
  [884] = {.lex_state = 466},
  [885] = {.lex_state = 448},
  [886] = {.lex_state = 466},
  [887] = {.lex_state = 466},
  [888] = {.lex_state = 466},
  [889] = {.lex_state = 245},
  [890] = {.lex_state = 466},
  [891] = {.lex_state = 466},
  [892] = {.lex_state = 466},
  [893] = {.lex_state = 283},
  [894] = {.lex_state = 283},
  [895] = {.lex_state = 283},
  [896] = {.lex_state = 466},
  [897] = {.lex_state = 283},
  [898] = {.lex_state = 245},
  [899] = {.lex_state = 442},
  [900] = {.lex_state = 283},
  [901] = {.lex_state = 283},
  [902] = {.lex_state = 283},
  [903] = {.lex_state = 283},
  [904] = {.lex_state = 283},
  [905] = {.lex_state = 283},
  [906] = {.lex_state = 283},
  [907] = {.lex_state = 283},
  [908] = {.lex_state = 488},
  [909] = {.lex_state = 488},
  [910] = {.lex_state = 448},
  [911] = {.lex_state = 283},
  [912] = {.lex_state = 283},
  [913] = {.lex_state = 283},
  [914] = {.lex_state = 283},
  [915] = {.lex_state = 283},
  [916] = {.lex_state = 283},
  [917] = {.lex_state = 283},
  [918] = {.lex_state = 283},
  [919] = {.lex_state = 442},
  [920] = {.lex_state = 442},
  [921] = {.lex_state = 442},
  [922] = {.lex_state = 442},
  [923] = {.lex_state = 442},
  [924] = {.lex_state = 442},
  [925] = {.lex_state = 442},
  [926] = {.lex_state = 283},
  [927] = {.lex_state = 245},
  [928] = {.lex_state = 245},
  [929] = {.lex_state = 283},
  [930] = {.lex_state = 283},
  [931] = {.lex_state = 283},
  [932] = {.lex_state = 283},
  [933] = {.lex_state = 283},
  [934] = {.lex_state = 283},
  [935] = {.lex_state = 488},
  [936] = {.lex_state = 488},
  [937] = {.lex_state = 442},
  [938] = {.lex_state = 283},
  [939] = {.lex_state = 283},
  [940] = {.lex_state = 442},
  [941] = {.lex_state = 455},
  [942] = {.lex_state = 283},
  [943] = {.lex_state = 283},
  [944] = {.lex_state = 283},
  [945] = {.lex_state = 283},
  [946] = {.lex_state = 283},
  [947] = {.lex_state = 283},
  [948] = {.lex_state = 245},
  [949] = {.lex_state = 245},
  [950] = {.lex_state = 446},
  [951] = {.lex_state = 245},
  [952] = {.lex_state = 442},
  [953] = {.lex_state = 442},
  [954] = {.lex_state = 449},
  [955] = {.lex_state = 442},
  [956] = {.lex_state = 283},
  [957] = {.lex_state = 283},
  [958] = {.lex_state = 283},
  [959] = {.lex_state = 283},
  [960] = {.lex_state = 283},
  [961] = {.lex_state = 283},
  [962] = {.lex_state = 283},
  [963] = {.lex_state = 283},
  [964] = {.lex_state = 245},
  [965] = {.lex_state = 245},
  [966] = {.lex_state = 283},
  [967] = {.lex_state = 476},
  [968] = {.lex_state = 476},
  [969] = {.lex_state = 283},
  [970] = {.lex_state = 245},
  [971] = {.lex_state = 283},
  [972] = {.lex_state = 283},
  [973] = {.lex_state = 448},
  [974] = {.lex_state = 448},
  [975] = {.lex_state = 283},
  [976] = {.lex_state = 502},
  [977] = {.lex_state = 283},
  [978] = {.lex_state = 245},
  [979] = {.lex_state = 245},
  [980] = {.lex_state = 502},
  [981] = {.lex_state = 283},
  [982] = {.lex_state = 442},
  [983] = {.lex_state = 245},
  [984] = {.lex_state = 283},
  [985] = {.lex_state = 283},
  [986] = {.lex_state = 442},
  [987] = {.lex_state = 455},
  [988] = {.lex_state = 283},
  [989] = {.lex_state = 442},
  [990] = {.lex_state = 442},
  [991] = {.lex_state = 245},
  [992] = {.lex_state = 442},
  [993] = {.lex_state = 442},
  [994] = {.lex_state = 283},
  [995] = {.lex_state = 442},
  [996] = {.lex_state = 283},
  [997] = {.lex_state = 283},
  [998] = {.lex_state = 245},
  [999] = {.lex_state = 283},
  [1000] = {.lex_state = 283},
  [1001] = {.lex_state = 245},
  [1002] = {.lex_state = 442},
  [1003] = {.lex_state = 442},
  [1004] = {.lex_state = 442},
  [1005] = {.lex_state = 442},
  [1006] = {.lex_state = 442},
  [1007] = {.lex_state = 442},
  [1008] = {.lex_state = 442},
  [1009] = {.lex_state = 283},
  [1010] = {.lex_state = 442},
  [1011] = {.lex_state = 283},
  [1012] = {.lex_state = 283},
  [1013] = {.lex_state = 442},
  [1014] = {.lex_state = 442},
  [1015] = {.lex_state = 442},
  [1016] = {.lex_state = 245},
  [1017] = {.lex_state = 455},
  [1018] = {.lex_state = 442},
  [1019] = {.lex_state = 245},
  [1020] = {.lex_state = 283},
  [1021] = {.lex_state = 283},
  [1022] = {.lex_state = 442},
  [1023] = {.lex_state = 442},
  [1024] = {.lex_state = 442},
  [1025] = {.lex_state = 442},
  [1026] = {.lex_state = 245},
  [1027] = {.lex_state = 448},
  [1028] = {.lex_state = 482},
  [1029] = {.lex_state = 283},
  [1030] = {.lex_state = 245},
  [1031] = {.lex_state = 245},
  [1032] = {.lex_state = 482},
  [1033] = {.lex_state = 455},
  [1034] = {.lex_state = 455},
  [1035] = {.lex_state = 466},
  [1036] = {.lex_state = 466},
  [1037] = {.lex_state = 283},
  [1038] = {.lex_state = 245},
  [1039] = {.lex_state = 466},
  [1040] = {.lex_state = 283},
  [1041] = {.lex_state = 245},
  [1042] = {.lex_state = 442},
  [1043] = {.lex_state = 245},
  [1044] = {.lex_state = 245},
  [1045] = {.lex_state = 245},
  [1046] = {.lex_state = 245},
  [1047] = {.lex_state = 245},
  [1048] = {.lex_state = 245},
  [1049] = {.lex_state = 245},
  [1050] = {.lex_state = 245},
  [1051] = {.lex_state = 448},
  [1052] = {.lex_state = 283},
  [1053] = {.lex_state = 442},
  [1054] = {.lex_state = 283},
  [1055] = {.lex_state = 283},
  [1056] = {.lex_state = 283},
  [1057] = {.lex_state = 283},
  [1058] = {.lex_state = 283},
  [1059] = {.lex_state = 283},
  [1060] = {.lex_state = 283},
  [1061] = {.lex_state = 245},
  [1062] = {.lex_state = 442},
  [1063] = {.lex_state = 283},
  [1064] = {.lex_state = 283},
  [1065] = {.lex_state = 442},
  [1066] = {.lex_state = 245},
  [1067] = {.lex_state = 283},
  [1068] = {.lex_state = 442},
  [1069] = {.lex_state = 442},
  [1070] = {.lex_state = 245},
  [1071] = {.lex_state = 283},
  [1072] = {.lex_state = 442},
  [1073] = {.lex_state = 283},
  [1074] = {.lex_state = 283},
  [1075] = {.lex_state = 283},
  [1076] = {.lex_state = 283},
  [1077] = {.lex_state = 245},
  [1078] = {.lex_state = 442},
  [1079] = {.lex_state = 446},
  [1080] = {.lex_state = 442},
  [1081] = {.lex_state = 442},
  [1082] = {.lex_state = 283},
  [1083] = {.lex_state = 245},
  [1084] = {.lex_state = 502},
  [1085] = {.lex_state = 502},
  [1086] = {.lex_state = 283},
  [1087] = {.lex_state = 442},
  [1088] = {.lex_state = 283},
  [1089] = {.lex_state = 442},
  [1090] = {.lex_state = 283},
  [1091] = {.lex_state = 283},
  [1092] = {.lex_state = 442},
  [1093] = {.lex_state = 283},
  [1094] = {.lex_state = 442},
  [1095] = {.lex_state = 283},
  [1096] = {.lex_state = 245},
  [1097] = {.lex_state = 245},
  [1098] = {.lex_state = 283},
  [1099] = {.lex_state = 283},
  [1100] = {.lex_state = 245},
  [1101] = {.lex_state = 245},
  [1102] = {.lex_state = 283},
  [1103] = {.lex_state = 245},
  [1104] = {.lex_state = 283},
  [1105] = {.lex_state = 283},
  [1106] = {.lex_state = 283},
  [1107] = {.lex_state = 283},
  [1108] = {.lex_state = 283},
  [1109] = {.lex_state = 283},
  [1110] = {.lex_state = 283},
  [1111] = {.lex_state = 283},
  [1112] = {.lex_state = 283},
  [1113] = {.lex_state = 442},
  [1114] = {.lex_state = 283},
  [1115] = {.lex_state = 442},
  [1116] = {.lex_state = 283},
  [1117] = {.lex_state = 245},
  [1118] = {.lex_state = 442},
  [1119] = {.lex_state = 512},
  [1120] = {.lex_state = 455},
  [1121] = {.lex_state = 245},
  [1122] = {.lex_state = 442},
  [1123] = {.lex_state = 442},
  [1124] = {.lex_state = 442},
  [1125] = {.lex_state = 448},
  [1126] = {.lex_state = 482},
  [1127] = {.lex_state = 482},
  [1128] = {.lex_state = 466},
  [1129] = {.lex_state = 283},
  [1130] = {.lex_state = 283},
  [1131] = {.lex_state = 283},
  [1132] = {.lex_state = 283},
  [1133] = {.lex_state = 283},
  [1134] = {.lex_state = 283},
  [1135] = {.lex_state = 488},
  [1136] = {.lex_state = 488},
  [1137] = {.lex_state = 448},
  [1138] = {.lex_state = 283},
  [1139] = {.lex_state = 442},
  [1140] = {.lex_state = 283},
  [1141] = {.lex_state = 245},
  [1142] = {.lex_state = 245},
  [1143] = {.lex_state = 245},
  [1144] = {.lex_state = 283},
  [1145] = {.lex_state = 283},
  [1146] = {.lex_state = 283},
  [1147] = {.lex_state = 283},
  [1148] = {.lex_state = 283},
  [1149] = {.lex_state = 442},
  [1150] = {.lex_state = 466},
  [1151] = {.lex_state = 283},
  [1152] = {.lex_state = 245},
  [1153] = {.lex_state = 283},
  [1154] = {.lex_state = 442},
  [1155] = {.lex_state = 283},
  [1156] = {.lex_state = 442},
  [1157] = {.lex_state = 283},
  [1158] = {.lex_state = 283},
  [1159] = {.lex_state = 283},
  [1160] = {.lex_state = 283},
  [1161] = {.lex_state = 283},
  [1162] = {.lex_state = 283},
  [1163] = {.lex_state = 283},
  [1164] = {.lex_state = 283},
  [1165] = {.lex_state = 442},
  [1166] = {.lex_state = 245},
  [1167] = {.lex_state = 283},
  [1168] = {.lex_state = 442},
  [1169] = {.lex_state = 442},
  [1170] = {.lex_state = 245},
  [1171] = {.lex_state = 283},
  [1172] = {.lex_state = 283},
  [1173] = {.lex_state = 245},
  [1174] = {.lex_state = 512},
  [1175] = {.lex_state = 283},
  [1176] = {.lex_state = 245},
  [1177] = {.lex_state = 442},
  [1178] = {.lex_state = 442},
  [1179] = {.lex_state = 283},
  [1180] = {.lex_state = 245},
  [1181] = {.lex_state = 283},
  [1182] = {.lex_state = 448},
  [1183] = {.lex_state = 283},
  [1184] = {.lex_state = 283},
  [1185] = {.lex_state = 283},
  [1186] = {.lex_state = 283},
  [1187] = {.lex_state = 283},
  [1188] = {.lex_state = 442},
  [1189] = {.lex_state = 283},
  [1190] = {.lex_state = 283},
  [1191] = {.lex_state = 466},
  [1192] = {.lex_state = 245},
  [1193] = {.lex_state = 283},
  [1194] = {.lex_state = 245},
  [1195] = {.lex_state = 283},
  [1196] = {.lex_state = 245},
  [1197] = {.lex_state = 283},
  [1198] = {.lex_state = 283},
  [1199] = {.lex_state = 283},
  [1200] = {.lex_state = 245},
  [1201] = {.lex_state = 442},
  [1202] = {.lex_state = 283},
  [1203] = {.lex_state = 283},
  [1204] = {.lex_state = 245},
  [1205] = {.lex_state = 442},
  [1206] = {.lex_state = 283},
  [1207] = {.lex_state = 283},
  [1208] = {.lex_state = 245},
  [1209] = {.lex_state = 283},
  [1210] = {.lex_state = 283},
  [1211] = {.lex_state = 448},
  [1212] = {.lex_state = 283},
  [1213] = {.lex_state = 283},
  [1214] = {.lex_state = 283},
  [1215] = {.lex_state = 283},
  [1216] = {.lex_state = 283},
  [1217] = {.lex_state = 283},
  [1218] = {.lex_state = 283},
  [1219] = {.lex_state = 283},
  [1220] = {.lex_state = 283},
  [1221] = {.lex_state = 283},
  [1222] = {.lex_state = 245},
  [1223] = {.lex_state = 283},
  [1224] = {.lex_state = 245},
  [1225] = {.lex_state = 283},
  [1226] = {.lex_state = 245},
  [1227] = {.lex_state = 283},
  [1228] = {.lex_state = 245},
  [1229] = {.lex_state = 283},
  [1230] = {.lex_state = 283},
  [1231] = {.lex_state = 283},
  [1232] = {.lex_state = 283},
  [1233] = {.lex_state = 283},
  [1234] = {.lex_state = 283},
  [1235] = {.lex_state = 283},
  [1236] = {.lex_state = 283},
  [1237] = {.lex_state = 283},
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
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(3),
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
    [anon_sym_default] = ACTIONS(3),
    [anon_sym_this] = ACTIONS(3),
    [anon_sym_super] = ACTIONS(3),
    [anon_sym_new] = ACTIONS(3),
    [anon_sym_void] = ACTIONS(3),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_program] = STATE(19),
    [sym__statement] = STATE(20),
    [sym__literal] = STATE(21),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(22),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym__annotation] = STATE(26),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym__declaration] = STATE(28),
    [sym_module_declaration] = STATE(29),
    [sym_package_declaration] = STATE(29),
    [sym_import_statement] = STATE(29),
    [sym_type_import_on_declaraction] = STATE(30),
    [sym_single_static_import_declaration] = STATE(30),
    [sym_static_import_on_demand_declaration] = STATE(30),
    [sym_class_declaration] = STATE(29),
    [sym_normal_class_declaration] = STATE(31),
    [sym_modifier] = STATE(32),
    [sym_interface_declaration] = STATE(29),
    [sym_annotation_type_declaration] = STATE(33),
    [sym_normal_interface_declaration] = STATE(33),
    [aux_sym_program_repeat1] = STATE(34),
    [aux_sym_class_or_interface_type_repeat1] = STATE(35),
    [aux_sym_normal_class_declaration_repeat1] = STATE(36),
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
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(28),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_PLUS_PLUS] = ACTIONS(30),
    [anon_sym_DASH_DASH] = ACTIONS(30),
    [anon_sym_AT] = ACTIONS(32),
    [anon_sym_open] = ACTIONS(34),
    [anon_sym_module] = ACTIONS(36),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_package] = ACTIONS(40),
    [anon_sym_import] = ACTIONS(42),
    [anon_sym_class] = ACTIONS(44),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(46),
    [sym_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(50),
  },
  [2] = {
    [sym__semicolon] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(52),
    [anon_sym_RBRACE] = ACTIONS(52),
    [anon_sym_DOT] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_COLON_COLON] = ACTIONS(52),
    [sym_comment] = ACTIONS(50),
  },
  [3] = {
    [sym__semicolon] = ACTIONS(54),
    [anon_sym_RPAREN] = ACTIONS(54),
    [anon_sym_COMMA] = ACTIONS(54),
    [anon_sym_RBRACE] = ACTIONS(54),
    [anon_sym_DOT] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_COLON_COLON] = ACTIONS(54),
    [sym_comment] = ACTIONS(50),
  },
  [4] = {
    [sym__semicolon] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_COMMA] = ACTIONS(56),
    [anon_sym_RBRACE] = ACTIONS(56),
    [anon_sym_DOT] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_COLON_COLON] = ACTIONS(56),
    [sym_comment] = ACTIONS(50),
  },
  [5] = {
    [aux_sym_character_literal_repeat1] = STATE(39),
    [anon_sym_SQUOTE] = ACTIONS(58),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(60),
    [sym_comment] = ACTIONS(62),
  },
  [6] = {
    [sym__semicolon] = ACTIONS(64),
    [anon_sym_RPAREN] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(64),
    [anon_sym_RBRACE] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(64),
    [anon_sym_COLON_COLON] = ACTIONS(64),
    [sym_comment] = ACTIONS(50),
  },
  [7] = {
    [sym_inferred_formal_parameter_list] = STATE(46),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_modifier] = STATE(49),
    [sym_variable_declarator_id] = STATE(50),
    [sym_formal_parameter_list] = STATE(46),
    [sym_formal_parameter] = STATE(51),
    [sym_receiver_parameter] = STATE(52),
    [sym_last_formal_parameter] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(54),
    [aux_sym_normal_class_declaration_repeat1] = STATE(55),
    [anon_sym_COMMA] = ACTIONS(66),
    [anon_sym_AT] = ACTIONS(68),
    [anon_sym_static] = ACTIONS(70),
    [anon_sym_public] = ACTIONS(70),
    [anon_sym_protected] = ACTIONS(70),
    [anon_sym_private] = ACTIONS(70),
    [anon_sym_abstract] = ACTIONS(70),
    [anon_sym_final] = ACTIONS(70),
    [anon_sym_strictfp] = ACTIONS(70),
    [anon_sym_default] = ACTIONS(70),
    [anon_sym_this] = ACTIONS(72),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(50),
  },
  [8] = {
    [sym__expression] = STATE(56),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(28),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_PLUS_PLUS] = ACTIONS(30),
    [anon_sym_DASH_DASH] = ACTIONS(30),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [9] = {
    [sym__expression] = STATE(57),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(28),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_PLUS_PLUS] = ACTIONS(30),
    [anon_sym_DASH_DASH] = ACTIONS(30),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [10] = {
    [sym_package_or_type_name] = STATE(60),
    [anon_sym_interface] = ACTIONS(80),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(50),
  },
  [11] = {
    [anon_sym_module] = ACTIONS(84),
    [sym_comment] = ACTIONS(50),
  },
  [12] = {
    [sym_module_identifier] = STATE(63),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(50),
  },
  [13] = {
    [anon_sym_LT] = ACTIONS(88),
    [anon_sym_AT] = ACTIONS(88),
    [anon_sym_static] = ACTIONS(90),
    [anon_sym_class] = ACTIONS(90),
    [anon_sym_public] = ACTIONS(90),
    [anon_sym_protected] = ACTIONS(90),
    [anon_sym_private] = ACTIONS(90),
    [anon_sym_abstract] = ACTIONS(90),
    [anon_sym_final] = ACTIONS(90),
    [anon_sym_strictfp] = ACTIONS(90),
    [anon_sym_default] = ACTIONS(90),
    [anon_sym_interface] = ACTIONS(90),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(50),
  },
  [14] = {
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(50),
  },
  [15] = {
    [sym_package_or_type_name] = STATE(66),
    [anon_sym_static] = ACTIONS(96),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(50),
  },
  [16] = {
    [sym_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(50),
  },
  [17] = {
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(50),
  },
  [18] = {
    [anon_sym_DASH_GT] = ACTIONS(102),
    [sym_comment] = ACTIONS(50),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym_comment] = ACTIONS(50),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_decimal_integer_literal] = ACTIONS(108),
    [sym_hex_integer_literal] = ACTIONS(108),
    [sym_octal_integer_literal] = ACTIONS(108),
    [sym_binary_integer_literal] = ACTIONS(108),
    [sym_decimal_floating_point_literal] = ACTIONS(108),
    [sym_hex_floating_point_literal] = ACTIONS(110),
    [anon_sym_true] = ACTIONS(108),
    [anon_sym_false] = ACTIONS(108),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [sym_string_literal] = ACTIONS(106),
    [sym_null_literal] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_BANG] = ACTIONS(106),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_PLUS_PLUS] = ACTIONS(106),
    [anon_sym_DASH_DASH] = ACTIONS(106),
    [anon_sym_AT] = ACTIONS(106),
    [anon_sym_open] = ACTIONS(108),
    [anon_sym_module] = ACTIONS(108),
    [anon_sym_static] = ACTIONS(108),
    [anon_sym_package] = ACTIONS(108),
    [anon_sym_import] = ACTIONS(108),
    [anon_sym_class] = ACTIONS(108),
    [anon_sym_public] = ACTIONS(108),
    [anon_sym_protected] = ACTIONS(108),
    [anon_sym_private] = ACTIONS(108),
    [anon_sym_abstract] = ACTIONS(108),
    [anon_sym_final] = ACTIONS(108),
    [anon_sym_strictfp] = ACTIONS(108),
    [anon_sym_default] = ACTIONS(108),
    [anon_sym_interface] = ACTIONS(108),
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(50),
  },
  [21] = {
    [sym__semicolon] = ACTIONS(112),
    [sym_comment] = ACTIONS(50),
  },
  [22] = {
    [sym__semicolon] = ACTIONS(112),
    [anon_sym_EQ] = ACTIONS(114),
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
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_AMP_AMP] = ACTIONS(122),
    [anon_sym_PIPE_PIPE] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_CARET] = ACTIONS(132),
    [anon_sym_PERCENT] = ACTIONS(128),
    [anon_sym_LT_LT] = ACTIONS(128),
    [anon_sym_GT_GT] = ACTIONS(128),
    [anon_sym_GT_GT_GT] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(134),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [23] = {
    [sym__semicolon] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(140),
    [anon_sym_PLUS_EQ] = ACTIONS(138),
    [anon_sym_DASH_EQ] = ACTIONS(138),
    [anon_sym_STAR_EQ] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [anon_sym_AMP_EQ] = ACTIONS(138),
    [anon_sym_PIPE_EQ] = ACTIONS(138),
    [anon_sym_CARET_EQ] = ACTIONS(138),
    [anon_sym_PERCENT_EQ] = ACTIONS(138),
    [anon_sym_LT_LT_EQ] = ACTIONS(138),
    [anon_sym_GT_GT_EQ] = ACTIONS(138),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_AMP_AMP] = ACTIONS(138),
    [anon_sym_PIPE_PIPE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_STAR] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(140),
    [anon_sym_AMP] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_CARET] = ACTIONS(140),
    [anon_sym_PERCENT] = ACTIONS(140),
    [anon_sym_LT_LT] = ACTIONS(140),
    [anon_sym_GT_GT] = ACTIONS(140),
    [anon_sym_GT_GT_GT] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym_COMMA] = ACTIONS(138),
    [anon_sym_QMARK] = ACTIONS(138),
    [anon_sym_COLON] = ACTIONS(138),
    [anon_sym_PLUS_PLUS] = ACTIONS(138),
    [anon_sym_DASH_DASH] = ACTIONS(138),
    [anon_sym_LBRACE] = ACTIONS(138),
    [anon_sym_RBRACE] = ACTIONS(138),
    [anon_sym_RBRACK] = ACTIONS(138),
    [sym_comment] = ACTIONS(50),
  },
  [24] = {
    [anon_sym_DASH_GT] = ACTIONS(142),
    [sym_comment] = ACTIONS(50),
  },
  [25] = {
    [sym__semicolon] = ACTIONS(144),
    [anon_sym_EQ] = ACTIONS(146),
    [anon_sym_PLUS_EQ] = ACTIONS(144),
    [anon_sym_DASH_EQ] = ACTIONS(144),
    [anon_sym_STAR_EQ] = ACTIONS(144),
    [anon_sym_SLASH_EQ] = ACTIONS(144),
    [anon_sym_AMP_EQ] = ACTIONS(144),
    [anon_sym_PIPE_EQ] = ACTIONS(144),
    [anon_sym_CARET_EQ] = ACTIONS(144),
    [anon_sym_PERCENT_EQ] = ACTIONS(144),
    [anon_sym_LT_LT_EQ] = ACTIONS(144),
    [anon_sym_GT_GT_EQ] = ACTIONS(144),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(146),
    [anon_sym_EQ_EQ] = ACTIONS(144),
    [anon_sym_GT_EQ] = ACTIONS(144),
    [anon_sym_LT_EQ] = ACTIONS(144),
    [anon_sym_BANG_EQ] = ACTIONS(144),
    [anon_sym_AMP_AMP] = ACTIONS(144),
    [anon_sym_PIPE_PIPE] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(146),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(146),
    [anon_sym_AMP] = ACTIONS(146),
    [anon_sym_PIPE] = ACTIONS(146),
    [anon_sym_CARET] = ACTIONS(146),
    [anon_sym_PERCENT] = ACTIONS(146),
    [anon_sym_LT_LT] = ACTIONS(146),
    [anon_sym_GT_GT] = ACTIONS(146),
    [anon_sym_GT_GT_GT] = ACTIONS(146),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_QMARK] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_PLUS_PLUS] = ACTIONS(144),
    [anon_sym_DASH_DASH] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [sym_comment] = ACTIONS(50),
  },
  [26] = {
    [anon_sym_AT] = ACTIONS(148),
    [anon_sym_open] = ACTIONS(151),
    [anon_sym_module] = ACTIONS(151),
    [anon_sym_static] = ACTIONS(88),
    [anon_sym_package] = ACTIONS(151),
    [anon_sym_class] = ACTIONS(88),
    [anon_sym_public] = ACTIONS(88),
    [anon_sym_protected] = ACTIONS(88),
    [anon_sym_private] = ACTIONS(88),
    [anon_sym_abstract] = ACTIONS(88),
    [anon_sym_final] = ACTIONS(88),
    [anon_sym_strictfp] = ACTIONS(88),
    [anon_sym_default] = ACTIONS(88),
    [anon_sym_interface] = ACTIONS(88),
    [sym_comment] = ACTIONS(50),
  },
  [27] = {
    [sym__semicolon] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_AT] = ACTIONS(153),
    [anon_sym_open] = ACTIONS(153),
    [anon_sym_module] = ACTIONS(153),
    [anon_sym_static] = ACTIONS(153),
    [anon_sym_package] = ACTIONS(153),
    [anon_sym_class] = ACTIONS(153),
    [anon_sym_public] = ACTIONS(153),
    [anon_sym_protected] = ACTIONS(153),
    [anon_sym_private] = ACTIONS(153),
    [anon_sym_abstract] = ACTIONS(153),
    [anon_sym_final] = ACTIONS(153),
    [anon_sym_strictfp] = ACTIONS(153),
    [anon_sym_default] = ACTIONS(153),
    [anon_sym_void] = ACTIONS(153),
    [anon_sym_interface] = ACTIONS(153),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(153),
    [sym_comment] = ACTIONS(50),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_decimal_integer_literal] = ACTIONS(157),
    [sym_hex_integer_literal] = ACTIONS(157),
    [sym_octal_integer_literal] = ACTIONS(157),
    [sym_binary_integer_literal] = ACTIONS(157),
    [sym_decimal_floating_point_literal] = ACTIONS(157),
    [sym_hex_floating_point_literal] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(157),
    [anon_sym_false] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(155),
    [sym_string_literal] = ACTIONS(155),
    [sym_null_literal] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_BANG] = ACTIONS(155),
    [anon_sym_TILDE] = ACTIONS(155),
    [anon_sym_PLUS_PLUS] = ACTIONS(155),
    [anon_sym_DASH_DASH] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(155),
    [anon_sym_AT] = ACTIONS(155),
    [anon_sym_open] = ACTIONS(157),
    [anon_sym_module] = ACTIONS(157),
    [anon_sym_static] = ACTIONS(157),
    [anon_sym_package] = ACTIONS(157),
    [anon_sym_import] = ACTIONS(157),
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
    [sym_comment] = ACTIONS(50),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_decimal_integer_literal] = ACTIONS(163),
    [sym_hex_integer_literal] = ACTIONS(163),
    [sym_octal_integer_literal] = ACTIONS(163),
    [sym_binary_integer_literal] = ACTIONS(163),
    [sym_decimal_floating_point_literal] = ACTIONS(163),
    [sym_hex_floating_point_literal] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(163),
    [anon_sym_false] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [sym_string_literal] = ACTIONS(161),
    [sym_null_literal] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(161),
    [anon_sym_TILDE] = ACTIONS(161),
    [anon_sym_PLUS_PLUS] = ACTIONS(161),
    [anon_sym_DASH_DASH] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(161),
    [anon_sym_open] = ACTIONS(163),
    [anon_sym_module] = ACTIONS(163),
    [anon_sym_static] = ACTIONS(163),
    [anon_sym_package] = ACTIONS(163),
    [anon_sym_import] = ACTIONS(163),
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
    [sym_comment] = ACTIONS(50),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_decimal_integer_literal] = ACTIONS(169),
    [sym_hex_integer_literal] = ACTIONS(169),
    [sym_octal_integer_literal] = ACTIONS(169),
    [sym_binary_integer_literal] = ACTIONS(169),
    [sym_decimal_floating_point_literal] = ACTIONS(169),
    [sym_hex_floating_point_literal] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(169),
    [anon_sym_false] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [sym_string_literal] = ACTIONS(167),
    [sym_null_literal] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_BANG] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(167),
    [anon_sym_PLUS_PLUS] = ACTIONS(167),
    [anon_sym_DASH_DASH] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_AT] = ACTIONS(167),
    [anon_sym_open] = ACTIONS(169),
    [anon_sym_module] = ACTIONS(169),
    [anon_sym_static] = ACTIONS(169),
    [anon_sym_package] = ACTIONS(169),
    [anon_sym_import] = ACTIONS(169),
    [anon_sym_class] = ACTIONS(169),
    [anon_sym_public] = ACTIONS(169),
    [anon_sym_protected] = ACTIONS(169),
    [anon_sym_private] = ACTIONS(169),
    [anon_sym_abstract] = ACTIONS(169),
    [anon_sym_final] = ACTIONS(169),
    [anon_sym_strictfp] = ACTIONS(169),
    [anon_sym_default] = ACTIONS(169),
    [anon_sym_interface] = ACTIONS(169),
    [sym_identifier] = ACTIONS(171),
    [sym_comment] = ACTIONS(50),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_decimal_integer_literal] = ACTIONS(175),
    [sym_hex_integer_literal] = ACTIONS(175),
    [sym_octal_integer_literal] = ACTIONS(175),
    [sym_binary_integer_literal] = ACTIONS(175),
    [sym_decimal_floating_point_literal] = ACTIONS(175),
    [sym_hex_floating_point_literal] = ACTIONS(177),
    [anon_sym_true] = ACTIONS(175),
    [anon_sym_false] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [sym_string_literal] = ACTIONS(173),
    [sym_null_literal] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_PLUS_PLUS] = ACTIONS(173),
    [anon_sym_DASH_DASH] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(173),
    [anon_sym_open] = ACTIONS(175),
    [anon_sym_module] = ACTIONS(175),
    [anon_sym_static] = ACTIONS(175),
    [anon_sym_package] = ACTIONS(175),
    [anon_sym_import] = ACTIONS(175),
    [anon_sym_class] = ACTIONS(175),
    [anon_sym_public] = ACTIONS(175),
    [anon_sym_protected] = ACTIONS(175),
    [anon_sym_private] = ACTIONS(175),
    [anon_sym_abstract] = ACTIONS(175),
    [anon_sym_final] = ACTIONS(175),
    [anon_sym_strictfp] = ACTIONS(175),
    [anon_sym_default] = ACTIONS(175),
    [anon_sym_interface] = ACTIONS(175),
    [sym_identifier] = ACTIONS(177),
    [sym_comment] = ACTIONS(50),
  },
  [32] = {
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(179),
    [anon_sym_static] = ACTIONS(181),
    [anon_sym_class] = ACTIONS(181),
    [anon_sym_public] = ACTIONS(181),
    [anon_sym_protected] = ACTIONS(181),
    [anon_sym_private] = ACTIONS(181),
    [anon_sym_abstract] = ACTIONS(181),
    [anon_sym_final] = ACTIONS(181),
    [anon_sym_strictfp] = ACTIONS(181),
    [anon_sym_default] = ACTIONS(181),
    [anon_sym_interface] = ACTIONS(181),
    [sym_identifier] = ACTIONS(183),
    [sym_comment] = ACTIONS(50),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_decimal_integer_literal] = ACTIONS(187),
    [sym_hex_integer_literal] = ACTIONS(187),
    [sym_octal_integer_literal] = ACTIONS(187),
    [sym_binary_integer_literal] = ACTIONS(187),
    [sym_decimal_floating_point_literal] = ACTIONS(187),
    [sym_hex_floating_point_literal] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [sym_string_literal] = ACTIONS(185),
    [sym_null_literal] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_BANG] = ACTIONS(185),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_PLUS_PLUS] = ACTIONS(185),
    [anon_sym_DASH_DASH] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(185),
    [anon_sym_open] = ACTIONS(187),
    [anon_sym_module] = ACTIONS(187),
    [anon_sym_static] = ACTIONS(187),
    [anon_sym_package] = ACTIONS(187),
    [anon_sym_import] = ACTIONS(187),
    [anon_sym_class] = ACTIONS(187),
    [anon_sym_public] = ACTIONS(187),
    [anon_sym_protected] = ACTIONS(187),
    [anon_sym_private] = ACTIONS(187),
    [anon_sym_abstract] = ACTIONS(187),
    [anon_sym_final] = ACTIONS(187),
    [anon_sym_strictfp] = ACTIONS(187),
    [anon_sym_default] = ACTIONS(187),
    [anon_sym_interface] = ACTIONS(187),
    [sym_identifier] = ACTIONS(189),
    [sym_comment] = ACTIONS(50),
  },
  [34] = {
    [sym__statement] = STATE(79),
    [sym__literal] = STATE(21),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(22),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym__annotation] = STATE(26),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym__declaration] = STATE(28),
    [sym_module_declaration] = STATE(29),
    [sym_package_declaration] = STATE(29),
    [sym_import_statement] = STATE(29),
    [sym_type_import_on_declaraction] = STATE(30),
    [sym_single_static_import_declaration] = STATE(30),
    [sym_static_import_on_demand_declaration] = STATE(30),
    [sym_class_declaration] = STATE(29),
    [sym_normal_class_declaration] = STATE(31),
    [sym_modifier] = STATE(32),
    [sym_interface_declaration] = STATE(29),
    [sym_annotation_type_declaration] = STATE(33),
    [sym_normal_interface_declaration] = STATE(33),
    [aux_sym_class_or_interface_type_repeat1] = STATE(35),
    [aux_sym_normal_class_declaration_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(191),
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
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(28),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_PLUS_PLUS] = ACTIONS(30),
    [anon_sym_DASH_DASH] = ACTIONS(30),
    [anon_sym_AT] = ACTIONS(32),
    [anon_sym_open] = ACTIONS(34),
    [anon_sym_module] = ACTIONS(36),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_package] = ACTIONS(40),
    [anon_sym_import] = ACTIONS(42),
    [anon_sym_class] = ACTIONS(44),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(46),
    [sym_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(50),
  },
  [35] = {
    [sym__annotation] = STATE(83),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_open] = ACTIONS(195),
    [anon_sym_module] = ACTIONS(84),
    [anon_sym_package] = ACTIONS(197),
    [sym_comment] = ACTIONS(50),
  },
  [36] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym_modifier] = STATE(87),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_static] = ACTIONS(201),
    [anon_sym_class] = ACTIONS(203),
    [anon_sym_public] = ACTIONS(201),
    [anon_sym_protected] = ACTIONS(201),
    [anon_sym_private] = ACTIONS(201),
    [anon_sym_abstract] = ACTIONS(201),
    [anon_sym_final] = ACTIONS(201),
    [anon_sym_strictfp] = ACTIONS(201),
    [anon_sym_default] = ACTIONS(201),
    [anon_sym_interface] = ACTIONS(205),
    [sym_comment] = ACTIONS(50),
  },
  [37] = {
    [sym__semicolon] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_COLON_COLON] = ACTIONS(207),
    [sym_comment] = ACTIONS(50),
  },
  [38] = {
    [anon_sym_SQUOTE] = ACTIONS(209),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(209),
    [sym_comment] = ACTIONS(62),
  },
  [39] = {
    [anon_sym_SQUOTE] = ACTIONS(211),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(213),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(213),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(213),
    [sym_comment] = ACTIONS(62),
  },
  [40] = {
    [aux_sym_inferred_formal_parameter_list_repeat1] = STATE(91),
    [anon_sym_RPAREN] = ACTIONS(215),
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(50),
  },
  [41] = {
    [sym_package_or_type_name] = STATE(93),
    [sym_identifier] = ACTIONS(219),
    [sym_comment] = ACTIONS(50),
  },
  [42] = {
    [anon_sym_AT] = ACTIONS(88),
    [anon_sym_static] = ACTIONS(90),
    [anon_sym_public] = ACTIONS(90),
    [anon_sym_protected] = ACTIONS(90),
    [anon_sym_private] = ACTIONS(90),
    [anon_sym_abstract] = ACTIONS(90),
    [anon_sym_final] = ACTIONS(90),
    [anon_sym_strictfp] = ACTIONS(90),
    [anon_sym_default] = ACTIONS(90),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(88),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(50),
  },
  [43] = {
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_throws] = ACTIONS(221),
    [sym_comment] = ACTIONS(50),
  },
  [44] = {
    [sym_variable_declarator] = STATE(95),
    [sym_variable_declarator_id] = STATE(96),
    [sym_identifier] = ACTIONS(223),
    [sym_comment] = ACTIONS(50),
  },
  [45] = {
    [sym_dims] = STATE(99),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [aux_sym_class_or_interface_type_repeat1] = STATE(101),
    [aux_sym_dims_repeat1] = STATE(102),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_throws] = ACTIONS(225),
    [sym_comment] = ACTIONS(50),
  },
  [46] = {
    [anon_sym_RPAREN] = ACTIONS(231),
    [sym_comment] = ACTIONS(50),
  },
  [47] = {
    [anon_sym_AT] = ACTIONS(148),
    [anon_sym_static] = ACTIONS(90),
    [anon_sym_public] = ACTIONS(90),
    [anon_sym_protected] = ACTIONS(90),
    [anon_sym_private] = ACTIONS(90),
    [anon_sym_abstract] = ACTIONS(90),
    [anon_sym_final] = ACTIONS(90),
    [anon_sym_strictfp] = ACTIONS(90),
    [anon_sym_default] = ACTIONS(90),
    [anon_sym_this] = ACTIONS(233),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(148),
    [sym_identifier] = ACTIONS(235),
    [sym_comment] = ACTIONS(50),
  },
  [48] = {
    [anon_sym_AT] = ACTIONS(153),
    [anon_sym_static] = ACTIONS(238),
    [anon_sym_public] = ACTIONS(238),
    [anon_sym_protected] = ACTIONS(238),
    [anon_sym_private] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(238),
    [anon_sym_final] = ACTIONS(238),
    [anon_sym_strictfp] = ACTIONS(238),
    [anon_sym_default] = ACTIONS(238),
    [anon_sym_this] = ACTIONS(238),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(153),
    [sym_identifier] = ACTIONS(240),
    [sym_comment] = ACTIONS(50),
  },
  [49] = {
    [anon_sym_AT] = ACTIONS(179),
    [anon_sym_static] = ACTIONS(181),
    [anon_sym_public] = ACTIONS(181),
    [anon_sym_protected] = ACTIONS(181),
    [anon_sym_private] = ACTIONS(181),
    [anon_sym_abstract] = ACTIONS(181),
    [anon_sym_final] = ACTIONS(181),
    [anon_sym_strictfp] = ACTIONS(181),
    [anon_sym_default] = ACTIONS(181),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(179),
    [sym_identifier] = ACTIONS(183),
    [sym_comment] = ACTIONS(50),
  },
  [50] = {
    [anon_sym_RPAREN] = ACTIONS(242),
    [anon_sym_COMMA] = ACTIONS(242),
    [anon_sym_LBRACE] = ACTIONS(242),
    [anon_sym_throws] = ACTIONS(242),
    [sym_comment] = ACTIONS(50),
  },
  [51] = {
    [aux_sym_formal_parameters_repeat1] = STATE(105),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_LBRACE] = ACTIONS(244),
    [anon_sym_throws] = ACTIONS(244),
    [sym_comment] = ACTIONS(50),
  },
  [52] = {
    [aux_sym_formal_parameters_repeat1] = STATE(105),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_LBRACE] = ACTIONS(248),
    [anon_sym_throws] = ACTIONS(248),
    [sym_comment] = ACTIONS(50),
  },
  [53] = {
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(248),
    [anon_sym_throws] = ACTIONS(248),
    [sym_comment] = ACTIONS(50),
  },
  [54] = {
    [sym__annotation] = STATE(110),
    [sym_normal_annotation] = STATE(111),
    [sym_marker_annotation] = STATE(111),
    [sym_single_element_annotation] = STATE(111),
    [anon_sym_AT] = ACTIONS(250),
    [anon_sym_this] = ACTIONS(252),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(254),
    [sym_identifier] = ACTIONS(256),
    [sym_comment] = ACTIONS(50),
  },
  [55] = {
    [sym__annotation] = STATE(113),
    [sym_normal_annotation] = STATE(114),
    [sym_marker_annotation] = STATE(114),
    [sym_single_element_annotation] = STATE(114),
    [sym_modifier] = STATE(115),
    [sym_variable_declarator_id] = STATE(116),
    [aux_sym_class_or_interface_type_repeat1] = STATE(117),
    [anon_sym_AT] = ACTIONS(258),
    [anon_sym_static] = ACTIONS(70),
    [anon_sym_public] = ACTIONS(70),
    [anon_sym_protected] = ACTIONS(70),
    [anon_sym_private] = ACTIONS(70),
    [anon_sym_abstract] = ACTIONS(70),
    [anon_sym_final] = ACTIONS(70),
    [anon_sym_strictfp] = ACTIONS(70),
    [anon_sym_default] = ACTIONS(70),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(254),
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(50),
  },
  [56] = {
    [sym__semicolon] = ACTIONS(262),
    [anon_sym_EQ] = ACTIONS(264),
    [anon_sym_PLUS_EQ] = ACTIONS(262),
    [anon_sym_DASH_EQ] = ACTIONS(262),
    [anon_sym_STAR_EQ] = ACTIONS(262),
    [anon_sym_SLASH_EQ] = ACTIONS(262),
    [anon_sym_AMP_EQ] = ACTIONS(262),
    [anon_sym_PIPE_EQ] = ACTIONS(262),
    [anon_sym_CARET_EQ] = ACTIONS(262),
    [anon_sym_PERCENT_EQ] = ACTIONS(262),
    [anon_sym_LT_LT_EQ] = ACTIONS(262),
    [anon_sym_GT_GT_EQ] = ACTIONS(262),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(262),
    [anon_sym_GT] = ACTIONS(264),
    [anon_sym_LT] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(262),
    [anon_sym_GT_EQ] = ACTIONS(262),
    [anon_sym_LT_EQ] = ACTIONS(262),
    [anon_sym_BANG_EQ] = ACTIONS(262),
    [anon_sym_AMP_AMP] = ACTIONS(262),
    [anon_sym_PIPE_PIPE] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(264),
    [anon_sym_SLASH] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(264),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_CARET] = ACTIONS(264),
    [anon_sym_PERCENT] = ACTIONS(264),
    [anon_sym_LT_LT] = ACTIONS(264),
    [anon_sym_GT_GT] = ACTIONS(264),
    [anon_sym_GT_GT_GT] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_QMARK] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(262),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_RBRACE] = ACTIONS(262),
    [anon_sym_RBRACK] = ACTIONS(262),
    [sym_comment] = ACTIONS(50),
  },
  [57] = {
    [sym__semicolon] = ACTIONS(266),
    [anon_sym_EQ] = ACTIONS(268),
    [anon_sym_PLUS_EQ] = ACTIONS(266),
    [anon_sym_DASH_EQ] = ACTIONS(266),
    [anon_sym_STAR_EQ] = ACTIONS(266),
    [anon_sym_SLASH_EQ] = ACTIONS(266),
    [anon_sym_AMP_EQ] = ACTIONS(266),
    [anon_sym_PIPE_EQ] = ACTIONS(266),
    [anon_sym_CARET_EQ] = ACTIONS(266),
    [anon_sym_PERCENT_EQ] = ACTIONS(266),
    [anon_sym_LT_LT_EQ] = ACTIONS(266),
    [anon_sym_GT_GT_EQ] = ACTIONS(266),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(268),
    [anon_sym_LT] = ACTIONS(268),
    [anon_sym_EQ_EQ] = ACTIONS(266),
    [anon_sym_GT_EQ] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(266),
    [anon_sym_BANG_EQ] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(266),
    [anon_sym_PIPE_PIPE] = ACTIONS(266),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(268),
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_AMP] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(268),
    [anon_sym_CARET] = ACTIONS(268),
    [anon_sym_PERCENT] = ACTIONS(268),
    [anon_sym_LT_LT] = ACTIONS(268),
    [anon_sym_GT_GT] = ACTIONS(268),
    [anon_sym_GT_GT_GT] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_COLON] = ACTIONS(266),
    [anon_sym_PLUS_PLUS] = ACTIONS(266),
    [anon_sym_DASH_DASH] = ACTIONS(266),
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_RBRACE] = ACTIONS(266),
    [anon_sym_RBRACK] = ACTIONS(266),
    [sym_comment] = ACTIONS(50),
  },
  [58] = {
    [sym_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(50),
  },
  [59] = {
    [sym__semicolon] = ACTIONS(272),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_RPAREN] = ACTIONS(272),
    [anon_sym_COMMA] = ACTIONS(272),
    [anon_sym_RBRACE] = ACTIONS(272),
    [anon_sym_DOT] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(272),
    [anon_sym_AT] = ACTIONS(272),
    [anon_sym_open] = ACTIONS(272),
    [anon_sym_module] = ACTIONS(272),
    [anon_sym_with] = ACTIONS(272),
    [anon_sym_static] = ACTIONS(272),
    [anon_sym_package] = ACTIONS(272),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_public] = ACTIONS(272),
    [anon_sym_protected] = ACTIONS(272),
    [anon_sym_private] = ACTIONS(272),
    [anon_sym_abstract] = ACTIONS(272),
    [anon_sym_final] = ACTIONS(272),
    [anon_sym_strictfp] = ACTIONS(272),
    [anon_sym_default] = ACTIONS(272),
    [anon_sym_void] = ACTIONS(272),
    [anon_sym_interface] = ACTIONS(272),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(272),
    [sym_comment] = ACTIONS(50),
  },
  [60] = {
    [sym__semicolon] = ACTIONS(276),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(276),
    [anon_sym_RBRACE] = ACTIONS(276),
    [anon_sym_DOT] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(276),
    [anon_sym_AT] = ACTIONS(276),
    [anon_sym_open] = ACTIONS(276),
    [anon_sym_module] = ACTIONS(276),
    [anon_sym_static] = ACTIONS(276),
    [anon_sym_package] = ACTIONS(276),
    [anon_sym_class] = ACTIONS(276),
    [anon_sym_public] = ACTIONS(276),
    [anon_sym_protected] = ACTIONS(276),
    [anon_sym_private] = ACTIONS(276),
    [anon_sym_abstract] = ACTIONS(276),
    [anon_sym_final] = ACTIONS(276),
    [anon_sym_strictfp] = ACTIONS(276),
    [anon_sym_default] = ACTIONS(276),
    [anon_sym_void] = ACTIONS(276),
    [anon_sym_interface] = ACTIONS(276),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(276),
    [sym_comment] = ACTIONS(50),
  },
  [61] = {
    [sym_module_identifier] = STATE(121),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(50),
  },
  [62] = {
    [aux_sym_module_identifier_repeat1] = STATE(123),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_DOT] = ACTIONS(284),
    [sym_comment] = ACTIONS(50),
  },
  [63] = {
    [anon_sym_LBRACE] = ACTIONS(286),
    [sym_comment] = ACTIONS(50),
  },
  [64] = {
    [aux_sym_module_identifier_repeat1] = STATE(126),
    [sym__semicolon] = ACTIONS(288),
    [anon_sym_DOT] = ACTIONS(284),
    [sym_comment] = ACTIONS(50),
  },
  [65] = {
    [sym_package_or_type_name] = STATE(127),
    [sym_identifier] = ACTIONS(290),
    [sym_comment] = ACTIONS(50),
  },
  [66] = {
    [sym__semicolon] = ACTIONS(292),
    [anon_sym_DOT] = ACTIONS(294),
    [sym_comment] = ACTIONS(50),
  },
  [67] = {
    [sym_type_parameters] = STATE(134),
    [sym_superclass] = STATE(135),
    [sym_super_interfaces] = STATE(136),
    [sym_class_body] = STATE(137),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_extends] = ACTIONS(300),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [68] = {
    [sym_type_parameters] = STATE(140),
    [sym_extends_interfaces] = STATE(141),
    [sym_interface_body] = STATE(142),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(304),
    [anon_sym_extends] = ACTIONS(306),
    [sym_comment] = ACTIONS(50),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [sym_decimal_integer_literal] = ACTIONS(310),
    [sym_hex_integer_literal] = ACTIONS(310),
    [sym_octal_integer_literal] = ACTIONS(310),
    [sym_binary_integer_literal] = ACTIONS(310),
    [sym_decimal_floating_point_literal] = ACTIONS(310),
    [sym_hex_floating_point_literal] = ACTIONS(312),
    [anon_sym_true] = ACTIONS(310),
    [anon_sym_false] = ACTIONS(310),
    [anon_sym_SQUOTE] = ACTIONS(308),
    [sym_string_literal] = ACTIONS(308),
    [sym_null_literal] = ACTIONS(310),
    [anon_sym_LPAREN] = ACTIONS(308),
    [anon_sym_BANG] = ACTIONS(308),
    [anon_sym_TILDE] = ACTIONS(308),
    [anon_sym_PLUS_PLUS] = ACTIONS(308),
    [anon_sym_DASH_DASH] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(308),
    [anon_sym_AT] = ACTIONS(308),
    [anon_sym_open] = ACTIONS(310),
    [anon_sym_module] = ACTIONS(310),
    [anon_sym_static] = ACTIONS(310),
    [anon_sym_package] = ACTIONS(310),
    [anon_sym_import] = ACTIONS(310),
    [anon_sym_class] = ACTIONS(310),
    [anon_sym_public] = ACTIONS(310),
    [anon_sym_protected] = ACTIONS(310),
    [anon_sym_private] = ACTIONS(310),
    [anon_sym_abstract] = ACTIONS(310),
    [anon_sym_final] = ACTIONS(310),
    [anon_sym_strictfp] = ACTIONS(310),
    [anon_sym_default] = ACTIONS(310),
    [anon_sym_interface] = ACTIONS(310),
    [sym_identifier] = ACTIONS(312),
    [sym_comment] = ACTIONS(50),
  },
  [70] = {
    [sym__expression] = STATE(143),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(28),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_PLUS_PLUS] = ACTIONS(30),
    [anon_sym_DASH_DASH] = ACTIONS(30),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [71] = {
    [sym__expression] = STATE(144),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(28),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_PLUS_PLUS] = ACTIONS(30),
    [anon_sym_DASH_DASH] = ACTIONS(30),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [72] = {
    [sym__expression] = STATE(145),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(28),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_PLUS_PLUS] = ACTIONS(30),
    [anon_sym_DASH_DASH] = ACTIONS(30),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [73] = {
    [sym__expression] = STATE(146),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(28),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_PLUS_PLUS] = ACTIONS(30),
    [anon_sym_DASH_DASH] = ACTIONS(30),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [74] = {
    [sym__expression] = STATE(147),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(28),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_PLUS_PLUS] = ACTIONS(30),
    [anon_sym_DASH_DASH] = ACTIONS(30),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [75] = {
    [sym__expression] = STATE(148),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(28),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_PLUS_PLUS] = ACTIONS(30),
    [anon_sym_DASH_DASH] = ACTIONS(30),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [76] = {
    [sym__expression] = STATE(151),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(316),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [77] = {
    [sym__semicolon] = ACTIONS(266),
    [anon_sym_EQ] = ACTIONS(268),
    [anon_sym_PLUS_EQ] = ACTIONS(266),
    [anon_sym_DASH_EQ] = ACTIONS(266),
    [anon_sym_STAR_EQ] = ACTIONS(266),
    [anon_sym_SLASH_EQ] = ACTIONS(266),
    [anon_sym_AMP_EQ] = ACTIONS(266),
    [anon_sym_PIPE_EQ] = ACTIONS(266),
    [anon_sym_CARET_EQ] = ACTIONS(266),
    [anon_sym_PERCENT_EQ] = ACTIONS(266),
    [anon_sym_LT_LT_EQ] = ACTIONS(266),
    [anon_sym_GT_GT_EQ] = ACTIONS(266),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(268),
    [anon_sym_LT] = ACTIONS(268),
    [anon_sym_EQ_EQ] = ACTIONS(266),
    [anon_sym_GT_EQ] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(266),
    [anon_sym_BANG_EQ] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(266),
    [anon_sym_PIPE_PIPE] = ACTIONS(266),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(268),
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_AMP] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(268),
    [anon_sym_CARET] = ACTIONS(268),
    [anon_sym_PERCENT] = ACTIONS(268),
    [anon_sym_LT_LT] = ACTIONS(268),
    [anon_sym_GT_GT] = ACTIONS(268),
    [anon_sym_GT_GT_GT] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_COLON] = ACTIONS(266),
    [anon_sym_PLUS_PLUS] = ACTIONS(266),
    [anon_sym_DASH_DASH] = ACTIONS(266),
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_RBRACE] = ACTIONS(266),
    [anon_sym_RBRACK] = ACTIONS(266),
    [sym_comment] = ACTIONS(50),
  },
  [78] = {
    [sym__expression] = STATE(154),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_lambda_body] = STATE(155),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(318),
    [anon_sym_PLUS_PLUS] = ACTIONS(320),
    [anon_sym_DASH_DASH] = ACTIONS(320),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(322),
    [sym_decimal_integer_literal] = ACTIONS(324),
    [sym_hex_integer_literal] = ACTIONS(324),
    [sym_octal_integer_literal] = ACTIONS(324),
    [sym_binary_integer_literal] = ACTIONS(324),
    [sym_decimal_floating_point_literal] = ACTIONS(324),
    [sym_hex_floating_point_literal] = ACTIONS(326),
    [anon_sym_true] = ACTIONS(324),
    [anon_sym_false] = ACTIONS(324),
    [anon_sym_SQUOTE] = ACTIONS(322),
    [sym_string_literal] = ACTIONS(322),
    [sym_null_literal] = ACTIONS(324),
    [anon_sym_LPAREN] = ACTIONS(322),
    [anon_sym_BANG] = ACTIONS(322),
    [anon_sym_TILDE] = ACTIONS(322),
    [anon_sym_PLUS_PLUS] = ACTIONS(322),
    [anon_sym_DASH_DASH] = ACTIONS(322),
    [anon_sym_AT] = ACTIONS(322),
    [anon_sym_open] = ACTIONS(324),
    [anon_sym_module] = ACTIONS(324),
    [anon_sym_static] = ACTIONS(324),
    [anon_sym_package] = ACTIONS(324),
    [anon_sym_import] = ACTIONS(324),
    [anon_sym_class] = ACTIONS(324),
    [anon_sym_public] = ACTIONS(324),
    [anon_sym_protected] = ACTIONS(324),
    [anon_sym_private] = ACTIONS(324),
    [anon_sym_abstract] = ACTIONS(324),
    [anon_sym_final] = ACTIONS(324),
    [anon_sym_strictfp] = ACTIONS(324),
    [anon_sym_default] = ACTIONS(324),
    [anon_sym_interface] = ACTIONS(324),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(50),
  },
  [80] = {
    [sym_package_or_type_name] = STATE(60),
    [sym_identifier] = ACTIONS(290),
    [sym_comment] = ACTIONS(50),
  },
  [81] = {
    [anon_sym_module] = ACTIONS(328),
    [sym_comment] = ACTIONS(50),
  },
  [82] = {
    [sym_identifier] = ACTIONS(330),
    [sym_comment] = ACTIONS(50),
  },
  [83] = {
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_AT] = ACTIONS(332),
    [anon_sym_open] = ACTIONS(332),
    [anon_sym_module] = ACTIONS(332),
    [anon_sym_package] = ACTIONS(332),
    [anon_sym_void] = ACTIONS(332),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(332),
    [sym_comment] = ACTIONS(50),
  },
  [84] = {
    [sym_package_or_type_name] = STATE(60),
    [anon_sym_interface] = ACTIONS(334),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(50),
  },
  [85] = {
    [sym_identifier] = ACTIONS(336),
    [sym_comment] = ACTIONS(50),
  },
  [86] = {
    [sym_identifier] = ACTIONS(338),
    [sym_comment] = ACTIONS(50),
  },
  [87] = {
    [anon_sym_LT] = ACTIONS(340),
    [anon_sym_AT] = ACTIONS(340),
    [anon_sym_static] = ACTIONS(342),
    [anon_sym_class] = ACTIONS(342),
    [anon_sym_public] = ACTIONS(342),
    [anon_sym_protected] = ACTIONS(342),
    [anon_sym_private] = ACTIONS(342),
    [anon_sym_abstract] = ACTIONS(342),
    [anon_sym_final] = ACTIONS(342),
    [anon_sym_strictfp] = ACTIONS(342),
    [anon_sym_default] = ACTIONS(342),
    [anon_sym_interface] = ACTIONS(342),
    [sym_identifier] = ACTIONS(344),
    [sym_comment] = ACTIONS(50),
  },
  [88] = {
    [sym__semicolon] = ACTIONS(346),
    [anon_sym_RPAREN] = ACTIONS(346),
    [anon_sym_COMMA] = ACTIONS(346),
    [anon_sym_RBRACE] = ACTIONS(346),
    [anon_sym_DOT] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(346),
    [anon_sym_COLON_COLON] = ACTIONS(346),
    [sym_comment] = ACTIONS(50),
  },
  [89] = {
    [anon_sym_SQUOTE] = ACTIONS(348),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(348),
    [sym_comment] = ACTIONS(62),
  },
  [90] = {
    [anon_sym_COMMA] = ACTIONS(350),
    [sym_comment] = ACTIONS(50),
  },
  [91] = {
    [anon_sym_RPAREN] = ACTIONS(352),
    [sym_identifier] = ACTIONS(354),
    [sym_comment] = ACTIONS(50),
  },
  [92] = {
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_DOT] = ACTIONS(274),
    [anon_sym_AT] = ACTIONS(272),
    [anon_sym_static] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_abstract] = ACTIONS(274),
    [anon_sym_final] = ACTIONS(274),
    [anon_sym_strictfp] = ACTIONS(274),
    [anon_sym_default] = ACTIONS(274),
    [anon_sym_this] = ACTIONS(274),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(272),
    [sym_identifier] = ACTIONS(356),
    [sym_comment] = ACTIONS(50),
  },
  [93] = {
    [anon_sym_LPAREN] = ACTIONS(358),
    [anon_sym_DOT] = ACTIONS(360),
    [anon_sym_AT] = ACTIONS(276),
    [anon_sym_static] = ACTIONS(362),
    [anon_sym_public] = ACTIONS(362),
    [anon_sym_protected] = ACTIONS(362),
    [anon_sym_private] = ACTIONS(362),
    [anon_sym_abstract] = ACTIONS(362),
    [anon_sym_final] = ACTIONS(362),
    [anon_sym_strictfp] = ACTIONS(362),
    [anon_sym_default] = ACTIONS(362),
    [anon_sym_this] = ACTIONS(362),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(276),
    [sym_identifier] = ACTIONS(364),
    [sym_comment] = ACTIONS(50),
  },
  [94] = {
    [sym_dims] = STATE(99),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [aux_sym_class_or_interface_type_repeat1] = STATE(101),
    [aux_sym_dims_repeat1] = STATE(102),
    [sym__semicolon] = ACTIONS(225),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_throws] = ACTIONS(225),
    [sym_comment] = ACTIONS(50),
  },
  [95] = {
    [anon_sym_RPAREN] = ACTIONS(366),
    [anon_sym_LBRACE] = ACTIONS(366),
    [anon_sym_throws] = ACTIONS(366),
    [sym_comment] = ACTIONS(50),
  },
  [96] = {
    [sym__semicolon] = ACTIONS(368),
    [anon_sym_EQ] = ACTIONS(370),
    [anon_sym_RPAREN] = ACTIONS(368),
    [anon_sym_COMMA] = ACTIONS(368),
    [anon_sym_LBRACE] = ACTIONS(368),
    [anon_sym_throws] = ACTIONS(368),
    [sym_comment] = ACTIONS(50),
  },
  [97] = {
    [anon_sym_this] = ACTIONS(372),
    [sym_comment] = ACTIONS(50),
  },
  [98] = {
    [anon_sym_RBRACK] = ACTIONS(374),
    [sym_comment] = ACTIONS(50),
  },
  [99] = {
    [sym__semicolon] = ACTIONS(376),
    [anon_sym_EQ] = ACTIONS(376),
    [anon_sym_RPAREN] = ACTIONS(376),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_LBRACE] = ACTIONS(376),
    [anon_sym_throws] = ACTIONS(376),
    [sym_comment] = ACTIONS(50),
  },
  [100] = {
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_AT] = ACTIONS(151),
    [sym_identifier] = ACTIONS(233),
    [sym_comment] = ACTIONS(50),
  },
  [101] = {
    [sym__annotation] = STATE(83),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [anon_sym_LBRACK] = ACTIONS(378),
    [anon_sym_AT] = ACTIONS(193),
    [sym_comment] = ACTIONS(50),
  },
  [102] = {
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [aux_sym_class_or_interface_type_repeat1] = STATE(169),
    [sym__semicolon] = ACTIONS(380),
    [anon_sym_EQ] = ACTIONS(380),
    [anon_sym_GT] = ACTIONS(380),
    [anon_sym_RPAREN] = ACTIONS(380),
    [anon_sym_COMMA] = ACTIONS(380),
    [anon_sym_LBRACE] = ACTIONS(380),
    [anon_sym_DOT] = ACTIONS(380),
    [anon_sym_LBRACK] = ACTIONS(378),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_default] = ACTIONS(380),
    [anon_sym_COLON_COLON] = ACTIONS(380),
    [anon_sym_throws] = ACTIONS(380),
    [sym_comment] = ACTIONS(50),
  },
  [103] = {
    [anon_sym_DASH_GT] = ACTIONS(382),
    [sym_comment] = ACTIONS(50),
  },
  [104] = {
    [sym__annotation] = STATE(113),
    [sym_normal_annotation] = STATE(114),
    [sym_marker_annotation] = STATE(114),
    [sym_single_element_annotation] = STATE(114),
    [sym_modifier] = STATE(49),
    [sym_variable_declarator_id] = STATE(50),
    [sym_formal_parameter] = STATE(170),
    [sym_last_formal_parameter] = STATE(171),
    [aux_sym_class_or_interface_type_repeat1] = STATE(172),
    [aux_sym_normal_class_declaration_repeat1] = STATE(55),
    [anon_sym_AT] = ACTIONS(258),
    [anon_sym_static] = ACTIONS(70),
    [anon_sym_public] = ACTIONS(70),
    [anon_sym_protected] = ACTIONS(70),
    [anon_sym_private] = ACTIONS(70),
    [anon_sym_abstract] = ACTIONS(70),
    [anon_sym_final] = ACTIONS(70),
    [anon_sym_strictfp] = ACTIONS(70),
    [anon_sym_default] = ACTIONS(70),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(50),
  },
  [105] = {
    [anon_sym_COMMA] = ACTIONS(384),
    [sym_comment] = ACTIONS(50),
  },
  [106] = {
    [sym_package_or_type_name] = STATE(175),
    [sym_identifier] = ACTIONS(386),
    [sym_comment] = ACTIONS(50),
  },
  [107] = {
    [anon_sym_RPAREN] = ACTIONS(388),
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_LBRACE] = ACTIONS(388),
    [anon_sym_throws] = ACTIONS(388),
    [sym_comment] = ACTIONS(50),
  },
  [108] = {
    [sym_variable_declarator] = STATE(176),
    [sym_variable_declarator_id] = STATE(96),
    [sym_identifier] = ACTIONS(223),
    [sym_comment] = ACTIONS(50),
  },
  [109] = {
    [anon_sym_DOT] = ACTIONS(390),
    [sym_comment] = ACTIONS(50),
  },
  [110] = {
    [anon_sym_AT] = ACTIONS(332),
    [anon_sym_this] = ACTIONS(392),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(332),
    [sym_identifier] = ACTIONS(394),
    [sym_comment] = ACTIONS(50),
  },
  [111] = {
    [anon_sym_AT] = ACTIONS(153),
    [anon_sym_this] = ACTIONS(238),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(153),
    [sym_identifier] = ACTIONS(240),
    [sym_comment] = ACTIONS(50),
  },
  [112] = {
    [sym_package_or_type_name] = STATE(179),
    [sym_identifier] = ACTIONS(396),
    [sym_comment] = ACTIONS(50),
  },
  [113] = {
    [anon_sym_AT] = ACTIONS(148),
    [anon_sym_static] = ACTIONS(90),
    [anon_sym_public] = ACTIONS(90),
    [anon_sym_protected] = ACTIONS(90),
    [anon_sym_private] = ACTIONS(90),
    [anon_sym_abstract] = ACTIONS(90),
    [anon_sym_final] = ACTIONS(90),
    [anon_sym_strictfp] = ACTIONS(90),
    [anon_sym_default] = ACTIONS(90),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(148),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(50),
  },
  [114] = {
    [anon_sym_AT] = ACTIONS(153),
    [anon_sym_static] = ACTIONS(238),
    [anon_sym_public] = ACTIONS(238),
    [anon_sym_protected] = ACTIONS(238),
    [anon_sym_private] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(238),
    [anon_sym_final] = ACTIONS(238),
    [anon_sym_strictfp] = ACTIONS(238),
    [anon_sym_default] = ACTIONS(238),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(153),
    [sym_identifier] = ACTIONS(240),
    [sym_comment] = ACTIONS(50),
  },
  [115] = {
    [anon_sym_AT] = ACTIONS(340),
    [anon_sym_static] = ACTIONS(342),
    [anon_sym_public] = ACTIONS(342),
    [anon_sym_protected] = ACTIONS(342),
    [anon_sym_private] = ACTIONS(342),
    [anon_sym_abstract] = ACTIONS(342),
    [anon_sym_final] = ACTIONS(342),
    [anon_sym_strictfp] = ACTIONS(342),
    [anon_sym_default] = ACTIONS(342),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(340),
    [sym_identifier] = ACTIONS(344),
    [sym_comment] = ACTIONS(50),
  },
  [116] = {
    [anon_sym_RPAREN] = ACTIONS(398),
    [anon_sym_COMMA] = ACTIONS(398),
    [anon_sym_LBRACE] = ACTIONS(398),
    [anon_sym_throws] = ACTIONS(398),
    [sym_comment] = ACTIONS(50),
  },
  [117] = {
    [sym__annotation] = STATE(83),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(400),
    [sym_comment] = ACTIONS(50),
  },
  [118] = {
    [sym_annotation_type_body] = STATE(182),
    [anon_sym_LBRACE] = ACTIONS(402),
    [sym_comment] = ACTIONS(50),
  },
  [119] = {
    [sym__literal] = STATE(185),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(186),
    [sym_element_value_pair] = STATE(187),
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
    [anon_sym_RPAREN] = ACTIONS(404),
    [sym_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(50),
  },
  [120] = {
    [sym_identifier] = ACTIONS(408),
    [sym_comment] = ACTIONS(50),
  },
  [121] = {
    [anon_sym_LBRACE] = ACTIONS(410),
    [sym_comment] = ACTIONS(50),
  },
  [122] = {
    [sym_identifier] = ACTIONS(412),
    [sym_comment] = ACTIONS(50),
  },
  [123] = {
    [anon_sym_LBRACE] = ACTIONS(414),
    [anon_sym_DOT] = ACTIONS(416),
    [sym_comment] = ACTIONS(50),
  },
  [124] = {
    [sym_module_directive] = STATE(197),
    [aux_sym_module_declaration_repeat1] = STATE(198),
    [anon_sym_RBRACE] = ACTIONS(418),
    [anon_sym_requires] = ACTIONS(420),
    [anon_sym_exports] = ACTIONS(422),
    [anon_sym_opens] = ACTIONS(422),
    [anon_sym_uses] = ACTIONS(424),
    [anon_sym_provides] = ACTIONS(426),
    [sym_comment] = ACTIONS(50),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(428),
    [sym_decimal_integer_literal] = ACTIONS(430),
    [sym_hex_integer_literal] = ACTIONS(430),
    [sym_octal_integer_literal] = ACTIONS(430),
    [sym_binary_integer_literal] = ACTIONS(430),
    [sym_decimal_floating_point_literal] = ACTIONS(430),
    [sym_hex_floating_point_literal] = ACTIONS(432),
    [anon_sym_true] = ACTIONS(430),
    [anon_sym_false] = ACTIONS(430),
    [anon_sym_SQUOTE] = ACTIONS(428),
    [sym_string_literal] = ACTIONS(428),
    [sym_null_literal] = ACTIONS(430),
    [anon_sym_LPAREN] = ACTIONS(428),
    [anon_sym_BANG] = ACTIONS(428),
    [anon_sym_TILDE] = ACTIONS(428),
    [anon_sym_PLUS_PLUS] = ACTIONS(428),
    [anon_sym_DASH_DASH] = ACTIONS(428),
    [anon_sym_RBRACE] = ACTIONS(428),
    [anon_sym_AT] = ACTIONS(428),
    [anon_sym_open] = ACTIONS(430),
    [anon_sym_module] = ACTIONS(430),
    [anon_sym_static] = ACTIONS(430),
    [anon_sym_package] = ACTIONS(430),
    [anon_sym_import] = ACTIONS(430),
    [anon_sym_class] = ACTIONS(430),
    [anon_sym_public] = ACTIONS(430),
    [anon_sym_protected] = ACTIONS(430),
    [anon_sym_private] = ACTIONS(430),
    [anon_sym_abstract] = ACTIONS(430),
    [anon_sym_final] = ACTIONS(430),
    [anon_sym_strictfp] = ACTIONS(430),
    [anon_sym_default] = ACTIONS(430),
    [anon_sym_interface] = ACTIONS(430),
    [sym_identifier] = ACTIONS(432),
    [sym_comment] = ACTIONS(50),
  },
  [126] = {
    [sym__semicolon] = ACTIONS(434),
    [anon_sym_DOT] = ACTIONS(416),
    [sym_comment] = ACTIONS(50),
  },
  [127] = {
    [anon_sym_DOT] = ACTIONS(436),
    [sym_comment] = ACTIONS(50),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(438),
    [sym_decimal_integer_literal] = ACTIONS(440),
    [sym_hex_integer_literal] = ACTIONS(440),
    [sym_octal_integer_literal] = ACTIONS(440),
    [sym_binary_integer_literal] = ACTIONS(440),
    [sym_decimal_floating_point_literal] = ACTIONS(440),
    [sym_hex_floating_point_literal] = ACTIONS(442),
    [anon_sym_true] = ACTIONS(440),
    [anon_sym_false] = ACTIONS(440),
    [anon_sym_SQUOTE] = ACTIONS(438),
    [sym_string_literal] = ACTIONS(438),
    [sym_null_literal] = ACTIONS(440),
    [anon_sym_LPAREN] = ACTIONS(438),
    [anon_sym_BANG] = ACTIONS(438),
    [anon_sym_TILDE] = ACTIONS(438),
    [anon_sym_PLUS_PLUS] = ACTIONS(438),
    [anon_sym_DASH_DASH] = ACTIONS(438),
    [anon_sym_RBRACE] = ACTIONS(438),
    [anon_sym_AT] = ACTIONS(438),
    [anon_sym_open] = ACTIONS(440),
    [anon_sym_module] = ACTIONS(440),
    [anon_sym_static] = ACTIONS(440),
    [anon_sym_package] = ACTIONS(440),
    [anon_sym_import] = ACTIONS(440),
    [anon_sym_class] = ACTIONS(440),
    [anon_sym_public] = ACTIONS(440),
    [anon_sym_protected] = ACTIONS(440),
    [anon_sym_private] = ACTIONS(440),
    [anon_sym_abstract] = ACTIONS(440),
    [anon_sym_final] = ACTIONS(440),
    [anon_sym_strictfp] = ACTIONS(440),
    [anon_sym_default] = ACTIONS(440),
    [anon_sym_interface] = ACTIONS(440),
    [sym_identifier] = ACTIONS(442),
    [sym_comment] = ACTIONS(50),
  },
  [129] = {
    [anon_sym_STAR] = ACTIONS(444),
    [sym_identifier] = ACTIONS(408),
    [sym_comment] = ACTIONS(50),
  },
  [130] = {
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [sym_type_parameter_list] = STATE(205),
    [sym_type_parameter] = STATE(206),
    [aux_sym_class_or_interface_type_repeat1] = STATE(207),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(448),
    [sym_comment] = ACTIONS(50),
  },
  [131] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(216),
    [sym_marker_annotation] = STATE(216),
    [sym_single_element_annotation] = STATE(216),
    [sym_class_declaration] = STATE(208),
    [sym_normal_class_declaration] = STATE(217),
    [sym_modifier] = STATE(32),
    [sym_type_parameters] = STATE(218),
    [sym_class_body_declaration] = STATE(219),
    [sym_constructor_declaration] = STATE(220),
    [sym_constructor_declarator] = STATE(221),
    [sym_class_member_declaration] = STATE(220),
    [sym_interface_declaration] = STATE(208),
    [sym_annotation_type_declaration] = STATE(222),
    [sym_normal_interface_declaration] = STATE(222),
    [sym_block] = STATE(220),
    [aux_sym_normal_class_declaration_repeat1] = STATE(223),
    [aux_sym_class_body_repeat1] = STATE(224),
    [sym__semicolon] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(454),
    [anon_sym_RBRACE] = ACTIONS(456),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(460),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(462),
    [sym_identifier] = ACTIONS(464),
    [sym_comment] = ACTIONS(50),
  },
  [132] = {
    [sym_class_or_interface_type] = STATE(226),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [aux_sym_class_or_interface_type_repeat1] = STATE(227),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(50),
  },
  [133] = {
    [sym_class_or_interface_type] = STATE(228),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [sym_interface_type_list] = STATE(229),
    [aux_sym_class_or_interface_type_repeat1] = STATE(227),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(50),
  },
  [134] = {
    [sym_superclass] = STATE(230),
    [sym_super_interfaces] = STATE(231),
    [sym_class_body] = STATE(232),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_extends] = ACTIONS(300),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [135] = {
    [sym_super_interfaces] = STATE(231),
    [sym_class_body] = STATE(232),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [136] = {
    [sym_class_body] = STATE(232),
    [anon_sym_LBRACE] = ACTIONS(298),
    [sym_comment] = ACTIONS(50),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(468),
    [sym_decimal_integer_literal] = ACTIONS(470),
    [sym_hex_integer_literal] = ACTIONS(470),
    [sym_octal_integer_literal] = ACTIONS(470),
    [sym_binary_integer_literal] = ACTIONS(470),
    [sym_decimal_floating_point_literal] = ACTIONS(470),
    [sym_hex_floating_point_literal] = ACTIONS(472),
    [anon_sym_true] = ACTIONS(470),
    [anon_sym_false] = ACTIONS(470),
    [anon_sym_SQUOTE] = ACTIONS(468),
    [sym_string_literal] = ACTIONS(468),
    [sym_null_literal] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_BANG] = ACTIONS(468),
    [anon_sym_TILDE] = ACTIONS(468),
    [anon_sym_PLUS_PLUS] = ACTIONS(468),
    [anon_sym_DASH_DASH] = ACTIONS(468),
    [anon_sym_RBRACE] = ACTIONS(468),
    [anon_sym_AT] = ACTIONS(468),
    [anon_sym_open] = ACTIONS(470),
    [anon_sym_module] = ACTIONS(470),
    [anon_sym_static] = ACTIONS(470),
    [anon_sym_package] = ACTIONS(470),
    [anon_sym_import] = ACTIONS(470),
    [anon_sym_class] = ACTIONS(470),
    [anon_sym_public] = ACTIONS(470),
    [anon_sym_protected] = ACTIONS(470),
    [anon_sym_private] = ACTIONS(470),
    [anon_sym_abstract] = ACTIONS(470),
    [anon_sym_final] = ACTIONS(470),
    [anon_sym_strictfp] = ACTIONS(470),
    [anon_sym_default] = ACTIONS(470),
    [anon_sym_interface] = ACTIONS(470),
    [sym_identifier] = ACTIONS(472),
    [sym_comment] = ACTIONS(50),
  },
  [138] = {
    [sym__annotation] = STATE(236),
    [sym_normal_annotation] = STATE(240),
    [sym_marker_annotation] = STATE(240),
    [sym_single_element_annotation] = STATE(240),
    [sym_class_declaration] = STATE(233),
    [sym_normal_class_declaration] = STATE(241),
    [sym_modifier] = STATE(242),
    [sym_type_parameters] = STATE(243),
    [sym_interface_declaration] = STATE(233),
    [sym_annotation_type_declaration] = STATE(244),
    [sym_normal_interface_declaration] = STATE(244),
    [sym_interface_member_declaration] = STATE(245),
    [sym_constant_declaration] = STATE(233),
    [sym_variable_declarator_list] = STATE(246),
    [sym_variable_declarator] = STATE(247),
    [sym_variable_declarator_id] = STATE(96),
    [sym_interface_method_declaration] = STATE(233),
    [sym_method_header] = STATE(248),
    [sym_result] = STATE(249),
    [aux_sym_normal_class_declaration_repeat1] = STATE(250),
    [aux_sym_interface_body_repeat1] = STATE(251),
    [sym__semicolon] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_RBRACE] = ACTIONS(476),
    [anon_sym_AT] = ACTIONS(478),
    [anon_sym_static] = ACTIONS(480),
    [anon_sym_class] = ACTIONS(482),
    [anon_sym_public] = ACTIONS(480),
    [anon_sym_protected] = ACTIONS(480),
    [anon_sym_private] = ACTIONS(480),
    [anon_sym_abstract] = ACTIONS(480),
    [anon_sym_final] = ACTIONS(480),
    [anon_sym_strictfp] = ACTIONS(480),
    [anon_sym_default] = ACTIONS(480),
    [anon_sym_void] = ACTIONS(484),
    [anon_sym_interface] = ACTIONS(486),
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(50),
  },
  [139] = {
    [sym_class_or_interface_type] = STATE(228),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [sym_interface_type_list] = STATE(252),
    [aux_sym_class_or_interface_type_repeat1] = STATE(227),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(50),
  },
  [140] = {
    [sym_extends_interfaces] = STATE(253),
    [sym_interface_body] = STATE(254),
    [anon_sym_LBRACE] = ACTIONS(304),
    [anon_sym_extends] = ACTIONS(306),
    [sym_comment] = ACTIONS(50),
  },
  [141] = {
    [sym_interface_body] = STATE(254),
    [anon_sym_LBRACE] = ACTIONS(304),
    [sym_comment] = ACTIONS(50),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(488),
    [sym_decimal_integer_literal] = ACTIONS(490),
    [sym_hex_integer_literal] = ACTIONS(490),
    [sym_octal_integer_literal] = ACTIONS(490),
    [sym_binary_integer_literal] = ACTIONS(490),
    [sym_decimal_floating_point_literal] = ACTIONS(490),
    [sym_hex_floating_point_literal] = ACTIONS(492),
    [anon_sym_true] = ACTIONS(490),
    [anon_sym_false] = ACTIONS(490),
    [anon_sym_SQUOTE] = ACTIONS(488),
    [sym_string_literal] = ACTIONS(488),
    [sym_null_literal] = ACTIONS(490),
    [anon_sym_LPAREN] = ACTIONS(488),
    [anon_sym_BANG] = ACTIONS(488),
    [anon_sym_TILDE] = ACTIONS(488),
    [anon_sym_PLUS_PLUS] = ACTIONS(488),
    [anon_sym_DASH_DASH] = ACTIONS(488),
    [anon_sym_RBRACE] = ACTIONS(488),
    [anon_sym_AT] = ACTIONS(488),
    [anon_sym_open] = ACTIONS(490),
    [anon_sym_module] = ACTIONS(490),
    [anon_sym_static] = ACTIONS(490),
    [anon_sym_package] = ACTIONS(490),
    [anon_sym_import] = ACTIONS(490),
    [anon_sym_class] = ACTIONS(490),
    [anon_sym_public] = ACTIONS(490),
    [anon_sym_protected] = ACTIONS(490),
    [anon_sym_private] = ACTIONS(490),
    [anon_sym_abstract] = ACTIONS(490),
    [anon_sym_final] = ACTIONS(490),
    [anon_sym_strictfp] = ACTIONS(490),
    [anon_sym_default] = ACTIONS(490),
    [anon_sym_interface] = ACTIONS(490),
    [sym_identifier] = ACTIONS(492),
    [sym_comment] = ACTIONS(50),
  },
  [143] = {
    [sym__semicolon] = ACTIONS(494),
    [anon_sym_EQ] = ACTIONS(496),
    [anon_sym_PLUS_EQ] = ACTIONS(494),
    [anon_sym_DASH_EQ] = ACTIONS(494),
    [anon_sym_STAR_EQ] = ACTIONS(494),
    [anon_sym_SLASH_EQ] = ACTIONS(494),
    [anon_sym_AMP_EQ] = ACTIONS(494),
    [anon_sym_PIPE_EQ] = ACTIONS(494),
    [anon_sym_CARET_EQ] = ACTIONS(494),
    [anon_sym_PERCENT_EQ] = ACTIONS(494),
    [anon_sym_LT_LT_EQ] = ACTIONS(494),
    [anon_sym_GT_GT_EQ] = ACTIONS(494),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(494),
    [anon_sym_GT] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(118),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_AMP_AMP] = ACTIONS(122),
    [anon_sym_PIPE_PIPE] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_CARET] = ACTIONS(132),
    [anon_sym_PERCENT] = ACTIONS(128),
    [anon_sym_LT_LT] = ACTIONS(128),
    [anon_sym_GT_GT] = ACTIONS(128),
    [anon_sym_GT_GT_GT] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(134),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [144] = {
    [sym__semicolon] = ACTIONS(498),
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(500),
    [anon_sym_LT] = ACTIONS(500),
    [anon_sym_EQ_EQ] = ACTIONS(498),
    [anon_sym_GT_EQ] = ACTIONS(498),
    [anon_sym_LT_EQ] = ACTIONS(498),
    [anon_sym_BANG_EQ] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(128),
    [anon_sym_LT_LT] = ACTIONS(128),
    [anon_sym_GT_GT] = ACTIONS(128),
    [anon_sym_GT_GT_GT] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [145] = {
    [sym__semicolon] = ACTIONS(498),
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(118),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(128),
    [anon_sym_LT_LT] = ACTIONS(128),
    [anon_sym_GT_GT] = ACTIONS(128),
    [anon_sym_GT_GT_GT] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [146] = {
    [sym__semicolon] = ACTIONS(498),
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(118),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_AMP_AMP] = ACTIONS(122),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(128),
    [anon_sym_LT_LT] = ACTIONS(128),
    [anon_sym_GT_GT] = ACTIONS(128),
    [anon_sym_GT_GT_GT] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [147] = {
    [sym__semicolon] = ACTIONS(498),
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(118),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(128),
    [anon_sym_LT_LT] = ACTIONS(128),
    [anon_sym_GT_GT] = ACTIONS(128),
    [anon_sym_GT_GT_GT] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [148] = {
    [sym__semicolon] = ACTIONS(498),
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(500),
    [anon_sym_LT] = ACTIONS(500),
    [anon_sym_EQ_EQ] = ACTIONS(498),
    [anon_sym_GT_EQ] = ACTIONS(498),
    [anon_sym_LT_EQ] = ACTIONS(498),
    [anon_sym_BANG_EQ] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_SLASH] = ACTIONS(500),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(500),
    [anon_sym_LT_LT] = ACTIONS(500),
    [anon_sym_GT_GT] = ACTIONS(500),
    [anon_sym_GT_GT_GT] = ACTIONS(500),
    [anon_sym_RPAREN] = ACTIONS(498),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_COLON] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(498),
    [anon_sym_RBRACE] = ACTIONS(498),
    [anon_sym_RBRACK] = ACTIONS(498),
    [sym_comment] = ACTIONS(50),
  },
  [149] = {
    [sym__expression] = STATE(56),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(316),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [150] = {
    [sym__expression] = STATE(57),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(316),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [151] = {
    [anon_sym_EQ] = ACTIONS(502),
    [anon_sym_PLUS_EQ] = ACTIONS(504),
    [anon_sym_DASH_EQ] = ACTIONS(504),
    [anon_sym_STAR_EQ] = ACTIONS(504),
    [anon_sym_SLASH_EQ] = ACTIONS(504),
    [anon_sym_AMP_EQ] = ACTIONS(504),
    [anon_sym_PIPE_EQ] = ACTIONS(504),
    [anon_sym_CARET_EQ] = ACTIONS(504),
    [anon_sym_PERCENT_EQ] = ACTIONS(504),
    [anon_sym_LT_LT_EQ] = ACTIONS(504),
    [anon_sym_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_GT] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [anon_sym_BANG_EQ] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(510),
    [anon_sym_PIPE_PIPE] = ACTIONS(512),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_LT_LT] = ACTIONS(516),
    [anon_sym_GT_GT] = ACTIONS(516),
    [anon_sym_GT_GT_GT] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(522),
    [anon_sym_COLON] = ACTIONS(524),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [152] = {
    [sym__expression] = STATE(56),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(318),
    [anon_sym_PLUS_PLUS] = ACTIONS(320),
    [anon_sym_DASH_DASH] = ACTIONS(320),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [153] = {
    [sym__expression] = STATE(57),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(318),
    [anon_sym_PLUS_PLUS] = ACTIONS(320),
    [anon_sym_DASH_DASH] = ACTIONS(320),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [154] = {
    [sym_block] = STATE(270),
    [anon_sym_EQ] = ACTIONS(526),
    [anon_sym_PLUS_EQ] = ACTIONS(528),
    [anon_sym_DASH_EQ] = ACTIONS(528),
    [anon_sym_STAR_EQ] = ACTIONS(528),
    [anon_sym_SLASH_EQ] = ACTIONS(528),
    [anon_sym_AMP_EQ] = ACTIONS(528),
    [anon_sym_PIPE_EQ] = ACTIONS(528),
    [anon_sym_CARET_EQ] = ACTIONS(528),
    [anon_sym_PERCENT_EQ] = ACTIONS(528),
    [anon_sym_LT_LT_EQ] = ACTIONS(528),
    [anon_sym_GT_GT_EQ] = ACTIONS(528),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [anon_sym_BANG_EQ] = ACTIONS(532),
    [anon_sym_AMP_AMP] = ACTIONS(534),
    [anon_sym_PIPE_PIPE] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_STAR] = ACTIONS(540),
    [anon_sym_SLASH] = ACTIONS(540),
    [anon_sym_AMP] = ACTIONS(542),
    [anon_sym_PIPE] = ACTIONS(544),
    [anon_sym_CARET] = ACTIONS(544),
    [anon_sym_PERCENT] = ACTIONS(540),
    [anon_sym_LT_LT] = ACTIONS(540),
    [anon_sym_GT_GT] = ACTIONS(540),
    [anon_sym_GT_GT_GT] = ACTIONS(540),
    [anon_sym_QMARK] = ACTIONS(546),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(454),
    [sym_comment] = ACTIONS(50),
  },
  [155] = {
    [sym__semicolon] = ACTIONS(548),
    [anon_sym_EQ] = ACTIONS(550),
    [anon_sym_PLUS_EQ] = ACTIONS(548),
    [anon_sym_DASH_EQ] = ACTIONS(548),
    [anon_sym_STAR_EQ] = ACTIONS(548),
    [anon_sym_SLASH_EQ] = ACTIONS(548),
    [anon_sym_AMP_EQ] = ACTIONS(548),
    [anon_sym_PIPE_EQ] = ACTIONS(548),
    [anon_sym_CARET_EQ] = ACTIONS(548),
    [anon_sym_PERCENT_EQ] = ACTIONS(548),
    [anon_sym_LT_LT_EQ] = ACTIONS(548),
    [anon_sym_GT_GT_EQ] = ACTIONS(548),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(548),
    [anon_sym_GT] = ACTIONS(550),
    [anon_sym_LT] = ACTIONS(550),
    [anon_sym_EQ_EQ] = ACTIONS(548),
    [anon_sym_GT_EQ] = ACTIONS(548),
    [anon_sym_LT_EQ] = ACTIONS(548),
    [anon_sym_BANG_EQ] = ACTIONS(548),
    [anon_sym_AMP_AMP] = ACTIONS(548),
    [anon_sym_PIPE_PIPE] = ACTIONS(548),
    [anon_sym_PLUS] = ACTIONS(550),
    [anon_sym_DASH] = ACTIONS(550),
    [anon_sym_STAR] = ACTIONS(550),
    [anon_sym_SLASH] = ACTIONS(550),
    [anon_sym_AMP] = ACTIONS(550),
    [anon_sym_PIPE] = ACTIONS(550),
    [anon_sym_CARET] = ACTIONS(550),
    [anon_sym_PERCENT] = ACTIONS(550),
    [anon_sym_LT_LT] = ACTIONS(550),
    [anon_sym_GT_GT] = ACTIONS(550),
    [anon_sym_GT_GT_GT] = ACTIONS(550),
    [anon_sym_RPAREN] = ACTIONS(548),
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_QMARK] = ACTIONS(548),
    [anon_sym_COLON] = ACTIONS(548),
    [anon_sym_PLUS_PLUS] = ACTIONS(548),
    [anon_sym_DASH_DASH] = ACTIONS(548),
    [anon_sym_LBRACE] = ACTIONS(548),
    [anon_sym_RBRACE] = ACTIONS(548),
    [anon_sym_RBRACK] = ACTIONS(548),
    [sym_comment] = ACTIONS(50),
  },
  [156] = {
    [sym_module_identifier] = STATE(271),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(50),
  },
  [157] = {
    [aux_sym_module_identifier_repeat1] = STATE(272),
    [sym__semicolon] = ACTIONS(434),
    [anon_sym_DOT] = ACTIONS(284),
    [sym_comment] = ACTIONS(50),
  },
  [158] = {
    [sym_identifier] = ACTIONS(552),
    [sym_comment] = ACTIONS(50),
  },
  [159] = {
    [sym_type_parameters] = STATE(274),
    [sym_superclass] = STATE(230),
    [sym_super_interfaces] = STATE(231),
    [sym_class_body] = STATE(232),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_extends] = ACTIONS(300),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [160] = {
    [sym_type_parameters] = STATE(275),
    [sym_extends_interfaces] = STATE(253),
    [sym_interface_body] = STATE(254),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(304),
    [anon_sym_extends] = ACTIONS(306),
    [sym_comment] = ACTIONS(50),
  },
  [161] = {
    [anon_sym_RPAREN] = ACTIONS(554),
    [sym_identifier] = ACTIONS(556),
    [sym_comment] = ACTIONS(50),
  },
  [162] = {
    [anon_sym_COMMA] = ACTIONS(558),
    [sym_comment] = ACTIONS(50),
  },
  [163] = {
    [sym__literal] = STATE(279),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(280),
    [sym_element_value_pair] = STATE(187),
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
    [anon_sym_RPAREN] = ACTIONS(560),
    [sym_identifier] = ACTIONS(562),
    [sym_comment] = ACTIONS(50),
  },
  [164] = {
    [sym_identifier] = ACTIONS(564),
    [sym_comment] = ACTIONS(50),
  },
  [165] = {
    [sym__semicolon] = ACTIONS(566),
    [anon_sym_RPAREN] = ACTIONS(566),
    [anon_sym_COMMA] = ACTIONS(566),
    [anon_sym_LBRACE] = ACTIONS(566),
    [anon_sym_throws] = ACTIONS(566),
    [sym_comment] = ACTIONS(50),
  },
  [166] = {
    [anon_sym_RPAREN] = ACTIONS(568),
    [anon_sym_COMMA] = ACTIONS(568),
    [anon_sym_LBRACE] = ACTIONS(568),
    [anon_sym_throws] = ACTIONS(568),
    [sym_comment] = ACTIONS(50),
  },
  [167] = {
    [sym__semicolon] = ACTIONS(570),
    [anon_sym_EQ] = ACTIONS(570),
    [anon_sym_GT] = ACTIONS(570),
    [anon_sym_RPAREN] = ACTIONS(570),
    [anon_sym_COMMA] = ACTIONS(570),
    [anon_sym_LBRACE] = ACTIONS(570),
    [anon_sym_DOT] = ACTIONS(570),
    [anon_sym_LBRACK] = ACTIONS(570),
    [anon_sym_AT] = ACTIONS(570),
    [anon_sym_default] = ACTIONS(570),
    [anon_sym_COLON_COLON] = ACTIONS(570),
    [anon_sym_throws] = ACTIONS(570),
    [sym_comment] = ACTIONS(50),
  },
  [168] = {
    [anon_sym_RBRACK] = ACTIONS(572),
    [sym_comment] = ACTIONS(50),
  },
  [169] = {
    [sym__annotation] = STATE(83),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [anon_sym_LBRACK] = ACTIONS(574),
    [anon_sym_AT] = ACTIONS(193),
    [sym_comment] = ACTIONS(50),
  },
  [170] = {
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(576),
    [anon_sym_LBRACE] = ACTIONS(244),
    [anon_sym_throws] = ACTIONS(244),
    [sym_comment] = ACTIONS(50),
  },
  [171] = {
    [anon_sym_RPAREN] = ACTIONS(578),
    [anon_sym_LBRACE] = ACTIONS(578),
    [anon_sym_throws] = ACTIONS(578),
    [sym_comment] = ACTIONS(50),
  },
  [172] = {
    [sym__annotation] = STATE(83),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(254),
    [sym_comment] = ACTIONS(50),
  },
  [173] = {
    [sym__annotation] = STATE(113),
    [sym_normal_annotation] = STATE(114),
    [sym_marker_annotation] = STATE(114),
    [sym_single_element_annotation] = STATE(114),
    [sym_modifier] = STATE(49),
    [sym_variable_declarator_id] = STATE(50),
    [sym_formal_parameter] = STATE(284),
    [sym_last_formal_parameter] = STATE(285),
    [aux_sym_class_or_interface_type_repeat1] = STATE(172),
    [aux_sym_normal_class_declaration_repeat1] = STATE(55),
    [anon_sym_AT] = ACTIONS(258),
    [anon_sym_static] = ACTIONS(70),
    [anon_sym_public] = ACTIONS(70),
    [anon_sym_protected] = ACTIONS(70),
    [anon_sym_private] = ACTIONS(70),
    [anon_sym_abstract] = ACTIONS(70),
    [anon_sym_final] = ACTIONS(70),
    [anon_sym_strictfp] = ACTIONS(70),
    [anon_sym_default] = ACTIONS(70),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(50),
  },
  [174] = {
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_DOT] = ACTIONS(274),
    [anon_sym_AT] = ACTIONS(272),
    [anon_sym_this] = ACTIONS(274),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(272),
    [sym_identifier] = ACTIONS(356),
    [sym_comment] = ACTIONS(50),
  },
  [175] = {
    [anon_sym_LPAREN] = ACTIONS(580),
    [anon_sym_DOT] = ACTIONS(582),
    [anon_sym_AT] = ACTIONS(276),
    [anon_sym_this] = ACTIONS(362),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(276),
    [sym_identifier] = ACTIONS(364),
    [sym_comment] = ACTIONS(50),
  },
  [176] = {
    [anon_sym_RPAREN] = ACTIONS(584),
    [anon_sym_LBRACE] = ACTIONS(584),
    [anon_sym_throws] = ACTIONS(584),
    [sym_comment] = ACTIONS(50),
  },
  [177] = {
    [anon_sym_this] = ACTIONS(586),
    [sym_comment] = ACTIONS(50),
  },
  [178] = {
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_DOT] = ACTIONS(274),
    [anon_sym_AT] = ACTIONS(272),
    [anon_sym_static] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_abstract] = ACTIONS(274),
    [anon_sym_final] = ACTIONS(274),
    [anon_sym_strictfp] = ACTIONS(274),
    [anon_sym_default] = ACTIONS(274),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(272),
    [sym_identifier] = ACTIONS(356),
    [sym_comment] = ACTIONS(50),
  },
  [179] = {
    [anon_sym_LPAREN] = ACTIONS(588),
    [anon_sym_DOT] = ACTIONS(590),
    [anon_sym_AT] = ACTIONS(276),
    [anon_sym_static] = ACTIONS(362),
    [anon_sym_public] = ACTIONS(362),
    [anon_sym_protected] = ACTIONS(362),
    [anon_sym_private] = ACTIONS(362),
    [anon_sym_abstract] = ACTIONS(362),
    [anon_sym_final] = ACTIONS(362),
    [anon_sym_strictfp] = ACTIONS(362),
    [anon_sym_default] = ACTIONS(362),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(276),
    [sym_identifier] = ACTIONS(364),
    [sym_comment] = ACTIONS(50),
  },
  [180] = {
    [sym_variable_declarator] = STATE(291),
    [sym_variable_declarator_id] = STATE(96),
    [sym_identifier] = ACTIONS(223),
    [sym_comment] = ACTIONS(50),
  },
  [181] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(216),
    [sym_marker_annotation] = STATE(216),
    [sym_single_element_annotation] = STATE(216),
    [sym_class_declaration] = STATE(294),
    [sym_normal_class_declaration] = STATE(217),
    [sym_modifier] = STATE(32),
    [sym_interface_declaration] = STATE(294),
    [sym_annotation_type_declaration] = STATE(222),
    [sym_annotation_type_member_declaration] = STATE(295),
    [sym_annotation_type_element_declaration] = STATE(294),
    [sym_normal_interface_declaration] = STATE(222),
    [sym_constant_declaration] = STATE(294),
    [sym_variable_declarator_list] = STATE(296),
    [sym_variable_declarator] = STATE(247),
    [sym_variable_declarator_id] = STATE(96),
    [aux_sym_normal_class_declaration_repeat1] = STATE(297),
    [aux_sym_annotation_type_body_repeat1] = STATE(298),
    [anon_sym_RBRACE] = ACTIONS(592),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(460),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(462),
    [sym_identifier] = ACTIONS(594),
    [sym_comment] = ACTIONS(50),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(596),
    [sym_decimal_integer_literal] = ACTIONS(598),
    [sym_hex_integer_literal] = ACTIONS(598),
    [sym_octal_integer_literal] = ACTIONS(598),
    [sym_binary_integer_literal] = ACTIONS(598),
    [sym_decimal_floating_point_literal] = ACTIONS(598),
    [sym_hex_floating_point_literal] = ACTIONS(600),
    [anon_sym_true] = ACTIONS(598),
    [anon_sym_false] = ACTIONS(598),
    [anon_sym_SQUOTE] = ACTIONS(596),
    [sym_string_literal] = ACTIONS(596),
    [sym_null_literal] = ACTIONS(598),
    [anon_sym_LPAREN] = ACTIONS(596),
    [anon_sym_BANG] = ACTIONS(596),
    [anon_sym_TILDE] = ACTIONS(596),
    [anon_sym_PLUS_PLUS] = ACTIONS(596),
    [anon_sym_DASH_DASH] = ACTIONS(596),
    [anon_sym_RBRACE] = ACTIONS(596),
    [anon_sym_AT] = ACTIONS(596),
    [anon_sym_open] = ACTIONS(598),
    [anon_sym_module] = ACTIONS(598),
    [anon_sym_static] = ACTIONS(598),
    [anon_sym_package] = ACTIONS(598),
    [anon_sym_import] = ACTIONS(598),
    [anon_sym_class] = ACTIONS(598),
    [anon_sym_public] = ACTIONS(598),
    [anon_sym_protected] = ACTIONS(598),
    [anon_sym_private] = ACTIONS(598),
    [anon_sym_abstract] = ACTIONS(598),
    [anon_sym_final] = ACTIONS(598),
    [anon_sym_strictfp] = ACTIONS(598),
    [anon_sym_default] = ACTIONS(598),
    [anon_sym_interface] = ACTIONS(598),
    [sym_identifier] = ACTIONS(600),
    [sym_comment] = ACTIONS(50),
  },
  [183] = {
    [sym__semicolon] = ACTIONS(602),
    [anon_sym_RPAREN] = ACTIONS(602),
    [anon_sym_COMMA] = ACTIONS(602),
    [anon_sym_RBRACE] = ACTIONS(602),
    [anon_sym_LBRACK] = ACTIONS(602),
    [anon_sym_AT] = ACTIONS(602),
    [anon_sym_open] = ACTIONS(602),
    [anon_sym_module] = ACTIONS(602),
    [anon_sym_static] = ACTIONS(602),
    [anon_sym_package] = ACTIONS(602),
    [anon_sym_class] = ACTIONS(602),
    [anon_sym_public] = ACTIONS(602),
    [anon_sym_protected] = ACTIONS(602),
    [anon_sym_private] = ACTIONS(602),
    [anon_sym_abstract] = ACTIONS(602),
    [anon_sym_final] = ACTIONS(602),
    [anon_sym_strictfp] = ACTIONS(602),
    [anon_sym_default] = ACTIONS(602),
    [anon_sym_void] = ACTIONS(602),
    [anon_sym_interface] = ACTIONS(602),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(602),
    [sym_comment] = ACTIONS(50),
  },
  [184] = {
    [anon_sym_EQ] = ACTIONS(604),
    [anon_sym_RPAREN] = ACTIONS(606),
    [sym_comment] = ACTIONS(50),
  },
  [185] = {
    [anon_sym_RPAREN] = ACTIONS(606),
    [sym_comment] = ACTIONS(50),
  },
  [186] = {
    [anon_sym_RPAREN] = ACTIONS(608),
    [sym_comment] = ACTIONS(50),
  },
  [187] = {
    [aux_sym_element_value_pair_list_repeat1] = STATE(303),
    [anon_sym_RPAREN] = ACTIONS(610),
    [anon_sym_COMMA] = ACTIONS(612),
    [sym_comment] = ACTIONS(50),
  },
  [188] = {
    [sym__semicolon] = ACTIONS(614),
    [anon_sym_LPAREN] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(614),
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_RBRACE] = ACTIONS(614),
    [anon_sym_DOT] = ACTIONS(616),
    [anon_sym_LBRACK] = ACTIONS(614),
    [anon_sym_AT] = ACTIONS(614),
    [anon_sym_open] = ACTIONS(614),
    [anon_sym_module] = ACTIONS(614),
    [anon_sym_with] = ACTIONS(614),
    [anon_sym_static] = ACTIONS(614),
    [anon_sym_package] = ACTIONS(614),
    [anon_sym_class] = ACTIONS(614),
    [anon_sym_public] = ACTIONS(614),
    [anon_sym_protected] = ACTIONS(614),
    [anon_sym_private] = ACTIONS(614),
    [anon_sym_abstract] = ACTIONS(614),
    [anon_sym_final] = ACTIONS(614),
    [anon_sym_strictfp] = ACTIONS(614),
    [anon_sym_default] = ACTIONS(614),
    [anon_sym_void] = ACTIONS(614),
    [anon_sym_interface] = ACTIONS(614),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(614),
    [sym_comment] = ACTIONS(50),
  },
  [189] = {
    [sym_module_directive] = STATE(197),
    [aux_sym_module_declaration_repeat1] = STATE(305),
    [anon_sym_RBRACE] = ACTIONS(618),
    [anon_sym_requires] = ACTIONS(420),
    [anon_sym_exports] = ACTIONS(422),
    [anon_sym_opens] = ACTIONS(422),
    [anon_sym_uses] = ACTIONS(424),
    [anon_sym_provides] = ACTIONS(426),
    [sym_comment] = ACTIONS(50),
  },
  [190] = {
    [sym__semicolon] = ACTIONS(620),
    [anon_sym_LBRACE] = ACTIONS(620),
    [anon_sym_DOT] = ACTIONS(620),
    [sym_comment] = ACTIONS(50),
  },
  [191] = {
    [sym_identifier] = ACTIONS(622),
    [sym_comment] = ACTIONS(50),
  },
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(624),
    [sym_decimal_integer_literal] = ACTIONS(626),
    [sym_hex_integer_literal] = ACTIONS(626),
    [sym_octal_integer_literal] = ACTIONS(626),
    [sym_binary_integer_literal] = ACTIONS(626),
    [sym_decimal_floating_point_literal] = ACTIONS(626),
    [sym_hex_floating_point_literal] = ACTIONS(628),
    [anon_sym_true] = ACTIONS(626),
    [anon_sym_false] = ACTIONS(626),
    [anon_sym_SQUOTE] = ACTIONS(624),
    [sym_string_literal] = ACTIONS(624),
    [sym_null_literal] = ACTIONS(626),
    [anon_sym_LPAREN] = ACTIONS(624),
    [anon_sym_BANG] = ACTIONS(624),
    [anon_sym_TILDE] = ACTIONS(624),
    [anon_sym_PLUS_PLUS] = ACTIONS(624),
    [anon_sym_DASH_DASH] = ACTIONS(624),
    [anon_sym_RBRACE] = ACTIONS(624),
    [anon_sym_AT] = ACTIONS(624),
    [anon_sym_open] = ACTIONS(626),
    [anon_sym_module] = ACTIONS(626),
    [anon_sym_static] = ACTIONS(626),
    [anon_sym_package] = ACTIONS(626),
    [anon_sym_import] = ACTIONS(626),
    [anon_sym_class] = ACTIONS(626),
    [anon_sym_public] = ACTIONS(626),
    [anon_sym_protected] = ACTIONS(626),
    [anon_sym_private] = ACTIONS(626),
    [anon_sym_abstract] = ACTIONS(626),
    [anon_sym_final] = ACTIONS(626),
    [anon_sym_strictfp] = ACTIONS(626),
    [anon_sym_default] = ACTIONS(626),
    [anon_sym_interface] = ACTIONS(626),
    [sym_identifier] = ACTIONS(628),
    [sym_comment] = ACTIONS(50),
  },
  [193] = {
    [sym_requires_modifier] = STATE(309),
    [sym_module_name] = STATE(310),
    [aux_sym_module_directive_repeat1] = STATE(311),
    [anon_sym_transitive] = ACTIONS(630),
    [anon_sym_static] = ACTIONS(630),
    [sym_identifier] = ACTIONS(632),
    [sym_comment] = ACTIONS(50),
  },
  [194] = {
    [sym_package_or_type_name] = STATE(313),
    [sym_identifier] = ACTIONS(634),
    [sym_comment] = ACTIONS(50),
  },
  [195] = {
    [sym_package_or_type_name] = STATE(314),
    [sym_identifier] = ACTIONS(290),
    [sym_comment] = ACTIONS(50),
  },
  [196] = {
    [sym_package_or_type_name] = STATE(315),
    [sym_identifier] = ACTIONS(290),
    [sym_comment] = ACTIONS(50),
  },
  [197] = {
    [anon_sym_RBRACE] = ACTIONS(636),
    [anon_sym_requires] = ACTIONS(636),
    [anon_sym_exports] = ACTIONS(636),
    [anon_sym_opens] = ACTIONS(636),
    [anon_sym_uses] = ACTIONS(636),
    [anon_sym_provides] = ACTIONS(636),
    [sym_comment] = ACTIONS(50),
  },
  [198] = {
    [sym_module_directive] = STATE(316),
    [anon_sym_RBRACE] = ACTIONS(618),
    [anon_sym_requires] = ACTIONS(420),
    [anon_sym_exports] = ACTIONS(422),
    [anon_sym_opens] = ACTIONS(422),
    [anon_sym_uses] = ACTIONS(424),
    [anon_sym_provides] = ACTIONS(426),
    [sym_comment] = ACTIONS(50),
  },
  [199] = {
    [ts_builtin_sym_end] = ACTIONS(638),
    [sym_decimal_integer_literal] = ACTIONS(640),
    [sym_hex_integer_literal] = ACTIONS(640),
    [sym_octal_integer_literal] = ACTIONS(640),
    [sym_binary_integer_literal] = ACTIONS(640),
    [sym_decimal_floating_point_literal] = ACTIONS(640),
    [sym_hex_floating_point_literal] = ACTIONS(642),
    [anon_sym_true] = ACTIONS(640),
    [anon_sym_false] = ACTIONS(640),
    [anon_sym_SQUOTE] = ACTIONS(638),
    [sym_string_literal] = ACTIONS(638),
    [sym_null_literal] = ACTIONS(640),
    [anon_sym_LPAREN] = ACTIONS(638),
    [anon_sym_BANG] = ACTIONS(638),
    [anon_sym_TILDE] = ACTIONS(638),
    [anon_sym_PLUS_PLUS] = ACTIONS(638),
    [anon_sym_DASH_DASH] = ACTIONS(638),
    [anon_sym_RBRACE] = ACTIONS(638),
    [anon_sym_AT] = ACTIONS(638),
    [anon_sym_open] = ACTIONS(640),
    [anon_sym_module] = ACTIONS(640),
    [anon_sym_static] = ACTIONS(640),
    [anon_sym_package] = ACTIONS(640),
    [anon_sym_import] = ACTIONS(640),
    [anon_sym_class] = ACTIONS(640),
    [anon_sym_public] = ACTIONS(640),
    [anon_sym_protected] = ACTIONS(640),
    [anon_sym_private] = ACTIONS(640),
    [anon_sym_abstract] = ACTIONS(640),
    [anon_sym_final] = ACTIONS(640),
    [anon_sym_strictfp] = ACTIONS(640),
    [anon_sym_default] = ACTIONS(640),
    [anon_sym_interface] = ACTIONS(640),
    [sym_identifier] = ACTIONS(642),
    [sym_comment] = ACTIONS(50),
  },
  [200] = {
    [anon_sym_STAR] = ACTIONS(644),
    [sym_identifier] = ACTIONS(646),
    [sym_comment] = ACTIONS(50),
  },
  [201] = {
    [sym__semicolon] = ACTIONS(648),
    [sym_comment] = ACTIONS(50),
  },
  [202] = {
    [sym_package_or_type_name] = STATE(321),
    [sym_identifier] = ACTIONS(650),
    [sym_comment] = ACTIONS(50),
  },
  [203] = {
    [sym_type_bound] = STATE(323),
    [anon_sym_GT] = ACTIONS(652),
    [anon_sym_COMMA] = ACTIONS(652),
    [anon_sym_extends] = ACTIONS(654),
    [sym_comment] = ACTIONS(50),
  },
  [204] = {
    [anon_sym_AT] = ACTIONS(153),
    [sym_identifier] = ACTIONS(238),
    [sym_comment] = ACTIONS(50),
  },
  [205] = {
    [anon_sym_GT] = ACTIONS(656),
    [sym_comment] = ACTIONS(50),
  },
  [206] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(326),
    [anon_sym_GT] = ACTIONS(658),
    [anon_sym_COMMA] = ACTIONS(660),
    [sym_comment] = ACTIONS(50),
  },
  [207] = {
    [sym__annotation] = STATE(328),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(662),
    [sym_comment] = ACTIONS(50),
  },
  [208] = {
    [sym__semicolon] = ACTIONS(664),
    [anon_sym_LT] = ACTIONS(664),
    [anon_sym_LBRACE] = ACTIONS(664),
    [anon_sym_RBRACE] = ACTIONS(664),
    [anon_sym_AT] = ACTIONS(664),
    [anon_sym_static] = ACTIONS(666),
    [anon_sym_class] = ACTIONS(666),
    [anon_sym_public] = ACTIONS(666),
    [anon_sym_protected] = ACTIONS(666),
    [anon_sym_private] = ACTIONS(666),
    [anon_sym_abstract] = ACTIONS(666),
    [anon_sym_final] = ACTIONS(666),
    [anon_sym_strictfp] = ACTIONS(666),
    [anon_sym_default] = ACTIONS(666),
    [anon_sym_interface] = ACTIONS(666),
    [sym_identifier] = ACTIONS(668),
    [sym_comment] = ACTIONS(50),
  },
  [209] = {
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [sym_type_parameter_list] = STATE(329),
    [sym_type_parameter] = STATE(206),
    [aux_sym_class_or_interface_type_repeat1] = STATE(207),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(448),
    [sym_comment] = ACTIONS(50),
  },
  [210] = {
    [sym_statement] = STATE(335),
    [sym_if_then_statement] = STATE(336),
    [sym__annotation] = STATE(333),
    [sym_normal_annotation] = STATE(337),
    [sym_marker_annotation] = STATE(337),
    [sym_single_element_annotation] = STATE(337),
    [sym_class_declaration] = STATE(335),
    [sym_normal_class_declaration] = STATE(338),
    [sym_modifier] = STATE(339),
    [sym_block_statements] = STATE(340),
    [sym_block_statement] = STATE(341),
    [sym_local_variable_declaration_statement] = STATE(335),
    [sym_local_variable_declaration] = STATE(342),
    [aux_sym_normal_class_declaration_repeat1] = STATE(343),
    [anon_sym_if] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(672),
    [anon_sym_AT] = ACTIONS(674),
    [anon_sym_static] = ACTIONS(676),
    [anon_sym_class] = ACTIONS(678),
    [anon_sym_public] = ACTIONS(676),
    [anon_sym_protected] = ACTIONS(676),
    [anon_sym_private] = ACTIONS(676),
    [anon_sym_abstract] = ACTIONS(676),
    [anon_sym_final] = ACTIONS(676),
    [anon_sym_strictfp] = ACTIONS(676),
    [anon_sym_default] = ACTIONS(676),
    [sym_comment] = ACTIONS(50),
  },
  [211] = {
    [ts_builtin_sym_end] = ACTIONS(680),
    [sym_decimal_integer_literal] = ACTIONS(682),
    [sym_hex_integer_literal] = ACTIONS(682),
    [sym_octal_integer_literal] = ACTIONS(682),
    [sym_binary_integer_literal] = ACTIONS(682),
    [sym_decimal_floating_point_literal] = ACTIONS(682),
    [sym_hex_floating_point_literal] = ACTIONS(684),
    [anon_sym_true] = ACTIONS(682),
    [anon_sym_false] = ACTIONS(682),
    [anon_sym_SQUOTE] = ACTIONS(680),
    [sym_string_literal] = ACTIONS(680),
    [sym_null_literal] = ACTIONS(682),
    [anon_sym_LPAREN] = ACTIONS(680),
    [anon_sym_BANG] = ACTIONS(680),
    [anon_sym_TILDE] = ACTIONS(680),
    [anon_sym_PLUS_PLUS] = ACTIONS(680),
    [anon_sym_DASH_DASH] = ACTIONS(680),
    [anon_sym_RBRACE] = ACTIONS(680),
    [anon_sym_AT] = ACTIONS(680),
    [anon_sym_open] = ACTIONS(682),
    [anon_sym_module] = ACTIONS(682),
    [anon_sym_static] = ACTIONS(682),
    [anon_sym_package] = ACTIONS(682),
    [anon_sym_import] = ACTIONS(682),
    [anon_sym_class] = ACTIONS(682),
    [anon_sym_public] = ACTIONS(682),
    [anon_sym_protected] = ACTIONS(682),
    [anon_sym_private] = ACTIONS(682),
    [anon_sym_abstract] = ACTIONS(682),
    [anon_sym_final] = ACTIONS(682),
    [anon_sym_strictfp] = ACTIONS(682),
    [anon_sym_default] = ACTIONS(682),
    [anon_sym_interface] = ACTIONS(682),
    [sym_identifier] = ACTIONS(684),
    [sym_comment] = ACTIONS(50),
  },
  [212] = {
    [sym_package_or_type_name] = STATE(346),
    [anon_sym_interface] = ACTIONS(686),
    [sym_identifier] = ACTIONS(688),
    [sym_comment] = ACTIONS(50),
  },
  [213] = {
    [sym_identifier] = ACTIONS(690),
    [sym_comment] = ACTIONS(50),
  },
  [214] = {
    [sym_identifier] = ACTIONS(692),
    [sym_comment] = ACTIONS(50),
  },
  [215] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_modifier] = STATE(49),
    [sym_variable_declarator_id] = STATE(50),
    [sym_formal_parameter_list] = STATE(349),
    [sym_formal_parameter] = STATE(51),
    [sym_receiver_parameter] = STATE(52),
    [sym_last_formal_parameter] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(54),
    [aux_sym_normal_class_declaration_repeat1] = STATE(55),
    [anon_sym_AT] = ACTIONS(68),
    [anon_sym_static] = ACTIONS(70),
    [anon_sym_public] = ACTIONS(70),
    [anon_sym_protected] = ACTIONS(70),
    [anon_sym_private] = ACTIONS(70),
    [anon_sym_abstract] = ACTIONS(70),
    [anon_sym_final] = ACTIONS(70),
    [anon_sym_strictfp] = ACTIONS(70),
    [anon_sym_default] = ACTIONS(70),
    [anon_sym_this] = ACTIONS(72),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(50),
  },
  [216] = {
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_AT] = ACTIONS(153),
    [anon_sym_static] = ACTIONS(238),
    [anon_sym_class] = ACTIONS(238),
    [anon_sym_public] = ACTIONS(238),
    [anon_sym_protected] = ACTIONS(238),
    [anon_sym_private] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(238),
    [anon_sym_final] = ACTIONS(238),
    [anon_sym_strictfp] = ACTIONS(238),
    [anon_sym_default] = ACTIONS(238),
    [anon_sym_interface] = ACTIONS(238),
    [sym_identifier] = ACTIONS(240),
    [sym_comment] = ACTIONS(50),
  },
  [217] = {
    [sym__semicolon] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(173),
    [anon_sym_static] = ACTIONS(175),
    [anon_sym_class] = ACTIONS(175),
    [anon_sym_public] = ACTIONS(175),
    [anon_sym_protected] = ACTIONS(175),
    [anon_sym_private] = ACTIONS(175),
    [anon_sym_abstract] = ACTIONS(175),
    [anon_sym_final] = ACTIONS(175),
    [anon_sym_strictfp] = ACTIONS(175),
    [anon_sym_default] = ACTIONS(175),
    [anon_sym_interface] = ACTIONS(175),
    [sym_identifier] = ACTIONS(177),
    [sym_comment] = ACTIONS(50),
  },
  [218] = {
    [sym_identifier] = ACTIONS(694),
    [sym_comment] = ACTIONS(50),
  },
  [219] = {
    [sym__semicolon] = ACTIONS(696),
    [anon_sym_LT] = ACTIONS(696),
    [anon_sym_LBRACE] = ACTIONS(696),
    [anon_sym_RBRACE] = ACTIONS(696),
    [anon_sym_AT] = ACTIONS(696),
    [anon_sym_static] = ACTIONS(698),
    [anon_sym_class] = ACTIONS(698),
    [anon_sym_public] = ACTIONS(698),
    [anon_sym_protected] = ACTIONS(698),
    [anon_sym_private] = ACTIONS(698),
    [anon_sym_abstract] = ACTIONS(698),
    [anon_sym_final] = ACTIONS(698),
    [anon_sym_strictfp] = ACTIONS(698),
    [anon_sym_default] = ACTIONS(698),
    [anon_sym_interface] = ACTIONS(698),
    [sym_identifier] = ACTIONS(700),
    [sym_comment] = ACTIONS(50),
  },
  [220] = {
    [sym__semicolon] = ACTIONS(702),
    [anon_sym_LT] = ACTIONS(702),
    [anon_sym_LBRACE] = ACTIONS(702),
    [anon_sym_RBRACE] = ACTIONS(702),
    [anon_sym_AT] = ACTIONS(702),
    [anon_sym_static] = ACTIONS(704),
    [anon_sym_class] = ACTIONS(704),
    [anon_sym_public] = ACTIONS(704),
    [anon_sym_protected] = ACTIONS(704),
    [anon_sym_private] = ACTIONS(704),
    [anon_sym_abstract] = ACTIONS(704),
    [anon_sym_final] = ACTIONS(704),
    [anon_sym_strictfp] = ACTIONS(704),
    [anon_sym_default] = ACTIONS(704),
    [anon_sym_interface] = ACTIONS(704),
    [sym_identifier] = ACTIONS(706),
    [sym_comment] = ACTIONS(50),
  },
  [221] = {
    [sym_constructor_body] = STATE(353),
    [sym_throws] = STATE(354),
    [anon_sym_LBRACE] = ACTIONS(708),
    [anon_sym_throws] = ACTIONS(710),
    [sym_comment] = ACTIONS(50),
  },
  [222] = {
    [sym__semicolon] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(185),
    [anon_sym_static] = ACTIONS(187),
    [anon_sym_class] = ACTIONS(187),
    [anon_sym_public] = ACTIONS(187),
    [anon_sym_protected] = ACTIONS(187),
    [anon_sym_private] = ACTIONS(187),
    [anon_sym_abstract] = ACTIONS(187),
    [anon_sym_final] = ACTIONS(187),
    [anon_sym_strictfp] = ACTIONS(187),
    [anon_sym_default] = ACTIONS(187),
    [anon_sym_interface] = ACTIONS(187),
    [sym_identifier] = ACTIONS(189),
    [sym_comment] = ACTIONS(50),
  },
  [223] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(216),
    [sym_marker_annotation] = STATE(216),
    [sym_single_element_annotation] = STATE(216),
    [sym_modifier] = STATE(87),
    [sym_type_parameters] = STATE(218),
    [sym_constructor_declarator] = STATE(358),
    [anon_sym_LT] = ACTIONS(452),
    [anon_sym_AT] = ACTIONS(712),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(714),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(716),
    [sym_identifier] = ACTIONS(464),
    [sym_comment] = ACTIONS(50),
  },
  [224] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(216),
    [sym_marker_annotation] = STATE(216),
    [sym_single_element_annotation] = STATE(216),
    [sym_class_declaration] = STATE(208),
    [sym_normal_class_declaration] = STATE(217),
    [sym_modifier] = STATE(32),
    [sym_type_parameters] = STATE(218),
    [sym_class_body_declaration] = STATE(360),
    [sym_constructor_declaration] = STATE(220),
    [sym_constructor_declarator] = STATE(221),
    [sym_class_member_declaration] = STATE(220),
    [sym_interface_declaration] = STATE(208),
    [sym_annotation_type_declaration] = STATE(222),
    [sym_normal_interface_declaration] = STATE(222),
    [sym_block] = STATE(220),
    [aux_sym_normal_class_declaration_repeat1] = STATE(223),
    [sym__semicolon] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(454),
    [anon_sym_RBRACE] = ACTIONS(718),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(460),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(462),
    [sym_identifier] = ACTIONS(464),
    [sym_comment] = ACTIONS(50),
  },
  [225] = {
    [sym_type_arguments] = STATE(363),
    [aux_sym_class_or_interface_type_repeat2] = STATE(364),
    [anon_sym_GT] = ACTIONS(720),
    [anon_sym_LT] = ACTIONS(722),
    [anon_sym_AMP] = ACTIONS(720),
    [anon_sym_COMMA] = ACTIONS(720),
    [anon_sym_LBRACE] = ACTIONS(720),
    [anon_sym_DOT] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(720),
    [anon_sym_AT] = ACTIONS(720),
    [anon_sym_implements] = ACTIONS(720),
    [sym_comment] = ACTIONS(50),
  },
  [226] = {
    [anon_sym_LBRACE] = ACTIONS(726),
    [anon_sym_implements] = ACTIONS(726),
    [sym_comment] = ACTIONS(50),
  },
  [227] = {
    [sym__annotation] = STATE(328),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(728),
    [sym_comment] = ACTIONS(50),
  },
  [228] = {
    [aux_sym_interface_type_list_repeat1] = STATE(367),
    [anon_sym_COMMA] = ACTIONS(730),
    [anon_sym_LBRACE] = ACTIONS(732),
    [sym_comment] = ACTIONS(50),
  },
  [229] = {
    [anon_sym_LBRACE] = ACTIONS(734),
    [sym_comment] = ACTIONS(50),
  },
  [230] = {
    [sym_super_interfaces] = STATE(368),
    [sym_class_body] = STATE(369),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [231] = {
    [sym_class_body] = STATE(369),
    [anon_sym_LBRACE] = ACTIONS(298),
    [sym_comment] = ACTIONS(50),
  },
  [232] = {
    [ts_builtin_sym_end] = ACTIONS(736),
    [sym_decimal_integer_literal] = ACTIONS(738),
    [sym_hex_integer_literal] = ACTIONS(738),
    [sym_octal_integer_literal] = ACTIONS(738),
    [sym_binary_integer_literal] = ACTIONS(738),
    [sym_decimal_floating_point_literal] = ACTIONS(738),
    [sym_hex_floating_point_literal] = ACTIONS(740),
    [anon_sym_true] = ACTIONS(738),
    [anon_sym_false] = ACTIONS(738),
    [anon_sym_SQUOTE] = ACTIONS(736),
    [sym_string_literal] = ACTIONS(736),
    [sym_null_literal] = ACTIONS(738),
    [anon_sym_LPAREN] = ACTIONS(736),
    [anon_sym_BANG] = ACTIONS(736),
    [anon_sym_TILDE] = ACTIONS(736),
    [anon_sym_PLUS_PLUS] = ACTIONS(736),
    [anon_sym_DASH_DASH] = ACTIONS(736),
    [anon_sym_RBRACE] = ACTIONS(736),
    [anon_sym_AT] = ACTIONS(736),
    [anon_sym_open] = ACTIONS(738),
    [anon_sym_module] = ACTIONS(738),
    [anon_sym_static] = ACTIONS(738),
    [anon_sym_package] = ACTIONS(738),
    [anon_sym_import] = ACTIONS(738),
    [anon_sym_class] = ACTIONS(738),
    [anon_sym_public] = ACTIONS(738),
    [anon_sym_protected] = ACTIONS(738),
    [anon_sym_private] = ACTIONS(738),
    [anon_sym_abstract] = ACTIONS(738),
    [anon_sym_final] = ACTIONS(738),
    [anon_sym_strictfp] = ACTIONS(738),
    [anon_sym_default] = ACTIONS(738),
    [anon_sym_interface] = ACTIONS(738),
    [sym_identifier] = ACTIONS(740),
    [sym_comment] = ACTIONS(50),
  },
  [233] = {
    [sym__semicolon] = ACTIONS(742),
    [anon_sym_LT] = ACTIONS(742),
    [anon_sym_RBRACE] = ACTIONS(742),
    [anon_sym_AT] = ACTIONS(742),
    [anon_sym_static] = ACTIONS(744),
    [anon_sym_class] = ACTIONS(744),
    [anon_sym_public] = ACTIONS(744),
    [anon_sym_protected] = ACTIONS(744),
    [anon_sym_private] = ACTIONS(744),
    [anon_sym_abstract] = ACTIONS(744),
    [anon_sym_final] = ACTIONS(744),
    [anon_sym_strictfp] = ACTIONS(744),
    [anon_sym_default] = ACTIONS(744),
    [anon_sym_void] = ACTIONS(744),
    [anon_sym_interface] = ACTIONS(744),
    [sym_identifier] = ACTIONS(746),
    [sym_comment] = ACTIONS(50),
  },
  [234] = {
    [ts_builtin_sym_end] = ACTIONS(748),
    [sym_decimal_integer_literal] = ACTIONS(750),
    [sym_hex_integer_literal] = ACTIONS(750),
    [sym_octal_integer_literal] = ACTIONS(750),
    [sym_binary_integer_literal] = ACTIONS(750),
    [sym_decimal_floating_point_literal] = ACTIONS(750),
    [sym_hex_floating_point_literal] = ACTIONS(752),
    [anon_sym_true] = ACTIONS(750),
    [anon_sym_false] = ACTIONS(750),
    [anon_sym_SQUOTE] = ACTIONS(748),
    [sym_string_literal] = ACTIONS(748),
    [sym_null_literal] = ACTIONS(750),
    [anon_sym_LPAREN] = ACTIONS(748),
    [anon_sym_BANG] = ACTIONS(748),
    [anon_sym_TILDE] = ACTIONS(748),
    [anon_sym_PLUS_PLUS] = ACTIONS(748),
    [anon_sym_DASH_DASH] = ACTIONS(748),
    [anon_sym_RBRACE] = ACTIONS(748),
    [anon_sym_AT] = ACTIONS(748),
    [anon_sym_open] = ACTIONS(750),
    [anon_sym_module] = ACTIONS(750),
    [anon_sym_static] = ACTIONS(750),
    [anon_sym_package] = ACTIONS(750),
    [anon_sym_import] = ACTIONS(750),
    [anon_sym_class] = ACTIONS(750),
    [anon_sym_public] = ACTIONS(750),
    [anon_sym_protected] = ACTIONS(750),
    [anon_sym_private] = ACTIONS(750),
    [anon_sym_abstract] = ACTIONS(750),
    [anon_sym_final] = ACTIONS(750),
    [anon_sym_strictfp] = ACTIONS(750),
    [anon_sym_default] = ACTIONS(750),
    [anon_sym_interface] = ACTIONS(750),
    [sym_identifier] = ACTIONS(752),
    [sym_comment] = ACTIONS(50),
  },
  [235] = {
    [sym_package_or_type_name] = STATE(372),
    [anon_sym_interface] = ACTIONS(754),
    [sym_identifier] = ACTIONS(756),
    [sym_comment] = ACTIONS(50),
  },
  [236] = {
    [anon_sym_LT] = ACTIONS(88),
    [anon_sym_AT] = ACTIONS(88),
    [anon_sym_static] = ACTIONS(90),
    [anon_sym_class] = ACTIONS(90),
    [anon_sym_public] = ACTIONS(90),
    [anon_sym_protected] = ACTIONS(90),
    [anon_sym_private] = ACTIONS(90),
    [anon_sym_abstract] = ACTIONS(90),
    [anon_sym_final] = ACTIONS(90),
    [anon_sym_strictfp] = ACTIONS(90),
    [anon_sym_default] = ACTIONS(90),
    [anon_sym_void] = ACTIONS(90),
    [anon_sym_interface] = ACTIONS(90),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(50),
  },
  [237] = {
    [sym_identifier] = ACTIONS(758),
    [sym_comment] = ACTIONS(50),
  },
  [238] = {
    [sym_identifier] = ACTIONS(760),
    [sym_comment] = ACTIONS(50),
  },
  [239] = {
    [sym_identifier] = ACTIONS(762),
    [sym_comment] = ACTIONS(50),
  },
  [240] = {
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_AT] = ACTIONS(153),
    [anon_sym_static] = ACTIONS(238),
    [anon_sym_class] = ACTIONS(238),
    [anon_sym_public] = ACTIONS(238),
    [anon_sym_protected] = ACTIONS(238),
    [anon_sym_private] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(238),
    [anon_sym_final] = ACTIONS(238),
    [anon_sym_strictfp] = ACTIONS(238),
    [anon_sym_default] = ACTIONS(238),
    [anon_sym_void] = ACTIONS(238),
    [anon_sym_interface] = ACTIONS(238),
    [sym_identifier] = ACTIONS(240),
    [sym_comment] = ACTIONS(50),
  },
  [241] = {
    [sym__semicolon] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(173),
    [anon_sym_static] = ACTIONS(175),
    [anon_sym_class] = ACTIONS(175),
    [anon_sym_public] = ACTIONS(175),
    [anon_sym_protected] = ACTIONS(175),
    [anon_sym_private] = ACTIONS(175),
    [anon_sym_abstract] = ACTIONS(175),
    [anon_sym_final] = ACTIONS(175),
    [anon_sym_strictfp] = ACTIONS(175),
    [anon_sym_default] = ACTIONS(175),
    [anon_sym_void] = ACTIONS(175),
    [anon_sym_interface] = ACTIONS(175),
    [sym_identifier] = ACTIONS(177),
    [sym_comment] = ACTIONS(50),
  },
  [242] = {
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(179),
    [anon_sym_static] = ACTIONS(181),
    [anon_sym_class] = ACTIONS(181),
    [anon_sym_public] = ACTIONS(181),
    [anon_sym_protected] = ACTIONS(181),
    [anon_sym_private] = ACTIONS(181),
    [anon_sym_abstract] = ACTIONS(181),
    [anon_sym_final] = ACTIONS(181),
    [anon_sym_strictfp] = ACTIONS(181),
    [anon_sym_default] = ACTIONS(181),
    [anon_sym_void] = ACTIONS(181),
    [anon_sym_interface] = ACTIONS(181),
    [sym_identifier] = ACTIONS(183),
    [sym_comment] = ACTIONS(50),
  },
  [243] = {
    [sym__annotation] = STATE(375),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym_result] = STATE(376),
    [aux_sym_class_or_interface_type_repeat1] = STATE(377),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_void] = ACTIONS(764),
    [sym_comment] = ACTIONS(50),
  },
  [244] = {
    [sym__semicolon] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(185),
    [anon_sym_static] = ACTIONS(187),
    [anon_sym_class] = ACTIONS(187),
    [anon_sym_public] = ACTIONS(187),
    [anon_sym_protected] = ACTIONS(187),
    [anon_sym_private] = ACTIONS(187),
    [anon_sym_abstract] = ACTIONS(187),
    [anon_sym_final] = ACTIONS(187),
    [anon_sym_strictfp] = ACTIONS(187),
    [anon_sym_default] = ACTIONS(187),
    [anon_sym_void] = ACTIONS(187),
    [anon_sym_interface] = ACTIONS(187),
    [sym_identifier] = ACTIONS(189),
    [sym_comment] = ACTIONS(50),
  },
  [245] = {
    [sym__semicolon] = ACTIONS(766),
    [anon_sym_LT] = ACTIONS(766),
    [anon_sym_RBRACE] = ACTIONS(766),
    [anon_sym_AT] = ACTIONS(766),
    [anon_sym_static] = ACTIONS(768),
    [anon_sym_class] = ACTIONS(768),
    [anon_sym_public] = ACTIONS(768),
    [anon_sym_protected] = ACTIONS(768),
    [anon_sym_private] = ACTIONS(768),
    [anon_sym_abstract] = ACTIONS(768),
    [anon_sym_final] = ACTIONS(768),
    [anon_sym_strictfp] = ACTIONS(768),
    [anon_sym_default] = ACTIONS(768),
    [anon_sym_void] = ACTIONS(768),
    [anon_sym_interface] = ACTIONS(768),
    [sym_identifier] = ACTIONS(770),
    [sym_comment] = ACTIONS(50),
  },
  [246] = {
    [sym__semicolon] = ACTIONS(772),
    [sym_comment] = ACTIONS(50),
  },
  [247] = {
    [aux_sym_variable_declarator_list_repeat1] = STATE(380),
    [sym__semicolon] = ACTIONS(774),
    [anon_sym_COMMA] = ACTIONS(776),
    [sym_comment] = ACTIONS(50),
  },
  [248] = {
    [sym_method_body] = STATE(383),
    [sym_block] = STATE(381),
    [sym__semicolon] = ACTIONS(778),
    [anon_sym_LBRACE] = ACTIONS(780),
    [sym_comment] = ACTIONS(50),
  },
  [249] = {
    [sym_method_declarator] = STATE(385),
    [sym_identifier] = ACTIONS(782),
    [sym_comment] = ACTIONS(50),
  },
  [250] = {
    [sym__annotation] = STATE(236),
    [sym_normal_annotation] = STATE(240),
    [sym_marker_annotation] = STATE(240),
    [sym_single_element_annotation] = STATE(240),
    [sym_modifier] = STATE(389),
    [sym_type_parameters] = STATE(243),
    [sym_variable_declarator_list] = STATE(390),
    [sym_variable_declarator] = STATE(247),
    [sym_variable_declarator_id] = STATE(96),
    [sym_method_header] = STATE(391),
    [sym_result] = STATE(249),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_AT] = ACTIONS(784),
    [anon_sym_static] = ACTIONS(480),
    [anon_sym_class] = ACTIONS(786),
    [anon_sym_public] = ACTIONS(480),
    [anon_sym_protected] = ACTIONS(480),
    [anon_sym_private] = ACTIONS(480),
    [anon_sym_abstract] = ACTIONS(480),
    [anon_sym_final] = ACTIONS(480),
    [anon_sym_strictfp] = ACTIONS(480),
    [anon_sym_default] = ACTIONS(480),
    [anon_sym_void] = ACTIONS(484),
    [anon_sym_interface] = ACTIONS(788),
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(50),
  },
  [251] = {
    [sym__annotation] = STATE(236),
    [sym_normal_annotation] = STATE(240),
    [sym_marker_annotation] = STATE(240),
    [sym_single_element_annotation] = STATE(240),
    [sym_class_declaration] = STATE(233),
    [sym_normal_class_declaration] = STATE(241),
    [sym_modifier] = STATE(242),
    [sym_type_parameters] = STATE(243),
    [sym_interface_declaration] = STATE(233),
    [sym_annotation_type_declaration] = STATE(244),
    [sym_normal_interface_declaration] = STATE(244),
    [sym_interface_member_declaration] = STATE(393),
    [sym_constant_declaration] = STATE(233),
    [sym_variable_declarator_list] = STATE(246),
    [sym_variable_declarator] = STATE(247),
    [sym_variable_declarator_id] = STATE(96),
    [sym_interface_method_declaration] = STATE(233),
    [sym_method_header] = STATE(248),
    [sym_result] = STATE(249),
    [aux_sym_normal_class_declaration_repeat1] = STATE(250),
    [sym__semicolon] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_RBRACE] = ACTIONS(790),
    [anon_sym_AT] = ACTIONS(478),
    [anon_sym_static] = ACTIONS(480),
    [anon_sym_class] = ACTIONS(482),
    [anon_sym_public] = ACTIONS(480),
    [anon_sym_protected] = ACTIONS(480),
    [anon_sym_private] = ACTIONS(480),
    [anon_sym_abstract] = ACTIONS(480),
    [anon_sym_final] = ACTIONS(480),
    [anon_sym_strictfp] = ACTIONS(480),
    [anon_sym_default] = ACTIONS(480),
    [anon_sym_void] = ACTIONS(484),
    [anon_sym_interface] = ACTIONS(486),
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(50),
  },
  [252] = {
    [anon_sym_LBRACE] = ACTIONS(792),
    [sym_comment] = ACTIONS(50),
  },
  [253] = {
    [sym_interface_body] = STATE(394),
    [anon_sym_LBRACE] = ACTIONS(304),
    [sym_comment] = ACTIONS(50),
  },
  [254] = {
    [ts_builtin_sym_end] = ACTIONS(794),
    [sym_decimal_integer_literal] = ACTIONS(796),
    [sym_hex_integer_literal] = ACTIONS(796),
    [sym_octal_integer_literal] = ACTIONS(796),
    [sym_binary_integer_literal] = ACTIONS(796),
    [sym_decimal_floating_point_literal] = ACTIONS(796),
    [sym_hex_floating_point_literal] = ACTIONS(798),
    [anon_sym_true] = ACTIONS(796),
    [anon_sym_false] = ACTIONS(796),
    [anon_sym_SQUOTE] = ACTIONS(794),
    [sym_string_literal] = ACTIONS(794),
    [sym_null_literal] = ACTIONS(796),
    [anon_sym_LPAREN] = ACTIONS(794),
    [anon_sym_BANG] = ACTIONS(794),
    [anon_sym_TILDE] = ACTIONS(794),
    [anon_sym_PLUS_PLUS] = ACTIONS(794),
    [anon_sym_DASH_DASH] = ACTIONS(794),
    [anon_sym_RBRACE] = ACTIONS(794),
    [anon_sym_AT] = ACTIONS(794),
    [anon_sym_open] = ACTIONS(796),
    [anon_sym_module] = ACTIONS(796),
    [anon_sym_static] = ACTIONS(796),
    [anon_sym_package] = ACTIONS(796),
    [anon_sym_import] = ACTIONS(796),
    [anon_sym_class] = ACTIONS(796),
    [anon_sym_public] = ACTIONS(796),
    [anon_sym_protected] = ACTIONS(796),
    [anon_sym_private] = ACTIONS(796),
    [anon_sym_abstract] = ACTIONS(796),
    [anon_sym_final] = ACTIONS(796),
    [anon_sym_strictfp] = ACTIONS(796),
    [anon_sym_default] = ACTIONS(796),
    [anon_sym_interface] = ACTIONS(796),
    [sym_identifier] = ACTIONS(798),
    [sym_comment] = ACTIONS(50),
  },
  [255] = {
    [sym__expression] = STATE(395),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(316),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [256] = {
    [sym__expression] = STATE(396),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(316),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [257] = {
    [sym__expression] = STATE(397),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(316),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [258] = {
    [sym__expression] = STATE(398),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(316),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [259] = {
    [sym__expression] = STATE(399),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(316),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [260] = {
    [sym__expression] = STATE(148),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(316),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [261] = {
    [sym__expression] = STATE(400),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(316),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [262] = {
    [sym__expression] = STATE(401),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(28),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_PLUS_PLUS] = ACTIONS(30),
    [anon_sym_DASH_DASH] = ACTIONS(30),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [263] = {
    [sym__expression] = STATE(402),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(318),
    [anon_sym_PLUS_PLUS] = ACTIONS(320),
    [anon_sym_DASH_DASH] = ACTIONS(320),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [264] = {
    [sym__expression] = STATE(403),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(318),
    [anon_sym_PLUS_PLUS] = ACTIONS(320),
    [anon_sym_DASH_DASH] = ACTIONS(320),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [265] = {
    [sym__expression] = STATE(404),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(318),
    [anon_sym_PLUS_PLUS] = ACTIONS(320),
    [anon_sym_DASH_DASH] = ACTIONS(320),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [266] = {
    [sym__expression] = STATE(405),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(318),
    [anon_sym_PLUS_PLUS] = ACTIONS(320),
    [anon_sym_DASH_DASH] = ACTIONS(320),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [267] = {
    [sym__expression] = STATE(406),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(318),
    [anon_sym_PLUS_PLUS] = ACTIONS(320),
    [anon_sym_DASH_DASH] = ACTIONS(320),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [268] = {
    [sym__expression] = STATE(148),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(318),
    [anon_sym_PLUS_PLUS] = ACTIONS(320),
    [anon_sym_DASH_DASH] = ACTIONS(320),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [269] = {
    [sym__expression] = STATE(407),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(316),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [270] = {
    [sym__semicolon] = ACTIONS(800),
    [anon_sym_EQ] = ACTIONS(802),
    [anon_sym_PLUS_EQ] = ACTIONS(800),
    [anon_sym_DASH_EQ] = ACTIONS(800),
    [anon_sym_STAR_EQ] = ACTIONS(800),
    [anon_sym_SLASH_EQ] = ACTIONS(800),
    [anon_sym_AMP_EQ] = ACTIONS(800),
    [anon_sym_PIPE_EQ] = ACTIONS(800),
    [anon_sym_CARET_EQ] = ACTIONS(800),
    [anon_sym_PERCENT_EQ] = ACTIONS(800),
    [anon_sym_LT_LT_EQ] = ACTIONS(800),
    [anon_sym_GT_GT_EQ] = ACTIONS(800),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(800),
    [anon_sym_GT] = ACTIONS(802),
    [anon_sym_LT] = ACTIONS(802),
    [anon_sym_EQ_EQ] = ACTIONS(800),
    [anon_sym_GT_EQ] = ACTIONS(800),
    [anon_sym_LT_EQ] = ACTIONS(800),
    [anon_sym_BANG_EQ] = ACTIONS(800),
    [anon_sym_AMP_AMP] = ACTIONS(800),
    [anon_sym_PIPE_PIPE] = ACTIONS(800),
    [anon_sym_PLUS] = ACTIONS(802),
    [anon_sym_DASH] = ACTIONS(802),
    [anon_sym_STAR] = ACTIONS(802),
    [anon_sym_SLASH] = ACTIONS(802),
    [anon_sym_AMP] = ACTIONS(802),
    [anon_sym_PIPE] = ACTIONS(802),
    [anon_sym_CARET] = ACTIONS(802),
    [anon_sym_PERCENT] = ACTIONS(802),
    [anon_sym_LT_LT] = ACTIONS(802),
    [anon_sym_GT_GT] = ACTIONS(802),
    [anon_sym_GT_GT_GT] = ACTIONS(802),
    [anon_sym_RPAREN] = ACTIONS(800),
    [anon_sym_COMMA] = ACTIONS(800),
    [anon_sym_QMARK] = ACTIONS(800),
    [anon_sym_COLON] = ACTIONS(800),
    [anon_sym_PLUS_PLUS] = ACTIONS(800),
    [anon_sym_DASH_DASH] = ACTIONS(800),
    [anon_sym_LBRACE] = ACTIONS(800),
    [anon_sym_RBRACE] = ACTIONS(800),
    [anon_sym_RBRACK] = ACTIONS(800),
    [sym_comment] = ACTIONS(50),
  },
  [271] = {
    [anon_sym_LBRACE] = ACTIONS(804),
    [sym_comment] = ACTIONS(50),
  },
  [272] = {
    [sym__semicolon] = ACTIONS(806),
    [anon_sym_DOT] = ACTIONS(416),
    [sym_comment] = ACTIONS(50),
  },
  [273] = {
    [sym_annotation_type_body] = STATE(410),
    [anon_sym_LBRACE] = ACTIONS(402),
    [sym_comment] = ACTIONS(50),
  },
  [274] = {
    [sym_superclass] = STATE(411),
    [sym_super_interfaces] = STATE(368),
    [sym_class_body] = STATE(369),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_extends] = ACTIONS(300),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [275] = {
    [sym_extends_interfaces] = STATE(412),
    [sym_interface_body] = STATE(394),
    [anon_sym_LBRACE] = ACTIONS(304),
    [anon_sym_extends] = ACTIONS(306),
    [sym_comment] = ACTIONS(50),
  },
  [276] = {
    [anon_sym_RPAREN] = ACTIONS(808),
    [sym_identifier] = ACTIONS(810),
    [sym_comment] = ACTIONS(50),
  },
  [277] = {
    [anon_sym_AT] = ACTIONS(602),
    [anon_sym_static] = ACTIONS(812),
    [anon_sym_public] = ACTIONS(812),
    [anon_sym_protected] = ACTIONS(812),
    [anon_sym_private] = ACTIONS(812),
    [anon_sym_abstract] = ACTIONS(812),
    [anon_sym_final] = ACTIONS(812),
    [anon_sym_strictfp] = ACTIONS(812),
    [anon_sym_default] = ACTIONS(812),
    [anon_sym_this] = ACTIONS(812),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(602),
    [sym_identifier] = ACTIONS(814),
    [sym_comment] = ACTIONS(50),
  },
  [278] = {
    [anon_sym_EQ] = ACTIONS(604),
    [anon_sym_RPAREN] = ACTIONS(816),
    [sym_comment] = ACTIONS(50),
  },
  [279] = {
    [anon_sym_RPAREN] = ACTIONS(816),
    [sym_comment] = ACTIONS(50),
  },
  [280] = {
    [anon_sym_RPAREN] = ACTIONS(818),
    [sym_comment] = ACTIONS(50),
  },
  [281] = {
    [anon_sym_LPAREN] = ACTIONS(614),
    [anon_sym_DOT] = ACTIONS(616),
    [anon_sym_AT] = ACTIONS(614),
    [anon_sym_static] = ACTIONS(616),
    [anon_sym_public] = ACTIONS(616),
    [anon_sym_protected] = ACTIONS(616),
    [anon_sym_private] = ACTIONS(616),
    [anon_sym_abstract] = ACTIONS(616),
    [anon_sym_final] = ACTIONS(616),
    [anon_sym_strictfp] = ACTIONS(616),
    [anon_sym_default] = ACTIONS(616),
    [anon_sym_this] = ACTIONS(616),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(614),
    [sym_identifier] = ACTIONS(820),
    [sym_comment] = ACTIONS(50),
  },
  [282] = {
    [sym__semicolon] = ACTIONS(822),
    [anon_sym_EQ] = ACTIONS(822),
    [anon_sym_GT] = ACTIONS(822),
    [anon_sym_RPAREN] = ACTIONS(822),
    [anon_sym_COMMA] = ACTIONS(822),
    [anon_sym_LBRACE] = ACTIONS(822),
    [anon_sym_DOT] = ACTIONS(822),
    [anon_sym_LBRACK] = ACTIONS(822),
    [anon_sym_AT] = ACTIONS(822),
    [anon_sym_default] = ACTIONS(822),
    [anon_sym_COLON_COLON] = ACTIONS(822),
    [anon_sym_throws] = ACTIONS(822),
    [sym_comment] = ACTIONS(50),
  },
  [283] = {
    [anon_sym_RBRACK] = ACTIONS(824),
    [sym_comment] = ACTIONS(50),
  },
  [284] = {
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(826),
    [anon_sym_LBRACE] = ACTIONS(244),
    [anon_sym_throws] = ACTIONS(244),
    [sym_comment] = ACTIONS(50),
  },
  [285] = {
    [anon_sym_RPAREN] = ACTIONS(828),
    [anon_sym_LBRACE] = ACTIONS(828),
    [anon_sym_throws] = ACTIONS(828),
    [sym_comment] = ACTIONS(50),
  },
  [286] = {
    [sym__literal] = STATE(418),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(419),
    [sym_element_value_pair] = STATE(187),
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
    [anon_sym_RPAREN] = ACTIONS(830),
    [sym_identifier] = ACTIONS(832),
    [sym_comment] = ACTIONS(50),
  },
  [287] = {
    [sym_identifier] = ACTIONS(834),
    [sym_comment] = ACTIONS(50),
  },
  [288] = {
    [anon_sym_RPAREN] = ACTIONS(836),
    [anon_sym_COMMA] = ACTIONS(836),
    [anon_sym_LBRACE] = ACTIONS(836),
    [anon_sym_throws] = ACTIONS(836),
    [sym_comment] = ACTIONS(50),
  },
  [289] = {
    [sym__literal] = STATE(423),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(424),
    [sym_element_value_pair] = STATE(187),
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
    [anon_sym_RPAREN] = ACTIONS(838),
    [sym_identifier] = ACTIONS(840),
    [sym_comment] = ACTIONS(50),
  },
  [290] = {
    [sym_identifier] = ACTIONS(842),
    [sym_comment] = ACTIONS(50),
  },
  [291] = {
    [anon_sym_RPAREN] = ACTIONS(844),
    [anon_sym_LBRACE] = ACTIONS(844),
    [anon_sym_throws] = ACTIONS(844),
    [sym_comment] = ACTIONS(50),
  },
  [292] = {
    [ts_builtin_sym_end] = ACTIONS(846),
    [sym_decimal_integer_literal] = ACTIONS(848),
    [sym_hex_integer_literal] = ACTIONS(848),
    [sym_octal_integer_literal] = ACTIONS(848),
    [sym_binary_integer_literal] = ACTIONS(848),
    [sym_decimal_floating_point_literal] = ACTIONS(848),
    [sym_hex_floating_point_literal] = ACTIONS(850),
    [anon_sym_true] = ACTIONS(848),
    [anon_sym_false] = ACTIONS(848),
    [anon_sym_SQUOTE] = ACTIONS(846),
    [sym_string_literal] = ACTIONS(846),
    [sym_null_literal] = ACTIONS(848),
    [anon_sym_LPAREN] = ACTIONS(846),
    [anon_sym_BANG] = ACTIONS(846),
    [anon_sym_TILDE] = ACTIONS(846),
    [anon_sym_PLUS_PLUS] = ACTIONS(846),
    [anon_sym_DASH_DASH] = ACTIONS(846),
    [anon_sym_RBRACE] = ACTIONS(846),
    [anon_sym_AT] = ACTIONS(846),
    [anon_sym_open] = ACTIONS(848),
    [anon_sym_module] = ACTIONS(848),
    [anon_sym_static] = ACTIONS(848),
    [anon_sym_package] = ACTIONS(848),
    [anon_sym_import] = ACTIONS(848),
    [anon_sym_class] = ACTIONS(848),
    [anon_sym_public] = ACTIONS(848),
    [anon_sym_protected] = ACTIONS(848),
    [anon_sym_private] = ACTIONS(848),
    [anon_sym_abstract] = ACTIONS(848),
    [anon_sym_final] = ACTIONS(848),
    [anon_sym_strictfp] = ACTIONS(848),
    [anon_sym_default] = ACTIONS(848),
    [anon_sym_interface] = ACTIONS(848),
    [sym_identifier] = ACTIONS(850),
    [sym_comment] = ACTIONS(50),
  },
  [293] = {
    [sym_dims] = STATE(99),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [aux_sym_class_or_interface_type_repeat1] = STATE(101),
    [aux_sym_dims_repeat1] = STATE(102),
    [sym__semicolon] = ACTIONS(225),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(852),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(193),
    [sym_comment] = ACTIONS(50),
  },
  [294] = {
    [anon_sym_RBRACE] = ACTIONS(854),
    [anon_sym_AT] = ACTIONS(854),
    [anon_sym_static] = ACTIONS(856),
    [anon_sym_class] = ACTIONS(856),
    [anon_sym_public] = ACTIONS(856),
    [anon_sym_protected] = ACTIONS(856),
    [anon_sym_private] = ACTIONS(856),
    [anon_sym_abstract] = ACTIONS(856),
    [anon_sym_final] = ACTIONS(856),
    [anon_sym_strictfp] = ACTIONS(856),
    [anon_sym_default] = ACTIONS(856),
    [anon_sym_interface] = ACTIONS(856),
    [sym_identifier] = ACTIONS(858),
    [sym_comment] = ACTIONS(50),
  },
  [295] = {
    [anon_sym_RBRACE] = ACTIONS(860),
    [anon_sym_AT] = ACTIONS(860),
    [anon_sym_static] = ACTIONS(862),
    [anon_sym_class] = ACTIONS(862),
    [anon_sym_public] = ACTIONS(862),
    [anon_sym_protected] = ACTIONS(862),
    [anon_sym_private] = ACTIONS(862),
    [anon_sym_abstract] = ACTIONS(862),
    [anon_sym_final] = ACTIONS(862),
    [anon_sym_strictfp] = ACTIONS(862),
    [anon_sym_default] = ACTIONS(862),
    [anon_sym_interface] = ACTIONS(862),
    [sym_identifier] = ACTIONS(864),
    [sym_comment] = ACTIONS(50),
  },
  [296] = {
    [sym__semicolon] = ACTIONS(866),
    [sym_comment] = ACTIONS(50),
  },
  [297] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(216),
    [sym_marker_annotation] = STATE(216),
    [sym_single_element_annotation] = STATE(216),
    [sym_modifier] = STATE(87),
    [sym_variable_declarator_list] = STATE(429),
    [sym_variable_declarator] = STATE(247),
    [sym_variable_declarator_id] = STATE(96),
    [anon_sym_AT] = ACTIONS(712),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(714),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(716),
    [sym_identifier] = ACTIONS(868),
    [sym_comment] = ACTIONS(50),
  },
  [298] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(216),
    [sym_marker_annotation] = STATE(216),
    [sym_single_element_annotation] = STATE(216),
    [sym_class_declaration] = STATE(294),
    [sym_normal_class_declaration] = STATE(217),
    [sym_modifier] = STATE(32),
    [sym_interface_declaration] = STATE(294),
    [sym_annotation_type_declaration] = STATE(222),
    [sym_annotation_type_member_declaration] = STATE(431),
    [sym_annotation_type_element_declaration] = STATE(294),
    [sym_normal_interface_declaration] = STATE(222),
    [sym_constant_declaration] = STATE(294),
    [sym_variable_declarator_list] = STATE(296),
    [sym_variable_declarator] = STATE(247),
    [sym_variable_declarator_id] = STATE(96),
    [aux_sym_normal_class_declaration_repeat1] = STATE(297),
    [anon_sym_RBRACE] = ACTIONS(870),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(460),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(462),
    [sym_identifier] = ACTIONS(594),
    [sym_comment] = ACTIONS(50),
  },
  [299] = {
    [sym__literal] = STATE(434),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(435),
    [sym__annotation] = STATE(434),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym_element_value] = STATE(436),
    [sym_element_value_array_initializer] = STATE(434),
    [sym_conditional_expression] = STATE(434),
    [sym_conditional_or_expression] = STATE(437),
    [sym_conditional_and_expression] = STATE(438),
    [sym_inclusive_or_expression] = STATE(439),
    [sym_exclusive_or_expression] = STATE(440),
    [sym_and_expression] = STATE(441),
    [sym_relational_expression] = STATE(442),
    [sym_equality_expression] = STATE(443),
    [sym_shift_expression] = STATE(444),
    [sym_additive_expression] = STATE(445),
    [sym_multiplicative_expression] = STATE(446),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(872),
    [anon_sym_false] = ACTIONS(872),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [anon_sym_LBRACE] = ACTIONS(876),
    [anon_sym_AT] = ACTIONS(193),
    [sym_comment] = ACTIONS(50),
  },
  [300] = {
    [sym__semicolon] = ACTIONS(878),
    [anon_sym_RPAREN] = ACTIONS(878),
    [anon_sym_COMMA] = ACTIONS(878),
    [anon_sym_RBRACE] = ACTIONS(878),
    [anon_sym_LBRACK] = ACTIONS(878),
    [anon_sym_AT] = ACTIONS(878),
    [anon_sym_open] = ACTIONS(878),
    [anon_sym_module] = ACTIONS(878),
    [anon_sym_static] = ACTIONS(878),
    [anon_sym_package] = ACTIONS(878),
    [anon_sym_class] = ACTIONS(878),
    [anon_sym_public] = ACTIONS(878),
    [anon_sym_protected] = ACTIONS(878),
    [anon_sym_private] = ACTIONS(878),
    [anon_sym_abstract] = ACTIONS(878),
    [anon_sym_final] = ACTIONS(878),
    [anon_sym_strictfp] = ACTIONS(878),
    [anon_sym_default] = ACTIONS(878),
    [anon_sym_void] = ACTIONS(878),
    [anon_sym_interface] = ACTIONS(878),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(878),
    [sym_comment] = ACTIONS(50),
  },
  [301] = {
    [sym__semicolon] = ACTIONS(880),
    [anon_sym_RPAREN] = ACTIONS(880),
    [anon_sym_COMMA] = ACTIONS(880),
    [anon_sym_RBRACE] = ACTIONS(880),
    [anon_sym_LBRACK] = ACTIONS(880),
    [anon_sym_AT] = ACTIONS(880),
    [anon_sym_open] = ACTIONS(880),
    [anon_sym_module] = ACTIONS(880),
    [anon_sym_static] = ACTIONS(880),
    [anon_sym_package] = ACTIONS(880),
    [anon_sym_class] = ACTIONS(880),
    [anon_sym_public] = ACTIONS(880),
    [anon_sym_protected] = ACTIONS(880),
    [anon_sym_private] = ACTIONS(880),
    [anon_sym_abstract] = ACTIONS(880),
    [anon_sym_final] = ACTIONS(880),
    [anon_sym_strictfp] = ACTIONS(880),
    [anon_sym_default] = ACTIONS(880),
    [anon_sym_void] = ACTIONS(880),
    [anon_sym_interface] = ACTIONS(880),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(880),
    [sym_comment] = ACTIONS(50),
  },
  [302] = {
    [sym_element_value_pair] = STATE(448),
    [sym_identifier] = ACTIONS(882),
    [sym_comment] = ACTIONS(50),
  },
  [303] = {
    [anon_sym_RPAREN] = ACTIONS(884),
    [anon_sym_COMMA] = ACTIONS(886),
    [sym_comment] = ACTIONS(50),
  },
  [304] = {
    [ts_builtin_sym_end] = ACTIONS(888),
    [sym_decimal_integer_literal] = ACTIONS(890),
    [sym_hex_integer_literal] = ACTIONS(890),
    [sym_octal_integer_literal] = ACTIONS(890),
    [sym_binary_integer_literal] = ACTIONS(890),
    [sym_decimal_floating_point_literal] = ACTIONS(890),
    [sym_hex_floating_point_literal] = ACTIONS(892),
    [anon_sym_true] = ACTIONS(890),
    [anon_sym_false] = ACTIONS(890),
    [anon_sym_SQUOTE] = ACTIONS(888),
    [sym_string_literal] = ACTIONS(888),
    [sym_null_literal] = ACTIONS(890),
    [anon_sym_LPAREN] = ACTIONS(888),
    [anon_sym_BANG] = ACTIONS(888),
    [anon_sym_TILDE] = ACTIONS(888),
    [anon_sym_PLUS_PLUS] = ACTIONS(888),
    [anon_sym_DASH_DASH] = ACTIONS(888),
    [anon_sym_RBRACE] = ACTIONS(888),
    [anon_sym_AT] = ACTIONS(888),
    [anon_sym_open] = ACTIONS(890),
    [anon_sym_module] = ACTIONS(890),
    [anon_sym_static] = ACTIONS(890),
    [anon_sym_package] = ACTIONS(890),
    [anon_sym_import] = ACTIONS(890),
    [anon_sym_class] = ACTIONS(890),
    [anon_sym_public] = ACTIONS(890),
    [anon_sym_protected] = ACTIONS(890),
    [anon_sym_private] = ACTIONS(890),
    [anon_sym_abstract] = ACTIONS(890),
    [anon_sym_final] = ACTIONS(890),
    [anon_sym_strictfp] = ACTIONS(890),
    [anon_sym_default] = ACTIONS(890),
    [anon_sym_interface] = ACTIONS(890),
    [sym_identifier] = ACTIONS(892),
    [sym_comment] = ACTIONS(50),
  },
  [305] = {
    [sym_module_directive] = STATE(316),
    [anon_sym_RBRACE] = ACTIONS(894),
    [anon_sym_requires] = ACTIONS(420),
    [anon_sym_exports] = ACTIONS(422),
    [anon_sym_opens] = ACTIONS(422),
    [anon_sym_uses] = ACTIONS(424),
    [anon_sym_provides] = ACTIONS(426),
    [sym_comment] = ACTIONS(50),
  },
  [306] = {
    [sym__semicolon] = ACTIONS(896),
    [anon_sym_LBRACE] = ACTIONS(896),
    [anon_sym_DOT] = ACTIONS(896),
    [sym_comment] = ACTIONS(50),
  },
  [307] = {
    [anon_sym_transitive] = ACTIONS(898),
    [anon_sym_static] = ACTIONS(898),
    [sym_identifier] = ACTIONS(900),
    [sym_comment] = ACTIONS(50),
  },
  [308] = {
    [sym__semicolon] = ACTIONS(902),
    [anon_sym_COMMA] = ACTIONS(902),
    [anon_sym_DOT] = ACTIONS(902),
    [sym_comment] = ACTIONS(50),
  },
  [309] = {
    [anon_sym_transitive] = ACTIONS(904),
    [anon_sym_static] = ACTIONS(904),
    [sym_identifier] = ACTIONS(906),
    [sym_comment] = ACTIONS(50),
  },
  [310] = {
    [sym__semicolon] = ACTIONS(908),
    [anon_sym_DOT] = ACTIONS(910),
    [sym_comment] = ACTIONS(50),
  },
  [311] = {
    [sym_requires_modifier] = STATE(453),
    [sym_module_name] = STATE(454),
    [anon_sym_transitive] = ACTIONS(630),
    [anon_sym_static] = ACTIONS(630),
    [sym_identifier] = ACTIONS(632),
    [sym_comment] = ACTIONS(50),
  },
  [312] = {
    [sym__semicolon] = ACTIONS(272),
    [anon_sym_COMMA] = ACTIONS(272),
    [anon_sym_DOT] = ACTIONS(272),
    [anon_sym_to] = ACTIONS(274),
    [sym_identifier] = ACTIONS(356),
    [sym_comment] = ACTIONS(50),
  },
  [313] = {
    [sym_module_name] = STATE(458),
    [aux_sym_module_directive_repeat2] = STATE(459),
    [sym__semicolon] = ACTIONS(908),
    [anon_sym_COMMA] = ACTIONS(912),
    [anon_sym_DOT] = ACTIONS(914),
    [anon_sym_to] = ACTIONS(916),
    [sym_identifier] = ACTIONS(632),
    [sym_comment] = ACTIONS(50),
  },
  [314] = {
    [sym__semicolon] = ACTIONS(908),
    [anon_sym_DOT] = ACTIONS(918),
    [sym_comment] = ACTIONS(50),
  },
  [315] = {
    [anon_sym_DOT] = ACTIONS(918),
    [anon_sym_with] = ACTIONS(920),
    [sym_comment] = ACTIONS(50),
  },
  [316] = {
    [anon_sym_RBRACE] = ACTIONS(922),
    [anon_sym_requires] = ACTIONS(922),
    [anon_sym_exports] = ACTIONS(922),
    [anon_sym_opens] = ACTIONS(922),
    [anon_sym_uses] = ACTIONS(922),
    [anon_sym_provides] = ACTIONS(922),
    [sym_comment] = ACTIONS(50),
  },
  [317] = {
    [sym__semicolon] = ACTIONS(924),
    [sym_comment] = ACTIONS(50),
  },
  [318] = {
    [sym__semicolon] = ACTIONS(926),
    [anon_sym_DOT] = ACTIONS(614),
    [sym_comment] = ACTIONS(50),
  },
  [319] = {
    [ts_builtin_sym_end] = ACTIONS(928),
    [sym_decimal_integer_literal] = ACTIONS(930),
    [sym_hex_integer_literal] = ACTIONS(930),
    [sym_octal_integer_literal] = ACTIONS(930),
    [sym_binary_integer_literal] = ACTIONS(930),
    [sym_decimal_floating_point_literal] = ACTIONS(930),
    [sym_hex_floating_point_literal] = ACTIONS(932),
    [anon_sym_true] = ACTIONS(930),
    [anon_sym_false] = ACTIONS(930),
    [anon_sym_SQUOTE] = ACTIONS(928),
    [sym_string_literal] = ACTIONS(928),
    [sym_null_literal] = ACTIONS(930),
    [anon_sym_LPAREN] = ACTIONS(928),
    [anon_sym_BANG] = ACTIONS(928),
    [anon_sym_TILDE] = ACTIONS(928),
    [anon_sym_PLUS_PLUS] = ACTIONS(928),
    [anon_sym_DASH_DASH] = ACTIONS(928),
    [anon_sym_RBRACE] = ACTIONS(928),
    [anon_sym_AT] = ACTIONS(928),
    [anon_sym_open] = ACTIONS(930),
    [anon_sym_module] = ACTIONS(930),
    [anon_sym_static] = ACTIONS(930),
    [anon_sym_package] = ACTIONS(930),
    [anon_sym_import] = ACTIONS(930),
    [anon_sym_class] = ACTIONS(930),
    [anon_sym_public] = ACTIONS(930),
    [anon_sym_protected] = ACTIONS(930),
    [anon_sym_private] = ACTIONS(930),
    [anon_sym_abstract] = ACTIONS(930),
    [anon_sym_final] = ACTIONS(930),
    [anon_sym_strictfp] = ACTIONS(930),
    [anon_sym_default] = ACTIONS(930),
    [anon_sym_interface] = ACTIONS(930),
    [sym_identifier] = ACTIONS(932),
    [sym_comment] = ACTIONS(50),
  },
  [320] = {
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_DOT] = ACTIONS(272),
    [anon_sym_AT] = ACTIONS(272),
    [sym_identifier] = ACTIONS(274),
    [sym_comment] = ACTIONS(50),
  },
  [321] = {
    [anon_sym_LPAREN] = ACTIONS(934),
    [anon_sym_DOT] = ACTIONS(936),
    [anon_sym_AT] = ACTIONS(276),
    [sym_identifier] = ACTIONS(362),
    [sym_comment] = ACTIONS(50),
  },
  [322] = {
    [sym_class_or_interface_type] = STATE(465),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [aux_sym_class_or_interface_type_repeat1] = STATE(227),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(50),
  },
  [323] = {
    [anon_sym_GT] = ACTIONS(938),
    [anon_sym_COMMA] = ACTIONS(938),
    [sym_comment] = ACTIONS(50),
  },
  [324] = {
    [anon_sym_LBRACE] = ACTIONS(940),
    [anon_sym_AT] = ACTIONS(940),
    [anon_sym_extends] = ACTIONS(940),
    [anon_sym_implements] = ACTIONS(940),
    [anon_sym_void] = ACTIONS(940),
    [sym_comment] = ACTIONS(50),
  },
  [325] = {
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [sym_type_parameter] = STATE(466),
    [aux_sym_class_or_interface_type_repeat1] = STATE(207),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(448),
    [sym_comment] = ACTIONS(50),
  },
  [326] = {
    [anon_sym_GT] = ACTIONS(942),
    [anon_sym_COMMA] = ACTIONS(944),
    [sym_comment] = ACTIONS(50),
  },
  [327] = {
    [sym_type_bound] = STATE(468),
    [anon_sym_GT] = ACTIONS(938),
    [anon_sym_COMMA] = ACTIONS(938),
    [anon_sym_extends] = ACTIONS(654),
    [sym_comment] = ACTIONS(50),
  },
  [328] = {
    [anon_sym_AT] = ACTIONS(332),
    [sym_identifier] = ACTIONS(392),
    [sym_comment] = ACTIONS(50),
  },
  [329] = {
    [anon_sym_GT] = ACTIONS(946),
    [sym_comment] = ACTIONS(50),
  },
  [330] = {
    [anon_sym_LPAREN] = ACTIONS(948),
    [sym_comment] = ACTIONS(50),
  },
  [331] = {
    [sym__semicolon] = ACTIONS(950),
    [anon_sym_EQ] = ACTIONS(952),
    [anon_sym_PLUS_EQ] = ACTIONS(950),
    [anon_sym_DASH_EQ] = ACTIONS(950),
    [anon_sym_STAR_EQ] = ACTIONS(950),
    [anon_sym_SLASH_EQ] = ACTIONS(950),
    [anon_sym_AMP_EQ] = ACTIONS(950),
    [anon_sym_PIPE_EQ] = ACTIONS(950),
    [anon_sym_CARET_EQ] = ACTIONS(950),
    [anon_sym_PERCENT_EQ] = ACTIONS(950),
    [anon_sym_LT_LT_EQ] = ACTIONS(950),
    [anon_sym_GT_GT_EQ] = ACTIONS(950),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(950),
    [anon_sym_GT] = ACTIONS(952),
    [anon_sym_LT] = ACTIONS(952),
    [anon_sym_EQ_EQ] = ACTIONS(950),
    [anon_sym_GT_EQ] = ACTIONS(950),
    [anon_sym_LT_EQ] = ACTIONS(950),
    [anon_sym_BANG_EQ] = ACTIONS(950),
    [anon_sym_AMP_AMP] = ACTIONS(950),
    [anon_sym_PIPE_PIPE] = ACTIONS(950),
    [anon_sym_PLUS] = ACTIONS(952),
    [anon_sym_DASH] = ACTIONS(952),
    [anon_sym_STAR] = ACTIONS(952),
    [anon_sym_SLASH] = ACTIONS(952),
    [anon_sym_AMP] = ACTIONS(952),
    [anon_sym_PIPE] = ACTIONS(952),
    [anon_sym_CARET] = ACTIONS(952),
    [anon_sym_PERCENT] = ACTIONS(952),
    [anon_sym_LT_LT] = ACTIONS(952),
    [anon_sym_GT_GT] = ACTIONS(952),
    [anon_sym_GT_GT_GT] = ACTIONS(952),
    [anon_sym_RPAREN] = ACTIONS(950),
    [anon_sym_COMMA] = ACTIONS(950),
    [anon_sym_QMARK] = ACTIONS(950),
    [anon_sym_COLON] = ACTIONS(950),
    [anon_sym_PLUS_PLUS] = ACTIONS(950),
    [anon_sym_DASH_DASH] = ACTIONS(950),
    [anon_sym_LBRACE] = ACTIONS(950),
    [anon_sym_RBRACE] = ACTIONS(950),
    [anon_sym_RBRACK] = ACTIONS(950),
    [anon_sym_AT] = ACTIONS(950),
    [anon_sym_static] = ACTIONS(952),
    [anon_sym_class] = ACTIONS(952),
    [anon_sym_public] = ACTIONS(952),
    [anon_sym_protected] = ACTIONS(952),
    [anon_sym_private] = ACTIONS(952),
    [anon_sym_abstract] = ACTIONS(952),
    [anon_sym_final] = ACTIONS(952),
    [anon_sym_strictfp] = ACTIONS(952),
    [anon_sym_default] = ACTIONS(952),
    [anon_sym_interface] = ACTIONS(952),
    [sym_identifier] = ACTIONS(954),
    [sym_comment] = ACTIONS(50),
  },
  [332] = {
    [sym_package_or_type_name] = STATE(472),
    [sym_identifier] = ACTIONS(956),
    [sym_comment] = ACTIONS(50),
  },
  [333] = {
    [anon_sym_AT] = ACTIONS(88),
    [anon_sym_static] = ACTIONS(90),
    [anon_sym_class] = ACTIONS(90),
    [anon_sym_public] = ACTIONS(90),
    [anon_sym_protected] = ACTIONS(90),
    [anon_sym_private] = ACTIONS(90),
    [anon_sym_abstract] = ACTIONS(90),
    [anon_sym_final] = ACTIONS(90),
    [anon_sym_strictfp] = ACTIONS(90),
    [anon_sym_default] = ACTIONS(90),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(50),
  },
  [334] = {
    [sym_identifier] = ACTIONS(958),
    [sym_comment] = ACTIONS(50),
  },
  [335] = {
    [anon_sym_if] = ACTIONS(960),
    [anon_sym_RBRACE] = ACTIONS(960),
    [anon_sym_AT] = ACTIONS(960),
    [anon_sym_static] = ACTIONS(960),
    [anon_sym_class] = ACTIONS(960),
    [anon_sym_public] = ACTIONS(960),
    [anon_sym_protected] = ACTIONS(960),
    [anon_sym_private] = ACTIONS(960),
    [anon_sym_abstract] = ACTIONS(960),
    [anon_sym_final] = ACTIONS(960),
    [anon_sym_strictfp] = ACTIONS(960),
    [anon_sym_default] = ACTIONS(960),
    [sym_comment] = ACTIONS(50),
  },
  [336] = {
    [anon_sym_if] = ACTIONS(962),
    [anon_sym_RBRACE] = ACTIONS(962),
    [anon_sym_AT] = ACTIONS(962),
    [anon_sym_static] = ACTIONS(962),
    [anon_sym_class] = ACTIONS(962),
    [anon_sym_public] = ACTIONS(962),
    [anon_sym_protected] = ACTIONS(962),
    [anon_sym_private] = ACTIONS(962),
    [anon_sym_abstract] = ACTIONS(962),
    [anon_sym_final] = ACTIONS(962),
    [anon_sym_strictfp] = ACTIONS(962),
    [anon_sym_default] = ACTIONS(962),
    [sym_comment] = ACTIONS(50),
  },
  [337] = {
    [anon_sym_AT] = ACTIONS(153),
    [anon_sym_static] = ACTIONS(238),
    [anon_sym_class] = ACTIONS(238),
    [anon_sym_public] = ACTIONS(238),
    [anon_sym_protected] = ACTIONS(238),
    [anon_sym_private] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(238),
    [anon_sym_final] = ACTIONS(238),
    [anon_sym_strictfp] = ACTIONS(238),
    [anon_sym_default] = ACTIONS(238),
    [sym_identifier] = ACTIONS(240),
    [sym_comment] = ACTIONS(50),
  },
  [338] = {
    [anon_sym_if] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_elseif] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(173),
    [anon_sym_static] = ACTIONS(173),
    [anon_sym_class] = ACTIONS(173),
    [anon_sym_public] = ACTIONS(173),
    [anon_sym_protected] = ACTIONS(173),
    [anon_sym_private] = ACTIONS(173),
    [anon_sym_abstract] = ACTIONS(173),
    [anon_sym_final] = ACTIONS(173),
    [anon_sym_strictfp] = ACTIONS(173),
    [anon_sym_default] = ACTIONS(173),
    [sym_comment] = ACTIONS(50),
  },
  [339] = {
    [sym_variable_declarator_list] = STATE(474),
    [sym_variable_declarator] = STATE(247),
    [sym_variable_declarator_id] = STATE(96),
    [anon_sym_AT] = ACTIONS(179),
    [anon_sym_static] = ACTIONS(181),
    [anon_sym_class] = ACTIONS(181),
    [anon_sym_public] = ACTIONS(181),
    [anon_sym_protected] = ACTIONS(181),
    [anon_sym_private] = ACTIONS(181),
    [anon_sym_abstract] = ACTIONS(181),
    [anon_sym_final] = ACTIONS(181),
    [anon_sym_strictfp] = ACTIONS(181),
    [anon_sym_default] = ACTIONS(181),
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(50),
  },
  [340] = {
    [anon_sym_RBRACE] = ACTIONS(964),
    [sym_comment] = ACTIONS(50),
  },
  [341] = {
    [sym_statement] = STATE(335),
    [sym_if_then_statement] = STATE(336),
    [sym__annotation] = STATE(333),
    [sym_normal_annotation] = STATE(337),
    [sym_marker_annotation] = STATE(337),
    [sym_single_element_annotation] = STATE(337),
    [sym_class_declaration] = STATE(335),
    [sym_normal_class_declaration] = STATE(338),
    [sym_modifier] = STATE(339),
    [sym_block_statement] = STATE(476),
    [sym_local_variable_declaration_statement] = STATE(335),
    [sym_local_variable_declaration] = STATE(342),
    [aux_sym_normal_class_declaration_repeat1] = STATE(343),
    [aux_sym_block_statements_repeat1] = STATE(477),
    [anon_sym_if] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(966),
    [anon_sym_AT] = ACTIONS(674),
    [anon_sym_static] = ACTIONS(676),
    [anon_sym_class] = ACTIONS(678),
    [anon_sym_public] = ACTIONS(676),
    [anon_sym_protected] = ACTIONS(676),
    [anon_sym_private] = ACTIONS(676),
    [anon_sym_abstract] = ACTIONS(676),
    [anon_sym_final] = ACTIONS(676),
    [anon_sym_strictfp] = ACTIONS(676),
    [anon_sym_default] = ACTIONS(676),
    [sym_comment] = ACTIONS(50),
  },
  [342] = {
    [sym__semicolon] = ACTIONS(968),
    [sym_comment] = ACTIONS(50),
  },
  [343] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym_modifier] = STATE(87),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_static] = ACTIONS(201),
    [anon_sym_class] = ACTIONS(970),
    [anon_sym_public] = ACTIONS(201),
    [anon_sym_protected] = ACTIONS(201),
    [anon_sym_private] = ACTIONS(201),
    [anon_sym_abstract] = ACTIONS(201),
    [anon_sym_final] = ACTIONS(201),
    [anon_sym_strictfp] = ACTIONS(201),
    [anon_sym_default] = ACTIONS(201),
    [sym_comment] = ACTIONS(50),
  },
  [344] = {
    [sym_identifier] = ACTIONS(972),
    [sym_comment] = ACTIONS(50),
  },
  [345] = {
    [anon_sym_LT] = ACTIONS(272),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_DOT] = ACTIONS(272),
    [anon_sym_AT] = ACTIONS(272),
    [anon_sym_static] = ACTIONS(274),
    [anon_sym_class] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_abstract] = ACTIONS(274),
    [anon_sym_final] = ACTIONS(274),
    [anon_sym_strictfp] = ACTIONS(274),
    [anon_sym_default] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(274),
    [sym_identifier] = ACTIONS(356),
    [sym_comment] = ACTIONS(50),
  },
  [346] = {
    [anon_sym_LT] = ACTIONS(276),
    [anon_sym_LPAREN] = ACTIONS(974),
    [anon_sym_DOT] = ACTIONS(976),
    [anon_sym_AT] = ACTIONS(276),
    [anon_sym_static] = ACTIONS(362),
    [anon_sym_class] = ACTIONS(362),
    [anon_sym_public] = ACTIONS(362),
    [anon_sym_protected] = ACTIONS(362),
    [anon_sym_private] = ACTIONS(362),
    [anon_sym_abstract] = ACTIONS(362),
    [anon_sym_final] = ACTIONS(362),
    [anon_sym_strictfp] = ACTIONS(362),
    [anon_sym_default] = ACTIONS(362),
    [anon_sym_interface] = ACTIONS(362),
    [sym_identifier] = ACTIONS(364),
    [sym_comment] = ACTIONS(50),
  },
  [347] = {
    [sym_type_parameters] = STATE(484),
    [sym_superclass] = STATE(485),
    [sym_super_interfaces] = STATE(486),
    [sym_class_body] = STATE(487),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(978),
    [anon_sym_extends] = ACTIONS(300),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [348] = {
    [sym_type_parameters] = STATE(489),
    [sym_extends_interfaces] = STATE(490),
    [sym_interface_body] = STATE(491),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(980),
    [anon_sym_extends] = ACTIONS(306),
    [sym_comment] = ACTIONS(50),
  },
  [349] = {
    [anon_sym_LBRACE] = ACTIONS(982),
    [anon_sym_throws] = ACTIONS(982),
    [sym_comment] = ACTIONS(50),
  },
  [350] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_modifier] = STATE(49),
    [sym_variable_declarator_id] = STATE(50),
    [sym_formal_parameter_list] = STATE(492),
    [sym_formal_parameter] = STATE(51),
    [sym_receiver_parameter] = STATE(52),
    [sym_last_formal_parameter] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(54),
    [aux_sym_normal_class_declaration_repeat1] = STATE(55),
    [anon_sym_AT] = ACTIONS(68),
    [anon_sym_static] = ACTIONS(70),
    [anon_sym_public] = ACTIONS(70),
    [anon_sym_protected] = ACTIONS(70),
    [anon_sym_private] = ACTIONS(70),
    [anon_sym_abstract] = ACTIONS(70),
    [anon_sym_final] = ACTIONS(70),
    [anon_sym_strictfp] = ACTIONS(70),
    [anon_sym_default] = ACTIONS(70),
    [anon_sym_this] = ACTIONS(72),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(50),
  },
  [351] = {
    [sym__literal] = STATE(504),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_statement] = STATE(335),
    [sym_if_then_statement] = STATE(336),
    [sym_type_arguments] = STATE(505),
    [sym_class_or_interface_type] = STATE(506),
    [sym_type_variable] = STATE(507),
    [sym_primitive_type] = STATE(507),
    [sym_integral_type] = STATE(495),
    [sym_floating_point_type] = STATE(495),
    [sym__annotation] = STATE(508),
    [sym_normal_annotation] = STATE(509),
    [sym_marker_annotation] = STATE(509),
    [sym_single_element_annotation] = STATE(509),
    [sym_package_or_type_name] = STATE(510),
    [sym_class_declaration] = STATE(335),
    [sym_normal_class_declaration] = STATE(338),
    [sym_modifier] = STATE(339),
    [sym_explicit_constructor_invocation] = STATE(511),
    [sym_ambiguous_name] = STATE(512),
    [sym_primary] = STATE(513),
    [sym_array_creation_expression] = STATE(514),
    [sym_primary_no_new_array] = STATE(515),
    [sym_class_literal] = STATE(504),
    [sym_class_instance_creation_expression] = STATE(504),
    [sym_unqualified_class_instance_creation_expression] = STATE(516),
    [sym_field_access] = STATE(504),
    [sym_array_access] = STATE(504),
    [sym_method_invocation] = STATE(504),
    [sym_method_reference] = STATE(504),
    [sym_array_type] = STATE(517),
    [sym_block_statements] = STATE(518),
    [sym_block_statement] = STATE(341),
    [sym_local_variable_declaration_statement] = STATE(335),
    [sym_local_variable_declaration] = STATE(342),
    [sym_method_name] = STATE(519),
    [aux_sym_class_or_interface_type_repeat1] = STATE(520),
    [aux_sym_normal_class_declaration_repeat1] = STATE(343),
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
    [anon_sym_LT] = ACTIONS(722),
    [anon_sym_LPAREN] = ACTIONS(984),
    [anon_sym_if] = ACTIONS(986),
    [anon_sym_RBRACE] = ACTIONS(988),
    [anon_sym_boolean] = ACTIONS(990),
    [anon_sym_byte] = ACTIONS(992),
    [anon_sym_short] = ACTIONS(992),
    [anon_sym_int] = ACTIONS(992),
    [anon_sym_long] = ACTIONS(992),
    [anon_sym_char] = ACTIONS(992),
    [anon_sym_float] = ACTIONS(994),
    [anon_sym_double] = ACTIONS(994),
    [anon_sym_AT] = ACTIONS(996),
    [anon_sym_static] = ACTIONS(998),
    [anon_sym_class] = ACTIONS(1000),
    [anon_sym_public] = ACTIONS(998),
    [anon_sym_protected] = ACTIONS(998),
    [anon_sym_private] = ACTIONS(998),
    [anon_sym_abstract] = ACTIONS(998),
    [anon_sym_final] = ACTIONS(998),
    [anon_sym_strictfp] = ACTIONS(998),
    [anon_sym_default] = ACTIONS(998),
    [anon_sym_this] = ACTIONS(1002),
    [anon_sym_super] = ACTIONS(1004),
    [anon_sym_new] = ACTIONS(1006),
    [anon_sym_void] = ACTIONS(1008),
    [sym_identifier] = ACTIONS(1010),
    [sym_comment] = ACTIONS(50),
  },
  [352] = {
    [sym_class_or_interface_type] = STATE(522),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [sym_exception_type_list] = STATE(523),
    [sym_exception_type] = STATE(524),
    [aux_sym_class_or_interface_type_repeat1] = STATE(525),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(1012),
    [sym_comment] = ACTIONS(50),
  },
  [353] = {
    [sym__semicolon] = ACTIONS(1014),
    [anon_sym_LT] = ACTIONS(1014),
    [anon_sym_LBRACE] = ACTIONS(1014),
    [anon_sym_RBRACE] = ACTIONS(1014),
    [anon_sym_AT] = ACTIONS(1014),
    [anon_sym_static] = ACTIONS(1016),
    [anon_sym_class] = ACTIONS(1016),
    [anon_sym_public] = ACTIONS(1016),
    [anon_sym_protected] = ACTIONS(1016),
    [anon_sym_private] = ACTIONS(1016),
    [anon_sym_abstract] = ACTIONS(1016),
    [anon_sym_final] = ACTIONS(1016),
    [anon_sym_strictfp] = ACTIONS(1016),
    [anon_sym_default] = ACTIONS(1016),
    [anon_sym_interface] = ACTIONS(1016),
    [sym_identifier] = ACTIONS(1018),
    [sym_comment] = ACTIONS(50),
  },
  [354] = {
    [sym_constructor_body] = STATE(526),
    [anon_sym_LBRACE] = ACTIONS(708),
    [sym_comment] = ACTIONS(50),
  },
  [355] = {
    [sym_package_or_type_name] = STATE(346),
    [anon_sym_interface] = ACTIONS(1020),
    [sym_identifier] = ACTIONS(688),
    [sym_comment] = ACTIONS(50),
  },
  [356] = {
    [sym_identifier] = ACTIONS(1022),
    [sym_comment] = ACTIONS(50),
  },
  [357] = {
    [sym_identifier] = ACTIONS(1024),
    [sym_comment] = ACTIONS(50),
  },
  [358] = {
    [sym_constructor_body] = STATE(526),
    [sym_throws] = STATE(530),
    [anon_sym_LBRACE] = ACTIONS(708),
    [anon_sym_throws] = ACTIONS(710),
    [sym_comment] = ACTIONS(50),
  },
  [359] = {
    [ts_builtin_sym_end] = ACTIONS(1026),
    [sym_decimal_integer_literal] = ACTIONS(1028),
    [sym_hex_integer_literal] = ACTIONS(1028),
    [sym_octal_integer_literal] = ACTIONS(1028),
    [sym_binary_integer_literal] = ACTIONS(1028),
    [sym_decimal_floating_point_literal] = ACTIONS(1028),
    [sym_hex_floating_point_literal] = ACTIONS(1030),
    [anon_sym_true] = ACTIONS(1028),
    [anon_sym_false] = ACTIONS(1028),
    [anon_sym_SQUOTE] = ACTIONS(1026),
    [sym_string_literal] = ACTIONS(1026),
    [sym_null_literal] = ACTIONS(1028),
    [anon_sym_LPAREN] = ACTIONS(1026),
    [anon_sym_BANG] = ACTIONS(1026),
    [anon_sym_TILDE] = ACTIONS(1026),
    [anon_sym_PLUS_PLUS] = ACTIONS(1026),
    [anon_sym_DASH_DASH] = ACTIONS(1026),
    [anon_sym_RBRACE] = ACTIONS(1026),
    [anon_sym_AT] = ACTIONS(1026),
    [anon_sym_open] = ACTIONS(1028),
    [anon_sym_module] = ACTIONS(1028),
    [anon_sym_static] = ACTIONS(1028),
    [anon_sym_package] = ACTIONS(1028),
    [anon_sym_import] = ACTIONS(1028),
    [anon_sym_class] = ACTIONS(1028),
    [anon_sym_public] = ACTIONS(1028),
    [anon_sym_protected] = ACTIONS(1028),
    [anon_sym_private] = ACTIONS(1028),
    [anon_sym_abstract] = ACTIONS(1028),
    [anon_sym_final] = ACTIONS(1028),
    [anon_sym_strictfp] = ACTIONS(1028),
    [anon_sym_default] = ACTIONS(1028),
    [anon_sym_interface] = ACTIONS(1028),
    [sym_identifier] = ACTIONS(1030),
    [sym_comment] = ACTIONS(50),
  },
  [360] = {
    [sym__semicolon] = ACTIONS(1032),
    [anon_sym_LT] = ACTIONS(1032),
    [anon_sym_LBRACE] = ACTIONS(1032),
    [anon_sym_RBRACE] = ACTIONS(1032),
    [anon_sym_AT] = ACTIONS(1032),
    [anon_sym_static] = ACTIONS(1034),
    [anon_sym_class] = ACTIONS(1034),
    [anon_sym_public] = ACTIONS(1034),
    [anon_sym_protected] = ACTIONS(1034),
    [anon_sym_private] = ACTIONS(1034),
    [anon_sym_abstract] = ACTIONS(1034),
    [anon_sym_final] = ACTIONS(1034),
    [anon_sym_strictfp] = ACTIONS(1034),
    [anon_sym_default] = ACTIONS(1034),
    [anon_sym_interface] = ACTIONS(1034),
    [sym_identifier] = ACTIONS(1036),
    [sym_comment] = ACTIONS(50),
  },
  [361] = {
    [sym_type_argument] = STATE(533),
    [sym_reference_type] = STATE(534),
    [sym_class_or_interface_type] = STATE(535),
    [sym_primitive_type] = STATE(536),
    [sym_integral_type] = STATE(531),
    [sym_floating_point_type] = STATE(531),
    [sym__annotation] = STATE(537),
    [sym_normal_annotation] = STATE(538),
    [sym_marker_annotation] = STATE(538),
    [sym_single_element_annotation] = STATE(538),
    [aux_sym_class_or_interface_type_repeat1] = STATE(539),
    [anon_sym_boolean] = ACTIONS(1038),
    [anon_sym_byte] = ACTIONS(992),
    [anon_sym_short] = ACTIONS(992),
    [anon_sym_int] = ACTIONS(992),
    [anon_sym_long] = ACTIONS(992),
    [anon_sym_char] = ACTIONS(992),
    [anon_sym_float] = ACTIONS(994),
    [anon_sym_double] = ACTIONS(994),
    [anon_sym_AT] = ACTIONS(1040),
    [sym_identifier] = ACTIONS(1042),
    [sym_comment] = ACTIONS(50),
  },
  [362] = {
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [aux_sym_class_or_interface_type_repeat1] = STATE(541),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(1044),
    [sym_comment] = ACTIONS(50),
  },
  [363] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(542),
    [anon_sym_GT] = ACTIONS(1046),
    [anon_sym_AMP] = ACTIONS(1046),
    [anon_sym_COMMA] = ACTIONS(1046),
    [anon_sym_LBRACE] = ACTIONS(1046),
    [anon_sym_DOT] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(1046),
    [anon_sym_AT] = ACTIONS(1046),
    [anon_sym_implements] = ACTIONS(1046),
    [anon_sym_COLON_COLON] = ACTIONS(1046),
    [sym_comment] = ACTIONS(50),
  },
  [364] = {
    [anon_sym_GT] = ACTIONS(1046),
    [anon_sym_AMP] = ACTIONS(1046),
    [anon_sym_COMMA] = ACTIONS(1046),
    [anon_sym_LBRACE] = ACTIONS(1046),
    [anon_sym_DOT] = ACTIONS(1048),
    [anon_sym_LBRACK] = ACTIONS(1046),
    [anon_sym_AT] = ACTIONS(1046),
    [anon_sym_implements] = ACTIONS(1046),
    [anon_sym_COLON_COLON] = ACTIONS(1046),
    [sym_comment] = ACTIONS(50),
  },
  [365] = {
    [sym_type_arguments] = STATE(544),
    [aux_sym_class_or_interface_type_repeat2] = STATE(542),
    [anon_sym_GT] = ACTIONS(1046),
    [anon_sym_LT] = ACTIONS(722),
    [anon_sym_AMP] = ACTIONS(1046),
    [anon_sym_COMMA] = ACTIONS(1046),
    [anon_sym_LBRACE] = ACTIONS(1046),
    [anon_sym_DOT] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(1046),
    [anon_sym_AT] = ACTIONS(1046),
    [anon_sym_implements] = ACTIONS(1046),
    [anon_sym_COLON_COLON] = ACTIONS(1046),
    [sym_comment] = ACTIONS(50),
  },
  [366] = {
    [sym_class_or_interface_type] = STATE(545),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [aux_sym_class_or_interface_type_repeat1] = STATE(227),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(50),
  },
  [367] = {
    [anon_sym_COMMA] = ACTIONS(1050),
    [anon_sym_LBRACE] = ACTIONS(1052),
    [sym_comment] = ACTIONS(50),
  },
  [368] = {
    [sym_class_body] = STATE(547),
    [anon_sym_LBRACE] = ACTIONS(298),
    [sym_comment] = ACTIONS(50),
  },
  [369] = {
    [ts_builtin_sym_end] = ACTIONS(1054),
    [sym_decimal_integer_literal] = ACTIONS(1056),
    [sym_hex_integer_literal] = ACTIONS(1056),
    [sym_octal_integer_literal] = ACTIONS(1056),
    [sym_binary_integer_literal] = ACTIONS(1056),
    [sym_decimal_floating_point_literal] = ACTIONS(1056),
    [sym_hex_floating_point_literal] = ACTIONS(1058),
    [anon_sym_true] = ACTIONS(1056),
    [anon_sym_false] = ACTIONS(1056),
    [anon_sym_SQUOTE] = ACTIONS(1054),
    [sym_string_literal] = ACTIONS(1054),
    [sym_null_literal] = ACTIONS(1056),
    [anon_sym_LPAREN] = ACTIONS(1054),
    [anon_sym_BANG] = ACTIONS(1054),
    [anon_sym_TILDE] = ACTIONS(1054),
    [anon_sym_PLUS_PLUS] = ACTIONS(1054),
    [anon_sym_DASH_DASH] = ACTIONS(1054),
    [anon_sym_RBRACE] = ACTIONS(1054),
    [anon_sym_AT] = ACTIONS(1054),
    [anon_sym_open] = ACTIONS(1056),
    [anon_sym_module] = ACTIONS(1056),
    [anon_sym_static] = ACTIONS(1056),
    [anon_sym_package] = ACTIONS(1056),
    [anon_sym_import] = ACTIONS(1056),
    [anon_sym_class] = ACTIONS(1056),
    [anon_sym_public] = ACTIONS(1056),
    [anon_sym_protected] = ACTIONS(1056),
    [anon_sym_private] = ACTIONS(1056),
    [anon_sym_abstract] = ACTIONS(1056),
    [anon_sym_final] = ACTIONS(1056),
    [anon_sym_strictfp] = ACTIONS(1056),
    [anon_sym_default] = ACTIONS(1056),
    [anon_sym_interface] = ACTIONS(1056),
    [sym_identifier] = ACTIONS(1058),
    [sym_comment] = ACTIONS(50),
  },
  [370] = {
    [sym_identifier] = ACTIONS(1060),
    [sym_comment] = ACTIONS(50),
  },
  [371] = {
    [anon_sym_LT] = ACTIONS(272),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_DOT] = ACTIONS(272),
    [anon_sym_AT] = ACTIONS(272),
    [anon_sym_static] = ACTIONS(274),
    [anon_sym_class] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_abstract] = ACTIONS(274),
    [anon_sym_final] = ACTIONS(274),
    [anon_sym_strictfp] = ACTIONS(274),
    [anon_sym_default] = ACTIONS(274),
    [anon_sym_void] = ACTIONS(274),
    [anon_sym_interface] = ACTIONS(274),
    [sym_identifier] = ACTIONS(356),
    [sym_comment] = ACTIONS(50),
  },
  [372] = {
    [anon_sym_LT] = ACTIONS(276),
    [anon_sym_LPAREN] = ACTIONS(1062),
    [anon_sym_DOT] = ACTIONS(1064),
    [anon_sym_AT] = ACTIONS(276),
    [anon_sym_static] = ACTIONS(362),
    [anon_sym_class] = ACTIONS(362),
    [anon_sym_public] = ACTIONS(362),
    [anon_sym_protected] = ACTIONS(362),
    [anon_sym_private] = ACTIONS(362),
    [anon_sym_abstract] = ACTIONS(362),
    [anon_sym_final] = ACTIONS(362),
    [anon_sym_strictfp] = ACTIONS(362),
    [anon_sym_default] = ACTIONS(362),
    [anon_sym_void] = ACTIONS(362),
    [anon_sym_interface] = ACTIONS(362),
    [sym_identifier] = ACTIONS(364),
    [sym_comment] = ACTIONS(50),
  },
  [373] = {
    [sym_type_parameters] = STATE(552),
    [sym_superclass] = STATE(553),
    [sym_super_interfaces] = STATE(554),
    [sym_class_body] = STATE(555),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(1066),
    [anon_sym_extends] = ACTIONS(300),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [374] = {
    [sym_type_parameters] = STATE(557),
    [sym_extends_interfaces] = STATE(558),
    [sym_interface_body] = STATE(559),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(1068),
    [anon_sym_extends] = ACTIONS(306),
    [sym_comment] = ACTIONS(50),
  },
  [375] = {
    [anon_sym_AT] = ACTIONS(151),
    [anon_sym_void] = ACTIONS(151),
    [sym_comment] = ACTIONS(50),
  },
  [376] = {
    [sym_method_declarator] = STATE(560),
    [sym_identifier] = ACTIONS(782),
    [sym_comment] = ACTIONS(50),
  },
  [377] = {
    [sym__annotation] = STATE(83),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym_result] = STATE(561),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_void] = ACTIONS(764),
    [sym_comment] = ACTIONS(50),
  },
  [378] = {
    [sym__semicolon] = ACTIONS(1070),
    [anon_sym_LT] = ACTIONS(1070),
    [anon_sym_RBRACE] = ACTIONS(1070),
    [anon_sym_AT] = ACTIONS(1070),
    [anon_sym_static] = ACTIONS(1072),
    [anon_sym_class] = ACTIONS(1072),
    [anon_sym_public] = ACTIONS(1072),
    [anon_sym_protected] = ACTIONS(1072),
    [anon_sym_private] = ACTIONS(1072),
    [anon_sym_abstract] = ACTIONS(1072),
    [anon_sym_final] = ACTIONS(1072),
    [anon_sym_strictfp] = ACTIONS(1072),
    [anon_sym_default] = ACTIONS(1072),
    [anon_sym_void] = ACTIONS(1072),
    [anon_sym_interface] = ACTIONS(1072),
    [sym_identifier] = ACTIONS(1074),
    [sym_comment] = ACTIONS(50),
  },
  [379] = {
    [sym_variable_declarator] = STATE(562),
    [sym_variable_declarator_id] = STATE(96),
    [sym_identifier] = ACTIONS(223),
    [sym_comment] = ACTIONS(50),
  },
  [380] = {
    [sym__semicolon] = ACTIONS(1076),
    [anon_sym_COMMA] = ACTIONS(1078),
    [sym_comment] = ACTIONS(50),
  },
  [381] = {
    [sym__semicolon] = ACTIONS(1080),
    [anon_sym_LT] = ACTIONS(1080),
    [anon_sym_RBRACE] = ACTIONS(1080),
    [anon_sym_AT] = ACTIONS(1080),
    [anon_sym_static] = ACTIONS(1082),
    [anon_sym_class] = ACTIONS(1082),
    [anon_sym_public] = ACTIONS(1082),
    [anon_sym_protected] = ACTIONS(1082),
    [anon_sym_private] = ACTIONS(1082),
    [anon_sym_abstract] = ACTIONS(1082),
    [anon_sym_final] = ACTIONS(1082),
    [anon_sym_strictfp] = ACTIONS(1082),
    [anon_sym_default] = ACTIONS(1082),
    [anon_sym_void] = ACTIONS(1082),
    [anon_sym_interface] = ACTIONS(1082),
    [sym_identifier] = ACTIONS(1084),
    [sym_comment] = ACTIONS(50),
  },
  [382] = {
    [sym_statement] = STATE(335),
    [sym_if_then_statement] = STATE(336),
    [sym__annotation] = STATE(333),
    [sym_normal_annotation] = STATE(337),
    [sym_marker_annotation] = STATE(337),
    [sym_single_element_annotation] = STATE(337),
    [sym_class_declaration] = STATE(335),
    [sym_normal_class_declaration] = STATE(338),
    [sym_modifier] = STATE(339),
    [sym_block_statements] = STATE(565),
    [sym_block_statement] = STATE(341),
    [sym_local_variable_declaration_statement] = STATE(335),
    [sym_local_variable_declaration] = STATE(342),
    [aux_sym_normal_class_declaration_repeat1] = STATE(343),
    [anon_sym_if] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1086),
    [anon_sym_AT] = ACTIONS(674),
    [anon_sym_static] = ACTIONS(676),
    [anon_sym_class] = ACTIONS(678),
    [anon_sym_public] = ACTIONS(676),
    [anon_sym_protected] = ACTIONS(676),
    [anon_sym_private] = ACTIONS(676),
    [anon_sym_abstract] = ACTIONS(676),
    [anon_sym_final] = ACTIONS(676),
    [anon_sym_strictfp] = ACTIONS(676),
    [anon_sym_default] = ACTIONS(676),
    [sym_comment] = ACTIONS(50),
  },
  [383] = {
    [sym__semicolon] = ACTIONS(1088),
    [anon_sym_LT] = ACTIONS(1088),
    [anon_sym_RBRACE] = ACTIONS(1088),
    [anon_sym_AT] = ACTIONS(1088),
    [anon_sym_static] = ACTIONS(1090),
    [anon_sym_class] = ACTIONS(1090),
    [anon_sym_public] = ACTIONS(1090),
    [anon_sym_protected] = ACTIONS(1090),
    [anon_sym_private] = ACTIONS(1090),
    [anon_sym_abstract] = ACTIONS(1090),
    [anon_sym_final] = ACTIONS(1090),
    [anon_sym_strictfp] = ACTIONS(1090),
    [anon_sym_default] = ACTIONS(1090),
    [anon_sym_void] = ACTIONS(1090),
    [anon_sym_interface] = ACTIONS(1090),
    [sym_identifier] = ACTIONS(1092),
    [sym_comment] = ACTIONS(50),
  },
  [384] = {
    [anon_sym_LPAREN] = ACTIONS(1094),
    [sym_comment] = ACTIONS(50),
  },
  [385] = {
    [sym_throws] = STATE(567),
    [sym__semicolon] = ACTIONS(1096),
    [anon_sym_LBRACE] = ACTIONS(1096),
    [anon_sym_throws] = ACTIONS(710),
    [sym_comment] = ACTIONS(50),
  },
  [386] = {
    [sym_package_or_type_name] = STATE(372),
    [anon_sym_interface] = ACTIONS(1098),
    [sym_identifier] = ACTIONS(756),
    [sym_comment] = ACTIONS(50),
  },
  [387] = {
    [sym_identifier] = ACTIONS(1100),
    [sym_comment] = ACTIONS(50),
  },
  [388] = {
    [sym_identifier] = ACTIONS(1102),
    [sym_comment] = ACTIONS(50),
  },
  [389] = {
    [anon_sym_LT] = ACTIONS(340),
    [anon_sym_AT] = ACTIONS(340),
    [anon_sym_static] = ACTIONS(342),
    [anon_sym_class] = ACTIONS(342),
    [anon_sym_public] = ACTIONS(342),
    [anon_sym_protected] = ACTIONS(342),
    [anon_sym_private] = ACTIONS(342),
    [anon_sym_abstract] = ACTIONS(342),
    [anon_sym_final] = ACTIONS(342),
    [anon_sym_strictfp] = ACTIONS(342),
    [anon_sym_default] = ACTIONS(342),
    [anon_sym_void] = ACTIONS(342),
    [anon_sym_interface] = ACTIONS(342),
    [sym_identifier] = ACTIONS(344),
    [sym_comment] = ACTIONS(50),
  },
  [390] = {
    [sym__semicolon] = ACTIONS(1104),
    [sym_comment] = ACTIONS(50),
  },
  [391] = {
    [sym_method_body] = STATE(572),
    [sym_block] = STATE(381),
    [sym__semicolon] = ACTIONS(778),
    [anon_sym_LBRACE] = ACTIONS(780),
    [sym_comment] = ACTIONS(50),
  },
  [392] = {
    [ts_builtin_sym_end] = ACTIONS(1106),
    [sym_decimal_integer_literal] = ACTIONS(1108),
    [sym_hex_integer_literal] = ACTIONS(1108),
    [sym_octal_integer_literal] = ACTIONS(1108),
    [sym_binary_integer_literal] = ACTIONS(1108),
    [sym_decimal_floating_point_literal] = ACTIONS(1108),
    [sym_hex_floating_point_literal] = ACTIONS(1110),
    [anon_sym_true] = ACTIONS(1108),
    [anon_sym_false] = ACTIONS(1108),
    [anon_sym_SQUOTE] = ACTIONS(1106),
    [sym_string_literal] = ACTIONS(1106),
    [sym_null_literal] = ACTIONS(1108),
    [anon_sym_LPAREN] = ACTIONS(1106),
    [anon_sym_BANG] = ACTIONS(1106),
    [anon_sym_TILDE] = ACTIONS(1106),
    [anon_sym_PLUS_PLUS] = ACTIONS(1106),
    [anon_sym_DASH_DASH] = ACTIONS(1106),
    [anon_sym_RBRACE] = ACTIONS(1106),
    [anon_sym_AT] = ACTIONS(1106),
    [anon_sym_open] = ACTIONS(1108),
    [anon_sym_module] = ACTIONS(1108),
    [anon_sym_static] = ACTIONS(1108),
    [anon_sym_package] = ACTIONS(1108),
    [anon_sym_import] = ACTIONS(1108),
    [anon_sym_class] = ACTIONS(1108),
    [anon_sym_public] = ACTIONS(1108),
    [anon_sym_protected] = ACTIONS(1108),
    [anon_sym_private] = ACTIONS(1108),
    [anon_sym_abstract] = ACTIONS(1108),
    [anon_sym_final] = ACTIONS(1108),
    [anon_sym_strictfp] = ACTIONS(1108),
    [anon_sym_default] = ACTIONS(1108),
    [anon_sym_interface] = ACTIONS(1108),
    [sym_identifier] = ACTIONS(1110),
    [sym_comment] = ACTIONS(50),
  },
  [393] = {
    [sym__semicolon] = ACTIONS(1112),
    [anon_sym_LT] = ACTIONS(1112),
    [anon_sym_RBRACE] = ACTIONS(1112),
    [anon_sym_AT] = ACTIONS(1112),
    [anon_sym_static] = ACTIONS(1114),
    [anon_sym_class] = ACTIONS(1114),
    [anon_sym_public] = ACTIONS(1114),
    [anon_sym_protected] = ACTIONS(1114),
    [anon_sym_private] = ACTIONS(1114),
    [anon_sym_abstract] = ACTIONS(1114),
    [anon_sym_final] = ACTIONS(1114),
    [anon_sym_strictfp] = ACTIONS(1114),
    [anon_sym_default] = ACTIONS(1114),
    [anon_sym_void] = ACTIONS(1114),
    [anon_sym_interface] = ACTIONS(1114),
    [sym_identifier] = ACTIONS(1116),
    [sym_comment] = ACTIONS(50),
  },
  [394] = {
    [ts_builtin_sym_end] = ACTIONS(1118),
    [sym_decimal_integer_literal] = ACTIONS(1120),
    [sym_hex_integer_literal] = ACTIONS(1120),
    [sym_octal_integer_literal] = ACTIONS(1120),
    [sym_binary_integer_literal] = ACTIONS(1120),
    [sym_decimal_floating_point_literal] = ACTIONS(1120),
    [sym_hex_floating_point_literal] = ACTIONS(1122),
    [anon_sym_true] = ACTIONS(1120),
    [anon_sym_false] = ACTIONS(1120),
    [anon_sym_SQUOTE] = ACTIONS(1118),
    [sym_string_literal] = ACTIONS(1118),
    [sym_null_literal] = ACTIONS(1120),
    [anon_sym_LPAREN] = ACTIONS(1118),
    [anon_sym_BANG] = ACTIONS(1118),
    [anon_sym_TILDE] = ACTIONS(1118),
    [anon_sym_PLUS_PLUS] = ACTIONS(1118),
    [anon_sym_DASH_DASH] = ACTIONS(1118),
    [anon_sym_RBRACE] = ACTIONS(1118),
    [anon_sym_AT] = ACTIONS(1118),
    [anon_sym_open] = ACTIONS(1120),
    [anon_sym_module] = ACTIONS(1120),
    [anon_sym_static] = ACTIONS(1120),
    [anon_sym_package] = ACTIONS(1120),
    [anon_sym_import] = ACTIONS(1120),
    [anon_sym_class] = ACTIONS(1120),
    [anon_sym_public] = ACTIONS(1120),
    [anon_sym_protected] = ACTIONS(1120),
    [anon_sym_private] = ACTIONS(1120),
    [anon_sym_abstract] = ACTIONS(1120),
    [anon_sym_final] = ACTIONS(1120),
    [anon_sym_strictfp] = ACTIONS(1120),
    [anon_sym_default] = ACTIONS(1120),
    [anon_sym_interface] = ACTIONS(1120),
    [sym_identifier] = ACTIONS(1122),
    [sym_comment] = ACTIONS(50),
  },
  [395] = {
    [anon_sym_EQ] = ACTIONS(496),
    [anon_sym_PLUS_EQ] = ACTIONS(494),
    [anon_sym_DASH_EQ] = ACTIONS(494),
    [anon_sym_STAR_EQ] = ACTIONS(494),
    [anon_sym_SLASH_EQ] = ACTIONS(494),
    [anon_sym_AMP_EQ] = ACTIONS(494),
    [anon_sym_PIPE_EQ] = ACTIONS(494),
    [anon_sym_CARET_EQ] = ACTIONS(494),
    [anon_sym_PERCENT_EQ] = ACTIONS(494),
    [anon_sym_LT_LT_EQ] = ACTIONS(494),
    [anon_sym_GT_GT_EQ] = ACTIONS(494),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(494),
    [anon_sym_GT] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [anon_sym_BANG_EQ] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(510),
    [anon_sym_PIPE_PIPE] = ACTIONS(512),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_LT_LT] = ACTIONS(516),
    [anon_sym_GT_GT] = ACTIONS(516),
    [anon_sym_GT_GT_GT] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(522),
    [anon_sym_COLON] = ACTIONS(494),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [396] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(500),
    [anon_sym_LT] = ACTIONS(500),
    [anon_sym_EQ_EQ] = ACTIONS(498),
    [anon_sym_GT_EQ] = ACTIONS(498),
    [anon_sym_LT_EQ] = ACTIONS(498),
    [anon_sym_BANG_EQ] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_LT_LT] = ACTIONS(516),
    [anon_sym_GT_GT] = ACTIONS(516),
    [anon_sym_GT_GT_GT] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_COLON] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [397] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [anon_sym_BANG_EQ] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_LT_LT] = ACTIONS(516),
    [anon_sym_GT_GT] = ACTIONS(516),
    [anon_sym_GT_GT_GT] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_COLON] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [398] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [anon_sym_BANG_EQ] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(510),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_LT_LT] = ACTIONS(516),
    [anon_sym_GT_GT] = ACTIONS(516),
    [anon_sym_GT_GT_GT] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_COLON] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [399] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [anon_sym_BANG_EQ] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_LT_LT] = ACTIONS(516),
    [anon_sym_GT_GT] = ACTIONS(516),
    [anon_sym_GT_GT_GT] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_COLON] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [400] = {
    [anon_sym_EQ] = ACTIONS(502),
    [anon_sym_PLUS_EQ] = ACTIONS(504),
    [anon_sym_DASH_EQ] = ACTIONS(504),
    [anon_sym_STAR_EQ] = ACTIONS(504),
    [anon_sym_SLASH_EQ] = ACTIONS(504),
    [anon_sym_AMP_EQ] = ACTIONS(504),
    [anon_sym_PIPE_EQ] = ACTIONS(504),
    [anon_sym_CARET_EQ] = ACTIONS(504),
    [anon_sym_PERCENT_EQ] = ACTIONS(504),
    [anon_sym_LT_LT_EQ] = ACTIONS(504),
    [anon_sym_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_GT] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [anon_sym_BANG_EQ] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(510),
    [anon_sym_PIPE_PIPE] = ACTIONS(512),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_LT_LT] = ACTIONS(516),
    [anon_sym_GT_GT] = ACTIONS(516),
    [anon_sym_GT_GT_GT] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(522),
    [anon_sym_COLON] = ACTIONS(1124),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [401] = {
    [sym__semicolon] = ACTIONS(1126),
    [anon_sym_EQ] = ACTIONS(1128),
    [anon_sym_PLUS_EQ] = ACTIONS(1126),
    [anon_sym_DASH_EQ] = ACTIONS(1126),
    [anon_sym_STAR_EQ] = ACTIONS(1126),
    [anon_sym_SLASH_EQ] = ACTIONS(1126),
    [anon_sym_AMP_EQ] = ACTIONS(1126),
    [anon_sym_PIPE_EQ] = ACTIONS(1126),
    [anon_sym_CARET_EQ] = ACTIONS(1126),
    [anon_sym_PERCENT_EQ] = ACTIONS(1126),
    [anon_sym_LT_LT_EQ] = ACTIONS(1126),
    [anon_sym_GT_GT_EQ] = ACTIONS(1126),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1126),
    [anon_sym_GT] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(118),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_AMP_AMP] = ACTIONS(122),
    [anon_sym_PIPE_PIPE] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_CARET] = ACTIONS(132),
    [anon_sym_PERCENT] = ACTIONS(128),
    [anon_sym_LT_LT] = ACTIONS(128),
    [anon_sym_GT_GT] = ACTIONS(128),
    [anon_sym_GT_GT_GT] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(134),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [402] = {
    [anon_sym_EQ] = ACTIONS(496),
    [anon_sym_PLUS_EQ] = ACTIONS(494),
    [anon_sym_DASH_EQ] = ACTIONS(494),
    [anon_sym_STAR_EQ] = ACTIONS(494),
    [anon_sym_SLASH_EQ] = ACTIONS(494),
    [anon_sym_AMP_EQ] = ACTIONS(494),
    [anon_sym_PIPE_EQ] = ACTIONS(494),
    [anon_sym_CARET_EQ] = ACTIONS(494),
    [anon_sym_PERCENT_EQ] = ACTIONS(494),
    [anon_sym_LT_LT_EQ] = ACTIONS(494),
    [anon_sym_GT_GT_EQ] = ACTIONS(494),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(494),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [anon_sym_BANG_EQ] = ACTIONS(532),
    [anon_sym_AMP_AMP] = ACTIONS(534),
    [anon_sym_PIPE_PIPE] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_STAR] = ACTIONS(540),
    [anon_sym_SLASH] = ACTIONS(540),
    [anon_sym_AMP] = ACTIONS(542),
    [anon_sym_PIPE] = ACTIONS(544),
    [anon_sym_CARET] = ACTIONS(544),
    [anon_sym_PERCENT] = ACTIONS(540),
    [anon_sym_LT_LT] = ACTIONS(540),
    [anon_sym_GT_GT] = ACTIONS(540),
    [anon_sym_GT_GT_GT] = ACTIONS(540),
    [anon_sym_QMARK] = ACTIONS(546),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(494),
    [sym_comment] = ACTIONS(50),
  },
  [403] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(500),
    [anon_sym_LT] = ACTIONS(500),
    [anon_sym_EQ_EQ] = ACTIONS(498),
    [anon_sym_GT_EQ] = ACTIONS(498),
    [anon_sym_LT_EQ] = ACTIONS(498),
    [anon_sym_BANG_EQ] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(540),
    [anon_sym_SLASH] = ACTIONS(540),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(540),
    [anon_sym_LT_LT] = ACTIONS(540),
    [anon_sym_GT_GT] = ACTIONS(540),
    [anon_sym_GT_GT_GT] = ACTIONS(540),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(498),
    [sym_comment] = ACTIONS(50),
  },
  [404] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [anon_sym_BANG_EQ] = ACTIONS(532),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_STAR] = ACTIONS(540),
    [anon_sym_SLASH] = ACTIONS(540),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(540),
    [anon_sym_LT_LT] = ACTIONS(540),
    [anon_sym_GT_GT] = ACTIONS(540),
    [anon_sym_GT_GT_GT] = ACTIONS(540),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(498),
    [sym_comment] = ACTIONS(50),
  },
  [405] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [anon_sym_BANG_EQ] = ACTIONS(532),
    [anon_sym_AMP_AMP] = ACTIONS(534),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_STAR] = ACTIONS(540),
    [anon_sym_SLASH] = ACTIONS(540),
    [anon_sym_AMP] = ACTIONS(542),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(540),
    [anon_sym_LT_LT] = ACTIONS(540),
    [anon_sym_GT_GT] = ACTIONS(540),
    [anon_sym_GT_GT_GT] = ACTIONS(540),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(498),
    [sym_comment] = ACTIONS(50),
  },
  [406] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [anon_sym_BANG_EQ] = ACTIONS(532),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(540),
    [anon_sym_SLASH] = ACTIONS(540),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(540),
    [anon_sym_LT_LT] = ACTIONS(540),
    [anon_sym_GT_GT] = ACTIONS(540),
    [anon_sym_GT_GT_GT] = ACTIONS(540),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(498),
    [sym_comment] = ACTIONS(50),
  },
  [407] = {
    [anon_sym_EQ] = ACTIONS(502),
    [anon_sym_PLUS_EQ] = ACTIONS(504),
    [anon_sym_DASH_EQ] = ACTIONS(504),
    [anon_sym_STAR_EQ] = ACTIONS(504),
    [anon_sym_SLASH_EQ] = ACTIONS(504),
    [anon_sym_AMP_EQ] = ACTIONS(504),
    [anon_sym_PIPE_EQ] = ACTIONS(504),
    [anon_sym_CARET_EQ] = ACTIONS(504),
    [anon_sym_PERCENT_EQ] = ACTIONS(504),
    [anon_sym_LT_LT_EQ] = ACTIONS(504),
    [anon_sym_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_GT] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [anon_sym_BANG_EQ] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(510),
    [anon_sym_PIPE_PIPE] = ACTIONS(512),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_LT_LT] = ACTIONS(516),
    [anon_sym_GT_GT] = ACTIONS(516),
    [anon_sym_GT_GT_GT] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(522),
    [anon_sym_COLON] = ACTIONS(1130),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [408] = {
    [sym_module_directive] = STATE(197),
    [aux_sym_module_declaration_repeat1] = STATE(575),
    [anon_sym_RBRACE] = ACTIONS(894),
    [anon_sym_requires] = ACTIONS(420),
    [anon_sym_exports] = ACTIONS(422),
    [anon_sym_opens] = ACTIONS(422),
    [anon_sym_uses] = ACTIONS(424),
    [anon_sym_provides] = ACTIONS(426),
    [sym_comment] = ACTIONS(50),
  },
  [409] = {
    [ts_builtin_sym_end] = ACTIONS(1132),
    [sym_decimal_integer_literal] = ACTIONS(1134),
    [sym_hex_integer_literal] = ACTIONS(1134),
    [sym_octal_integer_literal] = ACTIONS(1134),
    [sym_binary_integer_literal] = ACTIONS(1134),
    [sym_decimal_floating_point_literal] = ACTIONS(1134),
    [sym_hex_floating_point_literal] = ACTIONS(1136),
    [anon_sym_true] = ACTIONS(1134),
    [anon_sym_false] = ACTIONS(1134),
    [anon_sym_SQUOTE] = ACTIONS(1132),
    [sym_string_literal] = ACTIONS(1132),
    [sym_null_literal] = ACTIONS(1134),
    [anon_sym_LPAREN] = ACTIONS(1132),
    [anon_sym_BANG] = ACTIONS(1132),
    [anon_sym_TILDE] = ACTIONS(1132),
    [anon_sym_PLUS_PLUS] = ACTIONS(1132),
    [anon_sym_DASH_DASH] = ACTIONS(1132),
    [anon_sym_RBRACE] = ACTIONS(1132),
    [anon_sym_AT] = ACTIONS(1132),
    [anon_sym_open] = ACTIONS(1134),
    [anon_sym_module] = ACTIONS(1134),
    [anon_sym_static] = ACTIONS(1134),
    [anon_sym_package] = ACTIONS(1134),
    [anon_sym_import] = ACTIONS(1134),
    [anon_sym_class] = ACTIONS(1134),
    [anon_sym_public] = ACTIONS(1134),
    [anon_sym_protected] = ACTIONS(1134),
    [anon_sym_private] = ACTIONS(1134),
    [anon_sym_abstract] = ACTIONS(1134),
    [anon_sym_final] = ACTIONS(1134),
    [anon_sym_strictfp] = ACTIONS(1134),
    [anon_sym_default] = ACTIONS(1134),
    [anon_sym_interface] = ACTIONS(1134),
    [sym_identifier] = ACTIONS(1136),
    [sym_comment] = ACTIONS(50),
  },
  [410] = {
    [ts_builtin_sym_end] = ACTIONS(1138),
    [sym_decimal_integer_literal] = ACTIONS(1140),
    [sym_hex_integer_literal] = ACTIONS(1140),
    [sym_octal_integer_literal] = ACTIONS(1140),
    [sym_binary_integer_literal] = ACTIONS(1140),
    [sym_decimal_floating_point_literal] = ACTIONS(1140),
    [sym_hex_floating_point_literal] = ACTIONS(1142),
    [anon_sym_true] = ACTIONS(1140),
    [anon_sym_false] = ACTIONS(1140),
    [anon_sym_SQUOTE] = ACTIONS(1138),
    [sym_string_literal] = ACTIONS(1138),
    [sym_null_literal] = ACTIONS(1140),
    [anon_sym_LPAREN] = ACTIONS(1138),
    [anon_sym_BANG] = ACTIONS(1138),
    [anon_sym_TILDE] = ACTIONS(1138),
    [anon_sym_PLUS_PLUS] = ACTIONS(1138),
    [anon_sym_DASH_DASH] = ACTIONS(1138),
    [anon_sym_RBRACE] = ACTIONS(1138),
    [anon_sym_AT] = ACTIONS(1138),
    [anon_sym_open] = ACTIONS(1140),
    [anon_sym_module] = ACTIONS(1140),
    [anon_sym_static] = ACTIONS(1140),
    [anon_sym_package] = ACTIONS(1140),
    [anon_sym_import] = ACTIONS(1140),
    [anon_sym_class] = ACTIONS(1140),
    [anon_sym_public] = ACTIONS(1140),
    [anon_sym_protected] = ACTIONS(1140),
    [anon_sym_private] = ACTIONS(1140),
    [anon_sym_abstract] = ACTIONS(1140),
    [anon_sym_final] = ACTIONS(1140),
    [anon_sym_strictfp] = ACTIONS(1140),
    [anon_sym_default] = ACTIONS(1140),
    [anon_sym_interface] = ACTIONS(1140),
    [sym_identifier] = ACTIONS(1142),
    [sym_comment] = ACTIONS(50),
  },
  [411] = {
    [sym_super_interfaces] = STATE(576),
    [sym_class_body] = STATE(547),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [412] = {
    [sym_interface_body] = STATE(577),
    [anon_sym_LBRACE] = ACTIONS(304),
    [sym_comment] = ACTIONS(50),
  },
  [413] = {
    [anon_sym_AT] = ACTIONS(878),
    [anon_sym_static] = ACTIONS(1144),
    [anon_sym_public] = ACTIONS(1144),
    [anon_sym_protected] = ACTIONS(1144),
    [anon_sym_private] = ACTIONS(1144),
    [anon_sym_abstract] = ACTIONS(1144),
    [anon_sym_final] = ACTIONS(1144),
    [anon_sym_strictfp] = ACTIONS(1144),
    [anon_sym_default] = ACTIONS(1144),
    [anon_sym_this] = ACTIONS(1144),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(878),
    [sym_identifier] = ACTIONS(1146),
    [sym_comment] = ACTIONS(50),
  },
  [414] = {
    [anon_sym_AT] = ACTIONS(880),
    [anon_sym_static] = ACTIONS(1148),
    [anon_sym_public] = ACTIONS(1148),
    [anon_sym_protected] = ACTIONS(1148),
    [anon_sym_private] = ACTIONS(1148),
    [anon_sym_abstract] = ACTIONS(1148),
    [anon_sym_final] = ACTIONS(1148),
    [anon_sym_strictfp] = ACTIONS(1148),
    [anon_sym_default] = ACTIONS(1148),
    [anon_sym_this] = ACTIONS(1148),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(880),
    [sym_identifier] = ACTIONS(1150),
    [sym_comment] = ACTIONS(50),
  },
  [415] = {
    [sym__semicolon] = ACTIONS(1152),
    [anon_sym_EQ] = ACTIONS(1152),
    [anon_sym_GT] = ACTIONS(1152),
    [anon_sym_RPAREN] = ACTIONS(1152),
    [anon_sym_COMMA] = ACTIONS(1152),
    [anon_sym_LBRACE] = ACTIONS(1152),
    [anon_sym_DOT] = ACTIONS(1152),
    [anon_sym_LBRACK] = ACTIONS(1152),
    [anon_sym_AT] = ACTIONS(1152),
    [anon_sym_default] = ACTIONS(1152),
    [anon_sym_COLON_COLON] = ACTIONS(1152),
    [anon_sym_throws] = ACTIONS(1152),
    [sym_comment] = ACTIONS(50),
  },
  [416] = {
    [anon_sym_AT] = ACTIONS(602),
    [anon_sym_this] = ACTIONS(812),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(602),
    [sym_identifier] = ACTIONS(814),
    [sym_comment] = ACTIONS(50),
  },
  [417] = {
    [anon_sym_EQ] = ACTIONS(604),
    [anon_sym_RPAREN] = ACTIONS(1154),
    [sym_comment] = ACTIONS(50),
  },
  [418] = {
    [anon_sym_RPAREN] = ACTIONS(1154),
    [sym_comment] = ACTIONS(50),
  },
  [419] = {
    [anon_sym_RPAREN] = ACTIONS(1156),
    [sym_comment] = ACTIONS(50),
  },
  [420] = {
    [anon_sym_LPAREN] = ACTIONS(614),
    [anon_sym_DOT] = ACTIONS(616),
    [anon_sym_AT] = ACTIONS(614),
    [anon_sym_this] = ACTIONS(616),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(614),
    [sym_identifier] = ACTIONS(820),
    [sym_comment] = ACTIONS(50),
  },
  [421] = {
    [anon_sym_AT] = ACTIONS(602),
    [anon_sym_static] = ACTIONS(812),
    [anon_sym_public] = ACTIONS(812),
    [anon_sym_protected] = ACTIONS(812),
    [anon_sym_private] = ACTIONS(812),
    [anon_sym_abstract] = ACTIONS(812),
    [anon_sym_final] = ACTIONS(812),
    [anon_sym_strictfp] = ACTIONS(812),
    [anon_sym_default] = ACTIONS(812),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(602),
    [sym_identifier] = ACTIONS(814),
    [sym_comment] = ACTIONS(50),
  },
  [422] = {
    [anon_sym_EQ] = ACTIONS(604),
    [anon_sym_RPAREN] = ACTIONS(1158),
    [sym_comment] = ACTIONS(50),
  },
  [423] = {
    [anon_sym_RPAREN] = ACTIONS(1158),
    [sym_comment] = ACTIONS(50),
  },
  [424] = {
    [anon_sym_RPAREN] = ACTIONS(1160),
    [sym_comment] = ACTIONS(50),
  },
  [425] = {
    [anon_sym_LPAREN] = ACTIONS(614),
    [anon_sym_DOT] = ACTIONS(616),
    [anon_sym_AT] = ACTIONS(614),
    [anon_sym_static] = ACTIONS(616),
    [anon_sym_public] = ACTIONS(616),
    [anon_sym_protected] = ACTIONS(616),
    [anon_sym_private] = ACTIONS(616),
    [anon_sym_abstract] = ACTIONS(616),
    [anon_sym_final] = ACTIONS(616),
    [anon_sym_strictfp] = ACTIONS(616),
    [anon_sym_default] = ACTIONS(616),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(614),
    [sym_identifier] = ACTIONS(820),
    [sym_comment] = ACTIONS(50),
  },
  [426] = {
    [anon_sym_RPAREN] = ACTIONS(1162),
    [sym_comment] = ACTIONS(50),
  },
  [427] = {
    [anon_sym_RBRACE] = ACTIONS(1070),
    [anon_sym_AT] = ACTIONS(1070),
    [anon_sym_static] = ACTIONS(1072),
    [anon_sym_class] = ACTIONS(1072),
    [anon_sym_public] = ACTIONS(1072),
    [anon_sym_protected] = ACTIONS(1072),
    [anon_sym_private] = ACTIONS(1072),
    [anon_sym_abstract] = ACTIONS(1072),
    [anon_sym_final] = ACTIONS(1072),
    [anon_sym_strictfp] = ACTIONS(1072),
    [anon_sym_default] = ACTIONS(1072),
    [anon_sym_interface] = ACTIONS(1072),
    [sym_identifier] = ACTIONS(1074),
    [sym_comment] = ACTIONS(50),
  },
  [428] = {
    [sym_dims] = STATE(99),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [aux_sym_class_or_interface_type_repeat1] = STATE(101),
    [aux_sym_dims_repeat1] = STATE(102),
    [sym__semicolon] = ACTIONS(225),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(1164),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(193),
    [sym_comment] = ACTIONS(50),
  },
  [429] = {
    [sym__semicolon] = ACTIONS(1166),
    [sym_comment] = ACTIONS(50),
  },
  [430] = {
    [ts_builtin_sym_end] = ACTIONS(1168),
    [sym_decimal_integer_literal] = ACTIONS(1170),
    [sym_hex_integer_literal] = ACTIONS(1170),
    [sym_octal_integer_literal] = ACTIONS(1170),
    [sym_binary_integer_literal] = ACTIONS(1170),
    [sym_decimal_floating_point_literal] = ACTIONS(1170),
    [sym_hex_floating_point_literal] = ACTIONS(1172),
    [anon_sym_true] = ACTIONS(1170),
    [anon_sym_false] = ACTIONS(1170),
    [anon_sym_SQUOTE] = ACTIONS(1168),
    [sym_string_literal] = ACTIONS(1168),
    [sym_null_literal] = ACTIONS(1170),
    [anon_sym_LPAREN] = ACTIONS(1168),
    [anon_sym_BANG] = ACTIONS(1168),
    [anon_sym_TILDE] = ACTIONS(1168),
    [anon_sym_PLUS_PLUS] = ACTIONS(1168),
    [anon_sym_DASH_DASH] = ACTIONS(1168),
    [anon_sym_RBRACE] = ACTIONS(1168),
    [anon_sym_AT] = ACTIONS(1168),
    [anon_sym_open] = ACTIONS(1170),
    [anon_sym_module] = ACTIONS(1170),
    [anon_sym_static] = ACTIONS(1170),
    [anon_sym_package] = ACTIONS(1170),
    [anon_sym_import] = ACTIONS(1170),
    [anon_sym_class] = ACTIONS(1170),
    [anon_sym_public] = ACTIONS(1170),
    [anon_sym_protected] = ACTIONS(1170),
    [anon_sym_private] = ACTIONS(1170),
    [anon_sym_abstract] = ACTIONS(1170),
    [anon_sym_final] = ACTIONS(1170),
    [anon_sym_strictfp] = ACTIONS(1170),
    [anon_sym_default] = ACTIONS(1170),
    [anon_sym_interface] = ACTIONS(1170),
    [sym_identifier] = ACTIONS(1172),
    [sym_comment] = ACTIONS(50),
  },
  [431] = {
    [anon_sym_RBRACE] = ACTIONS(1174),
    [anon_sym_AT] = ACTIONS(1174),
    [anon_sym_static] = ACTIONS(1176),
    [anon_sym_class] = ACTIONS(1176),
    [anon_sym_public] = ACTIONS(1176),
    [anon_sym_protected] = ACTIONS(1176),
    [anon_sym_private] = ACTIONS(1176),
    [anon_sym_abstract] = ACTIONS(1176),
    [anon_sym_final] = ACTIONS(1176),
    [anon_sym_strictfp] = ACTIONS(1176),
    [anon_sym_default] = ACTIONS(1176),
    [anon_sym_interface] = ACTIONS(1176),
    [sym_identifier] = ACTIONS(1178),
    [sym_comment] = ACTIONS(50),
  },
  [432] = {
    [sym__expression] = STATE(587),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [433] = {
    [sym__literal] = STATE(434),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(435),
    [sym__annotation] = STATE(434),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym_element_value] = STATE(591),
    [sym_element_value_array_initializer] = STATE(434),
    [sym_conditional_expression] = STATE(434),
    [sym_conditional_or_expression] = STATE(592),
    [sym_conditional_and_expression] = STATE(593),
    [sym_inclusive_or_expression] = STATE(594),
    [sym_exclusive_or_expression] = STATE(595),
    [sym_and_expression] = STATE(441),
    [sym_relational_expression] = STATE(596),
    [sym_equality_expression] = STATE(597),
    [sym_shift_expression] = STATE(598),
    [sym_additive_expression] = STATE(599),
    [sym_multiplicative_expression] = STATE(600),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(872),
    [anon_sym_false] = ACTIONS(872),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_COMMA] = ACTIONS(1184),
    [anon_sym_BANG] = ACTIONS(1186),
    [anon_sym_TILDE] = ACTIONS(1186),
    [anon_sym_LBRACE] = ACTIONS(876),
    [anon_sym_RBRACE] = ACTIONS(1188),
    [anon_sym_AT] = ACTIONS(193),
    [sym_comment] = ACTIONS(50),
  },
  [434] = {
    [sym__semicolon] = ACTIONS(1190),
    [anon_sym_RPAREN] = ACTIONS(1190),
    [anon_sym_COMMA] = ACTIONS(1190),
    [anon_sym_RBRACE] = ACTIONS(1190),
    [sym_comment] = ACTIONS(50),
  },
  [435] = {
    [sym__semicolon] = ACTIONS(1192),
    [anon_sym_LT] = ACTIONS(1194),
    [anon_sym_EQ_EQ] = ACTIONS(1192),
    [anon_sym_BANG_EQ] = ACTIONS(1192),
    [anon_sym_AMP_AMP] = ACTIONS(1192),
    [anon_sym_PIPE_PIPE] = ACTIONS(1192),
    [anon_sym_PLUS] = ACTIONS(1192),
    [anon_sym_DASH] = ACTIONS(1192),
    [anon_sym_STAR] = ACTIONS(1192),
    [anon_sym_SLASH] = ACTIONS(1194),
    [anon_sym_PIPE] = ACTIONS(1194),
    [anon_sym_CARET] = ACTIONS(1192),
    [anon_sym_PERCENT] = ACTIONS(1192),
    [anon_sym_LT_LT] = ACTIONS(1192),
    [anon_sym_GT_GT] = ACTIONS(1194),
    [anon_sym_GT_GT_GT] = ACTIONS(1192),
    [anon_sym_RPAREN] = ACTIONS(1192),
    [anon_sym_COMMA] = ACTIONS(1192),
    [anon_sym_QMARK] = ACTIONS(1192),
    [anon_sym_RBRACE] = ACTIONS(1192),
    [sym_comment] = ACTIONS(50),
  },
  [436] = {
    [anon_sym_RPAREN] = ACTIONS(1196),
    [anon_sym_COMMA] = ACTIONS(1196),
    [sym_comment] = ACTIONS(50),
  },
  [437] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(1198),
    [anon_sym_RPAREN] = ACTIONS(1200),
    [anon_sym_COMMA] = ACTIONS(1200),
    [anon_sym_QMARK] = ACTIONS(1202),
    [sym_comment] = ACTIONS(50),
  },
  [438] = {
    [anon_sym_AMP_AMP] = ACTIONS(1204),
    [anon_sym_PIPE_PIPE] = ACTIONS(1206),
    [anon_sym_RPAREN] = ACTIONS(1206),
    [anon_sym_COMMA] = ACTIONS(1206),
    [anon_sym_QMARK] = ACTIONS(1206),
    [sym_comment] = ACTIONS(50),
  },
  [439] = {
    [anon_sym_AMP_AMP] = ACTIONS(1208),
    [anon_sym_PIPE_PIPE] = ACTIONS(1208),
    [anon_sym_PIPE] = ACTIONS(1210),
    [anon_sym_RPAREN] = ACTIONS(1208),
    [anon_sym_COMMA] = ACTIONS(1208),
    [anon_sym_QMARK] = ACTIONS(1208),
    [sym_comment] = ACTIONS(50),
  },
  [440] = {
    [anon_sym_AMP_AMP] = ACTIONS(1212),
    [anon_sym_PIPE_PIPE] = ACTIONS(1212),
    [anon_sym_PIPE] = ACTIONS(1214),
    [anon_sym_CARET] = ACTIONS(1216),
    [anon_sym_RPAREN] = ACTIONS(1212),
    [anon_sym_COMMA] = ACTIONS(1212),
    [anon_sym_QMARK] = ACTIONS(1212),
    [sym_comment] = ACTIONS(50),
  },
  [441] = {
    [sym__semicolon] = ACTIONS(1218),
    [anon_sym_AMP_AMP] = ACTIONS(1218),
    [anon_sym_PIPE_PIPE] = ACTIONS(1218),
    [anon_sym_PIPE] = ACTIONS(1220),
    [anon_sym_CARET] = ACTIONS(1218),
    [anon_sym_RPAREN] = ACTIONS(1218),
    [anon_sym_COMMA] = ACTIONS(1218),
    [anon_sym_QMARK] = ACTIONS(1218),
    [anon_sym_RBRACE] = ACTIONS(1218),
    [sym_comment] = ACTIONS(50),
  },
  [442] = {
    [anon_sym_LT] = ACTIONS(1222),
    [anon_sym_EQ_EQ] = ACTIONS(1224),
    [anon_sym_BANG_EQ] = ACTIONS(1224),
    [anon_sym_AMP_AMP] = ACTIONS(1226),
    [anon_sym_PIPE_PIPE] = ACTIONS(1226),
    [anon_sym_PIPE] = ACTIONS(1228),
    [anon_sym_CARET] = ACTIONS(1226),
    [anon_sym_RPAREN] = ACTIONS(1226),
    [anon_sym_COMMA] = ACTIONS(1226),
    [anon_sym_QMARK] = ACTIONS(1226),
    [sym_comment] = ACTIONS(50),
  },
  [443] = {
    [anon_sym_EQ_EQ] = ACTIONS(1230),
    [anon_sym_BANG_EQ] = ACTIONS(1230),
    [sym_comment] = ACTIONS(50),
  },
  [444] = {
    [anon_sym_LT] = ACTIONS(1232),
    [anon_sym_EQ_EQ] = ACTIONS(1234),
    [anon_sym_BANG_EQ] = ACTIONS(1234),
    [anon_sym_AMP_AMP] = ACTIONS(1234),
    [anon_sym_PIPE_PIPE] = ACTIONS(1234),
    [anon_sym_PIPE] = ACTIONS(1232),
    [anon_sym_CARET] = ACTIONS(1234),
    [anon_sym_LT_LT] = ACTIONS(1236),
    [anon_sym_GT_GT] = ACTIONS(1238),
    [anon_sym_GT_GT_GT] = ACTIONS(1236),
    [anon_sym_RPAREN] = ACTIONS(1234),
    [anon_sym_COMMA] = ACTIONS(1234),
    [anon_sym_QMARK] = ACTIONS(1234),
    [sym_comment] = ACTIONS(50),
  },
  [445] = {
    [anon_sym_LT] = ACTIONS(1240),
    [anon_sym_EQ_EQ] = ACTIONS(1242),
    [anon_sym_BANG_EQ] = ACTIONS(1242),
    [anon_sym_AMP_AMP] = ACTIONS(1242),
    [anon_sym_PIPE_PIPE] = ACTIONS(1242),
    [anon_sym_PLUS] = ACTIONS(1244),
    [anon_sym_DASH] = ACTIONS(1244),
    [anon_sym_PIPE] = ACTIONS(1240),
    [anon_sym_CARET] = ACTIONS(1242),
    [anon_sym_LT_LT] = ACTIONS(1242),
    [anon_sym_GT_GT] = ACTIONS(1240),
    [anon_sym_GT_GT_GT] = ACTIONS(1242),
    [anon_sym_RPAREN] = ACTIONS(1242),
    [anon_sym_COMMA] = ACTIONS(1242),
    [anon_sym_QMARK] = ACTIONS(1242),
    [sym_comment] = ACTIONS(50),
  },
  [446] = {
    [anon_sym_LT] = ACTIONS(1246),
    [anon_sym_EQ_EQ] = ACTIONS(1248),
    [anon_sym_BANG_EQ] = ACTIONS(1248),
    [anon_sym_AMP_AMP] = ACTIONS(1248),
    [anon_sym_PIPE_PIPE] = ACTIONS(1248),
    [anon_sym_PLUS] = ACTIONS(1248),
    [anon_sym_DASH] = ACTIONS(1248),
    [anon_sym_STAR] = ACTIONS(1250),
    [anon_sym_SLASH] = ACTIONS(1252),
    [anon_sym_PIPE] = ACTIONS(1246),
    [anon_sym_CARET] = ACTIONS(1248),
    [anon_sym_PERCENT] = ACTIONS(1250),
    [anon_sym_LT_LT] = ACTIONS(1248),
    [anon_sym_GT_GT] = ACTIONS(1246),
    [anon_sym_GT_GT_GT] = ACTIONS(1248),
    [anon_sym_RPAREN] = ACTIONS(1248),
    [anon_sym_COMMA] = ACTIONS(1248),
    [anon_sym_QMARK] = ACTIONS(1248),
    [sym_comment] = ACTIONS(50),
  },
  [447] = {
    [anon_sym_EQ] = ACTIONS(604),
    [sym_comment] = ACTIONS(50),
  },
  [448] = {
    [anon_sym_RPAREN] = ACTIONS(1254),
    [anon_sym_COMMA] = ACTIONS(1254),
    [sym_comment] = ACTIONS(50),
  },
  [449] = {
    [sym_element_value_pair] = STATE(611),
    [sym_identifier] = ACTIONS(882),
    [sym_comment] = ACTIONS(50),
  },
  [450] = {
    [ts_builtin_sym_end] = ACTIONS(1256),
    [sym_decimal_integer_literal] = ACTIONS(1258),
    [sym_hex_integer_literal] = ACTIONS(1258),
    [sym_octal_integer_literal] = ACTIONS(1258),
    [sym_binary_integer_literal] = ACTIONS(1258),
    [sym_decimal_floating_point_literal] = ACTIONS(1258),
    [sym_hex_floating_point_literal] = ACTIONS(1260),
    [anon_sym_true] = ACTIONS(1258),
    [anon_sym_false] = ACTIONS(1258),
    [anon_sym_SQUOTE] = ACTIONS(1256),
    [sym_string_literal] = ACTIONS(1256),
    [sym_null_literal] = ACTIONS(1258),
    [anon_sym_LPAREN] = ACTIONS(1256),
    [anon_sym_BANG] = ACTIONS(1256),
    [anon_sym_TILDE] = ACTIONS(1256),
    [anon_sym_PLUS_PLUS] = ACTIONS(1256),
    [anon_sym_DASH_DASH] = ACTIONS(1256),
    [anon_sym_RBRACE] = ACTIONS(1256),
    [anon_sym_AT] = ACTIONS(1256),
    [anon_sym_open] = ACTIONS(1258),
    [anon_sym_module] = ACTIONS(1258),
    [anon_sym_static] = ACTIONS(1258),
    [anon_sym_package] = ACTIONS(1258),
    [anon_sym_import] = ACTIONS(1258),
    [anon_sym_class] = ACTIONS(1258),
    [anon_sym_public] = ACTIONS(1258),
    [anon_sym_protected] = ACTIONS(1258),
    [anon_sym_private] = ACTIONS(1258),
    [anon_sym_abstract] = ACTIONS(1258),
    [anon_sym_final] = ACTIONS(1258),
    [anon_sym_strictfp] = ACTIONS(1258),
    [anon_sym_default] = ACTIONS(1258),
    [anon_sym_interface] = ACTIONS(1258),
    [sym_identifier] = ACTIONS(1260),
    [sym_comment] = ACTIONS(50),
  },
  [451] = {
    [anon_sym_RBRACE] = ACTIONS(1262),
    [anon_sym_requires] = ACTIONS(1262),
    [anon_sym_exports] = ACTIONS(1262),
    [anon_sym_opens] = ACTIONS(1262),
    [anon_sym_uses] = ACTIONS(1262),
    [anon_sym_provides] = ACTIONS(1262),
    [sym_comment] = ACTIONS(50),
  },
  [452] = {
    [sym_identifier] = ACTIONS(1264),
    [sym_comment] = ACTIONS(50),
  },
  [453] = {
    [anon_sym_transitive] = ACTIONS(1266),
    [anon_sym_static] = ACTIONS(1266),
    [sym_identifier] = ACTIONS(1268),
    [sym_comment] = ACTIONS(50),
  },
  [454] = {
    [sym__semicolon] = ACTIONS(1270),
    [anon_sym_DOT] = ACTIONS(910),
    [sym_comment] = ACTIONS(50),
  },
  [455] = {
    [sym_module_name] = STATE(614),
    [sym_identifier] = ACTIONS(1272),
    [sym_comment] = ACTIONS(50),
  },
  [456] = {
    [sym_identifier] = ACTIONS(1274),
    [sym_comment] = ACTIONS(50),
  },
  [457] = {
    [sym_module_name] = STATE(616),
    [aux_sym_module_directive_repeat2] = STATE(617),
    [sym__semicolon] = ACTIONS(1270),
    [anon_sym_COMMA] = ACTIONS(912),
    [sym_identifier] = ACTIONS(1272),
    [sym_comment] = ACTIONS(50),
  },
  [458] = {
    [aux_sym_module_directive_repeat2] = STATE(617),
    [sym__semicolon] = ACTIONS(1270),
    [anon_sym_COMMA] = ACTIONS(912),
    [anon_sym_DOT] = ACTIONS(910),
    [sym_comment] = ACTIONS(50),
  },
  [459] = {
    [sym__semicolon] = ACTIONS(1270),
    [anon_sym_COMMA] = ACTIONS(1276),
    [sym_comment] = ACTIONS(50),
  },
  [460] = {
    [sym_package_or_type_name] = STATE(619),
    [sym_identifier] = ACTIONS(290),
    [sym_comment] = ACTIONS(50),
  },
  [461] = {
    [ts_builtin_sym_end] = ACTIONS(1278),
    [sym_decimal_integer_literal] = ACTIONS(1280),
    [sym_hex_integer_literal] = ACTIONS(1280),
    [sym_octal_integer_literal] = ACTIONS(1280),
    [sym_binary_integer_literal] = ACTIONS(1280),
    [sym_decimal_floating_point_literal] = ACTIONS(1280),
    [sym_hex_floating_point_literal] = ACTIONS(1282),
    [anon_sym_true] = ACTIONS(1280),
    [anon_sym_false] = ACTIONS(1280),
    [anon_sym_SQUOTE] = ACTIONS(1278),
    [sym_string_literal] = ACTIONS(1278),
    [sym_null_literal] = ACTIONS(1280),
    [anon_sym_LPAREN] = ACTIONS(1278),
    [anon_sym_BANG] = ACTIONS(1278),
    [anon_sym_TILDE] = ACTIONS(1278),
    [anon_sym_PLUS_PLUS] = ACTIONS(1278),
    [anon_sym_DASH_DASH] = ACTIONS(1278),
    [anon_sym_RBRACE] = ACTIONS(1278),
    [anon_sym_AT] = ACTIONS(1278),
    [anon_sym_open] = ACTIONS(1280),
    [anon_sym_module] = ACTIONS(1280),
    [anon_sym_static] = ACTIONS(1280),
    [anon_sym_package] = ACTIONS(1280),
    [anon_sym_import] = ACTIONS(1280),
    [anon_sym_class] = ACTIONS(1280),
    [anon_sym_public] = ACTIONS(1280),
    [anon_sym_protected] = ACTIONS(1280),
    [anon_sym_private] = ACTIONS(1280),
    [anon_sym_abstract] = ACTIONS(1280),
    [anon_sym_final] = ACTIONS(1280),
    [anon_sym_strictfp] = ACTIONS(1280),
    [anon_sym_default] = ACTIONS(1280),
    [anon_sym_interface] = ACTIONS(1280),
    [sym_identifier] = ACTIONS(1282),
    [sym_comment] = ACTIONS(50),
  },
  [462] = {
    [ts_builtin_sym_end] = ACTIONS(1284),
    [sym_decimal_integer_literal] = ACTIONS(1286),
    [sym_hex_integer_literal] = ACTIONS(1286),
    [sym_octal_integer_literal] = ACTIONS(1286),
    [sym_binary_integer_literal] = ACTIONS(1286),
    [sym_decimal_floating_point_literal] = ACTIONS(1286),
    [sym_hex_floating_point_literal] = ACTIONS(1288),
    [anon_sym_true] = ACTIONS(1286),
    [anon_sym_false] = ACTIONS(1286),
    [anon_sym_SQUOTE] = ACTIONS(1284),
    [sym_string_literal] = ACTIONS(1284),
    [sym_null_literal] = ACTIONS(1286),
    [anon_sym_LPAREN] = ACTIONS(1284),
    [anon_sym_BANG] = ACTIONS(1284),
    [anon_sym_TILDE] = ACTIONS(1284),
    [anon_sym_PLUS_PLUS] = ACTIONS(1284),
    [anon_sym_DASH_DASH] = ACTIONS(1284),
    [anon_sym_RBRACE] = ACTIONS(1284),
    [anon_sym_AT] = ACTIONS(1284),
    [anon_sym_open] = ACTIONS(1286),
    [anon_sym_module] = ACTIONS(1286),
    [anon_sym_static] = ACTIONS(1286),
    [anon_sym_package] = ACTIONS(1286),
    [anon_sym_import] = ACTIONS(1286),
    [anon_sym_class] = ACTIONS(1286),
    [anon_sym_public] = ACTIONS(1286),
    [anon_sym_protected] = ACTIONS(1286),
    [anon_sym_private] = ACTIONS(1286),
    [anon_sym_abstract] = ACTIONS(1286),
    [anon_sym_final] = ACTIONS(1286),
    [anon_sym_strictfp] = ACTIONS(1286),
    [anon_sym_default] = ACTIONS(1286),
    [anon_sym_interface] = ACTIONS(1286),
    [sym_identifier] = ACTIONS(1288),
    [sym_comment] = ACTIONS(50),
  },
  [463] = {
    [sym__literal] = STATE(622),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(623),
    [sym_element_value_pair] = STATE(187),
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
    [anon_sym_RPAREN] = ACTIONS(1290),
    [sym_identifier] = ACTIONS(1292),
    [sym_comment] = ACTIONS(50),
  },
  [464] = {
    [sym_identifier] = ACTIONS(1294),
    [sym_comment] = ACTIONS(50),
  },
  [465] = {
    [aux_sym_type_bound_repeat1] = STATE(626),
    [anon_sym_GT] = ACTIONS(1296),
    [anon_sym_AMP] = ACTIONS(1298),
    [anon_sym_COMMA] = ACTIONS(1296),
    [sym_comment] = ACTIONS(50),
  },
  [466] = {
    [anon_sym_GT] = ACTIONS(1300),
    [anon_sym_COMMA] = ACTIONS(1300),
    [sym_comment] = ACTIONS(50),
  },
  [467] = {
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [sym_type_parameter] = STATE(627),
    [aux_sym_class_or_interface_type_repeat1] = STATE(207),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(448),
    [sym_comment] = ACTIONS(50),
  },
  [468] = {
    [anon_sym_GT] = ACTIONS(1302),
    [anon_sym_COMMA] = ACTIONS(1302),
    [sym_comment] = ACTIONS(50),
  },
  [469] = {
    [sym_identifier] = ACTIONS(1304),
    [sym_comment] = ACTIONS(50),
  },
  [470] = {
    [sym__expression] = STATE(630),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1306),
    [anon_sym_TILDE] = ACTIONS(1306),
    [anon_sym_PLUS_PLUS] = ACTIONS(1308),
    [anon_sym_DASH_DASH] = ACTIONS(1308),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [471] = {
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_DOT] = ACTIONS(272),
    [anon_sym_AT] = ACTIONS(272),
    [anon_sym_static] = ACTIONS(274),
    [anon_sym_class] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_abstract] = ACTIONS(274),
    [anon_sym_final] = ACTIONS(274),
    [anon_sym_strictfp] = ACTIONS(274),
    [anon_sym_default] = ACTIONS(274),
    [sym_identifier] = ACTIONS(356),
    [sym_comment] = ACTIONS(50),
  },
  [472] = {
    [anon_sym_LPAREN] = ACTIONS(1310),
    [anon_sym_DOT] = ACTIONS(1312),
    [anon_sym_AT] = ACTIONS(276),
    [anon_sym_static] = ACTIONS(362),
    [anon_sym_class] = ACTIONS(362),
    [anon_sym_public] = ACTIONS(362),
    [anon_sym_protected] = ACTIONS(362),
    [anon_sym_private] = ACTIONS(362),
    [anon_sym_abstract] = ACTIONS(362),
    [anon_sym_final] = ACTIONS(362),
    [anon_sym_strictfp] = ACTIONS(362),
    [anon_sym_default] = ACTIONS(362),
    [sym_identifier] = ACTIONS(364),
    [sym_comment] = ACTIONS(50),
  },
  [473] = {
    [sym_type_parameters] = STATE(634),
    [sym_superclass] = STATE(635),
    [sym_super_interfaces] = STATE(636),
    [sym_class_body] = STATE(637),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(1314),
    [anon_sym_extends] = ACTIONS(300),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [474] = {
    [sym__semicolon] = ACTIONS(1316),
    [sym_comment] = ACTIONS(50),
  },
  [475] = {
    [sym__semicolon] = ACTIONS(1318),
    [anon_sym_EQ] = ACTIONS(1320),
    [anon_sym_PLUS_EQ] = ACTIONS(1318),
    [anon_sym_DASH_EQ] = ACTIONS(1318),
    [anon_sym_STAR_EQ] = ACTIONS(1318),
    [anon_sym_SLASH_EQ] = ACTIONS(1318),
    [anon_sym_AMP_EQ] = ACTIONS(1318),
    [anon_sym_PIPE_EQ] = ACTIONS(1318),
    [anon_sym_CARET_EQ] = ACTIONS(1318),
    [anon_sym_PERCENT_EQ] = ACTIONS(1318),
    [anon_sym_LT_LT_EQ] = ACTIONS(1318),
    [anon_sym_GT_GT_EQ] = ACTIONS(1318),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1318),
    [anon_sym_GT] = ACTIONS(1320),
    [anon_sym_LT] = ACTIONS(1320),
    [anon_sym_EQ_EQ] = ACTIONS(1318),
    [anon_sym_GT_EQ] = ACTIONS(1318),
    [anon_sym_LT_EQ] = ACTIONS(1318),
    [anon_sym_BANG_EQ] = ACTIONS(1318),
    [anon_sym_AMP_AMP] = ACTIONS(1318),
    [anon_sym_PIPE_PIPE] = ACTIONS(1318),
    [anon_sym_PLUS] = ACTIONS(1320),
    [anon_sym_DASH] = ACTIONS(1320),
    [anon_sym_STAR] = ACTIONS(1320),
    [anon_sym_SLASH] = ACTIONS(1320),
    [anon_sym_AMP] = ACTIONS(1320),
    [anon_sym_PIPE] = ACTIONS(1320),
    [anon_sym_CARET] = ACTIONS(1320),
    [anon_sym_PERCENT] = ACTIONS(1320),
    [anon_sym_LT_LT] = ACTIONS(1320),
    [anon_sym_GT_GT] = ACTIONS(1320),
    [anon_sym_GT_GT_GT] = ACTIONS(1320),
    [anon_sym_RPAREN] = ACTIONS(1318),
    [anon_sym_COMMA] = ACTIONS(1318),
    [anon_sym_QMARK] = ACTIONS(1318),
    [anon_sym_COLON] = ACTIONS(1318),
    [anon_sym_PLUS_PLUS] = ACTIONS(1318),
    [anon_sym_DASH_DASH] = ACTIONS(1318),
    [anon_sym_LBRACE] = ACTIONS(1318),
    [anon_sym_RBRACE] = ACTIONS(1318),
    [anon_sym_RBRACK] = ACTIONS(1318),
    [anon_sym_AT] = ACTIONS(1318),
    [anon_sym_static] = ACTIONS(1320),
    [anon_sym_class] = ACTIONS(1320),
    [anon_sym_public] = ACTIONS(1320),
    [anon_sym_protected] = ACTIONS(1320),
    [anon_sym_private] = ACTIONS(1320),
    [anon_sym_abstract] = ACTIONS(1320),
    [anon_sym_final] = ACTIONS(1320),
    [anon_sym_strictfp] = ACTIONS(1320),
    [anon_sym_default] = ACTIONS(1320),
    [anon_sym_interface] = ACTIONS(1320),
    [sym_identifier] = ACTIONS(1322),
    [sym_comment] = ACTIONS(50),
  },
  [476] = {
    [anon_sym_if] = ACTIONS(1324),
    [anon_sym_RBRACE] = ACTIONS(1324),
    [anon_sym_AT] = ACTIONS(1324),
    [anon_sym_static] = ACTIONS(1324),
    [anon_sym_class] = ACTIONS(1324),
    [anon_sym_public] = ACTIONS(1324),
    [anon_sym_protected] = ACTIONS(1324),
    [anon_sym_private] = ACTIONS(1324),
    [anon_sym_abstract] = ACTIONS(1324),
    [anon_sym_final] = ACTIONS(1324),
    [anon_sym_strictfp] = ACTIONS(1324),
    [anon_sym_default] = ACTIONS(1324),
    [sym_comment] = ACTIONS(50),
  },
  [477] = {
    [sym_statement] = STATE(335),
    [sym_if_then_statement] = STATE(336),
    [sym__annotation] = STATE(333),
    [sym_normal_annotation] = STATE(337),
    [sym_marker_annotation] = STATE(337),
    [sym_single_element_annotation] = STATE(337),
    [sym_class_declaration] = STATE(335),
    [sym_normal_class_declaration] = STATE(338),
    [sym_modifier] = STATE(339),
    [sym_block_statement] = STATE(638),
    [sym_local_variable_declaration_statement] = STATE(335),
    [sym_local_variable_declaration] = STATE(342),
    [aux_sym_normal_class_declaration_repeat1] = STATE(343),
    [anon_sym_if] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1326),
    [anon_sym_AT] = ACTIONS(674),
    [anon_sym_static] = ACTIONS(676),
    [anon_sym_class] = ACTIONS(678),
    [anon_sym_public] = ACTIONS(676),
    [anon_sym_protected] = ACTIONS(676),
    [anon_sym_private] = ACTIONS(676),
    [anon_sym_abstract] = ACTIONS(676),
    [anon_sym_final] = ACTIONS(676),
    [anon_sym_strictfp] = ACTIONS(676),
    [anon_sym_default] = ACTIONS(676),
    [sym_comment] = ACTIONS(50),
  },
  [478] = {
    [anon_sym_if] = ACTIONS(1328),
    [anon_sym_RBRACE] = ACTIONS(1328),
    [anon_sym_AT] = ACTIONS(1328),
    [anon_sym_static] = ACTIONS(1328),
    [anon_sym_class] = ACTIONS(1328),
    [anon_sym_public] = ACTIONS(1328),
    [anon_sym_protected] = ACTIONS(1328),
    [anon_sym_private] = ACTIONS(1328),
    [anon_sym_abstract] = ACTIONS(1328),
    [anon_sym_final] = ACTIONS(1328),
    [anon_sym_strictfp] = ACTIONS(1328),
    [anon_sym_default] = ACTIONS(1328),
    [sym_comment] = ACTIONS(50),
  },
  [479] = {
    [sym_identifier] = ACTIONS(1330),
    [sym_comment] = ACTIONS(50),
  },
  [480] = {
    [sym_annotation_type_body] = STATE(641),
    [anon_sym_LBRACE] = ACTIONS(1332),
    [sym_comment] = ACTIONS(50),
  },
  [481] = {
    [sym__literal] = STATE(644),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(645),
    [sym_element_value_pair] = STATE(187),
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
    [anon_sym_RPAREN] = ACTIONS(1334),
    [sym_identifier] = ACTIONS(1336),
    [sym_comment] = ACTIONS(50),
  },
  [482] = {
    [sym_identifier] = ACTIONS(1338),
    [sym_comment] = ACTIONS(50),
  },
  [483] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(216),
    [sym_marker_annotation] = STATE(216),
    [sym_single_element_annotation] = STATE(216),
    [sym_class_declaration] = STATE(208),
    [sym_normal_class_declaration] = STATE(217),
    [sym_modifier] = STATE(32),
    [sym_type_parameters] = STATE(218),
    [sym_class_body_declaration] = STATE(219),
    [sym_constructor_declaration] = STATE(220),
    [sym_constructor_declarator] = STATE(221),
    [sym_class_member_declaration] = STATE(220),
    [sym_interface_declaration] = STATE(208),
    [sym_annotation_type_declaration] = STATE(222),
    [sym_normal_interface_declaration] = STATE(222),
    [sym_block] = STATE(220),
    [aux_sym_normal_class_declaration_repeat1] = STATE(223),
    [aux_sym_class_body_repeat1] = STATE(648),
    [sym__semicolon] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(454),
    [anon_sym_RBRACE] = ACTIONS(1340),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(460),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(462),
    [sym_identifier] = ACTIONS(464),
    [sym_comment] = ACTIONS(50),
  },
  [484] = {
    [sym_superclass] = STATE(649),
    [sym_super_interfaces] = STATE(650),
    [sym_class_body] = STATE(651),
    [anon_sym_LBRACE] = ACTIONS(978),
    [anon_sym_extends] = ACTIONS(300),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [485] = {
    [sym_super_interfaces] = STATE(650),
    [sym_class_body] = STATE(651),
    [anon_sym_LBRACE] = ACTIONS(978),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [486] = {
    [sym_class_body] = STATE(651),
    [anon_sym_LBRACE] = ACTIONS(978),
    [sym_comment] = ACTIONS(50),
  },
  [487] = {
    [sym__semicolon] = ACTIONS(468),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_LBRACE] = ACTIONS(468),
    [anon_sym_RBRACE] = ACTIONS(468),
    [anon_sym_AT] = ACTIONS(468),
    [anon_sym_static] = ACTIONS(470),
    [anon_sym_class] = ACTIONS(470),
    [anon_sym_public] = ACTIONS(470),
    [anon_sym_protected] = ACTIONS(470),
    [anon_sym_private] = ACTIONS(470),
    [anon_sym_abstract] = ACTIONS(470),
    [anon_sym_final] = ACTIONS(470),
    [anon_sym_strictfp] = ACTIONS(470),
    [anon_sym_default] = ACTIONS(470),
    [anon_sym_interface] = ACTIONS(470),
    [sym_identifier] = ACTIONS(472),
    [sym_comment] = ACTIONS(50),
  },
  [488] = {
    [sym__annotation] = STATE(236),
    [sym_normal_annotation] = STATE(240),
    [sym_marker_annotation] = STATE(240),
    [sym_single_element_annotation] = STATE(240),
    [sym_class_declaration] = STATE(233),
    [sym_normal_class_declaration] = STATE(241),
    [sym_modifier] = STATE(242),
    [sym_type_parameters] = STATE(243),
    [sym_interface_declaration] = STATE(233),
    [sym_annotation_type_declaration] = STATE(244),
    [sym_normal_interface_declaration] = STATE(244),
    [sym_interface_member_declaration] = STATE(245),
    [sym_constant_declaration] = STATE(233),
    [sym_variable_declarator_list] = STATE(246),
    [sym_variable_declarator] = STATE(247),
    [sym_variable_declarator_id] = STATE(96),
    [sym_interface_method_declaration] = STATE(233),
    [sym_method_header] = STATE(248),
    [sym_result] = STATE(249),
    [aux_sym_normal_class_declaration_repeat1] = STATE(250),
    [aux_sym_interface_body_repeat1] = STATE(653),
    [sym__semicolon] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_RBRACE] = ACTIONS(1342),
    [anon_sym_AT] = ACTIONS(478),
    [anon_sym_static] = ACTIONS(480),
    [anon_sym_class] = ACTIONS(482),
    [anon_sym_public] = ACTIONS(480),
    [anon_sym_protected] = ACTIONS(480),
    [anon_sym_private] = ACTIONS(480),
    [anon_sym_abstract] = ACTIONS(480),
    [anon_sym_final] = ACTIONS(480),
    [anon_sym_strictfp] = ACTIONS(480),
    [anon_sym_default] = ACTIONS(480),
    [anon_sym_void] = ACTIONS(484),
    [anon_sym_interface] = ACTIONS(486),
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(50),
  },
  [489] = {
    [sym_extends_interfaces] = STATE(654),
    [sym_interface_body] = STATE(655),
    [anon_sym_LBRACE] = ACTIONS(980),
    [anon_sym_extends] = ACTIONS(306),
    [sym_comment] = ACTIONS(50),
  },
  [490] = {
    [sym_interface_body] = STATE(655),
    [anon_sym_LBRACE] = ACTIONS(980),
    [sym_comment] = ACTIONS(50),
  },
  [491] = {
    [sym__semicolon] = ACTIONS(488),
    [anon_sym_LT] = ACTIONS(488),
    [anon_sym_LBRACE] = ACTIONS(488),
    [anon_sym_RBRACE] = ACTIONS(488),
    [anon_sym_AT] = ACTIONS(488),
    [anon_sym_static] = ACTIONS(490),
    [anon_sym_class] = ACTIONS(490),
    [anon_sym_public] = ACTIONS(490),
    [anon_sym_protected] = ACTIONS(490),
    [anon_sym_private] = ACTIONS(490),
    [anon_sym_abstract] = ACTIONS(490),
    [anon_sym_final] = ACTIONS(490),
    [anon_sym_strictfp] = ACTIONS(490),
    [anon_sym_default] = ACTIONS(490),
    [anon_sym_interface] = ACTIONS(490),
    [sym_identifier] = ACTIONS(492),
    [sym_comment] = ACTIONS(50),
  },
  [492] = {
    [anon_sym_LBRACE] = ACTIONS(1344),
    [anon_sym_throws] = ACTIONS(1344),
    [sym_comment] = ACTIONS(50),
  },
  [493] = {
    [sym__expression] = STATE(656),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1306),
    [anon_sym_TILDE] = ACTIONS(1306),
    [anon_sym_PLUS_PLUS] = ACTIONS(1308),
    [anon_sym_DASH_DASH] = ACTIONS(1308),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [494] = {
    [sym__semicolon] = ACTIONS(1346),
    [anon_sym_LT] = ACTIONS(1346),
    [anon_sym_LBRACE] = ACTIONS(1346),
    [anon_sym_RBRACE] = ACTIONS(1346),
    [anon_sym_AT] = ACTIONS(1346),
    [anon_sym_static] = ACTIONS(1348),
    [anon_sym_class] = ACTIONS(1348),
    [anon_sym_public] = ACTIONS(1348),
    [anon_sym_protected] = ACTIONS(1348),
    [anon_sym_private] = ACTIONS(1348),
    [anon_sym_abstract] = ACTIONS(1348),
    [anon_sym_final] = ACTIONS(1348),
    [anon_sym_strictfp] = ACTIONS(1348),
    [anon_sym_default] = ACTIONS(1348),
    [anon_sym_interface] = ACTIONS(1348),
    [sym_identifier] = ACTIONS(1350),
    [sym_comment] = ACTIONS(50),
  },
  [495] = {
    [aux_sym_class_literal_repeat1] = STATE(659),
    [anon_sym_DOT] = ACTIONS(1352),
    [anon_sym_LBRACK] = ACTIONS(1354),
    [anon_sym_AT] = ACTIONS(1357),
    [sym_comment] = ACTIONS(50),
  },
  [496] = {
    [anon_sym_DOT] = ACTIONS(1359),
    [anon_sym_LBRACK] = ACTIONS(1359),
    [anon_sym_AT] = ACTIONS(1359),
    [sym_comment] = ACTIONS(50),
  },
  [497] = {
    [anon_sym_DOT] = ACTIONS(1361),
    [anon_sym_LBRACK] = ACTIONS(1361),
    [anon_sym_AT] = ACTIONS(1361),
    [sym_comment] = ACTIONS(50),
  },
  [498] = {
    [sym_package_or_type_name] = STATE(661),
    [sym_identifier] = ACTIONS(1363),
    [sym_comment] = ACTIONS(50),
  },
  [499] = {
    [anon_sym_LPAREN] = ACTIONS(1365),
    [anon_sym_DOT] = ACTIONS(1367),
    [anon_sym_LBRACK] = ACTIONS(1367),
    [anon_sym_COLON_COLON] = ACTIONS(1367),
    [sym_comment] = ACTIONS(50),
  },
  [500] = {
    [anon_sym_LPAREN] = ACTIONS(1365),
    [anon_sym_DOT] = ACTIONS(1369),
    [anon_sym_COLON_COLON] = ACTIONS(1371),
    [sym_comment] = ACTIONS(50),
  },
  [501] = {
    [sym_type_arguments] = STATE(667),
    [sym_class_or_interface_type] = STATE(668),
    [sym_primitive_type] = STATE(669),
    [sym_integral_type] = STATE(531),
    [sym_floating_point_type] = STATE(531),
    [sym__annotation] = STATE(537),
    [sym_normal_annotation] = STATE(538),
    [sym_marker_annotation] = STATE(538),
    [sym_single_element_annotation] = STATE(538),
    [sym_class_or_interface_type_to_instantiate] = STATE(670),
    [aux_sym_class_or_interface_type_repeat1] = STATE(671),
    [anon_sym_LT] = ACTIONS(1373),
    [anon_sym_boolean] = ACTIONS(1038),
    [anon_sym_byte] = ACTIONS(992),
    [anon_sym_short] = ACTIONS(992),
    [anon_sym_int] = ACTIONS(992),
    [anon_sym_long] = ACTIONS(992),
    [anon_sym_char] = ACTIONS(992),
    [anon_sym_float] = ACTIONS(994),
    [anon_sym_double] = ACTIONS(994),
    [anon_sym_AT] = ACTIONS(1040),
    [sym_identifier] = ACTIONS(1375),
    [sym_comment] = ACTIONS(50),
  },
  [502] = {
    [anon_sym_DOT] = ACTIONS(1352),
    [sym_comment] = ACTIONS(50),
  },
  [503] = {
    [sym_type_arguments] = STATE(363),
    [aux_sym_class_or_interface_type_repeat2] = STATE(364),
    [anon_sym_LT] = ACTIONS(722),
    [anon_sym_LPAREN] = ACTIONS(1377),
    [anon_sym_DOT] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(272),
    [anon_sym_AT] = ACTIONS(720),
    [anon_sym_COLON_COLON] = ACTIONS(720),
    [sym_comment] = ACTIONS(50),
  },
  [504] = {
    [anon_sym_DOT] = ACTIONS(1367),
    [anon_sym_LBRACK] = ACTIONS(1367),
    [anon_sym_COLON_COLON] = ACTIONS(1367),
    [sym_comment] = ACTIONS(50),
  },
  [505] = {
    [anon_sym_this] = ACTIONS(1379),
    [anon_sym_super] = ACTIONS(1379),
    [sym_comment] = ACTIONS(50),
  },
  [506] = {
    [sym_dims] = STATE(675),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym_dims_exprs] = STATE(676),
    [sym_dims_expr] = STATE(677),
    [aux_sym_class_or_interface_type_repeat1] = STATE(678),
    [aux_sym_dims_repeat1] = STATE(102),
    [anon_sym_LBRACK] = ACTIONS(1381),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_COLON_COLON] = ACTIONS(1383),
    [sym_comment] = ACTIONS(50),
  },
  [507] = {
    [sym_dims] = STATE(675),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [aux_sym_class_or_interface_type_repeat1] = STATE(101),
    [aux_sym_dims_repeat1] = STATE(102),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(193),
    [sym_comment] = ACTIONS(50),
  },
  [508] = {
    [anon_sym_boolean] = ACTIONS(233),
    [anon_sym_byte] = ACTIONS(233),
    [anon_sym_short] = ACTIONS(233),
    [anon_sym_int] = ACTIONS(233),
    [anon_sym_long] = ACTIONS(233),
    [anon_sym_char] = ACTIONS(233),
    [anon_sym_float] = ACTIONS(233),
    [anon_sym_double] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(148),
    [anon_sym_static] = ACTIONS(90),
    [anon_sym_class] = ACTIONS(90),
    [anon_sym_public] = ACTIONS(90),
    [anon_sym_protected] = ACTIONS(90),
    [anon_sym_private] = ACTIONS(90),
    [anon_sym_abstract] = ACTIONS(90),
    [anon_sym_final] = ACTIONS(90),
    [anon_sym_strictfp] = ACTIONS(90),
    [anon_sym_default] = ACTIONS(90),
    [sym_identifier] = ACTIONS(235),
    [sym_comment] = ACTIONS(50),
  },
  [509] = {
    [anon_sym_boolean] = ACTIONS(238),
    [anon_sym_byte] = ACTIONS(238),
    [anon_sym_short] = ACTIONS(238),
    [anon_sym_int] = ACTIONS(238),
    [anon_sym_long] = ACTIONS(238),
    [anon_sym_char] = ACTIONS(238),
    [anon_sym_float] = ACTIONS(238),
    [anon_sym_double] = ACTIONS(238),
    [anon_sym_AT] = ACTIONS(153),
    [anon_sym_static] = ACTIONS(238),
    [anon_sym_class] = ACTIONS(238),
    [anon_sym_public] = ACTIONS(238),
    [anon_sym_protected] = ACTIONS(238),
    [anon_sym_private] = ACTIONS(238),
    [anon_sym_abstract] = ACTIONS(238),
    [anon_sym_final] = ACTIONS(238),
    [anon_sym_strictfp] = ACTIONS(238),
    [anon_sym_default] = ACTIONS(238),
    [sym_identifier] = ACTIONS(240),
    [sym_comment] = ACTIONS(50),
  },
  [510] = {
    [aux_sym_class_literal_repeat1] = STATE(659),
    [anon_sym_DOT] = ACTIONS(1385),
    [anon_sym_LBRACK] = ACTIONS(1387),
    [sym_comment] = ACTIONS(50),
  },
  [511] = {
    [sym_statement] = STATE(335),
    [sym_if_then_statement] = STATE(336),
    [sym__annotation] = STATE(333),
    [sym_normal_annotation] = STATE(337),
    [sym_marker_annotation] = STATE(337),
    [sym_single_element_annotation] = STATE(337),
    [sym_class_declaration] = STATE(335),
    [sym_normal_class_declaration] = STATE(338),
    [sym_modifier] = STATE(339),
    [sym_block_statements] = STATE(681),
    [sym_block_statement] = STATE(341),
    [sym_local_variable_declaration_statement] = STATE(335),
    [sym_local_variable_declaration] = STATE(342),
    [aux_sym_normal_class_declaration_repeat1] = STATE(343),
    [anon_sym_if] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(1389),
    [anon_sym_AT] = ACTIONS(674),
    [anon_sym_static] = ACTIONS(676),
    [anon_sym_class] = ACTIONS(678),
    [anon_sym_public] = ACTIONS(676),
    [anon_sym_protected] = ACTIONS(676),
    [anon_sym_private] = ACTIONS(676),
    [anon_sym_abstract] = ACTIONS(676),
    [anon_sym_final] = ACTIONS(676),
    [anon_sym_strictfp] = ACTIONS(676),
    [anon_sym_default] = ACTIONS(676),
    [sym_comment] = ACTIONS(50),
  },
  [512] = {
    [anon_sym_DOT] = ACTIONS(1391),
    [anon_sym_LBRACK] = ACTIONS(1393),
    [anon_sym_COLON_COLON] = ACTIONS(1371),
    [sym_comment] = ACTIONS(50),
  },
  [513] = {
    [anon_sym_DOT] = ACTIONS(1395),
    [anon_sym_COLON_COLON] = ACTIONS(1371),
    [sym_comment] = ACTIONS(50),
  },
  [514] = {
    [anon_sym_DOT] = ACTIONS(1397),
    [anon_sym_COLON_COLON] = ACTIONS(1397),
    [sym_comment] = ACTIONS(50),
  },
  [515] = {
    [anon_sym_DOT] = ACTIONS(1397),
    [anon_sym_LBRACK] = ACTIONS(1393),
    [anon_sym_COLON_COLON] = ACTIONS(1397),
    [sym_comment] = ACTIONS(50),
  },
  [516] = {
    [anon_sym_DOT] = ACTIONS(1399),
    [anon_sym_LBRACK] = ACTIONS(1399),
    [anon_sym_COLON_COLON] = ACTIONS(1399),
    [sym_comment] = ACTIONS(50),
  },
  [517] = {
    [anon_sym_COLON_COLON] = ACTIONS(1401),
    [sym_comment] = ACTIONS(50),
  },
  [518] = {
    [anon_sym_RBRACE] = ACTIONS(1389),
    [sym_comment] = ACTIONS(50),
  },
  [519] = {
    [anon_sym_LPAREN] = ACTIONS(1403),
    [sym_comment] = ACTIONS(50),
  },
  [520] = {
    [sym_integral_type] = STATE(687),
    [sym_floating_point_type] = STATE(687),
    [sym__annotation] = STATE(688),
    [sym_normal_annotation] = STATE(538),
    [sym_marker_annotation] = STATE(538),
    [sym_single_element_annotation] = STATE(538),
    [anon_sym_boolean] = ACTIONS(1405),
    [anon_sym_byte] = ACTIONS(992),
    [anon_sym_short] = ACTIONS(992),
    [anon_sym_int] = ACTIONS(992),
    [anon_sym_long] = ACTIONS(992),
    [anon_sym_char] = ACTIONS(992),
    [anon_sym_float] = ACTIONS(994),
    [anon_sym_double] = ACTIONS(994),
    [anon_sym_AT] = ACTIONS(1040),
    [sym_identifier] = ACTIONS(1407),
    [sym_comment] = ACTIONS(50),
  },
  [521] = {
    [sym_type_arguments] = STATE(690),
    [aux_sym_class_or_interface_type_repeat2] = STATE(691),
    [anon_sym_LT] = ACTIONS(1373),
    [anon_sym_DOT] = ACTIONS(1409),
    [anon_sym_AT] = ACTIONS(720),
    [sym_identifier] = ACTIONS(1411),
    [sym_comment] = ACTIONS(50),
  },
  [522] = {
    [sym_type_variable] = STATE(693),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [aux_sym_class_or_interface_type_repeat1] = STATE(694),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(1413),
    [sym_comment] = ACTIONS(50),
  },
  [523] = {
    [sym__semicolon] = ACTIONS(1415),
    [anon_sym_LBRACE] = ACTIONS(1415),
    [sym_comment] = ACTIONS(50),
  },
  [524] = {
    [aux_sym_exception_type_list_repeat1] = STATE(696),
    [sym__semicolon] = ACTIONS(1417),
    [anon_sym_COMMA] = ACTIONS(1419),
    [anon_sym_LBRACE] = ACTIONS(1417),
    [sym_comment] = ACTIONS(50),
  },
  [525] = {
    [sym__annotation] = STATE(328),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(1421),
    [sym_comment] = ACTIONS(50),
  },
  [526] = {
    [sym__semicolon] = ACTIONS(1423),
    [anon_sym_LT] = ACTIONS(1423),
    [anon_sym_LBRACE] = ACTIONS(1423),
    [anon_sym_RBRACE] = ACTIONS(1423),
    [anon_sym_AT] = ACTIONS(1423),
    [anon_sym_static] = ACTIONS(1425),
    [anon_sym_class] = ACTIONS(1425),
    [anon_sym_public] = ACTIONS(1425),
    [anon_sym_protected] = ACTIONS(1425),
    [anon_sym_private] = ACTIONS(1425),
    [anon_sym_abstract] = ACTIONS(1425),
    [anon_sym_final] = ACTIONS(1425),
    [anon_sym_strictfp] = ACTIONS(1425),
    [anon_sym_default] = ACTIONS(1425),
    [anon_sym_interface] = ACTIONS(1425),
    [sym_identifier] = ACTIONS(1427),
    [sym_comment] = ACTIONS(50),
  },
  [527] = {
    [sym_identifier] = ACTIONS(1429),
    [sym_comment] = ACTIONS(50),
  },
  [528] = {
    [sym_type_parameters] = STATE(699),
    [sym_superclass] = STATE(649),
    [sym_super_interfaces] = STATE(650),
    [sym_class_body] = STATE(651),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(978),
    [anon_sym_extends] = ACTIONS(300),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [529] = {
    [sym_type_parameters] = STATE(700),
    [sym_extends_interfaces] = STATE(654),
    [sym_interface_body] = STATE(655),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(980),
    [anon_sym_extends] = ACTIONS(306),
    [sym_comment] = ACTIONS(50),
  },
  [530] = {
    [sym_constructor_body] = STATE(701),
    [anon_sym_LBRACE] = ACTIONS(708),
    [sym_comment] = ACTIONS(50),
  },
  [531] = {
    [anon_sym_LBRACK] = ACTIONS(1357),
    [anon_sym_AT] = ACTIONS(1357),
    [sym_comment] = ACTIONS(50),
  },
  [532] = {
    [sym_package_or_type_name] = STATE(703),
    [sym_identifier] = ACTIONS(1431),
    [sym_comment] = ACTIONS(50),
  },
  [533] = {
    [aux_sym_type_arguments_repeat1] = STATE(706),
    [anon_sym_GT] = ACTIONS(1433),
    [anon_sym_COMMA] = ACTIONS(1435),
    [sym_comment] = ACTIONS(50),
  },
  [534] = {
    [anon_sym_GT] = ACTIONS(1437),
    [anon_sym_COMMA] = ACTIONS(1437),
    [sym_comment] = ACTIONS(50),
  },
  [535] = {
    [sym_dims] = STATE(707),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [aux_sym_class_or_interface_type_repeat1] = STATE(101),
    [aux_sym_dims_repeat1] = STATE(102),
    [anon_sym_GT] = ACTIONS(1439),
    [anon_sym_COMMA] = ACTIONS(1439),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(193),
    [sym_comment] = ACTIONS(50),
  },
  [536] = {
    [sym_dims] = STATE(707),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [aux_sym_class_or_interface_type_repeat1] = STATE(101),
    [aux_sym_dims_repeat1] = STATE(102),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(193),
    [sym_comment] = ACTIONS(50),
  },
  [537] = {
    [anon_sym_boolean] = ACTIONS(233),
    [anon_sym_byte] = ACTIONS(233),
    [anon_sym_short] = ACTIONS(233),
    [anon_sym_int] = ACTIONS(233),
    [anon_sym_long] = ACTIONS(233),
    [anon_sym_char] = ACTIONS(233),
    [anon_sym_float] = ACTIONS(233),
    [anon_sym_double] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(151),
    [sym_identifier] = ACTIONS(1441),
    [sym_comment] = ACTIONS(50),
  },
  [538] = {
    [anon_sym_boolean] = ACTIONS(238),
    [anon_sym_byte] = ACTIONS(238),
    [anon_sym_short] = ACTIONS(238),
    [anon_sym_int] = ACTIONS(238),
    [anon_sym_long] = ACTIONS(238),
    [anon_sym_char] = ACTIONS(238),
    [anon_sym_float] = ACTIONS(238),
    [anon_sym_double] = ACTIONS(238),
    [anon_sym_AT] = ACTIONS(153),
    [sym_identifier] = ACTIONS(240),
    [sym_comment] = ACTIONS(50),
  },
  [539] = {
    [sym_integral_type] = STATE(687),
    [sym_floating_point_type] = STATE(687),
    [sym__annotation] = STATE(688),
    [sym_normal_annotation] = STATE(538),
    [sym_marker_annotation] = STATE(538),
    [sym_single_element_annotation] = STATE(538),
    [anon_sym_boolean] = ACTIONS(1405),
    [anon_sym_byte] = ACTIONS(992),
    [anon_sym_short] = ACTIONS(992),
    [anon_sym_int] = ACTIONS(992),
    [anon_sym_long] = ACTIONS(992),
    [anon_sym_char] = ACTIONS(992),
    [anon_sym_float] = ACTIONS(994),
    [anon_sym_double] = ACTIONS(994),
    [anon_sym_AT] = ACTIONS(1040),
    [sym_identifier] = ACTIONS(1407),
    [sym_comment] = ACTIONS(50),
  },
  [540] = {
    [sym_type_arguments] = STATE(708),
    [anon_sym_GT] = ACTIONS(1443),
    [anon_sym_LT] = ACTIONS(722),
    [anon_sym_AMP] = ACTIONS(1443),
    [anon_sym_COMMA] = ACTIONS(1443),
    [anon_sym_LBRACE] = ACTIONS(1443),
    [anon_sym_DOT] = ACTIONS(1443),
    [anon_sym_LBRACK] = ACTIONS(1443),
    [anon_sym_AT] = ACTIONS(1443),
    [anon_sym_implements] = ACTIONS(1443),
    [anon_sym_COLON_COLON] = ACTIONS(1443),
    [sym_comment] = ACTIONS(50),
  },
  [541] = {
    [sym__annotation] = STATE(328),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(1445),
    [sym_comment] = ACTIONS(50),
  },
  [542] = {
    [anon_sym_GT] = ACTIONS(1447),
    [anon_sym_AMP] = ACTIONS(1447),
    [anon_sym_COMMA] = ACTIONS(1447),
    [anon_sym_LBRACE] = ACTIONS(1447),
    [anon_sym_DOT] = ACTIONS(1048),
    [anon_sym_LBRACK] = ACTIONS(1447),
    [anon_sym_AT] = ACTIONS(1447),
    [anon_sym_implements] = ACTIONS(1447),
    [anon_sym_COLON_COLON] = ACTIONS(1447),
    [sym_comment] = ACTIONS(50),
  },
  [543] = {
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [aux_sym_class_or_interface_type_repeat1] = STATE(710),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(1445),
    [sym_comment] = ACTIONS(50),
  },
  [544] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(711),
    [anon_sym_GT] = ACTIONS(1447),
    [anon_sym_AMP] = ACTIONS(1447),
    [anon_sym_COMMA] = ACTIONS(1447),
    [anon_sym_LBRACE] = ACTIONS(1447),
    [anon_sym_DOT] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(1447),
    [anon_sym_AT] = ACTIONS(1447),
    [anon_sym_implements] = ACTIONS(1447),
    [anon_sym_COLON_COLON] = ACTIONS(1447),
    [sym_comment] = ACTIONS(50),
  },
  [545] = {
    [anon_sym_COMMA] = ACTIONS(1449),
    [anon_sym_LBRACE] = ACTIONS(1449),
    [sym_comment] = ACTIONS(50),
  },
  [546] = {
    [sym_class_or_interface_type] = STATE(712),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [aux_sym_class_or_interface_type_repeat1] = STATE(227),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(50),
  },
  [547] = {
    [ts_builtin_sym_end] = ACTIONS(1451),
    [sym_decimal_integer_literal] = ACTIONS(1453),
    [sym_hex_integer_literal] = ACTIONS(1453),
    [sym_octal_integer_literal] = ACTIONS(1453),
    [sym_binary_integer_literal] = ACTIONS(1453),
    [sym_decimal_floating_point_literal] = ACTIONS(1453),
    [sym_hex_floating_point_literal] = ACTIONS(1455),
    [anon_sym_true] = ACTIONS(1453),
    [anon_sym_false] = ACTIONS(1453),
    [anon_sym_SQUOTE] = ACTIONS(1451),
    [sym_string_literal] = ACTIONS(1451),
    [sym_null_literal] = ACTIONS(1453),
    [anon_sym_LPAREN] = ACTIONS(1451),
    [anon_sym_BANG] = ACTIONS(1451),
    [anon_sym_TILDE] = ACTIONS(1451),
    [anon_sym_PLUS_PLUS] = ACTIONS(1451),
    [anon_sym_DASH_DASH] = ACTIONS(1451),
    [anon_sym_RBRACE] = ACTIONS(1451),
    [anon_sym_AT] = ACTIONS(1451),
    [anon_sym_open] = ACTIONS(1453),
    [anon_sym_module] = ACTIONS(1453),
    [anon_sym_static] = ACTIONS(1453),
    [anon_sym_package] = ACTIONS(1453),
    [anon_sym_import] = ACTIONS(1453),
    [anon_sym_class] = ACTIONS(1453),
    [anon_sym_public] = ACTIONS(1453),
    [anon_sym_protected] = ACTIONS(1453),
    [anon_sym_private] = ACTIONS(1453),
    [anon_sym_abstract] = ACTIONS(1453),
    [anon_sym_final] = ACTIONS(1453),
    [anon_sym_strictfp] = ACTIONS(1453),
    [anon_sym_default] = ACTIONS(1453),
    [anon_sym_interface] = ACTIONS(1453),
    [sym_identifier] = ACTIONS(1455),
    [sym_comment] = ACTIONS(50),
  },
  [548] = {
    [sym_annotation_type_body] = STATE(714),
    [anon_sym_LBRACE] = ACTIONS(1457),
    [sym_comment] = ACTIONS(50),
  },
  [549] = {
    [sym__literal] = STATE(717),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(718),
    [sym_element_value_pair] = STATE(187),
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
    [anon_sym_RPAREN] = ACTIONS(1459),
    [sym_identifier] = ACTIONS(1461),
    [sym_comment] = ACTIONS(50),
  },
  [550] = {
    [sym_identifier] = ACTIONS(1463),
    [sym_comment] = ACTIONS(50),
  },
  [551] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(216),
    [sym_marker_annotation] = STATE(216),
    [sym_single_element_annotation] = STATE(216),
    [sym_class_declaration] = STATE(208),
    [sym_normal_class_declaration] = STATE(217),
    [sym_modifier] = STATE(32),
    [sym_type_parameters] = STATE(218),
    [sym_class_body_declaration] = STATE(219),
    [sym_constructor_declaration] = STATE(220),
    [sym_constructor_declarator] = STATE(221),
    [sym_class_member_declaration] = STATE(220),
    [sym_interface_declaration] = STATE(208),
    [sym_annotation_type_declaration] = STATE(222),
    [sym_normal_interface_declaration] = STATE(222),
    [sym_block] = STATE(220),
    [aux_sym_normal_class_declaration_repeat1] = STATE(223),
    [aux_sym_class_body_repeat1] = STATE(721),
    [sym__semicolon] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(454),
    [anon_sym_RBRACE] = ACTIONS(1465),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(460),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(462),
    [sym_identifier] = ACTIONS(464),
    [sym_comment] = ACTIONS(50),
  },
  [552] = {
    [sym_superclass] = STATE(722),
    [sym_super_interfaces] = STATE(723),
    [sym_class_body] = STATE(724),
    [anon_sym_LBRACE] = ACTIONS(1066),
    [anon_sym_extends] = ACTIONS(300),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [553] = {
    [sym_super_interfaces] = STATE(723),
    [sym_class_body] = STATE(724),
    [anon_sym_LBRACE] = ACTIONS(1066),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [554] = {
    [sym_class_body] = STATE(724),
    [anon_sym_LBRACE] = ACTIONS(1066),
    [sym_comment] = ACTIONS(50),
  },
  [555] = {
    [sym__semicolon] = ACTIONS(468),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_RBRACE] = ACTIONS(468),
    [anon_sym_AT] = ACTIONS(468),
    [anon_sym_static] = ACTIONS(470),
    [anon_sym_class] = ACTIONS(470),
    [anon_sym_public] = ACTIONS(470),
    [anon_sym_protected] = ACTIONS(470),
    [anon_sym_private] = ACTIONS(470),
    [anon_sym_abstract] = ACTIONS(470),
    [anon_sym_final] = ACTIONS(470),
    [anon_sym_strictfp] = ACTIONS(470),
    [anon_sym_default] = ACTIONS(470),
    [anon_sym_void] = ACTIONS(470),
    [anon_sym_interface] = ACTIONS(470),
    [sym_identifier] = ACTIONS(472),
    [sym_comment] = ACTIONS(50),
  },
  [556] = {
    [sym__annotation] = STATE(236),
    [sym_normal_annotation] = STATE(240),
    [sym_marker_annotation] = STATE(240),
    [sym_single_element_annotation] = STATE(240),
    [sym_class_declaration] = STATE(233),
    [sym_normal_class_declaration] = STATE(241),
    [sym_modifier] = STATE(242),
    [sym_type_parameters] = STATE(243),
    [sym_interface_declaration] = STATE(233),
    [sym_annotation_type_declaration] = STATE(244),
    [sym_normal_interface_declaration] = STATE(244),
    [sym_interface_member_declaration] = STATE(245),
    [sym_constant_declaration] = STATE(233),
    [sym_variable_declarator_list] = STATE(246),
    [sym_variable_declarator] = STATE(247),
    [sym_variable_declarator_id] = STATE(96),
    [sym_interface_method_declaration] = STATE(233),
    [sym_method_header] = STATE(248),
    [sym_result] = STATE(249),
    [aux_sym_normal_class_declaration_repeat1] = STATE(250),
    [aux_sym_interface_body_repeat1] = STATE(726),
    [sym__semicolon] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_RBRACE] = ACTIONS(1467),
    [anon_sym_AT] = ACTIONS(478),
    [anon_sym_static] = ACTIONS(480),
    [anon_sym_class] = ACTIONS(482),
    [anon_sym_public] = ACTIONS(480),
    [anon_sym_protected] = ACTIONS(480),
    [anon_sym_private] = ACTIONS(480),
    [anon_sym_abstract] = ACTIONS(480),
    [anon_sym_final] = ACTIONS(480),
    [anon_sym_strictfp] = ACTIONS(480),
    [anon_sym_default] = ACTIONS(480),
    [anon_sym_void] = ACTIONS(484),
    [anon_sym_interface] = ACTIONS(486),
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(50),
  },
  [557] = {
    [sym_extends_interfaces] = STATE(727),
    [sym_interface_body] = STATE(728),
    [anon_sym_LBRACE] = ACTIONS(1068),
    [anon_sym_extends] = ACTIONS(306),
    [sym_comment] = ACTIONS(50),
  },
  [558] = {
    [sym_interface_body] = STATE(728),
    [anon_sym_LBRACE] = ACTIONS(1068),
    [sym_comment] = ACTIONS(50),
  },
  [559] = {
    [sym__semicolon] = ACTIONS(488),
    [anon_sym_LT] = ACTIONS(488),
    [anon_sym_RBRACE] = ACTIONS(488),
    [anon_sym_AT] = ACTIONS(488),
    [anon_sym_static] = ACTIONS(490),
    [anon_sym_class] = ACTIONS(490),
    [anon_sym_public] = ACTIONS(490),
    [anon_sym_protected] = ACTIONS(490),
    [anon_sym_private] = ACTIONS(490),
    [anon_sym_abstract] = ACTIONS(490),
    [anon_sym_final] = ACTIONS(490),
    [anon_sym_strictfp] = ACTIONS(490),
    [anon_sym_default] = ACTIONS(490),
    [anon_sym_void] = ACTIONS(490),
    [anon_sym_interface] = ACTIONS(490),
    [sym_identifier] = ACTIONS(492),
    [sym_comment] = ACTIONS(50),
  },
  [560] = {
    [sym_throws] = STATE(729),
    [sym__semicolon] = ACTIONS(1469),
    [anon_sym_LBRACE] = ACTIONS(1469),
    [anon_sym_throws] = ACTIONS(710),
    [sym_comment] = ACTIONS(50),
  },
  [561] = {
    [sym_method_declarator] = STATE(730),
    [sym_identifier] = ACTIONS(782),
    [sym_comment] = ACTIONS(50),
  },
  [562] = {
    [sym__semicolon] = ACTIONS(1471),
    [anon_sym_COMMA] = ACTIONS(1471),
    [sym_comment] = ACTIONS(50),
  },
  [563] = {
    [sym_variable_declarator] = STATE(731),
    [sym_variable_declarator_id] = STATE(96),
    [sym_identifier] = ACTIONS(223),
    [sym_comment] = ACTIONS(50),
  },
  [564] = {
    [sym__semicolon] = ACTIONS(950),
    [anon_sym_LT] = ACTIONS(950),
    [anon_sym_RBRACE] = ACTIONS(950),
    [anon_sym_AT] = ACTIONS(950),
    [anon_sym_static] = ACTIONS(952),
    [anon_sym_class] = ACTIONS(952),
    [anon_sym_public] = ACTIONS(952),
    [anon_sym_protected] = ACTIONS(952),
    [anon_sym_private] = ACTIONS(952),
    [anon_sym_abstract] = ACTIONS(952),
    [anon_sym_final] = ACTIONS(952),
    [anon_sym_strictfp] = ACTIONS(952),
    [anon_sym_default] = ACTIONS(952),
    [anon_sym_void] = ACTIONS(952),
    [anon_sym_interface] = ACTIONS(952),
    [sym_identifier] = ACTIONS(954),
    [sym_comment] = ACTIONS(50),
  },
  [565] = {
    [anon_sym_RBRACE] = ACTIONS(1473),
    [sym_comment] = ACTIONS(50),
  },
  [566] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_modifier] = STATE(49),
    [sym_variable_declarator_id] = STATE(50),
    [sym_formal_parameter_list] = STATE(734),
    [sym_formal_parameter] = STATE(51),
    [sym_receiver_parameter] = STATE(52),
    [sym_last_formal_parameter] = STATE(53),
    [aux_sym_class_or_interface_type_repeat1] = STATE(54),
    [aux_sym_normal_class_declaration_repeat1] = STATE(55),
    [anon_sym_RPAREN] = ACTIONS(1475),
    [anon_sym_AT] = ACTIONS(68),
    [anon_sym_static] = ACTIONS(70),
    [anon_sym_public] = ACTIONS(70),
    [anon_sym_protected] = ACTIONS(70),
    [anon_sym_private] = ACTIONS(70),
    [anon_sym_abstract] = ACTIONS(70),
    [anon_sym_final] = ACTIONS(70),
    [anon_sym_strictfp] = ACTIONS(70),
    [anon_sym_default] = ACTIONS(70),
    [anon_sym_this] = ACTIONS(72),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(74),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(50),
  },
  [567] = {
    [sym__semicolon] = ACTIONS(1469),
    [anon_sym_LBRACE] = ACTIONS(1469),
    [sym_comment] = ACTIONS(50),
  },
  [568] = {
    [sym_identifier] = ACTIONS(1477),
    [sym_comment] = ACTIONS(50),
  },
  [569] = {
    [sym_type_parameters] = STATE(736),
    [sym_superclass] = STATE(722),
    [sym_super_interfaces] = STATE(723),
    [sym_class_body] = STATE(724),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(1066),
    [anon_sym_extends] = ACTIONS(300),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [570] = {
    [sym_type_parameters] = STATE(737),
    [sym_extends_interfaces] = STATE(727),
    [sym_interface_body] = STATE(728),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(1068),
    [anon_sym_extends] = ACTIONS(306),
    [sym_comment] = ACTIONS(50),
  },
  [571] = {
    [sym__semicolon] = ACTIONS(1479),
    [anon_sym_LT] = ACTIONS(1479),
    [anon_sym_RBRACE] = ACTIONS(1479),
    [anon_sym_AT] = ACTIONS(1479),
    [anon_sym_static] = ACTIONS(1481),
    [anon_sym_class] = ACTIONS(1481),
    [anon_sym_public] = ACTIONS(1481),
    [anon_sym_protected] = ACTIONS(1481),
    [anon_sym_private] = ACTIONS(1481),
    [anon_sym_abstract] = ACTIONS(1481),
    [anon_sym_final] = ACTIONS(1481),
    [anon_sym_strictfp] = ACTIONS(1481),
    [anon_sym_default] = ACTIONS(1481),
    [anon_sym_void] = ACTIONS(1481),
    [anon_sym_interface] = ACTIONS(1481),
    [sym_identifier] = ACTIONS(1483),
    [sym_comment] = ACTIONS(50),
  },
  [572] = {
    [sym__semicolon] = ACTIONS(1485),
    [anon_sym_LT] = ACTIONS(1485),
    [anon_sym_RBRACE] = ACTIONS(1485),
    [anon_sym_AT] = ACTIONS(1485),
    [anon_sym_static] = ACTIONS(1487),
    [anon_sym_class] = ACTIONS(1487),
    [anon_sym_public] = ACTIONS(1487),
    [anon_sym_protected] = ACTIONS(1487),
    [anon_sym_private] = ACTIONS(1487),
    [anon_sym_abstract] = ACTIONS(1487),
    [anon_sym_final] = ACTIONS(1487),
    [anon_sym_strictfp] = ACTIONS(1487),
    [anon_sym_default] = ACTIONS(1487),
    [anon_sym_void] = ACTIONS(1487),
    [anon_sym_interface] = ACTIONS(1487),
    [sym_identifier] = ACTIONS(1489),
    [sym_comment] = ACTIONS(50),
  },
  [573] = {
    [sym__expression] = STATE(738),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(316),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [574] = {
    [sym__expression] = STATE(739),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(318),
    [anon_sym_PLUS_PLUS] = ACTIONS(320),
    [anon_sym_DASH_DASH] = ACTIONS(320),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [575] = {
    [sym_module_directive] = STATE(316),
    [anon_sym_RBRACE] = ACTIONS(1491),
    [anon_sym_requires] = ACTIONS(420),
    [anon_sym_exports] = ACTIONS(422),
    [anon_sym_opens] = ACTIONS(422),
    [anon_sym_uses] = ACTIONS(424),
    [anon_sym_provides] = ACTIONS(426),
    [sym_comment] = ACTIONS(50),
  },
  [576] = {
    [sym_class_body] = STATE(741),
    [anon_sym_LBRACE] = ACTIONS(298),
    [sym_comment] = ACTIONS(50),
  },
  [577] = {
    [ts_builtin_sym_end] = ACTIONS(1493),
    [sym_decimal_integer_literal] = ACTIONS(1495),
    [sym_hex_integer_literal] = ACTIONS(1495),
    [sym_octal_integer_literal] = ACTIONS(1495),
    [sym_binary_integer_literal] = ACTIONS(1495),
    [sym_decimal_floating_point_literal] = ACTIONS(1495),
    [sym_hex_floating_point_literal] = ACTIONS(1497),
    [anon_sym_true] = ACTIONS(1495),
    [anon_sym_false] = ACTIONS(1495),
    [anon_sym_SQUOTE] = ACTIONS(1493),
    [sym_string_literal] = ACTIONS(1493),
    [sym_null_literal] = ACTIONS(1495),
    [anon_sym_LPAREN] = ACTIONS(1493),
    [anon_sym_BANG] = ACTIONS(1493),
    [anon_sym_TILDE] = ACTIONS(1493),
    [anon_sym_PLUS_PLUS] = ACTIONS(1493),
    [anon_sym_DASH_DASH] = ACTIONS(1493),
    [anon_sym_RBRACE] = ACTIONS(1493),
    [anon_sym_AT] = ACTIONS(1493),
    [anon_sym_open] = ACTIONS(1495),
    [anon_sym_module] = ACTIONS(1495),
    [anon_sym_static] = ACTIONS(1495),
    [anon_sym_package] = ACTIONS(1495),
    [anon_sym_import] = ACTIONS(1495),
    [anon_sym_class] = ACTIONS(1495),
    [anon_sym_public] = ACTIONS(1495),
    [anon_sym_protected] = ACTIONS(1495),
    [anon_sym_private] = ACTIONS(1495),
    [anon_sym_abstract] = ACTIONS(1495),
    [anon_sym_final] = ACTIONS(1495),
    [anon_sym_strictfp] = ACTIONS(1495),
    [anon_sym_default] = ACTIONS(1495),
    [anon_sym_interface] = ACTIONS(1495),
    [sym_identifier] = ACTIONS(1497),
    [sym_comment] = ACTIONS(50),
  },
  [578] = {
    [anon_sym_AT] = ACTIONS(878),
    [anon_sym_this] = ACTIONS(1144),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(878),
    [sym_identifier] = ACTIONS(1146),
    [sym_comment] = ACTIONS(50),
  },
  [579] = {
    [anon_sym_AT] = ACTIONS(880),
    [anon_sym_this] = ACTIONS(1148),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(880),
    [sym_identifier] = ACTIONS(1150),
    [sym_comment] = ACTIONS(50),
  },
  [580] = {
    [anon_sym_AT] = ACTIONS(878),
    [anon_sym_static] = ACTIONS(1144),
    [anon_sym_public] = ACTIONS(1144),
    [anon_sym_protected] = ACTIONS(1144),
    [anon_sym_private] = ACTIONS(1144),
    [anon_sym_abstract] = ACTIONS(1144),
    [anon_sym_final] = ACTIONS(1144),
    [anon_sym_strictfp] = ACTIONS(1144),
    [anon_sym_default] = ACTIONS(1144),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(878),
    [sym_identifier] = ACTIONS(1146),
    [sym_comment] = ACTIONS(50),
  },
  [581] = {
    [anon_sym_AT] = ACTIONS(880),
    [anon_sym_static] = ACTIONS(1148),
    [anon_sym_public] = ACTIONS(1148),
    [anon_sym_protected] = ACTIONS(1148),
    [anon_sym_private] = ACTIONS(1148),
    [anon_sym_abstract] = ACTIONS(1148),
    [anon_sym_final] = ACTIONS(1148),
    [anon_sym_strictfp] = ACTIONS(1148),
    [anon_sym_default] = ACTIONS(1148),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(880),
    [sym_identifier] = ACTIONS(1150),
    [sym_comment] = ACTIONS(50),
  },
  [582] = {
    [sym_dims] = STATE(744),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym_default_value] = STATE(745),
    [aux_sym_class_or_interface_type_repeat1] = STATE(101),
    [aux_sym_dims_repeat1] = STATE(102),
    [sym__semicolon] = ACTIONS(1499),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_default] = ACTIONS(1501),
    [sym_comment] = ACTIONS(50),
  },
  [583] = {
    [anon_sym_RPAREN] = ACTIONS(1503),
    [sym_comment] = ACTIONS(50),
  },
  [584] = {
    [anon_sym_RBRACE] = ACTIONS(1479),
    [anon_sym_AT] = ACTIONS(1479),
    [anon_sym_static] = ACTIONS(1481),
    [anon_sym_class] = ACTIONS(1481),
    [anon_sym_public] = ACTIONS(1481),
    [anon_sym_protected] = ACTIONS(1481),
    [anon_sym_private] = ACTIONS(1481),
    [anon_sym_abstract] = ACTIONS(1481),
    [anon_sym_final] = ACTIONS(1481),
    [anon_sym_strictfp] = ACTIONS(1481),
    [anon_sym_default] = ACTIONS(1481),
    [anon_sym_interface] = ACTIONS(1481),
    [sym_identifier] = ACTIONS(1483),
    [sym_comment] = ACTIONS(50),
  },
  [585] = {
    [sym__expression] = STATE(56),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [586] = {
    [sym__expression] = STATE(57),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [587] = {
    [anon_sym_EQ] = ACTIONS(1505),
    [anon_sym_PLUS_EQ] = ACTIONS(1507),
    [anon_sym_DASH_EQ] = ACTIONS(1507),
    [anon_sym_STAR_EQ] = ACTIONS(1507),
    [anon_sym_SLASH_EQ] = ACTIONS(1507),
    [anon_sym_AMP_EQ] = ACTIONS(1507),
    [anon_sym_PIPE_EQ] = ACTIONS(1507),
    [anon_sym_CARET_EQ] = ACTIONS(1507),
    [anon_sym_PERCENT_EQ] = ACTIONS(1507),
    [anon_sym_LT_LT_EQ] = ACTIONS(1507),
    [anon_sym_GT_GT_EQ] = ACTIONS(1507),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1507),
    [anon_sym_GT] = ACTIONS(1509),
    [anon_sym_LT] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(262),
    [anon_sym_GT_EQ] = ACTIONS(1511),
    [anon_sym_LT_EQ] = ACTIONS(1511),
    [anon_sym_BANG_EQ] = ACTIONS(262),
    [anon_sym_AMP_AMP] = ACTIONS(262),
    [anon_sym_PIPE_PIPE] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(264),
    [anon_sym_SLASH] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(1513),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_CARET] = ACTIONS(264),
    [anon_sym_PERCENT] = ACTIONS(264),
    [anon_sym_LT_LT] = ACTIONS(264),
    [anon_sym_GT_GT] = ACTIONS(264),
    [anon_sym_GT_GT_GT] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_QMARK] = ACTIONS(262),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [588] = {
    [anon_sym_RBRACE] = ACTIONS(1515),
    [sym_comment] = ACTIONS(50),
  },
  [589] = {
    [sym__expression] = STATE(757),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1517),
    [anon_sym_TILDE] = ACTIONS(1517),
    [anon_sym_PLUS_PLUS] = ACTIONS(1519),
    [anon_sym_DASH_DASH] = ACTIONS(1519),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [590] = {
    [sym__semicolon] = ACTIONS(1521),
    [anon_sym_RPAREN] = ACTIONS(1521),
    [anon_sym_COMMA] = ACTIONS(1521),
    [anon_sym_RBRACE] = ACTIONS(1521),
    [sym_comment] = ACTIONS(50),
  },
  [591] = {
    [aux_sym_element_value_array_initializer_repeat1] = STATE(759),
    [anon_sym_COMMA] = ACTIONS(1523),
    [anon_sym_RBRACE] = ACTIONS(1515),
    [sym_comment] = ACTIONS(50),
  },
  [592] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(1525),
    [anon_sym_COMMA] = ACTIONS(1200),
    [anon_sym_QMARK] = ACTIONS(1527),
    [anon_sym_RBRACE] = ACTIONS(1200),
    [sym_comment] = ACTIONS(50),
  },
  [593] = {
    [anon_sym_AMP_AMP] = ACTIONS(1529),
    [anon_sym_PIPE_PIPE] = ACTIONS(1206),
    [anon_sym_COMMA] = ACTIONS(1206),
    [anon_sym_QMARK] = ACTIONS(1206),
    [anon_sym_RBRACE] = ACTIONS(1206),
    [sym_comment] = ACTIONS(50),
  },
  [594] = {
    [anon_sym_AMP_AMP] = ACTIONS(1208),
    [anon_sym_PIPE_PIPE] = ACTIONS(1208),
    [anon_sym_PIPE] = ACTIONS(1531),
    [anon_sym_COMMA] = ACTIONS(1208),
    [anon_sym_QMARK] = ACTIONS(1208),
    [anon_sym_RBRACE] = ACTIONS(1208),
    [sym_comment] = ACTIONS(50),
  },
  [595] = {
    [anon_sym_AMP_AMP] = ACTIONS(1212),
    [anon_sym_PIPE_PIPE] = ACTIONS(1212),
    [anon_sym_PIPE] = ACTIONS(1214),
    [anon_sym_CARET] = ACTIONS(1533),
    [anon_sym_COMMA] = ACTIONS(1212),
    [anon_sym_QMARK] = ACTIONS(1212),
    [anon_sym_RBRACE] = ACTIONS(1212),
    [sym_comment] = ACTIONS(50),
  },
  [596] = {
    [anon_sym_LT] = ACTIONS(1535),
    [anon_sym_EQ_EQ] = ACTIONS(1224),
    [anon_sym_BANG_EQ] = ACTIONS(1224),
    [anon_sym_AMP_AMP] = ACTIONS(1226),
    [anon_sym_PIPE_PIPE] = ACTIONS(1226),
    [anon_sym_PIPE] = ACTIONS(1228),
    [anon_sym_CARET] = ACTIONS(1226),
    [anon_sym_COMMA] = ACTIONS(1226),
    [anon_sym_QMARK] = ACTIONS(1226),
    [anon_sym_RBRACE] = ACTIONS(1226),
    [sym_comment] = ACTIONS(50),
  },
  [597] = {
    [anon_sym_EQ_EQ] = ACTIONS(1537),
    [anon_sym_BANG_EQ] = ACTIONS(1537),
    [sym_comment] = ACTIONS(50),
  },
  [598] = {
    [anon_sym_LT] = ACTIONS(1232),
    [anon_sym_EQ_EQ] = ACTIONS(1234),
    [anon_sym_BANG_EQ] = ACTIONS(1234),
    [anon_sym_AMP_AMP] = ACTIONS(1234),
    [anon_sym_PIPE_PIPE] = ACTIONS(1234),
    [anon_sym_PIPE] = ACTIONS(1232),
    [anon_sym_CARET] = ACTIONS(1234),
    [anon_sym_LT_LT] = ACTIONS(1539),
    [anon_sym_GT_GT] = ACTIONS(1541),
    [anon_sym_GT_GT_GT] = ACTIONS(1539),
    [anon_sym_COMMA] = ACTIONS(1234),
    [anon_sym_QMARK] = ACTIONS(1234),
    [anon_sym_RBRACE] = ACTIONS(1234),
    [sym_comment] = ACTIONS(50),
  },
  [599] = {
    [anon_sym_LT] = ACTIONS(1240),
    [anon_sym_EQ_EQ] = ACTIONS(1242),
    [anon_sym_BANG_EQ] = ACTIONS(1242),
    [anon_sym_AMP_AMP] = ACTIONS(1242),
    [anon_sym_PIPE_PIPE] = ACTIONS(1242),
    [anon_sym_PLUS] = ACTIONS(1543),
    [anon_sym_DASH] = ACTIONS(1543),
    [anon_sym_PIPE] = ACTIONS(1240),
    [anon_sym_CARET] = ACTIONS(1242),
    [anon_sym_LT_LT] = ACTIONS(1242),
    [anon_sym_GT_GT] = ACTIONS(1240),
    [anon_sym_GT_GT_GT] = ACTIONS(1242),
    [anon_sym_COMMA] = ACTIONS(1242),
    [anon_sym_QMARK] = ACTIONS(1242),
    [anon_sym_RBRACE] = ACTIONS(1242),
    [sym_comment] = ACTIONS(50),
  },
  [600] = {
    [anon_sym_LT] = ACTIONS(1246),
    [anon_sym_EQ_EQ] = ACTIONS(1248),
    [anon_sym_BANG_EQ] = ACTIONS(1248),
    [anon_sym_AMP_AMP] = ACTIONS(1248),
    [anon_sym_PIPE_PIPE] = ACTIONS(1248),
    [anon_sym_PLUS] = ACTIONS(1248),
    [anon_sym_DASH] = ACTIONS(1248),
    [anon_sym_STAR] = ACTIONS(1545),
    [anon_sym_SLASH] = ACTIONS(1547),
    [anon_sym_PIPE] = ACTIONS(1246),
    [anon_sym_CARET] = ACTIONS(1248),
    [anon_sym_PERCENT] = ACTIONS(1545),
    [anon_sym_LT_LT] = ACTIONS(1248),
    [anon_sym_GT_GT] = ACTIONS(1246),
    [anon_sym_GT_GT_GT] = ACTIONS(1248),
    [anon_sym_COMMA] = ACTIONS(1248),
    [anon_sym_QMARK] = ACTIONS(1248),
    [anon_sym_RBRACE] = ACTIONS(1248),
    [sym_comment] = ACTIONS(50),
  },
  [601] = {
    [sym_unary_expression] = STATE(435),
    [sym_conditional_and_expression] = STATE(770),
    [sym_inclusive_or_expression] = STATE(439),
    [sym_exclusive_or_expression] = STATE(440),
    [sym_and_expression] = STATE(441),
    [sym_relational_expression] = STATE(442),
    [sym_equality_expression] = STATE(443),
    [sym_shift_expression] = STATE(444),
    [sym_additive_expression] = STATE(445),
    [sym_multiplicative_expression] = STATE(446),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [sym_comment] = ACTIONS(50),
  },
  [602] = {
    [sym__expression] = STATE(771),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(316),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [603] = {
    [sym_unary_expression] = STATE(435),
    [sym_inclusive_or_expression] = STATE(772),
    [sym_exclusive_or_expression] = STATE(440),
    [sym_and_expression] = STATE(441),
    [sym_relational_expression] = STATE(442),
    [sym_equality_expression] = STATE(443),
    [sym_shift_expression] = STATE(444),
    [sym_additive_expression] = STATE(445),
    [sym_multiplicative_expression] = STATE(446),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [sym_comment] = ACTIONS(50),
  },
  [604] = {
    [sym_unary_expression] = STATE(435),
    [sym_exclusive_or_expression] = STATE(773),
    [sym_and_expression] = STATE(441),
    [sym_relational_expression] = STATE(442),
    [sym_equality_expression] = STATE(443),
    [sym_shift_expression] = STATE(444),
    [sym_additive_expression] = STATE(445),
    [sym_multiplicative_expression] = STATE(446),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [sym_comment] = ACTIONS(50),
  },
  [605] = {
    [sym_unary_expression] = STATE(435),
    [sym_and_expression] = STATE(774),
    [sym_relational_expression] = STATE(442),
    [sym_equality_expression] = STATE(443),
    [sym_shift_expression] = STATE(444),
    [sym_additive_expression] = STATE(445),
    [sym_multiplicative_expression] = STATE(446),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [sym_comment] = ACTIONS(50),
  },
  [606] = {
    [sym_unary_expression] = STATE(435),
    [sym_shift_expression] = STATE(775),
    [sym_additive_expression] = STATE(445),
    [sym_multiplicative_expression] = STATE(446),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [sym_comment] = ACTIONS(50),
  },
  [607] = {
    [sym_unary_expression] = STATE(435),
    [sym_relational_expression] = STATE(776),
    [sym_shift_expression] = STATE(444),
    [sym_additive_expression] = STATE(445),
    [sym_multiplicative_expression] = STATE(446),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [sym_comment] = ACTIONS(50),
  },
  [608] = {
    [sym_unary_expression] = STATE(435),
    [sym_additive_expression] = STATE(777),
    [sym_multiplicative_expression] = STATE(446),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [sym_comment] = ACTIONS(50),
  },
  [609] = {
    [sym_unary_expression] = STATE(435),
    [sym_multiplicative_expression] = STATE(778),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [sym_comment] = ACTIONS(50),
  },
  [610] = {
    [sym_unary_expression] = STATE(779),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [sym_comment] = ACTIONS(50),
  },
  [611] = {
    [anon_sym_RPAREN] = ACTIONS(1549),
    [anon_sym_COMMA] = ACTIONS(1549),
    [sym_comment] = ACTIONS(50),
  },
  [612] = {
    [sym__semicolon] = ACTIONS(1551),
    [anon_sym_COMMA] = ACTIONS(1551),
    [anon_sym_DOT] = ACTIONS(1551),
    [sym_comment] = ACTIONS(50),
  },
  [613] = {
    [anon_sym_RBRACE] = ACTIONS(1553),
    [anon_sym_requires] = ACTIONS(1553),
    [anon_sym_exports] = ACTIONS(1553),
    [anon_sym_opens] = ACTIONS(1553),
    [anon_sym_uses] = ACTIONS(1553),
    [anon_sym_provides] = ACTIONS(1553),
    [sym_comment] = ACTIONS(50),
  },
  [614] = {
    [sym__semicolon] = ACTIONS(1555),
    [anon_sym_COMMA] = ACTIONS(1555),
    [anon_sym_DOT] = ACTIONS(910),
    [sym_comment] = ACTIONS(50),
  },
  [615] = {
    [sym__semicolon] = ACTIONS(614),
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_DOT] = ACTIONS(614),
    [anon_sym_to] = ACTIONS(616),
    [sym_identifier] = ACTIONS(820),
    [sym_comment] = ACTIONS(50),
  },
  [616] = {
    [aux_sym_module_directive_repeat2] = STATE(781),
    [sym__semicolon] = ACTIONS(1557),
    [anon_sym_COMMA] = ACTIONS(912),
    [anon_sym_DOT] = ACTIONS(910),
    [sym_comment] = ACTIONS(50),
  },
  [617] = {
    [sym__semicolon] = ACTIONS(1557),
    [anon_sym_COMMA] = ACTIONS(1276),
    [sym_comment] = ACTIONS(50),
  },
  [618] = {
    [sym_module_name] = STATE(782),
    [sym_identifier] = ACTIONS(1272),
    [sym_comment] = ACTIONS(50),
  },
  [619] = {
    [aux_sym_module_directive_repeat3] = STATE(784),
    [sym__semicolon] = ACTIONS(1557),
    [anon_sym_COMMA] = ACTIONS(1559),
    [anon_sym_DOT] = ACTIONS(918),
    [sym_comment] = ACTIONS(50),
  },
  [620] = {
    [anon_sym_AT] = ACTIONS(602),
    [sym_identifier] = ACTIONS(812),
    [sym_comment] = ACTIONS(50),
  },
  [621] = {
    [anon_sym_EQ] = ACTIONS(604),
    [anon_sym_RPAREN] = ACTIONS(1561),
    [sym_comment] = ACTIONS(50),
  },
  [622] = {
    [anon_sym_RPAREN] = ACTIONS(1561),
    [sym_comment] = ACTIONS(50),
  },
  [623] = {
    [anon_sym_RPAREN] = ACTIONS(1563),
    [sym_comment] = ACTIONS(50),
  },
  [624] = {
    [anon_sym_LPAREN] = ACTIONS(614),
    [anon_sym_DOT] = ACTIONS(614),
    [anon_sym_AT] = ACTIONS(614),
    [sym_identifier] = ACTIONS(616),
    [sym_comment] = ACTIONS(50),
  },
  [625] = {
    [sym_class_or_interface_type] = STATE(787),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [aux_sym_class_or_interface_type_repeat1] = STATE(227),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(50),
  },
  [626] = {
    [anon_sym_GT] = ACTIONS(1565),
    [anon_sym_AMP] = ACTIONS(1567),
    [anon_sym_COMMA] = ACTIONS(1565),
    [sym_comment] = ACTIONS(50),
  },
  [627] = {
    [anon_sym_GT] = ACTIONS(1569),
    [anon_sym_COMMA] = ACTIONS(1569),
    [sym_comment] = ACTIONS(50),
  },
  [628] = {
    [sym__expression] = STATE(56),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1306),
    [anon_sym_TILDE] = ACTIONS(1306),
    [anon_sym_PLUS_PLUS] = ACTIONS(1308),
    [anon_sym_DASH_DASH] = ACTIONS(1308),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [629] = {
    [sym__expression] = STATE(57),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1306),
    [anon_sym_TILDE] = ACTIONS(1306),
    [anon_sym_PLUS_PLUS] = ACTIONS(1308),
    [anon_sym_DASH_DASH] = ACTIONS(1308),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [630] = {
    [anon_sym_EQ] = ACTIONS(1571),
    [anon_sym_PLUS_EQ] = ACTIONS(1573),
    [anon_sym_DASH_EQ] = ACTIONS(1573),
    [anon_sym_STAR_EQ] = ACTIONS(1573),
    [anon_sym_SLASH_EQ] = ACTIONS(1573),
    [anon_sym_AMP_EQ] = ACTIONS(1573),
    [anon_sym_PIPE_EQ] = ACTIONS(1573),
    [anon_sym_CARET_EQ] = ACTIONS(1573),
    [anon_sym_PERCENT_EQ] = ACTIONS(1573),
    [anon_sym_LT_LT_EQ] = ACTIONS(1573),
    [anon_sym_GT_GT_EQ] = ACTIONS(1573),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1573),
    [anon_sym_GT] = ACTIONS(1575),
    [anon_sym_LT] = ACTIONS(1575),
    [anon_sym_EQ_EQ] = ACTIONS(1577),
    [anon_sym_GT_EQ] = ACTIONS(1577),
    [anon_sym_LT_EQ] = ACTIONS(1577),
    [anon_sym_BANG_EQ] = ACTIONS(1577),
    [anon_sym_AMP_AMP] = ACTIONS(1579),
    [anon_sym_PIPE_PIPE] = ACTIONS(1581),
    [anon_sym_PLUS] = ACTIONS(1583),
    [anon_sym_DASH] = ACTIONS(1583),
    [anon_sym_STAR] = ACTIONS(1585),
    [anon_sym_SLASH] = ACTIONS(1585),
    [anon_sym_AMP] = ACTIONS(1587),
    [anon_sym_PIPE] = ACTIONS(1589),
    [anon_sym_CARET] = ACTIONS(1589),
    [anon_sym_PERCENT] = ACTIONS(1585),
    [anon_sym_LT_LT] = ACTIONS(1585),
    [anon_sym_GT_GT] = ACTIONS(1585),
    [anon_sym_GT_GT_GT] = ACTIONS(1585),
    [anon_sym_RPAREN] = ACTIONS(1591),
    [anon_sym_QMARK] = ACTIONS(1593),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [631] = {
    [sym__literal] = STATE(799),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(800),
    [sym_element_value_pair] = STATE(187),
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
    [anon_sym_RPAREN] = ACTIONS(1595),
    [sym_identifier] = ACTIONS(1597),
    [sym_comment] = ACTIONS(50),
  },
  [632] = {
    [sym_identifier] = ACTIONS(1599),
    [sym_comment] = ACTIONS(50),
  },
  [633] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(216),
    [sym_marker_annotation] = STATE(216),
    [sym_single_element_annotation] = STATE(216),
    [sym_class_declaration] = STATE(208),
    [sym_normal_class_declaration] = STATE(217),
    [sym_modifier] = STATE(32),
    [sym_type_parameters] = STATE(218),
    [sym_class_body_declaration] = STATE(219),
    [sym_constructor_declaration] = STATE(220),
    [sym_constructor_declarator] = STATE(221),
    [sym_class_member_declaration] = STATE(220),
    [sym_interface_declaration] = STATE(208),
    [sym_annotation_type_declaration] = STATE(222),
    [sym_normal_interface_declaration] = STATE(222),
    [sym_block] = STATE(220),
    [aux_sym_normal_class_declaration_repeat1] = STATE(223),
    [aux_sym_class_body_repeat1] = STATE(803),
    [sym__semicolon] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(454),
    [anon_sym_RBRACE] = ACTIONS(1601),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(460),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(462),
    [sym_identifier] = ACTIONS(464),
    [sym_comment] = ACTIONS(50),
  },
  [634] = {
    [sym_superclass] = STATE(804),
    [sym_super_interfaces] = STATE(805),
    [sym_class_body] = STATE(806),
    [anon_sym_LBRACE] = ACTIONS(1314),
    [anon_sym_extends] = ACTIONS(300),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [635] = {
    [sym_super_interfaces] = STATE(805),
    [sym_class_body] = STATE(806),
    [anon_sym_LBRACE] = ACTIONS(1314),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [636] = {
    [sym_class_body] = STATE(806),
    [anon_sym_LBRACE] = ACTIONS(1314),
    [sym_comment] = ACTIONS(50),
  },
  [637] = {
    [anon_sym_if] = ACTIONS(468),
    [anon_sym_RBRACE] = ACTIONS(468),
    [anon_sym_elseif] = ACTIONS(468),
    [anon_sym_AT] = ACTIONS(468),
    [anon_sym_static] = ACTIONS(468),
    [anon_sym_class] = ACTIONS(468),
    [anon_sym_public] = ACTIONS(468),
    [anon_sym_protected] = ACTIONS(468),
    [anon_sym_private] = ACTIONS(468),
    [anon_sym_abstract] = ACTIONS(468),
    [anon_sym_final] = ACTIONS(468),
    [anon_sym_strictfp] = ACTIONS(468),
    [anon_sym_default] = ACTIONS(468),
    [sym_comment] = ACTIONS(50),
  },
  [638] = {
    [anon_sym_if] = ACTIONS(1603),
    [anon_sym_RBRACE] = ACTIONS(1603),
    [anon_sym_AT] = ACTIONS(1603),
    [anon_sym_static] = ACTIONS(1603),
    [anon_sym_class] = ACTIONS(1603),
    [anon_sym_public] = ACTIONS(1603),
    [anon_sym_protected] = ACTIONS(1603),
    [anon_sym_private] = ACTIONS(1603),
    [anon_sym_abstract] = ACTIONS(1603),
    [anon_sym_final] = ACTIONS(1603),
    [anon_sym_strictfp] = ACTIONS(1603),
    [anon_sym_default] = ACTIONS(1603),
    [sym_comment] = ACTIONS(50),
  },
  [639] = {
    [sym_type_parameters] = STATE(807),
    [sym_superclass] = STATE(804),
    [sym_super_interfaces] = STATE(805),
    [sym_class_body] = STATE(806),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(1314),
    [anon_sym_extends] = ACTIONS(300),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [640] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(216),
    [sym_marker_annotation] = STATE(216),
    [sym_single_element_annotation] = STATE(216),
    [sym_class_declaration] = STATE(294),
    [sym_normal_class_declaration] = STATE(217),
    [sym_modifier] = STATE(32),
    [sym_interface_declaration] = STATE(294),
    [sym_annotation_type_declaration] = STATE(222),
    [sym_annotation_type_member_declaration] = STATE(295),
    [sym_annotation_type_element_declaration] = STATE(294),
    [sym_normal_interface_declaration] = STATE(222),
    [sym_constant_declaration] = STATE(294),
    [sym_variable_declarator_list] = STATE(296),
    [sym_variable_declarator] = STATE(247),
    [sym_variable_declarator_id] = STATE(96),
    [aux_sym_normal_class_declaration_repeat1] = STATE(297),
    [aux_sym_annotation_type_body_repeat1] = STATE(809),
    [anon_sym_RBRACE] = ACTIONS(1605),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(460),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(462),
    [sym_identifier] = ACTIONS(594),
    [sym_comment] = ACTIONS(50),
  },
  [641] = {
    [sym__semicolon] = ACTIONS(596),
    [anon_sym_LT] = ACTIONS(596),
    [anon_sym_LBRACE] = ACTIONS(596),
    [anon_sym_RBRACE] = ACTIONS(596),
    [anon_sym_AT] = ACTIONS(596),
    [anon_sym_static] = ACTIONS(598),
    [anon_sym_class] = ACTIONS(598),
    [anon_sym_public] = ACTIONS(598),
    [anon_sym_protected] = ACTIONS(598),
    [anon_sym_private] = ACTIONS(598),
    [anon_sym_abstract] = ACTIONS(598),
    [anon_sym_final] = ACTIONS(598),
    [anon_sym_strictfp] = ACTIONS(598),
    [anon_sym_default] = ACTIONS(598),
    [anon_sym_interface] = ACTIONS(598),
    [sym_identifier] = ACTIONS(600),
    [sym_comment] = ACTIONS(50),
  },
  [642] = {
    [anon_sym_LT] = ACTIONS(602),
    [anon_sym_AT] = ACTIONS(602),
    [anon_sym_static] = ACTIONS(812),
    [anon_sym_class] = ACTIONS(812),
    [anon_sym_public] = ACTIONS(812),
    [anon_sym_protected] = ACTIONS(812),
    [anon_sym_private] = ACTIONS(812),
    [anon_sym_abstract] = ACTIONS(812),
    [anon_sym_final] = ACTIONS(812),
    [anon_sym_strictfp] = ACTIONS(812),
    [anon_sym_default] = ACTIONS(812),
    [anon_sym_interface] = ACTIONS(812),
    [sym_identifier] = ACTIONS(814),
    [sym_comment] = ACTIONS(50),
  },
  [643] = {
    [anon_sym_EQ] = ACTIONS(604),
    [anon_sym_RPAREN] = ACTIONS(1607),
    [sym_comment] = ACTIONS(50),
  },
  [644] = {
    [anon_sym_RPAREN] = ACTIONS(1607),
    [sym_comment] = ACTIONS(50),
  },
  [645] = {
    [anon_sym_RPAREN] = ACTIONS(1609),
    [sym_comment] = ACTIONS(50),
  },
  [646] = {
    [anon_sym_LT] = ACTIONS(614),
    [anon_sym_LPAREN] = ACTIONS(614),
    [anon_sym_DOT] = ACTIONS(614),
    [anon_sym_AT] = ACTIONS(614),
    [anon_sym_static] = ACTIONS(616),
    [anon_sym_class] = ACTIONS(616),
    [anon_sym_public] = ACTIONS(616),
    [anon_sym_protected] = ACTIONS(616),
    [anon_sym_private] = ACTIONS(616),
    [anon_sym_abstract] = ACTIONS(616),
    [anon_sym_final] = ACTIONS(616),
    [anon_sym_strictfp] = ACTIONS(616),
    [anon_sym_default] = ACTIONS(616),
    [anon_sym_interface] = ACTIONS(616),
    [sym_identifier] = ACTIONS(820),
    [sym_comment] = ACTIONS(50),
  },
  [647] = {
    [sym__semicolon] = ACTIONS(680),
    [anon_sym_LT] = ACTIONS(680),
    [anon_sym_LBRACE] = ACTIONS(680),
    [anon_sym_RBRACE] = ACTIONS(680),
    [anon_sym_DOT] = ACTIONS(680),
    [anon_sym_LBRACK] = ACTIONS(680),
    [anon_sym_AT] = ACTIONS(680),
    [anon_sym_static] = ACTIONS(682),
    [anon_sym_class] = ACTIONS(682),
    [anon_sym_public] = ACTIONS(682),
    [anon_sym_protected] = ACTIONS(682),
    [anon_sym_private] = ACTIONS(682),
    [anon_sym_abstract] = ACTIONS(682),
    [anon_sym_final] = ACTIONS(682),
    [anon_sym_strictfp] = ACTIONS(682),
    [anon_sym_default] = ACTIONS(682),
    [anon_sym_COLON_COLON] = ACTIONS(680),
    [anon_sym_interface] = ACTIONS(682),
    [sym_identifier] = ACTIONS(684),
    [sym_comment] = ACTIONS(50),
  },
  [648] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(216),
    [sym_marker_annotation] = STATE(216),
    [sym_single_element_annotation] = STATE(216),
    [sym_class_declaration] = STATE(208),
    [sym_normal_class_declaration] = STATE(217),
    [sym_modifier] = STATE(32),
    [sym_type_parameters] = STATE(218),
    [sym_class_body_declaration] = STATE(360),
    [sym_constructor_declaration] = STATE(220),
    [sym_constructor_declarator] = STATE(221),
    [sym_class_member_declaration] = STATE(220),
    [sym_interface_declaration] = STATE(208),
    [sym_annotation_type_declaration] = STATE(222),
    [sym_normal_interface_declaration] = STATE(222),
    [sym_block] = STATE(220),
    [aux_sym_normal_class_declaration_repeat1] = STATE(223),
    [sym__semicolon] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(454),
    [anon_sym_RBRACE] = ACTIONS(1611),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(460),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(462),
    [sym_identifier] = ACTIONS(464),
    [sym_comment] = ACTIONS(50),
  },
  [649] = {
    [sym_super_interfaces] = STATE(813),
    [sym_class_body] = STATE(814),
    [anon_sym_LBRACE] = ACTIONS(978),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [650] = {
    [sym_class_body] = STATE(814),
    [anon_sym_LBRACE] = ACTIONS(978),
    [sym_comment] = ACTIONS(50),
  },
  [651] = {
    [sym__semicolon] = ACTIONS(736),
    [anon_sym_LT] = ACTIONS(736),
    [anon_sym_LBRACE] = ACTIONS(736),
    [anon_sym_RBRACE] = ACTIONS(736),
    [anon_sym_AT] = ACTIONS(736),
    [anon_sym_static] = ACTIONS(738),
    [anon_sym_class] = ACTIONS(738),
    [anon_sym_public] = ACTIONS(738),
    [anon_sym_protected] = ACTIONS(738),
    [anon_sym_private] = ACTIONS(738),
    [anon_sym_abstract] = ACTIONS(738),
    [anon_sym_final] = ACTIONS(738),
    [anon_sym_strictfp] = ACTIONS(738),
    [anon_sym_default] = ACTIONS(738),
    [anon_sym_interface] = ACTIONS(738),
    [sym_identifier] = ACTIONS(740),
    [sym_comment] = ACTIONS(50),
  },
  [652] = {
    [sym__semicolon] = ACTIONS(748),
    [anon_sym_LT] = ACTIONS(748),
    [anon_sym_LBRACE] = ACTIONS(748),
    [anon_sym_RBRACE] = ACTIONS(748),
    [anon_sym_AT] = ACTIONS(748),
    [anon_sym_static] = ACTIONS(750),
    [anon_sym_class] = ACTIONS(750),
    [anon_sym_public] = ACTIONS(750),
    [anon_sym_protected] = ACTIONS(750),
    [anon_sym_private] = ACTIONS(750),
    [anon_sym_abstract] = ACTIONS(750),
    [anon_sym_final] = ACTIONS(750),
    [anon_sym_strictfp] = ACTIONS(750),
    [anon_sym_default] = ACTIONS(750),
    [anon_sym_interface] = ACTIONS(750),
    [sym_identifier] = ACTIONS(752),
    [sym_comment] = ACTIONS(50),
  },
  [653] = {
    [sym__annotation] = STATE(236),
    [sym_normal_annotation] = STATE(240),
    [sym_marker_annotation] = STATE(240),
    [sym_single_element_annotation] = STATE(240),
    [sym_class_declaration] = STATE(233),
    [sym_normal_class_declaration] = STATE(241),
    [sym_modifier] = STATE(242),
    [sym_type_parameters] = STATE(243),
    [sym_interface_declaration] = STATE(233),
    [sym_annotation_type_declaration] = STATE(244),
    [sym_normal_interface_declaration] = STATE(244),
    [sym_interface_member_declaration] = STATE(393),
    [sym_constant_declaration] = STATE(233),
    [sym_variable_declarator_list] = STATE(246),
    [sym_variable_declarator] = STATE(247),
    [sym_variable_declarator_id] = STATE(96),
    [sym_interface_method_declaration] = STATE(233),
    [sym_method_header] = STATE(248),
    [sym_result] = STATE(249),
    [aux_sym_normal_class_declaration_repeat1] = STATE(250),
    [sym__semicolon] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_RBRACE] = ACTIONS(1613),
    [anon_sym_AT] = ACTIONS(478),
    [anon_sym_static] = ACTIONS(480),
    [anon_sym_class] = ACTIONS(482),
    [anon_sym_public] = ACTIONS(480),
    [anon_sym_protected] = ACTIONS(480),
    [anon_sym_private] = ACTIONS(480),
    [anon_sym_abstract] = ACTIONS(480),
    [anon_sym_final] = ACTIONS(480),
    [anon_sym_strictfp] = ACTIONS(480),
    [anon_sym_default] = ACTIONS(480),
    [anon_sym_void] = ACTIONS(484),
    [anon_sym_interface] = ACTIONS(486),
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(50),
  },
  [654] = {
    [sym_interface_body] = STATE(816),
    [anon_sym_LBRACE] = ACTIONS(980),
    [sym_comment] = ACTIONS(50),
  },
  [655] = {
    [sym__semicolon] = ACTIONS(794),
    [anon_sym_LT] = ACTIONS(794),
    [anon_sym_LBRACE] = ACTIONS(794),
    [anon_sym_RBRACE] = ACTIONS(794),
    [anon_sym_AT] = ACTIONS(794),
    [anon_sym_static] = ACTIONS(796),
    [anon_sym_class] = ACTIONS(796),
    [anon_sym_public] = ACTIONS(796),
    [anon_sym_protected] = ACTIONS(796),
    [anon_sym_private] = ACTIONS(796),
    [anon_sym_abstract] = ACTIONS(796),
    [anon_sym_final] = ACTIONS(796),
    [anon_sym_strictfp] = ACTIONS(796),
    [anon_sym_default] = ACTIONS(796),
    [anon_sym_interface] = ACTIONS(796),
    [sym_identifier] = ACTIONS(798),
    [sym_comment] = ACTIONS(50),
  },
  [656] = {
    [anon_sym_EQ] = ACTIONS(1571),
    [anon_sym_PLUS_EQ] = ACTIONS(1573),
    [anon_sym_DASH_EQ] = ACTIONS(1573),
    [anon_sym_STAR_EQ] = ACTIONS(1573),
    [anon_sym_SLASH_EQ] = ACTIONS(1573),
    [anon_sym_AMP_EQ] = ACTIONS(1573),
    [anon_sym_PIPE_EQ] = ACTIONS(1573),
    [anon_sym_CARET_EQ] = ACTIONS(1573),
    [anon_sym_PERCENT_EQ] = ACTIONS(1573),
    [anon_sym_LT_LT_EQ] = ACTIONS(1573),
    [anon_sym_GT_GT_EQ] = ACTIONS(1573),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1573),
    [anon_sym_GT] = ACTIONS(1575),
    [anon_sym_LT] = ACTIONS(1575),
    [anon_sym_EQ_EQ] = ACTIONS(1577),
    [anon_sym_GT_EQ] = ACTIONS(1577),
    [anon_sym_LT_EQ] = ACTIONS(1577),
    [anon_sym_BANG_EQ] = ACTIONS(1577),
    [anon_sym_AMP_AMP] = ACTIONS(1579),
    [anon_sym_PIPE_PIPE] = ACTIONS(1581),
    [anon_sym_PLUS] = ACTIONS(1583),
    [anon_sym_DASH] = ACTIONS(1583),
    [anon_sym_STAR] = ACTIONS(1585),
    [anon_sym_SLASH] = ACTIONS(1585),
    [anon_sym_AMP] = ACTIONS(1587),
    [anon_sym_PIPE] = ACTIONS(1589),
    [anon_sym_CARET] = ACTIONS(1589),
    [anon_sym_PERCENT] = ACTIONS(1585),
    [anon_sym_LT_LT] = ACTIONS(1585),
    [anon_sym_GT_GT] = ACTIONS(1585),
    [anon_sym_GT_GT_GT] = ACTIONS(1585),
    [anon_sym_RPAREN] = ACTIONS(1615),
    [anon_sym_QMARK] = ACTIONS(1593),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [657] = {
    [anon_sym_class] = ACTIONS(1617),
    [sym_comment] = ACTIONS(50),
  },
  [658] = {
    [anon_sym_DOT] = ACTIONS(1619),
    [anon_sym_LBRACK] = ACTIONS(1619),
    [sym_comment] = ACTIONS(50),
  },
  [659] = {
    [anon_sym_DOT] = ACTIONS(1621),
    [anon_sym_LBRACK] = ACTIONS(1623),
    [sym_comment] = ACTIONS(50),
  },
  [660] = {
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_DOT] = ACTIONS(272),
    [anon_sym_boolean] = ACTIONS(274),
    [anon_sym_byte] = ACTIONS(274),
    [anon_sym_short] = ACTIONS(274),
    [anon_sym_int] = ACTIONS(274),
    [anon_sym_long] = ACTIONS(274),
    [anon_sym_char] = ACTIONS(274),
    [anon_sym_float] = ACTIONS(274),
    [anon_sym_double] = ACTIONS(274),
    [anon_sym_AT] = ACTIONS(272),
    [anon_sym_static] = ACTIONS(274),
    [anon_sym_class] = ACTIONS(274),
    [anon_sym_public] = ACTIONS(274),
    [anon_sym_protected] = ACTIONS(274),
    [anon_sym_private] = ACTIONS(274),
    [anon_sym_abstract] = ACTIONS(274),
    [anon_sym_final] = ACTIONS(274),
    [anon_sym_strictfp] = ACTIONS(274),
    [anon_sym_default] = ACTIONS(274),
    [sym_identifier] = ACTIONS(356),
    [sym_comment] = ACTIONS(50),
  },
  [661] = {
    [anon_sym_LPAREN] = ACTIONS(1625),
    [anon_sym_DOT] = ACTIONS(1627),
    [anon_sym_boolean] = ACTIONS(362),
    [anon_sym_byte] = ACTIONS(362),
    [anon_sym_short] = ACTIONS(362),
    [anon_sym_int] = ACTIONS(362),
    [anon_sym_long] = ACTIONS(362),
    [anon_sym_char] = ACTIONS(362),
    [anon_sym_float] = ACTIONS(362),
    [anon_sym_double] = ACTIONS(362),
    [anon_sym_AT] = ACTIONS(276),
    [anon_sym_static] = ACTIONS(362),
    [anon_sym_class] = ACTIONS(362),
    [anon_sym_public] = ACTIONS(362),
    [anon_sym_protected] = ACTIONS(362),
    [anon_sym_private] = ACTIONS(362),
    [anon_sym_abstract] = ACTIONS(362),
    [anon_sym_final] = ACTIONS(362),
    [anon_sym_strictfp] = ACTIONS(362),
    [anon_sym_default] = ACTIONS(362),
    [sym_identifier] = ACTIONS(364),
    [sym_comment] = ACTIONS(50),
  },
  [662] = {
    [sym__expression] = STATE(824),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym_argument_list] = STATE(825),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(1629),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [663] = {
    [sym_identifier] = ACTIONS(1631),
    [sym_comment] = ACTIONS(50),
  },
  [664] = {
    [sym_type_arguments] = STATE(828),
    [anon_sym_LT] = ACTIONS(1373),
    [sym_identifier] = ACTIONS(1633),
    [sym_comment] = ACTIONS(50),
  },
  [665] = {
    [sym_type_argument] = STATE(829),
    [sym_reference_type] = STATE(534),
    [sym_class_or_interface_type] = STATE(535),
    [sym_primitive_type] = STATE(536),
    [sym_integral_type] = STATE(531),
    [sym_floating_point_type] = STATE(531),
    [sym__annotation] = STATE(537),
    [sym_normal_annotation] = STATE(538),
    [sym_marker_annotation] = STATE(538),
    [sym_single_element_annotation] = STATE(538),
    [aux_sym_class_or_interface_type_repeat1] = STATE(539),
    [anon_sym_boolean] = ACTIONS(1038),
    [anon_sym_byte] = ACTIONS(992),
    [anon_sym_short] = ACTIONS(992),
    [anon_sym_int] = ACTIONS(992),
    [anon_sym_long] = ACTIONS(992),
    [anon_sym_char] = ACTIONS(992),
    [anon_sym_float] = ACTIONS(994),
    [anon_sym_double] = ACTIONS(994),
    [anon_sym_AT] = ACTIONS(1040),
    [sym_identifier] = ACTIONS(1042),
    [sym_comment] = ACTIONS(50),
  },
  [666] = {
    [sym_type_arguments] = STATE(832),
    [sym_type_arguments_or_diamond] = STATE(833),
    [aux_sym_class_or_interface_type_repeat2] = STATE(364),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(834),
    [anon_sym_LT] = ACTIONS(1635),
    [anon_sym_LPAREN] = ACTIONS(1637),
    [anon_sym_DOT] = ACTIONS(1639),
    [anon_sym_LBRACK] = ACTIONS(720),
    [anon_sym_AT] = ACTIONS(720),
    [anon_sym_LT_GT] = ACTIONS(1641),
    [sym_comment] = ACTIONS(50),
  },
  [667] = {
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [sym_class_or_interface_type_to_instantiate] = STATE(836),
    [aux_sym_class_or_interface_type_repeat1] = STATE(837),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(1643),
    [sym_comment] = ACTIONS(50),
  },
  [668] = {
    [sym_dims] = STATE(838),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [aux_sym_class_or_interface_type_repeat1] = STATE(101),
    [aux_sym_dims_repeat1] = STATE(102),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(193),
    [sym_comment] = ACTIONS(50),
  },
  [669] = {
    [sym_dims] = STATE(838),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym_dims_exprs] = STATE(839),
    [sym_dims_expr] = STATE(677),
    [aux_sym_class_or_interface_type_repeat1] = STATE(678),
    [aux_sym_dims_repeat1] = STATE(102),
    [anon_sym_LBRACK] = ACTIONS(1381),
    [anon_sym_AT] = ACTIONS(193),
    [sym_comment] = ACTIONS(50),
  },
  [670] = {
    [anon_sym_LPAREN] = ACTIONS(1645),
    [sym_comment] = ACTIONS(50),
  },
  [671] = {
    [sym_integral_type] = STATE(687),
    [sym_floating_point_type] = STATE(687),
    [sym__annotation] = STATE(688),
    [sym_normal_annotation] = STATE(538),
    [sym_marker_annotation] = STATE(538),
    [sym_single_element_annotation] = STATE(538),
    [anon_sym_boolean] = ACTIONS(1405),
    [anon_sym_byte] = ACTIONS(992),
    [anon_sym_short] = ACTIONS(992),
    [anon_sym_int] = ACTIONS(992),
    [anon_sym_long] = ACTIONS(992),
    [anon_sym_char] = ACTIONS(992),
    [anon_sym_float] = ACTIONS(994),
    [anon_sym_double] = ACTIONS(994),
    [anon_sym_AT] = ACTIONS(1040),
    [sym_identifier] = ACTIONS(1647),
    [sym_comment] = ACTIONS(50),
  },
  [672] = {
    [anon_sym_LPAREN] = ACTIONS(1649),
    [sym_comment] = ACTIONS(50),
  },
  [673] = {
    [sym__expression] = STATE(845),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1651),
    [anon_sym_TILDE] = ACTIONS(1651),
    [anon_sym_PLUS_PLUS] = ACTIONS(1653),
    [anon_sym_DASH_DASH] = ACTIONS(1653),
    [anon_sym_RBRACK] = ACTIONS(374),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [674] = {
    [sym_type_arguments] = STATE(846),
    [anon_sym_LT] = ACTIONS(722),
    [anon_sym_new] = ACTIONS(1655),
    [sym_comment] = ACTIONS(50),
  },
  [675] = {
    [anon_sym_COLON_COLON] = ACTIONS(1657),
    [sym_comment] = ACTIONS(50),
  },
  [676] = {
    [sym_dims] = STATE(847),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [aux_sym_class_or_interface_type_repeat1] = STATE(101),
    [aux_sym_dims_repeat1] = STATE(102),
    [anon_sym_DOT] = ACTIONS(1659),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_COLON_COLON] = ACTIONS(1659),
    [sym_comment] = ACTIONS(50),
  },
  [677] = {
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym_dims_expr] = STATE(849),
    [aux_sym_class_or_interface_type_repeat1] = STATE(850),
    [aux_sym_dims_exprs_repeat1] = STATE(851),
    [anon_sym_DOT] = ACTIONS(1661),
    [anon_sym_LBRACK] = ACTIONS(1663),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_COLON_COLON] = ACTIONS(1661),
    [sym_comment] = ACTIONS(50),
  },
  [678] = {
    [sym__annotation] = STATE(83),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [anon_sym_LBRACK] = ACTIONS(1665),
    [anon_sym_AT] = ACTIONS(193),
    [sym_comment] = ACTIONS(50),
  },
  [679] = {
    [sym_type_arguments] = STATE(855),
    [anon_sym_LT] = ACTIONS(1373),
    [anon_sym_class] = ACTIONS(1667),
    [anon_sym_this] = ACTIONS(1669),
    [anon_sym_super] = ACTIONS(1671),
    [sym_identifier] = ACTIONS(1673),
    [sym_comment] = ACTIONS(50),
  },
  [680] = {
    [sym__semicolon] = ACTIONS(1675),
    [anon_sym_LT] = ACTIONS(1675),
    [anon_sym_LBRACE] = ACTIONS(1675),
    [anon_sym_RBRACE] = ACTIONS(1675),
    [anon_sym_AT] = ACTIONS(1675),
    [anon_sym_static] = ACTIONS(1677),
    [anon_sym_class] = ACTIONS(1677),
    [anon_sym_public] = ACTIONS(1677),
    [anon_sym_protected] = ACTIONS(1677),
    [anon_sym_private] = ACTIONS(1677),
    [anon_sym_abstract] = ACTIONS(1677),
    [anon_sym_final] = ACTIONS(1677),
    [anon_sym_strictfp] = ACTIONS(1677),
    [anon_sym_default] = ACTIONS(1677),
    [anon_sym_interface] = ACTIONS(1677),
    [sym_identifier] = ACTIONS(1679),
    [sym_comment] = ACTIONS(50),
  },
  [681] = {
    [anon_sym_RBRACE] = ACTIONS(1681),
    [sym_comment] = ACTIONS(50),
  },
  [682] = {
    [sym_type_arguments] = STATE(861),
    [sym_unqualified_class_instance_creation_expression] = STATE(862),
    [anon_sym_LT] = ACTIONS(1683),
    [anon_sym_super] = ACTIONS(1685),
    [anon_sym_new] = ACTIONS(1687),
    [sym_identifier] = ACTIONS(1689),
    [sym_comment] = ACTIONS(50),
  },
  [683] = {
    [sym__expression] = STATE(863),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1651),
    [anon_sym_TILDE] = ACTIONS(1651),
    [anon_sym_PLUS_PLUS] = ACTIONS(1653),
    [anon_sym_DASH_DASH] = ACTIONS(1653),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [684] = {
    [sym_type_arguments] = STATE(855),
    [sym_unqualified_class_instance_creation_expression] = STATE(862),
    [anon_sym_LT] = ACTIONS(1373),
    [anon_sym_super] = ACTIONS(1685),
    [anon_sym_new] = ACTIONS(1687),
    [sym_identifier] = ACTIONS(1691),
    [sym_comment] = ACTIONS(50),
  },
  [685] = {
    [anon_sym_new] = ACTIONS(1655),
    [sym_comment] = ACTIONS(50),
  },
  [686] = {
    [sym__expression] = STATE(824),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym_argument_list] = STATE(866),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(1693),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [687] = {
    [anon_sym_LBRACK] = ACTIONS(1695),
    [anon_sym_AT] = ACTIONS(1695),
    [sym_comment] = ACTIONS(50),
  },
  [688] = {
    [anon_sym_boolean] = ACTIONS(392),
    [anon_sym_byte] = ACTIONS(392),
    [anon_sym_short] = ACTIONS(392),
    [anon_sym_int] = ACTIONS(392),
    [anon_sym_long] = ACTIONS(392),
    [anon_sym_char] = ACTIONS(392),
    [anon_sym_float] = ACTIONS(392),
    [anon_sym_double] = ACTIONS(392),
    [anon_sym_AT] = ACTIONS(332),
    [sym_identifier] = ACTIONS(394),
    [sym_comment] = ACTIONS(50),
  },
  [689] = {
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [aux_sym_class_or_interface_type_repeat1] = STATE(868),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(1697),
    [sym_comment] = ACTIONS(50),
  },
  [690] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(869),
    [anon_sym_DOT] = ACTIONS(1409),
    [anon_sym_AT] = ACTIONS(1046),
    [sym_identifier] = ACTIONS(1699),
    [sym_comment] = ACTIONS(50),
  },
  [691] = {
    [anon_sym_DOT] = ACTIONS(1701),
    [anon_sym_AT] = ACTIONS(1046),
    [sym_identifier] = ACTIONS(1699),
    [sym_comment] = ACTIONS(50),
  },
  [692] = {
    [sym__semicolon] = ACTIONS(1703),
    [anon_sym_COMMA] = ACTIONS(1703),
    [anon_sym_LBRACE] = ACTIONS(1703),
    [sym_comment] = ACTIONS(50),
  },
  [693] = {
    [sym__semicolon] = ACTIONS(1705),
    [anon_sym_COMMA] = ACTIONS(1705),
    [anon_sym_LBRACE] = ACTIONS(1705),
    [sym_comment] = ACTIONS(50),
  },
  [694] = {
    [sym__annotation] = STATE(328),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(1707),
    [sym_comment] = ACTIONS(50),
  },
  [695] = {
    [sym__semicolon] = ACTIONS(1709),
    [anon_sym_COMMA] = ACTIONS(1709),
    [anon_sym_LBRACE] = ACTIONS(1709),
    [sym_comment] = ACTIONS(50),
  },
  [696] = {
    [sym__semicolon] = ACTIONS(1711),
    [anon_sym_COMMA] = ACTIONS(1713),
    [anon_sym_LBRACE] = ACTIONS(1711),
    [sym_comment] = ACTIONS(50),
  },
  [697] = {
    [sym_type_arguments] = STATE(873),
    [aux_sym_class_or_interface_type_repeat2] = STATE(869),
    [anon_sym_LT] = ACTIONS(1373),
    [anon_sym_DOT] = ACTIONS(1409),
    [anon_sym_AT] = ACTIONS(1046),
    [sym_identifier] = ACTIONS(1699),
    [sym_comment] = ACTIONS(50),
  },
  [698] = {
    [sym_annotation_type_body] = STATE(874),
    [anon_sym_LBRACE] = ACTIONS(1332),
    [sym_comment] = ACTIONS(50),
  },
  [699] = {
    [sym_superclass] = STATE(875),
    [sym_super_interfaces] = STATE(813),
    [sym_class_body] = STATE(814),
    [anon_sym_LBRACE] = ACTIONS(978),
    [anon_sym_extends] = ACTIONS(300),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [700] = {
    [sym_extends_interfaces] = STATE(876),
    [sym_interface_body] = STATE(816),
    [anon_sym_LBRACE] = ACTIONS(980),
    [anon_sym_extends] = ACTIONS(306),
    [sym_comment] = ACTIONS(50),
  },
  [701] = {
    [sym__semicolon] = ACTIONS(1715),
    [anon_sym_LT] = ACTIONS(1715),
    [anon_sym_LBRACE] = ACTIONS(1715),
    [anon_sym_RBRACE] = ACTIONS(1715),
    [anon_sym_AT] = ACTIONS(1715),
    [anon_sym_static] = ACTIONS(1717),
    [anon_sym_class] = ACTIONS(1717),
    [anon_sym_public] = ACTIONS(1717),
    [anon_sym_protected] = ACTIONS(1717),
    [anon_sym_private] = ACTIONS(1717),
    [anon_sym_abstract] = ACTIONS(1717),
    [anon_sym_final] = ACTIONS(1717),
    [anon_sym_strictfp] = ACTIONS(1717),
    [anon_sym_default] = ACTIONS(1717),
    [anon_sym_interface] = ACTIONS(1717),
    [sym_identifier] = ACTIONS(1719),
    [sym_comment] = ACTIONS(50),
  },
  [702] = {
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_DOT] = ACTIONS(272),
    [anon_sym_boolean] = ACTIONS(274),
    [anon_sym_byte] = ACTIONS(274),
    [anon_sym_short] = ACTIONS(274),
    [anon_sym_int] = ACTIONS(274),
    [anon_sym_long] = ACTIONS(274),
    [anon_sym_char] = ACTIONS(274),
    [anon_sym_float] = ACTIONS(274),
    [anon_sym_double] = ACTIONS(274),
    [anon_sym_AT] = ACTIONS(272),
    [sym_identifier] = ACTIONS(356),
    [sym_comment] = ACTIONS(50),
  },
  [703] = {
    [anon_sym_LPAREN] = ACTIONS(1721),
    [anon_sym_DOT] = ACTIONS(1723),
    [anon_sym_boolean] = ACTIONS(362),
    [anon_sym_byte] = ACTIONS(362),
    [anon_sym_short] = ACTIONS(362),
    [anon_sym_int] = ACTIONS(362),
    [anon_sym_long] = ACTIONS(362),
    [anon_sym_char] = ACTIONS(362),
    [anon_sym_float] = ACTIONS(362),
    [anon_sym_double] = ACTIONS(362),
    [anon_sym_AT] = ACTIONS(276),
    [sym_identifier] = ACTIONS(364),
    [sym_comment] = ACTIONS(50),
  },
  [704] = {
    [anon_sym_GT] = ACTIONS(1725),
    [anon_sym_AMP] = ACTIONS(1725),
    [anon_sym_LPAREN] = ACTIONS(1725),
    [anon_sym_COMMA] = ACTIONS(1725),
    [anon_sym_LBRACE] = ACTIONS(1725),
    [anon_sym_DOT] = ACTIONS(1725),
    [anon_sym_LBRACK] = ACTIONS(1725),
    [anon_sym_AT] = ACTIONS(1725),
    [anon_sym_implements] = ACTIONS(1725),
    [anon_sym_this] = ACTIONS(1725),
    [anon_sym_super] = ACTIONS(1725),
    [anon_sym_new] = ACTIONS(1725),
    [anon_sym_COLON_COLON] = ACTIONS(1725),
    [sym_comment] = ACTIONS(50),
  },
  [705] = {
    [sym_type_argument] = STATE(879),
    [sym_reference_type] = STATE(534),
    [sym_class_or_interface_type] = STATE(535),
    [sym_primitive_type] = STATE(536),
    [sym_integral_type] = STATE(531),
    [sym_floating_point_type] = STATE(531),
    [sym__annotation] = STATE(537),
    [sym_normal_annotation] = STATE(538),
    [sym_marker_annotation] = STATE(538),
    [sym_single_element_annotation] = STATE(538),
    [aux_sym_class_or_interface_type_repeat1] = STATE(539),
    [anon_sym_boolean] = ACTIONS(1038),
    [anon_sym_byte] = ACTIONS(992),
    [anon_sym_short] = ACTIONS(992),
    [anon_sym_int] = ACTIONS(992),
    [anon_sym_long] = ACTIONS(992),
    [anon_sym_char] = ACTIONS(992),
    [anon_sym_float] = ACTIONS(994),
    [anon_sym_double] = ACTIONS(994),
    [anon_sym_AT] = ACTIONS(1040),
    [sym_identifier] = ACTIONS(1042),
    [sym_comment] = ACTIONS(50),
  },
  [706] = {
    [anon_sym_GT] = ACTIONS(1727),
    [anon_sym_COMMA] = ACTIONS(1729),
    [sym_comment] = ACTIONS(50),
  },
  [707] = {
    [anon_sym_GT] = ACTIONS(1731),
    [anon_sym_COMMA] = ACTIONS(1731),
    [sym_comment] = ACTIONS(50),
  },
  [708] = {
    [anon_sym_GT] = ACTIONS(1733),
    [anon_sym_AMP] = ACTIONS(1733),
    [anon_sym_COMMA] = ACTIONS(1733),
    [anon_sym_LBRACE] = ACTIONS(1733),
    [anon_sym_DOT] = ACTIONS(1733),
    [anon_sym_LBRACK] = ACTIONS(1733),
    [anon_sym_AT] = ACTIONS(1733),
    [anon_sym_implements] = ACTIONS(1733),
    [anon_sym_COLON_COLON] = ACTIONS(1733),
    [sym_comment] = ACTIONS(50),
  },
  [709] = {
    [sym_type_arguments] = STATE(882),
    [anon_sym_GT] = ACTIONS(1733),
    [anon_sym_LT] = ACTIONS(722),
    [anon_sym_AMP] = ACTIONS(1733),
    [anon_sym_COMMA] = ACTIONS(1733),
    [anon_sym_LBRACE] = ACTIONS(1733),
    [anon_sym_DOT] = ACTIONS(1733),
    [anon_sym_LBRACK] = ACTIONS(1733),
    [anon_sym_AT] = ACTIONS(1733),
    [anon_sym_implements] = ACTIONS(1733),
    [anon_sym_COLON_COLON] = ACTIONS(1733),
    [sym_comment] = ACTIONS(50),
  },
  [710] = {
    [sym__annotation] = STATE(328),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(1735),
    [sym_comment] = ACTIONS(50),
  },
  [711] = {
    [anon_sym_GT] = ACTIONS(1737),
    [anon_sym_AMP] = ACTIONS(1737),
    [anon_sym_COMMA] = ACTIONS(1737),
    [anon_sym_LBRACE] = ACTIONS(1737),
    [anon_sym_DOT] = ACTIONS(1048),
    [anon_sym_LBRACK] = ACTIONS(1737),
    [anon_sym_AT] = ACTIONS(1737),
    [anon_sym_implements] = ACTIONS(1737),
    [anon_sym_COLON_COLON] = ACTIONS(1737),
    [sym_comment] = ACTIONS(50),
  },
  [712] = {
    [anon_sym_COMMA] = ACTIONS(1739),
    [anon_sym_LBRACE] = ACTIONS(1739),
    [sym_comment] = ACTIONS(50),
  },
  [713] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(216),
    [sym_marker_annotation] = STATE(216),
    [sym_single_element_annotation] = STATE(216),
    [sym_class_declaration] = STATE(294),
    [sym_normal_class_declaration] = STATE(217),
    [sym_modifier] = STATE(32),
    [sym_interface_declaration] = STATE(294),
    [sym_annotation_type_declaration] = STATE(222),
    [sym_annotation_type_member_declaration] = STATE(295),
    [sym_annotation_type_element_declaration] = STATE(294),
    [sym_normal_interface_declaration] = STATE(222),
    [sym_constant_declaration] = STATE(294),
    [sym_variable_declarator_list] = STATE(296),
    [sym_variable_declarator] = STATE(247),
    [sym_variable_declarator_id] = STATE(96),
    [aux_sym_normal_class_declaration_repeat1] = STATE(297),
    [aux_sym_annotation_type_body_repeat1] = STATE(885),
    [anon_sym_RBRACE] = ACTIONS(1741),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(460),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(462),
    [sym_identifier] = ACTIONS(594),
    [sym_comment] = ACTIONS(50),
  },
  [714] = {
    [sym__semicolon] = ACTIONS(596),
    [anon_sym_LT] = ACTIONS(596),
    [anon_sym_RBRACE] = ACTIONS(596),
    [anon_sym_AT] = ACTIONS(596),
    [anon_sym_static] = ACTIONS(598),
    [anon_sym_class] = ACTIONS(598),
    [anon_sym_public] = ACTIONS(598),
    [anon_sym_protected] = ACTIONS(598),
    [anon_sym_private] = ACTIONS(598),
    [anon_sym_abstract] = ACTIONS(598),
    [anon_sym_final] = ACTIONS(598),
    [anon_sym_strictfp] = ACTIONS(598),
    [anon_sym_default] = ACTIONS(598),
    [anon_sym_void] = ACTIONS(598),
    [anon_sym_interface] = ACTIONS(598),
    [sym_identifier] = ACTIONS(600),
    [sym_comment] = ACTIONS(50),
  },
  [715] = {
    [anon_sym_LT] = ACTIONS(602),
    [anon_sym_AT] = ACTIONS(602),
    [anon_sym_static] = ACTIONS(812),
    [anon_sym_class] = ACTIONS(812),
    [anon_sym_public] = ACTIONS(812),
    [anon_sym_protected] = ACTIONS(812),
    [anon_sym_private] = ACTIONS(812),
    [anon_sym_abstract] = ACTIONS(812),
    [anon_sym_final] = ACTIONS(812),
    [anon_sym_strictfp] = ACTIONS(812),
    [anon_sym_default] = ACTIONS(812),
    [anon_sym_void] = ACTIONS(812),
    [anon_sym_interface] = ACTIONS(812),
    [sym_identifier] = ACTIONS(814),
    [sym_comment] = ACTIONS(50),
  },
  [716] = {
    [anon_sym_EQ] = ACTIONS(604),
    [anon_sym_RPAREN] = ACTIONS(1743),
    [sym_comment] = ACTIONS(50),
  },
  [717] = {
    [anon_sym_RPAREN] = ACTIONS(1743),
    [sym_comment] = ACTIONS(50),
  },
  [718] = {
    [anon_sym_RPAREN] = ACTIONS(1745),
    [sym_comment] = ACTIONS(50),
  },
  [719] = {
    [anon_sym_LT] = ACTIONS(614),
    [anon_sym_LPAREN] = ACTIONS(614),
    [anon_sym_DOT] = ACTIONS(614),
    [anon_sym_AT] = ACTIONS(614),
    [anon_sym_static] = ACTIONS(616),
    [anon_sym_class] = ACTIONS(616),
    [anon_sym_public] = ACTIONS(616),
    [anon_sym_protected] = ACTIONS(616),
    [anon_sym_private] = ACTIONS(616),
    [anon_sym_abstract] = ACTIONS(616),
    [anon_sym_final] = ACTIONS(616),
    [anon_sym_strictfp] = ACTIONS(616),
    [anon_sym_default] = ACTIONS(616),
    [anon_sym_void] = ACTIONS(616),
    [anon_sym_interface] = ACTIONS(616),
    [sym_identifier] = ACTIONS(820),
    [sym_comment] = ACTIONS(50),
  },
  [720] = {
    [sym__semicolon] = ACTIONS(680),
    [anon_sym_LT] = ACTIONS(680),
    [anon_sym_RBRACE] = ACTIONS(680),
    [anon_sym_AT] = ACTIONS(680),
    [anon_sym_static] = ACTIONS(682),
    [anon_sym_class] = ACTIONS(682),
    [anon_sym_public] = ACTIONS(682),
    [anon_sym_protected] = ACTIONS(682),
    [anon_sym_private] = ACTIONS(682),
    [anon_sym_abstract] = ACTIONS(682),
    [anon_sym_final] = ACTIONS(682),
    [anon_sym_strictfp] = ACTIONS(682),
    [anon_sym_default] = ACTIONS(682),
    [anon_sym_void] = ACTIONS(682),
    [anon_sym_interface] = ACTIONS(682),
    [sym_identifier] = ACTIONS(684),
    [sym_comment] = ACTIONS(50),
  },
  [721] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(216),
    [sym_marker_annotation] = STATE(216),
    [sym_single_element_annotation] = STATE(216),
    [sym_class_declaration] = STATE(208),
    [sym_normal_class_declaration] = STATE(217),
    [sym_modifier] = STATE(32),
    [sym_type_parameters] = STATE(218),
    [sym_class_body_declaration] = STATE(360),
    [sym_constructor_declaration] = STATE(220),
    [sym_constructor_declarator] = STATE(221),
    [sym_class_member_declaration] = STATE(220),
    [sym_interface_declaration] = STATE(208),
    [sym_annotation_type_declaration] = STATE(222),
    [sym_normal_interface_declaration] = STATE(222),
    [sym_block] = STATE(220),
    [aux_sym_normal_class_declaration_repeat1] = STATE(223),
    [sym__semicolon] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(454),
    [anon_sym_RBRACE] = ACTIONS(1747),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(460),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(462),
    [sym_identifier] = ACTIONS(464),
    [sym_comment] = ACTIONS(50),
  },
  [722] = {
    [sym_super_interfaces] = STATE(889),
    [sym_class_body] = STATE(890),
    [anon_sym_LBRACE] = ACTIONS(1066),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [723] = {
    [sym_class_body] = STATE(890),
    [anon_sym_LBRACE] = ACTIONS(1066),
    [sym_comment] = ACTIONS(50),
  },
  [724] = {
    [sym__semicolon] = ACTIONS(736),
    [anon_sym_LT] = ACTIONS(736),
    [anon_sym_RBRACE] = ACTIONS(736),
    [anon_sym_AT] = ACTIONS(736),
    [anon_sym_static] = ACTIONS(738),
    [anon_sym_class] = ACTIONS(738),
    [anon_sym_public] = ACTIONS(738),
    [anon_sym_protected] = ACTIONS(738),
    [anon_sym_private] = ACTIONS(738),
    [anon_sym_abstract] = ACTIONS(738),
    [anon_sym_final] = ACTIONS(738),
    [anon_sym_strictfp] = ACTIONS(738),
    [anon_sym_default] = ACTIONS(738),
    [anon_sym_void] = ACTIONS(738),
    [anon_sym_interface] = ACTIONS(738),
    [sym_identifier] = ACTIONS(740),
    [sym_comment] = ACTIONS(50),
  },
  [725] = {
    [sym__semicolon] = ACTIONS(748),
    [anon_sym_LT] = ACTIONS(748),
    [anon_sym_RBRACE] = ACTIONS(748),
    [anon_sym_AT] = ACTIONS(748),
    [anon_sym_static] = ACTIONS(750),
    [anon_sym_class] = ACTIONS(750),
    [anon_sym_public] = ACTIONS(750),
    [anon_sym_protected] = ACTIONS(750),
    [anon_sym_private] = ACTIONS(750),
    [anon_sym_abstract] = ACTIONS(750),
    [anon_sym_final] = ACTIONS(750),
    [anon_sym_strictfp] = ACTIONS(750),
    [anon_sym_default] = ACTIONS(750),
    [anon_sym_void] = ACTIONS(750),
    [anon_sym_interface] = ACTIONS(750),
    [sym_identifier] = ACTIONS(752),
    [sym_comment] = ACTIONS(50),
  },
  [726] = {
    [sym__annotation] = STATE(236),
    [sym_normal_annotation] = STATE(240),
    [sym_marker_annotation] = STATE(240),
    [sym_single_element_annotation] = STATE(240),
    [sym_class_declaration] = STATE(233),
    [sym_normal_class_declaration] = STATE(241),
    [sym_modifier] = STATE(242),
    [sym_type_parameters] = STATE(243),
    [sym_interface_declaration] = STATE(233),
    [sym_annotation_type_declaration] = STATE(244),
    [sym_normal_interface_declaration] = STATE(244),
    [sym_interface_member_declaration] = STATE(393),
    [sym_constant_declaration] = STATE(233),
    [sym_variable_declarator_list] = STATE(246),
    [sym_variable_declarator] = STATE(247),
    [sym_variable_declarator_id] = STATE(96),
    [sym_interface_method_declaration] = STATE(233),
    [sym_method_header] = STATE(248),
    [sym_result] = STATE(249),
    [aux_sym_normal_class_declaration_repeat1] = STATE(250),
    [sym__semicolon] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_RBRACE] = ACTIONS(1749),
    [anon_sym_AT] = ACTIONS(478),
    [anon_sym_static] = ACTIONS(480),
    [anon_sym_class] = ACTIONS(482),
    [anon_sym_public] = ACTIONS(480),
    [anon_sym_protected] = ACTIONS(480),
    [anon_sym_private] = ACTIONS(480),
    [anon_sym_abstract] = ACTIONS(480),
    [anon_sym_final] = ACTIONS(480),
    [anon_sym_strictfp] = ACTIONS(480),
    [anon_sym_default] = ACTIONS(480),
    [anon_sym_void] = ACTIONS(484),
    [anon_sym_interface] = ACTIONS(486),
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(50),
  },
  [727] = {
    [sym_interface_body] = STATE(892),
    [anon_sym_LBRACE] = ACTIONS(1068),
    [sym_comment] = ACTIONS(50),
  },
  [728] = {
    [sym__semicolon] = ACTIONS(794),
    [anon_sym_LT] = ACTIONS(794),
    [anon_sym_RBRACE] = ACTIONS(794),
    [anon_sym_AT] = ACTIONS(794),
    [anon_sym_static] = ACTIONS(796),
    [anon_sym_class] = ACTIONS(796),
    [anon_sym_public] = ACTIONS(796),
    [anon_sym_protected] = ACTIONS(796),
    [anon_sym_private] = ACTIONS(796),
    [anon_sym_abstract] = ACTIONS(796),
    [anon_sym_final] = ACTIONS(796),
    [anon_sym_strictfp] = ACTIONS(796),
    [anon_sym_default] = ACTIONS(796),
    [anon_sym_void] = ACTIONS(796),
    [anon_sym_interface] = ACTIONS(796),
    [sym_identifier] = ACTIONS(798),
    [sym_comment] = ACTIONS(50),
  },
  [729] = {
    [sym__semicolon] = ACTIONS(1751),
    [anon_sym_LBRACE] = ACTIONS(1751),
    [sym_comment] = ACTIONS(50),
  },
  [730] = {
    [sym_throws] = STATE(893),
    [sym__semicolon] = ACTIONS(1751),
    [anon_sym_LBRACE] = ACTIONS(1751),
    [anon_sym_throws] = ACTIONS(710),
    [sym_comment] = ACTIONS(50),
  },
  [731] = {
    [sym__semicolon] = ACTIONS(1753),
    [anon_sym_COMMA] = ACTIONS(1753),
    [sym_comment] = ACTIONS(50),
  },
  [732] = {
    [sym__semicolon] = ACTIONS(1318),
    [anon_sym_LT] = ACTIONS(1318),
    [anon_sym_RBRACE] = ACTIONS(1318),
    [anon_sym_AT] = ACTIONS(1318),
    [anon_sym_static] = ACTIONS(1320),
    [anon_sym_class] = ACTIONS(1320),
    [anon_sym_public] = ACTIONS(1320),
    [anon_sym_protected] = ACTIONS(1320),
    [anon_sym_private] = ACTIONS(1320),
    [anon_sym_abstract] = ACTIONS(1320),
    [anon_sym_final] = ACTIONS(1320),
    [anon_sym_strictfp] = ACTIONS(1320),
    [anon_sym_default] = ACTIONS(1320),
    [anon_sym_void] = ACTIONS(1320),
    [anon_sym_interface] = ACTIONS(1320),
    [sym_identifier] = ACTIONS(1322),
    [sym_comment] = ACTIONS(50),
  },
  [733] = {
    [sym_dims] = STATE(894),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [aux_sym_class_or_interface_type_repeat1] = STATE(101),
    [aux_sym_dims_repeat1] = STATE(102),
    [sym__semicolon] = ACTIONS(1755),
    [anon_sym_LBRACE] = ACTIONS(1755),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_throws] = ACTIONS(1755),
    [sym_comment] = ACTIONS(50),
  },
  [734] = {
    [anon_sym_RPAREN] = ACTIONS(1757),
    [sym_comment] = ACTIONS(50),
  },
  [735] = {
    [sym_annotation_type_body] = STATE(896),
    [anon_sym_LBRACE] = ACTIONS(1457),
    [sym_comment] = ACTIONS(50),
  },
  [736] = {
    [sym_superclass] = STATE(897),
    [sym_super_interfaces] = STATE(889),
    [sym_class_body] = STATE(890),
    [anon_sym_LBRACE] = ACTIONS(1066),
    [anon_sym_extends] = ACTIONS(300),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [737] = {
    [sym_extends_interfaces] = STATE(898),
    [sym_interface_body] = STATE(892),
    [anon_sym_LBRACE] = ACTIONS(1068),
    [anon_sym_extends] = ACTIONS(306),
    [sym_comment] = ACTIONS(50),
  },
  [738] = {
    [anon_sym_EQ] = ACTIONS(1128),
    [anon_sym_PLUS_EQ] = ACTIONS(1126),
    [anon_sym_DASH_EQ] = ACTIONS(1126),
    [anon_sym_STAR_EQ] = ACTIONS(1126),
    [anon_sym_SLASH_EQ] = ACTIONS(1126),
    [anon_sym_AMP_EQ] = ACTIONS(1126),
    [anon_sym_PIPE_EQ] = ACTIONS(1126),
    [anon_sym_CARET_EQ] = ACTIONS(1126),
    [anon_sym_PERCENT_EQ] = ACTIONS(1126),
    [anon_sym_LT_LT_EQ] = ACTIONS(1126),
    [anon_sym_GT_GT_EQ] = ACTIONS(1126),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1126),
    [anon_sym_GT] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [anon_sym_BANG_EQ] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(510),
    [anon_sym_PIPE_PIPE] = ACTIONS(512),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_LT_LT] = ACTIONS(516),
    [anon_sym_GT_GT] = ACTIONS(516),
    [anon_sym_GT_GT_GT] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(522),
    [anon_sym_COLON] = ACTIONS(1126),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [739] = {
    [anon_sym_EQ] = ACTIONS(1128),
    [anon_sym_PLUS_EQ] = ACTIONS(1126),
    [anon_sym_DASH_EQ] = ACTIONS(1126),
    [anon_sym_STAR_EQ] = ACTIONS(1126),
    [anon_sym_SLASH_EQ] = ACTIONS(1126),
    [anon_sym_AMP_EQ] = ACTIONS(1126),
    [anon_sym_PIPE_EQ] = ACTIONS(1126),
    [anon_sym_CARET_EQ] = ACTIONS(1126),
    [anon_sym_PERCENT_EQ] = ACTIONS(1126),
    [anon_sym_LT_LT_EQ] = ACTIONS(1126),
    [anon_sym_GT_GT_EQ] = ACTIONS(1126),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1126),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [anon_sym_BANG_EQ] = ACTIONS(532),
    [anon_sym_AMP_AMP] = ACTIONS(534),
    [anon_sym_PIPE_PIPE] = ACTIONS(536),
    [anon_sym_PLUS] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_STAR] = ACTIONS(540),
    [anon_sym_SLASH] = ACTIONS(540),
    [anon_sym_AMP] = ACTIONS(542),
    [anon_sym_PIPE] = ACTIONS(544),
    [anon_sym_CARET] = ACTIONS(544),
    [anon_sym_PERCENT] = ACTIONS(540),
    [anon_sym_LT_LT] = ACTIONS(540),
    [anon_sym_GT_GT] = ACTIONS(540),
    [anon_sym_GT_GT_GT] = ACTIONS(540),
    [anon_sym_QMARK] = ACTIONS(546),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(1126),
    [sym_comment] = ACTIONS(50),
  },
  [740] = {
    [ts_builtin_sym_end] = ACTIONS(1759),
    [sym_decimal_integer_literal] = ACTIONS(1761),
    [sym_hex_integer_literal] = ACTIONS(1761),
    [sym_octal_integer_literal] = ACTIONS(1761),
    [sym_binary_integer_literal] = ACTIONS(1761),
    [sym_decimal_floating_point_literal] = ACTIONS(1761),
    [sym_hex_floating_point_literal] = ACTIONS(1763),
    [anon_sym_true] = ACTIONS(1761),
    [anon_sym_false] = ACTIONS(1761),
    [anon_sym_SQUOTE] = ACTIONS(1759),
    [sym_string_literal] = ACTIONS(1759),
    [sym_null_literal] = ACTIONS(1761),
    [anon_sym_LPAREN] = ACTIONS(1759),
    [anon_sym_BANG] = ACTIONS(1759),
    [anon_sym_TILDE] = ACTIONS(1759),
    [anon_sym_PLUS_PLUS] = ACTIONS(1759),
    [anon_sym_DASH_DASH] = ACTIONS(1759),
    [anon_sym_RBRACE] = ACTIONS(1759),
    [anon_sym_AT] = ACTIONS(1759),
    [anon_sym_open] = ACTIONS(1761),
    [anon_sym_module] = ACTIONS(1761),
    [anon_sym_static] = ACTIONS(1761),
    [anon_sym_package] = ACTIONS(1761),
    [anon_sym_import] = ACTIONS(1761),
    [anon_sym_class] = ACTIONS(1761),
    [anon_sym_public] = ACTIONS(1761),
    [anon_sym_protected] = ACTIONS(1761),
    [anon_sym_private] = ACTIONS(1761),
    [anon_sym_abstract] = ACTIONS(1761),
    [anon_sym_final] = ACTIONS(1761),
    [anon_sym_strictfp] = ACTIONS(1761),
    [anon_sym_default] = ACTIONS(1761),
    [anon_sym_interface] = ACTIONS(1761),
    [sym_identifier] = ACTIONS(1763),
    [sym_comment] = ACTIONS(50),
  },
  [741] = {
    [ts_builtin_sym_end] = ACTIONS(1765),
    [sym_decimal_integer_literal] = ACTIONS(1767),
    [sym_hex_integer_literal] = ACTIONS(1767),
    [sym_octal_integer_literal] = ACTIONS(1767),
    [sym_binary_integer_literal] = ACTIONS(1767),
    [sym_decimal_floating_point_literal] = ACTIONS(1767),
    [sym_hex_floating_point_literal] = ACTIONS(1769),
    [anon_sym_true] = ACTIONS(1767),
    [anon_sym_false] = ACTIONS(1767),
    [anon_sym_SQUOTE] = ACTIONS(1765),
    [sym_string_literal] = ACTIONS(1765),
    [sym_null_literal] = ACTIONS(1767),
    [anon_sym_LPAREN] = ACTIONS(1765),
    [anon_sym_BANG] = ACTIONS(1765),
    [anon_sym_TILDE] = ACTIONS(1765),
    [anon_sym_PLUS_PLUS] = ACTIONS(1765),
    [anon_sym_DASH_DASH] = ACTIONS(1765),
    [anon_sym_RBRACE] = ACTIONS(1765),
    [anon_sym_AT] = ACTIONS(1765),
    [anon_sym_open] = ACTIONS(1767),
    [anon_sym_module] = ACTIONS(1767),
    [anon_sym_static] = ACTIONS(1767),
    [anon_sym_package] = ACTIONS(1767),
    [anon_sym_import] = ACTIONS(1767),
    [anon_sym_class] = ACTIONS(1767),
    [anon_sym_public] = ACTIONS(1767),
    [anon_sym_protected] = ACTIONS(1767),
    [anon_sym_private] = ACTIONS(1767),
    [anon_sym_abstract] = ACTIONS(1767),
    [anon_sym_final] = ACTIONS(1767),
    [anon_sym_strictfp] = ACTIONS(1767),
    [anon_sym_default] = ACTIONS(1767),
    [anon_sym_interface] = ACTIONS(1767),
    [sym_identifier] = ACTIONS(1769),
    [sym_comment] = ACTIONS(50),
  },
  [742] = {
    [anon_sym_RBRACE] = ACTIONS(1771),
    [anon_sym_AT] = ACTIONS(1771),
    [anon_sym_static] = ACTIONS(1773),
    [anon_sym_class] = ACTIONS(1773),
    [anon_sym_public] = ACTIONS(1773),
    [anon_sym_protected] = ACTIONS(1773),
    [anon_sym_private] = ACTIONS(1773),
    [anon_sym_abstract] = ACTIONS(1773),
    [anon_sym_final] = ACTIONS(1773),
    [anon_sym_strictfp] = ACTIONS(1773),
    [anon_sym_default] = ACTIONS(1773),
    [anon_sym_interface] = ACTIONS(1773),
    [sym_identifier] = ACTIONS(1775),
    [sym_comment] = ACTIONS(50),
  },
  [743] = {
    [sym__literal] = STATE(434),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(435),
    [sym__annotation] = STATE(434),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym_element_value] = STATE(900),
    [sym_element_value_array_initializer] = STATE(434),
    [sym_conditional_expression] = STATE(434),
    [sym_conditional_or_expression] = STATE(901),
    [sym_conditional_and_expression] = STATE(902),
    [sym_inclusive_or_expression] = STATE(903),
    [sym_exclusive_or_expression] = STATE(904),
    [sym_and_expression] = STATE(441),
    [sym_relational_expression] = STATE(905),
    [sym_equality_expression] = STATE(906),
    [sym_shift_expression] = STATE(907),
    [sym_additive_expression] = STATE(908),
    [sym_multiplicative_expression] = STATE(909),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(872),
    [anon_sym_false] = ACTIONS(872),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(1777),
    [anon_sym_TILDE] = ACTIONS(1777),
    [anon_sym_LBRACE] = ACTIONS(876),
    [anon_sym_AT] = ACTIONS(193),
    [sym_comment] = ACTIONS(50),
  },
  [744] = {
    [sym_default_value] = STATE(911),
    [sym__semicolon] = ACTIONS(1779),
    [anon_sym_default] = ACTIONS(1501),
    [sym_comment] = ACTIONS(50),
  },
  [745] = {
    [sym__semicolon] = ACTIONS(1779),
    [sym_comment] = ACTIONS(50),
  },
  [746] = {
    [sym_dims] = STATE(912),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym_default_value] = STATE(911),
    [aux_sym_class_or_interface_type_repeat1] = STATE(101),
    [aux_sym_dims_repeat1] = STATE(102),
    [sym__semicolon] = ACTIONS(1779),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_default] = ACTIONS(1501),
    [sym_comment] = ACTIONS(50),
  },
  [747] = {
    [sym__expression] = STATE(913),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [748] = {
    [sym__expression] = STATE(914),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [749] = {
    [sym__expression] = STATE(915),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [750] = {
    [sym__expression] = STATE(916),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [751] = {
    [sym__expression] = STATE(917),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [752] = {
    [sym__expression] = STATE(148),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [753] = {
    [sym__expression] = STATE(918),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(316),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [754] = {
    [sym__semicolon] = ACTIONS(1781),
    [anon_sym_RPAREN] = ACTIONS(1781),
    [anon_sym_COMMA] = ACTIONS(1781),
    [anon_sym_RBRACE] = ACTIONS(1781),
    [sym_comment] = ACTIONS(50),
  },
  [755] = {
    [sym__expression] = STATE(56),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1517),
    [anon_sym_TILDE] = ACTIONS(1517),
    [anon_sym_PLUS_PLUS] = ACTIONS(1519),
    [anon_sym_DASH_DASH] = ACTIONS(1519),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [756] = {
    [sym__expression] = STATE(57),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1517),
    [anon_sym_TILDE] = ACTIONS(1517),
    [anon_sym_PLUS_PLUS] = ACTIONS(1519),
    [anon_sym_DASH_DASH] = ACTIONS(1519),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [757] = {
    [anon_sym_EQ] = ACTIONS(1783),
    [anon_sym_PLUS_EQ] = ACTIONS(1785),
    [anon_sym_DASH_EQ] = ACTIONS(1785),
    [anon_sym_STAR_EQ] = ACTIONS(1785),
    [anon_sym_SLASH_EQ] = ACTIONS(1785),
    [anon_sym_AMP_EQ] = ACTIONS(1785),
    [anon_sym_PIPE_EQ] = ACTIONS(1785),
    [anon_sym_CARET_EQ] = ACTIONS(1785),
    [anon_sym_PERCENT_EQ] = ACTIONS(1785),
    [anon_sym_LT_LT_EQ] = ACTIONS(1785),
    [anon_sym_GT_GT_EQ] = ACTIONS(1785),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1785),
    [anon_sym_GT] = ACTIONS(1787),
    [anon_sym_LT] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(262),
    [anon_sym_GT_EQ] = ACTIONS(1789),
    [anon_sym_LT_EQ] = ACTIONS(1789),
    [anon_sym_BANG_EQ] = ACTIONS(262),
    [anon_sym_AMP_AMP] = ACTIONS(262),
    [anon_sym_PIPE_PIPE] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(264),
    [anon_sym_SLASH] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(1791),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_CARET] = ACTIONS(264),
    [anon_sym_PERCENT] = ACTIONS(264),
    [anon_sym_LT_LT] = ACTIONS(264),
    [anon_sym_GT_GT] = ACTIONS(264),
    [anon_sym_GT_GT_GT] = ACTIONS(264),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_QMARK] = ACTIONS(262),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(262),
    [sym_comment] = ACTIONS(50),
  },
  [758] = {
    [sym__literal] = STATE(434),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(435),
    [sym__annotation] = STATE(434),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym_element_value] = STATE(927),
    [sym_element_value_array_initializer] = STATE(434),
    [sym_conditional_expression] = STATE(434),
    [sym_conditional_or_expression] = STATE(592),
    [sym_conditional_and_expression] = STATE(593),
    [sym_inclusive_or_expression] = STATE(594),
    [sym_exclusive_or_expression] = STATE(595),
    [sym_and_expression] = STATE(441),
    [sym_relational_expression] = STATE(596),
    [sym_equality_expression] = STATE(597),
    [sym_shift_expression] = STATE(598),
    [sym_additive_expression] = STATE(599),
    [sym_multiplicative_expression] = STATE(600),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(872),
    [anon_sym_false] = ACTIONS(872),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(1186),
    [anon_sym_TILDE] = ACTIONS(1186),
    [anon_sym_LBRACE] = ACTIONS(876),
    [anon_sym_RBRACE] = ACTIONS(1793),
    [anon_sym_AT] = ACTIONS(193),
    [sym_comment] = ACTIONS(50),
  },
  [759] = {
    [anon_sym_COMMA] = ACTIONS(1795),
    [anon_sym_RBRACE] = ACTIONS(1793),
    [sym_comment] = ACTIONS(50),
  },
  [760] = {
    [sym_unary_expression] = STATE(435),
    [sym_conditional_and_expression] = STATE(929),
    [sym_inclusive_or_expression] = STATE(594),
    [sym_exclusive_or_expression] = STATE(595),
    [sym_and_expression] = STATE(441),
    [sym_relational_expression] = STATE(596),
    [sym_equality_expression] = STATE(597),
    [sym_shift_expression] = STATE(598),
    [sym_additive_expression] = STATE(599),
    [sym_multiplicative_expression] = STATE(600),
    [anon_sym_BANG] = ACTIONS(1186),
    [anon_sym_TILDE] = ACTIONS(1186),
    [sym_comment] = ACTIONS(50),
  },
  [761] = {
    [sym__expression] = STATE(930),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(316),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [762] = {
    [sym_unary_expression] = STATE(435),
    [sym_inclusive_or_expression] = STATE(931),
    [sym_exclusive_or_expression] = STATE(595),
    [sym_and_expression] = STATE(441),
    [sym_relational_expression] = STATE(596),
    [sym_equality_expression] = STATE(597),
    [sym_shift_expression] = STATE(598),
    [sym_additive_expression] = STATE(599),
    [sym_multiplicative_expression] = STATE(600),
    [anon_sym_BANG] = ACTIONS(1186),
    [anon_sym_TILDE] = ACTIONS(1186),
    [sym_comment] = ACTIONS(50),
  },
  [763] = {
    [sym_unary_expression] = STATE(435),
    [sym_exclusive_or_expression] = STATE(932),
    [sym_and_expression] = STATE(441),
    [sym_relational_expression] = STATE(596),
    [sym_equality_expression] = STATE(597),
    [sym_shift_expression] = STATE(598),
    [sym_additive_expression] = STATE(599),
    [sym_multiplicative_expression] = STATE(600),
    [anon_sym_BANG] = ACTIONS(1186),
    [anon_sym_TILDE] = ACTIONS(1186),
    [sym_comment] = ACTIONS(50),
  },
  [764] = {
    [sym_unary_expression] = STATE(435),
    [sym_and_expression] = STATE(774),
    [sym_relational_expression] = STATE(596),
    [sym_equality_expression] = STATE(597),
    [sym_shift_expression] = STATE(598),
    [sym_additive_expression] = STATE(599),
    [sym_multiplicative_expression] = STATE(600),
    [anon_sym_BANG] = ACTIONS(1186),
    [anon_sym_TILDE] = ACTIONS(1186),
    [sym_comment] = ACTIONS(50),
  },
  [765] = {
    [sym_unary_expression] = STATE(435),
    [sym_shift_expression] = STATE(933),
    [sym_additive_expression] = STATE(599),
    [sym_multiplicative_expression] = STATE(600),
    [anon_sym_BANG] = ACTIONS(1186),
    [anon_sym_TILDE] = ACTIONS(1186),
    [sym_comment] = ACTIONS(50),
  },
  [766] = {
    [sym_unary_expression] = STATE(435),
    [sym_relational_expression] = STATE(934),
    [sym_shift_expression] = STATE(598),
    [sym_additive_expression] = STATE(599),
    [sym_multiplicative_expression] = STATE(600),
    [anon_sym_BANG] = ACTIONS(1186),
    [anon_sym_TILDE] = ACTIONS(1186),
    [sym_comment] = ACTIONS(50),
  },
  [767] = {
    [sym_unary_expression] = STATE(435),
    [sym_additive_expression] = STATE(935),
    [sym_multiplicative_expression] = STATE(600),
    [anon_sym_BANG] = ACTIONS(1186),
    [anon_sym_TILDE] = ACTIONS(1186),
    [sym_comment] = ACTIONS(50),
  },
  [768] = {
    [sym_unary_expression] = STATE(435),
    [sym_multiplicative_expression] = STATE(936),
    [anon_sym_BANG] = ACTIONS(1186),
    [anon_sym_TILDE] = ACTIONS(1186),
    [sym_comment] = ACTIONS(50),
  },
  [769] = {
    [sym_unary_expression] = STATE(779),
    [anon_sym_BANG] = ACTIONS(1186),
    [anon_sym_TILDE] = ACTIONS(1186),
    [sym_comment] = ACTIONS(50),
  },
  [770] = {
    [anon_sym_AMP_AMP] = ACTIONS(1204),
    [anon_sym_PIPE_PIPE] = ACTIONS(1797),
    [anon_sym_RPAREN] = ACTIONS(1797),
    [anon_sym_COMMA] = ACTIONS(1797),
    [anon_sym_QMARK] = ACTIONS(1797),
    [sym_comment] = ACTIONS(50),
  },
  [771] = {
    [anon_sym_EQ] = ACTIONS(502),
    [anon_sym_PLUS_EQ] = ACTIONS(504),
    [anon_sym_DASH_EQ] = ACTIONS(504),
    [anon_sym_STAR_EQ] = ACTIONS(504),
    [anon_sym_SLASH_EQ] = ACTIONS(504),
    [anon_sym_AMP_EQ] = ACTIONS(504),
    [anon_sym_PIPE_EQ] = ACTIONS(504),
    [anon_sym_CARET_EQ] = ACTIONS(504),
    [anon_sym_PERCENT_EQ] = ACTIONS(504),
    [anon_sym_LT_LT_EQ] = ACTIONS(504),
    [anon_sym_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_GT] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [anon_sym_BANG_EQ] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(510),
    [anon_sym_PIPE_PIPE] = ACTIONS(512),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_LT_LT] = ACTIONS(516),
    [anon_sym_GT_GT] = ACTIONS(516),
    [anon_sym_GT_GT_GT] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(522),
    [anon_sym_COLON] = ACTIONS(1799),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [772] = {
    [anon_sym_AMP_AMP] = ACTIONS(1801),
    [anon_sym_PIPE_PIPE] = ACTIONS(1801),
    [anon_sym_PIPE] = ACTIONS(1210),
    [anon_sym_RPAREN] = ACTIONS(1801),
    [anon_sym_COMMA] = ACTIONS(1801),
    [anon_sym_QMARK] = ACTIONS(1801),
    [sym_comment] = ACTIONS(50),
  },
  [773] = {
    [anon_sym_AMP_AMP] = ACTIONS(1803),
    [anon_sym_PIPE_PIPE] = ACTIONS(1803),
    [anon_sym_PIPE] = ACTIONS(1805),
    [anon_sym_CARET] = ACTIONS(1216),
    [anon_sym_RPAREN] = ACTIONS(1803),
    [anon_sym_COMMA] = ACTIONS(1803),
    [anon_sym_QMARK] = ACTIONS(1803),
    [sym_comment] = ACTIONS(50),
  },
  [774] = {
    [sym__semicolon] = ACTIONS(1807),
    [anon_sym_AMP_AMP] = ACTIONS(1807),
    [anon_sym_PIPE_PIPE] = ACTIONS(1807),
    [anon_sym_PIPE] = ACTIONS(1809),
    [anon_sym_CARET] = ACTIONS(1807),
    [anon_sym_RPAREN] = ACTIONS(1807),
    [anon_sym_COMMA] = ACTIONS(1807),
    [anon_sym_QMARK] = ACTIONS(1807),
    [anon_sym_RBRACE] = ACTIONS(1807),
    [sym_comment] = ACTIONS(50),
  },
  [775] = {
    [anon_sym_LT] = ACTIONS(1811),
    [anon_sym_EQ_EQ] = ACTIONS(1813),
    [anon_sym_BANG_EQ] = ACTIONS(1813),
    [anon_sym_AMP_AMP] = ACTIONS(1813),
    [anon_sym_PIPE_PIPE] = ACTIONS(1813),
    [anon_sym_PIPE] = ACTIONS(1811),
    [anon_sym_CARET] = ACTIONS(1813),
    [anon_sym_LT_LT] = ACTIONS(1236),
    [anon_sym_GT_GT] = ACTIONS(1238),
    [anon_sym_GT_GT_GT] = ACTIONS(1236),
    [anon_sym_RPAREN] = ACTIONS(1813),
    [anon_sym_COMMA] = ACTIONS(1813),
    [anon_sym_QMARK] = ACTIONS(1813),
    [sym_comment] = ACTIONS(50),
  },
  [776] = {
    [anon_sym_LT] = ACTIONS(1222),
    [anon_sym_EQ_EQ] = ACTIONS(1815),
    [anon_sym_BANG_EQ] = ACTIONS(1815),
    [anon_sym_AMP_AMP] = ACTIONS(1817),
    [anon_sym_PIPE_PIPE] = ACTIONS(1817),
    [anon_sym_PIPE] = ACTIONS(1819),
    [anon_sym_CARET] = ACTIONS(1817),
    [anon_sym_RPAREN] = ACTIONS(1817),
    [anon_sym_COMMA] = ACTIONS(1817),
    [anon_sym_QMARK] = ACTIONS(1817),
    [sym_comment] = ACTIONS(50),
  },
  [777] = {
    [anon_sym_LT] = ACTIONS(1821),
    [anon_sym_EQ_EQ] = ACTIONS(1823),
    [anon_sym_BANG_EQ] = ACTIONS(1823),
    [anon_sym_AMP_AMP] = ACTIONS(1823),
    [anon_sym_PIPE_PIPE] = ACTIONS(1823),
    [anon_sym_PLUS] = ACTIONS(1244),
    [anon_sym_DASH] = ACTIONS(1244),
    [anon_sym_PIPE] = ACTIONS(1821),
    [anon_sym_CARET] = ACTIONS(1823),
    [anon_sym_LT_LT] = ACTIONS(1823),
    [anon_sym_GT_GT] = ACTIONS(1821),
    [anon_sym_GT_GT_GT] = ACTIONS(1823),
    [anon_sym_RPAREN] = ACTIONS(1823),
    [anon_sym_COMMA] = ACTIONS(1823),
    [anon_sym_QMARK] = ACTIONS(1823),
    [sym_comment] = ACTIONS(50),
  },
  [778] = {
    [anon_sym_LT] = ACTIONS(1825),
    [anon_sym_EQ_EQ] = ACTIONS(1827),
    [anon_sym_BANG_EQ] = ACTIONS(1827),
    [anon_sym_AMP_AMP] = ACTIONS(1827),
    [anon_sym_PIPE_PIPE] = ACTIONS(1827),
    [anon_sym_PLUS] = ACTIONS(1827),
    [anon_sym_DASH] = ACTIONS(1827),
    [anon_sym_STAR] = ACTIONS(1250),
    [anon_sym_SLASH] = ACTIONS(1252),
    [anon_sym_PIPE] = ACTIONS(1825),
    [anon_sym_CARET] = ACTIONS(1827),
    [anon_sym_PERCENT] = ACTIONS(1250),
    [anon_sym_LT_LT] = ACTIONS(1827),
    [anon_sym_GT_GT] = ACTIONS(1825),
    [anon_sym_GT_GT_GT] = ACTIONS(1827),
    [anon_sym_RPAREN] = ACTIONS(1827),
    [anon_sym_COMMA] = ACTIONS(1827),
    [anon_sym_QMARK] = ACTIONS(1827),
    [sym_comment] = ACTIONS(50),
  },
  [779] = {
    [sym__semicolon] = ACTIONS(1829),
    [anon_sym_LT] = ACTIONS(1831),
    [anon_sym_EQ_EQ] = ACTIONS(1829),
    [anon_sym_BANG_EQ] = ACTIONS(1829),
    [anon_sym_AMP_AMP] = ACTIONS(1829),
    [anon_sym_PIPE_PIPE] = ACTIONS(1829),
    [anon_sym_PLUS] = ACTIONS(1829),
    [anon_sym_DASH] = ACTIONS(1829),
    [anon_sym_STAR] = ACTIONS(1829),
    [anon_sym_SLASH] = ACTIONS(1831),
    [anon_sym_PIPE] = ACTIONS(1831),
    [anon_sym_CARET] = ACTIONS(1829),
    [anon_sym_PERCENT] = ACTIONS(1829),
    [anon_sym_LT_LT] = ACTIONS(1829),
    [anon_sym_GT_GT] = ACTIONS(1831),
    [anon_sym_GT_GT_GT] = ACTIONS(1829),
    [anon_sym_RPAREN] = ACTIONS(1829),
    [anon_sym_COMMA] = ACTIONS(1829),
    [anon_sym_QMARK] = ACTIONS(1829),
    [anon_sym_RBRACE] = ACTIONS(1829),
    [sym_comment] = ACTIONS(50),
  },
  [780] = {
    [anon_sym_RBRACE] = ACTIONS(1833),
    [anon_sym_requires] = ACTIONS(1833),
    [anon_sym_exports] = ACTIONS(1833),
    [anon_sym_opens] = ACTIONS(1833),
    [anon_sym_uses] = ACTIONS(1833),
    [anon_sym_provides] = ACTIONS(1833),
    [sym_comment] = ACTIONS(50),
  },
  [781] = {
    [sym__semicolon] = ACTIONS(1835),
    [anon_sym_COMMA] = ACTIONS(1276),
    [sym_comment] = ACTIONS(50),
  },
  [782] = {
    [sym__semicolon] = ACTIONS(1837),
    [anon_sym_COMMA] = ACTIONS(1837),
    [anon_sym_DOT] = ACTIONS(910),
    [sym_comment] = ACTIONS(50),
  },
  [783] = {
    [sym_package_or_type_name] = STATE(939),
    [sym_identifier] = ACTIONS(290),
    [sym_comment] = ACTIONS(50),
  },
  [784] = {
    [sym__semicolon] = ACTIONS(1835),
    [anon_sym_COMMA] = ACTIONS(1839),
    [sym_comment] = ACTIONS(50),
  },
  [785] = {
    [anon_sym_AT] = ACTIONS(878),
    [sym_identifier] = ACTIONS(1144),
    [sym_comment] = ACTIONS(50),
  },
  [786] = {
    [anon_sym_AT] = ACTIONS(880),
    [sym_identifier] = ACTIONS(1148),
    [sym_comment] = ACTIONS(50),
  },
  [787] = {
    [anon_sym_GT] = ACTIONS(1841),
    [anon_sym_AMP] = ACTIONS(1841),
    [anon_sym_COMMA] = ACTIONS(1841),
    [sym_comment] = ACTIONS(50),
  },
  [788] = {
    [sym_class_or_interface_type] = STATE(941),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [aux_sym_class_or_interface_type_repeat1] = STATE(227),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(50),
  },
  [789] = {
    [sym__expression] = STATE(942),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1306),
    [anon_sym_TILDE] = ACTIONS(1306),
    [anon_sym_PLUS_PLUS] = ACTIONS(1308),
    [anon_sym_DASH_DASH] = ACTIONS(1308),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [790] = {
    [sym__expression] = STATE(943),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1306),
    [anon_sym_TILDE] = ACTIONS(1306),
    [anon_sym_PLUS_PLUS] = ACTIONS(1308),
    [anon_sym_DASH_DASH] = ACTIONS(1308),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [791] = {
    [sym__expression] = STATE(944),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1306),
    [anon_sym_TILDE] = ACTIONS(1306),
    [anon_sym_PLUS_PLUS] = ACTIONS(1308),
    [anon_sym_DASH_DASH] = ACTIONS(1308),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [792] = {
    [sym__expression] = STATE(945),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1306),
    [anon_sym_TILDE] = ACTIONS(1306),
    [anon_sym_PLUS_PLUS] = ACTIONS(1308),
    [anon_sym_DASH_DASH] = ACTIONS(1308),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [793] = {
    [sym__expression] = STATE(946),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1306),
    [anon_sym_TILDE] = ACTIONS(1306),
    [anon_sym_PLUS_PLUS] = ACTIONS(1308),
    [anon_sym_DASH_DASH] = ACTIONS(1308),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [794] = {
    [sym__expression] = STATE(148),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1306),
    [anon_sym_TILDE] = ACTIONS(1306),
    [anon_sym_PLUS_PLUS] = ACTIONS(1308),
    [anon_sym_DASH_DASH] = ACTIONS(1308),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [795] = {
    [sym__statement] = STATE(947),
    [sym__literal] = STATE(956),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(957),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym_else_if_clause] = STATE(958),
    [sym_else_clause] = STATE(947),
    [sym__annotation] = STATE(26),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym__declaration] = STATE(959),
    [sym_module_declaration] = STATE(960),
    [sym_package_declaration] = STATE(960),
    [sym_import_statement] = STATE(960),
    [sym_type_import_on_declaraction] = STATE(961),
    [sym_single_static_import_declaration] = STATE(961),
    [sym_static_import_on_demand_declaration] = STATE(961),
    [sym_class_declaration] = STATE(960),
    [sym_normal_class_declaration] = STATE(338),
    [sym_modifier] = STATE(32),
    [sym_interface_declaration] = STATE(960),
    [sym_annotation_type_declaration] = STATE(962),
    [sym_normal_interface_declaration] = STATE(962),
    [aux_sym_if_then_statement_repeat1] = STATE(963),
    [aux_sym_class_or_interface_type_repeat1] = STATE(964),
    [aux_sym_normal_class_declaration_repeat1] = STATE(965),
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
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(28),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_PLUS_PLUS] = ACTIONS(30),
    [anon_sym_DASH_DASH] = ACTIONS(30),
    [anon_sym_if] = ACTIONS(1843),
    [anon_sym_LBRACE] = ACTIONS(1845),
    [anon_sym_RBRACE] = ACTIONS(1845),
    [anon_sym_elseif] = ACTIONS(1847),
    [anon_sym_else] = ACTIONS(1849),
    [anon_sym_AT] = ACTIONS(1851),
    [anon_sym_open] = ACTIONS(1853),
    [anon_sym_module] = ACTIONS(1855),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_package] = ACTIONS(1857),
    [anon_sym_import] = ACTIONS(1859),
    [anon_sym_class] = ACTIONS(1000),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(1861),
    [sym_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(50),
  },
  [796] = {
    [sym__expression] = STATE(966),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(316),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [797] = {
    [anon_sym_AT] = ACTIONS(602),
    [anon_sym_static] = ACTIONS(812),
    [anon_sym_class] = ACTIONS(812),
    [anon_sym_public] = ACTIONS(812),
    [anon_sym_protected] = ACTIONS(812),
    [anon_sym_private] = ACTIONS(812),
    [anon_sym_abstract] = ACTIONS(812),
    [anon_sym_final] = ACTIONS(812),
    [anon_sym_strictfp] = ACTIONS(812),
    [anon_sym_default] = ACTIONS(812),
    [sym_identifier] = ACTIONS(814),
    [sym_comment] = ACTIONS(50),
  },
  [798] = {
    [anon_sym_EQ] = ACTIONS(604),
    [anon_sym_RPAREN] = ACTIONS(1863),
    [sym_comment] = ACTIONS(50),
  },
  [799] = {
    [anon_sym_RPAREN] = ACTIONS(1863),
    [sym_comment] = ACTIONS(50),
  },
  [800] = {
    [anon_sym_RPAREN] = ACTIONS(1865),
    [sym_comment] = ACTIONS(50),
  },
  [801] = {
    [anon_sym_LPAREN] = ACTIONS(614),
    [anon_sym_DOT] = ACTIONS(614),
    [anon_sym_AT] = ACTIONS(614),
    [anon_sym_static] = ACTIONS(616),
    [anon_sym_class] = ACTIONS(616),
    [anon_sym_public] = ACTIONS(616),
    [anon_sym_protected] = ACTIONS(616),
    [anon_sym_private] = ACTIONS(616),
    [anon_sym_abstract] = ACTIONS(616),
    [anon_sym_final] = ACTIONS(616),
    [anon_sym_strictfp] = ACTIONS(616),
    [anon_sym_default] = ACTIONS(616),
    [sym_identifier] = ACTIONS(820),
    [sym_comment] = ACTIONS(50),
  },
  [802] = {
    [anon_sym_if] = ACTIONS(680),
    [anon_sym_RBRACE] = ACTIONS(680),
    [anon_sym_elseif] = ACTIONS(680),
    [anon_sym_AT] = ACTIONS(680),
    [anon_sym_static] = ACTIONS(680),
    [anon_sym_class] = ACTIONS(680),
    [anon_sym_public] = ACTIONS(680),
    [anon_sym_protected] = ACTIONS(680),
    [anon_sym_private] = ACTIONS(680),
    [anon_sym_abstract] = ACTIONS(680),
    [anon_sym_final] = ACTIONS(680),
    [anon_sym_strictfp] = ACTIONS(680),
    [anon_sym_default] = ACTIONS(680),
    [sym_comment] = ACTIONS(50),
  },
  [803] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(216),
    [sym_marker_annotation] = STATE(216),
    [sym_single_element_annotation] = STATE(216),
    [sym_class_declaration] = STATE(208),
    [sym_normal_class_declaration] = STATE(217),
    [sym_modifier] = STATE(32),
    [sym_type_parameters] = STATE(218),
    [sym_class_body_declaration] = STATE(360),
    [sym_constructor_declaration] = STATE(220),
    [sym_constructor_declarator] = STATE(221),
    [sym_class_member_declaration] = STATE(220),
    [sym_interface_declaration] = STATE(208),
    [sym_annotation_type_declaration] = STATE(222),
    [sym_normal_interface_declaration] = STATE(222),
    [sym_block] = STATE(220),
    [aux_sym_normal_class_declaration_repeat1] = STATE(223),
    [sym__semicolon] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(454),
    [anon_sym_RBRACE] = ACTIONS(1867),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(460),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(462),
    [sym_identifier] = ACTIONS(464),
    [sym_comment] = ACTIONS(50),
  },
  [804] = {
    [sym_super_interfaces] = STATE(970),
    [sym_class_body] = STATE(971),
    [anon_sym_LBRACE] = ACTIONS(1314),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [805] = {
    [sym_class_body] = STATE(971),
    [anon_sym_LBRACE] = ACTIONS(1314),
    [sym_comment] = ACTIONS(50),
  },
  [806] = {
    [anon_sym_if] = ACTIONS(736),
    [anon_sym_RBRACE] = ACTIONS(736),
    [anon_sym_elseif] = ACTIONS(736),
    [anon_sym_AT] = ACTIONS(736),
    [anon_sym_static] = ACTIONS(736),
    [anon_sym_class] = ACTIONS(736),
    [anon_sym_public] = ACTIONS(736),
    [anon_sym_protected] = ACTIONS(736),
    [anon_sym_private] = ACTIONS(736),
    [anon_sym_abstract] = ACTIONS(736),
    [anon_sym_final] = ACTIONS(736),
    [anon_sym_strictfp] = ACTIONS(736),
    [anon_sym_default] = ACTIONS(736),
    [sym_comment] = ACTIONS(50),
  },
  [807] = {
    [sym_superclass] = STATE(972),
    [sym_super_interfaces] = STATE(970),
    [sym_class_body] = STATE(971),
    [anon_sym_LBRACE] = ACTIONS(1314),
    [anon_sym_extends] = ACTIONS(300),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [808] = {
    [sym__semicolon] = ACTIONS(846),
    [anon_sym_LT] = ACTIONS(846),
    [anon_sym_LBRACE] = ACTIONS(846),
    [anon_sym_RBRACE] = ACTIONS(846),
    [anon_sym_AT] = ACTIONS(846),
    [anon_sym_static] = ACTIONS(848),
    [anon_sym_class] = ACTIONS(848),
    [anon_sym_public] = ACTIONS(848),
    [anon_sym_protected] = ACTIONS(848),
    [anon_sym_private] = ACTIONS(848),
    [anon_sym_abstract] = ACTIONS(848),
    [anon_sym_final] = ACTIONS(848),
    [anon_sym_strictfp] = ACTIONS(848),
    [anon_sym_default] = ACTIONS(848),
    [anon_sym_interface] = ACTIONS(848),
    [sym_identifier] = ACTIONS(850),
    [sym_comment] = ACTIONS(50),
  },
  [809] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(216),
    [sym_marker_annotation] = STATE(216),
    [sym_single_element_annotation] = STATE(216),
    [sym_class_declaration] = STATE(294),
    [sym_normal_class_declaration] = STATE(217),
    [sym_modifier] = STATE(32),
    [sym_interface_declaration] = STATE(294),
    [sym_annotation_type_declaration] = STATE(222),
    [sym_annotation_type_member_declaration] = STATE(431),
    [sym_annotation_type_element_declaration] = STATE(294),
    [sym_normal_interface_declaration] = STATE(222),
    [sym_constant_declaration] = STATE(294),
    [sym_variable_declarator_list] = STATE(296),
    [sym_variable_declarator] = STATE(247),
    [sym_variable_declarator_id] = STATE(96),
    [aux_sym_normal_class_declaration_repeat1] = STATE(297),
    [anon_sym_RBRACE] = ACTIONS(1869),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(460),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(462),
    [sym_identifier] = ACTIONS(594),
    [sym_comment] = ACTIONS(50),
  },
  [810] = {
    [anon_sym_LT] = ACTIONS(878),
    [anon_sym_AT] = ACTIONS(878),
    [anon_sym_static] = ACTIONS(1144),
    [anon_sym_class] = ACTIONS(1144),
    [anon_sym_public] = ACTIONS(1144),
    [anon_sym_protected] = ACTIONS(1144),
    [anon_sym_private] = ACTIONS(1144),
    [anon_sym_abstract] = ACTIONS(1144),
    [anon_sym_final] = ACTIONS(1144),
    [anon_sym_strictfp] = ACTIONS(1144),
    [anon_sym_default] = ACTIONS(1144),
    [anon_sym_interface] = ACTIONS(1144),
    [sym_identifier] = ACTIONS(1146),
    [sym_comment] = ACTIONS(50),
  },
  [811] = {
    [anon_sym_LT] = ACTIONS(880),
    [anon_sym_AT] = ACTIONS(880),
    [anon_sym_static] = ACTIONS(1148),
    [anon_sym_class] = ACTIONS(1148),
    [anon_sym_public] = ACTIONS(1148),
    [anon_sym_protected] = ACTIONS(1148),
    [anon_sym_private] = ACTIONS(1148),
    [anon_sym_abstract] = ACTIONS(1148),
    [anon_sym_final] = ACTIONS(1148),
    [anon_sym_strictfp] = ACTIONS(1148),
    [anon_sym_default] = ACTIONS(1148),
    [anon_sym_interface] = ACTIONS(1148),
    [sym_identifier] = ACTIONS(1150),
    [sym_comment] = ACTIONS(50),
  },
  [812] = {
    [sym__semicolon] = ACTIONS(1026),
    [anon_sym_LT] = ACTIONS(1026),
    [anon_sym_LBRACE] = ACTIONS(1026),
    [anon_sym_RBRACE] = ACTIONS(1026),
    [anon_sym_DOT] = ACTIONS(1026),
    [anon_sym_LBRACK] = ACTIONS(1026),
    [anon_sym_AT] = ACTIONS(1026),
    [anon_sym_static] = ACTIONS(1028),
    [anon_sym_class] = ACTIONS(1028),
    [anon_sym_public] = ACTIONS(1028),
    [anon_sym_protected] = ACTIONS(1028),
    [anon_sym_private] = ACTIONS(1028),
    [anon_sym_abstract] = ACTIONS(1028),
    [anon_sym_final] = ACTIONS(1028),
    [anon_sym_strictfp] = ACTIONS(1028),
    [anon_sym_default] = ACTIONS(1028),
    [anon_sym_COLON_COLON] = ACTIONS(1026),
    [anon_sym_interface] = ACTIONS(1028),
    [sym_identifier] = ACTIONS(1030),
    [sym_comment] = ACTIONS(50),
  },
  [813] = {
    [sym_class_body] = STATE(974),
    [anon_sym_LBRACE] = ACTIONS(978),
    [sym_comment] = ACTIONS(50),
  },
  [814] = {
    [sym__semicolon] = ACTIONS(1054),
    [anon_sym_LT] = ACTIONS(1054),
    [anon_sym_LBRACE] = ACTIONS(1054),
    [anon_sym_RBRACE] = ACTIONS(1054),
    [anon_sym_AT] = ACTIONS(1054),
    [anon_sym_static] = ACTIONS(1056),
    [anon_sym_class] = ACTIONS(1056),
    [anon_sym_public] = ACTIONS(1056),
    [anon_sym_protected] = ACTIONS(1056),
    [anon_sym_private] = ACTIONS(1056),
    [anon_sym_abstract] = ACTIONS(1056),
    [anon_sym_final] = ACTIONS(1056),
    [anon_sym_strictfp] = ACTIONS(1056),
    [anon_sym_default] = ACTIONS(1056),
    [anon_sym_interface] = ACTIONS(1056),
    [sym_identifier] = ACTIONS(1058),
    [sym_comment] = ACTIONS(50),
  },
  [815] = {
    [sym__semicolon] = ACTIONS(1106),
    [anon_sym_LT] = ACTIONS(1106),
    [anon_sym_LBRACE] = ACTIONS(1106),
    [anon_sym_RBRACE] = ACTIONS(1106),
    [anon_sym_AT] = ACTIONS(1106),
    [anon_sym_static] = ACTIONS(1108),
    [anon_sym_class] = ACTIONS(1108),
    [anon_sym_public] = ACTIONS(1108),
    [anon_sym_protected] = ACTIONS(1108),
    [anon_sym_private] = ACTIONS(1108),
    [anon_sym_abstract] = ACTIONS(1108),
    [anon_sym_final] = ACTIONS(1108),
    [anon_sym_strictfp] = ACTIONS(1108),
    [anon_sym_default] = ACTIONS(1108),
    [anon_sym_interface] = ACTIONS(1108),
    [sym_identifier] = ACTIONS(1110),
    [sym_comment] = ACTIONS(50),
  },
  [816] = {
    [sym__semicolon] = ACTIONS(1118),
    [anon_sym_LT] = ACTIONS(1118),
    [anon_sym_LBRACE] = ACTIONS(1118),
    [anon_sym_RBRACE] = ACTIONS(1118),
    [anon_sym_AT] = ACTIONS(1118),
    [anon_sym_static] = ACTIONS(1120),
    [anon_sym_class] = ACTIONS(1120),
    [anon_sym_public] = ACTIONS(1120),
    [anon_sym_protected] = ACTIONS(1120),
    [anon_sym_private] = ACTIONS(1120),
    [anon_sym_abstract] = ACTIONS(1120),
    [anon_sym_final] = ACTIONS(1120),
    [anon_sym_strictfp] = ACTIONS(1120),
    [anon_sym_default] = ACTIONS(1120),
    [anon_sym_interface] = ACTIONS(1120),
    [sym_identifier] = ACTIONS(1122),
    [sym_comment] = ACTIONS(50),
  },
  [817] = {
    [anon_sym_DOT] = ACTIONS(1871),
    [anon_sym_LBRACK] = ACTIONS(1871),
    [anon_sym_COLON_COLON] = ACTIONS(1871),
    [sym_comment] = ACTIONS(50),
  },
  [818] = {
    [anon_sym_DOT] = ACTIONS(1873),
    [anon_sym_LBRACK] = ACTIONS(1873),
    [anon_sym_COLON_COLON] = ACTIONS(1873),
    [sym_comment] = ACTIONS(50),
  },
  [819] = {
    [anon_sym_class] = ACTIONS(1875),
    [sym_comment] = ACTIONS(50),
  },
  [820] = {
    [anon_sym_DOT] = ACTIONS(1877),
    [anon_sym_LBRACK] = ACTIONS(1877),
    [sym_comment] = ACTIONS(50),
  },
  [821] = {
    [sym__literal] = STATE(978),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(979),
    [sym_element_value_pair] = STATE(187),
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
    [anon_sym_RPAREN] = ACTIONS(1879),
    [sym_identifier] = ACTIONS(1881),
    [sym_comment] = ACTIONS(50),
  },
  [822] = {
    [sym_identifier] = ACTIONS(1883),
    [sym_comment] = ACTIONS(50),
  },
  [823] = {
    [sym__semicolon] = ACTIONS(1885),
    [sym_comment] = ACTIONS(50),
  },
  [824] = {
    [aux_sym_argument_list_repeat1] = STATE(983),
    [anon_sym_EQ] = ACTIONS(1505),
    [anon_sym_PLUS_EQ] = ACTIONS(1507),
    [anon_sym_DASH_EQ] = ACTIONS(1507),
    [anon_sym_STAR_EQ] = ACTIONS(1507),
    [anon_sym_SLASH_EQ] = ACTIONS(1507),
    [anon_sym_AMP_EQ] = ACTIONS(1507),
    [anon_sym_PIPE_EQ] = ACTIONS(1507),
    [anon_sym_CARET_EQ] = ACTIONS(1507),
    [anon_sym_PERCENT_EQ] = ACTIONS(1507),
    [anon_sym_LT_LT_EQ] = ACTIONS(1507),
    [anon_sym_GT_GT_EQ] = ACTIONS(1507),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1507),
    [anon_sym_GT] = ACTIONS(1509),
    [anon_sym_LT] = ACTIONS(1509),
    [anon_sym_EQ_EQ] = ACTIONS(1511),
    [anon_sym_GT_EQ] = ACTIONS(1511),
    [anon_sym_LT_EQ] = ACTIONS(1511),
    [anon_sym_BANG_EQ] = ACTIONS(1511),
    [anon_sym_AMP_AMP] = ACTIONS(1887),
    [anon_sym_PIPE_PIPE] = ACTIONS(1889),
    [anon_sym_PLUS] = ACTIONS(1891),
    [anon_sym_DASH] = ACTIONS(1891),
    [anon_sym_STAR] = ACTIONS(1893),
    [anon_sym_SLASH] = ACTIONS(1893),
    [anon_sym_AMP] = ACTIONS(1513),
    [anon_sym_PIPE] = ACTIONS(1895),
    [anon_sym_CARET] = ACTIONS(1895),
    [anon_sym_PERCENT] = ACTIONS(1893),
    [anon_sym_LT_LT] = ACTIONS(1893),
    [anon_sym_GT_GT] = ACTIONS(1893),
    [anon_sym_GT_GT_GT] = ACTIONS(1893),
    [anon_sym_RPAREN] = ACTIONS(1897),
    [anon_sym_COMMA] = ACTIONS(1899),
    [anon_sym_QMARK] = ACTIONS(1901),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [825] = {
    [anon_sym_RPAREN] = ACTIONS(1903),
    [sym_comment] = ACTIONS(50),
  },
  [826] = {
    [anon_sym_DOT] = ACTIONS(1905),
    [anon_sym_LBRACK] = ACTIONS(1905),
    [anon_sym_COLON_COLON] = ACTIONS(1905),
    [sym_comment] = ACTIONS(50),
  },
  [827] = {
    [anon_sym_DOT] = ACTIONS(1907),
    [anon_sym_LBRACK] = ACTIONS(1907),
    [anon_sym_COLON_COLON] = ACTIONS(1907),
    [sym_comment] = ACTIONS(50),
  },
  [828] = {
    [sym_identifier] = ACTIONS(1909),
    [sym_comment] = ACTIONS(50),
  },
  [829] = {
    [aux_sym_type_arguments_repeat1] = STATE(987),
    [anon_sym_GT] = ACTIONS(1911),
    [anon_sym_COMMA] = ACTIONS(1435),
    [sym_comment] = ACTIONS(50),
  },
  [830] = {
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [aux_sym_class_or_interface_type_repeat1] = STATE(989),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(1913),
    [sym_comment] = ACTIONS(50),
  },
  [831] = {
    [anon_sym_LPAREN] = ACTIONS(1915),
    [sym_comment] = ACTIONS(50),
  },
  [832] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(542),
    [anon_sym_LPAREN] = ACTIONS(1915),
    [anon_sym_DOT] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(1046),
    [anon_sym_AT] = ACTIONS(1046),
    [sym_comment] = ACTIONS(50),
  },
  [833] = {
    [anon_sym_LPAREN] = ACTIONS(1917),
    [sym_comment] = ACTIONS(50),
  },
  [834] = {
    [sym_type_arguments] = STATE(831),
    [sym_type_arguments_or_diamond] = STATE(991),
    [anon_sym_LT] = ACTIONS(1635),
    [anon_sym_LPAREN] = ACTIONS(1917),
    [anon_sym_DOT] = ACTIONS(1919),
    [anon_sym_LT_GT] = ACTIONS(1641),
    [sym_comment] = ACTIONS(50),
  },
  [835] = {
    [sym_type_arguments] = STATE(831),
    [sym_type_arguments_or_diamond] = STATE(833),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(834),
    [anon_sym_LT] = ACTIONS(1635),
    [anon_sym_LPAREN] = ACTIONS(1637),
    [anon_sym_DOT] = ACTIONS(1921),
    [anon_sym_LT_GT] = ACTIONS(1641),
    [sym_comment] = ACTIONS(50),
  },
  [836] = {
    [anon_sym_LPAREN] = ACTIONS(1923),
    [sym_comment] = ACTIONS(50),
  },
  [837] = {
    [sym__annotation] = STATE(328),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(1925),
    [sym_comment] = ACTIONS(50),
  },
  [838] = {
    [sym_array_initializer] = STATE(996),
    [anon_sym_LBRACE] = ACTIONS(1927),
    [sym_comment] = ACTIONS(50),
  },
  [839] = {
    [sym_dims] = STATE(996),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [aux_sym_class_or_interface_type_repeat1] = STATE(101),
    [aux_sym_dims_repeat1] = STATE(102),
    [anon_sym_DOT] = ACTIONS(1929),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_COLON_COLON] = ACTIONS(1929),
    [sym_comment] = ACTIONS(50),
  },
  [840] = {
    [sym__expression] = STATE(824),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym_argument_list] = STATE(998),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(1931),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [841] = {
    [sym_type_arguments] = STATE(999),
    [sym_type_arguments_or_diamond] = STATE(991),
    [aux_sym_class_or_interface_type_repeat2] = STATE(542),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(1000),
    [anon_sym_LT] = ACTIONS(1635),
    [anon_sym_LPAREN] = ACTIONS(1917),
    [anon_sym_DOT] = ACTIONS(1639),
    [anon_sym_LBRACK] = ACTIONS(1046),
    [anon_sym_AT] = ACTIONS(1046),
    [anon_sym_LT_GT] = ACTIONS(1641),
    [sym_comment] = ACTIONS(50),
  },
  [842] = {
    [sym__expression] = STATE(824),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym_argument_list] = STATE(1001),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(1903),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [843] = {
    [sym__expression] = STATE(56),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1651),
    [anon_sym_TILDE] = ACTIONS(1651),
    [anon_sym_PLUS_PLUS] = ACTIONS(1653),
    [anon_sym_DASH_DASH] = ACTIONS(1653),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [844] = {
    [sym__expression] = STATE(57),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1651),
    [anon_sym_TILDE] = ACTIONS(1651),
    [anon_sym_PLUS_PLUS] = ACTIONS(1653),
    [anon_sym_DASH_DASH] = ACTIONS(1653),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [845] = {
    [anon_sym_EQ] = ACTIONS(1933),
    [anon_sym_PLUS_EQ] = ACTIONS(1935),
    [anon_sym_DASH_EQ] = ACTIONS(1935),
    [anon_sym_STAR_EQ] = ACTIONS(1935),
    [anon_sym_SLASH_EQ] = ACTIONS(1935),
    [anon_sym_AMP_EQ] = ACTIONS(1935),
    [anon_sym_PIPE_EQ] = ACTIONS(1935),
    [anon_sym_CARET_EQ] = ACTIONS(1935),
    [anon_sym_PERCENT_EQ] = ACTIONS(1935),
    [anon_sym_LT_LT_EQ] = ACTIONS(1935),
    [anon_sym_GT_GT_EQ] = ACTIONS(1935),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1935),
    [anon_sym_GT] = ACTIONS(1937),
    [anon_sym_LT] = ACTIONS(1937),
    [anon_sym_EQ_EQ] = ACTIONS(1939),
    [anon_sym_GT_EQ] = ACTIONS(1939),
    [anon_sym_LT_EQ] = ACTIONS(1939),
    [anon_sym_BANG_EQ] = ACTIONS(1939),
    [anon_sym_AMP_AMP] = ACTIONS(1941),
    [anon_sym_PIPE_PIPE] = ACTIONS(1943),
    [anon_sym_PLUS] = ACTIONS(1945),
    [anon_sym_DASH] = ACTIONS(1945),
    [anon_sym_STAR] = ACTIONS(1947),
    [anon_sym_SLASH] = ACTIONS(1947),
    [anon_sym_AMP] = ACTIONS(1949),
    [anon_sym_PIPE] = ACTIONS(1951),
    [anon_sym_CARET] = ACTIONS(1951),
    [anon_sym_PERCENT] = ACTIONS(1947),
    [anon_sym_LT_LT] = ACTIONS(1947),
    [anon_sym_GT_GT] = ACTIONS(1947),
    [anon_sym_GT_GT_GT] = ACTIONS(1947),
    [anon_sym_QMARK] = ACTIONS(1953),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(1955),
    [sym_comment] = ACTIONS(50),
  },
  [846] = {
    [anon_sym_new] = ACTIONS(1957),
    [sym_comment] = ACTIONS(50),
  },
  [847] = {
    [anon_sym_DOT] = ACTIONS(1929),
    [anon_sym_COLON_COLON] = ACTIONS(1929),
    [sym_comment] = ACTIONS(50),
  },
  [848] = {
    [sym__expression] = STATE(845),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1651),
    [anon_sym_TILDE] = ACTIONS(1651),
    [anon_sym_PLUS_PLUS] = ACTIONS(1653),
    [anon_sym_DASH_DASH] = ACTIONS(1653),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [849] = {
    [anon_sym_DOT] = ACTIONS(1959),
    [anon_sym_LBRACK] = ACTIONS(1959),
    [anon_sym_AT] = ACTIONS(1959),
    [anon_sym_COLON_COLON] = ACTIONS(1959),
    [sym_comment] = ACTIONS(50),
  },
  [850] = {
    [sym__annotation] = STATE(83),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [anon_sym_LBRACK] = ACTIONS(1961),
    [anon_sym_AT] = ACTIONS(193),
    [sym_comment] = ACTIONS(50),
  },
  [851] = {
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym_dims_expr] = STATE(1011),
    [aux_sym_class_or_interface_type_repeat1] = STATE(850),
    [anon_sym_DOT] = ACTIONS(1963),
    [anon_sym_LBRACK] = ACTIONS(1663),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_COLON_COLON] = ACTIONS(1963),
    [sym_comment] = ACTIONS(50),
  },
  [852] = {
    [sym__expression] = STATE(1012),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1651),
    [anon_sym_TILDE] = ACTIONS(1651),
    [anon_sym_PLUS_PLUS] = ACTIONS(1653),
    [anon_sym_DASH_DASH] = ACTIONS(1653),
    [anon_sym_RBRACK] = ACTIONS(572),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [853] = {
    [anon_sym_DOT] = ACTIONS(1965),
    [anon_sym_COLON_COLON] = ACTIONS(1967),
    [sym_comment] = ACTIONS(50),
  },
  [854] = {
    [anon_sym_LPAREN] = ACTIONS(1969),
    [anon_sym_DOT] = ACTIONS(614),
    [anon_sym_LBRACK] = ACTIONS(614),
    [sym_comment] = ACTIONS(50),
  },
  [855] = {
    [sym_identifier] = ACTIONS(1971),
    [sym_comment] = ACTIONS(50),
  },
  [856] = {
    [sym__semicolon] = ACTIONS(1973),
    [anon_sym_LT] = ACTIONS(1973),
    [anon_sym_LBRACE] = ACTIONS(1973),
    [anon_sym_RBRACE] = ACTIONS(1973),
    [anon_sym_AT] = ACTIONS(1973),
    [anon_sym_static] = ACTIONS(1975),
    [anon_sym_class] = ACTIONS(1975),
    [anon_sym_public] = ACTIONS(1975),
    [anon_sym_protected] = ACTIONS(1975),
    [anon_sym_private] = ACTIONS(1975),
    [anon_sym_abstract] = ACTIONS(1975),
    [anon_sym_final] = ACTIONS(1975),
    [anon_sym_strictfp] = ACTIONS(1975),
    [anon_sym_default] = ACTIONS(1975),
    [anon_sym_interface] = ACTIONS(1975),
    [sym_identifier] = ACTIONS(1977),
    [sym_comment] = ACTIONS(50),
  },
  [857] = {
    [sym_type_argument] = STATE(1017),
    [sym_reference_type] = STATE(534),
    [sym_class_or_interface_type] = STATE(535),
    [sym_primitive_type] = STATE(536),
    [sym_integral_type] = STATE(531),
    [sym_floating_point_type] = STATE(531),
    [sym__annotation] = STATE(537),
    [sym_normal_annotation] = STATE(538),
    [sym_marker_annotation] = STATE(538),
    [sym_single_element_annotation] = STATE(538),
    [aux_sym_class_or_interface_type_repeat1] = STATE(539),
    [anon_sym_boolean] = ACTIONS(1038),
    [anon_sym_byte] = ACTIONS(992),
    [anon_sym_short] = ACTIONS(992),
    [anon_sym_int] = ACTIONS(992),
    [anon_sym_long] = ACTIONS(992),
    [anon_sym_char] = ACTIONS(992),
    [anon_sym_float] = ACTIONS(994),
    [anon_sym_double] = ACTIONS(994),
    [anon_sym_AT] = ACTIONS(1040),
    [sym_identifier] = ACTIONS(1042),
    [sym_comment] = ACTIONS(50),
  },
  [858] = {
    [anon_sym_LPAREN] = ACTIONS(1979),
    [sym_comment] = ACTIONS(50),
  },
  [859] = {
    [sym_type_arguments] = STATE(667),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [sym_class_or_interface_type_to_instantiate] = STATE(670),
    [aux_sym_class_or_interface_type_repeat1] = STATE(837),
    [anon_sym_LT] = ACTIONS(1373),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(1643),
    [sym_comment] = ACTIONS(50),
  },
  [860] = {
    [anon_sym_LPAREN] = ACTIONS(1969),
    [anon_sym_DOT] = ACTIONS(1981),
    [anon_sym_LBRACK] = ACTIONS(1981),
    [anon_sym_COLON_COLON] = ACTIONS(1981),
    [sym_comment] = ACTIONS(50),
  },
  [861] = {
    [anon_sym_super] = ACTIONS(1983),
    [sym_identifier] = ACTIONS(1985),
    [sym_comment] = ACTIONS(50),
  },
  [862] = {
    [anon_sym_DOT] = ACTIONS(1987),
    [anon_sym_LBRACK] = ACTIONS(1987),
    [anon_sym_COLON_COLON] = ACTIONS(1987),
    [sym_comment] = ACTIONS(50),
  },
  [863] = {
    [anon_sym_EQ] = ACTIONS(1933),
    [anon_sym_PLUS_EQ] = ACTIONS(1935),
    [anon_sym_DASH_EQ] = ACTIONS(1935),
    [anon_sym_STAR_EQ] = ACTIONS(1935),
    [anon_sym_SLASH_EQ] = ACTIONS(1935),
    [anon_sym_AMP_EQ] = ACTIONS(1935),
    [anon_sym_PIPE_EQ] = ACTIONS(1935),
    [anon_sym_CARET_EQ] = ACTIONS(1935),
    [anon_sym_PERCENT_EQ] = ACTIONS(1935),
    [anon_sym_LT_LT_EQ] = ACTIONS(1935),
    [anon_sym_GT_GT_EQ] = ACTIONS(1935),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1935),
    [anon_sym_GT] = ACTIONS(1937),
    [anon_sym_LT] = ACTIONS(1937),
    [anon_sym_EQ_EQ] = ACTIONS(1939),
    [anon_sym_GT_EQ] = ACTIONS(1939),
    [anon_sym_LT_EQ] = ACTIONS(1939),
    [anon_sym_BANG_EQ] = ACTIONS(1939),
    [anon_sym_AMP_AMP] = ACTIONS(1941),
    [anon_sym_PIPE_PIPE] = ACTIONS(1943),
    [anon_sym_PLUS] = ACTIONS(1945),
    [anon_sym_DASH] = ACTIONS(1945),
    [anon_sym_STAR] = ACTIONS(1947),
    [anon_sym_SLASH] = ACTIONS(1947),
    [anon_sym_AMP] = ACTIONS(1949),
    [anon_sym_PIPE] = ACTIONS(1951),
    [anon_sym_CARET] = ACTIONS(1951),
    [anon_sym_PERCENT] = ACTIONS(1947),
    [anon_sym_LT_LT] = ACTIONS(1947),
    [anon_sym_GT_GT] = ACTIONS(1947),
    [anon_sym_GT_GT_GT] = ACTIONS(1947),
    [anon_sym_QMARK] = ACTIONS(1953),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(1989),
    [sym_comment] = ACTIONS(50),
  },
  [864] = {
    [anon_sym_LPAREN] = ACTIONS(1969),
    [anon_sym_DOT] = ACTIONS(1905),
    [anon_sym_LBRACK] = ACTIONS(1905),
    [anon_sym_COLON_COLON] = ACTIONS(1905),
    [sym_comment] = ACTIONS(50),
  },
  [865] = {
    [anon_sym_DOT] = ACTIONS(1991),
    [anon_sym_LBRACK] = ACTIONS(1991),
    [anon_sym_COLON_COLON] = ACTIONS(1991),
    [sym_comment] = ACTIONS(50),
  },
  [866] = {
    [anon_sym_RPAREN] = ACTIONS(1993),
    [sym_comment] = ACTIONS(50),
  },
  [867] = {
    [sym_type_arguments] = STATE(1022),
    [anon_sym_LT] = ACTIONS(1373),
    [anon_sym_DOT] = ACTIONS(1443),
    [anon_sym_AT] = ACTIONS(1443),
    [sym_identifier] = ACTIONS(1995),
    [sym_comment] = ACTIONS(50),
  },
  [868] = {
    [sym__annotation] = STATE(328),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(1997),
    [sym_comment] = ACTIONS(50),
  },
  [869] = {
    [anon_sym_DOT] = ACTIONS(1701),
    [anon_sym_AT] = ACTIONS(1447),
    [sym_identifier] = ACTIONS(1999),
    [sym_comment] = ACTIONS(50),
  },
  [870] = {
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [aux_sym_class_or_interface_type_repeat1] = STATE(1024),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(1997),
    [sym_comment] = ACTIONS(50),
  },
  [871] = {
    [sym__semicolon] = ACTIONS(2001),
    [anon_sym_COMMA] = ACTIONS(2001),
    [anon_sym_LBRACE] = ACTIONS(2001),
    [sym_comment] = ACTIONS(50),
  },
  [872] = {
    [sym__semicolon] = ACTIONS(2003),
    [anon_sym_COMMA] = ACTIONS(2003),
    [anon_sym_LBRACE] = ACTIONS(2003),
    [sym_comment] = ACTIONS(50),
  },
  [873] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(1025),
    [anon_sym_DOT] = ACTIONS(1409),
    [anon_sym_AT] = ACTIONS(1447),
    [sym_identifier] = ACTIONS(1999),
    [sym_comment] = ACTIONS(50),
  },
  [874] = {
    [sym__semicolon] = ACTIONS(1138),
    [anon_sym_LT] = ACTIONS(1138),
    [anon_sym_LBRACE] = ACTIONS(1138),
    [anon_sym_RBRACE] = ACTIONS(1138),
    [anon_sym_AT] = ACTIONS(1138),
    [anon_sym_static] = ACTIONS(1140),
    [anon_sym_class] = ACTIONS(1140),
    [anon_sym_public] = ACTIONS(1140),
    [anon_sym_protected] = ACTIONS(1140),
    [anon_sym_private] = ACTIONS(1140),
    [anon_sym_abstract] = ACTIONS(1140),
    [anon_sym_final] = ACTIONS(1140),
    [anon_sym_strictfp] = ACTIONS(1140),
    [anon_sym_default] = ACTIONS(1140),
    [anon_sym_interface] = ACTIONS(1140),
    [sym_identifier] = ACTIONS(1142),
    [sym_comment] = ACTIONS(50),
  },
  [875] = {
    [sym_super_interfaces] = STATE(1026),
    [sym_class_body] = STATE(974),
    [anon_sym_LBRACE] = ACTIONS(978),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [876] = {
    [sym_interface_body] = STATE(1027),
    [anon_sym_LBRACE] = ACTIONS(980),
    [sym_comment] = ACTIONS(50),
  },
  [877] = {
    [sym__literal] = STATE(1030),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(1031),
    [sym_element_value_pair] = STATE(187),
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
    [anon_sym_RPAREN] = ACTIONS(2005),
    [sym_identifier] = ACTIONS(2007),
    [sym_comment] = ACTIONS(50),
  },
  [878] = {
    [sym_identifier] = ACTIONS(2009),
    [sym_comment] = ACTIONS(50),
  },
  [879] = {
    [anon_sym_GT] = ACTIONS(2011),
    [anon_sym_COMMA] = ACTIONS(2011),
    [sym_comment] = ACTIONS(50),
  },
  [880] = {
    [anon_sym_GT] = ACTIONS(2013),
    [anon_sym_AMP] = ACTIONS(2013),
    [anon_sym_LPAREN] = ACTIONS(2013),
    [anon_sym_COMMA] = ACTIONS(2013),
    [anon_sym_LBRACE] = ACTIONS(2013),
    [anon_sym_DOT] = ACTIONS(2013),
    [anon_sym_LBRACK] = ACTIONS(2013),
    [anon_sym_AT] = ACTIONS(2013),
    [anon_sym_implements] = ACTIONS(2013),
    [anon_sym_this] = ACTIONS(2013),
    [anon_sym_super] = ACTIONS(2013),
    [anon_sym_new] = ACTIONS(2013),
    [anon_sym_COLON_COLON] = ACTIONS(2013),
    [sym_comment] = ACTIONS(50),
  },
  [881] = {
    [sym_type_argument] = STATE(1033),
    [sym_reference_type] = STATE(534),
    [sym_class_or_interface_type] = STATE(535),
    [sym_primitive_type] = STATE(536),
    [sym_integral_type] = STATE(531),
    [sym_floating_point_type] = STATE(531),
    [sym__annotation] = STATE(537),
    [sym_normal_annotation] = STATE(538),
    [sym_marker_annotation] = STATE(538),
    [sym_single_element_annotation] = STATE(538),
    [aux_sym_class_or_interface_type_repeat1] = STATE(539),
    [anon_sym_boolean] = ACTIONS(1038),
    [anon_sym_byte] = ACTIONS(992),
    [anon_sym_short] = ACTIONS(992),
    [anon_sym_int] = ACTIONS(992),
    [anon_sym_long] = ACTIONS(992),
    [anon_sym_char] = ACTIONS(992),
    [anon_sym_float] = ACTIONS(994),
    [anon_sym_double] = ACTIONS(994),
    [anon_sym_AT] = ACTIONS(1040),
    [sym_identifier] = ACTIONS(1042),
    [sym_comment] = ACTIONS(50),
  },
  [882] = {
    [anon_sym_GT] = ACTIONS(2015),
    [anon_sym_AMP] = ACTIONS(2015),
    [anon_sym_COMMA] = ACTIONS(2015),
    [anon_sym_LBRACE] = ACTIONS(2015),
    [anon_sym_DOT] = ACTIONS(2015),
    [anon_sym_LBRACK] = ACTIONS(2015),
    [anon_sym_AT] = ACTIONS(2015),
    [anon_sym_implements] = ACTIONS(2015),
    [anon_sym_COLON_COLON] = ACTIONS(2015),
    [sym_comment] = ACTIONS(50),
  },
  [883] = {
    [sym_type_arguments] = STATE(1034),
    [anon_sym_GT] = ACTIONS(2015),
    [anon_sym_LT] = ACTIONS(722),
    [anon_sym_AMP] = ACTIONS(2015),
    [anon_sym_COMMA] = ACTIONS(2015),
    [anon_sym_LBRACE] = ACTIONS(2015),
    [anon_sym_DOT] = ACTIONS(2015),
    [anon_sym_LBRACK] = ACTIONS(2015),
    [anon_sym_AT] = ACTIONS(2015),
    [anon_sym_implements] = ACTIONS(2015),
    [anon_sym_COLON_COLON] = ACTIONS(2015),
    [sym_comment] = ACTIONS(50),
  },
  [884] = {
    [sym__semicolon] = ACTIONS(846),
    [anon_sym_LT] = ACTIONS(846),
    [anon_sym_RBRACE] = ACTIONS(846),
    [anon_sym_AT] = ACTIONS(846),
    [anon_sym_static] = ACTIONS(848),
    [anon_sym_class] = ACTIONS(848),
    [anon_sym_public] = ACTIONS(848),
    [anon_sym_protected] = ACTIONS(848),
    [anon_sym_private] = ACTIONS(848),
    [anon_sym_abstract] = ACTIONS(848),
    [anon_sym_final] = ACTIONS(848),
    [anon_sym_strictfp] = ACTIONS(848),
    [anon_sym_default] = ACTIONS(848),
    [anon_sym_void] = ACTIONS(848),
    [anon_sym_interface] = ACTIONS(848),
    [sym_identifier] = ACTIONS(850),
    [sym_comment] = ACTIONS(50),
  },
  [885] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(216),
    [sym_marker_annotation] = STATE(216),
    [sym_single_element_annotation] = STATE(216),
    [sym_class_declaration] = STATE(294),
    [sym_normal_class_declaration] = STATE(217),
    [sym_modifier] = STATE(32),
    [sym_interface_declaration] = STATE(294),
    [sym_annotation_type_declaration] = STATE(222),
    [sym_annotation_type_member_declaration] = STATE(431),
    [sym_annotation_type_element_declaration] = STATE(294),
    [sym_normal_interface_declaration] = STATE(222),
    [sym_constant_declaration] = STATE(294),
    [sym_variable_declarator_list] = STATE(296),
    [sym_variable_declarator] = STATE(247),
    [sym_variable_declarator_id] = STATE(96),
    [aux_sym_normal_class_declaration_repeat1] = STATE(297),
    [anon_sym_RBRACE] = ACTIONS(2017),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(460),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(462),
    [sym_identifier] = ACTIONS(594),
    [sym_comment] = ACTIONS(50),
  },
  [886] = {
    [anon_sym_LT] = ACTIONS(878),
    [anon_sym_AT] = ACTIONS(878),
    [anon_sym_static] = ACTIONS(1144),
    [anon_sym_class] = ACTIONS(1144),
    [anon_sym_public] = ACTIONS(1144),
    [anon_sym_protected] = ACTIONS(1144),
    [anon_sym_private] = ACTIONS(1144),
    [anon_sym_abstract] = ACTIONS(1144),
    [anon_sym_final] = ACTIONS(1144),
    [anon_sym_strictfp] = ACTIONS(1144),
    [anon_sym_default] = ACTIONS(1144),
    [anon_sym_void] = ACTIONS(1144),
    [anon_sym_interface] = ACTIONS(1144),
    [sym_identifier] = ACTIONS(1146),
    [sym_comment] = ACTIONS(50),
  },
  [887] = {
    [anon_sym_LT] = ACTIONS(880),
    [anon_sym_AT] = ACTIONS(880),
    [anon_sym_static] = ACTIONS(1148),
    [anon_sym_class] = ACTIONS(1148),
    [anon_sym_public] = ACTIONS(1148),
    [anon_sym_protected] = ACTIONS(1148),
    [anon_sym_private] = ACTIONS(1148),
    [anon_sym_abstract] = ACTIONS(1148),
    [anon_sym_final] = ACTIONS(1148),
    [anon_sym_strictfp] = ACTIONS(1148),
    [anon_sym_default] = ACTIONS(1148),
    [anon_sym_void] = ACTIONS(1148),
    [anon_sym_interface] = ACTIONS(1148),
    [sym_identifier] = ACTIONS(1150),
    [sym_comment] = ACTIONS(50),
  },
  [888] = {
    [sym__semicolon] = ACTIONS(1026),
    [anon_sym_LT] = ACTIONS(1026),
    [anon_sym_RBRACE] = ACTIONS(1026),
    [anon_sym_AT] = ACTIONS(1026),
    [anon_sym_static] = ACTIONS(1028),
    [anon_sym_class] = ACTIONS(1028),
    [anon_sym_public] = ACTIONS(1028),
    [anon_sym_protected] = ACTIONS(1028),
    [anon_sym_private] = ACTIONS(1028),
    [anon_sym_abstract] = ACTIONS(1028),
    [anon_sym_final] = ACTIONS(1028),
    [anon_sym_strictfp] = ACTIONS(1028),
    [anon_sym_default] = ACTIONS(1028),
    [anon_sym_void] = ACTIONS(1028),
    [anon_sym_interface] = ACTIONS(1028),
    [sym_identifier] = ACTIONS(1030),
    [sym_comment] = ACTIONS(50),
  },
  [889] = {
    [sym_class_body] = STATE(1036),
    [anon_sym_LBRACE] = ACTIONS(1066),
    [sym_comment] = ACTIONS(50),
  },
  [890] = {
    [sym__semicolon] = ACTIONS(1054),
    [anon_sym_LT] = ACTIONS(1054),
    [anon_sym_RBRACE] = ACTIONS(1054),
    [anon_sym_AT] = ACTIONS(1054),
    [anon_sym_static] = ACTIONS(1056),
    [anon_sym_class] = ACTIONS(1056),
    [anon_sym_public] = ACTIONS(1056),
    [anon_sym_protected] = ACTIONS(1056),
    [anon_sym_private] = ACTIONS(1056),
    [anon_sym_abstract] = ACTIONS(1056),
    [anon_sym_final] = ACTIONS(1056),
    [anon_sym_strictfp] = ACTIONS(1056),
    [anon_sym_default] = ACTIONS(1056),
    [anon_sym_void] = ACTIONS(1056),
    [anon_sym_interface] = ACTIONS(1056),
    [sym_identifier] = ACTIONS(1058),
    [sym_comment] = ACTIONS(50),
  },
  [891] = {
    [sym__semicolon] = ACTIONS(1106),
    [anon_sym_LT] = ACTIONS(1106),
    [anon_sym_RBRACE] = ACTIONS(1106),
    [anon_sym_AT] = ACTIONS(1106),
    [anon_sym_static] = ACTIONS(1108),
    [anon_sym_class] = ACTIONS(1108),
    [anon_sym_public] = ACTIONS(1108),
    [anon_sym_protected] = ACTIONS(1108),
    [anon_sym_private] = ACTIONS(1108),
    [anon_sym_abstract] = ACTIONS(1108),
    [anon_sym_final] = ACTIONS(1108),
    [anon_sym_strictfp] = ACTIONS(1108),
    [anon_sym_default] = ACTIONS(1108),
    [anon_sym_void] = ACTIONS(1108),
    [anon_sym_interface] = ACTIONS(1108),
    [sym_identifier] = ACTIONS(1110),
    [sym_comment] = ACTIONS(50),
  },
  [892] = {
    [sym__semicolon] = ACTIONS(1118),
    [anon_sym_LT] = ACTIONS(1118),
    [anon_sym_RBRACE] = ACTIONS(1118),
    [anon_sym_AT] = ACTIONS(1118),
    [anon_sym_static] = ACTIONS(1120),
    [anon_sym_class] = ACTIONS(1120),
    [anon_sym_public] = ACTIONS(1120),
    [anon_sym_protected] = ACTIONS(1120),
    [anon_sym_private] = ACTIONS(1120),
    [anon_sym_abstract] = ACTIONS(1120),
    [anon_sym_final] = ACTIONS(1120),
    [anon_sym_strictfp] = ACTIONS(1120),
    [anon_sym_default] = ACTIONS(1120),
    [anon_sym_void] = ACTIONS(1120),
    [anon_sym_interface] = ACTIONS(1120),
    [sym_identifier] = ACTIONS(1122),
    [sym_comment] = ACTIONS(50),
  },
  [893] = {
    [sym__semicolon] = ACTIONS(2019),
    [anon_sym_LBRACE] = ACTIONS(2019),
    [sym_comment] = ACTIONS(50),
  },
  [894] = {
    [sym__semicolon] = ACTIONS(2021),
    [anon_sym_LBRACE] = ACTIONS(2021),
    [anon_sym_throws] = ACTIONS(2021),
    [sym_comment] = ACTIONS(50),
  },
  [895] = {
    [sym_dims] = STATE(1037),
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [aux_sym_class_or_interface_type_repeat1] = STATE(101),
    [aux_sym_dims_repeat1] = STATE(102),
    [sym__semicolon] = ACTIONS(2021),
    [anon_sym_LBRACE] = ACTIONS(2021),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_throws] = ACTIONS(2021),
    [sym_comment] = ACTIONS(50),
  },
  [896] = {
    [sym__semicolon] = ACTIONS(1138),
    [anon_sym_LT] = ACTIONS(1138),
    [anon_sym_RBRACE] = ACTIONS(1138),
    [anon_sym_AT] = ACTIONS(1138),
    [anon_sym_static] = ACTIONS(1140),
    [anon_sym_class] = ACTIONS(1140),
    [anon_sym_public] = ACTIONS(1140),
    [anon_sym_protected] = ACTIONS(1140),
    [anon_sym_private] = ACTIONS(1140),
    [anon_sym_abstract] = ACTIONS(1140),
    [anon_sym_final] = ACTIONS(1140),
    [anon_sym_strictfp] = ACTIONS(1140),
    [anon_sym_default] = ACTIONS(1140),
    [anon_sym_void] = ACTIONS(1140),
    [anon_sym_interface] = ACTIONS(1140),
    [sym_identifier] = ACTIONS(1142),
    [sym_comment] = ACTIONS(50),
  },
  [897] = {
    [sym_super_interfaces] = STATE(1038),
    [sym_class_body] = STATE(1036),
    [anon_sym_LBRACE] = ACTIONS(1066),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [898] = {
    [sym_interface_body] = STATE(1039),
    [anon_sym_LBRACE] = ACTIONS(1068),
    [sym_comment] = ACTIONS(50),
  },
  [899] = {
    [sym__expression] = STATE(1040),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(28),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_PLUS_PLUS] = ACTIONS(30),
    [anon_sym_DASH_DASH] = ACTIONS(30),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [900] = {
    [sym__semicolon] = ACTIONS(2023),
    [sym_comment] = ACTIONS(50),
  },
  [901] = {
    [sym__semicolon] = ACTIONS(1200),
    [anon_sym_PIPE_PIPE] = ACTIONS(2025),
    [anon_sym_QMARK] = ACTIONS(2027),
    [sym_comment] = ACTIONS(50),
  },
  [902] = {
    [sym__semicolon] = ACTIONS(1206),
    [anon_sym_AMP_AMP] = ACTIONS(2029),
    [anon_sym_PIPE_PIPE] = ACTIONS(1206),
    [anon_sym_QMARK] = ACTIONS(1206),
    [sym_comment] = ACTIONS(50),
  },
  [903] = {
    [sym__semicolon] = ACTIONS(1208),
    [anon_sym_AMP_AMP] = ACTIONS(1208),
    [anon_sym_PIPE_PIPE] = ACTIONS(1208),
    [anon_sym_PIPE] = ACTIONS(2031),
    [anon_sym_QMARK] = ACTIONS(1208),
    [sym_comment] = ACTIONS(50),
  },
  [904] = {
    [sym__semicolon] = ACTIONS(1212),
    [anon_sym_AMP_AMP] = ACTIONS(1212),
    [anon_sym_PIPE_PIPE] = ACTIONS(1212),
    [anon_sym_PIPE] = ACTIONS(1214),
    [anon_sym_CARET] = ACTIONS(2033),
    [anon_sym_QMARK] = ACTIONS(1212),
    [sym_comment] = ACTIONS(50),
  },
  [905] = {
    [sym__semicolon] = ACTIONS(1226),
    [anon_sym_LT] = ACTIONS(2035),
    [anon_sym_EQ_EQ] = ACTIONS(1224),
    [anon_sym_BANG_EQ] = ACTIONS(1224),
    [anon_sym_AMP_AMP] = ACTIONS(1226),
    [anon_sym_PIPE_PIPE] = ACTIONS(1226),
    [anon_sym_PIPE] = ACTIONS(1228),
    [anon_sym_CARET] = ACTIONS(1226),
    [anon_sym_QMARK] = ACTIONS(1226),
    [sym_comment] = ACTIONS(50),
  },
  [906] = {
    [anon_sym_EQ_EQ] = ACTIONS(2037),
    [anon_sym_BANG_EQ] = ACTIONS(2037),
    [sym_comment] = ACTIONS(50),
  },
  [907] = {
    [sym__semicolon] = ACTIONS(1234),
    [anon_sym_LT] = ACTIONS(1232),
    [anon_sym_EQ_EQ] = ACTIONS(1234),
    [anon_sym_BANG_EQ] = ACTIONS(1234),
    [anon_sym_AMP_AMP] = ACTIONS(1234),
    [anon_sym_PIPE_PIPE] = ACTIONS(1234),
    [anon_sym_PIPE] = ACTIONS(1232),
    [anon_sym_CARET] = ACTIONS(1234),
    [anon_sym_LT_LT] = ACTIONS(2039),
    [anon_sym_GT_GT] = ACTIONS(2041),
    [anon_sym_GT_GT_GT] = ACTIONS(2039),
    [anon_sym_QMARK] = ACTIONS(1234),
    [sym_comment] = ACTIONS(50),
  },
  [908] = {
    [sym__semicolon] = ACTIONS(1242),
    [anon_sym_LT] = ACTIONS(1240),
    [anon_sym_EQ_EQ] = ACTIONS(1242),
    [anon_sym_BANG_EQ] = ACTIONS(1242),
    [anon_sym_AMP_AMP] = ACTIONS(1242),
    [anon_sym_PIPE_PIPE] = ACTIONS(1242),
    [anon_sym_PLUS] = ACTIONS(2043),
    [anon_sym_DASH] = ACTIONS(2043),
    [anon_sym_PIPE] = ACTIONS(1240),
    [anon_sym_CARET] = ACTIONS(1242),
    [anon_sym_LT_LT] = ACTIONS(1242),
    [anon_sym_GT_GT] = ACTIONS(1240),
    [anon_sym_GT_GT_GT] = ACTIONS(1242),
    [anon_sym_QMARK] = ACTIONS(1242),
    [sym_comment] = ACTIONS(50),
  },
  [909] = {
    [sym__semicolon] = ACTIONS(1248),
    [anon_sym_LT] = ACTIONS(1246),
    [anon_sym_EQ_EQ] = ACTIONS(1248),
    [anon_sym_BANG_EQ] = ACTIONS(1248),
    [anon_sym_AMP_AMP] = ACTIONS(1248),
    [anon_sym_PIPE_PIPE] = ACTIONS(1248),
    [anon_sym_PLUS] = ACTIONS(1248),
    [anon_sym_DASH] = ACTIONS(1248),
    [anon_sym_STAR] = ACTIONS(2045),
    [anon_sym_SLASH] = ACTIONS(2047),
    [anon_sym_PIPE] = ACTIONS(1246),
    [anon_sym_CARET] = ACTIONS(1248),
    [anon_sym_PERCENT] = ACTIONS(2045),
    [anon_sym_LT_LT] = ACTIONS(1248),
    [anon_sym_GT_GT] = ACTIONS(1246),
    [anon_sym_GT_GT_GT] = ACTIONS(1248),
    [anon_sym_QMARK] = ACTIONS(1248),
    [sym_comment] = ACTIONS(50),
  },
  [910] = {
    [anon_sym_RBRACE] = ACTIONS(2049),
    [anon_sym_AT] = ACTIONS(2049),
    [anon_sym_static] = ACTIONS(2051),
    [anon_sym_class] = ACTIONS(2051),
    [anon_sym_public] = ACTIONS(2051),
    [anon_sym_protected] = ACTIONS(2051),
    [anon_sym_private] = ACTIONS(2051),
    [anon_sym_abstract] = ACTIONS(2051),
    [anon_sym_final] = ACTIONS(2051),
    [anon_sym_strictfp] = ACTIONS(2051),
    [anon_sym_default] = ACTIONS(2051),
    [anon_sym_interface] = ACTIONS(2051),
    [sym_identifier] = ACTIONS(2053),
    [sym_comment] = ACTIONS(50),
  },
  [911] = {
    [sym__semicolon] = ACTIONS(2055),
    [sym_comment] = ACTIONS(50),
  },
  [912] = {
    [sym_default_value] = STATE(1052),
    [sym__semicolon] = ACTIONS(2055),
    [anon_sym_default] = ACTIONS(1501),
    [sym_comment] = ACTIONS(50),
  },
  [913] = {
    [anon_sym_EQ] = ACTIONS(496),
    [anon_sym_PLUS_EQ] = ACTIONS(494),
    [anon_sym_DASH_EQ] = ACTIONS(494),
    [anon_sym_STAR_EQ] = ACTIONS(494),
    [anon_sym_SLASH_EQ] = ACTIONS(494),
    [anon_sym_AMP_EQ] = ACTIONS(494),
    [anon_sym_PIPE_EQ] = ACTIONS(494),
    [anon_sym_CARET_EQ] = ACTIONS(494),
    [anon_sym_PERCENT_EQ] = ACTIONS(494),
    [anon_sym_LT_LT_EQ] = ACTIONS(494),
    [anon_sym_GT_GT_EQ] = ACTIONS(494),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(494),
    [anon_sym_GT] = ACTIONS(1509),
    [anon_sym_LT] = ACTIONS(1509),
    [anon_sym_EQ_EQ] = ACTIONS(1511),
    [anon_sym_GT_EQ] = ACTIONS(1511),
    [anon_sym_LT_EQ] = ACTIONS(1511),
    [anon_sym_BANG_EQ] = ACTIONS(1511),
    [anon_sym_AMP_AMP] = ACTIONS(1887),
    [anon_sym_PIPE_PIPE] = ACTIONS(1889),
    [anon_sym_PLUS] = ACTIONS(1891),
    [anon_sym_DASH] = ACTIONS(1891),
    [anon_sym_STAR] = ACTIONS(1893),
    [anon_sym_SLASH] = ACTIONS(1893),
    [anon_sym_AMP] = ACTIONS(1513),
    [anon_sym_PIPE] = ACTIONS(1895),
    [anon_sym_CARET] = ACTIONS(1895),
    [anon_sym_PERCENT] = ACTIONS(1893),
    [anon_sym_LT_LT] = ACTIONS(1893),
    [anon_sym_GT_GT] = ACTIONS(1893),
    [anon_sym_GT_GT_GT] = ACTIONS(1893),
    [anon_sym_RPAREN] = ACTIONS(494),
    [anon_sym_COMMA] = ACTIONS(494),
    [anon_sym_QMARK] = ACTIONS(1901),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [914] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(500),
    [anon_sym_LT] = ACTIONS(500),
    [anon_sym_EQ_EQ] = ACTIONS(498),
    [anon_sym_GT_EQ] = ACTIONS(498),
    [anon_sym_LT_EQ] = ACTIONS(498),
    [anon_sym_BANG_EQ] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(1893),
    [anon_sym_SLASH] = ACTIONS(1893),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(1893),
    [anon_sym_LT_LT] = ACTIONS(1893),
    [anon_sym_GT_GT] = ACTIONS(1893),
    [anon_sym_GT_GT_GT] = ACTIONS(1893),
    [anon_sym_RPAREN] = ACTIONS(498),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [915] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(1509),
    [anon_sym_LT] = ACTIONS(1509),
    [anon_sym_EQ_EQ] = ACTIONS(1511),
    [anon_sym_GT_EQ] = ACTIONS(1511),
    [anon_sym_LT_EQ] = ACTIONS(1511),
    [anon_sym_BANG_EQ] = ACTIONS(1511),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(1891),
    [anon_sym_DASH] = ACTIONS(1891),
    [anon_sym_STAR] = ACTIONS(1893),
    [anon_sym_SLASH] = ACTIONS(1893),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(1893),
    [anon_sym_LT_LT] = ACTIONS(1893),
    [anon_sym_GT_GT] = ACTIONS(1893),
    [anon_sym_GT_GT_GT] = ACTIONS(1893),
    [anon_sym_RPAREN] = ACTIONS(498),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [916] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(1509),
    [anon_sym_LT] = ACTIONS(1509),
    [anon_sym_EQ_EQ] = ACTIONS(1511),
    [anon_sym_GT_EQ] = ACTIONS(1511),
    [anon_sym_LT_EQ] = ACTIONS(1511),
    [anon_sym_BANG_EQ] = ACTIONS(1511),
    [anon_sym_AMP_AMP] = ACTIONS(1887),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(1891),
    [anon_sym_DASH] = ACTIONS(1891),
    [anon_sym_STAR] = ACTIONS(1893),
    [anon_sym_SLASH] = ACTIONS(1893),
    [anon_sym_AMP] = ACTIONS(1513),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(1893),
    [anon_sym_LT_LT] = ACTIONS(1893),
    [anon_sym_GT_GT] = ACTIONS(1893),
    [anon_sym_GT_GT_GT] = ACTIONS(1893),
    [anon_sym_RPAREN] = ACTIONS(498),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [917] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(1509),
    [anon_sym_LT] = ACTIONS(1509),
    [anon_sym_EQ_EQ] = ACTIONS(1511),
    [anon_sym_GT_EQ] = ACTIONS(1511),
    [anon_sym_LT_EQ] = ACTIONS(1511),
    [anon_sym_BANG_EQ] = ACTIONS(1511),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(1893),
    [anon_sym_SLASH] = ACTIONS(1893),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(1893),
    [anon_sym_LT_LT] = ACTIONS(1893),
    [anon_sym_GT_GT] = ACTIONS(1893),
    [anon_sym_GT_GT_GT] = ACTIONS(1893),
    [anon_sym_RPAREN] = ACTIONS(498),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [918] = {
    [anon_sym_EQ] = ACTIONS(502),
    [anon_sym_PLUS_EQ] = ACTIONS(504),
    [anon_sym_DASH_EQ] = ACTIONS(504),
    [anon_sym_STAR_EQ] = ACTIONS(504),
    [anon_sym_SLASH_EQ] = ACTIONS(504),
    [anon_sym_AMP_EQ] = ACTIONS(504),
    [anon_sym_PIPE_EQ] = ACTIONS(504),
    [anon_sym_CARET_EQ] = ACTIONS(504),
    [anon_sym_PERCENT_EQ] = ACTIONS(504),
    [anon_sym_LT_LT_EQ] = ACTIONS(504),
    [anon_sym_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_GT] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [anon_sym_BANG_EQ] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(510),
    [anon_sym_PIPE_PIPE] = ACTIONS(512),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_LT_LT] = ACTIONS(516),
    [anon_sym_GT_GT] = ACTIONS(516),
    [anon_sym_GT_GT_GT] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(522),
    [anon_sym_COLON] = ACTIONS(2057),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [919] = {
    [sym__expression] = STATE(1054),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1517),
    [anon_sym_TILDE] = ACTIONS(1517),
    [anon_sym_PLUS_PLUS] = ACTIONS(1519),
    [anon_sym_DASH_DASH] = ACTIONS(1519),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [920] = {
    [sym__expression] = STATE(1055),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1517),
    [anon_sym_TILDE] = ACTIONS(1517),
    [anon_sym_PLUS_PLUS] = ACTIONS(1519),
    [anon_sym_DASH_DASH] = ACTIONS(1519),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [921] = {
    [sym__expression] = STATE(1056),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1517),
    [anon_sym_TILDE] = ACTIONS(1517),
    [anon_sym_PLUS_PLUS] = ACTIONS(1519),
    [anon_sym_DASH_DASH] = ACTIONS(1519),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [922] = {
    [sym__expression] = STATE(1057),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1517),
    [anon_sym_TILDE] = ACTIONS(1517),
    [anon_sym_PLUS_PLUS] = ACTIONS(1519),
    [anon_sym_DASH_DASH] = ACTIONS(1519),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [923] = {
    [sym__expression] = STATE(1058),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1517),
    [anon_sym_TILDE] = ACTIONS(1517),
    [anon_sym_PLUS_PLUS] = ACTIONS(1519),
    [anon_sym_DASH_DASH] = ACTIONS(1519),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [924] = {
    [sym__expression] = STATE(148),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1517),
    [anon_sym_TILDE] = ACTIONS(1517),
    [anon_sym_PLUS_PLUS] = ACTIONS(1519),
    [anon_sym_DASH_DASH] = ACTIONS(1519),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [925] = {
    [sym__expression] = STATE(1059),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(316),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [926] = {
    [sym__semicolon] = ACTIONS(2059),
    [anon_sym_RPAREN] = ACTIONS(2059),
    [anon_sym_COMMA] = ACTIONS(2059),
    [anon_sym_RBRACE] = ACTIONS(2059),
    [sym_comment] = ACTIONS(50),
  },
  [927] = {
    [anon_sym_COMMA] = ACTIONS(2061),
    [anon_sym_RBRACE] = ACTIONS(2061),
    [sym_comment] = ACTIONS(50),
  },
  [928] = {
    [sym__literal] = STATE(434),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(435),
    [sym__annotation] = STATE(434),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym_element_value] = STATE(1061),
    [sym_element_value_array_initializer] = STATE(434),
    [sym_conditional_expression] = STATE(434),
    [sym_conditional_or_expression] = STATE(592),
    [sym_conditional_and_expression] = STATE(593),
    [sym_inclusive_or_expression] = STATE(594),
    [sym_exclusive_or_expression] = STATE(595),
    [sym_and_expression] = STATE(441),
    [sym_relational_expression] = STATE(596),
    [sym_equality_expression] = STATE(597),
    [sym_shift_expression] = STATE(598),
    [sym_additive_expression] = STATE(599),
    [sym_multiplicative_expression] = STATE(600),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(872),
    [anon_sym_false] = ACTIONS(872),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(1186),
    [anon_sym_TILDE] = ACTIONS(1186),
    [anon_sym_LBRACE] = ACTIONS(876),
    [anon_sym_RBRACE] = ACTIONS(2063),
    [anon_sym_AT] = ACTIONS(193),
    [sym_comment] = ACTIONS(50),
  },
  [929] = {
    [anon_sym_AMP_AMP] = ACTIONS(1529),
    [anon_sym_PIPE_PIPE] = ACTIONS(1797),
    [anon_sym_COMMA] = ACTIONS(1797),
    [anon_sym_QMARK] = ACTIONS(1797),
    [anon_sym_RBRACE] = ACTIONS(1797),
    [sym_comment] = ACTIONS(50),
  },
  [930] = {
    [anon_sym_EQ] = ACTIONS(502),
    [anon_sym_PLUS_EQ] = ACTIONS(504),
    [anon_sym_DASH_EQ] = ACTIONS(504),
    [anon_sym_STAR_EQ] = ACTIONS(504),
    [anon_sym_SLASH_EQ] = ACTIONS(504),
    [anon_sym_AMP_EQ] = ACTIONS(504),
    [anon_sym_PIPE_EQ] = ACTIONS(504),
    [anon_sym_CARET_EQ] = ACTIONS(504),
    [anon_sym_PERCENT_EQ] = ACTIONS(504),
    [anon_sym_LT_LT_EQ] = ACTIONS(504),
    [anon_sym_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_GT] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [anon_sym_BANG_EQ] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(510),
    [anon_sym_PIPE_PIPE] = ACTIONS(512),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_LT_LT] = ACTIONS(516),
    [anon_sym_GT_GT] = ACTIONS(516),
    [anon_sym_GT_GT_GT] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(522),
    [anon_sym_COLON] = ACTIONS(2065),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [931] = {
    [anon_sym_AMP_AMP] = ACTIONS(1801),
    [anon_sym_PIPE_PIPE] = ACTIONS(1801),
    [anon_sym_PIPE] = ACTIONS(1531),
    [anon_sym_COMMA] = ACTIONS(1801),
    [anon_sym_QMARK] = ACTIONS(1801),
    [anon_sym_RBRACE] = ACTIONS(1801),
    [sym_comment] = ACTIONS(50),
  },
  [932] = {
    [anon_sym_AMP_AMP] = ACTIONS(1803),
    [anon_sym_PIPE_PIPE] = ACTIONS(1803),
    [anon_sym_PIPE] = ACTIONS(1805),
    [anon_sym_CARET] = ACTIONS(1533),
    [anon_sym_COMMA] = ACTIONS(1803),
    [anon_sym_QMARK] = ACTIONS(1803),
    [anon_sym_RBRACE] = ACTIONS(1803),
    [sym_comment] = ACTIONS(50),
  },
  [933] = {
    [anon_sym_LT] = ACTIONS(1811),
    [anon_sym_EQ_EQ] = ACTIONS(1813),
    [anon_sym_BANG_EQ] = ACTIONS(1813),
    [anon_sym_AMP_AMP] = ACTIONS(1813),
    [anon_sym_PIPE_PIPE] = ACTIONS(1813),
    [anon_sym_PIPE] = ACTIONS(1811),
    [anon_sym_CARET] = ACTIONS(1813),
    [anon_sym_LT_LT] = ACTIONS(1539),
    [anon_sym_GT_GT] = ACTIONS(1541),
    [anon_sym_GT_GT_GT] = ACTIONS(1539),
    [anon_sym_COMMA] = ACTIONS(1813),
    [anon_sym_QMARK] = ACTIONS(1813),
    [anon_sym_RBRACE] = ACTIONS(1813),
    [sym_comment] = ACTIONS(50),
  },
  [934] = {
    [anon_sym_LT] = ACTIONS(1535),
    [anon_sym_EQ_EQ] = ACTIONS(1815),
    [anon_sym_BANG_EQ] = ACTIONS(1815),
    [anon_sym_AMP_AMP] = ACTIONS(1817),
    [anon_sym_PIPE_PIPE] = ACTIONS(1817),
    [anon_sym_PIPE] = ACTIONS(1819),
    [anon_sym_CARET] = ACTIONS(1817),
    [anon_sym_COMMA] = ACTIONS(1817),
    [anon_sym_QMARK] = ACTIONS(1817),
    [anon_sym_RBRACE] = ACTIONS(1817),
    [sym_comment] = ACTIONS(50),
  },
  [935] = {
    [anon_sym_LT] = ACTIONS(1821),
    [anon_sym_EQ_EQ] = ACTIONS(1823),
    [anon_sym_BANG_EQ] = ACTIONS(1823),
    [anon_sym_AMP_AMP] = ACTIONS(1823),
    [anon_sym_PIPE_PIPE] = ACTIONS(1823),
    [anon_sym_PLUS] = ACTIONS(1543),
    [anon_sym_DASH] = ACTIONS(1543),
    [anon_sym_PIPE] = ACTIONS(1821),
    [anon_sym_CARET] = ACTIONS(1823),
    [anon_sym_LT_LT] = ACTIONS(1823),
    [anon_sym_GT_GT] = ACTIONS(1821),
    [anon_sym_GT_GT_GT] = ACTIONS(1823),
    [anon_sym_COMMA] = ACTIONS(1823),
    [anon_sym_QMARK] = ACTIONS(1823),
    [anon_sym_RBRACE] = ACTIONS(1823),
    [sym_comment] = ACTIONS(50),
  },
  [936] = {
    [anon_sym_LT] = ACTIONS(1825),
    [anon_sym_EQ_EQ] = ACTIONS(1827),
    [anon_sym_BANG_EQ] = ACTIONS(1827),
    [anon_sym_AMP_AMP] = ACTIONS(1827),
    [anon_sym_PIPE_PIPE] = ACTIONS(1827),
    [anon_sym_PLUS] = ACTIONS(1827),
    [anon_sym_DASH] = ACTIONS(1827),
    [anon_sym_STAR] = ACTIONS(1545),
    [anon_sym_SLASH] = ACTIONS(1547),
    [anon_sym_PIPE] = ACTIONS(1825),
    [anon_sym_CARET] = ACTIONS(1827),
    [anon_sym_PERCENT] = ACTIONS(1545),
    [anon_sym_LT_LT] = ACTIONS(1827),
    [anon_sym_GT_GT] = ACTIONS(1825),
    [anon_sym_GT_GT_GT] = ACTIONS(1827),
    [anon_sym_COMMA] = ACTIONS(1827),
    [anon_sym_QMARK] = ACTIONS(1827),
    [anon_sym_RBRACE] = ACTIONS(1827),
    [sym_comment] = ACTIONS(50),
  },
  [937] = {
    [sym_lambda_expression] = STATE(1063),
    [sym_lambda_parameters] = STATE(24),
    [sym_unary_expression] = STATE(435),
    [sym_conditional_expression] = STATE(1063),
    [sym_conditional_or_expression] = STATE(437),
    [sym_conditional_and_expression] = STATE(438),
    [sym_inclusive_or_expression] = STATE(439),
    [sym_exclusive_or_expression] = STATE(440),
    [sym_and_expression] = STATE(441),
    [sym_relational_expression] = STATE(442),
    [sym_equality_expression] = STATE(443),
    [sym_shift_expression] = STATE(444),
    [sym_additive_expression] = STATE(445),
    [sym_multiplicative_expression] = STATE(446),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(874),
    [anon_sym_TILDE] = ACTIONS(874),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [938] = {
    [anon_sym_RBRACE] = ACTIONS(2067),
    [anon_sym_requires] = ACTIONS(2067),
    [anon_sym_exports] = ACTIONS(2067),
    [anon_sym_opens] = ACTIONS(2067),
    [anon_sym_uses] = ACTIONS(2067),
    [anon_sym_provides] = ACTIONS(2067),
    [sym_comment] = ACTIONS(50),
  },
  [939] = {
    [sym__semicolon] = ACTIONS(2069),
    [anon_sym_COMMA] = ACTIONS(2069),
    [anon_sym_DOT] = ACTIONS(918),
    [sym_comment] = ACTIONS(50),
  },
  [940] = {
    [sym_package_or_type_name] = STATE(1064),
    [sym_identifier] = ACTIONS(290),
    [sym_comment] = ACTIONS(50),
  },
  [941] = {
    [anon_sym_GT] = ACTIONS(2071),
    [anon_sym_AMP] = ACTIONS(2071),
    [anon_sym_COMMA] = ACTIONS(2071),
    [sym_comment] = ACTIONS(50),
  },
  [942] = {
    [anon_sym_EQ] = ACTIONS(496),
    [anon_sym_PLUS_EQ] = ACTIONS(494),
    [anon_sym_DASH_EQ] = ACTIONS(494),
    [anon_sym_STAR_EQ] = ACTIONS(494),
    [anon_sym_SLASH_EQ] = ACTIONS(494),
    [anon_sym_AMP_EQ] = ACTIONS(494),
    [anon_sym_PIPE_EQ] = ACTIONS(494),
    [anon_sym_CARET_EQ] = ACTIONS(494),
    [anon_sym_PERCENT_EQ] = ACTIONS(494),
    [anon_sym_LT_LT_EQ] = ACTIONS(494),
    [anon_sym_GT_GT_EQ] = ACTIONS(494),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(494),
    [anon_sym_GT] = ACTIONS(1575),
    [anon_sym_LT] = ACTIONS(1575),
    [anon_sym_EQ_EQ] = ACTIONS(1577),
    [anon_sym_GT_EQ] = ACTIONS(1577),
    [anon_sym_LT_EQ] = ACTIONS(1577),
    [anon_sym_BANG_EQ] = ACTIONS(1577),
    [anon_sym_AMP_AMP] = ACTIONS(1579),
    [anon_sym_PIPE_PIPE] = ACTIONS(1581),
    [anon_sym_PLUS] = ACTIONS(1583),
    [anon_sym_DASH] = ACTIONS(1583),
    [anon_sym_STAR] = ACTIONS(1585),
    [anon_sym_SLASH] = ACTIONS(1585),
    [anon_sym_AMP] = ACTIONS(1587),
    [anon_sym_PIPE] = ACTIONS(1589),
    [anon_sym_CARET] = ACTIONS(1589),
    [anon_sym_PERCENT] = ACTIONS(1585),
    [anon_sym_LT_LT] = ACTIONS(1585),
    [anon_sym_GT_GT] = ACTIONS(1585),
    [anon_sym_GT_GT_GT] = ACTIONS(1585),
    [anon_sym_RPAREN] = ACTIONS(494),
    [anon_sym_QMARK] = ACTIONS(1593),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [943] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(500),
    [anon_sym_LT] = ACTIONS(500),
    [anon_sym_EQ_EQ] = ACTIONS(498),
    [anon_sym_GT_EQ] = ACTIONS(498),
    [anon_sym_LT_EQ] = ACTIONS(498),
    [anon_sym_BANG_EQ] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(1585),
    [anon_sym_SLASH] = ACTIONS(1585),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(1585),
    [anon_sym_LT_LT] = ACTIONS(1585),
    [anon_sym_GT_GT] = ACTIONS(1585),
    [anon_sym_GT_GT_GT] = ACTIONS(1585),
    [anon_sym_RPAREN] = ACTIONS(498),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [944] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(1575),
    [anon_sym_LT] = ACTIONS(1575),
    [anon_sym_EQ_EQ] = ACTIONS(1577),
    [anon_sym_GT_EQ] = ACTIONS(1577),
    [anon_sym_LT_EQ] = ACTIONS(1577),
    [anon_sym_BANG_EQ] = ACTIONS(1577),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(1583),
    [anon_sym_DASH] = ACTIONS(1583),
    [anon_sym_STAR] = ACTIONS(1585),
    [anon_sym_SLASH] = ACTIONS(1585),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(1585),
    [anon_sym_LT_LT] = ACTIONS(1585),
    [anon_sym_GT_GT] = ACTIONS(1585),
    [anon_sym_GT_GT_GT] = ACTIONS(1585),
    [anon_sym_RPAREN] = ACTIONS(498),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [945] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(1575),
    [anon_sym_LT] = ACTIONS(1575),
    [anon_sym_EQ_EQ] = ACTIONS(1577),
    [anon_sym_GT_EQ] = ACTIONS(1577),
    [anon_sym_LT_EQ] = ACTIONS(1577),
    [anon_sym_BANG_EQ] = ACTIONS(1577),
    [anon_sym_AMP_AMP] = ACTIONS(1579),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(1583),
    [anon_sym_DASH] = ACTIONS(1583),
    [anon_sym_STAR] = ACTIONS(1585),
    [anon_sym_SLASH] = ACTIONS(1585),
    [anon_sym_AMP] = ACTIONS(1587),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(1585),
    [anon_sym_LT_LT] = ACTIONS(1585),
    [anon_sym_GT_GT] = ACTIONS(1585),
    [anon_sym_GT_GT_GT] = ACTIONS(1585),
    [anon_sym_RPAREN] = ACTIONS(498),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [946] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(1575),
    [anon_sym_LT] = ACTIONS(1575),
    [anon_sym_EQ_EQ] = ACTIONS(1577),
    [anon_sym_GT_EQ] = ACTIONS(1577),
    [anon_sym_LT_EQ] = ACTIONS(1577),
    [anon_sym_BANG_EQ] = ACTIONS(1577),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(1585),
    [anon_sym_SLASH] = ACTIONS(1585),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(1585),
    [anon_sym_LT_LT] = ACTIONS(1585),
    [anon_sym_GT_GT] = ACTIONS(1585),
    [anon_sym_GT_GT_GT] = ACTIONS(1585),
    [anon_sym_RPAREN] = ACTIONS(498),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [947] = {
    [anon_sym_if] = ACTIONS(2073),
    [anon_sym_RBRACE] = ACTIONS(2073),
    [anon_sym_AT] = ACTIONS(2073),
    [anon_sym_static] = ACTIONS(2073),
    [anon_sym_class] = ACTIONS(2073),
    [anon_sym_public] = ACTIONS(2073),
    [anon_sym_protected] = ACTIONS(2073),
    [anon_sym_private] = ACTIONS(2073),
    [anon_sym_abstract] = ACTIONS(2073),
    [anon_sym_final] = ACTIONS(2073),
    [anon_sym_strictfp] = ACTIONS(2073),
    [anon_sym_default] = ACTIONS(2073),
    [sym_comment] = ACTIONS(50),
  },
  [948] = {
    [anon_sym_LPAREN] = ACTIONS(2075),
    [sym_comment] = ACTIONS(50),
  },
  [949] = {
    [sym__statement] = STATE(1067),
    [sym__literal] = STATE(956),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(957),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym__annotation] = STATE(26),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym__declaration] = STATE(959),
    [sym_module_declaration] = STATE(960),
    [sym_package_declaration] = STATE(960),
    [sym_import_statement] = STATE(960),
    [sym_type_import_on_declaraction] = STATE(961),
    [sym_single_static_import_declaration] = STATE(961),
    [sym_static_import_on_demand_declaration] = STATE(961),
    [sym_class_declaration] = STATE(960),
    [sym_normal_class_declaration] = STATE(338),
    [sym_modifier] = STATE(32),
    [sym_interface_declaration] = STATE(960),
    [sym_annotation_type_declaration] = STATE(962),
    [sym_normal_interface_declaration] = STATE(962),
    [aux_sym_class_or_interface_type_repeat1] = STATE(964),
    [aux_sym_normal_class_declaration_repeat1] = STATE(965),
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
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(28),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_PLUS_PLUS] = ACTIONS(30),
    [anon_sym_DASH_DASH] = ACTIONS(30),
    [anon_sym_LBRACE] = ACTIONS(2077),
    [anon_sym_AT] = ACTIONS(1851),
    [anon_sym_open] = ACTIONS(1853),
    [anon_sym_module] = ACTIONS(1855),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_package] = ACTIONS(1857),
    [anon_sym_import] = ACTIONS(1859),
    [anon_sym_class] = ACTIONS(1000),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(1861),
    [sym_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(50),
  },
  [950] = {
    [sym_package_or_type_name] = STATE(60),
    [anon_sym_interface] = ACTIONS(2079),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(50),
  },
  [951] = {
    [anon_sym_module] = ACTIONS(2081),
    [sym_comment] = ACTIONS(50),
  },
  [952] = {
    [sym_module_identifier] = STATE(1070),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(50),
  },
  [953] = {
    [sym_identifier] = ACTIONS(2083),
    [sym_comment] = ACTIONS(50),
  },
  [954] = {
    [sym_package_or_type_name] = STATE(1073),
    [anon_sym_static] = ACTIONS(2085),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(50),
  },
  [955] = {
    [sym_identifier] = ACTIONS(2087),
    [sym_comment] = ACTIONS(50),
  },
  [956] = {
    [sym__semicolon] = ACTIONS(2089),
    [sym_comment] = ACTIONS(50),
  },
  [957] = {
    [sym__semicolon] = ACTIONS(2089),
    [anon_sym_EQ] = ACTIONS(114),
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
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_AMP_AMP] = ACTIONS(122),
    [anon_sym_PIPE_PIPE] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_CARET] = ACTIONS(132),
    [anon_sym_PERCENT] = ACTIONS(128),
    [anon_sym_LT_LT] = ACTIONS(128),
    [anon_sym_GT_GT] = ACTIONS(128),
    [anon_sym_GT_GT_GT] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(134),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [958] = {
    [anon_sym_if] = ACTIONS(2091),
    [anon_sym_RBRACE] = ACTIONS(2091),
    [anon_sym_elseif] = ACTIONS(2091),
    [anon_sym_AT] = ACTIONS(2091),
    [anon_sym_static] = ACTIONS(2091),
    [anon_sym_class] = ACTIONS(2091),
    [anon_sym_public] = ACTIONS(2091),
    [anon_sym_protected] = ACTIONS(2091),
    [anon_sym_private] = ACTIONS(2091),
    [anon_sym_abstract] = ACTIONS(2091),
    [anon_sym_final] = ACTIONS(2091),
    [anon_sym_strictfp] = ACTIONS(2091),
    [anon_sym_default] = ACTIONS(2091),
    [sym_comment] = ACTIONS(50),
  },
  [959] = {
    [anon_sym_if] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(155),
    [anon_sym_elseif] = ACTIONS(155),
    [anon_sym_AT] = ACTIONS(155),
    [anon_sym_static] = ACTIONS(155),
    [anon_sym_class] = ACTIONS(155),
    [anon_sym_public] = ACTIONS(155),
    [anon_sym_protected] = ACTIONS(155),
    [anon_sym_private] = ACTIONS(155),
    [anon_sym_abstract] = ACTIONS(155),
    [anon_sym_final] = ACTIONS(155),
    [anon_sym_strictfp] = ACTIONS(155),
    [anon_sym_default] = ACTIONS(155),
    [sym_comment] = ACTIONS(50),
  },
  [960] = {
    [anon_sym_if] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_elseif] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(161),
    [anon_sym_static] = ACTIONS(161),
    [anon_sym_class] = ACTIONS(161),
    [anon_sym_public] = ACTIONS(161),
    [anon_sym_protected] = ACTIONS(161),
    [anon_sym_private] = ACTIONS(161),
    [anon_sym_abstract] = ACTIONS(161),
    [anon_sym_final] = ACTIONS(161),
    [anon_sym_strictfp] = ACTIONS(161),
    [anon_sym_default] = ACTIONS(161),
    [sym_comment] = ACTIONS(50),
  },
  [961] = {
    [anon_sym_if] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_elseif] = ACTIONS(167),
    [anon_sym_AT] = ACTIONS(167),
    [anon_sym_static] = ACTIONS(167),
    [anon_sym_class] = ACTIONS(167),
    [anon_sym_public] = ACTIONS(167),
    [anon_sym_protected] = ACTIONS(167),
    [anon_sym_private] = ACTIONS(167),
    [anon_sym_abstract] = ACTIONS(167),
    [anon_sym_final] = ACTIONS(167),
    [anon_sym_strictfp] = ACTIONS(167),
    [anon_sym_default] = ACTIONS(167),
    [sym_comment] = ACTIONS(50),
  },
  [962] = {
    [anon_sym_if] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_elseif] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(185),
    [anon_sym_static] = ACTIONS(185),
    [anon_sym_class] = ACTIONS(185),
    [anon_sym_public] = ACTIONS(185),
    [anon_sym_protected] = ACTIONS(185),
    [anon_sym_private] = ACTIONS(185),
    [anon_sym_abstract] = ACTIONS(185),
    [anon_sym_final] = ACTIONS(185),
    [anon_sym_strictfp] = ACTIONS(185),
    [anon_sym_default] = ACTIONS(185),
    [sym_comment] = ACTIONS(50),
  },
  [963] = {
    [sym_else_if_clause] = STATE(1076),
    [anon_sym_if] = ACTIONS(2073),
    [anon_sym_RBRACE] = ACTIONS(2073),
    [anon_sym_elseif] = ACTIONS(1847),
    [anon_sym_AT] = ACTIONS(2073),
    [anon_sym_static] = ACTIONS(2073),
    [anon_sym_class] = ACTIONS(2073),
    [anon_sym_public] = ACTIONS(2073),
    [anon_sym_protected] = ACTIONS(2073),
    [anon_sym_private] = ACTIONS(2073),
    [anon_sym_abstract] = ACTIONS(2073),
    [anon_sym_final] = ACTIONS(2073),
    [anon_sym_strictfp] = ACTIONS(2073),
    [anon_sym_default] = ACTIONS(2073),
    [sym_comment] = ACTIONS(50),
  },
  [964] = {
    [sym__annotation] = STATE(83),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_open] = ACTIONS(2093),
    [anon_sym_module] = ACTIONS(2081),
    [anon_sym_package] = ACTIONS(2095),
    [sym_comment] = ACTIONS(50),
  },
  [965] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym_modifier] = STATE(87),
    [anon_sym_AT] = ACTIONS(2097),
    [anon_sym_static] = ACTIONS(201),
    [anon_sym_class] = ACTIONS(970),
    [anon_sym_public] = ACTIONS(201),
    [anon_sym_protected] = ACTIONS(201),
    [anon_sym_private] = ACTIONS(201),
    [anon_sym_abstract] = ACTIONS(201),
    [anon_sym_final] = ACTIONS(201),
    [anon_sym_strictfp] = ACTIONS(201),
    [anon_sym_default] = ACTIONS(201),
    [anon_sym_interface] = ACTIONS(2099),
    [sym_comment] = ACTIONS(50),
  },
  [966] = {
    [anon_sym_EQ] = ACTIONS(502),
    [anon_sym_PLUS_EQ] = ACTIONS(504),
    [anon_sym_DASH_EQ] = ACTIONS(504),
    [anon_sym_STAR_EQ] = ACTIONS(504),
    [anon_sym_SLASH_EQ] = ACTIONS(504),
    [anon_sym_AMP_EQ] = ACTIONS(504),
    [anon_sym_PIPE_EQ] = ACTIONS(504),
    [anon_sym_CARET_EQ] = ACTIONS(504),
    [anon_sym_PERCENT_EQ] = ACTIONS(504),
    [anon_sym_LT_LT_EQ] = ACTIONS(504),
    [anon_sym_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_GT] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [anon_sym_BANG_EQ] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(510),
    [anon_sym_PIPE_PIPE] = ACTIONS(512),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_LT_LT] = ACTIONS(516),
    [anon_sym_GT_GT] = ACTIONS(516),
    [anon_sym_GT_GT_GT] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(522),
    [anon_sym_COLON] = ACTIONS(2101),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [967] = {
    [anon_sym_AT] = ACTIONS(878),
    [anon_sym_static] = ACTIONS(1144),
    [anon_sym_class] = ACTIONS(1144),
    [anon_sym_public] = ACTIONS(1144),
    [anon_sym_protected] = ACTIONS(1144),
    [anon_sym_private] = ACTIONS(1144),
    [anon_sym_abstract] = ACTIONS(1144),
    [anon_sym_final] = ACTIONS(1144),
    [anon_sym_strictfp] = ACTIONS(1144),
    [anon_sym_default] = ACTIONS(1144),
    [sym_identifier] = ACTIONS(1146),
    [sym_comment] = ACTIONS(50),
  },
  [968] = {
    [anon_sym_AT] = ACTIONS(880),
    [anon_sym_static] = ACTIONS(1148),
    [anon_sym_class] = ACTIONS(1148),
    [anon_sym_public] = ACTIONS(1148),
    [anon_sym_protected] = ACTIONS(1148),
    [anon_sym_private] = ACTIONS(1148),
    [anon_sym_abstract] = ACTIONS(1148),
    [anon_sym_final] = ACTIONS(1148),
    [anon_sym_strictfp] = ACTIONS(1148),
    [anon_sym_default] = ACTIONS(1148),
    [sym_identifier] = ACTIONS(1150),
    [sym_comment] = ACTIONS(50),
  },
  [969] = {
    [anon_sym_if] = ACTIONS(1026),
    [anon_sym_RBRACE] = ACTIONS(1026),
    [anon_sym_elseif] = ACTIONS(1026),
    [anon_sym_AT] = ACTIONS(1026),
    [anon_sym_static] = ACTIONS(1026),
    [anon_sym_class] = ACTIONS(1026),
    [anon_sym_public] = ACTIONS(1026),
    [anon_sym_protected] = ACTIONS(1026),
    [anon_sym_private] = ACTIONS(1026),
    [anon_sym_abstract] = ACTIONS(1026),
    [anon_sym_final] = ACTIONS(1026),
    [anon_sym_strictfp] = ACTIONS(1026),
    [anon_sym_default] = ACTIONS(1026),
    [sym_comment] = ACTIONS(50),
  },
  [970] = {
    [sym_class_body] = STATE(1082),
    [anon_sym_LBRACE] = ACTIONS(1314),
    [sym_comment] = ACTIONS(50),
  },
  [971] = {
    [anon_sym_if] = ACTIONS(1054),
    [anon_sym_RBRACE] = ACTIONS(1054),
    [anon_sym_elseif] = ACTIONS(1054),
    [anon_sym_AT] = ACTIONS(1054),
    [anon_sym_static] = ACTIONS(1054),
    [anon_sym_class] = ACTIONS(1054),
    [anon_sym_public] = ACTIONS(1054),
    [anon_sym_protected] = ACTIONS(1054),
    [anon_sym_private] = ACTIONS(1054),
    [anon_sym_abstract] = ACTIONS(1054),
    [anon_sym_final] = ACTIONS(1054),
    [anon_sym_strictfp] = ACTIONS(1054),
    [anon_sym_default] = ACTIONS(1054),
    [sym_comment] = ACTIONS(50),
  },
  [972] = {
    [sym_super_interfaces] = STATE(1083),
    [sym_class_body] = STATE(1082),
    [anon_sym_LBRACE] = ACTIONS(1314),
    [anon_sym_implements] = ACTIONS(302),
    [sym_comment] = ACTIONS(50),
  },
  [973] = {
    [sym__semicolon] = ACTIONS(1168),
    [anon_sym_LT] = ACTIONS(1168),
    [anon_sym_LBRACE] = ACTIONS(1168),
    [anon_sym_RBRACE] = ACTIONS(1168),
    [anon_sym_AT] = ACTIONS(1168),
    [anon_sym_static] = ACTIONS(1170),
    [anon_sym_class] = ACTIONS(1170),
    [anon_sym_public] = ACTIONS(1170),
    [anon_sym_protected] = ACTIONS(1170),
    [anon_sym_private] = ACTIONS(1170),
    [anon_sym_abstract] = ACTIONS(1170),
    [anon_sym_final] = ACTIONS(1170),
    [anon_sym_strictfp] = ACTIONS(1170),
    [anon_sym_default] = ACTIONS(1170),
    [anon_sym_interface] = ACTIONS(1170),
    [sym_identifier] = ACTIONS(1172),
    [sym_comment] = ACTIONS(50),
  },
  [974] = {
    [sym__semicolon] = ACTIONS(1451),
    [anon_sym_LT] = ACTIONS(1451),
    [anon_sym_LBRACE] = ACTIONS(1451),
    [anon_sym_RBRACE] = ACTIONS(1451),
    [anon_sym_AT] = ACTIONS(1451),
    [anon_sym_static] = ACTIONS(1453),
    [anon_sym_class] = ACTIONS(1453),
    [anon_sym_public] = ACTIONS(1453),
    [anon_sym_protected] = ACTIONS(1453),
    [anon_sym_private] = ACTIONS(1453),
    [anon_sym_abstract] = ACTIONS(1453),
    [anon_sym_final] = ACTIONS(1453),
    [anon_sym_strictfp] = ACTIONS(1453),
    [anon_sym_default] = ACTIONS(1453),
    [anon_sym_interface] = ACTIONS(1453),
    [sym_identifier] = ACTIONS(1455),
    [sym_comment] = ACTIONS(50),
  },
  [975] = {
    [anon_sym_DOT] = ACTIONS(2103),
    [anon_sym_LBRACK] = ACTIONS(2103),
    [anon_sym_COLON_COLON] = ACTIONS(2103),
    [sym_comment] = ACTIONS(50),
  },
  [976] = {
    [anon_sym_boolean] = ACTIONS(812),
    [anon_sym_byte] = ACTIONS(812),
    [anon_sym_short] = ACTIONS(812),
    [anon_sym_int] = ACTIONS(812),
    [anon_sym_long] = ACTIONS(812),
    [anon_sym_char] = ACTIONS(812),
    [anon_sym_float] = ACTIONS(812),
    [anon_sym_double] = ACTIONS(812),
    [anon_sym_AT] = ACTIONS(602),
    [anon_sym_static] = ACTIONS(812),
    [anon_sym_class] = ACTIONS(812),
    [anon_sym_public] = ACTIONS(812),
    [anon_sym_protected] = ACTIONS(812),
    [anon_sym_private] = ACTIONS(812),
    [anon_sym_abstract] = ACTIONS(812),
    [anon_sym_final] = ACTIONS(812),
    [anon_sym_strictfp] = ACTIONS(812),
    [anon_sym_default] = ACTIONS(812),
    [sym_identifier] = ACTIONS(814),
    [sym_comment] = ACTIONS(50),
  },
  [977] = {
    [anon_sym_EQ] = ACTIONS(604),
    [anon_sym_RPAREN] = ACTIONS(2105),
    [sym_comment] = ACTIONS(50),
  },
  [978] = {
    [anon_sym_RPAREN] = ACTIONS(2105),
    [sym_comment] = ACTIONS(50),
  },
  [979] = {
    [anon_sym_RPAREN] = ACTIONS(2107),
    [sym_comment] = ACTIONS(50),
  },
  [980] = {
    [anon_sym_LPAREN] = ACTIONS(614),
    [anon_sym_DOT] = ACTIONS(614),
    [anon_sym_boolean] = ACTIONS(616),
    [anon_sym_byte] = ACTIONS(616),
    [anon_sym_short] = ACTIONS(616),
    [anon_sym_int] = ACTIONS(616),
    [anon_sym_long] = ACTIONS(616),
    [anon_sym_char] = ACTIONS(616),
    [anon_sym_float] = ACTIONS(616),
    [anon_sym_double] = ACTIONS(616),
    [anon_sym_AT] = ACTIONS(614),
    [anon_sym_static] = ACTIONS(616),
    [anon_sym_class] = ACTIONS(616),
    [anon_sym_public] = ACTIONS(616),
    [anon_sym_protected] = ACTIONS(616),
    [anon_sym_private] = ACTIONS(616),
    [anon_sym_abstract] = ACTIONS(616),
    [anon_sym_final] = ACTIONS(616),
    [anon_sym_strictfp] = ACTIONS(616),
    [anon_sym_default] = ACTIONS(616),
    [sym_identifier] = ACTIONS(820),
    [sym_comment] = ACTIONS(50),
  },
  [981] = {
    [anon_sym_if] = ACTIONS(2109),
    [anon_sym_RBRACE] = ACTIONS(2109),
    [anon_sym_AT] = ACTIONS(2109),
    [anon_sym_static] = ACTIONS(2109),
    [anon_sym_class] = ACTIONS(2109),
    [anon_sym_public] = ACTIONS(2109),
    [anon_sym_protected] = ACTIONS(2109),
    [anon_sym_private] = ACTIONS(2109),
    [anon_sym_abstract] = ACTIONS(2109),
    [anon_sym_final] = ACTIONS(2109),
    [anon_sym_strictfp] = ACTIONS(2109),
    [anon_sym_default] = ACTIONS(2109),
    [sym_comment] = ACTIONS(50),
  },
  [982] = {
    [sym__expression] = STATE(1086),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [983] = {
    [anon_sym_RPAREN] = ACTIONS(2111),
    [anon_sym_COMMA] = ACTIONS(2113),
    [sym_comment] = ACTIONS(50),
  },
  [984] = {
    [sym__semicolon] = ACTIONS(2115),
    [sym_comment] = ACTIONS(50),
  },
  [985] = {
    [anon_sym_DOT] = ACTIONS(2117),
    [anon_sym_LBRACK] = ACTIONS(2117),
    [anon_sym_COLON_COLON] = ACTIONS(2117),
    [sym_comment] = ACTIONS(50),
  },
  [986] = {
    [anon_sym_DOT] = ACTIONS(1725),
    [anon_sym_AT] = ACTIONS(1725),
    [sym_identifier] = ACTIONS(2119),
    [sym_comment] = ACTIONS(50),
  },
  [987] = {
    [anon_sym_GT] = ACTIONS(2121),
    [anon_sym_COMMA] = ACTIONS(1729),
    [sym_comment] = ACTIONS(50),
  },
  [988] = {
    [sym_type_arguments] = STATE(708),
    [anon_sym_LT] = ACTIONS(2123),
    [anon_sym_LPAREN] = ACTIONS(2126),
    [anon_sym_DOT] = ACTIONS(2128),
    [anon_sym_LBRACK] = ACTIONS(1443),
    [anon_sym_AT] = ACTIONS(1443),
    [anon_sym_LT_GT] = ACTIONS(2126),
    [sym_comment] = ACTIONS(50),
  },
  [989] = {
    [sym__annotation] = STATE(328),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(2131),
    [sym_comment] = ACTIONS(50),
  },
  [990] = {
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [aux_sym_class_or_interface_type_repeat1] = STATE(1092),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(2133),
    [sym_comment] = ACTIONS(50),
  },
  [991] = {
    [anon_sym_LPAREN] = ACTIONS(2135),
    [sym_comment] = ACTIONS(50),
  },
  [992] = {
    [sym__annotation] = STATE(100),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [aux_sym_class_or_interface_type_repeat1] = STATE(1094),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(2137),
    [sym_comment] = ACTIONS(50),
  },
  [993] = {
    [sym__expression] = STATE(824),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym_argument_list] = STATE(1096),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(2139),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [994] = {
    [sym_type_arguments] = STATE(831),
    [sym_type_arguments_or_diamond] = STATE(991),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(1000),
    [anon_sym_LT] = ACTIONS(1635),
    [anon_sym_LPAREN] = ACTIONS(1917),
    [anon_sym_DOT] = ACTIONS(1921),
    [anon_sym_LT_GT] = ACTIONS(1641),
    [sym_comment] = ACTIONS(50),
  },
  [995] = {
    [sym__expression] = STATE(1099),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym_variable_initializer] = STATE(1100),
    [sym_array_initializer] = STATE(1101),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_COMMA] = ACTIONS(2141),
    [anon_sym_BANG] = ACTIONS(1517),
    [anon_sym_TILDE] = ACTIONS(1517),
    [anon_sym_PLUS_PLUS] = ACTIONS(1519),
    [anon_sym_DASH_DASH] = ACTIONS(1519),
    [anon_sym_LBRACE] = ACTIONS(1927),
    [anon_sym_RBRACE] = ACTIONS(2143),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [996] = {
    [anon_sym_DOT] = ACTIONS(2145),
    [anon_sym_COLON_COLON] = ACTIONS(2145),
    [sym_comment] = ACTIONS(50),
  },
  [997] = {
    [sym_class_body] = STATE(1102),
    [anon_sym_LBRACE] = ACTIONS(978),
    [anon_sym_DOT] = ACTIONS(2147),
    [anon_sym_LBRACK] = ACTIONS(2147),
    [anon_sym_COLON_COLON] = ACTIONS(2147),
    [sym_comment] = ACTIONS(50),
  },
  [998] = {
    [anon_sym_RPAREN] = ACTIONS(2139),
    [sym_comment] = ACTIONS(50),
  },
  [999] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(711),
    [anon_sym_LPAREN] = ACTIONS(1915),
    [anon_sym_DOT] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(1447),
    [anon_sym_AT] = ACTIONS(1447),
    [sym_comment] = ACTIONS(50),
  },
  [1000] = {
    [sym_type_arguments] = STATE(831),
    [sym_type_arguments_or_diamond] = STATE(1103),
    [anon_sym_LT] = ACTIONS(1635),
    [anon_sym_LPAREN] = ACTIONS(2135),
    [anon_sym_DOT] = ACTIONS(1919),
    [anon_sym_LT_GT] = ACTIONS(1641),
    [sym_comment] = ACTIONS(50),
  },
  [1001] = {
    [anon_sym_RPAREN] = ACTIONS(2149),
    [sym_comment] = ACTIONS(50),
  },
  [1002] = {
    [sym__expression] = STATE(1105),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1651),
    [anon_sym_TILDE] = ACTIONS(1651),
    [anon_sym_PLUS_PLUS] = ACTIONS(1653),
    [anon_sym_DASH_DASH] = ACTIONS(1653),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1003] = {
    [sym__expression] = STATE(1106),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1651),
    [anon_sym_TILDE] = ACTIONS(1651),
    [anon_sym_PLUS_PLUS] = ACTIONS(1653),
    [anon_sym_DASH_DASH] = ACTIONS(1653),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1004] = {
    [sym__expression] = STATE(1107),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1651),
    [anon_sym_TILDE] = ACTIONS(1651),
    [anon_sym_PLUS_PLUS] = ACTIONS(1653),
    [anon_sym_DASH_DASH] = ACTIONS(1653),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1005] = {
    [sym__expression] = STATE(1108),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1651),
    [anon_sym_TILDE] = ACTIONS(1651),
    [anon_sym_PLUS_PLUS] = ACTIONS(1653),
    [anon_sym_DASH_DASH] = ACTIONS(1653),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1006] = {
    [sym__expression] = STATE(1109),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1651),
    [anon_sym_TILDE] = ACTIONS(1651),
    [anon_sym_PLUS_PLUS] = ACTIONS(1653),
    [anon_sym_DASH_DASH] = ACTIONS(1653),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1007] = {
    [sym__expression] = STATE(148),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1651),
    [anon_sym_TILDE] = ACTIONS(1651),
    [anon_sym_PLUS_PLUS] = ACTIONS(1653),
    [anon_sym_DASH_DASH] = ACTIONS(1653),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1008] = {
    [sym__expression] = STATE(1110),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(316),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1009] = {
    [anon_sym_DOT] = ACTIONS(2151),
    [anon_sym_LBRACK] = ACTIONS(2151),
    [anon_sym_AT] = ACTIONS(2151),
    [anon_sym_COLON_COLON] = ACTIONS(2151),
    [sym_comment] = ACTIONS(50),
  },
  [1010] = {
    [sym__expression] = STATE(1012),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1651),
    [anon_sym_TILDE] = ACTIONS(1651),
    [anon_sym_PLUS_PLUS] = ACTIONS(1653),
    [anon_sym_DASH_DASH] = ACTIONS(1653),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1011] = {
    [anon_sym_DOT] = ACTIONS(2153),
    [anon_sym_LBRACK] = ACTIONS(2153),
    [anon_sym_AT] = ACTIONS(2153),
    [anon_sym_COLON_COLON] = ACTIONS(2153),
    [sym_comment] = ACTIONS(50),
  },
  [1012] = {
    [anon_sym_EQ] = ACTIONS(1933),
    [anon_sym_PLUS_EQ] = ACTIONS(1935),
    [anon_sym_DASH_EQ] = ACTIONS(1935),
    [anon_sym_STAR_EQ] = ACTIONS(1935),
    [anon_sym_SLASH_EQ] = ACTIONS(1935),
    [anon_sym_AMP_EQ] = ACTIONS(1935),
    [anon_sym_PIPE_EQ] = ACTIONS(1935),
    [anon_sym_CARET_EQ] = ACTIONS(1935),
    [anon_sym_PERCENT_EQ] = ACTIONS(1935),
    [anon_sym_LT_LT_EQ] = ACTIONS(1935),
    [anon_sym_GT_GT_EQ] = ACTIONS(1935),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1935),
    [anon_sym_GT] = ACTIONS(1937),
    [anon_sym_LT] = ACTIONS(1937),
    [anon_sym_EQ_EQ] = ACTIONS(1939),
    [anon_sym_GT_EQ] = ACTIONS(1939),
    [anon_sym_LT_EQ] = ACTIONS(1939),
    [anon_sym_BANG_EQ] = ACTIONS(1939),
    [anon_sym_AMP_AMP] = ACTIONS(1941),
    [anon_sym_PIPE_PIPE] = ACTIONS(1943),
    [anon_sym_PLUS] = ACTIONS(1945),
    [anon_sym_DASH] = ACTIONS(1945),
    [anon_sym_STAR] = ACTIONS(1947),
    [anon_sym_SLASH] = ACTIONS(1947),
    [anon_sym_AMP] = ACTIONS(1949),
    [anon_sym_PIPE] = ACTIONS(1951),
    [anon_sym_CARET] = ACTIONS(1951),
    [anon_sym_PERCENT] = ACTIONS(1947),
    [anon_sym_LT_LT] = ACTIONS(1947),
    [anon_sym_GT_GT] = ACTIONS(1947),
    [anon_sym_GT_GT_GT] = ACTIONS(1947),
    [anon_sym_QMARK] = ACTIONS(1953),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(2155),
    [sym_comment] = ACTIONS(50),
  },
  [1013] = {
    [sym_type_arguments] = STATE(1113),
    [anon_sym_LT] = ACTIONS(1373),
    [sym_identifier] = ACTIONS(2157),
    [sym_comment] = ACTIONS(50),
  },
  [1014] = {
    [sym_type_arguments] = STATE(1115),
    [anon_sym_LT] = ACTIONS(1373),
    [sym_identifier] = ACTIONS(2159),
    [sym_comment] = ACTIONS(50),
  },
  [1015] = {
    [sym__expression] = STATE(824),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym_argument_list] = STATE(1117),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(2161),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1016] = {
    [anon_sym_LPAREN] = ACTIONS(2163),
    [sym_comment] = ACTIONS(50),
  },
  [1017] = {
    [aux_sym_type_arguments_repeat1] = STATE(1120),
    [anon_sym_GT] = ACTIONS(2165),
    [anon_sym_COMMA] = ACTIONS(1435),
    [sym_comment] = ACTIONS(50),
  },
  [1018] = {
    [sym__expression] = STATE(824),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym_argument_list] = STATE(1121),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(2149),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1019] = {
    [anon_sym_LPAREN] = ACTIONS(2167),
    [sym_comment] = ACTIONS(50),
  },
  [1020] = {
    [anon_sym_DOT] = ACTIONS(2169),
    [anon_sym_LBRACK] = ACTIONS(2169),
    [anon_sym_COLON_COLON] = ACTIONS(2169),
    [sym_comment] = ACTIONS(50),
  },
  [1021] = {
    [anon_sym_DOT] = ACTIONS(2171),
    [anon_sym_LBRACK] = ACTIONS(2171),
    [anon_sym_COLON_COLON] = ACTIONS(2171),
    [sym_comment] = ACTIONS(50),
  },
  [1022] = {
    [anon_sym_DOT] = ACTIONS(1733),
    [anon_sym_AT] = ACTIONS(1733),
    [sym_identifier] = ACTIONS(2173),
    [sym_comment] = ACTIONS(50),
  },
  [1023] = {
    [sym_type_arguments] = STATE(1123),
    [anon_sym_LT] = ACTIONS(1373),
    [anon_sym_DOT] = ACTIONS(1733),
    [anon_sym_AT] = ACTIONS(1733),
    [sym_identifier] = ACTIONS(2173),
    [sym_comment] = ACTIONS(50),
  },
  [1024] = {
    [sym__annotation] = STATE(328),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(2175),
    [sym_comment] = ACTIONS(50),
  },
  [1025] = {
    [anon_sym_DOT] = ACTIONS(1701),
    [anon_sym_AT] = ACTIONS(1737),
    [sym_identifier] = ACTIONS(2177),
    [sym_comment] = ACTIONS(50),
  },
  [1026] = {
    [sym_class_body] = STATE(1125),
    [anon_sym_LBRACE] = ACTIONS(978),
    [sym_comment] = ACTIONS(50),
  },
  [1027] = {
    [sym__semicolon] = ACTIONS(1493),
    [anon_sym_LT] = ACTIONS(1493),
    [anon_sym_LBRACE] = ACTIONS(1493),
    [anon_sym_RBRACE] = ACTIONS(1493),
    [anon_sym_AT] = ACTIONS(1493),
    [anon_sym_static] = ACTIONS(1495),
    [anon_sym_class] = ACTIONS(1495),
    [anon_sym_public] = ACTIONS(1495),
    [anon_sym_protected] = ACTIONS(1495),
    [anon_sym_private] = ACTIONS(1495),
    [anon_sym_abstract] = ACTIONS(1495),
    [anon_sym_final] = ACTIONS(1495),
    [anon_sym_strictfp] = ACTIONS(1495),
    [anon_sym_default] = ACTIONS(1495),
    [anon_sym_interface] = ACTIONS(1495),
    [sym_identifier] = ACTIONS(1497),
    [sym_comment] = ACTIONS(50),
  },
  [1028] = {
    [anon_sym_boolean] = ACTIONS(812),
    [anon_sym_byte] = ACTIONS(812),
    [anon_sym_short] = ACTIONS(812),
    [anon_sym_int] = ACTIONS(812),
    [anon_sym_long] = ACTIONS(812),
    [anon_sym_char] = ACTIONS(812),
    [anon_sym_float] = ACTIONS(812),
    [anon_sym_double] = ACTIONS(812),
    [anon_sym_AT] = ACTIONS(602),
    [sym_identifier] = ACTIONS(814),
    [sym_comment] = ACTIONS(50),
  },
  [1029] = {
    [anon_sym_EQ] = ACTIONS(604),
    [anon_sym_RPAREN] = ACTIONS(2179),
    [sym_comment] = ACTIONS(50),
  },
  [1030] = {
    [anon_sym_RPAREN] = ACTIONS(2179),
    [sym_comment] = ACTIONS(50),
  },
  [1031] = {
    [anon_sym_RPAREN] = ACTIONS(2181),
    [sym_comment] = ACTIONS(50),
  },
  [1032] = {
    [anon_sym_LPAREN] = ACTIONS(614),
    [anon_sym_DOT] = ACTIONS(614),
    [anon_sym_boolean] = ACTIONS(616),
    [anon_sym_byte] = ACTIONS(616),
    [anon_sym_short] = ACTIONS(616),
    [anon_sym_int] = ACTIONS(616),
    [anon_sym_long] = ACTIONS(616),
    [anon_sym_char] = ACTIONS(616),
    [anon_sym_float] = ACTIONS(616),
    [anon_sym_double] = ACTIONS(616),
    [anon_sym_AT] = ACTIONS(614),
    [sym_identifier] = ACTIONS(820),
    [sym_comment] = ACTIONS(50),
  },
  [1033] = {
    [anon_sym_GT] = ACTIONS(2183),
    [anon_sym_COMMA] = ACTIONS(2183),
    [sym_comment] = ACTIONS(50),
  },
  [1034] = {
    [anon_sym_GT] = ACTIONS(2185),
    [anon_sym_AMP] = ACTIONS(2185),
    [anon_sym_COMMA] = ACTIONS(2185),
    [anon_sym_LBRACE] = ACTIONS(2185),
    [anon_sym_DOT] = ACTIONS(2185),
    [anon_sym_LBRACK] = ACTIONS(2185),
    [anon_sym_AT] = ACTIONS(2185),
    [anon_sym_implements] = ACTIONS(2185),
    [anon_sym_COLON_COLON] = ACTIONS(2185),
    [sym_comment] = ACTIONS(50),
  },
  [1035] = {
    [sym__semicolon] = ACTIONS(1168),
    [anon_sym_LT] = ACTIONS(1168),
    [anon_sym_RBRACE] = ACTIONS(1168),
    [anon_sym_AT] = ACTIONS(1168),
    [anon_sym_static] = ACTIONS(1170),
    [anon_sym_class] = ACTIONS(1170),
    [anon_sym_public] = ACTIONS(1170),
    [anon_sym_protected] = ACTIONS(1170),
    [anon_sym_private] = ACTIONS(1170),
    [anon_sym_abstract] = ACTIONS(1170),
    [anon_sym_final] = ACTIONS(1170),
    [anon_sym_strictfp] = ACTIONS(1170),
    [anon_sym_default] = ACTIONS(1170),
    [anon_sym_void] = ACTIONS(1170),
    [anon_sym_interface] = ACTIONS(1170),
    [sym_identifier] = ACTIONS(1172),
    [sym_comment] = ACTIONS(50),
  },
  [1036] = {
    [sym__semicolon] = ACTIONS(1451),
    [anon_sym_LT] = ACTIONS(1451),
    [anon_sym_RBRACE] = ACTIONS(1451),
    [anon_sym_AT] = ACTIONS(1451),
    [anon_sym_static] = ACTIONS(1453),
    [anon_sym_class] = ACTIONS(1453),
    [anon_sym_public] = ACTIONS(1453),
    [anon_sym_protected] = ACTIONS(1453),
    [anon_sym_private] = ACTIONS(1453),
    [anon_sym_abstract] = ACTIONS(1453),
    [anon_sym_final] = ACTIONS(1453),
    [anon_sym_strictfp] = ACTIONS(1453),
    [anon_sym_default] = ACTIONS(1453),
    [anon_sym_void] = ACTIONS(1453),
    [anon_sym_interface] = ACTIONS(1453),
    [sym_identifier] = ACTIONS(1455),
    [sym_comment] = ACTIONS(50),
  },
  [1037] = {
    [sym__semicolon] = ACTIONS(2187),
    [anon_sym_LBRACE] = ACTIONS(2187),
    [anon_sym_throws] = ACTIONS(2187),
    [sym_comment] = ACTIONS(50),
  },
  [1038] = {
    [sym_class_body] = STATE(1128),
    [anon_sym_LBRACE] = ACTIONS(1066),
    [sym_comment] = ACTIONS(50),
  },
  [1039] = {
    [sym__semicolon] = ACTIONS(1493),
    [anon_sym_LT] = ACTIONS(1493),
    [anon_sym_RBRACE] = ACTIONS(1493),
    [anon_sym_AT] = ACTIONS(1493),
    [anon_sym_static] = ACTIONS(1495),
    [anon_sym_class] = ACTIONS(1495),
    [anon_sym_public] = ACTIONS(1495),
    [anon_sym_protected] = ACTIONS(1495),
    [anon_sym_private] = ACTIONS(1495),
    [anon_sym_abstract] = ACTIONS(1495),
    [anon_sym_final] = ACTIONS(1495),
    [anon_sym_strictfp] = ACTIONS(1495),
    [anon_sym_default] = ACTIONS(1495),
    [anon_sym_void] = ACTIONS(1495),
    [anon_sym_interface] = ACTIONS(1495),
    [sym_identifier] = ACTIONS(1497),
    [sym_comment] = ACTIONS(50),
  },
  [1040] = {
    [sym__semicolon] = ACTIONS(262),
    [anon_sym_EQ] = ACTIONS(114),
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
    [anon_sym_LT] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(262),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(262),
    [anon_sym_AMP_AMP] = ACTIONS(262),
    [anon_sym_PIPE_PIPE] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(264),
    [anon_sym_SLASH] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_CARET] = ACTIONS(264),
    [anon_sym_PERCENT] = ACTIONS(264),
    [anon_sym_LT_LT] = ACTIONS(264),
    [anon_sym_GT_GT] = ACTIONS(264),
    [anon_sym_GT_GT_GT] = ACTIONS(264),
    [anon_sym_QMARK] = ACTIONS(262),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [1041] = {
    [sym_unary_expression] = STATE(435),
    [sym_conditional_and_expression] = STATE(1129),
    [sym_inclusive_or_expression] = STATE(903),
    [sym_exclusive_or_expression] = STATE(904),
    [sym_and_expression] = STATE(441),
    [sym_relational_expression] = STATE(905),
    [sym_equality_expression] = STATE(906),
    [sym_shift_expression] = STATE(907),
    [sym_additive_expression] = STATE(908),
    [sym_multiplicative_expression] = STATE(909),
    [anon_sym_BANG] = ACTIONS(1777),
    [anon_sym_TILDE] = ACTIONS(1777),
    [sym_comment] = ACTIONS(50),
  },
  [1042] = {
    [sym__expression] = STATE(1130),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(316),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1043] = {
    [sym_unary_expression] = STATE(435),
    [sym_inclusive_or_expression] = STATE(1131),
    [sym_exclusive_or_expression] = STATE(904),
    [sym_and_expression] = STATE(441),
    [sym_relational_expression] = STATE(905),
    [sym_equality_expression] = STATE(906),
    [sym_shift_expression] = STATE(907),
    [sym_additive_expression] = STATE(908),
    [sym_multiplicative_expression] = STATE(909),
    [anon_sym_BANG] = ACTIONS(1777),
    [anon_sym_TILDE] = ACTIONS(1777),
    [sym_comment] = ACTIONS(50),
  },
  [1044] = {
    [sym_unary_expression] = STATE(435),
    [sym_exclusive_or_expression] = STATE(1132),
    [sym_and_expression] = STATE(441),
    [sym_relational_expression] = STATE(905),
    [sym_equality_expression] = STATE(906),
    [sym_shift_expression] = STATE(907),
    [sym_additive_expression] = STATE(908),
    [sym_multiplicative_expression] = STATE(909),
    [anon_sym_BANG] = ACTIONS(1777),
    [anon_sym_TILDE] = ACTIONS(1777),
    [sym_comment] = ACTIONS(50),
  },
  [1045] = {
    [sym_unary_expression] = STATE(435),
    [sym_and_expression] = STATE(774),
    [sym_relational_expression] = STATE(905),
    [sym_equality_expression] = STATE(906),
    [sym_shift_expression] = STATE(907),
    [sym_additive_expression] = STATE(908),
    [sym_multiplicative_expression] = STATE(909),
    [anon_sym_BANG] = ACTIONS(1777),
    [anon_sym_TILDE] = ACTIONS(1777),
    [sym_comment] = ACTIONS(50),
  },
  [1046] = {
    [sym_unary_expression] = STATE(435),
    [sym_shift_expression] = STATE(1133),
    [sym_additive_expression] = STATE(908),
    [sym_multiplicative_expression] = STATE(909),
    [anon_sym_BANG] = ACTIONS(1777),
    [anon_sym_TILDE] = ACTIONS(1777),
    [sym_comment] = ACTIONS(50),
  },
  [1047] = {
    [sym_unary_expression] = STATE(435),
    [sym_relational_expression] = STATE(1134),
    [sym_shift_expression] = STATE(907),
    [sym_additive_expression] = STATE(908),
    [sym_multiplicative_expression] = STATE(909),
    [anon_sym_BANG] = ACTIONS(1777),
    [anon_sym_TILDE] = ACTIONS(1777),
    [sym_comment] = ACTIONS(50),
  },
  [1048] = {
    [sym_unary_expression] = STATE(435),
    [sym_additive_expression] = STATE(1135),
    [sym_multiplicative_expression] = STATE(909),
    [anon_sym_BANG] = ACTIONS(1777),
    [anon_sym_TILDE] = ACTIONS(1777),
    [sym_comment] = ACTIONS(50),
  },
  [1049] = {
    [sym_unary_expression] = STATE(435),
    [sym_multiplicative_expression] = STATE(1136),
    [anon_sym_BANG] = ACTIONS(1777),
    [anon_sym_TILDE] = ACTIONS(1777),
    [sym_comment] = ACTIONS(50),
  },
  [1050] = {
    [sym_unary_expression] = STATE(779),
    [anon_sym_BANG] = ACTIONS(1777),
    [anon_sym_TILDE] = ACTIONS(1777),
    [sym_comment] = ACTIONS(50),
  },
  [1051] = {
    [anon_sym_RBRACE] = ACTIONS(2189),
    [anon_sym_AT] = ACTIONS(2189),
    [anon_sym_static] = ACTIONS(2191),
    [anon_sym_class] = ACTIONS(2191),
    [anon_sym_public] = ACTIONS(2191),
    [anon_sym_protected] = ACTIONS(2191),
    [anon_sym_private] = ACTIONS(2191),
    [anon_sym_abstract] = ACTIONS(2191),
    [anon_sym_final] = ACTIONS(2191),
    [anon_sym_strictfp] = ACTIONS(2191),
    [anon_sym_default] = ACTIONS(2191),
    [anon_sym_interface] = ACTIONS(2191),
    [sym_identifier] = ACTIONS(2193),
    [sym_comment] = ACTIONS(50),
  },
  [1052] = {
    [sym__semicolon] = ACTIONS(2195),
    [sym_comment] = ACTIONS(50),
  },
  [1053] = {
    [sym__expression] = STATE(1138),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1054] = {
    [anon_sym_EQ] = ACTIONS(496),
    [anon_sym_PLUS_EQ] = ACTIONS(494),
    [anon_sym_DASH_EQ] = ACTIONS(494),
    [anon_sym_STAR_EQ] = ACTIONS(494),
    [anon_sym_SLASH_EQ] = ACTIONS(494),
    [anon_sym_AMP_EQ] = ACTIONS(494),
    [anon_sym_PIPE_EQ] = ACTIONS(494),
    [anon_sym_CARET_EQ] = ACTIONS(494),
    [anon_sym_PERCENT_EQ] = ACTIONS(494),
    [anon_sym_LT_LT_EQ] = ACTIONS(494),
    [anon_sym_GT_GT_EQ] = ACTIONS(494),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(494),
    [anon_sym_GT] = ACTIONS(1787),
    [anon_sym_LT] = ACTIONS(1787),
    [anon_sym_EQ_EQ] = ACTIONS(1789),
    [anon_sym_GT_EQ] = ACTIONS(1789),
    [anon_sym_LT_EQ] = ACTIONS(1789),
    [anon_sym_BANG_EQ] = ACTIONS(1789),
    [anon_sym_AMP_AMP] = ACTIONS(2197),
    [anon_sym_PIPE_PIPE] = ACTIONS(2199),
    [anon_sym_PLUS] = ACTIONS(2201),
    [anon_sym_DASH] = ACTIONS(2201),
    [anon_sym_STAR] = ACTIONS(2203),
    [anon_sym_SLASH] = ACTIONS(2203),
    [anon_sym_AMP] = ACTIONS(1791),
    [anon_sym_PIPE] = ACTIONS(2205),
    [anon_sym_CARET] = ACTIONS(2205),
    [anon_sym_PERCENT] = ACTIONS(2203),
    [anon_sym_LT_LT] = ACTIONS(2203),
    [anon_sym_GT_GT] = ACTIONS(2203),
    [anon_sym_GT_GT_GT] = ACTIONS(2203),
    [anon_sym_COMMA] = ACTIONS(494),
    [anon_sym_QMARK] = ACTIONS(2207),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(494),
    [sym_comment] = ACTIONS(50),
  },
  [1055] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(500),
    [anon_sym_LT] = ACTIONS(500),
    [anon_sym_EQ_EQ] = ACTIONS(498),
    [anon_sym_GT_EQ] = ACTIONS(498),
    [anon_sym_LT_EQ] = ACTIONS(498),
    [anon_sym_BANG_EQ] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(2203),
    [anon_sym_SLASH] = ACTIONS(2203),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(2203),
    [anon_sym_LT_LT] = ACTIONS(2203),
    [anon_sym_GT_GT] = ACTIONS(2203),
    [anon_sym_GT_GT_GT] = ACTIONS(2203),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(498),
    [sym_comment] = ACTIONS(50),
  },
  [1056] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(1787),
    [anon_sym_LT] = ACTIONS(1787),
    [anon_sym_EQ_EQ] = ACTIONS(1789),
    [anon_sym_GT_EQ] = ACTIONS(1789),
    [anon_sym_LT_EQ] = ACTIONS(1789),
    [anon_sym_BANG_EQ] = ACTIONS(1789),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(2201),
    [anon_sym_DASH] = ACTIONS(2201),
    [anon_sym_STAR] = ACTIONS(2203),
    [anon_sym_SLASH] = ACTIONS(2203),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(2203),
    [anon_sym_LT_LT] = ACTIONS(2203),
    [anon_sym_GT_GT] = ACTIONS(2203),
    [anon_sym_GT_GT_GT] = ACTIONS(2203),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(498),
    [sym_comment] = ACTIONS(50),
  },
  [1057] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(1787),
    [anon_sym_LT] = ACTIONS(1787),
    [anon_sym_EQ_EQ] = ACTIONS(1789),
    [anon_sym_GT_EQ] = ACTIONS(1789),
    [anon_sym_LT_EQ] = ACTIONS(1789),
    [anon_sym_BANG_EQ] = ACTIONS(1789),
    [anon_sym_AMP_AMP] = ACTIONS(2197),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(2201),
    [anon_sym_DASH] = ACTIONS(2201),
    [anon_sym_STAR] = ACTIONS(2203),
    [anon_sym_SLASH] = ACTIONS(2203),
    [anon_sym_AMP] = ACTIONS(1791),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(2203),
    [anon_sym_LT_LT] = ACTIONS(2203),
    [anon_sym_GT_GT] = ACTIONS(2203),
    [anon_sym_GT_GT_GT] = ACTIONS(2203),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(498),
    [sym_comment] = ACTIONS(50),
  },
  [1058] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(1787),
    [anon_sym_LT] = ACTIONS(1787),
    [anon_sym_EQ_EQ] = ACTIONS(1789),
    [anon_sym_GT_EQ] = ACTIONS(1789),
    [anon_sym_LT_EQ] = ACTIONS(1789),
    [anon_sym_BANG_EQ] = ACTIONS(1789),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(2203),
    [anon_sym_SLASH] = ACTIONS(2203),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(2203),
    [anon_sym_LT_LT] = ACTIONS(2203),
    [anon_sym_GT_GT] = ACTIONS(2203),
    [anon_sym_GT_GT_GT] = ACTIONS(2203),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(498),
    [sym_comment] = ACTIONS(50),
  },
  [1059] = {
    [anon_sym_EQ] = ACTIONS(502),
    [anon_sym_PLUS_EQ] = ACTIONS(504),
    [anon_sym_DASH_EQ] = ACTIONS(504),
    [anon_sym_STAR_EQ] = ACTIONS(504),
    [anon_sym_SLASH_EQ] = ACTIONS(504),
    [anon_sym_AMP_EQ] = ACTIONS(504),
    [anon_sym_PIPE_EQ] = ACTIONS(504),
    [anon_sym_CARET_EQ] = ACTIONS(504),
    [anon_sym_PERCENT_EQ] = ACTIONS(504),
    [anon_sym_LT_LT_EQ] = ACTIONS(504),
    [anon_sym_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_GT] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [anon_sym_BANG_EQ] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(510),
    [anon_sym_PIPE_PIPE] = ACTIONS(512),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_LT_LT] = ACTIONS(516),
    [anon_sym_GT_GT] = ACTIONS(516),
    [anon_sym_GT_GT_GT] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(522),
    [anon_sym_COLON] = ACTIONS(2209),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [1060] = {
    [sym__semicolon] = ACTIONS(2211),
    [anon_sym_RPAREN] = ACTIONS(2211),
    [anon_sym_COMMA] = ACTIONS(2211),
    [anon_sym_RBRACE] = ACTIONS(2211),
    [sym_comment] = ACTIONS(50),
  },
  [1061] = {
    [anon_sym_COMMA] = ACTIONS(2213),
    [anon_sym_RBRACE] = ACTIONS(2213),
    [sym_comment] = ACTIONS(50),
  },
  [1062] = {
    [sym_lambda_expression] = STATE(1063),
    [sym_lambda_parameters] = STATE(24),
    [sym_unary_expression] = STATE(435),
    [sym_conditional_expression] = STATE(1063),
    [sym_conditional_or_expression] = STATE(592),
    [sym_conditional_and_expression] = STATE(593),
    [sym_inclusive_or_expression] = STATE(594),
    [sym_exclusive_or_expression] = STATE(595),
    [sym_and_expression] = STATE(441),
    [sym_relational_expression] = STATE(596),
    [sym_equality_expression] = STATE(597),
    [sym_shift_expression] = STATE(598),
    [sym_additive_expression] = STATE(599),
    [sym_multiplicative_expression] = STATE(600),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1186),
    [anon_sym_TILDE] = ACTIONS(1186),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1063] = {
    [sym__semicolon] = ACTIONS(2215),
    [anon_sym_RPAREN] = ACTIONS(2215),
    [anon_sym_COMMA] = ACTIONS(2215),
    [anon_sym_RBRACE] = ACTIONS(2215),
    [sym_comment] = ACTIONS(50),
  },
  [1064] = {
    [sym__semicolon] = ACTIONS(2217),
    [anon_sym_COMMA] = ACTIONS(2217),
    [anon_sym_DOT] = ACTIONS(918),
    [sym_comment] = ACTIONS(50),
  },
  [1065] = {
    [sym__expression] = STATE(1140),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1306),
    [anon_sym_TILDE] = ACTIONS(1306),
    [anon_sym_PLUS_PLUS] = ACTIONS(1308),
    [anon_sym_DASH_DASH] = ACTIONS(1308),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1066] = {
    [sym__statement] = STATE(1141),
    [sym__literal] = STATE(21),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(22),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym__annotation] = STATE(26),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym__declaration] = STATE(28),
    [sym_module_declaration] = STATE(29),
    [sym_package_declaration] = STATE(29),
    [sym_import_statement] = STATE(29),
    [sym_type_import_on_declaraction] = STATE(30),
    [sym_single_static_import_declaration] = STATE(30),
    [sym_static_import_on_demand_declaration] = STATE(30),
    [sym_class_declaration] = STATE(29),
    [sym_normal_class_declaration] = STATE(31),
    [sym_modifier] = STATE(32),
    [sym_interface_declaration] = STATE(29),
    [sym_annotation_type_declaration] = STATE(33),
    [sym_normal_interface_declaration] = STATE(33),
    [aux_sym_class_or_interface_type_repeat1] = STATE(35),
    [aux_sym_normal_class_declaration_repeat1] = STATE(36),
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
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(28),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_PLUS_PLUS] = ACTIONS(30),
    [anon_sym_DASH_DASH] = ACTIONS(30),
    [anon_sym_AT] = ACTIONS(32),
    [anon_sym_open] = ACTIONS(34),
    [anon_sym_module] = ACTIONS(36),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_package] = ACTIONS(40),
    [anon_sym_import] = ACTIONS(42),
    [anon_sym_class] = ACTIONS(44),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(46),
    [sym_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(50),
  },
  [1067] = {
    [anon_sym_if] = ACTIONS(2219),
    [anon_sym_RBRACE] = ACTIONS(2219),
    [anon_sym_AT] = ACTIONS(2219),
    [anon_sym_static] = ACTIONS(2219),
    [anon_sym_class] = ACTIONS(2219),
    [anon_sym_public] = ACTIONS(2219),
    [anon_sym_protected] = ACTIONS(2219),
    [anon_sym_private] = ACTIONS(2219),
    [anon_sym_abstract] = ACTIONS(2219),
    [anon_sym_final] = ACTIONS(2219),
    [anon_sym_strictfp] = ACTIONS(2219),
    [anon_sym_default] = ACTIONS(2219),
    [sym_comment] = ACTIONS(50),
  },
  [1068] = {
    [sym_identifier] = ACTIONS(2221),
    [sym_comment] = ACTIONS(50),
  },
  [1069] = {
    [sym_module_identifier] = STATE(1143),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(50),
  },
  [1070] = {
    [anon_sym_LBRACE] = ACTIONS(2223),
    [sym_comment] = ACTIONS(50),
  },
  [1071] = {
    [aux_sym_module_identifier_repeat1] = STATE(1146),
    [sym__semicolon] = ACTIONS(2225),
    [anon_sym_DOT] = ACTIONS(284),
    [sym_comment] = ACTIONS(50),
  },
  [1072] = {
    [sym_package_or_type_name] = STATE(1147),
    [sym_identifier] = ACTIONS(290),
    [sym_comment] = ACTIONS(50),
  },
  [1073] = {
    [sym__semicolon] = ACTIONS(2227),
    [anon_sym_DOT] = ACTIONS(2229),
    [sym_comment] = ACTIONS(50),
  },
  [1074] = {
    [sym_type_parameters] = STATE(1151),
    [sym_extends_interfaces] = STATE(1152),
    [sym_interface_body] = STATE(1153),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(2231),
    [anon_sym_extends] = ACTIONS(306),
    [sym_comment] = ACTIONS(50),
  },
  [1075] = {
    [anon_sym_if] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(308),
    [anon_sym_elseif] = ACTIONS(308),
    [anon_sym_AT] = ACTIONS(308),
    [anon_sym_static] = ACTIONS(308),
    [anon_sym_class] = ACTIONS(308),
    [anon_sym_public] = ACTIONS(308),
    [anon_sym_protected] = ACTIONS(308),
    [anon_sym_private] = ACTIONS(308),
    [anon_sym_abstract] = ACTIONS(308),
    [anon_sym_final] = ACTIONS(308),
    [anon_sym_strictfp] = ACTIONS(308),
    [anon_sym_default] = ACTIONS(308),
    [sym_comment] = ACTIONS(50),
  },
  [1076] = {
    [anon_sym_if] = ACTIONS(2233),
    [anon_sym_RBRACE] = ACTIONS(2233),
    [anon_sym_elseif] = ACTIONS(2233),
    [anon_sym_AT] = ACTIONS(2233),
    [anon_sym_static] = ACTIONS(2233),
    [anon_sym_class] = ACTIONS(2233),
    [anon_sym_public] = ACTIONS(2233),
    [anon_sym_protected] = ACTIONS(2233),
    [anon_sym_private] = ACTIONS(2233),
    [anon_sym_abstract] = ACTIONS(2233),
    [anon_sym_final] = ACTIONS(2233),
    [anon_sym_strictfp] = ACTIONS(2233),
    [anon_sym_default] = ACTIONS(2233),
    [sym_comment] = ACTIONS(50),
  },
  [1077] = {
    [anon_sym_module] = ACTIONS(2235),
    [sym_comment] = ACTIONS(50),
  },
  [1078] = {
    [sym_identifier] = ACTIONS(2237),
    [sym_comment] = ACTIONS(50),
  },
  [1079] = {
    [sym_package_or_type_name] = STATE(60),
    [anon_sym_interface] = ACTIONS(2239),
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(50),
  },
  [1080] = {
    [sym_identifier] = ACTIONS(2241),
    [sym_comment] = ACTIONS(50),
  },
  [1081] = {
    [sym__expression] = STATE(1158),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1306),
    [anon_sym_TILDE] = ACTIONS(1306),
    [anon_sym_PLUS_PLUS] = ACTIONS(1308),
    [anon_sym_DASH_DASH] = ACTIONS(1308),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1082] = {
    [anon_sym_if] = ACTIONS(1451),
    [anon_sym_RBRACE] = ACTIONS(1451),
    [anon_sym_elseif] = ACTIONS(1451),
    [anon_sym_AT] = ACTIONS(1451),
    [anon_sym_static] = ACTIONS(1451),
    [anon_sym_class] = ACTIONS(1451),
    [anon_sym_public] = ACTIONS(1451),
    [anon_sym_protected] = ACTIONS(1451),
    [anon_sym_private] = ACTIONS(1451),
    [anon_sym_abstract] = ACTIONS(1451),
    [anon_sym_final] = ACTIONS(1451),
    [anon_sym_strictfp] = ACTIONS(1451),
    [anon_sym_default] = ACTIONS(1451),
    [sym_comment] = ACTIONS(50),
  },
  [1083] = {
    [sym_class_body] = STATE(1159),
    [anon_sym_LBRACE] = ACTIONS(1314),
    [sym_comment] = ACTIONS(50),
  },
  [1084] = {
    [anon_sym_boolean] = ACTIONS(1144),
    [anon_sym_byte] = ACTIONS(1144),
    [anon_sym_short] = ACTIONS(1144),
    [anon_sym_int] = ACTIONS(1144),
    [anon_sym_long] = ACTIONS(1144),
    [anon_sym_char] = ACTIONS(1144),
    [anon_sym_float] = ACTIONS(1144),
    [anon_sym_double] = ACTIONS(1144),
    [anon_sym_AT] = ACTIONS(878),
    [anon_sym_static] = ACTIONS(1144),
    [anon_sym_class] = ACTIONS(1144),
    [anon_sym_public] = ACTIONS(1144),
    [anon_sym_protected] = ACTIONS(1144),
    [anon_sym_private] = ACTIONS(1144),
    [anon_sym_abstract] = ACTIONS(1144),
    [anon_sym_final] = ACTIONS(1144),
    [anon_sym_strictfp] = ACTIONS(1144),
    [anon_sym_default] = ACTIONS(1144),
    [sym_identifier] = ACTIONS(1146),
    [sym_comment] = ACTIONS(50),
  },
  [1085] = {
    [anon_sym_boolean] = ACTIONS(1148),
    [anon_sym_byte] = ACTIONS(1148),
    [anon_sym_short] = ACTIONS(1148),
    [anon_sym_int] = ACTIONS(1148),
    [anon_sym_long] = ACTIONS(1148),
    [anon_sym_char] = ACTIONS(1148),
    [anon_sym_float] = ACTIONS(1148),
    [anon_sym_double] = ACTIONS(1148),
    [anon_sym_AT] = ACTIONS(880),
    [anon_sym_static] = ACTIONS(1148),
    [anon_sym_class] = ACTIONS(1148),
    [anon_sym_public] = ACTIONS(1148),
    [anon_sym_protected] = ACTIONS(1148),
    [anon_sym_private] = ACTIONS(1148),
    [anon_sym_abstract] = ACTIONS(1148),
    [anon_sym_final] = ACTIONS(1148),
    [anon_sym_strictfp] = ACTIONS(1148),
    [anon_sym_default] = ACTIONS(1148),
    [sym_identifier] = ACTIONS(1150),
    [sym_comment] = ACTIONS(50),
  },
  [1086] = {
    [anon_sym_EQ] = ACTIONS(1505),
    [anon_sym_PLUS_EQ] = ACTIONS(1507),
    [anon_sym_DASH_EQ] = ACTIONS(1507),
    [anon_sym_STAR_EQ] = ACTIONS(1507),
    [anon_sym_SLASH_EQ] = ACTIONS(1507),
    [anon_sym_AMP_EQ] = ACTIONS(1507),
    [anon_sym_PIPE_EQ] = ACTIONS(1507),
    [anon_sym_CARET_EQ] = ACTIONS(1507),
    [anon_sym_PERCENT_EQ] = ACTIONS(1507),
    [anon_sym_LT_LT_EQ] = ACTIONS(1507),
    [anon_sym_GT_GT_EQ] = ACTIONS(1507),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1507),
    [anon_sym_GT] = ACTIONS(1509),
    [anon_sym_LT] = ACTIONS(1509),
    [anon_sym_EQ_EQ] = ACTIONS(1511),
    [anon_sym_GT_EQ] = ACTIONS(1511),
    [anon_sym_LT_EQ] = ACTIONS(1511),
    [anon_sym_BANG_EQ] = ACTIONS(1511),
    [anon_sym_AMP_AMP] = ACTIONS(1887),
    [anon_sym_PIPE_PIPE] = ACTIONS(1889),
    [anon_sym_PLUS] = ACTIONS(1891),
    [anon_sym_DASH] = ACTIONS(1891),
    [anon_sym_STAR] = ACTIONS(1893),
    [anon_sym_SLASH] = ACTIONS(1893),
    [anon_sym_AMP] = ACTIONS(1513),
    [anon_sym_PIPE] = ACTIONS(1895),
    [anon_sym_CARET] = ACTIONS(1895),
    [anon_sym_PERCENT] = ACTIONS(1893),
    [anon_sym_LT_LT] = ACTIONS(1893),
    [anon_sym_GT_GT] = ACTIONS(1893),
    [anon_sym_GT_GT_GT] = ACTIONS(1893),
    [anon_sym_RPAREN] = ACTIONS(2243),
    [anon_sym_COMMA] = ACTIONS(2243),
    [anon_sym_QMARK] = ACTIONS(1901),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [1087] = {
    [sym__expression] = STATE(1160),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1088] = {
    [anon_sym_if] = ACTIONS(2245),
    [anon_sym_RBRACE] = ACTIONS(2245),
    [anon_sym_AT] = ACTIONS(2245),
    [anon_sym_static] = ACTIONS(2245),
    [anon_sym_class] = ACTIONS(2245),
    [anon_sym_public] = ACTIONS(2245),
    [anon_sym_protected] = ACTIONS(2245),
    [anon_sym_private] = ACTIONS(2245),
    [anon_sym_abstract] = ACTIONS(2245),
    [anon_sym_final] = ACTIONS(2245),
    [anon_sym_strictfp] = ACTIONS(2245),
    [anon_sym_default] = ACTIONS(2245),
    [sym_comment] = ACTIONS(50),
  },
  [1089] = {
    [anon_sym_DOT] = ACTIONS(2013),
    [anon_sym_AT] = ACTIONS(2013),
    [sym_identifier] = ACTIONS(2247),
    [sym_comment] = ACTIONS(50),
  },
  [1090] = {
    [sym_type_arguments] = STATE(882),
    [anon_sym_LT] = ACTIONS(2249),
    [anon_sym_LPAREN] = ACTIONS(2252),
    [anon_sym_DOT] = ACTIONS(2254),
    [anon_sym_LBRACK] = ACTIONS(1733),
    [anon_sym_AT] = ACTIONS(1733),
    [anon_sym_LT_GT] = ACTIONS(2252),
    [sym_comment] = ACTIONS(50),
  },
  [1091] = {
    [anon_sym_LT] = ACTIONS(2257),
    [anon_sym_LPAREN] = ACTIONS(2252),
    [anon_sym_DOT] = ACTIONS(2252),
    [anon_sym_LT_GT] = ACTIONS(2252),
    [sym_comment] = ACTIONS(50),
  },
  [1092] = {
    [sym__annotation] = STATE(328),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(2259),
    [sym_comment] = ACTIONS(50),
  },
  [1093] = {
    [anon_sym_LT] = ACTIONS(2261),
    [anon_sym_LPAREN] = ACTIONS(2126),
    [anon_sym_DOT] = ACTIONS(2126),
    [anon_sym_LT_GT] = ACTIONS(2126),
    [sym_comment] = ACTIONS(50),
  },
  [1094] = {
    [sym__annotation] = STATE(328),
    [sym_normal_annotation] = STATE(204),
    [sym_marker_annotation] = STATE(204),
    [sym_single_element_annotation] = STATE(204),
    [anon_sym_AT] = ACTIONS(446),
    [sym_identifier] = ACTIONS(2133),
    [sym_comment] = ACTIONS(50),
  },
  [1095] = {
    [sym_class_body] = STATE(1162),
    [anon_sym_LBRACE] = ACTIONS(978),
    [anon_sym_DOT] = ACTIONS(2263),
    [anon_sym_LBRACK] = ACTIONS(2263),
    [anon_sym_COLON_COLON] = ACTIONS(2263),
    [sym_comment] = ACTIONS(50),
  },
  [1096] = {
    [anon_sym_RPAREN] = ACTIONS(2265),
    [sym_comment] = ACTIONS(50),
  },
  [1097] = {
    [anon_sym_RBRACE] = ACTIONS(2267),
    [sym_comment] = ACTIONS(50),
  },
  [1098] = {
    [anon_sym_COMMA] = ACTIONS(2269),
    [anon_sym_RBRACE] = ACTIONS(2269),
    [anon_sym_DOT] = ACTIONS(2269),
    [anon_sym_COLON_COLON] = ACTIONS(2269),
    [sym_comment] = ACTIONS(50),
  },
  [1099] = {
    [anon_sym_EQ] = ACTIONS(1783),
    [anon_sym_PLUS_EQ] = ACTIONS(1785),
    [anon_sym_DASH_EQ] = ACTIONS(1785),
    [anon_sym_STAR_EQ] = ACTIONS(1785),
    [anon_sym_SLASH_EQ] = ACTIONS(1785),
    [anon_sym_AMP_EQ] = ACTIONS(1785),
    [anon_sym_PIPE_EQ] = ACTIONS(1785),
    [anon_sym_CARET_EQ] = ACTIONS(1785),
    [anon_sym_PERCENT_EQ] = ACTIONS(1785),
    [anon_sym_LT_LT_EQ] = ACTIONS(1785),
    [anon_sym_GT_GT_EQ] = ACTIONS(1785),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1785),
    [anon_sym_GT] = ACTIONS(1787),
    [anon_sym_LT] = ACTIONS(1787),
    [anon_sym_EQ_EQ] = ACTIONS(1789),
    [anon_sym_GT_EQ] = ACTIONS(1789),
    [anon_sym_LT_EQ] = ACTIONS(1789),
    [anon_sym_BANG_EQ] = ACTIONS(1789),
    [anon_sym_AMP_AMP] = ACTIONS(2197),
    [anon_sym_PIPE_PIPE] = ACTIONS(2199),
    [anon_sym_PLUS] = ACTIONS(2201),
    [anon_sym_DASH] = ACTIONS(2201),
    [anon_sym_STAR] = ACTIONS(2203),
    [anon_sym_SLASH] = ACTIONS(2203),
    [anon_sym_AMP] = ACTIONS(1791),
    [anon_sym_PIPE] = ACTIONS(2205),
    [anon_sym_CARET] = ACTIONS(2205),
    [anon_sym_PERCENT] = ACTIONS(2203),
    [anon_sym_LT_LT] = ACTIONS(2203),
    [anon_sym_GT_GT] = ACTIONS(2203),
    [anon_sym_GT_GT_GT] = ACTIONS(2203),
    [anon_sym_COMMA] = ACTIONS(2271),
    [anon_sym_QMARK] = ACTIONS(2207),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(2271),
    [sym_comment] = ACTIONS(50),
  },
  [1100] = {
    [aux_sym_array_initializer_repeat1] = STATE(1166),
    [anon_sym_COMMA] = ACTIONS(2273),
    [anon_sym_RBRACE] = ACTIONS(2267),
    [sym_comment] = ACTIONS(50),
  },
  [1101] = {
    [anon_sym_COMMA] = ACTIONS(2271),
    [anon_sym_RBRACE] = ACTIONS(2271),
    [sym_comment] = ACTIONS(50),
  },
  [1102] = {
    [anon_sym_DOT] = ACTIONS(2263),
    [anon_sym_LBRACK] = ACTIONS(2263),
    [anon_sym_COLON_COLON] = ACTIONS(2263),
    [sym_comment] = ACTIONS(50),
  },
  [1103] = {
    [anon_sym_LPAREN] = ACTIONS(2275),
    [sym_comment] = ACTIONS(50),
  },
  [1104] = {
    [sym__semicolon] = ACTIONS(2277),
    [sym_comment] = ACTIONS(50),
  },
  [1105] = {
    [anon_sym_EQ] = ACTIONS(496),
    [anon_sym_PLUS_EQ] = ACTIONS(494),
    [anon_sym_DASH_EQ] = ACTIONS(494),
    [anon_sym_STAR_EQ] = ACTIONS(494),
    [anon_sym_SLASH_EQ] = ACTIONS(494),
    [anon_sym_AMP_EQ] = ACTIONS(494),
    [anon_sym_PIPE_EQ] = ACTIONS(494),
    [anon_sym_CARET_EQ] = ACTIONS(494),
    [anon_sym_PERCENT_EQ] = ACTIONS(494),
    [anon_sym_LT_LT_EQ] = ACTIONS(494),
    [anon_sym_GT_GT_EQ] = ACTIONS(494),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(494),
    [anon_sym_GT] = ACTIONS(1937),
    [anon_sym_LT] = ACTIONS(1937),
    [anon_sym_EQ_EQ] = ACTIONS(1939),
    [anon_sym_GT_EQ] = ACTIONS(1939),
    [anon_sym_LT_EQ] = ACTIONS(1939),
    [anon_sym_BANG_EQ] = ACTIONS(1939),
    [anon_sym_AMP_AMP] = ACTIONS(1941),
    [anon_sym_PIPE_PIPE] = ACTIONS(1943),
    [anon_sym_PLUS] = ACTIONS(1945),
    [anon_sym_DASH] = ACTIONS(1945),
    [anon_sym_STAR] = ACTIONS(1947),
    [anon_sym_SLASH] = ACTIONS(1947),
    [anon_sym_AMP] = ACTIONS(1949),
    [anon_sym_PIPE] = ACTIONS(1951),
    [anon_sym_CARET] = ACTIONS(1951),
    [anon_sym_PERCENT] = ACTIONS(1947),
    [anon_sym_LT_LT] = ACTIONS(1947),
    [anon_sym_GT_GT] = ACTIONS(1947),
    [anon_sym_GT_GT_GT] = ACTIONS(1947),
    [anon_sym_QMARK] = ACTIONS(1953),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(494),
    [sym_comment] = ACTIONS(50),
  },
  [1106] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(500),
    [anon_sym_LT] = ACTIONS(500),
    [anon_sym_EQ_EQ] = ACTIONS(498),
    [anon_sym_GT_EQ] = ACTIONS(498),
    [anon_sym_LT_EQ] = ACTIONS(498),
    [anon_sym_BANG_EQ] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(1947),
    [anon_sym_SLASH] = ACTIONS(1947),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(1947),
    [anon_sym_LT_LT] = ACTIONS(1947),
    [anon_sym_GT_GT] = ACTIONS(1947),
    [anon_sym_GT_GT_GT] = ACTIONS(1947),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(498),
    [sym_comment] = ACTIONS(50),
  },
  [1107] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(1937),
    [anon_sym_LT] = ACTIONS(1937),
    [anon_sym_EQ_EQ] = ACTIONS(1939),
    [anon_sym_GT_EQ] = ACTIONS(1939),
    [anon_sym_LT_EQ] = ACTIONS(1939),
    [anon_sym_BANG_EQ] = ACTIONS(1939),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(1945),
    [anon_sym_DASH] = ACTIONS(1945),
    [anon_sym_STAR] = ACTIONS(1947),
    [anon_sym_SLASH] = ACTIONS(1947),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(1947),
    [anon_sym_LT_LT] = ACTIONS(1947),
    [anon_sym_GT_GT] = ACTIONS(1947),
    [anon_sym_GT_GT_GT] = ACTIONS(1947),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(498),
    [sym_comment] = ACTIONS(50),
  },
  [1108] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(1937),
    [anon_sym_LT] = ACTIONS(1937),
    [anon_sym_EQ_EQ] = ACTIONS(1939),
    [anon_sym_GT_EQ] = ACTIONS(1939),
    [anon_sym_LT_EQ] = ACTIONS(1939),
    [anon_sym_BANG_EQ] = ACTIONS(1939),
    [anon_sym_AMP_AMP] = ACTIONS(1941),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(1945),
    [anon_sym_DASH] = ACTIONS(1945),
    [anon_sym_STAR] = ACTIONS(1947),
    [anon_sym_SLASH] = ACTIONS(1947),
    [anon_sym_AMP] = ACTIONS(1949),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(1947),
    [anon_sym_LT_LT] = ACTIONS(1947),
    [anon_sym_GT_GT] = ACTIONS(1947),
    [anon_sym_GT_GT_GT] = ACTIONS(1947),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(498),
    [sym_comment] = ACTIONS(50),
  },
  [1109] = {
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(1937),
    [anon_sym_LT] = ACTIONS(1937),
    [anon_sym_EQ_EQ] = ACTIONS(1939),
    [anon_sym_GT_EQ] = ACTIONS(1939),
    [anon_sym_LT_EQ] = ACTIONS(1939),
    [anon_sym_BANG_EQ] = ACTIONS(1939),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(1947),
    [anon_sym_SLASH] = ACTIONS(1947),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(1947),
    [anon_sym_LT_LT] = ACTIONS(1947),
    [anon_sym_GT_GT] = ACTIONS(1947),
    [anon_sym_GT_GT_GT] = ACTIONS(1947),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(498),
    [sym_comment] = ACTIONS(50),
  },
  [1110] = {
    [anon_sym_EQ] = ACTIONS(502),
    [anon_sym_PLUS_EQ] = ACTIONS(504),
    [anon_sym_DASH_EQ] = ACTIONS(504),
    [anon_sym_STAR_EQ] = ACTIONS(504),
    [anon_sym_SLASH_EQ] = ACTIONS(504),
    [anon_sym_AMP_EQ] = ACTIONS(504),
    [anon_sym_PIPE_EQ] = ACTIONS(504),
    [anon_sym_CARET_EQ] = ACTIONS(504),
    [anon_sym_PERCENT_EQ] = ACTIONS(504),
    [anon_sym_LT_LT_EQ] = ACTIONS(504),
    [anon_sym_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_GT] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [anon_sym_BANG_EQ] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(510),
    [anon_sym_PIPE_PIPE] = ACTIONS(512),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_LT_LT] = ACTIONS(516),
    [anon_sym_GT_GT] = ACTIONS(516),
    [anon_sym_GT_GT_GT] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(522),
    [anon_sym_COLON] = ACTIONS(2279),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [1111] = {
    [anon_sym_DOT] = ACTIONS(2281),
    [anon_sym_LBRACK] = ACTIONS(2281),
    [anon_sym_AT] = ACTIONS(2281),
    [anon_sym_COLON_COLON] = ACTIONS(2281),
    [sym_comment] = ACTIONS(50),
  },
  [1112] = {
    [anon_sym_LPAREN] = ACTIONS(2283),
    [anon_sym_DOT] = ACTIONS(2285),
    [anon_sym_LBRACK] = ACTIONS(2285),
    [anon_sym_COLON_COLON] = ACTIONS(2285),
    [sym_comment] = ACTIONS(50),
  },
  [1113] = {
    [sym_identifier] = ACTIONS(2287),
    [sym_comment] = ACTIONS(50),
  },
  [1114] = {
    [anon_sym_DOT] = ACTIONS(2289),
    [anon_sym_LBRACK] = ACTIONS(2289),
    [anon_sym_COLON_COLON] = ACTIONS(2289),
    [sym_comment] = ACTIONS(50),
  },
  [1115] = {
    [sym_identifier] = ACTIONS(2291),
    [sym_comment] = ACTIONS(50),
  },
  [1116] = {
    [anon_sym_DOT] = ACTIONS(2293),
    [anon_sym_LBRACK] = ACTIONS(2293),
    [anon_sym_COLON_COLON] = ACTIONS(2293),
    [sym_comment] = ACTIONS(50),
  },
  [1117] = {
    [anon_sym_RPAREN] = ACTIONS(2295),
    [sym_comment] = ACTIONS(50),
  },
  [1118] = {
    [sym__expression] = STATE(824),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym_argument_list] = STATE(1173),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(2295),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1119] = {
    [anon_sym_super] = ACTIONS(2119),
    [sym_identifier] = ACTIONS(2297),
    [sym_comment] = ACTIONS(50),
  },
  [1120] = {
    [anon_sym_GT] = ACTIONS(2299),
    [anon_sym_COMMA] = ACTIONS(1729),
    [sym_comment] = ACTIONS(50),
  },
  [1121] = {
    [anon_sym_RPAREN] = ACTIONS(2301),
    [sym_comment] = ACTIONS(50),
  },
  [1122] = {
    [sym__expression] = STATE(824),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym_argument_list] = STATE(1176),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(2301),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1123] = {
    [anon_sym_DOT] = ACTIONS(2015),
    [anon_sym_AT] = ACTIONS(2015),
    [sym_identifier] = ACTIONS(2303),
    [sym_comment] = ACTIONS(50),
  },
  [1124] = {
    [sym_type_arguments] = STATE(1177),
    [anon_sym_LT] = ACTIONS(1373),
    [anon_sym_DOT] = ACTIONS(2015),
    [anon_sym_AT] = ACTIONS(2015),
    [sym_identifier] = ACTIONS(2303),
    [sym_comment] = ACTIONS(50),
  },
  [1125] = {
    [sym__semicolon] = ACTIONS(1765),
    [anon_sym_LT] = ACTIONS(1765),
    [anon_sym_LBRACE] = ACTIONS(1765),
    [anon_sym_RBRACE] = ACTIONS(1765),
    [anon_sym_AT] = ACTIONS(1765),
    [anon_sym_static] = ACTIONS(1767),
    [anon_sym_class] = ACTIONS(1767),
    [anon_sym_public] = ACTIONS(1767),
    [anon_sym_protected] = ACTIONS(1767),
    [anon_sym_private] = ACTIONS(1767),
    [anon_sym_abstract] = ACTIONS(1767),
    [anon_sym_final] = ACTIONS(1767),
    [anon_sym_strictfp] = ACTIONS(1767),
    [anon_sym_default] = ACTIONS(1767),
    [anon_sym_interface] = ACTIONS(1767),
    [sym_identifier] = ACTIONS(1769),
    [sym_comment] = ACTIONS(50),
  },
  [1126] = {
    [anon_sym_boolean] = ACTIONS(1144),
    [anon_sym_byte] = ACTIONS(1144),
    [anon_sym_short] = ACTIONS(1144),
    [anon_sym_int] = ACTIONS(1144),
    [anon_sym_long] = ACTIONS(1144),
    [anon_sym_char] = ACTIONS(1144),
    [anon_sym_float] = ACTIONS(1144),
    [anon_sym_double] = ACTIONS(1144),
    [anon_sym_AT] = ACTIONS(878),
    [sym_identifier] = ACTIONS(1146),
    [sym_comment] = ACTIONS(50),
  },
  [1127] = {
    [anon_sym_boolean] = ACTIONS(1148),
    [anon_sym_byte] = ACTIONS(1148),
    [anon_sym_short] = ACTIONS(1148),
    [anon_sym_int] = ACTIONS(1148),
    [anon_sym_long] = ACTIONS(1148),
    [anon_sym_char] = ACTIONS(1148),
    [anon_sym_float] = ACTIONS(1148),
    [anon_sym_double] = ACTIONS(1148),
    [anon_sym_AT] = ACTIONS(880),
    [sym_identifier] = ACTIONS(1150),
    [sym_comment] = ACTIONS(50),
  },
  [1128] = {
    [sym__semicolon] = ACTIONS(1765),
    [anon_sym_LT] = ACTIONS(1765),
    [anon_sym_RBRACE] = ACTIONS(1765),
    [anon_sym_AT] = ACTIONS(1765),
    [anon_sym_static] = ACTIONS(1767),
    [anon_sym_class] = ACTIONS(1767),
    [anon_sym_public] = ACTIONS(1767),
    [anon_sym_protected] = ACTIONS(1767),
    [anon_sym_private] = ACTIONS(1767),
    [anon_sym_abstract] = ACTIONS(1767),
    [anon_sym_final] = ACTIONS(1767),
    [anon_sym_strictfp] = ACTIONS(1767),
    [anon_sym_default] = ACTIONS(1767),
    [anon_sym_void] = ACTIONS(1767),
    [anon_sym_interface] = ACTIONS(1767),
    [sym_identifier] = ACTIONS(1769),
    [sym_comment] = ACTIONS(50),
  },
  [1129] = {
    [sym__semicolon] = ACTIONS(1797),
    [anon_sym_AMP_AMP] = ACTIONS(2029),
    [anon_sym_PIPE_PIPE] = ACTIONS(1797),
    [anon_sym_QMARK] = ACTIONS(1797),
    [sym_comment] = ACTIONS(50),
  },
  [1130] = {
    [anon_sym_EQ] = ACTIONS(502),
    [anon_sym_PLUS_EQ] = ACTIONS(504),
    [anon_sym_DASH_EQ] = ACTIONS(504),
    [anon_sym_STAR_EQ] = ACTIONS(504),
    [anon_sym_SLASH_EQ] = ACTIONS(504),
    [anon_sym_AMP_EQ] = ACTIONS(504),
    [anon_sym_PIPE_EQ] = ACTIONS(504),
    [anon_sym_CARET_EQ] = ACTIONS(504),
    [anon_sym_PERCENT_EQ] = ACTIONS(504),
    [anon_sym_LT_LT_EQ] = ACTIONS(504),
    [anon_sym_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_GT] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [anon_sym_BANG_EQ] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(510),
    [anon_sym_PIPE_PIPE] = ACTIONS(512),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_LT_LT] = ACTIONS(516),
    [anon_sym_GT_GT] = ACTIONS(516),
    [anon_sym_GT_GT_GT] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(522),
    [anon_sym_COLON] = ACTIONS(2305),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [1131] = {
    [sym__semicolon] = ACTIONS(1801),
    [anon_sym_AMP_AMP] = ACTIONS(1801),
    [anon_sym_PIPE_PIPE] = ACTIONS(1801),
    [anon_sym_PIPE] = ACTIONS(2031),
    [anon_sym_QMARK] = ACTIONS(1801),
    [sym_comment] = ACTIONS(50),
  },
  [1132] = {
    [sym__semicolon] = ACTIONS(1803),
    [anon_sym_AMP_AMP] = ACTIONS(1803),
    [anon_sym_PIPE_PIPE] = ACTIONS(1803),
    [anon_sym_PIPE] = ACTIONS(1805),
    [anon_sym_CARET] = ACTIONS(2033),
    [anon_sym_QMARK] = ACTIONS(1803),
    [sym_comment] = ACTIONS(50),
  },
  [1133] = {
    [sym__semicolon] = ACTIONS(1813),
    [anon_sym_LT] = ACTIONS(1811),
    [anon_sym_EQ_EQ] = ACTIONS(1813),
    [anon_sym_BANG_EQ] = ACTIONS(1813),
    [anon_sym_AMP_AMP] = ACTIONS(1813),
    [anon_sym_PIPE_PIPE] = ACTIONS(1813),
    [anon_sym_PIPE] = ACTIONS(1811),
    [anon_sym_CARET] = ACTIONS(1813),
    [anon_sym_LT_LT] = ACTIONS(2039),
    [anon_sym_GT_GT] = ACTIONS(2041),
    [anon_sym_GT_GT_GT] = ACTIONS(2039),
    [anon_sym_QMARK] = ACTIONS(1813),
    [sym_comment] = ACTIONS(50),
  },
  [1134] = {
    [sym__semicolon] = ACTIONS(1817),
    [anon_sym_LT] = ACTIONS(2035),
    [anon_sym_EQ_EQ] = ACTIONS(1815),
    [anon_sym_BANG_EQ] = ACTIONS(1815),
    [anon_sym_AMP_AMP] = ACTIONS(1817),
    [anon_sym_PIPE_PIPE] = ACTIONS(1817),
    [anon_sym_PIPE] = ACTIONS(1819),
    [anon_sym_CARET] = ACTIONS(1817),
    [anon_sym_QMARK] = ACTIONS(1817),
    [sym_comment] = ACTIONS(50),
  },
  [1135] = {
    [sym__semicolon] = ACTIONS(1823),
    [anon_sym_LT] = ACTIONS(1821),
    [anon_sym_EQ_EQ] = ACTIONS(1823),
    [anon_sym_BANG_EQ] = ACTIONS(1823),
    [anon_sym_AMP_AMP] = ACTIONS(1823),
    [anon_sym_PIPE_PIPE] = ACTIONS(1823),
    [anon_sym_PLUS] = ACTIONS(2043),
    [anon_sym_DASH] = ACTIONS(2043),
    [anon_sym_PIPE] = ACTIONS(1821),
    [anon_sym_CARET] = ACTIONS(1823),
    [anon_sym_LT_LT] = ACTIONS(1823),
    [anon_sym_GT_GT] = ACTIONS(1821),
    [anon_sym_GT_GT_GT] = ACTIONS(1823),
    [anon_sym_QMARK] = ACTIONS(1823),
    [sym_comment] = ACTIONS(50),
  },
  [1136] = {
    [sym__semicolon] = ACTIONS(1827),
    [anon_sym_LT] = ACTIONS(1825),
    [anon_sym_EQ_EQ] = ACTIONS(1827),
    [anon_sym_BANG_EQ] = ACTIONS(1827),
    [anon_sym_AMP_AMP] = ACTIONS(1827),
    [anon_sym_PIPE_PIPE] = ACTIONS(1827),
    [anon_sym_PLUS] = ACTIONS(1827),
    [anon_sym_DASH] = ACTIONS(1827),
    [anon_sym_STAR] = ACTIONS(2045),
    [anon_sym_SLASH] = ACTIONS(2047),
    [anon_sym_PIPE] = ACTIONS(1825),
    [anon_sym_CARET] = ACTIONS(1827),
    [anon_sym_PERCENT] = ACTIONS(2045),
    [anon_sym_LT_LT] = ACTIONS(1827),
    [anon_sym_GT_GT] = ACTIONS(1825),
    [anon_sym_GT_GT_GT] = ACTIONS(1827),
    [anon_sym_QMARK] = ACTIONS(1827),
    [sym_comment] = ACTIONS(50),
  },
  [1137] = {
    [anon_sym_RBRACE] = ACTIONS(2307),
    [anon_sym_AT] = ACTIONS(2307),
    [anon_sym_static] = ACTIONS(2309),
    [anon_sym_class] = ACTIONS(2309),
    [anon_sym_public] = ACTIONS(2309),
    [anon_sym_protected] = ACTIONS(2309),
    [anon_sym_private] = ACTIONS(2309),
    [anon_sym_abstract] = ACTIONS(2309),
    [anon_sym_final] = ACTIONS(2309),
    [anon_sym_strictfp] = ACTIONS(2309),
    [anon_sym_default] = ACTIONS(2309),
    [anon_sym_interface] = ACTIONS(2309),
    [sym_identifier] = ACTIONS(2311),
    [sym_comment] = ACTIONS(50),
  },
  [1138] = {
    [anon_sym_EQ] = ACTIONS(1128),
    [anon_sym_PLUS_EQ] = ACTIONS(1126),
    [anon_sym_DASH_EQ] = ACTIONS(1126),
    [anon_sym_STAR_EQ] = ACTIONS(1126),
    [anon_sym_SLASH_EQ] = ACTIONS(1126),
    [anon_sym_AMP_EQ] = ACTIONS(1126),
    [anon_sym_PIPE_EQ] = ACTIONS(1126),
    [anon_sym_CARET_EQ] = ACTIONS(1126),
    [anon_sym_PERCENT_EQ] = ACTIONS(1126),
    [anon_sym_LT_LT_EQ] = ACTIONS(1126),
    [anon_sym_GT_GT_EQ] = ACTIONS(1126),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1126),
    [anon_sym_GT] = ACTIONS(1509),
    [anon_sym_LT] = ACTIONS(1509),
    [anon_sym_EQ_EQ] = ACTIONS(1511),
    [anon_sym_GT_EQ] = ACTIONS(1511),
    [anon_sym_LT_EQ] = ACTIONS(1511),
    [anon_sym_BANG_EQ] = ACTIONS(1511),
    [anon_sym_AMP_AMP] = ACTIONS(1887),
    [anon_sym_PIPE_PIPE] = ACTIONS(1889),
    [anon_sym_PLUS] = ACTIONS(1891),
    [anon_sym_DASH] = ACTIONS(1891),
    [anon_sym_STAR] = ACTIONS(1893),
    [anon_sym_SLASH] = ACTIONS(1893),
    [anon_sym_AMP] = ACTIONS(1513),
    [anon_sym_PIPE] = ACTIONS(1895),
    [anon_sym_CARET] = ACTIONS(1895),
    [anon_sym_PERCENT] = ACTIONS(1893),
    [anon_sym_LT_LT] = ACTIONS(1893),
    [anon_sym_GT_GT] = ACTIONS(1893),
    [anon_sym_GT_GT_GT] = ACTIONS(1893),
    [anon_sym_RPAREN] = ACTIONS(1126),
    [anon_sym_COMMA] = ACTIONS(1126),
    [anon_sym_QMARK] = ACTIONS(1901),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [1139] = {
    [sym__expression] = STATE(1179),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1517),
    [anon_sym_TILDE] = ACTIONS(1517),
    [anon_sym_PLUS_PLUS] = ACTIONS(1519),
    [anon_sym_DASH_DASH] = ACTIONS(1519),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1140] = {
    [anon_sym_EQ] = ACTIONS(1571),
    [anon_sym_PLUS_EQ] = ACTIONS(1573),
    [anon_sym_DASH_EQ] = ACTIONS(1573),
    [anon_sym_STAR_EQ] = ACTIONS(1573),
    [anon_sym_SLASH_EQ] = ACTIONS(1573),
    [anon_sym_AMP_EQ] = ACTIONS(1573),
    [anon_sym_PIPE_EQ] = ACTIONS(1573),
    [anon_sym_CARET_EQ] = ACTIONS(1573),
    [anon_sym_PERCENT_EQ] = ACTIONS(1573),
    [anon_sym_LT_LT_EQ] = ACTIONS(1573),
    [anon_sym_GT_GT_EQ] = ACTIONS(1573),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1573),
    [anon_sym_GT] = ACTIONS(1575),
    [anon_sym_LT] = ACTIONS(1575),
    [anon_sym_EQ_EQ] = ACTIONS(1577),
    [anon_sym_GT_EQ] = ACTIONS(1577),
    [anon_sym_LT_EQ] = ACTIONS(1577),
    [anon_sym_BANG_EQ] = ACTIONS(1577),
    [anon_sym_AMP_AMP] = ACTIONS(1579),
    [anon_sym_PIPE_PIPE] = ACTIONS(1581),
    [anon_sym_PLUS] = ACTIONS(1583),
    [anon_sym_DASH] = ACTIONS(1583),
    [anon_sym_STAR] = ACTIONS(1585),
    [anon_sym_SLASH] = ACTIONS(1585),
    [anon_sym_AMP] = ACTIONS(1587),
    [anon_sym_PIPE] = ACTIONS(1589),
    [anon_sym_CARET] = ACTIONS(1589),
    [anon_sym_PERCENT] = ACTIONS(1585),
    [anon_sym_LT_LT] = ACTIONS(1585),
    [anon_sym_GT_GT] = ACTIONS(1585),
    [anon_sym_GT_GT_GT] = ACTIONS(1585),
    [anon_sym_RPAREN] = ACTIONS(2313),
    [anon_sym_QMARK] = ACTIONS(1593),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [1141] = {
    [anon_sym_RBRACE] = ACTIONS(2315),
    [sym_comment] = ACTIONS(50),
  },
  [1142] = {
    [sym_annotation_type_body] = STATE(1183),
    [anon_sym_LBRACE] = ACTIONS(2317),
    [sym_comment] = ACTIONS(50),
  },
  [1143] = {
    [anon_sym_LBRACE] = ACTIONS(2319),
    [sym_comment] = ACTIONS(50),
  },
  [1144] = {
    [sym_module_directive] = STATE(197),
    [aux_sym_module_declaration_repeat1] = STATE(1186),
    [anon_sym_RBRACE] = ACTIONS(2321),
    [anon_sym_requires] = ACTIONS(420),
    [anon_sym_exports] = ACTIONS(422),
    [anon_sym_opens] = ACTIONS(422),
    [anon_sym_uses] = ACTIONS(424),
    [anon_sym_provides] = ACTIONS(426),
    [sym_comment] = ACTIONS(50),
  },
  [1145] = {
    [anon_sym_if] = ACTIONS(428),
    [anon_sym_RBRACE] = ACTIONS(428),
    [anon_sym_elseif] = ACTIONS(428),
    [anon_sym_AT] = ACTIONS(428),
    [anon_sym_static] = ACTIONS(428),
    [anon_sym_class] = ACTIONS(428),
    [anon_sym_public] = ACTIONS(428),
    [anon_sym_protected] = ACTIONS(428),
    [anon_sym_private] = ACTIONS(428),
    [anon_sym_abstract] = ACTIONS(428),
    [anon_sym_final] = ACTIONS(428),
    [anon_sym_strictfp] = ACTIONS(428),
    [anon_sym_default] = ACTIONS(428),
    [sym_comment] = ACTIONS(50),
  },
  [1146] = {
    [sym__semicolon] = ACTIONS(2323),
    [anon_sym_DOT] = ACTIONS(416),
    [sym_comment] = ACTIONS(50),
  },
  [1147] = {
    [anon_sym_DOT] = ACTIONS(2325),
    [sym_comment] = ACTIONS(50),
  },
  [1148] = {
    [anon_sym_if] = ACTIONS(438),
    [anon_sym_RBRACE] = ACTIONS(438),
    [anon_sym_elseif] = ACTIONS(438),
    [anon_sym_AT] = ACTIONS(438),
    [anon_sym_static] = ACTIONS(438),
    [anon_sym_class] = ACTIONS(438),
    [anon_sym_public] = ACTIONS(438),
    [anon_sym_protected] = ACTIONS(438),
    [anon_sym_private] = ACTIONS(438),
    [anon_sym_abstract] = ACTIONS(438),
    [anon_sym_final] = ACTIONS(438),
    [anon_sym_strictfp] = ACTIONS(438),
    [anon_sym_default] = ACTIONS(438),
    [sym_comment] = ACTIONS(50),
  },
  [1149] = {
    [anon_sym_STAR] = ACTIONS(2327),
    [sym_identifier] = ACTIONS(408),
    [sym_comment] = ACTIONS(50),
  },
  [1150] = {
    [sym__annotation] = STATE(236),
    [sym_normal_annotation] = STATE(240),
    [sym_marker_annotation] = STATE(240),
    [sym_single_element_annotation] = STATE(240),
    [sym_class_declaration] = STATE(233),
    [sym_normal_class_declaration] = STATE(241),
    [sym_modifier] = STATE(242),
    [sym_type_parameters] = STATE(243),
    [sym_interface_declaration] = STATE(233),
    [sym_annotation_type_declaration] = STATE(244),
    [sym_normal_interface_declaration] = STATE(244),
    [sym_interface_member_declaration] = STATE(245),
    [sym_constant_declaration] = STATE(233),
    [sym_variable_declarator_list] = STATE(246),
    [sym_variable_declarator] = STATE(247),
    [sym_variable_declarator_id] = STATE(96),
    [sym_interface_method_declaration] = STATE(233),
    [sym_method_header] = STATE(248),
    [sym_result] = STATE(249),
    [aux_sym_normal_class_declaration_repeat1] = STATE(250),
    [aux_sym_interface_body_repeat1] = STATE(1191),
    [sym__semicolon] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_RBRACE] = ACTIONS(2329),
    [anon_sym_AT] = ACTIONS(478),
    [anon_sym_static] = ACTIONS(480),
    [anon_sym_class] = ACTIONS(482),
    [anon_sym_public] = ACTIONS(480),
    [anon_sym_protected] = ACTIONS(480),
    [anon_sym_private] = ACTIONS(480),
    [anon_sym_abstract] = ACTIONS(480),
    [anon_sym_final] = ACTIONS(480),
    [anon_sym_strictfp] = ACTIONS(480),
    [anon_sym_default] = ACTIONS(480),
    [anon_sym_void] = ACTIONS(484),
    [anon_sym_interface] = ACTIONS(486),
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(50),
  },
  [1151] = {
    [sym_extends_interfaces] = STATE(1192),
    [sym_interface_body] = STATE(1193),
    [anon_sym_LBRACE] = ACTIONS(2231),
    [anon_sym_extends] = ACTIONS(306),
    [sym_comment] = ACTIONS(50),
  },
  [1152] = {
    [sym_interface_body] = STATE(1193),
    [anon_sym_LBRACE] = ACTIONS(2231),
    [sym_comment] = ACTIONS(50),
  },
  [1153] = {
    [anon_sym_if] = ACTIONS(488),
    [anon_sym_RBRACE] = ACTIONS(488),
    [anon_sym_elseif] = ACTIONS(488),
    [anon_sym_AT] = ACTIONS(488),
    [anon_sym_static] = ACTIONS(488),
    [anon_sym_class] = ACTIONS(488),
    [anon_sym_public] = ACTIONS(488),
    [anon_sym_protected] = ACTIONS(488),
    [anon_sym_private] = ACTIONS(488),
    [anon_sym_abstract] = ACTIONS(488),
    [anon_sym_final] = ACTIONS(488),
    [anon_sym_strictfp] = ACTIONS(488),
    [anon_sym_default] = ACTIONS(488),
    [sym_comment] = ACTIONS(50),
  },
  [1154] = {
    [sym_module_identifier] = STATE(1194),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(50),
  },
  [1155] = {
    [aux_sym_module_identifier_repeat1] = STATE(1195),
    [sym__semicolon] = ACTIONS(2323),
    [anon_sym_DOT] = ACTIONS(284),
    [sym_comment] = ACTIONS(50),
  },
  [1156] = {
    [sym_identifier] = ACTIONS(2331),
    [sym_comment] = ACTIONS(50),
  },
  [1157] = {
    [sym_type_parameters] = STATE(1197),
    [sym_extends_interfaces] = STATE(1192),
    [sym_interface_body] = STATE(1193),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(2231),
    [anon_sym_extends] = ACTIONS(306),
    [sym_comment] = ACTIONS(50),
  },
  [1158] = {
    [anon_sym_EQ] = ACTIONS(1128),
    [anon_sym_PLUS_EQ] = ACTIONS(1126),
    [anon_sym_DASH_EQ] = ACTIONS(1126),
    [anon_sym_STAR_EQ] = ACTIONS(1126),
    [anon_sym_SLASH_EQ] = ACTIONS(1126),
    [anon_sym_AMP_EQ] = ACTIONS(1126),
    [anon_sym_PIPE_EQ] = ACTIONS(1126),
    [anon_sym_CARET_EQ] = ACTIONS(1126),
    [anon_sym_PERCENT_EQ] = ACTIONS(1126),
    [anon_sym_LT_LT_EQ] = ACTIONS(1126),
    [anon_sym_GT_GT_EQ] = ACTIONS(1126),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1126),
    [anon_sym_GT] = ACTIONS(1575),
    [anon_sym_LT] = ACTIONS(1575),
    [anon_sym_EQ_EQ] = ACTIONS(1577),
    [anon_sym_GT_EQ] = ACTIONS(1577),
    [anon_sym_LT_EQ] = ACTIONS(1577),
    [anon_sym_BANG_EQ] = ACTIONS(1577),
    [anon_sym_AMP_AMP] = ACTIONS(1579),
    [anon_sym_PIPE_PIPE] = ACTIONS(1581),
    [anon_sym_PLUS] = ACTIONS(1583),
    [anon_sym_DASH] = ACTIONS(1583),
    [anon_sym_STAR] = ACTIONS(1585),
    [anon_sym_SLASH] = ACTIONS(1585),
    [anon_sym_AMP] = ACTIONS(1587),
    [anon_sym_PIPE] = ACTIONS(1589),
    [anon_sym_CARET] = ACTIONS(1589),
    [anon_sym_PERCENT] = ACTIONS(1585),
    [anon_sym_LT_LT] = ACTIONS(1585),
    [anon_sym_GT_GT] = ACTIONS(1585),
    [anon_sym_GT_GT_GT] = ACTIONS(1585),
    [anon_sym_RPAREN] = ACTIONS(1126),
    [anon_sym_QMARK] = ACTIONS(1593),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [1159] = {
    [anon_sym_if] = ACTIONS(1765),
    [anon_sym_RBRACE] = ACTIONS(1765),
    [anon_sym_elseif] = ACTIONS(1765),
    [anon_sym_AT] = ACTIONS(1765),
    [anon_sym_static] = ACTIONS(1765),
    [anon_sym_class] = ACTIONS(1765),
    [anon_sym_public] = ACTIONS(1765),
    [anon_sym_protected] = ACTIONS(1765),
    [anon_sym_private] = ACTIONS(1765),
    [anon_sym_abstract] = ACTIONS(1765),
    [anon_sym_final] = ACTIONS(1765),
    [anon_sym_strictfp] = ACTIONS(1765),
    [anon_sym_default] = ACTIONS(1765),
    [sym_comment] = ACTIONS(50),
  },
  [1160] = {
    [anon_sym_EQ] = ACTIONS(1505),
    [anon_sym_PLUS_EQ] = ACTIONS(1507),
    [anon_sym_DASH_EQ] = ACTIONS(1507),
    [anon_sym_STAR_EQ] = ACTIONS(1507),
    [anon_sym_SLASH_EQ] = ACTIONS(1507),
    [anon_sym_AMP_EQ] = ACTIONS(1507),
    [anon_sym_PIPE_EQ] = ACTIONS(1507),
    [anon_sym_CARET_EQ] = ACTIONS(1507),
    [anon_sym_PERCENT_EQ] = ACTIONS(1507),
    [anon_sym_LT_LT_EQ] = ACTIONS(1507),
    [anon_sym_GT_GT_EQ] = ACTIONS(1507),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1507),
    [anon_sym_GT] = ACTIONS(1509),
    [anon_sym_LT] = ACTIONS(1509),
    [anon_sym_EQ_EQ] = ACTIONS(1511),
    [anon_sym_GT_EQ] = ACTIONS(1511),
    [anon_sym_LT_EQ] = ACTIONS(1511),
    [anon_sym_BANG_EQ] = ACTIONS(1511),
    [anon_sym_AMP_AMP] = ACTIONS(1887),
    [anon_sym_PIPE_PIPE] = ACTIONS(1889),
    [anon_sym_PLUS] = ACTIONS(1891),
    [anon_sym_DASH] = ACTIONS(1891),
    [anon_sym_STAR] = ACTIONS(1893),
    [anon_sym_SLASH] = ACTIONS(1893),
    [anon_sym_AMP] = ACTIONS(1513),
    [anon_sym_PIPE] = ACTIONS(1895),
    [anon_sym_CARET] = ACTIONS(1895),
    [anon_sym_PERCENT] = ACTIONS(1893),
    [anon_sym_LT_LT] = ACTIONS(1893),
    [anon_sym_GT_GT] = ACTIONS(1893),
    [anon_sym_GT_GT_GT] = ACTIONS(1893),
    [anon_sym_RPAREN] = ACTIONS(2333),
    [anon_sym_COMMA] = ACTIONS(2333),
    [anon_sym_QMARK] = ACTIONS(1901),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(50),
  },
  [1161] = {
    [anon_sym_LT] = ACTIONS(2335),
    [anon_sym_LPAREN] = ACTIONS(2337),
    [anon_sym_DOT] = ACTIONS(2337),
    [anon_sym_LT_GT] = ACTIONS(2337),
    [sym_comment] = ACTIONS(50),
  },
  [1162] = {
    [anon_sym_DOT] = ACTIONS(2339),
    [anon_sym_LBRACK] = ACTIONS(2339),
    [anon_sym_COLON_COLON] = ACTIONS(2339),
    [sym_comment] = ACTIONS(50),
  },
  [1163] = {
    [sym_class_body] = STATE(1198),
    [anon_sym_LBRACE] = ACTIONS(978),
    [anon_sym_DOT] = ACTIONS(2339),
    [anon_sym_LBRACK] = ACTIONS(2339),
    [anon_sym_COLON_COLON] = ACTIONS(2339),
    [sym_comment] = ACTIONS(50),
  },
  [1164] = {
    [anon_sym_COMMA] = ACTIONS(2341),
    [anon_sym_RBRACE] = ACTIONS(2341),
    [anon_sym_DOT] = ACTIONS(2341),
    [anon_sym_COLON_COLON] = ACTIONS(2341),
    [sym_comment] = ACTIONS(50),
  },
  [1165] = {
    [sym__expression] = STATE(1099),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym_variable_initializer] = STATE(1200),
    [sym_array_initializer] = STATE(1101),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1517),
    [anon_sym_TILDE] = ACTIONS(1517),
    [anon_sym_PLUS_PLUS] = ACTIONS(1519),
    [anon_sym_DASH_DASH] = ACTIONS(1519),
    [anon_sym_LBRACE] = ACTIONS(1927),
    [anon_sym_RBRACE] = ACTIONS(2343),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1166] = {
    [anon_sym_COMMA] = ACTIONS(2345),
    [anon_sym_RBRACE] = ACTIONS(2343),
    [sym_comment] = ACTIONS(50),
  },
  [1167] = {
    [anon_sym_if] = ACTIONS(2347),
    [anon_sym_RBRACE] = ACTIONS(2347),
    [anon_sym_AT] = ACTIONS(2347),
    [anon_sym_static] = ACTIONS(2347),
    [anon_sym_class] = ACTIONS(2347),
    [anon_sym_public] = ACTIONS(2347),
    [anon_sym_protected] = ACTIONS(2347),
    [anon_sym_private] = ACTIONS(2347),
    [anon_sym_abstract] = ACTIONS(2347),
    [anon_sym_final] = ACTIONS(2347),
    [anon_sym_strictfp] = ACTIONS(2347),
    [anon_sym_default] = ACTIONS(2347),
    [sym_comment] = ACTIONS(50),
  },
  [1168] = {
    [sym__expression] = STATE(1202),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1651),
    [anon_sym_TILDE] = ACTIONS(1651),
    [anon_sym_PLUS_PLUS] = ACTIONS(1653),
    [anon_sym_DASH_DASH] = ACTIONS(1653),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1169] = {
    [sym__expression] = STATE(824),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym_argument_list] = STATE(1204),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(2349),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1170] = {
    [anon_sym_LPAREN] = ACTIONS(2351),
    [sym_comment] = ACTIONS(50),
  },
  [1171] = {
    [anon_sym_DOT] = ACTIONS(2353),
    [anon_sym_LBRACK] = ACTIONS(2353),
    [anon_sym_COLON_COLON] = ACTIONS(2353),
    [sym_comment] = ACTIONS(50),
  },
  [1172] = {
    [anon_sym_DOT] = ACTIONS(2355),
    [anon_sym_LBRACK] = ACTIONS(2355),
    [anon_sym_COLON_COLON] = ACTIONS(2355),
    [sym_comment] = ACTIONS(50),
  },
  [1173] = {
    [anon_sym_RPAREN] = ACTIONS(2349),
    [sym_comment] = ACTIONS(50),
  },
  [1174] = {
    [anon_sym_super] = ACTIONS(2247),
    [sym_identifier] = ACTIONS(2357),
    [sym_comment] = ACTIONS(50),
  },
  [1175] = {
    [sym__semicolon] = ACTIONS(2359),
    [sym_comment] = ACTIONS(50),
  },
  [1176] = {
    [anon_sym_RPAREN] = ACTIONS(2361),
    [sym_comment] = ACTIONS(50),
  },
  [1177] = {
    [anon_sym_DOT] = ACTIONS(2185),
    [anon_sym_AT] = ACTIONS(2185),
    [sym_identifier] = ACTIONS(2363),
    [sym_comment] = ACTIONS(50),
  },
  [1178] = {
    [sym_lambda_expression] = STATE(1063),
    [sym_lambda_parameters] = STATE(24),
    [sym_unary_expression] = STATE(435),
    [sym_conditional_expression] = STATE(1063),
    [sym_conditional_or_expression] = STATE(901),
    [sym_conditional_and_expression] = STATE(902),
    [sym_inclusive_or_expression] = STATE(903),
    [sym_exclusive_or_expression] = STATE(904),
    [sym_and_expression] = STATE(441),
    [sym_relational_expression] = STATE(905),
    [sym_equality_expression] = STATE(906),
    [sym_shift_expression] = STATE(907),
    [sym_additive_expression] = STATE(908),
    [sym_multiplicative_expression] = STATE(909),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1777),
    [anon_sym_TILDE] = ACTIONS(1777),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1179] = {
    [anon_sym_EQ] = ACTIONS(1128),
    [anon_sym_PLUS_EQ] = ACTIONS(1126),
    [anon_sym_DASH_EQ] = ACTIONS(1126),
    [anon_sym_STAR_EQ] = ACTIONS(1126),
    [anon_sym_SLASH_EQ] = ACTIONS(1126),
    [anon_sym_AMP_EQ] = ACTIONS(1126),
    [anon_sym_PIPE_EQ] = ACTIONS(1126),
    [anon_sym_CARET_EQ] = ACTIONS(1126),
    [anon_sym_PERCENT_EQ] = ACTIONS(1126),
    [anon_sym_LT_LT_EQ] = ACTIONS(1126),
    [anon_sym_GT_GT_EQ] = ACTIONS(1126),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1126),
    [anon_sym_GT] = ACTIONS(1787),
    [anon_sym_LT] = ACTIONS(1787),
    [anon_sym_EQ_EQ] = ACTIONS(1789),
    [anon_sym_GT_EQ] = ACTIONS(1789),
    [anon_sym_LT_EQ] = ACTIONS(1789),
    [anon_sym_BANG_EQ] = ACTIONS(1789),
    [anon_sym_AMP_AMP] = ACTIONS(2197),
    [anon_sym_PIPE_PIPE] = ACTIONS(2199),
    [anon_sym_PLUS] = ACTIONS(2201),
    [anon_sym_DASH] = ACTIONS(2201),
    [anon_sym_STAR] = ACTIONS(2203),
    [anon_sym_SLASH] = ACTIONS(2203),
    [anon_sym_AMP] = ACTIONS(1791),
    [anon_sym_PIPE] = ACTIONS(2205),
    [anon_sym_CARET] = ACTIONS(2205),
    [anon_sym_PERCENT] = ACTIONS(2203),
    [anon_sym_LT_LT] = ACTIONS(2203),
    [anon_sym_GT_GT] = ACTIONS(2203),
    [anon_sym_GT_GT_GT] = ACTIONS(2203),
    [anon_sym_COMMA] = ACTIONS(1126),
    [anon_sym_QMARK] = ACTIONS(2207),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(1126),
    [sym_comment] = ACTIONS(50),
  },
  [1180] = {
    [sym__statement] = STATE(1209),
    [sym__literal] = STATE(956),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(957),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym__annotation] = STATE(26),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym__declaration] = STATE(959),
    [sym_module_declaration] = STATE(960),
    [sym_package_declaration] = STATE(960),
    [sym_import_statement] = STATE(960),
    [sym_type_import_on_declaraction] = STATE(961),
    [sym_single_static_import_declaration] = STATE(961),
    [sym_static_import_on_demand_declaration] = STATE(961),
    [sym_class_declaration] = STATE(960),
    [sym_normal_class_declaration] = STATE(338),
    [sym_modifier] = STATE(32),
    [sym_interface_declaration] = STATE(960),
    [sym_annotation_type_declaration] = STATE(962),
    [sym_normal_interface_declaration] = STATE(962),
    [aux_sym_class_or_interface_type_repeat1] = STATE(964),
    [aux_sym_normal_class_declaration_repeat1] = STATE(965),
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
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(28),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_PLUS_PLUS] = ACTIONS(30),
    [anon_sym_DASH_DASH] = ACTIONS(30),
    [anon_sym_LBRACE] = ACTIONS(2365),
    [anon_sym_AT] = ACTIONS(1851),
    [anon_sym_open] = ACTIONS(1853),
    [anon_sym_module] = ACTIONS(1855),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_package] = ACTIONS(1857),
    [anon_sym_import] = ACTIONS(1859),
    [anon_sym_class] = ACTIONS(1000),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(1861),
    [sym_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(50),
  },
  [1181] = {
    [anon_sym_if] = ACTIONS(2367),
    [anon_sym_RBRACE] = ACTIONS(2367),
    [anon_sym_AT] = ACTIONS(2367),
    [anon_sym_static] = ACTIONS(2367),
    [anon_sym_class] = ACTIONS(2367),
    [anon_sym_public] = ACTIONS(2367),
    [anon_sym_protected] = ACTIONS(2367),
    [anon_sym_private] = ACTIONS(2367),
    [anon_sym_abstract] = ACTIONS(2367),
    [anon_sym_final] = ACTIONS(2367),
    [anon_sym_strictfp] = ACTIONS(2367),
    [anon_sym_default] = ACTIONS(2367),
    [sym_comment] = ACTIONS(50),
  },
  [1182] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(216),
    [sym_marker_annotation] = STATE(216),
    [sym_single_element_annotation] = STATE(216),
    [sym_class_declaration] = STATE(294),
    [sym_normal_class_declaration] = STATE(217),
    [sym_modifier] = STATE(32),
    [sym_interface_declaration] = STATE(294),
    [sym_annotation_type_declaration] = STATE(222),
    [sym_annotation_type_member_declaration] = STATE(295),
    [sym_annotation_type_element_declaration] = STATE(294),
    [sym_normal_interface_declaration] = STATE(222),
    [sym_constant_declaration] = STATE(294),
    [sym_variable_declarator_list] = STATE(296),
    [sym_variable_declarator] = STATE(247),
    [sym_variable_declarator_id] = STATE(96),
    [aux_sym_normal_class_declaration_repeat1] = STATE(297),
    [aux_sym_annotation_type_body_repeat1] = STATE(1211),
    [anon_sym_RBRACE] = ACTIONS(2369),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(460),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(462),
    [sym_identifier] = ACTIONS(594),
    [sym_comment] = ACTIONS(50),
  },
  [1183] = {
    [anon_sym_if] = ACTIONS(596),
    [anon_sym_RBRACE] = ACTIONS(596),
    [anon_sym_elseif] = ACTIONS(596),
    [anon_sym_AT] = ACTIONS(596),
    [anon_sym_static] = ACTIONS(596),
    [anon_sym_class] = ACTIONS(596),
    [anon_sym_public] = ACTIONS(596),
    [anon_sym_protected] = ACTIONS(596),
    [anon_sym_private] = ACTIONS(596),
    [anon_sym_abstract] = ACTIONS(596),
    [anon_sym_final] = ACTIONS(596),
    [anon_sym_strictfp] = ACTIONS(596),
    [anon_sym_default] = ACTIONS(596),
    [sym_comment] = ACTIONS(50),
  },
  [1184] = {
    [sym_module_directive] = STATE(197),
    [aux_sym_module_declaration_repeat1] = STATE(1213),
    [anon_sym_RBRACE] = ACTIONS(2371),
    [anon_sym_requires] = ACTIONS(420),
    [anon_sym_exports] = ACTIONS(422),
    [anon_sym_opens] = ACTIONS(422),
    [anon_sym_uses] = ACTIONS(424),
    [anon_sym_provides] = ACTIONS(426),
    [sym_comment] = ACTIONS(50),
  },
  [1185] = {
    [anon_sym_if] = ACTIONS(624),
    [anon_sym_RBRACE] = ACTIONS(624),
    [anon_sym_elseif] = ACTIONS(624),
    [anon_sym_AT] = ACTIONS(624),
    [anon_sym_static] = ACTIONS(624),
    [anon_sym_class] = ACTIONS(624),
    [anon_sym_public] = ACTIONS(624),
    [anon_sym_protected] = ACTIONS(624),
    [anon_sym_private] = ACTIONS(624),
    [anon_sym_abstract] = ACTIONS(624),
    [anon_sym_final] = ACTIONS(624),
    [anon_sym_strictfp] = ACTIONS(624),
    [anon_sym_default] = ACTIONS(624),
    [sym_comment] = ACTIONS(50),
  },
  [1186] = {
    [sym_module_directive] = STATE(316),
    [anon_sym_RBRACE] = ACTIONS(2371),
    [anon_sym_requires] = ACTIONS(420),
    [anon_sym_exports] = ACTIONS(422),
    [anon_sym_opens] = ACTIONS(422),
    [anon_sym_uses] = ACTIONS(424),
    [anon_sym_provides] = ACTIONS(426),
    [sym_comment] = ACTIONS(50),
  },
  [1187] = {
    [anon_sym_if] = ACTIONS(638),
    [anon_sym_RBRACE] = ACTIONS(638),
    [anon_sym_elseif] = ACTIONS(638),
    [anon_sym_AT] = ACTIONS(638),
    [anon_sym_static] = ACTIONS(638),
    [anon_sym_class] = ACTIONS(638),
    [anon_sym_public] = ACTIONS(638),
    [anon_sym_protected] = ACTIONS(638),
    [anon_sym_private] = ACTIONS(638),
    [anon_sym_abstract] = ACTIONS(638),
    [anon_sym_final] = ACTIONS(638),
    [anon_sym_strictfp] = ACTIONS(638),
    [anon_sym_default] = ACTIONS(638),
    [sym_comment] = ACTIONS(50),
  },
  [1188] = {
    [anon_sym_STAR] = ACTIONS(2373),
    [sym_identifier] = ACTIONS(2375),
    [sym_comment] = ACTIONS(50),
  },
  [1189] = {
    [sym__semicolon] = ACTIONS(2377),
    [sym_comment] = ACTIONS(50),
  },
  [1190] = {
    [anon_sym_if] = ACTIONS(748),
    [anon_sym_RBRACE] = ACTIONS(748),
    [anon_sym_elseif] = ACTIONS(748),
    [anon_sym_AT] = ACTIONS(748),
    [anon_sym_static] = ACTIONS(748),
    [anon_sym_class] = ACTIONS(748),
    [anon_sym_public] = ACTIONS(748),
    [anon_sym_protected] = ACTIONS(748),
    [anon_sym_private] = ACTIONS(748),
    [anon_sym_abstract] = ACTIONS(748),
    [anon_sym_final] = ACTIONS(748),
    [anon_sym_strictfp] = ACTIONS(748),
    [anon_sym_default] = ACTIONS(748),
    [sym_comment] = ACTIONS(50),
  },
  [1191] = {
    [sym__annotation] = STATE(236),
    [sym_normal_annotation] = STATE(240),
    [sym_marker_annotation] = STATE(240),
    [sym_single_element_annotation] = STATE(240),
    [sym_class_declaration] = STATE(233),
    [sym_normal_class_declaration] = STATE(241),
    [sym_modifier] = STATE(242),
    [sym_type_parameters] = STATE(243),
    [sym_interface_declaration] = STATE(233),
    [sym_annotation_type_declaration] = STATE(244),
    [sym_normal_interface_declaration] = STATE(244),
    [sym_interface_member_declaration] = STATE(393),
    [sym_constant_declaration] = STATE(233),
    [sym_variable_declarator_list] = STATE(246),
    [sym_variable_declarator] = STATE(247),
    [sym_variable_declarator_id] = STATE(96),
    [sym_interface_method_declaration] = STATE(233),
    [sym_method_header] = STATE(248),
    [sym_result] = STATE(249),
    [aux_sym_normal_class_declaration_repeat1] = STATE(250),
    [sym__semicolon] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_RBRACE] = ACTIONS(2379),
    [anon_sym_AT] = ACTIONS(478),
    [anon_sym_static] = ACTIONS(480),
    [anon_sym_class] = ACTIONS(482),
    [anon_sym_public] = ACTIONS(480),
    [anon_sym_protected] = ACTIONS(480),
    [anon_sym_private] = ACTIONS(480),
    [anon_sym_abstract] = ACTIONS(480),
    [anon_sym_final] = ACTIONS(480),
    [anon_sym_strictfp] = ACTIONS(480),
    [anon_sym_default] = ACTIONS(480),
    [anon_sym_void] = ACTIONS(484),
    [anon_sym_interface] = ACTIONS(486),
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(50),
  },
  [1192] = {
    [sym_interface_body] = STATE(1218),
    [anon_sym_LBRACE] = ACTIONS(2231),
    [sym_comment] = ACTIONS(50),
  },
  [1193] = {
    [anon_sym_if] = ACTIONS(794),
    [anon_sym_RBRACE] = ACTIONS(794),
    [anon_sym_elseif] = ACTIONS(794),
    [anon_sym_AT] = ACTIONS(794),
    [anon_sym_static] = ACTIONS(794),
    [anon_sym_class] = ACTIONS(794),
    [anon_sym_public] = ACTIONS(794),
    [anon_sym_protected] = ACTIONS(794),
    [anon_sym_private] = ACTIONS(794),
    [anon_sym_abstract] = ACTIONS(794),
    [anon_sym_final] = ACTIONS(794),
    [anon_sym_strictfp] = ACTIONS(794),
    [anon_sym_default] = ACTIONS(794),
    [sym_comment] = ACTIONS(50),
  },
  [1194] = {
    [anon_sym_LBRACE] = ACTIONS(2381),
    [sym_comment] = ACTIONS(50),
  },
  [1195] = {
    [sym__semicolon] = ACTIONS(2383),
    [anon_sym_DOT] = ACTIONS(416),
    [sym_comment] = ACTIONS(50),
  },
  [1196] = {
    [sym_annotation_type_body] = STATE(1221),
    [anon_sym_LBRACE] = ACTIONS(2317),
    [sym_comment] = ACTIONS(50),
  },
  [1197] = {
    [sym_extends_interfaces] = STATE(1222),
    [sym_interface_body] = STATE(1218),
    [anon_sym_LBRACE] = ACTIONS(2231),
    [anon_sym_extends] = ACTIONS(306),
    [sym_comment] = ACTIONS(50),
  },
  [1198] = {
    [anon_sym_DOT] = ACTIONS(2385),
    [anon_sym_LBRACK] = ACTIONS(2385),
    [anon_sym_COLON_COLON] = ACTIONS(2385),
    [sym_comment] = ACTIONS(50),
  },
  [1199] = {
    [anon_sym_COMMA] = ACTIONS(2387),
    [anon_sym_RBRACE] = ACTIONS(2387),
    [anon_sym_DOT] = ACTIONS(2387),
    [anon_sym_COLON_COLON] = ACTIONS(2387),
    [sym_comment] = ACTIONS(50),
  },
  [1200] = {
    [anon_sym_COMMA] = ACTIONS(2389),
    [anon_sym_RBRACE] = ACTIONS(2389),
    [sym_comment] = ACTIONS(50),
  },
  [1201] = {
    [sym__expression] = STATE(1099),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym_variable_initializer] = STATE(1224),
    [sym_array_initializer] = STATE(1101),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(1517),
    [anon_sym_TILDE] = ACTIONS(1517),
    [anon_sym_PLUS_PLUS] = ACTIONS(1519),
    [anon_sym_DASH_DASH] = ACTIONS(1519),
    [anon_sym_LBRACE] = ACTIONS(1927),
    [anon_sym_RBRACE] = ACTIONS(2391),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1202] = {
    [anon_sym_EQ] = ACTIONS(1128),
    [anon_sym_PLUS_EQ] = ACTIONS(1126),
    [anon_sym_DASH_EQ] = ACTIONS(1126),
    [anon_sym_STAR_EQ] = ACTIONS(1126),
    [anon_sym_SLASH_EQ] = ACTIONS(1126),
    [anon_sym_AMP_EQ] = ACTIONS(1126),
    [anon_sym_PIPE_EQ] = ACTIONS(1126),
    [anon_sym_CARET_EQ] = ACTIONS(1126),
    [anon_sym_PERCENT_EQ] = ACTIONS(1126),
    [anon_sym_LT_LT_EQ] = ACTIONS(1126),
    [anon_sym_GT_GT_EQ] = ACTIONS(1126),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1126),
    [anon_sym_GT] = ACTIONS(1937),
    [anon_sym_LT] = ACTIONS(1937),
    [anon_sym_EQ_EQ] = ACTIONS(1939),
    [anon_sym_GT_EQ] = ACTIONS(1939),
    [anon_sym_LT_EQ] = ACTIONS(1939),
    [anon_sym_BANG_EQ] = ACTIONS(1939),
    [anon_sym_AMP_AMP] = ACTIONS(1941),
    [anon_sym_PIPE_PIPE] = ACTIONS(1943),
    [anon_sym_PLUS] = ACTIONS(1945),
    [anon_sym_DASH] = ACTIONS(1945),
    [anon_sym_STAR] = ACTIONS(1947),
    [anon_sym_SLASH] = ACTIONS(1947),
    [anon_sym_AMP] = ACTIONS(1949),
    [anon_sym_PIPE] = ACTIONS(1951),
    [anon_sym_CARET] = ACTIONS(1951),
    [anon_sym_PERCENT] = ACTIONS(1947),
    [anon_sym_LT_LT] = ACTIONS(1947),
    [anon_sym_GT_GT] = ACTIONS(1947),
    [anon_sym_GT_GT_GT] = ACTIONS(1947),
    [anon_sym_QMARK] = ACTIONS(1953),
    [anon_sym_PLUS_PLUS] = ACTIONS(136),
    [anon_sym_DASH_DASH] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(1126),
    [sym_comment] = ACTIONS(50),
  },
  [1203] = {
    [anon_sym_DOT] = ACTIONS(2393),
    [anon_sym_LBRACK] = ACTIONS(2393),
    [anon_sym_COLON_COLON] = ACTIONS(2393),
    [sym_comment] = ACTIONS(50),
  },
  [1204] = {
    [anon_sym_RPAREN] = ACTIONS(2395),
    [sym_comment] = ACTIONS(50),
  },
  [1205] = {
    [sym__expression] = STATE(824),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym_argument_list] = STATE(1226),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(2395),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1182),
    [anon_sym_DASH_DASH] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(50),
  },
  [1206] = {
    [anon_sym_if] = ACTIONS(2397),
    [anon_sym_RBRACE] = ACTIONS(2397),
    [anon_sym_AT] = ACTIONS(2397),
    [anon_sym_static] = ACTIONS(2397),
    [anon_sym_class] = ACTIONS(2397),
    [anon_sym_public] = ACTIONS(2397),
    [anon_sym_protected] = ACTIONS(2397),
    [anon_sym_private] = ACTIONS(2397),
    [anon_sym_abstract] = ACTIONS(2397),
    [anon_sym_final] = ACTIONS(2397),
    [anon_sym_strictfp] = ACTIONS(2397),
    [anon_sym_default] = ACTIONS(2397),
    [sym_comment] = ACTIONS(50),
  },
  [1207] = {
    [sym__semicolon] = ACTIONS(2399),
    [sym_comment] = ACTIONS(50),
  },
  [1208] = {
    [sym__statement] = STATE(1228),
    [sym__literal] = STATE(21),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(22),
    [sym_assignment_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_lambda_expression] = STATE(23),
    [sym_lambda_parameters] = STATE(24),
    [sym_ternary_expression] = STATE(23),
    [sym_unary_expression] = STATE(25),
    [sym_update_expression] = STATE(23),
    [sym__annotation] = STATE(26),
    [sym_normal_annotation] = STATE(27),
    [sym_marker_annotation] = STATE(27),
    [sym_single_element_annotation] = STATE(27),
    [sym__declaration] = STATE(28),
    [sym_module_declaration] = STATE(29),
    [sym_package_declaration] = STATE(29),
    [sym_import_statement] = STATE(29),
    [sym_type_import_on_declaraction] = STATE(30),
    [sym_single_static_import_declaration] = STATE(30),
    [sym_static_import_on_demand_declaration] = STATE(30),
    [sym_class_declaration] = STATE(29),
    [sym_normal_class_declaration] = STATE(31),
    [sym_modifier] = STATE(32),
    [sym_interface_declaration] = STATE(29),
    [sym_annotation_type_declaration] = STATE(33),
    [sym_normal_interface_declaration] = STATE(33),
    [aux_sym_class_or_interface_type_repeat1] = STATE(35),
    [aux_sym_normal_class_declaration_repeat1] = STATE(36),
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
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_BANG] = ACTIONS(28),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_PLUS_PLUS] = ACTIONS(30),
    [anon_sym_DASH_DASH] = ACTIONS(30),
    [anon_sym_AT] = ACTIONS(32),
    [anon_sym_open] = ACTIONS(34),
    [anon_sym_module] = ACTIONS(36),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_package] = ACTIONS(40),
    [anon_sym_import] = ACTIONS(42),
    [anon_sym_class] = ACTIONS(44),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(46),
    [sym_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(50),
  },
  [1209] = {
    [anon_sym_if] = ACTIONS(2401),
    [anon_sym_RBRACE] = ACTIONS(2401),
    [anon_sym_elseif] = ACTIONS(2401),
    [anon_sym_AT] = ACTIONS(2401),
    [anon_sym_static] = ACTIONS(2401),
    [anon_sym_class] = ACTIONS(2401),
    [anon_sym_public] = ACTIONS(2401),
    [anon_sym_protected] = ACTIONS(2401),
    [anon_sym_private] = ACTIONS(2401),
    [anon_sym_abstract] = ACTIONS(2401),
    [anon_sym_final] = ACTIONS(2401),
    [anon_sym_strictfp] = ACTIONS(2401),
    [anon_sym_default] = ACTIONS(2401),
    [sym_comment] = ACTIONS(50),
  },
  [1210] = {
    [anon_sym_if] = ACTIONS(846),
    [anon_sym_RBRACE] = ACTIONS(846),
    [anon_sym_elseif] = ACTIONS(846),
    [anon_sym_AT] = ACTIONS(846),
    [anon_sym_static] = ACTIONS(846),
    [anon_sym_class] = ACTIONS(846),
    [anon_sym_public] = ACTIONS(846),
    [anon_sym_protected] = ACTIONS(846),
    [anon_sym_private] = ACTIONS(846),
    [anon_sym_abstract] = ACTIONS(846),
    [anon_sym_final] = ACTIONS(846),
    [anon_sym_strictfp] = ACTIONS(846),
    [anon_sym_default] = ACTIONS(846),
    [sym_comment] = ACTIONS(50),
  },
  [1211] = {
    [sym__annotation] = STATE(13),
    [sym_normal_annotation] = STATE(216),
    [sym_marker_annotation] = STATE(216),
    [sym_single_element_annotation] = STATE(216),
    [sym_class_declaration] = STATE(294),
    [sym_normal_class_declaration] = STATE(217),
    [sym_modifier] = STATE(32),
    [sym_interface_declaration] = STATE(294),
    [sym_annotation_type_declaration] = STATE(222),
    [sym_annotation_type_member_declaration] = STATE(431),
    [sym_annotation_type_element_declaration] = STATE(294),
    [sym_normal_interface_declaration] = STATE(222),
    [sym_constant_declaration] = STATE(294),
    [sym_variable_declarator_list] = STATE(296),
    [sym_variable_declarator] = STATE(247),
    [sym_variable_declarator_id] = STATE(96),
    [aux_sym_normal_class_declaration_repeat1] = STATE(297),
    [anon_sym_RBRACE] = ACTIONS(2403),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_static] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(460),
    [anon_sym_public] = ACTIONS(38),
    [anon_sym_protected] = ACTIONS(38),
    [anon_sym_private] = ACTIONS(38),
    [anon_sym_abstract] = ACTIONS(38),
    [anon_sym_final] = ACTIONS(38),
    [anon_sym_strictfp] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_interface] = ACTIONS(462),
    [sym_identifier] = ACTIONS(594),
    [sym_comment] = ACTIONS(50),
  },
  [1212] = {
    [anon_sym_if] = ACTIONS(888),
    [anon_sym_RBRACE] = ACTIONS(888),
    [anon_sym_elseif] = ACTIONS(888),
    [anon_sym_AT] = ACTIONS(888),
    [anon_sym_static] = ACTIONS(888),
    [anon_sym_class] = ACTIONS(888),
    [anon_sym_public] = ACTIONS(888),
    [anon_sym_protected] = ACTIONS(888),
    [anon_sym_private] = ACTIONS(888),
    [anon_sym_abstract] = ACTIONS(888),
    [anon_sym_final] = ACTIONS(888),
    [anon_sym_strictfp] = ACTIONS(888),
    [anon_sym_default] = ACTIONS(888),
    [sym_comment] = ACTIONS(50),
  },
  [1213] = {
    [sym_module_directive] = STATE(316),
    [anon_sym_RBRACE] = ACTIONS(2405),
    [anon_sym_requires] = ACTIONS(420),
    [anon_sym_exports] = ACTIONS(422),
    [anon_sym_opens] = ACTIONS(422),
    [anon_sym_uses] = ACTIONS(424),
    [anon_sym_provides] = ACTIONS(426),
    [sym_comment] = ACTIONS(50),
  },
  [1214] = {
    [sym__semicolon] = ACTIONS(2407),
    [sym_comment] = ACTIONS(50),
  },
  [1215] = {
    [sym__semicolon] = ACTIONS(2409),
    [anon_sym_DOT] = ACTIONS(614),
    [sym_comment] = ACTIONS(50),
  },
  [1216] = {
    [anon_sym_if] = ACTIONS(928),
    [anon_sym_RBRACE] = ACTIONS(928),
    [anon_sym_elseif] = ACTIONS(928),
    [anon_sym_AT] = ACTIONS(928),
    [anon_sym_static] = ACTIONS(928),
    [anon_sym_class] = ACTIONS(928),
    [anon_sym_public] = ACTIONS(928),
    [anon_sym_protected] = ACTIONS(928),
    [anon_sym_private] = ACTIONS(928),
    [anon_sym_abstract] = ACTIONS(928),
    [anon_sym_final] = ACTIONS(928),
    [anon_sym_strictfp] = ACTIONS(928),
    [anon_sym_default] = ACTIONS(928),
    [sym_comment] = ACTIONS(50),
  },
  [1217] = {
    [anon_sym_if] = ACTIONS(1106),
    [anon_sym_RBRACE] = ACTIONS(1106),
    [anon_sym_elseif] = ACTIONS(1106),
    [anon_sym_AT] = ACTIONS(1106),
    [anon_sym_static] = ACTIONS(1106),
    [anon_sym_class] = ACTIONS(1106),
    [anon_sym_public] = ACTIONS(1106),
    [anon_sym_protected] = ACTIONS(1106),
    [anon_sym_private] = ACTIONS(1106),
    [anon_sym_abstract] = ACTIONS(1106),
    [anon_sym_final] = ACTIONS(1106),
    [anon_sym_strictfp] = ACTIONS(1106),
    [anon_sym_default] = ACTIONS(1106),
    [sym_comment] = ACTIONS(50),
  },
  [1218] = {
    [anon_sym_if] = ACTIONS(1118),
    [anon_sym_RBRACE] = ACTIONS(1118),
    [anon_sym_elseif] = ACTIONS(1118),
    [anon_sym_AT] = ACTIONS(1118),
    [anon_sym_static] = ACTIONS(1118),
    [anon_sym_class] = ACTIONS(1118),
    [anon_sym_public] = ACTIONS(1118),
    [anon_sym_protected] = ACTIONS(1118),
    [anon_sym_private] = ACTIONS(1118),
    [anon_sym_abstract] = ACTIONS(1118),
    [anon_sym_final] = ACTIONS(1118),
    [anon_sym_strictfp] = ACTIONS(1118),
    [anon_sym_default] = ACTIONS(1118),
    [sym_comment] = ACTIONS(50),
  },
  [1219] = {
    [sym_module_directive] = STATE(197),
    [aux_sym_module_declaration_repeat1] = STATE(1233),
    [anon_sym_RBRACE] = ACTIONS(2405),
    [anon_sym_requires] = ACTIONS(420),
    [anon_sym_exports] = ACTIONS(422),
    [anon_sym_opens] = ACTIONS(422),
    [anon_sym_uses] = ACTIONS(424),
    [anon_sym_provides] = ACTIONS(426),
    [sym_comment] = ACTIONS(50),
  },
  [1220] = {
    [anon_sym_if] = ACTIONS(1132),
    [anon_sym_RBRACE] = ACTIONS(1132),
    [anon_sym_elseif] = ACTIONS(1132),
    [anon_sym_AT] = ACTIONS(1132),
    [anon_sym_static] = ACTIONS(1132),
    [anon_sym_class] = ACTIONS(1132),
    [anon_sym_public] = ACTIONS(1132),
    [anon_sym_protected] = ACTIONS(1132),
    [anon_sym_private] = ACTIONS(1132),
    [anon_sym_abstract] = ACTIONS(1132),
    [anon_sym_final] = ACTIONS(1132),
    [anon_sym_strictfp] = ACTIONS(1132),
    [anon_sym_default] = ACTIONS(1132),
    [sym_comment] = ACTIONS(50),
  },
  [1221] = {
    [anon_sym_if] = ACTIONS(1138),
    [anon_sym_RBRACE] = ACTIONS(1138),
    [anon_sym_elseif] = ACTIONS(1138),
    [anon_sym_AT] = ACTIONS(1138),
    [anon_sym_static] = ACTIONS(1138),
    [anon_sym_class] = ACTIONS(1138),
    [anon_sym_public] = ACTIONS(1138),
    [anon_sym_protected] = ACTIONS(1138),
    [anon_sym_private] = ACTIONS(1138),
    [anon_sym_abstract] = ACTIONS(1138),
    [anon_sym_final] = ACTIONS(1138),
    [anon_sym_strictfp] = ACTIONS(1138),
    [anon_sym_default] = ACTIONS(1138),
    [sym_comment] = ACTIONS(50),
  },
  [1222] = {
    [sym_interface_body] = STATE(1234),
    [anon_sym_LBRACE] = ACTIONS(2231),
    [sym_comment] = ACTIONS(50),
  },
  [1223] = {
    [anon_sym_COMMA] = ACTIONS(2411),
    [anon_sym_RBRACE] = ACTIONS(2411),
    [anon_sym_DOT] = ACTIONS(2411),
    [anon_sym_COLON_COLON] = ACTIONS(2411),
    [sym_comment] = ACTIONS(50),
  },
  [1224] = {
    [anon_sym_COMMA] = ACTIONS(2413),
    [anon_sym_RBRACE] = ACTIONS(2413),
    [sym_comment] = ACTIONS(50),
  },
  [1225] = {
    [anon_sym_DOT] = ACTIONS(2415),
    [anon_sym_LBRACK] = ACTIONS(2415),
    [anon_sym_COLON_COLON] = ACTIONS(2415),
    [sym_comment] = ACTIONS(50),
  },
  [1226] = {
    [anon_sym_RPAREN] = ACTIONS(2417),
    [sym_comment] = ACTIONS(50),
  },
  [1227] = {
    [anon_sym_if] = ACTIONS(2419),
    [anon_sym_RBRACE] = ACTIONS(2419),
    [anon_sym_AT] = ACTIONS(2419),
    [anon_sym_static] = ACTIONS(2419),
    [anon_sym_class] = ACTIONS(2419),
    [anon_sym_public] = ACTIONS(2419),
    [anon_sym_protected] = ACTIONS(2419),
    [anon_sym_private] = ACTIONS(2419),
    [anon_sym_abstract] = ACTIONS(2419),
    [anon_sym_final] = ACTIONS(2419),
    [anon_sym_strictfp] = ACTIONS(2419),
    [anon_sym_default] = ACTIONS(2419),
    [sym_comment] = ACTIONS(50),
  },
  [1228] = {
    [anon_sym_RBRACE] = ACTIONS(2421),
    [sym_comment] = ACTIONS(50),
  },
  [1229] = {
    [anon_sym_if] = ACTIONS(1168),
    [anon_sym_RBRACE] = ACTIONS(1168),
    [anon_sym_elseif] = ACTIONS(1168),
    [anon_sym_AT] = ACTIONS(1168),
    [anon_sym_static] = ACTIONS(1168),
    [anon_sym_class] = ACTIONS(1168),
    [anon_sym_public] = ACTIONS(1168),
    [anon_sym_protected] = ACTIONS(1168),
    [anon_sym_private] = ACTIONS(1168),
    [anon_sym_abstract] = ACTIONS(1168),
    [anon_sym_final] = ACTIONS(1168),
    [anon_sym_strictfp] = ACTIONS(1168),
    [anon_sym_default] = ACTIONS(1168),
    [sym_comment] = ACTIONS(50),
  },
  [1230] = {
    [anon_sym_if] = ACTIONS(1256),
    [anon_sym_RBRACE] = ACTIONS(1256),
    [anon_sym_elseif] = ACTIONS(1256),
    [anon_sym_AT] = ACTIONS(1256),
    [anon_sym_static] = ACTIONS(1256),
    [anon_sym_class] = ACTIONS(1256),
    [anon_sym_public] = ACTIONS(1256),
    [anon_sym_protected] = ACTIONS(1256),
    [anon_sym_private] = ACTIONS(1256),
    [anon_sym_abstract] = ACTIONS(1256),
    [anon_sym_final] = ACTIONS(1256),
    [anon_sym_strictfp] = ACTIONS(1256),
    [anon_sym_default] = ACTIONS(1256),
    [sym_comment] = ACTIONS(50),
  },
  [1231] = {
    [anon_sym_if] = ACTIONS(1278),
    [anon_sym_RBRACE] = ACTIONS(1278),
    [anon_sym_elseif] = ACTIONS(1278),
    [anon_sym_AT] = ACTIONS(1278),
    [anon_sym_static] = ACTIONS(1278),
    [anon_sym_class] = ACTIONS(1278),
    [anon_sym_public] = ACTIONS(1278),
    [anon_sym_protected] = ACTIONS(1278),
    [anon_sym_private] = ACTIONS(1278),
    [anon_sym_abstract] = ACTIONS(1278),
    [anon_sym_final] = ACTIONS(1278),
    [anon_sym_strictfp] = ACTIONS(1278),
    [anon_sym_default] = ACTIONS(1278),
    [sym_comment] = ACTIONS(50),
  },
  [1232] = {
    [anon_sym_if] = ACTIONS(1284),
    [anon_sym_RBRACE] = ACTIONS(1284),
    [anon_sym_elseif] = ACTIONS(1284),
    [anon_sym_AT] = ACTIONS(1284),
    [anon_sym_static] = ACTIONS(1284),
    [anon_sym_class] = ACTIONS(1284),
    [anon_sym_public] = ACTIONS(1284),
    [anon_sym_protected] = ACTIONS(1284),
    [anon_sym_private] = ACTIONS(1284),
    [anon_sym_abstract] = ACTIONS(1284),
    [anon_sym_final] = ACTIONS(1284),
    [anon_sym_strictfp] = ACTIONS(1284),
    [anon_sym_default] = ACTIONS(1284),
    [sym_comment] = ACTIONS(50),
  },
  [1233] = {
    [sym_module_directive] = STATE(316),
    [anon_sym_RBRACE] = ACTIONS(2423),
    [anon_sym_requires] = ACTIONS(420),
    [anon_sym_exports] = ACTIONS(422),
    [anon_sym_opens] = ACTIONS(422),
    [anon_sym_uses] = ACTIONS(424),
    [anon_sym_provides] = ACTIONS(426),
    [sym_comment] = ACTIONS(50),
  },
  [1234] = {
    [anon_sym_if] = ACTIONS(1493),
    [anon_sym_RBRACE] = ACTIONS(1493),
    [anon_sym_elseif] = ACTIONS(1493),
    [anon_sym_AT] = ACTIONS(1493),
    [anon_sym_static] = ACTIONS(1493),
    [anon_sym_class] = ACTIONS(1493),
    [anon_sym_public] = ACTIONS(1493),
    [anon_sym_protected] = ACTIONS(1493),
    [anon_sym_private] = ACTIONS(1493),
    [anon_sym_abstract] = ACTIONS(1493),
    [anon_sym_final] = ACTIONS(1493),
    [anon_sym_strictfp] = ACTIONS(1493),
    [anon_sym_default] = ACTIONS(1493),
    [sym_comment] = ACTIONS(50),
  },
  [1235] = {
    [anon_sym_DOT] = ACTIONS(2425),
    [anon_sym_LBRACK] = ACTIONS(2425),
    [anon_sym_COLON_COLON] = ACTIONS(2425),
    [sym_comment] = ACTIONS(50),
  },
  [1236] = {
    [anon_sym_if] = ACTIONS(2427),
    [anon_sym_RBRACE] = ACTIONS(2427),
    [anon_sym_elseif] = ACTIONS(2427),
    [anon_sym_AT] = ACTIONS(2427),
    [anon_sym_static] = ACTIONS(2427),
    [anon_sym_class] = ACTIONS(2427),
    [anon_sym_public] = ACTIONS(2427),
    [anon_sym_protected] = ACTIONS(2427),
    [anon_sym_private] = ACTIONS(2427),
    [anon_sym_abstract] = ACTIONS(2427),
    [anon_sym_final] = ACTIONS(2427),
    [anon_sym_strictfp] = ACTIONS(2427),
    [anon_sym_default] = ACTIONS(2427),
    [sym_comment] = ACTIONS(50),
  },
  [1237] = {
    [anon_sym_if] = ACTIONS(1759),
    [anon_sym_RBRACE] = ACTIONS(1759),
    [anon_sym_elseif] = ACTIONS(1759),
    [anon_sym_AT] = ACTIONS(1759),
    [anon_sym_static] = ACTIONS(1759),
    [anon_sym_class] = ACTIONS(1759),
    [anon_sym_public] = ACTIONS(1759),
    [anon_sym_protected] = ACTIONS(1759),
    [anon_sym_private] = ACTIONS(1759),
    [anon_sym_abstract] = ACTIONS(1759),
    [anon_sym_final] = ACTIONS(1759),
    [anon_sym_strictfp] = ACTIONS(1759),
    [anon_sym_default] = ACTIONS(1759),
    [sym_comment] = ACTIONS(50),
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
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_literal, 1),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_modifier, 1, .fragile = true),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_lambda_parameters, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1, .fragile = true),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1, .fragile = true),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 1),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 1),
  [148] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true), REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__annotation, 1),
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 1),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_statement, 1),
  [171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 1),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 1),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 1),
  [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 1),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 1),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_normal_class_declaration_repeat1, 1),
  [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 1),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 1),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 1),
  [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 1),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 2),
  [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 1),
  [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inferred_formal_parameter_list, 1),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 1),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_id, 1),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [235] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true), REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__annotation, 1),
  [240] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__annotation, 1),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter, 1),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 1),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter_list, 1),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
  [256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(109),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(94),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unary_expression, 2),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unary_expression, 2),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_update_expression, 2),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_update_expression, 2),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_or_type_name, 1),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_marker_annotation, 2),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 1),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 2),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_normal_class_declaration_repeat1, 2),
  [344] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 2),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [348] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 2),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inferred_formal_parameter_list, 2),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [356] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_marker_annotation, 2),
  [364] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_marker_annotation, 2),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 2),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_id, 2),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims, 1),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_lambda_parameters, 3),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 2),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [394] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter, 2),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [406] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(184),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(188),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 2),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 3),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 3),
  [432] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 3),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 3),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_statement, 3),
  [442] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 3),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [464] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(215),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 3),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 3),
  [472] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 3),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 3),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 3),
  [492] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 3),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_assignment_expression, 3),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 3),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(258),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(263),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(267),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(268),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(265),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_lambda_expression, 3),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_lambda_expression, 3),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(273),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_inferred_formal_parameter_list_repeat1, 2),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_inferred_formal_parameter_list_repeat1, 2),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
  [562] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(278),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 3),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 2),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter_list, 3),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(287),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 3),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(290),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
  [594] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(293),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 4),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_declaration, 4),
  [600] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 4),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(300),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 1),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_or_type_name, 3),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 2),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(306),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 4),
  [628] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [632] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(308),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(312),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat1, 1),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 4),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 4),
  [642] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 4),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(318),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(320),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 1),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(327),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_member_declaration, 1),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_member_declaration, 1),
  [668] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_member_declaration, 1),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(333),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body, 2),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body, 2),
  [684] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body, 2),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(344),
  [688] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(345),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(347),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(350),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 1),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_body_repeat1, 1),
  [700] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 1),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body_declaration, 1),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body_declaration, 1),
  [706] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body_declaration, 1),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(357),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 1, .fragile = true),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_superclass, 2),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(365),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(366),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_type_list, 1),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_super_interfaces, 2),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 4),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 4),
  [740] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 4),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_member_declaration, 1),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_member_declaration, 1),
  [746] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_member_declaration, 1),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 2),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_body, 2),
  [752] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 2),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(370),
  [756] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(371),
  [758] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(373),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_result, 1),
  [762] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(374),
  [764] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [768] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [770] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [772] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
  [774] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_list, 1),
  [776] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(379),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(381),
  [780] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
  [782] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(384),
  [784] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(387),
  [788] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(388),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(392),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_extends_interfaces, 2),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 4),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 4),
  [798] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 4),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_lambda_body, 2),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_lambda_body, 2),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(408),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(409),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_inferred_formal_parameter_list_repeat1, 3),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_inferred_formal_parameter_list_repeat1, 3),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_annotation, 4),
  [814] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(413),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(414),
  [820] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 3),
  [824] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_formal_parameters_repeat1, 3),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter_list, 4),
  [830] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(416),
  [832] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(417),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(420),
  [836] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 4),
  [838] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(421),
  [840] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(422),
  [842] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(425),
  [844] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 4),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 2),
  [848] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_body, 2),
  [850] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 2),
  [852] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(426),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_member_declaration, 1),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_member_declaration, 1),
  [858] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_member_declaration, 1),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [864] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
  [868] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(428),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(430),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(432),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(433),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(447),
  [884] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 2),
  [886] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(449),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 5),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 5),
  [892] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 5),
  [894] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(450),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 3),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_requires_modifier, 1),
  [900] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_requires_modifier, 1),
  [902] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 1),
  [904] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_directive_repeat1, 1),
  [906] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat1, 1),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(451),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(452),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(455),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(456),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(457),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(460),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat1, 2),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(461),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(462),
  [928] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_import_on_declaraction, 5),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_import_on_declaraction, 5),
  [932] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_import_on_declaraction, 5),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(463),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(464),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 2),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameters, 3),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 2),
  [944] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(467),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(469),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(470),
  [950] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [952] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 2),
  [954] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [956] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(471),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(473),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statement, 1),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [964] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
  [966] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statements, 1),
  [968] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(478),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(479),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(480),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(481),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(482),
  [978] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(483),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(488),
  [982] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declarator, 2),
  [984] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(493),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(330),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
  [990] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(495),
  [992] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(496),
  [994] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(497),
  [996] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(498),
  [998] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(334),
  [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(499),
  [1004] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(500),
  [1006] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(501),
  [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(502),
  [1010] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(503),
  [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(521),
  [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 2),
  [1016] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_declaration, 2),
  [1018] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 2),
  [1020] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(527),
  [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(528),
  [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(529),
  [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body, 3),
  [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body, 3),
  [1030] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body, 3),
  [1032] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 2),
  [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_body_repeat1, 2),
  [1036] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 2),
  [1038] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(531),
  [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(532),
  [1042] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(225),
  [1044] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(540),
  [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 2),
  [1048] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(543),
  [1050] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(546),
  [1052] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_type_list, 2),
  [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 5),
  [1056] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 5),
  [1058] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 5),
  [1060] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(548),
  [1062] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(549),
  [1064] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(550),
  [1066] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(551),
  [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(556),
  [1070] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 2),
  [1072] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constant_declaration, 2),
  [1074] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 2),
  [1076] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_list, 2),
  [1078] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(563),
  [1080] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_body, 1),
  [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_body, 1),
  [1084] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_body, 1),
  [1086] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(564),
  [1088] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_method_declaration, 2),
  [1090] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_method_declaration, 2),
  [1092] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_method_declaration, 2),
  [1094] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(566),
  [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 2),
  [1098] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(568),
  [1100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(569),
  [1102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(570),
  [1104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(571),
  [1106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 3),
  [1108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_body, 3),
  [1110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 3),
  [1112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [1114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [1116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [1118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 5),
  [1120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 5),
  [1122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 5),
  [1124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(573),
  [1126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [1128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [1130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(574),
  [1132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 5),
  [1134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 5),
  [1136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 5),
  [1138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 5),
  [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_declaration, 5),
  [1142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 5),
  [1144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_element_annotation, 5),
  [1146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [1148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_annotation, 5),
  [1150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [1152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 4),
  [1154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(578),
  [1156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(579),
  [1158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(580),
  [1160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(581),
  [1162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(582),
  [1164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(583),
  [1166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(584),
  [1168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 3),
  [1170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_body, 3),
  [1172] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 3),
  [1174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [1176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [1178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [1180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(585),
  [1182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(586),
  [1184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(588),
  [1186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(589),
  [1188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(590),
  [1190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value, 1),
  [1192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 1),
  [1194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 1),
  [1196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair, 3),
  [1198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(601),
  [1200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 1),
  [1202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(602),
  [1204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(603),
  [1206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 1),
  [1208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 1),
  [1210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(604),
  [1212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 1),
  [1214] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 1),
  [1216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(605),
  [1218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 1),
  [1220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 1),
  [1222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(606),
  [1224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 1),
  [1226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 1),
  [1228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 1),
  [1230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(607),
  [1232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 1),
  [1234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 1),
  [1236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(608),
  [1238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(608),
  [1240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 1),
  [1242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 1),
  [1244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(609),
  [1246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 1),
  [1248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 1),
  [1250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(610),
  [1252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(610),
  [1254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 2),
  [1256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 6),
  [1258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 6),
  [1260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 6),
  [1262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 3),
  [1264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(612),
  [1266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [1268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [1270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(613),
  [1272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [1274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(615),
  [1276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(618),
  [1278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [1280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [1282] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [1284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_static_import_declaration, 6),
  [1286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_static_import_declaration, 6),
  [1288] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_static_import_declaration, 6),
  [1290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(620),
  [1292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(621),
  [1294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(624),
  [1296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_bound, 2),
  [1298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(625),
  [1300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
  [1302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 3),
  [1304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameters, 3),
  [1306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(628),
  [1308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(629),
  [1310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(631),
  [1312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(632),
  [1314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(633),
  [1316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_local_variable_declaration, 2),
  [1318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [1320] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 3),
  [1322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [1324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_block_statements_repeat1, 1),
  [1326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statements, 2),
  [1328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_local_variable_declaration_statement, 2),
  [1330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(639),
  [1332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(640),
  [1334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(642),
  [1336] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(643),
  [1338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(646),
  [1340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(647),
  [1342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(652),
  [1344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declarator, 3),
  [1346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 2),
  [1348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_body, 2),
  [1350] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 2),
  [1352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(657),
  [1354] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 1, .fragile = true), SHIFT(658),
  [1357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 1, .fragile = true),
  [1359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integral_type, 1),
  [1361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_type, 1),
  [1363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(660),
  [1365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(662),
  [1367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primary_no_new_array, 1),
  [1369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(663),
  [1371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(664),
  [1373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(665),
  [1375] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(666),
  [1377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_name, 1),
  [1379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(672),
  [1381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(673),
  [1383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(674),
  [1385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(679),
  [1387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(658),
  [1389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(680),
  [1391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(682),
  [1393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(683),
  [1395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(684),
  [1397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primary, 1),
  [1399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_instance_creation_expression, 1),
  [1401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(685),
  [1403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(686),
  [1405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(687),
  [1407] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(365),
  [1409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(689),
  [1411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 1, .fragile = true),
  [1413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(692),
  [1415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_throws, 2),
  [1417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type_list, 1),
  [1419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(695),
  [1421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(697),
  [1423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 3),
  [1425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_declaration, 3),
  [1427] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 3),
  [1429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(698),
  [1431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(702),
  [1433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(704),
  [1435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(705),
  [1437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_argument, 1),
  [1439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reference_type, 1),
  [1441] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [1443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2, .fragile = true),
  [1445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(709),
  [1447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 3),
  [1449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [1451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 6),
  [1453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 6),
  [1455] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 6),
  [1457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(713),
  [1459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(715),
  [1461] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(716),
  [1463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(719),
  [1465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(720),
  [1467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(725),
  [1469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 3),
  [1471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declarator_list_repeat1, 2),
  [1473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(732),
  [1475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(733),
  [1477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(735),
  [1479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 3),
  [1481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constant_declaration, 3),
  [1483] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 3),
  [1485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_method_declaration, 3),
  [1487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_method_declaration, 3),
  [1489] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_method_declaration, 3),
  [1491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(740),
  [1493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 6),
  [1495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 6),
  [1497] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 6),
  [1499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(742),
  [1501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(743),
  [1503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(746),
  [1505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(747),
  [1507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(747),
  [1509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(748),
  [1511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(748),
  [1513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(749),
  [1515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(754),
  [1517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(755),
  [1519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(756),
  [1521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 2),
  [1523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(758),
  [1525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(760),
  [1527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(761),
  [1529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(762),
  [1531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(763),
  [1533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(764),
  [1535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(765),
  [1537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(766),
  [1539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(767),
  [1541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(767),
  [1543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(768),
  [1545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(769),
  [1547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(769),
  [1549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 3),
  [1551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 3),
  [1553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 4),
  [1555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 2),
  [1557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(780),
  [1559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(783),
  [1561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(785),
  [1563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(786),
  [1565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_bound, 3),
  [1567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(788),
  [1569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
  [1571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(789),
  [1573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(789),
  [1575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(790),
  [1577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(790),
  [1579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(791),
  [1581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(792),
  [1583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(793),
  [1585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(794),
  [1587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(791),
  [1589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(792),
  [1591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(795),
  [1593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(796),
  [1595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(797),
  [1597] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(798),
  [1599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(801),
  [1601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(802),
  [1603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_block_statements_repeat1, 2),
  [1605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(808),
  [1607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(810),
  [1609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(811),
  [1611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(812),
  [1613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(815),
  [1615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(817),
  [1617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(818),
  [1619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_literal_repeat1, 1),
  [1621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(819),
  [1623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(820),
  [1625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(821),
  [1627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(822),
  [1629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(823),
  [1631] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(826),
  [1633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(827),
  [1635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(361),
  [1637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 1),
  [1639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(830),
  [1641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(831),
  [1643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(835),
  [1645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(840),
  [1647] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(841),
  [1649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(842),
  [1651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(843),
  [1653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(844),
  [1655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(827),
  [1657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_type, 2),
  [1659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 2),
  [1661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_exprs, 1, .fragile = true),
  [1663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(848),
  [1665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(852),
  [1667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(818),
  [1669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(817),
  [1671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(853),
  [1673] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(854),
  [1675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 3),
  [1677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_body, 3),
  [1679] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 3),
  [1681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(856),
  [1683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(857),
  [1685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(858),
  [1687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(859),
  [1689] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(860),
  [1691] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(864),
  [1693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(865),
  [1695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 2),
  [1697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(867),
  [1699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 2),
  [1701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(870),
  [1703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_variable, 1, .fragile = true),
  [1705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type, 2),
  [1707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(871),
  [1709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exception_type_list_repeat1, 1),
  [1711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type_list, 2),
  [1713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(872),
  [1715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 4),
  [1717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_declaration, 4),
  [1719] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 4),
  [1721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(877),
  [1723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(878),
  [1725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 3),
  [1727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(880),
  [1729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(881),
  [1731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reference_type, 2),
  [1733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3, .fragile = true),
  [1735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(883),
  [1737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 4),
  [1739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_type_list_repeat1, 3),
  [1741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(884),
  [1743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(886),
  [1745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(887),
  [1747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(888),
  [1749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(891),
  [1751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 4),
  [1753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declarator_list_repeat1, 3),
  [1755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 3),
  [1757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(895),
  [1759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [1761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 7),
  [1763] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [1765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 7),
  [1767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 7),
  [1769] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 7),
  [1771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 4),
  [1773] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 4),
  [1775] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 4),
  [1777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(899),
  [1779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(910),
  [1781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 3),
  [1783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(919),
  [1785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(919),
  [1787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(920),
  [1789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(920),
  [1791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(921),
  [1793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(926),
  [1795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(928),
  [1797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 3),
  [1799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(937),
  [1801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 3),
  [1803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 3),
  [1805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 3),
  [1807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 3),
  [1809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 3),
  [1811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [1813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [1815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 3),
  [1817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 3),
  [1819] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 3),
  [1821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 3),
  [1823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 3),
  [1825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 3),
  [1827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 3),
  [1829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 3),
  [1831] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 3),
  [1833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 5),
  [1835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(938),
  [1837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 3),
  [1839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(940),
  [1841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [1843] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_then_statement, 4, .fragile = true),
  [1845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(947),
  [1847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(948),
  [1849] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(949),
  [1851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(950),
  [1853] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(951),
  [1855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(952),
  [1857] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(953),
  [1859] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(954),
  [1861] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(955),
  [1863] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(967),
  [1865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(968),
  [1867] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(969),
  [1869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(973),
  [1871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primary_no_new_array, 3),
  [1873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_literal, 3),
  [1875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(975),
  [1877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_literal_repeat1, 2),
  [1879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(976),
  [1881] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(977),
  [1883] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(980),
  [1885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(981),
  [1887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(749),
  [1889] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(750),
  [1891] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(751),
  [1893] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(752),
  [1895] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(750),
  [1897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 1),
  [1899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(982),
  [1901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(753),
  [1903] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(984),
  [1905] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_access, 3),
  [1907] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 3),
  [1909] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(985),
  [1911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(986),
  [1913] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(988),
  [1915] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments_or_diamond, 1),
  [1917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 2),
  [1919] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(990),
  [1921] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(992),
  [1923] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(993),
  [1925] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(994),
  [1927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(995),
  [1929] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 3),
  [1931] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(997),
  [1933] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1002),
  [1935] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1002),
  [1937] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1003),
  [1939] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1003),
  [1941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1004),
  [1943] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1005),
  [1945] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1006),
  [1947] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1007),
  [1949] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1004),
  [1951] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1005),
  [1953] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1008),
  [1955] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1009),
  [1957] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(985),
  [1959] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_exprs_repeat1, 1),
  [1961] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1010),
  [1963] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_exprs, 2, .fragile = true),
  [1965] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1013),
  [1967] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1014),
  [1969] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1015),
  [1971] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1016),
  [1973] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 4),
  [1975] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_body, 4),
  [1977] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 4),
  [1979] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1018),
  [1981] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ambiguous_name, 3),
  [1983] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1019),
  [1985] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(1016),
  [1987] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_instance_creation_expression, 3),
  [1989] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1020),
  [1991] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 3),
  [1993] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1021),
  [1995] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2, .fragile = true),
  [1997] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1023),
  [1999] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 3),
  [2001] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_variable, 2, .fragile = true),
  [2003] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exception_type_list_repeat1, 2),
  [2005] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1028),
  [2007] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(1029),
  [2009] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1032),
  [2011] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [2013] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 4),
  [2015] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 4),
  [2017] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1035),
  [2019] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 5),
  [2021] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 4),
  [2023] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_value, 2),
  [2025] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1041),
  [2027] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1042),
  [2029] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1043),
  [2031] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1044),
  [2033] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1045),
  [2035] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1046),
  [2037] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1047),
  [2039] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1048),
  [2041] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1048),
  [2043] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1049),
  [2045] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1050),
  [2047] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1050),
  [2049] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 5),
  [2051] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 5),
  [2053] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 5),
  [2055] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1051),
  [2057] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1053),
  [2059] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 4),
  [2061] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 2),
  [2063] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1060),
  [2065] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1062),
  [2067] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 6),
  [2069] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat3, 2),
  [2071] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_bound_repeat1, 3),
  [2073] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_then_statement, 5),
  [2075] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1065),
  [2077] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1066),
  [2079] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1068),
  [2081] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1069),
  [2083] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1071),
  [2085] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1072),
  [2087] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1074),
  [2089] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1075),
  [2091] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_then_statement_repeat1, 1),
  [2093] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1077),
  [2095] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1078),
  [2097] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1079),
  [2099] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1080),
  [2101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1081),
  [2103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_literal, 4),
  [2105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1084),
  [2107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1085),
  [2109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 4),
  [2111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2),
  [2113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1087),
  [2115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1088),
  [2117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 4),
  [2119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_arguments, 3),
  [2121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1089),
  [2123] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true), SHIFT(361),
  [2126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true),
  [2128] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2, .fragile = true), REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true),
  [2131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1090),
  [2133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1091),
  [2135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 3),
  [2137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1093),
  [2139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1095),
  [2141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1097),
  [2143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1098),
  [2145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 4),
  [2147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 4),
  [2149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1104),
  [2151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_expr, 3),
  [2153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_exprs_repeat1, 2),
  [2155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1111),
  [2157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1112),
  [2159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1114),
  [2161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1116),
  [2163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1118),
  [2165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1119),
  [2167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1122),
  [2169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_access, 4),
  [2171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 4),
  [2173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3, .fragile = true),
  [2175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1124),
  [2177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 4),
  [2179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1126),
  [2181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1127),
  [2183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_arguments_repeat1, 3),
  [2185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 5),
  [2187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 5),
  [2189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 6),
  [2191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 6),
  [2193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 6),
  [2195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1137),
  [2197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(921),
  [2199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(922),
  [2201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(923),
  [2203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(924),
  [2205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(922),
  [2207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(925),
  [2209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1139),
  [2211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 5),
  [2213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 3),
  [2215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 5),
  [2217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat3, 3),
  [2219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 2),
  [2221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1142),
  [2223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1144),
  [2225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1145),
  [2227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1148),
  [2229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1149),
  [2231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1150),
  [2233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_then_statement_repeat1, 2),
  [2235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1154),
  [2237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1155),
  [2239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1156),
  [2241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1157),
  [2243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [2245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 5),
  [2247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_arguments, 4),
  [2249] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true), SHIFT(361),
  [2252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true),
  [2254] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3, .fragile = true), REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true),
  [2257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true),
  [2259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1161),
  [2261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true),
  [2263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 5),
  [2265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1163),
  [2267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1164),
  [2269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 2),
  [2271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_initializer, 1),
  [2273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1165),
  [2275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 4),
  [2277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1167),
  [2279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1168),
  [2281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_expr, 4),
  [2283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1169),
  [2285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_access, 5),
  [2287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1170),
  [2289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 5),
  [2291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1171),
  [2293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 5),
  [2295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1172),
  [2297] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 3),
  [2299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1174),
  [2301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1175),
  [2303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 4),
  [2305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1178),
  [2307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 7),
  [2309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 7),
  [2311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 7),
  [2313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1180),
  [2315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1181),
  [2317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1182),
  [2319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1184),
  [2321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1185),
  [2323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1187),
  [2325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1188),
  [2327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1189),
  [2329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1190),
  [2331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1196),
  [2333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 3),
  [2335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 4),
  [2337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 4),
  [2339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 6),
  [2341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 3),
  [2343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1199),
  [2345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1201),
  [2347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 6),
  [2349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1203),
  [2351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1205),
  [2353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 6),
  [2355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 6),
  [2357] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 4),
  [2359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1206),
  [2361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1207),
  [2363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 5),
  [2365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1208),
  [2367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 4),
  [2369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1210),
  [2371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1212),
  [2373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1214),
  [2375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1215),
  [2377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1216),
  [2379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1217),
  [2381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1219),
  [2383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1220),
  [2385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 7),
  [2387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 4),
  [2389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_initializer_repeat1, 2),
  [2391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1223),
  [2393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 7),
  [2395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1225),
  [2397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 7),
  [2399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1227),
  [2401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_if_clause, 5),
  [2403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1229),
  [2405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1230),
  [2407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1231),
  [2409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1232),
  [2411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 5),
  [2413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_initializer_repeat1, 3),
  [2415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 8),
  [2417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1235),
  [2419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 8),
  [2421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1236),
  [2423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1237),
  [2425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 9),
  [2427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_if_clause, 7),
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
