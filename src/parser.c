#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 1227
#define SYMBOL_COUNT 261
#define ALIAS_COUNT 0
#define TOKEN_COUNT 101
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
  anon_sym_GT = 18,
  anon_sym_LT = 19,
  anon_sym_EQ_EQ = 20,
  anon_sym_GT_EQ = 21,
  anon_sym_LT_EQ = 22,
  anon_sym_BANG_EQ = 23,
  anon_sym_AMP_AMP = 24,
  anon_sym_PIPE_PIPE = 25,
  anon_sym_PLUS = 26,
  anon_sym_DASH = 27,
  anon_sym_STAR = 28,
  anon_sym_SLASH = 29,
  anon_sym_AMP = 30,
  anon_sym_PIPE = 31,
  anon_sym_CARET = 32,
  anon_sym_PERCENT = 33,
  anon_sym_LT_LT = 34,
  anon_sym_GT_GT = 35,
  anon_sym_GT_GT_GT = 36,
  anon_sym_DASH_GT = 37,
  anon_sym_LPAREN = 38,
  anon_sym_RPAREN = 39,
  anon_sym_COMMA = 40,
  anon_sym_QMARK = 41,
  anon_sym_COLON = 42,
  anon_sym_BANG = 43,
  anon_sym_TILDE = 44,
  anon_sym_PLUS_PLUS = 45,
  anon_sym_DASH_DASH = 46,
  anon_sym_if = 47,
  anon_sym_LBRACE = 48,
  anon_sym_RBRACE = 49,
  anon_sym_elseif = 50,
  anon_sym_else = 51,
  anon_sym_DOT = 52,
  anon_sym_LBRACK = 53,
  anon_sym_RBRACK = 54,
  anon_sym_boolean = 55,
  anon_sym_byte = 56,
  anon_sym_short = 57,
  anon_sym_int = 58,
  anon_sym_long = 59,
  anon_sym_char = 60,
  anon_sym_float = 61,
  anon_sym_double = 62,
  anon_sym_AT = 63,
  anon_sym_EQ = 64,
  anon_sym_open = 65,
  anon_sym_module = 66,
  anon_sym_requires = 67,
  anon_sym_exports = 68,
  anon_sym_to = 69,
  anon_sym_opens = 70,
  anon_sym_uses = 71,
  anon_sym_provides = 72,
  anon_sym_with = 73,
  anon_sym_transitive = 74,
  anon_sym_static = 75,
  anon_sym_package = 76,
  anon_sym_import = 77,
  anon_sym_class = 78,
  anon_sym_public = 79,
  anon_sym_protected = 80,
  anon_sym_private = 81,
  anon_sym_abstract = 82,
  anon_sym_final = 83,
  anon_sym_strictfp = 84,
  anon_sym_default = 85,
  anon_sym_synchronized = 86,
  anon_sym_native = 87,
  anon_sym_extends = 88,
  anon_sym_implements = 89,
  anon_sym_this = 90,
  anon_sym_super = 91,
  anon_sym_new = 92,
  anon_sym_void = 93,
  anon_sym_LT_GT = 94,
  anon_sym_COLON_COLON = 95,
  anon_sym_interface = 96,
  anon_sym_DOT_DOT_DOT = 97,
  anon_sym_throws = 98,
  sym_identifier = 99,
  sym_comment = 100,
  sym_program = 101,
  sym__statement = 102,
  sym__literal = 103,
  sym_integer_literal = 104,
  sym_floating_point_literal = 105,
  sym_boolean_literal = 106,
  sym_character_literal = 107,
  sym__expression = 108,
  sym_binary_expression = 109,
  sym_lambda_expression = 110,
  sym__lambda_parameters = 111,
  sym_inferred_formal_parameter_list = 112,
  sym_lambda_body = 113,
  sym_ternary_expression = 114,
  sym_unary_expression = 115,
  sym_update_expression = 116,
  sym_statement = 117,
  sym_if_then_statement = 118,
  sym_else_if_clause = 119,
  sym_else_clause = 120,
  sym_type_arguments = 121,
  sym_type_argument = 122,
  sym_reference_type = 123,
  sym_class_or_interface_type = 124,
  sym_type_variable = 125,
  sym_dims = 126,
  sym_primitive_type = 127,
  sym_integral_type = 128,
  sym_floating_point_type = 129,
  sym__annotation = 130,
  sym_normal_annotation = 131,
  sym_marker_annotation = 132,
  sym_single_element_annotation = 133,
  sym_element_value_pair_list = 134,
  sym_element_value_pair = 135,
  sym_element_value = 136,
  sym_element_value_array_initializer = 137,
  sym_conditional_expression = 138,
  sym_conditional_or_expression = 139,
  sym_conditional_and_expression = 140,
  sym_inclusive_or_expression = 141,
  sym_exclusive_or_expression = 142,
  sym_and_expression = 143,
  sym_relational_expression = 144,
  sym_equality_expression = 145,
  sym_shift_expression = 146,
  sym_additive_expression = 147,
  sym_multiplicative_expression = 148,
  sym__declaration = 149,
  sym_module_declaration = 150,
  sym_module_identifier = 151,
  sym_module_directive = 152,
  sym_requires_modifier = 153,
  sym_module_name = 154,
  sym_package_declaration = 155,
  sym_package_or_type_name = 156,
  sym_import_statement = 157,
  sym_single_type_import_declaration = 158,
  sym_type_import_on_declaraction = 159,
  sym_single_static_import_declaration = 160,
  sym_static_import_on_demand_declaration = 161,
  sym_class_declaration = 162,
  sym_normal_class_declaration = 163,
  sym_modifier = 164,
  sym_type_parameters = 165,
  sym_type_parameter_list = 166,
  sym_type_parameter = 167,
  sym_type_bound = 168,
  sym_superclass = 169,
  sym_super_interfaces = 170,
  sym_interface_type_list = 171,
  sym_class_body = 172,
  sym_class_body_declaration = 173,
  sym_constructor_declaration = 174,
  sym_constructor_declarator = 175,
  sym_constructor_body = 176,
  sym_explicit_constructor_invocation = 177,
  sym_ambiguous_name = 178,
  sym_class_member_declaration = 179,
  sym_primary = 180,
  sym_array_creation_expression = 181,
  sym_dims_exprs = 182,
  sym_dims_expr = 183,
  sym_primary_no_new_array = 184,
  sym_class_literal = 185,
  sym_class_instance_creation_expression = 186,
  sym_unqualified_class_instance_creation_expression = 187,
  sym_class_or_interface_type_to_instantiate = 188,
  sym_type_arguments_or_diamond = 189,
  sym_field_access = 190,
  sym_array_access = 191,
  sym_method_invocation = 192,
  sym_argument_list = 193,
  sym_method_reference = 194,
  sym_array_type = 195,
  sym_interface_declaration = 196,
  sym_annotation_type_declaration = 197,
  sym_annotation_type_body = 198,
  sym_annotation_type_member_declaration = 199,
  sym_annotation_type_element_declaration = 200,
  sym_default_value = 201,
  sym_normal_interface_declaration = 202,
  sym_extends_interfaces = 203,
  sym_interface_body = 204,
  sym_interface_member_declaration = 205,
  sym_constant_declaration = 206,
  sym_variable_declarator_list = 207,
  sym_variable_declarator = 208,
  sym_variable_declarator_id = 209,
  sym_variable_initializer = 210,
  sym_array_initializer = 211,
  sym_method_header = 212,
  sym_result = 213,
  sym_method_declarator = 214,
  sym__formal_parameter_list = 215,
  sym_formal_parameter = 216,
  sym_receiver_parameter = 217,
  sym_last_formal_parameter = 218,
  sym_throws = 219,
  sym_exception_type_list = 220,
  sym_exception_type = 221,
  sym_method_body = 222,
  sym_block = 223,
  sym_block_statements = 224,
  sym_block_statement = 225,
  sym_local_variable_declaration_statement = 226,
  sym_local_variable_declaration = 227,
  sym_method_declaration = 228,
  sym_method_name = 229,
  aux_sym_program_repeat1 = 230,
  aux_sym_character_literal_repeat1 = 231,
  aux_sym_inferred_formal_parameter_list_repeat1 = 232,
  aux_sym_if_then_statement_repeat1 = 233,
  aux_sym_type_arguments_repeat1 = 234,
  aux_sym_class_or_interface_type_repeat1 = 235,
  aux_sym_class_or_interface_type_repeat2 = 236,
  aux_sym_dims_repeat1 = 237,
  aux_sym_element_value_pair_list_repeat1 = 238,
  aux_sym_element_value_array_initializer_repeat1 = 239,
  aux_sym_module_declaration_repeat1 = 240,
  aux_sym_module_identifier_repeat1 = 241,
  aux_sym_module_directive_repeat1 = 242,
  aux_sym_module_directive_repeat2 = 243,
  aux_sym_module_directive_repeat3 = 244,
  aux_sym_normal_class_declaration_repeat1 = 245,
  aux_sym_type_parameter_list_repeat1 = 246,
  aux_sym_type_bound_repeat1 = 247,
  aux_sym_interface_type_list_repeat1 = 248,
  aux_sym_class_body_repeat1 = 249,
  aux_sym_dims_exprs_repeat1 = 250,
  aux_sym_class_literal_repeat1 = 251,
  aux_sym_class_or_interface_type_to_instantiate_repeat1 = 252,
  aux_sym_argument_list_repeat1 = 253,
  aux_sym_annotation_type_body_repeat1 = 254,
  aux_sym_interface_body_repeat1 = 255,
  aux_sym_variable_declarator_list_repeat1 = 256,
  aux_sym_array_initializer_repeat1 = 257,
  aux_sym_formal_parameters_repeat1 = 258,
  aux_sym_exception_type_list_repeat1 = 259,
  aux_sym_block_statements_repeat1 = 260,
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
  [anon_sym_EQ] = "=",
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
  [anon_sym_synchronized] = "synchronized",
  [anon_sym_native] = "native",
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
  [sym_binary_expression] = "binary_expression",
  [sym_lambda_expression] = "lambda_expression",
  [sym__lambda_parameters] = "_lambda_parameters",
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
  [sym_method_header] = "method_header",
  [sym_result] = "result",
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
  [anon_sym_EQ] = {
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
        ADVANCE(6);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == '0')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(52);
      if (lookahead == ';')
        ADVANCE(54);
      if (lookahead == '<')
        ADVANCE(55);
      if (lookahead == '=')
        ADVANCE(59);
      if (lookahead == '>')
        ADVANCE(61);
      if (lookahead == '?')
        ADVANCE(65);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(68);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'b')
        ADVANCE(79);
      if (lookahead == 'c')
        ADVANCE(89);
      if (lookahead == 'd')
        ADVANCE(97);
      if (lookahead == 'e')
        ADVANCE(109);
      if (lookahead == 'f')
        ADVANCE(116);
      if (lookahead == 'i')
        ADVANCE(129);
      if (lookahead == 'l')
        ADVANCE(144);
      if (lookahead == 'm')
        ADVANCE(148);
      if (lookahead == 'n')
        ADVANCE(154);
      if (lookahead == 'o')
        ADVANCE(165);
      if (lookahead == 'p')
        ADVANCE(169);
      if (lookahead == 's')
        ADVANCE(194);
      if (lookahead == 't')
        ADVANCE(225);
      if (lookahead == 'v')
        ADVANCE(241);
      if (lookahead == '{')
        ADVANCE(245);
      if (lookahead == '|')
        ADVANCE(246);
      if (lookahead == '}')
        ADVANCE(248);
      if (lookahead == '~')
        ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
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
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '.')
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '*')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(24);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(27);
      if (lookahead == 'X')
        ADVANCE(32);
      if (lookahead == 'o')
        ADVANCE(27);
      if (lookahead == 'x')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(28);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == '_')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(28);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == '_')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '_')
        ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '+')
        ADVANCE(36);
      if (lookahead == '-')
        ADVANCE(36);
      if (lookahead == '_')
        ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(34);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(38);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '_')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(35);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '_')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(34);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(34);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == '_')
        ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(34);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == '_')
        ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+')
        ADVANCE(36);
      if (lookahead == '-')
        ADVANCE(36);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == '_')
        ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == '_')
        ADVANCE(49);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(47);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '_')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(46);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+')
        ADVANCE(36);
      if (lookahead == '-')
        ADVANCE(36);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == '_')
        ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == '_')
        ADVANCE(49);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(51);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(56);
      if (lookahead == '=')
        ADVANCE(57);
      if (lookahead == '>')
        ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(62);
      if (lookahead == '>')
        ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SLASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(80);
      if (lookahead == 'y')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(90);
      if (lookahead == 'l')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(98);
      if (lookahead == 'o')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ')
        ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 113:
      if (lookahead == 'i')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'f')
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_elseif);
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
        ADVANCE(31);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(130);
      if (lookahead == 'm')
        ADVANCE(131);
      if (lookahead == 'n')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(155);
      if (lookahead == 'e')
        ADVANCE(160);
      if (lookahead == 'u')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_native);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_null_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_open);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(170);
      if (lookahead == 'r')
        ADVANCE(176);
      if (lookahead == 'u')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_package);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(177);
      if (lookahead == 'o')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(199);
      if (lookahead == 'u')
        ADVANCE(210);
      if (lookahead == 'y')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(200);
      if (lookahead == 'r')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_strictfp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_super);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(31);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(226);
      if (lookahead == 'o')
        ADVANCE(229);
      if (lookahead == 'r')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_to);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(231);
      if (lookahead == 'u')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_transitive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(251);
      if (lookahead == '\"')
        ADVANCE(252);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(255);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == '0')
        ADVANCE(266);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'c')
        ADVANCE(279);
      if (lookahead == 'd')
        ADVANCE(280);
      if (lookahead == 'f')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(282);
      if (lookahead == 'm')
        ADVANCE(148);
      if (lookahead == 'n')
        ADVANCE(285);
      if (lookahead == 'o')
        ADVANCE(165);
      if (lookahead == 'p')
        ADVANCE(169);
      if (lookahead == 's')
        ADVANCE(286);
      if (lookahead == 't')
        ADVANCE(287);
      if (lookahead == 'v')
        ADVANCE(241);
      if (lookahead == '{')
        ADVANCE(245);
      if (lookahead == '}')
        ADVANCE(248);
      if (lookahead == '~')
        ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(250);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 252:
      if (lookahead == '\"')
        ADVANCE(253);
      if (lookahead == '\\')
        ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 254:
      if (lookahead == '\n')
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(252);
      END_STATE();
    case 255:
      if (lookahead == '+')
        ADVANCE(13);
      END_STATE();
    case 256:
      if (lookahead == '-')
        ADVANCE(16);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(259);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(260);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(258);
      END_STATE();
    case 259:
      if (lookahead == '_')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(258);
      END_STATE();
    case 260:
      if (lookahead == '+')
        ADVANCE(261);
      if (lookahead == '-')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(262);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(264);
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
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 265:
      if (lookahead == '*')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(25);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(267);
      if (lookahead == 'B')
        ADVANCE(268);
      if (lookahead == 'O')
        ADVANCE(27);
      if (lookahead == 'X')
        ADVANCE(32);
      if (lookahead == '_')
        ADVANCE(272);
      if (lookahead == 'b')
        ADVANCE(268);
      if (lookahead == 'o')
        ADVANCE(27);
      if (lookahead == 'x')
        ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(274);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(260);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(258);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(269);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(270);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(269);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 270:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(270);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(271);
      END_STATE();
    case 272:
      if (lookahead == '_')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(267);
      if (lookahead == '_')
        ADVANCE(272);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(260);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+')
        ADVANCE(261);
      if (lookahead == '-')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(267);
      if (lookahead == '_')
        ADVANCE(272);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(274);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(117);
      if (lookahead == 'i')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(131);
      if (lookahead == 'n')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(155);
      if (lookahead == 'u')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(199);
      if (lookahead == 'y')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 289:
      if (lookahead == '!')
        ADVANCE(290);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == ':')
        ADVANCE(52);
      if (lookahead == ';')
        ADVANCE(54);
      if (lookahead == '<')
        ADVANCE(55);
      if (lookahead == '=')
        ADVANCE(59);
      if (lookahead == '>')
        ADVANCE(61);
      if (lookahead == '?')
        ADVANCE(65);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(291);
      if (lookahead == 'b')
        ADVANCE(299);
      if (lookahead == 'c')
        ADVANCE(309);
      if (lookahead == 'd')
        ADVANCE(317);
      if (lookahead == 'e')
        ADVANCE(329);
      if (lookahead == 'f')
        ADVANCE(344);
      if (lookahead == 'i')
        ADVANCE(353);
      if (lookahead == 'l')
        ADVANCE(372);
      if (lookahead == 'm')
        ADVANCE(376);
      if (lookahead == 'n')
        ADVANCE(382);
      if (lookahead == 'o')
        ADVANCE(390);
      if (lookahead == 'p')
        ADVANCE(395);
      if (lookahead == 'r')
        ADVANCE(425);
      if (lookahead == 's')
        ADVANCE(433);
      if (lookahead == 't')
        ADVANCE(464);
      if (lookahead == 'u')
        ADVANCE(472);
      if (lookahead == 'v')
        ADVANCE(476);
      if (lookahead == 'w')
        ADVANCE(480);
      if (lookahead == '{')
        ADVANCE(245);
      if (lookahead == '|')
        ADVANCE(246);
      if (lookahead == '}')
        ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(289);
      END_STATE();
    case 290:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 291:
      if (lookahead == 'b')
        ADVANCE(292);
      END_STATE();
    case 292:
      if (lookahead == 's')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 't')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == 'r')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == 'a')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 'c')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 't')
        ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 299:
      if (lookahead == 'o')
        ADVANCE(300);
      if (lookahead == 'y')
        ADVANCE(306);
      END_STATE();
    case 300:
      if (lookahead == 'o')
        ADVANCE(301);
      END_STATE();
    case 301:
      if (lookahead == 'l')
        ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == 'e')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == 'a')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'n')
        ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 306:
      if (lookahead == 't')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'e')
        ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 309:
      if (lookahead == 'h')
        ADVANCE(310);
      if (lookahead == 'l')
        ADVANCE(313);
      END_STATE();
    case 310:
      if (lookahead == 'a')
        ADVANCE(311);
      END_STATE();
    case 311:
      if (lookahead == 'r')
        ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 313:
      if (lookahead == 'a')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 's')
        ADVANCE(315);
      END_STATE();
    case 315:
      if (lookahead == 's')
        ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 317:
      if (lookahead == 'e')
        ADVANCE(318);
      if (lookahead == 'o')
        ADVANCE(324);
      END_STATE();
    case 318:
      if (lookahead == 'f')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'a')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 'u')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == 'l')
        ADVANCE(322);
      END_STATE();
    case 322:
      if (lookahead == 't')
        ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 324:
      if (lookahead == 'u')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 'b')
        ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 'l')
        ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'e')
        ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 329:
      if (lookahead == 'l')
        ADVANCE(330);
      if (lookahead == 'x')
        ADVANCE(333);
      END_STATE();
    case 330:
      if (lookahead == 's')
        ADVANCE(331);
      END_STATE();
    case 331:
      if (lookahead == 'e')
        ADVANCE(332);
      END_STATE();
    case 332:
      if (lookahead == ' ')
        ADVANCE(113);
      END_STATE();
    case 333:
      if (lookahead == 'p')
        ADVANCE(334);
      if (lookahead == 't')
        ADVANCE(339);
      END_STATE();
    case 334:
      if (lookahead == 'o')
        ADVANCE(335);
      END_STATE();
    case 335:
      if (lookahead == 'r')
        ADVANCE(336);
      END_STATE();
    case 336:
      if (lookahead == 't')
        ADVANCE(337);
      END_STATE();
    case 337:
      if (lookahead == 's')
        ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_exports);
      END_STATE();
    case 339:
      if (lookahead == 'e')
        ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == 'n')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 'd')
        ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == 's')
        ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 344:
      if (lookahead == 'i')
        ADVANCE(345);
      if (lookahead == 'l')
        ADVANCE(349);
      END_STATE();
    case 345:
      if (lookahead == 'n')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'a')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'l')
        ADVANCE(348);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 349:
      if (lookahead == 'o')
        ADVANCE(350);
      END_STATE();
    case 350:
      if (lookahead == 'a')
        ADVANCE(351);
      END_STATE();
    case 351:
      if (lookahead == 't')
        ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 353:
      if (lookahead == 'f')
        ADVANCE(354);
      if (lookahead == 'm')
        ADVANCE(355);
      if (lookahead == 'n')
        ADVANCE(364);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 355:
      if (lookahead == 'p')
        ADVANCE(356);
      END_STATE();
    case 356:
      if (lookahead == 'l')
        ADVANCE(357);
      END_STATE();
    case 357:
      if (lookahead == 'e')
        ADVANCE(358);
      END_STATE();
    case 358:
      if (lookahead == 'm')
        ADVANCE(359);
      END_STATE();
    case 359:
      if (lookahead == 'e')
        ADVANCE(360);
      END_STATE();
    case 360:
      if (lookahead == 'n')
        ADVANCE(361);
      END_STATE();
    case 361:
      if (lookahead == 't')
        ADVANCE(362);
      END_STATE();
    case 362:
      if (lookahead == 's')
        ADVANCE(363);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 364:
      if (lookahead == 't')
        ADVANCE(365);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e')
        ADVANCE(366);
      END_STATE();
    case 366:
      if (lookahead == 'r')
        ADVANCE(367);
      END_STATE();
    case 367:
      if (lookahead == 'f')
        ADVANCE(368);
      END_STATE();
    case 368:
      if (lookahead == 'a')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead == 'c')
        ADVANCE(370);
      END_STATE();
    case 370:
      if (lookahead == 'e')
        ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 372:
      if (lookahead == 'o')
        ADVANCE(373);
      END_STATE();
    case 373:
      if (lookahead == 'n')
        ADVANCE(374);
      END_STATE();
    case 374:
      if (lookahead == 'g')
        ADVANCE(375);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 376:
      if (lookahead == 'o')
        ADVANCE(377);
      END_STATE();
    case 377:
      if (lookahead == 'd')
        ADVANCE(378);
      END_STATE();
    case 378:
      if (lookahead == 'u')
        ADVANCE(379);
      END_STATE();
    case 379:
      if (lookahead == 'l')
        ADVANCE(380);
      END_STATE();
    case 380:
      if (lookahead == 'e')
        ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 382:
      if (lookahead == 'a')
        ADVANCE(383);
      if (lookahead == 'e')
        ADVANCE(388);
      END_STATE();
    case 383:
      if (lookahead == 't')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == 'i')
        ADVANCE(385);
      END_STATE();
    case 385:
      if (lookahead == 'v')
        ADVANCE(386);
      END_STATE();
    case 386:
      if (lookahead == 'e')
        ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_native);
      END_STATE();
    case 388:
      if (lookahead == 'w')
        ADVANCE(389);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 390:
      if (lookahead == 'p')
        ADVANCE(391);
      END_STATE();
    case 391:
      if (lookahead == 'e')
        ADVANCE(392);
      END_STATE();
    case 392:
      if (lookahead == 'n')
        ADVANCE(393);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_open);
      if (lookahead == 's')
        ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_opens);
      END_STATE();
    case 395:
      if (lookahead == 'a')
        ADVANCE(396);
      if (lookahead == 'r')
        ADVANCE(402);
      if (lookahead == 'u')
        ADVANCE(420);
      END_STATE();
    case 396:
      if (lookahead == 'c')
        ADVANCE(397);
      END_STATE();
    case 397:
      if (lookahead == 'k')
        ADVANCE(398);
      END_STATE();
    case 398:
      if (lookahead == 'a')
        ADVANCE(399);
      END_STATE();
    case 399:
      if (lookahead == 'g')
        ADVANCE(400);
      END_STATE();
    case 400:
      if (lookahead == 'e')
        ADVANCE(401);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 402:
      if (lookahead == 'i')
        ADVANCE(403);
      if (lookahead == 'o')
        ADVANCE(408);
      END_STATE();
    case 403:
      if (lookahead == 'v')
        ADVANCE(404);
      END_STATE();
    case 404:
      if (lookahead == 'a')
        ADVANCE(405);
      END_STATE();
    case 405:
      if (lookahead == 't')
        ADVANCE(406);
      END_STATE();
    case 406:
      if (lookahead == 'e')
        ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 408:
      if (lookahead == 't')
        ADVANCE(409);
      if (lookahead == 'v')
        ADVANCE(415);
      END_STATE();
    case 409:
      if (lookahead == 'e')
        ADVANCE(410);
      END_STATE();
    case 410:
      if (lookahead == 'c')
        ADVANCE(411);
      END_STATE();
    case 411:
      if (lookahead == 't')
        ADVANCE(412);
      END_STATE();
    case 412:
      if (lookahead == 'e')
        ADVANCE(413);
      END_STATE();
    case 413:
      if (lookahead == 'd')
        ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 415:
      if (lookahead == 'i')
        ADVANCE(416);
      END_STATE();
    case 416:
      if (lookahead == 'd')
        ADVANCE(417);
      END_STATE();
    case 417:
      if (lookahead == 'e')
        ADVANCE(418);
      END_STATE();
    case 418:
      if (lookahead == 's')
        ADVANCE(419);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_provides);
      END_STATE();
    case 420:
      if (lookahead == 'b')
        ADVANCE(421);
      END_STATE();
    case 421:
      if (lookahead == 'l')
        ADVANCE(422);
      END_STATE();
    case 422:
      if (lookahead == 'i')
        ADVANCE(423);
      END_STATE();
    case 423:
      if (lookahead == 'c')
        ADVANCE(424);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 425:
      if (lookahead == 'e')
        ADVANCE(426);
      END_STATE();
    case 426:
      if (lookahead == 'q')
        ADVANCE(427);
      END_STATE();
    case 427:
      if (lookahead == 'u')
        ADVANCE(428);
      END_STATE();
    case 428:
      if (lookahead == 'i')
        ADVANCE(429);
      END_STATE();
    case 429:
      if (lookahead == 'r')
        ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == 'e')
        ADVANCE(431);
      END_STATE();
    case 431:
      if (lookahead == 's')
        ADVANCE(432);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 433:
      if (lookahead == 'h')
        ADVANCE(434);
      if (lookahead == 't')
        ADVANCE(438);
      if (lookahead == 'u')
        ADVANCE(449);
      if (lookahead == 'y')
        ADVANCE(453);
      END_STATE();
    case 434:
      if (lookahead == 'o')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 'r')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == 't')
        ADVANCE(437);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 438:
      if (lookahead == 'a')
        ADVANCE(439);
      if (lookahead == 'r')
        ADVANCE(443);
      END_STATE();
    case 439:
      if (lookahead == 't')
        ADVANCE(440);
      END_STATE();
    case 440:
      if (lookahead == 'i')
        ADVANCE(441);
      END_STATE();
    case 441:
      if (lookahead == 'c')
        ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 443:
      if (lookahead == 'i')
        ADVANCE(444);
      END_STATE();
    case 444:
      if (lookahead == 'c')
        ADVANCE(445);
      END_STATE();
    case 445:
      if (lookahead == 't')
        ADVANCE(446);
      END_STATE();
    case 446:
      if (lookahead == 'f')
        ADVANCE(447);
      END_STATE();
    case 447:
      if (lookahead == 'p')
        ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_strictfp);
      END_STATE();
    case 449:
      if (lookahead == 'p')
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
      ACCEPT_TOKEN(anon_sym_super);
      END_STATE();
    case 453:
      if (lookahead == 'n')
        ADVANCE(454);
      END_STATE();
    case 454:
      if (lookahead == 'c')
        ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead == 'h')
        ADVANCE(456);
      END_STATE();
    case 456:
      if (lookahead == 'r')
        ADVANCE(457);
      END_STATE();
    case 457:
      if (lookahead == 'o')
        ADVANCE(458);
      END_STATE();
    case 458:
      if (lookahead == 'n')
        ADVANCE(459);
      END_STATE();
    case 459:
      if (lookahead == 'i')
        ADVANCE(460);
      END_STATE();
    case 460:
      if (lookahead == 'z')
        ADVANCE(461);
      END_STATE();
    case 461:
      if (lookahead == 'e')
        ADVANCE(462);
      END_STATE();
    case 462:
      if (lookahead == 'd')
        ADVANCE(463);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 464:
      if (lookahead == 'h')
        ADVANCE(465);
      END_STATE();
    case 465:
      if (lookahead == 'i')
        ADVANCE(466);
      if (lookahead == 'r')
        ADVANCE(468);
      END_STATE();
    case 466:
      if (lookahead == 's')
        ADVANCE(467);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 468:
      if (lookahead == 'o')
        ADVANCE(469);
      END_STATE();
    case 469:
      if (lookahead == 'w')
        ADVANCE(470);
      END_STATE();
    case 470:
      if (lookahead == 's')
        ADVANCE(471);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_throws);
      END_STATE();
    case 472:
      if (lookahead == 's')
        ADVANCE(473);
      END_STATE();
    case 473:
      if (lookahead == 'e')
        ADVANCE(474);
      END_STATE();
    case 474:
      if (lookahead == 's')
        ADVANCE(475);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 476:
      if (lookahead == 'o')
        ADVANCE(477);
      END_STATE();
    case 477:
      if (lookahead == 'i')
        ADVANCE(478);
      END_STATE();
    case 478:
      if (lookahead == 'd')
        ADVANCE(479);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 480:
      if (lookahead == 'i')
        ADVANCE(481);
      END_STATE();
    case 481:
      if (lookahead == 't')
        ADVANCE(482);
      END_STATE();
    case 482:
      if (lookahead == 'h')
        ADVANCE(483);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 484:
      if (lookahead == '\n')
        SKIP(484);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(485);
      if (lookahead == '\\')
        ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(489);
      if (lookahead != 0)
        ADVANCE(489);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(25);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(487);
      if (lookahead != 0)
        ADVANCE(488);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!')
        ADVANCE(251);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(255);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == ';')
        ADVANCE(54);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '{')
        ADVANCE(245);
      if (lookahead == '}')
        ADVANCE(248);
      if (lookahead == '~')
        ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'b')
        ADVANCE(79);
      if (lookahead == 'c')
        ADVANCE(493);
      if (lookahead == 'd')
        ADVANCE(97);
      if (lookahead == 'f')
        ADVANCE(494);
      if (lookahead == 'i')
        ADVANCE(495);
      if (lookahead == 'l')
        ADVANCE(144);
      if (lookahead == 'n')
        ADVANCE(498);
      if (lookahead == 'p')
        ADVANCE(499);
      if (lookahead == 's')
        ADVANCE(500);
      if (lookahead == 't')
        ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(121);
      if (lookahead == 'l')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(176);
      if (lookahead == 'u')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(199);
      if (lookahead == 'y')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == 'i')
        ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == 's')
        ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 507:
      if (lookahead == '&')
        ADVANCE(508);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == ':')
        ADVANCE(509);
      if (lookahead == ';')
        ADVANCE(54);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == '=')
        ADVANCE(510);
      if (lookahead == '>')
        ADVANCE(511);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == 'd')
        ADVANCE(512);
      if (lookahead == 'e')
        ADVANCE(513);
      if (lookahead == 'i')
        ADVANCE(515);
      if (lookahead == 'n')
        ADVANCE(516);
      if (lookahead == 's')
        ADVANCE(517);
      if (lookahead == 't')
        ADVANCE(464);
      if (lookahead == '{')
        ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(507);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 509:
      if (lookahead == ':')
        ADVANCE(53);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 512:
      if (lookahead == 'e')
        ADVANCE(318);
      END_STATE();
    case 513:
      if (lookahead == 'x')
        ADVANCE(514);
      END_STATE();
    case 514:
      if (lookahead == 't')
        ADVANCE(339);
      END_STATE();
    case 515:
      if (lookahead == 'm')
        ADVANCE(355);
      END_STATE();
    case 516:
      if (lookahead == 'e')
        ADVANCE(388);
      END_STATE();
    case 517:
      if (lookahead == 'u')
        ADVANCE(449);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == 'b')
        ADVANCE(79);
      if (lookahead == 'c')
        ADVANCE(493);
      if (lookahead == 'd')
        ADVANCE(520);
      if (lookahead == 'f')
        ADVANCE(521);
      if (lookahead == 'i')
        ADVANCE(495);
      if (lookahead == 'l')
        ADVANCE(144);
      if (lookahead == 's')
        ADVANCE(522);
      if (lookahead == 't')
        ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\"')
        ADVANCE(252);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == '0')
        ADVANCE(266);
      if (lookahead == 'f')
        ADVANCE(524);
      if (lookahead == 'n')
        ADVANCE(525);
      if (lookahead == 't')
        ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(523);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == ';')
        ADVANCE(54);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'c')
        ADVANCE(279);
      if (lookahead == 'd')
        ADVANCE(280);
      if (lookahead == 'f')
        ADVANCE(527);
      if (lookahead == 'i')
        ADVANCE(503);
      if (lookahead == 'n')
        ADVANCE(498);
      if (lookahead == 'p')
        ADVANCE(499);
      if (lookahead == 's')
        ADVANCE(286);
      if (lookahead == 'v')
        ADVANCE(241);
      if (lookahead == '{')
        ADVANCE(245);
      if (lookahead == '}')
        ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(252);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(529);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == '0')
        ADVANCE(266);
      if (lookahead == ':')
        ADVANCE(530);
      if (lookahead == ';')
        ADVANCE(54);
      if (lookahead == '<')
        ADVANCE(531);
      if (lookahead == '=')
        ADVANCE(532);
      if (lookahead == '>')
        ADVANCE(61);
      if (lookahead == '?')
        ADVANCE(65);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'c')
        ADVANCE(279);
      if (lookahead == 'd')
        ADVANCE(280);
      if (lookahead == 'f')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(282);
      if (lookahead == 'm')
        ADVANCE(148);
      if (lookahead == 'n')
        ADVANCE(285);
      if (lookahead == 'o')
        ADVANCE(165);
      if (lookahead == 'p')
        ADVANCE(169);
      if (lookahead == 's')
        ADVANCE(286);
      if (lookahead == 't')
        ADVANCE(287);
      if (lookahead == 'v')
        ADVANCE(241);
      if (lookahead == '{')
        ADVANCE(245);
      if (lookahead == '|')
        ADVANCE(246);
      if (lookahead == '}')
        ADVANCE(248);
      if (lookahead == '~')
        ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(528);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(16);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(56);
      if (lookahead == '=')
        ADVANCE(57);
      END_STATE();
    case 532:
      if (lookahead == '=')
        ADVANCE(60);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'c')
        ADVANCE(279);
      if (lookahead == 'd')
        ADVANCE(280);
      if (lookahead == 'f')
        ADVANCE(527);
      if (lookahead == 'n')
        ADVANCE(498);
      if (lookahead == 'p')
        ADVANCE(499);
      if (lookahead == 's')
        ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'c')
        ADVANCE(279);
      if (lookahead == 'd')
        ADVANCE(280);
      if (lookahead == 'f')
        ADVANCE(527);
      if (lookahead == 'i')
        ADVANCE(503);
      if (lookahead == 'n')
        ADVANCE(498);
      if (lookahead == 'p')
        ADVANCE(499);
      if (lookahead == 's')
        ADVANCE(286);
      if (lookahead == '}')
        ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == 's')
        ADVANCE(505);
      if (lookahead == 't')
        ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == 'v')
        ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == 'b')
        ADVANCE(79);
      if (lookahead == 'c')
        ADVANCE(493);
      if (lookahead == 'd')
        ADVANCE(520);
      if (lookahead == 'f')
        ADVANCE(521);
      if (lookahead == 'i')
        ADVANCE(495);
      if (lookahead == 'l')
        ADVANCE(144);
      if (lookahead == 's')
        ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == ';')
        ADVANCE(54);
      if (lookahead == 't')
        ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\"')
        ADVANCE(252);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == '0')
        ADVANCE(266);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'b')
        ADVANCE(79);
      if (lookahead == 'c')
        ADVANCE(89);
      if (lookahead == 'd')
        ADVANCE(97);
      if (lookahead == 'f')
        ADVANCE(116);
      if (lookahead == 'i')
        ADVANCE(543);
      if (lookahead == 'l')
        ADVANCE(144);
      if (lookahead == 'n')
        ADVANCE(154);
      if (lookahead == 'p')
        ADVANCE(499);
      if (lookahead == 's')
        ADVANCE(194);
      if (lookahead == 't')
        ADVANCE(544);
      if (lookahead == 'v')
        ADVANCE(241);
      if (lookahead == '}')
        ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(542);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(130);
      if (lookahead == 'n')
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 545:
      if (lookahead == '!')
        ADVANCE(290);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(546);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(547);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(548);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == ';')
        ADVANCE(54);
      if (lookahead == '<')
        ADVANCE(549);
      if (lookahead == '=')
        ADVANCE(532);
      if (lookahead == '>')
        ADVANCE(550);
      if (lookahead == '?')
        ADVANCE(65);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(246);
      if (lookahead == '}')
        ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(545);
      END_STATE();
    case 546:
      if (lookahead == '&')
        ADVANCE(7);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(56);
      END_STATE();
    case 550:
      if (lookahead == '>')
        ADVANCE(63);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(491);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'b')
        ADVANCE(79);
      if (lookahead == 'c')
        ADVANCE(89);
      if (lookahead == 'd')
        ADVANCE(97);
      if (lookahead == 'f')
        ADVANCE(494);
      if (lookahead == 'i')
        ADVANCE(495);
      if (lookahead == 'l')
        ADVANCE(144);
      if (lookahead == 'n')
        ADVANCE(498);
      if (lookahead == 'p')
        ADVANCE(499);
      if (lookahead == 's')
        ADVANCE(500);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!')
        ADVANCE(251);
      if (lookahead == '\"')
        ADVANCE(252);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == '0')
        ADVANCE(266);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'c')
        ADVANCE(279);
      if (lookahead == 'd')
        ADVANCE(280);
      if (lookahead == 'e')
        ADVANCE(109);
      if (lookahead == 'f')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(553);
      if (lookahead == 'm')
        ADVANCE(148);
      if (lookahead == 'n')
        ADVANCE(285);
      if (lookahead == 'o')
        ADVANCE(165);
      if (lookahead == 'p')
        ADVANCE(169);
      if (lookahead == 's')
        ADVANCE(286);
      if (lookahead == 't')
        ADVANCE(287);
      if (lookahead == 'v')
        ADVANCE(241);
      if (lookahead == '{')
        ADVANCE(245);
      if (lookahead == '}')
        ADVANCE(248);
      if (lookahead == '~')
        ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(552);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(130);
      if (lookahead == 'm')
        ADVANCE(131);
      if (lookahead == 'n')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == 'c')
        ADVANCE(279);
      if (lookahead == 's')
        ADVANCE(555);
      if (lookahead == 't')
        ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == '<')
        ADVANCE(278);
      if (lookahead == 'n')
        ADVANCE(557);
      if (lookahead == 's')
        ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(265);
      if (lookahead == 's')
        ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 250},
  [2] = {.lex_state = 289},
  [3] = {.lex_state = 289},
  [4] = {.lex_state = 289},
  [5] = {.lex_state = 484},
  [6] = {.lex_state = 289},
  [7] = {.lex_state = 490},
  [8] = {.lex_state = 492},
  [9] = {.lex_state = 490},
  [10] = {.lex_state = 490},
  [11] = {.lex_state = 502},
  [12] = {.lex_state = 250},
  [13] = {.lex_state = 490},
  [14] = {.lex_state = 289},
  [15] = {.lex_state = 490},
  [16] = {.lex_state = 504},
  [17] = {.lex_state = 490},
  [18] = {.lex_state = 490},
  [19] = {.lex_state = 490},
  [20] = {.lex_state = 289},
  [21] = {.lex_state = 250},
  [22] = {.lex_state = 250},
  [23] = {.lex_state = 289},
  [24] = {.lex_state = 289},
  [25] = {.lex_state = 289},
  [26] = {.lex_state = 289},
  [27] = {.lex_state = 289},
  [28] = {.lex_state = 250},
  [29] = {.lex_state = 289},
  [30] = {.lex_state = 250},
  [31] = {.lex_state = 250},
  [32] = {.lex_state = 250},
  [33] = {.lex_state = 250},
  [34] = {.lex_state = 289},
  [35] = {.lex_state = 250},
  [36] = {.lex_state = 250},
  [37] = {.lex_state = 289},
  [38] = {.lex_state = 490},
  [39] = {.lex_state = 250},
  [40] = {.lex_state = 250},
  [41] = {.lex_state = 250},
  [42] = {.lex_state = 289},
  [43] = {.lex_state = 484},
  [44] = {.lex_state = 484},
  [45] = {.lex_state = 490},
  [46] = {.lex_state = 507},
  [47] = {.lex_state = 518},
  [48] = {.lex_state = 490},
  [49] = {.lex_state = 507},
  [50] = {.lex_state = 507},
  [51] = {.lex_state = 490},
  [52] = {.lex_state = 490},
  [53] = {.lex_state = 518},
  [54] = {.lex_state = 518},
  [55] = {.lex_state = 518},
  [56] = {.lex_state = 490},
  [57] = {.lex_state = 289},
  [58] = {.lex_state = 490},
  [59] = {.lex_state = 289},
  [60] = {.lex_state = 250},
  [61] = {.lex_state = 490},
  [62] = {.lex_state = 492},
  [63] = {.lex_state = 492},
  [64] = {.lex_state = 289},
  [65] = {.lex_state = 289},
  [66] = {.lex_state = 289},
  [67] = {.lex_state = 519},
  [68] = {.lex_state = 289},
  [69] = {.lex_state = 289},
  [70] = {.lex_state = 289},
  [71] = {.lex_state = 490},
  [72] = {.lex_state = 289},
  [73] = {.lex_state = 289},
  [74] = {.lex_state = 490},
  [75] = {.lex_state = 289},
  [76] = {.lex_state = 250},
  [77] = {.lex_state = 289},
  [78] = {.lex_state = 490},
  [79] = {.lex_state = 289},
  [80] = {.lex_state = 289},
  [81] = {.lex_state = 289},
  [82] = {.lex_state = 250},
  [83] = {.lex_state = 490},
  [84] = {.lex_state = 490},
  [85] = {.lex_state = 490},
  [86] = {.lex_state = 490},
  [87] = {.lex_state = 490},
  [88] = {.lex_state = 490},
  [89] = {.lex_state = 289},
  [90] = {.lex_state = 490},
  [91] = {.lex_state = 490},
  [92] = {.lex_state = 250},
  [93] = {.lex_state = 490},
  [94] = {.lex_state = 250},
  [95] = {.lex_state = 250},
  [96] = {.lex_state = 289},
  [97] = {.lex_state = 250},
  [98] = {.lex_state = 250},
  [99] = {.lex_state = 289},
  [100] = {.lex_state = 250},
  [101] = {.lex_state = 250},
  [102] = {.lex_state = 490},
  [103] = {.lex_state = 289},
  [104] = {.lex_state = 502},
  [105] = {.lex_state = 490},
  [106] = {.lex_state = 490},
  [107] = {.lex_state = 289},
  [108] = {.lex_state = 289},
  [109] = {.lex_state = 289},
  [110] = {.lex_state = 484},
  [111] = {.lex_state = 490},
  [112] = {.lex_state = 490},
  [113] = {.lex_state = 490},
  [114] = {.lex_state = 507},
  [115] = {.lex_state = 289},
  [116] = {.lex_state = 490},
  [117] = {.lex_state = 507},
  [118] = {.lex_state = 507},
  [119] = {.lex_state = 490},
  [120] = {.lex_state = 250},
  [121] = {.lex_state = 490},
  [122] = {.lex_state = 492},
  [123] = {.lex_state = 492},
  [124] = {.lex_state = 289},
  [125] = {.lex_state = 289},
  [126] = {.lex_state = 289},
  [127] = {.lex_state = 289},
  [128] = {.lex_state = 289},
  [129] = {.lex_state = 289},
  [130] = {.lex_state = 289},
  [131] = {.lex_state = 250},
  [132] = {.lex_state = 518},
  [133] = {.lex_state = 490},
  [134] = {.lex_state = 289},
  [135] = {.lex_state = 490},
  [136] = {.lex_state = 289},
  [137] = {.lex_state = 519},
  [138] = {.lex_state = 519},
  [139] = {.lex_state = 490},
  [140] = {.lex_state = 289},
  [141] = {.lex_state = 289},
  [142] = {.lex_state = 250},
  [143] = {.lex_state = 523},
  [144] = {.lex_state = 490},
  [145] = {.lex_state = 250},
  [146] = {.lex_state = 490},
  [147] = {.lex_state = 289},
  [148] = {.lex_state = 289},
  [149] = {.lex_state = 250},
  [150] = {.lex_state = 289},
  [151] = {.lex_state = 289},
  [152] = {.lex_state = 250},
  [153] = {.lex_state = 490},
  [154] = {.lex_state = 526},
  [155] = {.lex_state = 490},
  [156] = {.lex_state = 490},
  [157] = {.lex_state = 289},
  [158] = {.lex_state = 289},
  [159] = {.lex_state = 250},
  [160] = {.lex_state = 250},
  [161] = {.lex_state = 526},
  [162] = {.lex_state = 490},
  [163] = {.lex_state = 289},
  [164] = {.lex_state = 250},
  [165] = {.lex_state = 250},
  [166] = {.lex_state = 289},
  [167] = {.lex_state = 289},
  [168] = {.lex_state = 289},
  [169] = {.lex_state = 289},
  [170] = {.lex_state = 289},
  [171] = {.lex_state = 490},
  [172] = {.lex_state = 490},
  [173] = {.lex_state = 289},
  [174] = {.lex_state = 490},
  [175] = {.lex_state = 490},
  [176] = {.lex_state = 289},
  [177] = {.lex_state = 289},
  [178] = {.lex_state = 289},
  [179] = {.lex_state = 490},
  [180] = {.lex_state = 250},
  [181] = {.lex_state = 528},
  [182] = {.lex_state = 490},
  [183] = {.lex_state = 533},
  [184] = {.lex_state = 490},
  [185] = {.lex_state = 289},
  [186] = {.lex_state = 289},
  [187] = {.lex_state = 533},
  [188] = {.lex_state = 289},
  [189] = {.lex_state = 533},
  [190] = {.lex_state = 250},
  [191] = {.lex_state = 289},
  [192] = {.lex_state = 289},
  [193] = {.lex_state = 250},
  [194] = {.lex_state = 492},
  [195] = {.lex_state = 490},
  [196] = {.lex_state = 289},
  [197] = {.lex_state = 490},
  [198] = {.lex_state = 289},
  [199] = {.lex_state = 490},
  [200] = {.lex_state = 289},
  [201] = {.lex_state = 289},
  [202] = {.lex_state = 250},
  [203] = {.lex_state = 523},
  [204] = {.lex_state = 490},
  [205] = {.lex_state = 507},
  [206] = {.lex_state = 507},
  [207] = {.lex_state = 490},
  [208] = {.lex_state = 507},
  [209] = {.lex_state = 490},
  [210] = {.lex_state = 507},
  [211] = {.lex_state = 490},
  [212] = {.lex_state = 250},
  [213] = {.lex_state = 523},
  [214] = {.lex_state = 490},
  [215] = {.lex_state = 289},
  [216] = {.lex_state = 289},
  [217] = {.lex_state = 289},
  [218] = {.lex_state = 507},
  [219] = {.lex_state = 289},
  [220] = {.lex_state = 289},
  [221] = {.lex_state = 289},
  [222] = {.lex_state = 289},
  [223] = {.lex_state = 289},
  [224] = {.lex_state = 289},
  [225] = {.lex_state = 519},
  [226] = {.lex_state = 519},
  [227] = {.lex_state = 289},
  [228] = {.lex_state = 289},
  [229] = {.lex_state = 289},
  [230] = {.lex_state = 490},
  [231] = {.lex_state = 534},
  [232] = {.lex_state = 250},
  [233] = {.lex_state = 289},
  [234] = {.lex_state = 289},
  [235] = {.lex_state = 250},
  [236] = {.lex_state = 250},
  [237] = {.lex_state = 250},
  [238] = {.lex_state = 289},
  [239] = {.lex_state = 289},
  [240] = {.lex_state = 289},
  [241] = {.lex_state = 490},
  [242] = {.lex_state = 250},
  [243] = {.lex_state = 535},
  [244] = {.lex_state = 490},
  [245] = {.lex_state = 490},
  [246] = {.lex_state = 490},
  [247] = {.lex_state = 289},
  [248] = {.lex_state = 289},
  [249] = {.lex_state = 250},
  [250] = {.lex_state = 490},
  [251] = {.lex_state = 289},
  [252] = {.lex_state = 526},
  [253] = {.lex_state = 490},
  [254] = {.lex_state = 289},
  [255] = {.lex_state = 250},
  [256] = {.lex_state = 502},
  [257] = {.lex_state = 526},
  [258] = {.lex_state = 490},
  [259] = {.lex_state = 490},
  [260] = {.lex_state = 492},
  [261] = {.lex_state = 526},
  [262] = {.lex_state = 526},
  [263] = {.lex_state = 526},
  [264] = {.lex_state = 538},
  [265] = {.lex_state = 526},
  [266] = {.lex_state = 526},
  [267] = {.lex_state = 289},
  [268] = {.lex_state = 526},
  [269] = {.lex_state = 289},
  [270] = {.lex_state = 526},
  [271] = {.lex_state = 526},
  [272] = {.lex_state = 289},
  [273] = {.lex_state = 250},
  [274] = {.lex_state = 250},
  [275] = {.lex_state = 289},
  [276] = {.lex_state = 250},
  [277] = {.lex_state = 250},
  [278] = {.lex_state = 526},
  [279] = {.lex_state = 250},
  [280] = {.lex_state = 526},
  [281] = {.lex_state = 289},
  [282] = {.lex_state = 289},
  [283] = {.lex_state = 526},
  [284] = {.lex_state = 526},
  [285] = {.lex_state = 250},
  [286] = {.lex_state = 250},
  [287] = {.lex_state = 250},
  [288] = {.lex_state = 490},
  [289] = {.lex_state = 490},
  [290] = {.lex_state = 490},
  [291] = {.lex_state = 490},
  [292] = {.lex_state = 490},
  [293] = {.lex_state = 490},
  [294] = {.lex_state = 490},
  [295] = {.lex_state = 490},
  [296] = {.lex_state = 490},
  [297] = {.lex_state = 490},
  [298] = {.lex_state = 490},
  [299] = {.lex_state = 490},
  [300] = {.lex_state = 490},
  [301] = {.lex_state = 289},
  [302] = {.lex_state = 289},
  [303] = {.lex_state = 289},
  [304] = {.lex_state = 490},
  [305] = {.lex_state = 533},
  [306] = {.lex_state = 533},
  [307] = {.lex_state = 289},
  [308] = {.lex_state = 289},
  [309] = {.lex_state = 528},
  [310] = {.lex_state = 289},
  [311] = {.lex_state = 289},
  [312] = {.lex_state = 289},
  [313] = {.lex_state = 490},
  [314] = {.lex_state = 289},
  [315] = {.lex_state = 250},
  [316] = {.lex_state = 490},
  [317] = {.lex_state = 490},
  [318] = {.lex_state = 289},
  [319] = {.lex_state = 289},
  [320] = {.lex_state = 490},
  [321] = {.lex_state = 250},
  [322] = {.lex_state = 289},
  [323] = {.lex_state = 250},
  [324] = {.lex_state = 289},
  [325] = {.lex_state = 289},
  [326] = {.lex_state = 490},
  [327] = {.lex_state = 289},
  [328] = {.lex_state = 250},
  [329] = {.lex_state = 250},
  [330] = {.lex_state = 490},
  [331] = {.lex_state = 539},
  [332] = {.lex_state = 490},
  [333] = {.lex_state = 507},
  [334] = {.lex_state = 507},
  [335] = {.lex_state = 490},
  [336] = {.lex_state = 507},
  [337] = {.lex_state = 507},
  [338] = {.lex_state = 507},
  [339] = {.lex_state = 490},
  [340] = {.lex_state = 492},
  [341] = {.lex_state = 289},
  [342] = {.lex_state = 250},
  [343] = {.lex_state = 250},
  [344] = {.lex_state = 492},
  [345] = {.lex_state = 507},
  [346] = {.lex_state = 289},
  [347] = {.lex_state = 289},
  [348] = {.lex_state = 289},
  [349] = {.lex_state = 289},
  [350] = {.lex_state = 523},
  [351] = {.lex_state = 490},
  [352] = {.lex_state = 289},
  [353] = {.lex_state = 289},
  [354] = {.lex_state = 250},
  [355] = {.lex_state = 502},
  [356] = {.lex_state = 534},
  [357] = {.lex_state = 490},
  [358] = {.lex_state = 490},
  [359] = {.lex_state = 289},
  [360] = {.lex_state = 534},
  [361] = {.lex_state = 534},
  [362] = {.lex_state = 534},
  [363] = {.lex_state = 534},
  [364] = {.lex_state = 534},
  [365] = {.lex_state = 534},
  [366] = {.lex_state = 289},
  [367] = {.lex_state = 534},
  [368] = {.lex_state = 534},
  [369] = {.lex_state = 289},
  [370] = {.lex_state = 250},
  [371] = {.lex_state = 289},
  [372] = {.lex_state = 490},
  [373] = {.lex_state = 250},
  [374] = {.lex_state = 250},
  [375] = {.lex_state = 289},
  [376] = {.lex_state = 289},
  [377] = {.lex_state = 535},
  [378] = {.lex_state = 289},
  [379] = {.lex_state = 535},
  [380] = {.lex_state = 289},
  [381] = {.lex_state = 535},
  [382] = {.lex_state = 540},
  [383] = {.lex_state = 540},
  [384] = {.lex_state = 289},
  [385] = {.lex_state = 289},
  [386] = {.lex_state = 289},
  [387] = {.lex_state = 289},
  [388] = {.lex_state = 289},
  [389] = {.lex_state = 250},
  [390] = {.lex_state = 507},
  [391] = {.lex_state = 526},
  [392] = {.lex_state = 250},
  [393] = {.lex_state = 490},
  [394] = {.lex_state = 526},
  [395] = {.lex_state = 526},
  [396] = {.lex_state = 289},
  [397] = {.lex_state = 289},
  [398] = {.lex_state = 289},
  [399] = {.lex_state = 492},
  [400] = {.lex_state = 542},
  [401] = {.lex_state = 526},
  [402] = {.lex_state = 250},
  [403] = {.lex_state = 526},
  [404] = {.lex_state = 526},
  [405] = {.lex_state = 502},
  [406] = {.lex_state = 490},
  [407] = {.lex_state = 490},
  [408] = {.lex_state = 526},
  [409] = {.lex_state = 289},
  [410] = {.lex_state = 289},
  [411] = {.lex_state = 250},
  [412] = {.lex_state = 526},
  [413] = {.lex_state = 490},
  [414] = {.lex_state = 250},
  [415] = {.lex_state = 250},
  [416] = {.lex_state = 250},
  [417] = {.lex_state = 526},
  [418] = {.lex_state = 490},
  [419] = {.lex_state = 289},
  [420] = {.lex_state = 289},
  [421] = {.lex_state = 250},
  [422] = {.lex_state = 526},
  [423] = {.lex_state = 250},
  [424] = {.lex_state = 289},
  [425] = {.lex_state = 289},
  [426] = {.lex_state = 289},
  [427] = {.lex_state = 289},
  [428] = {.lex_state = 289},
  [429] = {.lex_state = 289},
  [430] = {.lex_state = 289},
  [431] = {.lex_state = 289},
  [432] = {.lex_state = 289},
  [433] = {.lex_state = 289},
  [434] = {.lex_state = 289},
  [435] = {.lex_state = 289},
  [436] = {.lex_state = 490},
  [437] = {.lex_state = 490},
  [438] = {.lex_state = 289},
  [439] = {.lex_state = 523},
  [440] = {.lex_state = 490},
  [441] = {.lex_state = 526},
  [442] = {.lex_state = 289},
  [443] = {.lex_state = 289},
  [444] = {.lex_state = 250},
  [445] = {.lex_state = 289},
  [446] = {.lex_state = 289},
  [447] = {.lex_state = 289},
  [448] = {.lex_state = 289},
  [449] = {.lex_state = 289},
  [450] = {.lex_state = 539},
  [451] = {.lex_state = 490},
  [452] = {.lex_state = 490},
  [453] = {.lex_state = 490},
  [454] = {.lex_state = 289},
  [455] = {.lex_state = 289},
  [456] = {.lex_state = 490},
  [457] = {.lex_state = 289},
  [458] = {.lex_state = 289},
  [459] = {.lex_state = 490},
  [460] = {.lex_state = 289},
  [461] = {.lex_state = 250},
  [462] = {.lex_state = 250},
  [463] = {.lex_state = 289},
  [464] = {.lex_state = 250},
  [465] = {.lex_state = 490},
  [466] = {.lex_state = 490},
  [467] = {.lex_state = 490},
  [468] = {.lex_state = 507},
  [469] = {.lex_state = 507},
  [470] = {.lex_state = 507},
  [471] = {.lex_state = 289},
  [472] = {.lex_state = 539},
  [473] = {.lex_state = 539},
  [474] = {.lex_state = 539},
  [475] = {.lex_state = 507},
  [476] = {.lex_state = 490},
  [477] = {.lex_state = 507},
  [478] = {.lex_state = 490},
  [479] = {.lex_state = 507},
  [480] = {.lex_state = 490},
  [481] = {.lex_state = 507},
  [482] = {.lex_state = 492},
  [483] = {.lex_state = 492},
  [484] = {.lex_state = 507},
  [485] = {.lex_state = 289},
  [486] = {.lex_state = 519},
  [487] = {.lex_state = 289},
  [488] = {.lex_state = 250},
  [489] = {.lex_state = 250},
  [490] = {.lex_state = 519},
  [491] = {.lex_state = 490},
  [492] = {.lex_state = 534},
  [493] = {.lex_state = 534},
  [494] = {.lex_state = 289},
  [495] = {.lex_state = 289},
  [496] = {.lex_state = 250},
  [497] = {.lex_state = 534},
  [498] = {.lex_state = 502},
  [499] = {.lex_state = 490},
  [500] = {.lex_state = 490},
  [501] = {.lex_state = 289},
  [502] = {.lex_state = 534},
  [503] = {.lex_state = 289},
  [504] = {.lex_state = 250},
  [505] = {.lex_state = 534},
  [506] = {.lex_state = 490},
  [507] = {.lex_state = 250},
  [508] = {.lex_state = 289},
  [509] = {.lex_state = 545},
  [510] = {.lex_state = 250},
  [511] = {.lex_state = 289},
  [512] = {.lex_state = 289},
  [513] = {.lex_state = 289},
  [514] = {.lex_state = 289},
  [515] = {.lex_state = 289},
  [516] = {.lex_state = 289},
  [517] = {.lex_state = 289},
  [518] = {.lex_state = 289},
  [519] = {.lex_state = 545},
  [520] = {.lex_state = 545},
  [521] = {.lex_state = 289},
  [522] = {.lex_state = 250},
  [523] = {.lex_state = 490},
  [524] = {.lex_state = 250},
  [525] = {.lex_state = 289},
  [526] = {.lex_state = 490},
  [527] = {.lex_state = 535},
  [528] = {.lex_state = 289},
  [529] = {.lex_state = 490},
  [530] = {.lex_state = 490},
  [531] = {.lex_state = 490},
  [532] = {.lex_state = 289},
  [533] = {.lex_state = 289},
  [534] = {.lex_state = 490},
  [535] = {.lex_state = 250},
  [536] = {.lex_state = 250},
  [537] = {.lex_state = 538},
  [538] = {.lex_state = 526},
  [539] = {.lex_state = 250},
  [540] = {.lex_state = 523},
  [541] = {.lex_state = 490},
  [542] = {.lex_state = 526},
  [543] = {.lex_state = 289},
  [544] = {.lex_state = 289},
  [545] = {.lex_state = 250},
  [546] = {.lex_state = 526},
  [547] = {.lex_state = 526},
  [548] = {.lex_state = 289},
  [549] = {.lex_state = 250},
  [550] = {.lex_state = 526},
  [551] = {.lex_state = 289},
  [552] = {.lex_state = 490},
  [553] = {.lex_state = 526},
  [554] = {.lex_state = 289},
  [555] = {.lex_state = 490},
  [556] = {.lex_state = 289},
  [557] = {.lex_state = 289},
  [558] = {.lex_state = 539},
  [559] = {.lex_state = 289},
  [560] = {.lex_state = 289},
  [561] = {.lex_state = 289},
  [562] = {.lex_state = 289},
  [563] = {.lex_state = 289},
  [564] = {.lex_state = 289},
  [565] = {.lex_state = 551},
  [566] = {.lex_state = 551},
  [567] = {.lex_state = 289},
  [568] = {.lex_state = 289},
  [569] = {.lex_state = 289},
  [570] = {.lex_state = 289},
  [571] = {.lex_state = 289},
  [572] = {.lex_state = 289},
  [573] = {.lex_state = 289},
  [574] = {.lex_state = 289},
  [575] = {.lex_state = 250},
  [576] = {.lex_state = 250},
  [577] = {.lex_state = 539},
  [578] = {.lex_state = 526},
  [579] = {.lex_state = 490},
  [580] = {.lex_state = 289},
  [581] = {.lex_state = 289},
  [582] = {.lex_state = 250},
  [583] = {.lex_state = 526},
  [584] = {.lex_state = 250},
  [585] = {.lex_state = 490},
  [586] = {.lex_state = 250},
  [587] = {.lex_state = 289},
  [588] = {.lex_state = 490},
  [589] = {.lex_state = 526},
  [590] = {.lex_state = 490},
  [591] = {.lex_state = 490},
  [592] = {.lex_state = 490},
  [593] = {.lex_state = 490},
  [594] = {.lex_state = 490},
  [595] = {.lex_state = 490},
  [596] = {.lex_state = 490},
  [597] = {.lex_state = 552},
  [598] = {.lex_state = 490},
  [599] = {.lex_state = 533},
  [600] = {.lex_state = 289},
  [601] = {.lex_state = 250},
  [602] = {.lex_state = 250},
  [603] = {.lex_state = 533},
  [604] = {.lex_state = 289},
  [605] = {.lex_state = 526},
  [606] = {.lex_state = 289},
  [607] = {.lex_state = 250},
  [608] = {.lex_state = 289},
  [609] = {.lex_state = 289},
  [610] = {.lex_state = 289},
  [611] = {.lex_state = 507},
  [612] = {.lex_state = 490},
  [613] = {.lex_state = 490},
  [614] = {.lex_state = 490},
  [615] = {.lex_state = 490},
  [616] = {.lex_state = 289},
  [617] = {.lex_state = 289},
  [618] = {.lex_state = 490},
  [619] = {.lex_state = 289},
  [620] = {.lex_state = 250},
  [621] = {.lex_state = 250},
  [622] = {.lex_state = 539},
  [623] = {.lex_state = 539},
  [624] = {.lex_state = 507},
  [625] = {.lex_state = 539},
  [626] = {.lex_state = 507},
  [627] = {.lex_state = 507},
  [628] = {.lex_state = 539},
  [629] = {.lex_state = 507},
  [630] = {.lex_state = 507},
  [631] = {.lex_state = 490},
  [632] = {.lex_state = 507},
  [633] = {.lex_state = 507},
  [634] = {.lex_state = 507},
  [635] = {.lex_state = 519},
  [636] = {.lex_state = 519},
  [637] = {.lex_state = 250},
  [638] = {.lex_state = 523},
  [639] = {.lex_state = 490},
  [640] = {.lex_state = 526},
  [641] = {.lex_state = 289},
  [642] = {.lex_state = 289},
  [643] = {.lex_state = 250},
  [644] = {.lex_state = 534},
  [645] = {.lex_state = 526},
  [646] = {.lex_state = 289},
  [647] = {.lex_state = 250},
  [648] = {.lex_state = 534},
  [649] = {.lex_state = 289},
  [650] = {.lex_state = 490},
  [651] = {.lex_state = 289},
  [652] = {.lex_state = 289},
  [653] = {.lex_state = 250},
  [654] = {.lex_state = 534},
  [655] = {.lex_state = 490},
  [656] = {.lex_state = 490},
  [657] = {.lex_state = 289},
  [658] = {.lex_state = 250},
  [659] = {.lex_state = 490},
  [660] = {.lex_state = 289},
  [661] = {.lex_state = 250},
  [662] = {.lex_state = 289},
  [663] = {.lex_state = 289},
  [664] = {.lex_state = 289},
  [665] = {.lex_state = 289},
  [666] = {.lex_state = 289},
  [667] = {.lex_state = 289},
  [668] = {.lex_state = 289},
  [669] = {.lex_state = 545},
  [670] = {.lex_state = 545},
  [671] = {.lex_state = 250},
  [672] = {.lex_state = 490},
  [673] = {.lex_state = 250},
  [674] = {.lex_state = 250},
  [675] = {.lex_state = 250},
  [676] = {.lex_state = 250},
  [677] = {.lex_state = 250},
  [678] = {.lex_state = 250},
  [679] = {.lex_state = 250},
  [680] = {.lex_state = 250},
  [681] = {.lex_state = 250},
  [682] = {.lex_state = 289},
  [683] = {.lex_state = 289},
  [684] = {.lex_state = 289},
  [685] = {.lex_state = 540},
  [686] = {.lex_state = 289},
  [687] = {.lex_state = 289},
  [688] = {.lex_state = 490},
  [689] = {.lex_state = 289},
  [690] = {.lex_state = 534},
  [691] = {.lex_state = 526},
  [692] = {.lex_state = 526},
  [693] = {.lex_state = 289},
  [694] = {.lex_state = 250},
  [695] = {.lex_state = 250},
  [696] = {.lex_state = 526},
  [697] = {.lex_state = 526},
  [698] = {.lex_state = 526},
  [699] = {.lex_state = 289},
  [700] = {.lex_state = 250},
  [701] = {.lex_state = 526},
  [702] = {.lex_state = 526},
  [703] = {.lex_state = 526},
  [704] = {.lex_state = 250},
  [705] = {.lex_state = 526},
  [706] = {.lex_state = 289},
  [707] = {.lex_state = 250},
  [708] = {.lex_state = 289},
  [709] = {.lex_state = 289},
  [710] = {.lex_state = 551},
  [711] = {.lex_state = 551},
  [712] = {.lex_state = 490},
  [713] = {.lex_state = 490},
  [714] = {.lex_state = 490},
  [715] = {.lex_state = 289},
  [716] = {.lex_state = 490},
  [717] = {.lex_state = 289},
  [718] = {.lex_state = 289},
  [719] = {.lex_state = 250},
  [720] = {.lex_state = 539},
  [721] = {.lex_state = 250},
  [722] = {.lex_state = 490},
  [723] = {.lex_state = 289},
  [724] = {.lex_state = 289},
  [725] = {.lex_state = 289},
  [726] = {.lex_state = 289},
  [727] = {.lex_state = 289},
  [728] = {.lex_state = 554},
  [729] = {.lex_state = 526},
  [730] = {.lex_state = 250},
  [731] = {.lex_state = 556},
  [732] = {.lex_state = 490},
  [733] = {.lex_state = 556},
  [734] = {.lex_state = 289},
  [735] = {.lex_state = 490},
  [736] = {.lex_state = 250},
  [737] = {.lex_state = 289},
  [738] = {.lex_state = 289},
  [739] = {.lex_state = 526},
  [740] = {.lex_state = 250},
  [741] = {.lex_state = 289},
  [742] = {.lex_state = 289},
  [743] = {.lex_state = 289},
  [744] = {.lex_state = 289},
  [745] = {.lex_state = 289},
  [746] = {.lex_state = 289},
  [747] = {.lex_state = 289},
  [748] = {.lex_state = 289},
  [749] = {.lex_state = 250},
  [750] = {.lex_state = 250},
  [751] = {.lex_state = 502},
  [752] = {.lex_state = 250},
  [753] = {.lex_state = 490},
  [754] = {.lex_state = 490},
  [755] = {.lex_state = 504},
  [756] = {.lex_state = 490},
  [757] = {.lex_state = 289},
  [758] = {.lex_state = 289},
  [759] = {.lex_state = 289},
  [760] = {.lex_state = 289},
  [761] = {.lex_state = 289},
  [762] = {.lex_state = 289},
  [763] = {.lex_state = 289},
  [764] = {.lex_state = 289},
  [765] = {.lex_state = 289},
  [766] = {.lex_state = 250},
  [767] = {.lex_state = 250},
  [768] = {.lex_state = 289},
  [769] = {.lex_state = 533},
  [770] = {.lex_state = 533},
  [771] = {.lex_state = 289},
  [772] = {.lex_state = 250},
  [773] = {.lex_state = 289},
  [774] = {.lex_state = 289},
  [775] = {.lex_state = 490},
  [776] = {.lex_state = 507},
  [777] = {.lex_state = 490},
  [778] = {.lex_state = 490},
  [779] = {.lex_state = 490},
  [780] = {.lex_state = 490},
  [781] = {.lex_state = 250},
  [782] = {.lex_state = 250},
  [783] = {.lex_state = 523},
  [784] = {.lex_state = 490},
  [785] = {.lex_state = 507},
  [786] = {.lex_state = 507},
  [787] = {.lex_state = 539},
  [788] = {.lex_state = 507},
  [789] = {.lex_state = 507},
  [790] = {.lex_state = 534},
  [791] = {.lex_state = 534},
  [792] = {.lex_state = 534},
  [793] = {.lex_state = 289},
  [794] = {.lex_state = 250},
  [795] = {.lex_state = 250},
  [796] = {.lex_state = 534},
  [797] = {.lex_state = 534},
  [798] = {.lex_state = 526},
  [799] = {.lex_state = 289},
  [800] = {.lex_state = 250},
  [801] = {.lex_state = 534},
  [802] = {.lex_state = 534},
  [803] = {.lex_state = 526},
  [804] = {.lex_state = 250},
  [805] = {.lex_state = 534},
  [806] = {.lex_state = 534},
  [807] = {.lex_state = 250},
  [808] = {.lex_state = 289},
  [809] = {.lex_state = 289},
  [810] = {.lex_state = 250},
  [811] = {.lex_state = 289},
  [812] = {.lex_state = 289},
  [813] = {.lex_state = 289},
  [814] = {.lex_state = 490},
  [815] = {.lex_state = 490},
  [816] = {.lex_state = 490},
  [817] = {.lex_state = 490},
  [818] = {.lex_state = 490},
  [819] = {.lex_state = 490},
  [820] = {.lex_state = 289},
  [821] = {.lex_state = 490},
  [822] = {.lex_state = 490},
  [823] = {.lex_state = 289},
  [824] = {.lex_state = 250},
  [825] = {.lex_state = 250},
  [826] = {.lex_state = 250},
  [827] = {.lex_state = 490},
  [828] = {.lex_state = 250},
  [829] = {.lex_state = 250},
  [830] = {.lex_state = 250},
  [831] = {.lex_state = 250},
  [832] = {.lex_state = 250},
  [833] = {.lex_state = 250},
  [834] = {.lex_state = 250},
  [835] = {.lex_state = 250},
  [836] = {.lex_state = 289},
  [837] = {.lex_state = 289},
  [838] = {.lex_state = 289},
  [839] = {.lex_state = 289},
  [840] = {.lex_state = 289},
  [841] = {.lex_state = 289},
  [842] = {.lex_state = 289},
  [843] = {.lex_state = 545},
  [844] = {.lex_state = 545},
  [845] = {.lex_state = 545},
  [846] = {.lex_state = 289},
  [847] = {.lex_state = 289},
  [848] = {.lex_state = 289},
  [849] = {.lex_state = 490},
  [850] = {.lex_state = 289},
  [851] = {.lex_state = 526},
  [852] = {.lex_state = 534},
  [853] = {.lex_state = 526},
  [854] = {.lex_state = 526},
  [855] = {.lex_state = 526},
  [856] = {.lex_state = 250},
  [857] = {.lex_state = 526},
  [858] = {.lex_state = 526},
  [859] = {.lex_state = 526},
  [860] = {.lex_state = 289},
  [861] = {.lex_state = 289},
  [862] = {.lex_state = 250},
  [863] = {.lex_state = 289},
  [864] = {.lex_state = 523},
  [865] = {.lex_state = 490},
  [866] = {.lex_state = 289},
  [867] = {.lex_state = 289},
  [868] = {.lex_state = 250},
  [869] = {.lex_state = 289},
  [870] = {.lex_state = 289},
  [871] = {.lex_state = 490},
  [872] = {.lex_state = 490},
  [873] = {.lex_state = 250},
  [874] = {.lex_state = 289},
  [875] = {.lex_state = 250},
  [876] = {.lex_state = 289},
  [877] = {.lex_state = 289},
  [878] = {.lex_state = 250},
  [879] = {.lex_state = 490},
  [880] = {.lex_state = 250},
  [881] = {.lex_state = 289},
  [882] = {.lex_state = 490},
  [883] = {.lex_state = 289},
  [884] = {.lex_state = 490},
  [885] = {.lex_state = 490},
  [886] = {.lex_state = 490},
  [887] = {.lex_state = 289},
  [888] = {.lex_state = 289},
  [889] = {.lex_state = 289},
  [890] = {.lex_state = 490},
  [891] = {.lex_state = 289},
  [892] = {.lex_state = 289},
  [893] = {.lex_state = 289},
  [894] = {.lex_state = 490},
  [895] = {.lex_state = 289},
  [896] = {.lex_state = 289},
  [897] = {.lex_state = 490},
  [898] = {.lex_state = 526},
  [899] = {.lex_state = 539},
  [900] = {.lex_state = 250},
  [901] = {.lex_state = 490},
  [902] = {.lex_state = 289},
  [903] = {.lex_state = 558},
  [904] = {.lex_state = 289},
  [905] = {.lex_state = 289},
  [906] = {.lex_state = 289},
  [907] = {.lex_state = 289},
  [908] = {.lex_state = 250},
  [909] = {.lex_state = 526},
  [910] = {.lex_state = 289},
  [911] = {.lex_state = 250},
  [912] = {.lex_state = 490},
  [913] = {.lex_state = 250},
  [914] = {.lex_state = 289},
  [915] = {.lex_state = 490},
  [916] = {.lex_state = 490},
  [917] = {.lex_state = 250},
  [918] = {.lex_state = 289},
  [919] = {.lex_state = 490},
  [920] = {.lex_state = 289},
  [921] = {.lex_state = 289},
  [922] = {.lex_state = 289},
  [923] = {.lex_state = 289},
  [924] = {.lex_state = 289},
  [925] = {.lex_state = 289},
  [926] = {.lex_state = 289},
  [927] = {.lex_state = 250},
  [928] = {.lex_state = 490},
  [929] = {.lex_state = 502},
  [930] = {.lex_state = 490},
  [931] = {.lex_state = 289},
  [932] = {.lex_state = 490},
  [933] = {.lex_state = 289},
  [934] = {.lex_state = 250},
  [935] = {.lex_state = 490},
  [936] = {.lex_state = 490},
  [937] = {.lex_state = 490},
  [938] = {.lex_state = 539},
  [939] = {.lex_state = 289},
  [940] = {.lex_state = 250},
  [941] = {.lex_state = 250},
  [942] = {.lex_state = 539},
  [943] = {.lex_state = 507},
  [944] = {.lex_state = 507},
  [945] = {.lex_state = 534},
  [946] = {.lex_state = 534},
  [947] = {.lex_state = 534},
  [948] = {.lex_state = 534},
  [949] = {.lex_state = 534},
  [950] = {.lex_state = 250},
  [951] = {.lex_state = 534},
  [952] = {.lex_state = 534},
  [953] = {.lex_state = 534},
  [954] = {.lex_state = 490},
  [955] = {.lex_state = 289},
  [956] = {.lex_state = 289},
  [957] = {.lex_state = 289},
  [958] = {.lex_state = 289},
  [959] = {.lex_state = 289},
  [960] = {.lex_state = 289},
  [961] = {.lex_state = 289},
  [962] = {.lex_state = 289},
  [963] = {.lex_state = 545},
  [964] = {.lex_state = 545},
  [965] = {.lex_state = 534},
  [966] = {.lex_state = 289},
  [967] = {.lex_state = 534},
  [968] = {.lex_state = 289},
  [969] = {.lex_state = 250},
  [970] = {.lex_state = 289},
  [971] = {.lex_state = 289},
  [972] = {.lex_state = 289},
  [973] = {.lex_state = 289},
  [974] = {.lex_state = 289},
  [975] = {.lex_state = 289},
  [976] = {.lex_state = 490},
  [977] = {.lex_state = 490},
  [978] = {.lex_state = 490},
  [979] = {.lex_state = 490},
  [980] = {.lex_state = 490},
  [981] = {.lex_state = 490},
  [982] = {.lex_state = 289},
  [983] = {.lex_state = 250},
  [984] = {.lex_state = 250},
  [985] = {.lex_state = 289},
  [986] = {.lex_state = 289},
  [987] = {.lex_state = 289},
  [988] = {.lex_state = 289},
  [989] = {.lex_state = 289},
  [990] = {.lex_state = 289},
  [991] = {.lex_state = 545},
  [992] = {.lex_state = 545},
  [993] = {.lex_state = 490},
  [994] = {.lex_state = 289},
  [995] = {.lex_state = 289},
  [996] = {.lex_state = 490},
  [997] = {.lex_state = 526},
  [998] = {.lex_state = 526},
  [999] = {.lex_state = 289},
  [1000] = {.lex_state = 551},
  [1001] = {.lex_state = 289},
  [1002] = {.lex_state = 250},
  [1003] = {.lex_state = 250},
  [1004] = {.lex_state = 551},
  [1005] = {.lex_state = 289},
  [1006] = {.lex_state = 490},
  [1007] = {.lex_state = 250},
  [1008] = {.lex_state = 289},
  [1009] = {.lex_state = 289},
  [1010] = {.lex_state = 289},
  [1011] = {.lex_state = 490},
  [1012] = {.lex_state = 490},
  [1013] = {.lex_state = 250},
  [1014] = {.lex_state = 490},
  [1015] = {.lex_state = 490},
  [1016] = {.lex_state = 289},
  [1017] = {.lex_state = 490},
  [1018] = {.lex_state = 289},
  [1019] = {.lex_state = 289},
  [1020] = {.lex_state = 250},
  [1021] = {.lex_state = 289},
  [1022] = {.lex_state = 289},
  [1023] = {.lex_state = 250},
  [1024] = {.lex_state = 490},
  [1025] = {.lex_state = 490},
  [1026] = {.lex_state = 490},
  [1027] = {.lex_state = 490},
  [1028] = {.lex_state = 490},
  [1029] = {.lex_state = 490},
  [1030] = {.lex_state = 289},
  [1031] = {.lex_state = 490},
  [1032] = {.lex_state = 289},
  [1033] = {.lex_state = 289},
  [1034] = {.lex_state = 490},
  [1035] = {.lex_state = 490},
  [1036] = {.lex_state = 490},
  [1037] = {.lex_state = 250},
  [1038] = {.lex_state = 507},
  [1039] = {.lex_state = 490},
  [1040] = {.lex_state = 250},
  [1041] = {.lex_state = 289},
  [1042] = {.lex_state = 289},
  [1043] = {.lex_state = 250},
  [1044] = {.lex_state = 526},
  [1045] = {.lex_state = 289},
  [1046] = {.lex_state = 250},
  [1047] = {.lex_state = 250},
  [1048] = {.lex_state = 250},
  [1049] = {.lex_state = 289},
  [1050] = {.lex_state = 289},
  [1051] = {.lex_state = 289},
  [1052] = {.lex_state = 289},
  [1053] = {.lex_state = 289},
  [1054] = {.lex_state = 490},
  [1055] = {.lex_state = 526},
  [1056] = {.lex_state = 289},
  [1057] = {.lex_state = 250},
  [1058] = {.lex_state = 289},
  [1059] = {.lex_state = 289},
  [1060] = {.lex_state = 250},
  [1061] = {.lex_state = 490},
  [1062] = {.lex_state = 289},
  [1063] = {.lex_state = 490},
  [1064] = {.lex_state = 289},
  [1065] = {.lex_state = 289},
  [1066] = {.lex_state = 289},
  [1067] = {.lex_state = 289},
  [1068] = {.lex_state = 490},
  [1069] = {.lex_state = 539},
  [1070] = {.lex_state = 539},
  [1071] = {.lex_state = 534},
  [1072] = {.lex_state = 534},
  [1073] = {.lex_state = 289},
  [1074] = {.lex_state = 250},
  [1075] = {.lex_state = 490},
  [1076] = {.lex_state = 250},
  [1077] = {.lex_state = 250},
  [1078] = {.lex_state = 250},
  [1079] = {.lex_state = 250},
  [1080] = {.lex_state = 250},
  [1081] = {.lex_state = 250},
  [1082] = {.lex_state = 250},
  [1083] = {.lex_state = 250},
  [1084] = {.lex_state = 534},
  [1085] = {.lex_state = 250},
  [1086] = {.lex_state = 534},
  [1087] = {.lex_state = 289},
  [1088] = {.lex_state = 490},
  [1089] = {.lex_state = 289},
  [1090] = {.lex_state = 289},
  [1091] = {.lex_state = 289},
  [1092] = {.lex_state = 289},
  [1093] = {.lex_state = 289},
  [1094] = {.lex_state = 289},
  [1095] = {.lex_state = 250},
  [1096] = {.lex_state = 490},
  [1097] = {.lex_state = 289},
  [1098] = {.lex_state = 289},
  [1099] = {.lex_state = 551},
  [1100] = {.lex_state = 551},
  [1101] = {.lex_state = 289},
  [1102] = {.lex_state = 490},
  [1103] = {.lex_state = 289},
  [1104] = {.lex_state = 289},
  [1105] = {.lex_state = 289},
  [1106] = {.lex_state = 490},
  [1107] = {.lex_state = 289},
  [1108] = {.lex_state = 490},
  [1109] = {.lex_state = 289},
  [1110] = {.lex_state = 250},
  [1111] = {.lex_state = 250},
  [1112] = {.lex_state = 289},
  [1113] = {.lex_state = 289},
  [1114] = {.lex_state = 250},
  [1115] = {.lex_state = 250},
  [1116] = {.lex_state = 289},
  [1117] = {.lex_state = 250},
  [1118] = {.lex_state = 289},
  [1119] = {.lex_state = 289},
  [1120] = {.lex_state = 289},
  [1121] = {.lex_state = 289},
  [1122] = {.lex_state = 289},
  [1123] = {.lex_state = 289},
  [1124] = {.lex_state = 289},
  [1125] = {.lex_state = 289},
  [1126] = {.lex_state = 490},
  [1127] = {.lex_state = 289},
  [1128] = {.lex_state = 490},
  [1129] = {.lex_state = 289},
  [1130] = {.lex_state = 250},
  [1131] = {.lex_state = 490},
  [1132] = {.lex_state = 558},
  [1133] = {.lex_state = 507},
  [1134] = {.lex_state = 250},
  [1135] = {.lex_state = 490},
  [1136] = {.lex_state = 526},
  [1137] = {.lex_state = 250},
  [1138] = {.lex_state = 289},
  [1139] = {.lex_state = 534},
  [1140] = {.lex_state = 289},
  [1141] = {.lex_state = 289},
  [1142] = {.lex_state = 289},
  [1143] = {.lex_state = 289},
  [1144] = {.lex_state = 289},
  [1145] = {.lex_state = 490},
  [1146] = {.lex_state = 289},
  [1147] = {.lex_state = 289},
  [1148] = {.lex_state = 526},
  [1149] = {.lex_state = 250},
  [1150] = {.lex_state = 289},
  [1151] = {.lex_state = 289},
  [1152] = {.lex_state = 250},
  [1153] = {.lex_state = 289},
  [1154] = {.lex_state = 250},
  [1155] = {.lex_state = 289},
  [1156] = {.lex_state = 289},
  [1157] = {.lex_state = 289},
  [1158] = {.lex_state = 289},
  [1159] = {.lex_state = 289},
  [1160] = {.lex_state = 289},
  [1161] = {.lex_state = 289},
  [1162] = {.lex_state = 545},
  [1163] = {.lex_state = 545},
  [1164] = {.lex_state = 534},
  [1165] = {.lex_state = 534},
  [1166] = {.lex_state = 289},
  [1167] = {.lex_state = 490},
  [1168] = {.lex_state = 289},
  [1169] = {.lex_state = 289},
  [1170] = {.lex_state = 289},
  [1171] = {.lex_state = 289},
  [1172] = {.lex_state = 289},
  [1173] = {.lex_state = 490},
  [1174] = {.lex_state = 250},
  [1175] = {.lex_state = 289},
  [1176] = {.lex_state = 490},
  [1177] = {.lex_state = 490},
  [1178] = {.lex_state = 250},
  [1179] = {.lex_state = 289},
  [1180] = {.lex_state = 289},
  [1181] = {.lex_state = 250},
  [1182] = {.lex_state = 558},
  [1183] = {.lex_state = 289},
  [1184] = {.lex_state = 250},
  [1185] = {.lex_state = 250},
  [1186] = {.lex_state = 289},
  [1187] = {.lex_state = 289},
  [1188] = {.lex_state = 534},
  [1189] = {.lex_state = 289},
  [1190] = {.lex_state = 289},
  [1191] = {.lex_state = 289},
  [1192] = {.lex_state = 289},
  [1193] = {.lex_state = 289},
  [1194] = {.lex_state = 289},
  [1195] = {.lex_state = 289},
  [1196] = {.lex_state = 289},
  [1197] = {.lex_state = 289},
  [1198] = {.lex_state = 289},
  [1199] = {.lex_state = 250},
  [1200] = {.lex_state = 490},
  [1201] = {.lex_state = 289},
  [1202] = {.lex_state = 289},
  [1203] = {.lex_state = 289},
  [1204] = {.lex_state = 250},
  [1205] = {.lex_state = 490},
  [1206] = {.lex_state = 289},
  [1207] = {.lex_state = 289},
  [1208] = {.lex_state = 250},
  [1209] = {.lex_state = 490},
  [1210] = {.lex_state = 289},
  [1211] = {.lex_state = 289},
  [1212] = {.lex_state = 250},
  [1213] = {.lex_state = 289},
  [1214] = {.lex_state = 289},
  [1215] = {.lex_state = 289},
  [1216] = {.lex_state = 289},
  [1217] = {.lex_state = 289},
  [1218] = {.lex_state = 289},
  [1219] = {.lex_state = 289},
  [1220] = {.lex_state = 250},
  [1221] = {.lex_state = 289},
  [1222] = {.lex_state = 250},
  [1223] = {.lex_state = 289},
  [1224] = {.lex_state = 289},
  [1225] = {.lex_state = 289},
  [1226] = {.lex_state = 289},
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
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(3),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
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
    [anon_sym_EQ] = ACTIONS(3),
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
    [anon_sym_synchronized] = ACTIONS(3),
    [anon_sym_native] = ACTIONS(3),
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
    [sym_program] = STATE(21),
    [sym__statement] = STATE(22),
    [sym__literal] = STATE(23),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(24),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym__annotation] = STATE(28),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym__declaration] = STATE(30),
    [sym_module_declaration] = STATE(31),
    [sym_package_declaration] = STATE(31),
    [sym_import_statement] = STATE(31),
    [sym_single_type_import_declaration] = STATE(32),
    [sym_type_import_on_declaraction] = STATE(32),
    [sym_single_static_import_declaration] = STATE(32),
    [sym_static_import_on_demand_declaration] = STATE(32),
    [sym_class_declaration] = STATE(31),
    [sym_normal_class_declaration] = STATE(33),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(31),
    [sym_annotation_type_declaration] = STATE(36),
    [sym_normal_interface_declaration] = STATE(36),
    [sym_method_header] = STATE(37),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(31),
    [aux_sym_program_repeat1] = STATE(39),
    [aux_sym_class_or_interface_type_repeat1] = STATE(40),
    [aux_sym_normal_class_declaration_repeat1] = STATE(41),
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
    [anon_sym_AT] = ACTIONS(34),
    [anon_sym_open] = ACTIONS(36),
    [anon_sym_module] = ACTIONS(38),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_package] = ACTIONS(42),
    [anon_sym_import] = ACTIONS(44),
    [anon_sym_class] = ACTIONS(46),
    [anon_sym_public] = ACTIONS(40),
    [anon_sym_protected] = ACTIONS(40),
    [anon_sym_private] = ACTIONS(40),
    [anon_sym_abstract] = ACTIONS(40),
    [anon_sym_final] = ACTIONS(40),
    [anon_sym_strictfp] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_synchronized] = ACTIONS(40),
    [anon_sym_native] = ACTIONS(40),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(50),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(54),
  },
  [2] = {
    [sym__semicolon] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_COMMA] = ACTIONS(56),
    [anon_sym_RBRACE] = ACTIONS(56),
    [anon_sym_DOT] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_COLON_COLON] = ACTIONS(56),
    [sym_comment] = ACTIONS(54),
  },
  [3] = {
    [sym__semicolon] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_DOT] = ACTIONS(58),
    [anon_sym_LBRACK] = ACTIONS(58),
    [anon_sym_COLON_COLON] = ACTIONS(58),
    [sym_comment] = ACTIONS(54),
  },
  [4] = {
    [sym__semicolon] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(60),
    [anon_sym_COMMA] = ACTIONS(60),
    [anon_sym_RBRACE] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(60),
    [anon_sym_COLON_COLON] = ACTIONS(60),
    [sym_comment] = ACTIONS(54),
  },
  [5] = {
    [aux_sym_character_literal_repeat1] = STATE(44),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(64),
    [sym_comment] = ACTIONS(66),
  },
  [6] = {
    [sym__semicolon] = ACTIONS(68),
    [anon_sym_RPAREN] = ACTIONS(68),
    [anon_sym_COMMA] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(68),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_COLON_COLON] = ACTIONS(68),
    [sym_comment] = ACTIONS(54),
  },
  [7] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_type_parameter_list] = STATE(49),
    [sym_type_parameter] = STATE(50),
    [aux_sym_class_or_interface_type_repeat1] = STATE(51),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(54),
  },
  [8] = {
    [sym_inferred_formal_parameter_list] = STATE(60),
    [sym_primitive_type] = STATE(61),
    [sym_integral_type] = STATE(53),
    [sym_floating_point_type] = STATE(53),
    [sym__annotation] = STATE(62),
    [sym_normal_annotation] = STATE(63),
    [sym_marker_annotation] = STATE(63),
    [sym_single_element_annotation] = STATE(63),
    [sym_modifier] = STATE(34),
    [sym__formal_parameter_list] = STATE(60),
    [sym_formal_parameter] = STATE(64),
    [sym_receiver_parameter] = STATE(65),
    [sym_last_formal_parameter] = STATE(66),
    [aux_sym_class_or_interface_type_repeat1] = STATE(67),
    [aux_sym_normal_class_declaration_repeat1] = STATE(68),
    [anon_sym_COMMA] = ACTIONS(74),
    [anon_sym_boolean] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(78),
    [anon_sym_short] = ACTIONS(78),
    [anon_sym_int] = ACTIONS(78),
    [anon_sym_long] = ACTIONS(78),
    [anon_sym_char] = ACTIONS(78),
    [anon_sym_float] = ACTIONS(80),
    [anon_sym_double] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(82),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(40),
    [anon_sym_protected] = ACTIONS(40),
    [anon_sym_private] = ACTIONS(40),
    [anon_sym_abstract] = ACTIONS(40),
    [anon_sym_final] = ACTIONS(40),
    [anon_sym_strictfp] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_synchronized] = ACTIONS(40),
    [anon_sym_native] = ACTIONS(40),
    [anon_sym_this] = ACTIONS(84),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(86),
    [sym_identifier] = ACTIONS(88),
    [sym_comment] = ACTIONS(54),
  },
  [9] = {
    [sym__expression] = STATE(69),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_PLUS_PLUS] = ACTIONS(32),
    [anon_sym_DASH_DASH] = ACTIONS(32),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [10] = {
    [sym__expression] = STATE(70),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_PLUS_PLUS] = ACTIONS(32),
    [anon_sym_DASH_DASH] = ACTIONS(32),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [11] = {
    [sym_package_or_type_name] = STATE(73),
    [anon_sym_interface] = ACTIONS(92),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(54),
  },
  [12] = {
    [anon_sym_module] = ACTIONS(96),
    [sym_comment] = ACTIONS(54),
  },
  [13] = {
    [sym_module_identifier] = STATE(76),
    [sym_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(54),
  },
  [14] = {
    [anon_sym_LT] = ACTIONS(100),
    [anon_sym_boolean] = ACTIONS(100),
    [anon_sym_byte] = ACTIONS(100),
    [anon_sym_short] = ACTIONS(100),
    [anon_sym_int] = ACTIONS(102),
    [anon_sym_long] = ACTIONS(100),
    [anon_sym_char] = ACTIONS(100),
    [anon_sym_float] = ACTIONS(100),
    [anon_sym_double] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(100),
    [anon_sym_static] = ACTIONS(100),
    [anon_sym_class] = ACTIONS(100),
    [anon_sym_public] = ACTIONS(100),
    [anon_sym_protected] = ACTIONS(100),
    [anon_sym_private] = ACTIONS(100),
    [anon_sym_abstract] = ACTIONS(100),
    [anon_sym_final] = ACTIONS(100),
    [anon_sym_strictfp] = ACTIONS(100),
    [anon_sym_default] = ACTIONS(100),
    [anon_sym_synchronized] = ACTIONS(100),
    [anon_sym_native] = ACTIONS(100),
    [anon_sym_void] = ACTIONS(100),
    [anon_sym_interface] = ACTIONS(100),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(100),
    [sym_comment] = ACTIONS(54),
  },
  [15] = {
    [sym_identifier] = ACTIONS(104),
    [sym_comment] = ACTIONS(54),
  },
  [16] = {
    [sym_package_or_type_name] = STATE(79),
    [anon_sym_static] = ACTIONS(106),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(54),
  },
  [17] = {
    [sym_identifier] = ACTIONS(108),
    [sym_comment] = ACTIONS(54),
  },
  [18] = {
    [sym_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(54),
  },
  [19] = {
    [sym_identifier] = ACTIONS(112),
    [sym_comment] = ACTIONS(54),
  },
  [20] = {
    [anon_sym_DASH_GT] = ACTIONS(114),
    [sym_comment] = ACTIONS(54),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_comment] = ACTIONS(54),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_decimal_integer_literal] = ACTIONS(120),
    [sym_hex_integer_literal] = ACTIONS(120),
    [sym_octal_integer_literal] = ACTIONS(120),
    [sym_binary_integer_literal] = ACTIONS(120),
    [sym_decimal_floating_point_literal] = ACTIONS(120),
    [sym_hex_floating_point_literal] = ACTIONS(122),
    [anon_sym_true] = ACTIONS(120),
    [anon_sym_false] = ACTIONS(120),
    [anon_sym_SQUOTE] = ACTIONS(118),
    [sym_string_literal] = ACTIONS(118),
    [sym_null_literal] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_BANG] = ACTIONS(118),
    [anon_sym_TILDE] = ACTIONS(118),
    [anon_sym_PLUS_PLUS] = ACTIONS(118),
    [anon_sym_DASH_DASH] = ACTIONS(118),
    [anon_sym_AT] = ACTIONS(118),
    [anon_sym_open] = ACTIONS(120),
    [anon_sym_module] = ACTIONS(120),
    [anon_sym_static] = ACTIONS(120),
    [anon_sym_package] = ACTIONS(120),
    [anon_sym_import] = ACTIONS(120),
    [anon_sym_class] = ACTIONS(120),
    [anon_sym_public] = ACTIONS(120),
    [anon_sym_protected] = ACTIONS(120),
    [anon_sym_private] = ACTIONS(120),
    [anon_sym_abstract] = ACTIONS(120),
    [anon_sym_final] = ACTIONS(120),
    [anon_sym_strictfp] = ACTIONS(120),
    [anon_sym_default] = ACTIONS(120),
    [anon_sym_synchronized] = ACTIONS(120),
    [anon_sym_native] = ACTIONS(120),
    [anon_sym_void] = ACTIONS(120),
    [anon_sym_interface] = ACTIONS(120),
    [sym_identifier] = ACTIONS(122),
    [sym_comment] = ACTIONS(54),
  },
  [23] = {
    [sym__semicolon] = ACTIONS(124),
    [sym_comment] = ACTIONS(54),
  },
  [24] = {
    [sym__semicolon] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_AMP_AMP] = ACTIONS(130),
    [anon_sym_PIPE_PIPE] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(132),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(138),
    [anon_sym_GT_GT_GT] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(144),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [25] = {
    [sym__semicolon] = ACTIONS(148),
    [anon_sym_GT] = ACTIONS(150),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_EQ_EQ] = ACTIONS(148),
    [anon_sym_GT_EQ] = ACTIONS(148),
    [anon_sym_LT_EQ] = ACTIONS(148),
    [anon_sym_BANG_EQ] = ACTIONS(148),
    [anon_sym_AMP_AMP] = ACTIONS(148),
    [anon_sym_PIPE_PIPE] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(148),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_AMP] = ACTIONS(150),
    [anon_sym_PIPE] = ACTIONS(150),
    [anon_sym_CARET] = ACTIONS(148),
    [anon_sym_PERCENT] = ACTIONS(148),
    [anon_sym_LT_LT] = ACTIONS(148),
    [anon_sym_GT_GT] = ACTIONS(150),
    [anon_sym_GT_GT_GT] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_QMARK] = ACTIONS(148),
    [anon_sym_COLON] = ACTIONS(148),
    [anon_sym_PLUS_PLUS] = ACTIONS(148),
    [anon_sym_DASH_DASH] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(148),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_RBRACK] = ACTIONS(148),
    [sym_comment] = ACTIONS(54),
  },
  [26] = {
    [anon_sym_DASH_GT] = ACTIONS(152),
    [sym_comment] = ACTIONS(54),
  },
  [27] = {
    [sym__semicolon] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(156),
    [anon_sym_LT] = ACTIONS(156),
    [anon_sym_EQ_EQ] = ACTIONS(154),
    [anon_sym_GT_EQ] = ACTIONS(154),
    [anon_sym_LT_EQ] = ACTIONS(154),
    [anon_sym_BANG_EQ] = ACTIONS(154),
    [anon_sym_AMP_AMP] = ACTIONS(154),
    [anon_sym_PIPE_PIPE] = ACTIONS(154),
    [anon_sym_PLUS] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(156),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(156),
    [anon_sym_PIPE] = ACTIONS(156),
    [anon_sym_CARET] = ACTIONS(154),
    [anon_sym_PERCENT] = ACTIONS(154),
    [anon_sym_LT_LT] = ACTIONS(154),
    [anon_sym_GT_GT] = ACTIONS(156),
    [anon_sym_GT_GT_GT] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(154),
    [anon_sym_PLUS_PLUS] = ACTIONS(154),
    [anon_sym_DASH_DASH] = ACTIONS(154),
    [anon_sym_LBRACE] = ACTIONS(154),
    [anon_sym_RBRACE] = ACTIONS(154),
    [anon_sym_RBRACK] = ACTIONS(154),
    [sym_comment] = ACTIONS(54),
  },
  [28] = {
    [anon_sym_LT] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(158),
    [anon_sym_open] = ACTIONS(161),
    [anon_sym_module] = ACTIONS(161),
    [anon_sym_static] = ACTIONS(100),
    [anon_sym_package] = ACTIONS(161),
    [anon_sym_class] = ACTIONS(100),
    [anon_sym_public] = ACTIONS(100),
    [anon_sym_protected] = ACTIONS(100),
    [anon_sym_private] = ACTIONS(100),
    [anon_sym_abstract] = ACTIONS(100),
    [anon_sym_final] = ACTIONS(100),
    [anon_sym_strictfp] = ACTIONS(100),
    [anon_sym_default] = ACTIONS(100),
    [anon_sym_synchronized] = ACTIONS(100),
    [anon_sym_native] = ACTIONS(100),
    [anon_sym_void] = ACTIONS(100),
    [anon_sym_interface] = ACTIONS(100),
    [sym_comment] = ACTIONS(54),
  },
  [29] = {
    [sym__semicolon] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(163),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_COMMA] = ACTIONS(163),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_boolean] = ACTIONS(163),
    [anon_sym_byte] = ACTIONS(163),
    [anon_sym_short] = ACTIONS(163),
    [anon_sym_int] = ACTIONS(165),
    [anon_sym_long] = ACTIONS(163),
    [anon_sym_char] = ACTIONS(163),
    [anon_sym_float] = ACTIONS(163),
    [anon_sym_double] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym_open] = ACTIONS(163),
    [anon_sym_module] = ACTIONS(163),
    [anon_sym_static] = ACTIONS(163),
    [anon_sym_package] = ACTIONS(163),
    [anon_sym_class] = ACTIONS(163),
    [anon_sym_public] = ACTIONS(163),
    [anon_sym_protected] = ACTIONS(163),
    [anon_sym_private] = ACTIONS(163),
    [anon_sym_abstract] = ACTIONS(163),
    [anon_sym_final] = ACTIONS(163),
    [anon_sym_strictfp] = ACTIONS(163),
    [anon_sym_default] = ACTIONS(163),
    [anon_sym_synchronized] = ACTIONS(163),
    [anon_sym_native] = ACTIONS(163),
    [anon_sym_void] = ACTIONS(163),
    [anon_sym_interface] = ACTIONS(163),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(163),
    [sym_comment] = ACTIONS(54),
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
    [anon_sym_LT] = ACTIONS(167),
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
    [anon_sym_synchronized] = ACTIONS(169),
    [anon_sym_native] = ACTIONS(169),
    [anon_sym_void] = ACTIONS(169),
    [anon_sym_interface] = ACTIONS(169),
    [sym_identifier] = ACTIONS(171),
    [sym_comment] = ACTIONS(54),
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
    [anon_sym_LT] = ACTIONS(173),
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
    [anon_sym_synchronized] = ACTIONS(175),
    [anon_sym_native] = ACTIONS(175),
    [anon_sym_void] = ACTIONS(175),
    [anon_sym_interface] = ACTIONS(175),
    [sym_identifier] = ACTIONS(177),
    [sym_comment] = ACTIONS(54),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_decimal_integer_literal] = ACTIONS(181),
    [sym_hex_integer_literal] = ACTIONS(181),
    [sym_octal_integer_literal] = ACTIONS(181),
    [sym_binary_integer_literal] = ACTIONS(181),
    [sym_decimal_floating_point_literal] = ACTIONS(181),
    [sym_hex_floating_point_literal] = ACTIONS(183),
    [anon_sym_true] = ACTIONS(181),
    [anon_sym_false] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [sym_string_literal] = ACTIONS(179),
    [sym_null_literal] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_BANG] = ACTIONS(179),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_PLUS_PLUS] = ACTIONS(179),
    [anon_sym_DASH_DASH] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(179),
    [anon_sym_open] = ACTIONS(181),
    [anon_sym_module] = ACTIONS(181),
    [anon_sym_static] = ACTIONS(181),
    [anon_sym_package] = ACTIONS(181),
    [anon_sym_import] = ACTIONS(181),
    [anon_sym_class] = ACTIONS(181),
    [anon_sym_public] = ACTIONS(181),
    [anon_sym_protected] = ACTIONS(181),
    [anon_sym_private] = ACTIONS(181),
    [anon_sym_abstract] = ACTIONS(181),
    [anon_sym_final] = ACTIONS(181),
    [anon_sym_strictfp] = ACTIONS(181),
    [anon_sym_default] = ACTIONS(181),
    [anon_sym_synchronized] = ACTIONS(181),
    [anon_sym_native] = ACTIONS(181),
    [anon_sym_void] = ACTIONS(181),
    [anon_sym_interface] = ACTIONS(181),
    [sym_identifier] = ACTIONS(183),
    [sym_comment] = ACTIONS(54),
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
    [anon_sym_LT] = ACTIONS(185),
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
    [anon_sym_synchronized] = ACTIONS(187),
    [anon_sym_native] = ACTIONS(187),
    [anon_sym_void] = ACTIONS(187),
    [anon_sym_interface] = ACTIONS(187),
    [sym_identifier] = ACTIONS(189),
    [sym_comment] = ACTIONS(54),
  },
  [34] = {
    [anon_sym_LT] = ACTIONS(191),
    [anon_sym_boolean] = ACTIONS(191),
    [anon_sym_byte] = ACTIONS(191),
    [anon_sym_short] = ACTIONS(191),
    [anon_sym_int] = ACTIONS(193),
    [anon_sym_long] = ACTIONS(191),
    [anon_sym_char] = ACTIONS(191),
    [anon_sym_float] = ACTIONS(191),
    [anon_sym_double] = ACTIONS(191),
    [anon_sym_AT] = ACTIONS(191),
    [anon_sym_static] = ACTIONS(191),
    [anon_sym_class] = ACTIONS(191),
    [anon_sym_public] = ACTIONS(191),
    [anon_sym_protected] = ACTIONS(191),
    [anon_sym_private] = ACTIONS(191),
    [anon_sym_abstract] = ACTIONS(191),
    [anon_sym_final] = ACTIONS(191),
    [anon_sym_strictfp] = ACTIONS(191),
    [anon_sym_default] = ACTIONS(191),
    [anon_sym_synchronized] = ACTIONS(191),
    [anon_sym_native] = ACTIONS(191),
    [anon_sym_void] = ACTIONS(191),
    [anon_sym_interface] = ACTIONS(191),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(191),
    [sym_comment] = ACTIONS(54),
  },
  [35] = {
    [sym__annotation] = STATE(92),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_result] = STATE(93),
    [aux_sym_class_or_interface_type_repeat1] = STATE(94),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_void] = ACTIONS(197),
    [sym_comment] = ACTIONS(54),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_decimal_integer_literal] = ACTIONS(201),
    [sym_hex_integer_literal] = ACTIONS(201),
    [sym_octal_integer_literal] = ACTIONS(201),
    [sym_binary_integer_literal] = ACTIONS(201),
    [sym_decimal_floating_point_literal] = ACTIONS(201),
    [sym_hex_floating_point_literal] = ACTIONS(203),
    [anon_sym_true] = ACTIONS(201),
    [anon_sym_false] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(199),
    [sym_string_literal] = ACTIONS(199),
    [sym_null_literal] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_BANG] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(199),
    [anon_sym_PLUS_PLUS] = ACTIONS(199),
    [anon_sym_DASH_DASH] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_open] = ACTIONS(201),
    [anon_sym_module] = ACTIONS(201),
    [anon_sym_static] = ACTIONS(201),
    [anon_sym_package] = ACTIONS(201),
    [anon_sym_import] = ACTIONS(201),
    [anon_sym_class] = ACTIONS(201),
    [anon_sym_public] = ACTIONS(201),
    [anon_sym_protected] = ACTIONS(201),
    [anon_sym_private] = ACTIONS(201),
    [anon_sym_abstract] = ACTIONS(201),
    [anon_sym_final] = ACTIONS(201),
    [anon_sym_strictfp] = ACTIONS(201),
    [anon_sym_default] = ACTIONS(201),
    [anon_sym_synchronized] = ACTIONS(201),
    [anon_sym_native] = ACTIONS(201),
    [anon_sym_void] = ACTIONS(201),
    [anon_sym_interface] = ACTIONS(201),
    [sym_identifier] = ACTIONS(203),
    [sym_comment] = ACTIONS(54),
  },
  [37] = {
    [sym_method_body] = STATE(97),
    [sym_block] = STATE(95),
    [sym__semicolon] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(207),
    [sym_comment] = ACTIONS(54),
  },
  [38] = {
    [sym_method_declarator] = STATE(99),
    [sym_identifier] = ACTIONS(209),
    [sym_comment] = ACTIONS(54),
  },
  [39] = {
    [sym__statement] = STATE(100),
    [sym__literal] = STATE(23),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(24),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym__annotation] = STATE(28),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym__declaration] = STATE(30),
    [sym_module_declaration] = STATE(31),
    [sym_package_declaration] = STATE(31),
    [sym_import_statement] = STATE(31),
    [sym_single_type_import_declaration] = STATE(32),
    [sym_type_import_on_declaraction] = STATE(32),
    [sym_single_static_import_declaration] = STATE(32),
    [sym_static_import_on_demand_declaration] = STATE(32),
    [sym_class_declaration] = STATE(31),
    [sym_normal_class_declaration] = STATE(33),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(31),
    [sym_annotation_type_declaration] = STATE(36),
    [sym_normal_interface_declaration] = STATE(36),
    [sym_method_header] = STATE(37),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(40),
    [aux_sym_normal_class_declaration_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(211),
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
    [anon_sym_AT] = ACTIONS(34),
    [anon_sym_open] = ACTIONS(36),
    [anon_sym_module] = ACTIONS(38),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_package] = ACTIONS(42),
    [anon_sym_import] = ACTIONS(44),
    [anon_sym_class] = ACTIONS(46),
    [anon_sym_public] = ACTIONS(40),
    [anon_sym_protected] = ACTIONS(40),
    [anon_sym_private] = ACTIONS(40),
    [anon_sym_abstract] = ACTIONS(40),
    [anon_sym_final] = ACTIONS(40),
    [anon_sym_strictfp] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_synchronized] = ACTIONS(40),
    [anon_sym_native] = ACTIONS(40),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(50),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(54),
  },
  [40] = {
    [sym__annotation] = STATE(103),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_open] = ACTIONS(213),
    [anon_sym_module] = ACTIONS(96),
    [anon_sym_package] = ACTIONS(215),
    [sym_comment] = ACTIONS(54),
  },
  [41] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_modifier] = STATE(107),
    [sym_type_parameters] = STATE(35),
    [sym_method_header] = STATE(108),
    [sym_result] = STATE(38),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_AT] = ACTIONS(217),
    [anon_sym_static] = ACTIONS(219),
    [anon_sym_class] = ACTIONS(221),
    [anon_sym_public] = ACTIONS(219),
    [anon_sym_protected] = ACTIONS(219),
    [anon_sym_private] = ACTIONS(219),
    [anon_sym_abstract] = ACTIONS(219),
    [anon_sym_final] = ACTIONS(219),
    [anon_sym_strictfp] = ACTIONS(219),
    [anon_sym_default] = ACTIONS(219),
    [anon_sym_synchronized] = ACTIONS(219),
    [anon_sym_native] = ACTIONS(219),
    [anon_sym_void] = ACTIONS(197),
    [anon_sym_interface] = ACTIONS(223),
    [sym_comment] = ACTIONS(54),
  },
  [42] = {
    [sym__semicolon] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_RBRACE] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_COLON_COLON] = ACTIONS(225),
    [sym_comment] = ACTIONS(54),
  },
  [43] = {
    [anon_sym_SQUOTE] = ACTIONS(227),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(227),
    [sym_comment] = ACTIONS(66),
  },
  [44] = {
    [anon_sym_SQUOTE] = ACTIONS(229),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(231),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(231),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(231),
    [sym_comment] = ACTIONS(66),
  },
  [45] = {
    [sym_package_or_type_name] = STATE(112),
    [sym_identifier] = ACTIONS(233),
    [sym_comment] = ACTIONS(54),
  },
  [46] = {
    [sym_type_bound] = STATE(114),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(235),
    [anon_sym_extends] = ACTIONS(237),
    [sym_comment] = ACTIONS(54),
  },
  [47] = {
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(161),
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(54),
  },
  [48] = {
    [anon_sym_AT] = ACTIONS(163),
    [sym_identifier] = ACTIONS(165),
    [sym_comment] = ACTIONS(54),
  },
  [49] = {
    [anon_sym_GT] = ACTIONS(241),
    [sym_comment] = ACTIONS(54),
  },
  [50] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(117),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(245),
    [sym_comment] = ACTIONS(54),
  },
  [51] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(247),
    [sym_comment] = ACTIONS(54),
  },
  [52] = {
    [aux_sym_inferred_formal_parameter_list_repeat1] = STATE(121),
    [anon_sym_RPAREN] = ACTIONS(249),
    [sym_identifier] = ACTIONS(251),
    [sym_comment] = ACTIONS(54),
  },
  [53] = {
    [anon_sym_LBRACK] = ACTIONS(253),
    [anon_sym_AT] = ACTIONS(253),
    [sym_identifier] = ACTIONS(255),
    [sym_comment] = ACTIONS(54),
  },
  [54] = {
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(257),
    [anon_sym_AT] = ACTIONS(257),
    [sym_identifier] = ACTIONS(259),
    [sym_comment] = ACTIONS(54),
  },
  [55] = {
    [anon_sym_DOT] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_AT] = ACTIONS(261),
    [sym_identifier] = ACTIONS(263),
    [sym_comment] = ACTIONS(54),
  },
  [56] = {
    [sym_package_or_type_name] = STATE(123),
    [sym_identifier] = ACTIONS(265),
    [sym_comment] = ACTIONS(54),
  },
  [57] = {
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_throws] = ACTIONS(267),
    [sym_comment] = ACTIONS(54),
  },
  [58] = {
    [sym_variable_declarator] = STATE(125),
    [sym_variable_declarator_id] = STATE(126),
    [sym_identifier] = ACTIONS(269),
    [sym_comment] = ACTIONS(54),
  },
  [59] = {
    [anon_sym_DOT] = ACTIONS(271),
    [sym_comment] = ACTIONS(54),
  },
  [60] = {
    [anon_sym_RPAREN] = ACTIONS(273),
    [sym_comment] = ACTIONS(54),
  },
  [61] = {
    [sym_variable_declarator_id] = STATE(129),
    [sym_identifier] = ACTIONS(269),
    [sym_comment] = ACTIONS(54),
  },
  [62] = {
    [anon_sym_boolean] = ACTIONS(275),
    [anon_sym_byte] = ACTIONS(275),
    [anon_sym_short] = ACTIONS(275),
    [anon_sym_int] = ACTIONS(275),
    [anon_sym_long] = ACTIONS(275),
    [anon_sym_char] = ACTIONS(275),
    [anon_sym_float] = ACTIONS(275),
    [anon_sym_double] = ACTIONS(275),
    [anon_sym_AT] = ACTIONS(158),
    [anon_sym_static] = ACTIONS(102),
    [anon_sym_public] = ACTIONS(102),
    [anon_sym_protected] = ACTIONS(102),
    [anon_sym_private] = ACTIONS(102),
    [anon_sym_abstract] = ACTIONS(102),
    [anon_sym_final] = ACTIONS(102),
    [anon_sym_strictfp] = ACTIONS(102),
    [anon_sym_default] = ACTIONS(102),
    [anon_sym_synchronized] = ACTIONS(102),
    [anon_sym_native] = ACTIONS(102),
    [anon_sym_this] = ACTIONS(239),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(158),
    [sym_identifier] = ACTIONS(278),
    [sym_comment] = ACTIONS(54),
  },
  [63] = {
    [anon_sym_boolean] = ACTIONS(165),
    [anon_sym_byte] = ACTIONS(165),
    [anon_sym_short] = ACTIONS(165),
    [anon_sym_int] = ACTIONS(165),
    [anon_sym_long] = ACTIONS(165),
    [anon_sym_char] = ACTIONS(165),
    [anon_sym_float] = ACTIONS(165),
    [anon_sym_double] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym_static] = ACTIONS(165),
    [anon_sym_public] = ACTIONS(165),
    [anon_sym_protected] = ACTIONS(165),
    [anon_sym_private] = ACTIONS(165),
    [anon_sym_abstract] = ACTIONS(165),
    [anon_sym_final] = ACTIONS(165),
    [anon_sym_strictfp] = ACTIONS(165),
    [anon_sym_default] = ACTIONS(165),
    [anon_sym_synchronized] = ACTIONS(165),
    [anon_sym_native] = ACTIONS(165),
    [anon_sym_this] = ACTIONS(165),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(163),
    [sym_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(54),
  },
  [64] = {
    [aux_sym_formal_parameters_repeat1] = STATE(131),
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(284),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_throws] = ACTIONS(282),
    [sym_comment] = ACTIONS(54),
  },
  [65] = {
    [aux_sym_formal_parameters_repeat1] = STATE(131),
    [anon_sym_RPAREN] = ACTIONS(286),
    [anon_sym_COMMA] = ACTIONS(284),
    [anon_sym_LBRACE] = ACTIONS(286),
    [anon_sym_throws] = ACTIONS(286),
    [sym_comment] = ACTIONS(54),
  },
  [66] = {
    [anon_sym_RPAREN] = ACTIONS(286),
    [anon_sym_LBRACE] = ACTIONS(286),
    [anon_sym_throws] = ACTIONS(286),
    [sym_comment] = ACTIONS(54),
  },
  [67] = {
    [sym_integral_type] = STATE(132),
    [sym_floating_point_type] = STATE(132),
    [sym__annotation] = STATE(137),
    [sym_normal_annotation] = STATE(138),
    [sym_marker_annotation] = STATE(138),
    [sym_single_element_annotation] = STATE(138),
    [anon_sym_boolean] = ACTIONS(288),
    [anon_sym_byte] = ACTIONS(78),
    [anon_sym_short] = ACTIONS(78),
    [anon_sym_int] = ACTIONS(78),
    [anon_sym_long] = ACTIONS(78),
    [anon_sym_char] = ACTIONS(78),
    [anon_sym_float] = ACTIONS(80),
    [anon_sym_double] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(290),
    [anon_sym_this] = ACTIONS(292),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(294),
    [sym_identifier] = ACTIONS(296),
    [sym_comment] = ACTIONS(54),
  },
  [68] = {
    [sym_primitive_type] = STATE(139),
    [sym_integral_type] = STATE(53),
    [sym_floating_point_type] = STATE(53),
    [sym__annotation] = STATE(140),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_modifier] = STATE(107),
    [aux_sym_class_or_interface_type_repeat1] = STATE(141),
    [anon_sym_boolean] = ACTIONS(298),
    [anon_sym_byte] = ACTIONS(300),
    [anon_sym_short] = ACTIONS(300),
    [anon_sym_int] = ACTIONS(300),
    [anon_sym_long] = ACTIONS(300),
    [anon_sym_char] = ACTIONS(300),
    [anon_sym_float] = ACTIONS(302),
    [anon_sym_double] = ACTIONS(302),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_static] = ACTIONS(219),
    [anon_sym_public] = ACTIONS(219),
    [anon_sym_protected] = ACTIONS(219),
    [anon_sym_private] = ACTIONS(219),
    [anon_sym_abstract] = ACTIONS(219),
    [anon_sym_final] = ACTIONS(219),
    [anon_sym_strictfp] = ACTIONS(219),
    [anon_sym_default] = ACTIONS(219),
    [anon_sym_synchronized] = ACTIONS(219),
    [anon_sym_native] = ACTIONS(219),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(294),
    [sym_comment] = ACTIONS(54),
  },
  [69] = {
    [sym__semicolon] = ACTIONS(304),
    [anon_sym_GT] = ACTIONS(306),
    [anon_sym_LT] = ACTIONS(306),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [anon_sym_GT_EQ] = ACTIONS(304),
    [anon_sym_LT_EQ] = ACTIONS(304),
    [anon_sym_BANG_EQ] = ACTIONS(304),
    [anon_sym_AMP_AMP] = ACTIONS(304),
    [anon_sym_PIPE_PIPE] = ACTIONS(304),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(306),
    [anon_sym_PIPE] = ACTIONS(306),
    [anon_sym_CARET] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(304),
    [anon_sym_LT_LT] = ACTIONS(304),
    [anon_sym_GT_GT] = ACTIONS(306),
    [anon_sym_GT_GT_GT] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_QMARK] = ACTIONS(304),
    [anon_sym_COLON] = ACTIONS(304),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(304),
    [anon_sym_RBRACE] = ACTIONS(304),
    [anon_sym_RBRACK] = ACTIONS(304),
    [sym_comment] = ACTIONS(54),
  },
  [70] = {
    [sym__semicolon] = ACTIONS(308),
    [anon_sym_GT] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(310),
    [anon_sym_EQ_EQ] = ACTIONS(308),
    [anon_sym_GT_EQ] = ACTIONS(308),
    [anon_sym_LT_EQ] = ACTIONS(308),
    [anon_sym_BANG_EQ] = ACTIONS(308),
    [anon_sym_AMP_AMP] = ACTIONS(308),
    [anon_sym_PIPE_PIPE] = ACTIONS(308),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_DASH] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_CARET] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(308),
    [anon_sym_LT_LT] = ACTIONS(308),
    [anon_sym_GT_GT] = ACTIONS(310),
    [anon_sym_GT_GT_GT] = ACTIONS(308),
    [anon_sym_RPAREN] = ACTIONS(308),
    [anon_sym_COMMA] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(308),
    [anon_sym_PLUS_PLUS] = ACTIONS(308),
    [anon_sym_DASH_DASH] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(308),
    [anon_sym_RBRACK] = ACTIONS(308),
    [sym_comment] = ACTIONS(54),
  },
  [71] = {
    [sym_identifier] = ACTIONS(312),
    [sym_comment] = ACTIONS(54),
  },
  [72] = {
    [sym__semicolon] = ACTIONS(314),
    [anon_sym_LT] = ACTIONS(314),
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(314),
    [anon_sym_COMMA] = ACTIONS(314),
    [anon_sym_RBRACE] = ACTIONS(314),
    [anon_sym_DOT] = ACTIONS(316),
    [anon_sym_LBRACK] = ACTIONS(314),
    [anon_sym_boolean] = ACTIONS(314),
    [anon_sym_byte] = ACTIONS(314),
    [anon_sym_short] = ACTIONS(314),
    [anon_sym_int] = ACTIONS(316),
    [anon_sym_long] = ACTIONS(314),
    [anon_sym_char] = ACTIONS(314),
    [anon_sym_float] = ACTIONS(314),
    [anon_sym_double] = ACTIONS(314),
    [anon_sym_AT] = ACTIONS(314),
    [anon_sym_open] = ACTIONS(314),
    [anon_sym_module] = ACTIONS(314),
    [anon_sym_with] = ACTIONS(314),
    [anon_sym_static] = ACTIONS(314),
    [anon_sym_package] = ACTIONS(314),
    [anon_sym_class] = ACTIONS(314),
    [anon_sym_public] = ACTIONS(314),
    [anon_sym_protected] = ACTIONS(314),
    [anon_sym_private] = ACTIONS(314),
    [anon_sym_abstract] = ACTIONS(314),
    [anon_sym_final] = ACTIONS(314),
    [anon_sym_strictfp] = ACTIONS(314),
    [anon_sym_default] = ACTIONS(314),
    [anon_sym_synchronized] = ACTIONS(314),
    [anon_sym_native] = ACTIONS(314),
    [anon_sym_void] = ACTIONS(314),
    [anon_sym_interface] = ACTIONS(314),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(314),
    [sym_comment] = ACTIONS(54),
  },
  [73] = {
    [sym__semicolon] = ACTIONS(318),
    [anon_sym_LT] = ACTIONS(318),
    [anon_sym_LPAREN] = ACTIONS(320),
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_COMMA] = ACTIONS(318),
    [anon_sym_RBRACE] = ACTIONS(318),
    [anon_sym_DOT] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(318),
    [anon_sym_boolean] = ACTIONS(318),
    [anon_sym_byte] = ACTIONS(318),
    [anon_sym_short] = ACTIONS(318),
    [anon_sym_int] = ACTIONS(324),
    [anon_sym_long] = ACTIONS(318),
    [anon_sym_char] = ACTIONS(318),
    [anon_sym_float] = ACTIONS(318),
    [anon_sym_double] = ACTIONS(318),
    [anon_sym_AT] = ACTIONS(318),
    [anon_sym_open] = ACTIONS(318),
    [anon_sym_module] = ACTIONS(318),
    [anon_sym_static] = ACTIONS(318),
    [anon_sym_package] = ACTIONS(318),
    [anon_sym_class] = ACTIONS(318),
    [anon_sym_public] = ACTIONS(318),
    [anon_sym_protected] = ACTIONS(318),
    [anon_sym_private] = ACTIONS(318),
    [anon_sym_abstract] = ACTIONS(318),
    [anon_sym_final] = ACTIONS(318),
    [anon_sym_strictfp] = ACTIONS(318),
    [anon_sym_default] = ACTIONS(318),
    [anon_sym_synchronized] = ACTIONS(318),
    [anon_sym_native] = ACTIONS(318),
    [anon_sym_void] = ACTIONS(318),
    [anon_sym_interface] = ACTIONS(318),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(318),
    [sym_comment] = ACTIONS(54),
  },
  [74] = {
    [sym_module_identifier] = STATE(145),
    [sym_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(54),
  },
  [75] = {
    [aux_sym_module_identifier_repeat1] = STATE(147),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_DOT] = ACTIONS(328),
    [sym_comment] = ACTIONS(54),
  },
  [76] = {
    [anon_sym_LBRACE] = ACTIONS(330),
    [sym_comment] = ACTIONS(54),
  },
  [77] = {
    [aux_sym_module_identifier_repeat1] = STATE(150),
    [sym__semicolon] = ACTIONS(332),
    [anon_sym_DOT] = ACTIONS(328),
    [sym_comment] = ACTIONS(54),
  },
  [78] = {
    [sym_package_or_type_name] = STATE(151),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(54),
  },
  [79] = {
    [sym__semicolon] = ACTIONS(336),
    [anon_sym_DOT] = ACTIONS(338),
    [sym_comment] = ACTIONS(54),
  },
  [80] = {
    [sym_type_parameters] = STATE(157),
    [sym_superclass] = STATE(158),
    [sym_super_interfaces] = STATE(159),
    [sym_class_body] = STATE(160),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(340),
    [anon_sym_extends] = ACTIONS(342),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [81] = {
    [sym_type_parameters] = STATE(163),
    [sym_extends_interfaces] = STATE(164),
    [sym_interface_body] = STATE(165),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(346),
    [anon_sym_extends] = ACTIONS(348),
    [sym_comment] = ACTIONS(54),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(350),
    [sym_decimal_integer_literal] = ACTIONS(352),
    [sym_hex_integer_literal] = ACTIONS(352),
    [sym_octal_integer_literal] = ACTIONS(352),
    [sym_binary_integer_literal] = ACTIONS(352),
    [sym_decimal_floating_point_literal] = ACTIONS(352),
    [sym_hex_floating_point_literal] = ACTIONS(354),
    [anon_sym_true] = ACTIONS(352),
    [anon_sym_false] = ACTIONS(352),
    [anon_sym_SQUOTE] = ACTIONS(350),
    [sym_string_literal] = ACTIONS(350),
    [sym_null_literal] = ACTIONS(352),
    [anon_sym_LT] = ACTIONS(350),
    [anon_sym_LPAREN] = ACTIONS(350),
    [anon_sym_BANG] = ACTIONS(350),
    [anon_sym_TILDE] = ACTIONS(350),
    [anon_sym_PLUS_PLUS] = ACTIONS(350),
    [anon_sym_DASH_DASH] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(350),
    [anon_sym_AT] = ACTIONS(350),
    [anon_sym_open] = ACTIONS(352),
    [anon_sym_module] = ACTIONS(352),
    [anon_sym_static] = ACTIONS(352),
    [anon_sym_package] = ACTIONS(352),
    [anon_sym_import] = ACTIONS(352),
    [anon_sym_class] = ACTIONS(352),
    [anon_sym_public] = ACTIONS(352),
    [anon_sym_protected] = ACTIONS(352),
    [anon_sym_private] = ACTIONS(352),
    [anon_sym_abstract] = ACTIONS(352),
    [anon_sym_final] = ACTIONS(352),
    [anon_sym_strictfp] = ACTIONS(352),
    [anon_sym_default] = ACTIONS(352),
    [anon_sym_synchronized] = ACTIONS(352),
    [anon_sym_native] = ACTIONS(352),
    [anon_sym_void] = ACTIONS(352),
    [anon_sym_interface] = ACTIONS(352),
    [sym_identifier] = ACTIONS(354),
    [sym_comment] = ACTIONS(54),
  },
  [83] = {
    [sym__expression] = STATE(166),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_PLUS_PLUS] = ACTIONS(32),
    [anon_sym_DASH_DASH] = ACTIONS(32),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [84] = {
    [sym__expression] = STATE(167),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_PLUS_PLUS] = ACTIONS(32),
    [anon_sym_DASH_DASH] = ACTIONS(32),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [85] = {
    [sym__expression] = STATE(168),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_PLUS_PLUS] = ACTIONS(32),
    [anon_sym_DASH_DASH] = ACTIONS(32),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [86] = {
    [sym__expression] = STATE(169),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_PLUS_PLUS] = ACTIONS(32),
    [anon_sym_DASH_DASH] = ACTIONS(32),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [87] = {
    [sym__expression] = STATE(170),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_PLUS_PLUS] = ACTIONS(32),
    [anon_sym_DASH_DASH] = ACTIONS(32),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [88] = {
    [sym__expression] = STATE(173),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [89] = {
    [sym__semicolon] = ACTIONS(308),
    [anon_sym_GT] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(310),
    [anon_sym_EQ_EQ] = ACTIONS(308),
    [anon_sym_GT_EQ] = ACTIONS(308),
    [anon_sym_LT_EQ] = ACTIONS(308),
    [anon_sym_BANG_EQ] = ACTIONS(308),
    [anon_sym_AMP_AMP] = ACTIONS(308),
    [anon_sym_PIPE_PIPE] = ACTIONS(308),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_DASH] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_CARET] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(308),
    [anon_sym_LT_LT] = ACTIONS(308),
    [anon_sym_GT_GT] = ACTIONS(310),
    [anon_sym_GT_GT_GT] = ACTIONS(308),
    [anon_sym_RPAREN] = ACTIONS(308),
    [anon_sym_COMMA] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(308),
    [anon_sym_PLUS_PLUS] = ACTIONS(308),
    [anon_sym_DASH_DASH] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(308),
    [anon_sym_RBRACK] = ACTIONS(308),
    [sym_comment] = ACTIONS(54),
  },
  [90] = {
    [sym__expression] = STATE(176),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_lambda_body] = STATE(177),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(360),
    [anon_sym_TILDE] = ACTIONS(360),
    [anon_sym_PLUS_PLUS] = ACTIONS(362),
    [anon_sym_DASH_DASH] = ACTIONS(362),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [91] = {
    [sym_package_or_type_name] = STATE(73),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(54),
  },
  [92] = {
    [anon_sym_AT] = ACTIONS(161),
    [anon_sym_void] = ACTIONS(161),
    [sym_comment] = ACTIONS(54),
  },
  [93] = {
    [sym_method_declarator] = STATE(178),
    [sym_identifier] = ACTIONS(209),
    [sym_comment] = ACTIONS(54),
  },
  [94] = {
    [sym__annotation] = STATE(103),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_result] = STATE(179),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_void] = ACTIONS(197),
    [sym_comment] = ACTIONS(54),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(364),
    [sym_decimal_integer_literal] = ACTIONS(366),
    [sym_hex_integer_literal] = ACTIONS(366),
    [sym_octal_integer_literal] = ACTIONS(366),
    [sym_binary_integer_literal] = ACTIONS(366),
    [sym_decimal_floating_point_literal] = ACTIONS(366),
    [sym_hex_floating_point_literal] = ACTIONS(368),
    [anon_sym_true] = ACTIONS(366),
    [anon_sym_false] = ACTIONS(366),
    [anon_sym_SQUOTE] = ACTIONS(364),
    [sym_string_literal] = ACTIONS(364),
    [sym_null_literal] = ACTIONS(366),
    [anon_sym_LT] = ACTIONS(364),
    [anon_sym_LPAREN] = ACTIONS(364),
    [anon_sym_BANG] = ACTIONS(364),
    [anon_sym_TILDE] = ACTIONS(364),
    [anon_sym_PLUS_PLUS] = ACTIONS(364),
    [anon_sym_DASH_DASH] = ACTIONS(364),
    [anon_sym_RBRACE] = ACTIONS(364),
    [anon_sym_AT] = ACTIONS(364),
    [anon_sym_open] = ACTIONS(366),
    [anon_sym_module] = ACTIONS(366),
    [anon_sym_static] = ACTIONS(366),
    [anon_sym_package] = ACTIONS(366),
    [anon_sym_import] = ACTIONS(366),
    [anon_sym_class] = ACTIONS(366),
    [anon_sym_public] = ACTIONS(366),
    [anon_sym_protected] = ACTIONS(366),
    [anon_sym_private] = ACTIONS(366),
    [anon_sym_abstract] = ACTIONS(366),
    [anon_sym_final] = ACTIONS(366),
    [anon_sym_strictfp] = ACTIONS(366),
    [anon_sym_default] = ACTIONS(366),
    [anon_sym_synchronized] = ACTIONS(366),
    [anon_sym_native] = ACTIONS(366),
    [anon_sym_void] = ACTIONS(366),
    [anon_sym_interface] = ACTIONS(366),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(54),
  },
  [96] = {
    [sym_statement] = STATE(185),
    [sym_if_then_statement] = STATE(186),
    [sym__annotation] = STATE(183),
    [sym_normal_annotation] = STATE(187),
    [sym_marker_annotation] = STATE(187),
    [sym_single_element_annotation] = STATE(187),
    [sym_class_declaration] = STATE(185),
    [sym_normal_class_declaration] = STATE(188),
    [sym_modifier] = STATE(189),
    [sym_block_statements] = STATE(190),
    [sym_block_statement] = STATE(191),
    [sym_local_variable_declaration_statement] = STATE(185),
    [sym_local_variable_declaration] = STATE(192),
    [aux_sym_normal_class_declaration_repeat1] = STATE(193),
    [anon_sym_if] = ACTIONS(370),
    [anon_sym_RBRACE] = ACTIONS(372),
    [anon_sym_AT] = ACTIONS(374),
    [anon_sym_static] = ACTIONS(376),
    [anon_sym_class] = ACTIONS(378),
    [anon_sym_public] = ACTIONS(376),
    [anon_sym_protected] = ACTIONS(376),
    [anon_sym_private] = ACTIONS(376),
    [anon_sym_abstract] = ACTIONS(376),
    [anon_sym_final] = ACTIONS(376),
    [anon_sym_strictfp] = ACTIONS(376),
    [anon_sym_default] = ACTIONS(376),
    [anon_sym_synchronized] = ACTIONS(376),
    [anon_sym_native] = ACTIONS(376),
    [sym_comment] = ACTIONS(54),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(380),
    [sym_decimal_integer_literal] = ACTIONS(382),
    [sym_hex_integer_literal] = ACTIONS(382),
    [sym_octal_integer_literal] = ACTIONS(382),
    [sym_binary_integer_literal] = ACTIONS(382),
    [sym_decimal_floating_point_literal] = ACTIONS(382),
    [sym_hex_floating_point_literal] = ACTIONS(384),
    [anon_sym_true] = ACTIONS(382),
    [anon_sym_false] = ACTIONS(382),
    [anon_sym_SQUOTE] = ACTIONS(380),
    [sym_string_literal] = ACTIONS(380),
    [sym_null_literal] = ACTIONS(382),
    [anon_sym_LT] = ACTIONS(380),
    [anon_sym_LPAREN] = ACTIONS(380),
    [anon_sym_BANG] = ACTIONS(380),
    [anon_sym_TILDE] = ACTIONS(380),
    [anon_sym_PLUS_PLUS] = ACTIONS(380),
    [anon_sym_DASH_DASH] = ACTIONS(380),
    [anon_sym_RBRACE] = ACTIONS(380),
    [anon_sym_AT] = ACTIONS(380),
    [anon_sym_open] = ACTIONS(382),
    [anon_sym_module] = ACTIONS(382),
    [anon_sym_static] = ACTIONS(382),
    [anon_sym_package] = ACTIONS(382),
    [anon_sym_import] = ACTIONS(382),
    [anon_sym_class] = ACTIONS(382),
    [anon_sym_public] = ACTIONS(382),
    [anon_sym_protected] = ACTIONS(382),
    [anon_sym_private] = ACTIONS(382),
    [anon_sym_abstract] = ACTIONS(382),
    [anon_sym_final] = ACTIONS(382),
    [anon_sym_strictfp] = ACTIONS(382),
    [anon_sym_default] = ACTIONS(382),
    [anon_sym_synchronized] = ACTIONS(382),
    [anon_sym_native] = ACTIONS(382),
    [anon_sym_void] = ACTIONS(382),
    [anon_sym_interface] = ACTIONS(382),
    [sym_identifier] = ACTIONS(384),
    [sym_comment] = ACTIONS(54),
  },
  [98] = {
    [anon_sym_LPAREN] = ACTIONS(386),
    [sym_comment] = ACTIONS(54),
  },
  [99] = {
    [sym_throws] = STATE(196),
    [sym__semicolon] = ACTIONS(388),
    [anon_sym_LBRACE] = ACTIONS(388),
    [anon_sym_throws] = ACTIONS(390),
    [sym_comment] = ACTIONS(54),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(392),
    [sym_decimal_integer_literal] = ACTIONS(394),
    [sym_hex_integer_literal] = ACTIONS(394),
    [sym_octal_integer_literal] = ACTIONS(394),
    [sym_binary_integer_literal] = ACTIONS(394),
    [sym_decimal_floating_point_literal] = ACTIONS(394),
    [sym_hex_floating_point_literal] = ACTIONS(396),
    [anon_sym_true] = ACTIONS(394),
    [anon_sym_false] = ACTIONS(394),
    [anon_sym_SQUOTE] = ACTIONS(392),
    [sym_string_literal] = ACTIONS(392),
    [sym_null_literal] = ACTIONS(394),
    [anon_sym_LT] = ACTIONS(392),
    [anon_sym_LPAREN] = ACTIONS(392),
    [anon_sym_BANG] = ACTIONS(392),
    [anon_sym_TILDE] = ACTIONS(392),
    [anon_sym_PLUS_PLUS] = ACTIONS(392),
    [anon_sym_DASH_DASH] = ACTIONS(392),
    [anon_sym_AT] = ACTIONS(392),
    [anon_sym_open] = ACTIONS(394),
    [anon_sym_module] = ACTIONS(394),
    [anon_sym_static] = ACTIONS(394),
    [anon_sym_package] = ACTIONS(394),
    [anon_sym_import] = ACTIONS(394),
    [anon_sym_class] = ACTIONS(394),
    [anon_sym_public] = ACTIONS(394),
    [anon_sym_protected] = ACTIONS(394),
    [anon_sym_private] = ACTIONS(394),
    [anon_sym_abstract] = ACTIONS(394),
    [anon_sym_final] = ACTIONS(394),
    [anon_sym_strictfp] = ACTIONS(394),
    [anon_sym_default] = ACTIONS(394),
    [anon_sym_synchronized] = ACTIONS(394),
    [anon_sym_native] = ACTIONS(394),
    [anon_sym_void] = ACTIONS(394),
    [anon_sym_interface] = ACTIONS(394),
    [sym_identifier] = ACTIONS(396),
    [sym_comment] = ACTIONS(54),
  },
  [101] = {
    [anon_sym_module] = ACTIONS(398),
    [sym_comment] = ACTIONS(54),
  },
  [102] = {
    [sym_identifier] = ACTIONS(400),
    [sym_comment] = ACTIONS(54),
  },
  [103] = {
    [anon_sym_LBRACK] = ACTIONS(402),
    [anon_sym_boolean] = ACTIONS(402),
    [anon_sym_byte] = ACTIONS(402),
    [anon_sym_short] = ACTIONS(402),
    [anon_sym_int] = ACTIONS(402),
    [anon_sym_long] = ACTIONS(402),
    [anon_sym_char] = ACTIONS(402),
    [anon_sym_float] = ACTIONS(402),
    [anon_sym_double] = ACTIONS(402),
    [anon_sym_AT] = ACTIONS(402),
    [anon_sym_open] = ACTIONS(402),
    [anon_sym_module] = ACTIONS(402),
    [anon_sym_package] = ACTIONS(402),
    [anon_sym_void] = ACTIONS(402),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(402),
    [sym_comment] = ACTIONS(54),
  },
  [104] = {
    [sym_package_or_type_name] = STATE(73),
    [anon_sym_interface] = ACTIONS(404),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(54),
  },
  [105] = {
    [sym_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(54),
  },
  [106] = {
    [sym_identifier] = ACTIONS(408),
    [sym_comment] = ACTIONS(54),
  },
  [107] = {
    [anon_sym_LT] = ACTIONS(410),
    [anon_sym_boolean] = ACTIONS(410),
    [anon_sym_byte] = ACTIONS(410),
    [anon_sym_short] = ACTIONS(410),
    [anon_sym_int] = ACTIONS(412),
    [anon_sym_long] = ACTIONS(410),
    [anon_sym_char] = ACTIONS(410),
    [anon_sym_float] = ACTIONS(410),
    [anon_sym_double] = ACTIONS(410),
    [anon_sym_AT] = ACTIONS(410),
    [anon_sym_static] = ACTIONS(410),
    [anon_sym_class] = ACTIONS(410),
    [anon_sym_public] = ACTIONS(410),
    [anon_sym_protected] = ACTIONS(410),
    [anon_sym_private] = ACTIONS(410),
    [anon_sym_abstract] = ACTIONS(410),
    [anon_sym_final] = ACTIONS(410),
    [anon_sym_strictfp] = ACTIONS(410),
    [anon_sym_default] = ACTIONS(410),
    [anon_sym_synchronized] = ACTIONS(410),
    [anon_sym_native] = ACTIONS(410),
    [anon_sym_void] = ACTIONS(410),
    [anon_sym_interface] = ACTIONS(410),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(410),
    [sym_comment] = ACTIONS(54),
  },
  [108] = {
    [sym_method_body] = STATE(202),
    [sym_block] = STATE(95),
    [sym__semicolon] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(207),
    [sym_comment] = ACTIONS(54),
  },
  [109] = {
    [sym__semicolon] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(414),
    [anon_sym_RBRACE] = ACTIONS(414),
    [anon_sym_DOT] = ACTIONS(414),
    [anon_sym_LBRACK] = ACTIONS(414),
    [anon_sym_COLON_COLON] = ACTIONS(414),
    [sym_comment] = ACTIONS(54),
  },
  [110] = {
    [anon_sym_SQUOTE] = ACTIONS(416),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(416),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(416),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(416),
    [sym_comment] = ACTIONS(66),
  },
  [111] = {
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_DOT] = ACTIONS(314),
    [anon_sym_AT] = ACTIONS(314),
    [sym_identifier] = ACTIONS(316),
    [sym_comment] = ACTIONS(54),
  },
  [112] = {
    [anon_sym_LPAREN] = ACTIONS(418),
    [anon_sym_DOT] = ACTIONS(420),
    [anon_sym_AT] = ACTIONS(318),
    [sym_identifier] = ACTIONS(324),
    [sym_comment] = ACTIONS(54),
  },
  [113] = {
    [sym_class_or_interface_type] = STATE(206),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(207),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(54),
  },
  [114] = {
    [anon_sym_GT] = ACTIONS(424),
    [anon_sym_COMMA] = ACTIONS(424),
    [sym_comment] = ACTIONS(54),
  },
  [115] = {
    [anon_sym_LBRACE] = ACTIONS(426),
    [anon_sym_AT] = ACTIONS(426),
    [anon_sym_extends] = ACTIONS(426),
    [anon_sym_implements] = ACTIONS(426),
    [anon_sym_void] = ACTIONS(426),
    [sym_comment] = ACTIONS(54),
  },
  [116] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_type_parameter] = STATE(208),
    [aux_sym_class_or_interface_type_repeat1] = STATE(51),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(54),
  },
  [117] = {
    [anon_sym_GT] = ACTIONS(428),
    [anon_sym_COMMA] = ACTIONS(430),
    [sym_comment] = ACTIONS(54),
  },
  [118] = {
    [sym_type_bound] = STATE(210),
    [anon_sym_GT] = ACTIONS(424),
    [anon_sym_COMMA] = ACTIONS(424),
    [anon_sym_extends] = ACTIONS(237),
    [sym_comment] = ACTIONS(54),
  },
  [119] = {
    [anon_sym_AT] = ACTIONS(402),
    [sym_identifier] = ACTIONS(432),
    [sym_comment] = ACTIONS(54),
  },
  [120] = {
    [anon_sym_COMMA] = ACTIONS(434),
    [sym_comment] = ACTIONS(54),
  },
  [121] = {
    [anon_sym_RPAREN] = ACTIONS(436),
    [sym_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(54),
  },
  [122] = {
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_DOT] = ACTIONS(316),
    [anon_sym_boolean] = ACTIONS(316),
    [anon_sym_byte] = ACTIONS(316),
    [anon_sym_short] = ACTIONS(316),
    [anon_sym_int] = ACTIONS(316),
    [anon_sym_long] = ACTIONS(316),
    [anon_sym_char] = ACTIONS(316),
    [anon_sym_float] = ACTIONS(316),
    [anon_sym_double] = ACTIONS(316),
    [anon_sym_AT] = ACTIONS(314),
    [anon_sym_static] = ACTIONS(316),
    [anon_sym_public] = ACTIONS(316),
    [anon_sym_protected] = ACTIONS(316),
    [anon_sym_private] = ACTIONS(316),
    [anon_sym_abstract] = ACTIONS(316),
    [anon_sym_final] = ACTIONS(316),
    [anon_sym_strictfp] = ACTIONS(316),
    [anon_sym_default] = ACTIONS(316),
    [anon_sym_synchronized] = ACTIONS(316),
    [anon_sym_native] = ACTIONS(316),
    [anon_sym_this] = ACTIONS(316),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(314),
    [sym_identifier] = ACTIONS(440),
    [sym_comment] = ACTIONS(54),
  },
  [123] = {
    [anon_sym_LPAREN] = ACTIONS(442),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_boolean] = ACTIONS(324),
    [anon_sym_byte] = ACTIONS(324),
    [anon_sym_short] = ACTIONS(324),
    [anon_sym_int] = ACTIONS(324),
    [anon_sym_long] = ACTIONS(324),
    [anon_sym_char] = ACTIONS(324),
    [anon_sym_float] = ACTIONS(324),
    [anon_sym_double] = ACTIONS(324),
    [anon_sym_AT] = ACTIONS(318),
    [anon_sym_static] = ACTIONS(324),
    [anon_sym_public] = ACTIONS(324),
    [anon_sym_protected] = ACTIONS(324),
    [anon_sym_private] = ACTIONS(324),
    [anon_sym_abstract] = ACTIONS(324),
    [anon_sym_final] = ACTIONS(324),
    [anon_sym_strictfp] = ACTIONS(324),
    [anon_sym_default] = ACTIONS(324),
    [anon_sym_synchronized] = ACTIONS(324),
    [anon_sym_native] = ACTIONS(324),
    [anon_sym_this] = ACTIONS(324),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(318),
    [sym_identifier] = ACTIONS(446),
    [sym_comment] = ACTIONS(54),
  },
  [124] = {
    [sym_dims] = STATE(216),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(217),
    [aux_sym_dims_repeat1] = STATE(218),
    [sym__semicolon] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(448),
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_LBRACE] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_throws] = ACTIONS(448),
    [sym_comment] = ACTIONS(54),
  },
  [125] = {
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(452),
    [anon_sym_throws] = ACTIONS(452),
    [sym_comment] = ACTIONS(54),
  },
  [126] = {
    [sym__semicolon] = ACTIONS(454),
    [anon_sym_RPAREN] = ACTIONS(454),
    [anon_sym_COMMA] = ACTIONS(454),
    [anon_sym_LBRACE] = ACTIONS(454),
    [anon_sym_EQ] = ACTIONS(456),
    [anon_sym_throws] = ACTIONS(454),
    [sym_comment] = ACTIONS(54),
  },
  [127] = {
    [anon_sym_this] = ACTIONS(458),
    [sym_comment] = ACTIONS(54),
  },
  [128] = {
    [anon_sym_DASH_GT] = ACTIONS(460),
    [sym_comment] = ACTIONS(54),
  },
  [129] = {
    [anon_sym_RPAREN] = ACTIONS(462),
    [anon_sym_COMMA] = ACTIONS(462),
    [anon_sym_LBRACE] = ACTIONS(462),
    [anon_sym_throws] = ACTIONS(462),
    [sym_comment] = ACTIONS(54),
  },
  [130] = {
    [sym_primitive_type] = STATE(61),
    [sym_integral_type] = STATE(53),
    [sym_floating_point_type] = STATE(53),
    [sym__annotation] = STATE(140),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_modifier] = STATE(34),
    [sym_formal_parameter] = STATE(221),
    [sym_last_formal_parameter] = STATE(222),
    [aux_sym_class_or_interface_type_repeat1] = STATE(223),
    [aux_sym_normal_class_declaration_repeat1] = STATE(68),
    [anon_sym_boolean] = ACTIONS(298),
    [anon_sym_byte] = ACTIONS(300),
    [anon_sym_short] = ACTIONS(300),
    [anon_sym_int] = ACTIONS(300),
    [anon_sym_long] = ACTIONS(300),
    [anon_sym_char] = ACTIONS(300),
    [anon_sym_float] = ACTIONS(302),
    [anon_sym_double] = ACTIONS(302),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_static] = ACTIONS(219),
    [anon_sym_public] = ACTIONS(219),
    [anon_sym_protected] = ACTIONS(219),
    [anon_sym_private] = ACTIONS(219),
    [anon_sym_abstract] = ACTIONS(219),
    [anon_sym_final] = ACTIONS(219),
    [anon_sym_strictfp] = ACTIONS(219),
    [anon_sym_default] = ACTIONS(219),
    [anon_sym_synchronized] = ACTIONS(219),
    [anon_sym_native] = ACTIONS(219),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [131] = {
    [anon_sym_COMMA] = ACTIONS(464),
    [sym_comment] = ACTIONS(54),
  },
  [132] = {
    [anon_sym_LBRACK] = ACTIONS(466),
    [anon_sym_AT] = ACTIONS(466),
    [sym_identifier] = ACTIONS(468),
    [sym_comment] = ACTIONS(54),
  },
  [133] = {
    [sym_package_or_type_name] = STATE(226),
    [sym_identifier] = ACTIONS(470),
    [sym_comment] = ACTIONS(54),
  },
  [134] = {
    [anon_sym_RPAREN] = ACTIONS(472),
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_LBRACE] = ACTIONS(472),
    [anon_sym_throws] = ACTIONS(472),
    [sym_comment] = ACTIONS(54),
  },
  [135] = {
    [sym_variable_declarator] = STATE(227),
    [sym_variable_declarator_id] = STATE(126),
    [sym_identifier] = ACTIONS(269),
    [sym_comment] = ACTIONS(54),
  },
  [136] = {
    [anon_sym_DOT] = ACTIONS(474),
    [sym_comment] = ACTIONS(54),
  },
  [137] = {
    [anon_sym_boolean] = ACTIONS(432),
    [anon_sym_byte] = ACTIONS(432),
    [anon_sym_short] = ACTIONS(432),
    [anon_sym_int] = ACTIONS(432),
    [anon_sym_long] = ACTIONS(432),
    [anon_sym_char] = ACTIONS(432),
    [anon_sym_float] = ACTIONS(432),
    [anon_sym_double] = ACTIONS(432),
    [anon_sym_AT] = ACTIONS(402),
    [anon_sym_this] = ACTIONS(432),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(402),
    [sym_identifier] = ACTIONS(476),
    [sym_comment] = ACTIONS(54),
  },
  [138] = {
    [anon_sym_boolean] = ACTIONS(165),
    [anon_sym_byte] = ACTIONS(165),
    [anon_sym_short] = ACTIONS(165),
    [anon_sym_int] = ACTIONS(165),
    [anon_sym_long] = ACTIONS(165),
    [anon_sym_char] = ACTIONS(165),
    [anon_sym_float] = ACTIONS(165),
    [anon_sym_double] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym_this] = ACTIONS(165),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(163),
    [sym_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(54),
  },
  [139] = {
    [sym_variable_declarator_id] = STATE(229),
    [sym_identifier] = ACTIONS(269),
    [sym_comment] = ACTIONS(54),
  },
  [140] = {
    [anon_sym_boolean] = ACTIONS(158),
    [anon_sym_byte] = ACTIONS(158),
    [anon_sym_short] = ACTIONS(158),
    [anon_sym_int] = ACTIONS(158),
    [anon_sym_long] = ACTIONS(158),
    [anon_sym_char] = ACTIONS(158),
    [anon_sym_float] = ACTIONS(158),
    [anon_sym_double] = ACTIONS(158),
    [anon_sym_AT] = ACTIONS(158),
    [anon_sym_static] = ACTIONS(100),
    [anon_sym_public] = ACTIONS(100),
    [anon_sym_protected] = ACTIONS(100),
    [anon_sym_private] = ACTIONS(100),
    [anon_sym_abstract] = ACTIONS(100),
    [anon_sym_final] = ACTIONS(100),
    [anon_sym_strictfp] = ACTIONS(100),
    [anon_sym_default] = ACTIONS(100),
    [anon_sym_synchronized] = ACTIONS(100),
    [anon_sym_native] = ACTIONS(100),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(158),
    [sym_comment] = ACTIONS(54),
  },
  [141] = {
    [sym_integral_type] = STATE(132),
    [sym_floating_point_type] = STATE(132),
    [sym__annotation] = STATE(103),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [anon_sym_boolean] = ACTIONS(478),
    [anon_sym_byte] = ACTIONS(300),
    [anon_sym_short] = ACTIONS(300),
    [anon_sym_int] = ACTIONS(300),
    [anon_sym_long] = ACTIONS(300),
    [anon_sym_char] = ACTIONS(300),
    [anon_sym_float] = ACTIONS(302),
    [anon_sym_double] = ACTIONS(302),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(480),
    [sym_comment] = ACTIONS(54),
  },
  [142] = {
    [sym_annotation_type_body] = STATE(232),
    [anon_sym_LBRACE] = ACTIONS(482),
    [sym_comment] = ACTIONS(54),
  },
  [143] = {
    [sym__literal] = STATE(235),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(236),
    [sym_element_value_pair] = STATE(237),
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
    [anon_sym_RPAREN] = ACTIONS(484),
    [sym_identifier] = ACTIONS(486),
    [sym_comment] = ACTIONS(54),
  },
  [144] = {
    [sym_identifier] = ACTIONS(488),
    [sym_comment] = ACTIONS(54),
  },
  [145] = {
    [anon_sym_LBRACE] = ACTIONS(490),
    [sym_comment] = ACTIONS(54),
  },
  [146] = {
    [sym_identifier] = ACTIONS(492),
    [sym_comment] = ACTIONS(54),
  },
  [147] = {
    [anon_sym_LBRACE] = ACTIONS(494),
    [anon_sym_DOT] = ACTIONS(496),
    [sym_comment] = ACTIONS(54),
  },
  [148] = {
    [sym_module_directive] = STATE(247),
    [aux_sym_module_declaration_repeat1] = STATE(248),
    [anon_sym_RBRACE] = ACTIONS(498),
    [anon_sym_requires] = ACTIONS(500),
    [anon_sym_exports] = ACTIONS(502),
    [anon_sym_opens] = ACTIONS(502),
    [anon_sym_uses] = ACTIONS(504),
    [anon_sym_provides] = ACTIONS(506),
    [sym_comment] = ACTIONS(54),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(508),
    [sym_decimal_integer_literal] = ACTIONS(510),
    [sym_hex_integer_literal] = ACTIONS(510),
    [sym_octal_integer_literal] = ACTIONS(510),
    [sym_binary_integer_literal] = ACTIONS(510),
    [sym_decimal_floating_point_literal] = ACTIONS(510),
    [sym_hex_floating_point_literal] = ACTIONS(512),
    [anon_sym_true] = ACTIONS(510),
    [anon_sym_false] = ACTIONS(510),
    [anon_sym_SQUOTE] = ACTIONS(508),
    [sym_string_literal] = ACTIONS(508),
    [sym_null_literal] = ACTIONS(510),
    [anon_sym_LT] = ACTIONS(508),
    [anon_sym_LPAREN] = ACTIONS(508),
    [anon_sym_BANG] = ACTIONS(508),
    [anon_sym_TILDE] = ACTIONS(508),
    [anon_sym_PLUS_PLUS] = ACTIONS(508),
    [anon_sym_DASH_DASH] = ACTIONS(508),
    [anon_sym_RBRACE] = ACTIONS(508),
    [anon_sym_AT] = ACTIONS(508),
    [anon_sym_open] = ACTIONS(510),
    [anon_sym_module] = ACTIONS(510),
    [anon_sym_static] = ACTIONS(510),
    [anon_sym_package] = ACTIONS(510),
    [anon_sym_import] = ACTIONS(510),
    [anon_sym_class] = ACTIONS(510),
    [anon_sym_public] = ACTIONS(510),
    [anon_sym_protected] = ACTIONS(510),
    [anon_sym_private] = ACTIONS(510),
    [anon_sym_abstract] = ACTIONS(510),
    [anon_sym_final] = ACTIONS(510),
    [anon_sym_strictfp] = ACTIONS(510),
    [anon_sym_default] = ACTIONS(510),
    [anon_sym_synchronized] = ACTIONS(510),
    [anon_sym_native] = ACTIONS(510),
    [anon_sym_void] = ACTIONS(510),
    [anon_sym_interface] = ACTIONS(510),
    [sym_identifier] = ACTIONS(512),
    [sym_comment] = ACTIONS(54),
  },
  [150] = {
    [sym__semicolon] = ACTIONS(514),
    [anon_sym_DOT] = ACTIONS(496),
    [sym_comment] = ACTIONS(54),
  },
  [151] = {
    [anon_sym_DOT] = ACTIONS(516),
    [sym_comment] = ACTIONS(54),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(518),
    [sym_decimal_integer_literal] = ACTIONS(520),
    [sym_hex_integer_literal] = ACTIONS(520),
    [sym_octal_integer_literal] = ACTIONS(520),
    [sym_binary_integer_literal] = ACTIONS(520),
    [sym_decimal_floating_point_literal] = ACTIONS(520),
    [sym_hex_floating_point_literal] = ACTIONS(522),
    [anon_sym_true] = ACTIONS(520),
    [anon_sym_false] = ACTIONS(520),
    [anon_sym_SQUOTE] = ACTIONS(518),
    [sym_string_literal] = ACTIONS(518),
    [sym_null_literal] = ACTIONS(520),
    [anon_sym_LT] = ACTIONS(518),
    [anon_sym_LPAREN] = ACTIONS(518),
    [anon_sym_BANG] = ACTIONS(518),
    [anon_sym_TILDE] = ACTIONS(518),
    [anon_sym_PLUS_PLUS] = ACTIONS(518),
    [anon_sym_DASH_DASH] = ACTIONS(518),
    [anon_sym_RBRACE] = ACTIONS(518),
    [anon_sym_AT] = ACTIONS(518),
    [anon_sym_open] = ACTIONS(520),
    [anon_sym_module] = ACTIONS(520),
    [anon_sym_static] = ACTIONS(520),
    [anon_sym_package] = ACTIONS(520),
    [anon_sym_import] = ACTIONS(520),
    [anon_sym_class] = ACTIONS(520),
    [anon_sym_public] = ACTIONS(520),
    [anon_sym_protected] = ACTIONS(520),
    [anon_sym_private] = ACTIONS(520),
    [anon_sym_abstract] = ACTIONS(520),
    [anon_sym_final] = ACTIONS(520),
    [anon_sym_strictfp] = ACTIONS(520),
    [anon_sym_default] = ACTIONS(520),
    [anon_sym_synchronized] = ACTIONS(520),
    [anon_sym_native] = ACTIONS(520),
    [anon_sym_void] = ACTIONS(520),
    [anon_sym_interface] = ACTIONS(520),
    [sym_identifier] = ACTIONS(522),
    [sym_comment] = ACTIONS(54),
  },
  [153] = {
    [anon_sym_STAR] = ACTIONS(524),
    [sym_identifier] = ACTIONS(488),
    [sym_comment] = ACTIONS(54),
  },
  [154] = {
    [sym__annotation] = STATE(257),
    [sym_normal_annotation] = STATE(261),
    [sym_marker_annotation] = STATE(261),
    [sym_single_element_annotation] = STATE(261),
    [sym_class_declaration] = STATE(252),
    [sym_normal_class_declaration] = STATE(262),
    [sym_modifier] = STATE(263),
    [sym_type_parameters] = STATE(264),
    [sym_class_body_declaration] = STATE(265),
    [sym_constructor_declaration] = STATE(266),
    [sym_constructor_declarator] = STATE(267),
    [sym_class_member_declaration] = STATE(266),
    [sym_interface_declaration] = STATE(252),
    [sym_annotation_type_declaration] = STATE(268),
    [sym_normal_interface_declaration] = STATE(268),
    [sym_method_header] = STATE(269),
    [sym_result] = STATE(38),
    [sym_block] = STATE(266),
    [sym_method_declaration] = STATE(252),
    [aux_sym_normal_class_declaration_repeat1] = STATE(270),
    [aux_sym_class_body_repeat1] = STATE(271),
    [sym__semicolon] = ACTIONS(526),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LBRACE] = ACTIONS(530),
    [anon_sym_RBRACE] = ACTIONS(532),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(538),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(540),
    [sym_identifier] = ACTIONS(542),
    [sym_comment] = ACTIONS(54),
  },
  [155] = {
    [sym_class_or_interface_type] = STATE(272),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(207),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(54),
  },
  [156] = {
    [sym_class_or_interface_type] = STATE(273),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_interface_type_list] = STATE(274),
    [aux_sym_class_or_interface_type_repeat1] = STATE(207),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(54),
  },
  [157] = {
    [sym_superclass] = STATE(275),
    [sym_super_interfaces] = STATE(276),
    [sym_class_body] = STATE(277),
    [anon_sym_LBRACE] = ACTIONS(340),
    [anon_sym_extends] = ACTIONS(342),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [158] = {
    [sym_super_interfaces] = STATE(276),
    [sym_class_body] = STATE(277),
    [anon_sym_LBRACE] = ACTIONS(340),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [159] = {
    [sym_class_body] = STATE(277),
    [anon_sym_LBRACE] = ACTIONS(340),
    [sym_comment] = ACTIONS(54),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(544),
    [sym_decimal_integer_literal] = ACTIONS(546),
    [sym_hex_integer_literal] = ACTIONS(546),
    [sym_octal_integer_literal] = ACTIONS(546),
    [sym_binary_integer_literal] = ACTIONS(546),
    [sym_decimal_floating_point_literal] = ACTIONS(546),
    [sym_hex_floating_point_literal] = ACTIONS(548),
    [anon_sym_true] = ACTIONS(546),
    [anon_sym_false] = ACTIONS(546),
    [anon_sym_SQUOTE] = ACTIONS(544),
    [sym_string_literal] = ACTIONS(544),
    [sym_null_literal] = ACTIONS(546),
    [anon_sym_LT] = ACTIONS(544),
    [anon_sym_LPAREN] = ACTIONS(544),
    [anon_sym_BANG] = ACTIONS(544),
    [anon_sym_TILDE] = ACTIONS(544),
    [anon_sym_PLUS_PLUS] = ACTIONS(544),
    [anon_sym_DASH_DASH] = ACTIONS(544),
    [anon_sym_RBRACE] = ACTIONS(544),
    [anon_sym_AT] = ACTIONS(544),
    [anon_sym_open] = ACTIONS(546),
    [anon_sym_module] = ACTIONS(546),
    [anon_sym_static] = ACTIONS(546),
    [anon_sym_package] = ACTIONS(546),
    [anon_sym_import] = ACTIONS(546),
    [anon_sym_class] = ACTIONS(546),
    [anon_sym_public] = ACTIONS(546),
    [anon_sym_protected] = ACTIONS(546),
    [anon_sym_private] = ACTIONS(546),
    [anon_sym_abstract] = ACTIONS(546),
    [anon_sym_final] = ACTIONS(546),
    [anon_sym_strictfp] = ACTIONS(546),
    [anon_sym_default] = ACTIONS(546),
    [anon_sym_synchronized] = ACTIONS(546),
    [anon_sym_native] = ACTIONS(546),
    [anon_sym_void] = ACTIONS(546),
    [anon_sym_interface] = ACTIONS(546),
    [sym_identifier] = ACTIONS(548),
    [sym_comment] = ACTIONS(54),
  },
  [161] = {
    [sym__annotation] = STATE(257),
    [sym_normal_annotation] = STATE(261),
    [sym_marker_annotation] = STATE(261),
    [sym_single_element_annotation] = STATE(261),
    [sym_class_declaration] = STATE(278),
    [sym_normal_class_declaration] = STATE(262),
    [sym_modifier] = STATE(263),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(278),
    [sym_annotation_type_declaration] = STATE(268),
    [sym_normal_interface_declaration] = STATE(268),
    [sym_interface_member_declaration] = STATE(280),
    [sym_constant_declaration] = STATE(278),
    [sym_variable_declarator_list] = STATE(281),
    [sym_variable_declarator] = STATE(282),
    [sym_variable_declarator_id] = STATE(126),
    [sym_method_header] = STATE(269),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(278),
    [aux_sym_normal_class_declaration_repeat1] = STATE(283),
    [aux_sym_interface_body_repeat1] = STATE(284),
    [sym__semicolon] = ACTIONS(550),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(552),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(538),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(540),
    [sym_identifier] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [162] = {
    [sym_class_or_interface_type] = STATE(273),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_interface_type_list] = STATE(285),
    [aux_sym_class_or_interface_type_repeat1] = STATE(207),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(54),
  },
  [163] = {
    [sym_extends_interfaces] = STATE(286),
    [sym_interface_body] = STATE(287),
    [anon_sym_LBRACE] = ACTIONS(346),
    [anon_sym_extends] = ACTIONS(348),
    [sym_comment] = ACTIONS(54),
  },
  [164] = {
    [sym_interface_body] = STATE(287),
    [anon_sym_LBRACE] = ACTIONS(346),
    [sym_comment] = ACTIONS(54),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(556),
    [sym_decimal_integer_literal] = ACTIONS(558),
    [sym_hex_integer_literal] = ACTIONS(558),
    [sym_octal_integer_literal] = ACTIONS(558),
    [sym_binary_integer_literal] = ACTIONS(558),
    [sym_decimal_floating_point_literal] = ACTIONS(558),
    [sym_hex_floating_point_literal] = ACTIONS(560),
    [anon_sym_true] = ACTIONS(558),
    [anon_sym_false] = ACTIONS(558),
    [anon_sym_SQUOTE] = ACTIONS(556),
    [sym_string_literal] = ACTIONS(556),
    [sym_null_literal] = ACTIONS(558),
    [anon_sym_LT] = ACTIONS(556),
    [anon_sym_LPAREN] = ACTIONS(556),
    [anon_sym_BANG] = ACTIONS(556),
    [anon_sym_TILDE] = ACTIONS(556),
    [anon_sym_PLUS_PLUS] = ACTIONS(556),
    [anon_sym_DASH_DASH] = ACTIONS(556),
    [anon_sym_RBRACE] = ACTIONS(556),
    [anon_sym_AT] = ACTIONS(556),
    [anon_sym_open] = ACTIONS(558),
    [anon_sym_module] = ACTIONS(558),
    [anon_sym_static] = ACTIONS(558),
    [anon_sym_package] = ACTIONS(558),
    [anon_sym_import] = ACTIONS(558),
    [anon_sym_class] = ACTIONS(558),
    [anon_sym_public] = ACTIONS(558),
    [anon_sym_protected] = ACTIONS(558),
    [anon_sym_private] = ACTIONS(558),
    [anon_sym_abstract] = ACTIONS(558),
    [anon_sym_final] = ACTIONS(558),
    [anon_sym_strictfp] = ACTIONS(558),
    [anon_sym_default] = ACTIONS(558),
    [anon_sym_synchronized] = ACTIONS(558),
    [anon_sym_native] = ACTIONS(558),
    [anon_sym_void] = ACTIONS(558),
    [anon_sym_interface] = ACTIONS(558),
    [sym_identifier] = ACTIONS(560),
    [sym_comment] = ACTIONS(54),
  },
  [166] = {
    [sym__semicolon] = ACTIONS(562),
    [anon_sym_GT] = ACTIONS(564),
    [anon_sym_LT] = ACTIONS(564),
    [anon_sym_EQ_EQ] = ACTIONS(562),
    [anon_sym_GT_EQ] = ACTIONS(562),
    [anon_sym_LT_EQ] = ACTIONS(562),
    [anon_sym_BANG_EQ] = ACTIONS(562),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(564),
    [anon_sym_DASH] = ACTIONS(564),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(138),
    [anon_sym_GT_GT_GT] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [167] = {
    [sym__semicolon] = ACTIONS(562),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(138),
    [anon_sym_GT_GT_GT] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [168] = {
    [sym__semicolon] = ACTIONS(562),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_AMP_AMP] = ACTIONS(130),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(138),
    [anon_sym_GT_GT_GT] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [169] = {
    [sym__semicolon] = ACTIONS(562),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(564),
    [anon_sym_DASH] = ACTIONS(564),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(138),
    [anon_sym_GT_GT_GT] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [170] = {
    [sym__semicolon] = ACTIONS(562),
    [anon_sym_GT] = ACTIONS(564),
    [anon_sym_LT] = ACTIONS(564),
    [anon_sym_EQ_EQ] = ACTIONS(562),
    [anon_sym_GT_EQ] = ACTIONS(562),
    [anon_sym_LT_EQ] = ACTIONS(562),
    [anon_sym_BANG_EQ] = ACTIONS(562),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(564),
    [anon_sym_DASH] = ACTIONS(564),
    [anon_sym_STAR] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(564),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(562),
    [anon_sym_LT_LT] = ACTIONS(562),
    [anon_sym_GT_GT] = ACTIONS(564),
    [anon_sym_GT_GT_GT] = ACTIONS(562),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_COLON] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(562),
    [anon_sym_RBRACE] = ACTIONS(562),
    [anon_sym_RBRACK] = ACTIONS(562),
    [sym_comment] = ACTIONS(54),
  },
  [171] = {
    [sym__expression] = STATE(69),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [172] = {
    [sym__expression] = STATE(70),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [173] = {
    [anon_sym_GT] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(566),
    [anon_sym_EQ_EQ] = ACTIONS(568),
    [anon_sym_GT_EQ] = ACTIONS(568),
    [anon_sym_LT_EQ] = ACTIONS(568),
    [anon_sym_BANG_EQ] = ACTIONS(568),
    [anon_sym_AMP_AMP] = ACTIONS(570),
    [anon_sym_PIPE_PIPE] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_SLASH] = ACTIONS(578),
    [anon_sym_AMP] = ACTIONS(580),
    [anon_sym_PIPE] = ACTIONS(582),
    [anon_sym_CARET] = ACTIONS(572),
    [anon_sym_PERCENT] = ACTIONS(576),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(578),
    [anon_sym_GT_GT_GT] = ACTIONS(576),
    [anon_sym_QMARK] = ACTIONS(584),
    [anon_sym_COLON] = ACTIONS(586),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [174] = {
    [sym__expression] = STATE(69),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(360),
    [anon_sym_TILDE] = ACTIONS(360),
    [anon_sym_PLUS_PLUS] = ACTIONS(362),
    [anon_sym_DASH_DASH] = ACTIONS(362),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [175] = {
    [sym__expression] = STATE(70),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(360),
    [anon_sym_TILDE] = ACTIONS(360),
    [anon_sym_PLUS_PLUS] = ACTIONS(362),
    [anon_sym_DASH_DASH] = ACTIONS(362),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [176] = {
    [sym_block] = STATE(301),
    [anon_sym_GT] = ACTIONS(588),
    [anon_sym_LT] = ACTIONS(588),
    [anon_sym_EQ_EQ] = ACTIONS(590),
    [anon_sym_GT_EQ] = ACTIONS(590),
    [anon_sym_LT_EQ] = ACTIONS(590),
    [anon_sym_BANG_EQ] = ACTIONS(590),
    [anon_sym_AMP_AMP] = ACTIONS(592),
    [anon_sym_PIPE_PIPE] = ACTIONS(594),
    [anon_sym_PLUS] = ACTIONS(596),
    [anon_sym_DASH] = ACTIONS(596),
    [anon_sym_STAR] = ACTIONS(598),
    [anon_sym_SLASH] = ACTIONS(600),
    [anon_sym_AMP] = ACTIONS(602),
    [anon_sym_PIPE] = ACTIONS(604),
    [anon_sym_CARET] = ACTIONS(594),
    [anon_sym_PERCENT] = ACTIONS(598),
    [anon_sym_LT_LT] = ACTIONS(598),
    [anon_sym_GT_GT] = ACTIONS(600),
    [anon_sym_GT_GT_GT] = ACTIONS(598),
    [anon_sym_QMARK] = ACTIONS(606),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(207),
    [sym_comment] = ACTIONS(54),
  },
  [177] = {
    [sym__semicolon] = ACTIONS(608),
    [anon_sym_GT] = ACTIONS(610),
    [anon_sym_LT] = ACTIONS(610),
    [anon_sym_EQ_EQ] = ACTIONS(608),
    [anon_sym_GT_EQ] = ACTIONS(608),
    [anon_sym_LT_EQ] = ACTIONS(608),
    [anon_sym_BANG_EQ] = ACTIONS(608),
    [anon_sym_AMP_AMP] = ACTIONS(608),
    [anon_sym_PIPE_PIPE] = ACTIONS(608),
    [anon_sym_PLUS] = ACTIONS(610),
    [anon_sym_DASH] = ACTIONS(610),
    [anon_sym_STAR] = ACTIONS(608),
    [anon_sym_SLASH] = ACTIONS(610),
    [anon_sym_AMP] = ACTIONS(610),
    [anon_sym_PIPE] = ACTIONS(610),
    [anon_sym_CARET] = ACTIONS(608),
    [anon_sym_PERCENT] = ACTIONS(608),
    [anon_sym_LT_LT] = ACTIONS(608),
    [anon_sym_GT_GT] = ACTIONS(610),
    [anon_sym_GT_GT_GT] = ACTIONS(608),
    [anon_sym_RPAREN] = ACTIONS(608),
    [anon_sym_COMMA] = ACTIONS(608),
    [anon_sym_QMARK] = ACTIONS(608),
    [anon_sym_COLON] = ACTIONS(608),
    [anon_sym_PLUS_PLUS] = ACTIONS(608),
    [anon_sym_DASH_DASH] = ACTIONS(608),
    [anon_sym_LBRACE] = ACTIONS(608),
    [anon_sym_RBRACE] = ACTIONS(608),
    [anon_sym_RBRACK] = ACTIONS(608),
    [sym_comment] = ACTIONS(54),
  },
  [178] = {
    [sym_throws] = STATE(302),
    [sym__semicolon] = ACTIONS(612),
    [anon_sym_LBRACE] = ACTIONS(612),
    [anon_sym_throws] = ACTIONS(390),
    [sym_comment] = ACTIONS(54),
  },
  [179] = {
    [sym_method_declarator] = STATE(303),
    [sym_identifier] = ACTIONS(209),
    [sym_comment] = ACTIONS(54),
  },
  [180] = {
    [anon_sym_LPAREN] = ACTIONS(614),
    [sym_comment] = ACTIONS(54),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(616),
    [sym__semicolon] = ACTIONS(616),
    [sym_decimal_integer_literal] = ACTIONS(618),
    [sym_hex_integer_literal] = ACTIONS(618),
    [sym_octal_integer_literal] = ACTIONS(618),
    [sym_binary_integer_literal] = ACTIONS(618),
    [sym_decimal_floating_point_literal] = ACTIONS(618),
    [sym_hex_floating_point_literal] = ACTIONS(620),
    [anon_sym_true] = ACTIONS(618),
    [anon_sym_false] = ACTIONS(618),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [sym_string_literal] = ACTIONS(616),
    [sym_null_literal] = ACTIONS(618),
    [anon_sym_GT] = ACTIONS(618),
    [anon_sym_LT] = ACTIONS(618),
    [anon_sym_EQ_EQ] = ACTIONS(616),
    [anon_sym_GT_EQ] = ACTIONS(616),
    [anon_sym_LT_EQ] = ACTIONS(616),
    [anon_sym_BANG_EQ] = ACTIONS(616),
    [anon_sym_AMP_AMP] = ACTIONS(616),
    [anon_sym_PIPE_PIPE] = ACTIONS(616),
    [anon_sym_PLUS] = ACTIONS(618),
    [anon_sym_DASH] = ACTIONS(618),
    [anon_sym_STAR] = ACTIONS(616),
    [anon_sym_SLASH] = ACTIONS(618),
    [anon_sym_AMP] = ACTIONS(618),
    [anon_sym_PIPE] = ACTIONS(618),
    [anon_sym_CARET] = ACTIONS(616),
    [anon_sym_PERCENT] = ACTIONS(616),
    [anon_sym_LT_LT] = ACTIONS(616),
    [anon_sym_GT_GT] = ACTIONS(618),
    [anon_sym_GT_GT_GT] = ACTIONS(616),
    [anon_sym_LPAREN] = ACTIONS(616),
    [anon_sym_RPAREN] = ACTIONS(616),
    [anon_sym_COMMA] = ACTIONS(616),
    [anon_sym_QMARK] = ACTIONS(616),
    [anon_sym_COLON] = ACTIONS(616),
    [anon_sym_BANG] = ACTIONS(618),
    [anon_sym_TILDE] = ACTIONS(616),
    [anon_sym_PLUS_PLUS] = ACTIONS(616),
    [anon_sym_DASH_DASH] = ACTIONS(616),
    [anon_sym_LBRACE] = ACTIONS(616),
    [anon_sym_RBRACE] = ACTIONS(616),
    [anon_sym_RBRACK] = ACTIONS(616),
    [anon_sym_AT] = ACTIONS(616),
    [anon_sym_open] = ACTIONS(618),
    [anon_sym_module] = ACTIONS(618),
    [anon_sym_static] = ACTIONS(618),
    [anon_sym_package] = ACTIONS(618),
    [anon_sym_import] = ACTIONS(618),
    [anon_sym_class] = ACTIONS(618),
    [anon_sym_public] = ACTIONS(618),
    [anon_sym_protected] = ACTIONS(618),
    [anon_sym_private] = ACTIONS(618),
    [anon_sym_abstract] = ACTIONS(618),
    [anon_sym_final] = ACTIONS(618),
    [anon_sym_strictfp] = ACTIONS(618),
    [anon_sym_default] = ACTIONS(618),
    [anon_sym_synchronized] = ACTIONS(618),
    [anon_sym_native] = ACTIONS(618),
    [anon_sym_void] = ACTIONS(618),
    [anon_sym_interface] = ACTIONS(618),
    [sym_identifier] = ACTIONS(620),
    [sym_comment] = ACTIONS(54),
  },
  [182] = {
    [sym_package_or_type_name] = STATE(306),
    [sym_identifier] = ACTIONS(622),
    [sym_comment] = ACTIONS(54),
  },
  [183] = {
    [anon_sym_AT] = ACTIONS(100),
    [anon_sym_static] = ACTIONS(102),
    [anon_sym_class] = ACTIONS(102),
    [anon_sym_public] = ACTIONS(102),
    [anon_sym_protected] = ACTIONS(102),
    [anon_sym_private] = ACTIONS(102),
    [anon_sym_abstract] = ACTIONS(102),
    [anon_sym_final] = ACTIONS(102),
    [anon_sym_strictfp] = ACTIONS(102),
    [anon_sym_default] = ACTIONS(102),
    [anon_sym_synchronized] = ACTIONS(102),
    [anon_sym_native] = ACTIONS(102),
    [sym_identifier] = ACTIONS(624),
    [sym_comment] = ACTIONS(54),
  },
  [184] = {
    [sym_identifier] = ACTIONS(626),
    [sym_comment] = ACTIONS(54),
  },
  [185] = {
    [anon_sym_if] = ACTIONS(628),
    [anon_sym_RBRACE] = ACTIONS(628),
    [anon_sym_AT] = ACTIONS(628),
    [anon_sym_static] = ACTIONS(628),
    [anon_sym_class] = ACTIONS(628),
    [anon_sym_public] = ACTIONS(628),
    [anon_sym_protected] = ACTIONS(628),
    [anon_sym_private] = ACTIONS(628),
    [anon_sym_abstract] = ACTIONS(628),
    [anon_sym_final] = ACTIONS(628),
    [anon_sym_strictfp] = ACTIONS(628),
    [anon_sym_default] = ACTIONS(628),
    [anon_sym_synchronized] = ACTIONS(628),
    [anon_sym_native] = ACTIONS(628),
    [sym_comment] = ACTIONS(54),
  },
  [186] = {
    [anon_sym_if] = ACTIONS(630),
    [anon_sym_RBRACE] = ACTIONS(630),
    [anon_sym_AT] = ACTIONS(630),
    [anon_sym_static] = ACTIONS(630),
    [anon_sym_class] = ACTIONS(630),
    [anon_sym_public] = ACTIONS(630),
    [anon_sym_protected] = ACTIONS(630),
    [anon_sym_private] = ACTIONS(630),
    [anon_sym_abstract] = ACTIONS(630),
    [anon_sym_final] = ACTIONS(630),
    [anon_sym_strictfp] = ACTIONS(630),
    [anon_sym_default] = ACTIONS(630),
    [anon_sym_synchronized] = ACTIONS(630),
    [anon_sym_native] = ACTIONS(630),
    [sym_comment] = ACTIONS(54),
  },
  [187] = {
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym_static] = ACTIONS(165),
    [anon_sym_class] = ACTIONS(165),
    [anon_sym_public] = ACTIONS(165),
    [anon_sym_protected] = ACTIONS(165),
    [anon_sym_private] = ACTIONS(165),
    [anon_sym_abstract] = ACTIONS(165),
    [anon_sym_final] = ACTIONS(165),
    [anon_sym_strictfp] = ACTIONS(165),
    [anon_sym_default] = ACTIONS(165),
    [anon_sym_synchronized] = ACTIONS(165),
    [anon_sym_native] = ACTIONS(165),
    [sym_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(54),
  },
  [188] = {
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
    [anon_sym_synchronized] = ACTIONS(185),
    [anon_sym_native] = ACTIONS(185),
    [sym_comment] = ACTIONS(54),
  },
  [189] = {
    [sym_variable_declarator_list] = STATE(308),
    [sym_variable_declarator] = STATE(282),
    [sym_variable_declarator_id] = STATE(126),
    [anon_sym_AT] = ACTIONS(191),
    [anon_sym_static] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(193),
    [anon_sym_public] = ACTIONS(193),
    [anon_sym_protected] = ACTIONS(193),
    [anon_sym_private] = ACTIONS(193),
    [anon_sym_abstract] = ACTIONS(193),
    [anon_sym_final] = ACTIONS(193),
    [anon_sym_strictfp] = ACTIONS(193),
    [anon_sym_default] = ACTIONS(193),
    [anon_sym_synchronized] = ACTIONS(193),
    [anon_sym_native] = ACTIONS(193),
    [sym_identifier] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [190] = {
    [anon_sym_RBRACE] = ACTIONS(632),
    [sym_comment] = ACTIONS(54),
  },
  [191] = {
    [sym_statement] = STATE(185),
    [sym_if_then_statement] = STATE(186),
    [sym__annotation] = STATE(183),
    [sym_normal_annotation] = STATE(187),
    [sym_marker_annotation] = STATE(187),
    [sym_single_element_annotation] = STATE(187),
    [sym_class_declaration] = STATE(185),
    [sym_normal_class_declaration] = STATE(188),
    [sym_modifier] = STATE(189),
    [sym_block_statement] = STATE(310),
    [sym_local_variable_declaration_statement] = STATE(185),
    [sym_local_variable_declaration] = STATE(192),
    [aux_sym_normal_class_declaration_repeat1] = STATE(193),
    [aux_sym_block_statements_repeat1] = STATE(311),
    [anon_sym_if] = ACTIONS(370),
    [anon_sym_RBRACE] = ACTIONS(634),
    [anon_sym_AT] = ACTIONS(374),
    [anon_sym_static] = ACTIONS(376),
    [anon_sym_class] = ACTIONS(378),
    [anon_sym_public] = ACTIONS(376),
    [anon_sym_protected] = ACTIONS(376),
    [anon_sym_private] = ACTIONS(376),
    [anon_sym_abstract] = ACTIONS(376),
    [anon_sym_final] = ACTIONS(376),
    [anon_sym_strictfp] = ACTIONS(376),
    [anon_sym_default] = ACTIONS(376),
    [anon_sym_synchronized] = ACTIONS(376),
    [anon_sym_native] = ACTIONS(376),
    [sym_comment] = ACTIONS(54),
  },
  [192] = {
    [sym__semicolon] = ACTIONS(636),
    [sym_comment] = ACTIONS(54),
  },
  [193] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_modifier] = STATE(107),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_static] = ACTIONS(219),
    [anon_sym_class] = ACTIONS(638),
    [anon_sym_public] = ACTIONS(219),
    [anon_sym_protected] = ACTIONS(219),
    [anon_sym_private] = ACTIONS(219),
    [anon_sym_abstract] = ACTIONS(219),
    [anon_sym_final] = ACTIONS(219),
    [anon_sym_strictfp] = ACTIONS(219),
    [anon_sym_default] = ACTIONS(219),
    [anon_sym_synchronized] = ACTIONS(219),
    [anon_sym_native] = ACTIONS(219),
    [sym_comment] = ACTIONS(54),
  },
  [194] = {
    [sym_primitive_type] = STATE(61),
    [sym_integral_type] = STATE(53),
    [sym_floating_point_type] = STATE(53),
    [sym__annotation] = STATE(62),
    [sym_normal_annotation] = STATE(63),
    [sym_marker_annotation] = STATE(63),
    [sym_single_element_annotation] = STATE(63),
    [sym_modifier] = STATE(34),
    [sym__formal_parameter_list] = STATE(315),
    [sym_formal_parameter] = STATE(64),
    [sym_receiver_parameter] = STATE(65),
    [sym_last_formal_parameter] = STATE(66),
    [aux_sym_class_or_interface_type_repeat1] = STATE(67),
    [aux_sym_normal_class_declaration_repeat1] = STATE(68),
    [anon_sym_RPAREN] = ACTIONS(640),
    [anon_sym_boolean] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(78),
    [anon_sym_short] = ACTIONS(78),
    [anon_sym_int] = ACTIONS(78),
    [anon_sym_long] = ACTIONS(78),
    [anon_sym_char] = ACTIONS(78),
    [anon_sym_float] = ACTIONS(80),
    [anon_sym_double] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(82),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(40),
    [anon_sym_protected] = ACTIONS(40),
    [anon_sym_private] = ACTIONS(40),
    [anon_sym_abstract] = ACTIONS(40),
    [anon_sym_final] = ACTIONS(40),
    [anon_sym_strictfp] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_synchronized] = ACTIONS(40),
    [anon_sym_native] = ACTIONS(40),
    [anon_sym_this] = ACTIONS(84),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(86),
    [sym_identifier] = ACTIONS(88),
    [sym_comment] = ACTIONS(54),
  },
  [195] = {
    [sym_class_or_interface_type] = STATE(317),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_exception_type_list] = STATE(318),
    [sym_exception_type] = STATE(319),
    [aux_sym_class_or_interface_type_repeat1] = STATE(320),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(642),
    [sym_comment] = ACTIONS(54),
  },
  [196] = {
    [sym__semicolon] = ACTIONS(612),
    [anon_sym_LBRACE] = ACTIONS(612),
    [sym_comment] = ACTIONS(54),
  },
  [197] = {
    [sym_module_identifier] = STATE(321),
    [sym_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(54),
  },
  [198] = {
    [aux_sym_module_identifier_repeat1] = STATE(322),
    [sym__semicolon] = ACTIONS(514),
    [anon_sym_DOT] = ACTIONS(328),
    [sym_comment] = ACTIONS(54),
  },
  [199] = {
    [sym_identifier] = ACTIONS(644),
    [sym_comment] = ACTIONS(54),
  },
  [200] = {
    [sym_type_parameters] = STATE(324),
    [sym_superclass] = STATE(275),
    [sym_super_interfaces] = STATE(276),
    [sym_class_body] = STATE(277),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(340),
    [anon_sym_extends] = ACTIONS(342),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [201] = {
    [sym_type_parameters] = STATE(325),
    [sym_extends_interfaces] = STATE(286),
    [sym_interface_body] = STATE(287),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(346),
    [anon_sym_extends] = ACTIONS(348),
    [sym_comment] = ACTIONS(54),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(646),
    [sym_decimal_integer_literal] = ACTIONS(648),
    [sym_hex_integer_literal] = ACTIONS(648),
    [sym_octal_integer_literal] = ACTIONS(648),
    [sym_binary_integer_literal] = ACTIONS(648),
    [sym_decimal_floating_point_literal] = ACTIONS(648),
    [sym_hex_floating_point_literal] = ACTIONS(650),
    [anon_sym_true] = ACTIONS(648),
    [anon_sym_false] = ACTIONS(648),
    [anon_sym_SQUOTE] = ACTIONS(646),
    [sym_string_literal] = ACTIONS(646),
    [sym_null_literal] = ACTIONS(648),
    [anon_sym_LT] = ACTIONS(646),
    [anon_sym_LPAREN] = ACTIONS(646),
    [anon_sym_BANG] = ACTIONS(646),
    [anon_sym_TILDE] = ACTIONS(646),
    [anon_sym_PLUS_PLUS] = ACTIONS(646),
    [anon_sym_DASH_DASH] = ACTIONS(646),
    [anon_sym_RBRACE] = ACTIONS(646),
    [anon_sym_AT] = ACTIONS(646),
    [anon_sym_open] = ACTIONS(648),
    [anon_sym_module] = ACTIONS(648),
    [anon_sym_static] = ACTIONS(648),
    [anon_sym_package] = ACTIONS(648),
    [anon_sym_import] = ACTIONS(648),
    [anon_sym_class] = ACTIONS(648),
    [anon_sym_public] = ACTIONS(648),
    [anon_sym_protected] = ACTIONS(648),
    [anon_sym_private] = ACTIONS(648),
    [anon_sym_abstract] = ACTIONS(648),
    [anon_sym_final] = ACTIONS(648),
    [anon_sym_strictfp] = ACTIONS(648),
    [anon_sym_default] = ACTIONS(648),
    [anon_sym_synchronized] = ACTIONS(648),
    [anon_sym_native] = ACTIONS(648),
    [anon_sym_void] = ACTIONS(648),
    [anon_sym_interface] = ACTIONS(648),
    [sym_identifier] = ACTIONS(650),
    [sym_comment] = ACTIONS(54),
  },
  [203] = {
    [sym__literal] = STATE(328),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(329),
    [sym_element_value_pair] = STATE(237),
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
    [anon_sym_RPAREN] = ACTIONS(652),
    [sym_identifier] = ACTIONS(654),
    [sym_comment] = ACTIONS(54),
  },
  [204] = {
    [sym_identifier] = ACTIONS(656),
    [sym_comment] = ACTIONS(54),
  },
  [205] = {
    [sym_type_arguments] = STATE(333),
    [aux_sym_class_or_interface_type_repeat2] = STATE(334),
    [anon_sym_GT] = ACTIONS(658),
    [anon_sym_LT] = ACTIONS(660),
    [anon_sym_AMP] = ACTIONS(658),
    [anon_sym_COMMA] = ACTIONS(658),
    [anon_sym_LBRACE] = ACTIONS(658),
    [anon_sym_DOT] = ACTIONS(662),
    [anon_sym_LBRACK] = ACTIONS(658),
    [anon_sym_AT] = ACTIONS(658),
    [anon_sym_implements] = ACTIONS(658),
    [sym_comment] = ACTIONS(54),
  },
  [206] = {
    [aux_sym_type_bound_repeat1] = STATE(336),
    [anon_sym_GT] = ACTIONS(664),
    [anon_sym_AMP] = ACTIONS(666),
    [anon_sym_COMMA] = ACTIONS(664),
    [sym_comment] = ACTIONS(54),
  },
  [207] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(668),
    [sym_comment] = ACTIONS(54),
  },
  [208] = {
    [anon_sym_GT] = ACTIONS(670),
    [anon_sym_COMMA] = ACTIONS(670),
    [sym_comment] = ACTIONS(54),
  },
  [209] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_type_parameter] = STATE(338),
    [aux_sym_class_or_interface_type_repeat1] = STATE(51),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(54),
  },
  [210] = {
    [anon_sym_GT] = ACTIONS(672),
    [anon_sym_COMMA] = ACTIONS(672),
    [sym_comment] = ACTIONS(54),
  },
  [211] = {
    [anon_sym_RPAREN] = ACTIONS(674),
    [sym_identifier] = ACTIONS(676),
    [sym_comment] = ACTIONS(54),
  },
  [212] = {
    [anon_sym_COMMA] = ACTIONS(678),
    [sym_comment] = ACTIONS(54),
  },
  [213] = {
    [sym__literal] = STATE(342),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(343),
    [sym_element_value_pair] = STATE(237),
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
    [anon_sym_RPAREN] = ACTIONS(680),
    [sym_identifier] = ACTIONS(682),
    [sym_comment] = ACTIONS(54),
  },
  [214] = {
    [sym_identifier] = ACTIONS(684),
    [sym_comment] = ACTIONS(54),
  },
  [215] = {
    [anon_sym_RBRACK] = ACTIONS(686),
    [sym_comment] = ACTIONS(54),
  },
  [216] = {
    [sym__semicolon] = ACTIONS(688),
    [anon_sym_RPAREN] = ACTIONS(688),
    [anon_sym_COMMA] = ACTIONS(688),
    [anon_sym_LBRACE] = ACTIONS(688),
    [anon_sym_EQ] = ACTIONS(688),
    [anon_sym_throws] = ACTIONS(688),
    [sym_comment] = ACTIONS(54),
  },
  [217] = {
    [sym__annotation] = STATE(103),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(690),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [218] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(347),
    [sym__semicolon] = ACTIONS(692),
    [anon_sym_GT] = ACTIONS(692),
    [anon_sym_RPAREN] = ACTIONS(692),
    [anon_sym_COMMA] = ACTIONS(692),
    [anon_sym_LBRACE] = ACTIONS(692),
    [anon_sym_DOT] = ACTIONS(692),
    [anon_sym_LBRACK] = ACTIONS(690),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(692),
    [anon_sym_default] = ACTIONS(692),
    [anon_sym_COLON_COLON] = ACTIONS(692),
    [anon_sym_throws] = ACTIONS(692),
    [sym_comment] = ACTIONS(54),
  },
  [219] = {
    [sym__semicolon] = ACTIONS(694),
    [anon_sym_RPAREN] = ACTIONS(694),
    [anon_sym_COMMA] = ACTIONS(694),
    [anon_sym_LBRACE] = ACTIONS(694),
    [anon_sym_throws] = ACTIONS(694),
    [sym_comment] = ACTIONS(54),
  },
  [220] = {
    [anon_sym_RPAREN] = ACTIONS(696),
    [anon_sym_COMMA] = ACTIONS(696),
    [anon_sym_LBRACE] = ACTIONS(696),
    [anon_sym_throws] = ACTIONS(696),
    [sym_comment] = ACTIONS(54),
  },
  [221] = {
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(698),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_throws] = ACTIONS(282),
    [sym_comment] = ACTIONS(54),
  },
  [222] = {
    [anon_sym_RPAREN] = ACTIONS(700),
    [anon_sym_LBRACE] = ACTIONS(700),
    [anon_sym_throws] = ACTIONS(700),
    [sym_comment] = ACTIONS(54),
  },
  [223] = {
    [sym_integral_type] = STATE(132),
    [sym_floating_point_type] = STATE(132),
    [sym__annotation] = STATE(103),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [anon_sym_boolean] = ACTIONS(478),
    [anon_sym_byte] = ACTIONS(300),
    [anon_sym_short] = ACTIONS(300),
    [anon_sym_int] = ACTIONS(300),
    [anon_sym_long] = ACTIONS(300),
    [anon_sym_char] = ACTIONS(300),
    [anon_sym_float] = ACTIONS(302),
    [anon_sym_double] = ACTIONS(302),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(294),
    [sym_comment] = ACTIONS(54),
  },
  [224] = {
    [sym_primitive_type] = STATE(61),
    [sym_integral_type] = STATE(53),
    [sym_floating_point_type] = STATE(53),
    [sym__annotation] = STATE(140),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_modifier] = STATE(34),
    [sym_formal_parameter] = STATE(348),
    [sym_last_formal_parameter] = STATE(349),
    [aux_sym_class_or_interface_type_repeat1] = STATE(223),
    [aux_sym_normal_class_declaration_repeat1] = STATE(68),
    [anon_sym_boolean] = ACTIONS(298),
    [anon_sym_byte] = ACTIONS(300),
    [anon_sym_short] = ACTIONS(300),
    [anon_sym_int] = ACTIONS(300),
    [anon_sym_long] = ACTIONS(300),
    [anon_sym_char] = ACTIONS(300),
    [anon_sym_float] = ACTIONS(302),
    [anon_sym_double] = ACTIONS(302),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_static] = ACTIONS(219),
    [anon_sym_public] = ACTIONS(219),
    [anon_sym_protected] = ACTIONS(219),
    [anon_sym_private] = ACTIONS(219),
    [anon_sym_abstract] = ACTIONS(219),
    [anon_sym_final] = ACTIONS(219),
    [anon_sym_strictfp] = ACTIONS(219),
    [anon_sym_default] = ACTIONS(219),
    [anon_sym_synchronized] = ACTIONS(219),
    [anon_sym_native] = ACTIONS(219),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(86),
    [sym_comment] = ACTIONS(54),
  },
  [225] = {
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_DOT] = ACTIONS(316),
    [anon_sym_boolean] = ACTIONS(316),
    [anon_sym_byte] = ACTIONS(316),
    [anon_sym_short] = ACTIONS(316),
    [anon_sym_int] = ACTIONS(316),
    [anon_sym_long] = ACTIONS(316),
    [anon_sym_char] = ACTIONS(316),
    [anon_sym_float] = ACTIONS(316),
    [anon_sym_double] = ACTIONS(316),
    [anon_sym_AT] = ACTIONS(314),
    [anon_sym_this] = ACTIONS(316),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(314),
    [sym_identifier] = ACTIONS(440),
    [sym_comment] = ACTIONS(54),
  },
  [226] = {
    [anon_sym_LPAREN] = ACTIONS(702),
    [anon_sym_DOT] = ACTIONS(704),
    [anon_sym_boolean] = ACTIONS(324),
    [anon_sym_byte] = ACTIONS(324),
    [anon_sym_short] = ACTIONS(324),
    [anon_sym_int] = ACTIONS(324),
    [anon_sym_long] = ACTIONS(324),
    [anon_sym_char] = ACTIONS(324),
    [anon_sym_float] = ACTIONS(324),
    [anon_sym_double] = ACTIONS(324),
    [anon_sym_AT] = ACTIONS(318),
    [anon_sym_this] = ACTIONS(324),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(318),
    [sym_identifier] = ACTIONS(446),
    [sym_comment] = ACTIONS(54),
  },
  [227] = {
    [anon_sym_RPAREN] = ACTIONS(706),
    [anon_sym_LBRACE] = ACTIONS(706),
    [anon_sym_throws] = ACTIONS(706),
    [sym_comment] = ACTIONS(54),
  },
  [228] = {
    [anon_sym_this] = ACTIONS(708),
    [sym_comment] = ACTIONS(54),
  },
  [229] = {
    [anon_sym_RPAREN] = ACTIONS(710),
    [anon_sym_COMMA] = ACTIONS(710),
    [anon_sym_LBRACE] = ACTIONS(710),
    [anon_sym_throws] = ACTIONS(710),
    [sym_comment] = ACTIONS(54),
  },
  [230] = {
    [sym_variable_declarator] = STATE(353),
    [sym_variable_declarator_id] = STATE(126),
    [sym_identifier] = ACTIONS(269),
    [sym_comment] = ACTIONS(54),
  },
  [231] = {
    [sym__annotation] = STATE(356),
    [sym_normal_annotation] = STATE(360),
    [sym_marker_annotation] = STATE(360),
    [sym_single_element_annotation] = STATE(360),
    [sym_class_declaration] = STATE(361),
    [sym_normal_class_declaration] = STATE(362),
    [sym_modifier] = STATE(363),
    [sym_interface_declaration] = STATE(361),
    [sym_annotation_type_declaration] = STATE(364),
    [sym_annotation_type_member_declaration] = STATE(365),
    [sym_annotation_type_element_declaration] = STATE(361),
    [sym_normal_interface_declaration] = STATE(364),
    [sym_constant_declaration] = STATE(361),
    [sym_variable_declarator_list] = STATE(366),
    [sym_variable_declarator] = STATE(282),
    [sym_variable_declarator_id] = STATE(126),
    [aux_sym_normal_class_declaration_repeat1] = STATE(367),
    [aux_sym_annotation_type_body_repeat1] = STATE(368),
    [anon_sym_RBRACE] = ACTIONS(712),
    [anon_sym_AT] = ACTIONS(714),
    [anon_sym_static] = ACTIONS(716),
    [anon_sym_class] = ACTIONS(718),
    [anon_sym_public] = ACTIONS(716),
    [anon_sym_protected] = ACTIONS(716),
    [anon_sym_private] = ACTIONS(716),
    [anon_sym_abstract] = ACTIONS(716),
    [anon_sym_final] = ACTIONS(716),
    [anon_sym_strictfp] = ACTIONS(716),
    [anon_sym_default] = ACTIONS(716),
    [anon_sym_synchronized] = ACTIONS(716),
    [anon_sym_native] = ACTIONS(716),
    [anon_sym_interface] = ACTIONS(720),
    [sym_identifier] = ACTIONS(722),
    [sym_comment] = ACTIONS(54),
  },
  [232] = {
    [ts_builtin_sym_end] = ACTIONS(724),
    [sym_decimal_integer_literal] = ACTIONS(726),
    [sym_hex_integer_literal] = ACTIONS(726),
    [sym_octal_integer_literal] = ACTIONS(726),
    [sym_binary_integer_literal] = ACTIONS(726),
    [sym_decimal_floating_point_literal] = ACTIONS(726),
    [sym_hex_floating_point_literal] = ACTIONS(728),
    [anon_sym_true] = ACTIONS(726),
    [anon_sym_false] = ACTIONS(726),
    [anon_sym_SQUOTE] = ACTIONS(724),
    [sym_string_literal] = ACTIONS(724),
    [sym_null_literal] = ACTIONS(726),
    [anon_sym_LT] = ACTIONS(724),
    [anon_sym_LPAREN] = ACTIONS(724),
    [anon_sym_BANG] = ACTIONS(724),
    [anon_sym_TILDE] = ACTIONS(724),
    [anon_sym_PLUS_PLUS] = ACTIONS(724),
    [anon_sym_DASH_DASH] = ACTIONS(724),
    [anon_sym_RBRACE] = ACTIONS(724),
    [anon_sym_AT] = ACTIONS(724),
    [anon_sym_open] = ACTIONS(726),
    [anon_sym_module] = ACTIONS(726),
    [anon_sym_static] = ACTIONS(726),
    [anon_sym_package] = ACTIONS(726),
    [anon_sym_import] = ACTIONS(726),
    [anon_sym_class] = ACTIONS(726),
    [anon_sym_public] = ACTIONS(726),
    [anon_sym_protected] = ACTIONS(726),
    [anon_sym_private] = ACTIONS(726),
    [anon_sym_abstract] = ACTIONS(726),
    [anon_sym_final] = ACTIONS(726),
    [anon_sym_strictfp] = ACTIONS(726),
    [anon_sym_default] = ACTIONS(726),
    [anon_sym_synchronized] = ACTIONS(726),
    [anon_sym_native] = ACTIONS(726),
    [anon_sym_void] = ACTIONS(726),
    [anon_sym_interface] = ACTIONS(726),
    [sym_identifier] = ACTIONS(728),
    [sym_comment] = ACTIONS(54),
  },
  [233] = {
    [sym__semicolon] = ACTIONS(730),
    [anon_sym_LT] = ACTIONS(730),
    [anon_sym_RPAREN] = ACTIONS(730),
    [anon_sym_COMMA] = ACTIONS(730),
    [anon_sym_RBRACE] = ACTIONS(730),
    [anon_sym_LBRACK] = ACTIONS(730),
    [anon_sym_boolean] = ACTIONS(730),
    [anon_sym_byte] = ACTIONS(730),
    [anon_sym_short] = ACTIONS(730),
    [anon_sym_int] = ACTIONS(732),
    [anon_sym_long] = ACTIONS(730),
    [anon_sym_char] = ACTIONS(730),
    [anon_sym_float] = ACTIONS(730),
    [anon_sym_double] = ACTIONS(730),
    [anon_sym_AT] = ACTIONS(730),
    [anon_sym_open] = ACTIONS(730),
    [anon_sym_module] = ACTIONS(730),
    [anon_sym_static] = ACTIONS(730),
    [anon_sym_package] = ACTIONS(730),
    [anon_sym_class] = ACTIONS(730),
    [anon_sym_public] = ACTIONS(730),
    [anon_sym_protected] = ACTIONS(730),
    [anon_sym_private] = ACTIONS(730),
    [anon_sym_abstract] = ACTIONS(730),
    [anon_sym_final] = ACTIONS(730),
    [anon_sym_strictfp] = ACTIONS(730),
    [anon_sym_default] = ACTIONS(730),
    [anon_sym_synchronized] = ACTIONS(730),
    [anon_sym_native] = ACTIONS(730),
    [anon_sym_void] = ACTIONS(730),
    [anon_sym_interface] = ACTIONS(730),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(730),
    [sym_comment] = ACTIONS(54),
  },
  [234] = {
    [anon_sym_RPAREN] = ACTIONS(734),
    [anon_sym_EQ] = ACTIONS(736),
    [sym_comment] = ACTIONS(54),
  },
  [235] = {
    [anon_sym_RPAREN] = ACTIONS(734),
    [sym_comment] = ACTIONS(54),
  },
  [236] = {
    [anon_sym_RPAREN] = ACTIONS(738),
    [sym_comment] = ACTIONS(54),
  },
  [237] = {
    [aux_sym_element_value_pair_list_repeat1] = STATE(373),
    [anon_sym_RPAREN] = ACTIONS(740),
    [anon_sym_COMMA] = ACTIONS(742),
    [sym_comment] = ACTIONS(54),
  },
  [238] = {
    [sym__semicolon] = ACTIONS(744),
    [anon_sym_LT] = ACTIONS(744),
    [anon_sym_LPAREN] = ACTIONS(744),
    [anon_sym_RPAREN] = ACTIONS(744),
    [anon_sym_COMMA] = ACTIONS(744),
    [anon_sym_RBRACE] = ACTIONS(744),
    [anon_sym_DOT] = ACTIONS(746),
    [anon_sym_LBRACK] = ACTIONS(744),
    [anon_sym_boolean] = ACTIONS(744),
    [anon_sym_byte] = ACTIONS(744),
    [anon_sym_short] = ACTIONS(744),
    [anon_sym_int] = ACTIONS(746),
    [anon_sym_long] = ACTIONS(744),
    [anon_sym_char] = ACTIONS(744),
    [anon_sym_float] = ACTIONS(744),
    [anon_sym_double] = ACTIONS(744),
    [anon_sym_AT] = ACTIONS(744),
    [anon_sym_open] = ACTIONS(744),
    [anon_sym_module] = ACTIONS(744),
    [anon_sym_with] = ACTIONS(744),
    [anon_sym_static] = ACTIONS(744),
    [anon_sym_package] = ACTIONS(744),
    [anon_sym_class] = ACTIONS(744),
    [anon_sym_public] = ACTIONS(744),
    [anon_sym_protected] = ACTIONS(744),
    [anon_sym_private] = ACTIONS(744),
    [anon_sym_abstract] = ACTIONS(744),
    [anon_sym_final] = ACTIONS(744),
    [anon_sym_strictfp] = ACTIONS(744),
    [anon_sym_default] = ACTIONS(744),
    [anon_sym_synchronized] = ACTIONS(744),
    [anon_sym_native] = ACTIONS(744),
    [anon_sym_void] = ACTIONS(744),
    [anon_sym_interface] = ACTIONS(744),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(744),
    [sym_comment] = ACTIONS(54),
  },
  [239] = {
    [sym_module_directive] = STATE(247),
    [aux_sym_module_declaration_repeat1] = STATE(375),
    [anon_sym_RBRACE] = ACTIONS(748),
    [anon_sym_requires] = ACTIONS(500),
    [anon_sym_exports] = ACTIONS(502),
    [anon_sym_opens] = ACTIONS(502),
    [anon_sym_uses] = ACTIONS(504),
    [anon_sym_provides] = ACTIONS(506),
    [sym_comment] = ACTIONS(54),
  },
  [240] = {
    [sym__semicolon] = ACTIONS(750),
    [anon_sym_LBRACE] = ACTIONS(750),
    [anon_sym_DOT] = ACTIONS(750),
    [sym_comment] = ACTIONS(54),
  },
  [241] = {
    [sym_identifier] = ACTIONS(752),
    [sym_comment] = ACTIONS(54),
  },
  [242] = {
    [ts_builtin_sym_end] = ACTIONS(754),
    [sym_decimal_integer_literal] = ACTIONS(756),
    [sym_hex_integer_literal] = ACTIONS(756),
    [sym_octal_integer_literal] = ACTIONS(756),
    [sym_binary_integer_literal] = ACTIONS(756),
    [sym_decimal_floating_point_literal] = ACTIONS(756),
    [sym_hex_floating_point_literal] = ACTIONS(758),
    [anon_sym_true] = ACTIONS(756),
    [anon_sym_false] = ACTIONS(756),
    [anon_sym_SQUOTE] = ACTIONS(754),
    [sym_string_literal] = ACTIONS(754),
    [sym_null_literal] = ACTIONS(756),
    [anon_sym_LT] = ACTIONS(754),
    [anon_sym_LPAREN] = ACTIONS(754),
    [anon_sym_BANG] = ACTIONS(754),
    [anon_sym_TILDE] = ACTIONS(754),
    [anon_sym_PLUS_PLUS] = ACTIONS(754),
    [anon_sym_DASH_DASH] = ACTIONS(754),
    [anon_sym_RBRACE] = ACTIONS(754),
    [anon_sym_AT] = ACTIONS(754),
    [anon_sym_open] = ACTIONS(756),
    [anon_sym_module] = ACTIONS(756),
    [anon_sym_static] = ACTIONS(756),
    [anon_sym_package] = ACTIONS(756),
    [anon_sym_import] = ACTIONS(756),
    [anon_sym_class] = ACTIONS(756),
    [anon_sym_public] = ACTIONS(756),
    [anon_sym_protected] = ACTIONS(756),
    [anon_sym_private] = ACTIONS(756),
    [anon_sym_abstract] = ACTIONS(756),
    [anon_sym_final] = ACTIONS(756),
    [anon_sym_strictfp] = ACTIONS(756),
    [anon_sym_default] = ACTIONS(756),
    [anon_sym_synchronized] = ACTIONS(756),
    [anon_sym_native] = ACTIONS(756),
    [anon_sym_void] = ACTIONS(756),
    [anon_sym_interface] = ACTIONS(756),
    [sym_identifier] = ACTIONS(758),
    [sym_comment] = ACTIONS(54),
  },
  [243] = {
    [sym_requires_modifier] = STATE(379),
    [sym_module_name] = STATE(380),
    [aux_sym_module_directive_repeat1] = STATE(381),
    [anon_sym_transitive] = ACTIONS(760),
    [anon_sym_static] = ACTIONS(760),
    [sym_identifier] = ACTIONS(762),
    [sym_comment] = ACTIONS(54),
  },
  [244] = {
    [sym_package_or_type_name] = STATE(383),
    [sym_identifier] = ACTIONS(764),
    [sym_comment] = ACTIONS(54),
  },
  [245] = {
    [sym_package_or_type_name] = STATE(384),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(54),
  },
  [246] = {
    [sym_package_or_type_name] = STATE(385),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(54),
  },
  [247] = {
    [anon_sym_RBRACE] = ACTIONS(766),
    [anon_sym_requires] = ACTIONS(766),
    [anon_sym_exports] = ACTIONS(766),
    [anon_sym_opens] = ACTIONS(766),
    [anon_sym_uses] = ACTIONS(766),
    [anon_sym_provides] = ACTIONS(766),
    [sym_comment] = ACTIONS(54),
  },
  [248] = {
    [sym_module_directive] = STATE(386),
    [anon_sym_RBRACE] = ACTIONS(748),
    [anon_sym_requires] = ACTIONS(500),
    [anon_sym_exports] = ACTIONS(502),
    [anon_sym_opens] = ACTIONS(502),
    [anon_sym_uses] = ACTIONS(504),
    [anon_sym_provides] = ACTIONS(506),
    [sym_comment] = ACTIONS(54),
  },
  [249] = {
    [ts_builtin_sym_end] = ACTIONS(768),
    [sym_decimal_integer_literal] = ACTIONS(770),
    [sym_hex_integer_literal] = ACTIONS(770),
    [sym_octal_integer_literal] = ACTIONS(770),
    [sym_binary_integer_literal] = ACTIONS(770),
    [sym_decimal_floating_point_literal] = ACTIONS(770),
    [sym_hex_floating_point_literal] = ACTIONS(772),
    [anon_sym_true] = ACTIONS(770),
    [anon_sym_false] = ACTIONS(770),
    [anon_sym_SQUOTE] = ACTIONS(768),
    [sym_string_literal] = ACTIONS(768),
    [sym_null_literal] = ACTIONS(770),
    [anon_sym_LT] = ACTIONS(768),
    [anon_sym_LPAREN] = ACTIONS(768),
    [anon_sym_BANG] = ACTIONS(768),
    [anon_sym_TILDE] = ACTIONS(768),
    [anon_sym_PLUS_PLUS] = ACTIONS(768),
    [anon_sym_DASH_DASH] = ACTIONS(768),
    [anon_sym_RBRACE] = ACTIONS(768),
    [anon_sym_AT] = ACTIONS(768),
    [anon_sym_open] = ACTIONS(770),
    [anon_sym_module] = ACTIONS(770),
    [anon_sym_static] = ACTIONS(770),
    [anon_sym_package] = ACTIONS(770),
    [anon_sym_import] = ACTIONS(770),
    [anon_sym_class] = ACTIONS(770),
    [anon_sym_public] = ACTIONS(770),
    [anon_sym_protected] = ACTIONS(770),
    [anon_sym_private] = ACTIONS(770),
    [anon_sym_abstract] = ACTIONS(770),
    [anon_sym_final] = ACTIONS(770),
    [anon_sym_strictfp] = ACTIONS(770),
    [anon_sym_default] = ACTIONS(770),
    [anon_sym_synchronized] = ACTIONS(770),
    [anon_sym_native] = ACTIONS(770),
    [anon_sym_void] = ACTIONS(770),
    [anon_sym_interface] = ACTIONS(770),
    [sym_identifier] = ACTIONS(772),
    [sym_comment] = ACTIONS(54),
  },
  [250] = {
    [anon_sym_STAR] = ACTIONS(774),
    [sym_identifier] = ACTIONS(776),
    [sym_comment] = ACTIONS(54),
  },
  [251] = {
    [sym__semicolon] = ACTIONS(778),
    [sym_comment] = ACTIONS(54),
  },
  [252] = {
    [sym__semicolon] = ACTIONS(780),
    [anon_sym_LT] = ACTIONS(780),
    [anon_sym_LBRACE] = ACTIONS(780),
    [anon_sym_RBRACE] = ACTIONS(780),
    [anon_sym_AT] = ACTIONS(780),
    [anon_sym_static] = ACTIONS(782),
    [anon_sym_class] = ACTIONS(782),
    [anon_sym_public] = ACTIONS(782),
    [anon_sym_protected] = ACTIONS(782),
    [anon_sym_private] = ACTIONS(782),
    [anon_sym_abstract] = ACTIONS(782),
    [anon_sym_final] = ACTIONS(782),
    [anon_sym_strictfp] = ACTIONS(782),
    [anon_sym_default] = ACTIONS(782),
    [anon_sym_synchronized] = ACTIONS(782),
    [anon_sym_native] = ACTIONS(782),
    [anon_sym_void] = ACTIONS(782),
    [anon_sym_interface] = ACTIONS(782),
    [sym_identifier] = ACTIONS(784),
    [sym_comment] = ACTIONS(54),
  },
  [253] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_type_parameter_list] = STATE(390),
    [sym_type_parameter] = STATE(50),
    [aux_sym_class_or_interface_type_repeat1] = STATE(51),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(54),
  },
  [254] = {
    [sym_statement] = STATE(185),
    [sym_if_then_statement] = STATE(186),
    [sym__annotation] = STATE(183),
    [sym_normal_annotation] = STATE(187),
    [sym_marker_annotation] = STATE(187),
    [sym_single_element_annotation] = STATE(187),
    [sym_class_declaration] = STATE(185),
    [sym_normal_class_declaration] = STATE(188),
    [sym_modifier] = STATE(189),
    [sym_block_statements] = STATE(392),
    [sym_block_statement] = STATE(191),
    [sym_local_variable_declaration_statement] = STATE(185),
    [sym_local_variable_declaration] = STATE(192),
    [aux_sym_normal_class_declaration_repeat1] = STATE(193),
    [anon_sym_if] = ACTIONS(370),
    [anon_sym_RBRACE] = ACTIONS(786),
    [anon_sym_AT] = ACTIONS(374),
    [anon_sym_static] = ACTIONS(376),
    [anon_sym_class] = ACTIONS(378),
    [anon_sym_public] = ACTIONS(376),
    [anon_sym_protected] = ACTIONS(376),
    [anon_sym_private] = ACTIONS(376),
    [anon_sym_abstract] = ACTIONS(376),
    [anon_sym_final] = ACTIONS(376),
    [anon_sym_strictfp] = ACTIONS(376),
    [anon_sym_default] = ACTIONS(376),
    [anon_sym_synchronized] = ACTIONS(376),
    [anon_sym_native] = ACTIONS(376),
    [sym_comment] = ACTIONS(54),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(788),
    [sym_decimal_integer_literal] = ACTIONS(790),
    [sym_hex_integer_literal] = ACTIONS(790),
    [sym_octal_integer_literal] = ACTIONS(790),
    [sym_binary_integer_literal] = ACTIONS(790),
    [sym_decimal_floating_point_literal] = ACTIONS(790),
    [sym_hex_floating_point_literal] = ACTIONS(792),
    [anon_sym_true] = ACTIONS(790),
    [anon_sym_false] = ACTIONS(790),
    [anon_sym_SQUOTE] = ACTIONS(788),
    [sym_string_literal] = ACTIONS(788),
    [sym_null_literal] = ACTIONS(790),
    [anon_sym_LT] = ACTIONS(788),
    [anon_sym_LPAREN] = ACTIONS(788),
    [anon_sym_BANG] = ACTIONS(788),
    [anon_sym_TILDE] = ACTIONS(788),
    [anon_sym_PLUS_PLUS] = ACTIONS(788),
    [anon_sym_DASH_DASH] = ACTIONS(788),
    [anon_sym_RBRACE] = ACTIONS(788),
    [anon_sym_AT] = ACTIONS(788),
    [anon_sym_open] = ACTIONS(790),
    [anon_sym_module] = ACTIONS(790),
    [anon_sym_static] = ACTIONS(790),
    [anon_sym_package] = ACTIONS(790),
    [anon_sym_import] = ACTIONS(790),
    [anon_sym_class] = ACTIONS(790),
    [anon_sym_public] = ACTIONS(790),
    [anon_sym_protected] = ACTIONS(790),
    [anon_sym_private] = ACTIONS(790),
    [anon_sym_abstract] = ACTIONS(790),
    [anon_sym_final] = ACTIONS(790),
    [anon_sym_strictfp] = ACTIONS(790),
    [anon_sym_default] = ACTIONS(790),
    [anon_sym_synchronized] = ACTIONS(790),
    [anon_sym_native] = ACTIONS(790),
    [anon_sym_void] = ACTIONS(790),
    [anon_sym_interface] = ACTIONS(790),
    [sym_identifier] = ACTIONS(792),
    [sym_comment] = ACTIONS(54),
  },
  [256] = {
    [sym_package_or_type_name] = STATE(395),
    [anon_sym_interface] = ACTIONS(794),
    [sym_identifier] = ACTIONS(796),
    [sym_comment] = ACTIONS(54),
  },
  [257] = {
    [anon_sym_LT] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(100),
    [anon_sym_static] = ACTIONS(102),
    [anon_sym_class] = ACTIONS(102),
    [anon_sym_public] = ACTIONS(102),
    [anon_sym_protected] = ACTIONS(102),
    [anon_sym_private] = ACTIONS(102),
    [anon_sym_abstract] = ACTIONS(102),
    [anon_sym_final] = ACTIONS(102),
    [anon_sym_strictfp] = ACTIONS(102),
    [anon_sym_default] = ACTIONS(102),
    [anon_sym_synchronized] = ACTIONS(102),
    [anon_sym_native] = ACTIONS(102),
    [anon_sym_void] = ACTIONS(102),
    [anon_sym_interface] = ACTIONS(102),
    [sym_identifier] = ACTIONS(624),
    [sym_comment] = ACTIONS(54),
  },
  [258] = {
    [sym_identifier] = ACTIONS(798),
    [sym_comment] = ACTIONS(54),
  },
  [259] = {
    [sym_identifier] = ACTIONS(800),
    [sym_comment] = ACTIONS(54),
  },
  [260] = {
    [sym_primitive_type] = STATE(61),
    [sym_integral_type] = STATE(53),
    [sym_floating_point_type] = STATE(53),
    [sym__annotation] = STATE(62),
    [sym_normal_annotation] = STATE(63),
    [sym_marker_annotation] = STATE(63),
    [sym_single_element_annotation] = STATE(63),
    [sym_modifier] = STATE(34),
    [sym__formal_parameter_list] = STATE(398),
    [sym_formal_parameter] = STATE(64),
    [sym_receiver_parameter] = STATE(65),
    [sym_last_formal_parameter] = STATE(66),
    [aux_sym_class_or_interface_type_repeat1] = STATE(67),
    [aux_sym_normal_class_declaration_repeat1] = STATE(68),
    [anon_sym_boolean] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(78),
    [anon_sym_short] = ACTIONS(78),
    [anon_sym_int] = ACTIONS(78),
    [anon_sym_long] = ACTIONS(78),
    [anon_sym_char] = ACTIONS(78),
    [anon_sym_float] = ACTIONS(80),
    [anon_sym_double] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(82),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(40),
    [anon_sym_protected] = ACTIONS(40),
    [anon_sym_private] = ACTIONS(40),
    [anon_sym_abstract] = ACTIONS(40),
    [anon_sym_final] = ACTIONS(40),
    [anon_sym_strictfp] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_synchronized] = ACTIONS(40),
    [anon_sym_native] = ACTIONS(40),
    [anon_sym_this] = ACTIONS(84),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(86),
    [sym_identifier] = ACTIONS(88),
    [sym_comment] = ACTIONS(54),
  },
  [261] = {
    [anon_sym_LT] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym_static] = ACTIONS(165),
    [anon_sym_class] = ACTIONS(165),
    [anon_sym_public] = ACTIONS(165),
    [anon_sym_protected] = ACTIONS(165),
    [anon_sym_private] = ACTIONS(165),
    [anon_sym_abstract] = ACTIONS(165),
    [anon_sym_final] = ACTIONS(165),
    [anon_sym_strictfp] = ACTIONS(165),
    [anon_sym_default] = ACTIONS(165),
    [anon_sym_synchronized] = ACTIONS(165),
    [anon_sym_native] = ACTIONS(165),
    [anon_sym_void] = ACTIONS(165),
    [anon_sym_interface] = ACTIONS(165),
    [sym_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(54),
  },
  [262] = {
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
    [anon_sym_synchronized] = ACTIONS(187),
    [anon_sym_native] = ACTIONS(187),
    [anon_sym_void] = ACTIONS(187),
    [anon_sym_interface] = ACTIONS(187),
    [sym_identifier] = ACTIONS(189),
    [sym_comment] = ACTIONS(54),
  },
  [263] = {
    [anon_sym_LT] = ACTIONS(191),
    [anon_sym_AT] = ACTIONS(191),
    [anon_sym_static] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(193),
    [anon_sym_public] = ACTIONS(193),
    [anon_sym_protected] = ACTIONS(193),
    [anon_sym_private] = ACTIONS(193),
    [anon_sym_abstract] = ACTIONS(193),
    [anon_sym_final] = ACTIONS(193),
    [anon_sym_strictfp] = ACTIONS(193),
    [anon_sym_default] = ACTIONS(193),
    [anon_sym_synchronized] = ACTIONS(193),
    [anon_sym_native] = ACTIONS(193),
    [anon_sym_void] = ACTIONS(193),
    [anon_sym_interface] = ACTIONS(193),
    [sym_identifier] = ACTIONS(802),
    [sym_comment] = ACTIONS(54),
  },
  [264] = {
    [sym__annotation] = STATE(92),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_result] = STATE(93),
    [aux_sym_class_or_interface_type_repeat1] = STATE(94),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_void] = ACTIONS(48),
    [sym_identifier] = ACTIONS(804),
    [sym_comment] = ACTIONS(54),
  },
  [265] = {
    [sym__semicolon] = ACTIONS(806),
    [anon_sym_LT] = ACTIONS(806),
    [anon_sym_LBRACE] = ACTIONS(806),
    [anon_sym_RBRACE] = ACTIONS(806),
    [anon_sym_AT] = ACTIONS(806),
    [anon_sym_static] = ACTIONS(808),
    [anon_sym_class] = ACTIONS(808),
    [anon_sym_public] = ACTIONS(808),
    [anon_sym_protected] = ACTIONS(808),
    [anon_sym_private] = ACTIONS(808),
    [anon_sym_abstract] = ACTIONS(808),
    [anon_sym_final] = ACTIONS(808),
    [anon_sym_strictfp] = ACTIONS(808),
    [anon_sym_default] = ACTIONS(808),
    [anon_sym_synchronized] = ACTIONS(808),
    [anon_sym_native] = ACTIONS(808),
    [anon_sym_void] = ACTIONS(808),
    [anon_sym_interface] = ACTIONS(808),
    [sym_identifier] = ACTIONS(810),
    [sym_comment] = ACTIONS(54),
  },
  [266] = {
    [sym__semicolon] = ACTIONS(812),
    [anon_sym_LT] = ACTIONS(812),
    [anon_sym_LBRACE] = ACTIONS(812),
    [anon_sym_RBRACE] = ACTIONS(812),
    [anon_sym_AT] = ACTIONS(812),
    [anon_sym_static] = ACTIONS(814),
    [anon_sym_class] = ACTIONS(814),
    [anon_sym_public] = ACTIONS(814),
    [anon_sym_protected] = ACTIONS(814),
    [anon_sym_private] = ACTIONS(814),
    [anon_sym_abstract] = ACTIONS(814),
    [anon_sym_final] = ACTIONS(814),
    [anon_sym_strictfp] = ACTIONS(814),
    [anon_sym_default] = ACTIONS(814),
    [anon_sym_synchronized] = ACTIONS(814),
    [anon_sym_native] = ACTIONS(814),
    [anon_sym_void] = ACTIONS(814),
    [anon_sym_interface] = ACTIONS(814),
    [sym_identifier] = ACTIONS(816),
    [sym_comment] = ACTIONS(54),
  },
  [267] = {
    [sym_constructor_body] = STATE(401),
    [sym_throws] = STATE(402),
    [anon_sym_LBRACE] = ACTIONS(818),
    [anon_sym_throws] = ACTIONS(390),
    [sym_comment] = ACTIONS(54),
  },
  [268] = {
    [sym__semicolon] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
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
    [anon_sym_synchronized] = ACTIONS(201),
    [anon_sym_native] = ACTIONS(201),
    [anon_sym_void] = ACTIONS(201),
    [anon_sym_interface] = ACTIONS(201),
    [sym_identifier] = ACTIONS(203),
    [sym_comment] = ACTIONS(54),
  },
  [269] = {
    [sym_method_body] = STATE(404),
    [sym_block] = STATE(403),
    [sym__semicolon] = ACTIONS(820),
    [anon_sym_LBRACE] = ACTIONS(530),
    [sym_comment] = ACTIONS(54),
  },
  [270] = {
    [sym__annotation] = STATE(257),
    [sym_normal_annotation] = STATE(261),
    [sym_marker_annotation] = STATE(261),
    [sym_single_element_annotation] = STATE(261),
    [sym_modifier] = STATE(408),
    [sym_type_parameters] = STATE(264),
    [sym_constructor_declarator] = STATE(409),
    [sym_method_header] = STATE(410),
    [sym_result] = STATE(38),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_AT] = ACTIONS(822),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(824),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(826),
    [sym_identifier] = ACTIONS(542),
    [sym_comment] = ACTIONS(54),
  },
  [271] = {
    [sym__annotation] = STATE(257),
    [sym_normal_annotation] = STATE(261),
    [sym_marker_annotation] = STATE(261),
    [sym_single_element_annotation] = STATE(261),
    [sym_class_declaration] = STATE(252),
    [sym_normal_class_declaration] = STATE(262),
    [sym_modifier] = STATE(263),
    [sym_type_parameters] = STATE(264),
    [sym_class_body_declaration] = STATE(412),
    [sym_constructor_declaration] = STATE(266),
    [sym_constructor_declarator] = STATE(267),
    [sym_class_member_declaration] = STATE(266),
    [sym_interface_declaration] = STATE(252),
    [sym_annotation_type_declaration] = STATE(268),
    [sym_normal_interface_declaration] = STATE(268),
    [sym_method_header] = STATE(269),
    [sym_result] = STATE(38),
    [sym_block] = STATE(266),
    [sym_method_declaration] = STATE(252),
    [aux_sym_normal_class_declaration_repeat1] = STATE(270),
    [sym__semicolon] = ACTIONS(526),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LBRACE] = ACTIONS(530),
    [anon_sym_RBRACE] = ACTIONS(828),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(538),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(540),
    [sym_identifier] = ACTIONS(542),
    [sym_comment] = ACTIONS(54),
  },
  [272] = {
    [anon_sym_LBRACE] = ACTIONS(830),
    [anon_sym_implements] = ACTIONS(830),
    [sym_comment] = ACTIONS(54),
  },
  [273] = {
    [aux_sym_interface_type_list_repeat1] = STATE(414),
    [anon_sym_COMMA] = ACTIONS(832),
    [anon_sym_LBRACE] = ACTIONS(834),
    [sym_comment] = ACTIONS(54),
  },
  [274] = {
    [anon_sym_LBRACE] = ACTIONS(836),
    [sym_comment] = ACTIONS(54),
  },
  [275] = {
    [sym_super_interfaces] = STATE(415),
    [sym_class_body] = STATE(416),
    [anon_sym_LBRACE] = ACTIONS(340),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [276] = {
    [sym_class_body] = STATE(416),
    [anon_sym_LBRACE] = ACTIONS(340),
    [sym_comment] = ACTIONS(54),
  },
  [277] = {
    [ts_builtin_sym_end] = ACTIONS(838),
    [sym_decimal_integer_literal] = ACTIONS(840),
    [sym_hex_integer_literal] = ACTIONS(840),
    [sym_octal_integer_literal] = ACTIONS(840),
    [sym_binary_integer_literal] = ACTIONS(840),
    [sym_decimal_floating_point_literal] = ACTIONS(840),
    [sym_hex_floating_point_literal] = ACTIONS(842),
    [anon_sym_true] = ACTIONS(840),
    [anon_sym_false] = ACTIONS(840),
    [anon_sym_SQUOTE] = ACTIONS(838),
    [sym_string_literal] = ACTIONS(838),
    [sym_null_literal] = ACTIONS(840),
    [anon_sym_LT] = ACTIONS(838),
    [anon_sym_LPAREN] = ACTIONS(838),
    [anon_sym_BANG] = ACTIONS(838),
    [anon_sym_TILDE] = ACTIONS(838),
    [anon_sym_PLUS_PLUS] = ACTIONS(838),
    [anon_sym_DASH_DASH] = ACTIONS(838),
    [anon_sym_RBRACE] = ACTIONS(838),
    [anon_sym_AT] = ACTIONS(838),
    [anon_sym_open] = ACTIONS(840),
    [anon_sym_module] = ACTIONS(840),
    [anon_sym_static] = ACTIONS(840),
    [anon_sym_package] = ACTIONS(840),
    [anon_sym_import] = ACTIONS(840),
    [anon_sym_class] = ACTIONS(840),
    [anon_sym_public] = ACTIONS(840),
    [anon_sym_protected] = ACTIONS(840),
    [anon_sym_private] = ACTIONS(840),
    [anon_sym_abstract] = ACTIONS(840),
    [anon_sym_final] = ACTIONS(840),
    [anon_sym_strictfp] = ACTIONS(840),
    [anon_sym_default] = ACTIONS(840),
    [anon_sym_synchronized] = ACTIONS(840),
    [anon_sym_native] = ACTIONS(840),
    [anon_sym_void] = ACTIONS(840),
    [anon_sym_interface] = ACTIONS(840),
    [sym_identifier] = ACTIONS(842),
    [sym_comment] = ACTIONS(54),
  },
  [278] = {
    [sym__semicolon] = ACTIONS(844),
    [anon_sym_LT] = ACTIONS(844),
    [anon_sym_RBRACE] = ACTIONS(844),
    [anon_sym_AT] = ACTIONS(844),
    [anon_sym_static] = ACTIONS(846),
    [anon_sym_class] = ACTIONS(846),
    [anon_sym_public] = ACTIONS(846),
    [anon_sym_protected] = ACTIONS(846),
    [anon_sym_private] = ACTIONS(846),
    [anon_sym_abstract] = ACTIONS(846),
    [anon_sym_final] = ACTIONS(846),
    [anon_sym_strictfp] = ACTIONS(846),
    [anon_sym_default] = ACTIONS(846),
    [anon_sym_synchronized] = ACTIONS(846),
    [anon_sym_native] = ACTIONS(846),
    [anon_sym_void] = ACTIONS(846),
    [anon_sym_interface] = ACTIONS(846),
    [sym_identifier] = ACTIONS(848),
    [sym_comment] = ACTIONS(54),
  },
  [279] = {
    [ts_builtin_sym_end] = ACTIONS(850),
    [sym_decimal_integer_literal] = ACTIONS(852),
    [sym_hex_integer_literal] = ACTIONS(852),
    [sym_octal_integer_literal] = ACTIONS(852),
    [sym_binary_integer_literal] = ACTIONS(852),
    [sym_decimal_floating_point_literal] = ACTIONS(852),
    [sym_hex_floating_point_literal] = ACTIONS(854),
    [anon_sym_true] = ACTIONS(852),
    [anon_sym_false] = ACTIONS(852),
    [anon_sym_SQUOTE] = ACTIONS(850),
    [sym_string_literal] = ACTIONS(850),
    [sym_null_literal] = ACTIONS(852),
    [anon_sym_LT] = ACTIONS(850),
    [anon_sym_LPAREN] = ACTIONS(850),
    [anon_sym_BANG] = ACTIONS(850),
    [anon_sym_TILDE] = ACTIONS(850),
    [anon_sym_PLUS_PLUS] = ACTIONS(850),
    [anon_sym_DASH_DASH] = ACTIONS(850),
    [anon_sym_RBRACE] = ACTIONS(850),
    [anon_sym_AT] = ACTIONS(850),
    [anon_sym_open] = ACTIONS(852),
    [anon_sym_module] = ACTIONS(852),
    [anon_sym_static] = ACTIONS(852),
    [anon_sym_package] = ACTIONS(852),
    [anon_sym_import] = ACTIONS(852),
    [anon_sym_class] = ACTIONS(852),
    [anon_sym_public] = ACTIONS(852),
    [anon_sym_protected] = ACTIONS(852),
    [anon_sym_private] = ACTIONS(852),
    [anon_sym_abstract] = ACTIONS(852),
    [anon_sym_final] = ACTIONS(852),
    [anon_sym_strictfp] = ACTIONS(852),
    [anon_sym_default] = ACTIONS(852),
    [anon_sym_synchronized] = ACTIONS(852),
    [anon_sym_native] = ACTIONS(852),
    [anon_sym_void] = ACTIONS(852),
    [anon_sym_interface] = ACTIONS(852),
    [sym_identifier] = ACTIONS(854),
    [sym_comment] = ACTIONS(54),
  },
  [280] = {
    [sym__semicolon] = ACTIONS(856),
    [anon_sym_LT] = ACTIONS(856),
    [anon_sym_RBRACE] = ACTIONS(856),
    [anon_sym_AT] = ACTIONS(856),
    [anon_sym_static] = ACTIONS(858),
    [anon_sym_class] = ACTIONS(858),
    [anon_sym_public] = ACTIONS(858),
    [anon_sym_protected] = ACTIONS(858),
    [anon_sym_private] = ACTIONS(858),
    [anon_sym_abstract] = ACTIONS(858),
    [anon_sym_final] = ACTIONS(858),
    [anon_sym_strictfp] = ACTIONS(858),
    [anon_sym_default] = ACTIONS(858),
    [anon_sym_synchronized] = ACTIONS(858),
    [anon_sym_native] = ACTIONS(858),
    [anon_sym_void] = ACTIONS(858),
    [anon_sym_interface] = ACTIONS(858),
    [sym_identifier] = ACTIONS(860),
    [sym_comment] = ACTIONS(54),
  },
  [281] = {
    [sym__semicolon] = ACTIONS(862),
    [sym_comment] = ACTIONS(54),
  },
  [282] = {
    [aux_sym_variable_declarator_list_repeat1] = STATE(419),
    [sym__semicolon] = ACTIONS(864),
    [anon_sym_COMMA] = ACTIONS(866),
    [sym_comment] = ACTIONS(54),
  },
  [283] = {
    [sym__annotation] = STATE(257),
    [sym_normal_annotation] = STATE(261),
    [sym_marker_annotation] = STATE(261),
    [sym_single_element_annotation] = STATE(261),
    [sym_modifier] = STATE(408),
    [sym_type_parameters] = STATE(35),
    [sym_variable_declarator_list] = STATE(420),
    [sym_variable_declarator] = STATE(282),
    [sym_variable_declarator_id] = STATE(126),
    [sym_method_header] = STATE(410),
    [sym_result] = STATE(38),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_AT] = ACTIONS(822),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(824),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(826),
    [sym_identifier] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [284] = {
    [sym__annotation] = STATE(257),
    [sym_normal_annotation] = STATE(261),
    [sym_marker_annotation] = STATE(261),
    [sym_single_element_annotation] = STATE(261),
    [sym_class_declaration] = STATE(278),
    [sym_normal_class_declaration] = STATE(262),
    [sym_modifier] = STATE(263),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(278),
    [sym_annotation_type_declaration] = STATE(268),
    [sym_normal_interface_declaration] = STATE(268),
    [sym_interface_member_declaration] = STATE(422),
    [sym_constant_declaration] = STATE(278),
    [sym_variable_declarator_list] = STATE(281),
    [sym_variable_declarator] = STATE(282),
    [sym_variable_declarator_id] = STATE(126),
    [sym_method_header] = STATE(269),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(278),
    [aux_sym_normal_class_declaration_repeat1] = STATE(283),
    [sym__semicolon] = ACTIONS(550),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(868),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(538),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(540),
    [sym_identifier] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [285] = {
    [anon_sym_LBRACE] = ACTIONS(870),
    [sym_comment] = ACTIONS(54),
  },
  [286] = {
    [sym_interface_body] = STATE(423),
    [anon_sym_LBRACE] = ACTIONS(346),
    [sym_comment] = ACTIONS(54),
  },
  [287] = {
    [ts_builtin_sym_end] = ACTIONS(872),
    [sym_decimal_integer_literal] = ACTIONS(874),
    [sym_hex_integer_literal] = ACTIONS(874),
    [sym_octal_integer_literal] = ACTIONS(874),
    [sym_binary_integer_literal] = ACTIONS(874),
    [sym_decimal_floating_point_literal] = ACTIONS(874),
    [sym_hex_floating_point_literal] = ACTIONS(876),
    [anon_sym_true] = ACTIONS(874),
    [anon_sym_false] = ACTIONS(874),
    [anon_sym_SQUOTE] = ACTIONS(872),
    [sym_string_literal] = ACTIONS(872),
    [sym_null_literal] = ACTIONS(874),
    [anon_sym_LT] = ACTIONS(872),
    [anon_sym_LPAREN] = ACTIONS(872),
    [anon_sym_BANG] = ACTIONS(872),
    [anon_sym_TILDE] = ACTIONS(872),
    [anon_sym_PLUS_PLUS] = ACTIONS(872),
    [anon_sym_DASH_DASH] = ACTIONS(872),
    [anon_sym_RBRACE] = ACTIONS(872),
    [anon_sym_AT] = ACTIONS(872),
    [anon_sym_open] = ACTIONS(874),
    [anon_sym_module] = ACTIONS(874),
    [anon_sym_static] = ACTIONS(874),
    [anon_sym_package] = ACTIONS(874),
    [anon_sym_import] = ACTIONS(874),
    [anon_sym_class] = ACTIONS(874),
    [anon_sym_public] = ACTIONS(874),
    [anon_sym_protected] = ACTIONS(874),
    [anon_sym_private] = ACTIONS(874),
    [anon_sym_abstract] = ACTIONS(874),
    [anon_sym_final] = ACTIONS(874),
    [anon_sym_strictfp] = ACTIONS(874),
    [anon_sym_default] = ACTIONS(874),
    [anon_sym_synchronized] = ACTIONS(874),
    [anon_sym_native] = ACTIONS(874),
    [anon_sym_void] = ACTIONS(874),
    [anon_sym_interface] = ACTIONS(874),
    [sym_identifier] = ACTIONS(876),
    [sym_comment] = ACTIONS(54),
  },
  [288] = {
    [sym__expression] = STATE(424),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [289] = {
    [sym__expression] = STATE(425),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [290] = {
    [sym__expression] = STATE(426),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [291] = {
    [sym__expression] = STATE(427),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [292] = {
    [sym__expression] = STATE(170),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [293] = {
    [sym__expression] = STATE(428),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [294] = {
    [sym__expression] = STATE(429),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_PLUS_PLUS] = ACTIONS(32),
    [anon_sym_DASH_DASH] = ACTIONS(32),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [295] = {
    [sym__expression] = STATE(430),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(360),
    [anon_sym_TILDE] = ACTIONS(360),
    [anon_sym_PLUS_PLUS] = ACTIONS(362),
    [anon_sym_DASH_DASH] = ACTIONS(362),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [296] = {
    [sym__expression] = STATE(431),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(360),
    [anon_sym_TILDE] = ACTIONS(360),
    [anon_sym_PLUS_PLUS] = ACTIONS(362),
    [anon_sym_DASH_DASH] = ACTIONS(362),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [297] = {
    [sym__expression] = STATE(432),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(360),
    [anon_sym_TILDE] = ACTIONS(360),
    [anon_sym_PLUS_PLUS] = ACTIONS(362),
    [anon_sym_DASH_DASH] = ACTIONS(362),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [298] = {
    [sym__expression] = STATE(433),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(360),
    [anon_sym_TILDE] = ACTIONS(360),
    [anon_sym_PLUS_PLUS] = ACTIONS(362),
    [anon_sym_DASH_DASH] = ACTIONS(362),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [299] = {
    [sym__expression] = STATE(170),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(360),
    [anon_sym_TILDE] = ACTIONS(360),
    [anon_sym_PLUS_PLUS] = ACTIONS(362),
    [anon_sym_DASH_DASH] = ACTIONS(362),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [300] = {
    [sym__expression] = STATE(434),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [301] = {
    [sym__semicolon] = ACTIONS(878),
    [anon_sym_GT] = ACTIONS(880),
    [anon_sym_LT] = ACTIONS(880),
    [anon_sym_EQ_EQ] = ACTIONS(878),
    [anon_sym_GT_EQ] = ACTIONS(878),
    [anon_sym_LT_EQ] = ACTIONS(878),
    [anon_sym_BANG_EQ] = ACTIONS(878),
    [anon_sym_AMP_AMP] = ACTIONS(878),
    [anon_sym_PIPE_PIPE] = ACTIONS(878),
    [anon_sym_PLUS] = ACTIONS(880),
    [anon_sym_DASH] = ACTIONS(880),
    [anon_sym_STAR] = ACTIONS(878),
    [anon_sym_SLASH] = ACTIONS(880),
    [anon_sym_AMP] = ACTIONS(880),
    [anon_sym_PIPE] = ACTIONS(880),
    [anon_sym_CARET] = ACTIONS(878),
    [anon_sym_PERCENT] = ACTIONS(878),
    [anon_sym_LT_LT] = ACTIONS(878),
    [anon_sym_GT_GT] = ACTIONS(880),
    [anon_sym_GT_GT_GT] = ACTIONS(878),
    [anon_sym_RPAREN] = ACTIONS(878),
    [anon_sym_COMMA] = ACTIONS(878),
    [anon_sym_QMARK] = ACTIONS(878),
    [anon_sym_COLON] = ACTIONS(878),
    [anon_sym_PLUS_PLUS] = ACTIONS(878),
    [anon_sym_DASH_DASH] = ACTIONS(878),
    [anon_sym_LBRACE] = ACTIONS(878),
    [anon_sym_RBRACE] = ACTIONS(878),
    [anon_sym_RBRACK] = ACTIONS(878),
    [sym_comment] = ACTIONS(54),
  },
  [302] = {
    [sym__semicolon] = ACTIONS(882),
    [anon_sym_LBRACE] = ACTIONS(882),
    [sym_comment] = ACTIONS(54),
  },
  [303] = {
    [sym_throws] = STATE(435),
    [sym__semicolon] = ACTIONS(882),
    [anon_sym_LBRACE] = ACTIONS(882),
    [anon_sym_throws] = ACTIONS(390),
    [sym_comment] = ACTIONS(54),
  },
  [304] = {
    [sym__expression] = STATE(438),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(886),
    [anon_sym_DASH_DASH] = ACTIONS(886),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [305] = {
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_DOT] = ACTIONS(314),
    [anon_sym_AT] = ACTIONS(314),
    [anon_sym_static] = ACTIONS(316),
    [anon_sym_class] = ACTIONS(316),
    [anon_sym_public] = ACTIONS(316),
    [anon_sym_protected] = ACTIONS(316),
    [anon_sym_private] = ACTIONS(316),
    [anon_sym_abstract] = ACTIONS(316),
    [anon_sym_final] = ACTIONS(316),
    [anon_sym_strictfp] = ACTIONS(316),
    [anon_sym_default] = ACTIONS(316),
    [anon_sym_synchronized] = ACTIONS(316),
    [anon_sym_native] = ACTIONS(316),
    [sym_identifier] = ACTIONS(440),
    [sym_comment] = ACTIONS(54),
  },
  [306] = {
    [anon_sym_LPAREN] = ACTIONS(888),
    [anon_sym_DOT] = ACTIONS(890),
    [anon_sym_AT] = ACTIONS(318),
    [anon_sym_static] = ACTIONS(324),
    [anon_sym_class] = ACTIONS(324),
    [anon_sym_public] = ACTIONS(324),
    [anon_sym_protected] = ACTIONS(324),
    [anon_sym_private] = ACTIONS(324),
    [anon_sym_abstract] = ACTIONS(324),
    [anon_sym_final] = ACTIONS(324),
    [anon_sym_strictfp] = ACTIONS(324),
    [anon_sym_default] = ACTIONS(324),
    [anon_sym_synchronized] = ACTIONS(324),
    [anon_sym_native] = ACTIONS(324),
    [sym_identifier] = ACTIONS(446),
    [sym_comment] = ACTIONS(54),
  },
  [307] = {
    [sym_type_parameters] = STATE(442),
    [sym_superclass] = STATE(443),
    [sym_super_interfaces] = STATE(444),
    [sym_class_body] = STATE(445),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(892),
    [anon_sym_extends] = ACTIONS(342),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [308] = {
    [sym__semicolon] = ACTIONS(894),
    [sym_comment] = ACTIONS(54),
  },
  [309] = {
    [ts_builtin_sym_end] = ACTIONS(896),
    [sym__semicolon] = ACTIONS(896),
    [sym_decimal_integer_literal] = ACTIONS(898),
    [sym_hex_integer_literal] = ACTIONS(898),
    [sym_octal_integer_literal] = ACTIONS(898),
    [sym_binary_integer_literal] = ACTIONS(898),
    [sym_decimal_floating_point_literal] = ACTIONS(898),
    [sym_hex_floating_point_literal] = ACTIONS(900),
    [anon_sym_true] = ACTIONS(898),
    [anon_sym_false] = ACTIONS(898),
    [anon_sym_SQUOTE] = ACTIONS(896),
    [sym_string_literal] = ACTIONS(896),
    [sym_null_literal] = ACTIONS(898),
    [anon_sym_GT] = ACTIONS(898),
    [anon_sym_LT] = ACTIONS(898),
    [anon_sym_EQ_EQ] = ACTIONS(896),
    [anon_sym_GT_EQ] = ACTIONS(896),
    [anon_sym_LT_EQ] = ACTIONS(896),
    [anon_sym_BANG_EQ] = ACTIONS(896),
    [anon_sym_AMP_AMP] = ACTIONS(896),
    [anon_sym_PIPE_PIPE] = ACTIONS(896),
    [anon_sym_PLUS] = ACTIONS(898),
    [anon_sym_DASH] = ACTIONS(898),
    [anon_sym_STAR] = ACTIONS(896),
    [anon_sym_SLASH] = ACTIONS(898),
    [anon_sym_AMP] = ACTIONS(898),
    [anon_sym_PIPE] = ACTIONS(898),
    [anon_sym_CARET] = ACTIONS(896),
    [anon_sym_PERCENT] = ACTIONS(896),
    [anon_sym_LT_LT] = ACTIONS(896),
    [anon_sym_GT_GT] = ACTIONS(898),
    [anon_sym_GT_GT_GT] = ACTIONS(896),
    [anon_sym_LPAREN] = ACTIONS(896),
    [anon_sym_RPAREN] = ACTIONS(896),
    [anon_sym_COMMA] = ACTIONS(896),
    [anon_sym_QMARK] = ACTIONS(896),
    [anon_sym_COLON] = ACTIONS(896),
    [anon_sym_BANG] = ACTIONS(898),
    [anon_sym_TILDE] = ACTIONS(896),
    [anon_sym_PLUS_PLUS] = ACTIONS(896),
    [anon_sym_DASH_DASH] = ACTIONS(896),
    [anon_sym_LBRACE] = ACTIONS(896),
    [anon_sym_RBRACE] = ACTIONS(896),
    [anon_sym_RBRACK] = ACTIONS(896),
    [anon_sym_AT] = ACTIONS(896),
    [anon_sym_open] = ACTIONS(898),
    [anon_sym_module] = ACTIONS(898),
    [anon_sym_static] = ACTIONS(898),
    [anon_sym_package] = ACTIONS(898),
    [anon_sym_import] = ACTIONS(898),
    [anon_sym_class] = ACTIONS(898),
    [anon_sym_public] = ACTIONS(898),
    [anon_sym_protected] = ACTIONS(898),
    [anon_sym_private] = ACTIONS(898),
    [anon_sym_abstract] = ACTIONS(898),
    [anon_sym_final] = ACTIONS(898),
    [anon_sym_strictfp] = ACTIONS(898),
    [anon_sym_default] = ACTIONS(898),
    [anon_sym_synchronized] = ACTIONS(898),
    [anon_sym_native] = ACTIONS(898),
    [anon_sym_void] = ACTIONS(898),
    [anon_sym_interface] = ACTIONS(898),
    [sym_identifier] = ACTIONS(900),
    [sym_comment] = ACTIONS(54),
  },
  [310] = {
    [anon_sym_if] = ACTIONS(902),
    [anon_sym_RBRACE] = ACTIONS(902),
    [anon_sym_AT] = ACTIONS(902),
    [anon_sym_static] = ACTIONS(902),
    [anon_sym_class] = ACTIONS(902),
    [anon_sym_public] = ACTIONS(902),
    [anon_sym_protected] = ACTIONS(902),
    [anon_sym_private] = ACTIONS(902),
    [anon_sym_abstract] = ACTIONS(902),
    [anon_sym_final] = ACTIONS(902),
    [anon_sym_strictfp] = ACTIONS(902),
    [anon_sym_default] = ACTIONS(902),
    [anon_sym_synchronized] = ACTIONS(902),
    [anon_sym_native] = ACTIONS(902),
    [sym_comment] = ACTIONS(54),
  },
  [311] = {
    [sym_statement] = STATE(185),
    [sym_if_then_statement] = STATE(186),
    [sym__annotation] = STATE(183),
    [sym_normal_annotation] = STATE(187),
    [sym_marker_annotation] = STATE(187),
    [sym_single_element_annotation] = STATE(187),
    [sym_class_declaration] = STATE(185),
    [sym_normal_class_declaration] = STATE(188),
    [sym_modifier] = STATE(189),
    [sym_block_statement] = STATE(446),
    [sym_local_variable_declaration_statement] = STATE(185),
    [sym_local_variable_declaration] = STATE(192),
    [aux_sym_normal_class_declaration_repeat1] = STATE(193),
    [anon_sym_if] = ACTIONS(370),
    [anon_sym_RBRACE] = ACTIONS(904),
    [anon_sym_AT] = ACTIONS(374),
    [anon_sym_static] = ACTIONS(376),
    [anon_sym_class] = ACTIONS(378),
    [anon_sym_public] = ACTIONS(376),
    [anon_sym_protected] = ACTIONS(376),
    [anon_sym_private] = ACTIONS(376),
    [anon_sym_abstract] = ACTIONS(376),
    [anon_sym_final] = ACTIONS(376),
    [anon_sym_strictfp] = ACTIONS(376),
    [anon_sym_default] = ACTIONS(376),
    [anon_sym_synchronized] = ACTIONS(376),
    [anon_sym_native] = ACTIONS(376),
    [sym_comment] = ACTIONS(54),
  },
  [312] = {
    [anon_sym_if] = ACTIONS(906),
    [anon_sym_RBRACE] = ACTIONS(906),
    [anon_sym_AT] = ACTIONS(906),
    [anon_sym_static] = ACTIONS(906),
    [anon_sym_class] = ACTIONS(906),
    [anon_sym_public] = ACTIONS(906),
    [anon_sym_protected] = ACTIONS(906),
    [anon_sym_private] = ACTIONS(906),
    [anon_sym_abstract] = ACTIONS(906),
    [anon_sym_final] = ACTIONS(906),
    [anon_sym_strictfp] = ACTIONS(906),
    [anon_sym_default] = ACTIONS(906),
    [anon_sym_synchronized] = ACTIONS(906),
    [anon_sym_native] = ACTIONS(906),
    [sym_comment] = ACTIONS(54),
  },
  [313] = {
    [sym_identifier] = ACTIONS(908),
    [sym_comment] = ACTIONS(54),
  },
  [314] = {
    [sym_dims] = STATE(448),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(217),
    [aux_sym_dims_repeat1] = STATE(218),
    [sym__semicolon] = ACTIONS(910),
    [anon_sym_LBRACE] = ACTIONS(910),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_throws] = ACTIONS(910),
    [sym_comment] = ACTIONS(54),
  },
  [315] = {
    [anon_sym_RPAREN] = ACTIONS(912),
    [sym_comment] = ACTIONS(54),
  },
  [316] = {
    [sym_type_arguments] = STATE(452),
    [aux_sym_class_or_interface_type_repeat2] = STATE(453),
    [anon_sym_LT] = ACTIONS(914),
    [anon_sym_DOT] = ACTIONS(916),
    [anon_sym_AT] = ACTIONS(658),
    [sym_identifier] = ACTIONS(918),
    [sym_comment] = ACTIONS(54),
  },
  [317] = {
    [sym_type_variable] = STATE(455),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(456),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(920),
    [sym_comment] = ACTIONS(54),
  },
  [318] = {
    [sym__semicolon] = ACTIONS(922),
    [anon_sym_LBRACE] = ACTIONS(922),
    [sym_comment] = ACTIONS(54),
  },
  [319] = {
    [aux_sym_exception_type_list_repeat1] = STATE(458),
    [sym__semicolon] = ACTIONS(924),
    [anon_sym_COMMA] = ACTIONS(926),
    [anon_sym_LBRACE] = ACTIONS(924),
    [sym_comment] = ACTIONS(54),
  },
  [320] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(928),
    [sym_comment] = ACTIONS(54),
  },
  [321] = {
    [anon_sym_LBRACE] = ACTIONS(930),
    [sym_comment] = ACTIONS(54),
  },
  [322] = {
    [sym__semicolon] = ACTIONS(932),
    [anon_sym_DOT] = ACTIONS(496),
    [sym_comment] = ACTIONS(54),
  },
  [323] = {
    [sym_annotation_type_body] = STATE(462),
    [anon_sym_LBRACE] = ACTIONS(482),
    [sym_comment] = ACTIONS(54),
  },
  [324] = {
    [sym_superclass] = STATE(463),
    [sym_super_interfaces] = STATE(415),
    [sym_class_body] = STATE(416),
    [anon_sym_LBRACE] = ACTIONS(340),
    [anon_sym_extends] = ACTIONS(342),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [325] = {
    [sym_extends_interfaces] = STATE(464),
    [sym_interface_body] = STATE(423),
    [anon_sym_LBRACE] = ACTIONS(346),
    [anon_sym_extends] = ACTIONS(348),
    [sym_comment] = ACTIONS(54),
  },
  [326] = {
    [anon_sym_AT] = ACTIONS(730),
    [sym_identifier] = ACTIONS(732),
    [sym_comment] = ACTIONS(54),
  },
  [327] = {
    [anon_sym_RPAREN] = ACTIONS(934),
    [anon_sym_EQ] = ACTIONS(736),
    [sym_comment] = ACTIONS(54),
  },
  [328] = {
    [anon_sym_RPAREN] = ACTIONS(934),
    [sym_comment] = ACTIONS(54),
  },
  [329] = {
    [anon_sym_RPAREN] = ACTIONS(936),
    [sym_comment] = ACTIONS(54),
  },
  [330] = {
    [anon_sym_LPAREN] = ACTIONS(744),
    [anon_sym_DOT] = ACTIONS(744),
    [anon_sym_AT] = ACTIONS(744),
    [sym_identifier] = ACTIONS(746),
    [sym_comment] = ACTIONS(54),
  },
  [331] = {
    [sym_type_argument] = STATE(468),
    [sym_reference_type] = STATE(469),
    [sym_class_or_interface_type] = STATE(470),
    [sym_primitive_type] = STATE(471),
    [sym_integral_type] = STATE(53),
    [sym_floating_point_type] = STATE(53),
    [sym__annotation] = STATE(472),
    [sym_normal_annotation] = STATE(473),
    [sym_marker_annotation] = STATE(473),
    [sym_single_element_annotation] = STATE(473),
    [aux_sym_class_or_interface_type_repeat1] = STATE(474),
    [anon_sym_boolean] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(78),
    [anon_sym_short] = ACTIONS(78),
    [anon_sym_int] = ACTIONS(78),
    [anon_sym_long] = ACTIONS(78),
    [anon_sym_char] = ACTIONS(78),
    [anon_sym_float] = ACTIONS(80),
    [anon_sym_double] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(938),
    [sym_identifier] = ACTIONS(940),
    [sym_comment] = ACTIONS(54),
  },
  [332] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(476),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(942),
    [sym_comment] = ACTIONS(54),
  },
  [333] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(477),
    [anon_sym_GT] = ACTIONS(944),
    [anon_sym_AMP] = ACTIONS(944),
    [anon_sym_COMMA] = ACTIONS(944),
    [anon_sym_LBRACE] = ACTIONS(944),
    [anon_sym_DOT] = ACTIONS(662),
    [anon_sym_LBRACK] = ACTIONS(944),
    [anon_sym_AT] = ACTIONS(944),
    [anon_sym_implements] = ACTIONS(944),
    [anon_sym_COLON_COLON] = ACTIONS(944),
    [sym_comment] = ACTIONS(54),
  },
  [334] = {
    [anon_sym_GT] = ACTIONS(944),
    [anon_sym_AMP] = ACTIONS(944),
    [anon_sym_COMMA] = ACTIONS(944),
    [anon_sym_LBRACE] = ACTIONS(944),
    [anon_sym_DOT] = ACTIONS(946),
    [anon_sym_LBRACK] = ACTIONS(944),
    [anon_sym_AT] = ACTIONS(944),
    [anon_sym_implements] = ACTIONS(944),
    [anon_sym_COLON_COLON] = ACTIONS(944),
    [sym_comment] = ACTIONS(54),
  },
  [335] = {
    [sym_class_or_interface_type] = STATE(479),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(207),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(54),
  },
  [336] = {
    [anon_sym_GT] = ACTIONS(948),
    [anon_sym_AMP] = ACTIONS(950),
    [anon_sym_COMMA] = ACTIONS(948),
    [sym_comment] = ACTIONS(54),
  },
  [337] = {
    [sym_type_arguments] = STATE(481),
    [aux_sym_class_or_interface_type_repeat2] = STATE(477),
    [anon_sym_GT] = ACTIONS(944),
    [anon_sym_LT] = ACTIONS(660),
    [anon_sym_AMP] = ACTIONS(944),
    [anon_sym_COMMA] = ACTIONS(944),
    [anon_sym_LBRACE] = ACTIONS(944),
    [anon_sym_DOT] = ACTIONS(662),
    [anon_sym_LBRACK] = ACTIONS(944),
    [anon_sym_AT] = ACTIONS(944),
    [anon_sym_implements] = ACTIONS(944),
    [anon_sym_COLON_COLON] = ACTIONS(944),
    [sym_comment] = ACTIONS(54),
  },
  [338] = {
    [anon_sym_GT] = ACTIONS(952),
    [anon_sym_COMMA] = ACTIONS(952),
    [sym_comment] = ACTIONS(54),
  },
  [339] = {
    [anon_sym_RPAREN] = ACTIONS(954),
    [sym_identifier] = ACTIONS(956),
    [sym_comment] = ACTIONS(54),
  },
  [340] = {
    [anon_sym_boolean] = ACTIONS(732),
    [anon_sym_byte] = ACTIONS(732),
    [anon_sym_short] = ACTIONS(732),
    [anon_sym_int] = ACTIONS(732),
    [anon_sym_long] = ACTIONS(732),
    [anon_sym_char] = ACTIONS(732),
    [anon_sym_float] = ACTIONS(732),
    [anon_sym_double] = ACTIONS(732),
    [anon_sym_AT] = ACTIONS(730),
    [anon_sym_static] = ACTIONS(732),
    [anon_sym_public] = ACTIONS(732),
    [anon_sym_protected] = ACTIONS(732),
    [anon_sym_private] = ACTIONS(732),
    [anon_sym_abstract] = ACTIONS(732),
    [anon_sym_final] = ACTIONS(732),
    [anon_sym_strictfp] = ACTIONS(732),
    [anon_sym_default] = ACTIONS(732),
    [anon_sym_synchronized] = ACTIONS(732),
    [anon_sym_native] = ACTIONS(732),
    [anon_sym_this] = ACTIONS(732),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(730),
    [sym_identifier] = ACTIONS(958),
    [sym_comment] = ACTIONS(54),
  },
  [341] = {
    [anon_sym_RPAREN] = ACTIONS(960),
    [anon_sym_EQ] = ACTIONS(736),
    [sym_comment] = ACTIONS(54),
  },
  [342] = {
    [anon_sym_RPAREN] = ACTIONS(960),
    [sym_comment] = ACTIONS(54),
  },
  [343] = {
    [anon_sym_RPAREN] = ACTIONS(962),
    [sym_comment] = ACTIONS(54),
  },
  [344] = {
    [anon_sym_LPAREN] = ACTIONS(744),
    [anon_sym_DOT] = ACTIONS(746),
    [anon_sym_boolean] = ACTIONS(746),
    [anon_sym_byte] = ACTIONS(746),
    [anon_sym_short] = ACTIONS(746),
    [anon_sym_int] = ACTIONS(746),
    [anon_sym_long] = ACTIONS(746),
    [anon_sym_char] = ACTIONS(746),
    [anon_sym_float] = ACTIONS(746),
    [anon_sym_double] = ACTIONS(746),
    [anon_sym_AT] = ACTIONS(744),
    [anon_sym_static] = ACTIONS(746),
    [anon_sym_public] = ACTIONS(746),
    [anon_sym_protected] = ACTIONS(746),
    [anon_sym_private] = ACTIONS(746),
    [anon_sym_abstract] = ACTIONS(746),
    [anon_sym_final] = ACTIONS(746),
    [anon_sym_strictfp] = ACTIONS(746),
    [anon_sym_default] = ACTIONS(746),
    [anon_sym_synchronized] = ACTIONS(746),
    [anon_sym_native] = ACTIONS(746),
    [anon_sym_this] = ACTIONS(746),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(744),
    [sym_identifier] = ACTIONS(964),
    [sym_comment] = ACTIONS(54),
  },
  [345] = {
    [sym__semicolon] = ACTIONS(966),
    [anon_sym_GT] = ACTIONS(966),
    [anon_sym_RPAREN] = ACTIONS(966),
    [anon_sym_COMMA] = ACTIONS(966),
    [anon_sym_LBRACE] = ACTIONS(966),
    [anon_sym_DOT] = ACTIONS(966),
    [anon_sym_LBRACK] = ACTIONS(966),
    [anon_sym_AT] = ACTIONS(966),
    [anon_sym_EQ] = ACTIONS(966),
    [anon_sym_default] = ACTIONS(966),
    [anon_sym_COLON_COLON] = ACTIONS(966),
    [anon_sym_throws] = ACTIONS(966),
    [sym_comment] = ACTIONS(54),
  },
  [346] = {
    [anon_sym_RBRACK] = ACTIONS(968),
    [sym_comment] = ACTIONS(54),
  },
  [347] = {
    [sym__annotation] = STATE(103),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(970),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [348] = {
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(972),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_throws] = ACTIONS(282),
    [sym_comment] = ACTIONS(54),
  },
  [349] = {
    [anon_sym_RPAREN] = ACTIONS(974),
    [anon_sym_LBRACE] = ACTIONS(974),
    [anon_sym_throws] = ACTIONS(974),
    [sym_comment] = ACTIONS(54),
  },
  [350] = {
    [sym__literal] = STATE(488),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(489),
    [sym_element_value_pair] = STATE(237),
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
    [anon_sym_RPAREN] = ACTIONS(976),
    [sym_identifier] = ACTIONS(978),
    [sym_comment] = ACTIONS(54),
  },
  [351] = {
    [sym_identifier] = ACTIONS(980),
    [sym_comment] = ACTIONS(54),
  },
  [352] = {
    [anon_sym_RPAREN] = ACTIONS(982),
    [anon_sym_COMMA] = ACTIONS(982),
    [anon_sym_LBRACE] = ACTIONS(982),
    [anon_sym_throws] = ACTIONS(982),
    [sym_comment] = ACTIONS(54),
  },
  [353] = {
    [anon_sym_RPAREN] = ACTIONS(984),
    [anon_sym_LBRACE] = ACTIONS(984),
    [anon_sym_throws] = ACTIONS(984),
    [sym_comment] = ACTIONS(54),
  },
  [354] = {
    [ts_builtin_sym_end] = ACTIONS(986),
    [sym_decimal_integer_literal] = ACTIONS(988),
    [sym_hex_integer_literal] = ACTIONS(988),
    [sym_octal_integer_literal] = ACTIONS(988),
    [sym_binary_integer_literal] = ACTIONS(988),
    [sym_decimal_floating_point_literal] = ACTIONS(988),
    [sym_hex_floating_point_literal] = ACTIONS(990),
    [anon_sym_true] = ACTIONS(988),
    [anon_sym_false] = ACTIONS(988),
    [anon_sym_SQUOTE] = ACTIONS(986),
    [sym_string_literal] = ACTIONS(986),
    [sym_null_literal] = ACTIONS(988),
    [anon_sym_LT] = ACTIONS(986),
    [anon_sym_LPAREN] = ACTIONS(986),
    [anon_sym_BANG] = ACTIONS(986),
    [anon_sym_TILDE] = ACTIONS(986),
    [anon_sym_PLUS_PLUS] = ACTIONS(986),
    [anon_sym_DASH_DASH] = ACTIONS(986),
    [anon_sym_RBRACE] = ACTIONS(986),
    [anon_sym_AT] = ACTIONS(986),
    [anon_sym_open] = ACTIONS(988),
    [anon_sym_module] = ACTIONS(988),
    [anon_sym_static] = ACTIONS(988),
    [anon_sym_package] = ACTIONS(988),
    [anon_sym_import] = ACTIONS(988),
    [anon_sym_class] = ACTIONS(988),
    [anon_sym_public] = ACTIONS(988),
    [anon_sym_protected] = ACTIONS(988),
    [anon_sym_private] = ACTIONS(988),
    [anon_sym_abstract] = ACTIONS(988),
    [anon_sym_final] = ACTIONS(988),
    [anon_sym_strictfp] = ACTIONS(988),
    [anon_sym_default] = ACTIONS(988),
    [anon_sym_synchronized] = ACTIONS(988),
    [anon_sym_native] = ACTIONS(988),
    [anon_sym_void] = ACTIONS(988),
    [anon_sym_interface] = ACTIONS(988),
    [sym_identifier] = ACTIONS(990),
    [sym_comment] = ACTIONS(54),
  },
  [355] = {
    [sym_package_or_type_name] = STATE(493),
    [anon_sym_interface] = ACTIONS(992),
    [sym_identifier] = ACTIONS(994),
    [sym_comment] = ACTIONS(54),
  },
  [356] = {
    [anon_sym_AT] = ACTIONS(100),
    [anon_sym_static] = ACTIONS(102),
    [anon_sym_class] = ACTIONS(102),
    [anon_sym_public] = ACTIONS(102),
    [anon_sym_protected] = ACTIONS(102),
    [anon_sym_private] = ACTIONS(102),
    [anon_sym_abstract] = ACTIONS(102),
    [anon_sym_final] = ACTIONS(102),
    [anon_sym_strictfp] = ACTIONS(102),
    [anon_sym_default] = ACTIONS(102),
    [anon_sym_synchronized] = ACTIONS(102),
    [anon_sym_native] = ACTIONS(102),
    [anon_sym_interface] = ACTIONS(102),
    [sym_identifier] = ACTIONS(624),
    [sym_comment] = ACTIONS(54),
  },
  [357] = {
    [sym_identifier] = ACTIONS(996),
    [sym_comment] = ACTIONS(54),
  },
  [358] = {
    [sym_identifier] = ACTIONS(998),
    [sym_comment] = ACTIONS(54),
  },
  [359] = {
    [sym_dims] = STATE(216),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(217),
    [aux_sym_dims_repeat1] = STATE(218),
    [sym__semicolon] = ACTIONS(448),
    [anon_sym_LPAREN] = ACTIONS(1000),
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(448),
    [sym_comment] = ACTIONS(54),
  },
  [360] = {
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym_static] = ACTIONS(165),
    [anon_sym_class] = ACTIONS(165),
    [anon_sym_public] = ACTIONS(165),
    [anon_sym_protected] = ACTIONS(165),
    [anon_sym_private] = ACTIONS(165),
    [anon_sym_abstract] = ACTIONS(165),
    [anon_sym_final] = ACTIONS(165),
    [anon_sym_strictfp] = ACTIONS(165),
    [anon_sym_default] = ACTIONS(165),
    [anon_sym_synchronized] = ACTIONS(165),
    [anon_sym_native] = ACTIONS(165),
    [anon_sym_interface] = ACTIONS(165),
    [sym_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(54),
  },
  [361] = {
    [anon_sym_RBRACE] = ACTIONS(1002),
    [anon_sym_AT] = ACTIONS(1002),
    [anon_sym_static] = ACTIONS(1004),
    [anon_sym_class] = ACTIONS(1004),
    [anon_sym_public] = ACTIONS(1004),
    [anon_sym_protected] = ACTIONS(1004),
    [anon_sym_private] = ACTIONS(1004),
    [anon_sym_abstract] = ACTIONS(1004),
    [anon_sym_final] = ACTIONS(1004),
    [anon_sym_strictfp] = ACTIONS(1004),
    [anon_sym_default] = ACTIONS(1004),
    [anon_sym_synchronized] = ACTIONS(1004),
    [anon_sym_native] = ACTIONS(1004),
    [anon_sym_interface] = ACTIONS(1004),
    [sym_identifier] = ACTIONS(1006),
    [sym_comment] = ACTIONS(54),
  },
  [362] = {
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
    [anon_sym_synchronized] = ACTIONS(187),
    [anon_sym_native] = ACTIONS(187),
    [anon_sym_interface] = ACTIONS(187),
    [sym_identifier] = ACTIONS(189),
    [sym_comment] = ACTIONS(54),
  },
  [363] = {
    [anon_sym_AT] = ACTIONS(191),
    [anon_sym_static] = ACTIONS(193),
    [anon_sym_class] = ACTIONS(193),
    [anon_sym_public] = ACTIONS(193),
    [anon_sym_protected] = ACTIONS(193),
    [anon_sym_private] = ACTIONS(193),
    [anon_sym_abstract] = ACTIONS(193),
    [anon_sym_final] = ACTIONS(193),
    [anon_sym_strictfp] = ACTIONS(193),
    [anon_sym_default] = ACTIONS(193),
    [anon_sym_synchronized] = ACTIONS(193),
    [anon_sym_native] = ACTIONS(193),
    [anon_sym_interface] = ACTIONS(193),
    [sym_identifier] = ACTIONS(802),
    [sym_comment] = ACTIONS(54),
  },
  [364] = {
    [anon_sym_RBRACE] = ACTIONS(199),
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
    [anon_sym_synchronized] = ACTIONS(201),
    [anon_sym_native] = ACTIONS(201),
    [anon_sym_interface] = ACTIONS(201),
    [sym_identifier] = ACTIONS(203),
    [sym_comment] = ACTIONS(54),
  },
  [365] = {
    [anon_sym_RBRACE] = ACTIONS(1008),
    [anon_sym_AT] = ACTIONS(1008),
    [anon_sym_static] = ACTIONS(1010),
    [anon_sym_class] = ACTIONS(1010),
    [anon_sym_public] = ACTIONS(1010),
    [anon_sym_protected] = ACTIONS(1010),
    [anon_sym_private] = ACTIONS(1010),
    [anon_sym_abstract] = ACTIONS(1010),
    [anon_sym_final] = ACTIONS(1010),
    [anon_sym_strictfp] = ACTIONS(1010),
    [anon_sym_default] = ACTIONS(1010),
    [anon_sym_synchronized] = ACTIONS(1010),
    [anon_sym_native] = ACTIONS(1010),
    [anon_sym_interface] = ACTIONS(1010),
    [sym_identifier] = ACTIONS(1012),
    [sym_comment] = ACTIONS(54),
  },
  [366] = {
    [sym__semicolon] = ACTIONS(1014),
    [sym_comment] = ACTIONS(54),
  },
  [367] = {
    [sym__annotation] = STATE(356),
    [sym_normal_annotation] = STATE(360),
    [sym_marker_annotation] = STATE(360),
    [sym_single_element_annotation] = STATE(360),
    [sym_modifier] = STATE(502),
    [sym_variable_declarator_list] = STATE(503),
    [sym_variable_declarator] = STATE(282),
    [sym_variable_declarator_id] = STATE(126),
    [anon_sym_AT] = ACTIONS(1016),
    [anon_sym_static] = ACTIONS(716),
    [anon_sym_class] = ACTIONS(1018),
    [anon_sym_public] = ACTIONS(716),
    [anon_sym_protected] = ACTIONS(716),
    [anon_sym_private] = ACTIONS(716),
    [anon_sym_abstract] = ACTIONS(716),
    [anon_sym_final] = ACTIONS(716),
    [anon_sym_strictfp] = ACTIONS(716),
    [anon_sym_default] = ACTIONS(716),
    [anon_sym_synchronized] = ACTIONS(716),
    [anon_sym_native] = ACTIONS(716),
    [anon_sym_interface] = ACTIONS(1020),
    [sym_identifier] = ACTIONS(1022),
    [sym_comment] = ACTIONS(54),
  },
  [368] = {
    [sym__annotation] = STATE(356),
    [sym_normal_annotation] = STATE(360),
    [sym_marker_annotation] = STATE(360),
    [sym_single_element_annotation] = STATE(360),
    [sym_class_declaration] = STATE(361),
    [sym_normal_class_declaration] = STATE(362),
    [sym_modifier] = STATE(363),
    [sym_interface_declaration] = STATE(361),
    [sym_annotation_type_declaration] = STATE(364),
    [sym_annotation_type_member_declaration] = STATE(505),
    [sym_annotation_type_element_declaration] = STATE(361),
    [sym_normal_interface_declaration] = STATE(364),
    [sym_constant_declaration] = STATE(361),
    [sym_variable_declarator_list] = STATE(366),
    [sym_variable_declarator] = STATE(282),
    [sym_variable_declarator_id] = STATE(126),
    [aux_sym_normal_class_declaration_repeat1] = STATE(367),
    [anon_sym_RBRACE] = ACTIONS(1024),
    [anon_sym_AT] = ACTIONS(714),
    [anon_sym_static] = ACTIONS(716),
    [anon_sym_class] = ACTIONS(718),
    [anon_sym_public] = ACTIONS(716),
    [anon_sym_protected] = ACTIONS(716),
    [anon_sym_private] = ACTIONS(716),
    [anon_sym_abstract] = ACTIONS(716),
    [anon_sym_final] = ACTIONS(716),
    [anon_sym_strictfp] = ACTIONS(716),
    [anon_sym_default] = ACTIONS(716),
    [anon_sym_synchronized] = ACTIONS(716),
    [anon_sym_native] = ACTIONS(716),
    [anon_sym_interface] = ACTIONS(720),
    [sym_identifier] = ACTIONS(722),
    [sym_comment] = ACTIONS(54),
  },
  [369] = {
    [sym__semicolon] = ACTIONS(1026),
    [anon_sym_LT] = ACTIONS(1026),
    [anon_sym_RPAREN] = ACTIONS(1026),
    [anon_sym_COMMA] = ACTIONS(1026),
    [anon_sym_RBRACE] = ACTIONS(1026),
    [anon_sym_LBRACK] = ACTIONS(1026),
    [anon_sym_boolean] = ACTIONS(1026),
    [anon_sym_byte] = ACTIONS(1026),
    [anon_sym_short] = ACTIONS(1026),
    [anon_sym_int] = ACTIONS(1028),
    [anon_sym_long] = ACTIONS(1026),
    [anon_sym_char] = ACTIONS(1026),
    [anon_sym_float] = ACTIONS(1026),
    [anon_sym_double] = ACTIONS(1026),
    [anon_sym_AT] = ACTIONS(1026),
    [anon_sym_open] = ACTIONS(1026),
    [anon_sym_module] = ACTIONS(1026),
    [anon_sym_static] = ACTIONS(1026),
    [anon_sym_package] = ACTIONS(1026),
    [anon_sym_class] = ACTIONS(1026),
    [anon_sym_public] = ACTIONS(1026),
    [anon_sym_protected] = ACTIONS(1026),
    [anon_sym_private] = ACTIONS(1026),
    [anon_sym_abstract] = ACTIONS(1026),
    [anon_sym_final] = ACTIONS(1026),
    [anon_sym_strictfp] = ACTIONS(1026),
    [anon_sym_default] = ACTIONS(1026),
    [anon_sym_synchronized] = ACTIONS(1026),
    [anon_sym_native] = ACTIONS(1026),
    [anon_sym_void] = ACTIONS(1026),
    [anon_sym_interface] = ACTIONS(1026),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1026),
    [sym_comment] = ACTIONS(54),
  },
  [370] = {
    [sym__literal] = STATE(508),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(509),
    [sym__annotation] = STATE(508),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_element_value] = STATE(510),
    [sym_element_value_array_initializer] = STATE(508),
    [sym_conditional_expression] = STATE(508),
    [sym_conditional_or_expression] = STATE(511),
    [sym_conditional_and_expression] = STATE(512),
    [sym_inclusive_or_expression] = STATE(513),
    [sym_exclusive_or_expression] = STATE(514),
    [sym_and_expression] = STATE(515),
    [sym_relational_expression] = STATE(516),
    [sym_equality_expression] = STATE(517),
    [sym_shift_expression] = STATE(518),
    [sym_additive_expression] = STATE(519),
    [sym_multiplicative_expression] = STATE(520),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1030),
    [anon_sym_false] = ACTIONS(1030),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(1032),
    [anon_sym_TILDE] = ACTIONS(1032),
    [anon_sym_LBRACE] = ACTIONS(1034),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [371] = {
    [sym__semicolon] = ACTIONS(1036),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_RPAREN] = ACTIONS(1036),
    [anon_sym_COMMA] = ACTIONS(1036),
    [anon_sym_RBRACE] = ACTIONS(1036),
    [anon_sym_LBRACK] = ACTIONS(1036),
    [anon_sym_boolean] = ACTIONS(1036),
    [anon_sym_byte] = ACTIONS(1036),
    [anon_sym_short] = ACTIONS(1036),
    [anon_sym_int] = ACTIONS(1038),
    [anon_sym_long] = ACTIONS(1036),
    [anon_sym_char] = ACTIONS(1036),
    [anon_sym_float] = ACTIONS(1036),
    [anon_sym_double] = ACTIONS(1036),
    [anon_sym_AT] = ACTIONS(1036),
    [anon_sym_open] = ACTIONS(1036),
    [anon_sym_module] = ACTIONS(1036),
    [anon_sym_static] = ACTIONS(1036),
    [anon_sym_package] = ACTIONS(1036),
    [anon_sym_class] = ACTIONS(1036),
    [anon_sym_public] = ACTIONS(1036),
    [anon_sym_protected] = ACTIONS(1036),
    [anon_sym_private] = ACTIONS(1036),
    [anon_sym_abstract] = ACTIONS(1036),
    [anon_sym_final] = ACTIONS(1036),
    [anon_sym_strictfp] = ACTIONS(1036),
    [anon_sym_default] = ACTIONS(1036),
    [anon_sym_synchronized] = ACTIONS(1036),
    [anon_sym_native] = ACTIONS(1036),
    [anon_sym_void] = ACTIONS(1036),
    [anon_sym_interface] = ACTIONS(1036),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1036),
    [sym_comment] = ACTIONS(54),
  },
  [372] = {
    [sym_element_value_pair] = STATE(522),
    [sym_identifier] = ACTIONS(1040),
    [sym_comment] = ACTIONS(54),
  },
  [373] = {
    [anon_sym_RPAREN] = ACTIONS(1042),
    [anon_sym_COMMA] = ACTIONS(1044),
    [sym_comment] = ACTIONS(54),
  },
  [374] = {
    [ts_builtin_sym_end] = ACTIONS(1046),
    [sym_decimal_integer_literal] = ACTIONS(1048),
    [sym_hex_integer_literal] = ACTIONS(1048),
    [sym_octal_integer_literal] = ACTIONS(1048),
    [sym_binary_integer_literal] = ACTIONS(1048),
    [sym_decimal_floating_point_literal] = ACTIONS(1048),
    [sym_hex_floating_point_literal] = ACTIONS(1050),
    [anon_sym_true] = ACTIONS(1048),
    [anon_sym_false] = ACTIONS(1048),
    [anon_sym_SQUOTE] = ACTIONS(1046),
    [sym_string_literal] = ACTIONS(1046),
    [sym_null_literal] = ACTIONS(1048),
    [anon_sym_LT] = ACTIONS(1046),
    [anon_sym_LPAREN] = ACTIONS(1046),
    [anon_sym_BANG] = ACTIONS(1046),
    [anon_sym_TILDE] = ACTIONS(1046),
    [anon_sym_PLUS_PLUS] = ACTIONS(1046),
    [anon_sym_DASH_DASH] = ACTIONS(1046),
    [anon_sym_RBRACE] = ACTIONS(1046),
    [anon_sym_AT] = ACTIONS(1046),
    [anon_sym_open] = ACTIONS(1048),
    [anon_sym_module] = ACTIONS(1048),
    [anon_sym_static] = ACTIONS(1048),
    [anon_sym_package] = ACTIONS(1048),
    [anon_sym_import] = ACTIONS(1048),
    [anon_sym_class] = ACTIONS(1048),
    [anon_sym_public] = ACTIONS(1048),
    [anon_sym_protected] = ACTIONS(1048),
    [anon_sym_private] = ACTIONS(1048),
    [anon_sym_abstract] = ACTIONS(1048),
    [anon_sym_final] = ACTIONS(1048),
    [anon_sym_strictfp] = ACTIONS(1048),
    [anon_sym_default] = ACTIONS(1048),
    [anon_sym_synchronized] = ACTIONS(1048),
    [anon_sym_native] = ACTIONS(1048),
    [anon_sym_void] = ACTIONS(1048),
    [anon_sym_interface] = ACTIONS(1048),
    [sym_identifier] = ACTIONS(1050),
    [sym_comment] = ACTIONS(54),
  },
  [375] = {
    [sym_module_directive] = STATE(386),
    [anon_sym_RBRACE] = ACTIONS(1052),
    [anon_sym_requires] = ACTIONS(500),
    [anon_sym_exports] = ACTIONS(502),
    [anon_sym_opens] = ACTIONS(502),
    [anon_sym_uses] = ACTIONS(504),
    [anon_sym_provides] = ACTIONS(506),
    [sym_comment] = ACTIONS(54),
  },
  [376] = {
    [sym__semicolon] = ACTIONS(1054),
    [anon_sym_LBRACE] = ACTIONS(1054),
    [anon_sym_DOT] = ACTIONS(1054),
    [sym_comment] = ACTIONS(54),
  },
  [377] = {
    [anon_sym_transitive] = ACTIONS(1056),
    [anon_sym_static] = ACTIONS(1056),
    [sym_identifier] = ACTIONS(1058),
    [sym_comment] = ACTIONS(54),
  },
  [378] = {
    [sym__semicolon] = ACTIONS(1060),
    [anon_sym_COMMA] = ACTIONS(1060),
    [anon_sym_DOT] = ACTIONS(1060),
    [sym_comment] = ACTIONS(54),
  },
  [379] = {
    [anon_sym_transitive] = ACTIONS(1062),
    [anon_sym_static] = ACTIONS(1062),
    [sym_identifier] = ACTIONS(1064),
    [sym_comment] = ACTIONS(54),
  },
  [380] = {
    [sym__semicolon] = ACTIONS(1066),
    [anon_sym_DOT] = ACTIONS(1068),
    [sym_comment] = ACTIONS(54),
  },
  [381] = {
    [sym_requires_modifier] = STATE(527),
    [sym_module_name] = STATE(528),
    [anon_sym_transitive] = ACTIONS(760),
    [anon_sym_static] = ACTIONS(760),
    [sym_identifier] = ACTIONS(762),
    [sym_comment] = ACTIONS(54),
  },
  [382] = {
    [sym__semicolon] = ACTIONS(314),
    [anon_sym_COMMA] = ACTIONS(314),
    [anon_sym_DOT] = ACTIONS(314),
    [anon_sym_to] = ACTIONS(316),
    [sym_identifier] = ACTIONS(440),
    [sym_comment] = ACTIONS(54),
  },
  [383] = {
    [sym_module_name] = STATE(532),
    [aux_sym_module_directive_repeat2] = STATE(533),
    [sym__semicolon] = ACTIONS(1066),
    [anon_sym_COMMA] = ACTIONS(1070),
    [anon_sym_DOT] = ACTIONS(1072),
    [anon_sym_to] = ACTIONS(1074),
    [sym_identifier] = ACTIONS(762),
    [sym_comment] = ACTIONS(54),
  },
  [384] = {
    [sym__semicolon] = ACTIONS(1066),
    [anon_sym_DOT] = ACTIONS(1076),
    [sym_comment] = ACTIONS(54),
  },
  [385] = {
    [anon_sym_DOT] = ACTIONS(1076),
    [anon_sym_with] = ACTIONS(1078),
    [sym_comment] = ACTIONS(54),
  },
  [386] = {
    [anon_sym_RBRACE] = ACTIONS(1080),
    [anon_sym_requires] = ACTIONS(1080),
    [anon_sym_exports] = ACTIONS(1080),
    [anon_sym_opens] = ACTIONS(1080),
    [anon_sym_uses] = ACTIONS(1080),
    [anon_sym_provides] = ACTIONS(1080),
    [sym_comment] = ACTIONS(54),
  },
  [387] = {
    [sym__semicolon] = ACTIONS(1082),
    [sym_comment] = ACTIONS(54),
  },
  [388] = {
    [sym__semicolon] = ACTIONS(1084),
    [anon_sym_DOT] = ACTIONS(744),
    [sym_comment] = ACTIONS(54),
  },
  [389] = {
    [ts_builtin_sym_end] = ACTIONS(1086),
    [sym_decimal_integer_literal] = ACTIONS(1088),
    [sym_hex_integer_literal] = ACTIONS(1088),
    [sym_octal_integer_literal] = ACTIONS(1088),
    [sym_binary_integer_literal] = ACTIONS(1088),
    [sym_decimal_floating_point_literal] = ACTIONS(1088),
    [sym_hex_floating_point_literal] = ACTIONS(1090),
    [anon_sym_true] = ACTIONS(1088),
    [anon_sym_false] = ACTIONS(1088),
    [anon_sym_SQUOTE] = ACTIONS(1086),
    [sym_string_literal] = ACTIONS(1086),
    [sym_null_literal] = ACTIONS(1088),
    [anon_sym_LT] = ACTIONS(1086),
    [anon_sym_LPAREN] = ACTIONS(1086),
    [anon_sym_BANG] = ACTIONS(1086),
    [anon_sym_TILDE] = ACTIONS(1086),
    [anon_sym_PLUS_PLUS] = ACTIONS(1086),
    [anon_sym_DASH_DASH] = ACTIONS(1086),
    [anon_sym_RBRACE] = ACTIONS(1086),
    [anon_sym_AT] = ACTIONS(1086),
    [anon_sym_open] = ACTIONS(1088),
    [anon_sym_module] = ACTIONS(1088),
    [anon_sym_static] = ACTIONS(1088),
    [anon_sym_package] = ACTIONS(1088),
    [anon_sym_import] = ACTIONS(1088),
    [anon_sym_class] = ACTIONS(1088),
    [anon_sym_public] = ACTIONS(1088),
    [anon_sym_protected] = ACTIONS(1088),
    [anon_sym_private] = ACTIONS(1088),
    [anon_sym_abstract] = ACTIONS(1088),
    [anon_sym_final] = ACTIONS(1088),
    [anon_sym_strictfp] = ACTIONS(1088),
    [anon_sym_default] = ACTIONS(1088),
    [anon_sym_synchronized] = ACTIONS(1088),
    [anon_sym_native] = ACTIONS(1088),
    [anon_sym_void] = ACTIONS(1088),
    [anon_sym_interface] = ACTIONS(1088),
    [sym_identifier] = ACTIONS(1090),
    [sym_comment] = ACTIONS(54),
  },
  [390] = {
    [anon_sym_GT] = ACTIONS(1092),
    [sym_comment] = ACTIONS(54),
  },
  [391] = {
    [sym__semicolon] = ACTIONS(616),
    [anon_sym_LT] = ACTIONS(616),
    [anon_sym_LBRACE] = ACTIONS(616),
    [anon_sym_RBRACE] = ACTIONS(616),
    [anon_sym_AT] = ACTIONS(616),
    [anon_sym_static] = ACTIONS(618),
    [anon_sym_class] = ACTIONS(618),
    [anon_sym_public] = ACTIONS(618),
    [anon_sym_protected] = ACTIONS(618),
    [anon_sym_private] = ACTIONS(618),
    [anon_sym_abstract] = ACTIONS(618),
    [anon_sym_final] = ACTIONS(618),
    [anon_sym_strictfp] = ACTIONS(618),
    [anon_sym_default] = ACTIONS(618),
    [anon_sym_synchronized] = ACTIONS(618),
    [anon_sym_native] = ACTIONS(618),
    [anon_sym_void] = ACTIONS(618),
    [anon_sym_interface] = ACTIONS(618),
    [sym_identifier] = ACTIONS(620),
    [sym_comment] = ACTIONS(54),
  },
  [392] = {
    [anon_sym_RBRACE] = ACTIONS(1094),
    [sym_comment] = ACTIONS(54),
  },
  [393] = {
    [sym_identifier] = ACTIONS(1096),
    [sym_comment] = ACTIONS(54),
  },
  [394] = {
    [anon_sym_LT] = ACTIONS(314),
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_DOT] = ACTIONS(314),
    [anon_sym_AT] = ACTIONS(314),
    [anon_sym_static] = ACTIONS(316),
    [anon_sym_class] = ACTIONS(316),
    [anon_sym_public] = ACTIONS(316),
    [anon_sym_protected] = ACTIONS(316),
    [anon_sym_private] = ACTIONS(316),
    [anon_sym_abstract] = ACTIONS(316),
    [anon_sym_final] = ACTIONS(316),
    [anon_sym_strictfp] = ACTIONS(316),
    [anon_sym_default] = ACTIONS(316),
    [anon_sym_synchronized] = ACTIONS(316),
    [anon_sym_native] = ACTIONS(316),
    [anon_sym_void] = ACTIONS(316),
    [anon_sym_interface] = ACTIONS(316),
    [sym_identifier] = ACTIONS(440),
    [sym_comment] = ACTIONS(54),
  },
  [395] = {
    [anon_sym_LT] = ACTIONS(318),
    [anon_sym_LPAREN] = ACTIONS(1098),
    [anon_sym_DOT] = ACTIONS(1100),
    [anon_sym_AT] = ACTIONS(318),
    [anon_sym_static] = ACTIONS(324),
    [anon_sym_class] = ACTIONS(324),
    [anon_sym_public] = ACTIONS(324),
    [anon_sym_protected] = ACTIONS(324),
    [anon_sym_private] = ACTIONS(324),
    [anon_sym_abstract] = ACTIONS(324),
    [anon_sym_final] = ACTIONS(324),
    [anon_sym_strictfp] = ACTIONS(324),
    [anon_sym_default] = ACTIONS(324),
    [anon_sym_synchronized] = ACTIONS(324),
    [anon_sym_native] = ACTIONS(324),
    [anon_sym_void] = ACTIONS(324),
    [anon_sym_interface] = ACTIONS(324),
    [sym_identifier] = ACTIONS(446),
    [sym_comment] = ACTIONS(54),
  },
  [396] = {
    [sym_type_parameters] = STATE(543),
    [sym_superclass] = STATE(544),
    [sym_super_interfaces] = STATE(545),
    [sym_class_body] = STATE(546),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [anon_sym_extends] = ACTIONS(342),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [397] = {
    [sym_type_parameters] = STATE(548),
    [sym_extends_interfaces] = STATE(549),
    [sym_interface_body] = STATE(550),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(1104),
    [anon_sym_extends] = ACTIONS(348),
    [sym_comment] = ACTIONS(54),
  },
  [398] = {
    [anon_sym_LBRACE] = ACTIONS(1106),
    [anon_sym_throws] = ACTIONS(1106),
    [sym_comment] = ACTIONS(54),
  },
  [399] = {
    [sym_primitive_type] = STATE(61),
    [sym_integral_type] = STATE(53),
    [sym_floating_point_type] = STATE(53),
    [sym__annotation] = STATE(62),
    [sym_normal_annotation] = STATE(63),
    [sym_marker_annotation] = STATE(63),
    [sym_single_element_annotation] = STATE(63),
    [sym_modifier] = STATE(34),
    [sym__formal_parameter_list] = STATE(551),
    [sym_formal_parameter] = STATE(64),
    [sym_receiver_parameter] = STATE(65),
    [sym_last_formal_parameter] = STATE(66),
    [aux_sym_class_or_interface_type_repeat1] = STATE(67),
    [aux_sym_normal_class_declaration_repeat1] = STATE(68),
    [anon_sym_boolean] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(78),
    [anon_sym_short] = ACTIONS(78),
    [anon_sym_int] = ACTIONS(78),
    [anon_sym_long] = ACTIONS(78),
    [anon_sym_char] = ACTIONS(78),
    [anon_sym_float] = ACTIONS(80),
    [anon_sym_double] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(82),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(40),
    [anon_sym_protected] = ACTIONS(40),
    [anon_sym_private] = ACTIONS(40),
    [anon_sym_abstract] = ACTIONS(40),
    [anon_sym_final] = ACTIONS(40),
    [anon_sym_strictfp] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_synchronized] = ACTIONS(40),
    [anon_sym_native] = ACTIONS(40),
    [anon_sym_this] = ACTIONS(84),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(86),
    [sym_identifier] = ACTIONS(88),
    [sym_comment] = ACTIONS(54),
  },
  [400] = {
    [sym__literal] = STATE(561),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_statement] = STATE(185),
    [sym_if_then_statement] = STATE(186),
    [sym_type_arguments] = STATE(562),
    [sym_class_or_interface_type] = STATE(563),
    [sym_type_variable] = STATE(564),
    [sym_primitive_type] = STATE(564),
    [sym_integral_type] = STATE(554),
    [sym_floating_point_type] = STATE(554),
    [sym__annotation] = STATE(565),
    [sym_normal_annotation] = STATE(566),
    [sym_marker_annotation] = STATE(566),
    [sym_single_element_annotation] = STATE(566),
    [sym_package_or_type_name] = STATE(567),
    [sym_class_declaration] = STATE(185),
    [sym_normal_class_declaration] = STATE(188),
    [sym_modifier] = STATE(189),
    [sym_explicit_constructor_invocation] = STATE(568),
    [sym_ambiguous_name] = STATE(569),
    [sym_primary] = STATE(570),
    [sym_array_creation_expression] = STATE(571),
    [sym_primary_no_new_array] = STATE(572),
    [sym_class_literal] = STATE(561),
    [sym_class_instance_creation_expression] = STATE(561),
    [sym_unqualified_class_instance_creation_expression] = STATE(573),
    [sym_field_access] = STATE(561),
    [sym_array_access] = STATE(561),
    [sym_method_invocation] = STATE(561),
    [sym_method_reference] = STATE(561),
    [sym_array_type] = STATE(574),
    [sym_block_statements] = STATE(575),
    [sym_block_statement] = STATE(191),
    [sym_local_variable_declaration_statement] = STATE(185),
    [sym_local_variable_declaration] = STATE(192),
    [sym_method_name] = STATE(576),
    [aux_sym_class_or_interface_type_repeat1] = STATE(577),
    [aux_sym_normal_class_declaration_repeat1] = STATE(193),
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
    [anon_sym_LT] = ACTIONS(660),
    [anon_sym_LPAREN] = ACTIONS(1108),
    [anon_sym_if] = ACTIONS(1110),
    [anon_sym_RBRACE] = ACTIONS(1112),
    [anon_sym_boolean] = ACTIONS(1114),
    [anon_sym_byte] = ACTIONS(78),
    [anon_sym_short] = ACTIONS(78),
    [anon_sym_int] = ACTIONS(78),
    [anon_sym_long] = ACTIONS(78),
    [anon_sym_char] = ACTIONS(78),
    [anon_sym_float] = ACTIONS(80),
    [anon_sym_double] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(1116),
    [anon_sym_static] = ACTIONS(1118),
    [anon_sym_class] = ACTIONS(1120),
    [anon_sym_public] = ACTIONS(1118),
    [anon_sym_protected] = ACTIONS(1118),
    [anon_sym_private] = ACTIONS(1118),
    [anon_sym_abstract] = ACTIONS(1118),
    [anon_sym_final] = ACTIONS(1118),
    [anon_sym_strictfp] = ACTIONS(1118),
    [anon_sym_default] = ACTIONS(1118),
    [anon_sym_synchronized] = ACTIONS(1118),
    [anon_sym_native] = ACTIONS(1118),
    [anon_sym_this] = ACTIONS(1122),
    [anon_sym_super] = ACTIONS(1124),
    [anon_sym_new] = ACTIONS(1126),
    [anon_sym_void] = ACTIONS(1128),
    [sym_identifier] = ACTIONS(1130),
    [sym_comment] = ACTIONS(54),
  },
  [401] = {
    [sym__semicolon] = ACTIONS(1132),
    [anon_sym_LT] = ACTIONS(1132),
    [anon_sym_LBRACE] = ACTIONS(1132),
    [anon_sym_RBRACE] = ACTIONS(1132),
    [anon_sym_AT] = ACTIONS(1132),
    [anon_sym_static] = ACTIONS(1134),
    [anon_sym_class] = ACTIONS(1134),
    [anon_sym_public] = ACTIONS(1134),
    [anon_sym_protected] = ACTIONS(1134),
    [anon_sym_private] = ACTIONS(1134),
    [anon_sym_abstract] = ACTIONS(1134),
    [anon_sym_final] = ACTIONS(1134),
    [anon_sym_strictfp] = ACTIONS(1134),
    [anon_sym_default] = ACTIONS(1134),
    [anon_sym_synchronized] = ACTIONS(1134),
    [anon_sym_native] = ACTIONS(1134),
    [anon_sym_void] = ACTIONS(1134),
    [anon_sym_interface] = ACTIONS(1134),
    [sym_identifier] = ACTIONS(1136),
    [sym_comment] = ACTIONS(54),
  },
  [402] = {
    [sym_constructor_body] = STATE(578),
    [anon_sym_LBRACE] = ACTIONS(818),
    [sym_comment] = ACTIONS(54),
  },
  [403] = {
    [sym__semicolon] = ACTIONS(364),
    [anon_sym_LT] = ACTIONS(364),
    [anon_sym_LBRACE] = ACTIONS(364),
    [anon_sym_RBRACE] = ACTIONS(364),
    [anon_sym_AT] = ACTIONS(364),
    [anon_sym_static] = ACTIONS(366),
    [anon_sym_class] = ACTIONS(366),
    [anon_sym_public] = ACTIONS(366),
    [anon_sym_protected] = ACTIONS(366),
    [anon_sym_private] = ACTIONS(366),
    [anon_sym_abstract] = ACTIONS(366),
    [anon_sym_final] = ACTIONS(366),
    [anon_sym_strictfp] = ACTIONS(366),
    [anon_sym_default] = ACTIONS(366),
    [anon_sym_synchronized] = ACTIONS(366),
    [anon_sym_native] = ACTIONS(366),
    [anon_sym_void] = ACTIONS(366),
    [anon_sym_interface] = ACTIONS(366),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(54),
  },
  [404] = {
    [sym__semicolon] = ACTIONS(380),
    [anon_sym_LT] = ACTIONS(380),
    [anon_sym_LBRACE] = ACTIONS(380),
    [anon_sym_RBRACE] = ACTIONS(380),
    [anon_sym_AT] = ACTIONS(380),
    [anon_sym_static] = ACTIONS(382),
    [anon_sym_class] = ACTIONS(382),
    [anon_sym_public] = ACTIONS(382),
    [anon_sym_protected] = ACTIONS(382),
    [anon_sym_private] = ACTIONS(382),
    [anon_sym_abstract] = ACTIONS(382),
    [anon_sym_final] = ACTIONS(382),
    [anon_sym_strictfp] = ACTIONS(382),
    [anon_sym_default] = ACTIONS(382),
    [anon_sym_synchronized] = ACTIONS(382),
    [anon_sym_native] = ACTIONS(382),
    [anon_sym_void] = ACTIONS(382),
    [anon_sym_interface] = ACTIONS(382),
    [sym_identifier] = ACTIONS(384),
    [sym_comment] = ACTIONS(54),
  },
  [405] = {
    [sym_package_or_type_name] = STATE(395),
    [anon_sym_interface] = ACTIONS(1138),
    [sym_identifier] = ACTIONS(796),
    [sym_comment] = ACTIONS(54),
  },
  [406] = {
    [sym_identifier] = ACTIONS(1140),
    [sym_comment] = ACTIONS(54),
  },
  [407] = {
    [sym_identifier] = ACTIONS(1142),
    [sym_comment] = ACTIONS(54),
  },
  [408] = {
    [anon_sym_LT] = ACTIONS(410),
    [anon_sym_AT] = ACTIONS(410),
    [anon_sym_static] = ACTIONS(412),
    [anon_sym_class] = ACTIONS(412),
    [anon_sym_public] = ACTIONS(412),
    [anon_sym_protected] = ACTIONS(412),
    [anon_sym_private] = ACTIONS(412),
    [anon_sym_abstract] = ACTIONS(412),
    [anon_sym_final] = ACTIONS(412),
    [anon_sym_strictfp] = ACTIONS(412),
    [anon_sym_default] = ACTIONS(412),
    [anon_sym_synchronized] = ACTIONS(412),
    [anon_sym_native] = ACTIONS(412),
    [anon_sym_void] = ACTIONS(412),
    [anon_sym_interface] = ACTIONS(412),
    [sym_identifier] = ACTIONS(1144),
    [sym_comment] = ACTIONS(54),
  },
  [409] = {
    [sym_constructor_body] = STATE(578),
    [sym_throws] = STATE(582),
    [anon_sym_LBRACE] = ACTIONS(818),
    [anon_sym_throws] = ACTIONS(390),
    [sym_comment] = ACTIONS(54),
  },
  [410] = {
    [sym_method_body] = STATE(583),
    [sym_block] = STATE(403),
    [sym__semicolon] = ACTIONS(820),
    [anon_sym_LBRACE] = ACTIONS(530),
    [sym_comment] = ACTIONS(54),
  },
  [411] = {
    [ts_builtin_sym_end] = ACTIONS(1146),
    [sym_decimal_integer_literal] = ACTIONS(1148),
    [sym_hex_integer_literal] = ACTIONS(1148),
    [sym_octal_integer_literal] = ACTIONS(1148),
    [sym_binary_integer_literal] = ACTIONS(1148),
    [sym_decimal_floating_point_literal] = ACTIONS(1148),
    [sym_hex_floating_point_literal] = ACTIONS(1150),
    [anon_sym_true] = ACTIONS(1148),
    [anon_sym_false] = ACTIONS(1148),
    [anon_sym_SQUOTE] = ACTIONS(1146),
    [sym_string_literal] = ACTIONS(1146),
    [sym_null_literal] = ACTIONS(1148),
    [anon_sym_LT] = ACTIONS(1146),
    [anon_sym_LPAREN] = ACTIONS(1146),
    [anon_sym_BANG] = ACTIONS(1146),
    [anon_sym_TILDE] = ACTIONS(1146),
    [anon_sym_PLUS_PLUS] = ACTIONS(1146),
    [anon_sym_DASH_DASH] = ACTIONS(1146),
    [anon_sym_RBRACE] = ACTIONS(1146),
    [anon_sym_AT] = ACTIONS(1146),
    [anon_sym_open] = ACTIONS(1148),
    [anon_sym_module] = ACTIONS(1148),
    [anon_sym_static] = ACTIONS(1148),
    [anon_sym_package] = ACTIONS(1148),
    [anon_sym_import] = ACTIONS(1148),
    [anon_sym_class] = ACTIONS(1148),
    [anon_sym_public] = ACTIONS(1148),
    [anon_sym_protected] = ACTIONS(1148),
    [anon_sym_private] = ACTIONS(1148),
    [anon_sym_abstract] = ACTIONS(1148),
    [anon_sym_final] = ACTIONS(1148),
    [anon_sym_strictfp] = ACTIONS(1148),
    [anon_sym_default] = ACTIONS(1148),
    [anon_sym_synchronized] = ACTIONS(1148),
    [anon_sym_native] = ACTIONS(1148),
    [anon_sym_void] = ACTIONS(1148),
    [anon_sym_interface] = ACTIONS(1148),
    [sym_identifier] = ACTIONS(1150),
    [sym_comment] = ACTIONS(54),
  },
  [412] = {
    [sym__semicolon] = ACTIONS(1152),
    [anon_sym_LT] = ACTIONS(1152),
    [anon_sym_LBRACE] = ACTIONS(1152),
    [anon_sym_RBRACE] = ACTIONS(1152),
    [anon_sym_AT] = ACTIONS(1152),
    [anon_sym_static] = ACTIONS(1154),
    [anon_sym_class] = ACTIONS(1154),
    [anon_sym_public] = ACTIONS(1154),
    [anon_sym_protected] = ACTIONS(1154),
    [anon_sym_private] = ACTIONS(1154),
    [anon_sym_abstract] = ACTIONS(1154),
    [anon_sym_final] = ACTIONS(1154),
    [anon_sym_strictfp] = ACTIONS(1154),
    [anon_sym_default] = ACTIONS(1154),
    [anon_sym_synchronized] = ACTIONS(1154),
    [anon_sym_native] = ACTIONS(1154),
    [anon_sym_void] = ACTIONS(1154),
    [anon_sym_interface] = ACTIONS(1154),
    [sym_identifier] = ACTIONS(1156),
    [sym_comment] = ACTIONS(54),
  },
  [413] = {
    [sym_class_or_interface_type] = STATE(584),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(207),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(54),
  },
  [414] = {
    [anon_sym_COMMA] = ACTIONS(1158),
    [anon_sym_LBRACE] = ACTIONS(1160),
    [sym_comment] = ACTIONS(54),
  },
  [415] = {
    [sym_class_body] = STATE(586),
    [anon_sym_LBRACE] = ACTIONS(340),
    [sym_comment] = ACTIONS(54),
  },
  [416] = {
    [ts_builtin_sym_end] = ACTIONS(1162),
    [sym_decimal_integer_literal] = ACTIONS(1164),
    [sym_hex_integer_literal] = ACTIONS(1164),
    [sym_octal_integer_literal] = ACTIONS(1164),
    [sym_binary_integer_literal] = ACTIONS(1164),
    [sym_decimal_floating_point_literal] = ACTIONS(1164),
    [sym_hex_floating_point_literal] = ACTIONS(1166),
    [anon_sym_true] = ACTIONS(1164),
    [anon_sym_false] = ACTIONS(1164),
    [anon_sym_SQUOTE] = ACTIONS(1162),
    [sym_string_literal] = ACTIONS(1162),
    [sym_null_literal] = ACTIONS(1164),
    [anon_sym_LT] = ACTIONS(1162),
    [anon_sym_LPAREN] = ACTIONS(1162),
    [anon_sym_BANG] = ACTIONS(1162),
    [anon_sym_TILDE] = ACTIONS(1162),
    [anon_sym_PLUS_PLUS] = ACTIONS(1162),
    [anon_sym_DASH_DASH] = ACTIONS(1162),
    [anon_sym_RBRACE] = ACTIONS(1162),
    [anon_sym_AT] = ACTIONS(1162),
    [anon_sym_open] = ACTIONS(1164),
    [anon_sym_module] = ACTIONS(1164),
    [anon_sym_static] = ACTIONS(1164),
    [anon_sym_package] = ACTIONS(1164),
    [anon_sym_import] = ACTIONS(1164),
    [anon_sym_class] = ACTIONS(1164),
    [anon_sym_public] = ACTIONS(1164),
    [anon_sym_protected] = ACTIONS(1164),
    [anon_sym_private] = ACTIONS(1164),
    [anon_sym_abstract] = ACTIONS(1164),
    [anon_sym_final] = ACTIONS(1164),
    [anon_sym_strictfp] = ACTIONS(1164),
    [anon_sym_default] = ACTIONS(1164),
    [anon_sym_synchronized] = ACTIONS(1164),
    [anon_sym_native] = ACTIONS(1164),
    [anon_sym_void] = ACTIONS(1164),
    [anon_sym_interface] = ACTIONS(1164),
    [sym_identifier] = ACTIONS(1166),
    [sym_comment] = ACTIONS(54),
  },
  [417] = {
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
    [anon_sym_synchronized] = ACTIONS(1170),
    [anon_sym_native] = ACTIONS(1170),
    [anon_sym_void] = ACTIONS(1170),
    [anon_sym_interface] = ACTIONS(1170),
    [sym_identifier] = ACTIONS(1172),
    [sym_comment] = ACTIONS(54),
  },
  [418] = {
    [sym_variable_declarator] = STATE(587),
    [sym_variable_declarator_id] = STATE(126),
    [sym_identifier] = ACTIONS(269),
    [sym_comment] = ACTIONS(54),
  },
  [419] = {
    [sym__semicolon] = ACTIONS(1174),
    [anon_sym_COMMA] = ACTIONS(1176),
    [sym_comment] = ACTIONS(54),
  },
  [420] = {
    [sym__semicolon] = ACTIONS(1178),
    [sym_comment] = ACTIONS(54),
  },
  [421] = {
    [ts_builtin_sym_end] = ACTIONS(1180),
    [sym_decimal_integer_literal] = ACTIONS(1182),
    [sym_hex_integer_literal] = ACTIONS(1182),
    [sym_octal_integer_literal] = ACTIONS(1182),
    [sym_binary_integer_literal] = ACTIONS(1182),
    [sym_decimal_floating_point_literal] = ACTIONS(1182),
    [sym_hex_floating_point_literal] = ACTIONS(1184),
    [anon_sym_true] = ACTIONS(1182),
    [anon_sym_false] = ACTIONS(1182),
    [anon_sym_SQUOTE] = ACTIONS(1180),
    [sym_string_literal] = ACTIONS(1180),
    [sym_null_literal] = ACTIONS(1182),
    [anon_sym_LT] = ACTIONS(1180),
    [anon_sym_LPAREN] = ACTIONS(1180),
    [anon_sym_BANG] = ACTIONS(1180),
    [anon_sym_TILDE] = ACTIONS(1180),
    [anon_sym_PLUS_PLUS] = ACTIONS(1180),
    [anon_sym_DASH_DASH] = ACTIONS(1180),
    [anon_sym_RBRACE] = ACTIONS(1180),
    [anon_sym_AT] = ACTIONS(1180),
    [anon_sym_open] = ACTIONS(1182),
    [anon_sym_module] = ACTIONS(1182),
    [anon_sym_static] = ACTIONS(1182),
    [anon_sym_package] = ACTIONS(1182),
    [anon_sym_import] = ACTIONS(1182),
    [anon_sym_class] = ACTIONS(1182),
    [anon_sym_public] = ACTIONS(1182),
    [anon_sym_protected] = ACTIONS(1182),
    [anon_sym_private] = ACTIONS(1182),
    [anon_sym_abstract] = ACTIONS(1182),
    [anon_sym_final] = ACTIONS(1182),
    [anon_sym_strictfp] = ACTIONS(1182),
    [anon_sym_default] = ACTIONS(1182),
    [anon_sym_synchronized] = ACTIONS(1182),
    [anon_sym_native] = ACTIONS(1182),
    [anon_sym_void] = ACTIONS(1182),
    [anon_sym_interface] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(1184),
    [sym_comment] = ACTIONS(54),
  },
  [422] = {
    [sym__semicolon] = ACTIONS(1186),
    [anon_sym_LT] = ACTIONS(1186),
    [anon_sym_RBRACE] = ACTIONS(1186),
    [anon_sym_AT] = ACTIONS(1186),
    [anon_sym_static] = ACTIONS(1188),
    [anon_sym_class] = ACTIONS(1188),
    [anon_sym_public] = ACTIONS(1188),
    [anon_sym_protected] = ACTIONS(1188),
    [anon_sym_private] = ACTIONS(1188),
    [anon_sym_abstract] = ACTIONS(1188),
    [anon_sym_final] = ACTIONS(1188),
    [anon_sym_strictfp] = ACTIONS(1188),
    [anon_sym_default] = ACTIONS(1188),
    [anon_sym_synchronized] = ACTIONS(1188),
    [anon_sym_native] = ACTIONS(1188),
    [anon_sym_void] = ACTIONS(1188),
    [anon_sym_interface] = ACTIONS(1188),
    [sym_identifier] = ACTIONS(1190),
    [sym_comment] = ACTIONS(54),
  },
  [423] = {
    [ts_builtin_sym_end] = ACTIONS(1192),
    [sym_decimal_integer_literal] = ACTIONS(1194),
    [sym_hex_integer_literal] = ACTIONS(1194),
    [sym_octal_integer_literal] = ACTIONS(1194),
    [sym_binary_integer_literal] = ACTIONS(1194),
    [sym_decimal_floating_point_literal] = ACTIONS(1194),
    [sym_hex_floating_point_literal] = ACTIONS(1196),
    [anon_sym_true] = ACTIONS(1194),
    [anon_sym_false] = ACTIONS(1194),
    [anon_sym_SQUOTE] = ACTIONS(1192),
    [sym_string_literal] = ACTIONS(1192),
    [sym_null_literal] = ACTIONS(1194),
    [anon_sym_LT] = ACTIONS(1192),
    [anon_sym_LPAREN] = ACTIONS(1192),
    [anon_sym_BANG] = ACTIONS(1192),
    [anon_sym_TILDE] = ACTIONS(1192),
    [anon_sym_PLUS_PLUS] = ACTIONS(1192),
    [anon_sym_DASH_DASH] = ACTIONS(1192),
    [anon_sym_RBRACE] = ACTIONS(1192),
    [anon_sym_AT] = ACTIONS(1192),
    [anon_sym_open] = ACTIONS(1194),
    [anon_sym_module] = ACTIONS(1194),
    [anon_sym_static] = ACTIONS(1194),
    [anon_sym_package] = ACTIONS(1194),
    [anon_sym_import] = ACTIONS(1194),
    [anon_sym_class] = ACTIONS(1194),
    [anon_sym_public] = ACTIONS(1194),
    [anon_sym_protected] = ACTIONS(1194),
    [anon_sym_private] = ACTIONS(1194),
    [anon_sym_abstract] = ACTIONS(1194),
    [anon_sym_final] = ACTIONS(1194),
    [anon_sym_strictfp] = ACTIONS(1194),
    [anon_sym_default] = ACTIONS(1194),
    [anon_sym_synchronized] = ACTIONS(1194),
    [anon_sym_native] = ACTIONS(1194),
    [anon_sym_void] = ACTIONS(1194),
    [anon_sym_interface] = ACTIONS(1194),
    [sym_identifier] = ACTIONS(1196),
    [sym_comment] = ACTIONS(54),
  },
  [424] = {
    [anon_sym_GT] = ACTIONS(564),
    [anon_sym_LT] = ACTIONS(564),
    [anon_sym_EQ_EQ] = ACTIONS(562),
    [anon_sym_GT_EQ] = ACTIONS(562),
    [anon_sym_LT_EQ] = ACTIONS(562),
    [anon_sym_BANG_EQ] = ACTIONS(562),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(564),
    [anon_sym_DASH] = ACTIONS(564),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_SLASH] = ACTIONS(578),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(576),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(578),
    [anon_sym_GT_GT_GT] = ACTIONS(576),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_COLON] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [425] = {
    [anon_sym_GT] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(566),
    [anon_sym_EQ_EQ] = ACTIONS(568),
    [anon_sym_GT_EQ] = ACTIONS(568),
    [anon_sym_LT_EQ] = ACTIONS(568),
    [anon_sym_BANG_EQ] = ACTIONS(568),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_SLASH] = ACTIONS(578),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(576),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(578),
    [anon_sym_GT_GT_GT] = ACTIONS(576),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_COLON] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [426] = {
    [anon_sym_GT] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(566),
    [anon_sym_EQ_EQ] = ACTIONS(568),
    [anon_sym_GT_EQ] = ACTIONS(568),
    [anon_sym_LT_EQ] = ACTIONS(568),
    [anon_sym_BANG_EQ] = ACTIONS(568),
    [anon_sym_AMP_AMP] = ACTIONS(570),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_SLASH] = ACTIONS(578),
    [anon_sym_AMP] = ACTIONS(580),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(576),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(578),
    [anon_sym_GT_GT_GT] = ACTIONS(576),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_COLON] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [427] = {
    [anon_sym_GT] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(566),
    [anon_sym_EQ_EQ] = ACTIONS(568),
    [anon_sym_GT_EQ] = ACTIONS(568),
    [anon_sym_LT_EQ] = ACTIONS(568),
    [anon_sym_BANG_EQ] = ACTIONS(568),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(564),
    [anon_sym_DASH] = ACTIONS(564),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_SLASH] = ACTIONS(578),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(576),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(578),
    [anon_sym_GT_GT_GT] = ACTIONS(576),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_COLON] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [428] = {
    [anon_sym_GT] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(566),
    [anon_sym_EQ_EQ] = ACTIONS(568),
    [anon_sym_GT_EQ] = ACTIONS(568),
    [anon_sym_LT_EQ] = ACTIONS(568),
    [anon_sym_BANG_EQ] = ACTIONS(568),
    [anon_sym_AMP_AMP] = ACTIONS(570),
    [anon_sym_PIPE_PIPE] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_SLASH] = ACTIONS(578),
    [anon_sym_AMP] = ACTIONS(580),
    [anon_sym_PIPE] = ACTIONS(582),
    [anon_sym_CARET] = ACTIONS(572),
    [anon_sym_PERCENT] = ACTIONS(576),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(578),
    [anon_sym_GT_GT_GT] = ACTIONS(576),
    [anon_sym_QMARK] = ACTIONS(584),
    [anon_sym_COLON] = ACTIONS(1198),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [429] = {
    [sym__semicolon] = ACTIONS(1200),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_AMP_AMP] = ACTIONS(130),
    [anon_sym_PIPE_PIPE] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(132),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(138),
    [anon_sym_GT_GT_GT] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(144),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [430] = {
    [anon_sym_GT] = ACTIONS(564),
    [anon_sym_LT] = ACTIONS(564),
    [anon_sym_EQ_EQ] = ACTIONS(562),
    [anon_sym_GT_EQ] = ACTIONS(562),
    [anon_sym_LT_EQ] = ACTIONS(562),
    [anon_sym_BANG_EQ] = ACTIONS(562),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(564),
    [anon_sym_DASH] = ACTIONS(564),
    [anon_sym_STAR] = ACTIONS(598),
    [anon_sym_SLASH] = ACTIONS(600),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(598),
    [anon_sym_LT_LT] = ACTIONS(598),
    [anon_sym_GT_GT] = ACTIONS(600),
    [anon_sym_GT_GT_GT] = ACTIONS(598),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(562),
    [sym_comment] = ACTIONS(54),
  },
  [431] = {
    [anon_sym_GT] = ACTIONS(588),
    [anon_sym_LT] = ACTIONS(588),
    [anon_sym_EQ_EQ] = ACTIONS(590),
    [anon_sym_GT_EQ] = ACTIONS(590),
    [anon_sym_LT_EQ] = ACTIONS(590),
    [anon_sym_BANG_EQ] = ACTIONS(590),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(596),
    [anon_sym_DASH] = ACTIONS(596),
    [anon_sym_STAR] = ACTIONS(598),
    [anon_sym_SLASH] = ACTIONS(600),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(598),
    [anon_sym_LT_LT] = ACTIONS(598),
    [anon_sym_GT_GT] = ACTIONS(600),
    [anon_sym_GT_GT_GT] = ACTIONS(598),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(562),
    [sym_comment] = ACTIONS(54),
  },
  [432] = {
    [anon_sym_GT] = ACTIONS(588),
    [anon_sym_LT] = ACTIONS(588),
    [anon_sym_EQ_EQ] = ACTIONS(590),
    [anon_sym_GT_EQ] = ACTIONS(590),
    [anon_sym_LT_EQ] = ACTIONS(590),
    [anon_sym_BANG_EQ] = ACTIONS(590),
    [anon_sym_AMP_AMP] = ACTIONS(592),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(596),
    [anon_sym_DASH] = ACTIONS(596),
    [anon_sym_STAR] = ACTIONS(598),
    [anon_sym_SLASH] = ACTIONS(600),
    [anon_sym_AMP] = ACTIONS(602),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(598),
    [anon_sym_LT_LT] = ACTIONS(598),
    [anon_sym_GT_GT] = ACTIONS(600),
    [anon_sym_GT_GT_GT] = ACTIONS(598),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(562),
    [sym_comment] = ACTIONS(54),
  },
  [433] = {
    [anon_sym_GT] = ACTIONS(588),
    [anon_sym_LT] = ACTIONS(588),
    [anon_sym_EQ_EQ] = ACTIONS(590),
    [anon_sym_GT_EQ] = ACTIONS(590),
    [anon_sym_LT_EQ] = ACTIONS(590),
    [anon_sym_BANG_EQ] = ACTIONS(590),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(564),
    [anon_sym_DASH] = ACTIONS(564),
    [anon_sym_STAR] = ACTIONS(598),
    [anon_sym_SLASH] = ACTIONS(600),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(598),
    [anon_sym_LT_LT] = ACTIONS(598),
    [anon_sym_GT_GT] = ACTIONS(600),
    [anon_sym_GT_GT_GT] = ACTIONS(598),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(562),
    [sym_comment] = ACTIONS(54),
  },
  [434] = {
    [anon_sym_GT] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(566),
    [anon_sym_EQ_EQ] = ACTIONS(568),
    [anon_sym_GT_EQ] = ACTIONS(568),
    [anon_sym_LT_EQ] = ACTIONS(568),
    [anon_sym_BANG_EQ] = ACTIONS(568),
    [anon_sym_AMP_AMP] = ACTIONS(570),
    [anon_sym_PIPE_PIPE] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_SLASH] = ACTIONS(578),
    [anon_sym_AMP] = ACTIONS(580),
    [anon_sym_PIPE] = ACTIONS(582),
    [anon_sym_CARET] = ACTIONS(572),
    [anon_sym_PERCENT] = ACTIONS(576),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(578),
    [anon_sym_GT_GT_GT] = ACTIONS(576),
    [anon_sym_QMARK] = ACTIONS(584),
    [anon_sym_COLON] = ACTIONS(1202),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [435] = {
    [sym__semicolon] = ACTIONS(1204),
    [anon_sym_LBRACE] = ACTIONS(1204),
    [sym_comment] = ACTIONS(54),
  },
  [436] = {
    [sym__expression] = STATE(69),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(886),
    [anon_sym_DASH_DASH] = ACTIONS(886),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [437] = {
    [sym__expression] = STATE(70),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(886),
    [anon_sym_DASH_DASH] = ACTIONS(886),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [438] = {
    [anon_sym_GT] = ACTIONS(1206),
    [anon_sym_LT] = ACTIONS(1206),
    [anon_sym_EQ_EQ] = ACTIONS(1208),
    [anon_sym_GT_EQ] = ACTIONS(1208),
    [anon_sym_LT_EQ] = ACTIONS(1208),
    [anon_sym_BANG_EQ] = ACTIONS(1208),
    [anon_sym_AMP_AMP] = ACTIONS(1210),
    [anon_sym_PIPE_PIPE] = ACTIONS(1212),
    [anon_sym_PLUS] = ACTIONS(1214),
    [anon_sym_DASH] = ACTIONS(1214),
    [anon_sym_STAR] = ACTIONS(1216),
    [anon_sym_SLASH] = ACTIONS(1218),
    [anon_sym_AMP] = ACTIONS(1220),
    [anon_sym_PIPE] = ACTIONS(1222),
    [anon_sym_CARET] = ACTIONS(1212),
    [anon_sym_PERCENT] = ACTIONS(1216),
    [anon_sym_LT_LT] = ACTIONS(1216),
    [anon_sym_GT_GT] = ACTIONS(1218),
    [anon_sym_GT_GT_GT] = ACTIONS(1216),
    [anon_sym_RPAREN] = ACTIONS(1224),
    [anon_sym_QMARK] = ACTIONS(1226),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [439] = {
    [sym__literal] = STATE(601),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(602),
    [sym_element_value_pair] = STATE(237),
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
    [anon_sym_RPAREN] = ACTIONS(1228),
    [sym_identifier] = ACTIONS(1230),
    [sym_comment] = ACTIONS(54),
  },
  [440] = {
    [sym_identifier] = ACTIONS(1232),
    [sym_comment] = ACTIONS(54),
  },
  [441] = {
    [sym__annotation] = STATE(257),
    [sym_normal_annotation] = STATE(261),
    [sym_marker_annotation] = STATE(261),
    [sym_single_element_annotation] = STATE(261),
    [sym_class_declaration] = STATE(252),
    [sym_normal_class_declaration] = STATE(262),
    [sym_modifier] = STATE(263),
    [sym_type_parameters] = STATE(264),
    [sym_class_body_declaration] = STATE(265),
    [sym_constructor_declaration] = STATE(266),
    [sym_constructor_declarator] = STATE(267),
    [sym_class_member_declaration] = STATE(266),
    [sym_interface_declaration] = STATE(252),
    [sym_annotation_type_declaration] = STATE(268),
    [sym_normal_interface_declaration] = STATE(268),
    [sym_method_header] = STATE(269),
    [sym_result] = STATE(38),
    [sym_block] = STATE(266),
    [sym_method_declaration] = STATE(252),
    [aux_sym_normal_class_declaration_repeat1] = STATE(270),
    [aux_sym_class_body_repeat1] = STATE(605),
    [sym__semicolon] = ACTIONS(526),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LBRACE] = ACTIONS(530),
    [anon_sym_RBRACE] = ACTIONS(1234),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(538),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(540),
    [sym_identifier] = ACTIONS(542),
    [sym_comment] = ACTIONS(54),
  },
  [442] = {
    [sym_superclass] = STATE(606),
    [sym_super_interfaces] = STATE(607),
    [sym_class_body] = STATE(608),
    [anon_sym_LBRACE] = ACTIONS(892),
    [anon_sym_extends] = ACTIONS(342),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [443] = {
    [sym_super_interfaces] = STATE(607),
    [sym_class_body] = STATE(608),
    [anon_sym_LBRACE] = ACTIONS(892),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [444] = {
    [sym_class_body] = STATE(608),
    [anon_sym_LBRACE] = ACTIONS(892),
    [sym_comment] = ACTIONS(54),
  },
  [445] = {
    [anon_sym_if] = ACTIONS(544),
    [anon_sym_RBRACE] = ACTIONS(544),
    [anon_sym_elseif] = ACTIONS(544),
    [anon_sym_AT] = ACTIONS(544),
    [anon_sym_static] = ACTIONS(544),
    [anon_sym_class] = ACTIONS(544),
    [anon_sym_public] = ACTIONS(544),
    [anon_sym_protected] = ACTIONS(544),
    [anon_sym_private] = ACTIONS(544),
    [anon_sym_abstract] = ACTIONS(544),
    [anon_sym_final] = ACTIONS(544),
    [anon_sym_strictfp] = ACTIONS(544),
    [anon_sym_default] = ACTIONS(544),
    [anon_sym_synchronized] = ACTIONS(544),
    [anon_sym_native] = ACTIONS(544),
    [sym_comment] = ACTIONS(54),
  },
  [446] = {
    [anon_sym_if] = ACTIONS(1236),
    [anon_sym_RBRACE] = ACTIONS(1236),
    [anon_sym_AT] = ACTIONS(1236),
    [anon_sym_static] = ACTIONS(1236),
    [anon_sym_class] = ACTIONS(1236),
    [anon_sym_public] = ACTIONS(1236),
    [anon_sym_protected] = ACTIONS(1236),
    [anon_sym_private] = ACTIONS(1236),
    [anon_sym_abstract] = ACTIONS(1236),
    [anon_sym_final] = ACTIONS(1236),
    [anon_sym_strictfp] = ACTIONS(1236),
    [anon_sym_default] = ACTIONS(1236),
    [anon_sym_synchronized] = ACTIONS(1236),
    [anon_sym_native] = ACTIONS(1236),
    [sym_comment] = ACTIONS(54),
  },
  [447] = {
    [sym_type_parameters] = STATE(609),
    [sym_superclass] = STATE(606),
    [sym_super_interfaces] = STATE(607),
    [sym_class_body] = STATE(608),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(892),
    [anon_sym_extends] = ACTIONS(342),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [448] = {
    [sym__semicolon] = ACTIONS(1238),
    [anon_sym_LBRACE] = ACTIONS(1238),
    [anon_sym_throws] = ACTIONS(1238),
    [sym_comment] = ACTIONS(54),
  },
  [449] = {
    [sym_dims] = STATE(610),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(217),
    [aux_sym_dims_repeat1] = STATE(218),
    [sym__semicolon] = ACTIONS(1238),
    [anon_sym_LBRACE] = ACTIONS(1238),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_throws] = ACTIONS(1238),
    [sym_comment] = ACTIONS(54),
  },
  [450] = {
    [sym_type_argument] = STATE(611),
    [sym_reference_type] = STATE(469),
    [sym_class_or_interface_type] = STATE(470),
    [sym_primitive_type] = STATE(471),
    [sym_integral_type] = STATE(53),
    [sym_floating_point_type] = STATE(53),
    [sym__annotation] = STATE(472),
    [sym_normal_annotation] = STATE(473),
    [sym_marker_annotation] = STATE(473),
    [sym_single_element_annotation] = STATE(473),
    [aux_sym_class_or_interface_type_repeat1] = STATE(474),
    [anon_sym_boolean] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(78),
    [anon_sym_short] = ACTIONS(78),
    [anon_sym_int] = ACTIONS(78),
    [anon_sym_long] = ACTIONS(78),
    [anon_sym_char] = ACTIONS(78),
    [anon_sym_float] = ACTIONS(80),
    [anon_sym_double] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(938),
    [sym_identifier] = ACTIONS(940),
    [sym_comment] = ACTIONS(54),
  },
  [451] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(613),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1240),
    [sym_comment] = ACTIONS(54),
  },
  [452] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(614),
    [anon_sym_DOT] = ACTIONS(916),
    [anon_sym_AT] = ACTIONS(944),
    [sym_identifier] = ACTIONS(1242),
    [sym_comment] = ACTIONS(54),
  },
  [453] = {
    [anon_sym_DOT] = ACTIONS(1244),
    [anon_sym_AT] = ACTIONS(944),
    [sym_identifier] = ACTIONS(1242),
    [sym_comment] = ACTIONS(54),
  },
  [454] = {
    [sym__semicolon] = ACTIONS(1246),
    [anon_sym_COMMA] = ACTIONS(1246),
    [anon_sym_LBRACE] = ACTIONS(1246),
    [sym_comment] = ACTIONS(54),
  },
  [455] = {
    [sym__semicolon] = ACTIONS(1248),
    [anon_sym_COMMA] = ACTIONS(1248),
    [anon_sym_LBRACE] = ACTIONS(1248),
    [sym_comment] = ACTIONS(54),
  },
  [456] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1250),
    [sym_comment] = ACTIONS(54),
  },
  [457] = {
    [sym__semicolon] = ACTIONS(1252),
    [anon_sym_COMMA] = ACTIONS(1252),
    [anon_sym_LBRACE] = ACTIONS(1252),
    [sym_comment] = ACTIONS(54),
  },
  [458] = {
    [sym__semicolon] = ACTIONS(1254),
    [anon_sym_COMMA] = ACTIONS(1256),
    [anon_sym_LBRACE] = ACTIONS(1254),
    [sym_comment] = ACTIONS(54),
  },
  [459] = {
    [sym_type_arguments] = STATE(618),
    [aux_sym_class_or_interface_type_repeat2] = STATE(614),
    [anon_sym_LT] = ACTIONS(914),
    [anon_sym_DOT] = ACTIONS(916),
    [anon_sym_AT] = ACTIONS(944),
    [sym_identifier] = ACTIONS(1242),
    [sym_comment] = ACTIONS(54),
  },
  [460] = {
    [sym_module_directive] = STATE(247),
    [aux_sym_module_declaration_repeat1] = STATE(619),
    [anon_sym_RBRACE] = ACTIONS(1052),
    [anon_sym_requires] = ACTIONS(500),
    [anon_sym_exports] = ACTIONS(502),
    [anon_sym_opens] = ACTIONS(502),
    [anon_sym_uses] = ACTIONS(504),
    [anon_sym_provides] = ACTIONS(506),
    [sym_comment] = ACTIONS(54),
  },
  [461] = {
    [ts_builtin_sym_end] = ACTIONS(1258),
    [sym_decimal_integer_literal] = ACTIONS(1260),
    [sym_hex_integer_literal] = ACTIONS(1260),
    [sym_octal_integer_literal] = ACTIONS(1260),
    [sym_binary_integer_literal] = ACTIONS(1260),
    [sym_decimal_floating_point_literal] = ACTIONS(1260),
    [sym_hex_floating_point_literal] = ACTIONS(1262),
    [anon_sym_true] = ACTIONS(1260),
    [anon_sym_false] = ACTIONS(1260),
    [anon_sym_SQUOTE] = ACTIONS(1258),
    [sym_string_literal] = ACTIONS(1258),
    [sym_null_literal] = ACTIONS(1260),
    [anon_sym_LT] = ACTIONS(1258),
    [anon_sym_LPAREN] = ACTIONS(1258),
    [anon_sym_BANG] = ACTIONS(1258),
    [anon_sym_TILDE] = ACTIONS(1258),
    [anon_sym_PLUS_PLUS] = ACTIONS(1258),
    [anon_sym_DASH_DASH] = ACTIONS(1258),
    [anon_sym_RBRACE] = ACTIONS(1258),
    [anon_sym_AT] = ACTIONS(1258),
    [anon_sym_open] = ACTIONS(1260),
    [anon_sym_module] = ACTIONS(1260),
    [anon_sym_static] = ACTIONS(1260),
    [anon_sym_package] = ACTIONS(1260),
    [anon_sym_import] = ACTIONS(1260),
    [anon_sym_class] = ACTIONS(1260),
    [anon_sym_public] = ACTIONS(1260),
    [anon_sym_protected] = ACTIONS(1260),
    [anon_sym_private] = ACTIONS(1260),
    [anon_sym_abstract] = ACTIONS(1260),
    [anon_sym_final] = ACTIONS(1260),
    [anon_sym_strictfp] = ACTIONS(1260),
    [anon_sym_default] = ACTIONS(1260),
    [anon_sym_synchronized] = ACTIONS(1260),
    [anon_sym_native] = ACTIONS(1260),
    [anon_sym_void] = ACTIONS(1260),
    [anon_sym_interface] = ACTIONS(1260),
    [sym_identifier] = ACTIONS(1262),
    [sym_comment] = ACTIONS(54),
  },
  [462] = {
    [ts_builtin_sym_end] = ACTIONS(1264),
    [sym_decimal_integer_literal] = ACTIONS(1266),
    [sym_hex_integer_literal] = ACTIONS(1266),
    [sym_octal_integer_literal] = ACTIONS(1266),
    [sym_binary_integer_literal] = ACTIONS(1266),
    [sym_decimal_floating_point_literal] = ACTIONS(1266),
    [sym_hex_floating_point_literal] = ACTIONS(1268),
    [anon_sym_true] = ACTIONS(1266),
    [anon_sym_false] = ACTIONS(1266),
    [anon_sym_SQUOTE] = ACTIONS(1264),
    [sym_string_literal] = ACTIONS(1264),
    [sym_null_literal] = ACTIONS(1266),
    [anon_sym_LT] = ACTIONS(1264),
    [anon_sym_LPAREN] = ACTIONS(1264),
    [anon_sym_BANG] = ACTIONS(1264),
    [anon_sym_TILDE] = ACTIONS(1264),
    [anon_sym_PLUS_PLUS] = ACTIONS(1264),
    [anon_sym_DASH_DASH] = ACTIONS(1264),
    [anon_sym_RBRACE] = ACTIONS(1264),
    [anon_sym_AT] = ACTIONS(1264),
    [anon_sym_open] = ACTIONS(1266),
    [anon_sym_module] = ACTIONS(1266),
    [anon_sym_static] = ACTIONS(1266),
    [anon_sym_package] = ACTIONS(1266),
    [anon_sym_import] = ACTIONS(1266),
    [anon_sym_class] = ACTIONS(1266),
    [anon_sym_public] = ACTIONS(1266),
    [anon_sym_protected] = ACTIONS(1266),
    [anon_sym_private] = ACTIONS(1266),
    [anon_sym_abstract] = ACTIONS(1266),
    [anon_sym_final] = ACTIONS(1266),
    [anon_sym_strictfp] = ACTIONS(1266),
    [anon_sym_default] = ACTIONS(1266),
    [anon_sym_synchronized] = ACTIONS(1266),
    [anon_sym_native] = ACTIONS(1266),
    [anon_sym_void] = ACTIONS(1266),
    [anon_sym_interface] = ACTIONS(1266),
    [sym_identifier] = ACTIONS(1268),
    [sym_comment] = ACTIONS(54),
  },
  [463] = {
    [sym_super_interfaces] = STATE(620),
    [sym_class_body] = STATE(586),
    [anon_sym_LBRACE] = ACTIONS(340),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [464] = {
    [sym_interface_body] = STATE(621),
    [anon_sym_LBRACE] = ACTIONS(346),
    [sym_comment] = ACTIONS(54),
  },
  [465] = {
    [anon_sym_AT] = ACTIONS(1026),
    [sym_identifier] = ACTIONS(1028),
    [sym_comment] = ACTIONS(54),
  },
  [466] = {
    [anon_sym_AT] = ACTIONS(1036),
    [sym_identifier] = ACTIONS(1038),
    [sym_comment] = ACTIONS(54),
  },
  [467] = {
    [sym_package_or_type_name] = STATE(623),
    [sym_identifier] = ACTIONS(1270),
    [sym_comment] = ACTIONS(54),
  },
  [468] = {
    [aux_sym_type_arguments_repeat1] = STATE(626),
    [anon_sym_GT] = ACTIONS(1272),
    [anon_sym_COMMA] = ACTIONS(1274),
    [sym_comment] = ACTIONS(54),
  },
  [469] = {
    [anon_sym_GT] = ACTIONS(1276),
    [anon_sym_COMMA] = ACTIONS(1276),
    [sym_comment] = ACTIONS(54),
  },
  [470] = {
    [sym_dims] = STATE(627),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(217),
    [aux_sym_dims_repeat1] = STATE(218),
    [anon_sym_GT] = ACTIONS(1278),
    [anon_sym_COMMA] = ACTIONS(1278),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [471] = {
    [sym_dims] = STATE(627),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(217),
    [aux_sym_dims_repeat1] = STATE(218),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [472] = {
    [anon_sym_boolean] = ACTIONS(239),
    [anon_sym_byte] = ACTIONS(239),
    [anon_sym_short] = ACTIONS(239),
    [anon_sym_int] = ACTIONS(239),
    [anon_sym_long] = ACTIONS(239),
    [anon_sym_char] = ACTIONS(239),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_double] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(161),
    [sym_identifier] = ACTIONS(278),
    [sym_comment] = ACTIONS(54),
  },
  [473] = {
    [anon_sym_boolean] = ACTIONS(165),
    [anon_sym_byte] = ACTIONS(165),
    [anon_sym_short] = ACTIONS(165),
    [anon_sym_int] = ACTIONS(165),
    [anon_sym_long] = ACTIONS(165),
    [anon_sym_char] = ACTIONS(165),
    [anon_sym_float] = ACTIONS(165),
    [anon_sym_double] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(163),
    [sym_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(54),
  },
  [474] = {
    [sym_integral_type] = STATE(132),
    [sym_floating_point_type] = STATE(132),
    [sym__annotation] = STATE(628),
    [sym_normal_annotation] = STATE(473),
    [sym_marker_annotation] = STATE(473),
    [sym_single_element_annotation] = STATE(473),
    [anon_sym_boolean] = ACTIONS(288),
    [anon_sym_byte] = ACTIONS(78),
    [anon_sym_short] = ACTIONS(78),
    [anon_sym_int] = ACTIONS(78),
    [anon_sym_long] = ACTIONS(78),
    [anon_sym_char] = ACTIONS(78),
    [anon_sym_float] = ACTIONS(80),
    [anon_sym_double] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(938),
    [sym_identifier] = ACTIONS(1280),
    [sym_comment] = ACTIONS(54),
  },
  [475] = {
    [sym_type_arguments] = STATE(629),
    [anon_sym_GT] = ACTIONS(1282),
    [anon_sym_LT] = ACTIONS(660),
    [anon_sym_AMP] = ACTIONS(1282),
    [anon_sym_COMMA] = ACTIONS(1282),
    [anon_sym_LBRACE] = ACTIONS(1282),
    [anon_sym_DOT] = ACTIONS(1282),
    [anon_sym_LBRACK] = ACTIONS(1282),
    [anon_sym_AT] = ACTIONS(1282),
    [anon_sym_implements] = ACTIONS(1282),
    [anon_sym_COLON_COLON] = ACTIONS(1282),
    [sym_comment] = ACTIONS(54),
  },
  [476] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1284),
    [sym_comment] = ACTIONS(54),
  },
  [477] = {
    [anon_sym_GT] = ACTIONS(1286),
    [anon_sym_AMP] = ACTIONS(1286),
    [anon_sym_COMMA] = ACTIONS(1286),
    [anon_sym_LBRACE] = ACTIONS(1286),
    [anon_sym_DOT] = ACTIONS(946),
    [anon_sym_LBRACK] = ACTIONS(1286),
    [anon_sym_AT] = ACTIONS(1286),
    [anon_sym_implements] = ACTIONS(1286),
    [anon_sym_COLON_COLON] = ACTIONS(1286),
    [sym_comment] = ACTIONS(54),
  },
  [478] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(631),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1284),
    [sym_comment] = ACTIONS(54),
  },
  [479] = {
    [anon_sym_GT] = ACTIONS(1288),
    [anon_sym_AMP] = ACTIONS(1288),
    [anon_sym_COMMA] = ACTIONS(1288),
    [sym_comment] = ACTIONS(54),
  },
  [480] = {
    [sym_class_or_interface_type] = STATE(632),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(207),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(54),
  },
  [481] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(633),
    [anon_sym_GT] = ACTIONS(1286),
    [anon_sym_AMP] = ACTIONS(1286),
    [anon_sym_COMMA] = ACTIONS(1286),
    [anon_sym_LBRACE] = ACTIONS(1286),
    [anon_sym_DOT] = ACTIONS(662),
    [anon_sym_LBRACK] = ACTIONS(1286),
    [anon_sym_AT] = ACTIONS(1286),
    [anon_sym_implements] = ACTIONS(1286),
    [anon_sym_COLON_COLON] = ACTIONS(1286),
    [sym_comment] = ACTIONS(54),
  },
  [482] = {
    [anon_sym_boolean] = ACTIONS(1028),
    [anon_sym_byte] = ACTIONS(1028),
    [anon_sym_short] = ACTIONS(1028),
    [anon_sym_int] = ACTIONS(1028),
    [anon_sym_long] = ACTIONS(1028),
    [anon_sym_char] = ACTIONS(1028),
    [anon_sym_float] = ACTIONS(1028),
    [anon_sym_double] = ACTIONS(1028),
    [anon_sym_AT] = ACTIONS(1026),
    [anon_sym_static] = ACTIONS(1028),
    [anon_sym_public] = ACTIONS(1028),
    [anon_sym_protected] = ACTIONS(1028),
    [anon_sym_private] = ACTIONS(1028),
    [anon_sym_abstract] = ACTIONS(1028),
    [anon_sym_final] = ACTIONS(1028),
    [anon_sym_strictfp] = ACTIONS(1028),
    [anon_sym_default] = ACTIONS(1028),
    [anon_sym_synchronized] = ACTIONS(1028),
    [anon_sym_native] = ACTIONS(1028),
    [anon_sym_this] = ACTIONS(1028),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1026),
    [sym_identifier] = ACTIONS(1290),
    [sym_comment] = ACTIONS(54),
  },
  [483] = {
    [anon_sym_boolean] = ACTIONS(1038),
    [anon_sym_byte] = ACTIONS(1038),
    [anon_sym_short] = ACTIONS(1038),
    [anon_sym_int] = ACTIONS(1038),
    [anon_sym_long] = ACTIONS(1038),
    [anon_sym_char] = ACTIONS(1038),
    [anon_sym_float] = ACTIONS(1038),
    [anon_sym_double] = ACTIONS(1038),
    [anon_sym_AT] = ACTIONS(1036),
    [anon_sym_static] = ACTIONS(1038),
    [anon_sym_public] = ACTIONS(1038),
    [anon_sym_protected] = ACTIONS(1038),
    [anon_sym_private] = ACTIONS(1038),
    [anon_sym_abstract] = ACTIONS(1038),
    [anon_sym_final] = ACTIONS(1038),
    [anon_sym_strictfp] = ACTIONS(1038),
    [anon_sym_default] = ACTIONS(1038),
    [anon_sym_synchronized] = ACTIONS(1038),
    [anon_sym_native] = ACTIONS(1038),
    [anon_sym_this] = ACTIONS(1038),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1036),
    [sym_identifier] = ACTIONS(1292),
    [sym_comment] = ACTIONS(54),
  },
  [484] = {
    [sym__semicolon] = ACTIONS(1294),
    [anon_sym_GT] = ACTIONS(1294),
    [anon_sym_RPAREN] = ACTIONS(1294),
    [anon_sym_COMMA] = ACTIONS(1294),
    [anon_sym_LBRACE] = ACTIONS(1294),
    [anon_sym_DOT] = ACTIONS(1294),
    [anon_sym_LBRACK] = ACTIONS(1294),
    [anon_sym_AT] = ACTIONS(1294),
    [anon_sym_EQ] = ACTIONS(1294),
    [anon_sym_default] = ACTIONS(1294),
    [anon_sym_COLON_COLON] = ACTIONS(1294),
    [anon_sym_throws] = ACTIONS(1294),
    [sym_comment] = ACTIONS(54),
  },
  [485] = {
    [anon_sym_RBRACK] = ACTIONS(1296),
    [sym_comment] = ACTIONS(54),
  },
  [486] = {
    [anon_sym_boolean] = ACTIONS(732),
    [anon_sym_byte] = ACTIONS(732),
    [anon_sym_short] = ACTIONS(732),
    [anon_sym_int] = ACTIONS(732),
    [anon_sym_long] = ACTIONS(732),
    [anon_sym_char] = ACTIONS(732),
    [anon_sym_float] = ACTIONS(732),
    [anon_sym_double] = ACTIONS(732),
    [anon_sym_AT] = ACTIONS(730),
    [anon_sym_this] = ACTIONS(732),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(730),
    [sym_identifier] = ACTIONS(958),
    [sym_comment] = ACTIONS(54),
  },
  [487] = {
    [anon_sym_RPAREN] = ACTIONS(1298),
    [anon_sym_EQ] = ACTIONS(736),
    [sym_comment] = ACTIONS(54),
  },
  [488] = {
    [anon_sym_RPAREN] = ACTIONS(1298),
    [sym_comment] = ACTIONS(54),
  },
  [489] = {
    [anon_sym_RPAREN] = ACTIONS(1300),
    [sym_comment] = ACTIONS(54),
  },
  [490] = {
    [anon_sym_LPAREN] = ACTIONS(744),
    [anon_sym_DOT] = ACTIONS(746),
    [anon_sym_boolean] = ACTIONS(746),
    [anon_sym_byte] = ACTIONS(746),
    [anon_sym_short] = ACTIONS(746),
    [anon_sym_int] = ACTIONS(746),
    [anon_sym_long] = ACTIONS(746),
    [anon_sym_char] = ACTIONS(746),
    [anon_sym_float] = ACTIONS(746),
    [anon_sym_double] = ACTIONS(746),
    [anon_sym_AT] = ACTIONS(744),
    [anon_sym_this] = ACTIONS(746),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(744),
    [sym_identifier] = ACTIONS(964),
    [sym_comment] = ACTIONS(54),
  },
  [491] = {
    [sym_identifier] = ACTIONS(1302),
    [sym_comment] = ACTIONS(54),
  },
  [492] = {
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_DOT] = ACTIONS(314),
    [anon_sym_AT] = ACTIONS(314),
    [anon_sym_static] = ACTIONS(316),
    [anon_sym_class] = ACTIONS(316),
    [anon_sym_public] = ACTIONS(316),
    [anon_sym_protected] = ACTIONS(316),
    [anon_sym_private] = ACTIONS(316),
    [anon_sym_abstract] = ACTIONS(316),
    [anon_sym_final] = ACTIONS(316),
    [anon_sym_strictfp] = ACTIONS(316),
    [anon_sym_default] = ACTIONS(316),
    [anon_sym_synchronized] = ACTIONS(316),
    [anon_sym_native] = ACTIONS(316),
    [anon_sym_interface] = ACTIONS(316),
    [sym_identifier] = ACTIONS(440),
    [sym_comment] = ACTIONS(54),
  },
  [493] = {
    [anon_sym_LPAREN] = ACTIONS(1304),
    [anon_sym_DOT] = ACTIONS(1306),
    [anon_sym_AT] = ACTIONS(318),
    [anon_sym_static] = ACTIONS(324),
    [anon_sym_class] = ACTIONS(324),
    [anon_sym_public] = ACTIONS(324),
    [anon_sym_protected] = ACTIONS(324),
    [anon_sym_private] = ACTIONS(324),
    [anon_sym_abstract] = ACTIONS(324),
    [anon_sym_final] = ACTIONS(324),
    [anon_sym_strictfp] = ACTIONS(324),
    [anon_sym_default] = ACTIONS(324),
    [anon_sym_synchronized] = ACTIONS(324),
    [anon_sym_native] = ACTIONS(324),
    [anon_sym_interface] = ACTIONS(324),
    [sym_identifier] = ACTIONS(446),
    [sym_comment] = ACTIONS(54),
  },
  [494] = {
    [sym_type_parameters] = STATE(641),
    [sym_superclass] = STATE(642),
    [sym_super_interfaces] = STATE(643),
    [sym_class_body] = STATE(644),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(1308),
    [anon_sym_extends] = ACTIONS(342),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [495] = {
    [sym_type_parameters] = STATE(646),
    [sym_extends_interfaces] = STATE(647),
    [sym_interface_body] = STATE(648),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(1310),
    [anon_sym_extends] = ACTIONS(348),
    [sym_comment] = ACTIONS(54),
  },
  [496] = {
    [anon_sym_RPAREN] = ACTIONS(1312),
    [sym_comment] = ACTIONS(54),
  },
  [497] = {
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
    [anon_sym_synchronized] = ACTIONS(1170),
    [anon_sym_native] = ACTIONS(1170),
    [anon_sym_interface] = ACTIONS(1170),
    [sym_identifier] = ACTIONS(1172),
    [sym_comment] = ACTIONS(54),
  },
  [498] = {
    [sym_package_or_type_name] = STATE(493),
    [anon_sym_interface] = ACTIONS(1314),
    [sym_identifier] = ACTIONS(994),
    [sym_comment] = ACTIONS(54),
  },
  [499] = {
    [sym_identifier] = ACTIONS(1316),
    [sym_comment] = ACTIONS(54),
  },
  [500] = {
    [sym_identifier] = ACTIONS(1318),
    [sym_comment] = ACTIONS(54),
  },
  [501] = {
    [sym_dims] = STATE(216),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(217),
    [aux_sym_dims_repeat1] = STATE(218),
    [sym__semicolon] = ACTIONS(448),
    [anon_sym_LPAREN] = ACTIONS(1320),
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(448),
    [sym_comment] = ACTIONS(54),
  },
  [502] = {
    [anon_sym_AT] = ACTIONS(410),
    [anon_sym_static] = ACTIONS(412),
    [anon_sym_class] = ACTIONS(412),
    [anon_sym_public] = ACTIONS(412),
    [anon_sym_protected] = ACTIONS(412),
    [anon_sym_private] = ACTIONS(412),
    [anon_sym_abstract] = ACTIONS(412),
    [anon_sym_final] = ACTIONS(412),
    [anon_sym_strictfp] = ACTIONS(412),
    [anon_sym_default] = ACTIONS(412),
    [anon_sym_synchronized] = ACTIONS(412),
    [anon_sym_native] = ACTIONS(412),
    [anon_sym_interface] = ACTIONS(412),
    [sym_identifier] = ACTIONS(1144),
    [sym_comment] = ACTIONS(54),
  },
  [503] = {
    [sym__semicolon] = ACTIONS(1322),
    [sym_comment] = ACTIONS(54),
  },
  [504] = {
    [ts_builtin_sym_end] = ACTIONS(1324),
    [sym_decimal_integer_literal] = ACTIONS(1326),
    [sym_hex_integer_literal] = ACTIONS(1326),
    [sym_octal_integer_literal] = ACTIONS(1326),
    [sym_binary_integer_literal] = ACTIONS(1326),
    [sym_decimal_floating_point_literal] = ACTIONS(1326),
    [sym_hex_floating_point_literal] = ACTIONS(1328),
    [anon_sym_true] = ACTIONS(1326),
    [anon_sym_false] = ACTIONS(1326),
    [anon_sym_SQUOTE] = ACTIONS(1324),
    [sym_string_literal] = ACTIONS(1324),
    [sym_null_literal] = ACTIONS(1326),
    [anon_sym_LT] = ACTIONS(1324),
    [anon_sym_LPAREN] = ACTIONS(1324),
    [anon_sym_BANG] = ACTIONS(1324),
    [anon_sym_TILDE] = ACTIONS(1324),
    [anon_sym_PLUS_PLUS] = ACTIONS(1324),
    [anon_sym_DASH_DASH] = ACTIONS(1324),
    [anon_sym_RBRACE] = ACTIONS(1324),
    [anon_sym_AT] = ACTIONS(1324),
    [anon_sym_open] = ACTIONS(1326),
    [anon_sym_module] = ACTIONS(1326),
    [anon_sym_static] = ACTIONS(1326),
    [anon_sym_package] = ACTIONS(1326),
    [anon_sym_import] = ACTIONS(1326),
    [anon_sym_class] = ACTIONS(1326),
    [anon_sym_public] = ACTIONS(1326),
    [anon_sym_protected] = ACTIONS(1326),
    [anon_sym_private] = ACTIONS(1326),
    [anon_sym_abstract] = ACTIONS(1326),
    [anon_sym_final] = ACTIONS(1326),
    [anon_sym_strictfp] = ACTIONS(1326),
    [anon_sym_default] = ACTIONS(1326),
    [anon_sym_synchronized] = ACTIONS(1326),
    [anon_sym_native] = ACTIONS(1326),
    [anon_sym_void] = ACTIONS(1326),
    [anon_sym_interface] = ACTIONS(1326),
    [sym_identifier] = ACTIONS(1328),
    [sym_comment] = ACTIONS(54),
  },
  [505] = {
    [anon_sym_RBRACE] = ACTIONS(1330),
    [anon_sym_AT] = ACTIONS(1330),
    [anon_sym_static] = ACTIONS(1332),
    [anon_sym_class] = ACTIONS(1332),
    [anon_sym_public] = ACTIONS(1332),
    [anon_sym_protected] = ACTIONS(1332),
    [anon_sym_private] = ACTIONS(1332),
    [anon_sym_abstract] = ACTIONS(1332),
    [anon_sym_final] = ACTIONS(1332),
    [anon_sym_strictfp] = ACTIONS(1332),
    [anon_sym_default] = ACTIONS(1332),
    [anon_sym_synchronized] = ACTIONS(1332),
    [anon_sym_native] = ACTIONS(1332),
    [anon_sym_interface] = ACTIONS(1332),
    [sym_identifier] = ACTIONS(1334),
    [sym_comment] = ACTIONS(54),
  },
  [506] = {
    [sym__expression] = STATE(657),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [507] = {
    [sym__literal] = STATE(508),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(509),
    [sym__annotation] = STATE(508),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_element_value] = STATE(661),
    [sym_element_value_array_initializer] = STATE(508),
    [sym_conditional_expression] = STATE(508),
    [sym_conditional_or_expression] = STATE(662),
    [sym_conditional_and_expression] = STATE(663),
    [sym_inclusive_or_expression] = STATE(664),
    [sym_exclusive_or_expression] = STATE(665),
    [sym_and_expression] = STATE(515),
    [sym_relational_expression] = STATE(666),
    [sym_equality_expression] = STATE(667),
    [sym_shift_expression] = STATE(668),
    [sym_additive_expression] = STATE(669),
    [sym_multiplicative_expression] = STATE(670),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1030),
    [anon_sym_false] = ACTIONS(1030),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_COMMA] = ACTIONS(1340),
    [anon_sym_BANG] = ACTIONS(1342),
    [anon_sym_TILDE] = ACTIONS(1342),
    [anon_sym_LBRACE] = ACTIONS(1034),
    [anon_sym_RBRACE] = ACTIONS(1344),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [508] = {
    [sym__semicolon] = ACTIONS(1346),
    [anon_sym_RPAREN] = ACTIONS(1346),
    [anon_sym_COMMA] = ACTIONS(1346),
    [anon_sym_RBRACE] = ACTIONS(1346),
    [sym_comment] = ACTIONS(54),
  },
  [509] = {
    [sym__semicolon] = ACTIONS(1348),
    [anon_sym_LT] = ACTIONS(1350),
    [anon_sym_EQ_EQ] = ACTIONS(1348),
    [anon_sym_BANG_EQ] = ACTIONS(1348),
    [anon_sym_AMP_AMP] = ACTIONS(1348),
    [anon_sym_PIPE_PIPE] = ACTIONS(1348),
    [anon_sym_PLUS] = ACTIONS(1348),
    [anon_sym_DASH] = ACTIONS(1348),
    [anon_sym_STAR] = ACTIONS(1348),
    [anon_sym_SLASH] = ACTIONS(1350),
    [anon_sym_PIPE] = ACTIONS(1350),
    [anon_sym_CARET] = ACTIONS(1348),
    [anon_sym_PERCENT] = ACTIONS(1348),
    [anon_sym_LT_LT] = ACTIONS(1348),
    [anon_sym_GT_GT] = ACTIONS(1350),
    [anon_sym_GT_GT_GT] = ACTIONS(1348),
    [anon_sym_RPAREN] = ACTIONS(1348),
    [anon_sym_COMMA] = ACTIONS(1348),
    [anon_sym_QMARK] = ACTIONS(1348),
    [anon_sym_RBRACE] = ACTIONS(1348),
    [sym_comment] = ACTIONS(54),
  },
  [510] = {
    [anon_sym_RPAREN] = ACTIONS(1352),
    [anon_sym_COMMA] = ACTIONS(1352),
    [sym_comment] = ACTIONS(54),
  },
  [511] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(1354),
    [anon_sym_RPAREN] = ACTIONS(1356),
    [anon_sym_COMMA] = ACTIONS(1356),
    [anon_sym_QMARK] = ACTIONS(1358),
    [sym_comment] = ACTIONS(54),
  },
  [512] = {
    [anon_sym_AMP_AMP] = ACTIONS(1360),
    [anon_sym_PIPE_PIPE] = ACTIONS(1362),
    [anon_sym_RPAREN] = ACTIONS(1362),
    [anon_sym_COMMA] = ACTIONS(1362),
    [anon_sym_QMARK] = ACTIONS(1362),
    [sym_comment] = ACTIONS(54),
  },
  [513] = {
    [anon_sym_AMP_AMP] = ACTIONS(1364),
    [anon_sym_PIPE_PIPE] = ACTIONS(1364),
    [anon_sym_PIPE] = ACTIONS(1366),
    [anon_sym_RPAREN] = ACTIONS(1364),
    [anon_sym_COMMA] = ACTIONS(1364),
    [anon_sym_QMARK] = ACTIONS(1364),
    [sym_comment] = ACTIONS(54),
  },
  [514] = {
    [anon_sym_AMP_AMP] = ACTIONS(1368),
    [anon_sym_PIPE_PIPE] = ACTIONS(1368),
    [anon_sym_PIPE] = ACTIONS(1370),
    [anon_sym_CARET] = ACTIONS(1372),
    [anon_sym_RPAREN] = ACTIONS(1368),
    [anon_sym_COMMA] = ACTIONS(1368),
    [anon_sym_QMARK] = ACTIONS(1368),
    [sym_comment] = ACTIONS(54),
  },
  [515] = {
    [sym__semicolon] = ACTIONS(1374),
    [anon_sym_AMP_AMP] = ACTIONS(1374),
    [anon_sym_PIPE_PIPE] = ACTIONS(1374),
    [anon_sym_PIPE] = ACTIONS(1376),
    [anon_sym_CARET] = ACTIONS(1374),
    [anon_sym_RPAREN] = ACTIONS(1374),
    [anon_sym_COMMA] = ACTIONS(1374),
    [anon_sym_QMARK] = ACTIONS(1374),
    [anon_sym_RBRACE] = ACTIONS(1374),
    [sym_comment] = ACTIONS(54),
  },
  [516] = {
    [anon_sym_LT] = ACTIONS(1378),
    [anon_sym_EQ_EQ] = ACTIONS(1380),
    [anon_sym_BANG_EQ] = ACTIONS(1380),
    [anon_sym_AMP_AMP] = ACTIONS(1382),
    [anon_sym_PIPE_PIPE] = ACTIONS(1382),
    [anon_sym_PIPE] = ACTIONS(1384),
    [anon_sym_CARET] = ACTIONS(1382),
    [anon_sym_RPAREN] = ACTIONS(1382),
    [anon_sym_COMMA] = ACTIONS(1382),
    [anon_sym_QMARK] = ACTIONS(1382),
    [sym_comment] = ACTIONS(54),
  },
  [517] = {
    [anon_sym_EQ_EQ] = ACTIONS(1386),
    [anon_sym_BANG_EQ] = ACTIONS(1386),
    [sym_comment] = ACTIONS(54),
  },
  [518] = {
    [anon_sym_LT] = ACTIONS(1388),
    [anon_sym_EQ_EQ] = ACTIONS(1390),
    [anon_sym_BANG_EQ] = ACTIONS(1390),
    [anon_sym_AMP_AMP] = ACTIONS(1390),
    [anon_sym_PIPE_PIPE] = ACTIONS(1390),
    [anon_sym_PIPE] = ACTIONS(1388),
    [anon_sym_CARET] = ACTIONS(1390),
    [anon_sym_LT_LT] = ACTIONS(1392),
    [anon_sym_GT_GT] = ACTIONS(1394),
    [anon_sym_GT_GT_GT] = ACTIONS(1392),
    [anon_sym_RPAREN] = ACTIONS(1390),
    [anon_sym_COMMA] = ACTIONS(1390),
    [anon_sym_QMARK] = ACTIONS(1390),
    [sym_comment] = ACTIONS(54),
  },
  [519] = {
    [anon_sym_LT] = ACTIONS(1396),
    [anon_sym_EQ_EQ] = ACTIONS(1398),
    [anon_sym_BANG_EQ] = ACTIONS(1398),
    [anon_sym_AMP_AMP] = ACTIONS(1398),
    [anon_sym_PIPE_PIPE] = ACTIONS(1398),
    [anon_sym_PLUS] = ACTIONS(1400),
    [anon_sym_DASH] = ACTIONS(1400),
    [anon_sym_PIPE] = ACTIONS(1396),
    [anon_sym_CARET] = ACTIONS(1398),
    [anon_sym_LT_LT] = ACTIONS(1398),
    [anon_sym_GT_GT] = ACTIONS(1396),
    [anon_sym_GT_GT_GT] = ACTIONS(1398),
    [anon_sym_RPAREN] = ACTIONS(1398),
    [anon_sym_COMMA] = ACTIONS(1398),
    [anon_sym_QMARK] = ACTIONS(1398),
    [sym_comment] = ACTIONS(54),
  },
  [520] = {
    [anon_sym_LT] = ACTIONS(1402),
    [anon_sym_EQ_EQ] = ACTIONS(1404),
    [anon_sym_BANG_EQ] = ACTIONS(1404),
    [anon_sym_AMP_AMP] = ACTIONS(1404),
    [anon_sym_PIPE_PIPE] = ACTIONS(1404),
    [anon_sym_PLUS] = ACTIONS(1404),
    [anon_sym_DASH] = ACTIONS(1404),
    [anon_sym_STAR] = ACTIONS(1406),
    [anon_sym_SLASH] = ACTIONS(1408),
    [anon_sym_PIPE] = ACTIONS(1402),
    [anon_sym_CARET] = ACTIONS(1404),
    [anon_sym_PERCENT] = ACTIONS(1406),
    [anon_sym_LT_LT] = ACTIONS(1404),
    [anon_sym_GT_GT] = ACTIONS(1402),
    [anon_sym_GT_GT_GT] = ACTIONS(1404),
    [anon_sym_RPAREN] = ACTIONS(1404),
    [anon_sym_COMMA] = ACTIONS(1404),
    [anon_sym_QMARK] = ACTIONS(1404),
    [sym_comment] = ACTIONS(54),
  },
  [521] = {
    [anon_sym_EQ] = ACTIONS(736),
    [sym_comment] = ACTIONS(54),
  },
  [522] = {
    [anon_sym_RPAREN] = ACTIONS(1410),
    [anon_sym_COMMA] = ACTIONS(1410),
    [sym_comment] = ACTIONS(54),
  },
  [523] = {
    [sym_element_value_pair] = STATE(681),
    [sym_identifier] = ACTIONS(1040),
    [sym_comment] = ACTIONS(54),
  },
  [524] = {
    [ts_builtin_sym_end] = ACTIONS(1412),
    [sym_decimal_integer_literal] = ACTIONS(1414),
    [sym_hex_integer_literal] = ACTIONS(1414),
    [sym_octal_integer_literal] = ACTIONS(1414),
    [sym_binary_integer_literal] = ACTIONS(1414),
    [sym_decimal_floating_point_literal] = ACTIONS(1414),
    [sym_hex_floating_point_literal] = ACTIONS(1416),
    [anon_sym_true] = ACTIONS(1414),
    [anon_sym_false] = ACTIONS(1414),
    [anon_sym_SQUOTE] = ACTIONS(1412),
    [sym_string_literal] = ACTIONS(1412),
    [sym_null_literal] = ACTIONS(1414),
    [anon_sym_LT] = ACTIONS(1412),
    [anon_sym_LPAREN] = ACTIONS(1412),
    [anon_sym_BANG] = ACTIONS(1412),
    [anon_sym_TILDE] = ACTIONS(1412),
    [anon_sym_PLUS_PLUS] = ACTIONS(1412),
    [anon_sym_DASH_DASH] = ACTIONS(1412),
    [anon_sym_RBRACE] = ACTIONS(1412),
    [anon_sym_AT] = ACTIONS(1412),
    [anon_sym_open] = ACTIONS(1414),
    [anon_sym_module] = ACTIONS(1414),
    [anon_sym_static] = ACTIONS(1414),
    [anon_sym_package] = ACTIONS(1414),
    [anon_sym_import] = ACTIONS(1414),
    [anon_sym_class] = ACTIONS(1414),
    [anon_sym_public] = ACTIONS(1414),
    [anon_sym_protected] = ACTIONS(1414),
    [anon_sym_private] = ACTIONS(1414),
    [anon_sym_abstract] = ACTIONS(1414),
    [anon_sym_final] = ACTIONS(1414),
    [anon_sym_strictfp] = ACTIONS(1414),
    [anon_sym_default] = ACTIONS(1414),
    [anon_sym_synchronized] = ACTIONS(1414),
    [anon_sym_native] = ACTIONS(1414),
    [anon_sym_void] = ACTIONS(1414),
    [anon_sym_interface] = ACTIONS(1414),
    [sym_identifier] = ACTIONS(1416),
    [sym_comment] = ACTIONS(54),
  },
  [525] = {
    [anon_sym_RBRACE] = ACTIONS(1418),
    [anon_sym_requires] = ACTIONS(1418),
    [anon_sym_exports] = ACTIONS(1418),
    [anon_sym_opens] = ACTIONS(1418),
    [anon_sym_uses] = ACTIONS(1418),
    [anon_sym_provides] = ACTIONS(1418),
    [sym_comment] = ACTIONS(54),
  },
  [526] = {
    [sym_identifier] = ACTIONS(1420),
    [sym_comment] = ACTIONS(54),
  },
  [527] = {
    [anon_sym_transitive] = ACTIONS(1422),
    [anon_sym_static] = ACTIONS(1422),
    [sym_identifier] = ACTIONS(1424),
    [sym_comment] = ACTIONS(54),
  },
  [528] = {
    [sym__semicolon] = ACTIONS(1426),
    [anon_sym_DOT] = ACTIONS(1068),
    [sym_comment] = ACTIONS(54),
  },
  [529] = {
    [sym_module_name] = STATE(684),
    [sym_identifier] = ACTIONS(1428),
    [sym_comment] = ACTIONS(54),
  },
  [530] = {
    [sym_identifier] = ACTIONS(1430),
    [sym_comment] = ACTIONS(54),
  },
  [531] = {
    [sym_module_name] = STATE(686),
    [aux_sym_module_directive_repeat2] = STATE(687),
    [sym__semicolon] = ACTIONS(1426),
    [anon_sym_COMMA] = ACTIONS(1070),
    [sym_identifier] = ACTIONS(1428),
    [sym_comment] = ACTIONS(54),
  },
  [532] = {
    [aux_sym_module_directive_repeat2] = STATE(687),
    [sym__semicolon] = ACTIONS(1426),
    [anon_sym_COMMA] = ACTIONS(1070),
    [anon_sym_DOT] = ACTIONS(1068),
    [sym_comment] = ACTIONS(54),
  },
  [533] = {
    [sym__semicolon] = ACTIONS(1426),
    [anon_sym_COMMA] = ACTIONS(1432),
    [sym_comment] = ACTIONS(54),
  },
  [534] = {
    [sym_package_or_type_name] = STATE(689),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(54),
  },
  [535] = {
    [ts_builtin_sym_end] = ACTIONS(1434),
    [sym_decimal_integer_literal] = ACTIONS(1436),
    [sym_hex_integer_literal] = ACTIONS(1436),
    [sym_octal_integer_literal] = ACTIONS(1436),
    [sym_binary_integer_literal] = ACTIONS(1436),
    [sym_decimal_floating_point_literal] = ACTIONS(1436),
    [sym_hex_floating_point_literal] = ACTIONS(1438),
    [anon_sym_true] = ACTIONS(1436),
    [anon_sym_false] = ACTIONS(1436),
    [anon_sym_SQUOTE] = ACTIONS(1434),
    [sym_string_literal] = ACTIONS(1434),
    [sym_null_literal] = ACTIONS(1436),
    [anon_sym_LT] = ACTIONS(1434),
    [anon_sym_LPAREN] = ACTIONS(1434),
    [anon_sym_BANG] = ACTIONS(1434),
    [anon_sym_TILDE] = ACTIONS(1434),
    [anon_sym_PLUS_PLUS] = ACTIONS(1434),
    [anon_sym_DASH_DASH] = ACTIONS(1434),
    [anon_sym_RBRACE] = ACTIONS(1434),
    [anon_sym_AT] = ACTIONS(1434),
    [anon_sym_open] = ACTIONS(1436),
    [anon_sym_module] = ACTIONS(1436),
    [anon_sym_static] = ACTIONS(1436),
    [anon_sym_package] = ACTIONS(1436),
    [anon_sym_import] = ACTIONS(1436),
    [anon_sym_class] = ACTIONS(1436),
    [anon_sym_public] = ACTIONS(1436),
    [anon_sym_protected] = ACTIONS(1436),
    [anon_sym_private] = ACTIONS(1436),
    [anon_sym_abstract] = ACTIONS(1436),
    [anon_sym_final] = ACTIONS(1436),
    [anon_sym_strictfp] = ACTIONS(1436),
    [anon_sym_default] = ACTIONS(1436),
    [anon_sym_synchronized] = ACTIONS(1436),
    [anon_sym_native] = ACTIONS(1436),
    [anon_sym_void] = ACTIONS(1436),
    [anon_sym_interface] = ACTIONS(1436),
    [sym_identifier] = ACTIONS(1438),
    [sym_comment] = ACTIONS(54),
  },
  [536] = {
    [ts_builtin_sym_end] = ACTIONS(1440),
    [sym_decimal_integer_literal] = ACTIONS(1442),
    [sym_hex_integer_literal] = ACTIONS(1442),
    [sym_octal_integer_literal] = ACTIONS(1442),
    [sym_binary_integer_literal] = ACTIONS(1442),
    [sym_decimal_floating_point_literal] = ACTIONS(1442),
    [sym_hex_floating_point_literal] = ACTIONS(1444),
    [anon_sym_true] = ACTIONS(1442),
    [anon_sym_false] = ACTIONS(1442),
    [anon_sym_SQUOTE] = ACTIONS(1440),
    [sym_string_literal] = ACTIONS(1440),
    [sym_null_literal] = ACTIONS(1442),
    [anon_sym_LT] = ACTIONS(1440),
    [anon_sym_LPAREN] = ACTIONS(1440),
    [anon_sym_BANG] = ACTIONS(1440),
    [anon_sym_TILDE] = ACTIONS(1440),
    [anon_sym_PLUS_PLUS] = ACTIONS(1440),
    [anon_sym_DASH_DASH] = ACTIONS(1440),
    [anon_sym_RBRACE] = ACTIONS(1440),
    [anon_sym_AT] = ACTIONS(1440),
    [anon_sym_open] = ACTIONS(1442),
    [anon_sym_module] = ACTIONS(1442),
    [anon_sym_static] = ACTIONS(1442),
    [anon_sym_package] = ACTIONS(1442),
    [anon_sym_import] = ACTIONS(1442),
    [anon_sym_class] = ACTIONS(1442),
    [anon_sym_public] = ACTIONS(1442),
    [anon_sym_protected] = ACTIONS(1442),
    [anon_sym_private] = ACTIONS(1442),
    [anon_sym_abstract] = ACTIONS(1442),
    [anon_sym_final] = ACTIONS(1442),
    [anon_sym_strictfp] = ACTIONS(1442),
    [anon_sym_default] = ACTIONS(1442),
    [anon_sym_synchronized] = ACTIONS(1442),
    [anon_sym_native] = ACTIONS(1442),
    [anon_sym_void] = ACTIONS(1442),
    [anon_sym_interface] = ACTIONS(1442),
    [sym_identifier] = ACTIONS(1444),
    [sym_comment] = ACTIONS(54),
  },
  [537] = {
    [anon_sym_AT] = ACTIONS(426),
    [anon_sym_void] = ACTIONS(1446),
    [sym_identifier] = ACTIONS(1448),
    [sym_comment] = ACTIONS(54),
  },
  [538] = {
    [sym__semicolon] = ACTIONS(896),
    [anon_sym_LT] = ACTIONS(896),
    [anon_sym_LBRACE] = ACTIONS(896),
    [anon_sym_RBRACE] = ACTIONS(896),
    [anon_sym_AT] = ACTIONS(896),
    [anon_sym_static] = ACTIONS(898),
    [anon_sym_class] = ACTIONS(898),
    [anon_sym_public] = ACTIONS(898),
    [anon_sym_protected] = ACTIONS(898),
    [anon_sym_private] = ACTIONS(898),
    [anon_sym_abstract] = ACTIONS(898),
    [anon_sym_final] = ACTIONS(898),
    [anon_sym_strictfp] = ACTIONS(898),
    [anon_sym_default] = ACTIONS(898),
    [anon_sym_synchronized] = ACTIONS(898),
    [anon_sym_native] = ACTIONS(898),
    [anon_sym_void] = ACTIONS(898),
    [anon_sym_interface] = ACTIONS(898),
    [sym_identifier] = ACTIONS(900),
    [sym_comment] = ACTIONS(54),
  },
  [539] = {
    [sym_annotation_type_body] = STATE(691),
    [anon_sym_LBRACE] = ACTIONS(1450),
    [sym_comment] = ACTIONS(54),
  },
  [540] = {
    [sym__literal] = STATE(694),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(695),
    [sym_element_value_pair] = STATE(237),
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
    [anon_sym_RPAREN] = ACTIONS(1452),
    [sym_identifier] = ACTIONS(1454),
    [sym_comment] = ACTIONS(54),
  },
  [541] = {
    [sym_identifier] = ACTIONS(1456),
    [sym_comment] = ACTIONS(54),
  },
  [542] = {
    [sym__annotation] = STATE(257),
    [sym_normal_annotation] = STATE(261),
    [sym_marker_annotation] = STATE(261),
    [sym_single_element_annotation] = STATE(261),
    [sym_class_declaration] = STATE(252),
    [sym_normal_class_declaration] = STATE(262),
    [sym_modifier] = STATE(263),
    [sym_type_parameters] = STATE(264),
    [sym_class_body_declaration] = STATE(265),
    [sym_constructor_declaration] = STATE(266),
    [sym_constructor_declarator] = STATE(267),
    [sym_class_member_declaration] = STATE(266),
    [sym_interface_declaration] = STATE(252),
    [sym_annotation_type_declaration] = STATE(268),
    [sym_normal_interface_declaration] = STATE(268),
    [sym_method_header] = STATE(269),
    [sym_result] = STATE(38),
    [sym_block] = STATE(266),
    [sym_method_declaration] = STATE(252),
    [aux_sym_normal_class_declaration_repeat1] = STATE(270),
    [aux_sym_class_body_repeat1] = STATE(698),
    [sym__semicolon] = ACTIONS(526),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LBRACE] = ACTIONS(530),
    [anon_sym_RBRACE] = ACTIONS(1458),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(538),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(540),
    [sym_identifier] = ACTIONS(542),
    [sym_comment] = ACTIONS(54),
  },
  [543] = {
    [sym_superclass] = STATE(699),
    [sym_super_interfaces] = STATE(700),
    [sym_class_body] = STATE(701),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [anon_sym_extends] = ACTIONS(342),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [544] = {
    [sym_super_interfaces] = STATE(700),
    [sym_class_body] = STATE(701),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [545] = {
    [sym_class_body] = STATE(701),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [sym_comment] = ACTIONS(54),
  },
  [546] = {
    [sym__semicolon] = ACTIONS(544),
    [anon_sym_LT] = ACTIONS(544),
    [anon_sym_LBRACE] = ACTIONS(544),
    [anon_sym_RBRACE] = ACTIONS(544),
    [anon_sym_AT] = ACTIONS(544),
    [anon_sym_static] = ACTIONS(546),
    [anon_sym_class] = ACTIONS(546),
    [anon_sym_public] = ACTIONS(546),
    [anon_sym_protected] = ACTIONS(546),
    [anon_sym_private] = ACTIONS(546),
    [anon_sym_abstract] = ACTIONS(546),
    [anon_sym_final] = ACTIONS(546),
    [anon_sym_strictfp] = ACTIONS(546),
    [anon_sym_default] = ACTIONS(546),
    [anon_sym_synchronized] = ACTIONS(546),
    [anon_sym_native] = ACTIONS(546),
    [anon_sym_void] = ACTIONS(546),
    [anon_sym_interface] = ACTIONS(546),
    [sym_identifier] = ACTIONS(548),
    [sym_comment] = ACTIONS(54),
  },
  [547] = {
    [sym__annotation] = STATE(257),
    [sym_normal_annotation] = STATE(261),
    [sym_marker_annotation] = STATE(261),
    [sym_single_element_annotation] = STATE(261),
    [sym_class_declaration] = STATE(278),
    [sym_normal_class_declaration] = STATE(262),
    [sym_modifier] = STATE(263),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(278),
    [sym_annotation_type_declaration] = STATE(268),
    [sym_normal_interface_declaration] = STATE(268),
    [sym_interface_member_declaration] = STATE(280),
    [sym_constant_declaration] = STATE(278),
    [sym_variable_declarator_list] = STATE(281),
    [sym_variable_declarator] = STATE(282),
    [sym_variable_declarator_id] = STATE(126),
    [sym_method_header] = STATE(269),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(278),
    [aux_sym_normal_class_declaration_repeat1] = STATE(283),
    [aux_sym_interface_body_repeat1] = STATE(703),
    [sym__semicolon] = ACTIONS(550),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(1460),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(538),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(540),
    [sym_identifier] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [548] = {
    [sym_extends_interfaces] = STATE(704),
    [sym_interface_body] = STATE(705),
    [anon_sym_LBRACE] = ACTIONS(1104),
    [anon_sym_extends] = ACTIONS(348),
    [sym_comment] = ACTIONS(54),
  },
  [549] = {
    [sym_interface_body] = STATE(705),
    [anon_sym_LBRACE] = ACTIONS(1104),
    [sym_comment] = ACTIONS(54),
  },
  [550] = {
    [sym__semicolon] = ACTIONS(556),
    [anon_sym_LT] = ACTIONS(556),
    [anon_sym_LBRACE] = ACTIONS(556),
    [anon_sym_RBRACE] = ACTIONS(556),
    [anon_sym_AT] = ACTIONS(556),
    [anon_sym_static] = ACTIONS(558),
    [anon_sym_class] = ACTIONS(558),
    [anon_sym_public] = ACTIONS(558),
    [anon_sym_protected] = ACTIONS(558),
    [anon_sym_private] = ACTIONS(558),
    [anon_sym_abstract] = ACTIONS(558),
    [anon_sym_final] = ACTIONS(558),
    [anon_sym_strictfp] = ACTIONS(558),
    [anon_sym_default] = ACTIONS(558),
    [anon_sym_synchronized] = ACTIONS(558),
    [anon_sym_native] = ACTIONS(558),
    [anon_sym_void] = ACTIONS(558),
    [anon_sym_interface] = ACTIONS(558),
    [sym_identifier] = ACTIONS(560),
    [sym_comment] = ACTIONS(54),
  },
  [551] = {
    [anon_sym_LBRACE] = ACTIONS(1462),
    [anon_sym_throws] = ACTIONS(1462),
    [sym_comment] = ACTIONS(54),
  },
  [552] = {
    [sym__expression] = STATE(706),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(886),
    [anon_sym_DASH_DASH] = ACTIONS(886),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [553] = {
    [sym__semicolon] = ACTIONS(1464),
    [anon_sym_LT] = ACTIONS(1464),
    [anon_sym_LBRACE] = ACTIONS(1464),
    [anon_sym_RBRACE] = ACTIONS(1464),
    [anon_sym_AT] = ACTIONS(1464),
    [anon_sym_static] = ACTIONS(1466),
    [anon_sym_class] = ACTIONS(1466),
    [anon_sym_public] = ACTIONS(1466),
    [anon_sym_protected] = ACTIONS(1466),
    [anon_sym_private] = ACTIONS(1466),
    [anon_sym_abstract] = ACTIONS(1466),
    [anon_sym_final] = ACTIONS(1466),
    [anon_sym_strictfp] = ACTIONS(1466),
    [anon_sym_default] = ACTIONS(1466),
    [anon_sym_synchronized] = ACTIONS(1466),
    [anon_sym_native] = ACTIONS(1466),
    [anon_sym_void] = ACTIONS(1466),
    [anon_sym_interface] = ACTIONS(1466),
    [sym_identifier] = ACTIONS(1468),
    [sym_comment] = ACTIONS(54),
  },
  [554] = {
    [aux_sym_class_literal_repeat1] = STATE(709),
    [anon_sym_DOT] = ACTIONS(1470),
    [anon_sym_LBRACK] = ACTIONS(1472),
    [anon_sym_AT] = ACTIONS(253),
    [sym_comment] = ACTIONS(54),
  },
  [555] = {
    [sym_package_or_type_name] = STATE(711),
    [sym_identifier] = ACTIONS(1475),
    [sym_comment] = ACTIONS(54),
  },
  [556] = {
    [anon_sym_LPAREN] = ACTIONS(1477),
    [anon_sym_DOT] = ACTIONS(1479),
    [anon_sym_LBRACK] = ACTIONS(1479),
    [anon_sym_COLON_COLON] = ACTIONS(1479),
    [sym_comment] = ACTIONS(54),
  },
  [557] = {
    [anon_sym_LPAREN] = ACTIONS(1477),
    [anon_sym_DOT] = ACTIONS(1481),
    [anon_sym_COLON_COLON] = ACTIONS(1483),
    [sym_comment] = ACTIONS(54),
  },
  [558] = {
    [sym_type_arguments] = STATE(716),
    [sym_class_or_interface_type] = STATE(717),
    [sym_primitive_type] = STATE(718),
    [sym_integral_type] = STATE(53),
    [sym_floating_point_type] = STATE(53),
    [sym__annotation] = STATE(472),
    [sym_normal_annotation] = STATE(473),
    [sym_marker_annotation] = STATE(473),
    [sym_single_element_annotation] = STATE(473),
    [sym_class_or_interface_type_to_instantiate] = STATE(719),
    [aux_sym_class_or_interface_type_repeat1] = STATE(720),
    [anon_sym_LT] = ACTIONS(914),
    [anon_sym_boolean] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(78),
    [anon_sym_short] = ACTIONS(78),
    [anon_sym_int] = ACTIONS(78),
    [anon_sym_long] = ACTIONS(78),
    [anon_sym_char] = ACTIONS(78),
    [anon_sym_float] = ACTIONS(80),
    [anon_sym_double] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(938),
    [sym_identifier] = ACTIONS(1485),
    [sym_comment] = ACTIONS(54),
  },
  [559] = {
    [anon_sym_DOT] = ACTIONS(1470),
    [sym_comment] = ACTIONS(54),
  },
  [560] = {
    [sym_type_arguments] = STATE(333),
    [aux_sym_class_or_interface_type_repeat2] = STATE(334),
    [anon_sym_LT] = ACTIONS(660),
    [anon_sym_LPAREN] = ACTIONS(1487),
    [anon_sym_DOT] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(314),
    [anon_sym_AT] = ACTIONS(658),
    [anon_sym_COLON_COLON] = ACTIONS(658),
    [sym_comment] = ACTIONS(54),
  },
  [561] = {
    [anon_sym_DOT] = ACTIONS(1479),
    [anon_sym_LBRACK] = ACTIONS(1479),
    [anon_sym_COLON_COLON] = ACTIONS(1479),
    [sym_comment] = ACTIONS(54),
  },
  [562] = {
    [anon_sym_this] = ACTIONS(1489),
    [anon_sym_super] = ACTIONS(1489),
    [sym_comment] = ACTIONS(54),
  },
  [563] = {
    [sym_dims] = STATE(724),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_dims_exprs] = STATE(725),
    [sym_dims_expr] = STATE(726),
    [aux_sym_class_or_interface_type_repeat1] = STATE(727),
    [aux_sym_dims_repeat1] = STATE(218),
    [anon_sym_LBRACK] = ACTIONS(1491),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_COLON_COLON] = ACTIONS(1493),
    [sym_comment] = ACTIONS(54),
  },
  [564] = {
    [sym_dims] = STATE(724),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(217),
    [aux_sym_dims_repeat1] = STATE(218),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [565] = {
    [anon_sym_boolean] = ACTIONS(239),
    [anon_sym_byte] = ACTIONS(239),
    [anon_sym_short] = ACTIONS(239),
    [anon_sym_int] = ACTIONS(239),
    [anon_sym_long] = ACTIONS(239),
    [anon_sym_char] = ACTIONS(239),
    [anon_sym_float] = ACTIONS(239),
    [anon_sym_double] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(158),
    [anon_sym_static] = ACTIONS(102),
    [anon_sym_class] = ACTIONS(102),
    [anon_sym_public] = ACTIONS(102),
    [anon_sym_protected] = ACTIONS(102),
    [anon_sym_private] = ACTIONS(102),
    [anon_sym_abstract] = ACTIONS(102),
    [anon_sym_final] = ACTIONS(102),
    [anon_sym_strictfp] = ACTIONS(102),
    [anon_sym_default] = ACTIONS(102),
    [anon_sym_synchronized] = ACTIONS(102),
    [anon_sym_native] = ACTIONS(102),
    [sym_identifier] = ACTIONS(1495),
    [sym_comment] = ACTIONS(54),
  },
  [566] = {
    [anon_sym_boolean] = ACTIONS(165),
    [anon_sym_byte] = ACTIONS(165),
    [anon_sym_short] = ACTIONS(165),
    [anon_sym_int] = ACTIONS(165),
    [anon_sym_long] = ACTIONS(165),
    [anon_sym_char] = ACTIONS(165),
    [anon_sym_float] = ACTIONS(165),
    [anon_sym_double] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym_static] = ACTIONS(165),
    [anon_sym_class] = ACTIONS(165),
    [anon_sym_public] = ACTIONS(165),
    [anon_sym_protected] = ACTIONS(165),
    [anon_sym_private] = ACTIONS(165),
    [anon_sym_abstract] = ACTIONS(165),
    [anon_sym_final] = ACTIONS(165),
    [anon_sym_strictfp] = ACTIONS(165),
    [anon_sym_default] = ACTIONS(165),
    [anon_sym_synchronized] = ACTIONS(165),
    [anon_sym_native] = ACTIONS(165),
    [sym_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(54),
  },
  [567] = {
    [aux_sym_class_literal_repeat1] = STATE(709),
    [anon_sym_DOT] = ACTIONS(1498),
    [anon_sym_LBRACK] = ACTIONS(1500),
    [sym_comment] = ACTIONS(54),
  },
  [568] = {
    [sym_statement] = STATE(185),
    [sym_if_then_statement] = STATE(186),
    [sym__annotation] = STATE(183),
    [sym_normal_annotation] = STATE(187),
    [sym_marker_annotation] = STATE(187),
    [sym_single_element_annotation] = STATE(187),
    [sym_class_declaration] = STATE(185),
    [sym_normal_class_declaration] = STATE(188),
    [sym_modifier] = STATE(189),
    [sym_block_statements] = STATE(730),
    [sym_block_statement] = STATE(191),
    [sym_local_variable_declaration_statement] = STATE(185),
    [sym_local_variable_declaration] = STATE(192),
    [aux_sym_normal_class_declaration_repeat1] = STATE(193),
    [anon_sym_if] = ACTIONS(370),
    [anon_sym_RBRACE] = ACTIONS(1502),
    [anon_sym_AT] = ACTIONS(374),
    [anon_sym_static] = ACTIONS(376),
    [anon_sym_class] = ACTIONS(378),
    [anon_sym_public] = ACTIONS(376),
    [anon_sym_protected] = ACTIONS(376),
    [anon_sym_private] = ACTIONS(376),
    [anon_sym_abstract] = ACTIONS(376),
    [anon_sym_final] = ACTIONS(376),
    [anon_sym_strictfp] = ACTIONS(376),
    [anon_sym_default] = ACTIONS(376),
    [anon_sym_synchronized] = ACTIONS(376),
    [anon_sym_native] = ACTIONS(376),
    [sym_comment] = ACTIONS(54),
  },
  [569] = {
    [anon_sym_DOT] = ACTIONS(1504),
    [anon_sym_LBRACK] = ACTIONS(1506),
    [anon_sym_COLON_COLON] = ACTIONS(1483),
    [sym_comment] = ACTIONS(54),
  },
  [570] = {
    [anon_sym_DOT] = ACTIONS(1508),
    [anon_sym_COLON_COLON] = ACTIONS(1483),
    [sym_comment] = ACTIONS(54),
  },
  [571] = {
    [anon_sym_DOT] = ACTIONS(1510),
    [anon_sym_COLON_COLON] = ACTIONS(1510),
    [sym_comment] = ACTIONS(54),
  },
  [572] = {
    [anon_sym_DOT] = ACTIONS(1510),
    [anon_sym_LBRACK] = ACTIONS(1506),
    [anon_sym_COLON_COLON] = ACTIONS(1510),
    [sym_comment] = ACTIONS(54),
  },
  [573] = {
    [anon_sym_DOT] = ACTIONS(1512),
    [anon_sym_LBRACK] = ACTIONS(1512),
    [anon_sym_COLON_COLON] = ACTIONS(1512),
    [sym_comment] = ACTIONS(54),
  },
  [574] = {
    [anon_sym_COLON_COLON] = ACTIONS(1514),
    [sym_comment] = ACTIONS(54),
  },
  [575] = {
    [anon_sym_RBRACE] = ACTIONS(1502),
    [sym_comment] = ACTIONS(54),
  },
  [576] = {
    [anon_sym_LPAREN] = ACTIONS(1516),
    [sym_comment] = ACTIONS(54),
  },
  [577] = {
    [sym_integral_type] = STATE(132),
    [sym_floating_point_type] = STATE(132),
    [sym__annotation] = STATE(628),
    [sym_normal_annotation] = STATE(473),
    [sym_marker_annotation] = STATE(473),
    [sym_single_element_annotation] = STATE(473),
    [anon_sym_boolean] = ACTIONS(288),
    [anon_sym_byte] = ACTIONS(78),
    [anon_sym_short] = ACTIONS(78),
    [anon_sym_int] = ACTIONS(78),
    [anon_sym_long] = ACTIONS(78),
    [anon_sym_char] = ACTIONS(78),
    [anon_sym_float] = ACTIONS(80),
    [anon_sym_double] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(938),
    [sym_identifier] = ACTIONS(1280),
    [sym_comment] = ACTIONS(54),
  },
  [578] = {
    [sym__semicolon] = ACTIONS(1518),
    [anon_sym_LT] = ACTIONS(1518),
    [anon_sym_LBRACE] = ACTIONS(1518),
    [anon_sym_RBRACE] = ACTIONS(1518),
    [anon_sym_AT] = ACTIONS(1518),
    [anon_sym_static] = ACTIONS(1520),
    [anon_sym_class] = ACTIONS(1520),
    [anon_sym_public] = ACTIONS(1520),
    [anon_sym_protected] = ACTIONS(1520),
    [anon_sym_private] = ACTIONS(1520),
    [anon_sym_abstract] = ACTIONS(1520),
    [anon_sym_final] = ACTIONS(1520),
    [anon_sym_strictfp] = ACTIONS(1520),
    [anon_sym_default] = ACTIONS(1520),
    [anon_sym_synchronized] = ACTIONS(1520),
    [anon_sym_native] = ACTIONS(1520),
    [anon_sym_void] = ACTIONS(1520),
    [anon_sym_interface] = ACTIONS(1520),
    [sym_identifier] = ACTIONS(1522),
    [sym_comment] = ACTIONS(54),
  },
  [579] = {
    [sym_identifier] = ACTIONS(1524),
    [sym_comment] = ACTIONS(54),
  },
  [580] = {
    [sym_type_parameters] = STATE(737),
    [sym_superclass] = STATE(699),
    [sym_super_interfaces] = STATE(700),
    [sym_class_body] = STATE(701),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [anon_sym_extends] = ACTIONS(342),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [581] = {
    [sym_type_parameters] = STATE(738),
    [sym_extends_interfaces] = STATE(704),
    [sym_interface_body] = STATE(705),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(1104),
    [anon_sym_extends] = ACTIONS(348),
    [sym_comment] = ACTIONS(54),
  },
  [582] = {
    [sym_constructor_body] = STATE(739),
    [anon_sym_LBRACE] = ACTIONS(818),
    [sym_comment] = ACTIONS(54),
  },
  [583] = {
    [sym__semicolon] = ACTIONS(646),
    [anon_sym_LT] = ACTIONS(646),
    [anon_sym_LBRACE] = ACTIONS(646),
    [anon_sym_RBRACE] = ACTIONS(646),
    [anon_sym_AT] = ACTIONS(646),
    [anon_sym_static] = ACTIONS(648),
    [anon_sym_class] = ACTIONS(648),
    [anon_sym_public] = ACTIONS(648),
    [anon_sym_protected] = ACTIONS(648),
    [anon_sym_private] = ACTIONS(648),
    [anon_sym_abstract] = ACTIONS(648),
    [anon_sym_final] = ACTIONS(648),
    [anon_sym_strictfp] = ACTIONS(648),
    [anon_sym_default] = ACTIONS(648),
    [anon_sym_synchronized] = ACTIONS(648),
    [anon_sym_native] = ACTIONS(648),
    [anon_sym_void] = ACTIONS(648),
    [anon_sym_interface] = ACTIONS(648),
    [sym_identifier] = ACTIONS(650),
    [sym_comment] = ACTIONS(54),
  },
  [584] = {
    [anon_sym_COMMA] = ACTIONS(1526),
    [anon_sym_LBRACE] = ACTIONS(1526),
    [sym_comment] = ACTIONS(54),
  },
  [585] = {
    [sym_class_or_interface_type] = STATE(740),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(207),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(54),
  },
  [586] = {
    [ts_builtin_sym_end] = ACTIONS(1528),
    [sym_decimal_integer_literal] = ACTIONS(1530),
    [sym_hex_integer_literal] = ACTIONS(1530),
    [sym_octal_integer_literal] = ACTIONS(1530),
    [sym_binary_integer_literal] = ACTIONS(1530),
    [sym_decimal_floating_point_literal] = ACTIONS(1530),
    [sym_hex_floating_point_literal] = ACTIONS(1532),
    [anon_sym_true] = ACTIONS(1530),
    [anon_sym_false] = ACTIONS(1530),
    [anon_sym_SQUOTE] = ACTIONS(1528),
    [sym_string_literal] = ACTIONS(1528),
    [sym_null_literal] = ACTIONS(1530),
    [anon_sym_LT] = ACTIONS(1528),
    [anon_sym_LPAREN] = ACTIONS(1528),
    [anon_sym_BANG] = ACTIONS(1528),
    [anon_sym_TILDE] = ACTIONS(1528),
    [anon_sym_PLUS_PLUS] = ACTIONS(1528),
    [anon_sym_DASH_DASH] = ACTIONS(1528),
    [anon_sym_RBRACE] = ACTIONS(1528),
    [anon_sym_AT] = ACTIONS(1528),
    [anon_sym_open] = ACTIONS(1530),
    [anon_sym_module] = ACTIONS(1530),
    [anon_sym_static] = ACTIONS(1530),
    [anon_sym_package] = ACTIONS(1530),
    [anon_sym_import] = ACTIONS(1530),
    [anon_sym_class] = ACTIONS(1530),
    [anon_sym_public] = ACTIONS(1530),
    [anon_sym_protected] = ACTIONS(1530),
    [anon_sym_private] = ACTIONS(1530),
    [anon_sym_abstract] = ACTIONS(1530),
    [anon_sym_final] = ACTIONS(1530),
    [anon_sym_strictfp] = ACTIONS(1530),
    [anon_sym_default] = ACTIONS(1530),
    [anon_sym_synchronized] = ACTIONS(1530),
    [anon_sym_native] = ACTIONS(1530),
    [anon_sym_void] = ACTIONS(1530),
    [anon_sym_interface] = ACTIONS(1530),
    [sym_identifier] = ACTIONS(1532),
    [sym_comment] = ACTIONS(54),
  },
  [587] = {
    [sym__semicolon] = ACTIONS(1534),
    [anon_sym_COMMA] = ACTIONS(1534),
    [sym_comment] = ACTIONS(54),
  },
  [588] = {
    [sym_variable_declarator] = STATE(741),
    [sym_variable_declarator_id] = STATE(126),
    [sym_identifier] = ACTIONS(269),
    [sym_comment] = ACTIONS(54),
  },
  [589] = {
    [sym__semicolon] = ACTIONS(1536),
    [anon_sym_LT] = ACTIONS(1536),
    [anon_sym_RBRACE] = ACTIONS(1536),
    [anon_sym_AT] = ACTIONS(1536),
    [anon_sym_static] = ACTIONS(1538),
    [anon_sym_class] = ACTIONS(1538),
    [anon_sym_public] = ACTIONS(1538),
    [anon_sym_protected] = ACTIONS(1538),
    [anon_sym_private] = ACTIONS(1538),
    [anon_sym_abstract] = ACTIONS(1538),
    [anon_sym_final] = ACTIONS(1538),
    [anon_sym_strictfp] = ACTIONS(1538),
    [anon_sym_default] = ACTIONS(1538),
    [anon_sym_synchronized] = ACTIONS(1538),
    [anon_sym_native] = ACTIONS(1538),
    [anon_sym_void] = ACTIONS(1538),
    [anon_sym_interface] = ACTIONS(1538),
    [sym_identifier] = ACTIONS(1540),
    [sym_comment] = ACTIONS(54),
  },
  [590] = {
    [sym__expression] = STATE(742),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [591] = {
    [sym__expression] = STATE(743),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(360),
    [anon_sym_TILDE] = ACTIONS(360),
    [anon_sym_PLUS_PLUS] = ACTIONS(362),
    [anon_sym_DASH_DASH] = ACTIONS(362),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [592] = {
    [sym__expression] = STATE(744),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(886),
    [anon_sym_DASH_DASH] = ACTIONS(886),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [593] = {
    [sym__expression] = STATE(745),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(886),
    [anon_sym_DASH_DASH] = ACTIONS(886),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [594] = {
    [sym__expression] = STATE(746),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(886),
    [anon_sym_DASH_DASH] = ACTIONS(886),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [595] = {
    [sym__expression] = STATE(747),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(886),
    [anon_sym_DASH_DASH] = ACTIONS(886),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [596] = {
    [sym__expression] = STATE(170),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(886),
    [anon_sym_DASH_DASH] = ACTIONS(886),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [597] = {
    [sym__statement] = STATE(748),
    [sym__literal] = STATE(757),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(758),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_else_if_clause] = STATE(759),
    [sym_else_clause] = STATE(748),
    [sym__annotation] = STATE(28),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym__declaration] = STATE(760),
    [sym_module_declaration] = STATE(761),
    [sym_package_declaration] = STATE(761),
    [sym_import_statement] = STATE(761),
    [sym_single_type_import_declaration] = STATE(762),
    [sym_type_import_on_declaraction] = STATE(762),
    [sym_single_static_import_declaration] = STATE(762),
    [sym_static_import_on_demand_declaration] = STATE(762),
    [sym_class_declaration] = STATE(761),
    [sym_normal_class_declaration] = STATE(188),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(761),
    [sym_annotation_type_declaration] = STATE(763),
    [sym_normal_interface_declaration] = STATE(763),
    [sym_method_header] = STATE(764),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(761),
    [aux_sym_if_then_statement_repeat1] = STATE(765),
    [aux_sym_class_or_interface_type_repeat1] = STATE(766),
    [aux_sym_normal_class_declaration_repeat1] = STATE(767),
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
    [anon_sym_if] = ACTIONS(1542),
    [anon_sym_LBRACE] = ACTIONS(1544),
    [anon_sym_RBRACE] = ACTIONS(1544),
    [anon_sym_elseif] = ACTIONS(1546),
    [anon_sym_else] = ACTIONS(1548),
    [anon_sym_AT] = ACTIONS(1550),
    [anon_sym_open] = ACTIONS(1552),
    [anon_sym_module] = ACTIONS(1554),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_package] = ACTIONS(1556),
    [anon_sym_import] = ACTIONS(1558),
    [anon_sym_class] = ACTIONS(1120),
    [anon_sym_public] = ACTIONS(40),
    [anon_sym_protected] = ACTIONS(40),
    [anon_sym_private] = ACTIONS(40),
    [anon_sym_abstract] = ACTIONS(40),
    [anon_sym_final] = ACTIONS(40),
    [anon_sym_strictfp] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_synchronized] = ACTIONS(40),
    [anon_sym_native] = ACTIONS(40),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(1560),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(54),
  },
  [598] = {
    [sym__expression] = STATE(768),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [599] = {
    [anon_sym_AT] = ACTIONS(730),
    [anon_sym_static] = ACTIONS(732),
    [anon_sym_class] = ACTIONS(732),
    [anon_sym_public] = ACTIONS(732),
    [anon_sym_protected] = ACTIONS(732),
    [anon_sym_private] = ACTIONS(732),
    [anon_sym_abstract] = ACTIONS(732),
    [anon_sym_final] = ACTIONS(732),
    [anon_sym_strictfp] = ACTIONS(732),
    [anon_sym_default] = ACTIONS(732),
    [anon_sym_synchronized] = ACTIONS(732),
    [anon_sym_native] = ACTIONS(732),
    [sym_identifier] = ACTIONS(958),
    [sym_comment] = ACTIONS(54),
  },
  [600] = {
    [anon_sym_RPAREN] = ACTIONS(1562),
    [anon_sym_EQ] = ACTIONS(736),
    [sym_comment] = ACTIONS(54),
  },
  [601] = {
    [anon_sym_RPAREN] = ACTIONS(1562),
    [sym_comment] = ACTIONS(54),
  },
  [602] = {
    [anon_sym_RPAREN] = ACTIONS(1564),
    [sym_comment] = ACTIONS(54),
  },
  [603] = {
    [anon_sym_LPAREN] = ACTIONS(744),
    [anon_sym_DOT] = ACTIONS(744),
    [anon_sym_AT] = ACTIONS(744),
    [anon_sym_static] = ACTIONS(746),
    [anon_sym_class] = ACTIONS(746),
    [anon_sym_public] = ACTIONS(746),
    [anon_sym_protected] = ACTIONS(746),
    [anon_sym_private] = ACTIONS(746),
    [anon_sym_abstract] = ACTIONS(746),
    [anon_sym_final] = ACTIONS(746),
    [anon_sym_strictfp] = ACTIONS(746),
    [anon_sym_default] = ACTIONS(746),
    [anon_sym_synchronized] = ACTIONS(746),
    [anon_sym_native] = ACTIONS(746),
    [sym_identifier] = ACTIONS(964),
    [sym_comment] = ACTIONS(54),
  },
  [604] = {
    [anon_sym_if] = ACTIONS(788),
    [anon_sym_RBRACE] = ACTIONS(788),
    [anon_sym_elseif] = ACTIONS(788),
    [anon_sym_DOT] = ACTIONS(788),
    [anon_sym_LBRACK] = ACTIONS(788),
    [anon_sym_AT] = ACTIONS(788),
    [anon_sym_static] = ACTIONS(788),
    [anon_sym_class] = ACTIONS(788),
    [anon_sym_public] = ACTIONS(788),
    [anon_sym_protected] = ACTIONS(788),
    [anon_sym_private] = ACTIONS(788),
    [anon_sym_abstract] = ACTIONS(788),
    [anon_sym_final] = ACTIONS(788),
    [anon_sym_strictfp] = ACTIONS(788),
    [anon_sym_default] = ACTIONS(788),
    [anon_sym_synchronized] = ACTIONS(788),
    [anon_sym_native] = ACTIONS(788),
    [anon_sym_COLON_COLON] = ACTIONS(788),
    [sym_comment] = ACTIONS(54),
  },
  [605] = {
    [sym__annotation] = STATE(257),
    [sym_normal_annotation] = STATE(261),
    [sym_marker_annotation] = STATE(261),
    [sym_single_element_annotation] = STATE(261),
    [sym_class_declaration] = STATE(252),
    [sym_normal_class_declaration] = STATE(262),
    [sym_modifier] = STATE(263),
    [sym_type_parameters] = STATE(264),
    [sym_class_body_declaration] = STATE(412),
    [sym_constructor_declaration] = STATE(266),
    [sym_constructor_declarator] = STATE(267),
    [sym_class_member_declaration] = STATE(266),
    [sym_interface_declaration] = STATE(252),
    [sym_annotation_type_declaration] = STATE(268),
    [sym_normal_interface_declaration] = STATE(268),
    [sym_method_header] = STATE(269),
    [sym_result] = STATE(38),
    [sym_block] = STATE(266),
    [sym_method_declaration] = STATE(252),
    [aux_sym_normal_class_declaration_repeat1] = STATE(270),
    [sym__semicolon] = ACTIONS(526),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LBRACE] = ACTIONS(530),
    [anon_sym_RBRACE] = ACTIONS(1566),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(538),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(540),
    [sym_identifier] = ACTIONS(542),
    [sym_comment] = ACTIONS(54),
  },
  [606] = {
    [sym_super_interfaces] = STATE(772),
    [sym_class_body] = STATE(773),
    [anon_sym_LBRACE] = ACTIONS(892),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [607] = {
    [sym_class_body] = STATE(773),
    [anon_sym_LBRACE] = ACTIONS(892),
    [sym_comment] = ACTIONS(54),
  },
  [608] = {
    [anon_sym_if] = ACTIONS(838),
    [anon_sym_RBRACE] = ACTIONS(838),
    [anon_sym_elseif] = ACTIONS(838),
    [anon_sym_AT] = ACTIONS(838),
    [anon_sym_static] = ACTIONS(838),
    [anon_sym_class] = ACTIONS(838),
    [anon_sym_public] = ACTIONS(838),
    [anon_sym_protected] = ACTIONS(838),
    [anon_sym_private] = ACTIONS(838),
    [anon_sym_abstract] = ACTIONS(838),
    [anon_sym_final] = ACTIONS(838),
    [anon_sym_strictfp] = ACTIONS(838),
    [anon_sym_default] = ACTIONS(838),
    [anon_sym_synchronized] = ACTIONS(838),
    [anon_sym_native] = ACTIONS(838),
    [sym_comment] = ACTIONS(54),
  },
  [609] = {
    [sym_superclass] = STATE(774),
    [sym_super_interfaces] = STATE(772),
    [sym_class_body] = STATE(773),
    [anon_sym_LBRACE] = ACTIONS(892),
    [anon_sym_extends] = ACTIONS(342),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [610] = {
    [sym__semicolon] = ACTIONS(1568),
    [anon_sym_LBRACE] = ACTIONS(1568),
    [anon_sym_throws] = ACTIONS(1568),
    [sym_comment] = ACTIONS(54),
  },
  [611] = {
    [aux_sym_type_arguments_repeat1] = STATE(776),
    [anon_sym_GT] = ACTIONS(1570),
    [anon_sym_COMMA] = ACTIONS(1274),
    [sym_comment] = ACTIONS(54),
  },
  [612] = {
    [sym_type_arguments] = STATE(777),
    [anon_sym_LT] = ACTIONS(914),
    [anon_sym_DOT] = ACTIONS(1282),
    [anon_sym_AT] = ACTIONS(1282),
    [sym_identifier] = ACTIONS(1572),
    [sym_comment] = ACTIONS(54),
  },
  [613] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1574),
    [sym_comment] = ACTIONS(54),
  },
  [614] = {
    [anon_sym_DOT] = ACTIONS(1244),
    [anon_sym_AT] = ACTIONS(1286),
    [sym_identifier] = ACTIONS(1576),
    [sym_comment] = ACTIONS(54),
  },
  [615] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(779),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1574),
    [sym_comment] = ACTIONS(54),
  },
  [616] = {
    [sym__semicolon] = ACTIONS(1578),
    [anon_sym_COMMA] = ACTIONS(1578),
    [anon_sym_LBRACE] = ACTIONS(1578),
    [sym_comment] = ACTIONS(54),
  },
  [617] = {
    [sym__semicolon] = ACTIONS(1580),
    [anon_sym_COMMA] = ACTIONS(1580),
    [anon_sym_LBRACE] = ACTIONS(1580),
    [sym_comment] = ACTIONS(54),
  },
  [618] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(780),
    [anon_sym_DOT] = ACTIONS(916),
    [anon_sym_AT] = ACTIONS(1286),
    [sym_identifier] = ACTIONS(1576),
    [sym_comment] = ACTIONS(54),
  },
  [619] = {
    [sym_module_directive] = STATE(386),
    [anon_sym_RBRACE] = ACTIONS(1582),
    [anon_sym_requires] = ACTIONS(500),
    [anon_sym_exports] = ACTIONS(502),
    [anon_sym_opens] = ACTIONS(502),
    [anon_sym_uses] = ACTIONS(504),
    [anon_sym_provides] = ACTIONS(506),
    [sym_comment] = ACTIONS(54),
  },
  [620] = {
    [sym_class_body] = STATE(782),
    [anon_sym_LBRACE] = ACTIONS(340),
    [sym_comment] = ACTIONS(54),
  },
  [621] = {
    [ts_builtin_sym_end] = ACTIONS(1584),
    [sym_decimal_integer_literal] = ACTIONS(1586),
    [sym_hex_integer_literal] = ACTIONS(1586),
    [sym_octal_integer_literal] = ACTIONS(1586),
    [sym_binary_integer_literal] = ACTIONS(1586),
    [sym_decimal_floating_point_literal] = ACTIONS(1586),
    [sym_hex_floating_point_literal] = ACTIONS(1588),
    [anon_sym_true] = ACTIONS(1586),
    [anon_sym_false] = ACTIONS(1586),
    [anon_sym_SQUOTE] = ACTIONS(1584),
    [sym_string_literal] = ACTIONS(1584),
    [sym_null_literal] = ACTIONS(1586),
    [anon_sym_LT] = ACTIONS(1584),
    [anon_sym_LPAREN] = ACTIONS(1584),
    [anon_sym_BANG] = ACTIONS(1584),
    [anon_sym_TILDE] = ACTIONS(1584),
    [anon_sym_PLUS_PLUS] = ACTIONS(1584),
    [anon_sym_DASH_DASH] = ACTIONS(1584),
    [anon_sym_RBRACE] = ACTIONS(1584),
    [anon_sym_AT] = ACTIONS(1584),
    [anon_sym_open] = ACTIONS(1586),
    [anon_sym_module] = ACTIONS(1586),
    [anon_sym_static] = ACTIONS(1586),
    [anon_sym_package] = ACTIONS(1586),
    [anon_sym_import] = ACTIONS(1586),
    [anon_sym_class] = ACTIONS(1586),
    [anon_sym_public] = ACTIONS(1586),
    [anon_sym_protected] = ACTIONS(1586),
    [anon_sym_private] = ACTIONS(1586),
    [anon_sym_abstract] = ACTIONS(1586),
    [anon_sym_final] = ACTIONS(1586),
    [anon_sym_strictfp] = ACTIONS(1586),
    [anon_sym_default] = ACTIONS(1586),
    [anon_sym_synchronized] = ACTIONS(1586),
    [anon_sym_native] = ACTIONS(1586),
    [anon_sym_void] = ACTIONS(1586),
    [anon_sym_interface] = ACTIONS(1586),
    [sym_identifier] = ACTIONS(1588),
    [sym_comment] = ACTIONS(54),
  },
  [622] = {
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_DOT] = ACTIONS(314),
    [anon_sym_boolean] = ACTIONS(316),
    [anon_sym_byte] = ACTIONS(316),
    [anon_sym_short] = ACTIONS(316),
    [anon_sym_int] = ACTIONS(316),
    [anon_sym_long] = ACTIONS(316),
    [anon_sym_char] = ACTIONS(316),
    [anon_sym_float] = ACTIONS(316),
    [anon_sym_double] = ACTIONS(316),
    [anon_sym_AT] = ACTIONS(314),
    [sym_identifier] = ACTIONS(440),
    [sym_comment] = ACTIONS(54),
  },
  [623] = {
    [anon_sym_LPAREN] = ACTIONS(1590),
    [anon_sym_DOT] = ACTIONS(1592),
    [anon_sym_boolean] = ACTIONS(324),
    [anon_sym_byte] = ACTIONS(324),
    [anon_sym_short] = ACTIONS(324),
    [anon_sym_int] = ACTIONS(324),
    [anon_sym_long] = ACTIONS(324),
    [anon_sym_char] = ACTIONS(324),
    [anon_sym_float] = ACTIONS(324),
    [anon_sym_double] = ACTIONS(324),
    [anon_sym_AT] = ACTIONS(318),
    [sym_identifier] = ACTIONS(446),
    [sym_comment] = ACTIONS(54),
  },
  [624] = {
    [anon_sym_GT] = ACTIONS(1594),
    [anon_sym_AMP] = ACTIONS(1594),
    [anon_sym_LPAREN] = ACTIONS(1594),
    [anon_sym_COMMA] = ACTIONS(1594),
    [anon_sym_LBRACE] = ACTIONS(1594),
    [anon_sym_DOT] = ACTIONS(1594),
    [anon_sym_LBRACK] = ACTIONS(1594),
    [anon_sym_AT] = ACTIONS(1594),
    [anon_sym_implements] = ACTIONS(1594),
    [anon_sym_this] = ACTIONS(1594),
    [anon_sym_super] = ACTIONS(1594),
    [anon_sym_new] = ACTIONS(1594),
    [anon_sym_COLON_COLON] = ACTIONS(1594),
    [sym_comment] = ACTIONS(54),
  },
  [625] = {
    [sym_type_argument] = STATE(785),
    [sym_reference_type] = STATE(469),
    [sym_class_or_interface_type] = STATE(470),
    [sym_primitive_type] = STATE(471),
    [sym_integral_type] = STATE(53),
    [sym_floating_point_type] = STATE(53),
    [sym__annotation] = STATE(472),
    [sym_normal_annotation] = STATE(473),
    [sym_marker_annotation] = STATE(473),
    [sym_single_element_annotation] = STATE(473),
    [aux_sym_class_or_interface_type_repeat1] = STATE(474),
    [anon_sym_boolean] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(78),
    [anon_sym_short] = ACTIONS(78),
    [anon_sym_int] = ACTIONS(78),
    [anon_sym_long] = ACTIONS(78),
    [anon_sym_char] = ACTIONS(78),
    [anon_sym_float] = ACTIONS(80),
    [anon_sym_double] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(938),
    [sym_identifier] = ACTIONS(940),
    [sym_comment] = ACTIONS(54),
  },
  [626] = {
    [anon_sym_GT] = ACTIONS(1596),
    [anon_sym_COMMA] = ACTIONS(1598),
    [sym_comment] = ACTIONS(54),
  },
  [627] = {
    [anon_sym_GT] = ACTIONS(1600),
    [anon_sym_COMMA] = ACTIONS(1600),
    [sym_comment] = ACTIONS(54),
  },
  [628] = {
    [anon_sym_boolean] = ACTIONS(432),
    [anon_sym_byte] = ACTIONS(432),
    [anon_sym_short] = ACTIONS(432),
    [anon_sym_int] = ACTIONS(432),
    [anon_sym_long] = ACTIONS(432),
    [anon_sym_char] = ACTIONS(432),
    [anon_sym_float] = ACTIONS(432),
    [anon_sym_double] = ACTIONS(432),
    [anon_sym_AT] = ACTIONS(402),
    [sym_identifier] = ACTIONS(476),
    [sym_comment] = ACTIONS(54),
  },
  [629] = {
    [anon_sym_GT] = ACTIONS(1602),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_COMMA] = ACTIONS(1602),
    [anon_sym_LBRACE] = ACTIONS(1602),
    [anon_sym_DOT] = ACTIONS(1602),
    [anon_sym_LBRACK] = ACTIONS(1602),
    [anon_sym_AT] = ACTIONS(1602),
    [anon_sym_implements] = ACTIONS(1602),
    [anon_sym_COLON_COLON] = ACTIONS(1602),
    [sym_comment] = ACTIONS(54),
  },
  [630] = {
    [sym_type_arguments] = STATE(788),
    [anon_sym_GT] = ACTIONS(1602),
    [anon_sym_LT] = ACTIONS(660),
    [anon_sym_AMP] = ACTIONS(1602),
    [anon_sym_COMMA] = ACTIONS(1602),
    [anon_sym_LBRACE] = ACTIONS(1602),
    [anon_sym_DOT] = ACTIONS(1602),
    [anon_sym_LBRACK] = ACTIONS(1602),
    [anon_sym_AT] = ACTIONS(1602),
    [anon_sym_implements] = ACTIONS(1602),
    [anon_sym_COLON_COLON] = ACTIONS(1602),
    [sym_comment] = ACTIONS(54),
  },
  [631] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1604),
    [sym_comment] = ACTIONS(54),
  },
  [632] = {
    [anon_sym_GT] = ACTIONS(1606),
    [anon_sym_AMP] = ACTIONS(1606),
    [anon_sym_COMMA] = ACTIONS(1606),
    [sym_comment] = ACTIONS(54),
  },
  [633] = {
    [anon_sym_GT] = ACTIONS(1608),
    [anon_sym_AMP] = ACTIONS(1608),
    [anon_sym_COMMA] = ACTIONS(1608),
    [anon_sym_LBRACE] = ACTIONS(1608),
    [anon_sym_DOT] = ACTIONS(946),
    [anon_sym_LBRACK] = ACTIONS(1608),
    [anon_sym_AT] = ACTIONS(1608),
    [anon_sym_implements] = ACTIONS(1608),
    [anon_sym_COLON_COLON] = ACTIONS(1608),
    [sym_comment] = ACTIONS(54),
  },
  [634] = {
    [sym__semicolon] = ACTIONS(1610),
    [anon_sym_GT] = ACTIONS(1610),
    [anon_sym_RPAREN] = ACTIONS(1610),
    [anon_sym_COMMA] = ACTIONS(1610),
    [anon_sym_LBRACE] = ACTIONS(1610),
    [anon_sym_DOT] = ACTIONS(1610),
    [anon_sym_LBRACK] = ACTIONS(1610),
    [anon_sym_AT] = ACTIONS(1610),
    [anon_sym_EQ] = ACTIONS(1610),
    [anon_sym_default] = ACTIONS(1610),
    [anon_sym_COLON_COLON] = ACTIONS(1610),
    [anon_sym_throws] = ACTIONS(1610),
    [sym_comment] = ACTIONS(54),
  },
  [635] = {
    [anon_sym_boolean] = ACTIONS(1028),
    [anon_sym_byte] = ACTIONS(1028),
    [anon_sym_short] = ACTIONS(1028),
    [anon_sym_int] = ACTIONS(1028),
    [anon_sym_long] = ACTIONS(1028),
    [anon_sym_char] = ACTIONS(1028),
    [anon_sym_float] = ACTIONS(1028),
    [anon_sym_double] = ACTIONS(1028),
    [anon_sym_AT] = ACTIONS(1026),
    [anon_sym_this] = ACTIONS(1028),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1026),
    [sym_identifier] = ACTIONS(1290),
    [sym_comment] = ACTIONS(54),
  },
  [636] = {
    [anon_sym_boolean] = ACTIONS(1038),
    [anon_sym_byte] = ACTIONS(1038),
    [anon_sym_short] = ACTIONS(1038),
    [anon_sym_int] = ACTIONS(1038),
    [anon_sym_long] = ACTIONS(1038),
    [anon_sym_char] = ACTIONS(1038),
    [anon_sym_float] = ACTIONS(1038),
    [anon_sym_double] = ACTIONS(1038),
    [anon_sym_AT] = ACTIONS(1036),
    [anon_sym_this] = ACTIONS(1038),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1036),
    [sym_identifier] = ACTIONS(1292),
    [sym_comment] = ACTIONS(54),
  },
  [637] = {
    [sym_annotation_type_body] = STATE(791),
    [anon_sym_LBRACE] = ACTIONS(1612),
    [sym_comment] = ACTIONS(54),
  },
  [638] = {
    [sym__literal] = STATE(794),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(795),
    [sym_element_value_pair] = STATE(237),
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
    [anon_sym_RPAREN] = ACTIONS(1614),
    [sym_identifier] = ACTIONS(1616),
    [sym_comment] = ACTIONS(54),
  },
  [639] = {
    [sym_identifier] = ACTIONS(1618),
    [sym_comment] = ACTIONS(54),
  },
  [640] = {
    [sym__annotation] = STATE(257),
    [sym_normal_annotation] = STATE(261),
    [sym_marker_annotation] = STATE(261),
    [sym_single_element_annotation] = STATE(261),
    [sym_class_declaration] = STATE(252),
    [sym_normal_class_declaration] = STATE(262),
    [sym_modifier] = STATE(263),
    [sym_type_parameters] = STATE(264),
    [sym_class_body_declaration] = STATE(265),
    [sym_constructor_declaration] = STATE(266),
    [sym_constructor_declarator] = STATE(267),
    [sym_class_member_declaration] = STATE(266),
    [sym_interface_declaration] = STATE(252),
    [sym_annotation_type_declaration] = STATE(268),
    [sym_normal_interface_declaration] = STATE(268),
    [sym_method_header] = STATE(269),
    [sym_result] = STATE(38),
    [sym_block] = STATE(266),
    [sym_method_declaration] = STATE(252),
    [aux_sym_normal_class_declaration_repeat1] = STATE(270),
    [aux_sym_class_body_repeat1] = STATE(798),
    [sym__semicolon] = ACTIONS(526),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LBRACE] = ACTIONS(530),
    [anon_sym_RBRACE] = ACTIONS(1620),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(538),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(540),
    [sym_identifier] = ACTIONS(542),
    [sym_comment] = ACTIONS(54),
  },
  [641] = {
    [sym_superclass] = STATE(799),
    [sym_super_interfaces] = STATE(800),
    [sym_class_body] = STATE(801),
    [anon_sym_LBRACE] = ACTIONS(1308),
    [anon_sym_extends] = ACTIONS(342),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [642] = {
    [sym_super_interfaces] = STATE(800),
    [sym_class_body] = STATE(801),
    [anon_sym_LBRACE] = ACTIONS(1308),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [643] = {
    [sym_class_body] = STATE(801),
    [anon_sym_LBRACE] = ACTIONS(1308),
    [sym_comment] = ACTIONS(54),
  },
  [644] = {
    [anon_sym_RBRACE] = ACTIONS(544),
    [anon_sym_AT] = ACTIONS(544),
    [anon_sym_static] = ACTIONS(546),
    [anon_sym_class] = ACTIONS(546),
    [anon_sym_public] = ACTIONS(546),
    [anon_sym_protected] = ACTIONS(546),
    [anon_sym_private] = ACTIONS(546),
    [anon_sym_abstract] = ACTIONS(546),
    [anon_sym_final] = ACTIONS(546),
    [anon_sym_strictfp] = ACTIONS(546),
    [anon_sym_default] = ACTIONS(546),
    [anon_sym_synchronized] = ACTIONS(546),
    [anon_sym_native] = ACTIONS(546),
    [anon_sym_interface] = ACTIONS(546),
    [sym_identifier] = ACTIONS(548),
    [sym_comment] = ACTIONS(54),
  },
  [645] = {
    [sym__annotation] = STATE(257),
    [sym_normal_annotation] = STATE(261),
    [sym_marker_annotation] = STATE(261),
    [sym_single_element_annotation] = STATE(261),
    [sym_class_declaration] = STATE(278),
    [sym_normal_class_declaration] = STATE(262),
    [sym_modifier] = STATE(263),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(278),
    [sym_annotation_type_declaration] = STATE(268),
    [sym_normal_interface_declaration] = STATE(268),
    [sym_interface_member_declaration] = STATE(280),
    [sym_constant_declaration] = STATE(278),
    [sym_variable_declarator_list] = STATE(281),
    [sym_variable_declarator] = STATE(282),
    [sym_variable_declarator_id] = STATE(126),
    [sym_method_header] = STATE(269),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(278),
    [aux_sym_normal_class_declaration_repeat1] = STATE(283),
    [aux_sym_interface_body_repeat1] = STATE(803),
    [sym__semicolon] = ACTIONS(550),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(1622),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(538),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(540),
    [sym_identifier] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [646] = {
    [sym_extends_interfaces] = STATE(804),
    [sym_interface_body] = STATE(805),
    [anon_sym_LBRACE] = ACTIONS(1310),
    [anon_sym_extends] = ACTIONS(348),
    [sym_comment] = ACTIONS(54),
  },
  [647] = {
    [sym_interface_body] = STATE(805),
    [anon_sym_LBRACE] = ACTIONS(1310),
    [sym_comment] = ACTIONS(54),
  },
  [648] = {
    [anon_sym_RBRACE] = ACTIONS(556),
    [anon_sym_AT] = ACTIONS(556),
    [anon_sym_static] = ACTIONS(558),
    [anon_sym_class] = ACTIONS(558),
    [anon_sym_public] = ACTIONS(558),
    [anon_sym_protected] = ACTIONS(558),
    [anon_sym_private] = ACTIONS(558),
    [anon_sym_abstract] = ACTIONS(558),
    [anon_sym_final] = ACTIONS(558),
    [anon_sym_strictfp] = ACTIONS(558),
    [anon_sym_default] = ACTIONS(558),
    [anon_sym_synchronized] = ACTIONS(558),
    [anon_sym_native] = ACTIONS(558),
    [anon_sym_interface] = ACTIONS(558),
    [sym_identifier] = ACTIONS(560),
    [sym_comment] = ACTIONS(54),
  },
  [649] = {
    [sym_dims] = STATE(808),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_default_value] = STATE(809),
    [aux_sym_class_or_interface_type_repeat1] = STATE(217),
    [aux_sym_dims_repeat1] = STATE(218),
    [sym__semicolon] = ACTIONS(1624),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_default] = ACTIONS(1626),
    [sym_comment] = ACTIONS(54),
  },
  [650] = {
    [sym_identifier] = ACTIONS(1628),
    [sym_comment] = ACTIONS(54),
  },
  [651] = {
    [sym_type_parameters] = STATE(811),
    [sym_superclass] = STATE(799),
    [sym_super_interfaces] = STATE(800),
    [sym_class_body] = STATE(801),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(1308),
    [anon_sym_extends] = ACTIONS(342),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [652] = {
    [sym_type_parameters] = STATE(812),
    [sym_extends_interfaces] = STATE(804),
    [sym_interface_body] = STATE(805),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(1310),
    [anon_sym_extends] = ACTIONS(348),
    [sym_comment] = ACTIONS(54),
  },
  [653] = {
    [anon_sym_RPAREN] = ACTIONS(1630),
    [sym_comment] = ACTIONS(54),
  },
  [654] = {
    [anon_sym_RBRACE] = ACTIONS(1536),
    [anon_sym_AT] = ACTIONS(1536),
    [anon_sym_static] = ACTIONS(1538),
    [anon_sym_class] = ACTIONS(1538),
    [anon_sym_public] = ACTIONS(1538),
    [anon_sym_protected] = ACTIONS(1538),
    [anon_sym_private] = ACTIONS(1538),
    [anon_sym_abstract] = ACTIONS(1538),
    [anon_sym_final] = ACTIONS(1538),
    [anon_sym_strictfp] = ACTIONS(1538),
    [anon_sym_default] = ACTIONS(1538),
    [anon_sym_synchronized] = ACTIONS(1538),
    [anon_sym_native] = ACTIONS(1538),
    [anon_sym_interface] = ACTIONS(1538),
    [sym_identifier] = ACTIONS(1540),
    [sym_comment] = ACTIONS(54),
  },
  [655] = {
    [sym__expression] = STATE(69),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [656] = {
    [sym__expression] = STATE(70),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [657] = {
    [anon_sym_GT] = ACTIONS(1632),
    [anon_sym_LT] = ACTIONS(306),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [anon_sym_GT_EQ] = ACTIONS(1634),
    [anon_sym_LT_EQ] = ACTIONS(1634),
    [anon_sym_BANG_EQ] = ACTIONS(304),
    [anon_sym_AMP_AMP] = ACTIONS(304),
    [anon_sym_PIPE_PIPE] = ACTIONS(304),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(1636),
    [anon_sym_PIPE] = ACTIONS(306),
    [anon_sym_CARET] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(304),
    [anon_sym_LT_LT] = ACTIONS(304),
    [anon_sym_GT_GT] = ACTIONS(306),
    [anon_sym_GT_GT_GT] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_QMARK] = ACTIONS(304),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [658] = {
    [anon_sym_RBRACE] = ACTIONS(1638),
    [sym_comment] = ACTIONS(54),
  },
  [659] = {
    [sym__expression] = STATE(823),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1640),
    [anon_sym_TILDE] = ACTIONS(1640),
    [anon_sym_PLUS_PLUS] = ACTIONS(1642),
    [anon_sym_DASH_DASH] = ACTIONS(1642),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [660] = {
    [sym__semicolon] = ACTIONS(1644),
    [anon_sym_RPAREN] = ACTIONS(1644),
    [anon_sym_COMMA] = ACTIONS(1644),
    [anon_sym_RBRACE] = ACTIONS(1644),
    [sym_comment] = ACTIONS(54),
  },
  [661] = {
    [aux_sym_element_value_array_initializer_repeat1] = STATE(825),
    [anon_sym_COMMA] = ACTIONS(1646),
    [anon_sym_RBRACE] = ACTIONS(1638),
    [sym_comment] = ACTIONS(54),
  },
  [662] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(1648),
    [anon_sym_COMMA] = ACTIONS(1356),
    [anon_sym_QMARK] = ACTIONS(1650),
    [anon_sym_RBRACE] = ACTIONS(1356),
    [sym_comment] = ACTIONS(54),
  },
  [663] = {
    [anon_sym_AMP_AMP] = ACTIONS(1652),
    [anon_sym_PIPE_PIPE] = ACTIONS(1362),
    [anon_sym_COMMA] = ACTIONS(1362),
    [anon_sym_QMARK] = ACTIONS(1362),
    [anon_sym_RBRACE] = ACTIONS(1362),
    [sym_comment] = ACTIONS(54),
  },
  [664] = {
    [anon_sym_AMP_AMP] = ACTIONS(1364),
    [anon_sym_PIPE_PIPE] = ACTIONS(1364),
    [anon_sym_PIPE] = ACTIONS(1654),
    [anon_sym_COMMA] = ACTIONS(1364),
    [anon_sym_QMARK] = ACTIONS(1364),
    [anon_sym_RBRACE] = ACTIONS(1364),
    [sym_comment] = ACTIONS(54),
  },
  [665] = {
    [anon_sym_AMP_AMP] = ACTIONS(1368),
    [anon_sym_PIPE_PIPE] = ACTIONS(1368),
    [anon_sym_PIPE] = ACTIONS(1370),
    [anon_sym_CARET] = ACTIONS(1656),
    [anon_sym_COMMA] = ACTIONS(1368),
    [anon_sym_QMARK] = ACTIONS(1368),
    [anon_sym_RBRACE] = ACTIONS(1368),
    [sym_comment] = ACTIONS(54),
  },
  [666] = {
    [anon_sym_LT] = ACTIONS(1658),
    [anon_sym_EQ_EQ] = ACTIONS(1380),
    [anon_sym_BANG_EQ] = ACTIONS(1380),
    [anon_sym_AMP_AMP] = ACTIONS(1382),
    [anon_sym_PIPE_PIPE] = ACTIONS(1382),
    [anon_sym_PIPE] = ACTIONS(1384),
    [anon_sym_CARET] = ACTIONS(1382),
    [anon_sym_COMMA] = ACTIONS(1382),
    [anon_sym_QMARK] = ACTIONS(1382),
    [anon_sym_RBRACE] = ACTIONS(1382),
    [sym_comment] = ACTIONS(54),
  },
  [667] = {
    [anon_sym_EQ_EQ] = ACTIONS(1660),
    [anon_sym_BANG_EQ] = ACTIONS(1660),
    [sym_comment] = ACTIONS(54),
  },
  [668] = {
    [anon_sym_LT] = ACTIONS(1388),
    [anon_sym_EQ_EQ] = ACTIONS(1390),
    [anon_sym_BANG_EQ] = ACTIONS(1390),
    [anon_sym_AMP_AMP] = ACTIONS(1390),
    [anon_sym_PIPE_PIPE] = ACTIONS(1390),
    [anon_sym_PIPE] = ACTIONS(1388),
    [anon_sym_CARET] = ACTIONS(1390),
    [anon_sym_LT_LT] = ACTIONS(1662),
    [anon_sym_GT_GT] = ACTIONS(1664),
    [anon_sym_GT_GT_GT] = ACTIONS(1662),
    [anon_sym_COMMA] = ACTIONS(1390),
    [anon_sym_QMARK] = ACTIONS(1390),
    [anon_sym_RBRACE] = ACTIONS(1390),
    [sym_comment] = ACTIONS(54),
  },
  [669] = {
    [anon_sym_LT] = ACTIONS(1396),
    [anon_sym_EQ_EQ] = ACTIONS(1398),
    [anon_sym_BANG_EQ] = ACTIONS(1398),
    [anon_sym_AMP_AMP] = ACTIONS(1398),
    [anon_sym_PIPE_PIPE] = ACTIONS(1398),
    [anon_sym_PLUS] = ACTIONS(1666),
    [anon_sym_DASH] = ACTIONS(1666),
    [anon_sym_PIPE] = ACTIONS(1396),
    [anon_sym_CARET] = ACTIONS(1398),
    [anon_sym_LT_LT] = ACTIONS(1398),
    [anon_sym_GT_GT] = ACTIONS(1396),
    [anon_sym_GT_GT_GT] = ACTIONS(1398),
    [anon_sym_COMMA] = ACTIONS(1398),
    [anon_sym_QMARK] = ACTIONS(1398),
    [anon_sym_RBRACE] = ACTIONS(1398),
    [sym_comment] = ACTIONS(54),
  },
  [670] = {
    [anon_sym_LT] = ACTIONS(1402),
    [anon_sym_EQ_EQ] = ACTIONS(1404),
    [anon_sym_BANG_EQ] = ACTIONS(1404),
    [anon_sym_AMP_AMP] = ACTIONS(1404),
    [anon_sym_PIPE_PIPE] = ACTIONS(1404),
    [anon_sym_PLUS] = ACTIONS(1404),
    [anon_sym_DASH] = ACTIONS(1404),
    [anon_sym_STAR] = ACTIONS(1668),
    [anon_sym_SLASH] = ACTIONS(1670),
    [anon_sym_PIPE] = ACTIONS(1402),
    [anon_sym_CARET] = ACTIONS(1404),
    [anon_sym_PERCENT] = ACTIONS(1668),
    [anon_sym_LT_LT] = ACTIONS(1404),
    [anon_sym_GT_GT] = ACTIONS(1402),
    [anon_sym_GT_GT_GT] = ACTIONS(1404),
    [anon_sym_COMMA] = ACTIONS(1404),
    [anon_sym_QMARK] = ACTIONS(1404),
    [anon_sym_RBRACE] = ACTIONS(1404),
    [sym_comment] = ACTIONS(54),
  },
  [671] = {
    [sym_unary_expression] = STATE(509),
    [sym_conditional_and_expression] = STATE(836),
    [sym_inclusive_or_expression] = STATE(513),
    [sym_exclusive_or_expression] = STATE(514),
    [sym_and_expression] = STATE(515),
    [sym_relational_expression] = STATE(516),
    [sym_equality_expression] = STATE(517),
    [sym_shift_expression] = STATE(518),
    [sym_additive_expression] = STATE(519),
    [sym_multiplicative_expression] = STATE(520),
    [anon_sym_BANG] = ACTIONS(1032),
    [anon_sym_TILDE] = ACTIONS(1032),
    [sym_comment] = ACTIONS(54),
  },
  [672] = {
    [sym__expression] = STATE(837),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [673] = {
    [sym_unary_expression] = STATE(509),
    [sym_inclusive_or_expression] = STATE(838),
    [sym_exclusive_or_expression] = STATE(514),
    [sym_and_expression] = STATE(515),
    [sym_relational_expression] = STATE(516),
    [sym_equality_expression] = STATE(517),
    [sym_shift_expression] = STATE(518),
    [sym_additive_expression] = STATE(519),
    [sym_multiplicative_expression] = STATE(520),
    [anon_sym_BANG] = ACTIONS(1032),
    [anon_sym_TILDE] = ACTIONS(1032),
    [sym_comment] = ACTIONS(54),
  },
  [674] = {
    [sym_unary_expression] = STATE(509),
    [sym_exclusive_or_expression] = STATE(839),
    [sym_and_expression] = STATE(515),
    [sym_relational_expression] = STATE(516),
    [sym_equality_expression] = STATE(517),
    [sym_shift_expression] = STATE(518),
    [sym_additive_expression] = STATE(519),
    [sym_multiplicative_expression] = STATE(520),
    [anon_sym_BANG] = ACTIONS(1032),
    [anon_sym_TILDE] = ACTIONS(1032),
    [sym_comment] = ACTIONS(54),
  },
  [675] = {
    [sym_unary_expression] = STATE(509),
    [sym_and_expression] = STATE(840),
    [sym_relational_expression] = STATE(516),
    [sym_equality_expression] = STATE(517),
    [sym_shift_expression] = STATE(518),
    [sym_additive_expression] = STATE(519),
    [sym_multiplicative_expression] = STATE(520),
    [anon_sym_BANG] = ACTIONS(1032),
    [anon_sym_TILDE] = ACTIONS(1032),
    [sym_comment] = ACTIONS(54),
  },
  [676] = {
    [sym_unary_expression] = STATE(509),
    [sym_shift_expression] = STATE(841),
    [sym_additive_expression] = STATE(519),
    [sym_multiplicative_expression] = STATE(520),
    [anon_sym_BANG] = ACTIONS(1032),
    [anon_sym_TILDE] = ACTIONS(1032),
    [sym_comment] = ACTIONS(54),
  },
  [677] = {
    [sym_unary_expression] = STATE(509),
    [sym_relational_expression] = STATE(842),
    [sym_shift_expression] = STATE(518),
    [sym_additive_expression] = STATE(519),
    [sym_multiplicative_expression] = STATE(520),
    [anon_sym_BANG] = ACTIONS(1032),
    [anon_sym_TILDE] = ACTIONS(1032),
    [sym_comment] = ACTIONS(54),
  },
  [678] = {
    [sym_unary_expression] = STATE(509),
    [sym_additive_expression] = STATE(843),
    [sym_multiplicative_expression] = STATE(520),
    [anon_sym_BANG] = ACTIONS(1032),
    [anon_sym_TILDE] = ACTIONS(1032),
    [sym_comment] = ACTIONS(54),
  },
  [679] = {
    [sym_unary_expression] = STATE(509),
    [sym_multiplicative_expression] = STATE(844),
    [anon_sym_BANG] = ACTIONS(1032),
    [anon_sym_TILDE] = ACTIONS(1032),
    [sym_comment] = ACTIONS(54),
  },
  [680] = {
    [sym_unary_expression] = STATE(845),
    [anon_sym_BANG] = ACTIONS(1032),
    [anon_sym_TILDE] = ACTIONS(1032),
    [sym_comment] = ACTIONS(54),
  },
  [681] = {
    [anon_sym_RPAREN] = ACTIONS(1672),
    [anon_sym_COMMA] = ACTIONS(1672),
    [sym_comment] = ACTIONS(54),
  },
  [682] = {
    [sym__semicolon] = ACTIONS(1674),
    [anon_sym_COMMA] = ACTIONS(1674),
    [anon_sym_DOT] = ACTIONS(1674),
    [sym_comment] = ACTIONS(54),
  },
  [683] = {
    [anon_sym_RBRACE] = ACTIONS(1676),
    [anon_sym_requires] = ACTIONS(1676),
    [anon_sym_exports] = ACTIONS(1676),
    [anon_sym_opens] = ACTIONS(1676),
    [anon_sym_uses] = ACTIONS(1676),
    [anon_sym_provides] = ACTIONS(1676),
    [sym_comment] = ACTIONS(54),
  },
  [684] = {
    [sym__semicolon] = ACTIONS(1678),
    [anon_sym_COMMA] = ACTIONS(1678),
    [anon_sym_DOT] = ACTIONS(1068),
    [sym_comment] = ACTIONS(54),
  },
  [685] = {
    [sym__semicolon] = ACTIONS(744),
    [anon_sym_COMMA] = ACTIONS(744),
    [anon_sym_DOT] = ACTIONS(744),
    [anon_sym_to] = ACTIONS(746),
    [sym_identifier] = ACTIONS(964),
    [sym_comment] = ACTIONS(54),
  },
  [686] = {
    [aux_sym_module_directive_repeat2] = STATE(847),
    [sym__semicolon] = ACTIONS(1680),
    [anon_sym_COMMA] = ACTIONS(1070),
    [anon_sym_DOT] = ACTIONS(1068),
    [sym_comment] = ACTIONS(54),
  },
  [687] = {
    [sym__semicolon] = ACTIONS(1680),
    [anon_sym_COMMA] = ACTIONS(1432),
    [sym_comment] = ACTIONS(54),
  },
  [688] = {
    [sym_module_name] = STATE(848),
    [sym_identifier] = ACTIONS(1428),
    [sym_comment] = ACTIONS(54),
  },
  [689] = {
    [aux_sym_module_directive_repeat3] = STATE(850),
    [sym__semicolon] = ACTIONS(1680),
    [anon_sym_COMMA] = ACTIONS(1682),
    [anon_sym_DOT] = ACTIONS(1076),
    [sym_comment] = ACTIONS(54),
  },
  [690] = {
    [sym__annotation] = STATE(356),
    [sym_normal_annotation] = STATE(360),
    [sym_marker_annotation] = STATE(360),
    [sym_single_element_annotation] = STATE(360),
    [sym_class_declaration] = STATE(361),
    [sym_normal_class_declaration] = STATE(362),
    [sym_modifier] = STATE(363),
    [sym_interface_declaration] = STATE(361),
    [sym_annotation_type_declaration] = STATE(364),
    [sym_annotation_type_member_declaration] = STATE(365),
    [sym_annotation_type_element_declaration] = STATE(361),
    [sym_normal_interface_declaration] = STATE(364),
    [sym_constant_declaration] = STATE(361),
    [sym_variable_declarator_list] = STATE(366),
    [sym_variable_declarator] = STATE(282),
    [sym_variable_declarator_id] = STATE(126),
    [aux_sym_normal_class_declaration_repeat1] = STATE(367),
    [aux_sym_annotation_type_body_repeat1] = STATE(852),
    [anon_sym_RBRACE] = ACTIONS(1684),
    [anon_sym_AT] = ACTIONS(714),
    [anon_sym_static] = ACTIONS(716),
    [anon_sym_class] = ACTIONS(718),
    [anon_sym_public] = ACTIONS(716),
    [anon_sym_protected] = ACTIONS(716),
    [anon_sym_private] = ACTIONS(716),
    [anon_sym_abstract] = ACTIONS(716),
    [anon_sym_final] = ACTIONS(716),
    [anon_sym_strictfp] = ACTIONS(716),
    [anon_sym_default] = ACTIONS(716),
    [anon_sym_synchronized] = ACTIONS(716),
    [anon_sym_native] = ACTIONS(716),
    [anon_sym_interface] = ACTIONS(720),
    [sym_identifier] = ACTIONS(722),
    [sym_comment] = ACTIONS(54),
  },
  [691] = {
    [sym__semicolon] = ACTIONS(724),
    [anon_sym_LT] = ACTIONS(724),
    [anon_sym_LBRACE] = ACTIONS(724),
    [anon_sym_RBRACE] = ACTIONS(724),
    [anon_sym_AT] = ACTIONS(724),
    [anon_sym_static] = ACTIONS(726),
    [anon_sym_class] = ACTIONS(726),
    [anon_sym_public] = ACTIONS(726),
    [anon_sym_protected] = ACTIONS(726),
    [anon_sym_private] = ACTIONS(726),
    [anon_sym_abstract] = ACTIONS(726),
    [anon_sym_final] = ACTIONS(726),
    [anon_sym_strictfp] = ACTIONS(726),
    [anon_sym_default] = ACTIONS(726),
    [anon_sym_synchronized] = ACTIONS(726),
    [anon_sym_native] = ACTIONS(726),
    [anon_sym_void] = ACTIONS(726),
    [anon_sym_interface] = ACTIONS(726),
    [sym_identifier] = ACTIONS(728),
    [sym_comment] = ACTIONS(54),
  },
  [692] = {
    [anon_sym_LT] = ACTIONS(730),
    [anon_sym_AT] = ACTIONS(730),
    [anon_sym_static] = ACTIONS(732),
    [anon_sym_class] = ACTIONS(732),
    [anon_sym_public] = ACTIONS(732),
    [anon_sym_protected] = ACTIONS(732),
    [anon_sym_private] = ACTIONS(732),
    [anon_sym_abstract] = ACTIONS(732),
    [anon_sym_final] = ACTIONS(732),
    [anon_sym_strictfp] = ACTIONS(732),
    [anon_sym_default] = ACTIONS(732),
    [anon_sym_synchronized] = ACTIONS(732),
    [anon_sym_native] = ACTIONS(732),
    [anon_sym_void] = ACTIONS(732),
    [anon_sym_interface] = ACTIONS(732),
    [sym_identifier] = ACTIONS(958),
    [sym_comment] = ACTIONS(54),
  },
  [693] = {
    [anon_sym_RPAREN] = ACTIONS(1686),
    [anon_sym_EQ] = ACTIONS(736),
    [sym_comment] = ACTIONS(54),
  },
  [694] = {
    [anon_sym_RPAREN] = ACTIONS(1686),
    [sym_comment] = ACTIONS(54),
  },
  [695] = {
    [anon_sym_RPAREN] = ACTIONS(1688),
    [sym_comment] = ACTIONS(54),
  },
  [696] = {
    [anon_sym_LT] = ACTIONS(744),
    [anon_sym_LPAREN] = ACTIONS(744),
    [anon_sym_DOT] = ACTIONS(744),
    [anon_sym_AT] = ACTIONS(744),
    [anon_sym_static] = ACTIONS(746),
    [anon_sym_class] = ACTIONS(746),
    [anon_sym_public] = ACTIONS(746),
    [anon_sym_protected] = ACTIONS(746),
    [anon_sym_private] = ACTIONS(746),
    [anon_sym_abstract] = ACTIONS(746),
    [anon_sym_final] = ACTIONS(746),
    [anon_sym_strictfp] = ACTIONS(746),
    [anon_sym_default] = ACTIONS(746),
    [anon_sym_synchronized] = ACTIONS(746),
    [anon_sym_native] = ACTIONS(746),
    [anon_sym_void] = ACTIONS(746),
    [anon_sym_interface] = ACTIONS(746),
    [sym_identifier] = ACTIONS(964),
    [sym_comment] = ACTIONS(54),
  },
  [697] = {
    [sym__semicolon] = ACTIONS(788),
    [anon_sym_LT] = ACTIONS(788),
    [anon_sym_LBRACE] = ACTIONS(788),
    [anon_sym_RBRACE] = ACTIONS(788),
    [anon_sym_AT] = ACTIONS(788),
    [anon_sym_static] = ACTIONS(790),
    [anon_sym_class] = ACTIONS(790),
    [anon_sym_public] = ACTIONS(790),
    [anon_sym_protected] = ACTIONS(790),
    [anon_sym_private] = ACTIONS(790),
    [anon_sym_abstract] = ACTIONS(790),
    [anon_sym_final] = ACTIONS(790),
    [anon_sym_strictfp] = ACTIONS(790),
    [anon_sym_default] = ACTIONS(790),
    [anon_sym_synchronized] = ACTIONS(790),
    [anon_sym_native] = ACTIONS(790),
    [anon_sym_void] = ACTIONS(790),
    [anon_sym_interface] = ACTIONS(790),
    [sym_identifier] = ACTIONS(792),
    [sym_comment] = ACTIONS(54),
  },
  [698] = {
    [sym__annotation] = STATE(257),
    [sym_normal_annotation] = STATE(261),
    [sym_marker_annotation] = STATE(261),
    [sym_single_element_annotation] = STATE(261),
    [sym_class_declaration] = STATE(252),
    [sym_normal_class_declaration] = STATE(262),
    [sym_modifier] = STATE(263),
    [sym_type_parameters] = STATE(264),
    [sym_class_body_declaration] = STATE(412),
    [sym_constructor_declaration] = STATE(266),
    [sym_constructor_declarator] = STATE(267),
    [sym_class_member_declaration] = STATE(266),
    [sym_interface_declaration] = STATE(252),
    [sym_annotation_type_declaration] = STATE(268),
    [sym_normal_interface_declaration] = STATE(268),
    [sym_method_header] = STATE(269),
    [sym_result] = STATE(38),
    [sym_block] = STATE(266),
    [sym_method_declaration] = STATE(252),
    [aux_sym_normal_class_declaration_repeat1] = STATE(270),
    [sym__semicolon] = ACTIONS(526),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LBRACE] = ACTIONS(530),
    [anon_sym_RBRACE] = ACTIONS(1690),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(538),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(540),
    [sym_identifier] = ACTIONS(542),
    [sym_comment] = ACTIONS(54),
  },
  [699] = {
    [sym_super_interfaces] = STATE(856),
    [sym_class_body] = STATE(857),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [700] = {
    [sym_class_body] = STATE(857),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [sym_comment] = ACTIONS(54),
  },
  [701] = {
    [sym__semicolon] = ACTIONS(838),
    [anon_sym_LT] = ACTIONS(838),
    [anon_sym_LBRACE] = ACTIONS(838),
    [anon_sym_RBRACE] = ACTIONS(838),
    [anon_sym_AT] = ACTIONS(838),
    [anon_sym_static] = ACTIONS(840),
    [anon_sym_class] = ACTIONS(840),
    [anon_sym_public] = ACTIONS(840),
    [anon_sym_protected] = ACTIONS(840),
    [anon_sym_private] = ACTIONS(840),
    [anon_sym_abstract] = ACTIONS(840),
    [anon_sym_final] = ACTIONS(840),
    [anon_sym_strictfp] = ACTIONS(840),
    [anon_sym_default] = ACTIONS(840),
    [anon_sym_synchronized] = ACTIONS(840),
    [anon_sym_native] = ACTIONS(840),
    [anon_sym_void] = ACTIONS(840),
    [anon_sym_interface] = ACTIONS(840),
    [sym_identifier] = ACTIONS(842),
    [sym_comment] = ACTIONS(54),
  },
  [702] = {
    [sym__semicolon] = ACTIONS(850),
    [anon_sym_LT] = ACTIONS(850),
    [anon_sym_LBRACE] = ACTIONS(850),
    [anon_sym_RBRACE] = ACTIONS(850),
    [anon_sym_AT] = ACTIONS(850),
    [anon_sym_static] = ACTIONS(852),
    [anon_sym_class] = ACTIONS(852),
    [anon_sym_public] = ACTIONS(852),
    [anon_sym_protected] = ACTIONS(852),
    [anon_sym_private] = ACTIONS(852),
    [anon_sym_abstract] = ACTIONS(852),
    [anon_sym_final] = ACTIONS(852),
    [anon_sym_strictfp] = ACTIONS(852),
    [anon_sym_default] = ACTIONS(852),
    [anon_sym_synchronized] = ACTIONS(852),
    [anon_sym_native] = ACTIONS(852),
    [anon_sym_void] = ACTIONS(852),
    [anon_sym_interface] = ACTIONS(852),
    [sym_identifier] = ACTIONS(854),
    [sym_comment] = ACTIONS(54),
  },
  [703] = {
    [sym__annotation] = STATE(257),
    [sym_normal_annotation] = STATE(261),
    [sym_marker_annotation] = STATE(261),
    [sym_single_element_annotation] = STATE(261),
    [sym_class_declaration] = STATE(278),
    [sym_normal_class_declaration] = STATE(262),
    [sym_modifier] = STATE(263),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(278),
    [sym_annotation_type_declaration] = STATE(268),
    [sym_normal_interface_declaration] = STATE(268),
    [sym_interface_member_declaration] = STATE(422),
    [sym_constant_declaration] = STATE(278),
    [sym_variable_declarator_list] = STATE(281),
    [sym_variable_declarator] = STATE(282),
    [sym_variable_declarator_id] = STATE(126),
    [sym_method_header] = STATE(269),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(278),
    [aux_sym_normal_class_declaration_repeat1] = STATE(283),
    [sym__semicolon] = ACTIONS(550),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(1692),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(538),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(540),
    [sym_identifier] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [704] = {
    [sym_interface_body] = STATE(859),
    [anon_sym_LBRACE] = ACTIONS(1104),
    [sym_comment] = ACTIONS(54),
  },
  [705] = {
    [sym__semicolon] = ACTIONS(872),
    [anon_sym_LT] = ACTIONS(872),
    [anon_sym_LBRACE] = ACTIONS(872),
    [anon_sym_RBRACE] = ACTIONS(872),
    [anon_sym_AT] = ACTIONS(872),
    [anon_sym_static] = ACTIONS(874),
    [anon_sym_class] = ACTIONS(874),
    [anon_sym_public] = ACTIONS(874),
    [anon_sym_protected] = ACTIONS(874),
    [anon_sym_private] = ACTIONS(874),
    [anon_sym_abstract] = ACTIONS(874),
    [anon_sym_final] = ACTIONS(874),
    [anon_sym_strictfp] = ACTIONS(874),
    [anon_sym_default] = ACTIONS(874),
    [anon_sym_synchronized] = ACTIONS(874),
    [anon_sym_native] = ACTIONS(874),
    [anon_sym_void] = ACTIONS(874),
    [anon_sym_interface] = ACTIONS(874),
    [sym_identifier] = ACTIONS(876),
    [sym_comment] = ACTIONS(54),
  },
  [706] = {
    [anon_sym_GT] = ACTIONS(1206),
    [anon_sym_LT] = ACTIONS(1206),
    [anon_sym_EQ_EQ] = ACTIONS(1208),
    [anon_sym_GT_EQ] = ACTIONS(1208),
    [anon_sym_LT_EQ] = ACTIONS(1208),
    [anon_sym_BANG_EQ] = ACTIONS(1208),
    [anon_sym_AMP_AMP] = ACTIONS(1210),
    [anon_sym_PIPE_PIPE] = ACTIONS(1212),
    [anon_sym_PLUS] = ACTIONS(1214),
    [anon_sym_DASH] = ACTIONS(1214),
    [anon_sym_STAR] = ACTIONS(1216),
    [anon_sym_SLASH] = ACTIONS(1218),
    [anon_sym_AMP] = ACTIONS(1220),
    [anon_sym_PIPE] = ACTIONS(1222),
    [anon_sym_CARET] = ACTIONS(1212),
    [anon_sym_PERCENT] = ACTIONS(1216),
    [anon_sym_LT_LT] = ACTIONS(1216),
    [anon_sym_GT_GT] = ACTIONS(1218),
    [anon_sym_GT_GT_GT] = ACTIONS(1216),
    [anon_sym_RPAREN] = ACTIONS(1694),
    [anon_sym_QMARK] = ACTIONS(1226),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [707] = {
    [anon_sym_class] = ACTIONS(1696),
    [sym_comment] = ACTIONS(54),
  },
  [708] = {
    [anon_sym_DOT] = ACTIONS(1698),
    [anon_sym_LBRACK] = ACTIONS(1698),
    [sym_comment] = ACTIONS(54),
  },
  [709] = {
    [anon_sym_DOT] = ACTIONS(1700),
    [anon_sym_LBRACK] = ACTIONS(1702),
    [sym_comment] = ACTIONS(54),
  },
  [710] = {
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_DOT] = ACTIONS(314),
    [anon_sym_boolean] = ACTIONS(316),
    [anon_sym_byte] = ACTIONS(316),
    [anon_sym_short] = ACTIONS(316),
    [anon_sym_int] = ACTIONS(316),
    [anon_sym_long] = ACTIONS(316),
    [anon_sym_char] = ACTIONS(316),
    [anon_sym_float] = ACTIONS(316),
    [anon_sym_double] = ACTIONS(316),
    [anon_sym_AT] = ACTIONS(314),
    [anon_sym_static] = ACTIONS(316),
    [anon_sym_class] = ACTIONS(316),
    [anon_sym_public] = ACTIONS(316),
    [anon_sym_protected] = ACTIONS(316),
    [anon_sym_private] = ACTIONS(316),
    [anon_sym_abstract] = ACTIONS(316),
    [anon_sym_final] = ACTIONS(316),
    [anon_sym_strictfp] = ACTIONS(316),
    [anon_sym_default] = ACTIONS(316),
    [anon_sym_synchronized] = ACTIONS(316),
    [anon_sym_native] = ACTIONS(316),
    [sym_identifier] = ACTIONS(440),
    [sym_comment] = ACTIONS(54),
  },
  [711] = {
    [anon_sym_LPAREN] = ACTIONS(1704),
    [anon_sym_DOT] = ACTIONS(1706),
    [anon_sym_boolean] = ACTIONS(324),
    [anon_sym_byte] = ACTIONS(324),
    [anon_sym_short] = ACTIONS(324),
    [anon_sym_int] = ACTIONS(324),
    [anon_sym_long] = ACTIONS(324),
    [anon_sym_char] = ACTIONS(324),
    [anon_sym_float] = ACTIONS(324),
    [anon_sym_double] = ACTIONS(324),
    [anon_sym_AT] = ACTIONS(318),
    [anon_sym_static] = ACTIONS(324),
    [anon_sym_class] = ACTIONS(324),
    [anon_sym_public] = ACTIONS(324),
    [anon_sym_protected] = ACTIONS(324),
    [anon_sym_private] = ACTIONS(324),
    [anon_sym_abstract] = ACTIONS(324),
    [anon_sym_final] = ACTIONS(324),
    [anon_sym_strictfp] = ACTIONS(324),
    [anon_sym_default] = ACTIONS(324),
    [anon_sym_synchronized] = ACTIONS(324),
    [anon_sym_native] = ACTIONS(324),
    [sym_identifier] = ACTIONS(446),
    [sym_comment] = ACTIONS(54),
  },
  [712] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(868),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(1708),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [713] = {
    [sym_identifier] = ACTIONS(1710),
    [sym_comment] = ACTIONS(54),
  },
  [714] = {
    [sym_type_arguments] = STATE(871),
    [anon_sym_LT] = ACTIONS(914),
    [sym_identifier] = ACTIONS(1712),
    [sym_comment] = ACTIONS(54),
  },
  [715] = {
    [sym_type_arguments] = STATE(874),
    [sym_type_arguments_or_diamond] = STATE(875),
    [aux_sym_class_or_interface_type_repeat2] = STATE(334),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(876),
    [anon_sym_LT] = ACTIONS(1714),
    [anon_sym_LPAREN] = ACTIONS(1716),
    [anon_sym_DOT] = ACTIONS(1718),
    [anon_sym_LBRACK] = ACTIONS(658),
    [anon_sym_AT] = ACTIONS(658),
    [anon_sym_LT_GT] = ACTIONS(1720),
    [sym_comment] = ACTIONS(54),
  },
  [716] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_class_or_interface_type_to_instantiate] = STATE(878),
    [aux_sym_class_or_interface_type_repeat1] = STATE(879),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1722),
    [sym_comment] = ACTIONS(54),
  },
  [717] = {
    [sym_dims] = STATE(880),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(217),
    [aux_sym_dims_repeat1] = STATE(218),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [718] = {
    [sym_dims] = STATE(880),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_dims_exprs] = STATE(881),
    [sym_dims_expr] = STATE(726),
    [aux_sym_class_or_interface_type_repeat1] = STATE(727),
    [aux_sym_dims_repeat1] = STATE(218),
    [anon_sym_LBRACK] = ACTIONS(1491),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [719] = {
    [anon_sym_LPAREN] = ACTIONS(1724),
    [sym_comment] = ACTIONS(54),
  },
  [720] = {
    [sym_integral_type] = STATE(132),
    [sym_floating_point_type] = STATE(132),
    [sym__annotation] = STATE(628),
    [sym_normal_annotation] = STATE(473),
    [sym_marker_annotation] = STATE(473),
    [sym_single_element_annotation] = STATE(473),
    [anon_sym_boolean] = ACTIONS(288),
    [anon_sym_byte] = ACTIONS(78),
    [anon_sym_short] = ACTIONS(78),
    [anon_sym_int] = ACTIONS(78),
    [anon_sym_long] = ACTIONS(78),
    [anon_sym_char] = ACTIONS(78),
    [anon_sym_float] = ACTIONS(80),
    [anon_sym_double] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(938),
    [sym_identifier] = ACTIONS(1726),
    [sym_comment] = ACTIONS(54),
  },
  [721] = {
    [anon_sym_LPAREN] = ACTIONS(1728),
    [sym_comment] = ACTIONS(54),
  },
  [722] = {
    [sym__expression] = STATE(887),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1730),
    [anon_sym_TILDE] = ACTIONS(1730),
    [anon_sym_PLUS_PLUS] = ACTIONS(1732),
    [anon_sym_DASH_DASH] = ACTIONS(1732),
    [anon_sym_RBRACK] = ACTIONS(686),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [723] = {
    [sym_type_arguments] = STATE(888),
    [anon_sym_LT] = ACTIONS(660),
    [anon_sym_new] = ACTIONS(1734),
    [sym_comment] = ACTIONS(54),
  },
  [724] = {
    [anon_sym_COLON_COLON] = ACTIONS(1736),
    [sym_comment] = ACTIONS(54),
  },
  [725] = {
    [sym_dims] = STATE(889),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(217),
    [aux_sym_dims_repeat1] = STATE(218),
    [anon_sym_DOT] = ACTIONS(1738),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_COLON_COLON] = ACTIONS(1738),
    [sym_comment] = ACTIONS(54),
  },
  [726] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_dims_expr] = STATE(891),
    [aux_sym_class_or_interface_type_repeat1] = STATE(892),
    [aux_sym_dims_exprs_repeat1] = STATE(893),
    [anon_sym_DOT] = ACTIONS(1740),
    [anon_sym_LBRACK] = ACTIONS(1742),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_COLON_COLON] = ACTIONS(1740),
    [sym_comment] = ACTIONS(54),
  },
  [727] = {
    [sym__annotation] = STATE(103),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(1744),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [728] = {
    [sym_type_arguments] = STATE(897),
    [anon_sym_LT] = ACTIONS(914),
    [anon_sym_class] = ACTIONS(1746),
    [anon_sym_this] = ACTIONS(1748),
    [anon_sym_super] = ACTIONS(1750),
    [sym_identifier] = ACTIONS(1752),
    [sym_comment] = ACTIONS(54),
  },
  [729] = {
    [sym__semicolon] = ACTIONS(1754),
    [anon_sym_LT] = ACTIONS(1754),
    [anon_sym_LBRACE] = ACTIONS(1754),
    [anon_sym_RBRACE] = ACTIONS(1754),
    [anon_sym_AT] = ACTIONS(1754),
    [anon_sym_static] = ACTIONS(1756),
    [anon_sym_class] = ACTIONS(1756),
    [anon_sym_public] = ACTIONS(1756),
    [anon_sym_protected] = ACTIONS(1756),
    [anon_sym_private] = ACTIONS(1756),
    [anon_sym_abstract] = ACTIONS(1756),
    [anon_sym_final] = ACTIONS(1756),
    [anon_sym_strictfp] = ACTIONS(1756),
    [anon_sym_default] = ACTIONS(1756),
    [anon_sym_synchronized] = ACTIONS(1756),
    [anon_sym_native] = ACTIONS(1756),
    [anon_sym_void] = ACTIONS(1756),
    [anon_sym_interface] = ACTIONS(1756),
    [sym_identifier] = ACTIONS(1758),
    [sym_comment] = ACTIONS(54),
  },
  [730] = {
    [anon_sym_RBRACE] = ACTIONS(1760),
    [sym_comment] = ACTIONS(54),
  },
  [731] = {
    [sym_type_arguments] = STATE(903),
    [sym_unqualified_class_instance_creation_expression] = STATE(904),
    [anon_sym_LT] = ACTIONS(1762),
    [anon_sym_super] = ACTIONS(1764),
    [anon_sym_new] = ACTIONS(1766),
    [sym_identifier] = ACTIONS(1768),
    [sym_comment] = ACTIONS(54),
  },
  [732] = {
    [sym__expression] = STATE(905),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1730),
    [anon_sym_TILDE] = ACTIONS(1730),
    [anon_sym_PLUS_PLUS] = ACTIONS(1732),
    [anon_sym_DASH_DASH] = ACTIONS(1732),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [733] = {
    [sym_type_arguments] = STATE(897),
    [sym_unqualified_class_instance_creation_expression] = STATE(904),
    [anon_sym_LT] = ACTIONS(914),
    [anon_sym_super] = ACTIONS(1764),
    [anon_sym_new] = ACTIONS(1766),
    [sym_identifier] = ACTIONS(1770),
    [sym_comment] = ACTIONS(54),
  },
  [734] = {
    [anon_sym_new] = ACTIONS(1734),
    [sym_comment] = ACTIONS(54),
  },
  [735] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(908),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(1772),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [736] = {
    [sym_annotation_type_body] = STATE(909),
    [anon_sym_LBRACE] = ACTIONS(1450),
    [sym_comment] = ACTIONS(54),
  },
  [737] = {
    [sym_superclass] = STATE(910),
    [sym_super_interfaces] = STATE(856),
    [sym_class_body] = STATE(857),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [anon_sym_extends] = ACTIONS(342),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [738] = {
    [sym_extends_interfaces] = STATE(911),
    [sym_interface_body] = STATE(859),
    [anon_sym_LBRACE] = ACTIONS(1104),
    [anon_sym_extends] = ACTIONS(348),
    [sym_comment] = ACTIONS(54),
  },
  [739] = {
    [sym__semicolon] = ACTIONS(1774),
    [anon_sym_LT] = ACTIONS(1774),
    [anon_sym_LBRACE] = ACTIONS(1774),
    [anon_sym_RBRACE] = ACTIONS(1774),
    [anon_sym_AT] = ACTIONS(1774),
    [anon_sym_static] = ACTIONS(1776),
    [anon_sym_class] = ACTIONS(1776),
    [anon_sym_public] = ACTIONS(1776),
    [anon_sym_protected] = ACTIONS(1776),
    [anon_sym_private] = ACTIONS(1776),
    [anon_sym_abstract] = ACTIONS(1776),
    [anon_sym_final] = ACTIONS(1776),
    [anon_sym_strictfp] = ACTIONS(1776),
    [anon_sym_default] = ACTIONS(1776),
    [anon_sym_synchronized] = ACTIONS(1776),
    [anon_sym_native] = ACTIONS(1776),
    [anon_sym_void] = ACTIONS(1776),
    [anon_sym_interface] = ACTIONS(1776),
    [sym_identifier] = ACTIONS(1778),
    [sym_comment] = ACTIONS(54),
  },
  [740] = {
    [anon_sym_COMMA] = ACTIONS(1780),
    [anon_sym_LBRACE] = ACTIONS(1780),
    [sym_comment] = ACTIONS(54),
  },
  [741] = {
    [sym__semicolon] = ACTIONS(1782),
    [anon_sym_COMMA] = ACTIONS(1782),
    [sym_comment] = ACTIONS(54),
  },
  [742] = {
    [anon_sym_GT] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(566),
    [anon_sym_EQ_EQ] = ACTIONS(568),
    [anon_sym_GT_EQ] = ACTIONS(568),
    [anon_sym_LT_EQ] = ACTIONS(568),
    [anon_sym_BANG_EQ] = ACTIONS(568),
    [anon_sym_AMP_AMP] = ACTIONS(570),
    [anon_sym_PIPE_PIPE] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_SLASH] = ACTIONS(578),
    [anon_sym_AMP] = ACTIONS(580),
    [anon_sym_PIPE] = ACTIONS(582),
    [anon_sym_CARET] = ACTIONS(572),
    [anon_sym_PERCENT] = ACTIONS(576),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(578),
    [anon_sym_GT_GT_GT] = ACTIONS(576),
    [anon_sym_QMARK] = ACTIONS(584),
    [anon_sym_COLON] = ACTIONS(1200),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [743] = {
    [anon_sym_GT] = ACTIONS(588),
    [anon_sym_LT] = ACTIONS(588),
    [anon_sym_EQ_EQ] = ACTIONS(590),
    [anon_sym_GT_EQ] = ACTIONS(590),
    [anon_sym_LT_EQ] = ACTIONS(590),
    [anon_sym_BANG_EQ] = ACTIONS(590),
    [anon_sym_AMP_AMP] = ACTIONS(592),
    [anon_sym_PIPE_PIPE] = ACTIONS(594),
    [anon_sym_PLUS] = ACTIONS(596),
    [anon_sym_DASH] = ACTIONS(596),
    [anon_sym_STAR] = ACTIONS(598),
    [anon_sym_SLASH] = ACTIONS(600),
    [anon_sym_AMP] = ACTIONS(602),
    [anon_sym_PIPE] = ACTIONS(604),
    [anon_sym_CARET] = ACTIONS(594),
    [anon_sym_PERCENT] = ACTIONS(598),
    [anon_sym_LT_LT] = ACTIONS(598),
    [anon_sym_GT_GT] = ACTIONS(600),
    [anon_sym_GT_GT_GT] = ACTIONS(598),
    [anon_sym_QMARK] = ACTIONS(606),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(1200),
    [sym_comment] = ACTIONS(54),
  },
  [744] = {
    [anon_sym_GT] = ACTIONS(564),
    [anon_sym_LT] = ACTIONS(564),
    [anon_sym_EQ_EQ] = ACTIONS(562),
    [anon_sym_GT_EQ] = ACTIONS(562),
    [anon_sym_LT_EQ] = ACTIONS(562),
    [anon_sym_BANG_EQ] = ACTIONS(562),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(564),
    [anon_sym_DASH] = ACTIONS(564),
    [anon_sym_STAR] = ACTIONS(1216),
    [anon_sym_SLASH] = ACTIONS(1218),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(1216),
    [anon_sym_LT_LT] = ACTIONS(1216),
    [anon_sym_GT_GT] = ACTIONS(1218),
    [anon_sym_GT_GT_GT] = ACTIONS(1216),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [745] = {
    [anon_sym_GT] = ACTIONS(1206),
    [anon_sym_LT] = ACTIONS(1206),
    [anon_sym_EQ_EQ] = ACTIONS(1208),
    [anon_sym_GT_EQ] = ACTIONS(1208),
    [anon_sym_LT_EQ] = ACTIONS(1208),
    [anon_sym_BANG_EQ] = ACTIONS(1208),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(1214),
    [anon_sym_DASH] = ACTIONS(1214),
    [anon_sym_STAR] = ACTIONS(1216),
    [anon_sym_SLASH] = ACTIONS(1218),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(1216),
    [anon_sym_LT_LT] = ACTIONS(1216),
    [anon_sym_GT_GT] = ACTIONS(1218),
    [anon_sym_GT_GT_GT] = ACTIONS(1216),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [746] = {
    [anon_sym_GT] = ACTIONS(1206),
    [anon_sym_LT] = ACTIONS(1206),
    [anon_sym_EQ_EQ] = ACTIONS(1208),
    [anon_sym_GT_EQ] = ACTIONS(1208),
    [anon_sym_LT_EQ] = ACTIONS(1208),
    [anon_sym_BANG_EQ] = ACTIONS(1208),
    [anon_sym_AMP_AMP] = ACTIONS(1210),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(1214),
    [anon_sym_DASH] = ACTIONS(1214),
    [anon_sym_STAR] = ACTIONS(1216),
    [anon_sym_SLASH] = ACTIONS(1218),
    [anon_sym_AMP] = ACTIONS(1220),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(1216),
    [anon_sym_LT_LT] = ACTIONS(1216),
    [anon_sym_GT_GT] = ACTIONS(1218),
    [anon_sym_GT_GT_GT] = ACTIONS(1216),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [747] = {
    [anon_sym_GT] = ACTIONS(1206),
    [anon_sym_LT] = ACTIONS(1206),
    [anon_sym_EQ_EQ] = ACTIONS(1208),
    [anon_sym_GT_EQ] = ACTIONS(1208),
    [anon_sym_LT_EQ] = ACTIONS(1208),
    [anon_sym_BANG_EQ] = ACTIONS(1208),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(564),
    [anon_sym_DASH] = ACTIONS(564),
    [anon_sym_STAR] = ACTIONS(1216),
    [anon_sym_SLASH] = ACTIONS(1218),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(1216),
    [anon_sym_LT_LT] = ACTIONS(1216),
    [anon_sym_GT_GT] = ACTIONS(1218),
    [anon_sym_GT_GT_GT] = ACTIONS(1216),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [748] = {
    [anon_sym_if] = ACTIONS(1784),
    [anon_sym_RBRACE] = ACTIONS(1784),
    [anon_sym_AT] = ACTIONS(1784),
    [anon_sym_static] = ACTIONS(1784),
    [anon_sym_class] = ACTIONS(1784),
    [anon_sym_public] = ACTIONS(1784),
    [anon_sym_protected] = ACTIONS(1784),
    [anon_sym_private] = ACTIONS(1784),
    [anon_sym_abstract] = ACTIONS(1784),
    [anon_sym_final] = ACTIONS(1784),
    [anon_sym_strictfp] = ACTIONS(1784),
    [anon_sym_default] = ACTIONS(1784),
    [anon_sym_synchronized] = ACTIONS(1784),
    [anon_sym_native] = ACTIONS(1784),
    [sym_comment] = ACTIONS(54),
  },
  [749] = {
    [anon_sym_LPAREN] = ACTIONS(1786),
    [sym_comment] = ACTIONS(54),
  },
  [750] = {
    [sym__statement] = STATE(914),
    [sym__literal] = STATE(757),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(758),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym__annotation] = STATE(28),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym__declaration] = STATE(760),
    [sym_module_declaration] = STATE(761),
    [sym_package_declaration] = STATE(761),
    [sym_import_statement] = STATE(761),
    [sym_single_type_import_declaration] = STATE(762),
    [sym_type_import_on_declaraction] = STATE(762),
    [sym_single_static_import_declaration] = STATE(762),
    [sym_static_import_on_demand_declaration] = STATE(762),
    [sym_class_declaration] = STATE(761),
    [sym_normal_class_declaration] = STATE(188),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(761),
    [sym_annotation_type_declaration] = STATE(763),
    [sym_normal_interface_declaration] = STATE(763),
    [sym_method_header] = STATE(764),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(761),
    [aux_sym_class_or_interface_type_repeat1] = STATE(766),
    [aux_sym_normal_class_declaration_repeat1] = STATE(767),
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
    [anon_sym_LBRACE] = ACTIONS(1788),
    [anon_sym_AT] = ACTIONS(1550),
    [anon_sym_open] = ACTIONS(1552),
    [anon_sym_module] = ACTIONS(1554),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_package] = ACTIONS(1556),
    [anon_sym_import] = ACTIONS(1558),
    [anon_sym_class] = ACTIONS(1120),
    [anon_sym_public] = ACTIONS(40),
    [anon_sym_protected] = ACTIONS(40),
    [anon_sym_private] = ACTIONS(40),
    [anon_sym_abstract] = ACTIONS(40),
    [anon_sym_final] = ACTIONS(40),
    [anon_sym_strictfp] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_synchronized] = ACTIONS(40),
    [anon_sym_native] = ACTIONS(40),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(1560),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(54),
  },
  [751] = {
    [sym_package_or_type_name] = STATE(73),
    [anon_sym_interface] = ACTIONS(1790),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(54),
  },
  [752] = {
    [anon_sym_module] = ACTIONS(1792),
    [sym_comment] = ACTIONS(54),
  },
  [753] = {
    [sym_module_identifier] = STATE(917),
    [sym_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(54),
  },
  [754] = {
    [sym_identifier] = ACTIONS(1794),
    [sym_comment] = ACTIONS(54),
  },
  [755] = {
    [sym_package_or_type_name] = STATE(920),
    [anon_sym_static] = ACTIONS(1796),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(54),
  },
  [756] = {
    [sym_identifier] = ACTIONS(1798),
    [sym_comment] = ACTIONS(54),
  },
  [757] = {
    [sym__semicolon] = ACTIONS(1800),
    [sym_comment] = ACTIONS(54),
  },
  [758] = {
    [sym__semicolon] = ACTIONS(1800),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_AMP_AMP] = ACTIONS(130),
    [anon_sym_PIPE_PIPE] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(132),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(138),
    [anon_sym_GT_GT_GT] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(144),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [759] = {
    [anon_sym_if] = ACTIONS(1802),
    [anon_sym_RBRACE] = ACTIONS(1802),
    [anon_sym_elseif] = ACTIONS(1802),
    [anon_sym_AT] = ACTIONS(1802),
    [anon_sym_static] = ACTIONS(1802),
    [anon_sym_class] = ACTIONS(1802),
    [anon_sym_public] = ACTIONS(1802),
    [anon_sym_protected] = ACTIONS(1802),
    [anon_sym_private] = ACTIONS(1802),
    [anon_sym_abstract] = ACTIONS(1802),
    [anon_sym_final] = ACTIONS(1802),
    [anon_sym_strictfp] = ACTIONS(1802),
    [anon_sym_default] = ACTIONS(1802),
    [anon_sym_synchronized] = ACTIONS(1802),
    [anon_sym_native] = ACTIONS(1802),
    [sym_comment] = ACTIONS(54),
  },
  [760] = {
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
    [anon_sym_synchronized] = ACTIONS(167),
    [anon_sym_native] = ACTIONS(167),
    [sym_comment] = ACTIONS(54),
  },
  [761] = {
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
    [anon_sym_synchronized] = ACTIONS(173),
    [anon_sym_native] = ACTIONS(173),
    [sym_comment] = ACTIONS(54),
  },
  [762] = {
    [anon_sym_if] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(179),
    [anon_sym_elseif] = ACTIONS(179),
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
    [anon_sym_synchronized] = ACTIONS(179),
    [anon_sym_native] = ACTIONS(179),
    [sym_comment] = ACTIONS(54),
  },
  [763] = {
    [anon_sym_if] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_elseif] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_static] = ACTIONS(199),
    [anon_sym_class] = ACTIONS(199),
    [anon_sym_public] = ACTIONS(199),
    [anon_sym_protected] = ACTIONS(199),
    [anon_sym_private] = ACTIONS(199),
    [anon_sym_abstract] = ACTIONS(199),
    [anon_sym_final] = ACTIONS(199),
    [anon_sym_strictfp] = ACTIONS(199),
    [anon_sym_default] = ACTIONS(199),
    [anon_sym_synchronized] = ACTIONS(199),
    [anon_sym_native] = ACTIONS(199),
    [sym_comment] = ACTIONS(54),
  },
  [764] = {
    [sym_method_body] = STATE(925),
    [sym_block] = STATE(923),
    [sym__semicolon] = ACTIONS(1804),
    [anon_sym_LBRACE] = ACTIONS(1806),
    [sym_comment] = ACTIONS(54),
  },
  [765] = {
    [sym_else_if_clause] = STATE(926),
    [anon_sym_if] = ACTIONS(1784),
    [anon_sym_RBRACE] = ACTIONS(1784),
    [anon_sym_elseif] = ACTIONS(1546),
    [anon_sym_AT] = ACTIONS(1784),
    [anon_sym_static] = ACTIONS(1784),
    [anon_sym_class] = ACTIONS(1784),
    [anon_sym_public] = ACTIONS(1784),
    [anon_sym_protected] = ACTIONS(1784),
    [anon_sym_private] = ACTIONS(1784),
    [anon_sym_abstract] = ACTIONS(1784),
    [anon_sym_final] = ACTIONS(1784),
    [anon_sym_strictfp] = ACTIONS(1784),
    [anon_sym_default] = ACTIONS(1784),
    [anon_sym_synchronized] = ACTIONS(1784),
    [anon_sym_native] = ACTIONS(1784),
    [sym_comment] = ACTIONS(54),
  },
  [766] = {
    [sym__annotation] = STATE(103),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_open] = ACTIONS(1808),
    [anon_sym_module] = ACTIONS(1792),
    [anon_sym_package] = ACTIONS(1810),
    [sym_comment] = ACTIONS(54),
  },
  [767] = {
    [sym__annotation] = STATE(14),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_modifier] = STATE(107),
    [sym_type_parameters] = STATE(35),
    [sym_method_header] = STATE(931),
    [sym_result] = STATE(38),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_AT] = ACTIONS(1812),
    [anon_sym_static] = ACTIONS(219),
    [anon_sym_class] = ACTIONS(638),
    [anon_sym_public] = ACTIONS(219),
    [anon_sym_protected] = ACTIONS(219),
    [anon_sym_private] = ACTIONS(219),
    [anon_sym_abstract] = ACTIONS(219),
    [anon_sym_final] = ACTIONS(219),
    [anon_sym_strictfp] = ACTIONS(219),
    [anon_sym_default] = ACTIONS(219),
    [anon_sym_synchronized] = ACTIONS(219),
    [anon_sym_native] = ACTIONS(219),
    [anon_sym_void] = ACTIONS(197),
    [anon_sym_interface] = ACTIONS(1814),
    [sym_comment] = ACTIONS(54),
  },
  [768] = {
    [anon_sym_GT] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(566),
    [anon_sym_EQ_EQ] = ACTIONS(568),
    [anon_sym_GT_EQ] = ACTIONS(568),
    [anon_sym_LT_EQ] = ACTIONS(568),
    [anon_sym_BANG_EQ] = ACTIONS(568),
    [anon_sym_AMP_AMP] = ACTIONS(570),
    [anon_sym_PIPE_PIPE] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_SLASH] = ACTIONS(578),
    [anon_sym_AMP] = ACTIONS(580),
    [anon_sym_PIPE] = ACTIONS(582),
    [anon_sym_CARET] = ACTIONS(572),
    [anon_sym_PERCENT] = ACTIONS(576),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(578),
    [anon_sym_GT_GT_GT] = ACTIONS(576),
    [anon_sym_QMARK] = ACTIONS(584),
    [anon_sym_COLON] = ACTIONS(1816),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [769] = {
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
    [anon_sym_synchronized] = ACTIONS(1028),
    [anon_sym_native] = ACTIONS(1028),
    [sym_identifier] = ACTIONS(1290),
    [sym_comment] = ACTIONS(54),
  },
  [770] = {
    [anon_sym_AT] = ACTIONS(1036),
    [anon_sym_static] = ACTIONS(1038),
    [anon_sym_class] = ACTIONS(1038),
    [anon_sym_public] = ACTIONS(1038),
    [anon_sym_protected] = ACTIONS(1038),
    [anon_sym_private] = ACTIONS(1038),
    [anon_sym_abstract] = ACTIONS(1038),
    [anon_sym_final] = ACTIONS(1038),
    [anon_sym_strictfp] = ACTIONS(1038),
    [anon_sym_default] = ACTIONS(1038),
    [anon_sym_synchronized] = ACTIONS(1038),
    [anon_sym_native] = ACTIONS(1038),
    [sym_identifier] = ACTIONS(1292),
    [sym_comment] = ACTIONS(54),
  },
  [771] = {
    [anon_sym_if] = ACTIONS(1146),
    [anon_sym_RBRACE] = ACTIONS(1146),
    [anon_sym_elseif] = ACTIONS(1146),
    [anon_sym_DOT] = ACTIONS(1146),
    [anon_sym_LBRACK] = ACTIONS(1146),
    [anon_sym_AT] = ACTIONS(1146),
    [anon_sym_static] = ACTIONS(1146),
    [anon_sym_class] = ACTIONS(1146),
    [anon_sym_public] = ACTIONS(1146),
    [anon_sym_protected] = ACTIONS(1146),
    [anon_sym_private] = ACTIONS(1146),
    [anon_sym_abstract] = ACTIONS(1146),
    [anon_sym_final] = ACTIONS(1146),
    [anon_sym_strictfp] = ACTIONS(1146),
    [anon_sym_default] = ACTIONS(1146),
    [anon_sym_synchronized] = ACTIONS(1146),
    [anon_sym_native] = ACTIONS(1146),
    [anon_sym_COLON_COLON] = ACTIONS(1146),
    [sym_comment] = ACTIONS(54),
  },
  [772] = {
    [sym_class_body] = STATE(933),
    [anon_sym_LBRACE] = ACTIONS(892),
    [sym_comment] = ACTIONS(54),
  },
  [773] = {
    [anon_sym_if] = ACTIONS(1162),
    [anon_sym_RBRACE] = ACTIONS(1162),
    [anon_sym_elseif] = ACTIONS(1162),
    [anon_sym_AT] = ACTIONS(1162),
    [anon_sym_static] = ACTIONS(1162),
    [anon_sym_class] = ACTIONS(1162),
    [anon_sym_public] = ACTIONS(1162),
    [anon_sym_protected] = ACTIONS(1162),
    [anon_sym_private] = ACTIONS(1162),
    [anon_sym_abstract] = ACTIONS(1162),
    [anon_sym_final] = ACTIONS(1162),
    [anon_sym_strictfp] = ACTIONS(1162),
    [anon_sym_default] = ACTIONS(1162),
    [anon_sym_synchronized] = ACTIONS(1162),
    [anon_sym_native] = ACTIONS(1162),
    [sym_comment] = ACTIONS(54),
  },
  [774] = {
    [sym_super_interfaces] = STATE(934),
    [sym_class_body] = STATE(933),
    [anon_sym_LBRACE] = ACTIONS(892),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [775] = {
    [anon_sym_DOT] = ACTIONS(1594),
    [anon_sym_AT] = ACTIONS(1594),
    [sym_identifier] = ACTIONS(1818),
    [sym_comment] = ACTIONS(54),
  },
  [776] = {
    [anon_sym_GT] = ACTIONS(1820),
    [anon_sym_COMMA] = ACTIONS(1598),
    [sym_comment] = ACTIONS(54),
  },
  [777] = {
    [anon_sym_DOT] = ACTIONS(1602),
    [anon_sym_AT] = ACTIONS(1602),
    [sym_identifier] = ACTIONS(1822),
    [sym_comment] = ACTIONS(54),
  },
  [778] = {
    [sym_type_arguments] = STATE(936),
    [anon_sym_LT] = ACTIONS(914),
    [anon_sym_DOT] = ACTIONS(1602),
    [anon_sym_AT] = ACTIONS(1602),
    [sym_identifier] = ACTIONS(1822),
    [sym_comment] = ACTIONS(54),
  },
  [779] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1824),
    [sym_comment] = ACTIONS(54),
  },
  [780] = {
    [anon_sym_DOT] = ACTIONS(1244),
    [anon_sym_AT] = ACTIONS(1608),
    [sym_identifier] = ACTIONS(1826),
    [sym_comment] = ACTIONS(54),
  },
  [781] = {
    [ts_builtin_sym_end] = ACTIONS(1828),
    [sym_decimal_integer_literal] = ACTIONS(1830),
    [sym_hex_integer_literal] = ACTIONS(1830),
    [sym_octal_integer_literal] = ACTIONS(1830),
    [sym_binary_integer_literal] = ACTIONS(1830),
    [sym_decimal_floating_point_literal] = ACTIONS(1830),
    [sym_hex_floating_point_literal] = ACTIONS(1832),
    [anon_sym_true] = ACTIONS(1830),
    [anon_sym_false] = ACTIONS(1830),
    [anon_sym_SQUOTE] = ACTIONS(1828),
    [sym_string_literal] = ACTIONS(1828),
    [sym_null_literal] = ACTIONS(1830),
    [anon_sym_LT] = ACTIONS(1828),
    [anon_sym_LPAREN] = ACTIONS(1828),
    [anon_sym_BANG] = ACTIONS(1828),
    [anon_sym_TILDE] = ACTIONS(1828),
    [anon_sym_PLUS_PLUS] = ACTIONS(1828),
    [anon_sym_DASH_DASH] = ACTIONS(1828),
    [anon_sym_RBRACE] = ACTIONS(1828),
    [anon_sym_AT] = ACTIONS(1828),
    [anon_sym_open] = ACTIONS(1830),
    [anon_sym_module] = ACTIONS(1830),
    [anon_sym_static] = ACTIONS(1830),
    [anon_sym_package] = ACTIONS(1830),
    [anon_sym_import] = ACTIONS(1830),
    [anon_sym_class] = ACTIONS(1830),
    [anon_sym_public] = ACTIONS(1830),
    [anon_sym_protected] = ACTIONS(1830),
    [anon_sym_private] = ACTIONS(1830),
    [anon_sym_abstract] = ACTIONS(1830),
    [anon_sym_final] = ACTIONS(1830),
    [anon_sym_strictfp] = ACTIONS(1830),
    [anon_sym_default] = ACTIONS(1830),
    [anon_sym_synchronized] = ACTIONS(1830),
    [anon_sym_native] = ACTIONS(1830),
    [anon_sym_void] = ACTIONS(1830),
    [anon_sym_interface] = ACTIONS(1830),
    [sym_identifier] = ACTIONS(1832),
    [sym_comment] = ACTIONS(54),
  },
  [782] = {
    [ts_builtin_sym_end] = ACTIONS(1834),
    [sym_decimal_integer_literal] = ACTIONS(1836),
    [sym_hex_integer_literal] = ACTIONS(1836),
    [sym_octal_integer_literal] = ACTIONS(1836),
    [sym_binary_integer_literal] = ACTIONS(1836),
    [sym_decimal_floating_point_literal] = ACTIONS(1836),
    [sym_hex_floating_point_literal] = ACTIONS(1838),
    [anon_sym_true] = ACTIONS(1836),
    [anon_sym_false] = ACTIONS(1836),
    [anon_sym_SQUOTE] = ACTIONS(1834),
    [sym_string_literal] = ACTIONS(1834),
    [sym_null_literal] = ACTIONS(1836),
    [anon_sym_LT] = ACTIONS(1834),
    [anon_sym_LPAREN] = ACTIONS(1834),
    [anon_sym_BANG] = ACTIONS(1834),
    [anon_sym_TILDE] = ACTIONS(1834),
    [anon_sym_PLUS_PLUS] = ACTIONS(1834),
    [anon_sym_DASH_DASH] = ACTIONS(1834),
    [anon_sym_RBRACE] = ACTIONS(1834),
    [anon_sym_AT] = ACTIONS(1834),
    [anon_sym_open] = ACTIONS(1836),
    [anon_sym_module] = ACTIONS(1836),
    [anon_sym_static] = ACTIONS(1836),
    [anon_sym_package] = ACTIONS(1836),
    [anon_sym_import] = ACTIONS(1836),
    [anon_sym_class] = ACTIONS(1836),
    [anon_sym_public] = ACTIONS(1836),
    [anon_sym_protected] = ACTIONS(1836),
    [anon_sym_private] = ACTIONS(1836),
    [anon_sym_abstract] = ACTIONS(1836),
    [anon_sym_final] = ACTIONS(1836),
    [anon_sym_strictfp] = ACTIONS(1836),
    [anon_sym_default] = ACTIONS(1836),
    [anon_sym_synchronized] = ACTIONS(1836),
    [anon_sym_native] = ACTIONS(1836),
    [anon_sym_void] = ACTIONS(1836),
    [anon_sym_interface] = ACTIONS(1836),
    [sym_identifier] = ACTIONS(1838),
    [sym_comment] = ACTIONS(54),
  },
  [783] = {
    [sym__literal] = STATE(940),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(941),
    [sym_element_value_pair] = STATE(237),
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
    [anon_sym_RPAREN] = ACTIONS(1840),
    [sym_identifier] = ACTIONS(1842),
    [sym_comment] = ACTIONS(54),
  },
  [784] = {
    [sym_identifier] = ACTIONS(1844),
    [sym_comment] = ACTIONS(54),
  },
  [785] = {
    [anon_sym_GT] = ACTIONS(1846),
    [anon_sym_COMMA] = ACTIONS(1846),
    [sym_comment] = ACTIONS(54),
  },
  [786] = {
    [anon_sym_GT] = ACTIONS(1848),
    [anon_sym_AMP] = ACTIONS(1848),
    [anon_sym_LPAREN] = ACTIONS(1848),
    [anon_sym_COMMA] = ACTIONS(1848),
    [anon_sym_LBRACE] = ACTIONS(1848),
    [anon_sym_DOT] = ACTIONS(1848),
    [anon_sym_LBRACK] = ACTIONS(1848),
    [anon_sym_AT] = ACTIONS(1848),
    [anon_sym_implements] = ACTIONS(1848),
    [anon_sym_this] = ACTIONS(1848),
    [anon_sym_super] = ACTIONS(1848),
    [anon_sym_new] = ACTIONS(1848),
    [anon_sym_COLON_COLON] = ACTIONS(1848),
    [sym_comment] = ACTIONS(54),
  },
  [787] = {
    [sym_type_argument] = STATE(943),
    [sym_reference_type] = STATE(469),
    [sym_class_or_interface_type] = STATE(470),
    [sym_primitive_type] = STATE(471),
    [sym_integral_type] = STATE(53),
    [sym_floating_point_type] = STATE(53),
    [sym__annotation] = STATE(472),
    [sym_normal_annotation] = STATE(473),
    [sym_marker_annotation] = STATE(473),
    [sym_single_element_annotation] = STATE(473),
    [aux_sym_class_or_interface_type_repeat1] = STATE(474),
    [anon_sym_boolean] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(78),
    [anon_sym_short] = ACTIONS(78),
    [anon_sym_int] = ACTIONS(78),
    [anon_sym_long] = ACTIONS(78),
    [anon_sym_char] = ACTIONS(78),
    [anon_sym_float] = ACTIONS(80),
    [anon_sym_double] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(938),
    [sym_identifier] = ACTIONS(940),
    [sym_comment] = ACTIONS(54),
  },
  [788] = {
    [anon_sym_GT] = ACTIONS(1850),
    [anon_sym_AMP] = ACTIONS(1850),
    [anon_sym_COMMA] = ACTIONS(1850),
    [anon_sym_LBRACE] = ACTIONS(1850),
    [anon_sym_DOT] = ACTIONS(1850),
    [anon_sym_LBRACK] = ACTIONS(1850),
    [anon_sym_AT] = ACTIONS(1850),
    [anon_sym_implements] = ACTIONS(1850),
    [anon_sym_COLON_COLON] = ACTIONS(1850),
    [sym_comment] = ACTIONS(54),
  },
  [789] = {
    [sym_type_arguments] = STATE(944),
    [anon_sym_GT] = ACTIONS(1850),
    [anon_sym_LT] = ACTIONS(660),
    [anon_sym_AMP] = ACTIONS(1850),
    [anon_sym_COMMA] = ACTIONS(1850),
    [anon_sym_LBRACE] = ACTIONS(1850),
    [anon_sym_DOT] = ACTIONS(1850),
    [anon_sym_LBRACK] = ACTIONS(1850),
    [anon_sym_AT] = ACTIONS(1850),
    [anon_sym_implements] = ACTIONS(1850),
    [anon_sym_COLON_COLON] = ACTIONS(1850),
    [sym_comment] = ACTIONS(54),
  },
  [790] = {
    [sym__annotation] = STATE(356),
    [sym_normal_annotation] = STATE(360),
    [sym_marker_annotation] = STATE(360),
    [sym_single_element_annotation] = STATE(360),
    [sym_class_declaration] = STATE(361),
    [sym_normal_class_declaration] = STATE(362),
    [sym_modifier] = STATE(363),
    [sym_interface_declaration] = STATE(361),
    [sym_annotation_type_declaration] = STATE(364),
    [sym_annotation_type_member_declaration] = STATE(365),
    [sym_annotation_type_element_declaration] = STATE(361),
    [sym_normal_interface_declaration] = STATE(364),
    [sym_constant_declaration] = STATE(361),
    [sym_variable_declarator_list] = STATE(366),
    [sym_variable_declarator] = STATE(282),
    [sym_variable_declarator_id] = STATE(126),
    [aux_sym_normal_class_declaration_repeat1] = STATE(367),
    [aux_sym_annotation_type_body_repeat1] = STATE(946),
    [anon_sym_RBRACE] = ACTIONS(1852),
    [anon_sym_AT] = ACTIONS(714),
    [anon_sym_static] = ACTIONS(716),
    [anon_sym_class] = ACTIONS(718),
    [anon_sym_public] = ACTIONS(716),
    [anon_sym_protected] = ACTIONS(716),
    [anon_sym_private] = ACTIONS(716),
    [anon_sym_abstract] = ACTIONS(716),
    [anon_sym_final] = ACTIONS(716),
    [anon_sym_strictfp] = ACTIONS(716),
    [anon_sym_default] = ACTIONS(716),
    [anon_sym_synchronized] = ACTIONS(716),
    [anon_sym_native] = ACTIONS(716),
    [anon_sym_interface] = ACTIONS(720),
    [sym_identifier] = ACTIONS(722),
    [sym_comment] = ACTIONS(54),
  },
  [791] = {
    [anon_sym_RBRACE] = ACTIONS(724),
    [anon_sym_AT] = ACTIONS(724),
    [anon_sym_static] = ACTIONS(726),
    [anon_sym_class] = ACTIONS(726),
    [anon_sym_public] = ACTIONS(726),
    [anon_sym_protected] = ACTIONS(726),
    [anon_sym_private] = ACTIONS(726),
    [anon_sym_abstract] = ACTIONS(726),
    [anon_sym_final] = ACTIONS(726),
    [anon_sym_strictfp] = ACTIONS(726),
    [anon_sym_default] = ACTIONS(726),
    [anon_sym_synchronized] = ACTIONS(726),
    [anon_sym_native] = ACTIONS(726),
    [anon_sym_interface] = ACTIONS(726),
    [sym_identifier] = ACTIONS(728),
    [sym_comment] = ACTIONS(54),
  },
  [792] = {
    [anon_sym_AT] = ACTIONS(730),
    [anon_sym_static] = ACTIONS(732),
    [anon_sym_class] = ACTIONS(732),
    [anon_sym_public] = ACTIONS(732),
    [anon_sym_protected] = ACTIONS(732),
    [anon_sym_private] = ACTIONS(732),
    [anon_sym_abstract] = ACTIONS(732),
    [anon_sym_final] = ACTIONS(732),
    [anon_sym_strictfp] = ACTIONS(732),
    [anon_sym_default] = ACTIONS(732),
    [anon_sym_synchronized] = ACTIONS(732),
    [anon_sym_native] = ACTIONS(732),
    [anon_sym_interface] = ACTIONS(732),
    [sym_identifier] = ACTIONS(958),
    [sym_comment] = ACTIONS(54),
  },
  [793] = {
    [anon_sym_RPAREN] = ACTIONS(1854),
    [anon_sym_EQ] = ACTIONS(736),
    [sym_comment] = ACTIONS(54),
  },
  [794] = {
    [anon_sym_RPAREN] = ACTIONS(1854),
    [sym_comment] = ACTIONS(54),
  },
  [795] = {
    [anon_sym_RPAREN] = ACTIONS(1856),
    [sym_comment] = ACTIONS(54),
  },
  [796] = {
    [anon_sym_LPAREN] = ACTIONS(744),
    [anon_sym_DOT] = ACTIONS(744),
    [anon_sym_AT] = ACTIONS(744),
    [anon_sym_static] = ACTIONS(746),
    [anon_sym_class] = ACTIONS(746),
    [anon_sym_public] = ACTIONS(746),
    [anon_sym_protected] = ACTIONS(746),
    [anon_sym_private] = ACTIONS(746),
    [anon_sym_abstract] = ACTIONS(746),
    [anon_sym_final] = ACTIONS(746),
    [anon_sym_strictfp] = ACTIONS(746),
    [anon_sym_default] = ACTIONS(746),
    [anon_sym_synchronized] = ACTIONS(746),
    [anon_sym_native] = ACTIONS(746),
    [anon_sym_interface] = ACTIONS(746),
    [sym_identifier] = ACTIONS(964),
    [sym_comment] = ACTIONS(54),
  },
  [797] = {
    [anon_sym_RBRACE] = ACTIONS(788),
    [anon_sym_AT] = ACTIONS(788),
    [anon_sym_static] = ACTIONS(790),
    [anon_sym_class] = ACTIONS(790),
    [anon_sym_public] = ACTIONS(790),
    [anon_sym_protected] = ACTIONS(790),
    [anon_sym_private] = ACTIONS(790),
    [anon_sym_abstract] = ACTIONS(790),
    [anon_sym_final] = ACTIONS(790),
    [anon_sym_strictfp] = ACTIONS(790),
    [anon_sym_default] = ACTIONS(790),
    [anon_sym_synchronized] = ACTIONS(790),
    [anon_sym_native] = ACTIONS(790),
    [anon_sym_interface] = ACTIONS(790),
    [sym_identifier] = ACTIONS(792),
    [sym_comment] = ACTIONS(54),
  },
  [798] = {
    [sym__annotation] = STATE(257),
    [sym_normal_annotation] = STATE(261),
    [sym_marker_annotation] = STATE(261),
    [sym_single_element_annotation] = STATE(261),
    [sym_class_declaration] = STATE(252),
    [sym_normal_class_declaration] = STATE(262),
    [sym_modifier] = STATE(263),
    [sym_type_parameters] = STATE(264),
    [sym_class_body_declaration] = STATE(412),
    [sym_constructor_declaration] = STATE(266),
    [sym_constructor_declarator] = STATE(267),
    [sym_class_member_declaration] = STATE(266),
    [sym_interface_declaration] = STATE(252),
    [sym_annotation_type_declaration] = STATE(268),
    [sym_normal_interface_declaration] = STATE(268),
    [sym_method_header] = STATE(269),
    [sym_result] = STATE(38),
    [sym_block] = STATE(266),
    [sym_method_declaration] = STATE(252),
    [aux_sym_normal_class_declaration_repeat1] = STATE(270),
    [sym__semicolon] = ACTIONS(526),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_LBRACE] = ACTIONS(530),
    [anon_sym_RBRACE] = ACTIONS(1858),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(538),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(540),
    [sym_identifier] = ACTIONS(542),
    [sym_comment] = ACTIONS(54),
  },
  [799] = {
    [sym_super_interfaces] = STATE(950),
    [sym_class_body] = STATE(951),
    [anon_sym_LBRACE] = ACTIONS(1308),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [800] = {
    [sym_class_body] = STATE(951),
    [anon_sym_LBRACE] = ACTIONS(1308),
    [sym_comment] = ACTIONS(54),
  },
  [801] = {
    [anon_sym_RBRACE] = ACTIONS(838),
    [anon_sym_AT] = ACTIONS(838),
    [anon_sym_static] = ACTIONS(840),
    [anon_sym_class] = ACTIONS(840),
    [anon_sym_public] = ACTIONS(840),
    [anon_sym_protected] = ACTIONS(840),
    [anon_sym_private] = ACTIONS(840),
    [anon_sym_abstract] = ACTIONS(840),
    [anon_sym_final] = ACTIONS(840),
    [anon_sym_strictfp] = ACTIONS(840),
    [anon_sym_default] = ACTIONS(840),
    [anon_sym_synchronized] = ACTIONS(840),
    [anon_sym_native] = ACTIONS(840),
    [anon_sym_interface] = ACTIONS(840),
    [sym_identifier] = ACTIONS(842),
    [sym_comment] = ACTIONS(54),
  },
  [802] = {
    [anon_sym_RBRACE] = ACTIONS(850),
    [anon_sym_AT] = ACTIONS(850),
    [anon_sym_static] = ACTIONS(852),
    [anon_sym_class] = ACTIONS(852),
    [anon_sym_public] = ACTIONS(852),
    [anon_sym_protected] = ACTIONS(852),
    [anon_sym_private] = ACTIONS(852),
    [anon_sym_abstract] = ACTIONS(852),
    [anon_sym_final] = ACTIONS(852),
    [anon_sym_strictfp] = ACTIONS(852),
    [anon_sym_default] = ACTIONS(852),
    [anon_sym_synchronized] = ACTIONS(852),
    [anon_sym_native] = ACTIONS(852),
    [anon_sym_interface] = ACTIONS(852),
    [sym_identifier] = ACTIONS(854),
    [sym_comment] = ACTIONS(54),
  },
  [803] = {
    [sym__annotation] = STATE(257),
    [sym_normal_annotation] = STATE(261),
    [sym_marker_annotation] = STATE(261),
    [sym_single_element_annotation] = STATE(261),
    [sym_class_declaration] = STATE(278),
    [sym_normal_class_declaration] = STATE(262),
    [sym_modifier] = STATE(263),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(278),
    [sym_annotation_type_declaration] = STATE(268),
    [sym_normal_interface_declaration] = STATE(268),
    [sym_interface_member_declaration] = STATE(422),
    [sym_constant_declaration] = STATE(278),
    [sym_variable_declarator_list] = STATE(281),
    [sym_variable_declarator] = STATE(282),
    [sym_variable_declarator_id] = STATE(126),
    [sym_method_header] = STATE(269),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(278),
    [aux_sym_normal_class_declaration_repeat1] = STATE(283),
    [sym__semicolon] = ACTIONS(550),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(1860),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(538),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(540),
    [sym_identifier] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [804] = {
    [sym_interface_body] = STATE(953),
    [anon_sym_LBRACE] = ACTIONS(1310),
    [sym_comment] = ACTIONS(54),
  },
  [805] = {
    [anon_sym_RBRACE] = ACTIONS(872),
    [anon_sym_AT] = ACTIONS(872),
    [anon_sym_static] = ACTIONS(874),
    [anon_sym_class] = ACTIONS(874),
    [anon_sym_public] = ACTIONS(874),
    [anon_sym_protected] = ACTIONS(874),
    [anon_sym_private] = ACTIONS(874),
    [anon_sym_abstract] = ACTIONS(874),
    [anon_sym_final] = ACTIONS(874),
    [anon_sym_strictfp] = ACTIONS(874),
    [anon_sym_default] = ACTIONS(874),
    [anon_sym_synchronized] = ACTIONS(874),
    [anon_sym_native] = ACTIONS(874),
    [anon_sym_interface] = ACTIONS(874),
    [sym_identifier] = ACTIONS(876),
    [sym_comment] = ACTIONS(54),
  },
  [806] = {
    [anon_sym_RBRACE] = ACTIONS(1862),
    [anon_sym_AT] = ACTIONS(1862),
    [anon_sym_static] = ACTIONS(1864),
    [anon_sym_class] = ACTIONS(1864),
    [anon_sym_public] = ACTIONS(1864),
    [anon_sym_protected] = ACTIONS(1864),
    [anon_sym_private] = ACTIONS(1864),
    [anon_sym_abstract] = ACTIONS(1864),
    [anon_sym_final] = ACTIONS(1864),
    [anon_sym_strictfp] = ACTIONS(1864),
    [anon_sym_default] = ACTIONS(1864),
    [anon_sym_synchronized] = ACTIONS(1864),
    [anon_sym_native] = ACTIONS(1864),
    [anon_sym_interface] = ACTIONS(1864),
    [sym_identifier] = ACTIONS(1866),
    [sym_comment] = ACTIONS(54),
  },
  [807] = {
    [sym__literal] = STATE(508),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(509),
    [sym__annotation] = STATE(508),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_element_value] = STATE(955),
    [sym_element_value_array_initializer] = STATE(508),
    [sym_conditional_expression] = STATE(508),
    [sym_conditional_or_expression] = STATE(956),
    [sym_conditional_and_expression] = STATE(957),
    [sym_inclusive_or_expression] = STATE(958),
    [sym_exclusive_or_expression] = STATE(959),
    [sym_and_expression] = STATE(515),
    [sym_relational_expression] = STATE(960),
    [sym_equality_expression] = STATE(961),
    [sym_shift_expression] = STATE(962),
    [sym_additive_expression] = STATE(963),
    [sym_multiplicative_expression] = STATE(964),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1030),
    [anon_sym_false] = ACTIONS(1030),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(1868),
    [anon_sym_TILDE] = ACTIONS(1868),
    [anon_sym_LBRACE] = ACTIONS(1034),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [808] = {
    [sym_default_value] = STATE(966),
    [sym__semicolon] = ACTIONS(1870),
    [anon_sym_default] = ACTIONS(1626),
    [sym_comment] = ACTIONS(54),
  },
  [809] = {
    [sym__semicolon] = ACTIONS(1870),
    [sym_comment] = ACTIONS(54),
  },
  [810] = {
    [sym_annotation_type_body] = STATE(967),
    [anon_sym_LBRACE] = ACTIONS(1612),
    [sym_comment] = ACTIONS(54),
  },
  [811] = {
    [sym_superclass] = STATE(968),
    [sym_super_interfaces] = STATE(950),
    [sym_class_body] = STATE(951),
    [anon_sym_LBRACE] = ACTIONS(1308),
    [anon_sym_extends] = ACTIONS(342),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [812] = {
    [sym_extends_interfaces] = STATE(969),
    [sym_interface_body] = STATE(953),
    [anon_sym_LBRACE] = ACTIONS(1310),
    [anon_sym_extends] = ACTIONS(348),
    [sym_comment] = ACTIONS(54),
  },
  [813] = {
    [sym_dims] = STATE(970),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_default_value] = STATE(966),
    [aux_sym_class_or_interface_type_repeat1] = STATE(217),
    [aux_sym_dims_repeat1] = STATE(218),
    [sym__semicolon] = ACTIONS(1870),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_default] = ACTIONS(1626),
    [sym_comment] = ACTIONS(54),
  },
  [814] = {
    [sym__expression] = STATE(971),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [815] = {
    [sym__expression] = STATE(972),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [816] = {
    [sym__expression] = STATE(973),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [817] = {
    [sym__expression] = STATE(974),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [818] = {
    [sym__expression] = STATE(170),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [819] = {
    [sym__expression] = STATE(975),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [820] = {
    [sym__semicolon] = ACTIONS(1872),
    [anon_sym_RPAREN] = ACTIONS(1872),
    [anon_sym_COMMA] = ACTIONS(1872),
    [anon_sym_RBRACE] = ACTIONS(1872),
    [sym_comment] = ACTIONS(54),
  },
  [821] = {
    [sym__expression] = STATE(69),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1640),
    [anon_sym_TILDE] = ACTIONS(1640),
    [anon_sym_PLUS_PLUS] = ACTIONS(1642),
    [anon_sym_DASH_DASH] = ACTIONS(1642),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [822] = {
    [sym__expression] = STATE(70),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1640),
    [anon_sym_TILDE] = ACTIONS(1640),
    [anon_sym_PLUS_PLUS] = ACTIONS(1642),
    [anon_sym_DASH_DASH] = ACTIONS(1642),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [823] = {
    [anon_sym_GT] = ACTIONS(1874),
    [anon_sym_LT] = ACTIONS(306),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [anon_sym_GT_EQ] = ACTIONS(1876),
    [anon_sym_LT_EQ] = ACTIONS(1876),
    [anon_sym_BANG_EQ] = ACTIONS(304),
    [anon_sym_AMP_AMP] = ACTIONS(304),
    [anon_sym_PIPE_PIPE] = ACTIONS(304),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(1878),
    [anon_sym_PIPE] = ACTIONS(306),
    [anon_sym_CARET] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(304),
    [anon_sym_LT_LT] = ACTIONS(304),
    [anon_sym_GT_GT] = ACTIONS(306),
    [anon_sym_GT_GT_GT] = ACTIONS(304),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_QMARK] = ACTIONS(304),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(304),
    [sym_comment] = ACTIONS(54),
  },
  [824] = {
    [sym__literal] = STATE(508),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(509),
    [sym__annotation] = STATE(508),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_element_value] = STATE(983),
    [sym_element_value_array_initializer] = STATE(508),
    [sym_conditional_expression] = STATE(508),
    [sym_conditional_or_expression] = STATE(662),
    [sym_conditional_and_expression] = STATE(663),
    [sym_inclusive_or_expression] = STATE(664),
    [sym_exclusive_or_expression] = STATE(665),
    [sym_and_expression] = STATE(515),
    [sym_relational_expression] = STATE(666),
    [sym_equality_expression] = STATE(667),
    [sym_shift_expression] = STATE(668),
    [sym_additive_expression] = STATE(669),
    [sym_multiplicative_expression] = STATE(670),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1030),
    [anon_sym_false] = ACTIONS(1030),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(1342),
    [anon_sym_TILDE] = ACTIONS(1342),
    [anon_sym_LBRACE] = ACTIONS(1034),
    [anon_sym_RBRACE] = ACTIONS(1880),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [825] = {
    [anon_sym_COMMA] = ACTIONS(1882),
    [anon_sym_RBRACE] = ACTIONS(1880),
    [sym_comment] = ACTIONS(54),
  },
  [826] = {
    [sym_unary_expression] = STATE(509),
    [sym_conditional_and_expression] = STATE(985),
    [sym_inclusive_or_expression] = STATE(664),
    [sym_exclusive_or_expression] = STATE(665),
    [sym_and_expression] = STATE(515),
    [sym_relational_expression] = STATE(666),
    [sym_equality_expression] = STATE(667),
    [sym_shift_expression] = STATE(668),
    [sym_additive_expression] = STATE(669),
    [sym_multiplicative_expression] = STATE(670),
    [anon_sym_BANG] = ACTIONS(1342),
    [anon_sym_TILDE] = ACTIONS(1342),
    [sym_comment] = ACTIONS(54),
  },
  [827] = {
    [sym__expression] = STATE(986),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [828] = {
    [sym_unary_expression] = STATE(509),
    [sym_inclusive_or_expression] = STATE(987),
    [sym_exclusive_or_expression] = STATE(665),
    [sym_and_expression] = STATE(515),
    [sym_relational_expression] = STATE(666),
    [sym_equality_expression] = STATE(667),
    [sym_shift_expression] = STATE(668),
    [sym_additive_expression] = STATE(669),
    [sym_multiplicative_expression] = STATE(670),
    [anon_sym_BANG] = ACTIONS(1342),
    [anon_sym_TILDE] = ACTIONS(1342),
    [sym_comment] = ACTIONS(54),
  },
  [829] = {
    [sym_unary_expression] = STATE(509),
    [sym_exclusive_or_expression] = STATE(988),
    [sym_and_expression] = STATE(515),
    [sym_relational_expression] = STATE(666),
    [sym_equality_expression] = STATE(667),
    [sym_shift_expression] = STATE(668),
    [sym_additive_expression] = STATE(669),
    [sym_multiplicative_expression] = STATE(670),
    [anon_sym_BANG] = ACTIONS(1342),
    [anon_sym_TILDE] = ACTIONS(1342),
    [sym_comment] = ACTIONS(54),
  },
  [830] = {
    [sym_unary_expression] = STATE(509),
    [sym_and_expression] = STATE(840),
    [sym_relational_expression] = STATE(666),
    [sym_equality_expression] = STATE(667),
    [sym_shift_expression] = STATE(668),
    [sym_additive_expression] = STATE(669),
    [sym_multiplicative_expression] = STATE(670),
    [anon_sym_BANG] = ACTIONS(1342),
    [anon_sym_TILDE] = ACTIONS(1342),
    [sym_comment] = ACTIONS(54),
  },
  [831] = {
    [sym_unary_expression] = STATE(509),
    [sym_shift_expression] = STATE(989),
    [sym_additive_expression] = STATE(669),
    [sym_multiplicative_expression] = STATE(670),
    [anon_sym_BANG] = ACTIONS(1342),
    [anon_sym_TILDE] = ACTIONS(1342),
    [sym_comment] = ACTIONS(54),
  },
  [832] = {
    [sym_unary_expression] = STATE(509),
    [sym_relational_expression] = STATE(990),
    [sym_shift_expression] = STATE(668),
    [sym_additive_expression] = STATE(669),
    [sym_multiplicative_expression] = STATE(670),
    [anon_sym_BANG] = ACTIONS(1342),
    [anon_sym_TILDE] = ACTIONS(1342),
    [sym_comment] = ACTIONS(54),
  },
  [833] = {
    [sym_unary_expression] = STATE(509),
    [sym_additive_expression] = STATE(991),
    [sym_multiplicative_expression] = STATE(670),
    [anon_sym_BANG] = ACTIONS(1342),
    [anon_sym_TILDE] = ACTIONS(1342),
    [sym_comment] = ACTIONS(54),
  },
  [834] = {
    [sym_unary_expression] = STATE(509),
    [sym_multiplicative_expression] = STATE(992),
    [anon_sym_BANG] = ACTIONS(1342),
    [anon_sym_TILDE] = ACTIONS(1342),
    [sym_comment] = ACTIONS(54),
  },
  [835] = {
    [sym_unary_expression] = STATE(845),
    [anon_sym_BANG] = ACTIONS(1342),
    [anon_sym_TILDE] = ACTIONS(1342),
    [sym_comment] = ACTIONS(54),
  },
  [836] = {
    [anon_sym_AMP_AMP] = ACTIONS(1360),
    [anon_sym_PIPE_PIPE] = ACTIONS(1884),
    [anon_sym_RPAREN] = ACTIONS(1884),
    [anon_sym_COMMA] = ACTIONS(1884),
    [anon_sym_QMARK] = ACTIONS(1884),
    [sym_comment] = ACTIONS(54),
  },
  [837] = {
    [anon_sym_GT] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(566),
    [anon_sym_EQ_EQ] = ACTIONS(568),
    [anon_sym_GT_EQ] = ACTIONS(568),
    [anon_sym_LT_EQ] = ACTIONS(568),
    [anon_sym_BANG_EQ] = ACTIONS(568),
    [anon_sym_AMP_AMP] = ACTIONS(570),
    [anon_sym_PIPE_PIPE] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_SLASH] = ACTIONS(578),
    [anon_sym_AMP] = ACTIONS(580),
    [anon_sym_PIPE] = ACTIONS(582),
    [anon_sym_CARET] = ACTIONS(572),
    [anon_sym_PERCENT] = ACTIONS(576),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(578),
    [anon_sym_GT_GT_GT] = ACTIONS(576),
    [anon_sym_QMARK] = ACTIONS(584),
    [anon_sym_COLON] = ACTIONS(1886),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [838] = {
    [anon_sym_AMP_AMP] = ACTIONS(1888),
    [anon_sym_PIPE_PIPE] = ACTIONS(1888),
    [anon_sym_PIPE] = ACTIONS(1366),
    [anon_sym_RPAREN] = ACTIONS(1888),
    [anon_sym_COMMA] = ACTIONS(1888),
    [anon_sym_QMARK] = ACTIONS(1888),
    [sym_comment] = ACTIONS(54),
  },
  [839] = {
    [anon_sym_AMP_AMP] = ACTIONS(1890),
    [anon_sym_PIPE_PIPE] = ACTIONS(1890),
    [anon_sym_PIPE] = ACTIONS(1892),
    [anon_sym_CARET] = ACTIONS(1372),
    [anon_sym_RPAREN] = ACTIONS(1890),
    [anon_sym_COMMA] = ACTIONS(1890),
    [anon_sym_QMARK] = ACTIONS(1890),
    [sym_comment] = ACTIONS(54),
  },
  [840] = {
    [sym__semicolon] = ACTIONS(1894),
    [anon_sym_AMP_AMP] = ACTIONS(1894),
    [anon_sym_PIPE_PIPE] = ACTIONS(1894),
    [anon_sym_PIPE] = ACTIONS(1896),
    [anon_sym_CARET] = ACTIONS(1894),
    [anon_sym_RPAREN] = ACTIONS(1894),
    [anon_sym_COMMA] = ACTIONS(1894),
    [anon_sym_QMARK] = ACTIONS(1894),
    [anon_sym_RBRACE] = ACTIONS(1894),
    [sym_comment] = ACTIONS(54),
  },
  [841] = {
    [anon_sym_LT] = ACTIONS(1898),
    [anon_sym_EQ_EQ] = ACTIONS(1900),
    [anon_sym_BANG_EQ] = ACTIONS(1900),
    [anon_sym_AMP_AMP] = ACTIONS(1900),
    [anon_sym_PIPE_PIPE] = ACTIONS(1900),
    [anon_sym_PIPE] = ACTIONS(1898),
    [anon_sym_CARET] = ACTIONS(1900),
    [anon_sym_LT_LT] = ACTIONS(1392),
    [anon_sym_GT_GT] = ACTIONS(1394),
    [anon_sym_GT_GT_GT] = ACTIONS(1392),
    [anon_sym_RPAREN] = ACTIONS(1900),
    [anon_sym_COMMA] = ACTIONS(1900),
    [anon_sym_QMARK] = ACTIONS(1900),
    [sym_comment] = ACTIONS(54),
  },
  [842] = {
    [anon_sym_LT] = ACTIONS(1378),
    [anon_sym_EQ_EQ] = ACTIONS(1902),
    [anon_sym_BANG_EQ] = ACTIONS(1902),
    [anon_sym_AMP_AMP] = ACTIONS(1904),
    [anon_sym_PIPE_PIPE] = ACTIONS(1904),
    [anon_sym_PIPE] = ACTIONS(1906),
    [anon_sym_CARET] = ACTIONS(1904),
    [anon_sym_RPAREN] = ACTIONS(1904),
    [anon_sym_COMMA] = ACTIONS(1904),
    [anon_sym_QMARK] = ACTIONS(1904),
    [sym_comment] = ACTIONS(54),
  },
  [843] = {
    [anon_sym_LT] = ACTIONS(1908),
    [anon_sym_EQ_EQ] = ACTIONS(1910),
    [anon_sym_BANG_EQ] = ACTIONS(1910),
    [anon_sym_AMP_AMP] = ACTIONS(1910),
    [anon_sym_PIPE_PIPE] = ACTIONS(1910),
    [anon_sym_PLUS] = ACTIONS(1400),
    [anon_sym_DASH] = ACTIONS(1400),
    [anon_sym_PIPE] = ACTIONS(1908),
    [anon_sym_CARET] = ACTIONS(1910),
    [anon_sym_LT_LT] = ACTIONS(1910),
    [anon_sym_GT_GT] = ACTIONS(1908),
    [anon_sym_GT_GT_GT] = ACTIONS(1910),
    [anon_sym_RPAREN] = ACTIONS(1910),
    [anon_sym_COMMA] = ACTIONS(1910),
    [anon_sym_QMARK] = ACTIONS(1910),
    [sym_comment] = ACTIONS(54),
  },
  [844] = {
    [anon_sym_LT] = ACTIONS(1912),
    [anon_sym_EQ_EQ] = ACTIONS(1914),
    [anon_sym_BANG_EQ] = ACTIONS(1914),
    [anon_sym_AMP_AMP] = ACTIONS(1914),
    [anon_sym_PIPE_PIPE] = ACTIONS(1914),
    [anon_sym_PLUS] = ACTIONS(1914),
    [anon_sym_DASH] = ACTIONS(1914),
    [anon_sym_STAR] = ACTIONS(1406),
    [anon_sym_SLASH] = ACTIONS(1408),
    [anon_sym_PIPE] = ACTIONS(1912),
    [anon_sym_CARET] = ACTIONS(1914),
    [anon_sym_PERCENT] = ACTIONS(1406),
    [anon_sym_LT_LT] = ACTIONS(1914),
    [anon_sym_GT_GT] = ACTIONS(1912),
    [anon_sym_GT_GT_GT] = ACTIONS(1914),
    [anon_sym_RPAREN] = ACTIONS(1914),
    [anon_sym_COMMA] = ACTIONS(1914),
    [anon_sym_QMARK] = ACTIONS(1914),
    [sym_comment] = ACTIONS(54),
  },
  [845] = {
    [sym__semicolon] = ACTIONS(1916),
    [anon_sym_LT] = ACTIONS(1918),
    [anon_sym_EQ_EQ] = ACTIONS(1916),
    [anon_sym_BANG_EQ] = ACTIONS(1916),
    [anon_sym_AMP_AMP] = ACTIONS(1916),
    [anon_sym_PIPE_PIPE] = ACTIONS(1916),
    [anon_sym_PLUS] = ACTIONS(1916),
    [anon_sym_DASH] = ACTIONS(1916),
    [anon_sym_STAR] = ACTIONS(1916),
    [anon_sym_SLASH] = ACTIONS(1918),
    [anon_sym_PIPE] = ACTIONS(1918),
    [anon_sym_CARET] = ACTIONS(1916),
    [anon_sym_PERCENT] = ACTIONS(1916),
    [anon_sym_LT_LT] = ACTIONS(1916),
    [anon_sym_GT_GT] = ACTIONS(1918),
    [anon_sym_GT_GT_GT] = ACTIONS(1916),
    [anon_sym_RPAREN] = ACTIONS(1916),
    [anon_sym_COMMA] = ACTIONS(1916),
    [anon_sym_QMARK] = ACTIONS(1916),
    [anon_sym_RBRACE] = ACTIONS(1916),
    [sym_comment] = ACTIONS(54),
  },
  [846] = {
    [anon_sym_RBRACE] = ACTIONS(1920),
    [anon_sym_requires] = ACTIONS(1920),
    [anon_sym_exports] = ACTIONS(1920),
    [anon_sym_opens] = ACTIONS(1920),
    [anon_sym_uses] = ACTIONS(1920),
    [anon_sym_provides] = ACTIONS(1920),
    [sym_comment] = ACTIONS(54),
  },
  [847] = {
    [sym__semicolon] = ACTIONS(1922),
    [anon_sym_COMMA] = ACTIONS(1432),
    [sym_comment] = ACTIONS(54),
  },
  [848] = {
    [sym__semicolon] = ACTIONS(1924),
    [anon_sym_COMMA] = ACTIONS(1924),
    [anon_sym_DOT] = ACTIONS(1068),
    [sym_comment] = ACTIONS(54),
  },
  [849] = {
    [sym_package_or_type_name] = STATE(995),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(54),
  },
  [850] = {
    [sym__semicolon] = ACTIONS(1922),
    [anon_sym_COMMA] = ACTIONS(1926),
    [sym_comment] = ACTIONS(54),
  },
  [851] = {
    [sym__semicolon] = ACTIONS(986),
    [anon_sym_LT] = ACTIONS(986),
    [anon_sym_LBRACE] = ACTIONS(986),
    [anon_sym_RBRACE] = ACTIONS(986),
    [anon_sym_AT] = ACTIONS(986),
    [anon_sym_static] = ACTIONS(988),
    [anon_sym_class] = ACTIONS(988),
    [anon_sym_public] = ACTIONS(988),
    [anon_sym_protected] = ACTIONS(988),
    [anon_sym_private] = ACTIONS(988),
    [anon_sym_abstract] = ACTIONS(988),
    [anon_sym_final] = ACTIONS(988),
    [anon_sym_strictfp] = ACTIONS(988),
    [anon_sym_default] = ACTIONS(988),
    [anon_sym_synchronized] = ACTIONS(988),
    [anon_sym_native] = ACTIONS(988),
    [anon_sym_void] = ACTIONS(988),
    [anon_sym_interface] = ACTIONS(988),
    [sym_identifier] = ACTIONS(990),
    [sym_comment] = ACTIONS(54),
  },
  [852] = {
    [sym__annotation] = STATE(356),
    [sym_normal_annotation] = STATE(360),
    [sym_marker_annotation] = STATE(360),
    [sym_single_element_annotation] = STATE(360),
    [sym_class_declaration] = STATE(361),
    [sym_normal_class_declaration] = STATE(362),
    [sym_modifier] = STATE(363),
    [sym_interface_declaration] = STATE(361),
    [sym_annotation_type_declaration] = STATE(364),
    [sym_annotation_type_member_declaration] = STATE(505),
    [sym_annotation_type_element_declaration] = STATE(361),
    [sym_normal_interface_declaration] = STATE(364),
    [sym_constant_declaration] = STATE(361),
    [sym_variable_declarator_list] = STATE(366),
    [sym_variable_declarator] = STATE(282),
    [sym_variable_declarator_id] = STATE(126),
    [aux_sym_normal_class_declaration_repeat1] = STATE(367),
    [anon_sym_RBRACE] = ACTIONS(1928),
    [anon_sym_AT] = ACTIONS(714),
    [anon_sym_static] = ACTIONS(716),
    [anon_sym_class] = ACTIONS(718),
    [anon_sym_public] = ACTIONS(716),
    [anon_sym_protected] = ACTIONS(716),
    [anon_sym_private] = ACTIONS(716),
    [anon_sym_abstract] = ACTIONS(716),
    [anon_sym_final] = ACTIONS(716),
    [anon_sym_strictfp] = ACTIONS(716),
    [anon_sym_default] = ACTIONS(716),
    [anon_sym_synchronized] = ACTIONS(716),
    [anon_sym_native] = ACTIONS(716),
    [anon_sym_interface] = ACTIONS(720),
    [sym_identifier] = ACTIONS(722),
    [sym_comment] = ACTIONS(54),
  },
  [853] = {
    [anon_sym_LT] = ACTIONS(1026),
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
    [anon_sym_synchronized] = ACTIONS(1028),
    [anon_sym_native] = ACTIONS(1028),
    [anon_sym_void] = ACTIONS(1028),
    [anon_sym_interface] = ACTIONS(1028),
    [sym_identifier] = ACTIONS(1290),
    [sym_comment] = ACTIONS(54),
  },
  [854] = {
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_AT] = ACTIONS(1036),
    [anon_sym_static] = ACTIONS(1038),
    [anon_sym_class] = ACTIONS(1038),
    [anon_sym_public] = ACTIONS(1038),
    [anon_sym_protected] = ACTIONS(1038),
    [anon_sym_private] = ACTIONS(1038),
    [anon_sym_abstract] = ACTIONS(1038),
    [anon_sym_final] = ACTIONS(1038),
    [anon_sym_strictfp] = ACTIONS(1038),
    [anon_sym_default] = ACTIONS(1038),
    [anon_sym_synchronized] = ACTIONS(1038),
    [anon_sym_native] = ACTIONS(1038),
    [anon_sym_void] = ACTIONS(1038),
    [anon_sym_interface] = ACTIONS(1038),
    [sym_identifier] = ACTIONS(1292),
    [sym_comment] = ACTIONS(54),
  },
  [855] = {
    [sym__semicolon] = ACTIONS(1146),
    [anon_sym_LT] = ACTIONS(1146),
    [anon_sym_LBRACE] = ACTIONS(1146),
    [anon_sym_RBRACE] = ACTIONS(1146),
    [anon_sym_AT] = ACTIONS(1146),
    [anon_sym_static] = ACTIONS(1148),
    [anon_sym_class] = ACTIONS(1148),
    [anon_sym_public] = ACTIONS(1148),
    [anon_sym_protected] = ACTIONS(1148),
    [anon_sym_private] = ACTIONS(1148),
    [anon_sym_abstract] = ACTIONS(1148),
    [anon_sym_final] = ACTIONS(1148),
    [anon_sym_strictfp] = ACTIONS(1148),
    [anon_sym_default] = ACTIONS(1148),
    [anon_sym_synchronized] = ACTIONS(1148),
    [anon_sym_native] = ACTIONS(1148),
    [anon_sym_void] = ACTIONS(1148),
    [anon_sym_interface] = ACTIONS(1148),
    [sym_identifier] = ACTIONS(1150),
    [sym_comment] = ACTIONS(54),
  },
  [856] = {
    [sym_class_body] = STATE(998),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [sym_comment] = ACTIONS(54),
  },
  [857] = {
    [sym__semicolon] = ACTIONS(1162),
    [anon_sym_LT] = ACTIONS(1162),
    [anon_sym_LBRACE] = ACTIONS(1162),
    [anon_sym_RBRACE] = ACTIONS(1162),
    [anon_sym_AT] = ACTIONS(1162),
    [anon_sym_static] = ACTIONS(1164),
    [anon_sym_class] = ACTIONS(1164),
    [anon_sym_public] = ACTIONS(1164),
    [anon_sym_protected] = ACTIONS(1164),
    [anon_sym_private] = ACTIONS(1164),
    [anon_sym_abstract] = ACTIONS(1164),
    [anon_sym_final] = ACTIONS(1164),
    [anon_sym_strictfp] = ACTIONS(1164),
    [anon_sym_default] = ACTIONS(1164),
    [anon_sym_synchronized] = ACTIONS(1164),
    [anon_sym_native] = ACTIONS(1164),
    [anon_sym_void] = ACTIONS(1164),
    [anon_sym_interface] = ACTIONS(1164),
    [sym_identifier] = ACTIONS(1166),
    [sym_comment] = ACTIONS(54),
  },
  [858] = {
    [sym__semicolon] = ACTIONS(1180),
    [anon_sym_LT] = ACTIONS(1180),
    [anon_sym_LBRACE] = ACTIONS(1180),
    [anon_sym_RBRACE] = ACTIONS(1180),
    [anon_sym_AT] = ACTIONS(1180),
    [anon_sym_static] = ACTIONS(1182),
    [anon_sym_class] = ACTIONS(1182),
    [anon_sym_public] = ACTIONS(1182),
    [anon_sym_protected] = ACTIONS(1182),
    [anon_sym_private] = ACTIONS(1182),
    [anon_sym_abstract] = ACTIONS(1182),
    [anon_sym_final] = ACTIONS(1182),
    [anon_sym_strictfp] = ACTIONS(1182),
    [anon_sym_default] = ACTIONS(1182),
    [anon_sym_synchronized] = ACTIONS(1182),
    [anon_sym_native] = ACTIONS(1182),
    [anon_sym_void] = ACTIONS(1182),
    [anon_sym_interface] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(1184),
    [sym_comment] = ACTIONS(54),
  },
  [859] = {
    [sym__semicolon] = ACTIONS(1192),
    [anon_sym_LT] = ACTIONS(1192),
    [anon_sym_LBRACE] = ACTIONS(1192),
    [anon_sym_RBRACE] = ACTIONS(1192),
    [anon_sym_AT] = ACTIONS(1192),
    [anon_sym_static] = ACTIONS(1194),
    [anon_sym_class] = ACTIONS(1194),
    [anon_sym_public] = ACTIONS(1194),
    [anon_sym_protected] = ACTIONS(1194),
    [anon_sym_private] = ACTIONS(1194),
    [anon_sym_abstract] = ACTIONS(1194),
    [anon_sym_final] = ACTIONS(1194),
    [anon_sym_strictfp] = ACTIONS(1194),
    [anon_sym_default] = ACTIONS(1194),
    [anon_sym_synchronized] = ACTIONS(1194),
    [anon_sym_native] = ACTIONS(1194),
    [anon_sym_void] = ACTIONS(1194),
    [anon_sym_interface] = ACTIONS(1194),
    [sym_identifier] = ACTIONS(1196),
    [sym_comment] = ACTIONS(54),
  },
  [860] = {
    [anon_sym_DOT] = ACTIONS(1930),
    [anon_sym_LBRACK] = ACTIONS(1930),
    [anon_sym_COLON_COLON] = ACTIONS(1930),
    [sym_comment] = ACTIONS(54),
  },
  [861] = {
    [anon_sym_DOT] = ACTIONS(1932),
    [anon_sym_LBRACK] = ACTIONS(1932),
    [anon_sym_COLON_COLON] = ACTIONS(1932),
    [sym_comment] = ACTIONS(54),
  },
  [862] = {
    [anon_sym_class] = ACTIONS(1934),
    [sym_comment] = ACTIONS(54),
  },
  [863] = {
    [anon_sym_DOT] = ACTIONS(1936),
    [anon_sym_LBRACK] = ACTIONS(1936),
    [sym_comment] = ACTIONS(54),
  },
  [864] = {
    [sym__literal] = STATE(1002),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(1003),
    [sym_element_value_pair] = STATE(237),
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
    [anon_sym_RPAREN] = ACTIONS(1938),
    [sym_identifier] = ACTIONS(1940),
    [sym_comment] = ACTIONS(54),
  },
  [865] = {
    [sym_identifier] = ACTIONS(1942),
    [sym_comment] = ACTIONS(54),
  },
  [866] = {
    [sym__semicolon] = ACTIONS(1944),
    [sym_comment] = ACTIONS(54),
  },
  [867] = {
    [aux_sym_argument_list_repeat1] = STATE(1007),
    [anon_sym_GT] = ACTIONS(1632),
    [anon_sym_LT] = ACTIONS(1632),
    [anon_sym_EQ_EQ] = ACTIONS(1634),
    [anon_sym_GT_EQ] = ACTIONS(1634),
    [anon_sym_LT_EQ] = ACTIONS(1634),
    [anon_sym_BANG_EQ] = ACTIONS(1634),
    [anon_sym_AMP_AMP] = ACTIONS(1946),
    [anon_sym_PIPE_PIPE] = ACTIONS(1948),
    [anon_sym_PLUS] = ACTIONS(1950),
    [anon_sym_DASH] = ACTIONS(1950),
    [anon_sym_STAR] = ACTIONS(1952),
    [anon_sym_SLASH] = ACTIONS(1954),
    [anon_sym_AMP] = ACTIONS(1636),
    [anon_sym_PIPE] = ACTIONS(1956),
    [anon_sym_CARET] = ACTIONS(1948),
    [anon_sym_PERCENT] = ACTIONS(1952),
    [anon_sym_LT_LT] = ACTIONS(1952),
    [anon_sym_GT_GT] = ACTIONS(1954),
    [anon_sym_GT_GT_GT] = ACTIONS(1952),
    [anon_sym_RPAREN] = ACTIONS(1958),
    [anon_sym_COMMA] = ACTIONS(1960),
    [anon_sym_QMARK] = ACTIONS(1962),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [868] = {
    [anon_sym_RPAREN] = ACTIONS(1964),
    [sym_comment] = ACTIONS(54),
  },
  [869] = {
    [anon_sym_DOT] = ACTIONS(1966),
    [anon_sym_LBRACK] = ACTIONS(1966),
    [anon_sym_COLON_COLON] = ACTIONS(1966),
    [sym_comment] = ACTIONS(54),
  },
  [870] = {
    [anon_sym_DOT] = ACTIONS(1968),
    [anon_sym_LBRACK] = ACTIONS(1968),
    [anon_sym_COLON_COLON] = ACTIONS(1968),
    [sym_comment] = ACTIONS(54),
  },
  [871] = {
    [sym_identifier] = ACTIONS(1970),
    [sym_comment] = ACTIONS(54),
  },
  [872] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(1011),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1972),
    [sym_comment] = ACTIONS(54),
  },
  [873] = {
    [anon_sym_LPAREN] = ACTIONS(1974),
    [sym_comment] = ACTIONS(54),
  },
  [874] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(477),
    [anon_sym_LPAREN] = ACTIONS(1974),
    [anon_sym_DOT] = ACTIONS(662),
    [anon_sym_LBRACK] = ACTIONS(944),
    [anon_sym_AT] = ACTIONS(944),
    [sym_comment] = ACTIONS(54),
  },
  [875] = {
    [anon_sym_LPAREN] = ACTIONS(1976),
    [sym_comment] = ACTIONS(54),
  },
  [876] = {
    [sym_type_arguments] = STATE(873),
    [sym_type_arguments_or_diamond] = STATE(1013),
    [anon_sym_LT] = ACTIONS(1714),
    [anon_sym_LPAREN] = ACTIONS(1976),
    [anon_sym_DOT] = ACTIONS(1978),
    [anon_sym_LT_GT] = ACTIONS(1720),
    [sym_comment] = ACTIONS(54),
  },
  [877] = {
    [sym_type_arguments] = STATE(873),
    [sym_type_arguments_or_diamond] = STATE(875),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(876),
    [anon_sym_LT] = ACTIONS(1714),
    [anon_sym_LPAREN] = ACTIONS(1716),
    [anon_sym_DOT] = ACTIONS(1980),
    [anon_sym_LT_GT] = ACTIONS(1720),
    [sym_comment] = ACTIONS(54),
  },
  [878] = {
    [anon_sym_LPAREN] = ACTIONS(1982),
    [sym_comment] = ACTIONS(54),
  },
  [879] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1984),
    [sym_comment] = ACTIONS(54),
  },
  [880] = {
    [sym_array_initializer] = STATE(1018),
    [anon_sym_LBRACE] = ACTIONS(1986),
    [sym_comment] = ACTIONS(54),
  },
  [881] = {
    [sym_dims] = STATE(1018),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [aux_sym_class_or_interface_type_repeat1] = STATE(217),
    [aux_sym_dims_repeat1] = STATE(218),
    [anon_sym_DOT] = ACTIONS(1988),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_COLON_COLON] = ACTIONS(1988),
    [sym_comment] = ACTIONS(54),
  },
  [882] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(1020),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(1990),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [883] = {
    [sym_type_arguments] = STATE(1021),
    [sym_type_arguments_or_diamond] = STATE(1013),
    [aux_sym_class_or_interface_type_repeat2] = STATE(477),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(1022),
    [anon_sym_LT] = ACTIONS(1714),
    [anon_sym_LPAREN] = ACTIONS(1976),
    [anon_sym_DOT] = ACTIONS(1718),
    [anon_sym_LBRACK] = ACTIONS(944),
    [anon_sym_AT] = ACTIONS(944),
    [anon_sym_LT_GT] = ACTIONS(1720),
    [sym_comment] = ACTIONS(54),
  },
  [884] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(1023),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(1964),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [885] = {
    [sym__expression] = STATE(69),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1730),
    [anon_sym_TILDE] = ACTIONS(1730),
    [anon_sym_PLUS_PLUS] = ACTIONS(1732),
    [anon_sym_DASH_DASH] = ACTIONS(1732),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [886] = {
    [sym__expression] = STATE(70),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1730),
    [anon_sym_TILDE] = ACTIONS(1730),
    [anon_sym_PLUS_PLUS] = ACTIONS(1732),
    [anon_sym_DASH_DASH] = ACTIONS(1732),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [887] = {
    [anon_sym_GT] = ACTIONS(1992),
    [anon_sym_LT] = ACTIONS(1992),
    [anon_sym_EQ_EQ] = ACTIONS(1994),
    [anon_sym_GT_EQ] = ACTIONS(1994),
    [anon_sym_LT_EQ] = ACTIONS(1994),
    [anon_sym_BANG_EQ] = ACTIONS(1994),
    [anon_sym_AMP_AMP] = ACTIONS(1996),
    [anon_sym_PIPE_PIPE] = ACTIONS(1998),
    [anon_sym_PLUS] = ACTIONS(2000),
    [anon_sym_DASH] = ACTIONS(2000),
    [anon_sym_STAR] = ACTIONS(2002),
    [anon_sym_SLASH] = ACTIONS(2004),
    [anon_sym_AMP] = ACTIONS(2006),
    [anon_sym_PIPE] = ACTIONS(2008),
    [anon_sym_CARET] = ACTIONS(1998),
    [anon_sym_PERCENT] = ACTIONS(2002),
    [anon_sym_LT_LT] = ACTIONS(2002),
    [anon_sym_GT_GT] = ACTIONS(2004),
    [anon_sym_GT_GT_GT] = ACTIONS(2002),
    [anon_sym_QMARK] = ACTIONS(2010),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(2012),
    [sym_comment] = ACTIONS(54),
  },
  [888] = {
    [anon_sym_new] = ACTIONS(2014),
    [sym_comment] = ACTIONS(54),
  },
  [889] = {
    [anon_sym_DOT] = ACTIONS(1988),
    [anon_sym_COLON_COLON] = ACTIONS(1988),
    [sym_comment] = ACTIONS(54),
  },
  [890] = {
    [sym__expression] = STATE(887),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1730),
    [anon_sym_TILDE] = ACTIONS(1730),
    [anon_sym_PLUS_PLUS] = ACTIONS(1732),
    [anon_sym_DASH_DASH] = ACTIONS(1732),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [891] = {
    [anon_sym_DOT] = ACTIONS(2016),
    [anon_sym_LBRACK] = ACTIONS(2016),
    [anon_sym_AT] = ACTIONS(2016),
    [anon_sym_COLON_COLON] = ACTIONS(2016),
    [sym_comment] = ACTIONS(54),
  },
  [892] = {
    [sym__annotation] = STATE(103),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [anon_sym_LBRACK] = ACTIONS(2018),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [893] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_dims_expr] = STATE(1032),
    [aux_sym_class_or_interface_type_repeat1] = STATE(892),
    [anon_sym_DOT] = ACTIONS(2020),
    [anon_sym_LBRACK] = ACTIONS(1742),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_COLON_COLON] = ACTIONS(2020),
    [sym_comment] = ACTIONS(54),
  },
  [894] = {
    [sym__expression] = STATE(1033),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1730),
    [anon_sym_TILDE] = ACTIONS(1730),
    [anon_sym_PLUS_PLUS] = ACTIONS(1732),
    [anon_sym_DASH_DASH] = ACTIONS(1732),
    [anon_sym_RBRACK] = ACTIONS(968),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [895] = {
    [anon_sym_DOT] = ACTIONS(2022),
    [anon_sym_COLON_COLON] = ACTIONS(2024),
    [sym_comment] = ACTIONS(54),
  },
  [896] = {
    [anon_sym_LPAREN] = ACTIONS(2026),
    [anon_sym_DOT] = ACTIONS(744),
    [anon_sym_LBRACK] = ACTIONS(744),
    [sym_comment] = ACTIONS(54),
  },
  [897] = {
    [sym_identifier] = ACTIONS(2028),
    [sym_comment] = ACTIONS(54),
  },
  [898] = {
    [sym__semicolon] = ACTIONS(2030),
    [anon_sym_LT] = ACTIONS(2030),
    [anon_sym_LBRACE] = ACTIONS(2030),
    [anon_sym_RBRACE] = ACTIONS(2030),
    [anon_sym_AT] = ACTIONS(2030),
    [anon_sym_static] = ACTIONS(2032),
    [anon_sym_class] = ACTIONS(2032),
    [anon_sym_public] = ACTIONS(2032),
    [anon_sym_protected] = ACTIONS(2032),
    [anon_sym_private] = ACTIONS(2032),
    [anon_sym_abstract] = ACTIONS(2032),
    [anon_sym_final] = ACTIONS(2032),
    [anon_sym_strictfp] = ACTIONS(2032),
    [anon_sym_default] = ACTIONS(2032),
    [anon_sym_synchronized] = ACTIONS(2032),
    [anon_sym_native] = ACTIONS(2032),
    [anon_sym_void] = ACTIONS(2032),
    [anon_sym_interface] = ACTIONS(2032),
    [sym_identifier] = ACTIONS(2034),
    [sym_comment] = ACTIONS(54),
  },
  [899] = {
    [sym_type_argument] = STATE(1038),
    [sym_reference_type] = STATE(469),
    [sym_class_or_interface_type] = STATE(470),
    [sym_primitive_type] = STATE(471),
    [sym_integral_type] = STATE(53),
    [sym_floating_point_type] = STATE(53),
    [sym__annotation] = STATE(472),
    [sym_normal_annotation] = STATE(473),
    [sym_marker_annotation] = STATE(473),
    [sym_single_element_annotation] = STATE(473),
    [aux_sym_class_or_interface_type_repeat1] = STATE(474),
    [anon_sym_boolean] = ACTIONS(76),
    [anon_sym_byte] = ACTIONS(78),
    [anon_sym_short] = ACTIONS(78),
    [anon_sym_int] = ACTIONS(78),
    [anon_sym_long] = ACTIONS(78),
    [anon_sym_char] = ACTIONS(78),
    [anon_sym_float] = ACTIONS(80),
    [anon_sym_double] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(938),
    [sym_identifier] = ACTIONS(940),
    [sym_comment] = ACTIONS(54),
  },
  [900] = {
    [anon_sym_LPAREN] = ACTIONS(2036),
    [sym_comment] = ACTIONS(54),
  },
  [901] = {
    [sym_type_arguments] = STATE(716),
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [sym_class_or_interface_type_to_instantiate] = STATE(719),
    [aux_sym_class_or_interface_type_repeat1] = STATE(879),
    [anon_sym_LT] = ACTIONS(914),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(1722),
    [sym_comment] = ACTIONS(54),
  },
  [902] = {
    [anon_sym_LPAREN] = ACTIONS(2026),
    [anon_sym_DOT] = ACTIONS(2038),
    [anon_sym_LBRACK] = ACTIONS(2038),
    [anon_sym_COLON_COLON] = ACTIONS(2038),
    [sym_comment] = ACTIONS(54),
  },
  [903] = {
    [anon_sym_super] = ACTIONS(2040),
    [sym_identifier] = ACTIONS(2042),
    [sym_comment] = ACTIONS(54),
  },
  [904] = {
    [anon_sym_DOT] = ACTIONS(2044),
    [anon_sym_LBRACK] = ACTIONS(2044),
    [anon_sym_COLON_COLON] = ACTIONS(2044),
    [sym_comment] = ACTIONS(54),
  },
  [905] = {
    [anon_sym_GT] = ACTIONS(1992),
    [anon_sym_LT] = ACTIONS(1992),
    [anon_sym_EQ_EQ] = ACTIONS(1994),
    [anon_sym_GT_EQ] = ACTIONS(1994),
    [anon_sym_LT_EQ] = ACTIONS(1994),
    [anon_sym_BANG_EQ] = ACTIONS(1994),
    [anon_sym_AMP_AMP] = ACTIONS(1996),
    [anon_sym_PIPE_PIPE] = ACTIONS(1998),
    [anon_sym_PLUS] = ACTIONS(2000),
    [anon_sym_DASH] = ACTIONS(2000),
    [anon_sym_STAR] = ACTIONS(2002),
    [anon_sym_SLASH] = ACTIONS(2004),
    [anon_sym_AMP] = ACTIONS(2006),
    [anon_sym_PIPE] = ACTIONS(2008),
    [anon_sym_CARET] = ACTIONS(1998),
    [anon_sym_PERCENT] = ACTIONS(2002),
    [anon_sym_LT_LT] = ACTIONS(2002),
    [anon_sym_GT_GT] = ACTIONS(2004),
    [anon_sym_GT_GT_GT] = ACTIONS(2002),
    [anon_sym_QMARK] = ACTIONS(2010),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(2046),
    [sym_comment] = ACTIONS(54),
  },
  [906] = {
    [anon_sym_LPAREN] = ACTIONS(2026),
    [anon_sym_DOT] = ACTIONS(1966),
    [anon_sym_LBRACK] = ACTIONS(1966),
    [anon_sym_COLON_COLON] = ACTIONS(1966),
    [sym_comment] = ACTIONS(54),
  },
  [907] = {
    [anon_sym_DOT] = ACTIONS(2048),
    [anon_sym_LBRACK] = ACTIONS(2048),
    [anon_sym_COLON_COLON] = ACTIONS(2048),
    [sym_comment] = ACTIONS(54),
  },
  [908] = {
    [anon_sym_RPAREN] = ACTIONS(2050),
    [sym_comment] = ACTIONS(54),
  },
  [909] = {
    [sym__semicolon] = ACTIONS(1264),
    [anon_sym_LT] = ACTIONS(1264),
    [anon_sym_LBRACE] = ACTIONS(1264),
    [anon_sym_RBRACE] = ACTIONS(1264),
    [anon_sym_AT] = ACTIONS(1264),
    [anon_sym_static] = ACTIONS(1266),
    [anon_sym_class] = ACTIONS(1266),
    [anon_sym_public] = ACTIONS(1266),
    [anon_sym_protected] = ACTIONS(1266),
    [anon_sym_private] = ACTIONS(1266),
    [anon_sym_abstract] = ACTIONS(1266),
    [anon_sym_final] = ACTIONS(1266),
    [anon_sym_strictfp] = ACTIONS(1266),
    [anon_sym_default] = ACTIONS(1266),
    [anon_sym_synchronized] = ACTIONS(1266),
    [anon_sym_native] = ACTIONS(1266),
    [anon_sym_void] = ACTIONS(1266),
    [anon_sym_interface] = ACTIONS(1266),
    [sym_identifier] = ACTIONS(1268),
    [sym_comment] = ACTIONS(54),
  },
  [910] = {
    [sym_super_interfaces] = STATE(1043),
    [sym_class_body] = STATE(998),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [911] = {
    [sym_interface_body] = STATE(1044),
    [anon_sym_LBRACE] = ACTIONS(1104),
    [sym_comment] = ACTIONS(54),
  },
  [912] = {
    [sym__expression] = STATE(1045),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(886),
    [anon_sym_DASH_DASH] = ACTIONS(886),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [913] = {
    [sym__statement] = STATE(1046),
    [sym__literal] = STATE(23),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(24),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym__annotation] = STATE(28),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym__declaration] = STATE(30),
    [sym_module_declaration] = STATE(31),
    [sym_package_declaration] = STATE(31),
    [sym_import_statement] = STATE(31),
    [sym_single_type_import_declaration] = STATE(32),
    [sym_type_import_on_declaraction] = STATE(32),
    [sym_single_static_import_declaration] = STATE(32),
    [sym_static_import_on_demand_declaration] = STATE(32),
    [sym_class_declaration] = STATE(31),
    [sym_normal_class_declaration] = STATE(33),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(31),
    [sym_annotation_type_declaration] = STATE(36),
    [sym_normal_interface_declaration] = STATE(36),
    [sym_method_header] = STATE(37),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(40),
    [aux_sym_normal_class_declaration_repeat1] = STATE(41),
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
    [anon_sym_AT] = ACTIONS(34),
    [anon_sym_open] = ACTIONS(36),
    [anon_sym_module] = ACTIONS(38),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_package] = ACTIONS(42),
    [anon_sym_import] = ACTIONS(44),
    [anon_sym_class] = ACTIONS(46),
    [anon_sym_public] = ACTIONS(40),
    [anon_sym_protected] = ACTIONS(40),
    [anon_sym_private] = ACTIONS(40),
    [anon_sym_abstract] = ACTIONS(40),
    [anon_sym_final] = ACTIONS(40),
    [anon_sym_strictfp] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_synchronized] = ACTIONS(40),
    [anon_sym_native] = ACTIONS(40),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(50),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(54),
  },
  [914] = {
    [anon_sym_if] = ACTIONS(2052),
    [anon_sym_RBRACE] = ACTIONS(2052),
    [anon_sym_AT] = ACTIONS(2052),
    [anon_sym_static] = ACTIONS(2052),
    [anon_sym_class] = ACTIONS(2052),
    [anon_sym_public] = ACTIONS(2052),
    [anon_sym_protected] = ACTIONS(2052),
    [anon_sym_private] = ACTIONS(2052),
    [anon_sym_abstract] = ACTIONS(2052),
    [anon_sym_final] = ACTIONS(2052),
    [anon_sym_strictfp] = ACTIONS(2052),
    [anon_sym_default] = ACTIONS(2052),
    [anon_sym_synchronized] = ACTIONS(2052),
    [anon_sym_native] = ACTIONS(2052),
    [sym_comment] = ACTIONS(54),
  },
  [915] = {
    [sym_identifier] = ACTIONS(2054),
    [sym_comment] = ACTIONS(54),
  },
  [916] = {
    [sym_module_identifier] = STATE(1048),
    [sym_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(54),
  },
  [917] = {
    [anon_sym_LBRACE] = ACTIONS(2056),
    [sym_comment] = ACTIONS(54),
  },
  [918] = {
    [aux_sym_module_identifier_repeat1] = STATE(1051),
    [sym__semicolon] = ACTIONS(2058),
    [anon_sym_DOT] = ACTIONS(328),
    [sym_comment] = ACTIONS(54),
  },
  [919] = {
    [sym_package_or_type_name] = STATE(1052),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(54),
  },
  [920] = {
    [sym__semicolon] = ACTIONS(2060),
    [anon_sym_DOT] = ACTIONS(2062),
    [sym_comment] = ACTIONS(54),
  },
  [921] = {
    [sym_type_parameters] = STATE(1056),
    [sym_extends_interfaces] = STATE(1057),
    [sym_interface_body] = STATE(1058),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(2064),
    [anon_sym_extends] = ACTIONS(348),
    [sym_comment] = ACTIONS(54),
  },
  [922] = {
    [anon_sym_if] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(350),
    [anon_sym_elseif] = ACTIONS(350),
    [anon_sym_AT] = ACTIONS(350),
    [anon_sym_static] = ACTIONS(350),
    [anon_sym_class] = ACTIONS(350),
    [anon_sym_public] = ACTIONS(350),
    [anon_sym_protected] = ACTIONS(350),
    [anon_sym_private] = ACTIONS(350),
    [anon_sym_abstract] = ACTIONS(350),
    [anon_sym_final] = ACTIONS(350),
    [anon_sym_strictfp] = ACTIONS(350),
    [anon_sym_default] = ACTIONS(350),
    [anon_sym_synchronized] = ACTIONS(350),
    [anon_sym_native] = ACTIONS(350),
    [sym_comment] = ACTIONS(54),
  },
  [923] = {
    [anon_sym_if] = ACTIONS(364),
    [anon_sym_RBRACE] = ACTIONS(364),
    [anon_sym_elseif] = ACTIONS(364),
    [anon_sym_AT] = ACTIONS(364),
    [anon_sym_static] = ACTIONS(364),
    [anon_sym_class] = ACTIONS(364),
    [anon_sym_public] = ACTIONS(364),
    [anon_sym_protected] = ACTIONS(364),
    [anon_sym_private] = ACTIONS(364),
    [anon_sym_abstract] = ACTIONS(364),
    [anon_sym_final] = ACTIONS(364),
    [anon_sym_strictfp] = ACTIONS(364),
    [anon_sym_default] = ACTIONS(364),
    [anon_sym_synchronized] = ACTIONS(364),
    [anon_sym_native] = ACTIONS(364),
    [sym_comment] = ACTIONS(54),
  },
  [924] = {
    [sym_statement] = STATE(185),
    [sym_if_then_statement] = STATE(186),
    [sym__annotation] = STATE(183),
    [sym_normal_annotation] = STATE(187),
    [sym_marker_annotation] = STATE(187),
    [sym_single_element_annotation] = STATE(187),
    [sym_class_declaration] = STATE(185),
    [sym_normal_class_declaration] = STATE(188),
    [sym_modifier] = STATE(189),
    [sym_block_statements] = STATE(1060),
    [sym_block_statement] = STATE(191),
    [sym_local_variable_declaration_statement] = STATE(185),
    [sym_local_variable_declaration] = STATE(192),
    [aux_sym_normal_class_declaration_repeat1] = STATE(193),
    [anon_sym_if] = ACTIONS(370),
    [anon_sym_RBRACE] = ACTIONS(2066),
    [anon_sym_AT] = ACTIONS(374),
    [anon_sym_static] = ACTIONS(376),
    [anon_sym_class] = ACTIONS(378),
    [anon_sym_public] = ACTIONS(376),
    [anon_sym_protected] = ACTIONS(376),
    [anon_sym_private] = ACTIONS(376),
    [anon_sym_abstract] = ACTIONS(376),
    [anon_sym_final] = ACTIONS(376),
    [anon_sym_strictfp] = ACTIONS(376),
    [anon_sym_default] = ACTIONS(376),
    [anon_sym_synchronized] = ACTIONS(376),
    [anon_sym_native] = ACTIONS(376),
    [sym_comment] = ACTIONS(54),
  },
  [925] = {
    [anon_sym_if] = ACTIONS(380),
    [anon_sym_RBRACE] = ACTIONS(380),
    [anon_sym_elseif] = ACTIONS(380),
    [anon_sym_AT] = ACTIONS(380),
    [anon_sym_static] = ACTIONS(380),
    [anon_sym_class] = ACTIONS(380),
    [anon_sym_public] = ACTIONS(380),
    [anon_sym_protected] = ACTIONS(380),
    [anon_sym_private] = ACTIONS(380),
    [anon_sym_abstract] = ACTIONS(380),
    [anon_sym_final] = ACTIONS(380),
    [anon_sym_strictfp] = ACTIONS(380),
    [anon_sym_default] = ACTIONS(380),
    [anon_sym_synchronized] = ACTIONS(380),
    [anon_sym_native] = ACTIONS(380),
    [sym_comment] = ACTIONS(54),
  },
  [926] = {
    [anon_sym_if] = ACTIONS(2068),
    [anon_sym_RBRACE] = ACTIONS(2068),
    [anon_sym_elseif] = ACTIONS(2068),
    [anon_sym_AT] = ACTIONS(2068),
    [anon_sym_static] = ACTIONS(2068),
    [anon_sym_class] = ACTIONS(2068),
    [anon_sym_public] = ACTIONS(2068),
    [anon_sym_protected] = ACTIONS(2068),
    [anon_sym_private] = ACTIONS(2068),
    [anon_sym_abstract] = ACTIONS(2068),
    [anon_sym_final] = ACTIONS(2068),
    [anon_sym_strictfp] = ACTIONS(2068),
    [anon_sym_default] = ACTIONS(2068),
    [anon_sym_synchronized] = ACTIONS(2068),
    [anon_sym_native] = ACTIONS(2068),
    [sym_comment] = ACTIONS(54),
  },
  [927] = {
    [anon_sym_module] = ACTIONS(2070),
    [sym_comment] = ACTIONS(54),
  },
  [928] = {
    [sym_identifier] = ACTIONS(2072),
    [sym_comment] = ACTIONS(54),
  },
  [929] = {
    [sym_package_or_type_name] = STATE(73),
    [anon_sym_interface] = ACTIONS(2074),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(54),
  },
  [930] = {
    [sym_identifier] = ACTIONS(2076),
    [sym_comment] = ACTIONS(54),
  },
  [931] = {
    [sym_method_body] = STATE(1065),
    [sym_block] = STATE(923),
    [sym__semicolon] = ACTIONS(1804),
    [anon_sym_LBRACE] = ACTIONS(1806),
    [sym_comment] = ACTIONS(54),
  },
  [932] = {
    [sym__expression] = STATE(1066),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(884),
    [anon_sym_TILDE] = ACTIONS(884),
    [anon_sym_PLUS_PLUS] = ACTIONS(886),
    [anon_sym_DASH_DASH] = ACTIONS(886),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [933] = {
    [anon_sym_if] = ACTIONS(1528),
    [anon_sym_RBRACE] = ACTIONS(1528),
    [anon_sym_elseif] = ACTIONS(1528),
    [anon_sym_AT] = ACTIONS(1528),
    [anon_sym_static] = ACTIONS(1528),
    [anon_sym_class] = ACTIONS(1528),
    [anon_sym_public] = ACTIONS(1528),
    [anon_sym_protected] = ACTIONS(1528),
    [anon_sym_private] = ACTIONS(1528),
    [anon_sym_abstract] = ACTIONS(1528),
    [anon_sym_final] = ACTIONS(1528),
    [anon_sym_strictfp] = ACTIONS(1528),
    [anon_sym_default] = ACTIONS(1528),
    [anon_sym_synchronized] = ACTIONS(1528),
    [anon_sym_native] = ACTIONS(1528),
    [sym_comment] = ACTIONS(54),
  },
  [934] = {
    [sym_class_body] = STATE(1067),
    [anon_sym_LBRACE] = ACTIONS(892),
    [sym_comment] = ACTIONS(54),
  },
  [935] = {
    [anon_sym_DOT] = ACTIONS(1848),
    [anon_sym_AT] = ACTIONS(1848),
    [sym_identifier] = ACTIONS(2078),
    [sym_comment] = ACTIONS(54),
  },
  [936] = {
    [anon_sym_DOT] = ACTIONS(1850),
    [anon_sym_AT] = ACTIONS(1850),
    [sym_identifier] = ACTIONS(2080),
    [sym_comment] = ACTIONS(54),
  },
  [937] = {
    [sym_type_arguments] = STATE(1068),
    [anon_sym_LT] = ACTIONS(914),
    [anon_sym_DOT] = ACTIONS(1850),
    [anon_sym_AT] = ACTIONS(1850),
    [sym_identifier] = ACTIONS(2080),
    [sym_comment] = ACTIONS(54),
  },
  [938] = {
    [anon_sym_boolean] = ACTIONS(732),
    [anon_sym_byte] = ACTIONS(732),
    [anon_sym_short] = ACTIONS(732),
    [anon_sym_int] = ACTIONS(732),
    [anon_sym_long] = ACTIONS(732),
    [anon_sym_char] = ACTIONS(732),
    [anon_sym_float] = ACTIONS(732),
    [anon_sym_double] = ACTIONS(732),
    [anon_sym_AT] = ACTIONS(730),
    [sym_identifier] = ACTIONS(958),
    [sym_comment] = ACTIONS(54),
  },
  [939] = {
    [anon_sym_RPAREN] = ACTIONS(2082),
    [anon_sym_EQ] = ACTIONS(736),
    [sym_comment] = ACTIONS(54),
  },
  [940] = {
    [anon_sym_RPAREN] = ACTIONS(2082),
    [sym_comment] = ACTIONS(54),
  },
  [941] = {
    [anon_sym_RPAREN] = ACTIONS(2084),
    [sym_comment] = ACTIONS(54),
  },
  [942] = {
    [anon_sym_LPAREN] = ACTIONS(744),
    [anon_sym_DOT] = ACTIONS(744),
    [anon_sym_boolean] = ACTIONS(746),
    [anon_sym_byte] = ACTIONS(746),
    [anon_sym_short] = ACTIONS(746),
    [anon_sym_int] = ACTIONS(746),
    [anon_sym_long] = ACTIONS(746),
    [anon_sym_char] = ACTIONS(746),
    [anon_sym_float] = ACTIONS(746),
    [anon_sym_double] = ACTIONS(746),
    [anon_sym_AT] = ACTIONS(744),
    [sym_identifier] = ACTIONS(964),
    [sym_comment] = ACTIONS(54),
  },
  [943] = {
    [anon_sym_GT] = ACTIONS(2086),
    [anon_sym_COMMA] = ACTIONS(2086),
    [sym_comment] = ACTIONS(54),
  },
  [944] = {
    [anon_sym_GT] = ACTIONS(2088),
    [anon_sym_AMP] = ACTIONS(2088),
    [anon_sym_COMMA] = ACTIONS(2088),
    [anon_sym_LBRACE] = ACTIONS(2088),
    [anon_sym_DOT] = ACTIONS(2088),
    [anon_sym_LBRACK] = ACTIONS(2088),
    [anon_sym_AT] = ACTIONS(2088),
    [anon_sym_implements] = ACTIONS(2088),
    [anon_sym_COLON_COLON] = ACTIONS(2088),
    [sym_comment] = ACTIONS(54),
  },
  [945] = {
    [anon_sym_RBRACE] = ACTIONS(986),
    [anon_sym_AT] = ACTIONS(986),
    [anon_sym_static] = ACTIONS(988),
    [anon_sym_class] = ACTIONS(988),
    [anon_sym_public] = ACTIONS(988),
    [anon_sym_protected] = ACTIONS(988),
    [anon_sym_private] = ACTIONS(988),
    [anon_sym_abstract] = ACTIONS(988),
    [anon_sym_final] = ACTIONS(988),
    [anon_sym_strictfp] = ACTIONS(988),
    [anon_sym_default] = ACTIONS(988),
    [anon_sym_synchronized] = ACTIONS(988),
    [anon_sym_native] = ACTIONS(988),
    [anon_sym_interface] = ACTIONS(988),
    [sym_identifier] = ACTIONS(990),
    [sym_comment] = ACTIONS(54),
  },
  [946] = {
    [sym__annotation] = STATE(356),
    [sym_normal_annotation] = STATE(360),
    [sym_marker_annotation] = STATE(360),
    [sym_single_element_annotation] = STATE(360),
    [sym_class_declaration] = STATE(361),
    [sym_normal_class_declaration] = STATE(362),
    [sym_modifier] = STATE(363),
    [sym_interface_declaration] = STATE(361),
    [sym_annotation_type_declaration] = STATE(364),
    [sym_annotation_type_member_declaration] = STATE(505),
    [sym_annotation_type_element_declaration] = STATE(361),
    [sym_normal_interface_declaration] = STATE(364),
    [sym_constant_declaration] = STATE(361),
    [sym_variable_declarator_list] = STATE(366),
    [sym_variable_declarator] = STATE(282),
    [sym_variable_declarator_id] = STATE(126),
    [aux_sym_normal_class_declaration_repeat1] = STATE(367),
    [anon_sym_RBRACE] = ACTIONS(2090),
    [anon_sym_AT] = ACTIONS(714),
    [anon_sym_static] = ACTIONS(716),
    [anon_sym_class] = ACTIONS(718),
    [anon_sym_public] = ACTIONS(716),
    [anon_sym_protected] = ACTIONS(716),
    [anon_sym_private] = ACTIONS(716),
    [anon_sym_abstract] = ACTIONS(716),
    [anon_sym_final] = ACTIONS(716),
    [anon_sym_strictfp] = ACTIONS(716),
    [anon_sym_default] = ACTIONS(716),
    [anon_sym_synchronized] = ACTIONS(716),
    [anon_sym_native] = ACTIONS(716),
    [anon_sym_interface] = ACTIONS(720),
    [sym_identifier] = ACTIONS(722),
    [sym_comment] = ACTIONS(54),
  },
  [947] = {
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
    [anon_sym_synchronized] = ACTIONS(1028),
    [anon_sym_native] = ACTIONS(1028),
    [anon_sym_interface] = ACTIONS(1028),
    [sym_identifier] = ACTIONS(1290),
    [sym_comment] = ACTIONS(54),
  },
  [948] = {
    [anon_sym_AT] = ACTIONS(1036),
    [anon_sym_static] = ACTIONS(1038),
    [anon_sym_class] = ACTIONS(1038),
    [anon_sym_public] = ACTIONS(1038),
    [anon_sym_protected] = ACTIONS(1038),
    [anon_sym_private] = ACTIONS(1038),
    [anon_sym_abstract] = ACTIONS(1038),
    [anon_sym_final] = ACTIONS(1038),
    [anon_sym_strictfp] = ACTIONS(1038),
    [anon_sym_default] = ACTIONS(1038),
    [anon_sym_synchronized] = ACTIONS(1038),
    [anon_sym_native] = ACTIONS(1038),
    [anon_sym_interface] = ACTIONS(1038),
    [sym_identifier] = ACTIONS(1292),
    [sym_comment] = ACTIONS(54),
  },
  [949] = {
    [anon_sym_RBRACE] = ACTIONS(1146),
    [anon_sym_AT] = ACTIONS(1146),
    [anon_sym_static] = ACTIONS(1148),
    [anon_sym_class] = ACTIONS(1148),
    [anon_sym_public] = ACTIONS(1148),
    [anon_sym_protected] = ACTIONS(1148),
    [anon_sym_private] = ACTIONS(1148),
    [anon_sym_abstract] = ACTIONS(1148),
    [anon_sym_final] = ACTIONS(1148),
    [anon_sym_strictfp] = ACTIONS(1148),
    [anon_sym_default] = ACTIONS(1148),
    [anon_sym_synchronized] = ACTIONS(1148),
    [anon_sym_native] = ACTIONS(1148),
    [anon_sym_interface] = ACTIONS(1148),
    [sym_identifier] = ACTIONS(1150),
    [sym_comment] = ACTIONS(54),
  },
  [950] = {
    [sym_class_body] = STATE(1072),
    [anon_sym_LBRACE] = ACTIONS(1308),
    [sym_comment] = ACTIONS(54),
  },
  [951] = {
    [anon_sym_RBRACE] = ACTIONS(1162),
    [anon_sym_AT] = ACTIONS(1162),
    [anon_sym_static] = ACTIONS(1164),
    [anon_sym_class] = ACTIONS(1164),
    [anon_sym_public] = ACTIONS(1164),
    [anon_sym_protected] = ACTIONS(1164),
    [anon_sym_private] = ACTIONS(1164),
    [anon_sym_abstract] = ACTIONS(1164),
    [anon_sym_final] = ACTIONS(1164),
    [anon_sym_strictfp] = ACTIONS(1164),
    [anon_sym_default] = ACTIONS(1164),
    [anon_sym_synchronized] = ACTIONS(1164),
    [anon_sym_native] = ACTIONS(1164),
    [anon_sym_interface] = ACTIONS(1164),
    [sym_identifier] = ACTIONS(1166),
    [sym_comment] = ACTIONS(54),
  },
  [952] = {
    [anon_sym_RBRACE] = ACTIONS(1180),
    [anon_sym_AT] = ACTIONS(1180),
    [anon_sym_static] = ACTIONS(1182),
    [anon_sym_class] = ACTIONS(1182),
    [anon_sym_public] = ACTIONS(1182),
    [anon_sym_protected] = ACTIONS(1182),
    [anon_sym_private] = ACTIONS(1182),
    [anon_sym_abstract] = ACTIONS(1182),
    [anon_sym_final] = ACTIONS(1182),
    [anon_sym_strictfp] = ACTIONS(1182),
    [anon_sym_default] = ACTIONS(1182),
    [anon_sym_synchronized] = ACTIONS(1182),
    [anon_sym_native] = ACTIONS(1182),
    [anon_sym_interface] = ACTIONS(1182),
    [sym_identifier] = ACTIONS(1184),
    [sym_comment] = ACTIONS(54),
  },
  [953] = {
    [anon_sym_RBRACE] = ACTIONS(1192),
    [anon_sym_AT] = ACTIONS(1192),
    [anon_sym_static] = ACTIONS(1194),
    [anon_sym_class] = ACTIONS(1194),
    [anon_sym_public] = ACTIONS(1194),
    [anon_sym_protected] = ACTIONS(1194),
    [anon_sym_private] = ACTIONS(1194),
    [anon_sym_abstract] = ACTIONS(1194),
    [anon_sym_final] = ACTIONS(1194),
    [anon_sym_strictfp] = ACTIONS(1194),
    [anon_sym_default] = ACTIONS(1194),
    [anon_sym_synchronized] = ACTIONS(1194),
    [anon_sym_native] = ACTIONS(1194),
    [anon_sym_interface] = ACTIONS(1194),
    [sym_identifier] = ACTIONS(1196),
    [sym_comment] = ACTIONS(54),
  },
  [954] = {
    [sym__expression] = STATE(1073),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_TILDE] = ACTIONS(30),
    [anon_sym_PLUS_PLUS] = ACTIONS(32),
    [anon_sym_DASH_DASH] = ACTIONS(32),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [955] = {
    [sym__semicolon] = ACTIONS(2092),
    [sym_comment] = ACTIONS(54),
  },
  [956] = {
    [sym__semicolon] = ACTIONS(1356),
    [anon_sym_PIPE_PIPE] = ACTIONS(2094),
    [anon_sym_QMARK] = ACTIONS(2096),
    [sym_comment] = ACTIONS(54),
  },
  [957] = {
    [sym__semicolon] = ACTIONS(1362),
    [anon_sym_AMP_AMP] = ACTIONS(2098),
    [anon_sym_PIPE_PIPE] = ACTIONS(1362),
    [anon_sym_QMARK] = ACTIONS(1362),
    [sym_comment] = ACTIONS(54),
  },
  [958] = {
    [sym__semicolon] = ACTIONS(1364),
    [anon_sym_AMP_AMP] = ACTIONS(1364),
    [anon_sym_PIPE_PIPE] = ACTIONS(1364),
    [anon_sym_PIPE] = ACTIONS(2100),
    [anon_sym_QMARK] = ACTIONS(1364),
    [sym_comment] = ACTIONS(54),
  },
  [959] = {
    [sym__semicolon] = ACTIONS(1368),
    [anon_sym_AMP_AMP] = ACTIONS(1368),
    [anon_sym_PIPE_PIPE] = ACTIONS(1368),
    [anon_sym_PIPE] = ACTIONS(1370),
    [anon_sym_CARET] = ACTIONS(2102),
    [anon_sym_QMARK] = ACTIONS(1368),
    [sym_comment] = ACTIONS(54),
  },
  [960] = {
    [sym__semicolon] = ACTIONS(1382),
    [anon_sym_LT] = ACTIONS(2104),
    [anon_sym_EQ_EQ] = ACTIONS(1380),
    [anon_sym_BANG_EQ] = ACTIONS(1380),
    [anon_sym_AMP_AMP] = ACTIONS(1382),
    [anon_sym_PIPE_PIPE] = ACTIONS(1382),
    [anon_sym_PIPE] = ACTIONS(1384),
    [anon_sym_CARET] = ACTIONS(1382),
    [anon_sym_QMARK] = ACTIONS(1382),
    [sym_comment] = ACTIONS(54),
  },
  [961] = {
    [anon_sym_EQ_EQ] = ACTIONS(2106),
    [anon_sym_BANG_EQ] = ACTIONS(2106),
    [sym_comment] = ACTIONS(54),
  },
  [962] = {
    [sym__semicolon] = ACTIONS(1390),
    [anon_sym_LT] = ACTIONS(1388),
    [anon_sym_EQ_EQ] = ACTIONS(1390),
    [anon_sym_BANG_EQ] = ACTIONS(1390),
    [anon_sym_AMP_AMP] = ACTIONS(1390),
    [anon_sym_PIPE_PIPE] = ACTIONS(1390),
    [anon_sym_PIPE] = ACTIONS(1388),
    [anon_sym_CARET] = ACTIONS(1390),
    [anon_sym_LT_LT] = ACTIONS(2108),
    [anon_sym_GT_GT] = ACTIONS(2110),
    [anon_sym_GT_GT_GT] = ACTIONS(2108),
    [anon_sym_QMARK] = ACTIONS(1390),
    [sym_comment] = ACTIONS(54),
  },
  [963] = {
    [sym__semicolon] = ACTIONS(1398),
    [anon_sym_LT] = ACTIONS(1396),
    [anon_sym_EQ_EQ] = ACTIONS(1398),
    [anon_sym_BANG_EQ] = ACTIONS(1398),
    [anon_sym_AMP_AMP] = ACTIONS(1398),
    [anon_sym_PIPE_PIPE] = ACTIONS(1398),
    [anon_sym_PLUS] = ACTIONS(2112),
    [anon_sym_DASH] = ACTIONS(2112),
    [anon_sym_PIPE] = ACTIONS(1396),
    [anon_sym_CARET] = ACTIONS(1398),
    [anon_sym_LT_LT] = ACTIONS(1398),
    [anon_sym_GT_GT] = ACTIONS(1396),
    [anon_sym_GT_GT_GT] = ACTIONS(1398),
    [anon_sym_QMARK] = ACTIONS(1398),
    [sym_comment] = ACTIONS(54),
  },
  [964] = {
    [sym__semicolon] = ACTIONS(1404),
    [anon_sym_LT] = ACTIONS(1402),
    [anon_sym_EQ_EQ] = ACTIONS(1404),
    [anon_sym_BANG_EQ] = ACTIONS(1404),
    [anon_sym_AMP_AMP] = ACTIONS(1404),
    [anon_sym_PIPE_PIPE] = ACTIONS(1404),
    [anon_sym_PLUS] = ACTIONS(1404),
    [anon_sym_DASH] = ACTIONS(1404),
    [anon_sym_STAR] = ACTIONS(2114),
    [anon_sym_SLASH] = ACTIONS(2116),
    [anon_sym_PIPE] = ACTIONS(1402),
    [anon_sym_CARET] = ACTIONS(1404),
    [anon_sym_PERCENT] = ACTIONS(2114),
    [anon_sym_LT_LT] = ACTIONS(1404),
    [anon_sym_GT_GT] = ACTIONS(1402),
    [anon_sym_GT_GT_GT] = ACTIONS(1404),
    [anon_sym_QMARK] = ACTIONS(1404),
    [sym_comment] = ACTIONS(54),
  },
  [965] = {
    [anon_sym_RBRACE] = ACTIONS(2118),
    [anon_sym_AT] = ACTIONS(2118),
    [anon_sym_static] = ACTIONS(2120),
    [anon_sym_class] = ACTIONS(2120),
    [anon_sym_public] = ACTIONS(2120),
    [anon_sym_protected] = ACTIONS(2120),
    [anon_sym_private] = ACTIONS(2120),
    [anon_sym_abstract] = ACTIONS(2120),
    [anon_sym_final] = ACTIONS(2120),
    [anon_sym_strictfp] = ACTIONS(2120),
    [anon_sym_default] = ACTIONS(2120),
    [anon_sym_synchronized] = ACTIONS(2120),
    [anon_sym_native] = ACTIONS(2120),
    [anon_sym_interface] = ACTIONS(2120),
    [sym_identifier] = ACTIONS(2122),
    [sym_comment] = ACTIONS(54),
  },
  [966] = {
    [sym__semicolon] = ACTIONS(2124),
    [sym_comment] = ACTIONS(54),
  },
  [967] = {
    [anon_sym_RBRACE] = ACTIONS(1264),
    [anon_sym_AT] = ACTIONS(1264),
    [anon_sym_static] = ACTIONS(1266),
    [anon_sym_class] = ACTIONS(1266),
    [anon_sym_public] = ACTIONS(1266),
    [anon_sym_protected] = ACTIONS(1266),
    [anon_sym_private] = ACTIONS(1266),
    [anon_sym_abstract] = ACTIONS(1266),
    [anon_sym_final] = ACTIONS(1266),
    [anon_sym_strictfp] = ACTIONS(1266),
    [anon_sym_default] = ACTIONS(1266),
    [anon_sym_synchronized] = ACTIONS(1266),
    [anon_sym_native] = ACTIONS(1266),
    [anon_sym_interface] = ACTIONS(1266),
    [sym_identifier] = ACTIONS(1268),
    [sym_comment] = ACTIONS(54),
  },
  [968] = {
    [sym_super_interfaces] = STATE(1085),
    [sym_class_body] = STATE(1072),
    [anon_sym_LBRACE] = ACTIONS(1308),
    [anon_sym_implements] = ACTIONS(344),
    [sym_comment] = ACTIONS(54),
  },
  [969] = {
    [sym_interface_body] = STATE(1086),
    [anon_sym_LBRACE] = ACTIONS(1310),
    [sym_comment] = ACTIONS(54),
  },
  [970] = {
    [sym_default_value] = STATE(1087),
    [sym__semicolon] = ACTIONS(2124),
    [anon_sym_default] = ACTIONS(1626),
    [sym_comment] = ACTIONS(54),
  },
  [971] = {
    [anon_sym_GT] = ACTIONS(564),
    [anon_sym_LT] = ACTIONS(564),
    [anon_sym_EQ_EQ] = ACTIONS(562),
    [anon_sym_GT_EQ] = ACTIONS(562),
    [anon_sym_LT_EQ] = ACTIONS(562),
    [anon_sym_BANG_EQ] = ACTIONS(562),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(564),
    [anon_sym_DASH] = ACTIONS(564),
    [anon_sym_STAR] = ACTIONS(1952),
    [anon_sym_SLASH] = ACTIONS(1954),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(1952),
    [anon_sym_LT_LT] = ACTIONS(1952),
    [anon_sym_GT_GT] = ACTIONS(1954),
    [anon_sym_GT_GT_GT] = ACTIONS(1952),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [972] = {
    [anon_sym_GT] = ACTIONS(1632),
    [anon_sym_LT] = ACTIONS(1632),
    [anon_sym_EQ_EQ] = ACTIONS(1634),
    [anon_sym_GT_EQ] = ACTIONS(1634),
    [anon_sym_LT_EQ] = ACTIONS(1634),
    [anon_sym_BANG_EQ] = ACTIONS(1634),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(1950),
    [anon_sym_DASH] = ACTIONS(1950),
    [anon_sym_STAR] = ACTIONS(1952),
    [anon_sym_SLASH] = ACTIONS(1954),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(1952),
    [anon_sym_LT_LT] = ACTIONS(1952),
    [anon_sym_GT_GT] = ACTIONS(1954),
    [anon_sym_GT_GT_GT] = ACTIONS(1952),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [973] = {
    [anon_sym_GT] = ACTIONS(1632),
    [anon_sym_LT] = ACTIONS(1632),
    [anon_sym_EQ_EQ] = ACTIONS(1634),
    [anon_sym_GT_EQ] = ACTIONS(1634),
    [anon_sym_LT_EQ] = ACTIONS(1634),
    [anon_sym_BANG_EQ] = ACTIONS(1634),
    [anon_sym_AMP_AMP] = ACTIONS(1946),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(1950),
    [anon_sym_DASH] = ACTIONS(1950),
    [anon_sym_STAR] = ACTIONS(1952),
    [anon_sym_SLASH] = ACTIONS(1954),
    [anon_sym_AMP] = ACTIONS(1636),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(1952),
    [anon_sym_LT_LT] = ACTIONS(1952),
    [anon_sym_GT_GT] = ACTIONS(1954),
    [anon_sym_GT_GT_GT] = ACTIONS(1952),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [974] = {
    [anon_sym_GT] = ACTIONS(1632),
    [anon_sym_LT] = ACTIONS(1632),
    [anon_sym_EQ_EQ] = ACTIONS(1634),
    [anon_sym_GT_EQ] = ACTIONS(1634),
    [anon_sym_LT_EQ] = ACTIONS(1634),
    [anon_sym_BANG_EQ] = ACTIONS(1634),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(564),
    [anon_sym_DASH] = ACTIONS(564),
    [anon_sym_STAR] = ACTIONS(1952),
    [anon_sym_SLASH] = ACTIONS(1954),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(1952),
    [anon_sym_LT_LT] = ACTIONS(1952),
    [anon_sym_GT_GT] = ACTIONS(1954),
    [anon_sym_GT_GT_GT] = ACTIONS(1952),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [975] = {
    [anon_sym_GT] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(566),
    [anon_sym_EQ_EQ] = ACTIONS(568),
    [anon_sym_GT_EQ] = ACTIONS(568),
    [anon_sym_LT_EQ] = ACTIONS(568),
    [anon_sym_BANG_EQ] = ACTIONS(568),
    [anon_sym_AMP_AMP] = ACTIONS(570),
    [anon_sym_PIPE_PIPE] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_SLASH] = ACTIONS(578),
    [anon_sym_AMP] = ACTIONS(580),
    [anon_sym_PIPE] = ACTIONS(582),
    [anon_sym_CARET] = ACTIONS(572),
    [anon_sym_PERCENT] = ACTIONS(576),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(578),
    [anon_sym_GT_GT_GT] = ACTIONS(576),
    [anon_sym_QMARK] = ACTIONS(584),
    [anon_sym_COLON] = ACTIONS(2126),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [976] = {
    [sym__expression] = STATE(1089),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1640),
    [anon_sym_TILDE] = ACTIONS(1640),
    [anon_sym_PLUS_PLUS] = ACTIONS(1642),
    [anon_sym_DASH_DASH] = ACTIONS(1642),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [977] = {
    [sym__expression] = STATE(1090),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1640),
    [anon_sym_TILDE] = ACTIONS(1640),
    [anon_sym_PLUS_PLUS] = ACTIONS(1642),
    [anon_sym_DASH_DASH] = ACTIONS(1642),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [978] = {
    [sym__expression] = STATE(1091),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1640),
    [anon_sym_TILDE] = ACTIONS(1640),
    [anon_sym_PLUS_PLUS] = ACTIONS(1642),
    [anon_sym_DASH_DASH] = ACTIONS(1642),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [979] = {
    [sym__expression] = STATE(1092),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1640),
    [anon_sym_TILDE] = ACTIONS(1640),
    [anon_sym_PLUS_PLUS] = ACTIONS(1642),
    [anon_sym_DASH_DASH] = ACTIONS(1642),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [980] = {
    [sym__expression] = STATE(170),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1640),
    [anon_sym_TILDE] = ACTIONS(1640),
    [anon_sym_PLUS_PLUS] = ACTIONS(1642),
    [anon_sym_DASH_DASH] = ACTIONS(1642),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [981] = {
    [sym__expression] = STATE(1093),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [982] = {
    [sym__semicolon] = ACTIONS(2128),
    [anon_sym_RPAREN] = ACTIONS(2128),
    [anon_sym_COMMA] = ACTIONS(2128),
    [anon_sym_RBRACE] = ACTIONS(2128),
    [sym_comment] = ACTIONS(54),
  },
  [983] = {
    [anon_sym_COMMA] = ACTIONS(2130),
    [anon_sym_RBRACE] = ACTIONS(2130),
    [sym_comment] = ACTIONS(54),
  },
  [984] = {
    [sym__literal] = STATE(508),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(509),
    [sym__annotation] = STATE(508),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym_element_value] = STATE(1095),
    [sym_element_value_array_initializer] = STATE(508),
    [sym_conditional_expression] = STATE(508),
    [sym_conditional_or_expression] = STATE(662),
    [sym_conditional_and_expression] = STATE(663),
    [sym_inclusive_or_expression] = STATE(664),
    [sym_exclusive_or_expression] = STATE(665),
    [sym_and_expression] = STATE(515),
    [sym_relational_expression] = STATE(666),
    [sym_equality_expression] = STATE(667),
    [sym_shift_expression] = STATE(668),
    [sym_additive_expression] = STATE(669),
    [sym_multiplicative_expression] = STATE(670),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(1030),
    [anon_sym_false] = ACTIONS(1030),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(1342),
    [anon_sym_TILDE] = ACTIONS(1342),
    [anon_sym_LBRACE] = ACTIONS(1034),
    [anon_sym_RBRACE] = ACTIONS(2132),
    [anon_sym_AT] = ACTIONS(195),
    [sym_comment] = ACTIONS(54),
  },
  [985] = {
    [anon_sym_AMP_AMP] = ACTIONS(1652),
    [anon_sym_PIPE_PIPE] = ACTIONS(1884),
    [anon_sym_COMMA] = ACTIONS(1884),
    [anon_sym_QMARK] = ACTIONS(1884),
    [anon_sym_RBRACE] = ACTIONS(1884),
    [sym_comment] = ACTIONS(54),
  },
  [986] = {
    [anon_sym_GT] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(566),
    [anon_sym_EQ_EQ] = ACTIONS(568),
    [anon_sym_GT_EQ] = ACTIONS(568),
    [anon_sym_LT_EQ] = ACTIONS(568),
    [anon_sym_BANG_EQ] = ACTIONS(568),
    [anon_sym_AMP_AMP] = ACTIONS(570),
    [anon_sym_PIPE_PIPE] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_SLASH] = ACTIONS(578),
    [anon_sym_AMP] = ACTIONS(580),
    [anon_sym_PIPE] = ACTIONS(582),
    [anon_sym_CARET] = ACTIONS(572),
    [anon_sym_PERCENT] = ACTIONS(576),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(578),
    [anon_sym_GT_GT_GT] = ACTIONS(576),
    [anon_sym_QMARK] = ACTIONS(584),
    [anon_sym_COLON] = ACTIONS(2134),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [987] = {
    [anon_sym_AMP_AMP] = ACTIONS(1888),
    [anon_sym_PIPE_PIPE] = ACTIONS(1888),
    [anon_sym_PIPE] = ACTIONS(1654),
    [anon_sym_COMMA] = ACTIONS(1888),
    [anon_sym_QMARK] = ACTIONS(1888),
    [anon_sym_RBRACE] = ACTIONS(1888),
    [sym_comment] = ACTIONS(54),
  },
  [988] = {
    [anon_sym_AMP_AMP] = ACTIONS(1890),
    [anon_sym_PIPE_PIPE] = ACTIONS(1890),
    [anon_sym_PIPE] = ACTIONS(1892),
    [anon_sym_CARET] = ACTIONS(1656),
    [anon_sym_COMMA] = ACTIONS(1890),
    [anon_sym_QMARK] = ACTIONS(1890),
    [anon_sym_RBRACE] = ACTIONS(1890),
    [sym_comment] = ACTIONS(54),
  },
  [989] = {
    [anon_sym_LT] = ACTIONS(1898),
    [anon_sym_EQ_EQ] = ACTIONS(1900),
    [anon_sym_BANG_EQ] = ACTIONS(1900),
    [anon_sym_AMP_AMP] = ACTIONS(1900),
    [anon_sym_PIPE_PIPE] = ACTIONS(1900),
    [anon_sym_PIPE] = ACTIONS(1898),
    [anon_sym_CARET] = ACTIONS(1900),
    [anon_sym_LT_LT] = ACTIONS(1662),
    [anon_sym_GT_GT] = ACTIONS(1664),
    [anon_sym_GT_GT_GT] = ACTIONS(1662),
    [anon_sym_COMMA] = ACTIONS(1900),
    [anon_sym_QMARK] = ACTIONS(1900),
    [anon_sym_RBRACE] = ACTIONS(1900),
    [sym_comment] = ACTIONS(54),
  },
  [990] = {
    [anon_sym_LT] = ACTIONS(1658),
    [anon_sym_EQ_EQ] = ACTIONS(1902),
    [anon_sym_BANG_EQ] = ACTIONS(1902),
    [anon_sym_AMP_AMP] = ACTIONS(1904),
    [anon_sym_PIPE_PIPE] = ACTIONS(1904),
    [anon_sym_PIPE] = ACTIONS(1906),
    [anon_sym_CARET] = ACTIONS(1904),
    [anon_sym_COMMA] = ACTIONS(1904),
    [anon_sym_QMARK] = ACTIONS(1904),
    [anon_sym_RBRACE] = ACTIONS(1904),
    [sym_comment] = ACTIONS(54),
  },
  [991] = {
    [anon_sym_LT] = ACTIONS(1908),
    [anon_sym_EQ_EQ] = ACTIONS(1910),
    [anon_sym_BANG_EQ] = ACTIONS(1910),
    [anon_sym_AMP_AMP] = ACTIONS(1910),
    [anon_sym_PIPE_PIPE] = ACTIONS(1910),
    [anon_sym_PLUS] = ACTIONS(1666),
    [anon_sym_DASH] = ACTIONS(1666),
    [anon_sym_PIPE] = ACTIONS(1908),
    [anon_sym_CARET] = ACTIONS(1910),
    [anon_sym_LT_LT] = ACTIONS(1910),
    [anon_sym_GT_GT] = ACTIONS(1908),
    [anon_sym_GT_GT_GT] = ACTIONS(1910),
    [anon_sym_COMMA] = ACTIONS(1910),
    [anon_sym_QMARK] = ACTIONS(1910),
    [anon_sym_RBRACE] = ACTIONS(1910),
    [sym_comment] = ACTIONS(54),
  },
  [992] = {
    [anon_sym_LT] = ACTIONS(1912),
    [anon_sym_EQ_EQ] = ACTIONS(1914),
    [anon_sym_BANG_EQ] = ACTIONS(1914),
    [anon_sym_AMP_AMP] = ACTIONS(1914),
    [anon_sym_PIPE_PIPE] = ACTIONS(1914),
    [anon_sym_PLUS] = ACTIONS(1914),
    [anon_sym_DASH] = ACTIONS(1914),
    [anon_sym_STAR] = ACTIONS(1668),
    [anon_sym_SLASH] = ACTIONS(1670),
    [anon_sym_PIPE] = ACTIONS(1912),
    [anon_sym_CARET] = ACTIONS(1914),
    [anon_sym_PERCENT] = ACTIONS(1668),
    [anon_sym_LT_LT] = ACTIONS(1914),
    [anon_sym_GT_GT] = ACTIONS(1912),
    [anon_sym_GT_GT_GT] = ACTIONS(1914),
    [anon_sym_COMMA] = ACTIONS(1914),
    [anon_sym_QMARK] = ACTIONS(1914),
    [anon_sym_RBRACE] = ACTIONS(1914),
    [sym_comment] = ACTIONS(54),
  },
  [993] = {
    [sym_lambda_expression] = STATE(1097),
    [sym__lambda_parameters] = STATE(26),
    [sym_unary_expression] = STATE(509),
    [sym_conditional_expression] = STATE(1097),
    [sym_conditional_or_expression] = STATE(511),
    [sym_conditional_and_expression] = STATE(512),
    [sym_inclusive_or_expression] = STATE(513),
    [sym_exclusive_or_expression] = STATE(514),
    [sym_and_expression] = STATE(515),
    [sym_relational_expression] = STATE(516),
    [sym_equality_expression] = STATE(517),
    [sym_shift_expression] = STATE(518),
    [sym_additive_expression] = STATE(519),
    [sym_multiplicative_expression] = STATE(520),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1032),
    [anon_sym_TILDE] = ACTIONS(1032),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [994] = {
    [anon_sym_RBRACE] = ACTIONS(2136),
    [anon_sym_requires] = ACTIONS(2136),
    [anon_sym_exports] = ACTIONS(2136),
    [anon_sym_opens] = ACTIONS(2136),
    [anon_sym_uses] = ACTIONS(2136),
    [anon_sym_provides] = ACTIONS(2136),
    [sym_comment] = ACTIONS(54),
  },
  [995] = {
    [sym__semicolon] = ACTIONS(2138),
    [anon_sym_COMMA] = ACTIONS(2138),
    [anon_sym_DOT] = ACTIONS(1076),
    [sym_comment] = ACTIONS(54),
  },
  [996] = {
    [sym_package_or_type_name] = STATE(1098),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(54),
  },
  [997] = {
    [sym__semicolon] = ACTIONS(1324),
    [anon_sym_LT] = ACTIONS(1324),
    [anon_sym_LBRACE] = ACTIONS(1324),
    [anon_sym_RBRACE] = ACTIONS(1324),
    [anon_sym_AT] = ACTIONS(1324),
    [anon_sym_static] = ACTIONS(1326),
    [anon_sym_class] = ACTIONS(1326),
    [anon_sym_public] = ACTIONS(1326),
    [anon_sym_protected] = ACTIONS(1326),
    [anon_sym_private] = ACTIONS(1326),
    [anon_sym_abstract] = ACTIONS(1326),
    [anon_sym_final] = ACTIONS(1326),
    [anon_sym_strictfp] = ACTIONS(1326),
    [anon_sym_default] = ACTIONS(1326),
    [anon_sym_synchronized] = ACTIONS(1326),
    [anon_sym_native] = ACTIONS(1326),
    [anon_sym_void] = ACTIONS(1326),
    [anon_sym_interface] = ACTIONS(1326),
    [sym_identifier] = ACTIONS(1328),
    [sym_comment] = ACTIONS(54),
  },
  [998] = {
    [sym__semicolon] = ACTIONS(1528),
    [anon_sym_LT] = ACTIONS(1528),
    [anon_sym_LBRACE] = ACTIONS(1528),
    [anon_sym_RBRACE] = ACTIONS(1528),
    [anon_sym_AT] = ACTIONS(1528),
    [anon_sym_static] = ACTIONS(1530),
    [anon_sym_class] = ACTIONS(1530),
    [anon_sym_public] = ACTIONS(1530),
    [anon_sym_protected] = ACTIONS(1530),
    [anon_sym_private] = ACTIONS(1530),
    [anon_sym_abstract] = ACTIONS(1530),
    [anon_sym_final] = ACTIONS(1530),
    [anon_sym_strictfp] = ACTIONS(1530),
    [anon_sym_default] = ACTIONS(1530),
    [anon_sym_synchronized] = ACTIONS(1530),
    [anon_sym_native] = ACTIONS(1530),
    [anon_sym_void] = ACTIONS(1530),
    [anon_sym_interface] = ACTIONS(1530),
    [sym_identifier] = ACTIONS(1532),
    [sym_comment] = ACTIONS(54),
  },
  [999] = {
    [anon_sym_DOT] = ACTIONS(2140),
    [anon_sym_LBRACK] = ACTIONS(2140),
    [anon_sym_COLON_COLON] = ACTIONS(2140),
    [sym_comment] = ACTIONS(54),
  },
  [1000] = {
    [anon_sym_boolean] = ACTIONS(732),
    [anon_sym_byte] = ACTIONS(732),
    [anon_sym_short] = ACTIONS(732),
    [anon_sym_int] = ACTIONS(732),
    [anon_sym_long] = ACTIONS(732),
    [anon_sym_char] = ACTIONS(732),
    [anon_sym_float] = ACTIONS(732),
    [anon_sym_double] = ACTIONS(732),
    [anon_sym_AT] = ACTIONS(730),
    [anon_sym_static] = ACTIONS(732),
    [anon_sym_class] = ACTIONS(732),
    [anon_sym_public] = ACTIONS(732),
    [anon_sym_protected] = ACTIONS(732),
    [anon_sym_private] = ACTIONS(732),
    [anon_sym_abstract] = ACTIONS(732),
    [anon_sym_final] = ACTIONS(732),
    [anon_sym_strictfp] = ACTIONS(732),
    [anon_sym_default] = ACTIONS(732),
    [anon_sym_synchronized] = ACTIONS(732),
    [anon_sym_native] = ACTIONS(732),
    [sym_identifier] = ACTIONS(958),
    [sym_comment] = ACTIONS(54),
  },
  [1001] = {
    [anon_sym_RPAREN] = ACTIONS(2142),
    [anon_sym_EQ] = ACTIONS(736),
    [sym_comment] = ACTIONS(54),
  },
  [1002] = {
    [anon_sym_RPAREN] = ACTIONS(2142),
    [sym_comment] = ACTIONS(54),
  },
  [1003] = {
    [anon_sym_RPAREN] = ACTIONS(2144),
    [sym_comment] = ACTIONS(54),
  },
  [1004] = {
    [anon_sym_LPAREN] = ACTIONS(744),
    [anon_sym_DOT] = ACTIONS(744),
    [anon_sym_boolean] = ACTIONS(746),
    [anon_sym_byte] = ACTIONS(746),
    [anon_sym_short] = ACTIONS(746),
    [anon_sym_int] = ACTIONS(746),
    [anon_sym_long] = ACTIONS(746),
    [anon_sym_char] = ACTIONS(746),
    [anon_sym_float] = ACTIONS(746),
    [anon_sym_double] = ACTIONS(746),
    [anon_sym_AT] = ACTIONS(744),
    [anon_sym_static] = ACTIONS(746),
    [anon_sym_class] = ACTIONS(746),
    [anon_sym_public] = ACTIONS(746),
    [anon_sym_protected] = ACTIONS(746),
    [anon_sym_private] = ACTIONS(746),
    [anon_sym_abstract] = ACTIONS(746),
    [anon_sym_final] = ACTIONS(746),
    [anon_sym_strictfp] = ACTIONS(746),
    [anon_sym_default] = ACTIONS(746),
    [anon_sym_synchronized] = ACTIONS(746),
    [anon_sym_native] = ACTIONS(746),
    [sym_identifier] = ACTIONS(964),
    [sym_comment] = ACTIONS(54),
  },
  [1005] = {
    [anon_sym_if] = ACTIONS(2146),
    [anon_sym_RBRACE] = ACTIONS(2146),
    [anon_sym_AT] = ACTIONS(2146),
    [anon_sym_static] = ACTIONS(2146),
    [anon_sym_class] = ACTIONS(2146),
    [anon_sym_public] = ACTIONS(2146),
    [anon_sym_protected] = ACTIONS(2146),
    [anon_sym_private] = ACTIONS(2146),
    [anon_sym_abstract] = ACTIONS(2146),
    [anon_sym_final] = ACTIONS(2146),
    [anon_sym_strictfp] = ACTIONS(2146),
    [anon_sym_default] = ACTIONS(2146),
    [anon_sym_synchronized] = ACTIONS(2146),
    [anon_sym_native] = ACTIONS(2146),
    [sym_comment] = ACTIONS(54),
  },
  [1006] = {
    [sym__expression] = STATE(1101),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1007] = {
    [anon_sym_RPAREN] = ACTIONS(2148),
    [anon_sym_COMMA] = ACTIONS(2150),
    [sym_comment] = ACTIONS(54),
  },
  [1008] = {
    [sym__semicolon] = ACTIONS(2152),
    [sym_comment] = ACTIONS(54),
  },
  [1009] = {
    [anon_sym_DOT] = ACTIONS(2154),
    [anon_sym_LBRACK] = ACTIONS(2154),
    [anon_sym_COLON_COLON] = ACTIONS(2154),
    [sym_comment] = ACTIONS(54),
  },
  [1010] = {
    [sym_type_arguments] = STATE(629),
    [anon_sym_LT] = ACTIONS(2156),
    [anon_sym_LPAREN] = ACTIONS(2159),
    [anon_sym_DOT] = ACTIONS(2161),
    [anon_sym_LBRACK] = ACTIONS(1282),
    [anon_sym_AT] = ACTIONS(1282),
    [anon_sym_LT_GT] = ACTIONS(2159),
    [sym_comment] = ACTIONS(54),
  },
  [1011] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(2164),
    [sym_comment] = ACTIONS(54),
  },
  [1012] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(1106),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(2166),
    [sym_comment] = ACTIONS(54),
  },
  [1013] = {
    [anon_sym_LPAREN] = ACTIONS(2168),
    [sym_comment] = ACTIONS(54),
  },
  [1014] = {
    [sym__annotation] = STATE(47),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [aux_sym_class_or_interface_type_repeat1] = STATE(1108),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(2170),
    [sym_comment] = ACTIONS(54),
  },
  [1015] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(1110),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2172),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1016] = {
    [sym_type_arguments] = STATE(873),
    [sym_type_arguments_or_diamond] = STATE(1013),
    [aux_sym_class_or_interface_type_to_instantiate_repeat1] = STATE(1022),
    [anon_sym_LT] = ACTIONS(1714),
    [anon_sym_LPAREN] = ACTIONS(1976),
    [anon_sym_DOT] = ACTIONS(1980),
    [anon_sym_LT_GT] = ACTIONS(1720),
    [sym_comment] = ACTIONS(54),
  },
  [1017] = {
    [sym__expression] = STATE(1113),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_variable_initializer] = STATE(1114),
    [sym_array_initializer] = STATE(1115),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_COMMA] = ACTIONS(2174),
    [anon_sym_BANG] = ACTIONS(1640),
    [anon_sym_TILDE] = ACTIONS(1640),
    [anon_sym_PLUS_PLUS] = ACTIONS(1642),
    [anon_sym_DASH_DASH] = ACTIONS(1642),
    [anon_sym_LBRACE] = ACTIONS(1986),
    [anon_sym_RBRACE] = ACTIONS(2176),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1018] = {
    [anon_sym_DOT] = ACTIONS(2178),
    [anon_sym_COLON_COLON] = ACTIONS(2178),
    [sym_comment] = ACTIONS(54),
  },
  [1019] = {
    [sym_class_body] = STATE(1116),
    [anon_sym_LBRACE] = ACTIONS(892),
    [anon_sym_DOT] = ACTIONS(2180),
    [anon_sym_LBRACK] = ACTIONS(2180),
    [anon_sym_COLON_COLON] = ACTIONS(2180),
    [sym_comment] = ACTIONS(54),
  },
  [1020] = {
    [anon_sym_RPAREN] = ACTIONS(2172),
    [sym_comment] = ACTIONS(54),
  },
  [1021] = {
    [aux_sym_class_or_interface_type_repeat2] = STATE(633),
    [anon_sym_LPAREN] = ACTIONS(1974),
    [anon_sym_DOT] = ACTIONS(662),
    [anon_sym_LBRACK] = ACTIONS(1286),
    [anon_sym_AT] = ACTIONS(1286),
    [sym_comment] = ACTIONS(54),
  },
  [1022] = {
    [sym_type_arguments] = STATE(873),
    [sym_type_arguments_or_diamond] = STATE(1117),
    [anon_sym_LT] = ACTIONS(1714),
    [anon_sym_LPAREN] = ACTIONS(2168),
    [anon_sym_DOT] = ACTIONS(1978),
    [anon_sym_LT_GT] = ACTIONS(1720),
    [sym_comment] = ACTIONS(54),
  },
  [1023] = {
    [anon_sym_RPAREN] = ACTIONS(2182),
    [sym_comment] = ACTIONS(54),
  },
  [1024] = {
    [sym__expression] = STATE(1119),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1730),
    [anon_sym_TILDE] = ACTIONS(1730),
    [anon_sym_PLUS_PLUS] = ACTIONS(1732),
    [anon_sym_DASH_DASH] = ACTIONS(1732),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1025] = {
    [sym__expression] = STATE(1120),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1730),
    [anon_sym_TILDE] = ACTIONS(1730),
    [anon_sym_PLUS_PLUS] = ACTIONS(1732),
    [anon_sym_DASH_DASH] = ACTIONS(1732),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1026] = {
    [sym__expression] = STATE(1121),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1730),
    [anon_sym_TILDE] = ACTIONS(1730),
    [anon_sym_PLUS_PLUS] = ACTIONS(1732),
    [anon_sym_DASH_DASH] = ACTIONS(1732),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1027] = {
    [sym__expression] = STATE(1122),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1730),
    [anon_sym_TILDE] = ACTIONS(1730),
    [anon_sym_PLUS_PLUS] = ACTIONS(1732),
    [anon_sym_DASH_DASH] = ACTIONS(1732),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1028] = {
    [sym__expression] = STATE(170),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1730),
    [anon_sym_TILDE] = ACTIONS(1730),
    [anon_sym_PLUS_PLUS] = ACTIONS(1732),
    [anon_sym_DASH_DASH] = ACTIONS(1732),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1029] = {
    [sym__expression] = STATE(1123),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1030] = {
    [anon_sym_DOT] = ACTIONS(2184),
    [anon_sym_LBRACK] = ACTIONS(2184),
    [anon_sym_AT] = ACTIONS(2184),
    [anon_sym_COLON_COLON] = ACTIONS(2184),
    [sym_comment] = ACTIONS(54),
  },
  [1031] = {
    [sym__expression] = STATE(1033),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1730),
    [anon_sym_TILDE] = ACTIONS(1730),
    [anon_sym_PLUS_PLUS] = ACTIONS(1732),
    [anon_sym_DASH_DASH] = ACTIONS(1732),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1032] = {
    [anon_sym_DOT] = ACTIONS(2186),
    [anon_sym_LBRACK] = ACTIONS(2186),
    [anon_sym_AT] = ACTIONS(2186),
    [anon_sym_COLON_COLON] = ACTIONS(2186),
    [sym_comment] = ACTIONS(54),
  },
  [1033] = {
    [anon_sym_GT] = ACTIONS(1992),
    [anon_sym_LT] = ACTIONS(1992),
    [anon_sym_EQ_EQ] = ACTIONS(1994),
    [anon_sym_GT_EQ] = ACTIONS(1994),
    [anon_sym_LT_EQ] = ACTIONS(1994),
    [anon_sym_BANG_EQ] = ACTIONS(1994),
    [anon_sym_AMP_AMP] = ACTIONS(1996),
    [anon_sym_PIPE_PIPE] = ACTIONS(1998),
    [anon_sym_PLUS] = ACTIONS(2000),
    [anon_sym_DASH] = ACTIONS(2000),
    [anon_sym_STAR] = ACTIONS(2002),
    [anon_sym_SLASH] = ACTIONS(2004),
    [anon_sym_AMP] = ACTIONS(2006),
    [anon_sym_PIPE] = ACTIONS(2008),
    [anon_sym_CARET] = ACTIONS(1998),
    [anon_sym_PERCENT] = ACTIONS(2002),
    [anon_sym_LT_LT] = ACTIONS(2002),
    [anon_sym_GT_GT] = ACTIONS(2004),
    [anon_sym_GT_GT_GT] = ACTIONS(2002),
    [anon_sym_QMARK] = ACTIONS(2010),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(2188),
    [sym_comment] = ACTIONS(54),
  },
  [1034] = {
    [sym_type_arguments] = STATE(1126),
    [anon_sym_LT] = ACTIONS(914),
    [sym_identifier] = ACTIONS(2190),
    [sym_comment] = ACTIONS(54),
  },
  [1035] = {
    [sym_type_arguments] = STATE(1128),
    [anon_sym_LT] = ACTIONS(914),
    [sym_identifier] = ACTIONS(2192),
    [sym_comment] = ACTIONS(54),
  },
  [1036] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(1130),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2194),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1037] = {
    [anon_sym_LPAREN] = ACTIONS(2196),
    [sym_comment] = ACTIONS(54),
  },
  [1038] = {
    [aux_sym_type_arguments_repeat1] = STATE(1133),
    [anon_sym_GT] = ACTIONS(2198),
    [anon_sym_COMMA] = ACTIONS(1274),
    [sym_comment] = ACTIONS(54),
  },
  [1039] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(1134),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2182),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1040] = {
    [anon_sym_LPAREN] = ACTIONS(2200),
    [sym_comment] = ACTIONS(54),
  },
  [1041] = {
    [anon_sym_DOT] = ACTIONS(2202),
    [anon_sym_LBRACK] = ACTIONS(2202),
    [anon_sym_COLON_COLON] = ACTIONS(2202),
    [sym_comment] = ACTIONS(54),
  },
  [1042] = {
    [anon_sym_DOT] = ACTIONS(2204),
    [anon_sym_LBRACK] = ACTIONS(2204),
    [anon_sym_COLON_COLON] = ACTIONS(2204),
    [sym_comment] = ACTIONS(54),
  },
  [1043] = {
    [sym_class_body] = STATE(1136),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [sym_comment] = ACTIONS(54),
  },
  [1044] = {
    [sym__semicolon] = ACTIONS(1584),
    [anon_sym_LT] = ACTIONS(1584),
    [anon_sym_LBRACE] = ACTIONS(1584),
    [anon_sym_RBRACE] = ACTIONS(1584),
    [anon_sym_AT] = ACTIONS(1584),
    [anon_sym_static] = ACTIONS(1586),
    [anon_sym_class] = ACTIONS(1586),
    [anon_sym_public] = ACTIONS(1586),
    [anon_sym_protected] = ACTIONS(1586),
    [anon_sym_private] = ACTIONS(1586),
    [anon_sym_abstract] = ACTIONS(1586),
    [anon_sym_final] = ACTIONS(1586),
    [anon_sym_strictfp] = ACTIONS(1586),
    [anon_sym_default] = ACTIONS(1586),
    [anon_sym_synchronized] = ACTIONS(1586),
    [anon_sym_native] = ACTIONS(1586),
    [anon_sym_void] = ACTIONS(1586),
    [anon_sym_interface] = ACTIONS(1586),
    [sym_identifier] = ACTIONS(1588),
    [sym_comment] = ACTIONS(54),
  },
  [1045] = {
    [anon_sym_GT] = ACTIONS(1206),
    [anon_sym_LT] = ACTIONS(1206),
    [anon_sym_EQ_EQ] = ACTIONS(1208),
    [anon_sym_GT_EQ] = ACTIONS(1208),
    [anon_sym_LT_EQ] = ACTIONS(1208),
    [anon_sym_BANG_EQ] = ACTIONS(1208),
    [anon_sym_AMP_AMP] = ACTIONS(1210),
    [anon_sym_PIPE_PIPE] = ACTIONS(1212),
    [anon_sym_PLUS] = ACTIONS(1214),
    [anon_sym_DASH] = ACTIONS(1214),
    [anon_sym_STAR] = ACTIONS(1216),
    [anon_sym_SLASH] = ACTIONS(1218),
    [anon_sym_AMP] = ACTIONS(1220),
    [anon_sym_PIPE] = ACTIONS(1222),
    [anon_sym_CARET] = ACTIONS(1212),
    [anon_sym_PERCENT] = ACTIONS(1216),
    [anon_sym_LT_LT] = ACTIONS(1216),
    [anon_sym_GT_GT] = ACTIONS(1218),
    [anon_sym_GT_GT_GT] = ACTIONS(1216),
    [anon_sym_RPAREN] = ACTIONS(2206),
    [anon_sym_QMARK] = ACTIONS(1226),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [1046] = {
    [anon_sym_RBRACE] = ACTIONS(2208),
    [sym_comment] = ACTIONS(54),
  },
  [1047] = {
    [sym_annotation_type_body] = STATE(1140),
    [anon_sym_LBRACE] = ACTIONS(2210),
    [sym_comment] = ACTIONS(54),
  },
  [1048] = {
    [anon_sym_LBRACE] = ACTIONS(2212),
    [sym_comment] = ACTIONS(54),
  },
  [1049] = {
    [sym_module_directive] = STATE(247),
    [aux_sym_module_declaration_repeat1] = STATE(1143),
    [anon_sym_RBRACE] = ACTIONS(2214),
    [anon_sym_requires] = ACTIONS(500),
    [anon_sym_exports] = ACTIONS(502),
    [anon_sym_opens] = ACTIONS(502),
    [anon_sym_uses] = ACTIONS(504),
    [anon_sym_provides] = ACTIONS(506),
    [sym_comment] = ACTIONS(54),
  },
  [1050] = {
    [anon_sym_if] = ACTIONS(508),
    [anon_sym_RBRACE] = ACTIONS(508),
    [anon_sym_elseif] = ACTIONS(508),
    [anon_sym_AT] = ACTIONS(508),
    [anon_sym_static] = ACTIONS(508),
    [anon_sym_class] = ACTIONS(508),
    [anon_sym_public] = ACTIONS(508),
    [anon_sym_protected] = ACTIONS(508),
    [anon_sym_private] = ACTIONS(508),
    [anon_sym_abstract] = ACTIONS(508),
    [anon_sym_final] = ACTIONS(508),
    [anon_sym_strictfp] = ACTIONS(508),
    [anon_sym_default] = ACTIONS(508),
    [anon_sym_synchronized] = ACTIONS(508),
    [anon_sym_native] = ACTIONS(508),
    [sym_comment] = ACTIONS(54),
  },
  [1051] = {
    [sym__semicolon] = ACTIONS(2216),
    [anon_sym_DOT] = ACTIONS(496),
    [sym_comment] = ACTIONS(54),
  },
  [1052] = {
    [anon_sym_DOT] = ACTIONS(2218),
    [sym_comment] = ACTIONS(54),
  },
  [1053] = {
    [anon_sym_if] = ACTIONS(518),
    [anon_sym_RBRACE] = ACTIONS(518),
    [anon_sym_elseif] = ACTIONS(518),
    [anon_sym_AT] = ACTIONS(518),
    [anon_sym_static] = ACTIONS(518),
    [anon_sym_class] = ACTIONS(518),
    [anon_sym_public] = ACTIONS(518),
    [anon_sym_protected] = ACTIONS(518),
    [anon_sym_private] = ACTIONS(518),
    [anon_sym_abstract] = ACTIONS(518),
    [anon_sym_final] = ACTIONS(518),
    [anon_sym_strictfp] = ACTIONS(518),
    [anon_sym_default] = ACTIONS(518),
    [anon_sym_synchronized] = ACTIONS(518),
    [anon_sym_native] = ACTIONS(518),
    [sym_comment] = ACTIONS(54),
  },
  [1054] = {
    [anon_sym_STAR] = ACTIONS(2220),
    [sym_identifier] = ACTIONS(488),
    [sym_comment] = ACTIONS(54),
  },
  [1055] = {
    [sym__annotation] = STATE(257),
    [sym_normal_annotation] = STATE(261),
    [sym_marker_annotation] = STATE(261),
    [sym_single_element_annotation] = STATE(261),
    [sym_class_declaration] = STATE(278),
    [sym_normal_class_declaration] = STATE(262),
    [sym_modifier] = STATE(263),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(278),
    [sym_annotation_type_declaration] = STATE(268),
    [sym_normal_interface_declaration] = STATE(268),
    [sym_interface_member_declaration] = STATE(280),
    [sym_constant_declaration] = STATE(278),
    [sym_variable_declarator_list] = STATE(281),
    [sym_variable_declarator] = STATE(282),
    [sym_variable_declarator_id] = STATE(126),
    [sym_method_header] = STATE(269),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(278),
    [aux_sym_normal_class_declaration_repeat1] = STATE(283),
    [aux_sym_interface_body_repeat1] = STATE(1148),
    [sym__semicolon] = ACTIONS(550),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(2222),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(538),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(540),
    [sym_identifier] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [1056] = {
    [sym_extends_interfaces] = STATE(1149),
    [sym_interface_body] = STATE(1150),
    [anon_sym_LBRACE] = ACTIONS(2064),
    [anon_sym_extends] = ACTIONS(348),
    [sym_comment] = ACTIONS(54),
  },
  [1057] = {
    [sym_interface_body] = STATE(1150),
    [anon_sym_LBRACE] = ACTIONS(2064),
    [sym_comment] = ACTIONS(54),
  },
  [1058] = {
    [anon_sym_if] = ACTIONS(556),
    [anon_sym_RBRACE] = ACTIONS(556),
    [anon_sym_elseif] = ACTIONS(556),
    [anon_sym_AT] = ACTIONS(556),
    [anon_sym_static] = ACTIONS(556),
    [anon_sym_class] = ACTIONS(556),
    [anon_sym_public] = ACTIONS(556),
    [anon_sym_protected] = ACTIONS(556),
    [anon_sym_private] = ACTIONS(556),
    [anon_sym_abstract] = ACTIONS(556),
    [anon_sym_final] = ACTIONS(556),
    [anon_sym_strictfp] = ACTIONS(556),
    [anon_sym_default] = ACTIONS(556),
    [anon_sym_synchronized] = ACTIONS(556),
    [anon_sym_native] = ACTIONS(556),
    [sym_comment] = ACTIONS(54),
  },
  [1059] = {
    [anon_sym_if] = ACTIONS(616),
    [anon_sym_RBRACE] = ACTIONS(616),
    [anon_sym_elseif] = ACTIONS(616),
    [anon_sym_AT] = ACTIONS(616),
    [anon_sym_static] = ACTIONS(616),
    [anon_sym_class] = ACTIONS(616),
    [anon_sym_public] = ACTIONS(616),
    [anon_sym_protected] = ACTIONS(616),
    [anon_sym_private] = ACTIONS(616),
    [anon_sym_abstract] = ACTIONS(616),
    [anon_sym_final] = ACTIONS(616),
    [anon_sym_strictfp] = ACTIONS(616),
    [anon_sym_default] = ACTIONS(616),
    [anon_sym_synchronized] = ACTIONS(616),
    [anon_sym_native] = ACTIONS(616),
    [sym_comment] = ACTIONS(54),
  },
  [1060] = {
    [anon_sym_RBRACE] = ACTIONS(2224),
    [sym_comment] = ACTIONS(54),
  },
  [1061] = {
    [sym_module_identifier] = STATE(1152),
    [sym_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(54),
  },
  [1062] = {
    [aux_sym_module_identifier_repeat1] = STATE(1153),
    [sym__semicolon] = ACTIONS(2216),
    [anon_sym_DOT] = ACTIONS(328),
    [sym_comment] = ACTIONS(54),
  },
  [1063] = {
    [sym_identifier] = ACTIONS(2226),
    [sym_comment] = ACTIONS(54),
  },
  [1064] = {
    [sym_type_parameters] = STATE(1155),
    [sym_extends_interfaces] = STATE(1149),
    [sym_interface_body] = STATE(1150),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_LBRACE] = ACTIONS(2064),
    [anon_sym_extends] = ACTIONS(348),
    [sym_comment] = ACTIONS(54),
  },
  [1065] = {
    [anon_sym_if] = ACTIONS(646),
    [anon_sym_RBRACE] = ACTIONS(646),
    [anon_sym_elseif] = ACTIONS(646),
    [anon_sym_AT] = ACTIONS(646),
    [anon_sym_static] = ACTIONS(646),
    [anon_sym_class] = ACTIONS(646),
    [anon_sym_public] = ACTIONS(646),
    [anon_sym_protected] = ACTIONS(646),
    [anon_sym_private] = ACTIONS(646),
    [anon_sym_abstract] = ACTIONS(646),
    [anon_sym_final] = ACTIONS(646),
    [anon_sym_strictfp] = ACTIONS(646),
    [anon_sym_default] = ACTIONS(646),
    [anon_sym_synchronized] = ACTIONS(646),
    [anon_sym_native] = ACTIONS(646),
    [sym_comment] = ACTIONS(54),
  },
  [1066] = {
    [anon_sym_GT] = ACTIONS(1206),
    [anon_sym_LT] = ACTIONS(1206),
    [anon_sym_EQ_EQ] = ACTIONS(1208),
    [anon_sym_GT_EQ] = ACTIONS(1208),
    [anon_sym_LT_EQ] = ACTIONS(1208),
    [anon_sym_BANG_EQ] = ACTIONS(1208),
    [anon_sym_AMP_AMP] = ACTIONS(1210),
    [anon_sym_PIPE_PIPE] = ACTIONS(1212),
    [anon_sym_PLUS] = ACTIONS(1214),
    [anon_sym_DASH] = ACTIONS(1214),
    [anon_sym_STAR] = ACTIONS(1216),
    [anon_sym_SLASH] = ACTIONS(1218),
    [anon_sym_AMP] = ACTIONS(1220),
    [anon_sym_PIPE] = ACTIONS(1222),
    [anon_sym_CARET] = ACTIONS(1212),
    [anon_sym_PERCENT] = ACTIONS(1216),
    [anon_sym_LT_LT] = ACTIONS(1216),
    [anon_sym_GT_GT] = ACTIONS(1218),
    [anon_sym_GT_GT_GT] = ACTIONS(1216),
    [anon_sym_RPAREN] = ACTIONS(1200),
    [anon_sym_QMARK] = ACTIONS(1226),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [1067] = {
    [anon_sym_if] = ACTIONS(1834),
    [anon_sym_RBRACE] = ACTIONS(1834),
    [anon_sym_elseif] = ACTIONS(1834),
    [anon_sym_AT] = ACTIONS(1834),
    [anon_sym_static] = ACTIONS(1834),
    [anon_sym_class] = ACTIONS(1834),
    [anon_sym_public] = ACTIONS(1834),
    [anon_sym_protected] = ACTIONS(1834),
    [anon_sym_private] = ACTIONS(1834),
    [anon_sym_abstract] = ACTIONS(1834),
    [anon_sym_final] = ACTIONS(1834),
    [anon_sym_strictfp] = ACTIONS(1834),
    [anon_sym_default] = ACTIONS(1834),
    [anon_sym_synchronized] = ACTIONS(1834),
    [anon_sym_native] = ACTIONS(1834),
    [sym_comment] = ACTIONS(54),
  },
  [1068] = {
    [anon_sym_DOT] = ACTIONS(2088),
    [anon_sym_AT] = ACTIONS(2088),
    [sym_identifier] = ACTIONS(2228),
    [sym_comment] = ACTIONS(54),
  },
  [1069] = {
    [anon_sym_boolean] = ACTIONS(1028),
    [anon_sym_byte] = ACTIONS(1028),
    [anon_sym_short] = ACTIONS(1028),
    [anon_sym_int] = ACTIONS(1028),
    [anon_sym_long] = ACTIONS(1028),
    [anon_sym_char] = ACTIONS(1028),
    [anon_sym_float] = ACTIONS(1028),
    [anon_sym_double] = ACTIONS(1028),
    [anon_sym_AT] = ACTIONS(1026),
    [sym_identifier] = ACTIONS(1290),
    [sym_comment] = ACTIONS(54),
  },
  [1070] = {
    [anon_sym_boolean] = ACTIONS(1038),
    [anon_sym_byte] = ACTIONS(1038),
    [anon_sym_short] = ACTIONS(1038),
    [anon_sym_int] = ACTIONS(1038),
    [anon_sym_long] = ACTIONS(1038),
    [anon_sym_char] = ACTIONS(1038),
    [anon_sym_float] = ACTIONS(1038),
    [anon_sym_double] = ACTIONS(1038),
    [anon_sym_AT] = ACTIONS(1036),
    [sym_identifier] = ACTIONS(1292),
    [sym_comment] = ACTIONS(54),
  },
  [1071] = {
    [anon_sym_RBRACE] = ACTIONS(1324),
    [anon_sym_AT] = ACTIONS(1324),
    [anon_sym_static] = ACTIONS(1326),
    [anon_sym_class] = ACTIONS(1326),
    [anon_sym_public] = ACTIONS(1326),
    [anon_sym_protected] = ACTIONS(1326),
    [anon_sym_private] = ACTIONS(1326),
    [anon_sym_abstract] = ACTIONS(1326),
    [anon_sym_final] = ACTIONS(1326),
    [anon_sym_strictfp] = ACTIONS(1326),
    [anon_sym_default] = ACTIONS(1326),
    [anon_sym_synchronized] = ACTIONS(1326),
    [anon_sym_native] = ACTIONS(1326),
    [anon_sym_interface] = ACTIONS(1326),
    [sym_identifier] = ACTIONS(1328),
    [sym_comment] = ACTIONS(54),
  },
  [1072] = {
    [anon_sym_RBRACE] = ACTIONS(1528),
    [anon_sym_AT] = ACTIONS(1528),
    [anon_sym_static] = ACTIONS(1530),
    [anon_sym_class] = ACTIONS(1530),
    [anon_sym_public] = ACTIONS(1530),
    [anon_sym_protected] = ACTIONS(1530),
    [anon_sym_private] = ACTIONS(1530),
    [anon_sym_abstract] = ACTIONS(1530),
    [anon_sym_final] = ACTIONS(1530),
    [anon_sym_strictfp] = ACTIONS(1530),
    [anon_sym_default] = ACTIONS(1530),
    [anon_sym_synchronized] = ACTIONS(1530),
    [anon_sym_native] = ACTIONS(1530),
    [anon_sym_interface] = ACTIONS(1530),
    [sym_identifier] = ACTIONS(1532),
    [sym_comment] = ACTIONS(54),
  },
  [1073] = {
    [sym__semicolon] = ACTIONS(304),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(306),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [anon_sym_BANG_EQ] = ACTIONS(304),
    [anon_sym_AMP_AMP] = ACTIONS(304),
    [anon_sym_PIPE_PIPE] = ACTIONS(304),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(306),
    [anon_sym_CARET] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(304),
    [anon_sym_LT_LT] = ACTIONS(304),
    [anon_sym_GT_GT] = ACTIONS(306),
    [anon_sym_GT_GT_GT] = ACTIONS(304),
    [anon_sym_QMARK] = ACTIONS(304),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [1074] = {
    [sym_unary_expression] = STATE(509),
    [sym_conditional_and_expression] = STATE(1156),
    [sym_inclusive_or_expression] = STATE(958),
    [sym_exclusive_or_expression] = STATE(959),
    [sym_and_expression] = STATE(515),
    [sym_relational_expression] = STATE(960),
    [sym_equality_expression] = STATE(961),
    [sym_shift_expression] = STATE(962),
    [sym_additive_expression] = STATE(963),
    [sym_multiplicative_expression] = STATE(964),
    [anon_sym_BANG] = ACTIONS(1868),
    [anon_sym_TILDE] = ACTIONS(1868),
    [sym_comment] = ACTIONS(54),
  },
  [1075] = {
    [sym__expression] = STATE(1157),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1076] = {
    [sym_unary_expression] = STATE(509),
    [sym_inclusive_or_expression] = STATE(1158),
    [sym_exclusive_or_expression] = STATE(959),
    [sym_and_expression] = STATE(515),
    [sym_relational_expression] = STATE(960),
    [sym_equality_expression] = STATE(961),
    [sym_shift_expression] = STATE(962),
    [sym_additive_expression] = STATE(963),
    [sym_multiplicative_expression] = STATE(964),
    [anon_sym_BANG] = ACTIONS(1868),
    [anon_sym_TILDE] = ACTIONS(1868),
    [sym_comment] = ACTIONS(54),
  },
  [1077] = {
    [sym_unary_expression] = STATE(509),
    [sym_exclusive_or_expression] = STATE(1159),
    [sym_and_expression] = STATE(515),
    [sym_relational_expression] = STATE(960),
    [sym_equality_expression] = STATE(961),
    [sym_shift_expression] = STATE(962),
    [sym_additive_expression] = STATE(963),
    [sym_multiplicative_expression] = STATE(964),
    [anon_sym_BANG] = ACTIONS(1868),
    [anon_sym_TILDE] = ACTIONS(1868),
    [sym_comment] = ACTIONS(54),
  },
  [1078] = {
    [sym_unary_expression] = STATE(509),
    [sym_and_expression] = STATE(840),
    [sym_relational_expression] = STATE(960),
    [sym_equality_expression] = STATE(961),
    [sym_shift_expression] = STATE(962),
    [sym_additive_expression] = STATE(963),
    [sym_multiplicative_expression] = STATE(964),
    [anon_sym_BANG] = ACTIONS(1868),
    [anon_sym_TILDE] = ACTIONS(1868),
    [sym_comment] = ACTIONS(54),
  },
  [1079] = {
    [sym_unary_expression] = STATE(509),
    [sym_shift_expression] = STATE(1160),
    [sym_additive_expression] = STATE(963),
    [sym_multiplicative_expression] = STATE(964),
    [anon_sym_BANG] = ACTIONS(1868),
    [anon_sym_TILDE] = ACTIONS(1868),
    [sym_comment] = ACTIONS(54),
  },
  [1080] = {
    [sym_unary_expression] = STATE(509),
    [sym_relational_expression] = STATE(1161),
    [sym_shift_expression] = STATE(962),
    [sym_additive_expression] = STATE(963),
    [sym_multiplicative_expression] = STATE(964),
    [anon_sym_BANG] = ACTIONS(1868),
    [anon_sym_TILDE] = ACTIONS(1868),
    [sym_comment] = ACTIONS(54),
  },
  [1081] = {
    [sym_unary_expression] = STATE(509),
    [sym_additive_expression] = STATE(1162),
    [sym_multiplicative_expression] = STATE(964),
    [anon_sym_BANG] = ACTIONS(1868),
    [anon_sym_TILDE] = ACTIONS(1868),
    [sym_comment] = ACTIONS(54),
  },
  [1082] = {
    [sym_unary_expression] = STATE(509),
    [sym_multiplicative_expression] = STATE(1163),
    [anon_sym_BANG] = ACTIONS(1868),
    [anon_sym_TILDE] = ACTIONS(1868),
    [sym_comment] = ACTIONS(54),
  },
  [1083] = {
    [sym_unary_expression] = STATE(845),
    [anon_sym_BANG] = ACTIONS(1868),
    [anon_sym_TILDE] = ACTIONS(1868),
    [sym_comment] = ACTIONS(54),
  },
  [1084] = {
    [anon_sym_RBRACE] = ACTIONS(2230),
    [anon_sym_AT] = ACTIONS(2230),
    [anon_sym_static] = ACTIONS(2232),
    [anon_sym_class] = ACTIONS(2232),
    [anon_sym_public] = ACTIONS(2232),
    [anon_sym_protected] = ACTIONS(2232),
    [anon_sym_private] = ACTIONS(2232),
    [anon_sym_abstract] = ACTIONS(2232),
    [anon_sym_final] = ACTIONS(2232),
    [anon_sym_strictfp] = ACTIONS(2232),
    [anon_sym_default] = ACTIONS(2232),
    [anon_sym_synchronized] = ACTIONS(2232),
    [anon_sym_native] = ACTIONS(2232),
    [anon_sym_interface] = ACTIONS(2232),
    [sym_identifier] = ACTIONS(2234),
    [sym_comment] = ACTIONS(54),
  },
  [1085] = {
    [sym_class_body] = STATE(1164),
    [anon_sym_LBRACE] = ACTIONS(1308),
    [sym_comment] = ACTIONS(54),
  },
  [1086] = {
    [anon_sym_RBRACE] = ACTIONS(1584),
    [anon_sym_AT] = ACTIONS(1584),
    [anon_sym_static] = ACTIONS(1586),
    [anon_sym_class] = ACTIONS(1586),
    [anon_sym_public] = ACTIONS(1586),
    [anon_sym_protected] = ACTIONS(1586),
    [anon_sym_private] = ACTIONS(1586),
    [anon_sym_abstract] = ACTIONS(1586),
    [anon_sym_final] = ACTIONS(1586),
    [anon_sym_strictfp] = ACTIONS(1586),
    [anon_sym_default] = ACTIONS(1586),
    [anon_sym_synchronized] = ACTIONS(1586),
    [anon_sym_native] = ACTIONS(1586),
    [anon_sym_interface] = ACTIONS(1586),
    [sym_identifier] = ACTIONS(1588),
    [sym_comment] = ACTIONS(54),
  },
  [1087] = {
    [sym__semicolon] = ACTIONS(2236),
    [sym_comment] = ACTIONS(54),
  },
  [1088] = {
    [sym__expression] = STATE(1166),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1089] = {
    [anon_sym_GT] = ACTIONS(564),
    [anon_sym_LT] = ACTIONS(564),
    [anon_sym_EQ_EQ] = ACTIONS(562),
    [anon_sym_GT_EQ] = ACTIONS(562),
    [anon_sym_LT_EQ] = ACTIONS(562),
    [anon_sym_BANG_EQ] = ACTIONS(562),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(564),
    [anon_sym_DASH] = ACTIONS(564),
    [anon_sym_STAR] = ACTIONS(2238),
    [anon_sym_SLASH] = ACTIONS(2240),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(2238),
    [anon_sym_LT_LT] = ACTIONS(2238),
    [anon_sym_GT_GT] = ACTIONS(2240),
    [anon_sym_GT_GT_GT] = ACTIONS(2238),
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(562),
    [sym_comment] = ACTIONS(54),
  },
  [1090] = {
    [anon_sym_GT] = ACTIONS(1874),
    [anon_sym_LT] = ACTIONS(1874),
    [anon_sym_EQ_EQ] = ACTIONS(1876),
    [anon_sym_GT_EQ] = ACTIONS(1876),
    [anon_sym_LT_EQ] = ACTIONS(1876),
    [anon_sym_BANG_EQ] = ACTIONS(1876),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(2242),
    [anon_sym_DASH] = ACTIONS(2242),
    [anon_sym_STAR] = ACTIONS(2238),
    [anon_sym_SLASH] = ACTIONS(2240),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(2238),
    [anon_sym_LT_LT] = ACTIONS(2238),
    [anon_sym_GT_GT] = ACTIONS(2240),
    [anon_sym_GT_GT_GT] = ACTIONS(2238),
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(562),
    [sym_comment] = ACTIONS(54),
  },
  [1091] = {
    [anon_sym_GT] = ACTIONS(1874),
    [anon_sym_LT] = ACTIONS(1874),
    [anon_sym_EQ_EQ] = ACTIONS(1876),
    [anon_sym_GT_EQ] = ACTIONS(1876),
    [anon_sym_LT_EQ] = ACTIONS(1876),
    [anon_sym_BANG_EQ] = ACTIONS(1876),
    [anon_sym_AMP_AMP] = ACTIONS(2244),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(2242),
    [anon_sym_DASH] = ACTIONS(2242),
    [anon_sym_STAR] = ACTIONS(2238),
    [anon_sym_SLASH] = ACTIONS(2240),
    [anon_sym_AMP] = ACTIONS(1878),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(2238),
    [anon_sym_LT_LT] = ACTIONS(2238),
    [anon_sym_GT_GT] = ACTIONS(2240),
    [anon_sym_GT_GT_GT] = ACTIONS(2238),
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(562),
    [sym_comment] = ACTIONS(54),
  },
  [1092] = {
    [anon_sym_GT] = ACTIONS(1874),
    [anon_sym_LT] = ACTIONS(1874),
    [anon_sym_EQ_EQ] = ACTIONS(1876),
    [anon_sym_GT_EQ] = ACTIONS(1876),
    [anon_sym_LT_EQ] = ACTIONS(1876),
    [anon_sym_BANG_EQ] = ACTIONS(1876),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(564),
    [anon_sym_DASH] = ACTIONS(564),
    [anon_sym_STAR] = ACTIONS(2238),
    [anon_sym_SLASH] = ACTIONS(2240),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(2238),
    [anon_sym_LT_LT] = ACTIONS(2238),
    [anon_sym_GT_GT] = ACTIONS(2240),
    [anon_sym_GT_GT_GT] = ACTIONS(2238),
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(562),
    [sym_comment] = ACTIONS(54),
  },
  [1093] = {
    [anon_sym_GT] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(566),
    [anon_sym_EQ_EQ] = ACTIONS(568),
    [anon_sym_GT_EQ] = ACTIONS(568),
    [anon_sym_LT_EQ] = ACTIONS(568),
    [anon_sym_BANG_EQ] = ACTIONS(568),
    [anon_sym_AMP_AMP] = ACTIONS(570),
    [anon_sym_PIPE_PIPE] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_SLASH] = ACTIONS(578),
    [anon_sym_AMP] = ACTIONS(580),
    [anon_sym_PIPE] = ACTIONS(582),
    [anon_sym_CARET] = ACTIONS(572),
    [anon_sym_PERCENT] = ACTIONS(576),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(578),
    [anon_sym_GT_GT_GT] = ACTIONS(576),
    [anon_sym_QMARK] = ACTIONS(584),
    [anon_sym_COLON] = ACTIONS(2246),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [1094] = {
    [sym__semicolon] = ACTIONS(2248),
    [anon_sym_RPAREN] = ACTIONS(2248),
    [anon_sym_COMMA] = ACTIONS(2248),
    [anon_sym_RBRACE] = ACTIONS(2248),
    [sym_comment] = ACTIONS(54),
  },
  [1095] = {
    [anon_sym_COMMA] = ACTIONS(2250),
    [anon_sym_RBRACE] = ACTIONS(2250),
    [sym_comment] = ACTIONS(54),
  },
  [1096] = {
    [sym_lambda_expression] = STATE(1097),
    [sym__lambda_parameters] = STATE(26),
    [sym_unary_expression] = STATE(509),
    [sym_conditional_expression] = STATE(1097),
    [sym_conditional_or_expression] = STATE(662),
    [sym_conditional_and_expression] = STATE(663),
    [sym_inclusive_or_expression] = STATE(664),
    [sym_exclusive_or_expression] = STATE(665),
    [sym_and_expression] = STATE(515),
    [sym_relational_expression] = STATE(666),
    [sym_equality_expression] = STATE(667),
    [sym_shift_expression] = STATE(668),
    [sym_additive_expression] = STATE(669),
    [sym_multiplicative_expression] = STATE(670),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1342),
    [anon_sym_TILDE] = ACTIONS(1342),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1097] = {
    [sym__semicolon] = ACTIONS(2252),
    [anon_sym_RPAREN] = ACTIONS(2252),
    [anon_sym_COMMA] = ACTIONS(2252),
    [anon_sym_RBRACE] = ACTIONS(2252),
    [sym_comment] = ACTIONS(54),
  },
  [1098] = {
    [sym__semicolon] = ACTIONS(2254),
    [anon_sym_COMMA] = ACTIONS(2254),
    [anon_sym_DOT] = ACTIONS(1076),
    [sym_comment] = ACTIONS(54),
  },
  [1099] = {
    [anon_sym_boolean] = ACTIONS(1028),
    [anon_sym_byte] = ACTIONS(1028),
    [anon_sym_short] = ACTIONS(1028),
    [anon_sym_int] = ACTIONS(1028),
    [anon_sym_long] = ACTIONS(1028),
    [anon_sym_char] = ACTIONS(1028),
    [anon_sym_float] = ACTIONS(1028),
    [anon_sym_double] = ACTIONS(1028),
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
    [anon_sym_synchronized] = ACTIONS(1028),
    [anon_sym_native] = ACTIONS(1028),
    [sym_identifier] = ACTIONS(1290),
    [sym_comment] = ACTIONS(54),
  },
  [1100] = {
    [anon_sym_boolean] = ACTIONS(1038),
    [anon_sym_byte] = ACTIONS(1038),
    [anon_sym_short] = ACTIONS(1038),
    [anon_sym_int] = ACTIONS(1038),
    [anon_sym_long] = ACTIONS(1038),
    [anon_sym_char] = ACTIONS(1038),
    [anon_sym_float] = ACTIONS(1038),
    [anon_sym_double] = ACTIONS(1038),
    [anon_sym_AT] = ACTIONS(1036),
    [anon_sym_static] = ACTIONS(1038),
    [anon_sym_class] = ACTIONS(1038),
    [anon_sym_public] = ACTIONS(1038),
    [anon_sym_protected] = ACTIONS(1038),
    [anon_sym_private] = ACTIONS(1038),
    [anon_sym_abstract] = ACTIONS(1038),
    [anon_sym_final] = ACTIONS(1038),
    [anon_sym_strictfp] = ACTIONS(1038),
    [anon_sym_default] = ACTIONS(1038),
    [anon_sym_synchronized] = ACTIONS(1038),
    [anon_sym_native] = ACTIONS(1038),
    [sym_identifier] = ACTIONS(1292),
    [sym_comment] = ACTIONS(54),
  },
  [1101] = {
    [anon_sym_GT] = ACTIONS(1632),
    [anon_sym_LT] = ACTIONS(1632),
    [anon_sym_EQ_EQ] = ACTIONS(1634),
    [anon_sym_GT_EQ] = ACTIONS(1634),
    [anon_sym_LT_EQ] = ACTIONS(1634),
    [anon_sym_BANG_EQ] = ACTIONS(1634),
    [anon_sym_AMP_AMP] = ACTIONS(1946),
    [anon_sym_PIPE_PIPE] = ACTIONS(1948),
    [anon_sym_PLUS] = ACTIONS(1950),
    [anon_sym_DASH] = ACTIONS(1950),
    [anon_sym_STAR] = ACTIONS(1952),
    [anon_sym_SLASH] = ACTIONS(1954),
    [anon_sym_AMP] = ACTIONS(1636),
    [anon_sym_PIPE] = ACTIONS(1956),
    [anon_sym_CARET] = ACTIONS(1948),
    [anon_sym_PERCENT] = ACTIONS(1952),
    [anon_sym_LT_LT] = ACTIONS(1952),
    [anon_sym_GT_GT] = ACTIONS(1954),
    [anon_sym_GT_GT_GT] = ACTIONS(1952),
    [anon_sym_RPAREN] = ACTIONS(2256),
    [anon_sym_COMMA] = ACTIONS(2256),
    [anon_sym_QMARK] = ACTIONS(1962),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [1102] = {
    [sym__expression] = STATE(1168),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1103] = {
    [anon_sym_if] = ACTIONS(2258),
    [anon_sym_RBRACE] = ACTIONS(2258),
    [anon_sym_AT] = ACTIONS(2258),
    [anon_sym_static] = ACTIONS(2258),
    [anon_sym_class] = ACTIONS(2258),
    [anon_sym_public] = ACTIONS(2258),
    [anon_sym_protected] = ACTIONS(2258),
    [anon_sym_private] = ACTIONS(2258),
    [anon_sym_abstract] = ACTIONS(2258),
    [anon_sym_final] = ACTIONS(2258),
    [anon_sym_strictfp] = ACTIONS(2258),
    [anon_sym_default] = ACTIONS(2258),
    [anon_sym_synchronized] = ACTIONS(2258),
    [anon_sym_native] = ACTIONS(2258),
    [sym_comment] = ACTIONS(54),
  },
  [1104] = {
    [sym_type_arguments] = STATE(788),
    [anon_sym_LT] = ACTIONS(2260),
    [anon_sym_LPAREN] = ACTIONS(2263),
    [anon_sym_DOT] = ACTIONS(2265),
    [anon_sym_LBRACK] = ACTIONS(1602),
    [anon_sym_AT] = ACTIONS(1602),
    [anon_sym_LT_GT] = ACTIONS(2263),
    [sym_comment] = ACTIONS(54),
  },
  [1105] = {
    [anon_sym_LT] = ACTIONS(2268),
    [anon_sym_LPAREN] = ACTIONS(2263),
    [anon_sym_DOT] = ACTIONS(2263),
    [anon_sym_LT_GT] = ACTIONS(2263),
    [sym_comment] = ACTIONS(54),
  },
  [1106] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(2270),
    [sym_comment] = ACTIONS(54),
  },
  [1107] = {
    [anon_sym_LT] = ACTIONS(2272),
    [anon_sym_LPAREN] = ACTIONS(2159),
    [anon_sym_DOT] = ACTIONS(2159),
    [anon_sym_LT_GT] = ACTIONS(2159),
    [sym_comment] = ACTIONS(54),
  },
  [1108] = {
    [sym__annotation] = STATE(119),
    [sym_normal_annotation] = STATE(48),
    [sym_marker_annotation] = STATE(48),
    [sym_single_element_annotation] = STATE(48),
    [anon_sym_AT] = ACTIONS(70),
    [sym_identifier] = ACTIONS(2166),
    [sym_comment] = ACTIONS(54),
  },
  [1109] = {
    [sym_class_body] = STATE(1170),
    [anon_sym_LBRACE] = ACTIONS(892),
    [anon_sym_DOT] = ACTIONS(2274),
    [anon_sym_LBRACK] = ACTIONS(2274),
    [anon_sym_COLON_COLON] = ACTIONS(2274),
    [sym_comment] = ACTIONS(54),
  },
  [1110] = {
    [anon_sym_RPAREN] = ACTIONS(2276),
    [sym_comment] = ACTIONS(54),
  },
  [1111] = {
    [anon_sym_RBRACE] = ACTIONS(2278),
    [sym_comment] = ACTIONS(54),
  },
  [1112] = {
    [anon_sym_COMMA] = ACTIONS(2280),
    [anon_sym_RBRACE] = ACTIONS(2280),
    [anon_sym_DOT] = ACTIONS(2280),
    [anon_sym_COLON_COLON] = ACTIONS(2280),
    [sym_comment] = ACTIONS(54),
  },
  [1113] = {
    [anon_sym_GT] = ACTIONS(1874),
    [anon_sym_LT] = ACTIONS(1874),
    [anon_sym_EQ_EQ] = ACTIONS(1876),
    [anon_sym_GT_EQ] = ACTIONS(1876),
    [anon_sym_LT_EQ] = ACTIONS(1876),
    [anon_sym_BANG_EQ] = ACTIONS(1876),
    [anon_sym_AMP_AMP] = ACTIONS(2244),
    [anon_sym_PIPE_PIPE] = ACTIONS(2282),
    [anon_sym_PLUS] = ACTIONS(2242),
    [anon_sym_DASH] = ACTIONS(2242),
    [anon_sym_STAR] = ACTIONS(2238),
    [anon_sym_SLASH] = ACTIONS(2240),
    [anon_sym_AMP] = ACTIONS(1878),
    [anon_sym_PIPE] = ACTIONS(2284),
    [anon_sym_CARET] = ACTIONS(2282),
    [anon_sym_PERCENT] = ACTIONS(2238),
    [anon_sym_LT_LT] = ACTIONS(2238),
    [anon_sym_GT_GT] = ACTIONS(2240),
    [anon_sym_GT_GT_GT] = ACTIONS(2238),
    [anon_sym_COMMA] = ACTIONS(2286),
    [anon_sym_QMARK] = ACTIONS(2288),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(2286),
    [sym_comment] = ACTIONS(54),
  },
  [1114] = {
    [aux_sym_array_initializer_repeat1] = STATE(1174),
    [anon_sym_COMMA] = ACTIONS(2290),
    [anon_sym_RBRACE] = ACTIONS(2278),
    [sym_comment] = ACTIONS(54),
  },
  [1115] = {
    [anon_sym_COMMA] = ACTIONS(2286),
    [anon_sym_RBRACE] = ACTIONS(2286),
    [sym_comment] = ACTIONS(54),
  },
  [1116] = {
    [anon_sym_DOT] = ACTIONS(2274),
    [anon_sym_LBRACK] = ACTIONS(2274),
    [anon_sym_COLON_COLON] = ACTIONS(2274),
    [sym_comment] = ACTIONS(54),
  },
  [1117] = {
    [anon_sym_LPAREN] = ACTIONS(2292),
    [sym_comment] = ACTIONS(54),
  },
  [1118] = {
    [sym__semicolon] = ACTIONS(2294),
    [sym_comment] = ACTIONS(54),
  },
  [1119] = {
    [anon_sym_GT] = ACTIONS(564),
    [anon_sym_LT] = ACTIONS(564),
    [anon_sym_EQ_EQ] = ACTIONS(562),
    [anon_sym_GT_EQ] = ACTIONS(562),
    [anon_sym_LT_EQ] = ACTIONS(562),
    [anon_sym_BANG_EQ] = ACTIONS(562),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(564),
    [anon_sym_DASH] = ACTIONS(564),
    [anon_sym_STAR] = ACTIONS(2002),
    [anon_sym_SLASH] = ACTIONS(2004),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(2002),
    [anon_sym_LT_LT] = ACTIONS(2002),
    [anon_sym_GT_GT] = ACTIONS(2004),
    [anon_sym_GT_GT_GT] = ACTIONS(2002),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(562),
    [sym_comment] = ACTIONS(54),
  },
  [1120] = {
    [anon_sym_GT] = ACTIONS(1992),
    [anon_sym_LT] = ACTIONS(1992),
    [anon_sym_EQ_EQ] = ACTIONS(1994),
    [anon_sym_GT_EQ] = ACTIONS(1994),
    [anon_sym_LT_EQ] = ACTIONS(1994),
    [anon_sym_BANG_EQ] = ACTIONS(1994),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(2000),
    [anon_sym_DASH] = ACTIONS(2000),
    [anon_sym_STAR] = ACTIONS(2002),
    [anon_sym_SLASH] = ACTIONS(2004),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(2002),
    [anon_sym_LT_LT] = ACTIONS(2002),
    [anon_sym_GT_GT] = ACTIONS(2004),
    [anon_sym_GT_GT_GT] = ACTIONS(2002),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(562),
    [sym_comment] = ACTIONS(54),
  },
  [1121] = {
    [anon_sym_GT] = ACTIONS(1992),
    [anon_sym_LT] = ACTIONS(1992),
    [anon_sym_EQ_EQ] = ACTIONS(1994),
    [anon_sym_GT_EQ] = ACTIONS(1994),
    [anon_sym_LT_EQ] = ACTIONS(1994),
    [anon_sym_BANG_EQ] = ACTIONS(1994),
    [anon_sym_AMP_AMP] = ACTIONS(1996),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(2000),
    [anon_sym_DASH] = ACTIONS(2000),
    [anon_sym_STAR] = ACTIONS(2002),
    [anon_sym_SLASH] = ACTIONS(2004),
    [anon_sym_AMP] = ACTIONS(2006),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(2002),
    [anon_sym_LT_LT] = ACTIONS(2002),
    [anon_sym_GT_GT] = ACTIONS(2004),
    [anon_sym_GT_GT_GT] = ACTIONS(2002),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(562),
    [sym_comment] = ACTIONS(54),
  },
  [1122] = {
    [anon_sym_GT] = ACTIONS(1992),
    [anon_sym_LT] = ACTIONS(1992),
    [anon_sym_EQ_EQ] = ACTIONS(1994),
    [anon_sym_GT_EQ] = ACTIONS(1994),
    [anon_sym_LT_EQ] = ACTIONS(1994),
    [anon_sym_BANG_EQ] = ACTIONS(1994),
    [anon_sym_AMP_AMP] = ACTIONS(562),
    [anon_sym_PIPE_PIPE] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(564),
    [anon_sym_DASH] = ACTIONS(564),
    [anon_sym_STAR] = ACTIONS(2002),
    [anon_sym_SLASH] = ACTIONS(2004),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(2002),
    [anon_sym_LT_LT] = ACTIONS(2002),
    [anon_sym_GT_GT] = ACTIONS(2004),
    [anon_sym_GT_GT_GT] = ACTIONS(2002),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(562),
    [sym_comment] = ACTIONS(54),
  },
  [1123] = {
    [anon_sym_GT] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(566),
    [anon_sym_EQ_EQ] = ACTIONS(568),
    [anon_sym_GT_EQ] = ACTIONS(568),
    [anon_sym_LT_EQ] = ACTIONS(568),
    [anon_sym_BANG_EQ] = ACTIONS(568),
    [anon_sym_AMP_AMP] = ACTIONS(570),
    [anon_sym_PIPE_PIPE] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_SLASH] = ACTIONS(578),
    [anon_sym_AMP] = ACTIONS(580),
    [anon_sym_PIPE] = ACTIONS(582),
    [anon_sym_CARET] = ACTIONS(572),
    [anon_sym_PERCENT] = ACTIONS(576),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(578),
    [anon_sym_GT_GT_GT] = ACTIONS(576),
    [anon_sym_QMARK] = ACTIONS(584),
    [anon_sym_COLON] = ACTIONS(2296),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [1124] = {
    [anon_sym_DOT] = ACTIONS(2298),
    [anon_sym_LBRACK] = ACTIONS(2298),
    [anon_sym_AT] = ACTIONS(2298),
    [anon_sym_COLON_COLON] = ACTIONS(2298),
    [sym_comment] = ACTIONS(54),
  },
  [1125] = {
    [anon_sym_LPAREN] = ACTIONS(2300),
    [anon_sym_DOT] = ACTIONS(2302),
    [anon_sym_LBRACK] = ACTIONS(2302),
    [anon_sym_COLON_COLON] = ACTIONS(2302),
    [sym_comment] = ACTIONS(54),
  },
  [1126] = {
    [sym_identifier] = ACTIONS(2304),
    [sym_comment] = ACTIONS(54),
  },
  [1127] = {
    [anon_sym_DOT] = ACTIONS(2306),
    [anon_sym_LBRACK] = ACTIONS(2306),
    [anon_sym_COLON_COLON] = ACTIONS(2306),
    [sym_comment] = ACTIONS(54),
  },
  [1128] = {
    [sym_identifier] = ACTIONS(2308),
    [sym_comment] = ACTIONS(54),
  },
  [1129] = {
    [anon_sym_DOT] = ACTIONS(2310),
    [anon_sym_LBRACK] = ACTIONS(2310),
    [anon_sym_COLON_COLON] = ACTIONS(2310),
    [sym_comment] = ACTIONS(54),
  },
  [1130] = {
    [anon_sym_RPAREN] = ACTIONS(2312),
    [sym_comment] = ACTIONS(54),
  },
  [1131] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(1181),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2312),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1132] = {
    [anon_sym_super] = ACTIONS(1818),
    [sym_identifier] = ACTIONS(2314),
    [sym_comment] = ACTIONS(54),
  },
  [1133] = {
    [anon_sym_GT] = ACTIONS(2316),
    [anon_sym_COMMA] = ACTIONS(1598),
    [sym_comment] = ACTIONS(54),
  },
  [1134] = {
    [anon_sym_RPAREN] = ACTIONS(2318),
    [sym_comment] = ACTIONS(54),
  },
  [1135] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(1184),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2318),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1136] = {
    [sym__semicolon] = ACTIONS(1834),
    [anon_sym_LT] = ACTIONS(1834),
    [anon_sym_LBRACE] = ACTIONS(1834),
    [anon_sym_RBRACE] = ACTIONS(1834),
    [anon_sym_AT] = ACTIONS(1834),
    [anon_sym_static] = ACTIONS(1836),
    [anon_sym_class] = ACTIONS(1836),
    [anon_sym_public] = ACTIONS(1836),
    [anon_sym_protected] = ACTIONS(1836),
    [anon_sym_private] = ACTIONS(1836),
    [anon_sym_abstract] = ACTIONS(1836),
    [anon_sym_final] = ACTIONS(1836),
    [anon_sym_strictfp] = ACTIONS(1836),
    [anon_sym_default] = ACTIONS(1836),
    [anon_sym_synchronized] = ACTIONS(1836),
    [anon_sym_native] = ACTIONS(1836),
    [anon_sym_void] = ACTIONS(1836),
    [anon_sym_interface] = ACTIONS(1836),
    [sym_identifier] = ACTIONS(1838),
    [sym_comment] = ACTIONS(54),
  },
  [1137] = {
    [sym__statement] = STATE(1186),
    [sym__literal] = STATE(757),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(758),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym__annotation] = STATE(28),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym__declaration] = STATE(760),
    [sym_module_declaration] = STATE(761),
    [sym_package_declaration] = STATE(761),
    [sym_import_statement] = STATE(761),
    [sym_single_type_import_declaration] = STATE(762),
    [sym_type_import_on_declaraction] = STATE(762),
    [sym_single_static_import_declaration] = STATE(762),
    [sym_static_import_on_demand_declaration] = STATE(762),
    [sym_class_declaration] = STATE(761),
    [sym_normal_class_declaration] = STATE(188),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(761),
    [sym_annotation_type_declaration] = STATE(763),
    [sym_normal_interface_declaration] = STATE(763),
    [sym_method_header] = STATE(764),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(761),
    [aux_sym_class_or_interface_type_repeat1] = STATE(766),
    [aux_sym_normal_class_declaration_repeat1] = STATE(767),
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
    [anon_sym_LBRACE] = ACTIONS(2320),
    [anon_sym_AT] = ACTIONS(1550),
    [anon_sym_open] = ACTIONS(1552),
    [anon_sym_module] = ACTIONS(1554),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_package] = ACTIONS(1556),
    [anon_sym_import] = ACTIONS(1558),
    [anon_sym_class] = ACTIONS(1120),
    [anon_sym_public] = ACTIONS(40),
    [anon_sym_protected] = ACTIONS(40),
    [anon_sym_private] = ACTIONS(40),
    [anon_sym_abstract] = ACTIONS(40),
    [anon_sym_final] = ACTIONS(40),
    [anon_sym_strictfp] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_synchronized] = ACTIONS(40),
    [anon_sym_native] = ACTIONS(40),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(1560),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(54),
  },
  [1138] = {
    [anon_sym_if] = ACTIONS(2322),
    [anon_sym_RBRACE] = ACTIONS(2322),
    [anon_sym_AT] = ACTIONS(2322),
    [anon_sym_static] = ACTIONS(2322),
    [anon_sym_class] = ACTIONS(2322),
    [anon_sym_public] = ACTIONS(2322),
    [anon_sym_protected] = ACTIONS(2322),
    [anon_sym_private] = ACTIONS(2322),
    [anon_sym_abstract] = ACTIONS(2322),
    [anon_sym_final] = ACTIONS(2322),
    [anon_sym_strictfp] = ACTIONS(2322),
    [anon_sym_default] = ACTIONS(2322),
    [anon_sym_synchronized] = ACTIONS(2322),
    [anon_sym_native] = ACTIONS(2322),
    [sym_comment] = ACTIONS(54),
  },
  [1139] = {
    [sym__annotation] = STATE(356),
    [sym_normal_annotation] = STATE(360),
    [sym_marker_annotation] = STATE(360),
    [sym_single_element_annotation] = STATE(360),
    [sym_class_declaration] = STATE(361),
    [sym_normal_class_declaration] = STATE(362),
    [sym_modifier] = STATE(363),
    [sym_interface_declaration] = STATE(361),
    [sym_annotation_type_declaration] = STATE(364),
    [sym_annotation_type_member_declaration] = STATE(365),
    [sym_annotation_type_element_declaration] = STATE(361),
    [sym_normal_interface_declaration] = STATE(364),
    [sym_constant_declaration] = STATE(361),
    [sym_variable_declarator_list] = STATE(366),
    [sym_variable_declarator] = STATE(282),
    [sym_variable_declarator_id] = STATE(126),
    [aux_sym_normal_class_declaration_repeat1] = STATE(367),
    [aux_sym_annotation_type_body_repeat1] = STATE(1188),
    [anon_sym_RBRACE] = ACTIONS(2324),
    [anon_sym_AT] = ACTIONS(714),
    [anon_sym_static] = ACTIONS(716),
    [anon_sym_class] = ACTIONS(718),
    [anon_sym_public] = ACTIONS(716),
    [anon_sym_protected] = ACTIONS(716),
    [anon_sym_private] = ACTIONS(716),
    [anon_sym_abstract] = ACTIONS(716),
    [anon_sym_final] = ACTIONS(716),
    [anon_sym_strictfp] = ACTIONS(716),
    [anon_sym_default] = ACTIONS(716),
    [anon_sym_synchronized] = ACTIONS(716),
    [anon_sym_native] = ACTIONS(716),
    [anon_sym_interface] = ACTIONS(720),
    [sym_identifier] = ACTIONS(722),
    [sym_comment] = ACTIONS(54),
  },
  [1140] = {
    [anon_sym_if] = ACTIONS(724),
    [anon_sym_RBRACE] = ACTIONS(724),
    [anon_sym_elseif] = ACTIONS(724),
    [anon_sym_AT] = ACTIONS(724),
    [anon_sym_static] = ACTIONS(724),
    [anon_sym_class] = ACTIONS(724),
    [anon_sym_public] = ACTIONS(724),
    [anon_sym_protected] = ACTIONS(724),
    [anon_sym_private] = ACTIONS(724),
    [anon_sym_abstract] = ACTIONS(724),
    [anon_sym_final] = ACTIONS(724),
    [anon_sym_strictfp] = ACTIONS(724),
    [anon_sym_default] = ACTIONS(724),
    [anon_sym_synchronized] = ACTIONS(724),
    [anon_sym_native] = ACTIONS(724),
    [sym_comment] = ACTIONS(54),
  },
  [1141] = {
    [sym_module_directive] = STATE(247),
    [aux_sym_module_declaration_repeat1] = STATE(1190),
    [anon_sym_RBRACE] = ACTIONS(2326),
    [anon_sym_requires] = ACTIONS(500),
    [anon_sym_exports] = ACTIONS(502),
    [anon_sym_opens] = ACTIONS(502),
    [anon_sym_uses] = ACTIONS(504),
    [anon_sym_provides] = ACTIONS(506),
    [sym_comment] = ACTIONS(54),
  },
  [1142] = {
    [anon_sym_if] = ACTIONS(754),
    [anon_sym_RBRACE] = ACTIONS(754),
    [anon_sym_elseif] = ACTIONS(754),
    [anon_sym_AT] = ACTIONS(754),
    [anon_sym_static] = ACTIONS(754),
    [anon_sym_class] = ACTIONS(754),
    [anon_sym_public] = ACTIONS(754),
    [anon_sym_protected] = ACTIONS(754),
    [anon_sym_private] = ACTIONS(754),
    [anon_sym_abstract] = ACTIONS(754),
    [anon_sym_final] = ACTIONS(754),
    [anon_sym_strictfp] = ACTIONS(754),
    [anon_sym_default] = ACTIONS(754),
    [anon_sym_synchronized] = ACTIONS(754),
    [anon_sym_native] = ACTIONS(754),
    [sym_comment] = ACTIONS(54),
  },
  [1143] = {
    [sym_module_directive] = STATE(386),
    [anon_sym_RBRACE] = ACTIONS(2326),
    [anon_sym_requires] = ACTIONS(500),
    [anon_sym_exports] = ACTIONS(502),
    [anon_sym_opens] = ACTIONS(502),
    [anon_sym_uses] = ACTIONS(504),
    [anon_sym_provides] = ACTIONS(506),
    [sym_comment] = ACTIONS(54),
  },
  [1144] = {
    [anon_sym_if] = ACTIONS(768),
    [anon_sym_RBRACE] = ACTIONS(768),
    [anon_sym_elseif] = ACTIONS(768),
    [anon_sym_AT] = ACTIONS(768),
    [anon_sym_static] = ACTIONS(768),
    [anon_sym_class] = ACTIONS(768),
    [anon_sym_public] = ACTIONS(768),
    [anon_sym_protected] = ACTIONS(768),
    [anon_sym_private] = ACTIONS(768),
    [anon_sym_abstract] = ACTIONS(768),
    [anon_sym_final] = ACTIONS(768),
    [anon_sym_strictfp] = ACTIONS(768),
    [anon_sym_default] = ACTIONS(768),
    [anon_sym_synchronized] = ACTIONS(768),
    [anon_sym_native] = ACTIONS(768),
    [sym_comment] = ACTIONS(54),
  },
  [1145] = {
    [anon_sym_STAR] = ACTIONS(2328),
    [sym_identifier] = ACTIONS(2330),
    [sym_comment] = ACTIONS(54),
  },
  [1146] = {
    [sym__semicolon] = ACTIONS(2332),
    [sym_comment] = ACTIONS(54),
  },
  [1147] = {
    [anon_sym_if] = ACTIONS(850),
    [anon_sym_RBRACE] = ACTIONS(850),
    [anon_sym_elseif] = ACTIONS(850),
    [anon_sym_AT] = ACTIONS(850),
    [anon_sym_static] = ACTIONS(850),
    [anon_sym_class] = ACTIONS(850),
    [anon_sym_public] = ACTIONS(850),
    [anon_sym_protected] = ACTIONS(850),
    [anon_sym_private] = ACTIONS(850),
    [anon_sym_abstract] = ACTIONS(850),
    [anon_sym_final] = ACTIONS(850),
    [anon_sym_strictfp] = ACTIONS(850),
    [anon_sym_default] = ACTIONS(850),
    [anon_sym_synchronized] = ACTIONS(850),
    [anon_sym_native] = ACTIONS(850),
    [sym_comment] = ACTIONS(54),
  },
  [1148] = {
    [sym__annotation] = STATE(257),
    [sym_normal_annotation] = STATE(261),
    [sym_marker_annotation] = STATE(261),
    [sym_single_element_annotation] = STATE(261),
    [sym_class_declaration] = STATE(278),
    [sym_normal_class_declaration] = STATE(262),
    [sym_modifier] = STATE(263),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(278),
    [sym_annotation_type_declaration] = STATE(268),
    [sym_normal_interface_declaration] = STATE(268),
    [sym_interface_member_declaration] = STATE(422),
    [sym_constant_declaration] = STATE(278),
    [sym_variable_declarator_list] = STATE(281),
    [sym_variable_declarator] = STATE(282),
    [sym_variable_declarator_id] = STATE(126),
    [sym_method_header] = STATE(269),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(278),
    [aux_sym_normal_class_declaration_repeat1] = STATE(283),
    [sym__semicolon] = ACTIONS(550),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_RBRACE] = ACTIONS(2334),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_static] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(538),
    [anon_sym_public] = ACTIONS(536),
    [anon_sym_protected] = ACTIONS(536),
    [anon_sym_private] = ACTIONS(536),
    [anon_sym_abstract] = ACTIONS(536),
    [anon_sym_final] = ACTIONS(536),
    [anon_sym_strictfp] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_synchronized] = ACTIONS(536),
    [anon_sym_native] = ACTIONS(536),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(540),
    [sym_identifier] = ACTIONS(554),
    [sym_comment] = ACTIONS(54),
  },
  [1149] = {
    [sym_interface_body] = STATE(1195),
    [anon_sym_LBRACE] = ACTIONS(2064),
    [sym_comment] = ACTIONS(54),
  },
  [1150] = {
    [anon_sym_if] = ACTIONS(872),
    [anon_sym_RBRACE] = ACTIONS(872),
    [anon_sym_elseif] = ACTIONS(872),
    [anon_sym_AT] = ACTIONS(872),
    [anon_sym_static] = ACTIONS(872),
    [anon_sym_class] = ACTIONS(872),
    [anon_sym_public] = ACTIONS(872),
    [anon_sym_protected] = ACTIONS(872),
    [anon_sym_private] = ACTIONS(872),
    [anon_sym_abstract] = ACTIONS(872),
    [anon_sym_final] = ACTIONS(872),
    [anon_sym_strictfp] = ACTIONS(872),
    [anon_sym_default] = ACTIONS(872),
    [anon_sym_synchronized] = ACTIONS(872),
    [anon_sym_native] = ACTIONS(872),
    [sym_comment] = ACTIONS(54),
  },
  [1151] = {
    [anon_sym_if] = ACTIONS(896),
    [anon_sym_RBRACE] = ACTIONS(896),
    [anon_sym_elseif] = ACTIONS(896),
    [anon_sym_AT] = ACTIONS(896),
    [anon_sym_static] = ACTIONS(896),
    [anon_sym_class] = ACTIONS(896),
    [anon_sym_public] = ACTIONS(896),
    [anon_sym_protected] = ACTIONS(896),
    [anon_sym_private] = ACTIONS(896),
    [anon_sym_abstract] = ACTIONS(896),
    [anon_sym_final] = ACTIONS(896),
    [anon_sym_strictfp] = ACTIONS(896),
    [anon_sym_default] = ACTIONS(896),
    [anon_sym_synchronized] = ACTIONS(896),
    [anon_sym_native] = ACTIONS(896),
    [sym_comment] = ACTIONS(54),
  },
  [1152] = {
    [anon_sym_LBRACE] = ACTIONS(2336),
    [sym_comment] = ACTIONS(54),
  },
  [1153] = {
    [sym__semicolon] = ACTIONS(2338),
    [anon_sym_DOT] = ACTIONS(496),
    [sym_comment] = ACTIONS(54),
  },
  [1154] = {
    [sym_annotation_type_body] = STATE(1198),
    [anon_sym_LBRACE] = ACTIONS(2210),
    [sym_comment] = ACTIONS(54),
  },
  [1155] = {
    [sym_extends_interfaces] = STATE(1199),
    [sym_interface_body] = STATE(1195),
    [anon_sym_LBRACE] = ACTIONS(2064),
    [anon_sym_extends] = ACTIONS(348),
    [sym_comment] = ACTIONS(54),
  },
  [1156] = {
    [sym__semicolon] = ACTIONS(1884),
    [anon_sym_AMP_AMP] = ACTIONS(2098),
    [anon_sym_PIPE_PIPE] = ACTIONS(1884),
    [anon_sym_QMARK] = ACTIONS(1884),
    [sym_comment] = ACTIONS(54),
  },
  [1157] = {
    [anon_sym_GT] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(566),
    [anon_sym_EQ_EQ] = ACTIONS(568),
    [anon_sym_GT_EQ] = ACTIONS(568),
    [anon_sym_LT_EQ] = ACTIONS(568),
    [anon_sym_BANG_EQ] = ACTIONS(568),
    [anon_sym_AMP_AMP] = ACTIONS(570),
    [anon_sym_PIPE_PIPE] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_SLASH] = ACTIONS(578),
    [anon_sym_AMP] = ACTIONS(580),
    [anon_sym_PIPE] = ACTIONS(582),
    [anon_sym_CARET] = ACTIONS(572),
    [anon_sym_PERCENT] = ACTIONS(576),
    [anon_sym_LT_LT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(578),
    [anon_sym_GT_GT_GT] = ACTIONS(576),
    [anon_sym_QMARK] = ACTIONS(584),
    [anon_sym_COLON] = ACTIONS(2340),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [1158] = {
    [sym__semicolon] = ACTIONS(1888),
    [anon_sym_AMP_AMP] = ACTIONS(1888),
    [anon_sym_PIPE_PIPE] = ACTIONS(1888),
    [anon_sym_PIPE] = ACTIONS(2100),
    [anon_sym_QMARK] = ACTIONS(1888),
    [sym_comment] = ACTIONS(54),
  },
  [1159] = {
    [sym__semicolon] = ACTIONS(1890),
    [anon_sym_AMP_AMP] = ACTIONS(1890),
    [anon_sym_PIPE_PIPE] = ACTIONS(1890),
    [anon_sym_PIPE] = ACTIONS(1892),
    [anon_sym_CARET] = ACTIONS(2102),
    [anon_sym_QMARK] = ACTIONS(1890),
    [sym_comment] = ACTIONS(54),
  },
  [1160] = {
    [sym__semicolon] = ACTIONS(1900),
    [anon_sym_LT] = ACTIONS(1898),
    [anon_sym_EQ_EQ] = ACTIONS(1900),
    [anon_sym_BANG_EQ] = ACTIONS(1900),
    [anon_sym_AMP_AMP] = ACTIONS(1900),
    [anon_sym_PIPE_PIPE] = ACTIONS(1900),
    [anon_sym_PIPE] = ACTIONS(1898),
    [anon_sym_CARET] = ACTIONS(1900),
    [anon_sym_LT_LT] = ACTIONS(2108),
    [anon_sym_GT_GT] = ACTIONS(2110),
    [anon_sym_GT_GT_GT] = ACTIONS(2108),
    [anon_sym_QMARK] = ACTIONS(1900),
    [sym_comment] = ACTIONS(54),
  },
  [1161] = {
    [sym__semicolon] = ACTIONS(1904),
    [anon_sym_LT] = ACTIONS(2104),
    [anon_sym_EQ_EQ] = ACTIONS(1902),
    [anon_sym_BANG_EQ] = ACTIONS(1902),
    [anon_sym_AMP_AMP] = ACTIONS(1904),
    [anon_sym_PIPE_PIPE] = ACTIONS(1904),
    [anon_sym_PIPE] = ACTIONS(1906),
    [anon_sym_CARET] = ACTIONS(1904),
    [anon_sym_QMARK] = ACTIONS(1904),
    [sym_comment] = ACTIONS(54),
  },
  [1162] = {
    [sym__semicolon] = ACTIONS(1910),
    [anon_sym_LT] = ACTIONS(1908),
    [anon_sym_EQ_EQ] = ACTIONS(1910),
    [anon_sym_BANG_EQ] = ACTIONS(1910),
    [anon_sym_AMP_AMP] = ACTIONS(1910),
    [anon_sym_PIPE_PIPE] = ACTIONS(1910),
    [anon_sym_PLUS] = ACTIONS(2112),
    [anon_sym_DASH] = ACTIONS(2112),
    [anon_sym_PIPE] = ACTIONS(1908),
    [anon_sym_CARET] = ACTIONS(1910),
    [anon_sym_LT_LT] = ACTIONS(1910),
    [anon_sym_GT_GT] = ACTIONS(1908),
    [anon_sym_GT_GT_GT] = ACTIONS(1910),
    [anon_sym_QMARK] = ACTIONS(1910),
    [sym_comment] = ACTIONS(54),
  },
  [1163] = {
    [sym__semicolon] = ACTIONS(1914),
    [anon_sym_LT] = ACTIONS(1912),
    [anon_sym_EQ_EQ] = ACTIONS(1914),
    [anon_sym_BANG_EQ] = ACTIONS(1914),
    [anon_sym_AMP_AMP] = ACTIONS(1914),
    [anon_sym_PIPE_PIPE] = ACTIONS(1914),
    [anon_sym_PLUS] = ACTIONS(1914),
    [anon_sym_DASH] = ACTIONS(1914),
    [anon_sym_STAR] = ACTIONS(2114),
    [anon_sym_SLASH] = ACTIONS(2116),
    [anon_sym_PIPE] = ACTIONS(1912),
    [anon_sym_CARET] = ACTIONS(1914),
    [anon_sym_PERCENT] = ACTIONS(2114),
    [anon_sym_LT_LT] = ACTIONS(1914),
    [anon_sym_GT_GT] = ACTIONS(1912),
    [anon_sym_GT_GT_GT] = ACTIONS(1914),
    [anon_sym_QMARK] = ACTIONS(1914),
    [sym_comment] = ACTIONS(54),
  },
  [1164] = {
    [anon_sym_RBRACE] = ACTIONS(1834),
    [anon_sym_AT] = ACTIONS(1834),
    [anon_sym_static] = ACTIONS(1836),
    [anon_sym_class] = ACTIONS(1836),
    [anon_sym_public] = ACTIONS(1836),
    [anon_sym_protected] = ACTIONS(1836),
    [anon_sym_private] = ACTIONS(1836),
    [anon_sym_abstract] = ACTIONS(1836),
    [anon_sym_final] = ACTIONS(1836),
    [anon_sym_strictfp] = ACTIONS(1836),
    [anon_sym_default] = ACTIONS(1836),
    [anon_sym_synchronized] = ACTIONS(1836),
    [anon_sym_native] = ACTIONS(1836),
    [anon_sym_interface] = ACTIONS(1836),
    [sym_identifier] = ACTIONS(1838),
    [sym_comment] = ACTIONS(54),
  },
  [1165] = {
    [anon_sym_RBRACE] = ACTIONS(2342),
    [anon_sym_AT] = ACTIONS(2342),
    [anon_sym_static] = ACTIONS(2344),
    [anon_sym_class] = ACTIONS(2344),
    [anon_sym_public] = ACTIONS(2344),
    [anon_sym_protected] = ACTIONS(2344),
    [anon_sym_private] = ACTIONS(2344),
    [anon_sym_abstract] = ACTIONS(2344),
    [anon_sym_final] = ACTIONS(2344),
    [anon_sym_strictfp] = ACTIONS(2344),
    [anon_sym_default] = ACTIONS(2344),
    [anon_sym_synchronized] = ACTIONS(2344),
    [anon_sym_native] = ACTIONS(2344),
    [anon_sym_interface] = ACTIONS(2344),
    [sym_identifier] = ACTIONS(2346),
    [sym_comment] = ACTIONS(54),
  },
  [1166] = {
    [anon_sym_GT] = ACTIONS(1632),
    [anon_sym_LT] = ACTIONS(1632),
    [anon_sym_EQ_EQ] = ACTIONS(1634),
    [anon_sym_GT_EQ] = ACTIONS(1634),
    [anon_sym_LT_EQ] = ACTIONS(1634),
    [anon_sym_BANG_EQ] = ACTIONS(1634),
    [anon_sym_AMP_AMP] = ACTIONS(1946),
    [anon_sym_PIPE_PIPE] = ACTIONS(1948),
    [anon_sym_PLUS] = ACTIONS(1950),
    [anon_sym_DASH] = ACTIONS(1950),
    [anon_sym_STAR] = ACTIONS(1952),
    [anon_sym_SLASH] = ACTIONS(1954),
    [anon_sym_AMP] = ACTIONS(1636),
    [anon_sym_PIPE] = ACTIONS(1956),
    [anon_sym_CARET] = ACTIONS(1948),
    [anon_sym_PERCENT] = ACTIONS(1952),
    [anon_sym_LT_LT] = ACTIONS(1952),
    [anon_sym_GT_GT] = ACTIONS(1954),
    [anon_sym_GT_GT_GT] = ACTIONS(1952),
    [anon_sym_RPAREN] = ACTIONS(1200),
    [anon_sym_COMMA] = ACTIONS(1200),
    [anon_sym_QMARK] = ACTIONS(1962),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [1167] = {
    [sym__expression] = STATE(1201),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1640),
    [anon_sym_TILDE] = ACTIONS(1640),
    [anon_sym_PLUS_PLUS] = ACTIONS(1642),
    [anon_sym_DASH_DASH] = ACTIONS(1642),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1168] = {
    [anon_sym_GT] = ACTIONS(1632),
    [anon_sym_LT] = ACTIONS(1632),
    [anon_sym_EQ_EQ] = ACTIONS(1634),
    [anon_sym_GT_EQ] = ACTIONS(1634),
    [anon_sym_LT_EQ] = ACTIONS(1634),
    [anon_sym_BANG_EQ] = ACTIONS(1634),
    [anon_sym_AMP_AMP] = ACTIONS(1946),
    [anon_sym_PIPE_PIPE] = ACTIONS(1948),
    [anon_sym_PLUS] = ACTIONS(1950),
    [anon_sym_DASH] = ACTIONS(1950),
    [anon_sym_STAR] = ACTIONS(1952),
    [anon_sym_SLASH] = ACTIONS(1954),
    [anon_sym_AMP] = ACTIONS(1636),
    [anon_sym_PIPE] = ACTIONS(1956),
    [anon_sym_CARET] = ACTIONS(1948),
    [anon_sym_PERCENT] = ACTIONS(1952),
    [anon_sym_LT_LT] = ACTIONS(1952),
    [anon_sym_GT_GT] = ACTIONS(1954),
    [anon_sym_GT_GT_GT] = ACTIONS(1952),
    [anon_sym_RPAREN] = ACTIONS(2348),
    [anon_sym_COMMA] = ACTIONS(2348),
    [anon_sym_QMARK] = ACTIONS(1962),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(54),
  },
  [1169] = {
    [anon_sym_LT] = ACTIONS(2350),
    [anon_sym_LPAREN] = ACTIONS(2352),
    [anon_sym_DOT] = ACTIONS(2352),
    [anon_sym_LT_GT] = ACTIONS(2352),
    [sym_comment] = ACTIONS(54),
  },
  [1170] = {
    [anon_sym_DOT] = ACTIONS(2354),
    [anon_sym_LBRACK] = ACTIONS(2354),
    [anon_sym_COLON_COLON] = ACTIONS(2354),
    [sym_comment] = ACTIONS(54),
  },
  [1171] = {
    [sym_class_body] = STATE(1202),
    [anon_sym_LBRACE] = ACTIONS(892),
    [anon_sym_DOT] = ACTIONS(2354),
    [anon_sym_LBRACK] = ACTIONS(2354),
    [anon_sym_COLON_COLON] = ACTIONS(2354),
    [sym_comment] = ACTIONS(54),
  },
  [1172] = {
    [anon_sym_COMMA] = ACTIONS(2356),
    [anon_sym_RBRACE] = ACTIONS(2356),
    [anon_sym_DOT] = ACTIONS(2356),
    [anon_sym_COLON_COLON] = ACTIONS(2356),
    [sym_comment] = ACTIONS(54),
  },
  [1173] = {
    [sym__expression] = STATE(1113),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_variable_initializer] = STATE(1204),
    [sym_array_initializer] = STATE(1115),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1640),
    [anon_sym_TILDE] = ACTIONS(1640),
    [anon_sym_PLUS_PLUS] = ACTIONS(1642),
    [anon_sym_DASH_DASH] = ACTIONS(1642),
    [anon_sym_LBRACE] = ACTIONS(1986),
    [anon_sym_RBRACE] = ACTIONS(2358),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1174] = {
    [anon_sym_COMMA] = ACTIONS(2360),
    [anon_sym_RBRACE] = ACTIONS(2358),
    [sym_comment] = ACTIONS(54),
  },
  [1175] = {
    [anon_sym_if] = ACTIONS(2362),
    [anon_sym_RBRACE] = ACTIONS(2362),
    [anon_sym_AT] = ACTIONS(2362),
    [anon_sym_static] = ACTIONS(2362),
    [anon_sym_class] = ACTIONS(2362),
    [anon_sym_public] = ACTIONS(2362),
    [anon_sym_protected] = ACTIONS(2362),
    [anon_sym_private] = ACTIONS(2362),
    [anon_sym_abstract] = ACTIONS(2362),
    [anon_sym_final] = ACTIONS(2362),
    [anon_sym_strictfp] = ACTIONS(2362),
    [anon_sym_default] = ACTIONS(2362),
    [anon_sym_synchronized] = ACTIONS(2362),
    [anon_sym_native] = ACTIONS(2362),
    [sym_comment] = ACTIONS(54),
  },
  [1176] = {
    [sym__expression] = STATE(1206),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1730),
    [anon_sym_TILDE] = ACTIONS(1730),
    [anon_sym_PLUS_PLUS] = ACTIONS(1732),
    [anon_sym_DASH_DASH] = ACTIONS(1732),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1177] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(1208),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2364),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1178] = {
    [anon_sym_LPAREN] = ACTIONS(2366),
    [sym_comment] = ACTIONS(54),
  },
  [1179] = {
    [anon_sym_DOT] = ACTIONS(2368),
    [anon_sym_LBRACK] = ACTIONS(2368),
    [anon_sym_COLON_COLON] = ACTIONS(2368),
    [sym_comment] = ACTIONS(54),
  },
  [1180] = {
    [anon_sym_DOT] = ACTIONS(2370),
    [anon_sym_LBRACK] = ACTIONS(2370),
    [anon_sym_COLON_COLON] = ACTIONS(2370),
    [sym_comment] = ACTIONS(54),
  },
  [1181] = {
    [anon_sym_RPAREN] = ACTIONS(2364),
    [sym_comment] = ACTIONS(54),
  },
  [1182] = {
    [anon_sym_super] = ACTIONS(2078),
    [sym_identifier] = ACTIONS(2372),
    [sym_comment] = ACTIONS(54),
  },
  [1183] = {
    [sym__semicolon] = ACTIONS(2374),
    [sym_comment] = ACTIONS(54),
  },
  [1184] = {
    [anon_sym_RPAREN] = ACTIONS(2376),
    [sym_comment] = ACTIONS(54),
  },
  [1185] = {
    [sym__statement] = STATE(1212),
    [sym__literal] = STATE(23),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(24),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym__annotation] = STATE(28),
    [sym_normal_annotation] = STATE(29),
    [sym_marker_annotation] = STATE(29),
    [sym_single_element_annotation] = STATE(29),
    [sym__declaration] = STATE(30),
    [sym_module_declaration] = STATE(31),
    [sym_package_declaration] = STATE(31),
    [sym_import_statement] = STATE(31),
    [sym_single_type_import_declaration] = STATE(32),
    [sym_type_import_on_declaraction] = STATE(32),
    [sym_single_static_import_declaration] = STATE(32),
    [sym_static_import_on_demand_declaration] = STATE(32),
    [sym_class_declaration] = STATE(31),
    [sym_normal_class_declaration] = STATE(33),
    [sym_modifier] = STATE(34),
    [sym_type_parameters] = STATE(35),
    [sym_interface_declaration] = STATE(31),
    [sym_annotation_type_declaration] = STATE(36),
    [sym_normal_interface_declaration] = STATE(36),
    [sym_method_header] = STATE(37),
    [sym_result] = STATE(38),
    [sym_method_declaration] = STATE(31),
    [aux_sym_class_or_interface_type_repeat1] = STATE(40),
    [aux_sym_normal_class_declaration_repeat1] = STATE(41),
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
    [anon_sym_AT] = ACTIONS(34),
    [anon_sym_open] = ACTIONS(36),
    [anon_sym_module] = ACTIONS(38),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_package] = ACTIONS(42),
    [anon_sym_import] = ACTIONS(44),
    [anon_sym_class] = ACTIONS(46),
    [anon_sym_public] = ACTIONS(40),
    [anon_sym_protected] = ACTIONS(40),
    [anon_sym_private] = ACTIONS(40),
    [anon_sym_abstract] = ACTIONS(40),
    [anon_sym_final] = ACTIONS(40),
    [anon_sym_strictfp] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_synchronized] = ACTIONS(40),
    [anon_sym_native] = ACTIONS(40),
    [anon_sym_void] = ACTIONS(48),
    [anon_sym_interface] = ACTIONS(50),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(54),
  },
  [1186] = {
    [anon_sym_if] = ACTIONS(2378),
    [anon_sym_RBRACE] = ACTIONS(2378),
    [anon_sym_elseif] = ACTIONS(2378),
    [anon_sym_AT] = ACTIONS(2378),
    [anon_sym_static] = ACTIONS(2378),
    [anon_sym_class] = ACTIONS(2378),
    [anon_sym_public] = ACTIONS(2378),
    [anon_sym_protected] = ACTIONS(2378),
    [anon_sym_private] = ACTIONS(2378),
    [anon_sym_abstract] = ACTIONS(2378),
    [anon_sym_final] = ACTIONS(2378),
    [anon_sym_strictfp] = ACTIONS(2378),
    [anon_sym_default] = ACTIONS(2378),
    [anon_sym_synchronized] = ACTIONS(2378),
    [anon_sym_native] = ACTIONS(2378),
    [sym_comment] = ACTIONS(54),
  },
  [1187] = {
    [anon_sym_if] = ACTIONS(986),
    [anon_sym_RBRACE] = ACTIONS(986),
    [anon_sym_elseif] = ACTIONS(986),
    [anon_sym_AT] = ACTIONS(986),
    [anon_sym_static] = ACTIONS(986),
    [anon_sym_class] = ACTIONS(986),
    [anon_sym_public] = ACTIONS(986),
    [anon_sym_protected] = ACTIONS(986),
    [anon_sym_private] = ACTIONS(986),
    [anon_sym_abstract] = ACTIONS(986),
    [anon_sym_final] = ACTIONS(986),
    [anon_sym_strictfp] = ACTIONS(986),
    [anon_sym_default] = ACTIONS(986),
    [anon_sym_synchronized] = ACTIONS(986),
    [anon_sym_native] = ACTIONS(986),
    [sym_comment] = ACTIONS(54),
  },
  [1188] = {
    [sym__annotation] = STATE(356),
    [sym_normal_annotation] = STATE(360),
    [sym_marker_annotation] = STATE(360),
    [sym_single_element_annotation] = STATE(360),
    [sym_class_declaration] = STATE(361),
    [sym_normal_class_declaration] = STATE(362),
    [sym_modifier] = STATE(363),
    [sym_interface_declaration] = STATE(361),
    [sym_annotation_type_declaration] = STATE(364),
    [sym_annotation_type_member_declaration] = STATE(505),
    [sym_annotation_type_element_declaration] = STATE(361),
    [sym_normal_interface_declaration] = STATE(364),
    [sym_constant_declaration] = STATE(361),
    [sym_variable_declarator_list] = STATE(366),
    [sym_variable_declarator] = STATE(282),
    [sym_variable_declarator_id] = STATE(126),
    [aux_sym_normal_class_declaration_repeat1] = STATE(367),
    [anon_sym_RBRACE] = ACTIONS(2380),
    [anon_sym_AT] = ACTIONS(714),
    [anon_sym_static] = ACTIONS(716),
    [anon_sym_class] = ACTIONS(718),
    [anon_sym_public] = ACTIONS(716),
    [anon_sym_protected] = ACTIONS(716),
    [anon_sym_private] = ACTIONS(716),
    [anon_sym_abstract] = ACTIONS(716),
    [anon_sym_final] = ACTIONS(716),
    [anon_sym_strictfp] = ACTIONS(716),
    [anon_sym_default] = ACTIONS(716),
    [anon_sym_synchronized] = ACTIONS(716),
    [anon_sym_native] = ACTIONS(716),
    [anon_sym_interface] = ACTIONS(720),
    [sym_identifier] = ACTIONS(722),
    [sym_comment] = ACTIONS(54),
  },
  [1189] = {
    [anon_sym_if] = ACTIONS(1046),
    [anon_sym_RBRACE] = ACTIONS(1046),
    [anon_sym_elseif] = ACTIONS(1046),
    [anon_sym_AT] = ACTIONS(1046),
    [anon_sym_static] = ACTIONS(1046),
    [anon_sym_class] = ACTIONS(1046),
    [anon_sym_public] = ACTIONS(1046),
    [anon_sym_protected] = ACTIONS(1046),
    [anon_sym_private] = ACTIONS(1046),
    [anon_sym_abstract] = ACTIONS(1046),
    [anon_sym_final] = ACTIONS(1046),
    [anon_sym_strictfp] = ACTIONS(1046),
    [anon_sym_default] = ACTIONS(1046),
    [anon_sym_synchronized] = ACTIONS(1046),
    [anon_sym_native] = ACTIONS(1046),
    [sym_comment] = ACTIONS(54),
  },
  [1190] = {
    [sym_module_directive] = STATE(386),
    [anon_sym_RBRACE] = ACTIONS(2382),
    [anon_sym_requires] = ACTIONS(500),
    [anon_sym_exports] = ACTIONS(502),
    [anon_sym_opens] = ACTIONS(502),
    [anon_sym_uses] = ACTIONS(504),
    [anon_sym_provides] = ACTIONS(506),
    [sym_comment] = ACTIONS(54),
  },
  [1191] = {
    [sym__semicolon] = ACTIONS(2384),
    [sym_comment] = ACTIONS(54),
  },
  [1192] = {
    [sym__semicolon] = ACTIONS(2386),
    [anon_sym_DOT] = ACTIONS(744),
    [sym_comment] = ACTIONS(54),
  },
  [1193] = {
    [anon_sym_if] = ACTIONS(1086),
    [anon_sym_RBRACE] = ACTIONS(1086),
    [anon_sym_elseif] = ACTIONS(1086),
    [anon_sym_AT] = ACTIONS(1086),
    [anon_sym_static] = ACTIONS(1086),
    [anon_sym_class] = ACTIONS(1086),
    [anon_sym_public] = ACTIONS(1086),
    [anon_sym_protected] = ACTIONS(1086),
    [anon_sym_private] = ACTIONS(1086),
    [anon_sym_abstract] = ACTIONS(1086),
    [anon_sym_final] = ACTIONS(1086),
    [anon_sym_strictfp] = ACTIONS(1086),
    [anon_sym_default] = ACTIONS(1086),
    [anon_sym_synchronized] = ACTIONS(1086),
    [anon_sym_native] = ACTIONS(1086),
    [sym_comment] = ACTIONS(54),
  },
  [1194] = {
    [anon_sym_if] = ACTIONS(1180),
    [anon_sym_RBRACE] = ACTIONS(1180),
    [anon_sym_elseif] = ACTIONS(1180),
    [anon_sym_AT] = ACTIONS(1180),
    [anon_sym_static] = ACTIONS(1180),
    [anon_sym_class] = ACTIONS(1180),
    [anon_sym_public] = ACTIONS(1180),
    [anon_sym_protected] = ACTIONS(1180),
    [anon_sym_private] = ACTIONS(1180),
    [anon_sym_abstract] = ACTIONS(1180),
    [anon_sym_final] = ACTIONS(1180),
    [anon_sym_strictfp] = ACTIONS(1180),
    [anon_sym_default] = ACTIONS(1180),
    [anon_sym_synchronized] = ACTIONS(1180),
    [anon_sym_native] = ACTIONS(1180),
    [sym_comment] = ACTIONS(54),
  },
  [1195] = {
    [anon_sym_if] = ACTIONS(1192),
    [anon_sym_RBRACE] = ACTIONS(1192),
    [anon_sym_elseif] = ACTIONS(1192),
    [anon_sym_AT] = ACTIONS(1192),
    [anon_sym_static] = ACTIONS(1192),
    [anon_sym_class] = ACTIONS(1192),
    [anon_sym_public] = ACTIONS(1192),
    [anon_sym_protected] = ACTIONS(1192),
    [anon_sym_private] = ACTIONS(1192),
    [anon_sym_abstract] = ACTIONS(1192),
    [anon_sym_final] = ACTIONS(1192),
    [anon_sym_strictfp] = ACTIONS(1192),
    [anon_sym_default] = ACTIONS(1192),
    [anon_sym_synchronized] = ACTIONS(1192),
    [anon_sym_native] = ACTIONS(1192),
    [sym_comment] = ACTIONS(54),
  },
  [1196] = {
    [sym_module_directive] = STATE(247),
    [aux_sym_module_declaration_repeat1] = STATE(1217),
    [anon_sym_RBRACE] = ACTIONS(2382),
    [anon_sym_requires] = ACTIONS(500),
    [anon_sym_exports] = ACTIONS(502),
    [anon_sym_opens] = ACTIONS(502),
    [anon_sym_uses] = ACTIONS(504),
    [anon_sym_provides] = ACTIONS(506),
    [sym_comment] = ACTIONS(54),
  },
  [1197] = {
    [anon_sym_if] = ACTIONS(1258),
    [anon_sym_RBRACE] = ACTIONS(1258),
    [anon_sym_elseif] = ACTIONS(1258),
    [anon_sym_AT] = ACTIONS(1258),
    [anon_sym_static] = ACTIONS(1258),
    [anon_sym_class] = ACTIONS(1258),
    [anon_sym_public] = ACTIONS(1258),
    [anon_sym_protected] = ACTIONS(1258),
    [anon_sym_private] = ACTIONS(1258),
    [anon_sym_abstract] = ACTIONS(1258),
    [anon_sym_final] = ACTIONS(1258),
    [anon_sym_strictfp] = ACTIONS(1258),
    [anon_sym_default] = ACTIONS(1258),
    [anon_sym_synchronized] = ACTIONS(1258),
    [anon_sym_native] = ACTIONS(1258),
    [sym_comment] = ACTIONS(54),
  },
  [1198] = {
    [anon_sym_if] = ACTIONS(1264),
    [anon_sym_RBRACE] = ACTIONS(1264),
    [anon_sym_elseif] = ACTIONS(1264),
    [anon_sym_AT] = ACTIONS(1264),
    [anon_sym_static] = ACTIONS(1264),
    [anon_sym_class] = ACTIONS(1264),
    [anon_sym_public] = ACTIONS(1264),
    [anon_sym_protected] = ACTIONS(1264),
    [anon_sym_private] = ACTIONS(1264),
    [anon_sym_abstract] = ACTIONS(1264),
    [anon_sym_final] = ACTIONS(1264),
    [anon_sym_strictfp] = ACTIONS(1264),
    [anon_sym_default] = ACTIONS(1264),
    [anon_sym_synchronized] = ACTIONS(1264),
    [anon_sym_native] = ACTIONS(1264),
    [sym_comment] = ACTIONS(54),
  },
  [1199] = {
    [sym_interface_body] = STATE(1218),
    [anon_sym_LBRACE] = ACTIONS(2064),
    [sym_comment] = ACTIONS(54),
  },
  [1200] = {
    [sym_lambda_expression] = STATE(1097),
    [sym__lambda_parameters] = STATE(26),
    [sym_unary_expression] = STATE(509),
    [sym_conditional_expression] = STATE(1097),
    [sym_conditional_or_expression] = STATE(956),
    [sym_conditional_and_expression] = STATE(957),
    [sym_inclusive_or_expression] = STATE(958),
    [sym_exclusive_or_expression] = STATE(959),
    [sym_and_expression] = STATE(515),
    [sym_relational_expression] = STATE(960),
    [sym_equality_expression] = STATE(961),
    [sym_shift_expression] = STATE(962),
    [sym_additive_expression] = STATE(963),
    [sym_multiplicative_expression] = STATE(964),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1868),
    [anon_sym_TILDE] = ACTIONS(1868),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1201] = {
    [anon_sym_GT] = ACTIONS(1874),
    [anon_sym_LT] = ACTIONS(1874),
    [anon_sym_EQ_EQ] = ACTIONS(1876),
    [anon_sym_GT_EQ] = ACTIONS(1876),
    [anon_sym_LT_EQ] = ACTIONS(1876),
    [anon_sym_BANG_EQ] = ACTIONS(1876),
    [anon_sym_AMP_AMP] = ACTIONS(2244),
    [anon_sym_PIPE_PIPE] = ACTIONS(2282),
    [anon_sym_PLUS] = ACTIONS(2242),
    [anon_sym_DASH] = ACTIONS(2242),
    [anon_sym_STAR] = ACTIONS(2238),
    [anon_sym_SLASH] = ACTIONS(2240),
    [anon_sym_AMP] = ACTIONS(1878),
    [anon_sym_PIPE] = ACTIONS(2284),
    [anon_sym_CARET] = ACTIONS(2282),
    [anon_sym_PERCENT] = ACTIONS(2238),
    [anon_sym_LT_LT] = ACTIONS(2238),
    [anon_sym_GT_GT] = ACTIONS(2240),
    [anon_sym_GT_GT_GT] = ACTIONS(2238),
    [anon_sym_COMMA] = ACTIONS(1200),
    [anon_sym_QMARK] = ACTIONS(2288),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(1200),
    [sym_comment] = ACTIONS(54),
  },
  [1202] = {
    [anon_sym_DOT] = ACTIONS(2388),
    [anon_sym_LBRACK] = ACTIONS(2388),
    [anon_sym_COLON_COLON] = ACTIONS(2388),
    [sym_comment] = ACTIONS(54),
  },
  [1203] = {
    [anon_sym_COMMA] = ACTIONS(2390),
    [anon_sym_RBRACE] = ACTIONS(2390),
    [anon_sym_DOT] = ACTIONS(2390),
    [anon_sym_COLON_COLON] = ACTIONS(2390),
    [sym_comment] = ACTIONS(54),
  },
  [1204] = {
    [anon_sym_COMMA] = ACTIONS(2392),
    [anon_sym_RBRACE] = ACTIONS(2392),
    [sym_comment] = ACTIONS(54),
  },
  [1205] = {
    [sym__expression] = STATE(1113),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_variable_initializer] = STATE(1220),
    [sym_array_initializer] = STATE(1115),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(1640),
    [anon_sym_TILDE] = ACTIONS(1640),
    [anon_sym_PLUS_PLUS] = ACTIONS(1642),
    [anon_sym_DASH_DASH] = ACTIONS(1642),
    [anon_sym_LBRACE] = ACTIONS(1986),
    [anon_sym_RBRACE] = ACTIONS(2394),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1206] = {
    [anon_sym_GT] = ACTIONS(1992),
    [anon_sym_LT] = ACTIONS(1992),
    [anon_sym_EQ_EQ] = ACTIONS(1994),
    [anon_sym_GT_EQ] = ACTIONS(1994),
    [anon_sym_LT_EQ] = ACTIONS(1994),
    [anon_sym_BANG_EQ] = ACTIONS(1994),
    [anon_sym_AMP_AMP] = ACTIONS(1996),
    [anon_sym_PIPE_PIPE] = ACTIONS(1998),
    [anon_sym_PLUS] = ACTIONS(2000),
    [anon_sym_DASH] = ACTIONS(2000),
    [anon_sym_STAR] = ACTIONS(2002),
    [anon_sym_SLASH] = ACTIONS(2004),
    [anon_sym_AMP] = ACTIONS(2006),
    [anon_sym_PIPE] = ACTIONS(2008),
    [anon_sym_CARET] = ACTIONS(1998),
    [anon_sym_PERCENT] = ACTIONS(2002),
    [anon_sym_LT_LT] = ACTIONS(2002),
    [anon_sym_GT_GT] = ACTIONS(2004),
    [anon_sym_GT_GT_GT] = ACTIONS(2002),
    [anon_sym_QMARK] = ACTIONS(2010),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(1200),
    [sym_comment] = ACTIONS(54),
  },
  [1207] = {
    [anon_sym_DOT] = ACTIONS(2396),
    [anon_sym_LBRACK] = ACTIONS(2396),
    [anon_sym_COLON_COLON] = ACTIONS(2396),
    [sym_comment] = ACTIONS(54),
  },
  [1208] = {
    [anon_sym_RPAREN] = ACTIONS(2398),
    [sym_comment] = ACTIONS(54),
  },
  [1209] = {
    [sym__expression] = STATE(867),
    [sym_binary_expression] = STATE(25),
    [sym_lambda_expression] = STATE(25),
    [sym__lambda_parameters] = STATE(26),
    [sym_ternary_expression] = STATE(25),
    [sym_unary_expression] = STATE(27),
    [sym_update_expression] = STATE(25),
    [sym_argument_list] = STATE(1222),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(2398),
    [anon_sym_BANG] = ACTIONS(1336),
    [anon_sym_TILDE] = ACTIONS(1336),
    [anon_sym_PLUS_PLUS] = ACTIONS(1338),
    [anon_sym_DASH_DASH] = ACTIONS(1338),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(54),
  },
  [1210] = {
    [anon_sym_if] = ACTIONS(2400),
    [anon_sym_RBRACE] = ACTIONS(2400),
    [anon_sym_AT] = ACTIONS(2400),
    [anon_sym_static] = ACTIONS(2400),
    [anon_sym_class] = ACTIONS(2400),
    [anon_sym_public] = ACTIONS(2400),
    [anon_sym_protected] = ACTIONS(2400),
    [anon_sym_private] = ACTIONS(2400),
    [anon_sym_abstract] = ACTIONS(2400),
    [anon_sym_final] = ACTIONS(2400),
    [anon_sym_strictfp] = ACTIONS(2400),
    [anon_sym_default] = ACTIONS(2400),
    [anon_sym_synchronized] = ACTIONS(2400),
    [anon_sym_native] = ACTIONS(2400),
    [sym_comment] = ACTIONS(54),
  },
  [1211] = {
    [sym__semicolon] = ACTIONS(2402),
    [sym_comment] = ACTIONS(54),
  },
  [1212] = {
    [anon_sym_RBRACE] = ACTIONS(2404),
    [sym_comment] = ACTIONS(54),
  },
  [1213] = {
    [anon_sym_if] = ACTIONS(1324),
    [anon_sym_RBRACE] = ACTIONS(1324),
    [anon_sym_elseif] = ACTIONS(1324),
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
    [anon_sym_synchronized] = ACTIONS(1324),
    [anon_sym_native] = ACTIONS(1324),
    [sym_comment] = ACTIONS(54),
  },
  [1214] = {
    [anon_sym_if] = ACTIONS(1412),
    [anon_sym_RBRACE] = ACTIONS(1412),
    [anon_sym_elseif] = ACTIONS(1412),
    [anon_sym_AT] = ACTIONS(1412),
    [anon_sym_static] = ACTIONS(1412),
    [anon_sym_class] = ACTIONS(1412),
    [anon_sym_public] = ACTIONS(1412),
    [anon_sym_protected] = ACTIONS(1412),
    [anon_sym_private] = ACTIONS(1412),
    [anon_sym_abstract] = ACTIONS(1412),
    [anon_sym_final] = ACTIONS(1412),
    [anon_sym_strictfp] = ACTIONS(1412),
    [anon_sym_default] = ACTIONS(1412),
    [anon_sym_synchronized] = ACTIONS(1412),
    [anon_sym_native] = ACTIONS(1412),
    [sym_comment] = ACTIONS(54),
  },
  [1215] = {
    [anon_sym_if] = ACTIONS(1434),
    [anon_sym_RBRACE] = ACTIONS(1434),
    [anon_sym_elseif] = ACTIONS(1434),
    [anon_sym_AT] = ACTIONS(1434),
    [anon_sym_static] = ACTIONS(1434),
    [anon_sym_class] = ACTIONS(1434),
    [anon_sym_public] = ACTIONS(1434),
    [anon_sym_protected] = ACTIONS(1434),
    [anon_sym_private] = ACTIONS(1434),
    [anon_sym_abstract] = ACTIONS(1434),
    [anon_sym_final] = ACTIONS(1434),
    [anon_sym_strictfp] = ACTIONS(1434),
    [anon_sym_default] = ACTIONS(1434),
    [anon_sym_synchronized] = ACTIONS(1434),
    [anon_sym_native] = ACTIONS(1434),
    [sym_comment] = ACTIONS(54),
  },
  [1216] = {
    [anon_sym_if] = ACTIONS(1440),
    [anon_sym_RBRACE] = ACTIONS(1440),
    [anon_sym_elseif] = ACTIONS(1440),
    [anon_sym_AT] = ACTIONS(1440),
    [anon_sym_static] = ACTIONS(1440),
    [anon_sym_class] = ACTIONS(1440),
    [anon_sym_public] = ACTIONS(1440),
    [anon_sym_protected] = ACTIONS(1440),
    [anon_sym_private] = ACTIONS(1440),
    [anon_sym_abstract] = ACTIONS(1440),
    [anon_sym_final] = ACTIONS(1440),
    [anon_sym_strictfp] = ACTIONS(1440),
    [anon_sym_default] = ACTIONS(1440),
    [anon_sym_synchronized] = ACTIONS(1440),
    [anon_sym_native] = ACTIONS(1440),
    [sym_comment] = ACTIONS(54),
  },
  [1217] = {
    [sym_module_directive] = STATE(386),
    [anon_sym_RBRACE] = ACTIONS(2406),
    [anon_sym_requires] = ACTIONS(500),
    [anon_sym_exports] = ACTIONS(502),
    [anon_sym_opens] = ACTIONS(502),
    [anon_sym_uses] = ACTIONS(504),
    [anon_sym_provides] = ACTIONS(506),
    [sym_comment] = ACTIONS(54),
  },
  [1218] = {
    [anon_sym_if] = ACTIONS(1584),
    [anon_sym_RBRACE] = ACTIONS(1584),
    [anon_sym_elseif] = ACTIONS(1584),
    [anon_sym_AT] = ACTIONS(1584),
    [anon_sym_static] = ACTIONS(1584),
    [anon_sym_class] = ACTIONS(1584),
    [anon_sym_public] = ACTIONS(1584),
    [anon_sym_protected] = ACTIONS(1584),
    [anon_sym_private] = ACTIONS(1584),
    [anon_sym_abstract] = ACTIONS(1584),
    [anon_sym_final] = ACTIONS(1584),
    [anon_sym_strictfp] = ACTIONS(1584),
    [anon_sym_default] = ACTIONS(1584),
    [anon_sym_synchronized] = ACTIONS(1584),
    [anon_sym_native] = ACTIONS(1584),
    [sym_comment] = ACTIONS(54),
  },
  [1219] = {
    [anon_sym_COMMA] = ACTIONS(2408),
    [anon_sym_RBRACE] = ACTIONS(2408),
    [anon_sym_DOT] = ACTIONS(2408),
    [anon_sym_COLON_COLON] = ACTIONS(2408),
    [sym_comment] = ACTIONS(54),
  },
  [1220] = {
    [anon_sym_COMMA] = ACTIONS(2410),
    [anon_sym_RBRACE] = ACTIONS(2410),
    [sym_comment] = ACTIONS(54),
  },
  [1221] = {
    [anon_sym_DOT] = ACTIONS(2412),
    [anon_sym_LBRACK] = ACTIONS(2412),
    [anon_sym_COLON_COLON] = ACTIONS(2412),
    [sym_comment] = ACTIONS(54),
  },
  [1222] = {
    [anon_sym_RPAREN] = ACTIONS(2414),
    [sym_comment] = ACTIONS(54),
  },
  [1223] = {
    [anon_sym_if] = ACTIONS(2416),
    [anon_sym_RBRACE] = ACTIONS(2416),
    [anon_sym_AT] = ACTIONS(2416),
    [anon_sym_static] = ACTIONS(2416),
    [anon_sym_class] = ACTIONS(2416),
    [anon_sym_public] = ACTIONS(2416),
    [anon_sym_protected] = ACTIONS(2416),
    [anon_sym_private] = ACTIONS(2416),
    [anon_sym_abstract] = ACTIONS(2416),
    [anon_sym_final] = ACTIONS(2416),
    [anon_sym_strictfp] = ACTIONS(2416),
    [anon_sym_default] = ACTIONS(2416),
    [anon_sym_synchronized] = ACTIONS(2416),
    [anon_sym_native] = ACTIONS(2416),
    [sym_comment] = ACTIONS(54),
  },
  [1224] = {
    [anon_sym_if] = ACTIONS(2418),
    [anon_sym_RBRACE] = ACTIONS(2418),
    [anon_sym_elseif] = ACTIONS(2418),
    [anon_sym_AT] = ACTIONS(2418),
    [anon_sym_static] = ACTIONS(2418),
    [anon_sym_class] = ACTIONS(2418),
    [anon_sym_public] = ACTIONS(2418),
    [anon_sym_protected] = ACTIONS(2418),
    [anon_sym_private] = ACTIONS(2418),
    [anon_sym_abstract] = ACTIONS(2418),
    [anon_sym_final] = ACTIONS(2418),
    [anon_sym_strictfp] = ACTIONS(2418),
    [anon_sym_default] = ACTIONS(2418),
    [anon_sym_synchronized] = ACTIONS(2418),
    [anon_sym_native] = ACTIONS(2418),
    [sym_comment] = ACTIONS(54),
  },
  [1225] = {
    [anon_sym_if] = ACTIONS(1828),
    [anon_sym_RBRACE] = ACTIONS(1828),
    [anon_sym_elseif] = ACTIONS(1828),
    [anon_sym_AT] = ACTIONS(1828),
    [anon_sym_static] = ACTIONS(1828),
    [anon_sym_class] = ACTIONS(1828),
    [anon_sym_public] = ACTIONS(1828),
    [anon_sym_protected] = ACTIONS(1828),
    [anon_sym_private] = ACTIONS(1828),
    [anon_sym_abstract] = ACTIONS(1828),
    [anon_sym_final] = ACTIONS(1828),
    [anon_sym_strictfp] = ACTIONS(1828),
    [anon_sym_default] = ACTIONS(1828),
    [anon_sym_synchronized] = ACTIONS(1828),
    [anon_sym_native] = ACTIONS(1828),
    [sym_comment] = ACTIONS(54),
  },
  [1226] = {
    [anon_sym_DOT] = ACTIONS(2420),
    [anon_sym_LBRACK] = ACTIONS(2420),
    [anon_sym_COLON_COLON] = ACTIONS(2420),
    [sym_comment] = ACTIONS(54),
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
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_literal, 1),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_modifier, 1, .fragile = true),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_result, 1),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__lambda_parameters, 1),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1, .fragile = true),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1, .fragile = true),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 1),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 1),
  [158] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true), REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__annotation, 1),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__annotation, 1),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 1),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_statement, 1),
  [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_statement, 1),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 1),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 1),
  [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 1),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 1),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_normal_class_declaration_repeat1, 1),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 1),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_declaration, 1),
  [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_declaration, 1),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 2),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 1),
  [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(109),
  [231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(110),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 1),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inferred_formal_parameter_list, 1),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 1, .fragile = true),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_primitive_type, 1, .fragile = true),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integral_type, 1),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integral_type, 1),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_type, 1),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_floating_point_type, 1),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 1),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [275] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_modifier, 1, .fragile = true), REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [278] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__annotation, 1),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 1),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 1),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [296] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(136),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unary_expression, 2),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unary_expression, 2),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_update_expression, 2),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_update_expression, 2),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_or_type_name, 1),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_marker_annotation, 2),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_marker_annotation, 2),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 1),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [354] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_body, 1),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_body, 1),
  [368] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_body, 1),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 2),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_declaration, 2),
  [384] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 2),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 2),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [396] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 2),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_normal_class_declaration_repeat1, 2),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [416] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 2),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 2),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameters, 3),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 2),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inferred_formal_parameter_list, 2),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [440] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [446] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_marker_annotation, 2),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_id, 1),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 2),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__lambda_parameters, 3),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter, 2),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 2),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_primitive_type, 2),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 2),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
  [476] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat1, 2),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
  [486] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(234),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 2),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 3),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 3),
  [512] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 3),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_type_import_declaration, 3),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_type_import_declaration, 3),
  [522] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_type_import_declaration, 3),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(258),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [542] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(260),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 3),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 3),
  [548] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 3),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
  [554] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(124),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 3),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 3),
  [560] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 3),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 3),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(288),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(289),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(290),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(295),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(300),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_lambda_expression, 3),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_lambda_expression, 3),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 3),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 2),
  [620] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
  [624] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statement, 1),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statements, 1),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(323),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 3),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_method_declaration, 3),
  [650] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_method_declaration, 3),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
  [654] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(327),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(330),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 1, .fragile = true),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_bound, 2),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 3),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_inferred_formal_parameter_list_repeat1, 2),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_inferred_formal_parameter_list_repeat1, 2),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
  [682] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(341),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(344),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_id, 2),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims, 1),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 2),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 3),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 3),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 3),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_formal_parameter, 3),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(357),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [722] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(359),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 4),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_declaration, 4),
  [728] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 4),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_annotation, 4),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(369),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(371),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 1),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(372),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_or_type_name, 3),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(374),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 2),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(376),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [756] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 4),
  [758] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
  [762] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(378),
  [764] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(382),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat1, 1),
  [768] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 4),
  [770] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 4),
  [772] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 4),
  [774] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(387),
  [776] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(388),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(389),
  [780] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_member_declaration, 1),
  [782] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_member_declaration, 1),
  [784] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_member_declaration, 1),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(391),
  [788] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body, 2),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body, 2),
  [792] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body, 2),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(393),
  [796] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(394),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(396),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(397),
  [802] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 1),
  [804] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(399),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 1),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_body_repeat1, 1),
  [810] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 1),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body_declaration, 1),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body_declaration, 1),
  [816] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body_declaration, 1),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(400),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(403),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(405),
  [824] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(406),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(407),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
  [830] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_superclass, 2),
  [832] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(413),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_type_list, 1),
  [836] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_super_interfaces, 2),
  [838] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 4),
  [840] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 4),
  [842] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 4),
  [844] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_member_declaration, 1),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_member_declaration, 1),
  [848] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_member_declaration, 1),
  [850] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 2),
  [852] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_body, 2),
  [854] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 2),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [860] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 1),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_list, 1),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(421),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_extends_interfaces, 2),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 4),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 4),
  [876] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 4),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_lambda_body, 2),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_lambda_body, 2),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 4),
  [884] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(436),
  [886] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(437),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(440),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(441),
  [894] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_local_variable_declaration, 2),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 3),
  [900] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [902] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_block_statements_repeat1, 1),
  [904] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block_statements, 2),
  [906] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_local_variable_declaration_statement, 2),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(447),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 3),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(449),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(450),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(451),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 1, .fragile = true),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(454),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_throws, 2),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type_list, 1),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(457),
  [928] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(459),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(460),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(461),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(465),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(466),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(467),
  [940] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(205),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(475),
  [944] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 2),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(478),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_bound, 3),
  [950] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(480),
  [952] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
  [954] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_inferred_formal_parameter_list_repeat1, 3),
  [956] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_inferred_formal_parameter_list_repeat1, 3),
  [958] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(482),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(483),
  [964] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [966] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 2),
  [968] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(484),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(485),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_formal_parameters_repeat1, 3),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__formal_parameter_list, 4),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(486),
  [978] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(487),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(490),
  [982] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_receiver_parameter, 4),
  [984] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_last_formal_parameter, 4),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 2),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_body, 2),
  [990] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 2),
  [992] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(491),
  [994] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(492),
  [996] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(494),
  [998] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(495),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(496),
  [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_member_declaration, 1),
  [1004] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_member_declaration, 1),
  [1006] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_member_declaration, 1),
  [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [1012] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 1),
  [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(497),
  [1016] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(498),
  [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(499),
  [1020] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(500),
  [1022] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(501),
  [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(504),
  [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_element_annotation, 5),
  [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [1032] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(506),
  [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(507),
  [1036] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [1038] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_annotation, 5),
  [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(521),
  [1042] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 2),
  [1044] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(523),
  [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 5),
  [1048] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 5),
  [1050] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 5),
  [1052] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(524),
  [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 3),
  [1056] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_requires_modifier, 1),
  [1058] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_requires_modifier, 1),
  [1060] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 1),
  [1062] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_directive_repeat1, 1),
  [1064] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat1, 1),
  [1066] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(525),
  [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(526),
  [1070] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(529),
  [1072] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(530),
  [1074] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(531),
  [1076] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [1078] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(534),
  [1080] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat1, 2),
  [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(535),
  [1084] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(536),
  [1086] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_import_on_declaraction, 5),
  [1088] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_import_on_declaraction, 5),
  [1090] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_import_on_declaraction, 5),
  [1092] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(537),
  [1094] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(538),
  [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(539),
  [1098] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(540),
  [1100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(541),
  [1102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(542),
  [1104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(547),
  [1106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declarator, 2),
  [1108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(552),
  [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
  [1112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(553),
  [1114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(554),
  [1116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(555),
  [1118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
  [1120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [1122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(556),
  [1124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(557),
  [1126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(558),
  [1128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(559),
  [1130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(560),
  [1132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 2),
  [1134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_declaration, 2),
  [1136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 2),
  [1138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(579),
  [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(580),
  [1142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(581),
  [1144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_normal_class_declaration_repeat1, 2),
  [1146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_body, 3),
  [1148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_body, 3),
  [1150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_body, 3),
  [1152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 2),
  [1154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_body_repeat1, 2),
  [1156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_body_repeat1, 2),
  [1158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(585),
  [1160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_type_list, 2),
  [1162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 5),
  [1164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 5),
  [1166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 5),
  [1168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 2),
  [1170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constant_declaration, 2),
  [1172] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 2),
  [1174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator_list, 2),
  [1176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(588),
  [1178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(589),
  [1180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 3),
  [1182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_interface_body, 3),
  [1184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_interface_body, 3),
  [1186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [1188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [1190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [1192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 5),
  [1194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 5),
  [1196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 5),
  [1198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(590),
  [1200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [1202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(591),
  [1204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_header, 5),
  [1206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(592),
  [1208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(592),
  [1210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(593),
  [1212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(594),
  [1214] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(595),
  [1216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(596),
  [1218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(596),
  [1220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(593),
  [1222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(594),
  [1224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(597),
  [1226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(598),
  [1228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(599),
  [1230] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(600),
  [1232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(603),
  [1234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(604),
  [1236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_block_statements_repeat1, 2),
  [1238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 4),
  [1240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(612),
  [1242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 2),
  [1244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(615),
  [1246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_variable, 1, .fragile = true),
  [1248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type, 2),
  [1250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(616),
  [1252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exception_type_list_repeat1, 1),
  [1254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exception_type_list, 2),
  [1256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(617),
  [1258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 5),
  [1260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 5),
  [1262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 5),
  [1264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 5),
  [1266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_declaration, 5),
  [1268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_declaration, 5),
  [1270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(622),
  [1272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(624),
  [1274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(625),
  [1276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_argument, 1),
  [1278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reference_type, 1),
  [1280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(337),
  [1282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2, .fragile = true),
  [1284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(630),
  [1286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 3),
  [1288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [1290] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [1292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [1294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 3),
  [1296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(634),
  [1298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(635),
  [1300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(636),
  [1302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(637),
  [1304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(638),
  [1306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(639),
  [1308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(640),
  [1310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(645),
  [1312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(649),
  [1314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(650),
  [1316] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(651),
  [1318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(652),
  [1320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(653),
  [1322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(654),
  [1324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 3),
  [1326] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_body, 3),
  [1328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_body, 3),
  [1330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [1332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [1334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_annotation_type_body_repeat1, 2),
  [1336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(655),
  [1338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(656),
  [1340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(658),
  [1342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(659),
  [1344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(660),
  [1346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value, 1),
  [1348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 1),
  [1350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 1),
  [1352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair, 3),
  [1354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(671),
  [1356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 1),
  [1358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(672),
  [1360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(673),
  [1362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 1),
  [1364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 1),
  [1366] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(674),
  [1368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 1),
  [1370] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 1),
  [1372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(675),
  [1374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 1),
  [1376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 1),
  [1378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(676),
  [1380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 1),
  [1382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 1),
  [1384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 1),
  [1386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(677),
  [1388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 1),
  [1390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 1),
  [1392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(678),
  [1394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(678),
  [1396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 1),
  [1398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 1),
  [1400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(679),
  [1402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 1),
  [1404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 1),
  [1406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(680),
  [1408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(680),
  [1410] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 2),
  [1412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 6),
  [1414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 6),
  [1416] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 6),
  [1418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 3),
  [1420] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(682),
  [1422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [1424] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [1426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(683),
  [1428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(378),
  [1430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(685),
  [1432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(688),
  [1434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [1436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [1438] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static_import_on_demand_declaration, 6),
  [1440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_static_import_declaration, 6),
  [1442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_static_import_declaration, 6),
  [1444] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_static_import_declaration, 6),
  [1446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameters, 3),
  [1448] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_parameters, 3),
  [1450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(690),
  [1452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(692),
  [1454] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(693),
  [1456] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(696),
  [1458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(697),
  [1460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(702),
  [1462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declarator, 3),
  [1464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 2),
  [1466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_body, 2),
  [1468] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 2),
  [1470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(707),
  [1472] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primitive_type, 1, .fragile = true), SHIFT(708),
  [1475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(710),
  [1477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(712),
  [1479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primary_no_new_array, 1),
  [1481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(713),
  [1483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(714),
  [1485] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(715),
  [1487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_name, 1),
  [1489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(721),
  [1491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(722),
  [1493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(723),
  [1495] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_modifier, 1, .fragile = true), REDUCE(aux_sym_class_or_interface_type_repeat1, 1, .fragile = true),
  [1498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(728),
  [1500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(708),
  [1502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(729),
  [1504] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(731),
  [1506] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(732),
  [1508] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(733),
  [1510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primary, 1),
  [1512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_instance_creation_expression, 1),
  [1514] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(734),
  [1516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(735),
  [1518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 3),
  [1520] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_declaration, 3),
  [1522] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 3),
  [1524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(736),
  [1526] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_type_list_repeat1, 2),
  [1528] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 6),
  [1530] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 6),
  [1532] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 6),
  [1534] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declarator_list_repeat1, 2),
  [1536] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 3),
  [1538] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constant_declaration, 3),
  [1540] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constant_declaration, 3),
  [1542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_then_statement, 4, .fragile = true),
  [1544] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(748),
  [1546] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(749),
  [1548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(750),
  [1550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(751),
  [1552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(752),
  [1554] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(753),
  [1556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(754),
  [1558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(755),
  [1560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(756),
  [1562] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(769),
  [1564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(770),
  [1566] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(771),
  [1568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_declarator, 5),
  [1570] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(775),
  [1572] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2, .fragile = true),
  [1574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(778),
  [1576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 3),
  [1578] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_variable, 2, .fragile = true),
  [1580] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_exception_type_list_repeat1, 2),
  [1582] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(781),
  [1584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 6),
  [1586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_interface_declaration, 6),
  [1588] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_interface_declaration, 6),
  [1590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(783),
  [1592] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(784),
  [1594] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 3),
  [1596] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(786),
  [1598] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(787),
  [1600] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reference_type, 2),
  [1602] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3, .fragile = true),
  [1604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(789),
  [1606] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_bound_repeat1, 3),
  [1608] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type, 4),
  [1610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_repeat1, 4),
  [1612] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(790),
  [1614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(792),
  [1616] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(793),
  [1618] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(796),
  [1620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(797),
  [1622] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(802),
  [1624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(806),
  [1626] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(807),
  [1628] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(810),
  [1630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(813),
  [1632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(814),
  [1634] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(814),
  [1636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(815),
  [1638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(820),
  [1640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(821),
  [1642] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(822),
  [1644] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 2),
  [1646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(824),
  [1648] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(826),
  [1650] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(827),
  [1652] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(828),
  [1654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(829),
  [1656] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(830),
  [1658] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(831),
  [1660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(832),
  [1662] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(833),
  [1664] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(833),
  [1666] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(834),
  [1668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(835),
  [1670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(835),
  [1672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 3),
  [1674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 3),
  [1676] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 4),
  [1678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 2),
  [1680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(846),
  [1682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(849),
  [1684] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(851),
  [1686] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(853),
  [1688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(854),
  [1690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(855),
  [1692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(858),
  [1694] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(860),
  [1696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(861),
  [1698] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_literal_repeat1, 1),
  [1700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(862),
  [1702] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(863),
  [1704] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(864),
  [1706] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(865),
  [1708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(866),
  [1710] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(869),
  [1712] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(870),
  [1714] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(331),
  [1716] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 1),
  [1718] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(872),
  [1720] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(873),
  [1722] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(877),
  [1724] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(882),
  [1726] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(883),
  [1728] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(884),
  [1730] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(885),
  [1732] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(886),
  [1734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(870),
  [1736] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_type, 2),
  [1738] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 2),
  [1740] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_exprs, 1, .fragile = true),
  [1742] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(890),
  [1744] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(894),
  [1746] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(861),
  [1748] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(860),
  [1750] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(895),
  [1752] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(896),
  [1754] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 3),
  [1756] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_body, 3),
  [1758] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 3),
  [1760] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(898),
  [1762] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(899),
  [1764] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(900),
  [1766] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(901),
  [1768] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(902),
  [1770] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(906),
  [1772] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(907),
  [1774] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 4),
  [1776] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_declaration, 4),
  [1778] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_declaration, 4),
  [1780] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_interface_type_list_repeat1, 3),
  [1782] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declarator_list_repeat1, 3),
  [1784] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_then_statement, 5),
  [1786] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(912),
  [1788] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(913),
  [1790] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(915),
  [1792] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(916),
  [1794] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(918),
  [1796] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(919),
  [1798] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(921),
  [1800] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(922),
  [1802] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_then_statement_repeat1, 1),
  [1804] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(923),
  [1806] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(924),
  [1808] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(927),
  [1810] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(928),
  [1812] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(929),
  [1814] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(930),
  [1816] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(932),
  [1818] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_arguments, 3),
  [1820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(935),
  [1822] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3, .fragile = true),
  [1824] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(937),
  [1826] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_or_interface_type, 4),
  [1828] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [1830] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 7),
  [1832] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [1834] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 7),
  [1836] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_normal_class_declaration, 7),
  [1838] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_normal_class_declaration, 7),
  [1840] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(938),
  [1842] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(939),
  [1844] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(942),
  [1846] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [1848] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 4),
  [1850] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 4),
  [1852] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(945),
  [1854] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(947),
  [1856] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(948),
  [1858] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(949),
  [1860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(952),
  [1862] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 4),
  [1864] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 4),
  [1866] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 4),
  [1868] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(954),
  [1870] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(965),
  [1872] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 3),
  [1874] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(976),
  [1876] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(976),
  [1878] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(977),
  [1880] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(982),
  [1882] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(984),
  [1884] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 3),
  [1886] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(993),
  [1888] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 3),
  [1890] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 3),
  [1892] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 3),
  [1894] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 3),
  [1896] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 3),
  [1898] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [1900] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [1902] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 3),
  [1904] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 3),
  [1906] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 3),
  [1908] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 3),
  [1910] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 3),
  [1912] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 3),
  [1914] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 3),
  [1916] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 3),
  [1918] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 3),
  [1920] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 5),
  [1922] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(994),
  [1924] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 3),
  [1926] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(996),
  [1928] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(997),
  [1930] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_primary_no_new_array, 3),
  [1932] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_literal, 3),
  [1934] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(999),
  [1936] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_literal_repeat1, 2),
  [1938] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1000),
  [1940] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(1001),
  [1942] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1004),
  [1944] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1005),
  [1946] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(815),
  [1948] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(816),
  [1950] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(817),
  [1952] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(818),
  [1954] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(818),
  [1956] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(816),
  [1958] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 1),
  [1960] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1006),
  [1962] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(819),
  [1964] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1008),
  [1966] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_access, 3),
  [1968] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 3),
  [1970] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1009),
  [1972] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1010),
  [1974] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_arguments_or_diamond, 1),
  [1976] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 2),
  [1978] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1012),
  [1980] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1014),
  [1982] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1015),
  [1984] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1016),
  [1986] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1017),
  [1988] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 3),
  [1990] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1019),
  [1992] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1024),
  [1994] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1024),
  [1996] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1025),
  [1998] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1026),
  [2000] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1027),
  [2002] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1028),
  [2004] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1028),
  [2006] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1025),
  [2008] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1026),
  [2010] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1029),
  [2012] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1030),
  [2014] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1009),
  [2016] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_exprs_repeat1, 1),
  [2018] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1031),
  [2020] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_exprs, 2, .fragile = true),
  [2022] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1034),
  [2024] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1035),
  [2026] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1036),
  [2028] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1037),
  [2030] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 4),
  [2032] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_body, 4),
  [2034] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_body, 4),
  [2036] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1039),
  [2038] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ambiguous_name, 3),
  [2040] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1040),
  [2042] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(1037),
  [2044] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_instance_creation_expression, 3),
  [2046] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1041),
  [2048] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 3),
  [2050] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1042),
  [2052] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 2),
  [2054] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1047),
  [2056] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1049),
  [2058] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1050),
  [2060] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1053),
  [2062] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1054),
  [2064] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1055),
  [2066] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1059),
  [2068] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_then_statement_repeat1, 2),
  [2070] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1061),
  [2072] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1062),
  [2074] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1063),
  [2076] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1064),
  [2078] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_arguments, 4),
  [2080] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 4),
  [2082] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1069),
  [2084] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1070),
  [2086] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_arguments_repeat1, 3),
  [2088] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 5),
  [2090] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1071),
  [2092] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default_value, 2),
  [2094] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1074),
  [2096] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1075),
  [2098] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1076),
  [2100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1077),
  [2102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1078),
  [2104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1079),
  [2106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1080),
  [2108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1081),
  [2110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1081),
  [2112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1082),
  [2114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1083),
  [2116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1083),
  [2118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 5),
  [2120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 5),
  [2122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 5),
  [2124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1084),
  [2126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1088),
  [2128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 4),
  [2130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 2),
  [2132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1094),
  [2134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1096),
  [2136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 6),
  [2138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat3, 2),
  [2140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_literal, 4),
  [2142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1099),
  [2144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1100),
  [2146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 4),
  [2148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2),
  [2150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1102),
  [2152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1103),
  [2154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 4),
  [2156] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true), SHIFT(331),
  [2159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true),
  [2161] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 2, .fragile = true), REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true),
  [2164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1104),
  [2166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1105),
  [2168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 3),
  [2170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1107),
  [2172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1109),
  [2174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1111),
  [2176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1112),
  [2178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 4),
  [2180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 4),
  [2182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1118),
  [2184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_expr, 3),
  [2186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_dims_exprs_repeat1, 2),
  [2188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1124),
  [2190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1125),
  [2192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1127),
  [2194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1129),
  [2196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1131),
  [2198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1132),
  [2200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1135),
  [2202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_access, 4),
  [2204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 4),
  [2206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1137),
  [2208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1138),
  [2210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1139),
  [2212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1141),
  [2214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1142),
  [2216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1144),
  [2218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1145),
  [2220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1146),
  [2222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1147),
  [2224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1151),
  [2226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1154),
  [2228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_repeat2, 5),
  [2230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 6),
  [2232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 6),
  [2234] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 6),
  [2236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1165),
  [2238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(980),
  [2240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(980),
  [2242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(979),
  [2244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(977),
  [2246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1167),
  [2248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 5),
  [2250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 3),
  [2252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 5),
  [2254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat3, 3),
  [2256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [2258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 5),
  [2260] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true), SHIFT(331),
  [2263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true),
  [2265] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_repeat2, 3, .fragile = true), REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true),
  [2268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 3, .fragile = true),
  [2270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1169),
  [2272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 2, .fragile = true),
  [2274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 5),
  [2276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1171),
  [2278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1172),
  [2280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 2),
  [2282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(978),
  [2284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(978),
  [2286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_initializer, 1),
  [2288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(981),
  [2290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1173),
  [2292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_or_interface_type_to_instantiate, 4),
  [2294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1175),
  [2296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1176),
  [2298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dims_expr, 4),
  [2300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1177),
  [2302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_access, 5),
  [2304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1178),
  [2306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 5),
  [2308] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1179),
  [2310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 5),
  [2312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1180),
  [2314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 3),
  [2316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1182),
  [2318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1183),
  [2320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1185),
  [2322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_clause, 4),
  [2324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1187),
  [2326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1189),
  [2328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1191),
  [2330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(1192),
  [2332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1193),
  [2334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1194),
  [2336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1196),
  [2338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1197),
  [2340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1200),
  [2342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 7),
  [2344] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_annotation_type_element_declaration, 7),
  [2346] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_annotation_type_element_declaration, 7),
  [2348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 3),
  [2350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 4),
  [2352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_or_interface_type_to_instantiate_repeat1, 4),
  [2354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 6),
  [2356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 3),
  [2358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1203),
  [2360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1205),
  [2362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 6),
  [2364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1207),
  [2366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1209),
  [2368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_reference, 6),
  [2370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 6),
  [2372] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_arguments, 4),
  [2374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1210),
  [2376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1211),
  [2378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_if_clause, 5),
  [2380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1213),
  [2382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1214),
  [2384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1215),
  [2386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1216),
  [2388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unqualified_class_instance_creation_expression, 7),
  [2390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 4),
  [2392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_initializer_repeat1, 2),
  [2394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1219),
  [2396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 7),
  [2398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1221),
  [2400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 7),
  [2402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1223),
  [2404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1224),
  [2406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1225),
  [2408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_initializer, 5),
  [2410] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_initializer_repeat1, 3),
  [2412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 8),
  [2414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(1226),
  [2416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_explicit_constructor_invocation, 8),
  [2418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_if_clause, 7),
  [2420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_method_invocation, 9),
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
